/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32C031_PWR_HPP
#define EMBEDDED_PP_STM32C031_PWR_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief PWR address block description */
namespace STM32C031::PWR {

    /** @brief PWR control register 1 */
    using PWR_CR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Low-power mode selection These bits select the low-power mode entered when CPU enters deepsleep mode. 1XX: Shutdown mode */
    using PWR_CR1_LPMS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Stop mode (value: 0)
     *          - B_0x3: Standby mode (value: 3)
     */
        /** @brief Stop mode */
    constexpr std::uint32_t PWR_CR1_LPMS_B_0x0 = 0;
        /** @brief Standby mode */
    constexpr std::uint32_t PWR_CR1_LPMS_B_0x3 = 3;

    /** @brief Flash memory powered down during Stop mode This bit determines whether the Flash memory is put in power-down mode or remains in idle mode when the device enters Stop mode. */
    using PWR_CR1_FPD_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Flash memory idle (value: 0)
     *          - B_0x1: Flash memory powered down (value: 1)
     */
        /** @brief Flash memory idle */
    constexpr std::uint32_t PWR_CR1_FPD_STOP_B_0x0 = 0;
        /** @brief Flash memory powered down */
    constexpr std::uint32_t PWR_CR1_FPD_STOP_B_0x1 = 1;

    /** @brief Flash memory powered down during Sleep mode This bit determines whether the Flash memory is put in power-down mode or remains in idle mode when the device enters Sleep mode. */
    using PWR_CR1_FPD_SLP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Flash memory idle (value: 0)
     *          - B_0x1: Flash memory powered down (value: 1)
     */
        /** @brief Flash memory idle */
    constexpr std::uint32_t PWR_CR1_FPD_SLP_B_0x0 = 0;
        /** @brief Flash memory powered down */
    constexpr std::uint32_t PWR_CR1_FPD_SLP_B_0x1 = 1;

    /** @brief PWR control register 3 */
    using PWR_CR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable WKUP1 wakeup pin When this bit is set, the WKUP1 external wakeup pin is enabled and triggers a wakeup event when a rising or a falling edge occurs. The active edge is configured via the WP1 bit of the PWR_CR4 register. */
    using PWR_CR3_EWUP1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable WKUP2 wakeup pin When this bit is set, the WKUP2 external wakeup pin is enabled and triggers a wakeup event when a rising or a falling edge occurs. The active edge is configured via the WP2 bit of the PWR_CR4 register. */
    using PWR_CR3_EWUP2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable WKUP3 wakeup pin When this bit is set, the WKUP3 external wakeup pin is enabled and triggers a wakeup event when a rising or a falling edge occurs. The active edge is configured via the WP3 bit of the PWR_CR4 register. */
    using PWR_CR3_EWUP3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable WKUP4 wakeup pin When this bit is set, the WKUP4 external wakeup pin is enabled and triggers a wakeup event when a rising or a falling edge occurs. The active edge is configured via the WP4 bit in the PWR_CR4 register. */
    using PWR_CR3_EWUP4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable WKUP6 wakeup pin When this bit is set, the WKUP6 external wakeup pin is enabled and triggers a wakeup event when a rising or a falling edge occurs. The active edge is configured through WP6 bit in the PWR_CR4 register. */
    using PWR_CR3_EWUP6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Apply pull-up and pull-down configuration This bit determines whether the I/O pull-up and pull-down configurations defined in the PWR_PUCRx and PWR_PDCRx registers are applied. */
    using PWR_CR3_APC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Not applied (value: 0)
     *          - B_0x1: Applied (value: 1)
     */
        /** @brief Not applied */
    constexpr std::uint32_t PWR_CR3_APC_B_0x0 = 0;
        /** @brief Applied */
    constexpr std::uint32_t PWR_CR3_APC_B_0x1 = 1;

    /** @brief Enable internal wakeup line When set, a rising edge on the internal wakeup line triggers a wakeup event. */
    using PWR_CR3_EIWUL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t PWR_CR3_EIWUL_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t PWR_CR3_EIWUL_B_0x1 = 1;

    /** @brief PWR control register 4 */
    using PWR_CR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WKUP1 wakeup pin polarity WKUP1 external wakeup signal polarity (level or edge) to generate wakeup condition: */
    using PWR_CR4_WP1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: High level or rising edge (value: 0)
     *          - B_0x1: Low level or falling edge (value: 1)
     */
        /** @brief High level or rising edge */
    constexpr std::uint32_t PWR_CR4_WP1_B_0x0 = 0;
        /** @brief Low level or falling edge */
    constexpr std::uint32_t PWR_CR4_WP1_B_0x1 = 1;

    /** @brief WKUP2 wakeup pin polarity WKUP2 external wakeup signal polarity (level or edge) to generate wakeup condition: */
    using PWR_CR4_WP2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: High level or rising edge (value: 0)
     *          - B_0x1: Low level or falling edge (value: 1)
     */
        /** @brief High level or rising edge */
    constexpr std::uint32_t PWR_CR4_WP2_B_0x0 = 0;
        /** @brief Low level or falling edge */
    constexpr std::uint32_t PWR_CR4_WP2_B_0x1 = 1;

    /** @brief WKUP3 wakeup pin polarity WKUP3 external wakeup signal polarity (level or edge) to generate wakeup condition: */
    using PWR_CR4_WP3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: High level or rising edge (value: 0)
     *          - B_0x1: Low level or falling edge (value: 1)
     */
        /** @brief High level or rising edge */
    constexpr std::uint32_t PWR_CR4_WP3_B_0x0 = 0;
        /** @brief Low level or falling edge */
    constexpr std::uint32_t PWR_CR4_WP3_B_0x1 = 1;

    /** @brief WKUP4 wakeup pin polarity WKUP4 external wakeup signal polarity (level or edge) to generate wakeup condition: */
    using PWR_CR4_WP4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: High level or rising edge (value: 0)
     *          - B_0x1: Low level or falling edge (value: 1)
     */
        /** @brief High level or rising edge */
    constexpr std::uint32_t PWR_CR4_WP4_B_0x0 = 0;
        /** @brief Low level or falling edge */
    constexpr std::uint32_t PWR_CR4_WP4_B_0x1 = 1;

    /** @brief WKUP6 wakeup pin polarity WKUP6 external wakeup signal polarity (level or edge) to generate wakeup condition: */
    using PWR_CR4_WP6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: High level or rising edge (value: 0)
     *          - B_0x1: Low level or falling edge (value: 1)
     */
        /** @brief High level or rising edge */
    constexpr std::uint32_t PWR_CR4_WP6_B_0x0 = 0;
        /** @brief Low level or falling edge */
    constexpr std::uint32_t PWR_CR4_WP6_B_0x1 = 1;

    /** @brief PWR status register 1 */
    using PWR_SR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wakeup flag 1 This bit is set when a wakeup condition is detected on WKUP1 wakeup pin. It is cleared by setting the CWUF1 bit of the PWR_SCR register. */
    using PWR_SR1_WUF1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wakeup flag 2 This bit is set when a wakeup condition is detected on WKUP2 wakeup pin. It is cleared by setting the CWUF2 bit of the PWR_SCR register. */
    using PWR_SR1_WUF2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wakeup flag 3 This bit is set when a wakeup condition is detected on WKUP3 wakeup pin. It is cleared by setting the CWUF3 bit of the PWR_SCR register. */
    using PWR_SR1_WUF3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wakeup flag 4 This bit is set when a wakeup condition is detected on WKUP4 wakeup pin. It is cleared by setting the CWUF4 bit of the PWR_SCR register. */
    using PWR_SR1_WUF4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wakeup flag 6 This bit is set when a wakeup condition is detected on WKUP6 wakeup pin. It is cleared by setting the CWUF6 bit of the PWR_SCR register. */
    using PWR_SR1_WUF6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Standby/Shutdown flag This bit is set by hardware when the device enters Standby or Shutdown mode and is cleared by setting the CSBF bit in the PWR_SCR register, or by a power-on reset. It is not cleared by the system reset. */
    using PWR_SR1_SBF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The device did not enter Standby or Shutdown mode (value: 0)
     *          - B_0x1: The device entered Standby or Shutdown mode (value: 1)
     */
        /** @brief The device did not enter Standby or Shutdown mode */
    constexpr std::uint32_t PWR_SR1_SBF_B_0x0 = 0;
        /** @brief The device entered Standby or Shutdown mode */
    constexpr std::uint32_t PWR_SR1_SBF_B_0x1 = 1;

    /** @brief Wakeup flag internal This bit is set when a wakeup condition is detected on the internal wakeup line. It is cleared when all internal wakeup sources are cleared. */
    using PWR_SR1_WUFI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PWR status register 2 */
    using PWR_SR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Flash ready flag This bit is set by hardware to indicate when the Flash memory is ready to be accessed after wakeup from power-down. To place the Flash memory in power-down, set either FPD_SLP or FPD_STP bit. Note: If the system boots from SRAM, the user application must wait till FLASH_RDY bit is set, prior to jumping to Flash memory. */
    using PWR_SR2_FLASH_RDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Flash memory in power-down (value: 0)
     *          - B_0x1: Flash memory ready to be accessed (value: 1)
     */
        /** @brief Flash memory in power-down */
    constexpr std::uint32_t PWR_SR2_FLASH_RDY_B_0x0 = 0;
        /** @brief Flash memory ready to be accessed */
    constexpr std::uint32_t PWR_SR2_FLASH_RDY_B_0x1 = 1;

    /** @brief PWR status clear register */
    using PWR_SCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear wakeup flag 1 Setting this bit clears the WUF1 flag in the PWR_SR1 register. */
    using PWR_SCR_CWUF1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear wakeup flag 2 Setting this bit clears the WUF2 flag in the PWR_SR1 register. */
    using PWR_SCR_CWUF2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear wakeup flag 3 Setting this bit clears the WUF3 flag in the PWR_SR1 register. */
    using PWR_SCR_CWUF3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear wakeup flag 4 Setting this bit clears the WUF4 flag in the PWR_SR1 register. */
    using PWR_SCR_CWUF4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear wakeup flag 6 Setting this bit clears the WUF6 flag in the PWR_SR1 register. */
    using PWR_SCR_CWUF6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear standby flag Setting this bit clears the SBF flag in the PWR_SR1 register. */
    using PWR_SCR_CSBF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PWR Port A pull-up control register */
    using PWR_PUCRA = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-up bit i (i = 15 to 0) Setting PUi bit while the corresponding PDi bit is zero and the APC bit of the PWR_CR3 register is set activates a pull-up device on the PA[i] I/O. */
    using PWR_PUCRA_PU0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-up bit i (i = 15 to 0) Setting PUi bit while the corresponding PDi bit is zero and the APC bit of the PWR_CR3 register is set activates a pull-up device on the PA[i] I/O. */
    using PWR_PUCRA_PU1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-up bit i (i = 15 to 0) Setting PUi bit while the corresponding PDi bit is zero and the APC bit of the PWR_CR3 register is set activates a pull-up device on the PA[i] I/O. */
    using PWR_PUCRA_PU2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-up bit i (i = 15 to 0) Setting PUi bit while the corresponding PDi bit is zero and the APC bit of the PWR_CR3 register is set activates a pull-up device on the PA[i] I/O. */
    using PWR_PUCRA_PU3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-up bit i (i = 15 to 0) Setting PUi bit while the corresponding PDi bit is zero and the APC bit of the PWR_CR3 register is set activates a pull-up device on the PA[i] I/O. */
    using PWR_PUCRA_PU4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-up bit i (i = 15 to 0) Setting PUi bit while the corresponding PDi bit is zero and the APC bit of the PWR_CR3 register is set activates a pull-up device on the PA[i] I/O. */
    using PWR_PUCRA_PU5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-up bit i (i = 15 to 0) Setting PUi bit while the corresponding PDi bit is zero and the APC bit of the PWR_CR3 register is set activates a pull-up device on the PA[i] I/O. */
    using PWR_PUCRA_PU6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-up bit i (i = 15 to 0) Setting PUi bit while the corresponding PDi bit is zero and the APC bit of the PWR_CR3 register is set activates a pull-up device on the PA[i] I/O. */
    using PWR_PUCRA_PU7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-up bit i (i = 15 to 0) Setting PUi bit while the corresponding PDi bit is zero and the APC bit of the PWR_CR3 register is set activates a pull-up device on the PA[i] I/O. */
    using PWR_PUCRA_PU8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-up bit i (i = 15 to 0) Setting PUi bit while the corresponding PDi bit is zero and the APC bit of the PWR_CR3 register is set activates a pull-up device on the PA[i] I/O. */
    using PWR_PUCRA_PU9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-up bit i (i = 15 to 0) Setting PUi bit while the corresponding PDi bit is zero and the APC bit of the PWR_CR3 register is set activates a pull-up device on the PA[i] I/O. */
    using PWR_PUCRA_PU10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-up bit i (i = 15 to 0) Setting PUi bit while the corresponding PDi bit is zero and the APC bit of the PWR_CR3 register is set activates a pull-up device on the PA[i] I/O. */
    using PWR_PUCRA_PU11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-up bit i (i = 15 to 0) Setting PUi bit while the corresponding PDi bit is zero and the APC bit of the PWR_CR3 register is set activates a pull-up device on the PA[i] I/O. */
    using PWR_PUCRA_PU12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-up bit i (i = 15 to 0) Setting PUi bit while the corresponding PDi bit is zero and the APC bit of the PWR_CR3 register is set activates a pull-up device on the PA[i] I/O. */
    using PWR_PUCRA_PU13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-up bit i (i = 15 to 0) Setting PUi bit while the corresponding PDi bit is zero and the APC bit of the PWR_CR3 register is set activates a pull-up device on the PA[i] I/O. */
    using PWR_PUCRA_PU14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-up bit i (i = 15 to 0) Setting PUi bit while the corresponding PDi bit is zero and the APC bit of the PWR_CR3 register is set activates a pull-up device on the PA[i] I/O. */
    using PWR_PUCRA_PU15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PWR Port A pull-down control register */
    using PWR_PDCRA = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-down bit i (i = 15 to 0) Setting PDi bit while the APC bit of the PWR_CR3 register is set activates a pull-down device on the PA[i] I/O. */
    using PWR_PDCRA_PD0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-down bit i (i = 15 to 0) Setting PDi bit while the APC bit of the PWR_CR3 register is set activates a pull-down device on the PA[i] I/O. */
    using PWR_PDCRA_PD1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-down bit i (i = 15 to 0) Setting PDi bit while the APC bit of the PWR_CR3 register is set activates a pull-down device on the PA[i] I/O. */
    using PWR_PDCRA_PD2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-down bit i (i = 15 to 0) Setting PDi bit while the APC bit of the PWR_CR3 register is set activates a pull-down device on the PA[i] I/O. */
    using PWR_PDCRA_PD3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-down bit i (i = 15 to 0) Setting PDi bit while the APC bit of the PWR_CR3 register is set activates a pull-down device on the PA[i] I/O. */
    using PWR_PDCRA_PD4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-down bit i (i = 15 to 0) Setting PDi bit while the APC bit of the PWR_CR3 register is set activates a pull-down device on the PA[i] I/O. */
    using PWR_PDCRA_PD5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-down bit i (i = 15 to 0) Setting PDi bit while the APC bit of the PWR_CR3 register is set activates a pull-down device on the PA[i] I/O. */
    using PWR_PDCRA_PD6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-down bit i (i = 15 to 0) Setting PDi bit while the APC bit of the PWR_CR3 register is set activates a pull-down device on the PA[i] I/O. */
    using PWR_PDCRA_PD7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-down bit i (i = 15 to 0) Setting PDi bit while the APC bit of the PWR_CR3 register is set activates a pull-down device on the PA[i] I/O. */
    using PWR_PDCRA_PD8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-down bit i (i = 15 to 0) Setting PDi bit while the APC bit of the PWR_CR3 register is set activates a pull-down device on the PA[i] I/O. */
    using PWR_PDCRA_PD9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-down bit i (i = 15 to 0) Setting PDi bit while the APC bit of the PWR_CR3 register is set activates a pull-down device on the PA[i] I/O. */
    using PWR_PDCRA_PD10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-down bit i (i = 15 to 0) Setting PDi bit while the APC bit of the PWR_CR3 register is set activates a pull-down device on the PA[i] I/O. */
    using PWR_PDCRA_PD11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-down bit i (i = 15 to 0) Setting PDi bit while the APC bit of the PWR_CR3 register is set activates a pull-down device on the PA[i] I/O. */
    using PWR_PDCRA_PD12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-down bit i (i = 15 to 0) Setting PDi bit while the APC bit of the PWR_CR3 register is set activates a pull-down device on the PA[i] I/O. */
    using PWR_PDCRA_PD13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-down bit i (i = 15 to 0) Setting PDi bit while the APC bit of the PWR_CR3 register is set activates a pull-down device on the PA[i] I/O. */
    using PWR_PDCRA_PD14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-down bit i (i = 15 to 0) Setting PDi bit while the APC bit of the PWR_CR3 register is set activates a pull-down device on the PA[i] I/O. */
    using PWR_PDCRA_PD15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PWR Port B pull-up control register */
    using PWR_PUCRB = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-up bit i (i = 15 to 0) Setting PUi bit while the corresponding PDi bit is zero and the APC bit of the PWR_CR3 register is set activates a pull-up device on the PB[i] I/O. On STM32C011xx, only PU7 and PU6 are available */
    using PWR_PUCRB_PU0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-up bit i (i = 15 to 0) Setting PUi bit while the corresponding PDi bit is zero and the APC bit of the PWR_CR3 register is set activates a pull-up device on the PB[i] I/O. On STM32C011xx, only PU7 and PU6 are available */
    using PWR_PUCRB_PU1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-up bit i (i = 15 to 0) Setting PUi bit while the corresponding PDi bit is zero and the APC bit of the PWR_CR3 register is set activates a pull-up device on the PB[i] I/O. On STM32C011xx, only PU7 and PU6 are available */
    using PWR_PUCRB_PU2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-up bit i (i = 15 to 0) Setting PUi bit while the corresponding PDi bit is zero and the APC bit of the PWR_CR3 register is set activates a pull-up device on the PB[i] I/O. On STM32C011xx, only PU7 and PU6 are available */
    using PWR_PUCRB_PU3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-up bit i (i = 15 to 0) Setting PUi bit while the corresponding PDi bit is zero and the APC bit of the PWR_CR3 register is set activates a pull-up device on the PB[i] I/O. On STM32C011xx, only PU7 and PU6 are available */
    using PWR_PUCRB_PU4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-up bit i (i = 15 to 0) Setting PUi bit while the corresponding PDi bit is zero and the APC bit of the PWR_CR3 register is set activates a pull-up device on the PB[i] I/O. On STM32C011xx, only PU7 and PU6 are available */
    using PWR_PUCRB_PU5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-up bit i (i = 15 to 0) Setting PUi bit while the corresponding PDi bit is zero and the APC bit of the PWR_CR3 register is set activates a pull-up device on the PB[i] I/O. On STM32C011xx, only PU7 and PU6 are available */
    using PWR_PUCRB_PU6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-up bit i (i = 15 to 0) Setting PUi bit while the corresponding PDi bit is zero and the APC bit of the PWR_CR3 register is set activates a pull-up device on the PB[i] I/O. On STM32C011xx, only PU7 and PU6 are available */
    using PWR_PUCRB_PU7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-up bit i (i = 15 to 0) Setting PUi bit while the corresponding PDi bit is zero and the APC bit of the PWR_CR3 register is set activates a pull-up device on the PB[i] I/O. On STM32C011xx, only PU7 and PU6 are available */
    using PWR_PUCRB_PU8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-up bit i (i = 15 to 0) Setting PUi bit while the corresponding PDi bit is zero and the APC bit of the PWR_CR3 register is set activates a pull-up device on the PB[i] I/O. On STM32C011xx, only PU7 and PU6 are available */
    using PWR_PUCRB_PU9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-up bit i (i = 15 to 0) Setting PUi bit while the corresponding PDi bit is zero and the APC bit of the PWR_CR3 register is set activates a pull-up device on the PB[i] I/O. On STM32C011xx, only PU7 and PU6 are available */
    using PWR_PUCRB_PU10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-up bit i (i = 15 to 0) Setting PUi bit while the corresponding PDi bit is zero and the APC bit of the PWR_CR3 register is set activates a pull-up device on the PB[i] I/O. On STM32C011xx, only PU7 and PU6 are available */
    using PWR_PUCRB_PU11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-up bit i (i = 15 to 0) Setting PUi bit while the corresponding PDi bit is zero and the APC bit of the PWR_CR3 register is set activates a pull-up device on the PB[i] I/O. On STM32C011xx, only PU7 and PU6 are available */
    using PWR_PUCRB_PU12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-up bit i (i = 15 to 0) Setting PUi bit while the corresponding PDi bit is zero and the APC bit of the PWR_CR3 register is set activates a pull-up device on the PB[i] I/O. On STM32C011xx, only PU7 and PU6 are available */
    using PWR_PUCRB_PU13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-up bit i (i = 15 to 0) Setting PUi bit while the corresponding PDi bit is zero and the APC bit of the PWR_CR3 register is set activates a pull-up device on the PB[i] I/O. On STM32C011xx, only PU7 and PU6 are available */
    using PWR_PUCRB_PU14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-up bit i (i = 15 to 0) Setting PUi bit while the corresponding PDi bit is zero and the APC bit of the PWR_CR3 register is set activates a pull-up device on the PB[i] I/O. On STM32C011xx, only PU7 and PU6 are available */
    using PWR_PUCRB_PU15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PWR Port B pull-down control register */
    using PWR_PDCRB = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-down bit i (i = 15 to 0) Setting PDi bit while the APC bit of the PWR_CR3 register is set activates a pull-down device on the PB[i] I/O. On STM32C011xx, only PD7 and PD6 are available */
    using PWR_PDCRB_PD0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-down bit i (i = 15 to 0) Setting PDi bit while the APC bit of the PWR_CR3 register is set activates a pull-down device on the PB[i] I/O. On STM32C011xx, only PD7 and PD6 are available */
    using PWR_PDCRB_PD1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-down bit i (i = 15 to 0) Setting PDi bit while the APC bit of the PWR_CR3 register is set activates a pull-down device on the PB[i] I/O. On STM32C011xx, only PD7 and PD6 are available */
    using PWR_PDCRB_PD2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-down bit i (i = 15 to 0) Setting PDi bit while the APC bit of the PWR_CR3 register is set activates a pull-down device on the PB[i] I/O. On STM32C011xx, only PD7 and PD6 are available */
    using PWR_PDCRB_PD3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-down bit i (i = 15 to 0) Setting PDi bit while the APC bit of the PWR_CR3 register is set activates a pull-down device on the PB[i] I/O. On STM32C011xx, only PD7 and PD6 are available */
    using PWR_PDCRB_PD4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-down bit i (i = 15 to 0) Setting PDi bit while the APC bit of the PWR_CR3 register is set activates a pull-down device on the PB[i] I/O. On STM32C011xx, only PD7 and PD6 are available */
    using PWR_PDCRB_PD5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-down bit i (i = 15 to 0) Setting PDi bit while the APC bit of the PWR_CR3 register is set activates a pull-down device on the PB[i] I/O. On STM32C011xx, only PD7 and PD6 are available */
    using PWR_PDCRB_PD6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-down bit i (i = 15 to 0) Setting PDi bit while the APC bit of the PWR_CR3 register is set activates a pull-down device on the PB[i] I/O. On STM32C011xx, only PD7 and PD6 are available */
    using PWR_PDCRB_PD7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-down bit i (i = 15 to 0) Setting PDi bit while the APC bit of the PWR_CR3 register is set activates a pull-down device on the PB[i] I/O. On STM32C011xx, only PD7 and PD6 are available */
    using PWR_PDCRB_PD8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-down bit i (i = 15 to 0) Setting PDi bit while the APC bit of the PWR_CR3 register is set activates a pull-down device on the PB[i] I/O. On STM32C011xx, only PD7 and PD6 are available */
    using PWR_PDCRB_PD9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-down bit i (i = 15 to 0) Setting PDi bit while the APC bit of the PWR_CR3 register is set activates a pull-down device on the PB[i] I/O. On STM32C011xx, only PD7 and PD6 are available */
    using PWR_PDCRB_PD10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-down bit i (i = 15 to 0) Setting PDi bit while the APC bit of the PWR_CR3 register is set activates a pull-down device on the PB[i] I/O. On STM32C011xx, only PD7 and PD6 are available */
    using PWR_PDCRB_PD11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-down bit i (i = 15 to 0) Setting PDi bit while the APC bit of the PWR_CR3 register is set activates a pull-down device on the PB[i] I/O. On STM32C011xx, only PD7 and PD6 are available */
    using PWR_PDCRB_PD12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-down bit i (i = 15 to 0) Setting PDi bit while the APC bit of the PWR_CR3 register is set activates a pull-down device on the PB[i] I/O. On STM32C011xx, only PD7 and PD6 are available */
    using PWR_PDCRB_PD13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-down bit i (i = 15 to 0) Setting PDi bit while the APC bit of the PWR_CR3 register is set activates a pull-down device on the PB[i] I/O. On STM32C011xx, only PD7 and PD6 are available */
    using PWR_PDCRB_PD14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-down bit i (i = 15 to 0) Setting PDi bit while the APC bit of the PWR_CR3 register is set activates a pull-down device on the PB[i] I/O. On STM32C011xx, only PD7 and PD6 are available */
    using PWR_PDCRB_PD15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PWR Port C pull-up control register */
    using PWR_PUCRC = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-up bit i (i = 15 to 13, 7 to 6) Setting PUi bit while the corresponding PDi bit is zero and the APC bit of the PWR_CR3 register is set activates a pull-up device on the PC[i] I/O. On STM32C011xx, only PU15 and PU14 are available */
    using PWR_PUCRC_PU6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-up bit i (i = 15 to 13, 7 to 6) Setting PUi bit while the corresponding PDi bit is zero and the APC bit of the PWR_CR3 register is set activates a pull-up device on the PC[i] I/O. On STM32C011xx, only PU15 and PU14 are available */
    using PWR_PUCRC_PU7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-up bit i (i = 15 to 13, 7 to 6) Setting PUi bit while the corresponding PDi bit is zero and the APC bit of the PWR_CR3 register is set activates a pull-up device on the PC[i] I/O. On STM32C011xx, only PU15 and PU14 are available */
    using PWR_PUCRC_PU13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-up bit i (i = 15 to 13, 7 to 6) Setting PUi bit while the corresponding PDi bit is zero and the APC bit of the PWR_CR3 register is set activates a pull-up device on the PC[i] I/O. On STM32C011xx, only PU15 and PU14 are available */
    using PWR_PUCRC_PU14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-up bit i (i = 15 to 13, 7 to 6) Setting PUi bit while the corresponding PDi bit is zero and the APC bit of the PWR_CR3 register is set activates a pull-up device on the PC[i] I/O. On STM32C011xx, only PU15 and PU14 are available */
    using PWR_PUCRC_PU15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PWR Port C pull-down control register */
    using PWR_PDCRC = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-down bit i (i = 15, 14, 13, 7, 6) Setting PDi bit while the APC bit of the PWR_CR3 register is set activates a pull-down device on the PC[i] I/O. On STM32C011xx, only PD15 and PD14 are available. */
    using PWR_PDCRC_PD6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-down bit i (i = 15, 14, 13, 7, 6) Setting PDi bit while the APC bit of the PWR_CR3 register is set activates a pull-down device on the PC[i] I/O. On STM32C011xx, only PD15 and PD14 are available. */
    using PWR_PDCRC_PD7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-down bit i (i = 15, 14, 13, 7, 6) Setting PDi bit while the APC bit of the PWR_CR3 register is set activates a pull-down device on the PC[i] I/O. On STM32C011xx, only PD15 and PD14 are available. */
    using PWR_PDCRC_PD13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-down bit i (i = 15, 14, 13, 7, 6) Setting PDi bit while the APC bit of the PWR_CR3 register is set activates a pull-down device on the PC[i] I/O. On STM32C011xx, only PD15 and PD14 are available. */
    using PWR_PDCRC_PD14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pull-down bit i (i = 15, 14, 13, 7, 6) Setting PDi bit while the APC bit of the PWR_CR3 register is set activates a pull-down device on the PC[i] I/O. On STM32C011xx, only PD15 and PD14 are available. */
    using PWR_PDCRC_PD15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PWR Port D pull-up control register */
    using PWR_PUCRD = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-up bit i (i = 3 to 0) Setting PUi bit while the corresponding PDi bit is zero and the APC bit of the PWR_CR3 register is set activates a pull-up device on the PD[i] I/O. */
    using PWR_PUCRD_PU0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-up bit i (i = 3 to 0) Setting PUi bit while the corresponding PDi bit is zero and the APC bit of the PWR_CR3 register is set activates a pull-up device on the PD[i] I/O. */
    using PWR_PUCRD_PU1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-up bit i (i = 3 to 0) Setting PUi bit while the corresponding PDi bit is zero and the APC bit of the PWR_CR3 register is set activates a pull-up device on the PD[i] I/O. */
    using PWR_PUCRD_PU2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-up bit i (i = 3 to 0) Setting PUi bit while the corresponding PDi bit is zero and the APC bit of the PWR_CR3 register is set activates a pull-up device on the PD[i] I/O. */
    using PWR_PUCRD_PU3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PWR Port D pull-down control register */
    using PWR_PDCRD = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-down bit i (i = 3 to 0) Setting PDi bit while the APC bit of the PWR_CR3 register is set activates a pull-down device on the PD[i] I/O. */
    using PWR_PDCRD_PD0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-down bit i (i = 3 to 0) Setting PDi bit while the APC bit of the PWR_CR3 register is set activates a pull-down device on the PD[i] I/O. */
    using PWR_PDCRD_PD1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-down bit i (i = 3 to 0) Setting PDi bit while the APC bit of the PWR_CR3 register is set activates a pull-down device on the PD[i] I/O. */
    using PWR_PDCRD_PD2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pull-down bit i (i = 3 to 0) Setting PDi bit while the APC bit of the PWR_CR3 register is set activates a pull-down device on the PD[i] I/O. */
    using PWR_PDCRD_PD3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PWR Port F pull-up control register */
    using PWR_PUCRF = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port F pull-up bit i (i = 2 to 0) Setting PUi bit while the corresponding PDi bit is zero and the APC bit of the PWR_CR3 register is set activates a pull-up device on the PF[i] I/O. On STM32C011xx, only PU2 is available. */
    using PWR_PUCRF_PU0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port F pull-up bit i (i = 2 to 0) Setting PUi bit while the corresponding PDi bit is zero and the APC bit of the PWR_CR3 register is set activates a pull-up device on the PF[i] I/O. On STM32C011xx, only PU2 is available. */
    using PWR_PUCRF_PU1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port F pull-up bit i (i = 2 to 0) Setting PUi bit while the corresponding PDi bit is zero and the APC bit of the PWR_CR3 register is set activates a pull-up device on the PF[i] I/O. On STM32C011xx, only PU2 is available. */
    using PWR_PUCRF_PU2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PWR Port F pull-down control register */
    using PWR_PDCRF = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port F pull-down bit i (i = 2 to 0) Setting PDi bit while the APC bit of the PWR_CR3 register is set activates a pull-down device on the PF[i] I/O. On STM32C011xx, only PD2 is available. */
    using PWR_PDCRF_PD0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port F pull-down bit i (i = 2 to 0) Setting PDi bit while the APC bit of the PWR_CR3 register is set activates a pull-down device on the PF[i] I/O. On STM32C011xx, only PD2 is available. */
    using PWR_PDCRF_PD1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port F pull-down bit i (i = 2 to 0) Setting PDi bit while the APC bit of the PWR_CR3 register is set activates a pull-down device on the PF[i] I/O. On STM32C011xx, only PD2 is available. */
    using PWR_PDCRF_PD2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
