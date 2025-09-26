/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32L4Q5_PWR_HPP
#define EMBEDDED_PP_STM32L4Q5_PWR_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Power control */
namespace STM32L4Q5::PWR {

    /** @brief Power control register 1 */
    using PWR_CR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Low-power mode selection These bits select the low-power mode entered when CPU enters the Deepsleep mode. 1xx: Shutdown mode Note: If LPR bit is set, Stop 2 mode cannot be selected and Stop 1 mode shall be entered instead of Stop 2. Note: In Standby mode, SRAM2 can be preserved or not, depending on RRS bit configuration in PWR_CR3. */
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

    /** @brief SRAM3 retention in Stop 2 mode */
    using PWR_CR1_RRSTP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM3 is powered off in Stop 2 mode (SRAM3 content is lost) (value: 0)
     *          - B_0x1: SRAM3 is powered in Stop 2 mode (RAM3 content is kept). (value: 1)
     */
        /** @brief SRAM3 is powered off in Stop 2 mode (SRAM3 content is lost) */
    constexpr std::uint32_t PWR_CR1_RRSTP_B_0x0 = 0;
        /** @brief SRAM3 is powered in Stop 2 mode (RAM3 content is kept). */
    constexpr std::uint32_t PWR_CR1_RRSTP_B_0x1 = 1;

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
    /** @brief Power voltage detector enable Note: This bit is write-protected when the bit PVDL (PVD Lock) is set in the SYSCFG_CBR register. Note: This bit is reset only by a system reset. */
    using PWR_CR2_PVDE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Power voltage detector disable. (value: 0)
     *          - B_0x1: Power voltage detector enable. (value: 1)
     */
        /** @brief Power voltage detector disable. */
    constexpr std::uint32_t PWR_CR2_PVDE_B_0x0 = 0;
        /** @brief Power voltage detector enable. */
    constexpr std::uint32_t PWR_CR2_PVDE_B_0x1 = 1;

    /** @brief Power voltage detector level selection. These bits select the voltage threshold detected by the power voltage detector: Note: These bits are write-protected when the bit PVDL (PVD Lock) is set in the SYSCFG_CBR register. Note: These bits are reset only by a system reset. */
    using PWR_CR2_PLS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: V<sub>PVD0</sub> around 2.0 V (value: 0)
     *          - B_0x1: V<sub>PVD1</sub> around 2.2 V (value: 1)
     *          - B_0x2: V<sub>PVD2</sub> around 2.4 V (value: 2)
     *          - B_0x3: V<sub>PVD3</sub> around 2.5 V (value: 3)
     *          - B_0x4: V<sub>PVD4</sub> around 2.6 V (value: 4)
     *          - B_0x5: V<sub>PVD5</sub> around 2.8 V (value: 5)
     *          - B_0x6: V<sub>PVD6</sub> around 2.9 V (value: 6)
     *          - B_0x7: External input analog voltage PVD_IN (compared internally to VREFINT) (value: 7)
     */
        /** @brief V<sub>PVD0</sub> around 2.0 V */
    constexpr std::uint32_t PWR_CR2_PLS_B_0x0 = 0;
        /** @brief V<sub>PVD1</sub> around 2.2 V */
    constexpr std::uint32_t PWR_CR2_PLS_B_0x1 = 1;
        /** @brief V<sub>PVD2</sub> around 2.4 V */
    constexpr std::uint32_t PWR_CR2_PLS_B_0x2 = 2;
        /** @brief V<sub>PVD3</sub> around 2.5 V */
    constexpr std::uint32_t PWR_CR2_PLS_B_0x3 = 3;
        /** @brief V<sub>PVD4</sub> around 2.6 V */
    constexpr std::uint32_t PWR_CR2_PLS_B_0x4 = 4;
        /** @brief V<sub>PVD5</sub> around 2.8 V */
    constexpr std::uint32_t PWR_CR2_PLS_B_0x5 = 5;
        /** @brief V<sub>PVD6</sub> around 2.9 V */
    constexpr std::uint32_t PWR_CR2_PLS_B_0x6 = 6;
        /** @brief External input analog voltage PVD_IN (compared internally to VREFINT) */
    constexpr std::uint32_t PWR_CR2_PLS_B_0x7 = 7;

    /** @brief Peripheral voltage monitoring 1 enable: V<sub>DDUSB</sub> vs. 1.2V */
    using PWR_CR2_PVME1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PVM1 (V<sub>DDUSB</sub> monitoring vs. 1.2V threshold) disable. (value: 0)
     *          - B_0x1: PVM1 (V<sub>DDUSB</sub> monitoring vs. 1.2V threshold) enable. (value: 1)
     */
        /** @brief PVM1 (V<sub>DDUSB</sub> monitoring vs. 1.2V threshold) disable. */
    constexpr std::uint32_t PWR_CR2_PVME1_B_0x0 = 0;
        /** @brief PVM1 (V<sub>DDUSB</sub> monitoring vs. 1.2V threshold) enable. */
    constexpr std::uint32_t PWR_CR2_PVME1_B_0x1 = 1;

    /** @brief Peripheral voltage monitoring 2 enable: V<sub>DDIO2</sub> vs. 0.9V */
    using PWR_CR2_PVME2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PVM2 (V<sub>DDIO2</sub> monitoring vs. 0.9V threshold) disable. (value: 0)
     *          - B_0x1: PVM2 (V<sub>DDIO2</sub> monitoring vs. 0.9V threshold) enable. (value: 1)
     */
        /** @brief PVM2 (V<sub>DDIO2</sub> monitoring vs. 0.9V threshold) disable. */
    constexpr std::uint32_t PWR_CR2_PVME2_B_0x0 = 0;
        /** @brief PVM2 (V<sub>DDIO2</sub> monitoring vs. 0.9V threshold) enable. */
    constexpr std::uint32_t PWR_CR2_PVME2_B_0x1 = 1;

    /** @brief Peripheral voltage monitoring 3 enable: V<sub>DDA</sub> vs. 1.62V */
    using PWR_CR2_PVME3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PVM3 (V<sub>DDA</sub> monitoring vs. 1.62V threshold) disable. (value: 0)
     *          - B_0x1: PVM3 (V<sub>DDA</sub> monitoring vs. 1.62V threshold) enable. (value: 1)
     */
        /** @brief PVM3 (V<sub>DDA</sub> monitoring vs. 1.62V threshold) disable. */
    constexpr std::uint32_t PWR_CR2_PVME3_B_0x0 = 0;
        /** @brief PVM3 (V<sub>DDA</sub> monitoring vs. 1.62V threshold) enable. */
    constexpr std::uint32_t PWR_CR2_PVME3_B_0x1 = 1;

    /** @brief Peripheral voltage monitoring 4 enable: V<sub>DDA</sub> vs. 2.2V */
    using PWR_CR2_PVME4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PVM4 (V<sub>DDA</sub> monitoring vs. 2.2V threshold) disable. (value: 0)
     *          - B_0x1: PVM4 (V<sub>DDA</sub> monitoring vs. 2.2V threshold) enable. (value: 1)
     */
        /** @brief PVM4 (V<sub>DDA</sub> monitoring vs. 2.2V threshold) disable. */
    constexpr std::uint32_t PWR_CR2_PVME4_B_0x0 = 0;
        /** @brief PVM4 (V<sub>DDA</sub> monitoring vs. 2.2V threshold) enable. */
    constexpr std::uint32_t PWR_CR2_PVME4_B_0x1 = 1;

    /** @brief V<sub>DDIO2</sub> Independent I/Os supply valid This bit is used to validate the V<sub>DDIO2</sub> supply for electrical and logical isolation purpose. Setting this bit is mandatory to use PG[15:2]. If V<sub>DDIO2</sub> is not always present in the application, the PVM can be used to determine whether this supply is ready or not. */
    using PWR_CR2_IOSV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: V<sub>DDIO2</sub> is not present. Logical and electrical isolation is applied to ignore this supply. (value: 0)
     *          - B_0x1: V<sub>DDIO2</sub> is valid. (value: 1)
     */
        /** @brief V<sub>DDIO2</sub> is not present. Logical and electrical isolation is applied to ignore this supply. */
    constexpr std::uint32_t PWR_CR2_IOSV_B_0x0 = 0;
        /** @brief V<sub>DDIO2</sub> is valid. */
    constexpr std::uint32_t PWR_CR2_IOSV_B_0x1 = 1;

    /** @brief V<sub>DDUSB</sub> USB supply valid This bit is used to validate the V<sub>DDUSB</sub> supply for electrical and logical isolation purpose. Setting this bit is mandatory to use the USB OTG_FS peripheral. If V<sub>DDUSB</sub> is not always present in the application, the PVM can be used to determine whether this supply is ready or not. */
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
    /** @brief Enable Wakeup pin WKUP1 When this bit is set, the external wakeup pin WKUP1 is enabled and triggers a wakeup from Standby or Shutdown event when a rising or a falling edge occurs. The active edge is configured via the WP1 bit in the PWR_CR4 register. */
    using PWR_CR3_EWUP1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable Wakeup pin WKUP2 When this bit is set, the external wakeup pin WKUP2 is enabled and triggers a wakeup from Standby or Shutdown event when a rising or a falling edge occurs. The active edge is configured via the WP2 bit in the PWR_CR4 register. */
    using PWR_CR3_EWUP2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable Wakeup pin WKUP3 When this bit is set, the external wakeup pin WKUP3 is enabled and triggers a wakeup from Standby or Shutdown event when a rising or a falling edge occurs. The active edge is configured via the WP3 bit in the PWR_CR4 register. */
    using PWR_CR3_EWUP3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable Wakeup pin WKUP4 When this bit is set, the external wakeup pin WKUP4 is enabled and triggers a wakeup from Standby or Shutdown event when a rising or a falling edge occurs. The active edge is configured via the WP4 bit in the PWR_CR4 register. */
    using PWR_CR3_EWUP4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable Wakeup pin WKUP5 When this bit is set, the external wakeup pin WKUP5 is enabled and triggers a wakeup from Standby or Shutdown event when a rising or a falling edge occurs.The active edge is configured via the WP5 bit in the PWR_CR4 register. */
    using PWR_CR3_EWUP5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SRAM2 retention in Standby mode For STM32L4Rxxx and STM32L4Sxxx devices bit 9 is reserved For STM32L4P5xx and STM32L4Q5xx devices: */
    using PWR_CR3_RRS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM2 is powered off in Standby mode (SRAM2 content is lost). (value: 0)
     *          - B_0x1: Full SRAM2 is powered by the low-power regulator in Standby mode (SRAM2 full content is kept). (value: 1)
     *          - B_0x2: Only 4 Kbytes of SRAM2 is powered by the low-power regulator in Standby mode (4 Kbytes of SRAM2 content is kept) (value: 2)
     */
        /** @brief SRAM2 is powered off in Standby mode (SRAM2 content is lost). */
    constexpr std::uint32_t PWR_CR3_RRS_B_0x0 = 0;
        /** @brief Full SRAM2 is powered by the low-power regulator in Standby mode (SRAM2 full content is kept). */
    constexpr std::uint32_t PWR_CR3_RRS_B_0x1 = 1;
        /** @brief Only 4 Kbytes of SRAM2 is powered by the low-power regulator in Standby mode (4 Kbytes of SRAM2 content is kept) */
    constexpr std::uint32_t PWR_CR3_RRS_B_0x2 = 2;

    /** @brief Apply pull-up and pull-down configuration When this bit is set, the I/O pull-up and pull-down configurations defined in the PWR_PUCRx and PWR_PDCRx registers are applied. When this bit is cleared, the PWR_PUCRx and PWR_PDCRx registers are not applied to the I/Os, instead the I/Os will be in floating mode during Standby or configured according GPIO controller GPIOx_PUPDR register during Run mode. */
    using PWR_CR3_APC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable ULP sampling When this bit is set, the BORL, BORH and PVD are periodically sampled instead continuous monitoring to reduce power consumption. Fast supply drop between two sample/compare phases is not detected in this mode. This bit has impact only on STOP2, Standby and shutdown low power modes. Note: Available on STM32L4P5xx andSTM32L4Q5xx only. */
    using PWR_CR3_ENULP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable Pull-down activation on DSI pins */
    using PWR_CR3_DSIPDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Pull-Down is enabled on DSI pins. (value: 1)
     *          - B_0x0: Pull-Down is disabled on DSI pins. (value: 0)
     */
        /** @brief Pull-Down is enabled on DSI pins. */
    constexpr std::uint32_t PWR_CR3_DSIPDEN_B_0x1 = 1;
        /** @brief Pull-Down is disabled on DSI pins. */
    constexpr std::uint32_t PWR_CR3_DSIPDEN_B_0x0 = 0;

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
    /** @brief Wakeup pin WKUP1 polarity This bit defines the polarity used for an event detection on external wake-up pin, WKUP1 */
    using PWR_CR4_WP1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Detection on high level (rising edge) (value: 0)
     *          - B_0x1: Detection on low level (falling edge) (value: 1)
     */
        /** @brief Detection on high level (rising edge) */
    constexpr std::uint32_t PWR_CR4_WP1_B_0x0 = 0;
        /** @brief Detection on low level (falling edge) */
    constexpr std::uint32_t PWR_CR4_WP1_B_0x1 = 1;

    /** @brief Wakeup pin WKUP2 polarity This bit defines the polarity used for an event detection on external wake-up pin, WKUP2 */
    using PWR_CR4_WP2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Detection on high level (rising edge) (value: 0)
     *          - B_0x1: Detection on low level (falling edge) (value: 1)
     */
        /** @brief Detection on high level (rising edge) */
    constexpr std::uint32_t PWR_CR4_WP2_B_0x0 = 0;
        /** @brief Detection on low level (falling edge) */
    constexpr std::uint32_t PWR_CR4_WP2_B_0x1 = 1;

    /** @brief Wakeup pin WKUP3 polarity This bit defines the polarity used for an event detection on external wake-up pin, WKUP3 */
    using PWR_CR4_WP3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Detection on high level (rising edge) (value: 0)
     *          - B_0x1: Detection on low level (falling edge) (value: 1)
     */
        /** @brief Detection on high level (rising edge) */
    constexpr std::uint32_t PWR_CR4_WP3_B_0x0 = 0;
        /** @brief Detection on low level (falling edge) */
    constexpr std::uint32_t PWR_CR4_WP3_B_0x1 = 1;

    /** @brief Wakeup pin WKUP4 polarity This bit defines the polarity used for an event detection on external wake-up pin, WKUP4 */
    using PWR_CR4_WP4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Detection on high level (rising edge) (value: 0)
     *          - B_0x1: Detection on low level (falling edge) (value: 1)
     */
        /** @brief Detection on high level (rising edge) */
    constexpr std::uint32_t PWR_CR4_WP4_B_0x0 = 0;
        /** @brief Detection on low level (falling edge) */
    constexpr std::uint32_t PWR_CR4_WP4_B_0x1 = 1;

    /** @brief Wakeup pin WKUP5 polarity This bit defines the polarity used for an event detection on external wake-up pin, WKUP5 */
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

    /** @brief external SMPS on. This bit informs the internal regulator about external SMPS switch status to decrease regulator output to 0.95 V in Range 2, allowing the external SMPS output down to 1.00 V. Note: This bit is only available on STM32L4P5xx and STM32L4Q5xx devices. */
    using PWR_CR4_EXT_SMPS_ON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: the external SMPS switch is open. (value: 0)
     *          - B_0x1: the external SMPS switch is closed, internal regulator output is set to 0.95 V. (value: 1)
     */
        /** @brief the external SMPS switch is open. */
    constexpr std::uint32_t PWR_CR4_EXT_SMPS_ON_B_0x0 = 0;
        /** @brief the external SMPS switch is closed, internal regulator output is set to 0.95 V. */
    constexpr std::uint32_t PWR_CR4_EXT_SMPS_ON_B_0x1 = 1;

    /** @brief Power status register 1 */
    using PWR_SR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wakeup flag 1 This bit is set when a wakeup event is detected on wakeup pin, WKUP1. It is cleared by writing 1 in the CWUF1 bit of the PWR_SCR register. */
    using PWR_SR1_WUF1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wakeup flag 2 This bit is set when a wakeup event is detected on wakeup pin, WKUP2. It is cleared by writing 1 in the CWUF2 bit of the PWR_SCR register. */
    using PWR_SR1_WUF2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wakeup flag 3 This bit is set when a wakeup event is detected on wakeup pin, WKUP3. It is cleared by writing 1 in the CWUF3 bit of the PWR_SCR register. */
    using PWR_SR1_WUF3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wakeup flag 4 This bit is set when a wakeup event is detected on wakeup pin,WKUP4. It is cleared by writing 1 in the CWUF4 bit of the PWR_SCR register. */
    using PWR_SR1_WUF4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wakeup flag 5 This bit is set when a wakeup event is detected on wakeup pin, WKUP5. It is cleared by writing 1 in the CWUF5 bit of the PWR_SCR register. */
    using PWR_SR1_WUF5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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

    /** @brief External SMPS ready This bit informs the state of regulator transition from Range 1 to Range 2 Note: This bit is only available on STM32L4P5xx and STM32L4Q5xx devices. */
    using PWR_SR1_EXT_SMPS_RDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Internal regulator not ready in Range 2, the external SMPS cannot be connected (value: 0)
     *          - B_0x1: Internal regulator ready in Range 2, the external SMPS can be connected (value: 1)
     */
        /** @brief Internal regulator not ready in Range 2, the external SMPS cannot be connected */
    constexpr std::uint32_t PWR_SR1_EXT_SMPS_RDY_B_0x0 = 0;
        /** @brief Internal regulator ready in Range 2, the external SMPS can be connected */
    constexpr std::uint32_t PWR_SR1_EXT_SMPS_RDY_B_0x1 = 1;

    /** @brief Wakeup flag internal This bit is set when a wakeup is detected on the internal wakeup line. It is cleared when all internal wakeup sources are cleared. */
    using PWR_SR1_WUFI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Power status register 2 */
    using PWR_SR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Low-power regulator started This bit provides the information whether the low-power regulator is ready after a power-on reset or a Standby/Shutdown. If the Standby mode is entered while REGLPS bit is still cleared, the wakeup from Standby mode time may be increased. */
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

    /** @brief Power voltage detector output */
    using PWR_SR2_PVDO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: V<sub>DD</sub> is above the selected PVD threshold (value: 0)
     *          - B_0x1: V<sub>DD</sub> is below the selected PVD threshold (value: 1)
     */
        /** @brief V<sub>DD</sub> is above the selected PVD threshold */
    constexpr std::uint32_t PWR_SR2_PVDO_B_0x0 = 0;
        /** @brief V<sub>DD</sub> is below the selected PVD threshold */
    constexpr std::uint32_t PWR_SR2_PVDO_B_0x1 = 1;

    /** @brief Peripheral voltage monitoring output: V<sub>DDUSB</sub> vs. 1.2 V Note: PVMO1 is cleared when PVM1 is disabled (PVME1 = 0). After enabling PVM1, the PVM1 output is valid after the PVM1 wakeup time. */
    using PWR_SR2_PVMO1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: V<sub>DDUSB</sub> voltage is above PVM1 threshold (around 1.2 V). (value: 0)
     *          - B_0x1: V<sub>DDUSB</sub> voltage is below PVM1 threshold (around 1.2 V). (value: 1)
     */
        /** @brief V<sub>DDUSB</sub> voltage is above PVM1 threshold (around 1.2 V). */
    constexpr std::uint32_t PWR_SR2_PVMO1_B_0x0 = 0;
        /** @brief V<sub>DDUSB</sub> voltage is below PVM1 threshold (around 1.2 V). */
    constexpr std::uint32_t PWR_SR2_PVMO1_B_0x1 = 1;

    /** @brief Peripheral voltage monitoring output: V<sub>DDIO2</sub> vs. 0.9 V Note: PVMO2 is cleared when PVM2 is disabled (PVME2 = 0). After enabling PVM2, the PVM2 output is valid after the PVM2 wakeup time. */
    using PWR_SR2_PVMO2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: V<sub>DDIO2</sub> voltage is above PVM2 threshold (around 0.9 V). (value: 0)
     *          - B_0x1: V<sub>DDIO2</sub> voltage is below PVM2 threshold (around 0.9 V). (value: 1)
     */
        /** @brief V<sub>DDIO2</sub> voltage is above PVM2 threshold (around 0.9 V). */
    constexpr std::uint32_t PWR_SR2_PVMO2_B_0x0 = 0;
        /** @brief V<sub>DDIO2</sub> voltage is below PVM2 threshold (around 0.9 V). */
    constexpr std::uint32_t PWR_SR2_PVMO2_B_0x1 = 1;

    /** @brief Peripheral voltage monitoring output: V<sub>DDA</sub> vs. 1.62 V Note: PVMO3 is cleared when PVM3 is disabled (PVME3 = 0). After enabling PVM3, the PVM3 output is valid after the PVM3 wakeup time. */
    using PWR_SR2_PVMO3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: V<sub>DDA</sub> voltage is above PVM3 threshold (around 1.62 V). (value: 0)
     *          - B_0x1: V<sub>DDA</sub> voltage is below PVM3 threshold (around 1.62 V). (value: 1)
     */
        /** @brief V<sub>DDA</sub> voltage is above PVM3 threshold (around 1.62 V). */
    constexpr std::uint32_t PWR_SR2_PVMO3_B_0x0 = 0;
        /** @brief V<sub>DDA</sub> voltage is below PVM3 threshold (around 1.62 V). */
    constexpr std::uint32_t PWR_SR2_PVMO3_B_0x1 = 1;

    /** @brief Peripheral voltage monitoring output: V<sub>DDA</sub> vs. 2.2 V Note: PVMO4 is cleared when PVM4 is disabled (PVME4 = 0). After enabling PVM4, the PVM4 output is valid after the PVM4 wakeup time. */
    using PWR_SR2_PVMO4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: V<sub>DDA</sub> voltage is above PVM4 threshold (around 2.2 V). (value: 0)
     *          - B_0x1: V<sub>DDA</sub> voltage is below PVM4 threshold (around 2.2 V). (value: 1)
     */
        /** @brief V<sub>DDA</sub> voltage is above PVM4 threshold (around 2.2 V). */
    constexpr std::uint32_t PWR_SR2_PVMO4_B_0x0 = 0;
        /** @brief V<sub>DDA</sub> voltage is below PVM4 threshold (around 2.2 V). */
    constexpr std::uint32_t PWR_SR2_PVMO4_B_0x1 = 1;

    /** @brief Power status clear register */
    using PWR_SCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear wakeup flag 1 Setting this bit clears the WUF1 flag in the PWR_SR1 register. */
    using PWR_SCR_CWUF1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear wakeup flag 2 Setting this bit clears the WUF2 flag in the PWR_SR1 register. */
    using PWR_SCR_CWUF2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear wakeup flag 3 Setting this bit clears the WUF3 flag in the PWR_SR1 register. */
    using PWR_SCR_CWUF3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear wakeup flag 4 Setting this bit clears the WUF4 flag in the PWR_SR1 register. */
    using PWR_SCR_CWUF4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear wakeup flag 5 Setting this bit clears the WUF5 flag in the PWR_SR1 register. */
    using PWR_SCR_CWUF5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear standby flag Setting this bit clears the SBF flag in the PWR_SR1 register. */
    using PWR_SCR_CSBF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Power Port A pull-up control register */
    using PWR_PUCRA = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-up bit y (y=0...13) When set, this bit activates the pull-up on PA[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRA_PU0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-up bit y (y=0...13) When set, this bit activates the pull-up on PA[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRA_PU1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-up bit y (y=0...13) When set, this bit activates the pull-up on PA[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRA_PU2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-up bit y (y=0...13) When set, this bit activates the pull-up on PA[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRA_PU3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-up bit y (y=0...13) When set, this bit activates the pull-up on PA[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRA_PU4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-up bit y (y=0...13) When set, this bit activates the pull-up on PA[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRA_PU5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-up bit y (y=0...13) When set, this bit activates the pull-up on PA[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRA_PU6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-up bit y (y=0...13) When set, this bit activates the pull-up on PA[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRA_PU7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-up bit y (y=0...13) When set, this bit activates the pull-up on PA[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRA_PU8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-up bit y (y=0...13) When set, this bit activates the pull-up on PA[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRA_PU9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-up bit y (y=0...13) When set, this bit activates the pull-up on PA[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRA_PU10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-up bit y (y=0...13) When set, this bit activates the pull-up on PA[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRA_PU11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-up bit y (y=0...13) When set, this bit activates the pull-up on PA[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRA_PU12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-up bit y (y=0...13) When set, this bit activates the pull-up on PA[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRA_PU13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-up bit 15 When set, this bit activates the pull-up on PA[15] when APC bit is set in PWR_CR3 register. If the corresponding PD15 bit is also set, the pull-up is not activated and the pull-down is activated instead with highest priority. */
    using PWR_PUCRA_PU15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Power Port A pull-down control register */
    using PWR_PDCRA = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-down bit y (y=0..12) When set, this bit activates the pull-down on PA[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRA_PD0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-down bit y (y=0..12) When set, this bit activates the pull-down on PA[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRA_PD1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-down bit y (y=0..12) When set, this bit activates the pull-down on PA[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRA_PD2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-down bit y (y=0..12) When set, this bit activates the pull-down on PA[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRA_PD3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-down bit y (y=0..12) When set, this bit activates the pull-down on PA[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRA_PD4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-down bit y (y=0..12) When set, this bit activates the pull-down on PA[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRA_PD5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-down bit y (y=0..12) When set, this bit activates the pull-down on PA[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRA_PD6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-down bit y (y=0..12) When set, this bit activates the pull-down on PA[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRA_PD7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-down bit y (y=0..12) When set, this bit activates the pull-down on PA[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRA_PD8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-down bit y (y=0..12) When set, this bit activates the pull-down on PA[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRA_PD9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-down bit y (y=0..12) When set, this bit activates the pull-down on PA[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRA_PD10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-down bit y (y=0..12) When set, this bit activates the pull-down on PA[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRA_PD11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-down bit y (y=0..12) When set, this bit activates the pull-down on PA[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRA_PD12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-down bit 14 When set, this bit activates the pull-down on PA[14] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRA_PD14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Power Port B pull-up control register */
    using PWR_PUCRB = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-up bit y (y=0..15) When set, this bit activates the pull-up on PB[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRB_PU0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-up bit y (y=0..15) When set, this bit activates the pull-up on PB[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRB_PU1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-up bit y (y=0..15) When set, this bit activates the pull-up on PB[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRB_PU2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-up bit y (y=0..15) When set, this bit activates the pull-up on PB[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRB_PU3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-up bit y (y=0..15) When set, this bit activates the pull-up on PB[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRB_PU4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-up bit y (y=0..15) When set, this bit activates the pull-up on PB[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRB_PU5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-up bit y (y=0..15) When set, this bit activates the pull-up on PB[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRB_PU6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-up bit y (y=0..15) When set, this bit activates the pull-up on PB[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRB_PU7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-up bit y (y=0..15) When set, this bit activates the pull-up on PB[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRB_PU8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-up bit y (y=0..15) When set, this bit activates the pull-up on PB[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRB_PU9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-up bit y (y=0..15) When set, this bit activates the pull-up on PB[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRB_PU10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-up bit y (y=0..15) When set, this bit activates the pull-up on PB[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRB_PU11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-up bit y (y=0..15) When set, this bit activates the pull-up on PB[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRB_PU12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-up bit y (y=0..15) When set, this bit activates the pull-up on PB[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRB_PU13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-up bit y (y=0..15) When set, this bit activates the pull-up on PB[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRB_PU14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-up bit y (y=0..15) When set, this bit activates the pull-up on PB[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRB_PU15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Power Port B pull-down control register */
    using PWR_PDCRB = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-down bit y (y=0..3) When set, this bit activates the pull-down on PB[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRB_PD0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-down bit y (y=0..3) When set, this bit activates the pull-down on PB[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRB_PD1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-down bit y (y=0..3) When set, this bit activates the pull-down on PB[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRB_PD2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-down bit y (y=0..3) When set, this bit activates the pull-down on PB[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRB_PD3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-down bit y (y=5..15) When set, this bit activates the pull-down on PB[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRB_PD5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-down bit y (y=5..15) When set, this bit activates the pull-down on PB[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRB_PD6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-down bit y (y=5..15) When set, this bit activates the pull-down on PB[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRB_PD7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-down bit y (y=5..15) When set, this bit activates the pull-down on PB[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRB_PD8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-down bit y (y=5..15) When set, this bit activates the pull-down on PB[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRB_PD9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-down bit y (y=5..15) When set, this bit activates the pull-down on PB[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRB_PD10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-down bit y (y=5..15) When set, this bit activates the pull-down on PB[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRB_PD11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-down bit y (y=5..15) When set, this bit activates the pull-down on PB[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRB_PD12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-down bit y (y=5..15) When set, this bit activates the pull-down on PB[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRB_PD13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-down bit y (y=5..15) When set, this bit activates the pull-down on PB[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRB_PD14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-down bit y (y=5..15) When set, this bit activates the pull-down on PB[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRB_PD15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Power Port C pull-up control register */
    using PWR_PUCRC = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-up bit y (y=0..15) When set, this bit activates the pull-up on PC[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRC_PU0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-up bit y (y=0..15) When set, this bit activates the pull-up on PC[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRC_PU1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-up bit y (y=0..15) When set, this bit activates the pull-up on PC[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRC_PU2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-up bit y (y=0..15) When set, this bit activates the pull-up on PC[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRC_PU3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-up bit y (y=0..15) When set, this bit activates the pull-up on PC[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRC_PU4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-up bit y (y=0..15) When set, this bit activates the pull-up on PC[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRC_PU5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-up bit y (y=0..15) When set, this bit activates the pull-up on PC[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRC_PU6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-up bit y (y=0..15) When set, this bit activates the pull-up on PC[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRC_PU7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-up bit y (y=0..15) When set, this bit activates the pull-up on PC[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRC_PU8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-up bit y (y=0..15) When set, this bit activates the pull-up on PC[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRC_PU9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-up bit y (y=0..15) When set, this bit activates the pull-up on PC[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRC_PU10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-up bit y (y=0..15) When set, this bit activates the pull-up on PC[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRC_PU11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-up bit y (y=0..15) When set, this bit activates the pull-up on PC[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRC_PU12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-up bit y (y=0..15) When set, this bit activates the pull-up on PC[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRC_PU13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-up bit y (y=0..15) When set, this bit activates the pull-up on PC[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRC_PU14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-up bit y (y=0..15) When set, this bit activates the pull-up on PC[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRC_PU15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Power Port C pull-down control register */
    using PWR_PDCRC = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-down bit y (y=0..15) When set, this bit activates the pull-down on PC[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRC_PD0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-down bit y (y=0..15) When set, this bit activates the pull-down on PC[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRC_PD1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-down bit y (y=0..15) When set, this bit activates the pull-down on PC[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRC_PD2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-down bit y (y=0..15) When set, this bit activates the pull-down on PC[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRC_PD3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-down bit y (y=0..15) When set, this bit activates the pull-down on PC[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRC_PD4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-down bit y (y=0..15) When set, this bit activates the pull-down on PC[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRC_PD5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-down bit y (y=0..15) When set, this bit activates the pull-down on PC[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRC_PD6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-down bit y (y=0..15) When set, this bit activates the pull-down on PC[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRC_PD7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-down bit y (y=0..15) When set, this bit activates the pull-down on PC[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRC_PD8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-down bit y (y=0..15) When set, this bit activates the pull-down on PC[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRC_PD9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-down bit y (y=0..15) When set, this bit activates the pull-down on PC[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRC_PD10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-down bit y (y=0..15) When set, this bit activates the pull-down on PC[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRC_PD11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-down bit y (y=0..15) When set, this bit activates the pull-down on PC[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRC_PD12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-down bit y (y=0..15) When set, this bit activates the pull-down on PC[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRC_PD13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-down bit y (y=0..15) When set, this bit activates the pull-down on PC[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRC_PD14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-down bit y (y=0..15) When set, this bit activates the pull-down on PC[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRC_PD15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Power Port D pull-up control register */
    using PWR_PUCRD = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-up bit y (y=0..15) When set, this bit activates the pull-up on PD[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRD_PU0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-up bit y (y=0..15) When set, this bit activates the pull-up on PD[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRD_PU1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-up bit y (y=0..15) When set, this bit activates the pull-up on PD[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRD_PU2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-up bit y (y=0..15) When set, this bit activates the pull-up on PD[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRD_PU3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-up bit y (y=0..15) When set, this bit activates the pull-up on PD[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRD_PU4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-up bit y (y=0..15) When set, this bit activates the pull-up on PD[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRD_PU5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-up bit y (y=0..15) When set, this bit activates the pull-up on PD[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRD_PU6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-up bit y (y=0..15) When set, this bit activates the pull-up on PD[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRD_PU7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-up bit y (y=0..15) When set, this bit activates the pull-up on PD[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRD_PU8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-up bit y (y=0..15) When set, this bit activates the pull-up on PD[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRD_PU9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-up bit y (y=0..15) When set, this bit activates the pull-up on PD[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRD_PU10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-up bit y (y=0..15) When set, this bit activates the pull-up on PD[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRD_PU11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-up bit y (y=0..15) When set, this bit activates the pull-up on PD[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRD_PU12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-up bit y (y=0..15) When set, this bit activates the pull-up on PD[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRD_PU13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-up bit y (y=0..15) When set, this bit activates the pull-up on PD[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRD_PU14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-up bit y (y=0..15) When set, this bit activates the pull-up on PD[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRD_PU15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Power Port D pull-down control register */
    using PWR_PDCRD = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-down bit y (y=0..15) When set, this bit activates the pull-down on PD[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRD_PD0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-down bit y (y=0..15) When set, this bit activates the pull-down on PD[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRD_PD1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-down bit y (y=0..15) When set, this bit activates the pull-down on PD[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRD_PD2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-down bit y (y=0..15) When set, this bit activates the pull-down on PD[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRD_PD3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-down bit y (y=0..15) When set, this bit activates the pull-down on PD[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRD_PD4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-down bit y (y=0..15) When set, this bit activates the pull-down on PD[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRD_PD5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-down bit y (y=0..15) When set, this bit activates the pull-down on PD[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRD_PD6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-down bit y (y=0..15) When set, this bit activates the pull-down on PD[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRD_PD7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-down bit y (y=0..15) When set, this bit activates the pull-down on PD[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRD_PD8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-down bit y (y=0..15) When set, this bit activates the pull-down on PD[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRD_PD9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-down bit y (y=0..15) When set, this bit activates the pull-down on PD[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRD_PD10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-down bit y (y=0..15) When set, this bit activates the pull-down on PD[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRD_PD11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-down bit y (y=0..15) When set, this bit activates the pull-down on PD[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRD_PD12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-down bit y (y=0..15) When set, this bit activates the pull-down on PD[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRD_PD13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-down bit y (y=0..15) When set, this bit activates the pull-down on PD[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRD_PD14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-down bit y (y=0..15) When set, this bit activates the pull-down on PD[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRD_PD15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Power Port E pull-down control register */
    using PWR_PDCRE = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port E pull-down bit y (y=0..15) When set, this bit activates the pull-down on PE[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRE_PD0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port E pull-down bit y (y=0..15) When set, this bit activates the pull-down on PE[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRE_PD1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port E pull-down bit y (y=0..15) When set, this bit activates the pull-down on PE[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRE_PD2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port E pull-down bit y (y=0..15) When set, this bit activates the pull-down on PE[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRE_PD3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port E pull-down bit y (y=0..15) When set, this bit activates the pull-down on PE[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRE_PD4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port E pull-down bit y (y=0..15) When set, this bit activates the pull-down on PE[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRE_PD5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port E pull-down bit y (y=0..15) When set, this bit activates the pull-down on PE[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRE_PD6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port E pull-down bit y (y=0..15) When set, this bit activates the pull-down on PE[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRE_PD7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port E pull-down bit y (y=0..15) When set, this bit activates the pull-down on PE[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRE_PD8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port E pull-down bit y (y=0..15) When set, this bit activates the pull-down on PE[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRE_PD9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port E pull-down bit y (y=0..15) When set, this bit activates the pull-down on PE[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRE_PD10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port E pull-down bit y (y=0..15) When set, this bit activates the pull-down on PE[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRE_PD11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port E pull-down bit y (y=0..15) When set, this bit activates the pull-down on PE[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRE_PD12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port E pull-down bit y (y=0..15) When set, this bit activates the pull-down on PE[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRE_PD13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port E pull-down bit y (y=0..15) When set, this bit activates the pull-down on PE[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRE_PD14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port E pull-down bit y (y=0..15) When set, this bit activates the pull-down on PE[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRE_PD15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Power Port F pull-up control register */
    using PWR_PUCRF = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port F pull-up bit y (y=0..15) When set, this bit activates the pull-up on PF[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRF_PU0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port F pull-up bit y (y=0..15) When set, this bit activates the pull-up on PF[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRF_PU1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port F pull-up bit y (y=0..15) When set, this bit activates the pull-up on PF[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRF_PU2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port F pull-up bit y (y=0..15) When set, this bit activates the pull-up on PF[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRF_PU3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port F pull-up bit y (y=0..15) When set, this bit activates the pull-up on PF[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRF_PU4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port F pull-up bit y (y=0..15) When set, this bit activates the pull-up on PF[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRF_PU5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port F pull-up bit y (y=0..15) When set, this bit activates the pull-up on PF[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRF_PU6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port F pull-up bit y (y=0..15) When set, this bit activates the pull-up on PF[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRF_PU7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port F pull-up bit y (y=0..15) When set, this bit activates the pull-up on PF[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRF_PU8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port F pull-up bit y (y=0..15) When set, this bit activates the pull-up on PF[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRF_PU9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port F pull-up bit y (y=0..15) When set, this bit activates the pull-up on PF[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRF_PU10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port F pull-up bit y (y=0..15) When set, this bit activates the pull-up on PF[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRF_PU11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port F pull-up bit y (y=0..15) When set, this bit activates the pull-up on PF[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRF_PU12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port F pull-up bit y (y=0..15) When set, this bit activates the pull-up on PF[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRF_PU13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port F pull-up bit y (y=0..15) When set, this bit activates the pull-up on PF[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRF_PU14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port F pull-up bit y (y=0..15) When set, this bit activates the pull-up on PF[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRF_PU15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Power Port F pull-down control register */
    using PWR_PDCRF = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port F pull-down bit y (y=0..15) When set, this bit activates the pull-down on PF[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRF_PD0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port F pull-down bit y (y=0..15) When set, this bit activates the pull-down on PF[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRF_PD1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port F pull-down bit y (y=0..15) When set, this bit activates the pull-down on PF[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRF_PD2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port F pull-down bit y (y=0..15) When set, this bit activates the pull-down on PF[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRF_PD3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port F pull-down bit y (y=0..15) When set, this bit activates the pull-down on PF[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRF_PD4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port F pull-down bit y (y=0..15) When set, this bit activates the pull-down on PF[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRF_PD5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port F pull-down bit y (y=0..15) When set, this bit activates the pull-down on PF[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRF_PD6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port F pull-down bit y (y=0..15) When set, this bit activates the pull-down on PF[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRF_PD7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port F pull-down bit y (y=0..15) When set, this bit activates the pull-down on PF[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRF_PD8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port F pull-down bit y (y=0..15) When set, this bit activates the pull-down on PF[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRF_PD9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port F pull-down bit y (y=0..15) When set, this bit activates the pull-down on PF[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRF_PD10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port F pull-down bit y (y=0..15) When set, this bit activates the pull-down on PF[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRF_PD11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port F pull-down bit y (y=0..15) When set, this bit activates the pull-down on PF[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRF_PD12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port F pull-down bit y (y=0..15) When set, this bit activates the pull-down on PF[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRF_PD13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port F pull-down bit y (y=0..15) When set, this bit activates the pull-down on PF[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRF_PD14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port F pull-down bit y (y=0..15) When set, this bit activates the pull-down on PF[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRF_PD15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Power Port G pull-up control register */
    using PWR_PUCRG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G pull-up bit y (y=0..15) When set, this bit activates the pull-up on PG[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRG_PU0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G pull-up bit y (y=0..15) When set, this bit activates the pull-up on PG[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRG_PU1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G pull-up bit y (y=0..15) When set, this bit activates the pull-up on PG[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRG_PU2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G pull-up bit y (y=0..15) When set, this bit activates the pull-up on PG[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRG_PU3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G pull-up bit y (y=0..15) When set, this bit activates the pull-up on PG[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRG_PU4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G pull-up bit y (y=0..15) When set, this bit activates the pull-up on PG[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRG_PU5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G pull-up bit y (y=0..15) When set, this bit activates the pull-up on PG[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRG_PU6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G pull-up bit y (y=0..15) When set, this bit activates the pull-up on PG[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRG_PU7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G pull-up bit y (y=0..15) When set, this bit activates the pull-up on PG[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRG_PU8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G pull-up bit y (y=0..15) When set, this bit activates the pull-up on PG[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRG_PU9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G pull-up bit y (y=0..15) When set, this bit activates the pull-up on PG[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRG_PU10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G pull-up bit y (y=0..15) When set, this bit activates the pull-up on PG[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRG_PU11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G pull-up bit y (y=0..15) When set, this bit activates the pull-up on PG[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRG_PU12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G pull-up bit y (y=0..15) When set, this bit activates the pull-up on PG[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRG_PU13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G pull-up bit y (y=0..15) When set, this bit activates the pull-up on PG[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRG_PU14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G pull-up bit y (y=0..15) When set, this bit activates the pull-up on PG[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRG_PU15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Power Port G pull-down control register */
    using PWR_PDCRG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G pull-down bit y (y=0..15) When set, this bit activates the pull-down on PG[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRG_PD0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G pull-down bit y (y=0..15) When set, this bit activates the pull-down on PG[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRG_PD1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G pull-down bit y (y=0..15) When set, this bit activates the pull-down on PG[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRG_PD2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G pull-down bit y (y=0..15) When set, this bit activates the pull-down on PG[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRG_PD3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G pull-down bit y (y=0..15) When set, this bit activates the pull-down on PG[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRG_PD4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G pull-down bit y (y=0..15) When set, this bit activates the pull-down on PG[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRG_PD5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G pull-down bit y (y=0..15) When set, this bit activates the pull-down on PG[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRG_PD6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G pull-down bit y (y=0..15) When set, this bit activates the pull-down on PG[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRG_PD7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G pull-down bit y (y=0..15) When set, this bit activates the pull-down on PG[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRG_PD8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G pull-down bit y (y=0..15) When set, this bit activates the pull-down on PG[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRG_PD9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G pull-down bit y (y=0..15) When set, this bit activates the pull-down on PG[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRG_PD10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G pull-down bit y (y=0..15) When set, this bit activates the pull-down on PG[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRG_PD11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G pull-down bit y (y=0..15) When set, this bit activates the pull-down on PG[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRG_PD12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G pull-down bit y (y=0..15) When set, this bit activates the pull-down on PG[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRG_PD13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G pull-down bit y (y=0..15) When set, this bit activates the pull-down on PG[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRG_PD14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G pull-down bit y (y=0..15) When set, this bit activates the pull-down on PG[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRG_PD15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Power Port H pull-up control register */
    using PWR_PUCRH = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x58, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port H pull-up bit y (y=0..15) When set, this bit activates the pull-up on PH[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRH_PU0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port H pull-up bit y (y=0..15) When set, this bit activates the pull-up on PH[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRH_PU1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port H pull-up bit y (y=0..15) When set, this bit activates the pull-up on PH[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRH_PU2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port H pull-up bit y (y=0..15) When set, this bit activates the pull-up on PH[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRH_PU3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port H pull-up bit y (y=0..15) When set, this bit activates the pull-up on PH[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRH_PU4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port H pull-up bit y (y=0..15) When set, this bit activates the pull-up on PH[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRH_PU5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port H pull-up bit y (y=0..15) When set, this bit activates the pull-up on PH[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRH_PU6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port H pull-up bit y (y=0..15) When set, this bit activates the pull-up on PH[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRH_PU7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port H pull-up bit y (y=0..15) When set, this bit activates the pull-up on PH[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRH_PU8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port H pull-up bit y (y=0..15) When set, this bit activates the pull-up on PH[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRH_PU9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port H pull-up bit y (y=0..15) When set, this bit activates the pull-up on PH[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRH_PU10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port H pull-up bit y (y=0..15) When set, this bit activates the pull-up on PH[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRH_PU11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port H pull-up bit y (y=0..15) When set, this bit activates the pull-up on PH[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRH_PU12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port H pull-up bit y (y=0..15) When set, this bit activates the pull-up on PH[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRH_PU13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port H pull-up bit y (y=0..15) When set, this bit activates the pull-up on PH[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRH_PU14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port H pull-up bit y (y=0..15) When set, this bit activates the pull-up on PH[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRH_PU15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Power Port H pull-down control register */
    using PWR_PDCRH = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port H pull-down bit x (y =15...0) When set, this bit activates the pull-down on PH[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRH_PD0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port H pull-down bit x (y =15...0) When set, this bit activates the pull-down on PH[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRH_PD1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port H pull-down bit x (y =15...0) When set, this bit activates the pull-down on PH[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRH_PD2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port H pull-down bit x (y =15...0) When set, this bit activates the pull-down on PH[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRH_PD3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port H pull-down bit x (y =15...0) When set, this bit activates the pull-down on PH[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRH_PD4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port H pull-down bit x (y =15...0) When set, this bit activates the pull-down on PH[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRH_PD5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port H pull-down bit x (y =15...0) When set, this bit activates the pull-down on PH[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRH_PD6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port H pull-down bit x (y =15...0) When set, this bit activates the pull-down on PH[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRH_PD7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port H pull-down bit x (y =15...0) When set, this bit activates the pull-down on PH[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRH_PD8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port H pull-down bit x (y =15...0) When set, this bit activates the pull-down on PH[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRH_PD9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port H pull-down bit x (y =15...0) When set, this bit activates the pull-down on PH[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRH_PD10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port H pull-down bit x (y =15...0) When set, this bit activates the pull-down on PH[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRH_PD11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port H pull-down bit x (y =15...0) When set, this bit activates the pull-down on PH[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRH_PD12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port H pull-down bit x (y =15...0) When set, this bit activates the pull-down on PH[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRH_PD13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port H pull-down bit x (y =15...0) When set, this bit activates the pull-down on PH[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRH_PD14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port H pull-down bit x (y =15...0) When set, this bit activates the pull-down on PH[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRH_PD15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Power Port I pull-up control register */
    using PWR_PUCRI = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port I pull-up bit y (y=0..11) When set, this bit activates the pull-up on PI[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRI_PU0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port I pull-up bit y (y=0..11) When set, this bit activates the pull-up on PI[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRI_PU1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port I pull-up bit y (y=0..11) When set, this bit activates the pull-up on PI[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRI_PU2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port I pull-up bit y (y=0..11) When set, this bit activates the pull-up on PI[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRI_PU3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port I pull-up bit y (y=0..11) When set, this bit activates the pull-up on PI[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRI_PU4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port I pull-up bit y (y=0..11) When set, this bit activates the pull-up on PI[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRI_PU5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port I pull-up bit y (y=0..11) When set, this bit activates the pull-up on PI[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRI_PU6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port I pull-up bit y (y=0..11) When set, this bit activates the pull-up on PI[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRI_PU7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port I pull-up bit y (y=0..11) When set, this bit activates the pull-up on PI[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRI_PU8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port I pull-up bit y (y=0..11) When set, this bit activates the pull-up on PI[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRI_PU9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port I pull-up bit y (y=0..11) When set, this bit activates the pull-up on PI[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRI_PU10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port I pull-up bit y (y=0..11) When set, this bit activates the pull-up on PI[y] when APC bit is set in PWR_CR3 register. The pull-up is not activated if the corresponding PDy bit is also set. */
    using PWR_PUCRI_PU11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Power Port I pull-down control register */
    using PWR_PDCRI = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x64, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port I pull-down bit y (y=0..11) When set, this bit activates the pull-down on PI[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRI_PD0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port I pull-down bit y (y=0..11) When set, this bit activates the pull-down on PI[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRI_PD1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port I pull-down bit y (y=0..11) When set, this bit activates the pull-down on PI[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRI_PD2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port I pull-down bit y (y=0..11) When set, this bit activates the pull-down on PI[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRI_PD3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port I pull-down bit y (y=0..11) When set, this bit activates the pull-down on PI[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRI_PD4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port I pull-down bit y (y=0..11) When set, this bit activates the pull-down on PI[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRI_PD5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port I pull-down bit y (y=0..11) When set, this bit activates the pull-down on PI[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRI_PD6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port I pull-down bit y (y=0..11) When set, this bit activates the pull-down on PI[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRI_PD7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port I pull-down bit y (y=0..11) When set, this bit activates the pull-down on PI[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRI_PD8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port I pull-down bit y (y=0..11) When set, this bit activates the pull-down on PI[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRI_PD9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port I pull-down bit y (y=0..11) When set, this bit activates the pull-down on PI[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRI_PD10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port I pull-down bit y (y=0..11) When set, this bit activates the pull-down on PI[y] when APC bit is set in PWR_CR3 register. */
    using PWR_PDCRI_PD11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PWR control register */
    using PWR_CR5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x80, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Main regulator Range 1 mode This bit is only valid for the main regulator in Range 1 and has no effect on Range 2. It is recommended to reset this bit when the system frequency is greater than 80 MHz. Refer to Table 28: Range 1 boost mode configuration. */
    using PWR_CR5_R1MODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Main regulator in Range 1 boost mode. (value: 0)
     *          - B_0x1: Main regulator in Range 1 normal mode. (value: 1)
     */
        /** @brief Main regulator in Range 1 boost mode. */
    constexpr std::uint32_t PWR_CR5_R1MODE_B_0x0 = 0;
        /** @brief Main regulator in Range 1 normal mode. */
    constexpr std::uint32_t PWR_CR5_R1MODE_B_0x1 = 1;

}

#endif
