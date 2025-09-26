/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32H7S_OTG_HS_HPP
#define EMBEDDED_PP_STM32H7S_OTG_HS_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief OTG register block */
namespace STM32H7S::OTG_HS {

    /** @brief OTG control and status register */
    using OTG_GOTGCTL = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief V<sub>BUS</sub> valid override enable. This bit is used to enable/disable the software to override the vbusvalid signal using the VBVALOVAL bit. Note: Only accessible in host mode. */
    using OTG_GOTGCTL_VBVALOEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Override is disabled and vbusvalid signal from the respective PHY selected is used internally by the core (value: 0)
     *          - B_0x1: Internally vbusvalid received from the PHY is overridden with VBVALOVAL bit value (value: 1)
     */
        /** @brief Override is disabled and vbusvalid signal from the respective PHY selected is used internally by the core */
    constexpr std::uint32_t OTG_GOTGCTL_VBVALOEN_B_0x0 = 0;
        /** @brief Internally vbusvalid received from the PHY is overridden with VBVALOVAL bit value */
    constexpr std::uint32_t OTG_GOTGCTL_VBVALOEN_B_0x1 = 1;

    /** @brief V<sub>BUS</sub> valid override value. This bit is used to set override value for vbusvalid signal when VBVALOEN bit is set. Note: Only accessible in host mode. */
    using OTG_GOTGCTL_VBVALOVAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: vbusvalid value is '0' when VBVALOEN = 1 (value: 0)
     *          - B_0x1: vbusvalid value is '1' when VBVALOEN = 1 (value: 1)
     */
        /** @brief vbusvalid value is '0' when VBVALOEN = 1 */
    constexpr std::uint32_t OTG_GOTGCTL_VBVALOVAL_B_0x0 = 0;
        /** @brief vbusvalid value is '1' when VBVALOEN = 1 */
    constexpr std::uint32_t OTG_GOTGCTL_VBVALOVAL_B_0x1 = 1;

    /** @brief A-peripheral session valid override enable. This bit is used to enable/disable the software to override the Avalid signal using the AVALOVAL bit. Note: Only accessible in host mode. */
    using OTG_GOTGCTL_AVALOEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Override is disabled and Avalid signal from the respective PHY selected is used internally by the core (value: 0)
     *          - B_0x1: Internally Avalid received from the PHY is overridden with AVALOVAL bit value (value: 1)
     */
        /** @brief Override is disabled and Avalid signal from the respective PHY selected is used internally by the core */
    constexpr std::uint32_t OTG_GOTGCTL_AVALOEN_B_0x0 = 0;
        /** @brief Internally Avalid received from the PHY is overridden with AVALOVAL bit value */
    constexpr std::uint32_t OTG_GOTGCTL_AVALOEN_B_0x1 = 1;

    /** @brief A-peripheral session valid override value. This bit is used to set override value for Avalid signal when AVALOEN bit is set. Note: Only accessible in host mode. */
    using OTG_GOTGCTL_AVALOVAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Avalid value is '0' when AVALOEN = 1 (value: 0)
     *          - B_0x1: Avalid value is '1' when AVALOEN = 1 (value: 1)
     */
        /** @brief Avalid value is '0' when AVALOEN = 1 */
    constexpr std::uint32_t OTG_GOTGCTL_AVALOVAL_B_0x0 = 0;
        /** @brief Avalid value is '1' when AVALOEN = 1 */
    constexpr std::uint32_t OTG_GOTGCTL_AVALOVAL_B_0x1 = 1;

    /** @brief B-peripheral session valid override enable. This bit is used to enable/disable the software to override the Bvalid signal using the BVALOVAL bit. 1	Internally Bvalid received from the PHY is overridden with BVALOVAL bit value Note: Only accessible in device mode. */
    using OTG_GOTGCTL_BVALOEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Override is disabled and Bvalid signal from the respective PHY selected is used internally by the core (value: 0)
     */
        /** @brief Override is disabled and Bvalid signal from the respective PHY selected is used internally by the core */
    constexpr std::uint32_t OTG_GOTGCTL_BVALOEN_B_0x0 = 0;

    /** @brief B-peripheral session valid override value. This bit is used to set override value for Bvalid signal when BVALOEN bit is set. Note: Only accessible in device mode. */
    using OTG_GOTGCTL_BVALOVAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bvalid value is '0' when BVALOEN = 1 (value: 0)
     *          - B_0x1: Bvalid value is '1' when BVALOEN = 1 (value: 1)
     */
        /** @brief Bvalid value is '0' when BVALOEN = 1 */
    constexpr std::uint32_t OTG_GOTGCTL_BVALOVAL_B_0x0 = 0;
        /** @brief Bvalid value is '1' when BVALOEN = 1 */
    constexpr std::uint32_t OTG_GOTGCTL_BVALOVAL_B_0x1 = 1;

    /** @brief Embedded host enable It is used to select between OTG A device state machine and embedded host state machine. */
    using OTG_GOTGCTL_EHEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OTG A device state machine is selected (value: 0)
     *          - B_0x1: Embedded host state machine is selected (value: 1)
     */
        /** @brief OTG A device state machine is selected */
    constexpr std::uint32_t OTG_GOTGCTL_EHEN_B_0x0 = 0;
        /** @brief Embedded host state machine is selected */
    constexpr std::uint32_t OTG_GOTGCTL_EHEN_B_0x1 = 1;

    /** @brief Connector ID status Indicates the connector ID status on a connect event. Note: Accessible in both device and host modes. */
    using OTG_GOTGCTL_CIDSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The OTG_HS controller is in A-device mode (value: 0)
     *          - B_0x1: The OTG_HS controller is in B-device mode (value: 1)
     */
        /** @brief The OTG_HS controller is in A-device mode */
    constexpr std::uint32_t OTG_GOTGCTL_CIDSTS_B_0x0 = 0;
        /** @brief The OTG_HS controller is in B-device mode */
    constexpr std::uint32_t OTG_GOTGCTL_CIDSTS_B_0x1 = 1;

    /** @brief Long/short debounce time Indicates the debounce time of a detected connection. Note: Only accessible in host mode. */
    using OTG_GOTGCTL_DBCT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Long debounce time, used for physical connections (100 ms + 2.5 s) (value: 0)
     *          - B_0x1: Short debounce time, used for soft connections (2.5 s) (value: 1)
     */
        /** @brief Long debounce time, used for physical connections (100 ms + 2.5 s) */
    constexpr std::uint32_t OTG_GOTGCTL_DBCT_B_0x0 = 0;
        /** @brief Short debounce time, used for soft connections (2.5 s) */
    constexpr std::uint32_t OTG_GOTGCTL_DBCT_B_0x1 = 1;

    /** @brief A-session valid Indicates the host mode transceiver status. Note: Only accessible in host mode. */
    using OTG_GOTGCTL_ASVLD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: A-session is not valid (value: 0)
     *          - B_0x1: A-session is valid (value: 1)
     */
        /** @brief A-session is not valid */
    constexpr std::uint32_t OTG_GOTGCTL_ASVLD_B_0x0 = 0;
        /** @brief A-session is valid */
    constexpr std::uint32_t OTG_GOTGCTL_ASVLD_B_0x1 = 1;

    /** @brief B-session valid Indicates the device mode transceiver status. In OTG mode, the user can use this bit to determine if the device is connected or disconnected. Note: Only accessible in device mode. */
    using OTG_GOTGCTL_BSVLD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: B-session is not valid. (value: 0)
     *          - B_0x1: B-session is valid. (value: 1)
     */
        /** @brief B-session is not valid. */
    constexpr std::uint32_t OTG_GOTGCTL_BSVLD_B_0x0 = 0;
        /** @brief B-session is valid. */
    constexpr std::uint32_t OTG_GOTGCTL_BSVLD_B_0x1 = 1;

    /** @brief OTG version Selects the OTG revision. */
    using OTG_GOTGCTL_OTGVER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OTG Version 1.3. OTG1.3 is obsolete for new product development. (value: 0)
     *          - B_0x1: OTG Version 2.0. In this version the core supports only data line pulsing for SRP. (value: 1)
     */
        /** @brief OTG Version 1.3. OTG1.3 is obsolete for new product development. */
    constexpr std::uint32_t OTG_GOTGCTL_OTGVER_B_0x0 = 0;
        /** @brief OTG Version 2.0. In this version the core supports only data line pulsing for SRP. */
    constexpr std::uint32_t OTG_GOTGCTL_OTGVER_B_0x1 = 1;

    /** @brief Current mode of operation Indicates the current mode (host or device). */
    using OTG_GOTGCTL_CURMOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Device mode (value: 0)
     *          - B_0x1: Host mode (value: 1)
     */
        /** @brief Device mode */
    constexpr std::uint32_t OTG_GOTGCTL_CURMOD_B_0x0 = 0;
        /** @brief Host mode */
    constexpr std::uint32_t OTG_GOTGCTL_CURMOD_B_0x1 = 1;

    /** @brief OTG interrupt register */
    using OTG_GOTGINT = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Session end detected The core sets this bit to indicate that the level of the voltage on V<sub>BUS</sub> is no longer valid for a B-Peripheral session when V<sub>BUS</sub> < 0.8 V. Note: Accessible in both device and host modes. */
    using OTG_GOTGINT_SEDET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief A-device timeout change The core sets this bit to indicate that the A-device has timed out while waiting for the B-device to connect. Note: Accessible in both device and host modes. */
    using OTG_GOTGINT_ADTOCHG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG AHB configuration register */
    using OTG_GAHBCFG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Global interrupt mask The application uses this bit to mask or unmask the interrupt line assertion to itself. Irrespective of this bits setting, the interrupt status registers are updated by the core. Note: Accessible in both device and host modes. */
    using OTG_GAHBCFG_GINTMSK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Mask the interrupt assertion to the application. (value: 0)
     *          - B_0x1: Unmask the interrupt assertion to the application. (value: 1)
     */
        /** @brief Mask the interrupt assertion to the application. */
    constexpr std::uint32_t OTG_GAHBCFG_GINTMSK_B_0x0 = 0;
        /** @brief Unmask the interrupt assertion to the application. */
    constexpr std::uint32_t OTG_GAHBCFG_GINTMSK_B_0x1 = 1;

    /** @brief Burst length/type 0000 Single: Bus transactions use single 32 bit accesses (not recommended) 0001 INCR: Bus transactions use unspecified length accesses (not recommended, uses the INCR AHB bus command) 0011 INCR4: Bus transactions target 4x 32 bit accesses 0101 INCR8: Bus transactions target 8x 32 bit accesses 0111 INCR16: Bus transactions based on 16x 32 bit accesses Others: Reserved */
    using OTG_GAHBCFG_HBSTLEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA enabled */
    using OTG_GAHBCFG_DMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The core operates in slave mode (value: 0)
     *          - B_0x1: The core operates in DMA mode (value: 1)
     */
        /** @brief The core operates in slave mode */
    constexpr std::uint32_t OTG_GAHBCFG_DMAEN_B_0x0 = 0;
        /** @brief The core operates in DMA mode */
    constexpr std::uint32_t OTG_GAHBCFG_DMAEN_B_0x1 = 1;

    /** @brief Tx FIFO empty level This bit indicates when IN endpoint Transmit FIFO empty interrupt (TXFE in OTG_DIEPINTx) is triggered: This bit indicates when the nonperiodic Tx FIFO empty interrupt (NPTXFE bit in OTG_GINTSTS) is triggered: */
    using OTG_GAHBCFG_TXFELVL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0_DEVICE_MODE: The TXFE (in OTG_DIEPINTx) interrupt indicates that the IN endpoint Tx FIFO is half empty (value: 0)
     *          - B_0x1_DEVICE_MODE: The TXFE (in OTG_DIEPINTx) interrupt indicates that the IN endpoint Tx FIFO is completely empty (value: 1)
     */
        /** @brief The TXFE (in OTG_DIEPINTx) interrupt indicates that the IN endpoint Tx FIFO is half empty */
    constexpr std::uint32_t OTG_GAHBCFG_TXFELVL_B_0x0_DEVICE_MODE = 0;
        /** @brief The TXFE (in OTG_DIEPINTx) interrupt indicates that the IN endpoint Tx FIFO is completely empty */
    constexpr std::uint32_t OTG_GAHBCFG_TXFELVL_B_0x1_DEVICE_MODE = 1;

    /** @brief Periodic Tx FIFO empty level Indicates when the periodic Tx FIFO empty interrupt bit in the OTG_GINTSTS register (PTXFE bit in OTG_GINTSTS) is triggered. Note: Only accessible in host mode. */
    using OTG_GAHBCFG_PTXFELVL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PTXFE (in OTG_GINTSTS) interrupt indicates that the Periodic Tx FIFO is half empty (value: 0)
     *          - B_0x1: PTXFE (in OTG_GINTSTS) interrupt indicates that the Periodic Tx FIFO is completely empty (value: 1)
     */
        /** @brief PTXFE (in OTG_GINTSTS) interrupt indicates that the Periodic Tx FIFO is half empty */
    constexpr std::uint32_t OTG_GAHBCFG_PTXFELVL_B_0x0 = 0;
        /** @brief PTXFE (in OTG_GINTSTS) interrupt indicates that the Periodic Tx FIFO is completely empty */
    constexpr std::uint32_t OTG_GAHBCFG_PTXFELVL_B_0x1 = 1;

    /** @brief OTG USB configuration register */
    using OTG_GUSBCFG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FS timeout calibration The number of PHY clocks that the application programs in this field is added to the full-speed interpacket timeout duration in the core to account for any additional delays introduced by the PHY. This can be required, because the delay introduced by the PHY in generating the line state condition can vary from one PHY to another. The USB standard timeout value for full-speed operation is 16 to 18 (inclusive) bit times. The application must program this field based on the speed of enumeration. The number of bit times added per PHY clock is 0.25 bit times. */
    using OTG_GUSBCFG_TOCAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB turnaround time These bits allows to set the turnaround time in PHY clocks. They must be configured according to Table 683: TRDT values, depending on the application AHB frequency. Higher TRDT values allow stretching the USB response time to IN tokens in order to compensate for longer AHB read access latency to the data FIFO. Note: Only accessible in device mode. */
    using OTG_GUSBCFG_TRDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PHY Low-power clock select This bit selects either 480 MHz or 48 MHz (low-power) PHY mode. In FS and LS modes, the PHY can usually operate on a 48 MHz clock to save power. In 480 MHz mode, the UTMI interface operates at either 60 or 30 MHz, depending on whether the 8- or 16-bit data width is selected. In 48 MHz mode, the UTMI interface operates at 48 MHz in FS and LS modes. */
    using OTG_GUSBCFG_PHYLPC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 480 MHz internal PLL clock (value: 0)
     *          - B_0x1: 48 MHz external clock (value: 1)
     */
        /** @brief 480 MHz internal PLL clock */
    constexpr std::uint32_t OTG_GUSBCFG_PHYLPC_B_0x0 = 0;
        /** @brief 48 MHz external clock */
    constexpr std::uint32_t OTG_GUSBCFG_PHYLPC_B_0x1 = 1;

    /** @brief TermSel DLine pulsing selection This bit selects utmi_termselect to drive the data line pulse during SRP (session request protocol). */
    using OTG_GUSBCFG_TSDPS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Data line pulsing using utmi_txvalid (default) (value: 0)
     *          - B_0x1: Data line pulsing using utmi_termsel (value: 1)
     */
        /** @brief Data line pulsing using utmi_txvalid (default) */
    constexpr std::uint32_t OTG_GUSBCFG_TSDPS_B_0x0 = 0;
        /** @brief Data line pulsing using utmi_termsel */
    constexpr std::uint32_t OTG_GUSBCFG_TSDPS_B_0x1 = 1;

    /** @brief Force host mode Writing a 1 to this bit, forces the core to host mode irrespective of the OTG_ID input pin. After setting the force bit, the application must wait at least 25 ms before the change takes effect. Note: Accessible in both device and host modes. */
    using OTG_GUSBCFG_FHMOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal mode (value: 0)
     *          - B_0x1: Force host mode (value: 1)
     */
        /** @brief Normal mode */
    constexpr std::uint32_t OTG_GUSBCFG_FHMOD_B_0x0 = 0;
        /** @brief Force host mode */
    constexpr std::uint32_t OTG_GUSBCFG_FHMOD_B_0x1 = 1;

    /** @brief Force device mode Writing a 1 to this bit, forces the core to device mode irrespective of the OTG_ID input pin. After setting the force bit, the application must wait at least 25 ms before the change takes effect. Note: Accessible in both device and host modes. */
    using OTG_GUSBCFG_FDMOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal mode (value: 0)
     *          - B_0x1: Force device mode (value: 1)
     */
        /** @brief Normal mode */
    constexpr std::uint32_t OTG_GUSBCFG_FDMOD_B_0x0 = 0;
        /** @brief Force device mode */
    constexpr std::uint32_t OTG_GUSBCFG_FDMOD_B_0x1 = 1;

    /** @brief OTG reset register */
    using OTG_GRSTCTL = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Core soft reset Resets the HCLK and PHY clock domains as follows: Clears the interrupts and all the CSR register bits except for the following bits: GATEHCLK bit in OTG_PCGCCTL STPPCLK bit in OTG_PCGCCTL FSLSPCS bits in OTG_HCFG DSPD bit in OTG_DCFG SDIS bit in OTG_DCTL OTG_GCCFG register All module state machines (except for the AHB slave unit) are reset to the Idle state, and all the transmit FIFOs and the receive FIFO are flushed. Any transactions on the AHB Master are terminated as soon as possible, after completing the last data phase of an AHB transfer. Any transactions on the USB are terminated immediately. The application can write to this bit any time it wants to reset the core. This is a self-clearing bit and the core clears this bit after all the necessary logic is reset in the core, which can take several clocks, depending on the current state of the core. Once this bit has been cleared, the software must wait at least 3 PHY clocks before accessing the PHY domain (synchronization delay). The software must also check that bit 31 in this register is set to 1 (AHB Master is Idle) before starting any operation. Typically, the software reset is used during software development and also when the user dynamically changes the PHY selection bits in the above listed USB configuration registers. When the user changes the PHY, the corresponding clock for the PHY is selected and used in the PHY domain. Once a new clock is selected, the PHY domain has to be reset for proper operation. Note: Accessible in both device and host modes. */
    using OTG_GRSTCTL_CSRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Partial soft reset Resets the internal state machines but keeps the enumeration info. Could be used to recover some specific PHY errors. Note: Accessible in both device and host modes. */
    using OTG_GRSTCTL_PSRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Host frame counter reset The application writes this bit to reset the (micro-)frame number counter inside the core. When the (micro-)frame counter is reset, the subsequent SOF sent out by the core has a frame number of 0. When application writes '1' to the bit, it might not be able to read back the value as it gets cleared by the core in a few clock cycles. Note: Only accessible in host mode. */
    using OTG_GRSTCTL_FCRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx FIFO flush The application can flush the entire Rx FIFO using this bit, but must first ensure that the core is not in the middle of a transaction. The application must only write to this bit after checking that the core is neither reading from the Rx FIFO nor writing to the Rx FIFO. The application must wait until the bit is cleared before performing any other operations. This bit requires 8 clocks (slowest of PHY or AHB clock) to clear. Note: Accessible in both device and host modes. */
    using OTG_GRSTCTL_RXFFLSH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx FIFO flush */
    using OTG_GRSTCTL_TXFFLSH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx FIFO number This is the FIFO number that must be flushed using the Tx FIFO Flush bit. This field must not be changed until the core clears the Tx FIFO Flush bit. ... Note: Accessible in both device and host modes. */
    using OTG_GRSTCTL_TXFNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0_HOST_MODE: Non-periodic Tx FIFO flush (value: 0)
     *          - B_0x1_HOST_MODE: Periodic Tx FIFO flush (value: 1)
     *          - B_0x10_HOST_MODE: Flush all the transmit FIFOs (value: 16)
     *          - B_0x2_DEVICE_MODE: Tx FIFO 2 flush (value: 2)
     *          - B_0xF_DEVICE_MODE: Tx FIFO 15 flush (value: 15)
     */
        /** @brief Non-periodic Tx FIFO flush */
    constexpr std::uint32_t OTG_GRSTCTL_TXFNUM_B_0x0_HOST_MODE = 0;
        /** @brief Periodic Tx FIFO flush */
    constexpr std::uint32_t OTG_GRSTCTL_TXFNUM_B_0x1_HOST_MODE = 1;
        /** @brief Flush all the transmit FIFOs */
    constexpr std::uint32_t OTG_GRSTCTL_TXFNUM_B_0x10_HOST_MODE = 16;
        /** @brief Tx FIFO 2 flush */
    constexpr std::uint32_t OTG_GRSTCTL_TXFNUM_B_0x2_DEVICE_MODE = 2;
        /** @brief Tx FIFO 15 flush */
    constexpr std::uint32_t OTG_GRSTCTL_TXFNUM_B_0xF_DEVICE_MODE = 15;

    /** @brief DMA request signal enabled This bit indicates that the DMA request is in progress. Used for debug. */
    using OTG_GRSTCTL_DMAREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB master idle Indicates that the AHB master state machine is in the Idle condition. Note: Accessible in both device and host modes. */
    using OTG_GRSTCTL_AHBIDL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG core interrupt register */
    using OTG_GINTSTS_HOST = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current mode of operation Indicates the current mode. Note: Accessible in both host and device modes. */
    using OTG_GINTSTS_HOST_CMOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Device mode (value: 0)
     *          - B_0x1: Host mode (value: 1)
     */
        /** @brief Device mode */
    constexpr std::uint32_t OTG_GINTSTS_HOST_CMOD_B_0x0 = 0;
        /** @brief Host mode */
    constexpr std::uint32_t OTG_GINTSTS_HOST_CMOD_B_0x1 = 1;

    /** @brief Mode mismatch interrupt The core sets this bit when the application is trying to access: A host mode register, when the core is operating in device mode A device mode register, when the core is operating in host mode The register access is completed on the AHB with an OKAY response, but is ignored by the core internally and does not affect the operation of the core. Note: Accessible in both host and device modes. */
    using OTG_GINTSTS_HOST_MMIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG interrupt The core sets this bit to indicate an OTG protocol event. The application must read the OTG interrupt status (OTG_GOTGINT) register to determine the exact event that caused this interrupt. The application must clear the appropriate status bit in the OTG_GOTGINT register to clear this bit. Note: Accessible in both host and device modes. */
    using OTG_GINTSTS_HOST_OTGINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Start of frame In host mode, the core sets this bit to indicate that an SOF (FS), or Keep-Alive (LS) is transmitted on the USB. The application must write a 1 to this bit to clear the interrupt. In device mode, in the core sets this bit to indicate that an SOF token has been received on the USB. The application can read the OTG_DSTS register to get the current frame number. This interrupt is seen only when the core is operating in FS. Note: This register may return '1' if read immediately after power on reset. If the register bit reads '1' immediately after power on reset it does not indicate that an SOF has been sent (in case of host mode) or SOF has been received (in case of device mode). The read value of this interrupt is valid only after a valid connection between host and device is established. If the bit is set after power on reset the application can clear the bit. Note: Accessible in both host and device modes. */
    using OTG_GINTSTS_HOST_SOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx FIFO non-empty Indicates that there is at least one packet pending to be read from the Rx FIFO. Note: Accessible in both host and device modes. */
    using OTG_GINTSTS_HOST_RXFLVL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Non-periodic Tx FIFO empty This interrupt is asserted when the non-periodic Tx FIFO is either half or completely empty, and there is space for at least one entry to be written to the non-periodic transmit request queue. The half or completely empty status is determined by the non-periodic Tx FIFO empty level bit in the OTG_GAHBCFG register (TXFELVL bit in OTG_GAHBCFG). Note: Accessible in host mode only. */
    using OTG_GINTSTS_HOST_NPTXFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Global IN non-periodic NAK effective Indicates that the Set global non-periodic IN NAK bit in the OTG_DCTL register (SGINAK bit in OTG_DCTL), set by the application, has taken effect in the core. That is, the core has sampled the Global IN NAK bit set by the application. This bit can be cleared by clearing the Clear global non-periodic IN NAK bit in the OTG_DCTL register (CGINAK bit in OTG_DCTL). This interrupt does not necessarily mean that a NAK handshake is sent out on the USB. The STALL bit takes precedence over the NAK bit. Note: Only accessible in device mode. */
    using OTG_GINTSTS_HOST_GINAKEFF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Global OUT NAK effective Indicates that the Set global OUT NAK bit in the OTG_DCTL register (SGONAK bit in OTG_DCTL), set by the application, has taken effect in the core. This bit can be cleared by writing the Clear global OUT NAK bit in the OTG_DCTL register (CGONAK bit in OTG_DCTL). Note: Only accessible in device mode. */
    using OTG_GINTSTS_HOST_GONAKEFF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Early suspend The core sets this bit to indicate that an Idle state has been detected on the USB for 3 ms. Note: Only accessible in device mode. */
    using OTG_GINTSTS_HOST_ESUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB suspend The core sets this bit to indicate that a suspend was detected on the USB. The core enters the suspended state when there is no activity on the data lines for an extended period of time. Note: Only accessible in device mode. */
    using OTG_GINTSTS_HOST_USBSUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB reset The core sets this bit to indicate that a reset is detected on the USB. Note: Only accessible in device mode. */
    using OTG_GINTSTS_HOST_USBRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enumeration done The core sets this bit to indicate that speed enumeration is complete. The application must read the OTG_DSTS register to obtain the enumerated speed. Note: Only accessible in device mode. */
    using OTG_GINTSTS_HOST_ENUMDNE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Isochronous OUT packet dropped interrupt The core sets this bit when it fails to write an isochronous OUT packet into the Rx FIFO because the Rx FIFO does not have enough space to accommodate a maximum size packet for the isochronous OUT endpoint. Note: Only accessible in device mode. */
    using OTG_GINTSTS_HOST_ISOODRP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of periodic frame interrupt Indicates that the period specified in the periodic frame interval field of the OTG_DCFG register (PFIVL bit in OTG_DCFG) has been reached in the current frame. Note: Only accessible in device mode. */
    using OTG_GINTSTS_HOST_EOPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint interrupt The core sets this bit to indicate that an interrupt is pending on one of the IN endpoints of the core (in device mode). The application must read the OTG_DAINT register to determine the exact number of the IN endpoint on which the interrupt occurred, and then read the corresponding OTG_DIEPINTx register to determine the exact cause of the interrupt. The application must clear the appropriate status bit in the corresponding OTG_DIEPINTx register to clear this bit. Note: Only accessible in device mode. */
    using OTG_GINTSTS_HOST_IEPINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OUT endpoint interrupt The core sets this bit to indicate that an interrupt is pending on one of the OUT endpoints of the core (in device mode). The application must read the OTG_DAINT register to determine the exact number of the OUT endpoint on which the interrupt occurred, and then read the corresponding OTG_DOEPINTx register to determine the exact cause of the interrupt. The application must clear the appropriate status bit in the corresponding OTG_DOEPINTx register to clear this bit. Note: Only accessible in device mode. */
    using OTG_GINTSTS_HOST_OEPINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Incomplete isochronous IN transfer The core sets this interrupt to indicate that there is at least one isochronous IN endpoint on which the transfer is not completed in the current frame. This interrupt is asserted along with the End of periodic frame interrupt (EOPF) bit in this register. Note: Only accessible in device mode. */
    using OTG_GINTSTS_HOST_IISOIXFR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Incomplete periodic transfer In host mode, the core sets this interrupt bit when there are incomplete periodic transactions still pending, which are scheduled for the current frame. */
    using OTG_GINTSTS_HOST_IPXFR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data fetch suspended This interrupt is valid only in DMA mode. This interrupt indicates that the core has stopped fetching data for IN endpoints due to the unavailability of TxFIFO space or request queue space. This interrupt is used by the application for an endpoint mismatch algorithm. For example, after detecting an endpoint mismatch, the application: Sets a global nonperiodic IN NAK handshake Disables IN endpoints Flushes the FIFO Determines the token sequence from the IN token sequence learning queue Re-enables the endpoints Clears the global nonperiodic IN NAK handshake If the global nonperiodic IN NAK is cleared, the core has not yet fetched data for the IN endpoint, and the IN token is received: the core generates an IN token received when FIFO empty interrupt. The OTG then sends a NAK response to the host. To avoid this scenario, the application can check the FetSusp interrupt in OTG_GINTSTS, which ensures that the FIFO is full before clearing a global NAK handshake. Alternatively, the application can mask the IN token received when FIFO empty interrupt when clearing a global IN NAK handshake. */
    using OTG_GINTSTS_HOST_DATAFSUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reset detected interrupt In device mode, this interrupt is asserted when a reset is detected on the USB in partial power-down mode when the device is in suspend. Note: Only accessible in device mode. */
    using OTG_GINTSTS_HOST_RSTDET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Host port interrupt The core sets this bit to indicate a change in port status of one of the OTG_HS controller ports in host mode. The application must read the OTG_HPRT register to determine the exact event that caused this interrupt. The application must clear the appropriate status bit in the OTG_HPRT register to clear this bit. Note: Only accessible in host mode. */
    using OTG_GINTSTS_HOST_HPRTINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Host channels interrupt The core sets this bit to indicate that an interrupt is pending on one of the channels of the core (in host mode). The application must read the OTG_HAINT register to determine the exact number of the channel on which the interrupt occurred, and then read the corresponding OTG_HCINTx register to determine the exact cause of the interrupt. The application must clear the appropriate status bit in the OTG_HCINTx register to clear this bit. Note: Only accessible in host mode. */
    using OTG_GINTSTS_HOST_HCINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Periodic Tx FIFO empty Asserted when the periodic transmit FIFO is either half or completely empty and there is space for at least one entry to be written in the periodic request queue. The half or completely empty status is determined by the periodic Tx FIFO empty level bit in the OTG_GAHBCFG register (PTXFELVL bit in OTG_GAHBCFG). Note: Only accessible in host mode. */
    using OTG_GINTSTS_HOST_PTXFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPM interrupt In device mode, this interrupt is asserted when the device receives an LPM transaction and responds with a non-ERRORed response. In host mode, this interrupt is asserted when the device responds to an LPM transaction with a non-ERRORed response or when the host core has completed LPM transactions for the programmed number of times (RETRYCNT bit in OTG_GLPMCFG). This field is valid only if the LPMEN bit in OTG_GLPMCFG is set to 1. */
    using OTG_GINTSTS_HOST_LPMINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Connector ID status change The core sets this bit when there is a change in connector ID status. Note: Accessible in both device and host modes. */
    using OTG_GINTSTS_HOST_CIDSCHG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Disconnect detected interrupt Asserted when a device disconnect is detected. Note: Only accessible in host mode. */
    using OTG_GINTSTS_HOST_DISCINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Session request/new session detected interrupt In host mode, this interrupt is asserted when a session request is detected from the device. In device mode, this interrupt is asserted when V<sub>BUS</sub> is in the valid range for a B-peripheral device. Accessible in both device and host modes. */
    using OTG_GINTSTS_HOST_SRQINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Resume/remote wakeup detected interrupt Wakeup interrupt during suspend(L2) or LPM(L1) state. During suspend(L2): In device mode, this interrupt is asserted when a resume is detected on the USB. In host mode, this interrupt is asserted when a remote wakeup is detected on the USB. During LPM(L1): This interrupt is asserted for either host initiated resume or device initiated remote wakeup on USB. Note: Accessible in both device and host modes. */
    using OTG_GINTSTS_HOST_WKUPINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG core interrupt register */
    using OTG_GINTSTS_DEVICE = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current mode of operation Indicates the current mode. Note: Accessible in both host and device modes. */
    using OTG_GINTSTS_DEVICE_CMOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Device mode (value: 0)
     *          - B_0x1: Host mode (value: 1)
     */
        /** @brief Device mode */
    constexpr std::uint32_t OTG_GINTSTS_DEVICE_CMOD_B_0x0 = 0;
        /** @brief Host mode */
    constexpr std::uint32_t OTG_GINTSTS_DEVICE_CMOD_B_0x1 = 1;

    /** @brief Mode mismatch interrupt The core sets this bit when the application is trying to access: A host mode register, when the core is operating in device mode A device mode register, when the core is operating in host mode The register access is completed on the AHB with an OKAY response, but is ignored by the core internally and does not affect the operation of the core. Note: Accessible in both host and device modes. */
    using OTG_GINTSTS_DEVICE_MMIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG interrupt The core sets this bit to indicate an OTG protocol event. The application must read the OTG interrupt status (OTG_GOTGINT) register to determine the exact event that caused this interrupt. The application must clear the appropriate status bit in the OTG_GOTGINT register to clear this bit. Note: Accessible in both host and device modes. */
    using OTG_GINTSTS_DEVICE_OTGINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Start of frame In host mode, the core sets this bit to indicate that an SOF (FS), or Keep-Alive (LS) is transmitted on the USB. The application must write a 1 to this bit to clear the interrupt. In device mode, in the core sets this bit to indicate that an SOF token has been received on the USB. The application can read the OTG_DSTS register to get the current frame number. This interrupt is seen only when the core is operating in FS. Note: This register may return '1' if read immediately after power on reset. If the register bit reads '1' immediately after power on reset it does not indicate that an SOF has been sent (in case of host mode) or SOF has been received (in case of device mode). The read value of this interrupt is valid only after a valid connection between host and device is established. If the bit is set after power on reset the application can clear the bit. Note: Accessible in both host and device modes. */
    using OTG_GINTSTS_DEVICE_SOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx FIFO non-empty Indicates that there is at least one packet pending to be read from the Rx FIFO. Note: Accessible in both host and device modes. */
    using OTG_GINTSTS_DEVICE_RXFLVL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Non-periodic Tx FIFO empty This interrupt is asserted when the non-periodic Tx FIFO is either half or completely empty, and there is space for at least one entry to be written to the non-periodic transmit request queue. The half or completely empty status is determined by the non-periodic Tx FIFO empty level bit in the OTG_GAHBCFG register (TXFELVL bit in OTG_GAHBCFG). Note: Accessible in host mode only. */
    using OTG_GINTSTS_DEVICE_NPTXFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Global IN non-periodic NAK effective Indicates that the Set global non-periodic IN NAK bit in the OTG_DCTL register (SGINAK bit in OTG_DCTL), set by the application, has taken effect in the core. That is, the core has sampled the Global IN NAK bit set by the application. This bit can be cleared by clearing the Clear global non-periodic IN NAK bit in the OTG_DCTL register (CGINAK bit in OTG_DCTL). This interrupt does not necessarily mean that a NAK handshake is sent out on the USB. The STALL bit takes precedence over the NAK bit. Note: Only accessible in device mode. */
    using OTG_GINTSTS_DEVICE_GINAKEFF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Global OUT NAK effective Indicates that the Set global OUT NAK bit in the OTG_DCTL register (SGONAK bit in OTG_DCTL), set by the application, has taken effect in the core. This bit can be cleared by writing the Clear global OUT NAK bit in the OTG_DCTL register (CGONAK bit in OTG_DCTL). Note: Only accessible in device mode. */
    using OTG_GINTSTS_DEVICE_GONAKEFF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Early suspend The core sets this bit to indicate that an Idle state has been detected on the USB for 3 ms. Note: Only accessible in device mode. */
    using OTG_GINTSTS_DEVICE_ESUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB suspend The core sets this bit to indicate that a suspend was detected on the USB. The core enters the suspended state when there is no activity on the data lines for an extended period of time. Note: Only accessible in device mode. */
    using OTG_GINTSTS_DEVICE_USBSUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB reset The core sets this bit to indicate that a reset is detected on the USB. Note: Only accessible in device mode. */
    using OTG_GINTSTS_DEVICE_USBRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enumeration done The core sets this bit to indicate that speed enumeration is complete. The application must read the OTG_DSTS register to obtain the enumerated speed. Note: Only accessible in device mode. */
    using OTG_GINTSTS_DEVICE_ENUMDNE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Isochronous OUT packet dropped interrupt The core sets this bit when it fails to write an isochronous OUT packet into the Rx FIFO because the Rx FIFO does not have enough space to accommodate a maximum size packet for the isochronous OUT endpoint. Note: Only accessible in device mode. */
    using OTG_GINTSTS_DEVICE_ISOODRP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of periodic frame interrupt Indicates that the period specified in the periodic frame interval field of the OTG_DCFG register (PFIVL bit in OTG_DCFG) has been reached in the current frame. Note: Only accessible in device mode. */
    using OTG_GINTSTS_DEVICE_EOPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint interrupt The core sets this bit to indicate that an interrupt is pending on one of the IN endpoints of the core (in device mode). The application must read the OTG_DAINT register to determine the exact number of the IN endpoint on which the interrupt occurred, and then read the corresponding OTG_DIEPINTx register to determine the exact cause of the interrupt. The application must clear the appropriate status bit in the corresponding OTG_DIEPINTx register to clear this bit. Note: Only accessible in device mode. */
    using OTG_GINTSTS_DEVICE_IEPINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OUT endpoint interrupt The core sets this bit to indicate that an interrupt is pending on one of the OUT endpoints of the core (in device mode). The application must read the OTG_DAINT register to determine the exact number of the OUT endpoint on which the interrupt occurred, and then read the corresponding OTG_DOEPINTx register to determine the exact cause of the interrupt. The application must clear the appropriate status bit in the corresponding OTG_DOEPINTx register to clear this bit. Note: Only accessible in device mode. */
    using OTG_GINTSTS_DEVICE_OEPINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Incomplete isochronous IN transfer The core sets this interrupt to indicate that there is at least one isochronous IN endpoint on which the transfer is not completed in the current frame. This interrupt is asserted along with the End of periodic frame interrupt (EOPF) bit in this register. Note: Only accessible in device mode. */
    using OTG_GINTSTS_DEVICE_IISOIXFR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Incomplete isochronous OUT transfer In device mode, the core sets this interrupt to indicate that there is at least one isochronous OUT endpoint on which the transfer is not completed in the current frame. This interrupt is asserted along with the End of periodic frame interrupt (EOPF) bit in this register. */
    using OTG_GINTSTS_DEVICE_INCOMPISOOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data fetch suspended This interrupt is valid only in DMA mode. This interrupt indicates that the core has stopped fetching data for IN endpoints due to the unavailability of TxFIFO space or request queue space. This interrupt is used by the application for an endpoint mismatch algorithm. For example, after detecting an endpoint mismatch, the application: Sets a global nonperiodic IN NAK handshake Disables IN endpoints Flushes the FIFO Determines the token sequence from the IN token sequence learning queue Re-enables the endpoints Clears the global nonperiodic IN NAK handshake If the global nonperiodic IN NAK is cleared, the core has not yet fetched data for the IN endpoint, and the IN token is received: the core generates an IN token received when FIFO empty interrupt. The OTG then sends a NAK response to the host. To avoid this scenario, the application can check the FetSusp interrupt in OTG_GINTSTS, which ensures that the FIFO is full before clearing a global NAK handshake. Alternatively, the application can mask the IN token received when FIFO empty interrupt when clearing a global IN NAK handshake. */
    using OTG_GINTSTS_DEVICE_DATAFSUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reset detected interrupt In device mode, this interrupt is asserted when a reset is detected on the USB in partial power-down mode when the device is in suspend. Note: Only accessible in device mode. */
    using OTG_GINTSTS_DEVICE_RSTDET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Host port interrupt The core sets this bit to indicate a change in port status of one of the OTG_HS controller ports in host mode. The application must read the OTG_HPRT register to determine the exact event that caused this interrupt. The application must clear the appropriate status bit in the OTG_HPRT register to clear this bit. Note: Only accessible in host mode. */
    using OTG_GINTSTS_DEVICE_HPRTINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Host channels interrupt The core sets this bit to indicate that an interrupt is pending on one of the channels of the core (in host mode). The application must read the OTG_HAINT register to determine the exact number of the channel on which the interrupt occurred, and then read the corresponding OTG_HCINTx register to determine the exact cause of the interrupt. The application must clear the appropriate status bit in the OTG_HCINTx register to clear this bit. Note: Only accessible in host mode. */
    using OTG_GINTSTS_DEVICE_HCINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Periodic Tx FIFO empty Asserted when the periodic transmit FIFO is either half or completely empty and there is space for at least one entry to be written in the periodic request queue. The half or completely empty status is determined by the periodic Tx FIFO empty level bit in the OTG_GAHBCFG register (PTXFELVL bit in OTG_GAHBCFG). Note: Only accessible in host mode. */
    using OTG_GINTSTS_DEVICE_PTXFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPM interrupt In device mode, this interrupt is asserted when the device receives an LPM transaction and responds with a non-ERRORed response. In host mode, this interrupt is asserted when the device responds to an LPM transaction with a non-ERRORed response or when the host core has completed LPM transactions for the programmed number of times (RETRYCNT bit in OTG_GLPMCFG). This field is valid only if the LPMEN bit in OTG_GLPMCFG is set to 1. */
    using OTG_GINTSTS_DEVICE_LPMINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Connector ID status change The core sets this bit when there is a change in connector ID status. Note: Accessible in both device and host modes. */
    using OTG_GINTSTS_DEVICE_CIDSCHG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Disconnect detected interrupt Asserted when a device disconnect is detected. Note: Only accessible in host mode. */
    using OTG_GINTSTS_DEVICE_DISCINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Session request/new session detected interrupt In host mode, this interrupt is asserted when a session request is detected from the device. In device mode, this interrupt is asserted when V<sub>BUS</sub> is in the valid range for a B-peripheral device. Accessible in both device and host modes. */
    using OTG_GINTSTS_DEVICE_SRQINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Resume/remote wakeup detected interrupt Wakeup interrupt during suspend(L2) or LPM(L1) state. During suspend(L2): In device mode, this interrupt is asserted when a resume is detected on the USB. In host mode, this interrupt is asserted when a remote wakeup is detected on the USB. During LPM(L1): This interrupt is asserted for either host initiated resume or device initiated remote wakeup on USB. Note: Accessible in both device and host modes. */
    using OTG_GINTSTS_DEVICE_WKUPINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG interrupt mask register */
    using OTG_GINTMSK_HOST = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Mode mismatch interrupt mask */
    using OTG_GINTMSK_HOST_MMISM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_HOST_MMISM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_HOST_MMISM_B_0x1 = 1;

    /** @brief OTG interrupt mask */
    using OTG_GINTMSK_HOST_OTGINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_HOST_OTGINT_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_HOST_OTGINT_B_0x1 = 1;

    /** @brief Start of frame mask */
    using OTG_GINTMSK_HOST_SOFM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_HOST_SOFM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_HOST_SOFM_B_0x1 = 1;

    /** @brief Receive FIFO non-empty mask */
    using OTG_GINTMSK_HOST_RXFLVLM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_HOST_RXFLVLM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_HOST_RXFLVLM_B_0x1 = 1;

    /** @brief Non-periodic Tx FIFO empty mask */
    using OTG_GINTMSK_HOST_NPTXFEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_HOST_NPTXFEM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_HOST_NPTXFEM_B_0x1 = 1;

    /** @brief Incomplete periodic transfer mask */
    using OTG_GINTMSK_HOST_IPXFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_HOST_IPXFRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_HOST_IPXFRM_B_0x1 = 1;

    /** @brief Host port interrupt mask */
    using OTG_GINTMSK_HOST_PRTIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_HOST_PRTIM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_HOST_PRTIM_B_0x1 = 1;

    /** @brief Host channels interrupt mask */
    using OTG_GINTMSK_HOST_HCIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_HOST_HCIM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_HOST_HCIM_B_0x1 = 1;

    /** @brief Periodic Tx FIFO empty mask */
    using OTG_GINTMSK_HOST_PTXFEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_HOST_PTXFEM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_HOST_PTXFEM_B_0x1 = 1;

    /** @brief LPM interrupt mask */
    using OTG_GINTMSK_HOST_LPMINTM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_HOST_LPMINTM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_HOST_LPMINTM_B_0x1 = 1;

    /** @brief Connector ID status change mask */
    using OTG_GINTMSK_HOST_CIDSCHGM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_HOST_CIDSCHGM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_HOST_CIDSCHGM_B_0x1 = 1;

    /** @brief Disconnect detected interrupt mask */
    using OTG_GINTMSK_HOST_DISCINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_HOST_DISCINT_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_HOST_DISCINT_B_0x1 = 1;

    /** @brief Session request/new session detected interrupt mask */
    using OTG_GINTMSK_HOST_SRQIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_HOST_SRQIM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_HOST_SRQIM_B_0x1 = 1;

    /** @brief Resume/remote wakeup detected interrupt mask */
    using OTG_GINTMSK_HOST_WUIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_HOST_WUIM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_HOST_WUIM_B_0x1 = 1;

    /** @brief OTG interrupt mask register */
    using OTG_GINTMSK_DEVICE = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Mode mismatch interrupt mask */
    using OTG_GINTMSK_DEVICE_MMISM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_DEVICE_MMISM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_DEVICE_MMISM_B_0x1 = 1;

    /** @brief OTG interrupt mask */
    using OTG_GINTMSK_DEVICE_OTGINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_DEVICE_OTGINT_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_DEVICE_OTGINT_B_0x1 = 1;

    /** @brief Start of frame mask */
    using OTG_GINTMSK_DEVICE_SOFM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_DEVICE_SOFM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_DEVICE_SOFM_B_0x1 = 1;

    /** @brief Receive FIFO non-empty mask */
    using OTG_GINTMSK_DEVICE_RXFLVLM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_DEVICE_RXFLVLM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_DEVICE_RXFLVLM_B_0x1 = 1;

    /** @brief Global non-periodic IN NAK effective mask */
    using OTG_GINTMSK_DEVICE_GINAKEFFM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_DEVICE_GINAKEFFM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_DEVICE_GINAKEFFM_B_0x1 = 1;

    /** @brief Global OUT NAK effective mask */
    using OTG_GINTMSK_DEVICE_GONAKEFFM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_DEVICE_GONAKEFFM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_DEVICE_GONAKEFFM_B_0x1 = 1;

    /** @brief Early suspend mask */
    using OTG_GINTMSK_DEVICE_ESUSPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_DEVICE_ESUSPM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_DEVICE_ESUSPM_B_0x1 = 1;

    /** @brief USB suspend mask */
    using OTG_GINTMSK_DEVICE_USBSUSPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_DEVICE_USBSUSPM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_DEVICE_USBSUSPM_B_0x1 = 1;

    /** @brief USB reset mask */
    using OTG_GINTMSK_DEVICE_USBRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_DEVICE_USBRST_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_DEVICE_USBRST_B_0x1 = 1;

    /** @brief Enumeration done mask */
    using OTG_GINTMSK_DEVICE_ENUMDNEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_DEVICE_ENUMDNEM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_DEVICE_ENUMDNEM_B_0x1 = 1;

    /** @brief Isochronous OUT packet dropped interrupt mask */
    using OTG_GINTMSK_DEVICE_ISOODRPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_DEVICE_ISOODRPM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_DEVICE_ISOODRPM_B_0x1 = 1;

    /** @brief End of periodic frame interrupt mask */
    using OTG_GINTMSK_DEVICE_EOPFM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_DEVICE_EOPFM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_DEVICE_EOPFM_B_0x1 = 1;

    /** @brief IN endpoints interrupt mask */
    using OTG_GINTMSK_DEVICE_IEPINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_DEVICE_IEPINT_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_DEVICE_IEPINT_B_0x1 = 1;

    /** @brief OUT endpoints interrupt mask */
    using OTG_GINTMSK_DEVICE_OEPINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_DEVICE_OEPINT_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_DEVICE_OEPINT_B_0x1 = 1;

    /** @brief Incomplete isochronous IN transfer mask */
    using OTG_GINTMSK_DEVICE_IISOIXFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_DEVICE_IISOIXFRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_DEVICE_IISOIXFRM_B_0x1 = 1;

    /** @brief Incomplete isochronous OUT transfer mask */
    using OTG_GINTMSK_DEVICE_IISOOXFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_DEVICE_IISOOXFRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_DEVICE_IISOOXFRM_B_0x1 = 1;

    /** @brief Data fetch suspended mask */
    using OTG_GINTMSK_DEVICE_FSUSPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_DEVICE_FSUSPM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_DEVICE_FSUSPM_B_0x1 = 1;

    /** @brief Reset detected interrupt mask */
    using OTG_GINTMSK_DEVICE_RSTDETM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_DEVICE_RSTDETM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_DEVICE_RSTDETM_B_0x1 = 1;

    /** @brief LPM interrupt mask */
    using OTG_GINTMSK_DEVICE_LPMINTM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_DEVICE_LPMINTM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_DEVICE_LPMINTM_B_0x1 = 1;

    /** @brief Connector ID status change mask */
    using OTG_GINTMSK_DEVICE_CIDSCHGM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_DEVICE_CIDSCHGM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_DEVICE_CIDSCHGM_B_0x1 = 1;

    /** @brief Session request/new session detected interrupt mask */
    using OTG_GINTMSK_DEVICE_SRQIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_DEVICE_SRQIM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_DEVICE_SRQIM_B_0x1 = 1;

    /** @brief Resume/remote wakeup detected interrupt mask */
    using OTG_GINTMSK_DEVICE_WUIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_DEVICE_WUIM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_GINTMSK_DEVICE_WUIM_B_0x1 = 1;

    /** @brief OTG receive status debug read register */
    using OTG_GRXSTSR_DEVICE = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint number Indicates the endpoint number to which the current received packet belongs. */
    using OTG_GRXSTSR_DEVICE_EPNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Byte count Indicates the byte count of the received data packet. */
    using OTG_GRXSTSR_DEVICE_BCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data PID Indicates the data PID of the received OUT data packet */
    using OTG_GRXSTSR_DEVICE_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATA0 (value: 0)
     *          - B_0x2: DATA1 (value: 2)
     *          - B_0x1: DATA2 (value: 1)
     *          - B_0x3: MDATA (value: 3)
     */
        /** @brief DATA0 */
    constexpr std::uint32_t OTG_GRXSTSR_DEVICE_DPID_B_0x0 = 0;
        /** @brief DATA1 */
    constexpr std::uint32_t OTG_GRXSTSR_DEVICE_DPID_B_0x2 = 2;
        /** @brief DATA2 */
    constexpr std::uint32_t OTG_GRXSTSR_DEVICE_DPID_B_0x1 = 1;
        /** @brief MDATA */
    constexpr std::uint32_t OTG_GRXSTSR_DEVICE_DPID_B_0x3 = 3;

    /** @brief Packet status Indicates the status of the received packet Others: Reserved */
    using OTG_GRXSTSR_DEVICE_PKTSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Global OUT NAK (triggers an interrupt) (value: 1)
     *          - B_0x2: OUT data packet received (value: 2)
     *          - B_0x3: OUT transfer completed (triggers an interrupt) (value: 3)
     *          - B_0x4: SETUP transaction completed (triggers an interrupt) (value: 4)
     *          - B_0x6: SETUP data packet received (value: 6)
     */
        /** @brief Global OUT NAK (triggers an interrupt) */
    constexpr std::uint32_t OTG_GRXSTSR_DEVICE_PKTSTS_B_0x1 = 1;
        /** @brief OUT data packet received */
    constexpr std::uint32_t OTG_GRXSTSR_DEVICE_PKTSTS_B_0x2 = 2;
        /** @brief OUT transfer completed (triggers an interrupt) */
    constexpr std::uint32_t OTG_GRXSTSR_DEVICE_PKTSTS_B_0x3 = 3;
        /** @brief SETUP transaction completed (triggers an interrupt) */
    constexpr std::uint32_t OTG_GRXSTSR_DEVICE_PKTSTS_B_0x4 = 4;
        /** @brief SETUP data packet received */
    constexpr std::uint32_t OTG_GRXSTSR_DEVICE_PKTSTS_B_0x6 = 6;

    /** @brief Frame number This is the least significant 4 bits of the frame number in which the packet is received on the USB. This field is supported only when isochronous OUT endpoints are supported. */
    using OTG_GRXSTSR_DEVICE_FRMNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Status phase start Indicates the start of the status phase for a control write transfer. This bit is set along with the OUT transfer completed PKTSTS pattern. */
    using OTG_GRXSTSR_DEVICE_STSPHST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG receive status debug read register */
    using OTG_GRXSTSR_HOST = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel number Indicates the channel number to which the current received packet belongs. */
    using OTG_GRXSTSR_HOST_CHNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Byte count Indicates the byte count of the received IN data packet. */
    using OTG_GRXSTSR_HOST_BCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data PID Indicates the data PID of the received packet */
    using OTG_GRXSTSR_HOST_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATA0 (value: 0)
     *          - B_0x2: DATA1 (value: 2)
     *          - B_0x1: DATA2 (value: 1)
     *          - B_0x3: MDATA (value: 3)
     */
        /** @brief DATA0 */
    constexpr std::uint32_t OTG_GRXSTSR_HOST_DPID_B_0x0 = 0;
        /** @brief DATA1 */
    constexpr std::uint32_t OTG_GRXSTSR_HOST_DPID_B_0x2 = 2;
        /** @brief DATA2 */
    constexpr std::uint32_t OTG_GRXSTSR_HOST_DPID_B_0x1 = 1;
        /** @brief MDATA */
    constexpr std::uint32_t OTG_GRXSTSR_HOST_DPID_B_0x3 = 3;

    /** @brief Packet status Indicates the status of the received packet Others: Reserved */
    using OTG_GRXSTSR_HOST_PKTSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x2: IN data packet received (value: 2)
     *          - B_0x3: IN transfer completed (triggers an interrupt) (value: 3)
     *          - B_0x5: Data toggle error (triggers an interrupt) (value: 5)
     *          - B_0x7: Channel halted (triggers an interrupt) (value: 7)
     */
        /** @brief IN data packet received */
    constexpr std::uint32_t OTG_GRXSTSR_HOST_PKTSTS_B_0x2 = 2;
        /** @brief IN transfer completed (triggers an interrupt) */
    constexpr std::uint32_t OTG_GRXSTSR_HOST_PKTSTS_B_0x3 = 3;
        /** @brief Data toggle error (triggers an interrupt) */
    constexpr std::uint32_t OTG_GRXSTSR_HOST_PKTSTS_B_0x5 = 5;
        /** @brief Channel halted (triggers an interrupt) */
    constexpr std::uint32_t OTG_GRXSTSR_HOST_PKTSTS_B_0x7 = 7;

    /** @brief OTG status read and pop registers */
    using OTG_GRXSTSP_DEVICE = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint number Indicates the endpoint number to which the current received packet belongs. */
    using OTG_GRXSTSP_DEVICE_EPNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Byte count Indicates the byte count of the received data packet. */
    using OTG_GRXSTSP_DEVICE_BCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data PID Indicates the data PID of the received OUT data packet */
    using OTG_GRXSTSP_DEVICE_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATA0 (value: 0)
     *          - B_0x2: DATA1 (value: 2)
     *          - B_0x1: DATA2 (value: 1)
     *          - B_0x3: MDATA (value: 3)
     */
        /** @brief DATA0 */
    constexpr std::uint32_t OTG_GRXSTSP_DEVICE_DPID_B_0x0 = 0;
        /** @brief DATA1 */
    constexpr std::uint32_t OTG_GRXSTSP_DEVICE_DPID_B_0x2 = 2;
        /** @brief DATA2 */
    constexpr std::uint32_t OTG_GRXSTSP_DEVICE_DPID_B_0x1 = 1;
        /** @brief MDATA */
    constexpr std::uint32_t OTG_GRXSTSP_DEVICE_DPID_B_0x3 = 3;

    /** @brief Packet status Indicates the status of the received packet Others: Reserved */
    using OTG_GRXSTSP_DEVICE_PKTSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Global OUT NAK (triggers an interrupt) (value: 1)
     *          - B_0x2: OUT data packet received (value: 2)
     *          - B_0x3: OUT transfer completed (triggers an interrupt) (value: 3)
     *          - B_0x4: SETUP transaction completed (triggers an interrupt) (value: 4)
     *          - B_0x6: SETUP data packet received (value: 6)
     */
        /** @brief Global OUT NAK (triggers an interrupt) */
    constexpr std::uint32_t OTG_GRXSTSP_DEVICE_PKTSTS_B_0x1 = 1;
        /** @brief OUT data packet received */
    constexpr std::uint32_t OTG_GRXSTSP_DEVICE_PKTSTS_B_0x2 = 2;
        /** @brief OUT transfer completed (triggers an interrupt) */
    constexpr std::uint32_t OTG_GRXSTSP_DEVICE_PKTSTS_B_0x3 = 3;
        /** @brief SETUP transaction completed (triggers an interrupt) */
    constexpr std::uint32_t OTG_GRXSTSP_DEVICE_PKTSTS_B_0x4 = 4;
        /** @brief SETUP data packet received */
    constexpr std::uint32_t OTG_GRXSTSP_DEVICE_PKTSTS_B_0x6 = 6;

    /** @brief Frame number This is the least significant 4 bits of the frame number in which the packet is received on the USB. This field is supported only when isochronous OUT endpoints are supported. */
    using OTG_GRXSTSP_DEVICE_FRMNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Status phase start Indicates the start of the status phase for a control write transfer. This bit is set along with the OUT transfer completed PKTSTS pattern. */
    using OTG_GRXSTSP_DEVICE_STSPHST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG status read and pop registers */
    using OTG_GRXSTSP_HOST = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel number Indicates the channel number to which the current received packet belongs. */
    using OTG_GRXSTSP_HOST_CHNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Byte count Indicates the byte count of the received IN data packet. */
    using OTG_GRXSTSP_HOST_BCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data PID Indicates the data PID of the received packet */
    using OTG_GRXSTSP_HOST_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATA0 (value: 0)
     *          - B_0x2: DATA1 (value: 2)
     *          - B_0x1: DATA2 (value: 1)
     *          - B_0x3: MDATA (value: 3)
     */
        /** @brief DATA0 */
    constexpr std::uint32_t OTG_GRXSTSP_HOST_DPID_B_0x0 = 0;
        /** @brief DATA1 */
    constexpr std::uint32_t OTG_GRXSTSP_HOST_DPID_B_0x2 = 2;
        /** @brief DATA2 */
    constexpr std::uint32_t OTG_GRXSTSP_HOST_DPID_B_0x1 = 1;
        /** @brief MDATA */
    constexpr std::uint32_t OTG_GRXSTSP_HOST_DPID_B_0x3 = 3;

    /** @brief Packet status Indicates the status of the received packet Others: Reserved */
    using OTG_GRXSTSP_HOST_PKTSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x2: IN data packet received (value: 2)
     *          - B_0x3: IN transfer completed (triggers an interrupt) (value: 3)
     *          - B_0x5: Data toggle error (triggers an interrupt) (value: 5)
     *          - B_0x7: Channel halted (triggers an interrupt) (value: 7)
     */
        /** @brief IN data packet received */
    constexpr std::uint32_t OTG_GRXSTSP_HOST_PKTSTS_B_0x2 = 2;
        /** @brief IN transfer completed (triggers an interrupt) */
    constexpr std::uint32_t OTG_GRXSTSP_HOST_PKTSTS_B_0x3 = 3;
        /** @brief Data toggle error (triggers an interrupt) */
    constexpr std::uint32_t OTG_GRXSTSP_HOST_PKTSTS_B_0x5 = 5;
        /** @brief Channel halted (triggers an interrupt) */
    constexpr std::uint32_t OTG_GRXSTSP_HOST_PKTSTS_B_0x7 = 7;

    /** @brief OTG receive FIFO size register */
    using OTG_GRXFSIZ = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx FIFO depth This value is in terms of 32-bit words. Maximum value is 1024 Programmed values must respect the available FIFO memory allocation and must not exceed the power-on value. */
    using OTG_GRXFSIZ_RXFD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host non-periodic transmit FIFO size register [alternate] */
    using OTG_HNPTXFSIZ_HOST = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Non-periodic transmit RAM start address This field configures the memory start address for non-periodic transmit FIFO RAM. */
    using OTG_HNPTXFSIZ_HOST_NPTXFSA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Non-periodic Tx FIFO depth This value is in terms of 32-bit words. Minimum value is 16 Programmed values must respect the available FIFO memory allocation and must not exceed the power-on value. */
    using OTG_HNPTXFSIZ_HOST_NPTXFD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host non-periodic transmit FIFO size register [alternate] */
    using OTG_HNPTXFSIZ_DEVICE = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint 0 transmit RAM start address This field configures the memory start address for the endpoint 0 transmit FIFO RAM. */
    using OTG_HNPTXFSIZ_DEVICE_TX0FSA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint 0 Tx FIFO depth This value is in terms of 32-bit words. Minimum value is 16 Programmed values must respect the available FIFO memory allocation and must not exceed the power-on value. */
    using OTG_HNPTXFSIZ_DEVICE_TX0FD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG non-periodic transmit FIFO/queue status register */
    using OTG_HNPTXSTS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Non-periodic Tx FIFO space available Indicates the amount of free space available in the non-periodic Tx FIFO. Values are in terms of 32-bit words. n: n words available (where 0 UNDER OR EQUAL n UNDER OR EQUAL 512) Others: Reserved */
    using OTG_HNPTXSTS_NPTXFSAV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-periodic Tx FIFO is full (value: 0)
     *          - B_0x1: 1 word available (value: 1)
     */
        /** @brief Non-periodic Tx FIFO is full */
    constexpr std::uint32_t OTG_HNPTXSTS_NPTXFSAV_B_0x0 = 0;
        /** @brief 1 word available */
    constexpr std::uint32_t OTG_HNPTXSTS_NPTXFSAV_B_0x1 = 1;

    /** @brief Non-periodic transmit request queue space available Indicates the amount of free space available in the non-periodic transmit request queue. This queue holds both IN and OUT requests. n: n locations available (0 UNDER OR EQUAL n UNDER OR EQUAL 8) Others: Reserved */
    using OTG_HNPTXSTS_NPTQXSAV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-periodic transmit request queue is full (value: 0)
     *          - B_0x1: 1 location available (value: 1)
     */
        /** @brief Non-periodic transmit request queue is full */
    constexpr std::uint32_t OTG_HNPTXSTS_NPTQXSAV_B_0x0 = 0;
        /** @brief 1 location available */
    constexpr std::uint32_t OTG_HNPTXSTS_NPTQXSAV_B_0x1 = 1;

    /** @brief Top of the non-periodic transmit request queue Entry in the non-periodic Tx request queue that is currently being processed by the MAC. Bits 30:27: Channel/endpoint number Bits 26:25: XXXX00X: IN/OUT token XXXX01X: Zero-length transmit packet (device IN/host OUT) XXXX11X: Channel halt command Bit 24: Terminate (last entry for selected channel/endpoint) */
    using OTG_HNPTXSTS_NPTXQTOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG general core configuration register */
    using OTG_GCCFG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Charger detection, result of the current mode (primary or secondary). */
    using OTG_GCCFG_CHGDET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Low value on pin (value: 0)
     *          - B_0x1: High value on pin (value: 1)
     */
        /** @brief Low value on pin */
    constexpr std::uint32_t OTG_GCCFG_CHGDET_B_0x0 = 0;
        /** @brief High value on pin */
    constexpr std::uint32_t OTG_GCCFG_CHGDET_B_0x1 = 1;

    /** @brief Single-Ended DP indicator This bit gives the voltage level on DP (also result of the comparison with V<sub>LGC</sub> threshold as defined in BC v1.2 standard). */
    using OTG_GCCFG_FSVPLUS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DM voltage at low level (value: 0)
     *          - B_0x1: DM voltage at high level (value: 1)
     */
        /** @brief DM voltage at low level */
    constexpr std::uint32_t OTG_GCCFG_FSVPLUS_B_0x0 = 0;
        /** @brief DM voltage at high level */
    constexpr std::uint32_t OTG_GCCFG_FSVPLUS_B_0x1 = 1;

    /** @brief Single-Ended DM indicator This bit gives the voltage level on DM (also result of the comparison with V<sub>LGC</sub> threshold as defined in BC v1.2 standard). */
    using OTG_GCCFG_FSVMINUS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DM voltage at low level (value: 0)
     *          - B_0x1: DM voltage at high level (value: 1)
     */
        /** @brief DM voltage at low level */
    constexpr std::uint32_t OTG_GCCFG_FSVMINUS_B_0x0 = 0;
        /** @brief DM voltage at high level */
    constexpr std::uint32_t OTG_GCCFG_FSVMINUS_B_0x1 = 1;

    /** @brief VBUS session indicator Indicates if VBUS is above VBUS session threshold. */
    using OTG_GCCFG_SESSVLD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VBUS is below VBUS session threshold (value: 0)
     *          - B_0x1: VBUS is above VBUS session threshold (value: 1)
     */
        /** @brief VBUS is below VBUS session threshold */
    constexpr std::uint32_t OTG_GCCFG_SESSVLD_B_0x0 = 0;
        /** @brief VBUS is above VBUS session threshold */
    constexpr std::uint32_t OTG_GCCFG_SESSVLD_B_0x1 = 1;

    /** @brief Host CDP behavior enable */
    using OTG_GCCFG_HCDPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable CDP behavior (value: 0)
     *          - B_0x1: Enable CDP behavior (value: 1)
     */
        /** @brief Disable CDP behavior */
    constexpr std::uint32_t OTG_GCCFG_HCDPEN_B_0x0 = 0;
        /** @brief Enable CDP behavior */
    constexpr std::uint32_t OTG_GCCFG_HCDPEN_B_0x1 = 1;

    /** @brief Host CDP port voltage detector enable on DP */
    using OTG_GCCFG_HCDPDETEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DP voltage detection disabled (value: 0)
     *          - B_0x1: DP voltage detection enabled (value: 1)
     */
        /** @brief DP voltage detection disabled */
    constexpr std::uint32_t OTG_GCCFG_HCDPDETEN_B_0x0 = 0;
        /** @brief DP voltage detection enabled */
    constexpr std::uint32_t OTG_GCCFG_HCDPDETEN_B_0x1 = 1;

    /** @brief Host CDP port Voltage source enable on DM */
    using OTG_GCCFG_HVDMSRCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DM voltage source disabled (value: 0)
     *          - B_0x1: DM Voltage source enabled (value: 1)
     */
        /** @brief DM voltage source disabled */
    constexpr std::uint32_t OTG_GCCFG_HVDMSRCEN_B_0x0 = 0;
        /** @brief DM Voltage source enabled */
    constexpr std::uint32_t OTG_GCCFG_HVDMSRCEN_B_0x1 = 1;

    /** @brief Data Contact Detection enable */
    using OTG_GCCFG_DCDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Data Contact Detection disabled (value: 0)
     *          - B_0x1: Data Contact Detection enabled (value: 1)
     */
        /** @brief Data Contact Detection disabled */
    constexpr std::uint32_t OTG_GCCFG_DCDEN_B_0x0 = 0;
        /** @brief Data Contact Detection enabled */
    constexpr std::uint32_t OTG_GCCFG_DCDEN_B_0x1 = 1;

    /** @brief Primary detection enable */
    using OTG_GCCFG_PDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Primary detection disabled (value: 0)
     *          - B_0x1: Primary detection enabled (value: 1)
     */
        /** @brief Primary detection disabled */
    constexpr std::uint32_t OTG_GCCFG_PDEN_B_0x0 = 0;
        /** @brief Primary detection enabled */
    constexpr std::uint32_t OTG_GCCFG_PDEN_B_0x1 = 1;

    /** @brief VBUS detection enable Enables VBUS Sensing Comparators in order to detect VBUS presence and/or perform OTG operation. */
    using OTG_GCCFG_VBDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VBUS detection disabled (value: 0)
     *          - B_0x1: VBUS detection enabled (value: 1)
     */
        /** @brief VBUS detection disabled */
    constexpr std::uint32_t OTG_GCCFG_VBDEN_B_0x0 = 0;
        /** @brief VBUS detection enabled */
    constexpr std::uint32_t OTG_GCCFG_VBDEN_B_0x1 = 1;

    /** @brief Secondary detection enable */
    using OTG_GCCFG_SDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Secondary detection disabled (value: 0)
     *          - B_0x1: Secondary detection enabled (value: 1)
     */
        /** @brief Secondary detection disabled */
    constexpr std::uint32_t OTG_GCCFG_SDEN_B_0x0 = 0;
        /** @brief Secondary detection enabled */
    constexpr std::uint32_t OTG_GCCFG_SDEN_B_0x1 = 1;

    /** @brief Software override value of the VBUS B-session detection */
    using OTG_GCCFG_VBVALOVAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: B-session inactive (value: 0)
     *          - B_0x1: B-session active (value: 1)
     */
        /** @brief B-session inactive */
    constexpr std::uint32_t OTG_GCCFG_VBVALOVAL_B_0x0 = 0;
        /** @brief B-session active */
    constexpr std::uint32_t OTG_GCCFG_VBVALOVAL_B_0x1 = 1;

    /** @brief Enables a software override of the VBUS B-session detection. */
    using OTG_GCCFG_VBVALOVEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Use hardware (value: 0)
     *          - B_0x1: Use VBVALOVAL to indicate B-session active (value: 1)
     */
        /** @brief Use hardware */
    constexpr std::uint32_t OTG_GCCFG_VBVALOVEN_B_0x0 = 0;
        /** @brief Use VBVALOVAL to indicate B-session active */
    constexpr std::uint32_t OTG_GCCFG_VBVALOVEN_B_0x1 = 1;

    /** @brief Force host mode pull-downs If the ID pin functions are enabled, the host mode pull-downs on DP and DM activate automatically. However, whenever that is not the case, yet host mode is required, this bit must be used to force the pull-downs active. */
    using OTG_GCCFG_FORCEHOSTPD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Do not force host mode pull-downs (value: 0)
     *          - B_0x1: Force host mode pull-downs (value: 1)
     */
        /** @brief Do not force host mode pull-downs */
    constexpr std::uint32_t OTG_GCCFG_FORCEHOSTPD_B_0x0 = 0;
        /** @brief Force host mode pull-downs */
    constexpr std::uint32_t OTG_GCCFG_FORCEHOSTPD_B_0x1 = 1;

    /** @brief OTG core ID register */
    using OTG_CID = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Product ID field Application-programmable ID field. */
    using OTG_CID_PRODUCT_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG core LPM configuration register */
    using OTG_GLPMCFG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPM support enable The application uses this bit to control the OTG_HS core LPM capabilities. If the core operates as a non-LPM-capable host, it cannot request the connected device or hub to activate LPM mode. If the core operates as a non-LPM-capable device, it cannot respond to any LPM transactions. */
    using OTG_GLPMCFG_LPMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPM capability is not enabled (value: 0)
     *          - B_0x1: LPM capability is enabled (value: 1)
     */
        /** @brief LPM capability is not enabled */
    constexpr std::uint32_t OTG_GLPMCFG_LPMEN_B_0x0 = 0;
        /** @brief LPM capability is enabled */
    constexpr std::uint32_t OTG_GLPMCFG_LPMEN_B_0x1 = 1;

    /** @brief LPM token acknowledge enable Handshake response to LPM token preprogrammed by device application software. Even though ACK is preprogrammed, the core device responds with ACK only on successful LPM transaction. The LPM transaction is successful if: No PID/CRC5 errors in either EXT token or LPM token (else ERROR) Valid bLinkState = 0001B (L1) received in LPM transaction (else STALL) No data pending in transmit queue (else NYET). The preprogrammed software bit is over-ridden for response to LPM token when: The received bLinkState is not L1 (STALL response), or An error is detected in either of the LPM token packets because of corruption (ERROR response). Note: Accessible only in device mode. */
    using OTG_GLPMCFG_LPMACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: ACK (value: 1)
     *          - B_0x0: NYET (value: 0)
     */
        /** @brief ACK */
    constexpr std::uint32_t OTG_GLPMCFG_LPMACK_B_0x1 = 1;
        /** @brief NYET */
    constexpr std::uint32_t OTG_GLPMCFG_LPMACK_B_0x0 = 0;

    /** @brief Best effort service latency Host mode */
    using OTG_GLPMCFG_BESL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 125 (value: 0)
     *          - B_0x1: 150 (value: 1)
     *          - B_0x2: 200 (value: 2)
     *          - B_0x3: 300 (value: 3)
     *          - B_0x4: 400 (value: 4)
     *          - B_0x5: 500 (value: 5)
     *          - B_0x6: 1000 (value: 6)
     *          - B_0x7: 2000 (value: 7)
     *          - B_0x8: 3000 (value: 8)
     *          - B_0x9: 4000 (value: 9)
     *          - B_0xA: 5000 (value: 10)
     *          - B_0xB: 6000 (value: 11)
     *          - B_0xC: 7000 (value: 12)
     *          - B_0xD: 8000 (value: 13)
     *          - B_0xE: 9000 (value: 14)
     *          - B_0xF: 10000 (value: 15)
     */
        /** @brief 125 */
    constexpr std::uint32_t OTG_GLPMCFG_BESL_B_0x0 = 0;
        /** @brief 150 */
    constexpr std::uint32_t OTG_GLPMCFG_BESL_B_0x1 = 1;
        /** @brief 200 */
    constexpr std::uint32_t OTG_GLPMCFG_BESL_B_0x2 = 2;
        /** @brief 300 */
    constexpr std::uint32_t OTG_GLPMCFG_BESL_B_0x3 = 3;
        /** @brief 400 */
    constexpr std::uint32_t OTG_GLPMCFG_BESL_B_0x4 = 4;
        /** @brief 500 */
    constexpr std::uint32_t OTG_GLPMCFG_BESL_B_0x5 = 5;
        /** @brief 1000 */
    constexpr std::uint32_t OTG_GLPMCFG_BESL_B_0x6 = 6;
        /** @brief 2000 */
    constexpr std::uint32_t OTG_GLPMCFG_BESL_B_0x7 = 7;
        /** @brief 3000 */
    constexpr std::uint32_t OTG_GLPMCFG_BESL_B_0x8 = 8;
        /** @brief 4000 */
    constexpr std::uint32_t OTG_GLPMCFG_BESL_B_0x9 = 9;
        /** @brief 5000 */
    constexpr std::uint32_t OTG_GLPMCFG_BESL_B_0xA = 10;
        /** @brief 6000 */
    constexpr std::uint32_t OTG_GLPMCFG_BESL_B_0xB = 11;
        /** @brief 7000 */
    constexpr std::uint32_t OTG_GLPMCFG_BESL_B_0xC = 12;
        /** @brief 8000 */
    constexpr std::uint32_t OTG_GLPMCFG_BESL_B_0xD = 13;
        /** @brief 9000 */
    constexpr std::uint32_t OTG_GLPMCFG_BESL_B_0xE = 14;
        /** @brief 10000 */
    constexpr std::uint32_t OTG_GLPMCFG_BESL_B_0xF = 15;

    /** @brief bRemoteWake value Host mode: The value of remote wake up to be sent in the wIndex field of LPM transaction. Device mode (read-only): This field is updated with the received LPM token bRemoteWake bmAttribute when an ACK, NYET, or STALL response is sent to an LPM transaction. */
    using OTG_GLPMCFG_REMWAKE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief L1 Shallow Sleep enable Enables suspending the PHY in L1 Sleep mode. For maximum power saving during L1 Sleep mode, this bit should be set to '1' by application SW in all the cases. */
    using OTG_GLPMCFG_L1SSEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BESL threshold */
    using OTG_GLPMCFG_BESLTHRS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 75 (value: 0)
     *          - B_0x1: 100 (value: 1)
     *          - B_0x2: 150 (value: 2)
     *          - B_0x3: 250 (value: 3)
     *          - B_0x4: 350 (value: 4)
     *          - B_0x5: 450 (value: 5)
     *          - B_0x6: 950 (value: 6)
     */
        /** @brief 75 */
    constexpr std::uint32_t OTG_GLPMCFG_BESLTHRS_B_0x0 = 0;
        /** @brief 100 */
    constexpr std::uint32_t OTG_GLPMCFG_BESLTHRS_B_0x1 = 1;
        /** @brief 150 */
    constexpr std::uint32_t OTG_GLPMCFG_BESLTHRS_B_0x2 = 2;
        /** @brief 250 */
    constexpr std::uint32_t OTG_GLPMCFG_BESLTHRS_B_0x3 = 3;
        /** @brief 350 */
    constexpr std::uint32_t OTG_GLPMCFG_BESLTHRS_B_0x4 = 4;
        /** @brief 450 */
    constexpr std::uint32_t OTG_GLPMCFG_BESLTHRS_B_0x5 = 5;
        /** @brief 950 */
    constexpr std::uint32_t OTG_GLPMCFG_BESLTHRS_B_0x6 = 6;

    /** @brief L1 deep sleep enable Enables suspending the PHY in L1 Sleep mode. For maximum power saving during L1 Sleep mode, this bit should be set to '1' by application SW in all the cases. */
    using OTG_GLPMCFG_L1DSEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPM response Device mode: The response of the core to LPM transaction received is reflected in these two bits. Host mode: Handshake response received from local device for LPM transaction */
    using OTG_GLPMCFG_LPMRSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x3: ACK (value: 3)
     *          - B_0x2: NYET (value: 2)
     *          - B_0x1: STALL (value: 1)
     *          - B_0x0: ERROR (No handshake response) (value: 0)
     */
        /** @brief ACK */
    constexpr std::uint32_t OTG_GLPMCFG_LPMRSP_B_0x3 = 3;
        /** @brief NYET */
    constexpr std::uint32_t OTG_GLPMCFG_LPMRSP_B_0x2 = 2;
        /** @brief STALL */
    constexpr std::uint32_t OTG_GLPMCFG_LPMRSP_B_0x1 = 1;
        /** @brief ERROR (No handshake response) */
    constexpr std::uint32_t OTG_GLPMCFG_LPMRSP_B_0x0 = 0;

    /** @brief Port sleep status Device mode: This bit is set as long as a Sleep condition is present on the USB bus. The core enters the Sleep state when an ACK response is sent to an LPM transaction and the T<sub>L1TokenRetry</sub> timer has expired. To stop the PHY clock, the application must set the STPPCLK bit in OTG_PCGCCTL, which asserts the PHY suspend input signal. The application must rely on SLPSTS and not ACK in LPMRSP to confirm transition into sleep. The core comes out of sleep: When there is any activity on the USB linestate When the application writes to the RWUSIG bit in OTG_DCTL or when the application resets or soft-disconnects the device. Host mode: The host transitions to Sleep (L1) state as a side-effect of a successful LPM transaction by the core to the local port with ACK response from the device. The read value of this bit reflects the current Sleep status of the port. The core clears this bit after: The core detects a remote L1 wakeup signal, The application sets the PRST bit or the PRES bit in the OTG_HPRT register, or The application sets the L1Resume/ remote wakeup detected interrupt bit or disconnect detected interrupt bit in the core interrupt register (WKUPINT or DISCINT bit in OTG_GINTSTS, respectively). */
    using OTG_GLPMCFG_SLPSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Core not in L1 (value: 0)
     *          - B_0x1: Core in L1 (value: 1)
     */
        /** @brief Core not in L1 */
    constexpr std::uint32_t OTG_GLPMCFG_SLPSTS_B_0x0 = 0;
        /** @brief Core in L1 */
    constexpr std::uint32_t OTG_GLPMCFG_SLPSTS_B_0x1 = 1;

    /** @brief Sleep state resume OK */
    using OTG_GLPMCFG_L1RSMOK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: The application or host can start resume from Sleep state (value: 1)
     *          - B_0x0: The application or host cannot start resume from Sleep state (value: 0)
     */
        /** @brief The application or host can start resume from Sleep state */
    constexpr std::uint32_t OTG_GLPMCFG_L1RSMOK_B_0x1 = 1;
        /** @brief The application or host cannot start resume from Sleep state */
    constexpr std::uint32_t OTG_GLPMCFG_L1RSMOK_B_0x0 = 0;

    /** @brief LPM Channel Index The channel number on which the LPM transaction has to be applied while sending an LPM transaction to the local device. Based on the LPM channel index, the core automatically inserts the device address and endpoint number programmed in the corresponding channel into the LPM transaction. Note: Accessible only in host mode. */
    using OTG_GLPMCFG_LPMCHIDX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPM retry count When the device gives an ERROR response, this is the number of additional LPM retries that the host performs until a valid device response (STALL, NYET, or ACK) is received. Note: Accessible only in host mode. */
    using OTG_GLPMCFG_LPMRCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Send LPM transaction When the application software sets this bit, an LPM transaction containing two tokens, EXT and LPM is sent. The hardware clears this bit once a valid response (STALL, NYET, or ACK) is received from the device or the core has finished transmitting the programmed number of LPM retries. Note: This bit must be set only when the host is connected to a local port. Note: Accessible only in host mode. */
    using OTG_GLPMCFG_SNDLPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPM retry count status Number of LPM host retries still remaining to be transmitted for the current LPM sequence. Note: Accessible only in host mode. */
    using OTG_GLPMCFG_LPMRCNTSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable best effort service latency This bit enables the BESL feature as defined in the LPM errata: USB 2.0 Link Power Management Addendum Engineering Change Notice to the USB 2.0 specification, July 16, 2007 Errata for USB 2.0 ECN: Link Power Management (LPM) - 7/2007 Note: Only the updated behavior (described in LPM Errata) is considered in this document and so the ENBESL bit should be set to '1' by application SW. */
    using OTG_GLPMCFG_ENBESL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The core works as described in the following document: (value: 0)
     *          - B_0x1: The core works as described in the LPM Errata: (value: 1)
     */
        /** @brief The core works as described in the following document: */
    constexpr std::uint32_t OTG_GLPMCFG_ENBESL_B_0x0 = 0;
        /** @brief The core works as described in the LPM Errata: */
    constexpr std::uint32_t OTG_GLPMCFG_ENBESL_B_0x1 = 1;

    /** @brief OTG host periodic transmit FIFO size register */
    using OTG_HPTXFSIZ = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x100, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Host periodic Tx FIFO start address This field configures the memory start address for periodic transmit FIFO RAM. */
    using OTG_HPTXFSIZ_PTXSA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Host periodic Tx FIFO depth This value is in terms of 32-bit words. Minimum value is 16 */
    using OTG_HPTXFSIZ_PTXFSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint transmit FIFO 1 size register */
    using OTG_DIEPTXF1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x104, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint FIFOx transmit RAM start address This field contains the memory start address for IN endpoint transmit FIFOx. The address must be aligned with a 32-bit memory location. */
    using OTG_DIEPTXF1_INEPTXSA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint Tx FIFO depth This value is in terms of 32-bit words. Minimum value is 16 */
    using OTG_DIEPTXF1_INEPTXFD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint transmit FIFO 2 size register */
    using OTG_DIEPTXF2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x108, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint FIFOx transmit RAM start address This field contains the memory start address for IN endpoint transmit FIFOx. The address must be aligned with a 32-bit memory location. */
    using OTG_DIEPTXF2_INEPTXSA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint Tx FIFO depth This value is in terms of 32-bit words. Minimum value is 16 */
    using OTG_DIEPTXF2_INEPTXFD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint transmit FIFO 3 size register */
    using OTG_DIEPTXF3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint FIFOx transmit RAM start address This field contains the memory start address for IN endpoint transmit FIFOx. The address must be aligned with a 32-bit memory location. */
    using OTG_DIEPTXF3_INEPTXSA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint Tx FIFO depth This value is in terms of 32-bit words. Minimum value is 16 */
    using OTG_DIEPTXF3_INEPTXFD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint transmit FIFO 4 size register */
    using OTG_DIEPTXF4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x110, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint FIFOx transmit RAM start address This field contains the memory start address for IN endpoint transmit FIFOx. The address must be aligned with a 32-bit memory location. */
    using OTG_DIEPTXF4_INEPTXSA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint Tx FIFO depth This value is in terms of 32-bit words. Minimum value is 16 */
    using OTG_DIEPTXF4_INEPTXFD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint transmit FIFO 5 size register */
    using OTG_DIEPTXF5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x114, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint FIFOx transmit RAM start address This field contains the memory start address for IN endpoint transmit FIFOx. The address must be aligned with a 32-bit memory location. */
    using OTG_DIEPTXF5_INEPTXSA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint Tx FIFO depth This value is in terms of 32-bit words. Minimum value is 16 */
    using OTG_DIEPTXF5_INEPTXFD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint transmit FIFO 6 size register */
    using OTG_DIEPTXF6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x118, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint FIFOx transmit RAM start address This field contains the memory start address for IN endpoint transmit FIFOx. The address must be aligned with a 32-bit memory location. */
    using OTG_DIEPTXF6_INEPTXSA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint Tx FIFO depth This value is in terms of 32-bit words. Minimum value is 16 */
    using OTG_DIEPTXF6_INEPTXFD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint transmit FIFO 7 size register */
    using OTG_DIEPTXF7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x11C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint FIFOx transmit RAM start address This field contains the memory start address for IN endpoint transmit FIFOx. The address must be aligned with a 32-bit memory location. */
    using OTG_DIEPTXF7_INEPTXSA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint Tx FIFO depth This value is in terms of 32-bit words. Minimum value is 16 */
    using OTG_DIEPTXF7_INEPTXFD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint transmit FIFO 8 size register */
    using OTG_DIEPTXF8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x120, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint FIFOx transmit RAM start address This field contains the memory start address for IN endpoint transmit FIFOx. The address must be aligned with a 32-bit memory location. */
    using OTG_DIEPTXF8_INEPTXSA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint Tx FIFO depth This value is in terms of 32-bit words. Minimum value is 16 */
    using OTG_DIEPTXF8_INEPTXFD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host configuration register */
    using OTG_HCFG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x400, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FS/LS PHY clock select Others: Reserved Note: The FSLSPCS must be set on a connection event according to the speed of the connected device (after changing this bit, a software reset must be performed). */
    using OTG_HCFG_FSLSPCS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1_FS_HOST_MODE: PHY clock is running at 48 MHz (value: 1)
     *          - B_0x0_LS_HOST_MODE: FIELD Reserved (value: 0)
     *          - B_0x2_LS_HOST_MODE: Select 6 MHz PHY clock frequency (value: 2)
     *          - B_0x3_LS_HOST_MODE: FIELD Reserved (value: 3)
     */
        /** @brief PHY clock is running at 48 MHz */
    constexpr std::uint32_t OTG_HCFG_FSLSPCS_B_0x1_FS_HOST_MODE = 1;
        /** @brief FIELD Reserved */
    constexpr std::uint32_t OTG_HCFG_FSLSPCS_B_0x0_LS_HOST_MODE = 0;
        /** @brief Select 6 MHz PHY clock frequency */
    constexpr std::uint32_t OTG_HCFG_FSLSPCS_B_0x2_LS_HOST_MODE = 2;
        /** @brief FIELD Reserved */
    constexpr std::uint32_t OTG_HCFG_FSLSPCS_B_0x3_LS_HOST_MODE = 3;

    /** @brief FS- and LS-only support The application uses this bit to control the cores enumeration speed. Using this bit, the application can make the core enumerate as an FS host, even if the connected device supports HS traffic. Do not make changes to this field after initial programming. */
    using OTG_HCFG_FSLSS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host frame interval register */
    using OTG_HFIR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x404, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame interval */
    using OTG_HFIR_FRIVL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reload control This bit allows dynamic reloading of the HFIR register during run time. This bit needs to be programmed during initial configuration and its value must not be changed during run time. RLDCTRL = 0 is not recommended. */
    using OTG_HFIR_RLDCTRL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The HFIR cannot be reloaded dynamically (value: 0)
     *          - B_0x1: The HFIR can be dynamically reloaded during run time. (value: 1)
     */
        /** @brief The HFIR cannot be reloaded dynamically */
    constexpr std::uint32_t OTG_HFIR_RLDCTRL_B_0x0 = 0;
        /** @brief The HFIR can be dynamically reloaded during run time. */
    constexpr std::uint32_t OTG_HFIR_RLDCTRL_B_0x1 = 1;

    /** @brief OTG host frame number/frame time remaining register */
    using OTG_HFNUM = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x408, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame number This field increments when a new SOF is transmitted on the USB, and is cleared to 0 when it reaches 0x3FFF. */
    using OTG_HFNUM_FRNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame time remaining Indicates the amount of time remaining in the current frame, in terms of PHY clocks. This field decrements on each PHY clock. When it reaches zero, this field is reloaded with the value in the Frame interval register and a new SOF is transmitted on the USB. */
    using OTG_HFNUM_FTREM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_Host periodic transmit FIFO/queue status register */
    using OTG_HPTXSTS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x410, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Periodic transmit data FIFO space available Indicates the number of free locations available to be written to in the periodic Tx FIFO. Values are in terms of 32-bit words n: n words available (where 0 UNDER OR EQUAL n UNDER OR EQUAL PTXFD) Others: Reserved */
    using OTG_HPTXSTS_PTXFSAVL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Periodic Tx FIFO is full (value: 0)
     *          - B_0x1: 1 word available (value: 1)
     */
        /** @brief Periodic Tx FIFO is full */
    constexpr std::uint32_t OTG_HPTXSTS_PTXFSAVL_B_0x0 = 0;
        /** @brief 1 word available */
    constexpr std::uint32_t OTG_HPTXSTS_PTXFSAVL_B_0x1 = 1;

    /** @brief Periodic transmit request queue space available Indicates the number of free locations available to be written in the periodic transmit request queue. This queue holds both IN and OUT requests. n: n locations available (0 UNDER OR EQUAL n UNDER OR EQUAL 8) Others: Reserved */
    using OTG_HPTXSTS_PTXQSAV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Periodic transmit request queue is full (value: 0)
     *          - B_0x1: 1 location available (value: 1)
     */
        /** @brief Periodic transmit request queue is full */
    constexpr std::uint32_t OTG_HPTXSTS_PTXQSAV_B_0x0 = 0;
        /** @brief 1 location available */
    constexpr std::uint32_t OTG_HPTXSTS_PTXQSAV_B_0x1 = 1;

    /** @brief Top of the periodic transmit request queue This indicates the entry in the periodic Tx request queue that is currently being processed by the MAC. This register is used for debugging. Bit 31: Odd/Even frame 0XXXXXXX: send in even frame 1XXXXXXX: send in odd frame Bits 30:27: Channel/endpoint number Bits 26:25: Type XXXXX00X: IN/OUT XXXXX01X: Zero-length packet XXXXX11X: Disable channel command Bit 24: Terminate (last entry for the selected channel/endpoint) */
    using OTG_HPTXSTS_PTXQTOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host all channels interrupt register */
    using OTG_HAINT = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x414, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel interrupts One bit per channel: Bit 0 for Channel 0, bit 15 for Channel 15 */
    using OTG_HAINT_HAINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host all channels interrupt mask register */
    using OTG_HAINTMSK = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x418, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel interrupt mask One bit per channel: Bit 0 for channel 0, bit 15 for channel 15 */
    using OTG_HAINTMSK_HAINTM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HAINTMSK_HAINTM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HAINTMSK_HAINTM_B_0x1 = 1;

    /** @brief OTG host port control and status register */
    using OTG_HPRT = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x440, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port connect status */
    using OTG_HPRT_PCSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No device is attached to the port (value: 0)
     *          - B_0x1: A device is attached to the port (value: 1)
     */
        /** @brief No device is attached to the port */
    constexpr std::uint32_t OTG_HPRT_PCSTS_B_0x0 = 0;
        /** @brief A device is attached to the port */
    constexpr std::uint32_t OTG_HPRT_PCSTS_B_0x1 = 1;

    /** @brief Port connect detected The core sets this bit when a device connection is detected to trigger an interrupt to the application using the host port interrupt bit in the core interrupt register (HPRTINT bit in OTG_GINTSTS). The application must write a 1 to this bit to clear the interrupt. */
    using OTG_HPRT_PCDET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port enable A port is enabled only by the core after a reset sequence, and is disabled by an overcurrent condition, a disconnect condition, or by the application clearing this bit. The application cannot set this bit by a register write. It can only clear it to disable the port. This bit does not trigger any interrupt to the application. */
    using OTG_HPRT_PENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Port disabled (value: 0)
     *          - B_0x1: Port enabled (value: 1)
     */
        /** @brief Port disabled */
    constexpr std::uint32_t OTG_HPRT_PENA_B_0x0 = 0;
        /** @brief Port enabled */
    constexpr std::uint32_t OTG_HPRT_PENA_B_0x1 = 1;

    /** @brief Port enable/disable change The core sets this bit when the status of the port enable bit 2 in this register changes. */
    using OTG_HPRT_PENCHNG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port overcurrent active Indicates the overcurrent condition of the port. */
    using OTG_HPRT_POCA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No overcurrent condition (value: 0)
     *          - B_0x1: Overcurrent condition (value: 1)
     */
        /** @brief No overcurrent condition */
    constexpr std::uint32_t OTG_HPRT_POCA_B_0x0 = 0;
        /** @brief Overcurrent condition */
    constexpr std::uint32_t OTG_HPRT_POCA_B_0x1 = 1;

    /** @brief Port overcurrent change The core sets this bit when the status of the port overcurrent active bit (bit 4) in this register changes. */
    using OTG_HPRT_POCCHNG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port resume The application sets this bit to drive resume signaling on the port. The core continues to drive the resume signal until the application clears this bit. If the core detects a USB remote wakeup sequence, as indicated by the port resume/remote wakeup detected interrupt bit of the core interrupt register (WKUPINT bit in OTG_GINTSTS), the core starts driving resume signaling without application intervention and clears this bit when it detects a disconnect condition. The read value of this bit indicates whether the core is currently driving resume signaling. When LPM is enabled and the core is in L1 state, the behavior of this bit is as follow: 1. The application sets this bit to drive resume signaling on the port. 2. The core continues to drive the resume signal until a predetermined time specified in BESLTHRS[3:0] field of OTG_GLPMCFG register. 3. If the core detects a USB remote wakeup sequence, as indicated by the port L1Resume/Remote L1Wakeup detected interrupt bit of the core interrupt register (WKUPINT in OTG_GINTSTS), the core starts driving resume signaling without application intervention and clears this bit at the end of resume.This bit can be set or cleared by both the core and the application. This bit is cleared by the core even if there is no device connected to the host. */
    using OTG_HPRT_PRES = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No resume driven (value: 0)
     *          - B_0x1: Resume driven (value: 1)
     */
        /** @brief No resume driven */
    constexpr std::uint32_t OTG_HPRT_PRES_B_0x0 = 0;
        /** @brief Resume driven */
    constexpr std::uint32_t OTG_HPRT_PRES_B_0x1 = 1;

    /** @brief Port suspend The application sets this bit to put this port in suspend mode. The core only stops sending SOFs when this is set. To stop the PHY clock, the application must set the port clock stop bit, which asserts the suspend input pin of the PHY. The read value of this bit reflects the current suspend status of the port. This bit is cleared by the core after a remote wakeup signal is detected or the application sets the port reset bit or port resume bit in this register or the resume/remote wakeup detected interrupt bit or disconnect detected interrupt bit in the core interrupt register (WKUPINT or DISCINT in OTG_GINTSTS, respectively). */
    using OTG_HPRT_PSUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Port not in suspend mode (value: 0)
     *          - B_0x1: Port in suspend mode (value: 1)
     */
        /** @brief Port not in suspend mode */
    constexpr std::uint32_t OTG_HPRT_PSUSP_B_0x0 = 0;
        /** @brief Port in suspend mode */
    constexpr std::uint32_t OTG_HPRT_PSUSP_B_0x1 = 1;

    /** @brief Port reset When the application sets this bit, a reset sequence is started on this port. The application must time the reset period and clear this bit after the reset sequence is complete. The application must leave this bit set for a minimum duration of at least 10 ms to start a reset on the port. The application can leave it set for another 10 ms in addition to the required minimum duration, before clearing the bit, even though there is no maximum limit set by the USB standard. High speed: 50 ms Full speed/Low speed: 10 ms */
    using OTG_HPRT_PRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Port not in reset (value: 0)
     *          - B_0x1: Port in reset (value: 1)
     */
        /** @brief Port not in reset */
    constexpr std::uint32_t OTG_HPRT_PRST_B_0x0 = 0;
        /** @brief Port in reset */
    constexpr std::uint32_t OTG_HPRT_PRST_B_0x1 = 1;

    /** @brief Port line status Indicates the current logic level USB data lines Bit 10: Logic level of OTG_DP Bit 11: Logic level of OTG_DM */
    using OTG_HPRT_PLSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port power The application uses this field to control power to this port, and the core clears this bit on an overcurrent condition. */
    using OTG_HPRT_PPWR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Power off (value: 0)
     *          - B_0x1: Power on (value: 1)
     */
        /** @brief Power off */
    constexpr std::uint32_t OTG_HPRT_PPWR_B_0x0 = 0;
        /** @brief Power on */
    constexpr std::uint32_t OTG_HPRT_PPWR_B_0x1 = 1;

    /** @brief Port test control The application writes a nonzero value to this field to put the port into a Test mode, and the corresponding pattern is signaled on the port. Others: Reserved */
    using OTG_HPRT_PTCTL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Test mode disabled (value: 0)
     *          - B_0x1: Test_J mode (value: 1)
     *          - B_0x2: Test_K mode (value: 2)
     *          - B_0x3: Test_SE0_NAK mode (value: 3)
     *          - B_0x4: Test_Packet mode (value: 4)
     *          - B_0x5: Test_Force_Enable (value: 5)
     */
        /** @brief Test mode disabled */
    constexpr std::uint32_t OTG_HPRT_PTCTL_B_0x0 = 0;
        /** @brief Test_J mode */
    constexpr std::uint32_t OTG_HPRT_PTCTL_B_0x1 = 1;
        /** @brief Test_K mode */
    constexpr std::uint32_t OTG_HPRT_PTCTL_B_0x2 = 2;
        /** @brief Test_SE0_NAK mode */
    constexpr std::uint32_t OTG_HPRT_PTCTL_B_0x3 = 3;
        /** @brief Test_Packet mode */
    constexpr std::uint32_t OTG_HPRT_PTCTL_B_0x4 = 4;
        /** @brief Test_Force_Enable */
    constexpr std::uint32_t OTG_HPRT_PTCTL_B_0x5 = 5;

    /** @brief Port speed Indicates the speed of the device attached to this port. */
    using OTG_HPRT_PSPD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Full speed (value: 1)
     *          - B_0x2: Low speed (value: 2)
     *          - B_0x3: FIELD Reserved (value: 3)
     *          - B_0x0: High speed (value: 0)
     */
        /** @brief Full speed */
    constexpr std::uint32_t OTG_HPRT_PSPD_B_0x1 = 1;
        /** @brief Low speed */
    constexpr std::uint32_t OTG_HPRT_PSPD_B_0x2 = 2;
        /** @brief FIELD Reserved */
    constexpr std::uint32_t OTG_HPRT_PSPD_B_0x3 = 3;
        /** @brief High speed */
    constexpr std::uint32_t OTG_HPRT_PSPD_B_0x0 = 0;

    /** @brief OTG host channel 0 characteristics register */
    using OTG_HCCHAR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x500, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size Indicates the maximum packet size of the associated endpoint. */
    using OTG_HCCHAR0_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint number Indicates the endpoint number on the device serving as the data source or sink. */
    using OTG_HCCHAR0_EPNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint direction Indicates whether the transaction is IN or OUT. */
    using OTG_HCCHAR0_EPDIR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OUT (value: 0)
     *          - B_0x1: IN (value: 1)
     */
        /** @brief OUT */
    constexpr std::uint32_t OTG_HCCHAR0_EPDIR_B_0x0 = 0;
        /** @brief IN */
    constexpr std::uint32_t OTG_HCCHAR0_EPDIR_B_0x1 = 1;

    /** @brief Low-speed device This field is set by the application to indicate that this channel is communicating to a low-speed device. */
    using OTG_HCCHAR0_LSDEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint type Indicates the transfer type selected. */
    using OTG_HCCHAR0_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_HCCHAR0_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_HCCHAR0_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_HCCHAR0_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_HCCHAR0_EPTYP_B_0x3 = 3;

    /** @brief Multicount This field indicates to the host the number of transactions that must be executed per frame for this periodic endpoint. For non-periodic transfers, this field is not used Note: This field must be set to at least 01. */
    using OTG_HCCHAR0_MCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Reserved. This field yields undefined results (value: 0)
     *          - B_0x1: 1 transaction (value: 1)
     *          - B_0x2: 2 transactions per frame to be issued for this endpoint (value: 2)
     *          - B_0x3: 3 transactions per frame to be issued for this endpoint (value: 3)
     */
        /** @brief Reserved. This field yields undefined results */
    constexpr std::uint32_t OTG_HCCHAR0_MCNT_B_0x0 = 0;
        /** @brief 1 transaction */
    constexpr std::uint32_t OTG_HCCHAR0_MCNT_B_0x1 = 1;
        /** @brief 2 transactions per frame to be issued for this endpoint */
    constexpr std::uint32_t OTG_HCCHAR0_MCNT_B_0x2 = 2;
        /** @brief 3 transactions per frame to be issued for this endpoint */
    constexpr std::uint32_t OTG_HCCHAR0_MCNT_B_0x3 = 3;

    /** @brief Device address This field selects the specific device serving as the data source or sink. */
    using OTG_HCCHAR0_DAD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Odd frame This field is set (reset) by the application to indicate that the OTG host must perform a transfer in an odd frame. This field is applicable for only periodic (isochronous and interrupt) transactions. */
    using OTG_HCCHAR0_ODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Even frame (value: 0)
     *          - B_0x1: Odd frame (value: 1)
     */
        /** @brief Even frame */
    constexpr std::uint32_t OTG_HCCHAR0_ODDFRM_B_0x0 = 0;
        /** @brief Odd frame */
    constexpr std::uint32_t OTG_HCCHAR0_ODDFRM_B_0x1 = 1;

    /** @brief Channel disable The application sets this bit to stop transmitting/receiving data on a channel, even before the transfer for that channel is complete. The application must wait for the Channel disabled interrupt before treating the channel as disabled. */
    using OTG_HCCHAR0_CHDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel enable This field is set by the application and cleared by the OTG host. */
    using OTG_HCCHAR0_CHENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Channel disabled (value: 0)
     *          - B_0x1: Channel enabled (value: 1)
     */
        /** @brief Channel disabled */
    constexpr std::uint32_t OTG_HCCHAR0_CHENA_B_0x0 = 0;
        /** @brief Channel enabled */
    constexpr std::uint32_t OTG_HCCHAR0_CHENA_B_0x1 = 1;

    /** @brief OTG host channel 0 split control register */
    using OTG_HCSPLT0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x504, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port address This field is the port number of the recipient transaction translator. */
    using OTG_HCSPLT0_PRTADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hub address This field holds the device address of the transaction translators hub. */
    using OTG_HCSPLT0_HUBADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction position This field is used to determine whether to send all, first, middle, or last payloads with each OUT transaction. */
    using OTG_HCSPLT0_XACTPOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x3: All. This is the entire data payload of this transaction (which is less than or equal to 188 bytes) (value: 3)
     *          - B_0x2: Begin. This is the first data payload of this transaction (which is larger than 188 bytes) (value: 2)
     *          - B_0x0: Mid. This is the middle payload of this transaction (which is larger than 188 bytes) (value: 0)
     *          - B_0x1: End. This is the last payload of this transaction (which is larger than 188 bytes) (value: 1)
     */
        /** @brief All. This is the entire data payload of this transaction (which is less than or equal to 188 bytes) */
    constexpr std::uint32_t OTG_HCSPLT0_XACTPOS_B_0x3 = 3;
        /** @brief Begin. This is the first data payload of this transaction (which is larger than 188 bytes) */
    constexpr std::uint32_t OTG_HCSPLT0_XACTPOS_B_0x2 = 2;
        /** @brief Mid. This is the middle payload of this transaction (which is larger than 188 bytes) */
    constexpr std::uint32_t OTG_HCSPLT0_XACTPOS_B_0x0 = 0;
        /** @brief End. This is the last payload of this transaction (which is larger than 188 bytes) */
    constexpr std::uint32_t OTG_HCSPLT0_XACTPOS_B_0x1 = 1;

    /** @brief Do complete split The application sets this bit to request the OTG host to perform a complete split transaction. */
    using OTG_HCSPLT0_COMPLSPLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Split enable The application sets this bit to indicate that this channel is enabled to perform split transactions. */
    using OTG_HCSPLT0_SPLITEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 0 interrupt register */
    using OTG_HCINT0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x508, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed. Transfer completed normally without any errors. */
    using OTG_HCINT0_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel halted. Indicates the transfer completed abnormally either because of any USB transaction error or in response to disable request by the application. */
    using OTG_HCINT0_CHH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error This error is generated only in Internal DMA mode when an AHB error occurs during an AHB read/write operation. The application can read the corresponding DMA channel address register to get the error address. */
    using OTG_HCINT0_AHBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL response received interrupt. */
    using OTG_HCINT0_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK response received interrupt. */
    using OTG_HCINT0_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACK response received/transmitted interrupt. */
    using OTG_HCINT0_ACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Not yet ready response received interrupt. */
    using OTG_HCINT0_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction error. Indicates one of the following errors occurred on the USB. CRC check failure Timeout Bit stuff error False EOP */
    using OTG_HCINT0_TXERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Babble error. */
    using OTG_HCINT0_BBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame overrun. */
    using OTG_HCINT0_FRMOR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data toggle error. */
    using OTG_HCINT0_DTERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 0 interrupt mask register */
    using OTG_HCINTMSK0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed mask */
    using OTG_HCINTMSK0_XFRCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK0_XFRCM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK0_XFRCM_B_0x1 = 1;

    /** @brief Channel halted mask */
    using OTG_HCINTMSK0_CHHM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK0_CHHM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK0_CHHM_B_0x1 = 1;

    /** @brief AHB error. */
    using OTG_HCINTMSK0_AHBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK0_AHBERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK0_AHBERRM_B_0x1 = 1;

    /** @brief STALL response received interrupt mask. */
    using OTG_HCINTMSK0_STALLM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK0_STALLM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK0_STALLM_B_0x1 = 1;

    /** @brief NAK response received interrupt mask. */
    using OTG_HCINTMSK0_NAKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK0_NAKM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK0_NAKM_B_0x1 = 1;

    /** @brief ACK response received/transmitted interrupt mask. */
    using OTG_HCINTMSK0_ACKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK0_ACKM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK0_ACKM_B_0x1 = 1;

    /** @brief response received interrupt mask. */
    using OTG_HCINTMSK0_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK0_NYET_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK0_NYET_B_0x1 = 1;

    /** @brief Transaction error mask. */
    using OTG_HCINTMSK0_TXERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK0_TXERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK0_TXERRM_B_0x1 = 1;

    /** @brief Babble error mask. */
    using OTG_HCINTMSK0_BBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK0_BBERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK0_BBERRM_B_0x1 = 1;

    /** @brief Frame overrun mask. */
    using OTG_HCINTMSK0_FRMORM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK0_FRMORM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK0_FRMORM_B_0x1 = 1;

    /** @brief Data toggle error mask. */
    using OTG_HCINTMSK0_DTERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK0_DTERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK0_DTERRM_B_0x1 = 1;

    /** @brief OTG host channel 0 transfer size register */
    using OTG_HCTSIZ0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x510, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size For an OUT, this field is the number of data bytes the host sends during the transfer. For an IN, this field is the buffer size that the application has reserved for the transfer. The application is expected to program this field as an integer multiple of the maximum packet size for IN transactions (periodic and non-periodic). */
    using OTG_HCTSIZ0_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count This field is programmed by the application with the expected number of packets to be transmitted (OUT) or received (IN). The host decrements this count on every successful transmission or reception of an OUT/IN packet. Once this count reaches zero, the application is interrupted to indicate normal completion. */
    using OTG_HCTSIZ0_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data PID The application programs this field with the type of PID to use for the initial transaction. The host maintains this field for the rest of the transfer. */
    using OTG_HCTSIZ0_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATA0 (value: 0)
     *          - B_0x1: DATA2 (value: 1)
     *          - B_0x2: DATA1 (value: 2)
     *          - B_0x3: SETUP (control) / MDATA (non-control) (value: 3)
     */
        /** @brief DATA0 */
    constexpr std::uint32_t OTG_HCTSIZ0_DPID_B_0x0 = 0;
        /** @brief DATA2 */
    constexpr std::uint32_t OTG_HCTSIZ0_DPID_B_0x1 = 1;
        /** @brief DATA1 */
    constexpr std::uint32_t OTG_HCTSIZ0_DPID_B_0x2 = 2;
        /** @brief SETUP (control) / MDATA (non-control) */
    constexpr std::uint32_t OTG_HCTSIZ0_DPID_B_0x3 = 3;

    /** @brief Do Ping This bit is used only for OUT transfers. Setting this field to 1 directs the host to do PING protocol. Note: Do not set this bit for IN transfers. If this bit is set for IN transfers, it disables the channel. */
    using OTG_HCTSIZ0_DOPNG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 0 DMA address register */
    using OTG_HCDMA0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x514, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA address This field holds the start address in the external memory from which the data for the endpoint must be fetched or to which it must be stored. This register is incremented on every AHB transaction. */
    using OTG_HCDMA0_DMAADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 1 characteristics register */
    using OTG_HCCHAR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x520, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size Indicates the maximum packet size of the associated endpoint. */
    using OTG_HCCHAR1_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint number Indicates the endpoint number on the device serving as the data source or sink. */
    using OTG_HCCHAR1_EPNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint direction Indicates whether the transaction is IN or OUT. */
    using OTG_HCCHAR1_EPDIR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OUT (value: 0)
     *          - B_0x1: IN (value: 1)
     */
        /** @brief OUT */
    constexpr std::uint32_t OTG_HCCHAR1_EPDIR_B_0x0 = 0;
        /** @brief IN */
    constexpr std::uint32_t OTG_HCCHAR1_EPDIR_B_0x1 = 1;

    /** @brief Low-speed device This field is set by the application to indicate that this channel is communicating to a low-speed device. */
    using OTG_HCCHAR1_LSDEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint type Indicates the transfer type selected. */
    using OTG_HCCHAR1_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_HCCHAR1_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_HCCHAR1_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_HCCHAR1_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_HCCHAR1_EPTYP_B_0x3 = 3;

    /** @brief Multicount This field indicates to the host the number of transactions that must be executed per frame for this periodic endpoint. For non-periodic transfers, this field is not used Note: This field must be set to at least 01. */
    using OTG_HCCHAR1_MCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Reserved. This field yields undefined results (value: 0)
     *          - B_0x1: 1 transaction (value: 1)
     *          - B_0x2: 2 transactions per frame to be issued for this endpoint (value: 2)
     *          - B_0x3: 3 transactions per frame to be issued for this endpoint (value: 3)
     */
        /** @brief Reserved. This field yields undefined results */
    constexpr std::uint32_t OTG_HCCHAR1_MCNT_B_0x0 = 0;
        /** @brief 1 transaction */
    constexpr std::uint32_t OTG_HCCHAR1_MCNT_B_0x1 = 1;
        /** @brief 2 transactions per frame to be issued for this endpoint */
    constexpr std::uint32_t OTG_HCCHAR1_MCNT_B_0x2 = 2;
        /** @brief 3 transactions per frame to be issued for this endpoint */
    constexpr std::uint32_t OTG_HCCHAR1_MCNT_B_0x3 = 3;

    /** @brief Device address This field selects the specific device serving as the data source or sink. */
    using OTG_HCCHAR1_DAD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Odd frame This field is set (reset) by the application to indicate that the OTG host must perform a transfer in an odd frame. This field is applicable for only periodic (isochronous and interrupt) transactions. */
    using OTG_HCCHAR1_ODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Even frame (value: 0)
     *          - B_0x1: Odd frame (value: 1)
     */
        /** @brief Even frame */
    constexpr std::uint32_t OTG_HCCHAR1_ODDFRM_B_0x0 = 0;
        /** @brief Odd frame */
    constexpr std::uint32_t OTG_HCCHAR1_ODDFRM_B_0x1 = 1;

    /** @brief Channel disable The application sets this bit to stop transmitting/receiving data on a channel, even before the transfer for that channel is complete. The application must wait for the Channel disabled interrupt before treating the channel as disabled. */
    using OTG_HCCHAR1_CHDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel enable This field is set by the application and cleared by the OTG host. */
    using OTG_HCCHAR1_CHENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Channel disabled (value: 0)
     *          - B_0x1: Channel enabled (value: 1)
     */
        /** @brief Channel disabled */
    constexpr std::uint32_t OTG_HCCHAR1_CHENA_B_0x0 = 0;
        /** @brief Channel enabled */
    constexpr std::uint32_t OTG_HCCHAR1_CHENA_B_0x1 = 1;

    /** @brief OTG host channel 1 split control register */
    using OTG_HCSPLT1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x524, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port address This field is the port number of the recipient transaction translator. */
    using OTG_HCSPLT1_PRTADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hub address This field holds the device address of the transaction translators hub. */
    using OTG_HCSPLT1_HUBADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction position This field is used to determine whether to send all, first, middle, or last payloads with each OUT transaction. */
    using OTG_HCSPLT1_XACTPOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x3: All. This is the entire data payload of this transaction (which is less than or equal to 188 bytes) (value: 3)
     *          - B_0x2: Begin. This is the first data payload of this transaction (which is larger than 188 bytes) (value: 2)
     *          - B_0x0: Mid. This is the middle payload of this transaction (which is larger than 188 bytes) (value: 0)
     *          - B_0x1: End. This is the last payload of this transaction (which is larger than 188 bytes) (value: 1)
     */
        /** @brief All. This is the entire data payload of this transaction (which is less than or equal to 188 bytes) */
    constexpr std::uint32_t OTG_HCSPLT1_XACTPOS_B_0x3 = 3;
        /** @brief Begin. This is the first data payload of this transaction (which is larger than 188 bytes) */
    constexpr std::uint32_t OTG_HCSPLT1_XACTPOS_B_0x2 = 2;
        /** @brief Mid. This is the middle payload of this transaction (which is larger than 188 bytes) */
    constexpr std::uint32_t OTG_HCSPLT1_XACTPOS_B_0x0 = 0;
        /** @brief End. This is the last payload of this transaction (which is larger than 188 bytes) */
    constexpr std::uint32_t OTG_HCSPLT1_XACTPOS_B_0x1 = 1;

    /** @brief Do complete split The application sets this bit to request the OTG host to perform a complete split transaction. */
    using OTG_HCSPLT1_COMPLSPLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Split enable The application sets this bit to indicate that this channel is enabled to perform split transactions. */
    using OTG_HCSPLT1_SPLITEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 1 interrupt register */
    using OTG_HCINT1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x528, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed. Transfer completed normally without any errors. */
    using OTG_HCINT1_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel halted. Indicates the transfer completed abnormally either because of any USB transaction error or in response to disable request by the application. */
    using OTG_HCINT1_CHH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error This error is generated only in Internal DMA mode when an AHB error occurs during an AHB read/write operation. The application can read the corresponding DMA channel address register to get the error address. */
    using OTG_HCINT1_AHBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL response received interrupt. */
    using OTG_HCINT1_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK response received interrupt. */
    using OTG_HCINT1_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACK response received/transmitted interrupt. */
    using OTG_HCINT1_ACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Not yet ready response received interrupt. */
    using OTG_HCINT1_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction error. Indicates one of the following errors occurred on the USB. CRC check failure Timeout Bit stuff error False EOP */
    using OTG_HCINT1_TXERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Babble error. */
    using OTG_HCINT1_BBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame overrun. */
    using OTG_HCINT1_FRMOR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data toggle error. */
    using OTG_HCINT1_DTERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 1 interrupt mask register */
    using OTG_HCINTMSK1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x52C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed mask */
    using OTG_HCINTMSK1_XFRCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK1_XFRCM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK1_XFRCM_B_0x1 = 1;

    /** @brief Channel halted mask */
    using OTG_HCINTMSK1_CHHM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK1_CHHM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK1_CHHM_B_0x1 = 1;

    /** @brief AHB error. */
    using OTG_HCINTMSK1_AHBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK1_AHBERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK1_AHBERRM_B_0x1 = 1;

    /** @brief STALL response received interrupt mask. */
    using OTG_HCINTMSK1_STALLM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK1_STALLM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK1_STALLM_B_0x1 = 1;

    /** @brief NAK response received interrupt mask. */
    using OTG_HCINTMSK1_NAKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK1_NAKM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK1_NAKM_B_0x1 = 1;

    /** @brief ACK response received/transmitted interrupt mask. */
    using OTG_HCINTMSK1_ACKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK1_ACKM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK1_ACKM_B_0x1 = 1;

    /** @brief response received interrupt mask. */
    using OTG_HCINTMSK1_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK1_NYET_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK1_NYET_B_0x1 = 1;

    /** @brief Transaction error mask. */
    using OTG_HCINTMSK1_TXERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK1_TXERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK1_TXERRM_B_0x1 = 1;

    /** @brief Babble error mask. */
    using OTG_HCINTMSK1_BBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK1_BBERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK1_BBERRM_B_0x1 = 1;

    /** @brief Frame overrun mask. */
    using OTG_HCINTMSK1_FRMORM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK1_FRMORM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK1_FRMORM_B_0x1 = 1;

    /** @brief Data toggle error mask. */
    using OTG_HCINTMSK1_DTERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK1_DTERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK1_DTERRM_B_0x1 = 1;

    /** @brief OTG host channel 1 transfer size register */
    using OTG_HCTSIZ1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x530, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size For an OUT, this field is the number of data bytes the host sends during the transfer. For an IN, this field is the buffer size that the application has reserved for the transfer. The application is expected to program this field as an integer multiple of the maximum packet size for IN transactions (periodic and non-periodic). */
    using OTG_HCTSIZ1_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count This field is programmed by the application with the expected number of packets to be transmitted (OUT) or received (IN). The host decrements this count on every successful transmission or reception of an OUT/IN packet. Once this count reaches zero, the application is interrupted to indicate normal completion. */
    using OTG_HCTSIZ1_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data PID The application programs this field with the type of PID to use for the initial transaction. The host maintains this field for the rest of the transfer. */
    using OTG_HCTSIZ1_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATA0 (value: 0)
     *          - B_0x1: DATA2 (value: 1)
     *          - B_0x2: DATA1 (value: 2)
     *          - B_0x3: SETUP (control) / MDATA (non-control) (value: 3)
     */
        /** @brief DATA0 */
    constexpr std::uint32_t OTG_HCTSIZ1_DPID_B_0x0 = 0;
        /** @brief DATA2 */
    constexpr std::uint32_t OTG_HCTSIZ1_DPID_B_0x1 = 1;
        /** @brief DATA1 */
    constexpr std::uint32_t OTG_HCTSIZ1_DPID_B_0x2 = 2;
        /** @brief SETUP (control) / MDATA (non-control) */
    constexpr std::uint32_t OTG_HCTSIZ1_DPID_B_0x3 = 3;

    /** @brief Do Ping This bit is used only for OUT transfers. Setting this field to 1 directs the host to do PING protocol. Note: Do not set this bit for IN transfers. If this bit is set for IN transfers, it disables the channel. */
    using OTG_HCTSIZ1_DOPNG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 1 DMA address register */
    using OTG_HCDMA1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x534, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA address This field holds the start address in the external memory from which the data for the endpoint must be fetched or to which it must be stored. This register is incremented on every AHB transaction. */
    using OTG_HCDMA1_DMAADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 2 characteristics register */
    using OTG_HCCHAR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x540, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size Indicates the maximum packet size of the associated endpoint. */
    using OTG_HCCHAR2_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint number Indicates the endpoint number on the device serving as the data source or sink. */
    using OTG_HCCHAR2_EPNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint direction Indicates whether the transaction is IN or OUT. */
    using OTG_HCCHAR2_EPDIR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OUT (value: 0)
     *          - B_0x1: IN (value: 1)
     */
        /** @brief OUT */
    constexpr std::uint32_t OTG_HCCHAR2_EPDIR_B_0x0 = 0;
        /** @brief IN */
    constexpr std::uint32_t OTG_HCCHAR2_EPDIR_B_0x1 = 1;

    /** @brief Low-speed device This field is set by the application to indicate that this channel is communicating to a low-speed device. */
    using OTG_HCCHAR2_LSDEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint type Indicates the transfer type selected. */
    using OTG_HCCHAR2_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_HCCHAR2_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_HCCHAR2_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_HCCHAR2_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_HCCHAR2_EPTYP_B_0x3 = 3;

    /** @brief Multicount This field indicates to the host the number of transactions that must be executed per frame for this periodic endpoint. For non-periodic transfers, this field is not used Note: This field must be set to at least 01. */
    using OTG_HCCHAR2_MCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Reserved. This field yields undefined results (value: 0)
     *          - B_0x1: 1 transaction (value: 1)
     *          - B_0x2: 2 transactions per frame to be issued for this endpoint (value: 2)
     *          - B_0x3: 3 transactions per frame to be issued for this endpoint (value: 3)
     */
        /** @brief Reserved. This field yields undefined results */
    constexpr std::uint32_t OTG_HCCHAR2_MCNT_B_0x0 = 0;
        /** @brief 1 transaction */
    constexpr std::uint32_t OTG_HCCHAR2_MCNT_B_0x1 = 1;
        /** @brief 2 transactions per frame to be issued for this endpoint */
    constexpr std::uint32_t OTG_HCCHAR2_MCNT_B_0x2 = 2;
        /** @brief 3 transactions per frame to be issued for this endpoint */
    constexpr std::uint32_t OTG_HCCHAR2_MCNT_B_0x3 = 3;

    /** @brief Device address This field selects the specific device serving as the data source or sink. */
    using OTG_HCCHAR2_DAD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Odd frame This field is set (reset) by the application to indicate that the OTG host must perform a transfer in an odd frame. This field is applicable for only periodic (isochronous and interrupt) transactions. */
    using OTG_HCCHAR2_ODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Even frame (value: 0)
     *          - B_0x1: Odd frame (value: 1)
     */
        /** @brief Even frame */
    constexpr std::uint32_t OTG_HCCHAR2_ODDFRM_B_0x0 = 0;
        /** @brief Odd frame */
    constexpr std::uint32_t OTG_HCCHAR2_ODDFRM_B_0x1 = 1;

    /** @brief Channel disable The application sets this bit to stop transmitting/receiving data on a channel, even before the transfer for that channel is complete. The application must wait for the Channel disabled interrupt before treating the channel as disabled. */
    using OTG_HCCHAR2_CHDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel enable This field is set by the application and cleared by the OTG host. */
    using OTG_HCCHAR2_CHENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Channel disabled (value: 0)
     *          - B_0x1: Channel enabled (value: 1)
     */
        /** @brief Channel disabled */
    constexpr std::uint32_t OTG_HCCHAR2_CHENA_B_0x0 = 0;
        /** @brief Channel enabled */
    constexpr std::uint32_t OTG_HCCHAR2_CHENA_B_0x1 = 1;

    /** @brief OTG host channel 2 split control register */
    using OTG_HCSPLT2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x544, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port address This field is the port number of the recipient transaction translator. */
    using OTG_HCSPLT2_PRTADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hub address This field holds the device address of the transaction translators hub. */
    using OTG_HCSPLT2_HUBADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction position This field is used to determine whether to send all, first, middle, or last payloads with each OUT transaction. */
    using OTG_HCSPLT2_XACTPOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x3: All. This is the entire data payload of this transaction (which is less than or equal to 188 bytes) (value: 3)
     *          - B_0x2: Begin. This is the first data payload of this transaction (which is larger than 188 bytes) (value: 2)
     *          - B_0x0: Mid. This is the middle payload of this transaction (which is larger than 188 bytes) (value: 0)
     *          - B_0x1: End. This is the last payload of this transaction (which is larger than 188 bytes) (value: 1)
     */
        /** @brief All. This is the entire data payload of this transaction (which is less than or equal to 188 bytes) */
    constexpr std::uint32_t OTG_HCSPLT2_XACTPOS_B_0x3 = 3;
        /** @brief Begin. This is the first data payload of this transaction (which is larger than 188 bytes) */
    constexpr std::uint32_t OTG_HCSPLT2_XACTPOS_B_0x2 = 2;
        /** @brief Mid. This is the middle payload of this transaction (which is larger than 188 bytes) */
    constexpr std::uint32_t OTG_HCSPLT2_XACTPOS_B_0x0 = 0;
        /** @brief End. This is the last payload of this transaction (which is larger than 188 bytes) */
    constexpr std::uint32_t OTG_HCSPLT2_XACTPOS_B_0x1 = 1;

    /** @brief Do complete split The application sets this bit to request the OTG host to perform a complete split transaction. */
    using OTG_HCSPLT2_COMPLSPLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Split enable The application sets this bit to indicate that this channel is enabled to perform split transactions. */
    using OTG_HCSPLT2_SPLITEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 2 interrupt register */
    using OTG_HCINT2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x548, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed. Transfer completed normally without any errors. */
    using OTG_HCINT2_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel halted. Indicates the transfer completed abnormally either because of any USB transaction error or in response to disable request by the application. */
    using OTG_HCINT2_CHH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error This error is generated only in Internal DMA mode when an AHB error occurs during an AHB read/write operation. The application can read the corresponding DMA channel address register to get the error address. */
    using OTG_HCINT2_AHBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL response received interrupt. */
    using OTG_HCINT2_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK response received interrupt. */
    using OTG_HCINT2_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACK response received/transmitted interrupt. */
    using OTG_HCINT2_ACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Not yet ready response received interrupt. */
    using OTG_HCINT2_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction error. Indicates one of the following errors occurred on the USB. CRC check failure Timeout Bit stuff error False EOP */
    using OTG_HCINT2_TXERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Babble error. */
    using OTG_HCINT2_BBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame overrun. */
    using OTG_HCINT2_FRMOR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data toggle error. */
    using OTG_HCINT2_DTERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 2 interrupt mask register */
    using OTG_HCINTMSK2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed mask */
    using OTG_HCINTMSK2_XFRCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK2_XFRCM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK2_XFRCM_B_0x1 = 1;

    /** @brief Channel halted mask */
    using OTG_HCINTMSK2_CHHM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK2_CHHM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK2_CHHM_B_0x1 = 1;

    /** @brief AHB error. */
    using OTG_HCINTMSK2_AHBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK2_AHBERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK2_AHBERRM_B_0x1 = 1;

    /** @brief STALL response received interrupt mask. */
    using OTG_HCINTMSK2_STALLM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK2_STALLM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK2_STALLM_B_0x1 = 1;

    /** @brief NAK response received interrupt mask. */
    using OTG_HCINTMSK2_NAKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK2_NAKM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK2_NAKM_B_0x1 = 1;

    /** @brief ACK response received/transmitted interrupt mask. */
    using OTG_HCINTMSK2_ACKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK2_ACKM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK2_ACKM_B_0x1 = 1;

    /** @brief response received interrupt mask. */
    using OTG_HCINTMSK2_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK2_NYET_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK2_NYET_B_0x1 = 1;

    /** @brief Transaction error mask. */
    using OTG_HCINTMSK2_TXERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK2_TXERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK2_TXERRM_B_0x1 = 1;

    /** @brief Babble error mask. */
    using OTG_HCINTMSK2_BBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK2_BBERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK2_BBERRM_B_0x1 = 1;

    /** @brief Frame overrun mask. */
    using OTG_HCINTMSK2_FRMORM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK2_FRMORM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK2_FRMORM_B_0x1 = 1;

    /** @brief Data toggle error mask. */
    using OTG_HCINTMSK2_DTERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK2_DTERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK2_DTERRM_B_0x1 = 1;

    /** @brief OTG host channel 2 transfer size register */
    using OTG_HCTSIZ2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x550, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size For an OUT, this field is the number of data bytes the host sends during the transfer. For an IN, this field is the buffer size that the application has reserved for the transfer. The application is expected to program this field as an integer multiple of the maximum packet size for IN transactions (periodic and non-periodic). */
    using OTG_HCTSIZ2_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count This field is programmed by the application with the expected number of packets to be transmitted (OUT) or received (IN). The host decrements this count on every successful transmission or reception of an OUT/IN packet. Once this count reaches zero, the application is interrupted to indicate normal completion. */
    using OTG_HCTSIZ2_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data PID The application programs this field with the type of PID to use for the initial transaction. The host maintains this field for the rest of the transfer. */
    using OTG_HCTSIZ2_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATA0 (value: 0)
     *          - B_0x1: DATA2 (value: 1)
     *          - B_0x2: DATA1 (value: 2)
     *          - B_0x3: SETUP (control) / MDATA (non-control) (value: 3)
     */
        /** @brief DATA0 */
    constexpr std::uint32_t OTG_HCTSIZ2_DPID_B_0x0 = 0;
        /** @brief DATA2 */
    constexpr std::uint32_t OTG_HCTSIZ2_DPID_B_0x1 = 1;
        /** @brief DATA1 */
    constexpr std::uint32_t OTG_HCTSIZ2_DPID_B_0x2 = 2;
        /** @brief SETUP (control) / MDATA (non-control) */
    constexpr std::uint32_t OTG_HCTSIZ2_DPID_B_0x3 = 3;

    /** @brief Do Ping This bit is used only for OUT transfers. Setting this field to 1 directs the host to do PING protocol. Note: Do not set this bit for IN transfers. If this bit is set for IN transfers, it disables the channel. */
    using OTG_HCTSIZ2_DOPNG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 2 DMA address register */
    using OTG_HCDMA2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x554, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA address This field holds the start address in the external memory from which the data for the endpoint must be fetched or to which it must be stored. This register is incremented on every AHB transaction. */
    using OTG_HCDMA2_DMAADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 3 characteristics register */
    using OTG_HCCHAR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x560, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size Indicates the maximum packet size of the associated endpoint. */
    using OTG_HCCHAR3_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint number Indicates the endpoint number on the device serving as the data source or sink. */
    using OTG_HCCHAR3_EPNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint direction Indicates whether the transaction is IN or OUT. */
    using OTG_HCCHAR3_EPDIR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OUT (value: 0)
     *          - B_0x1: IN (value: 1)
     */
        /** @brief OUT */
    constexpr std::uint32_t OTG_HCCHAR3_EPDIR_B_0x0 = 0;
        /** @brief IN */
    constexpr std::uint32_t OTG_HCCHAR3_EPDIR_B_0x1 = 1;

    /** @brief Low-speed device This field is set by the application to indicate that this channel is communicating to a low-speed device. */
    using OTG_HCCHAR3_LSDEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint type Indicates the transfer type selected. */
    using OTG_HCCHAR3_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_HCCHAR3_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_HCCHAR3_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_HCCHAR3_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_HCCHAR3_EPTYP_B_0x3 = 3;

    /** @brief Multicount This field indicates to the host the number of transactions that must be executed per frame for this periodic endpoint. For non-periodic transfers, this field is not used Note: This field must be set to at least 01. */
    using OTG_HCCHAR3_MCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Reserved. This field yields undefined results (value: 0)
     *          - B_0x1: 1 transaction (value: 1)
     *          - B_0x2: 2 transactions per frame to be issued for this endpoint (value: 2)
     *          - B_0x3: 3 transactions per frame to be issued for this endpoint (value: 3)
     */
        /** @brief Reserved. This field yields undefined results */
    constexpr std::uint32_t OTG_HCCHAR3_MCNT_B_0x0 = 0;
        /** @brief 1 transaction */
    constexpr std::uint32_t OTG_HCCHAR3_MCNT_B_0x1 = 1;
        /** @brief 2 transactions per frame to be issued for this endpoint */
    constexpr std::uint32_t OTG_HCCHAR3_MCNT_B_0x2 = 2;
        /** @brief 3 transactions per frame to be issued for this endpoint */
    constexpr std::uint32_t OTG_HCCHAR3_MCNT_B_0x3 = 3;

    /** @brief Device address This field selects the specific device serving as the data source or sink. */
    using OTG_HCCHAR3_DAD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Odd frame This field is set (reset) by the application to indicate that the OTG host must perform a transfer in an odd frame. This field is applicable for only periodic (isochronous and interrupt) transactions. */
    using OTG_HCCHAR3_ODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Even frame (value: 0)
     *          - B_0x1: Odd frame (value: 1)
     */
        /** @brief Even frame */
    constexpr std::uint32_t OTG_HCCHAR3_ODDFRM_B_0x0 = 0;
        /** @brief Odd frame */
    constexpr std::uint32_t OTG_HCCHAR3_ODDFRM_B_0x1 = 1;

    /** @brief Channel disable The application sets this bit to stop transmitting/receiving data on a channel, even before the transfer for that channel is complete. The application must wait for the Channel disabled interrupt before treating the channel as disabled. */
    using OTG_HCCHAR3_CHDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel enable This field is set by the application and cleared by the OTG host. */
    using OTG_HCCHAR3_CHENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Channel disabled (value: 0)
     *          - B_0x1: Channel enabled (value: 1)
     */
        /** @brief Channel disabled */
    constexpr std::uint32_t OTG_HCCHAR3_CHENA_B_0x0 = 0;
        /** @brief Channel enabled */
    constexpr std::uint32_t OTG_HCCHAR3_CHENA_B_0x1 = 1;

    /** @brief OTG host channel 3 split control register */
    using OTG_HCSPLT3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x564, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port address This field is the port number of the recipient transaction translator. */
    using OTG_HCSPLT3_PRTADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hub address This field holds the device address of the transaction translators hub. */
    using OTG_HCSPLT3_HUBADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction position This field is used to determine whether to send all, first, middle, or last payloads with each OUT transaction. */
    using OTG_HCSPLT3_XACTPOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x3: All. This is the entire data payload of this transaction (which is less than or equal to 188 bytes) (value: 3)
     *          - B_0x2: Begin. This is the first data payload of this transaction (which is larger than 188 bytes) (value: 2)
     *          - B_0x0: Mid. This is the middle payload of this transaction (which is larger than 188 bytes) (value: 0)
     *          - B_0x1: End. This is the last payload of this transaction (which is larger than 188 bytes) (value: 1)
     */
        /** @brief All. This is the entire data payload of this transaction (which is less than or equal to 188 bytes) */
    constexpr std::uint32_t OTG_HCSPLT3_XACTPOS_B_0x3 = 3;
        /** @brief Begin. This is the first data payload of this transaction (which is larger than 188 bytes) */
    constexpr std::uint32_t OTG_HCSPLT3_XACTPOS_B_0x2 = 2;
        /** @brief Mid. This is the middle payload of this transaction (which is larger than 188 bytes) */
    constexpr std::uint32_t OTG_HCSPLT3_XACTPOS_B_0x0 = 0;
        /** @brief End. This is the last payload of this transaction (which is larger than 188 bytes) */
    constexpr std::uint32_t OTG_HCSPLT3_XACTPOS_B_0x1 = 1;

    /** @brief Do complete split The application sets this bit to request the OTG host to perform a complete split transaction. */
    using OTG_HCSPLT3_COMPLSPLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Split enable The application sets this bit to indicate that this channel is enabled to perform split transactions. */
    using OTG_HCSPLT3_SPLITEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 3 interrupt register */
    using OTG_HCINT3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x568, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed. Transfer completed normally without any errors. */
    using OTG_HCINT3_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel halted. Indicates the transfer completed abnormally either because of any USB transaction error or in response to disable request by the application. */
    using OTG_HCINT3_CHH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error This error is generated only in Internal DMA mode when an AHB error occurs during an AHB read/write operation. The application can read the corresponding DMA channel address register to get the error address. */
    using OTG_HCINT3_AHBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL response received interrupt. */
    using OTG_HCINT3_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK response received interrupt. */
    using OTG_HCINT3_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACK response received/transmitted interrupt. */
    using OTG_HCINT3_ACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Not yet ready response received interrupt. */
    using OTG_HCINT3_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction error. Indicates one of the following errors occurred on the USB. CRC check failure Timeout Bit stuff error False EOP */
    using OTG_HCINT3_TXERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Babble error. */
    using OTG_HCINT3_BBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame overrun. */
    using OTG_HCINT3_FRMOR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data toggle error. */
    using OTG_HCINT3_DTERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 3 interrupt mask register */
    using OTG_HCINTMSK3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x56C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed mask */
    using OTG_HCINTMSK3_XFRCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK3_XFRCM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK3_XFRCM_B_0x1 = 1;

    /** @brief Channel halted mask */
    using OTG_HCINTMSK3_CHHM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK3_CHHM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK3_CHHM_B_0x1 = 1;

    /** @brief AHB error. */
    using OTG_HCINTMSK3_AHBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK3_AHBERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK3_AHBERRM_B_0x1 = 1;

    /** @brief STALL response received interrupt mask. */
    using OTG_HCINTMSK3_STALLM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK3_STALLM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK3_STALLM_B_0x1 = 1;

    /** @brief NAK response received interrupt mask. */
    using OTG_HCINTMSK3_NAKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK3_NAKM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK3_NAKM_B_0x1 = 1;

    /** @brief ACK response received/transmitted interrupt mask. */
    using OTG_HCINTMSK3_ACKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK3_ACKM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK3_ACKM_B_0x1 = 1;

    /** @brief response received interrupt mask. */
    using OTG_HCINTMSK3_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK3_NYET_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK3_NYET_B_0x1 = 1;

    /** @brief Transaction error mask. */
    using OTG_HCINTMSK3_TXERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK3_TXERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK3_TXERRM_B_0x1 = 1;

    /** @brief Babble error mask. */
    using OTG_HCINTMSK3_BBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK3_BBERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK3_BBERRM_B_0x1 = 1;

    /** @brief Frame overrun mask. */
    using OTG_HCINTMSK3_FRMORM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK3_FRMORM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK3_FRMORM_B_0x1 = 1;

    /** @brief Data toggle error mask. */
    using OTG_HCINTMSK3_DTERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK3_DTERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK3_DTERRM_B_0x1 = 1;

    /** @brief OTG host channel 3 transfer size register */
    using OTG_HCTSIZ3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x570, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size For an OUT, this field is the number of data bytes the host sends during the transfer. For an IN, this field is the buffer size that the application has reserved for the transfer. The application is expected to program this field as an integer multiple of the maximum packet size for IN transactions (periodic and non-periodic). */
    using OTG_HCTSIZ3_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count This field is programmed by the application with the expected number of packets to be transmitted (OUT) or received (IN). The host decrements this count on every successful transmission or reception of an OUT/IN packet. Once this count reaches zero, the application is interrupted to indicate normal completion. */
    using OTG_HCTSIZ3_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data PID The application programs this field with the type of PID to use for the initial transaction. The host maintains this field for the rest of the transfer. */
    using OTG_HCTSIZ3_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATA0 (value: 0)
     *          - B_0x1: DATA2 (value: 1)
     *          - B_0x2: DATA1 (value: 2)
     *          - B_0x3: SETUP (control) / MDATA (non-control) (value: 3)
     */
        /** @brief DATA0 */
    constexpr std::uint32_t OTG_HCTSIZ3_DPID_B_0x0 = 0;
        /** @brief DATA2 */
    constexpr std::uint32_t OTG_HCTSIZ3_DPID_B_0x1 = 1;
        /** @brief DATA1 */
    constexpr std::uint32_t OTG_HCTSIZ3_DPID_B_0x2 = 2;
        /** @brief SETUP (control) / MDATA (non-control) */
    constexpr std::uint32_t OTG_HCTSIZ3_DPID_B_0x3 = 3;

    /** @brief Do Ping This bit is used only for OUT transfers. Setting this field to 1 directs the host to do PING protocol. Note: Do not set this bit for IN transfers. If this bit is set for IN transfers, it disables the channel. */
    using OTG_HCTSIZ3_DOPNG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 3 DMA address register */
    using OTG_HCDMA3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x574, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA address This field holds the start address in the external memory from which the data for the endpoint must be fetched or to which it must be stored. This register is incremented on every AHB transaction. */
    using OTG_HCDMA3_DMAADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 4 characteristics register */
    using OTG_HCCHAR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x580, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size Indicates the maximum packet size of the associated endpoint. */
    using OTG_HCCHAR4_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint number Indicates the endpoint number on the device serving as the data source or sink. */
    using OTG_HCCHAR4_EPNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint direction Indicates whether the transaction is IN or OUT. */
    using OTG_HCCHAR4_EPDIR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OUT (value: 0)
     *          - B_0x1: IN (value: 1)
     */
        /** @brief OUT */
    constexpr std::uint32_t OTG_HCCHAR4_EPDIR_B_0x0 = 0;
        /** @brief IN */
    constexpr std::uint32_t OTG_HCCHAR4_EPDIR_B_0x1 = 1;

    /** @brief Low-speed device This field is set by the application to indicate that this channel is communicating to a low-speed device. */
    using OTG_HCCHAR4_LSDEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint type Indicates the transfer type selected. */
    using OTG_HCCHAR4_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_HCCHAR4_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_HCCHAR4_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_HCCHAR4_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_HCCHAR4_EPTYP_B_0x3 = 3;

    /** @brief Multicount This field indicates to the host the number of transactions that must be executed per frame for this periodic endpoint. For non-periodic transfers, this field is not used Note: This field must be set to at least 01. */
    using OTG_HCCHAR4_MCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Reserved. This field yields undefined results (value: 0)
     *          - B_0x1: 1 transaction (value: 1)
     *          - B_0x2: 2 transactions per frame to be issued for this endpoint (value: 2)
     *          - B_0x3: 3 transactions per frame to be issued for this endpoint (value: 3)
     */
        /** @brief Reserved. This field yields undefined results */
    constexpr std::uint32_t OTG_HCCHAR4_MCNT_B_0x0 = 0;
        /** @brief 1 transaction */
    constexpr std::uint32_t OTG_HCCHAR4_MCNT_B_0x1 = 1;
        /** @brief 2 transactions per frame to be issued for this endpoint */
    constexpr std::uint32_t OTG_HCCHAR4_MCNT_B_0x2 = 2;
        /** @brief 3 transactions per frame to be issued for this endpoint */
    constexpr std::uint32_t OTG_HCCHAR4_MCNT_B_0x3 = 3;

    /** @brief Device address This field selects the specific device serving as the data source or sink. */
    using OTG_HCCHAR4_DAD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Odd frame This field is set (reset) by the application to indicate that the OTG host must perform a transfer in an odd frame. This field is applicable for only periodic (isochronous and interrupt) transactions. */
    using OTG_HCCHAR4_ODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Even frame (value: 0)
     *          - B_0x1: Odd frame (value: 1)
     */
        /** @brief Even frame */
    constexpr std::uint32_t OTG_HCCHAR4_ODDFRM_B_0x0 = 0;
        /** @brief Odd frame */
    constexpr std::uint32_t OTG_HCCHAR4_ODDFRM_B_0x1 = 1;

    /** @brief Channel disable The application sets this bit to stop transmitting/receiving data on a channel, even before the transfer for that channel is complete. The application must wait for the Channel disabled interrupt before treating the channel as disabled. */
    using OTG_HCCHAR4_CHDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel enable This field is set by the application and cleared by the OTG host. */
    using OTG_HCCHAR4_CHENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Channel disabled (value: 0)
     *          - B_0x1: Channel enabled (value: 1)
     */
        /** @brief Channel disabled */
    constexpr std::uint32_t OTG_HCCHAR4_CHENA_B_0x0 = 0;
        /** @brief Channel enabled */
    constexpr std::uint32_t OTG_HCCHAR4_CHENA_B_0x1 = 1;

    /** @brief OTG host channel 4 split control register */
    using OTG_HCSPLT4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x584, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port address This field is the port number of the recipient transaction translator. */
    using OTG_HCSPLT4_PRTADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hub address This field holds the device address of the transaction translators hub. */
    using OTG_HCSPLT4_HUBADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction position This field is used to determine whether to send all, first, middle, or last payloads with each OUT transaction. */
    using OTG_HCSPLT4_XACTPOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x3: All. This is the entire data payload of this transaction (which is less than or equal to 188 bytes) (value: 3)
     *          - B_0x2: Begin. This is the first data payload of this transaction (which is larger than 188 bytes) (value: 2)
     *          - B_0x0: Mid. This is the middle payload of this transaction (which is larger than 188 bytes) (value: 0)
     *          - B_0x1: End. This is the last payload of this transaction (which is larger than 188 bytes) (value: 1)
     */
        /** @brief All. This is the entire data payload of this transaction (which is less than or equal to 188 bytes) */
    constexpr std::uint32_t OTG_HCSPLT4_XACTPOS_B_0x3 = 3;
        /** @brief Begin. This is the first data payload of this transaction (which is larger than 188 bytes) */
    constexpr std::uint32_t OTG_HCSPLT4_XACTPOS_B_0x2 = 2;
        /** @brief Mid. This is the middle payload of this transaction (which is larger than 188 bytes) */
    constexpr std::uint32_t OTG_HCSPLT4_XACTPOS_B_0x0 = 0;
        /** @brief End. This is the last payload of this transaction (which is larger than 188 bytes) */
    constexpr std::uint32_t OTG_HCSPLT4_XACTPOS_B_0x1 = 1;

    /** @brief Do complete split The application sets this bit to request the OTG host to perform a complete split transaction. */
    using OTG_HCSPLT4_COMPLSPLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Split enable The application sets this bit to indicate that this channel is enabled to perform split transactions. */
    using OTG_HCSPLT4_SPLITEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 4 interrupt register */
    using OTG_HCINT4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x588, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed. Transfer completed normally without any errors. */
    using OTG_HCINT4_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel halted. Indicates the transfer completed abnormally either because of any USB transaction error or in response to disable request by the application. */
    using OTG_HCINT4_CHH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error This error is generated only in Internal DMA mode when an AHB error occurs during an AHB read/write operation. The application can read the corresponding DMA channel address register to get the error address. */
    using OTG_HCINT4_AHBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL response received interrupt. */
    using OTG_HCINT4_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK response received interrupt. */
    using OTG_HCINT4_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACK response received/transmitted interrupt. */
    using OTG_HCINT4_ACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Not yet ready response received interrupt. */
    using OTG_HCINT4_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction error. Indicates one of the following errors occurred on the USB. CRC check failure Timeout Bit stuff error False EOP */
    using OTG_HCINT4_TXERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Babble error. */
    using OTG_HCINT4_BBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame overrun. */
    using OTG_HCINT4_FRMOR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data toggle error. */
    using OTG_HCINT4_DTERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 4 interrupt mask register */
    using OTG_HCINTMSK4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x58C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed mask */
    using OTG_HCINTMSK4_XFRCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK4_XFRCM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK4_XFRCM_B_0x1 = 1;

    /** @brief Channel halted mask */
    using OTG_HCINTMSK4_CHHM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK4_CHHM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK4_CHHM_B_0x1 = 1;

    /** @brief AHB error. */
    using OTG_HCINTMSK4_AHBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK4_AHBERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK4_AHBERRM_B_0x1 = 1;

    /** @brief STALL response received interrupt mask. */
    using OTG_HCINTMSK4_STALLM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK4_STALLM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK4_STALLM_B_0x1 = 1;

    /** @brief NAK response received interrupt mask. */
    using OTG_HCINTMSK4_NAKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK4_NAKM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK4_NAKM_B_0x1 = 1;

    /** @brief ACK response received/transmitted interrupt mask. */
    using OTG_HCINTMSK4_ACKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK4_ACKM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK4_ACKM_B_0x1 = 1;

    /** @brief response received interrupt mask. */
    using OTG_HCINTMSK4_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK4_NYET_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK4_NYET_B_0x1 = 1;

    /** @brief Transaction error mask. */
    using OTG_HCINTMSK4_TXERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK4_TXERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK4_TXERRM_B_0x1 = 1;

    /** @brief Babble error mask. */
    using OTG_HCINTMSK4_BBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK4_BBERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK4_BBERRM_B_0x1 = 1;

    /** @brief Frame overrun mask. */
    using OTG_HCINTMSK4_FRMORM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK4_FRMORM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK4_FRMORM_B_0x1 = 1;

    /** @brief Data toggle error mask. */
    using OTG_HCINTMSK4_DTERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK4_DTERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK4_DTERRM_B_0x1 = 1;

    /** @brief OTG host channel 4 transfer size register */
    using OTG_HCTSIZ4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x590, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size For an OUT, this field is the number of data bytes the host sends during the transfer. For an IN, this field is the buffer size that the application has reserved for the transfer. The application is expected to program this field as an integer multiple of the maximum packet size for IN transactions (periodic and non-periodic). */
    using OTG_HCTSIZ4_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count This field is programmed by the application with the expected number of packets to be transmitted (OUT) or received (IN). The host decrements this count on every successful transmission or reception of an OUT/IN packet. Once this count reaches zero, the application is interrupted to indicate normal completion. */
    using OTG_HCTSIZ4_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data PID The application programs this field with the type of PID to use for the initial transaction. The host maintains this field for the rest of the transfer. */
    using OTG_HCTSIZ4_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATA0 (value: 0)
     *          - B_0x1: DATA2 (value: 1)
     *          - B_0x2: DATA1 (value: 2)
     *          - B_0x3: SETUP (control) / MDATA (non-control) (value: 3)
     */
        /** @brief DATA0 */
    constexpr std::uint32_t OTG_HCTSIZ4_DPID_B_0x0 = 0;
        /** @brief DATA2 */
    constexpr std::uint32_t OTG_HCTSIZ4_DPID_B_0x1 = 1;
        /** @brief DATA1 */
    constexpr std::uint32_t OTG_HCTSIZ4_DPID_B_0x2 = 2;
        /** @brief SETUP (control) / MDATA (non-control) */
    constexpr std::uint32_t OTG_HCTSIZ4_DPID_B_0x3 = 3;

    /** @brief Do Ping This bit is used only for OUT transfers. Setting this field to 1 directs the host to do PING protocol. Note: Do not set this bit for IN transfers. If this bit is set for IN transfers, it disables the channel. */
    using OTG_HCTSIZ4_DOPNG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 4 DMA address register */
    using OTG_HCDMA4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x594, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA address This field holds the start address in the external memory from which the data for the endpoint must be fetched or to which it must be stored. This register is incremented on every AHB transaction. */
    using OTG_HCDMA4_DMAADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 5 characteristics register */
    using OTG_HCCHAR5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size Indicates the maximum packet size of the associated endpoint. */
    using OTG_HCCHAR5_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint number Indicates the endpoint number on the device serving as the data source or sink. */
    using OTG_HCCHAR5_EPNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint direction Indicates whether the transaction is IN or OUT. */
    using OTG_HCCHAR5_EPDIR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OUT (value: 0)
     *          - B_0x1: IN (value: 1)
     */
        /** @brief OUT */
    constexpr std::uint32_t OTG_HCCHAR5_EPDIR_B_0x0 = 0;
        /** @brief IN */
    constexpr std::uint32_t OTG_HCCHAR5_EPDIR_B_0x1 = 1;

    /** @brief Low-speed device This field is set by the application to indicate that this channel is communicating to a low-speed device. */
    using OTG_HCCHAR5_LSDEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint type Indicates the transfer type selected. */
    using OTG_HCCHAR5_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_HCCHAR5_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_HCCHAR5_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_HCCHAR5_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_HCCHAR5_EPTYP_B_0x3 = 3;

    /** @brief Multicount This field indicates to the host the number of transactions that must be executed per frame for this periodic endpoint. For non-periodic transfers, this field is not used Note: This field must be set to at least 01. */
    using OTG_HCCHAR5_MCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Reserved. This field yields undefined results (value: 0)
     *          - B_0x1: 1 transaction (value: 1)
     *          - B_0x2: 2 transactions per frame to be issued for this endpoint (value: 2)
     *          - B_0x3: 3 transactions per frame to be issued for this endpoint (value: 3)
     */
        /** @brief Reserved. This field yields undefined results */
    constexpr std::uint32_t OTG_HCCHAR5_MCNT_B_0x0 = 0;
        /** @brief 1 transaction */
    constexpr std::uint32_t OTG_HCCHAR5_MCNT_B_0x1 = 1;
        /** @brief 2 transactions per frame to be issued for this endpoint */
    constexpr std::uint32_t OTG_HCCHAR5_MCNT_B_0x2 = 2;
        /** @brief 3 transactions per frame to be issued for this endpoint */
    constexpr std::uint32_t OTG_HCCHAR5_MCNT_B_0x3 = 3;

    /** @brief Device address This field selects the specific device serving as the data source or sink. */
    using OTG_HCCHAR5_DAD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Odd frame This field is set (reset) by the application to indicate that the OTG host must perform a transfer in an odd frame. This field is applicable for only periodic (isochronous and interrupt) transactions. */
    using OTG_HCCHAR5_ODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Even frame (value: 0)
     *          - B_0x1: Odd frame (value: 1)
     */
        /** @brief Even frame */
    constexpr std::uint32_t OTG_HCCHAR5_ODDFRM_B_0x0 = 0;
        /** @brief Odd frame */
    constexpr std::uint32_t OTG_HCCHAR5_ODDFRM_B_0x1 = 1;

    /** @brief Channel disable The application sets this bit to stop transmitting/receiving data on a channel, even before the transfer for that channel is complete. The application must wait for the Channel disabled interrupt before treating the channel as disabled. */
    using OTG_HCCHAR5_CHDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel enable This field is set by the application and cleared by the OTG host. */
    using OTG_HCCHAR5_CHENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Channel disabled (value: 0)
     *          - B_0x1: Channel enabled (value: 1)
     */
        /** @brief Channel disabled */
    constexpr std::uint32_t OTG_HCCHAR5_CHENA_B_0x0 = 0;
        /** @brief Channel enabled */
    constexpr std::uint32_t OTG_HCCHAR5_CHENA_B_0x1 = 1;

    /** @brief OTG host channel 5 split control register */
    using OTG_HCSPLT5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5A4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port address This field is the port number of the recipient transaction translator. */
    using OTG_HCSPLT5_PRTADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hub address This field holds the device address of the transaction translators hub. */
    using OTG_HCSPLT5_HUBADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction position This field is used to determine whether to send all, first, middle, or last payloads with each OUT transaction. */
    using OTG_HCSPLT5_XACTPOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x3: All. This is the entire data payload of this transaction (which is less than or equal to 188 bytes) (value: 3)
     *          - B_0x2: Begin. This is the first data payload of this transaction (which is larger than 188 bytes) (value: 2)
     *          - B_0x0: Mid. This is the middle payload of this transaction (which is larger than 188 bytes) (value: 0)
     *          - B_0x1: End. This is the last payload of this transaction (which is larger than 188 bytes) (value: 1)
     */
        /** @brief All. This is the entire data payload of this transaction (which is less than or equal to 188 bytes) */
    constexpr std::uint32_t OTG_HCSPLT5_XACTPOS_B_0x3 = 3;
        /** @brief Begin. This is the first data payload of this transaction (which is larger than 188 bytes) */
    constexpr std::uint32_t OTG_HCSPLT5_XACTPOS_B_0x2 = 2;
        /** @brief Mid. This is the middle payload of this transaction (which is larger than 188 bytes) */
    constexpr std::uint32_t OTG_HCSPLT5_XACTPOS_B_0x0 = 0;
        /** @brief End. This is the last payload of this transaction (which is larger than 188 bytes) */
    constexpr std::uint32_t OTG_HCSPLT5_XACTPOS_B_0x1 = 1;

    /** @brief Do complete split The application sets this bit to request the OTG host to perform a complete split transaction. */
    using OTG_HCSPLT5_COMPLSPLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Split enable The application sets this bit to indicate that this channel is enabled to perform split transactions. */
    using OTG_HCSPLT5_SPLITEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 5 interrupt register */
    using OTG_HCINT5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5A8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed. Transfer completed normally without any errors. */
    using OTG_HCINT5_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel halted. Indicates the transfer completed abnormally either because of any USB transaction error or in response to disable request by the application. */
    using OTG_HCINT5_CHH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error This error is generated only in Internal DMA mode when an AHB error occurs during an AHB read/write operation. The application can read the corresponding DMA channel address register to get the error address. */
    using OTG_HCINT5_AHBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL response received interrupt. */
    using OTG_HCINT5_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK response received interrupt. */
    using OTG_HCINT5_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACK response received/transmitted interrupt. */
    using OTG_HCINT5_ACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Not yet ready response received interrupt. */
    using OTG_HCINT5_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction error. Indicates one of the following errors occurred on the USB. CRC check failure Timeout Bit stuff error False EOP */
    using OTG_HCINT5_TXERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Babble error. */
    using OTG_HCINT5_BBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame overrun. */
    using OTG_HCINT5_FRMOR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data toggle error. */
    using OTG_HCINT5_DTERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 5 interrupt mask register */
    using OTG_HCINTMSK5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5AC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed mask */
    using OTG_HCINTMSK5_XFRCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK5_XFRCM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK5_XFRCM_B_0x1 = 1;

    /** @brief Channel halted mask */
    using OTG_HCINTMSK5_CHHM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK5_CHHM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK5_CHHM_B_0x1 = 1;

    /** @brief AHB error. */
    using OTG_HCINTMSK5_AHBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK5_AHBERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK5_AHBERRM_B_0x1 = 1;

    /** @brief STALL response received interrupt mask. */
    using OTG_HCINTMSK5_STALLM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK5_STALLM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK5_STALLM_B_0x1 = 1;

    /** @brief NAK response received interrupt mask. */
    using OTG_HCINTMSK5_NAKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK5_NAKM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK5_NAKM_B_0x1 = 1;

    /** @brief ACK response received/transmitted interrupt mask. */
    using OTG_HCINTMSK5_ACKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK5_ACKM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK5_ACKM_B_0x1 = 1;

    /** @brief response received interrupt mask. */
    using OTG_HCINTMSK5_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK5_NYET_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK5_NYET_B_0x1 = 1;

    /** @brief Transaction error mask. */
    using OTG_HCINTMSK5_TXERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK5_TXERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK5_TXERRM_B_0x1 = 1;

    /** @brief Babble error mask. */
    using OTG_HCINTMSK5_BBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK5_BBERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK5_BBERRM_B_0x1 = 1;

    /** @brief Frame overrun mask. */
    using OTG_HCINTMSK5_FRMORM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK5_FRMORM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK5_FRMORM_B_0x1 = 1;

    /** @brief Data toggle error mask. */
    using OTG_HCINTMSK5_DTERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK5_DTERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK5_DTERRM_B_0x1 = 1;

    /** @brief OTG host channel 5 transfer size register */
    using OTG_HCTSIZ5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5B0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size For an OUT, this field is the number of data bytes the host sends during the transfer. For an IN, this field is the buffer size that the application has reserved for the transfer. The application is expected to program this field as an integer multiple of the maximum packet size for IN transactions (periodic and non-periodic). */
    using OTG_HCTSIZ5_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count This field is programmed by the application with the expected number of packets to be transmitted (OUT) or received (IN). The host decrements this count on every successful transmission or reception of an OUT/IN packet. Once this count reaches zero, the application is interrupted to indicate normal completion. */
    using OTG_HCTSIZ5_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data PID The application programs this field with the type of PID to use for the initial transaction. The host maintains this field for the rest of the transfer. */
    using OTG_HCTSIZ5_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATA0 (value: 0)
     *          - B_0x1: DATA2 (value: 1)
     *          - B_0x2: DATA1 (value: 2)
     *          - B_0x3: SETUP (control) / MDATA (non-control) (value: 3)
     */
        /** @brief DATA0 */
    constexpr std::uint32_t OTG_HCTSIZ5_DPID_B_0x0 = 0;
        /** @brief DATA2 */
    constexpr std::uint32_t OTG_HCTSIZ5_DPID_B_0x1 = 1;
        /** @brief DATA1 */
    constexpr std::uint32_t OTG_HCTSIZ5_DPID_B_0x2 = 2;
        /** @brief SETUP (control) / MDATA (non-control) */
    constexpr std::uint32_t OTG_HCTSIZ5_DPID_B_0x3 = 3;

    /** @brief Do Ping This bit is used only for OUT transfers. Setting this field to 1 directs the host to do PING protocol. Note: Do not set this bit for IN transfers. If this bit is set for IN transfers, it disables the channel. */
    using OTG_HCTSIZ5_DOPNG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 5 DMA address register */
    using OTG_HCDMA5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5B4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA address This field holds the start address in the external memory from which the data for the endpoint must be fetched or to which it must be stored. This register is incremented on every AHB transaction. */
    using OTG_HCDMA5_DMAADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 6 characteristics register */
    using OTG_HCCHAR6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5C0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size Indicates the maximum packet size of the associated endpoint. */
    using OTG_HCCHAR6_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint number Indicates the endpoint number on the device serving as the data source or sink. */
    using OTG_HCCHAR6_EPNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint direction Indicates whether the transaction is IN or OUT. */
    using OTG_HCCHAR6_EPDIR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OUT (value: 0)
     *          - B_0x1: IN (value: 1)
     */
        /** @brief OUT */
    constexpr std::uint32_t OTG_HCCHAR6_EPDIR_B_0x0 = 0;
        /** @brief IN */
    constexpr std::uint32_t OTG_HCCHAR6_EPDIR_B_0x1 = 1;

    /** @brief Low-speed device This field is set by the application to indicate that this channel is communicating to a low-speed device. */
    using OTG_HCCHAR6_LSDEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint type Indicates the transfer type selected. */
    using OTG_HCCHAR6_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_HCCHAR6_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_HCCHAR6_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_HCCHAR6_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_HCCHAR6_EPTYP_B_0x3 = 3;

    /** @brief Multicount This field indicates to the host the number of transactions that must be executed per frame for this periodic endpoint. For non-periodic transfers, this field is not used Note: This field must be set to at least 01. */
    using OTG_HCCHAR6_MCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Reserved. This field yields undefined results (value: 0)
     *          - B_0x1: 1 transaction (value: 1)
     *          - B_0x2: 2 transactions per frame to be issued for this endpoint (value: 2)
     *          - B_0x3: 3 transactions per frame to be issued for this endpoint (value: 3)
     */
        /** @brief Reserved. This field yields undefined results */
    constexpr std::uint32_t OTG_HCCHAR6_MCNT_B_0x0 = 0;
        /** @brief 1 transaction */
    constexpr std::uint32_t OTG_HCCHAR6_MCNT_B_0x1 = 1;
        /** @brief 2 transactions per frame to be issued for this endpoint */
    constexpr std::uint32_t OTG_HCCHAR6_MCNT_B_0x2 = 2;
        /** @brief 3 transactions per frame to be issued for this endpoint */
    constexpr std::uint32_t OTG_HCCHAR6_MCNT_B_0x3 = 3;

    /** @brief Device address This field selects the specific device serving as the data source or sink. */
    using OTG_HCCHAR6_DAD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Odd frame This field is set (reset) by the application to indicate that the OTG host must perform a transfer in an odd frame. This field is applicable for only periodic (isochronous and interrupt) transactions. */
    using OTG_HCCHAR6_ODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Even frame (value: 0)
     *          - B_0x1: Odd frame (value: 1)
     */
        /** @brief Even frame */
    constexpr std::uint32_t OTG_HCCHAR6_ODDFRM_B_0x0 = 0;
        /** @brief Odd frame */
    constexpr std::uint32_t OTG_HCCHAR6_ODDFRM_B_0x1 = 1;

    /** @brief Channel disable The application sets this bit to stop transmitting/receiving data on a channel, even before the transfer for that channel is complete. The application must wait for the Channel disabled interrupt before treating the channel as disabled. */
    using OTG_HCCHAR6_CHDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel enable This field is set by the application and cleared by the OTG host. */
    using OTG_HCCHAR6_CHENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Channel disabled (value: 0)
     *          - B_0x1: Channel enabled (value: 1)
     */
        /** @brief Channel disabled */
    constexpr std::uint32_t OTG_HCCHAR6_CHENA_B_0x0 = 0;
        /** @brief Channel enabled */
    constexpr std::uint32_t OTG_HCCHAR6_CHENA_B_0x1 = 1;

    /** @brief OTG host channel 6 split control register */
    using OTG_HCSPLT6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5C4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port address This field is the port number of the recipient transaction translator. */
    using OTG_HCSPLT6_PRTADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hub address This field holds the device address of the transaction translators hub. */
    using OTG_HCSPLT6_HUBADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction position This field is used to determine whether to send all, first, middle, or last payloads with each OUT transaction. */
    using OTG_HCSPLT6_XACTPOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x3: All. This is the entire data payload of this transaction (which is less than or equal to 188 bytes) (value: 3)
     *          - B_0x2: Begin. This is the first data payload of this transaction (which is larger than 188 bytes) (value: 2)
     *          - B_0x0: Mid. This is the middle payload of this transaction (which is larger than 188 bytes) (value: 0)
     *          - B_0x1: End. This is the last payload of this transaction (which is larger than 188 bytes) (value: 1)
     */
        /** @brief All. This is the entire data payload of this transaction (which is less than or equal to 188 bytes) */
    constexpr std::uint32_t OTG_HCSPLT6_XACTPOS_B_0x3 = 3;
        /** @brief Begin. This is the first data payload of this transaction (which is larger than 188 bytes) */
    constexpr std::uint32_t OTG_HCSPLT6_XACTPOS_B_0x2 = 2;
        /** @brief Mid. This is the middle payload of this transaction (which is larger than 188 bytes) */
    constexpr std::uint32_t OTG_HCSPLT6_XACTPOS_B_0x0 = 0;
        /** @brief End. This is the last payload of this transaction (which is larger than 188 bytes) */
    constexpr std::uint32_t OTG_HCSPLT6_XACTPOS_B_0x1 = 1;

    /** @brief Do complete split The application sets this bit to request the OTG host to perform a complete split transaction. */
    using OTG_HCSPLT6_COMPLSPLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Split enable The application sets this bit to indicate that this channel is enabled to perform split transactions. */
    using OTG_HCSPLT6_SPLITEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 6 interrupt register */
    using OTG_HCINT6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5C8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed. Transfer completed normally without any errors. */
    using OTG_HCINT6_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel halted. Indicates the transfer completed abnormally either because of any USB transaction error or in response to disable request by the application. */
    using OTG_HCINT6_CHH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error This error is generated only in Internal DMA mode when an AHB error occurs during an AHB read/write operation. The application can read the corresponding DMA channel address register to get the error address. */
    using OTG_HCINT6_AHBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL response received interrupt. */
    using OTG_HCINT6_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK response received interrupt. */
    using OTG_HCINT6_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACK response received/transmitted interrupt. */
    using OTG_HCINT6_ACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Not yet ready response received interrupt. */
    using OTG_HCINT6_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction error. Indicates one of the following errors occurred on the USB. CRC check failure Timeout Bit stuff error False EOP */
    using OTG_HCINT6_TXERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Babble error. */
    using OTG_HCINT6_BBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame overrun. */
    using OTG_HCINT6_FRMOR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data toggle error. */
    using OTG_HCINT6_DTERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 6 interrupt mask register */
    using OTG_HCINTMSK6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5CC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed mask */
    using OTG_HCINTMSK6_XFRCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK6_XFRCM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK6_XFRCM_B_0x1 = 1;

    /** @brief Channel halted mask */
    using OTG_HCINTMSK6_CHHM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK6_CHHM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK6_CHHM_B_0x1 = 1;

    /** @brief AHB error. */
    using OTG_HCINTMSK6_AHBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK6_AHBERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK6_AHBERRM_B_0x1 = 1;

    /** @brief STALL response received interrupt mask. */
    using OTG_HCINTMSK6_STALLM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK6_STALLM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK6_STALLM_B_0x1 = 1;

    /** @brief NAK response received interrupt mask. */
    using OTG_HCINTMSK6_NAKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK6_NAKM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK6_NAKM_B_0x1 = 1;

    /** @brief ACK response received/transmitted interrupt mask. */
    using OTG_HCINTMSK6_ACKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK6_ACKM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK6_ACKM_B_0x1 = 1;

    /** @brief response received interrupt mask. */
    using OTG_HCINTMSK6_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK6_NYET_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK6_NYET_B_0x1 = 1;

    /** @brief Transaction error mask. */
    using OTG_HCINTMSK6_TXERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK6_TXERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK6_TXERRM_B_0x1 = 1;

    /** @brief Babble error mask. */
    using OTG_HCINTMSK6_BBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK6_BBERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK6_BBERRM_B_0x1 = 1;

    /** @brief Frame overrun mask. */
    using OTG_HCINTMSK6_FRMORM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK6_FRMORM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK6_FRMORM_B_0x1 = 1;

    /** @brief Data toggle error mask. */
    using OTG_HCINTMSK6_DTERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK6_DTERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK6_DTERRM_B_0x1 = 1;

    /** @brief OTG host channel 6 transfer size register */
    using OTG_HCTSIZ6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5D0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size For an OUT, this field is the number of data bytes the host sends during the transfer. For an IN, this field is the buffer size that the application has reserved for the transfer. The application is expected to program this field as an integer multiple of the maximum packet size for IN transactions (periodic and non-periodic). */
    using OTG_HCTSIZ6_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count This field is programmed by the application with the expected number of packets to be transmitted (OUT) or received (IN). The host decrements this count on every successful transmission or reception of an OUT/IN packet. Once this count reaches zero, the application is interrupted to indicate normal completion. */
    using OTG_HCTSIZ6_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data PID The application programs this field with the type of PID to use for the initial transaction. The host maintains this field for the rest of the transfer. */
    using OTG_HCTSIZ6_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATA0 (value: 0)
     *          - B_0x1: DATA2 (value: 1)
     *          - B_0x2: DATA1 (value: 2)
     *          - B_0x3: SETUP (control) / MDATA (non-control) (value: 3)
     */
        /** @brief DATA0 */
    constexpr std::uint32_t OTG_HCTSIZ6_DPID_B_0x0 = 0;
        /** @brief DATA2 */
    constexpr std::uint32_t OTG_HCTSIZ6_DPID_B_0x1 = 1;
        /** @brief DATA1 */
    constexpr std::uint32_t OTG_HCTSIZ6_DPID_B_0x2 = 2;
        /** @brief SETUP (control) / MDATA (non-control) */
    constexpr std::uint32_t OTG_HCTSIZ6_DPID_B_0x3 = 3;

    /** @brief Do Ping This bit is used only for OUT transfers. Setting this field to 1 directs the host to do PING protocol. Note: Do not set this bit for IN transfers. If this bit is set for IN transfers, it disables the channel. */
    using OTG_HCTSIZ6_DOPNG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 6 DMA address register */
    using OTG_HCDMA6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5D4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA address This field holds the start address in the external memory from which the data for the endpoint must be fetched or to which it must be stored. This register is incremented on every AHB transaction. */
    using OTG_HCDMA6_DMAADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 7 characteristics register */
    using OTG_HCCHAR7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5E0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size Indicates the maximum packet size of the associated endpoint. */
    using OTG_HCCHAR7_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint number Indicates the endpoint number on the device serving as the data source or sink. */
    using OTG_HCCHAR7_EPNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint direction Indicates whether the transaction is IN or OUT. */
    using OTG_HCCHAR7_EPDIR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OUT (value: 0)
     *          - B_0x1: IN (value: 1)
     */
        /** @brief OUT */
    constexpr std::uint32_t OTG_HCCHAR7_EPDIR_B_0x0 = 0;
        /** @brief IN */
    constexpr std::uint32_t OTG_HCCHAR7_EPDIR_B_0x1 = 1;

    /** @brief Low-speed device This field is set by the application to indicate that this channel is communicating to a low-speed device. */
    using OTG_HCCHAR7_LSDEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint type Indicates the transfer type selected. */
    using OTG_HCCHAR7_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_HCCHAR7_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_HCCHAR7_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_HCCHAR7_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_HCCHAR7_EPTYP_B_0x3 = 3;

    /** @brief Multicount This field indicates to the host the number of transactions that must be executed per frame for this periodic endpoint. For non-periodic transfers, this field is not used Note: This field must be set to at least 01. */
    using OTG_HCCHAR7_MCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Reserved. This field yields undefined results (value: 0)
     *          - B_0x1: 1 transaction (value: 1)
     *          - B_0x2: 2 transactions per frame to be issued for this endpoint (value: 2)
     *          - B_0x3: 3 transactions per frame to be issued for this endpoint (value: 3)
     */
        /** @brief Reserved. This field yields undefined results */
    constexpr std::uint32_t OTG_HCCHAR7_MCNT_B_0x0 = 0;
        /** @brief 1 transaction */
    constexpr std::uint32_t OTG_HCCHAR7_MCNT_B_0x1 = 1;
        /** @brief 2 transactions per frame to be issued for this endpoint */
    constexpr std::uint32_t OTG_HCCHAR7_MCNT_B_0x2 = 2;
        /** @brief 3 transactions per frame to be issued for this endpoint */
    constexpr std::uint32_t OTG_HCCHAR7_MCNT_B_0x3 = 3;

    /** @brief Device address This field selects the specific device serving as the data source or sink. */
    using OTG_HCCHAR7_DAD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Odd frame This field is set (reset) by the application to indicate that the OTG host must perform a transfer in an odd frame. This field is applicable for only periodic (isochronous and interrupt) transactions. */
    using OTG_HCCHAR7_ODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Even frame (value: 0)
     *          - B_0x1: Odd frame (value: 1)
     */
        /** @brief Even frame */
    constexpr std::uint32_t OTG_HCCHAR7_ODDFRM_B_0x0 = 0;
        /** @brief Odd frame */
    constexpr std::uint32_t OTG_HCCHAR7_ODDFRM_B_0x1 = 1;

    /** @brief Channel disable The application sets this bit to stop transmitting/receiving data on a channel, even before the transfer for that channel is complete. The application must wait for the Channel disabled interrupt before treating the channel as disabled. */
    using OTG_HCCHAR7_CHDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel enable This field is set by the application and cleared by the OTG host. */
    using OTG_HCCHAR7_CHENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Channel disabled (value: 0)
     *          - B_0x1: Channel enabled (value: 1)
     */
        /** @brief Channel disabled */
    constexpr std::uint32_t OTG_HCCHAR7_CHENA_B_0x0 = 0;
        /** @brief Channel enabled */
    constexpr std::uint32_t OTG_HCCHAR7_CHENA_B_0x1 = 1;

    /** @brief OTG host channel 7 split control register */
    using OTG_HCSPLT7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5E4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port address This field is the port number of the recipient transaction translator. */
    using OTG_HCSPLT7_PRTADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hub address This field holds the device address of the transaction translators hub. */
    using OTG_HCSPLT7_HUBADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction position This field is used to determine whether to send all, first, middle, or last payloads with each OUT transaction. */
    using OTG_HCSPLT7_XACTPOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x3: All. This is the entire data payload of this transaction (which is less than or equal to 188 bytes) (value: 3)
     *          - B_0x2: Begin. This is the first data payload of this transaction (which is larger than 188 bytes) (value: 2)
     *          - B_0x0: Mid. This is the middle payload of this transaction (which is larger than 188 bytes) (value: 0)
     *          - B_0x1: End. This is the last payload of this transaction (which is larger than 188 bytes) (value: 1)
     */
        /** @brief All. This is the entire data payload of this transaction (which is less than or equal to 188 bytes) */
    constexpr std::uint32_t OTG_HCSPLT7_XACTPOS_B_0x3 = 3;
        /** @brief Begin. This is the first data payload of this transaction (which is larger than 188 bytes) */
    constexpr std::uint32_t OTG_HCSPLT7_XACTPOS_B_0x2 = 2;
        /** @brief Mid. This is the middle payload of this transaction (which is larger than 188 bytes) */
    constexpr std::uint32_t OTG_HCSPLT7_XACTPOS_B_0x0 = 0;
        /** @brief End. This is the last payload of this transaction (which is larger than 188 bytes) */
    constexpr std::uint32_t OTG_HCSPLT7_XACTPOS_B_0x1 = 1;

    /** @brief Do complete split The application sets this bit to request the OTG host to perform a complete split transaction. */
    using OTG_HCSPLT7_COMPLSPLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Split enable The application sets this bit to indicate that this channel is enabled to perform split transactions. */
    using OTG_HCSPLT7_SPLITEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 7 interrupt register */
    using OTG_HCINT7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5E8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed. Transfer completed normally without any errors. */
    using OTG_HCINT7_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel halted. Indicates the transfer completed abnormally either because of any USB transaction error or in response to disable request by the application. */
    using OTG_HCINT7_CHH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error This error is generated only in Internal DMA mode when an AHB error occurs during an AHB read/write operation. The application can read the corresponding DMA channel address register to get the error address. */
    using OTG_HCINT7_AHBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL response received interrupt. */
    using OTG_HCINT7_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK response received interrupt. */
    using OTG_HCINT7_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACK response received/transmitted interrupt. */
    using OTG_HCINT7_ACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Not yet ready response received interrupt. */
    using OTG_HCINT7_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction error. Indicates one of the following errors occurred on the USB. CRC check failure Timeout Bit stuff error False EOP */
    using OTG_HCINT7_TXERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Babble error. */
    using OTG_HCINT7_BBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame overrun. */
    using OTG_HCINT7_FRMOR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data toggle error. */
    using OTG_HCINT7_DTERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 7 interrupt mask register */
    using OTG_HCINTMSK7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5EC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed mask */
    using OTG_HCINTMSK7_XFRCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK7_XFRCM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK7_XFRCM_B_0x1 = 1;

    /** @brief Channel halted mask */
    using OTG_HCINTMSK7_CHHM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK7_CHHM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK7_CHHM_B_0x1 = 1;

    /** @brief AHB error. */
    using OTG_HCINTMSK7_AHBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK7_AHBERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK7_AHBERRM_B_0x1 = 1;

    /** @brief STALL response received interrupt mask. */
    using OTG_HCINTMSK7_STALLM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK7_STALLM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK7_STALLM_B_0x1 = 1;

    /** @brief NAK response received interrupt mask. */
    using OTG_HCINTMSK7_NAKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK7_NAKM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK7_NAKM_B_0x1 = 1;

    /** @brief ACK response received/transmitted interrupt mask. */
    using OTG_HCINTMSK7_ACKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK7_ACKM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK7_ACKM_B_0x1 = 1;

    /** @brief response received interrupt mask. */
    using OTG_HCINTMSK7_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK7_NYET_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK7_NYET_B_0x1 = 1;

    /** @brief Transaction error mask. */
    using OTG_HCINTMSK7_TXERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK7_TXERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK7_TXERRM_B_0x1 = 1;

    /** @brief Babble error mask. */
    using OTG_HCINTMSK7_BBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK7_BBERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK7_BBERRM_B_0x1 = 1;

    /** @brief Frame overrun mask. */
    using OTG_HCINTMSK7_FRMORM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK7_FRMORM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK7_FRMORM_B_0x1 = 1;

    /** @brief Data toggle error mask. */
    using OTG_HCINTMSK7_DTERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK7_DTERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK7_DTERRM_B_0x1 = 1;

    /** @brief OTG host channel 7 transfer size register */
    using OTG_HCTSIZ7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5F0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size For an OUT, this field is the number of data bytes the host sends during the transfer. For an IN, this field is the buffer size that the application has reserved for the transfer. The application is expected to program this field as an integer multiple of the maximum packet size for IN transactions (periodic and non-periodic). */
    using OTG_HCTSIZ7_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count This field is programmed by the application with the expected number of packets to be transmitted (OUT) or received (IN). The host decrements this count on every successful transmission or reception of an OUT/IN packet. Once this count reaches zero, the application is interrupted to indicate normal completion. */
    using OTG_HCTSIZ7_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data PID The application programs this field with the type of PID to use for the initial transaction. The host maintains this field for the rest of the transfer. */
    using OTG_HCTSIZ7_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATA0 (value: 0)
     *          - B_0x1: DATA2 (value: 1)
     *          - B_0x2: DATA1 (value: 2)
     *          - B_0x3: SETUP (control) / MDATA (non-control) (value: 3)
     */
        /** @brief DATA0 */
    constexpr std::uint32_t OTG_HCTSIZ7_DPID_B_0x0 = 0;
        /** @brief DATA2 */
    constexpr std::uint32_t OTG_HCTSIZ7_DPID_B_0x1 = 1;
        /** @brief DATA1 */
    constexpr std::uint32_t OTG_HCTSIZ7_DPID_B_0x2 = 2;
        /** @brief SETUP (control) / MDATA (non-control) */
    constexpr std::uint32_t OTG_HCTSIZ7_DPID_B_0x3 = 3;

    /** @brief Do Ping This bit is used only for OUT transfers. Setting this field to 1 directs the host to do PING protocol. Note: Do not set this bit for IN transfers. If this bit is set for IN transfers, it disables the channel. */
    using OTG_HCTSIZ7_DOPNG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 7 DMA address register */
    using OTG_HCDMA7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5F4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA address This field holds the start address in the external memory from which the data for the endpoint must be fetched or to which it must be stored. This register is incremented on every AHB transaction. */
    using OTG_HCDMA7_DMAADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 8 characteristics register */
    using OTG_HCCHAR8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x600, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size Indicates the maximum packet size of the associated endpoint. */
    using OTG_HCCHAR8_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint number Indicates the endpoint number on the device serving as the data source or sink. */
    using OTG_HCCHAR8_EPNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint direction Indicates whether the transaction is IN or OUT. */
    using OTG_HCCHAR8_EPDIR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OUT (value: 0)
     *          - B_0x1: IN (value: 1)
     */
        /** @brief OUT */
    constexpr std::uint32_t OTG_HCCHAR8_EPDIR_B_0x0 = 0;
        /** @brief IN */
    constexpr std::uint32_t OTG_HCCHAR8_EPDIR_B_0x1 = 1;

    /** @brief Low-speed device This field is set by the application to indicate that this channel is communicating to a low-speed device. */
    using OTG_HCCHAR8_LSDEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint type Indicates the transfer type selected. */
    using OTG_HCCHAR8_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_HCCHAR8_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_HCCHAR8_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_HCCHAR8_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_HCCHAR8_EPTYP_B_0x3 = 3;

    /** @brief Multicount This field indicates to the host the number of transactions that must be executed per frame for this periodic endpoint. For non-periodic transfers, this field is not used Note: This field must be set to at least 01. */
    using OTG_HCCHAR8_MCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Reserved. This field yields undefined results (value: 0)
     *          - B_0x1: 1 transaction (value: 1)
     *          - B_0x2: 2 transactions per frame to be issued for this endpoint (value: 2)
     *          - B_0x3: 3 transactions per frame to be issued for this endpoint (value: 3)
     */
        /** @brief Reserved. This field yields undefined results */
    constexpr std::uint32_t OTG_HCCHAR8_MCNT_B_0x0 = 0;
        /** @brief 1 transaction */
    constexpr std::uint32_t OTG_HCCHAR8_MCNT_B_0x1 = 1;
        /** @brief 2 transactions per frame to be issued for this endpoint */
    constexpr std::uint32_t OTG_HCCHAR8_MCNT_B_0x2 = 2;
        /** @brief 3 transactions per frame to be issued for this endpoint */
    constexpr std::uint32_t OTG_HCCHAR8_MCNT_B_0x3 = 3;

    /** @brief Device address This field selects the specific device serving as the data source or sink. */
    using OTG_HCCHAR8_DAD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Odd frame This field is set (reset) by the application to indicate that the OTG host must perform a transfer in an odd frame. This field is applicable for only periodic (isochronous and interrupt) transactions. */
    using OTG_HCCHAR8_ODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Even frame (value: 0)
     *          - B_0x1: Odd frame (value: 1)
     */
        /** @brief Even frame */
    constexpr std::uint32_t OTG_HCCHAR8_ODDFRM_B_0x0 = 0;
        /** @brief Odd frame */
    constexpr std::uint32_t OTG_HCCHAR8_ODDFRM_B_0x1 = 1;

    /** @brief Channel disable The application sets this bit to stop transmitting/receiving data on a channel, even before the transfer for that channel is complete. The application must wait for the Channel disabled interrupt before treating the channel as disabled. */
    using OTG_HCCHAR8_CHDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel enable This field is set by the application and cleared by the OTG host. */
    using OTG_HCCHAR8_CHENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Channel disabled (value: 0)
     *          - B_0x1: Channel enabled (value: 1)
     */
        /** @brief Channel disabled */
    constexpr std::uint32_t OTG_HCCHAR8_CHENA_B_0x0 = 0;
        /** @brief Channel enabled */
    constexpr std::uint32_t OTG_HCCHAR8_CHENA_B_0x1 = 1;

    /** @brief OTG host channel 8 split control register */
    using OTG_HCSPLT8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x604, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port address This field is the port number of the recipient transaction translator. */
    using OTG_HCSPLT8_PRTADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hub address This field holds the device address of the transaction translators hub. */
    using OTG_HCSPLT8_HUBADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction position This field is used to determine whether to send all, first, middle, or last payloads with each OUT transaction. */
    using OTG_HCSPLT8_XACTPOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x3: All. This is the entire data payload of this transaction (which is less than or equal to 188 bytes) (value: 3)
     *          - B_0x2: Begin. This is the first data payload of this transaction (which is larger than 188 bytes) (value: 2)
     *          - B_0x0: Mid. This is the middle payload of this transaction (which is larger than 188 bytes) (value: 0)
     *          - B_0x1: End. This is the last payload of this transaction (which is larger than 188 bytes) (value: 1)
     */
        /** @brief All. This is the entire data payload of this transaction (which is less than or equal to 188 bytes) */
    constexpr std::uint32_t OTG_HCSPLT8_XACTPOS_B_0x3 = 3;
        /** @brief Begin. This is the first data payload of this transaction (which is larger than 188 bytes) */
    constexpr std::uint32_t OTG_HCSPLT8_XACTPOS_B_0x2 = 2;
        /** @brief Mid. This is the middle payload of this transaction (which is larger than 188 bytes) */
    constexpr std::uint32_t OTG_HCSPLT8_XACTPOS_B_0x0 = 0;
        /** @brief End. This is the last payload of this transaction (which is larger than 188 bytes) */
    constexpr std::uint32_t OTG_HCSPLT8_XACTPOS_B_0x1 = 1;

    /** @brief Do complete split The application sets this bit to request the OTG host to perform a complete split transaction. */
    using OTG_HCSPLT8_COMPLSPLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Split enable The application sets this bit to indicate that this channel is enabled to perform split transactions. */
    using OTG_HCSPLT8_SPLITEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 8 interrupt register */
    using OTG_HCINT8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x608, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed. Transfer completed normally without any errors. */
    using OTG_HCINT8_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel halted. Indicates the transfer completed abnormally either because of any USB transaction error or in response to disable request by the application. */
    using OTG_HCINT8_CHH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error This error is generated only in Internal DMA mode when an AHB error occurs during an AHB read/write operation. The application can read the corresponding DMA channel address register to get the error address. */
    using OTG_HCINT8_AHBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL response received interrupt. */
    using OTG_HCINT8_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK response received interrupt. */
    using OTG_HCINT8_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACK response received/transmitted interrupt. */
    using OTG_HCINT8_ACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Not yet ready response received interrupt. */
    using OTG_HCINT8_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction error. Indicates one of the following errors occurred on the USB. CRC check failure Timeout Bit stuff error False EOP */
    using OTG_HCINT8_TXERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Babble error. */
    using OTG_HCINT8_BBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame overrun. */
    using OTG_HCINT8_FRMOR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data toggle error. */
    using OTG_HCINT8_DTERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 8 interrupt mask register */
    using OTG_HCINTMSK8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x60C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed mask */
    using OTG_HCINTMSK8_XFRCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK8_XFRCM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK8_XFRCM_B_0x1 = 1;

    /** @brief Channel halted mask */
    using OTG_HCINTMSK8_CHHM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK8_CHHM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK8_CHHM_B_0x1 = 1;

    /** @brief AHB error. */
    using OTG_HCINTMSK8_AHBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK8_AHBERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK8_AHBERRM_B_0x1 = 1;

    /** @brief STALL response received interrupt mask. */
    using OTG_HCINTMSK8_STALLM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK8_STALLM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK8_STALLM_B_0x1 = 1;

    /** @brief NAK response received interrupt mask. */
    using OTG_HCINTMSK8_NAKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK8_NAKM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK8_NAKM_B_0x1 = 1;

    /** @brief ACK response received/transmitted interrupt mask. */
    using OTG_HCINTMSK8_ACKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK8_ACKM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK8_ACKM_B_0x1 = 1;

    /** @brief response received interrupt mask. */
    using OTG_HCINTMSK8_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK8_NYET_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK8_NYET_B_0x1 = 1;

    /** @brief Transaction error mask. */
    using OTG_HCINTMSK8_TXERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK8_TXERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK8_TXERRM_B_0x1 = 1;

    /** @brief Babble error mask. */
    using OTG_HCINTMSK8_BBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK8_BBERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK8_BBERRM_B_0x1 = 1;

    /** @brief Frame overrun mask. */
    using OTG_HCINTMSK8_FRMORM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK8_FRMORM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK8_FRMORM_B_0x1 = 1;

    /** @brief Data toggle error mask. */
    using OTG_HCINTMSK8_DTERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK8_DTERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK8_DTERRM_B_0x1 = 1;

    /** @brief OTG host channel 8 transfer size register */
    using OTG_HCTSIZ8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x610, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size For an OUT, this field is the number of data bytes the host sends during the transfer. For an IN, this field is the buffer size that the application has reserved for the transfer. The application is expected to program this field as an integer multiple of the maximum packet size for IN transactions (periodic and non-periodic). */
    using OTG_HCTSIZ8_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count This field is programmed by the application with the expected number of packets to be transmitted (OUT) or received (IN). The host decrements this count on every successful transmission or reception of an OUT/IN packet. Once this count reaches zero, the application is interrupted to indicate normal completion. */
    using OTG_HCTSIZ8_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data PID The application programs this field with the type of PID to use for the initial transaction. The host maintains this field for the rest of the transfer. */
    using OTG_HCTSIZ8_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATA0 (value: 0)
     *          - B_0x1: DATA2 (value: 1)
     *          - B_0x2: DATA1 (value: 2)
     *          - B_0x3: SETUP (control) / MDATA (non-control) (value: 3)
     */
        /** @brief DATA0 */
    constexpr std::uint32_t OTG_HCTSIZ8_DPID_B_0x0 = 0;
        /** @brief DATA2 */
    constexpr std::uint32_t OTG_HCTSIZ8_DPID_B_0x1 = 1;
        /** @brief DATA1 */
    constexpr std::uint32_t OTG_HCTSIZ8_DPID_B_0x2 = 2;
        /** @brief SETUP (control) / MDATA (non-control) */
    constexpr std::uint32_t OTG_HCTSIZ8_DPID_B_0x3 = 3;

    /** @brief Do Ping This bit is used only for OUT transfers. Setting this field to 1 directs the host to do PING protocol. Note: Do not set this bit for IN transfers. If this bit is set for IN transfers, it disables the channel. */
    using OTG_HCTSIZ8_DOPNG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 8 DMA address register */
    using OTG_HCDMA8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x614, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA address This field holds the start address in the external memory from which the data for the endpoint must be fetched or to which it must be stored. This register is incremented on every AHB transaction. */
    using OTG_HCDMA8_DMAADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 9 characteristics register */
    using OTG_HCCHAR9 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x620, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size Indicates the maximum packet size of the associated endpoint. */
    using OTG_HCCHAR9_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint number Indicates the endpoint number on the device serving as the data source or sink. */
    using OTG_HCCHAR9_EPNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint direction Indicates whether the transaction is IN or OUT. */
    using OTG_HCCHAR9_EPDIR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OUT (value: 0)
     *          - B_0x1: IN (value: 1)
     */
        /** @brief OUT */
    constexpr std::uint32_t OTG_HCCHAR9_EPDIR_B_0x0 = 0;
        /** @brief IN */
    constexpr std::uint32_t OTG_HCCHAR9_EPDIR_B_0x1 = 1;

    /** @brief Low-speed device This field is set by the application to indicate that this channel is communicating to a low-speed device. */
    using OTG_HCCHAR9_LSDEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint type Indicates the transfer type selected. */
    using OTG_HCCHAR9_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_HCCHAR9_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_HCCHAR9_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_HCCHAR9_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_HCCHAR9_EPTYP_B_0x3 = 3;

    /** @brief Multicount This field indicates to the host the number of transactions that must be executed per frame for this periodic endpoint. For non-periodic transfers, this field is not used Note: This field must be set to at least 01. */
    using OTG_HCCHAR9_MCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Reserved. This field yields undefined results (value: 0)
     *          - B_0x1: 1 transaction (value: 1)
     *          - B_0x2: 2 transactions per frame to be issued for this endpoint (value: 2)
     *          - B_0x3: 3 transactions per frame to be issued for this endpoint (value: 3)
     */
        /** @brief Reserved. This field yields undefined results */
    constexpr std::uint32_t OTG_HCCHAR9_MCNT_B_0x0 = 0;
        /** @brief 1 transaction */
    constexpr std::uint32_t OTG_HCCHAR9_MCNT_B_0x1 = 1;
        /** @brief 2 transactions per frame to be issued for this endpoint */
    constexpr std::uint32_t OTG_HCCHAR9_MCNT_B_0x2 = 2;
        /** @brief 3 transactions per frame to be issued for this endpoint */
    constexpr std::uint32_t OTG_HCCHAR9_MCNT_B_0x3 = 3;

    /** @brief Device address This field selects the specific device serving as the data source or sink. */
    using OTG_HCCHAR9_DAD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Odd frame This field is set (reset) by the application to indicate that the OTG host must perform a transfer in an odd frame. This field is applicable for only periodic (isochronous and interrupt) transactions. */
    using OTG_HCCHAR9_ODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Even frame (value: 0)
     *          - B_0x1: Odd frame (value: 1)
     */
        /** @brief Even frame */
    constexpr std::uint32_t OTG_HCCHAR9_ODDFRM_B_0x0 = 0;
        /** @brief Odd frame */
    constexpr std::uint32_t OTG_HCCHAR9_ODDFRM_B_0x1 = 1;

    /** @brief Channel disable The application sets this bit to stop transmitting/receiving data on a channel, even before the transfer for that channel is complete. The application must wait for the Channel disabled interrupt before treating the channel as disabled. */
    using OTG_HCCHAR9_CHDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel enable This field is set by the application and cleared by the OTG host. */
    using OTG_HCCHAR9_CHENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Channel disabled (value: 0)
     *          - B_0x1: Channel enabled (value: 1)
     */
        /** @brief Channel disabled */
    constexpr std::uint32_t OTG_HCCHAR9_CHENA_B_0x0 = 0;
        /** @brief Channel enabled */
    constexpr std::uint32_t OTG_HCCHAR9_CHENA_B_0x1 = 1;

    /** @brief OTG host channel 9 split control register */
    using OTG_HCSPLT9 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x624, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port address This field is the port number of the recipient transaction translator. */
    using OTG_HCSPLT9_PRTADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hub address This field holds the device address of the transaction translators hub. */
    using OTG_HCSPLT9_HUBADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction position This field is used to determine whether to send all, first, middle, or last payloads with each OUT transaction. */
    using OTG_HCSPLT9_XACTPOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x3: All. This is the entire data payload of this transaction (which is less than or equal to 188 bytes) (value: 3)
     *          - B_0x2: Begin. This is the first data payload of this transaction (which is larger than 188 bytes) (value: 2)
     *          - B_0x0: Mid. This is the middle payload of this transaction (which is larger than 188 bytes) (value: 0)
     *          - B_0x1: End. This is the last payload of this transaction (which is larger than 188 bytes) (value: 1)
     */
        /** @brief All. This is the entire data payload of this transaction (which is less than or equal to 188 bytes) */
    constexpr std::uint32_t OTG_HCSPLT9_XACTPOS_B_0x3 = 3;
        /** @brief Begin. This is the first data payload of this transaction (which is larger than 188 bytes) */
    constexpr std::uint32_t OTG_HCSPLT9_XACTPOS_B_0x2 = 2;
        /** @brief Mid. This is the middle payload of this transaction (which is larger than 188 bytes) */
    constexpr std::uint32_t OTG_HCSPLT9_XACTPOS_B_0x0 = 0;
        /** @brief End. This is the last payload of this transaction (which is larger than 188 bytes) */
    constexpr std::uint32_t OTG_HCSPLT9_XACTPOS_B_0x1 = 1;

    /** @brief Do complete split The application sets this bit to request the OTG host to perform a complete split transaction. */
    using OTG_HCSPLT9_COMPLSPLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Split enable The application sets this bit to indicate that this channel is enabled to perform split transactions. */
    using OTG_HCSPLT9_SPLITEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 9 interrupt register */
    using OTG_HCINT9 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x628, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed. Transfer completed normally without any errors. */
    using OTG_HCINT9_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel halted. Indicates the transfer completed abnormally either because of any USB transaction error or in response to disable request by the application. */
    using OTG_HCINT9_CHH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error This error is generated only in Internal DMA mode when an AHB error occurs during an AHB read/write operation. The application can read the corresponding DMA channel address register to get the error address. */
    using OTG_HCINT9_AHBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL response received interrupt. */
    using OTG_HCINT9_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK response received interrupt. */
    using OTG_HCINT9_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACK response received/transmitted interrupt. */
    using OTG_HCINT9_ACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Not yet ready response received interrupt. */
    using OTG_HCINT9_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction error. Indicates one of the following errors occurred on the USB. CRC check failure Timeout Bit stuff error False EOP */
    using OTG_HCINT9_TXERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Babble error. */
    using OTG_HCINT9_BBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame overrun. */
    using OTG_HCINT9_FRMOR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data toggle error. */
    using OTG_HCINT9_DTERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 9 interrupt mask register */
    using OTG_HCINTMSK9 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x62C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed mask */
    using OTG_HCINTMSK9_XFRCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK9_XFRCM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK9_XFRCM_B_0x1 = 1;

    /** @brief Channel halted mask */
    using OTG_HCINTMSK9_CHHM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK9_CHHM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK9_CHHM_B_0x1 = 1;

    /** @brief AHB error. */
    using OTG_HCINTMSK9_AHBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK9_AHBERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK9_AHBERRM_B_0x1 = 1;

    /** @brief STALL response received interrupt mask. */
    using OTG_HCINTMSK9_STALLM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK9_STALLM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK9_STALLM_B_0x1 = 1;

    /** @brief NAK response received interrupt mask. */
    using OTG_HCINTMSK9_NAKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK9_NAKM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK9_NAKM_B_0x1 = 1;

    /** @brief ACK response received/transmitted interrupt mask. */
    using OTG_HCINTMSK9_ACKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK9_ACKM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK9_ACKM_B_0x1 = 1;

    /** @brief response received interrupt mask. */
    using OTG_HCINTMSK9_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK9_NYET_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK9_NYET_B_0x1 = 1;

    /** @brief Transaction error mask. */
    using OTG_HCINTMSK9_TXERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK9_TXERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK9_TXERRM_B_0x1 = 1;

    /** @brief Babble error mask. */
    using OTG_HCINTMSK9_BBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK9_BBERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK9_BBERRM_B_0x1 = 1;

    /** @brief Frame overrun mask. */
    using OTG_HCINTMSK9_FRMORM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK9_FRMORM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK9_FRMORM_B_0x1 = 1;

    /** @brief Data toggle error mask. */
    using OTG_HCINTMSK9_DTERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK9_DTERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK9_DTERRM_B_0x1 = 1;

    /** @brief OTG host channel 9 transfer size register */
    using OTG_HCTSIZ9 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x630, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size For an OUT, this field is the number of data bytes the host sends during the transfer. For an IN, this field is the buffer size that the application has reserved for the transfer. The application is expected to program this field as an integer multiple of the maximum packet size for IN transactions (periodic and non-periodic). */
    using OTG_HCTSIZ9_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count This field is programmed by the application with the expected number of packets to be transmitted (OUT) or received (IN). The host decrements this count on every successful transmission or reception of an OUT/IN packet. Once this count reaches zero, the application is interrupted to indicate normal completion. */
    using OTG_HCTSIZ9_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data PID The application programs this field with the type of PID to use for the initial transaction. The host maintains this field for the rest of the transfer. */
    using OTG_HCTSIZ9_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATA0 (value: 0)
     *          - B_0x1: DATA2 (value: 1)
     *          - B_0x2: DATA1 (value: 2)
     *          - B_0x3: SETUP (control) / MDATA (non-control) (value: 3)
     */
        /** @brief DATA0 */
    constexpr std::uint32_t OTG_HCTSIZ9_DPID_B_0x0 = 0;
        /** @brief DATA2 */
    constexpr std::uint32_t OTG_HCTSIZ9_DPID_B_0x1 = 1;
        /** @brief DATA1 */
    constexpr std::uint32_t OTG_HCTSIZ9_DPID_B_0x2 = 2;
        /** @brief SETUP (control) / MDATA (non-control) */
    constexpr std::uint32_t OTG_HCTSIZ9_DPID_B_0x3 = 3;

    /** @brief Do Ping This bit is used only for OUT transfers. Setting this field to 1 directs the host to do PING protocol. Note: Do not set this bit for IN transfers. If this bit is set for IN transfers, it disables the channel. */
    using OTG_HCTSIZ9_DOPNG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 9 DMA address register */
    using OTG_HCDMA9 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x634, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA address This field holds the start address in the external memory from which the data for the endpoint must be fetched or to which it must be stored. This register is incremented on every AHB transaction. */
    using OTG_HCDMA9_DMAADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 10 characteristics register */
    using OTG_HCCHAR10 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x640, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size Indicates the maximum packet size of the associated endpoint. */
    using OTG_HCCHAR10_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint number Indicates the endpoint number on the device serving as the data source or sink. */
    using OTG_HCCHAR10_EPNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint direction Indicates whether the transaction is IN or OUT. */
    using OTG_HCCHAR10_EPDIR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OUT (value: 0)
     *          - B_0x1: IN (value: 1)
     */
        /** @brief OUT */
    constexpr std::uint32_t OTG_HCCHAR10_EPDIR_B_0x0 = 0;
        /** @brief IN */
    constexpr std::uint32_t OTG_HCCHAR10_EPDIR_B_0x1 = 1;

    /** @brief Low-speed device This field is set by the application to indicate that this channel is communicating to a low-speed device. */
    using OTG_HCCHAR10_LSDEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint type Indicates the transfer type selected. */
    using OTG_HCCHAR10_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_HCCHAR10_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_HCCHAR10_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_HCCHAR10_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_HCCHAR10_EPTYP_B_0x3 = 3;

    /** @brief Multicount This field indicates to the host the number of transactions that must be executed per frame for this periodic endpoint. For non-periodic transfers, this field is not used Note: This field must be set to at least 01. */
    using OTG_HCCHAR10_MCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Reserved. This field yields undefined results (value: 0)
     *          - B_0x1: 1 transaction (value: 1)
     *          - B_0x2: 2 transactions per frame to be issued for this endpoint (value: 2)
     *          - B_0x3: 3 transactions per frame to be issued for this endpoint (value: 3)
     */
        /** @brief Reserved. This field yields undefined results */
    constexpr std::uint32_t OTG_HCCHAR10_MCNT_B_0x0 = 0;
        /** @brief 1 transaction */
    constexpr std::uint32_t OTG_HCCHAR10_MCNT_B_0x1 = 1;
        /** @brief 2 transactions per frame to be issued for this endpoint */
    constexpr std::uint32_t OTG_HCCHAR10_MCNT_B_0x2 = 2;
        /** @brief 3 transactions per frame to be issued for this endpoint */
    constexpr std::uint32_t OTG_HCCHAR10_MCNT_B_0x3 = 3;

    /** @brief Device address This field selects the specific device serving as the data source or sink. */
    using OTG_HCCHAR10_DAD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Odd frame This field is set (reset) by the application to indicate that the OTG host must perform a transfer in an odd frame. This field is applicable for only periodic (isochronous and interrupt) transactions. */
    using OTG_HCCHAR10_ODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Even frame (value: 0)
     *          - B_0x1: Odd frame (value: 1)
     */
        /** @brief Even frame */
    constexpr std::uint32_t OTG_HCCHAR10_ODDFRM_B_0x0 = 0;
        /** @brief Odd frame */
    constexpr std::uint32_t OTG_HCCHAR10_ODDFRM_B_0x1 = 1;

    /** @brief Channel disable The application sets this bit to stop transmitting/receiving data on a channel, even before the transfer for that channel is complete. The application must wait for the Channel disabled interrupt before treating the channel as disabled. */
    using OTG_HCCHAR10_CHDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel enable This field is set by the application and cleared by the OTG host. */
    using OTG_HCCHAR10_CHENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Channel disabled (value: 0)
     *          - B_0x1: Channel enabled (value: 1)
     */
        /** @brief Channel disabled */
    constexpr std::uint32_t OTG_HCCHAR10_CHENA_B_0x0 = 0;
        /** @brief Channel enabled */
    constexpr std::uint32_t OTG_HCCHAR10_CHENA_B_0x1 = 1;

    /** @brief OTG host channel 10 split control register */
    using OTG_HCSPLT10 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x644, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port address This field is the port number of the recipient transaction translator. */
    using OTG_HCSPLT10_PRTADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hub address This field holds the device address of the transaction translators hub. */
    using OTG_HCSPLT10_HUBADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction position This field is used to determine whether to send all, first, middle, or last payloads with each OUT transaction. */
    using OTG_HCSPLT10_XACTPOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x3: All. This is the entire data payload of this transaction (which is less than or equal to 188 bytes) (value: 3)
     *          - B_0x2: Begin. This is the first data payload of this transaction (which is larger than 188 bytes) (value: 2)
     *          - B_0x0: Mid. This is the middle payload of this transaction (which is larger than 188 bytes) (value: 0)
     *          - B_0x1: End. This is the last payload of this transaction (which is larger than 188 bytes) (value: 1)
     */
        /** @brief All. This is the entire data payload of this transaction (which is less than or equal to 188 bytes) */
    constexpr std::uint32_t OTG_HCSPLT10_XACTPOS_B_0x3 = 3;
        /** @brief Begin. This is the first data payload of this transaction (which is larger than 188 bytes) */
    constexpr std::uint32_t OTG_HCSPLT10_XACTPOS_B_0x2 = 2;
        /** @brief Mid. This is the middle payload of this transaction (which is larger than 188 bytes) */
    constexpr std::uint32_t OTG_HCSPLT10_XACTPOS_B_0x0 = 0;
        /** @brief End. This is the last payload of this transaction (which is larger than 188 bytes) */
    constexpr std::uint32_t OTG_HCSPLT10_XACTPOS_B_0x1 = 1;

    /** @brief Do complete split The application sets this bit to request the OTG host to perform a complete split transaction. */
    using OTG_HCSPLT10_COMPLSPLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Split enable The application sets this bit to indicate that this channel is enabled to perform split transactions. */
    using OTG_HCSPLT10_SPLITEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 10 interrupt register */
    using OTG_HCINT10 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x648, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed. Transfer completed normally without any errors. */
    using OTG_HCINT10_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel halted. Indicates the transfer completed abnormally either because of any USB transaction error or in response to disable request by the application. */
    using OTG_HCINT10_CHH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error This error is generated only in Internal DMA mode when an AHB error occurs during an AHB read/write operation. The application can read the corresponding DMA channel address register to get the error address. */
    using OTG_HCINT10_AHBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL response received interrupt. */
    using OTG_HCINT10_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK response received interrupt. */
    using OTG_HCINT10_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACK response received/transmitted interrupt. */
    using OTG_HCINT10_ACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Not yet ready response received interrupt. */
    using OTG_HCINT10_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction error. Indicates one of the following errors occurred on the USB. CRC check failure Timeout Bit stuff error False EOP */
    using OTG_HCINT10_TXERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Babble error. */
    using OTG_HCINT10_BBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame overrun. */
    using OTG_HCINT10_FRMOR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data toggle error. */
    using OTG_HCINT10_DTERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 10 interrupt mask register */
    using OTG_HCINTMSK10 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x64C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed mask */
    using OTG_HCINTMSK10_XFRCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK10_XFRCM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK10_XFRCM_B_0x1 = 1;

    /** @brief Channel halted mask */
    using OTG_HCINTMSK10_CHHM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK10_CHHM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK10_CHHM_B_0x1 = 1;

    /** @brief AHB error. */
    using OTG_HCINTMSK10_AHBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK10_AHBERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK10_AHBERRM_B_0x1 = 1;

    /** @brief STALL response received interrupt mask. */
    using OTG_HCINTMSK10_STALLM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK10_STALLM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK10_STALLM_B_0x1 = 1;

    /** @brief NAK response received interrupt mask. */
    using OTG_HCINTMSK10_NAKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK10_NAKM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK10_NAKM_B_0x1 = 1;

    /** @brief ACK response received/transmitted interrupt mask. */
    using OTG_HCINTMSK10_ACKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK10_ACKM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK10_ACKM_B_0x1 = 1;

    /** @brief response received interrupt mask. */
    using OTG_HCINTMSK10_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK10_NYET_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK10_NYET_B_0x1 = 1;

    /** @brief Transaction error mask. */
    using OTG_HCINTMSK10_TXERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK10_TXERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK10_TXERRM_B_0x1 = 1;

    /** @brief Babble error mask. */
    using OTG_HCINTMSK10_BBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK10_BBERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK10_BBERRM_B_0x1 = 1;

    /** @brief Frame overrun mask. */
    using OTG_HCINTMSK10_FRMORM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK10_FRMORM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK10_FRMORM_B_0x1 = 1;

    /** @brief Data toggle error mask. */
    using OTG_HCINTMSK10_DTERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK10_DTERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK10_DTERRM_B_0x1 = 1;

    /** @brief OTG host channel 10 transfer size register */
    using OTG_HCTSIZ10 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x650, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size For an OUT, this field is the number of data bytes the host sends during the transfer. For an IN, this field is the buffer size that the application has reserved for the transfer. The application is expected to program this field as an integer multiple of the maximum packet size for IN transactions (periodic and non-periodic). */
    using OTG_HCTSIZ10_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count This field is programmed by the application with the expected number of packets to be transmitted (OUT) or received (IN). The host decrements this count on every successful transmission or reception of an OUT/IN packet. Once this count reaches zero, the application is interrupted to indicate normal completion. */
    using OTG_HCTSIZ10_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data PID The application programs this field with the type of PID to use for the initial transaction. The host maintains this field for the rest of the transfer. */
    using OTG_HCTSIZ10_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATA0 (value: 0)
     *          - B_0x1: DATA2 (value: 1)
     *          - B_0x2: DATA1 (value: 2)
     *          - B_0x3: SETUP (control) / MDATA (non-control) (value: 3)
     */
        /** @brief DATA0 */
    constexpr std::uint32_t OTG_HCTSIZ10_DPID_B_0x0 = 0;
        /** @brief DATA2 */
    constexpr std::uint32_t OTG_HCTSIZ10_DPID_B_0x1 = 1;
        /** @brief DATA1 */
    constexpr std::uint32_t OTG_HCTSIZ10_DPID_B_0x2 = 2;
        /** @brief SETUP (control) / MDATA (non-control) */
    constexpr std::uint32_t OTG_HCTSIZ10_DPID_B_0x3 = 3;

    /** @brief Do Ping This bit is used only for OUT transfers. Setting this field to 1 directs the host to do PING protocol. Note: Do not set this bit for IN transfers. If this bit is set for IN transfers, it disables the channel. */
    using OTG_HCTSIZ10_DOPNG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 10 DMA address register */
    using OTG_HCDMA10 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x654, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA address This field holds the start address in the external memory from which the data for the endpoint must be fetched or to which it must be stored. This register is incremented on every AHB transaction. */
    using OTG_HCDMA10_DMAADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 11 characteristics register */
    using OTG_HCCHAR11 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x660, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size Indicates the maximum packet size of the associated endpoint. */
    using OTG_HCCHAR11_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint number Indicates the endpoint number on the device serving as the data source or sink. */
    using OTG_HCCHAR11_EPNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint direction Indicates whether the transaction is IN or OUT. */
    using OTG_HCCHAR11_EPDIR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OUT (value: 0)
     *          - B_0x1: IN (value: 1)
     */
        /** @brief OUT */
    constexpr std::uint32_t OTG_HCCHAR11_EPDIR_B_0x0 = 0;
        /** @brief IN */
    constexpr std::uint32_t OTG_HCCHAR11_EPDIR_B_0x1 = 1;

    /** @brief Low-speed device This field is set by the application to indicate that this channel is communicating to a low-speed device. */
    using OTG_HCCHAR11_LSDEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint type Indicates the transfer type selected. */
    using OTG_HCCHAR11_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_HCCHAR11_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_HCCHAR11_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_HCCHAR11_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_HCCHAR11_EPTYP_B_0x3 = 3;

    /** @brief Multicount This field indicates to the host the number of transactions that must be executed per frame for this periodic endpoint. For non-periodic transfers, this field is not used Note: This field must be set to at least 01. */
    using OTG_HCCHAR11_MCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Reserved. This field yields undefined results (value: 0)
     *          - B_0x1: 1 transaction (value: 1)
     *          - B_0x2: 2 transactions per frame to be issued for this endpoint (value: 2)
     *          - B_0x3: 3 transactions per frame to be issued for this endpoint (value: 3)
     */
        /** @brief Reserved. This field yields undefined results */
    constexpr std::uint32_t OTG_HCCHAR11_MCNT_B_0x0 = 0;
        /** @brief 1 transaction */
    constexpr std::uint32_t OTG_HCCHAR11_MCNT_B_0x1 = 1;
        /** @brief 2 transactions per frame to be issued for this endpoint */
    constexpr std::uint32_t OTG_HCCHAR11_MCNT_B_0x2 = 2;
        /** @brief 3 transactions per frame to be issued for this endpoint */
    constexpr std::uint32_t OTG_HCCHAR11_MCNT_B_0x3 = 3;

    /** @brief Device address This field selects the specific device serving as the data source or sink. */
    using OTG_HCCHAR11_DAD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Odd frame This field is set (reset) by the application to indicate that the OTG host must perform a transfer in an odd frame. This field is applicable for only periodic (isochronous and interrupt) transactions. */
    using OTG_HCCHAR11_ODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Even frame (value: 0)
     *          - B_0x1: Odd frame (value: 1)
     */
        /** @brief Even frame */
    constexpr std::uint32_t OTG_HCCHAR11_ODDFRM_B_0x0 = 0;
        /** @brief Odd frame */
    constexpr std::uint32_t OTG_HCCHAR11_ODDFRM_B_0x1 = 1;

    /** @brief Channel disable The application sets this bit to stop transmitting/receiving data on a channel, even before the transfer for that channel is complete. The application must wait for the Channel disabled interrupt before treating the channel as disabled. */
    using OTG_HCCHAR11_CHDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel enable This field is set by the application and cleared by the OTG host. */
    using OTG_HCCHAR11_CHENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Channel disabled (value: 0)
     *          - B_0x1: Channel enabled (value: 1)
     */
        /** @brief Channel disabled */
    constexpr std::uint32_t OTG_HCCHAR11_CHENA_B_0x0 = 0;
        /** @brief Channel enabled */
    constexpr std::uint32_t OTG_HCCHAR11_CHENA_B_0x1 = 1;

    /** @brief OTG host channel 11 split control register */
    using OTG_HCSPLT11 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x664, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port address This field is the port number of the recipient transaction translator. */
    using OTG_HCSPLT11_PRTADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hub address This field holds the device address of the transaction translators hub. */
    using OTG_HCSPLT11_HUBADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction position This field is used to determine whether to send all, first, middle, or last payloads with each OUT transaction. */
    using OTG_HCSPLT11_XACTPOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x3: All. This is the entire data payload of this transaction (which is less than or equal to 188 bytes) (value: 3)
     *          - B_0x2: Begin. This is the first data payload of this transaction (which is larger than 188 bytes) (value: 2)
     *          - B_0x0: Mid. This is the middle payload of this transaction (which is larger than 188 bytes) (value: 0)
     *          - B_0x1: End. This is the last payload of this transaction (which is larger than 188 bytes) (value: 1)
     */
        /** @brief All. This is the entire data payload of this transaction (which is less than or equal to 188 bytes) */
    constexpr std::uint32_t OTG_HCSPLT11_XACTPOS_B_0x3 = 3;
        /** @brief Begin. This is the first data payload of this transaction (which is larger than 188 bytes) */
    constexpr std::uint32_t OTG_HCSPLT11_XACTPOS_B_0x2 = 2;
        /** @brief Mid. This is the middle payload of this transaction (which is larger than 188 bytes) */
    constexpr std::uint32_t OTG_HCSPLT11_XACTPOS_B_0x0 = 0;
        /** @brief End. This is the last payload of this transaction (which is larger than 188 bytes) */
    constexpr std::uint32_t OTG_HCSPLT11_XACTPOS_B_0x1 = 1;

    /** @brief Do complete split The application sets this bit to request the OTG host to perform a complete split transaction. */
    using OTG_HCSPLT11_COMPLSPLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Split enable The application sets this bit to indicate that this channel is enabled to perform split transactions. */
    using OTG_HCSPLT11_SPLITEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 11 interrupt register */
    using OTG_HCINT11 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x668, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed. Transfer completed normally without any errors. */
    using OTG_HCINT11_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel halted. Indicates the transfer completed abnormally either because of any USB transaction error or in response to disable request by the application. */
    using OTG_HCINT11_CHH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error This error is generated only in Internal DMA mode when an AHB error occurs during an AHB read/write operation. The application can read the corresponding DMA channel address register to get the error address. */
    using OTG_HCINT11_AHBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL response received interrupt. */
    using OTG_HCINT11_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK response received interrupt. */
    using OTG_HCINT11_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACK response received/transmitted interrupt. */
    using OTG_HCINT11_ACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Not yet ready response received interrupt. */
    using OTG_HCINT11_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction error. Indicates one of the following errors occurred on the USB. CRC check failure Timeout Bit stuff error False EOP */
    using OTG_HCINT11_TXERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Babble error. */
    using OTG_HCINT11_BBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame overrun. */
    using OTG_HCINT11_FRMOR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data toggle error. */
    using OTG_HCINT11_DTERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 11 interrupt mask register */
    using OTG_HCINTMSK11 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x66C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed mask */
    using OTG_HCINTMSK11_XFRCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK11_XFRCM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK11_XFRCM_B_0x1 = 1;

    /** @brief Channel halted mask */
    using OTG_HCINTMSK11_CHHM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK11_CHHM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK11_CHHM_B_0x1 = 1;

    /** @brief AHB error. */
    using OTG_HCINTMSK11_AHBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK11_AHBERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK11_AHBERRM_B_0x1 = 1;

    /** @brief STALL response received interrupt mask. */
    using OTG_HCINTMSK11_STALLM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK11_STALLM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK11_STALLM_B_0x1 = 1;

    /** @brief NAK response received interrupt mask. */
    using OTG_HCINTMSK11_NAKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK11_NAKM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK11_NAKM_B_0x1 = 1;

    /** @brief ACK response received/transmitted interrupt mask. */
    using OTG_HCINTMSK11_ACKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK11_ACKM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK11_ACKM_B_0x1 = 1;

    /** @brief response received interrupt mask. */
    using OTG_HCINTMSK11_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK11_NYET_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK11_NYET_B_0x1 = 1;

    /** @brief Transaction error mask. */
    using OTG_HCINTMSK11_TXERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK11_TXERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK11_TXERRM_B_0x1 = 1;

    /** @brief Babble error mask. */
    using OTG_HCINTMSK11_BBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK11_BBERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK11_BBERRM_B_0x1 = 1;

    /** @brief Frame overrun mask. */
    using OTG_HCINTMSK11_FRMORM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK11_FRMORM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK11_FRMORM_B_0x1 = 1;

    /** @brief Data toggle error mask. */
    using OTG_HCINTMSK11_DTERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK11_DTERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK11_DTERRM_B_0x1 = 1;

    /** @brief OTG host channel 11 transfer size register */
    using OTG_HCTSIZ11 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x670, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size For an OUT, this field is the number of data bytes the host sends during the transfer. For an IN, this field is the buffer size that the application has reserved for the transfer. The application is expected to program this field as an integer multiple of the maximum packet size for IN transactions (periodic and non-periodic). */
    using OTG_HCTSIZ11_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count This field is programmed by the application with the expected number of packets to be transmitted (OUT) or received (IN). The host decrements this count on every successful transmission or reception of an OUT/IN packet. Once this count reaches zero, the application is interrupted to indicate normal completion. */
    using OTG_HCTSIZ11_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data PID The application programs this field with the type of PID to use for the initial transaction. The host maintains this field for the rest of the transfer. */
    using OTG_HCTSIZ11_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATA0 (value: 0)
     *          - B_0x1: DATA2 (value: 1)
     *          - B_0x2: DATA1 (value: 2)
     *          - B_0x3: SETUP (control) / MDATA (non-control) (value: 3)
     */
        /** @brief DATA0 */
    constexpr std::uint32_t OTG_HCTSIZ11_DPID_B_0x0 = 0;
        /** @brief DATA2 */
    constexpr std::uint32_t OTG_HCTSIZ11_DPID_B_0x1 = 1;
        /** @brief DATA1 */
    constexpr std::uint32_t OTG_HCTSIZ11_DPID_B_0x2 = 2;
        /** @brief SETUP (control) / MDATA (non-control) */
    constexpr std::uint32_t OTG_HCTSIZ11_DPID_B_0x3 = 3;

    /** @brief Do Ping This bit is used only for OUT transfers. Setting this field to 1 directs the host to do PING protocol. Note: Do not set this bit for IN transfers. If this bit is set for IN transfers, it disables the channel. */
    using OTG_HCTSIZ11_DOPNG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 11 DMA address register */
    using OTG_HCDMA11 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x674, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA address This field holds the start address in the external memory from which the data for the endpoint must be fetched or to which it must be stored. This register is incremented on every AHB transaction. */
    using OTG_HCDMA11_DMAADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 12 characteristics register */
    using OTG_HCCHAR12 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x680, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size Indicates the maximum packet size of the associated endpoint. */
    using OTG_HCCHAR12_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint number Indicates the endpoint number on the device serving as the data source or sink. */
    using OTG_HCCHAR12_EPNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint direction Indicates whether the transaction is IN or OUT. */
    using OTG_HCCHAR12_EPDIR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OUT (value: 0)
     *          - B_0x1: IN (value: 1)
     */
        /** @brief OUT */
    constexpr std::uint32_t OTG_HCCHAR12_EPDIR_B_0x0 = 0;
        /** @brief IN */
    constexpr std::uint32_t OTG_HCCHAR12_EPDIR_B_0x1 = 1;

    /** @brief Low-speed device This field is set by the application to indicate that this channel is communicating to a low-speed device. */
    using OTG_HCCHAR12_LSDEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint type Indicates the transfer type selected. */
    using OTG_HCCHAR12_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_HCCHAR12_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_HCCHAR12_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_HCCHAR12_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_HCCHAR12_EPTYP_B_0x3 = 3;

    /** @brief Multicount This field indicates to the host the number of transactions that must be executed per frame for this periodic endpoint. For non-periodic transfers, this field is not used Note: This field must be set to at least 01. */
    using OTG_HCCHAR12_MCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Reserved. This field yields undefined results (value: 0)
     *          - B_0x1: 1 transaction (value: 1)
     *          - B_0x2: 2 transactions per frame to be issued for this endpoint (value: 2)
     *          - B_0x3: 3 transactions per frame to be issued for this endpoint (value: 3)
     */
        /** @brief Reserved. This field yields undefined results */
    constexpr std::uint32_t OTG_HCCHAR12_MCNT_B_0x0 = 0;
        /** @brief 1 transaction */
    constexpr std::uint32_t OTG_HCCHAR12_MCNT_B_0x1 = 1;
        /** @brief 2 transactions per frame to be issued for this endpoint */
    constexpr std::uint32_t OTG_HCCHAR12_MCNT_B_0x2 = 2;
        /** @brief 3 transactions per frame to be issued for this endpoint */
    constexpr std::uint32_t OTG_HCCHAR12_MCNT_B_0x3 = 3;

    /** @brief Device address This field selects the specific device serving as the data source or sink. */
    using OTG_HCCHAR12_DAD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Odd frame This field is set (reset) by the application to indicate that the OTG host must perform a transfer in an odd frame. This field is applicable for only periodic (isochronous and interrupt) transactions. */
    using OTG_HCCHAR12_ODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Even frame (value: 0)
     *          - B_0x1: Odd frame (value: 1)
     */
        /** @brief Even frame */
    constexpr std::uint32_t OTG_HCCHAR12_ODDFRM_B_0x0 = 0;
        /** @brief Odd frame */
    constexpr std::uint32_t OTG_HCCHAR12_ODDFRM_B_0x1 = 1;

    /** @brief Channel disable The application sets this bit to stop transmitting/receiving data on a channel, even before the transfer for that channel is complete. The application must wait for the Channel disabled interrupt before treating the channel as disabled. */
    using OTG_HCCHAR12_CHDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel enable This field is set by the application and cleared by the OTG host. */
    using OTG_HCCHAR12_CHENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Channel disabled (value: 0)
     *          - B_0x1: Channel enabled (value: 1)
     */
        /** @brief Channel disabled */
    constexpr std::uint32_t OTG_HCCHAR12_CHENA_B_0x0 = 0;
        /** @brief Channel enabled */
    constexpr std::uint32_t OTG_HCCHAR12_CHENA_B_0x1 = 1;

    /** @brief OTG host channel 12 split control register */
    using OTG_HCSPLT12 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x684, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port address This field is the port number of the recipient transaction translator. */
    using OTG_HCSPLT12_PRTADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hub address This field holds the device address of the transaction translators hub. */
    using OTG_HCSPLT12_HUBADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction position This field is used to determine whether to send all, first, middle, or last payloads with each OUT transaction. */
    using OTG_HCSPLT12_XACTPOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x3: All. This is the entire data payload of this transaction (which is less than or equal to 188 bytes) (value: 3)
     *          - B_0x2: Begin. This is the first data payload of this transaction (which is larger than 188 bytes) (value: 2)
     *          - B_0x0: Mid. This is the middle payload of this transaction (which is larger than 188 bytes) (value: 0)
     *          - B_0x1: End. This is the last payload of this transaction (which is larger than 188 bytes) (value: 1)
     */
        /** @brief All. This is the entire data payload of this transaction (which is less than or equal to 188 bytes) */
    constexpr std::uint32_t OTG_HCSPLT12_XACTPOS_B_0x3 = 3;
        /** @brief Begin. This is the first data payload of this transaction (which is larger than 188 bytes) */
    constexpr std::uint32_t OTG_HCSPLT12_XACTPOS_B_0x2 = 2;
        /** @brief Mid. This is the middle payload of this transaction (which is larger than 188 bytes) */
    constexpr std::uint32_t OTG_HCSPLT12_XACTPOS_B_0x0 = 0;
        /** @brief End. This is the last payload of this transaction (which is larger than 188 bytes) */
    constexpr std::uint32_t OTG_HCSPLT12_XACTPOS_B_0x1 = 1;

    /** @brief Do complete split The application sets this bit to request the OTG host to perform a complete split transaction. */
    using OTG_HCSPLT12_COMPLSPLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Split enable The application sets this bit to indicate that this channel is enabled to perform split transactions. */
    using OTG_HCSPLT12_SPLITEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 12 interrupt register */
    using OTG_HCINT12 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x688, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed. Transfer completed normally without any errors. */
    using OTG_HCINT12_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel halted. Indicates the transfer completed abnormally either because of any USB transaction error or in response to disable request by the application. */
    using OTG_HCINT12_CHH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error This error is generated only in Internal DMA mode when an AHB error occurs during an AHB read/write operation. The application can read the corresponding DMA channel address register to get the error address. */
    using OTG_HCINT12_AHBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL response received interrupt. */
    using OTG_HCINT12_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK response received interrupt. */
    using OTG_HCINT12_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACK response received/transmitted interrupt. */
    using OTG_HCINT12_ACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Not yet ready response received interrupt. */
    using OTG_HCINT12_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction error. Indicates one of the following errors occurred on the USB. CRC check failure Timeout Bit stuff error False EOP */
    using OTG_HCINT12_TXERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Babble error. */
    using OTG_HCINT12_BBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame overrun. */
    using OTG_HCINT12_FRMOR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data toggle error. */
    using OTG_HCINT12_DTERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 12 interrupt mask register */
    using OTG_HCINTMSK12 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x68C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed mask */
    using OTG_HCINTMSK12_XFRCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK12_XFRCM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK12_XFRCM_B_0x1 = 1;

    /** @brief Channel halted mask */
    using OTG_HCINTMSK12_CHHM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK12_CHHM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK12_CHHM_B_0x1 = 1;

    /** @brief AHB error. */
    using OTG_HCINTMSK12_AHBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK12_AHBERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK12_AHBERRM_B_0x1 = 1;

    /** @brief STALL response received interrupt mask. */
    using OTG_HCINTMSK12_STALLM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK12_STALLM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK12_STALLM_B_0x1 = 1;

    /** @brief NAK response received interrupt mask. */
    using OTG_HCINTMSK12_NAKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK12_NAKM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK12_NAKM_B_0x1 = 1;

    /** @brief ACK response received/transmitted interrupt mask. */
    using OTG_HCINTMSK12_ACKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK12_ACKM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK12_ACKM_B_0x1 = 1;

    /** @brief response received interrupt mask. */
    using OTG_HCINTMSK12_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK12_NYET_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK12_NYET_B_0x1 = 1;

    /** @brief Transaction error mask. */
    using OTG_HCINTMSK12_TXERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK12_TXERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK12_TXERRM_B_0x1 = 1;

    /** @brief Babble error mask. */
    using OTG_HCINTMSK12_BBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK12_BBERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK12_BBERRM_B_0x1 = 1;

    /** @brief Frame overrun mask. */
    using OTG_HCINTMSK12_FRMORM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK12_FRMORM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK12_FRMORM_B_0x1 = 1;

    /** @brief Data toggle error mask. */
    using OTG_HCINTMSK12_DTERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK12_DTERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK12_DTERRM_B_0x1 = 1;

    /** @brief OTG host channel 12 transfer size register */
    using OTG_HCTSIZ12 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x690, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size For an OUT, this field is the number of data bytes the host sends during the transfer. For an IN, this field is the buffer size that the application has reserved for the transfer. The application is expected to program this field as an integer multiple of the maximum packet size for IN transactions (periodic and non-periodic). */
    using OTG_HCTSIZ12_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count This field is programmed by the application with the expected number of packets to be transmitted (OUT) or received (IN). The host decrements this count on every successful transmission or reception of an OUT/IN packet. Once this count reaches zero, the application is interrupted to indicate normal completion. */
    using OTG_HCTSIZ12_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data PID The application programs this field with the type of PID to use for the initial transaction. The host maintains this field for the rest of the transfer. */
    using OTG_HCTSIZ12_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATA0 (value: 0)
     *          - B_0x1: DATA2 (value: 1)
     *          - B_0x2: DATA1 (value: 2)
     *          - B_0x3: SETUP (control) / MDATA (non-control) (value: 3)
     */
        /** @brief DATA0 */
    constexpr std::uint32_t OTG_HCTSIZ12_DPID_B_0x0 = 0;
        /** @brief DATA2 */
    constexpr std::uint32_t OTG_HCTSIZ12_DPID_B_0x1 = 1;
        /** @brief DATA1 */
    constexpr std::uint32_t OTG_HCTSIZ12_DPID_B_0x2 = 2;
        /** @brief SETUP (control) / MDATA (non-control) */
    constexpr std::uint32_t OTG_HCTSIZ12_DPID_B_0x3 = 3;

    /** @brief Do Ping This bit is used only for OUT transfers. Setting this field to 1 directs the host to do PING protocol. Note: Do not set this bit for IN transfers. If this bit is set for IN transfers, it disables the channel. */
    using OTG_HCTSIZ12_DOPNG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 12 DMA address register */
    using OTG_HCDMA12 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x694, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA address This field holds the start address in the external memory from which the data for the endpoint must be fetched or to which it must be stored. This register is incremented on every AHB transaction. */
    using OTG_HCDMA12_DMAADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 13 characteristics register */
    using OTG_HCCHAR13 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size Indicates the maximum packet size of the associated endpoint. */
    using OTG_HCCHAR13_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint number Indicates the endpoint number on the device serving as the data source or sink. */
    using OTG_HCCHAR13_EPNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint direction Indicates whether the transaction is IN or OUT. */
    using OTG_HCCHAR13_EPDIR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OUT (value: 0)
     *          - B_0x1: IN (value: 1)
     */
        /** @brief OUT */
    constexpr std::uint32_t OTG_HCCHAR13_EPDIR_B_0x0 = 0;
        /** @brief IN */
    constexpr std::uint32_t OTG_HCCHAR13_EPDIR_B_0x1 = 1;

    /** @brief Low-speed device This field is set by the application to indicate that this channel is communicating to a low-speed device. */
    using OTG_HCCHAR13_LSDEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint type Indicates the transfer type selected. */
    using OTG_HCCHAR13_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_HCCHAR13_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_HCCHAR13_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_HCCHAR13_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_HCCHAR13_EPTYP_B_0x3 = 3;

    /** @brief Multicount This field indicates to the host the number of transactions that must be executed per frame for this periodic endpoint. For non-periodic transfers, this field is not used Note: This field must be set to at least 01. */
    using OTG_HCCHAR13_MCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Reserved. This field yields undefined results (value: 0)
     *          - B_0x1: 1 transaction (value: 1)
     *          - B_0x2: 2 transactions per frame to be issued for this endpoint (value: 2)
     *          - B_0x3: 3 transactions per frame to be issued for this endpoint (value: 3)
     */
        /** @brief Reserved. This field yields undefined results */
    constexpr std::uint32_t OTG_HCCHAR13_MCNT_B_0x0 = 0;
        /** @brief 1 transaction */
    constexpr std::uint32_t OTG_HCCHAR13_MCNT_B_0x1 = 1;
        /** @brief 2 transactions per frame to be issued for this endpoint */
    constexpr std::uint32_t OTG_HCCHAR13_MCNT_B_0x2 = 2;
        /** @brief 3 transactions per frame to be issued for this endpoint */
    constexpr std::uint32_t OTG_HCCHAR13_MCNT_B_0x3 = 3;

    /** @brief Device address This field selects the specific device serving as the data source or sink. */
    using OTG_HCCHAR13_DAD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Odd frame This field is set (reset) by the application to indicate that the OTG host must perform a transfer in an odd frame. This field is applicable for only periodic (isochronous and interrupt) transactions. */
    using OTG_HCCHAR13_ODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Even frame (value: 0)
     *          - B_0x1: Odd frame (value: 1)
     */
        /** @brief Even frame */
    constexpr std::uint32_t OTG_HCCHAR13_ODDFRM_B_0x0 = 0;
        /** @brief Odd frame */
    constexpr std::uint32_t OTG_HCCHAR13_ODDFRM_B_0x1 = 1;

    /** @brief Channel disable The application sets this bit to stop transmitting/receiving data on a channel, even before the transfer for that channel is complete. The application must wait for the Channel disabled interrupt before treating the channel as disabled. */
    using OTG_HCCHAR13_CHDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel enable This field is set by the application and cleared by the OTG host. */
    using OTG_HCCHAR13_CHENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Channel disabled (value: 0)
     *          - B_0x1: Channel enabled (value: 1)
     */
        /** @brief Channel disabled */
    constexpr std::uint32_t OTG_HCCHAR13_CHENA_B_0x0 = 0;
        /** @brief Channel enabled */
    constexpr std::uint32_t OTG_HCCHAR13_CHENA_B_0x1 = 1;

    /** @brief OTG host channel 13 split control register */
    using OTG_HCSPLT13 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6A4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port address This field is the port number of the recipient transaction translator. */
    using OTG_HCSPLT13_PRTADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hub address This field holds the device address of the transaction translators hub. */
    using OTG_HCSPLT13_HUBADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction position This field is used to determine whether to send all, first, middle, or last payloads with each OUT transaction. */
    using OTG_HCSPLT13_XACTPOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x3: All. This is the entire data payload of this transaction (which is less than or equal to 188 bytes) (value: 3)
     *          - B_0x2: Begin. This is the first data payload of this transaction (which is larger than 188 bytes) (value: 2)
     *          - B_0x0: Mid. This is the middle payload of this transaction (which is larger than 188 bytes) (value: 0)
     *          - B_0x1: End. This is the last payload of this transaction (which is larger than 188 bytes) (value: 1)
     */
        /** @brief All. This is the entire data payload of this transaction (which is less than or equal to 188 bytes) */
    constexpr std::uint32_t OTG_HCSPLT13_XACTPOS_B_0x3 = 3;
        /** @brief Begin. This is the first data payload of this transaction (which is larger than 188 bytes) */
    constexpr std::uint32_t OTG_HCSPLT13_XACTPOS_B_0x2 = 2;
        /** @brief Mid. This is the middle payload of this transaction (which is larger than 188 bytes) */
    constexpr std::uint32_t OTG_HCSPLT13_XACTPOS_B_0x0 = 0;
        /** @brief End. This is the last payload of this transaction (which is larger than 188 bytes) */
    constexpr std::uint32_t OTG_HCSPLT13_XACTPOS_B_0x1 = 1;

    /** @brief Do complete split The application sets this bit to request the OTG host to perform a complete split transaction. */
    using OTG_HCSPLT13_COMPLSPLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Split enable The application sets this bit to indicate that this channel is enabled to perform split transactions. */
    using OTG_HCSPLT13_SPLITEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 13 interrupt register */
    using OTG_HCINT13 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6A8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed. Transfer completed normally without any errors. */
    using OTG_HCINT13_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel halted. Indicates the transfer completed abnormally either because of any USB transaction error or in response to disable request by the application. */
    using OTG_HCINT13_CHH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error This error is generated only in Internal DMA mode when an AHB error occurs during an AHB read/write operation. The application can read the corresponding DMA channel address register to get the error address. */
    using OTG_HCINT13_AHBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL response received interrupt. */
    using OTG_HCINT13_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK response received interrupt. */
    using OTG_HCINT13_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACK response received/transmitted interrupt. */
    using OTG_HCINT13_ACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Not yet ready response received interrupt. */
    using OTG_HCINT13_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction error. Indicates one of the following errors occurred on the USB. CRC check failure Timeout Bit stuff error False EOP */
    using OTG_HCINT13_TXERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Babble error. */
    using OTG_HCINT13_BBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame overrun. */
    using OTG_HCINT13_FRMOR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data toggle error. */
    using OTG_HCINT13_DTERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 13 interrupt mask register */
    using OTG_HCINTMSK13 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6AC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed mask */
    using OTG_HCINTMSK13_XFRCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK13_XFRCM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK13_XFRCM_B_0x1 = 1;

    /** @brief Channel halted mask */
    using OTG_HCINTMSK13_CHHM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK13_CHHM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK13_CHHM_B_0x1 = 1;

    /** @brief AHB error. */
    using OTG_HCINTMSK13_AHBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK13_AHBERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK13_AHBERRM_B_0x1 = 1;

    /** @brief STALL response received interrupt mask. */
    using OTG_HCINTMSK13_STALLM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK13_STALLM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK13_STALLM_B_0x1 = 1;

    /** @brief NAK response received interrupt mask. */
    using OTG_HCINTMSK13_NAKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK13_NAKM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK13_NAKM_B_0x1 = 1;

    /** @brief ACK response received/transmitted interrupt mask. */
    using OTG_HCINTMSK13_ACKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK13_ACKM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK13_ACKM_B_0x1 = 1;

    /** @brief response received interrupt mask. */
    using OTG_HCINTMSK13_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK13_NYET_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK13_NYET_B_0x1 = 1;

    /** @brief Transaction error mask. */
    using OTG_HCINTMSK13_TXERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK13_TXERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK13_TXERRM_B_0x1 = 1;

    /** @brief Babble error mask. */
    using OTG_HCINTMSK13_BBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK13_BBERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK13_BBERRM_B_0x1 = 1;

    /** @brief Frame overrun mask. */
    using OTG_HCINTMSK13_FRMORM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK13_FRMORM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK13_FRMORM_B_0x1 = 1;

    /** @brief Data toggle error mask. */
    using OTG_HCINTMSK13_DTERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK13_DTERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK13_DTERRM_B_0x1 = 1;

    /** @brief OTG host channel 13 transfer size register */
    using OTG_HCTSIZ13 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6B0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size For an OUT, this field is the number of data bytes the host sends during the transfer. For an IN, this field is the buffer size that the application has reserved for the transfer. The application is expected to program this field as an integer multiple of the maximum packet size for IN transactions (periodic and non-periodic). */
    using OTG_HCTSIZ13_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count This field is programmed by the application with the expected number of packets to be transmitted (OUT) or received (IN). The host decrements this count on every successful transmission or reception of an OUT/IN packet. Once this count reaches zero, the application is interrupted to indicate normal completion. */
    using OTG_HCTSIZ13_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data PID The application programs this field with the type of PID to use for the initial transaction. The host maintains this field for the rest of the transfer. */
    using OTG_HCTSIZ13_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATA0 (value: 0)
     *          - B_0x1: DATA2 (value: 1)
     *          - B_0x2: DATA1 (value: 2)
     *          - B_0x3: SETUP (control) / MDATA (non-control) (value: 3)
     */
        /** @brief DATA0 */
    constexpr std::uint32_t OTG_HCTSIZ13_DPID_B_0x0 = 0;
        /** @brief DATA2 */
    constexpr std::uint32_t OTG_HCTSIZ13_DPID_B_0x1 = 1;
        /** @brief DATA1 */
    constexpr std::uint32_t OTG_HCTSIZ13_DPID_B_0x2 = 2;
        /** @brief SETUP (control) / MDATA (non-control) */
    constexpr std::uint32_t OTG_HCTSIZ13_DPID_B_0x3 = 3;

    /** @brief Do Ping This bit is used only for OUT transfers. Setting this field to 1 directs the host to do PING protocol. Note: Do not set this bit for IN transfers. If this bit is set for IN transfers, it disables the channel. */
    using OTG_HCTSIZ13_DOPNG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 13 DMA address register */
    using OTG_HCDMA13 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6B4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA address This field holds the start address in the external memory from which the data for the endpoint must be fetched or to which it must be stored. This register is incremented on every AHB transaction. */
    using OTG_HCDMA13_DMAADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 14 characteristics register */
    using OTG_HCCHAR14 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6C0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size Indicates the maximum packet size of the associated endpoint. */
    using OTG_HCCHAR14_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint number Indicates the endpoint number on the device serving as the data source or sink. */
    using OTG_HCCHAR14_EPNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint direction Indicates whether the transaction is IN or OUT. */
    using OTG_HCCHAR14_EPDIR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OUT (value: 0)
     *          - B_0x1: IN (value: 1)
     */
        /** @brief OUT */
    constexpr std::uint32_t OTG_HCCHAR14_EPDIR_B_0x0 = 0;
        /** @brief IN */
    constexpr std::uint32_t OTG_HCCHAR14_EPDIR_B_0x1 = 1;

    /** @brief Low-speed device This field is set by the application to indicate that this channel is communicating to a low-speed device. */
    using OTG_HCCHAR14_LSDEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint type Indicates the transfer type selected. */
    using OTG_HCCHAR14_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_HCCHAR14_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_HCCHAR14_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_HCCHAR14_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_HCCHAR14_EPTYP_B_0x3 = 3;

    /** @brief Multicount This field indicates to the host the number of transactions that must be executed per frame for this periodic endpoint. For non-periodic transfers, this field is not used Note: This field must be set to at least 01. */
    using OTG_HCCHAR14_MCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Reserved. This field yields undefined results (value: 0)
     *          - B_0x1: 1 transaction (value: 1)
     *          - B_0x2: 2 transactions per frame to be issued for this endpoint (value: 2)
     *          - B_0x3: 3 transactions per frame to be issued for this endpoint (value: 3)
     */
        /** @brief Reserved. This field yields undefined results */
    constexpr std::uint32_t OTG_HCCHAR14_MCNT_B_0x0 = 0;
        /** @brief 1 transaction */
    constexpr std::uint32_t OTG_HCCHAR14_MCNT_B_0x1 = 1;
        /** @brief 2 transactions per frame to be issued for this endpoint */
    constexpr std::uint32_t OTG_HCCHAR14_MCNT_B_0x2 = 2;
        /** @brief 3 transactions per frame to be issued for this endpoint */
    constexpr std::uint32_t OTG_HCCHAR14_MCNT_B_0x3 = 3;

    /** @brief Device address This field selects the specific device serving as the data source or sink. */
    using OTG_HCCHAR14_DAD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Odd frame This field is set (reset) by the application to indicate that the OTG host must perform a transfer in an odd frame. This field is applicable for only periodic (isochronous and interrupt) transactions. */
    using OTG_HCCHAR14_ODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Even frame (value: 0)
     *          - B_0x1: Odd frame (value: 1)
     */
        /** @brief Even frame */
    constexpr std::uint32_t OTG_HCCHAR14_ODDFRM_B_0x0 = 0;
        /** @brief Odd frame */
    constexpr std::uint32_t OTG_HCCHAR14_ODDFRM_B_0x1 = 1;

    /** @brief Channel disable The application sets this bit to stop transmitting/receiving data on a channel, even before the transfer for that channel is complete. The application must wait for the Channel disabled interrupt before treating the channel as disabled. */
    using OTG_HCCHAR14_CHDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel enable This field is set by the application and cleared by the OTG host. */
    using OTG_HCCHAR14_CHENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Channel disabled (value: 0)
     *          - B_0x1: Channel enabled (value: 1)
     */
        /** @brief Channel disabled */
    constexpr std::uint32_t OTG_HCCHAR14_CHENA_B_0x0 = 0;
        /** @brief Channel enabled */
    constexpr std::uint32_t OTG_HCCHAR14_CHENA_B_0x1 = 1;

    /** @brief OTG host channel 14 split control register */
    using OTG_HCSPLT14 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6C4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port address This field is the port number of the recipient transaction translator. */
    using OTG_HCSPLT14_PRTADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hub address This field holds the device address of the transaction translators hub. */
    using OTG_HCSPLT14_HUBADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction position This field is used to determine whether to send all, first, middle, or last payloads with each OUT transaction. */
    using OTG_HCSPLT14_XACTPOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x3: All. This is the entire data payload of this transaction (which is less than or equal to 188 bytes) (value: 3)
     *          - B_0x2: Begin. This is the first data payload of this transaction (which is larger than 188 bytes) (value: 2)
     *          - B_0x0: Mid. This is the middle payload of this transaction (which is larger than 188 bytes) (value: 0)
     *          - B_0x1: End. This is the last payload of this transaction (which is larger than 188 bytes) (value: 1)
     */
        /** @brief All. This is the entire data payload of this transaction (which is less than or equal to 188 bytes) */
    constexpr std::uint32_t OTG_HCSPLT14_XACTPOS_B_0x3 = 3;
        /** @brief Begin. This is the first data payload of this transaction (which is larger than 188 bytes) */
    constexpr std::uint32_t OTG_HCSPLT14_XACTPOS_B_0x2 = 2;
        /** @brief Mid. This is the middle payload of this transaction (which is larger than 188 bytes) */
    constexpr std::uint32_t OTG_HCSPLT14_XACTPOS_B_0x0 = 0;
        /** @brief End. This is the last payload of this transaction (which is larger than 188 bytes) */
    constexpr std::uint32_t OTG_HCSPLT14_XACTPOS_B_0x1 = 1;

    /** @brief Do complete split The application sets this bit to request the OTG host to perform a complete split transaction. */
    using OTG_HCSPLT14_COMPLSPLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Split enable The application sets this bit to indicate that this channel is enabled to perform split transactions. */
    using OTG_HCSPLT14_SPLITEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 14 interrupt register */
    using OTG_HCINT14 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6C8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed. Transfer completed normally without any errors. */
    using OTG_HCINT14_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel halted. Indicates the transfer completed abnormally either because of any USB transaction error or in response to disable request by the application. */
    using OTG_HCINT14_CHH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error This error is generated only in Internal DMA mode when an AHB error occurs during an AHB read/write operation. The application can read the corresponding DMA channel address register to get the error address. */
    using OTG_HCINT14_AHBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL response received interrupt. */
    using OTG_HCINT14_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK response received interrupt. */
    using OTG_HCINT14_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACK response received/transmitted interrupt. */
    using OTG_HCINT14_ACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Not yet ready response received interrupt. */
    using OTG_HCINT14_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction error. Indicates one of the following errors occurred on the USB. CRC check failure Timeout Bit stuff error False EOP */
    using OTG_HCINT14_TXERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Babble error. */
    using OTG_HCINT14_BBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame overrun. */
    using OTG_HCINT14_FRMOR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data toggle error. */
    using OTG_HCINT14_DTERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 14 interrupt mask register */
    using OTG_HCINTMSK14 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6CC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed mask */
    using OTG_HCINTMSK14_XFRCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK14_XFRCM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK14_XFRCM_B_0x1 = 1;

    /** @brief Channel halted mask */
    using OTG_HCINTMSK14_CHHM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK14_CHHM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK14_CHHM_B_0x1 = 1;

    /** @brief AHB error. */
    using OTG_HCINTMSK14_AHBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK14_AHBERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK14_AHBERRM_B_0x1 = 1;

    /** @brief STALL response received interrupt mask. */
    using OTG_HCINTMSK14_STALLM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK14_STALLM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK14_STALLM_B_0x1 = 1;

    /** @brief NAK response received interrupt mask. */
    using OTG_HCINTMSK14_NAKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK14_NAKM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK14_NAKM_B_0x1 = 1;

    /** @brief ACK response received/transmitted interrupt mask. */
    using OTG_HCINTMSK14_ACKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK14_ACKM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK14_ACKM_B_0x1 = 1;

    /** @brief response received interrupt mask. */
    using OTG_HCINTMSK14_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK14_NYET_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK14_NYET_B_0x1 = 1;

    /** @brief Transaction error mask. */
    using OTG_HCINTMSK14_TXERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK14_TXERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK14_TXERRM_B_0x1 = 1;

    /** @brief Babble error mask. */
    using OTG_HCINTMSK14_BBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK14_BBERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK14_BBERRM_B_0x1 = 1;

    /** @brief Frame overrun mask. */
    using OTG_HCINTMSK14_FRMORM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK14_FRMORM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK14_FRMORM_B_0x1 = 1;

    /** @brief Data toggle error mask. */
    using OTG_HCINTMSK14_DTERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK14_DTERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK14_DTERRM_B_0x1 = 1;

    /** @brief OTG host channel 14 transfer size register */
    using OTG_HCTSIZ14 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6D0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size For an OUT, this field is the number of data bytes the host sends during the transfer. For an IN, this field is the buffer size that the application has reserved for the transfer. The application is expected to program this field as an integer multiple of the maximum packet size for IN transactions (periodic and non-periodic). */
    using OTG_HCTSIZ14_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count This field is programmed by the application with the expected number of packets to be transmitted (OUT) or received (IN). The host decrements this count on every successful transmission or reception of an OUT/IN packet. Once this count reaches zero, the application is interrupted to indicate normal completion. */
    using OTG_HCTSIZ14_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data PID The application programs this field with the type of PID to use for the initial transaction. The host maintains this field for the rest of the transfer. */
    using OTG_HCTSIZ14_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATA0 (value: 0)
     *          - B_0x1: DATA2 (value: 1)
     *          - B_0x2: DATA1 (value: 2)
     *          - B_0x3: SETUP (control) / MDATA (non-control) (value: 3)
     */
        /** @brief DATA0 */
    constexpr std::uint32_t OTG_HCTSIZ14_DPID_B_0x0 = 0;
        /** @brief DATA2 */
    constexpr std::uint32_t OTG_HCTSIZ14_DPID_B_0x1 = 1;
        /** @brief DATA1 */
    constexpr std::uint32_t OTG_HCTSIZ14_DPID_B_0x2 = 2;
        /** @brief SETUP (control) / MDATA (non-control) */
    constexpr std::uint32_t OTG_HCTSIZ14_DPID_B_0x3 = 3;

    /** @brief Do Ping This bit is used only for OUT transfers. Setting this field to 1 directs the host to do PING protocol. Note: Do not set this bit for IN transfers. If this bit is set for IN transfers, it disables the channel. */
    using OTG_HCTSIZ14_DOPNG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 14 DMA address register */
    using OTG_HCDMA14 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6D4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA address This field holds the start address in the external memory from which the data for the endpoint must be fetched or to which it must be stored. This register is incremented on every AHB transaction. */
    using OTG_HCDMA14_DMAADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 15 characteristics register */
    using OTG_HCCHAR15 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6E0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size Indicates the maximum packet size of the associated endpoint. */
    using OTG_HCCHAR15_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint number Indicates the endpoint number on the device serving as the data source or sink. */
    using OTG_HCCHAR15_EPNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint direction Indicates whether the transaction is IN or OUT. */
    using OTG_HCCHAR15_EPDIR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OUT (value: 0)
     *          - B_0x1: IN (value: 1)
     */
        /** @brief OUT */
    constexpr std::uint32_t OTG_HCCHAR15_EPDIR_B_0x0 = 0;
        /** @brief IN */
    constexpr std::uint32_t OTG_HCCHAR15_EPDIR_B_0x1 = 1;

    /** @brief Low-speed device This field is set by the application to indicate that this channel is communicating to a low-speed device. */
    using OTG_HCCHAR15_LSDEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint type Indicates the transfer type selected. */
    using OTG_HCCHAR15_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_HCCHAR15_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_HCCHAR15_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_HCCHAR15_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_HCCHAR15_EPTYP_B_0x3 = 3;

    /** @brief Multicount This field indicates to the host the number of transactions that must be executed per frame for this periodic endpoint. For non-periodic transfers, this field is not used Note: This field must be set to at least 01. */
    using OTG_HCCHAR15_MCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Reserved. This field yields undefined results (value: 0)
     *          - B_0x1: 1 transaction (value: 1)
     *          - B_0x2: 2 transactions per frame to be issued for this endpoint (value: 2)
     *          - B_0x3: 3 transactions per frame to be issued for this endpoint (value: 3)
     */
        /** @brief Reserved. This field yields undefined results */
    constexpr std::uint32_t OTG_HCCHAR15_MCNT_B_0x0 = 0;
        /** @brief 1 transaction */
    constexpr std::uint32_t OTG_HCCHAR15_MCNT_B_0x1 = 1;
        /** @brief 2 transactions per frame to be issued for this endpoint */
    constexpr std::uint32_t OTG_HCCHAR15_MCNT_B_0x2 = 2;
        /** @brief 3 transactions per frame to be issued for this endpoint */
    constexpr std::uint32_t OTG_HCCHAR15_MCNT_B_0x3 = 3;

    /** @brief Device address This field selects the specific device serving as the data source or sink. */
    using OTG_HCCHAR15_DAD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Odd frame This field is set (reset) by the application to indicate that the OTG host must perform a transfer in an odd frame. This field is applicable for only periodic (isochronous and interrupt) transactions. */
    using OTG_HCCHAR15_ODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Even frame (value: 0)
     *          - B_0x1: Odd frame (value: 1)
     */
        /** @brief Even frame */
    constexpr std::uint32_t OTG_HCCHAR15_ODDFRM_B_0x0 = 0;
        /** @brief Odd frame */
    constexpr std::uint32_t OTG_HCCHAR15_ODDFRM_B_0x1 = 1;

    /** @brief Channel disable The application sets this bit to stop transmitting/receiving data on a channel, even before the transfer for that channel is complete. The application must wait for the Channel disabled interrupt before treating the channel as disabled. */
    using OTG_HCCHAR15_CHDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel enable This field is set by the application and cleared by the OTG host. */
    using OTG_HCCHAR15_CHENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Channel disabled (value: 0)
     *          - B_0x1: Channel enabled (value: 1)
     */
        /** @brief Channel disabled */
    constexpr std::uint32_t OTG_HCCHAR15_CHENA_B_0x0 = 0;
        /** @brief Channel enabled */
    constexpr std::uint32_t OTG_HCCHAR15_CHENA_B_0x1 = 1;

    /** @brief OTG host channel 15 split control register */
    using OTG_HCSPLT15 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6E4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port address This field is the port number of the recipient transaction translator. */
    using OTG_HCSPLT15_PRTADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hub address This field holds the device address of the transaction translators hub. */
    using OTG_HCSPLT15_HUBADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction position This field is used to determine whether to send all, first, middle, or last payloads with each OUT transaction. */
    using OTG_HCSPLT15_XACTPOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x3: All. This is the entire data payload of this transaction (which is less than or equal to 188 bytes) (value: 3)
     *          - B_0x2: Begin. This is the first data payload of this transaction (which is larger than 188 bytes) (value: 2)
     *          - B_0x0: Mid. This is the middle payload of this transaction (which is larger than 188 bytes) (value: 0)
     *          - B_0x1: End. This is the last payload of this transaction (which is larger than 188 bytes) (value: 1)
     */
        /** @brief All. This is the entire data payload of this transaction (which is less than or equal to 188 bytes) */
    constexpr std::uint32_t OTG_HCSPLT15_XACTPOS_B_0x3 = 3;
        /** @brief Begin. This is the first data payload of this transaction (which is larger than 188 bytes) */
    constexpr std::uint32_t OTG_HCSPLT15_XACTPOS_B_0x2 = 2;
        /** @brief Mid. This is the middle payload of this transaction (which is larger than 188 bytes) */
    constexpr std::uint32_t OTG_HCSPLT15_XACTPOS_B_0x0 = 0;
        /** @brief End. This is the last payload of this transaction (which is larger than 188 bytes) */
    constexpr std::uint32_t OTG_HCSPLT15_XACTPOS_B_0x1 = 1;

    /** @brief Do complete split The application sets this bit to request the OTG host to perform a complete split transaction. */
    using OTG_HCSPLT15_COMPLSPLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Split enable The application sets this bit to indicate that this channel is enabled to perform split transactions. */
    using OTG_HCSPLT15_SPLITEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 15 interrupt register */
    using OTG_HCINT15 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6E8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed. Transfer completed normally without any errors. */
    using OTG_HCINT15_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel halted. Indicates the transfer completed abnormally either because of any USB transaction error or in response to disable request by the application. */
    using OTG_HCINT15_CHH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error This error is generated only in Internal DMA mode when an AHB error occurs during an AHB read/write operation. The application can read the corresponding DMA channel address register to get the error address. */
    using OTG_HCINT15_AHBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL response received interrupt. */
    using OTG_HCINT15_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK response received interrupt. */
    using OTG_HCINT15_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACK response received/transmitted interrupt. */
    using OTG_HCINT15_ACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Not yet ready response received interrupt. */
    using OTG_HCINT15_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transaction error. Indicates one of the following errors occurred on the USB. CRC check failure Timeout Bit stuff error False EOP */
    using OTG_HCINT15_TXERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Babble error. */
    using OTG_HCINT15_BBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame overrun. */
    using OTG_HCINT15_FRMOR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data toggle error. */
    using OTG_HCINT15_DTERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 15 interrupt mask register */
    using OTG_HCINTMSK15 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6EC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed mask */
    using OTG_HCINTMSK15_XFRCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK15_XFRCM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK15_XFRCM_B_0x1 = 1;

    /** @brief Channel halted mask */
    using OTG_HCINTMSK15_CHHM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK15_CHHM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK15_CHHM_B_0x1 = 1;

    /** @brief AHB error. */
    using OTG_HCINTMSK15_AHBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK15_AHBERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK15_AHBERRM_B_0x1 = 1;

    /** @brief STALL response received interrupt mask. */
    using OTG_HCINTMSK15_STALLM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK15_STALLM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK15_STALLM_B_0x1 = 1;

    /** @brief NAK response received interrupt mask. */
    using OTG_HCINTMSK15_NAKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK15_NAKM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK15_NAKM_B_0x1 = 1;

    /** @brief ACK response received/transmitted interrupt mask. */
    using OTG_HCINTMSK15_ACKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK15_ACKM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK15_ACKM_B_0x1 = 1;

    /** @brief response received interrupt mask. */
    using OTG_HCINTMSK15_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK15_NYET_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK15_NYET_B_0x1 = 1;

    /** @brief Transaction error mask. */
    using OTG_HCINTMSK15_TXERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK15_TXERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK15_TXERRM_B_0x1 = 1;

    /** @brief Babble error mask. */
    using OTG_HCINTMSK15_BBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK15_BBERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK15_BBERRM_B_0x1 = 1;

    /** @brief Frame overrun mask. */
    using OTG_HCINTMSK15_FRMORM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK15_FRMORM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK15_FRMORM_B_0x1 = 1;

    /** @brief Data toggle error mask. */
    using OTG_HCINTMSK15_DTERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK15_DTERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HCINTMSK15_DTERRM_B_0x1 = 1;

    /** @brief OTG host channel 15 transfer size register */
    using OTG_HCTSIZ15 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6F0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size For an OUT, this field is the number of data bytes the host sends during the transfer. For an IN, this field is the buffer size that the application has reserved for the transfer. The application is expected to program this field as an integer multiple of the maximum packet size for IN transactions (periodic and non-periodic). */
    using OTG_HCTSIZ15_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count This field is programmed by the application with the expected number of packets to be transmitted (OUT) or received (IN). The host decrements this count on every successful transmission or reception of an OUT/IN packet. Once this count reaches zero, the application is interrupted to indicate normal completion. */
    using OTG_HCTSIZ15_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data PID The application programs this field with the type of PID to use for the initial transaction. The host maintains this field for the rest of the transfer. */
    using OTG_HCTSIZ15_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATA0 (value: 0)
     *          - B_0x1: DATA2 (value: 1)
     *          - B_0x2: DATA1 (value: 2)
     *          - B_0x3: SETUP (control) / MDATA (non-control) (value: 3)
     */
        /** @brief DATA0 */
    constexpr std::uint32_t OTG_HCTSIZ15_DPID_B_0x0 = 0;
        /** @brief DATA2 */
    constexpr std::uint32_t OTG_HCTSIZ15_DPID_B_0x1 = 1;
        /** @brief DATA1 */
    constexpr std::uint32_t OTG_HCTSIZ15_DPID_B_0x2 = 2;
        /** @brief SETUP (control) / MDATA (non-control) */
    constexpr std::uint32_t OTG_HCTSIZ15_DPID_B_0x3 = 3;

    /** @brief Do Ping This bit is used only for OUT transfers. Setting this field to 1 directs the host to do PING protocol. Note: Do not set this bit for IN transfers. If this bit is set for IN transfers, it disables the channel. */
    using OTG_HCTSIZ15_DOPNG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG host channel 15 DMA address register */
    using OTG_HCDMA15 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6F4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA address This field holds the start address in the external memory from which the data for the endpoint must be fetched or to which it must be stored. This register is incremented on every AHB transaction. */
    using OTG_HCDMA15_DMAADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device configuration register */
    using OTG_DCFG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x800, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Device speed Indicates the speed at which the application requires the core to enumerate, or the maximum speed the application can support. However, the actual bus speed is determined only after the chirp sequence is completed, and is based on the speed of the USB host to which the core is connected. */
    using OTG_DCFG_DSPD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: High speed (value: 0)
     *          - B_0x1: Full speed (value: 1)
     *          - B_0x2: FIELD Reserved (value: 2)
     *          - B_0x3: FIELD Reserved (value: 3)
     */
        /** @brief High speed */
    constexpr std::uint32_t OTG_DCFG_DSPD_B_0x0 = 0;
        /** @brief Full speed */
    constexpr std::uint32_t OTG_DCFG_DSPD_B_0x1 = 1;
        /** @brief FIELD Reserved */
    constexpr std::uint32_t OTG_DCFG_DSPD_B_0x2 = 2;
        /** @brief FIELD Reserved */
    constexpr std::uint32_t OTG_DCFG_DSPD_B_0x3 = 3;

    /** @brief Non-zero-length status OUT handshake The application can use this field to select the handshake the core sends on receiving a nonzero-length data packet during the OUT transaction of a control transfers status stage. */
    using OTG_DCFG_NZLSOHSK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Send a STALL handshake on a nonzero-length status OUT transaction and do not send the received OUT packet to the application. (value: 1)
     *          - B_0x0: Send the received OUT packet to the application (zero-length or nonzero-length) and send a handshake based on the NAK and STALL bits for the endpoint in the device endpoint control register. (value: 0)
     */
        /** @brief Send a STALL handshake on a nonzero-length status OUT transaction and do not send the received OUT packet to the application. */
    constexpr std::uint32_t OTG_DCFG_NZLSOHSK_B_0x1 = 1;
        /** @brief Send the received OUT packet to the application (zero-length or nonzero-length) and send a handshake based on the NAK and STALL bits for the endpoint in the device endpoint control register. */
    constexpr std::uint32_t OTG_DCFG_NZLSOHSK_B_0x0 = 0;

    /** @brief Device address The application must program this field after every SetAddress control command. */
    using OTG_DCFG_DAD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Periodic frame interval Indicates the time within a frame at which the application must be notified using the end of periodic frame interrupt. This can be used to determine if all the isochronous traffic for that frame is complete. */
    using OTG_DCFG_PFIVL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 80% of the frame interval (value: 0)
     *          - B_0x1: 85% of the frame interval (value: 1)
     *          - B_0x2: 90% of the frame interval (value: 2)
     *          - B_0x3: 95% of the frame interval (value: 3)
     */
        /** @brief 80% of the frame interval */
    constexpr std::uint32_t OTG_DCFG_PFIVL_B_0x0 = 0;
        /** @brief 85% of the frame interval */
    constexpr std::uint32_t OTG_DCFG_PFIVL_B_0x1 = 1;
        /** @brief 90% of the frame interval */
    constexpr std::uint32_t OTG_DCFG_PFIVL_B_0x2 = 2;
        /** @brief 95% of the frame interval */
    constexpr std::uint32_t OTG_DCFG_PFIVL_B_0x3 = 3;

    /** @brief Erratic error interrupt mask */
    using OTG_DCFG_ERRATIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Mask early suspend interrupt on erratic error (value: 1)
     *          - B_0x0: Early suspend interrupt is generated on erratic error (value: 0)
     */
        /** @brief Mask early suspend interrupt on erratic error */
    constexpr std::uint32_t OTG_DCFG_ERRATIM_B_0x1 = 1;
        /** @brief Early suspend interrupt is generated on erratic error */
    constexpr std::uint32_t OTG_DCFG_ERRATIM_B_0x0 = 0;

    /** @brief Periodic schedule interval This field specifies the amount of time the Internal DMA engine must allocate for fetching periodic IN endpoint data. Based on the number of periodic endpoints, this value must be specified as 25, 50 or 75% of the (micro) frame. When any periodic endpoints are active, the internal DMA engine allocates the specified amount of time in fetching periodic IN endpoint data When no periodic endpoint is active, then the internal DMA engine services nonperiodic endpoints, ignoring this field After the specified time within a (micro) frame, the DMA switches to fetching nonperiodic endpoints */
    using OTG_DCFG_PERSCHIVL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 25% of (micro)frame (value: 0)
     *          - B_0x1: 50% of (micro)frame (value: 1)
     *          - B_0x2: 75% of (micro)frame (value: 2)
     *          - B_0x3: FIELD Reserved (value: 3)
     */
        /** @brief 25% of (micro)frame */
    constexpr std::uint32_t OTG_DCFG_PERSCHIVL_B_0x0 = 0;
        /** @brief 50% of (micro)frame */
    constexpr std::uint32_t OTG_DCFG_PERSCHIVL_B_0x1 = 1;
        /** @brief 75% of (micro)frame */
    constexpr std::uint32_t OTG_DCFG_PERSCHIVL_B_0x2 = 2;
        /** @brief FIELD Reserved */
    constexpr std::uint32_t OTG_DCFG_PERSCHIVL_B_0x3 = 3;

    /** @brief OTG device control register */
    using OTG_DCTL = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x804, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Remote wakeup signaling When the application sets this bit, the core initiates remote signaling to wake up the USB host. The application must set this bit to instruct the core to exit the suspend state. As specified in the USB 2.0 specification, the application must clear this bit 1 ms to 15 ms after setting it. If LPM is enabled and the core is in the L1 (sleep) state, when the application sets this bit, the core initiates L1 remote signaling to wake up the USB host. The application must set this bit to instruct the core to exit the sleep state. As specified in the LPM specification, the hardware automatically clears this bit 50 s (T<sub>L1DevDrvResume</sub>) after being set by the application. The application must not set this bit when bRemoteWake from the previous LPM transaction is zero (refer to REMWAKE bit in GLPMCFG register). */
    using OTG_DCTL_RWUSIG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Soft disconnect The application uses this bit to signal the USB OTG core to perform a soft disconnect. As long as this bit is set, the host does not see that the device is connected, and the device does not receive signals on the USB. The core stays in the disconnected state until the application clears this bit. */
    using OTG_DCTL_SDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation. When this bit is cleared after a soft disconnect, the core generates a device connect event to the USB host. When the device is reconnected, the USB host restarts device enumeration. (value: 0)
     *          - B_0x1: The core generates a device disconnect event to the USB host. (value: 1)
     */
        /** @brief Normal operation. When this bit is cleared after a soft disconnect, the core generates a device connect event to the USB host. When the device is reconnected, the USB host restarts device enumeration. */
    constexpr std::uint32_t OTG_DCTL_SDIS_B_0x0 = 0;
        /** @brief The core generates a device disconnect event to the USB host. */
    constexpr std::uint32_t OTG_DCTL_SDIS_B_0x1 = 1;

    /** @brief Global IN NAK status */
    using OTG_DCTL_GINSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: A handshake is sent out based on the data availability in the transmit FIFO. (value: 0)
     *          - B_0x1: A NAK handshake is sent out on all non-periodic IN endpoints, irrespective of the data availability in the transmit FIFO. (value: 1)
     */
        /** @brief A handshake is sent out based on the data availability in the transmit FIFO. */
    constexpr std::uint32_t OTG_DCTL_GINSTS_B_0x0 = 0;
        /** @brief A NAK handshake is sent out on all non-periodic IN endpoints, irrespective of the data availability in the transmit FIFO. */
    constexpr std::uint32_t OTG_DCTL_GINSTS_B_0x1 = 1;

    /** @brief Global OUT NAK status */
    using OTG_DCTL_GONSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: A handshake is sent based on the FIFO status and the NAK and STALL bit settings. (value: 0)
     *          - B_0x1: No data is written to the Rx FIFO, irrespective of space availability. Sends a NAK handshake on all packets, except on SETUP transactions. All isochronous OUT packets are dropped. (value: 1)
     */
        /** @brief A handshake is sent based on the FIFO status and the NAK and STALL bit settings. */
    constexpr std::uint32_t OTG_DCTL_GONSTS_B_0x0 = 0;
        /** @brief No data is written to the Rx FIFO, irrespective of space availability. Sends a NAK handshake on all packets, except on SETUP transactions. All isochronous OUT packets are dropped. */
    constexpr std::uint32_t OTG_DCTL_GONSTS_B_0x1 = 1;

    /** @brief Test control Others: Reserved */
    using OTG_DCTL_TCTL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Test mode disabled (value: 0)
     *          - B_0x1: Test_J mode (value: 1)
     *          - B_0x2: Test_K mode (value: 2)
     *          - B_0x3: Test_SE0_NAK mode (value: 3)
     *          - B_0x4: Test_Packet mode (value: 4)
     *          - B_0x5: Test_Force_Enable (value: 5)
     */
        /** @brief Test mode disabled */
    constexpr std::uint32_t OTG_DCTL_TCTL_B_0x0 = 0;
        /** @brief Test_J mode */
    constexpr std::uint32_t OTG_DCTL_TCTL_B_0x1 = 1;
        /** @brief Test_K mode */
    constexpr std::uint32_t OTG_DCTL_TCTL_B_0x2 = 2;
        /** @brief Test_SE0_NAK mode */
    constexpr std::uint32_t OTG_DCTL_TCTL_B_0x3 = 3;
        /** @brief Test_Packet mode */
    constexpr std::uint32_t OTG_DCTL_TCTL_B_0x4 = 4;
        /** @brief Test_Force_Enable */
    constexpr std::uint32_t OTG_DCTL_TCTL_B_0x5 = 5;

    /** @brief Set global IN NAK Writing 1 to this field sets the Global non-periodic IN NAK.The application uses this bit to send a NAK handshake on all non-periodic IN endpoints. The application must set this bit only after making sure that the Global IN NAK effective bit in the core interrupt register (GINAKEFF bit in OTG_GINTSTS) is cleared. */
    using OTG_DCTL_SGINAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear global IN NAK Writing 1 to this field clears the Global IN NAK. */
    using OTG_DCTL_CGINAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set global OUT NAK Writing 1 to this field sets the Global OUT NAK. The application uses this bit to send a NAK handshake on all OUT endpoints. The application must set the this bit only after making sure that the Global OUT NAK effective bit in the core interrupt register (GONAKEFF bit in OTG_GINTSTS) is cleared. */
    using OTG_DCTL_SGONAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear global OUT NAK Writing 1 to this field clears the Global OUT NAK. */
    using OTG_DCTL_CGONAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Power-on programming done The application uses this bit to indicate that register programming is completed after a wakeup from power down mode. */
    using OTG_DCTL_POPRGDNE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Deep sleep BESL reject Core rejects LPM request with BESL value greater than BESL threshold programmed. NYET response is sent for LPM tokens with BESL value greater than BESL threshold. By default, the deep sleep BESL reject feature is disabled. */
    using OTG_DCTL_DSBESLRJCT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device status register */
    using OTG_DSTS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x808, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Suspend status In device mode, this bit is set as long as a suspend condition is detected on the USB. The core enters the suspended state when there is no activity on the USB data lines for a period of 3 ms. The core comes out of the suspend: When there is an activity on the USB data lines When the application writes to the remote wakeup signaling bit in the OTG_DCTL register (RWUSIG bit in OTG_DCTL). */
    using OTG_DSTS_SUSPSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enumerated speed Indicates the speed at which the OTG_HS controller has come up after speed detection through a chirp sequence. Others: reserved */
    using OTG_DSTS_ENUMSPD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: High Speed (value: 0)
     *          - B_0x1: Full Speed (value: 1)
     *          - B_0x3: FIELD Reserved (value: 3)
     */
        /** @brief High Speed */
    constexpr std::uint32_t OTG_DSTS_ENUMSPD_B_0x0 = 0;
        /** @brief Full Speed */
    constexpr std::uint32_t OTG_DSTS_ENUMSPD_B_0x1 = 1;
        /** @brief FIELD Reserved */
    constexpr std::uint32_t OTG_DSTS_ENUMSPD_B_0x3 = 3;

    /** @brief Erratic error The core sets this bit to report any erratic errors. Due to erratic errors, the OTG_HS controller goes into suspended state and an interrupt is generated to the application with Early suspend bit of the OTG_GINTSTS register (ESUSP bit in OTG_GINTSTS). If the early suspend is asserted due to an erratic error, the application can only perform a soft disconnect recover. */
    using OTG_DSTS_EERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame number of the received SOF */
    using OTG_DSTS_FNSOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Device line status Indicates the current logic level USB data lines. Bit [23]: Logic level of D+ Bit [22]: Logic level of D- */
    using OTG_DSTS_DEVLNSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint common interrupt mask register */
    using OTG_DIEPMSK = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x810, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed interrupt mask */
    using OTG_DIEPMSK_XFRCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_DIEPMSK_XFRCM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_DIEPMSK_XFRCM_B_0x1 = 1;

    /** @brief Endpoint disabled interrupt mask */
    using OTG_DIEPMSK_EPDM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_DIEPMSK_EPDM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_DIEPMSK_EPDM_B_0x1 = 1;

    /** @brief AHB error mask */
    using OTG_DIEPMSK_AHBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_DIEPMSK_AHBERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_DIEPMSK_AHBERRM_B_0x1 = 1;

    /** @brief Timeout condition mask (Non-isochronous endpoints) */
    using OTG_DIEPMSK_TOM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_DIEPMSK_TOM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_DIEPMSK_TOM_B_0x1 = 1;

    /** @brief IN token received when Tx FIFO empty mask */
    using OTG_DIEPMSK_ITTXFEMSK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_DIEPMSK_ITTXFEMSK_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_DIEPMSK_ITTXFEMSK_B_0x1 = 1;

    /** @brief IN token received with EP mismatch mask */
    using OTG_DIEPMSK_INEPNMM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_DIEPMSK_INEPNMM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_DIEPMSK_INEPNMM_B_0x1 = 1;

    /** @brief IN endpoint NAK effective mask */
    using OTG_DIEPMSK_INEPNEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_DIEPMSK_INEPNEM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_DIEPMSK_INEPNEM_B_0x1 = 1;

    /** @brief FIFO underrun mask */
    using OTG_DIEPMSK_TXFURM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_DIEPMSK_TXFURM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_DIEPMSK_TXFURM_B_0x1 = 1;

    /** @brief NAK interrupt mask */
    using OTG_DIEPMSK_NAKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_DIEPMSK_NAKM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_DIEPMSK_NAKM_B_0x1 = 1;

    /** @brief OTG device OUT endpoint common interrupt mask register */
    using OTG_DOEPMSK = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x814, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed interrupt mask */
    using OTG_DOEPMSK_XFRCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_DOEPMSK_XFRCM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_DOEPMSK_XFRCM_B_0x1 = 1;

    /** @brief Endpoint disabled interrupt mask */
    using OTG_DOEPMSK_EPDM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_DOEPMSK_EPDM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_DOEPMSK_EPDM_B_0x1 = 1;

    /** @brief AHB error mask */
    using OTG_DOEPMSK_AHBERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_DOEPMSK_AHBERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_DOEPMSK_AHBERRM_B_0x1 = 1;

    /** @brief STUPM: SETUP phase done mask. Applies to control endpoints only. */
    using OTG_DOEPMSK_STUPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_DOEPMSK_STUPM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_DOEPMSK_STUPM_B_0x1 = 1;

    /** @brief OUT token received when endpoint disabled mask. Applies to control OUT endpoints only. */
    using OTG_DOEPMSK_OTEPDM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_DOEPMSK_OTEPDM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_DOEPMSK_OTEPDM_B_0x1 = 1;

    /** @brief Status phase received for control write mask */
    using OTG_DOEPMSK_STSPHSRXM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_DOEPMSK_STSPHSRXM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_DOEPMSK_STSPHSRXM_B_0x1 = 1;

    /** @brief Back-to-back SETUP packets received mask Applies to control OUT endpoints only. */
    using OTG_DOEPMSK_B2BSTUPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_DOEPMSK_B2BSTUPM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_DOEPMSK_B2BSTUPM_B_0x1 = 1;

    /** @brief Out packet error mask */
    using OTG_DOEPMSK_OUTPKTERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_DOEPMSK_OUTPKTERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_DOEPMSK_OUTPKTERRM_B_0x1 = 1;

    /** @brief Babble error interrupt mask */
    using OTG_DOEPMSK_BERRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_DOEPMSK_BERRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_DOEPMSK_BERRM_B_0x1 = 1;

    /** @brief NAK interrupt mask */
    using OTG_DOEPMSK_NAKMSK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_DOEPMSK_NAKMSK_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_DOEPMSK_NAKMSK_B_0x1 = 1;

    /** @brief NYET interrupt mask */
    using OTG_DOEPMSK_NYETMSK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_DOEPMSK_NYETMSK_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_DOEPMSK_NYETMSK_B_0x1 = 1;

    /** @brief OTG device all endpoints interrupt register */
    using OTG_DAINT = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x818, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint interrupt bits One bit per IN endpoint: Bit 0 for IN endpoint 0, bit 3 for endpoint 3. */
    using OTG_DAINT_IEPINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OUT endpoint interrupt bits One bit per OUT endpoint: Bit 16 for OUT endpoint 0, bit 19 for OUT endpoint 3. */
    using OTG_DAINT_OEPINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG all endpoints interrupt mask register */
    using OTG_DAINTMSK = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x81C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN EP interrupt mask bits One bit per IN endpoint: Bit 0 for IN EP 0, bit 3 for IN EP 3 */
    using OTG_DAINTMSK_IEPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_DAINTMSK_IEPM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_DAINTMSK_IEPM_B_0x1 = 1;

    /** @brief OUT EP interrupt mask bits One per OUT endpoint: Bit 16 for OUT EP 0, bit 19 for OUT EP 3 */
    using OTG_DAINTMSK_OEPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_DAINTMSK_OEPM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_DAINTMSK_OEPM_B_0x1 = 1;

    /** @brief OTG device threshold control register */
    using OTG_DTHRCTL = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x830, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Nonisochronous IN endpoints threshold enable When this bit is set, the core enables thresholding for nonisochronous IN endpoints. */
    using OTG_DTHRCTL_NONISOTHREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ISO IN endpoint threshold enable When this bit is set, the core enables thresholding for isochronous IN endpoints. */
    using OTG_DTHRCTL_ISOTHREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit threshold length This field specifies the transmit thresholding size in 32-bit words. This field specifies the amount of data in bytes to be in the corresponding endpoint transmit FIFO, before the core can start transmitting on the USB. The threshold length has to be at least eight 32-bit words. This field controls both isochronous and nonisochronous IN endpoint thresholds. The recommended value for TXTHRLEN is to be the same as the programmed AHB burst length (HBSTLEN bit in OTG_GAHBCFG). */
    using OTG_DTHRCTL_TXTHRLEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive threshold enable When this bit is set, the core enables thresholding in the receive direction. */
    using OTG_DTHRCTL_RXTHREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive threshold length This field specifies the receive thresholding size in 32-bit words. This field also specifies the amount of data received on the USB before the core can start transmitting on the AHB. The threshold length has to be at least eight 32-bit words. The recommended value for RXTHRLEN is to be the same as the programmed AHB burst length (HBSTLEN bit in OTG_GAHBCFG). */
    using OTG_DTHRCTL_RXTHRLEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Arbiter parking enable This bit controls internal DMA arbiter parking for IN endpoints. When thresholding is enabled and this bit is set to one, then the arbiter parks on the IN endpoint for which there is a token received on the USB. This is done to avoid getting into underrun conditions. By default parking is enabled. */
    using OTG_DTHRCTL_ARPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint FIFO empty interrupt mask register */
    using OTG_DIEPEMPMSK = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x834, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN EP Tx FIFO empty interrupt mask bits These bits act as mask bits for OTG_DIEPINTx. TXFE interrupt one bit per IN endpoint: Bit 0 for IN endpoint 0, bit 3 for IN endpoint 3 */
    using OTG_DIEPEMPMSK_INEPTXFEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_DIEPEMPMSK_INEPTXFEM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_DIEPEMPMSK_INEPTXFEM_B_0x1 = 1;

    /** @brief OTG device IN endpoint 0 control register */
    using OTG_DIEPCTL0_INT_BULK = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x900, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size The application must program this field with the maximum packet size for the current logical endpoint. This value is in bytes. */
    using OTG_DIEPCTL0_INT_BULK_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB active endpoint Indicates whether this endpoint is active in the current configuration and interface. The core clears this bit for all endpoints (other than EP 0) after detecting a USB reset. After receiving the SetConfiguration and SetInterface commands, the application must program endpoint registers accordingly and set this bit. */
    using OTG_DIEPCTL0_INT_BULK_USBAEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint data PID Applies to interrupt/bulk IN endpoints only. Contains the PID of the packet to be received or transmitted on this endpoint. The application must program the PID of the first packet to be received or transmitted on this endpoint, after the endpoint is activated. The application uses the SD0PID and SD1PID register fields to program either DATA0 or DATA1 PID. */
    using OTG_DIEPCTL0_INT_BULK_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATA0 (value: 0)
     *          - B_0x1: DATA1 (value: 1)
     */
        /** @brief DATA0 */
    constexpr std::uint32_t OTG_DIEPCTL0_INT_BULK_DPID_B_0x0 = 0;
        /** @brief DATA1 */
    constexpr std::uint32_t OTG_DIEPCTL0_INT_BULK_DPID_B_0x1 = 1;

    /** @brief NAK status It indicates the following: When either the application or the core sets this bit: For non-isochronous IN endpoints: The core stops transmitting any data on an IN endpoint, even if there are data available in the Tx FIFO. For isochronous IN endpoints: The core sends out a zero-length data packet, even if there are data available in the Tx FIFO. Irrespective of this bits setting, the core always responds to SETUP data packets with an ACK handshake. */
    using OTG_DIEPCTL0_INT_BULK_NAKSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The core is transmitting non-NAK handshakes based on the FIFO status. (value: 0)
     *          - B_0x1: The core is transmitting NAK handshakes on this endpoint. (value: 1)
     */
        /** @brief The core is transmitting non-NAK handshakes based on the FIFO status. */
    constexpr std::uint32_t OTG_DIEPCTL0_INT_BULK_NAKSTS_B_0x0 = 0;
        /** @brief The core is transmitting NAK handshakes on this endpoint. */
    constexpr std::uint32_t OTG_DIEPCTL0_INT_BULK_NAKSTS_B_0x1 = 1;

    /** @brief Endpoint type This is the transfer type supported by this logical endpoint. */
    using OTG_DIEPCTL0_INT_BULK_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_DIEPCTL0_INT_BULK_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_DIEPCTL0_INT_BULK_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_DIEPCTL0_INT_BULK_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_DIEPCTL0_INT_BULK_EPTYP_B_0x3 = 3;

    /** @brief STALL handshake Applies to non-control, non-isochronous IN endpoints only (access type is rw). The application sets this bit to stall all tokens from the USB host to this endpoint. If a NAK bit, Global IN NAK, or Global OUT NAK is set along with this bit, the STALL bit takes priority. Only the application can clear this bit, never the core. */
    using OTG_DIEPCTL0_INT_BULK_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx FIFO number These bits specify the FIFO number associated with this endpoint. Each active IN endpoint must be programmed to a separate FIFO number. This field is valid only for IN endpoints. */
    using OTG_DIEPCTL0_INT_BULK_TXFNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear NAK A write to this bit clears the NAK bit for the endpoint. */
    using OTG_DIEPCTL0_INT_BULK_CNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set NAK A write to this bit sets the NAK bit for the endpoint. Using this bit, the application can control the transmission of NAK handshakes on an endpoint. The core can also set this bit for OUT endpoints on a transfer completed interrupt, or after a SETUP is received on the endpoint. */
    using OTG_DIEPCTL0_INT_BULK_SNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set DATA0 PID Applies to interrupt/bulk IN endpoints only. Writing to this field sets the endpoint data PID (DPID) field in this register to DATA0. */
    using OTG_DIEPCTL0_INT_BULK_SD0PID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set DATA1 PID Writing to this field sets the endpoint data PID (DPID) field in this register to DATA1. */
    using OTG_DIEPCTL0_INT_BULK_SD1PID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disable The application sets this bit to stop transmitting/receiving data on an endpoint, even before the transfer for that endpoint is complete. The application must wait for the endpoint disabled interrupt before treating the endpoint as disabled. The core clears this bit before setting the endpoint disabled interrupt. The application must set this bit only if endpoint enable is already set for this endpoint. */
    using OTG_DIEPCTL0_INT_BULK_EPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint enable The application sets this bit to start transmitting data on an endpoint. The core clears this bit before setting any of the following interrupts on this endpoint: SETUP phase done Endpoint disabled Transfer completed */
    using OTG_DIEPCTL0_INT_BULK_EPENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint 0 control register */
    using OTG_DIEPCTL0_ISO = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x900, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size The application must program this field with the maximum packet size for the current logical endpoint. This value is in bytes. */
    using OTG_DIEPCTL0_ISO_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB active endpoint Indicates whether this endpoint is active in the current configuration and interface. The core clears this bit for all endpoints (other than EP 0) after detecting a USB reset. After receiving the SetConfiguration and SetInterface commands, the application must program endpoint registers accordingly and set this bit. */
    using OTG_DIEPCTL0_ISO_USBAEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Even/odd frame Applies to isochronous IN endpoints only. Indicates the frame number in which the core transmits/receives isochronous data for this endpoint. The application must program the even/odd frame number in which it intends to transmit/receive isochronous data for this endpoint using the SEVNFRM and SODDFRM fields in this register. */
    using OTG_DIEPCTL0_ISO_EONUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Even frame (value: 0)
     *          - B_0x1: Odd frame (value: 1)
     */
        /** @brief Even frame */
    constexpr std::uint32_t OTG_DIEPCTL0_ISO_EONUM_B_0x0 = 0;
        /** @brief Odd frame */
    constexpr std::uint32_t OTG_DIEPCTL0_ISO_EONUM_B_0x1 = 1;

    /** @brief NAK status It indicates the following: When either the application or the core sets this bit: For non-isochronous IN endpoints: The core stops transmitting any data on an IN endpoint, even if there are data available in the Tx FIFO. For isochronous IN endpoints: The core sends out a zero-length data packet, even if there are data available in the Tx FIFO. Irrespective of this bits setting, the core always responds to SETUP data packets with an ACK handshake. */
    using OTG_DIEPCTL0_ISO_NAKSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The core is transmitting non-NAK handshakes based on the FIFO status. (value: 0)
     *          - B_0x1: The core is transmitting NAK handshakes on this endpoint. (value: 1)
     */
        /** @brief The core is transmitting non-NAK handshakes based on the FIFO status. */
    constexpr std::uint32_t OTG_DIEPCTL0_ISO_NAKSTS_B_0x0 = 0;
        /** @brief The core is transmitting NAK handshakes on this endpoint. */
    constexpr std::uint32_t OTG_DIEPCTL0_ISO_NAKSTS_B_0x1 = 1;

    /** @brief Endpoint type This is the transfer type supported by this logical endpoint. */
    using OTG_DIEPCTL0_ISO_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_DIEPCTL0_ISO_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_DIEPCTL0_ISO_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_DIEPCTL0_ISO_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_DIEPCTL0_ISO_EPTYP_B_0x3 = 3;

    /** @brief STALL handshake Applies to non-control, non-isochronous IN endpoints only (access type is rw). The application sets this bit to stall all tokens from the USB host to this endpoint. If a NAK bit, Global IN NAK, or Global OUT NAK is set along with this bit, the STALL bit takes priority. Only the application can clear this bit, never the core. */
    using OTG_DIEPCTL0_ISO_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx FIFO number These bits specify the FIFO number associated with this endpoint. Each active IN endpoint must be programmed to a separate FIFO number. This field is valid only for IN endpoints. */
    using OTG_DIEPCTL0_ISO_TXFNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear NAK A write to this bit clears the NAK bit for the endpoint. */
    using OTG_DIEPCTL0_ISO_CNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set NAK A write to this bit sets the NAK bit for the endpoint. Using this bit, the application can control the transmission of NAK handshakes on an endpoint. The core can also set this bit for OUT endpoints on a transfer completed interrupt, or after a SETUP is received on the endpoint. */
    using OTG_DIEPCTL0_ISO_SNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set even frame Applies to isochronous IN endpoints only. Writing to this field sets the Even/Odd frame (EONUM) field to even frame. */
    using OTG_DIEPCTL0_ISO_SEVNFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set odd frame Applies to isochronous IN and OUT endpoints only. Writing to this field sets the Even/Odd frame (EONUM) field to odd frame. */
    using OTG_DIEPCTL0_ISO_SODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disable The application sets this bit to stop transmitting/receiving data on an endpoint, even before the transfer for that endpoint is complete. The application must wait for the endpoint disabled interrupt before treating the endpoint as disabled. The core clears this bit before setting the endpoint disabled interrupt. The application must set this bit only if endpoint enable is already set for this endpoint. */
    using OTG_DIEPCTL0_ISO_EPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint enable The application sets this bit to start transmitting data on an endpoint. The core clears this bit before setting any of the following interrupts on this endpoint: SETUP phase done Endpoint disabled Transfer completed */
    using OTG_DIEPCTL0_ISO_EPENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint 0 interrupt register */
    using OTG_DIEPINT0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x908, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed interrupt This field indicates that the programmed transfer is complete on the AHB as well as on the USB, for this endpoint. */
    using OTG_DIEPINT0_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disabled interrupt This bit indicates that the endpoint is disabled per the applications request. */
    using OTG_DIEPINT0_EPDISD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error This is generated only in internal DMA mode when there is an AHB error during an AHB read/write. The application can read the corresponding endpoint DMA address register to get the error address. */
    using OTG_DIEPINT0_AHBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timeout condition Indicates that the core has detected a timeout condition on the USB for the last IN token on this endpoint. */
    using OTG_DIEPINT0_TOC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN token received when Tx FIFO is empty Indicates that an IN token was received when the associated Tx FIFO (periodic/non-periodic) was empty. This interrupt is asserted on the endpoint for which the IN token was received. */
    using OTG_DIEPINT0_ITTXFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN token received with EP mismatch Indicates that the data in the top of the non-periodic TxFIFO belongs to an endpoint other than the one for which the IN token was received. This interrupt is asserted on the endpoint for which the IN token was received. */
    using OTG_DIEPINT0_INEPNM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint NAK effective This bit can be cleared when the application clears the IN endpoint NAK by writing to the CNAK bit in OTG_DIEPCTLx. This interrupt indicates that the core has sampled the NAK bit set (either by the application or by the core). The interrupt indicates that the IN endpoint NAK bit set by the application has taken effect in the core. This interrupt does not guarantee that a NAK handshake is sent on the USB. A STALL bit takes priority over a NAK bit. */
    using OTG_DIEPINT0_INEPNE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit FIFO empty This interrupt is asserted when the Tx FIFO for this endpoint is either half or completely empty. The half or completely empty status is determined by the Tx FIFO Empty Level bit in the OTG_GAHBCFG register (TXFELVL bit in OTG_GAHBCFG). */
    using OTG_DIEPINT0_TXFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Fifo Underrun (TxfifoUndrn) The core generates this interrupt when it detects a transmit FIFO underrun condition for this endpoint. Dependency: This interrupt is valid only when Thresholding is enabled */
    using OTG_DIEPINT0_TXFIFOUDRN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet dropped status This bit indicates to the application that an ISOC OUT packet has been dropped. This bit does not have an associated mask bit and does not generate an interrupt. */
    using OTG_DIEPINT0_PKTDRPSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK input The core generates this interrupt when a NAK is transmitted or received by the device. In case of isochronous IN endpoints the interrupt gets generated when a zero length packet is transmitted due to unavailability of data in the Tx FIFO. */
    using OTG_DIEPINT0_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint 0 transfer size register */
    using OTG_DIEPTSIZ0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x910, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size Indicates the transfer size in bytes for endpoint 0. The core interrupts the application only after it has exhausted the transfer size amount of data. The transfer size can be set to the maximum packet size of the endpoint, to be interrupted at the end of each packet. The core decrements this field every time a packet from the external memory is written to the Tx FIFO. */
    using OTG_DIEPTSIZ0_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count Indicates the total number of USB packets that constitute the transfer size amount of data for endpoint 0. This field is decremented every time a packet (maximum size or short packet) is read from the Tx FIFO. */
    using OTG_DIEPTSIZ0_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint 0 DMA address register */
    using OTG_DIEPDMA0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x914, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA Address This field holds the start address in the external memory from which the data for the endpoint must be fetched. This register is incremented on every AHB transaction. */
    using OTG_DIEPDMA0_DMAADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint transmit FIFO status register */
    using OTG_DTXFSTS0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x918, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint Tx FIFO space available Indicates the amount of free space available in the endpoint Tx FIFO. Values are in terms of 32-bit words: 0xn: n words available Others: Reserved */
    using OTG_DTXFSTS0_INEPTFSAV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Endpoint Tx FIFO is full (value: 0)
     *          - B_0x1: 1 word available (value: 1)
     *          - B_0x2: 2 words available (value: 2)
     */
        /** @brief Endpoint Tx FIFO is full */
    constexpr std::uint32_t OTG_DTXFSTS0_INEPTFSAV_B_0x0 = 0;
        /** @brief 1 word available */
    constexpr std::uint32_t OTG_DTXFSTS0_INEPTFSAV_B_0x1 = 1;
        /** @brief 2 words available */
    constexpr std::uint32_t OTG_DTXFSTS0_INEPTFSAV_B_0x2 = 2;

    /** @brief OTG device IN endpoint 1 control register */
    using OTG_DIEPCTL1_INT_BULK = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x920, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size The application must program this field with the maximum packet size for the current logical endpoint. This value is in bytes. */
    using OTG_DIEPCTL1_INT_BULK_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB active endpoint Indicates whether this endpoint is active in the current configuration and interface. The core clears this bit for all endpoints (other than EP 0) after detecting a USB reset. After receiving the SetConfiguration and SetInterface commands, the application must program endpoint registers accordingly and set this bit. */
    using OTG_DIEPCTL1_INT_BULK_USBAEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint data PID Applies to interrupt/bulk IN endpoints only. Contains the PID of the packet to be received or transmitted on this endpoint. The application must program the PID of the first packet to be received or transmitted on this endpoint, after the endpoint is activated. The application uses the SD0PID and SD1PID register fields to program either DATA0 or DATA1 PID. */
    using OTG_DIEPCTL1_INT_BULK_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATA0 (value: 0)
     *          - B_0x1: DATA1 (value: 1)
     */
        /** @brief DATA0 */
    constexpr std::uint32_t OTG_DIEPCTL1_INT_BULK_DPID_B_0x0 = 0;
        /** @brief DATA1 */
    constexpr std::uint32_t OTG_DIEPCTL1_INT_BULK_DPID_B_0x1 = 1;

    /** @brief NAK status It indicates the following: When either the application or the core sets this bit: For non-isochronous IN endpoints: The core stops transmitting any data on an IN endpoint, even if there are data available in the Tx FIFO. For isochronous IN endpoints: The core sends out a zero-length data packet, even if there are data available in the Tx FIFO. Irrespective of this bits setting, the core always responds to SETUP data packets with an ACK handshake. */
    using OTG_DIEPCTL1_INT_BULK_NAKSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The core is transmitting non-NAK handshakes based on the FIFO status. (value: 0)
     *          - B_0x1: The core is transmitting NAK handshakes on this endpoint. (value: 1)
     */
        /** @brief The core is transmitting non-NAK handshakes based on the FIFO status. */
    constexpr std::uint32_t OTG_DIEPCTL1_INT_BULK_NAKSTS_B_0x0 = 0;
        /** @brief The core is transmitting NAK handshakes on this endpoint. */
    constexpr std::uint32_t OTG_DIEPCTL1_INT_BULK_NAKSTS_B_0x1 = 1;

    /** @brief Endpoint type This is the transfer type supported by this logical endpoint. */
    using OTG_DIEPCTL1_INT_BULK_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_DIEPCTL1_INT_BULK_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_DIEPCTL1_INT_BULK_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_DIEPCTL1_INT_BULK_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_DIEPCTL1_INT_BULK_EPTYP_B_0x3 = 3;

    /** @brief STALL handshake Applies to non-control, non-isochronous IN endpoints only (access type is rw). The application sets this bit to stall all tokens from the USB host to this endpoint. If a NAK bit, Global IN NAK, or Global OUT NAK is set along with this bit, the STALL bit takes priority. Only the application can clear this bit, never the core. */
    using OTG_DIEPCTL1_INT_BULK_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx FIFO number These bits specify the FIFO number associated with this endpoint. Each active IN endpoint must be programmed to a separate FIFO number. This field is valid only for IN endpoints. */
    using OTG_DIEPCTL1_INT_BULK_TXFNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear NAK A write to this bit clears the NAK bit for the endpoint. */
    using OTG_DIEPCTL1_INT_BULK_CNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set NAK A write to this bit sets the NAK bit for the endpoint. Using this bit, the application can control the transmission of NAK handshakes on an endpoint. The core can also set this bit for OUT endpoints on a transfer completed interrupt, or after a SETUP is received on the endpoint. */
    using OTG_DIEPCTL1_INT_BULK_SNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set DATA0 PID Applies to interrupt/bulk IN endpoints only. Writing to this field sets the endpoint data PID (DPID) field in this register to DATA0. */
    using OTG_DIEPCTL1_INT_BULK_SD0PID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set DATA1 PID Writing to this field sets the endpoint data PID (DPID) field in this register to DATA1. */
    using OTG_DIEPCTL1_INT_BULK_SD1PID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disable The application sets this bit to stop transmitting/receiving data on an endpoint, even before the transfer for that endpoint is complete. The application must wait for the endpoint disabled interrupt before treating the endpoint as disabled. The core clears this bit before setting the endpoint disabled interrupt. The application must set this bit only if endpoint enable is already set for this endpoint. */
    using OTG_DIEPCTL1_INT_BULK_EPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint enable The application sets this bit to start transmitting data on an endpoint. The core clears this bit before setting any of the following interrupts on this endpoint: SETUP phase done Endpoint disabled Transfer completed */
    using OTG_DIEPCTL1_INT_BULK_EPENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint 1 control register */
    using OTG_DIEPCTL1_ISO = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x920, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size The application must program this field with the maximum packet size for the current logical endpoint. This value is in bytes. */
    using OTG_DIEPCTL1_ISO_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB active endpoint Indicates whether this endpoint is active in the current configuration and interface. The core clears this bit for all endpoints (other than EP 0) after detecting a USB reset. After receiving the SetConfiguration and SetInterface commands, the application must program endpoint registers accordingly and set this bit. */
    using OTG_DIEPCTL1_ISO_USBAEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Even/odd frame Applies to isochronous IN endpoints only. Indicates the frame number in which the core transmits/receives isochronous data for this endpoint. The application must program the even/odd frame number in which it intends to transmit/receive isochronous data for this endpoint using the SEVNFRM and SODDFRM fields in this register. */
    using OTG_DIEPCTL1_ISO_EONUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Even frame (value: 0)
     *          - B_0x1: Odd frame (value: 1)
     */
        /** @brief Even frame */
    constexpr std::uint32_t OTG_DIEPCTL1_ISO_EONUM_B_0x0 = 0;
        /** @brief Odd frame */
    constexpr std::uint32_t OTG_DIEPCTL1_ISO_EONUM_B_0x1 = 1;

    /** @brief NAK status It indicates the following: When either the application or the core sets this bit: For non-isochronous IN endpoints: The core stops transmitting any data on an IN endpoint, even if there are data available in the Tx FIFO. For isochronous IN endpoints: The core sends out a zero-length data packet, even if there are data available in the Tx FIFO. Irrespective of this bits setting, the core always responds to SETUP data packets with an ACK handshake. */
    using OTG_DIEPCTL1_ISO_NAKSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The core is transmitting non-NAK handshakes based on the FIFO status. (value: 0)
     *          - B_0x1: The core is transmitting NAK handshakes on this endpoint. (value: 1)
     */
        /** @brief The core is transmitting non-NAK handshakes based on the FIFO status. */
    constexpr std::uint32_t OTG_DIEPCTL1_ISO_NAKSTS_B_0x0 = 0;
        /** @brief The core is transmitting NAK handshakes on this endpoint. */
    constexpr std::uint32_t OTG_DIEPCTL1_ISO_NAKSTS_B_0x1 = 1;

    /** @brief Endpoint type This is the transfer type supported by this logical endpoint. */
    using OTG_DIEPCTL1_ISO_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_DIEPCTL1_ISO_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_DIEPCTL1_ISO_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_DIEPCTL1_ISO_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_DIEPCTL1_ISO_EPTYP_B_0x3 = 3;

    /** @brief STALL handshake Applies to non-control, non-isochronous IN endpoints only (access type is rw). The application sets this bit to stall all tokens from the USB host to this endpoint. If a NAK bit, Global IN NAK, or Global OUT NAK is set along with this bit, the STALL bit takes priority. Only the application can clear this bit, never the core. */
    using OTG_DIEPCTL1_ISO_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx FIFO number These bits specify the FIFO number associated with this endpoint. Each active IN endpoint must be programmed to a separate FIFO number. This field is valid only for IN endpoints. */
    using OTG_DIEPCTL1_ISO_TXFNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear NAK A write to this bit clears the NAK bit for the endpoint. */
    using OTG_DIEPCTL1_ISO_CNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set NAK A write to this bit sets the NAK bit for the endpoint. Using this bit, the application can control the transmission of NAK handshakes on an endpoint. The core can also set this bit for OUT endpoints on a transfer completed interrupt, or after a SETUP is received on the endpoint. */
    using OTG_DIEPCTL1_ISO_SNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set even frame Applies to isochronous IN endpoints only. Writing to this field sets the Even/Odd frame (EONUM) field to even frame. */
    using OTG_DIEPCTL1_ISO_SEVNFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set odd frame Applies to isochronous IN and OUT endpoints only. Writing to this field sets the Even/Odd frame (EONUM) field to odd frame. */
    using OTG_DIEPCTL1_ISO_SODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disable The application sets this bit to stop transmitting/receiving data on an endpoint, even before the transfer for that endpoint is complete. The application must wait for the endpoint disabled interrupt before treating the endpoint as disabled. The core clears this bit before setting the endpoint disabled interrupt. The application must set this bit only if endpoint enable is already set for this endpoint. */
    using OTG_DIEPCTL1_ISO_EPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint enable The application sets this bit to start transmitting data on an endpoint. The core clears this bit before setting any of the following interrupts on this endpoint: SETUP phase done Endpoint disabled Transfer completed */
    using OTG_DIEPCTL1_ISO_EPENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint 1 interrupt register */
    using OTG_DIEPINT1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x928, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed interrupt This field indicates that the programmed transfer is complete on the AHB as well as on the USB, for this endpoint. */
    using OTG_DIEPINT1_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disabled interrupt This bit indicates that the endpoint is disabled per the applications request. */
    using OTG_DIEPINT1_EPDISD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error This is generated only in internal DMA mode when there is an AHB error during an AHB read/write. The application can read the corresponding endpoint DMA address register to get the error address. */
    using OTG_DIEPINT1_AHBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timeout condition Indicates that the core has detected a timeout condition on the USB for the last IN token on this endpoint. */
    using OTG_DIEPINT1_TOC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN token received when Tx FIFO is empty Indicates that an IN token was received when the associated Tx FIFO (periodic/non-periodic) was empty. This interrupt is asserted on the endpoint for which the IN token was received. */
    using OTG_DIEPINT1_ITTXFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN token received with EP mismatch Indicates that the data in the top of the non-periodic TxFIFO belongs to an endpoint other than the one for which the IN token was received. This interrupt is asserted on the endpoint for which the IN token was received. */
    using OTG_DIEPINT1_INEPNM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint NAK effective This bit can be cleared when the application clears the IN endpoint NAK by writing to the CNAK bit in OTG_DIEPCTLx. This interrupt indicates that the core has sampled the NAK bit set (either by the application or by the core). The interrupt indicates that the IN endpoint NAK bit set by the application has taken effect in the core. This interrupt does not guarantee that a NAK handshake is sent on the USB. A STALL bit takes priority over a NAK bit. */
    using OTG_DIEPINT1_INEPNE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit FIFO empty This interrupt is asserted when the Tx FIFO for this endpoint is either half or completely empty. The half or completely empty status is determined by the Tx FIFO Empty Level bit in the OTG_GAHBCFG register (TXFELVL bit in OTG_GAHBCFG). */
    using OTG_DIEPINT1_TXFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Fifo Underrun (TxfifoUndrn) The core generates this interrupt when it detects a transmit FIFO underrun condition for this endpoint. Dependency: This interrupt is valid only when Thresholding is enabled */
    using OTG_DIEPINT1_TXFIFOUDRN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet dropped status This bit indicates to the application that an ISOC OUT packet has been dropped. This bit does not have an associated mask bit and does not generate an interrupt. */
    using OTG_DIEPINT1_PKTDRPSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK input The core generates this interrupt when a NAK is transmitted or received by the device. In case of isochronous IN endpoints the interrupt gets generated when a zero length packet is transmitted due to unavailability of data in the Tx FIFO. */
    using OTG_DIEPINT1_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint 1 transfer size register */
    using OTG_DIEPTSIZ1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x930, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size This field contains the transfer size in bytes for the current endpoint. The core only interrupts the application after it has exhausted the transfer size amount of data. The transfer size can be set to the maximum packet size of the endpoint, to be interrupted at the end of each packet. The core decrements this field every time a packet from the external memory is written to the Tx FIFO. */
    using OTG_DIEPTSIZ1_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count Indicates the total number of USB packets that constitute the transfer size amount of data for this endpoint. This field is decremented every time a packet (maximum size or short packet) is read from the Tx FIFO. */
    using OTG_DIEPTSIZ1_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Multi count For periodic IN endpoints, this field indicates the number of packets that must be transmitted per frame on the USB. The core uses this field to calculate the data PID for isochronous IN endpoints. */
    using OTG_DIEPTSIZ1_MCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: 1 packet (value: 1)
     *          - B_0x2: 2 packets (value: 2)
     *          - B_0x3: 3 packets (value: 3)
     */
        /** @brief 1 packet */
    constexpr std::uint32_t OTG_DIEPTSIZ1_MCNT_B_0x1 = 1;
        /** @brief 2 packets */
    constexpr std::uint32_t OTG_DIEPTSIZ1_MCNT_B_0x2 = 2;
        /** @brief 3 packets */
    constexpr std::uint32_t OTG_DIEPTSIZ1_MCNT_B_0x3 = 3;

    /** @brief OTG device IN endpoint 1 DMA address register */
    using OTG_DIEPDMA1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x934, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA Address This field holds the start address in the external memory from which the data for the endpoint must be fetched. This register is incremented on every AHB transaction. */
    using OTG_DIEPDMA1_DMAADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint transmit FIFO status register */
    using OTG_DTXFSTS1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x938, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint Tx FIFO space available Indicates the amount of free space available in the endpoint Tx FIFO. Values are in terms of 32-bit words: 0xn: n words available Others: Reserved */
    using OTG_DTXFSTS1_INEPTFSAV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Endpoint Tx FIFO is full (value: 0)
     *          - B_0x1: 1 word available (value: 1)
     *          - B_0x2: 2 words available (value: 2)
     */
        /** @brief Endpoint Tx FIFO is full */
    constexpr std::uint32_t OTG_DTXFSTS1_INEPTFSAV_B_0x0 = 0;
        /** @brief 1 word available */
    constexpr std::uint32_t OTG_DTXFSTS1_INEPTFSAV_B_0x1 = 1;
        /** @brief 2 words available */
    constexpr std::uint32_t OTG_DTXFSTS1_INEPTFSAV_B_0x2 = 2;

    /** @brief OTG device IN endpoint 2 control register */
    using OTG_DIEPCTL2_INT_BULK = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x940, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size The application must program this field with the maximum packet size for the current logical endpoint. This value is in bytes. */
    using OTG_DIEPCTL2_INT_BULK_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB active endpoint Indicates whether this endpoint is active in the current configuration and interface. The core clears this bit for all endpoints (other than EP 0) after detecting a USB reset. After receiving the SetConfiguration and SetInterface commands, the application must program endpoint registers accordingly and set this bit. */
    using OTG_DIEPCTL2_INT_BULK_USBAEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint data PID Applies to interrupt/bulk IN endpoints only. Contains the PID of the packet to be received or transmitted on this endpoint. The application must program the PID of the first packet to be received or transmitted on this endpoint, after the endpoint is activated. The application uses the SD0PID and SD1PID register fields to program either DATA0 or DATA1 PID. */
    using OTG_DIEPCTL2_INT_BULK_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATA0 (value: 0)
     *          - B_0x1: DATA1 (value: 1)
     */
        /** @brief DATA0 */
    constexpr std::uint32_t OTG_DIEPCTL2_INT_BULK_DPID_B_0x0 = 0;
        /** @brief DATA1 */
    constexpr std::uint32_t OTG_DIEPCTL2_INT_BULK_DPID_B_0x1 = 1;

    /** @brief NAK status It indicates the following: When either the application or the core sets this bit: For non-isochronous IN endpoints: The core stops transmitting any data on an IN endpoint, even if there are data available in the Tx FIFO. For isochronous IN endpoints: The core sends out a zero-length data packet, even if there are data available in the Tx FIFO. Irrespective of this bits setting, the core always responds to SETUP data packets with an ACK handshake. */
    using OTG_DIEPCTL2_INT_BULK_NAKSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The core is transmitting non-NAK handshakes based on the FIFO status. (value: 0)
     *          - B_0x1: The core is transmitting NAK handshakes on this endpoint. (value: 1)
     */
        /** @brief The core is transmitting non-NAK handshakes based on the FIFO status. */
    constexpr std::uint32_t OTG_DIEPCTL2_INT_BULK_NAKSTS_B_0x0 = 0;
        /** @brief The core is transmitting NAK handshakes on this endpoint. */
    constexpr std::uint32_t OTG_DIEPCTL2_INT_BULK_NAKSTS_B_0x1 = 1;

    /** @brief Endpoint type This is the transfer type supported by this logical endpoint. */
    using OTG_DIEPCTL2_INT_BULK_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_DIEPCTL2_INT_BULK_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_DIEPCTL2_INT_BULK_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_DIEPCTL2_INT_BULK_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_DIEPCTL2_INT_BULK_EPTYP_B_0x3 = 3;

    /** @brief STALL handshake Applies to non-control, non-isochronous IN endpoints only (access type is rw). The application sets this bit to stall all tokens from the USB host to this endpoint. If a NAK bit, Global IN NAK, or Global OUT NAK is set along with this bit, the STALL bit takes priority. Only the application can clear this bit, never the core. */
    using OTG_DIEPCTL2_INT_BULK_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx FIFO number These bits specify the FIFO number associated with this endpoint. Each active IN endpoint must be programmed to a separate FIFO number. This field is valid only for IN endpoints. */
    using OTG_DIEPCTL2_INT_BULK_TXFNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear NAK A write to this bit clears the NAK bit for the endpoint. */
    using OTG_DIEPCTL2_INT_BULK_CNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set NAK A write to this bit sets the NAK bit for the endpoint. Using this bit, the application can control the transmission of NAK handshakes on an endpoint. The core can also set this bit for OUT endpoints on a transfer completed interrupt, or after a SETUP is received on the endpoint. */
    using OTG_DIEPCTL2_INT_BULK_SNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set DATA0 PID Applies to interrupt/bulk IN endpoints only. Writing to this field sets the endpoint data PID (DPID) field in this register to DATA0. */
    using OTG_DIEPCTL2_INT_BULK_SD0PID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set DATA1 PID Writing to this field sets the endpoint data PID (DPID) field in this register to DATA1. */
    using OTG_DIEPCTL2_INT_BULK_SD1PID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disable The application sets this bit to stop transmitting/receiving data on an endpoint, even before the transfer for that endpoint is complete. The application must wait for the endpoint disabled interrupt before treating the endpoint as disabled. The core clears this bit before setting the endpoint disabled interrupt. The application must set this bit only if endpoint enable is already set for this endpoint. */
    using OTG_DIEPCTL2_INT_BULK_EPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint enable The application sets this bit to start transmitting data on an endpoint. The core clears this bit before setting any of the following interrupts on this endpoint: SETUP phase done Endpoint disabled Transfer completed */
    using OTG_DIEPCTL2_INT_BULK_EPENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint 2 control register */
    using OTG_DIEPCTL2_ISO = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x940, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size The application must program this field with the maximum packet size for the current logical endpoint. This value is in bytes. */
    using OTG_DIEPCTL2_ISO_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB active endpoint Indicates whether this endpoint is active in the current configuration and interface. The core clears this bit for all endpoints (other than EP 0) after detecting a USB reset. After receiving the SetConfiguration and SetInterface commands, the application must program endpoint registers accordingly and set this bit. */
    using OTG_DIEPCTL2_ISO_USBAEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Even/odd frame Applies to isochronous IN endpoints only. Indicates the frame number in which the core transmits/receives isochronous data for this endpoint. The application must program the even/odd frame number in which it intends to transmit/receive isochronous data for this endpoint using the SEVNFRM and SODDFRM fields in this register. */
    using OTG_DIEPCTL2_ISO_EONUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Even frame (value: 0)
     *          - B_0x1: Odd frame (value: 1)
     */
        /** @brief Even frame */
    constexpr std::uint32_t OTG_DIEPCTL2_ISO_EONUM_B_0x0 = 0;
        /** @brief Odd frame */
    constexpr std::uint32_t OTG_DIEPCTL2_ISO_EONUM_B_0x1 = 1;

    /** @brief NAK status It indicates the following: When either the application or the core sets this bit: For non-isochronous IN endpoints: The core stops transmitting any data on an IN endpoint, even if there are data available in the Tx FIFO. For isochronous IN endpoints: The core sends out a zero-length data packet, even if there are data available in the Tx FIFO. Irrespective of this bits setting, the core always responds to SETUP data packets with an ACK handshake. */
    using OTG_DIEPCTL2_ISO_NAKSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The core is transmitting non-NAK handshakes based on the FIFO status. (value: 0)
     *          - B_0x1: The core is transmitting NAK handshakes on this endpoint. (value: 1)
     */
        /** @brief The core is transmitting non-NAK handshakes based on the FIFO status. */
    constexpr std::uint32_t OTG_DIEPCTL2_ISO_NAKSTS_B_0x0 = 0;
        /** @brief The core is transmitting NAK handshakes on this endpoint. */
    constexpr std::uint32_t OTG_DIEPCTL2_ISO_NAKSTS_B_0x1 = 1;

    /** @brief Endpoint type This is the transfer type supported by this logical endpoint. */
    using OTG_DIEPCTL2_ISO_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_DIEPCTL2_ISO_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_DIEPCTL2_ISO_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_DIEPCTL2_ISO_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_DIEPCTL2_ISO_EPTYP_B_0x3 = 3;

    /** @brief STALL handshake Applies to non-control, non-isochronous IN endpoints only (access type is rw). The application sets this bit to stall all tokens from the USB host to this endpoint. If a NAK bit, Global IN NAK, or Global OUT NAK is set along with this bit, the STALL bit takes priority. Only the application can clear this bit, never the core. */
    using OTG_DIEPCTL2_ISO_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx FIFO number These bits specify the FIFO number associated with this endpoint. Each active IN endpoint must be programmed to a separate FIFO number. This field is valid only for IN endpoints. */
    using OTG_DIEPCTL2_ISO_TXFNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear NAK A write to this bit clears the NAK bit for the endpoint. */
    using OTG_DIEPCTL2_ISO_CNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set NAK A write to this bit sets the NAK bit for the endpoint. Using this bit, the application can control the transmission of NAK handshakes on an endpoint. The core can also set this bit for OUT endpoints on a transfer completed interrupt, or after a SETUP is received on the endpoint. */
    using OTG_DIEPCTL2_ISO_SNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set even frame Applies to isochronous IN endpoints only. Writing to this field sets the Even/Odd frame (EONUM) field to even frame. */
    using OTG_DIEPCTL2_ISO_SEVNFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set odd frame Applies to isochronous IN and OUT endpoints only. Writing to this field sets the Even/Odd frame (EONUM) field to odd frame. */
    using OTG_DIEPCTL2_ISO_SODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disable The application sets this bit to stop transmitting/receiving data on an endpoint, even before the transfer for that endpoint is complete. The application must wait for the endpoint disabled interrupt before treating the endpoint as disabled. The core clears this bit before setting the endpoint disabled interrupt. The application must set this bit only if endpoint enable is already set for this endpoint. */
    using OTG_DIEPCTL2_ISO_EPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint enable The application sets this bit to start transmitting data on an endpoint. The core clears this bit before setting any of the following interrupts on this endpoint: SETUP phase done Endpoint disabled Transfer completed */
    using OTG_DIEPCTL2_ISO_EPENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint 2 interrupt register */
    using OTG_DIEPINT2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x948, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed interrupt This field indicates that the programmed transfer is complete on the AHB as well as on the USB, for this endpoint. */
    using OTG_DIEPINT2_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disabled interrupt This bit indicates that the endpoint is disabled per the applications request. */
    using OTG_DIEPINT2_EPDISD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error This is generated only in internal DMA mode when there is an AHB error during an AHB read/write. The application can read the corresponding endpoint DMA address register to get the error address. */
    using OTG_DIEPINT2_AHBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timeout condition Indicates that the core has detected a timeout condition on the USB for the last IN token on this endpoint. */
    using OTG_DIEPINT2_TOC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN token received when Tx FIFO is empty Indicates that an IN token was received when the associated Tx FIFO (periodic/non-periodic) was empty. This interrupt is asserted on the endpoint for which the IN token was received. */
    using OTG_DIEPINT2_ITTXFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN token received with EP mismatch Indicates that the data in the top of the non-periodic TxFIFO belongs to an endpoint other than the one for which the IN token was received. This interrupt is asserted on the endpoint for which the IN token was received. */
    using OTG_DIEPINT2_INEPNM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint NAK effective This bit can be cleared when the application clears the IN endpoint NAK by writing to the CNAK bit in OTG_DIEPCTLx. This interrupt indicates that the core has sampled the NAK bit set (either by the application or by the core). The interrupt indicates that the IN endpoint NAK bit set by the application has taken effect in the core. This interrupt does not guarantee that a NAK handshake is sent on the USB. A STALL bit takes priority over a NAK bit. */
    using OTG_DIEPINT2_INEPNE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit FIFO empty This interrupt is asserted when the Tx FIFO for this endpoint is either half or completely empty. The half or completely empty status is determined by the Tx FIFO Empty Level bit in the OTG_GAHBCFG register (TXFELVL bit in OTG_GAHBCFG). */
    using OTG_DIEPINT2_TXFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Fifo Underrun (TxfifoUndrn) The core generates this interrupt when it detects a transmit FIFO underrun condition for this endpoint. Dependency: This interrupt is valid only when Thresholding is enabled */
    using OTG_DIEPINT2_TXFIFOUDRN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet dropped status This bit indicates to the application that an ISOC OUT packet has been dropped. This bit does not have an associated mask bit and does not generate an interrupt. */
    using OTG_DIEPINT2_PKTDRPSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK input The core generates this interrupt when a NAK is transmitted or received by the device. In case of isochronous IN endpoints the interrupt gets generated when a zero length packet is transmitted due to unavailability of data in the Tx FIFO. */
    using OTG_DIEPINT2_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint 2 transfer size register */
    using OTG_DIEPTSIZ2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x950, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size This field contains the transfer size in bytes for the current endpoint. The core only interrupts the application after it has exhausted the transfer size amount of data. The transfer size can be set to the maximum packet size of the endpoint, to be interrupted at the end of each packet. The core decrements this field every time a packet from the external memory is written to the Tx FIFO. */
    using OTG_DIEPTSIZ2_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count Indicates the total number of USB packets that constitute the transfer size amount of data for this endpoint. This field is decremented every time a packet (maximum size or short packet) is read from the Tx FIFO. */
    using OTG_DIEPTSIZ2_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Multi count For periodic IN endpoints, this field indicates the number of packets that must be transmitted per frame on the USB. The core uses this field to calculate the data PID for isochronous IN endpoints. */
    using OTG_DIEPTSIZ2_MCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: 1 packet (value: 1)
     *          - B_0x2: 2 packets (value: 2)
     *          - B_0x3: 3 packets (value: 3)
     */
        /** @brief 1 packet */
    constexpr std::uint32_t OTG_DIEPTSIZ2_MCNT_B_0x1 = 1;
        /** @brief 2 packets */
    constexpr std::uint32_t OTG_DIEPTSIZ2_MCNT_B_0x2 = 2;
        /** @brief 3 packets */
    constexpr std::uint32_t OTG_DIEPTSIZ2_MCNT_B_0x3 = 3;

    /** @brief OTG device IN endpoint 2 DMA address register */
    using OTG_DIEPDMA2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x954, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA Address This field holds the start address in the external memory from which the data for the endpoint must be fetched. This register is incremented on every AHB transaction. */
    using OTG_DIEPDMA2_DMAADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint transmit FIFO status register */
    using OTG_DTXFSTS2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x958, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint Tx FIFO space available Indicates the amount of free space available in the endpoint Tx FIFO. Values are in terms of 32-bit words: 0xn: n words available Others: Reserved */
    using OTG_DTXFSTS2_INEPTFSAV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Endpoint Tx FIFO is full (value: 0)
     *          - B_0x1: 1 word available (value: 1)
     *          - B_0x2: 2 words available (value: 2)
     */
        /** @brief Endpoint Tx FIFO is full */
    constexpr std::uint32_t OTG_DTXFSTS2_INEPTFSAV_B_0x0 = 0;
        /** @brief 1 word available */
    constexpr std::uint32_t OTG_DTXFSTS2_INEPTFSAV_B_0x1 = 1;
        /** @brief 2 words available */
    constexpr std::uint32_t OTG_DTXFSTS2_INEPTFSAV_B_0x2 = 2;

    /** @brief OTG device IN endpoint 3 control register */
    using OTG_DIEPCTL3_INT_BULK = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x960, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size The application must program this field with the maximum packet size for the current logical endpoint. This value is in bytes. */
    using OTG_DIEPCTL3_INT_BULK_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB active endpoint Indicates whether this endpoint is active in the current configuration and interface. The core clears this bit for all endpoints (other than EP 0) after detecting a USB reset. After receiving the SetConfiguration and SetInterface commands, the application must program endpoint registers accordingly and set this bit. */
    using OTG_DIEPCTL3_INT_BULK_USBAEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint data PID Applies to interrupt/bulk IN endpoints only. Contains the PID of the packet to be received or transmitted on this endpoint. The application must program the PID of the first packet to be received or transmitted on this endpoint, after the endpoint is activated. The application uses the SD0PID and SD1PID register fields to program either DATA0 or DATA1 PID. */
    using OTG_DIEPCTL3_INT_BULK_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATA0 (value: 0)
     *          - B_0x1: DATA1 (value: 1)
     */
        /** @brief DATA0 */
    constexpr std::uint32_t OTG_DIEPCTL3_INT_BULK_DPID_B_0x0 = 0;
        /** @brief DATA1 */
    constexpr std::uint32_t OTG_DIEPCTL3_INT_BULK_DPID_B_0x1 = 1;

    /** @brief NAK status It indicates the following: When either the application or the core sets this bit: For non-isochronous IN endpoints: The core stops transmitting any data on an IN endpoint, even if there are data available in the Tx FIFO. For isochronous IN endpoints: The core sends out a zero-length data packet, even if there are data available in the Tx FIFO. Irrespective of this bits setting, the core always responds to SETUP data packets with an ACK handshake. */
    using OTG_DIEPCTL3_INT_BULK_NAKSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The core is transmitting non-NAK handshakes based on the FIFO status. (value: 0)
     *          - B_0x1: The core is transmitting NAK handshakes on this endpoint. (value: 1)
     */
        /** @brief The core is transmitting non-NAK handshakes based on the FIFO status. */
    constexpr std::uint32_t OTG_DIEPCTL3_INT_BULK_NAKSTS_B_0x0 = 0;
        /** @brief The core is transmitting NAK handshakes on this endpoint. */
    constexpr std::uint32_t OTG_DIEPCTL3_INT_BULK_NAKSTS_B_0x1 = 1;

    /** @brief Endpoint type This is the transfer type supported by this logical endpoint. */
    using OTG_DIEPCTL3_INT_BULK_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_DIEPCTL3_INT_BULK_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_DIEPCTL3_INT_BULK_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_DIEPCTL3_INT_BULK_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_DIEPCTL3_INT_BULK_EPTYP_B_0x3 = 3;

    /** @brief STALL handshake Applies to non-control, non-isochronous IN endpoints only (access type is rw). The application sets this bit to stall all tokens from the USB host to this endpoint. If a NAK bit, Global IN NAK, or Global OUT NAK is set along with this bit, the STALL bit takes priority. Only the application can clear this bit, never the core. */
    using OTG_DIEPCTL3_INT_BULK_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx FIFO number These bits specify the FIFO number associated with this endpoint. Each active IN endpoint must be programmed to a separate FIFO number. This field is valid only for IN endpoints. */
    using OTG_DIEPCTL3_INT_BULK_TXFNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear NAK A write to this bit clears the NAK bit for the endpoint. */
    using OTG_DIEPCTL3_INT_BULK_CNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set NAK A write to this bit sets the NAK bit for the endpoint. Using this bit, the application can control the transmission of NAK handshakes on an endpoint. The core can also set this bit for OUT endpoints on a transfer completed interrupt, or after a SETUP is received on the endpoint. */
    using OTG_DIEPCTL3_INT_BULK_SNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set DATA0 PID Applies to interrupt/bulk IN endpoints only. Writing to this field sets the endpoint data PID (DPID) field in this register to DATA0. */
    using OTG_DIEPCTL3_INT_BULK_SD0PID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set DATA1 PID Writing to this field sets the endpoint data PID (DPID) field in this register to DATA1. */
    using OTG_DIEPCTL3_INT_BULK_SD1PID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disable The application sets this bit to stop transmitting/receiving data on an endpoint, even before the transfer for that endpoint is complete. The application must wait for the endpoint disabled interrupt before treating the endpoint as disabled. The core clears this bit before setting the endpoint disabled interrupt. The application must set this bit only if endpoint enable is already set for this endpoint. */
    using OTG_DIEPCTL3_INT_BULK_EPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint enable The application sets this bit to start transmitting data on an endpoint. The core clears this bit before setting any of the following interrupts on this endpoint: SETUP phase done Endpoint disabled Transfer completed */
    using OTG_DIEPCTL3_INT_BULK_EPENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint 3 control register */
    using OTG_DIEPCTL3_ISO = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x960, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size The application must program this field with the maximum packet size for the current logical endpoint. This value is in bytes. */
    using OTG_DIEPCTL3_ISO_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB active endpoint Indicates whether this endpoint is active in the current configuration and interface. The core clears this bit for all endpoints (other than EP 0) after detecting a USB reset. After receiving the SetConfiguration and SetInterface commands, the application must program endpoint registers accordingly and set this bit. */
    using OTG_DIEPCTL3_ISO_USBAEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Even/odd frame Applies to isochronous IN endpoints only. Indicates the frame number in which the core transmits/receives isochronous data for this endpoint. The application must program the even/odd frame number in which it intends to transmit/receive isochronous data for this endpoint using the SEVNFRM and SODDFRM fields in this register. */
    using OTG_DIEPCTL3_ISO_EONUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Even frame (value: 0)
     *          - B_0x1: Odd frame (value: 1)
     */
        /** @brief Even frame */
    constexpr std::uint32_t OTG_DIEPCTL3_ISO_EONUM_B_0x0 = 0;
        /** @brief Odd frame */
    constexpr std::uint32_t OTG_DIEPCTL3_ISO_EONUM_B_0x1 = 1;

    /** @brief NAK status It indicates the following: When either the application or the core sets this bit: For non-isochronous IN endpoints: The core stops transmitting any data on an IN endpoint, even if there are data available in the Tx FIFO. For isochronous IN endpoints: The core sends out a zero-length data packet, even if there are data available in the Tx FIFO. Irrespective of this bits setting, the core always responds to SETUP data packets with an ACK handshake. */
    using OTG_DIEPCTL3_ISO_NAKSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The core is transmitting non-NAK handshakes based on the FIFO status. (value: 0)
     *          - B_0x1: The core is transmitting NAK handshakes on this endpoint. (value: 1)
     */
        /** @brief The core is transmitting non-NAK handshakes based on the FIFO status. */
    constexpr std::uint32_t OTG_DIEPCTL3_ISO_NAKSTS_B_0x0 = 0;
        /** @brief The core is transmitting NAK handshakes on this endpoint. */
    constexpr std::uint32_t OTG_DIEPCTL3_ISO_NAKSTS_B_0x1 = 1;

    /** @brief Endpoint type This is the transfer type supported by this logical endpoint. */
    using OTG_DIEPCTL3_ISO_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_DIEPCTL3_ISO_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_DIEPCTL3_ISO_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_DIEPCTL3_ISO_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_DIEPCTL3_ISO_EPTYP_B_0x3 = 3;

    /** @brief STALL handshake Applies to non-control, non-isochronous IN endpoints only (access type is rw). The application sets this bit to stall all tokens from the USB host to this endpoint. If a NAK bit, Global IN NAK, or Global OUT NAK is set along with this bit, the STALL bit takes priority. Only the application can clear this bit, never the core. */
    using OTG_DIEPCTL3_ISO_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx FIFO number These bits specify the FIFO number associated with this endpoint. Each active IN endpoint must be programmed to a separate FIFO number. This field is valid only for IN endpoints. */
    using OTG_DIEPCTL3_ISO_TXFNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear NAK A write to this bit clears the NAK bit for the endpoint. */
    using OTG_DIEPCTL3_ISO_CNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set NAK A write to this bit sets the NAK bit for the endpoint. Using this bit, the application can control the transmission of NAK handshakes on an endpoint. The core can also set this bit for OUT endpoints on a transfer completed interrupt, or after a SETUP is received on the endpoint. */
    using OTG_DIEPCTL3_ISO_SNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set even frame Applies to isochronous IN endpoints only. Writing to this field sets the Even/Odd frame (EONUM) field to even frame. */
    using OTG_DIEPCTL3_ISO_SEVNFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set odd frame Applies to isochronous IN and OUT endpoints only. Writing to this field sets the Even/Odd frame (EONUM) field to odd frame. */
    using OTG_DIEPCTL3_ISO_SODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disable The application sets this bit to stop transmitting/receiving data on an endpoint, even before the transfer for that endpoint is complete. The application must wait for the endpoint disabled interrupt before treating the endpoint as disabled. The core clears this bit before setting the endpoint disabled interrupt. The application must set this bit only if endpoint enable is already set for this endpoint. */
    using OTG_DIEPCTL3_ISO_EPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint enable The application sets this bit to start transmitting data on an endpoint. The core clears this bit before setting any of the following interrupts on this endpoint: SETUP phase done Endpoint disabled Transfer completed */
    using OTG_DIEPCTL3_ISO_EPENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint 3 interrupt register */
    using OTG_DIEPINT3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x968, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed interrupt This field indicates that the programmed transfer is complete on the AHB as well as on the USB, for this endpoint. */
    using OTG_DIEPINT3_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disabled interrupt This bit indicates that the endpoint is disabled per the applications request. */
    using OTG_DIEPINT3_EPDISD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error This is generated only in internal DMA mode when there is an AHB error during an AHB read/write. The application can read the corresponding endpoint DMA address register to get the error address. */
    using OTG_DIEPINT3_AHBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timeout condition Indicates that the core has detected a timeout condition on the USB for the last IN token on this endpoint. */
    using OTG_DIEPINT3_TOC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN token received when Tx FIFO is empty Indicates that an IN token was received when the associated Tx FIFO (periodic/non-periodic) was empty. This interrupt is asserted on the endpoint for which the IN token was received. */
    using OTG_DIEPINT3_ITTXFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN token received with EP mismatch Indicates that the data in the top of the non-periodic TxFIFO belongs to an endpoint other than the one for which the IN token was received. This interrupt is asserted on the endpoint for which the IN token was received. */
    using OTG_DIEPINT3_INEPNM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint NAK effective This bit can be cleared when the application clears the IN endpoint NAK by writing to the CNAK bit in OTG_DIEPCTLx. This interrupt indicates that the core has sampled the NAK bit set (either by the application or by the core). The interrupt indicates that the IN endpoint NAK bit set by the application has taken effect in the core. This interrupt does not guarantee that a NAK handshake is sent on the USB. A STALL bit takes priority over a NAK bit. */
    using OTG_DIEPINT3_INEPNE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit FIFO empty This interrupt is asserted when the Tx FIFO for this endpoint is either half or completely empty. The half or completely empty status is determined by the Tx FIFO Empty Level bit in the OTG_GAHBCFG register (TXFELVL bit in OTG_GAHBCFG). */
    using OTG_DIEPINT3_TXFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Fifo Underrun (TxfifoUndrn) The core generates this interrupt when it detects a transmit FIFO underrun condition for this endpoint. Dependency: This interrupt is valid only when Thresholding is enabled */
    using OTG_DIEPINT3_TXFIFOUDRN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet dropped status This bit indicates to the application that an ISOC OUT packet has been dropped. This bit does not have an associated mask bit and does not generate an interrupt. */
    using OTG_DIEPINT3_PKTDRPSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK input The core generates this interrupt when a NAK is transmitted or received by the device. In case of isochronous IN endpoints the interrupt gets generated when a zero length packet is transmitted due to unavailability of data in the Tx FIFO. */
    using OTG_DIEPINT3_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint 3 transfer size register */
    using OTG_DIEPTSIZ3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x970, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size This field contains the transfer size in bytes for the current endpoint. The core only interrupts the application after it has exhausted the transfer size amount of data. The transfer size can be set to the maximum packet size of the endpoint, to be interrupted at the end of each packet. The core decrements this field every time a packet from the external memory is written to the Tx FIFO. */
    using OTG_DIEPTSIZ3_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count Indicates the total number of USB packets that constitute the transfer size amount of data for this endpoint. This field is decremented every time a packet (maximum size or short packet) is read from the Tx FIFO. */
    using OTG_DIEPTSIZ3_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Multi count For periodic IN endpoints, this field indicates the number of packets that must be transmitted per frame on the USB. The core uses this field to calculate the data PID for isochronous IN endpoints. */
    using OTG_DIEPTSIZ3_MCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: 1 packet (value: 1)
     *          - B_0x2: 2 packets (value: 2)
     *          - B_0x3: 3 packets (value: 3)
     */
        /** @brief 1 packet */
    constexpr std::uint32_t OTG_DIEPTSIZ3_MCNT_B_0x1 = 1;
        /** @brief 2 packets */
    constexpr std::uint32_t OTG_DIEPTSIZ3_MCNT_B_0x2 = 2;
        /** @brief 3 packets */
    constexpr std::uint32_t OTG_DIEPTSIZ3_MCNT_B_0x3 = 3;

    /** @brief OTG device IN endpoint 3 DMA address register */
    using OTG_DIEPDMA3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x974, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA Address This field holds the start address in the external memory from which the data for the endpoint must be fetched. This register is incremented on every AHB transaction. */
    using OTG_DIEPDMA3_DMAADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint transmit FIFO status register */
    using OTG_DTXFSTS3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x978, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint Tx FIFO space available Indicates the amount of free space available in the endpoint Tx FIFO. Values are in terms of 32-bit words: 0xn: n words available Others: Reserved */
    using OTG_DTXFSTS3_INEPTFSAV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Endpoint Tx FIFO is full (value: 0)
     *          - B_0x1: 1 word available (value: 1)
     *          - B_0x2: 2 words available (value: 2)
     */
        /** @brief Endpoint Tx FIFO is full */
    constexpr std::uint32_t OTG_DTXFSTS3_INEPTFSAV_B_0x0 = 0;
        /** @brief 1 word available */
    constexpr std::uint32_t OTG_DTXFSTS3_INEPTFSAV_B_0x1 = 1;
        /** @brief 2 words available */
    constexpr std::uint32_t OTG_DTXFSTS3_INEPTFSAV_B_0x2 = 2;

    /** @brief OTG device IN endpoint 4 control register */
    using OTG_DIEPCTL4_INT_BULK = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x980, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size The application must program this field with the maximum packet size for the current logical endpoint. This value is in bytes. */
    using OTG_DIEPCTL4_INT_BULK_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB active endpoint Indicates whether this endpoint is active in the current configuration and interface. The core clears this bit for all endpoints (other than EP 0) after detecting a USB reset. After receiving the SetConfiguration and SetInterface commands, the application must program endpoint registers accordingly and set this bit. */
    using OTG_DIEPCTL4_INT_BULK_USBAEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint data PID Applies to interrupt/bulk IN endpoints only. Contains the PID of the packet to be received or transmitted on this endpoint. The application must program the PID of the first packet to be received or transmitted on this endpoint, after the endpoint is activated. The application uses the SD0PID and SD1PID register fields to program either DATA0 or DATA1 PID. */
    using OTG_DIEPCTL4_INT_BULK_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATA0 (value: 0)
     *          - B_0x1: DATA1 (value: 1)
     */
        /** @brief DATA0 */
    constexpr std::uint32_t OTG_DIEPCTL4_INT_BULK_DPID_B_0x0 = 0;
        /** @brief DATA1 */
    constexpr std::uint32_t OTG_DIEPCTL4_INT_BULK_DPID_B_0x1 = 1;

    /** @brief NAK status It indicates the following: When either the application or the core sets this bit: For non-isochronous IN endpoints: The core stops transmitting any data on an IN endpoint, even if there are data available in the Tx FIFO. For isochronous IN endpoints: The core sends out a zero-length data packet, even if there are data available in the Tx FIFO. Irrespective of this bits setting, the core always responds to SETUP data packets with an ACK handshake. */
    using OTG_DIEPCTL4_INT_BULK_NAKSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The core is transmitting non-NAK handshakes based on the FIFO status. (value: 0)
     *          - B_0x1: The core is transmitting NAK handshakes on this endpoint. (value: 1)
     */
        /** @brief The core is transmitting non-NAK handshakes based on the FIFO status. */
    constexpr std::uint32_t OTG_DIEPCTL4_INT_BULK_NAKSTS_B_0x0 = 0;
        /** @brief The core is transmitting NAK handshakes on this endpoint. */
    constexpr std::uint32_t OTG_DIEPCTL4_INT_BULK_NAKSTS_B_0x1 = 1;

    /** @brief Endpoint type This is the transfer type supported by this logical endpoint. */
    using OTG_DIEPCTL4_INT_BULK_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_DIEPCTL4_INT_BULK_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_DIEPCTL4_INT_BULK_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_DIEPCTL4_INT_BULK_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_DIEPCTL4_INT_BULK_EPTYP_B_0x3 = 3;

    /** @brief STALL handshake Applies to non-control, non-isochronous IN endpoints only (access type is rw). The application sets this bit to stall all tokens from the USB host to this endpoint. If a NAK bit, Global IN NAK, or Global OUT NAK is set along with this bit, the STALL bit takes priority. Only the application can clear this bit, never the core. */
    using OTG_DIEPCTL4_INT_BULK_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx FIFO number These bits specify the FIFO number associated with this endpoint. Each active IN endpoint must be programmed to a separate FIFO number. This field is valid only for IN endpoints. */
    using OTG_DIEPCTL4_INT_BULK_TXFNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear NAK A write to this bit clears the NAK bit for the endpoint. */
    using OTG_DIEPCTL4_INT_BULK_CNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set NAK A write to this bit sets the NAK bit for the endpoint. Using this bit, the application can control the transmission of NAK handshakes on an endpoint. The core can also set this bit for OUT endpoints on a transfer completed interrupt, or after a SETUP is received on the endpoint. */
    using OTG_DIEPCTL4_INT_BULK_SNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set DATA0 PID Applies to interrupt/bulk IN endpoints only. Writing to this field sets the endpoint data PID (DPID) field in this register to DATA0. */
    using OTG_DIEPCTL4_INT_BULK_SD0PID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set DATA1 PID Writing to this field sets the endpoint data PID (DPID) field in this register to DATA1. */
    using OTG_DIEPCTL4_INT_BULK_SD1PID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disable The application sets this bit to stop transmitting/receiving data on an endpoint, even before the transfer for that endpoint is complete. The application must wait for the endpoint disabled interrupt before treating the endpoint as disabled. The core clears this bit before setting the endpoint disabled interrupt. The application must set this bit only if endpoint enable is already set for this endpoint. */
    using OTG_DIEPCTL4_INT_BULK_EPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint enable The application sets this bit to start transmitting data on an endpoint. The core clears this bit before setting any of the following interrupts on this endpoint: SETUP phase done Endpoint disabled Transfer completed */
    using OTG_DIEPCTL4_INT_BULK_EPENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint 4 control register */
    using OTG_DIEPCTL4_ISO = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x980, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size The application must program this field with the maximum packet size for the current logical endpoint. This value is in bytes. */
    using OTG_DIEPCTL4_ISO_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB active endpoint Indicates whether this endpoint is active in the current configuration and interface. The core clears this bit for all endpoints (other than EP 0) after detecting a USB reset. After receiving the SetConfiguration and SetInterface commands, the application must program endpoint registers accordingly and set this bit. */
    using OTG_DIEPCTL4_ISO_USBAEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Even/odd frame Applies to isochronous IN endpoints only. Indicates the frame number in which the core transmits/receives isochronous data for this endpoint. The application must program the even/odd frame number in which it intends to transmit/receive isochronous data for this endpoint using the SEVNFRM and SODDFRM fields in this register. */
    using OTG_DIEPCTL4_ISO_EONUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Even frame (value: 0)
     *          - B_0x1: Odd frame (value: 1)
     */
        /** @brief Even frame */
    constexpr std::uint32_t OTG_DIEPCTL4_ISO_EONUM_B_0x0 = 0;
        /** @brief Odd frame */
    constexpr std::uint32_t OTG_DIEPCTL4_ISO_EONUM_B_0x1 = 1;

    /** @brief NAK status It indicates the following: When either the application or the core sets this bit: For non-isochronous IN endpoints: The core stops transmitting any data on an IN endpoint, even if there are data available in the Tx FIFO. For isochronous IN endpoints: The core sends out a zero-length data packet, even if there are data available in the Tx FIFO. Irrespective of this bits setting, the core always responds to SETUP data packets with an ACK handshake. */
    using OTG_DIEPCTL4_ISO_NAKSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The core is transmitting non-NAK handshakes based on the FIFO status. (value: 0)
     *          - B_0x1: The core is transmitting NAK handshakes on this endpoint. (value: 1)
     */
        /** @brief The core is transmitting non-NAK handshakes based on the FIFO status. */
    constexpr std::uint32_t OTG_DIEPCTL4_ISO_NAKSTS_B_0x0 = 0;
        /** @brief The core is transmitting NAK handshakes on this endpoint. */
    constexpr std::uint32_t OTG_DIEPCTL4_ISO_NAKSTS_B_0x1 = 1;

    /** @brief Endpoint type This is the transfer type supported by this logical endpoint. */
    using OTG_DIEPCTL4_ISO_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_DIEPCTL4_ISO_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_DIEPCTL4_ISO_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_DIEPCTL4_ISO_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_DIEPCTL4_ISO_EPTYP_B_0x3 = 3;

    /** @brief STALL handshake Applies to non-control, non-isochronous IN endpoints only (access type is rw). The application sets this bit to stall all tokens from the USB host to this endpoint. If a NAK bit, Global IN NAK, or Global OUT NAK is set along with this bit, the STALL bit takes priority. Only the application can clear this bit, never the core. */
    using OTG_DIEPCTL4_ISO_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx FIFO number These bits specify the FIFO number associated with this endpoint. Each active IN endpoint must be programmed to a separate FIFO number. This field is valid only for IN endpoints. */
    using OTG_DIEPCTL4_ISO_TXFNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear NAK A write to this bit clears the NAK bit for the endpoint. */
    using OTG_DIEPCTL4_ISO_CNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set NAK A write to this bit sets the NAK bit for the endpoint. Using this bit, the application can control the transmission of NAK handshakes on an endpoint. The core can also set this bit for OUT endpoints on a transfer completed interrupt, or after a SETUP is received on the endpoint. */
    using OTG_DIEPCTL4_ISO_SNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set even frame Applies to isochronous IN endpoints only. Writing to this field sets the Even/Odd frame (EONUM) field to even frame. */
    using OTG_DIEPCTL4_ISO_SEVNFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set odd frame Applies to isochronous IN and OUT endpoints only. Writing to this field sets the Even/Odd frame (EONUM) field to odd frame. */
    using OTG_DIEPCTL4_ISO_SODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disable The application sets this bit to stop transmitting/receiving data on an endpoint, even before the transfer for that endpoint is complete. The application must wait for the endpoint disabled interrupt before treating the endpoint as disabled. The core clears this bit before setting the endpoint disabled interrupt. The application must set this bit only if endpoint enable is already set for this endpoint. */
    using OTG_DIEPCTL4_ISO_EPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint enable The application sets this bit to start transmitting data on an endpoint. The core clears this bit before setting any of the following interrupts on this endpoint: SETUP phase done Endpoint disabled Transfer completed */
    using OTG_DIEPCTL4_ISO_EPENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint 4 interrupt register */
    using OTG_DIEPINT4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x988, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed interrupt This field indicates that the programmed transfer is complete on the AHB as well as on the USB, for this endpoint. */
    using OTG_DIEPINT4_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disabled interrupt This bit indicates that the endpoint is disabled per the applications request. */
    using OTG_DIEPINT4_EPDISD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error This is generated only in internal DMA mode when there is an AHB error during an AHB read/write. The application can read the corresponding endpoint DMA address register to get the error address. */
    using OTG_DIEPINT4_AHBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timeout condition Indicates that the core has detected a timeout condition on the USB for the last IN token on this endpoint. */
    using OTG_DIEPINT4_TOC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN token received when Tx FIFO is empty Indicates that an IN token was received when the associated Tx FIFO (periodic/non-periodic) was empty. This interrupt is asserted on the endpoint for which the IN token was received. */
    using OTG_DIEPINT4_ITTXFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN token received with EP mismatch Indicates that the data in the top of the non-periodic TxFIFO belongs to an endpoint other than the one for which the IN token was received. This interrupt is asserted on the endpoint for which the IN token was received. */
    using OTG_DIEPINT4_INEPNM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint NAK effective This bit can be cleared when the application clears the IN endpoint NAK by writing to the CNAK bit in OTG_DIEPCTLx. This interrupt indicates that the core has sampled the NAK bit set (either by the application or by the core). The interrupt indicates that the IN endpoint NAK bit set by the application has taken effect in the core. This interrupt does not guarantee that a NAK handshake is sent on the USB. A STALL bit takes priority over a NAK bit. */
    using OTG_DIEPINT4_INEPNE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit FIFO empty This interrupt is asserted when the Tx FIFO for this endpoint is either half or completely empty. The half or completely empty status is determined by the Tx FIFO Empty Level bit in the OTG_GAHBCFG register (TXFELVL bit in OTG_GAHBCFG). */
    using OTG_DIEPINT4_TXFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Fifo Underrun (TxfifoUndrn) The core generates this interrupt when it detects a transmit FIFO underrun condition for this endpoint. Dependency: This interrupt is valid only when Thresholding is enabled */
    using OTG_DIEPINT4_TXFIFOUDRN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet dropped status This bit indicates to the application that an ISOC OUT packet has been dropped. This bit does not have an associated mask bit and does not generate an interrupt. */
    using OTG_DIEPINT4_PKTDRPSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK input The core generates this interrupt when a NAK is transmitted or received by the device. In case of isochronous IN endpoints the interrupt gets generated when a zero length packet is transmitted due to unavailability of data in the Tx FIFO. */
    using OTG_DIEPINT4_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint 4 transfer size register */
    using OTG_DIEPTSIZ4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x990, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size This field contains the transfer size in bytes for the current endpoint. The core only interrupts the application after it has exhausted the transfer size amount of data. The transfer size can be set to the maximum packet size of the endpoint, to be interrupted at the end of each packet. The core decrements this field every time a packet from the external memory is written to the Tx FIFO. */
    using OTG_DIEPTSIZ4_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count Indicates the total number of USB packets that constitute the transfer size amount of data for this endpoint. This field is decremented every time a packet (maximum size or short packet) is read from the Tx FIFO. */
    using OTG_DIEPTSIZ4_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Multi count For periodic IN endpoints, this field indicates the number of packets that must be transmitted per frame on the USB. The core uses this field to calculate the data PID for isochronous IN endpoints. */
    using OTG_DIEPTSIZ4_MCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: 1 packet (value: 1)
     *          - B_0x2: 2 packets (value: 2)
     *          - B_0x3: 3 packets (value: 3)
     */
        /** @brief 1 packet */
    constexpr std::uint32_t OTG_DIEPTSIZ4_MCNT_B_0x1 = 1;
        /** @brief 2 packets */
    constexpr std::uint32_t OTG_DIEPTSIZ4_MCNT_B_0x2 = 2;
        /** @brief 3 packets */
    constexpr std::uint32_t OTG_DIEPTSIZ4_MCNT_B_0x3 = 3;

    /** @brief OTG device IN endpoint 4 DMA address register */
    using OTG_DIEPDMA4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x994, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA Address This field holds the start address in the external memory from which the data for the endpoint must be fetched. This register is incremented on every AHB transaction. */
    using OTG_DIEPDMA4_DMAADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint transmit FIFO status register */
    using OTG_DTXFSTS4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x998, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint Tx FIFO space available Indicates the amount of free space available in the endpoint Tx FIFO. Values are in terms of 32-bit words: 0xn: n words available Others: Reserved */
    using OTG_DTXFSTS4_INEPTFSAV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Endpoint Tx FIFO is full (value: 0)
     *          - B_0x1: 1 word available (value: 1)
     *          - B_0x2: 2 words available (value: 2)
     */
        /** @brief Endpoint Tx FIFO is full */
    constexpr std::uint32_t OTG_DTXFSTS4_INEPTFSAV_B_0x0 = 0;
        /** @brief 1 word available */
    constexpr std::uint32_t OTG_DTXFSTS4_INEPTFSAV_B_0x1 = 1;
        /** @brief 2 words available */
    constexpr std::uint32_t OTG_DTXFSTS4_INEPTFSAV_B_0x2 = 2;

    /** @brief OTG device IN endpoint 5 control register */
    using OTG_DIEPCTL5_INT_BULK = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size The application must program this field with the maximum packet size for the current logical endpoint. This value is in bytes. */
    using OTG_DIEPCTL5_INT_BULK_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB active endpoint Indicates whether this endpoint is active in the current configuration and interface. The core clears this bit for all endpoints (other than EP 0) after detecting a USB reset. After receiving the SetConfiguration and SetInterface commands, the application must program endpoint registers accordingly and set this bit. */
    using OTG_DIEPCTL5_INT_BULK_USBAEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint data PID Applies to interrupt/bulk IN endpoints only. Contains the PID of the packet to be received or transmitted on this endpoint. The application must program the PID of the first packet to be received or transmitted on this endpoint, after the endpoint is activated. The application uses the SD0PID and SD1PID register fields to program either DATA0 or DATA1 PID. */
    using OTG_DIEPCTL5_INT_BULK_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATA0 (value: 0)
     *          - B_0x1: DATA1 (value: 1)
     */
        /** @brief DATA0 */
    constexpr std::uint32_t OTG_DIEPCTL5_INT_BULK_DPID_B_0x0 = 0;
        /** @brief DATA1 */
    constexpr std::uint32_t OTG_DIEPCTL5_INT_BULK_DPID_B_0x1 = 1;

    /** @brief NAK status It indicates the following: When either the application or the core sets this bit: For non-isochronous IN endpoints: The core stops transmitting any data on an IN endpoint, even if there are data available in the Tx FIFO. For isochronous IN endpoints: The core sends out a zero-length data packet, even if there are data available in the Tx FIFO. Irrespective of this bits setting, the core always responds to SETUP data packets with an ACK handshake. */
    using OTG_DIEPCTL5_INT_BULK_NAKSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The core is transmitting non-NAK handshakes based on the FIFO status. (value: 0)
     *          - B_0x1: The core is transmitting NAK handshakes on this endpoint. (value: 1)
     */
        /** @brief The core is transmitting non-NAK handshakes based on the FIFO status. */
    constexpr std::uint32_t OTG_DIEPCTL5_INT_BULK_NAKSTS_B_0x0 = 0;
        /** @brief The core is transmitting NAK handshakes on this endpoint. */
    constexpr std::uint32_t OTG_DIEPCTL5_INT_BULK_NAKSTS_B_0x1 = 1;

    /** @brief Endpoint type This is the transfer type supported by this logical endpoint. */
    using OTG_DIEPCTL5_INT_BULK_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_DIEPCTL5_INT_BULK_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_DIEPCTL5_INT_BULK_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_DIEPCTL5_INT_BULK_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_DIEPCTL5_INT_BULK_EPTYP_B_0x3 = 3;

    /** @brief STALL handshake Applies to non-control, non-isochronous IN endpoints only (access type is rw). The application sets this bit to stall all tokens from the USB host to this endpoint. If a NAK bit, Global IN NAK, or Global OUT NAK is set along with this bit, the STALL bit takes priority. Only the application can clear this bit, never the core. */
    using OTG_DIEPCTL5_INT_BULK_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx FIFO number These bits specify the FIFO number associated with this endpoint. Each active IN endpoint must be programmed to a separate FIFO number. This field is valid only for IN endpoints. */
    using OTG_DIEPCTL5_INT_BULK_TXFNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear NAK A write to this bit clears the NAK bit for the endpoint. */
    using OTG_DIEPCTL5_INT_BULK_CNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set NAK A write to this bit sets the NAK bit for the endpoint. Using this bit, the application can control the transmission of NAK handshakes on an endpoint. The core can also set this bit for OUT endpoints on a transfer completed interrupt, or after a SETUP is received on the endpoint. */
    using OTG_DIEPCTL5_INT_BULK_SNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set DATA0 PID Applies to interrupt/bulk IN endpoints only. Writing to this field sets the endpoint data PID (DPID) field in this register to DATA0. */
    using OTG_DIEPCTL5_INT_BULK_SD0PID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set DATA1 PID Writing to this field sets the endpoint data PID (DPID) field in this register to DATA1. */
    using OTG_DIEPCTL5_INT_BULK_SD1PID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disable The application sets this bit to stop transmitting/receiving data on an endpoint, even before the transfer for that endpoint is complete. The application must wait for the endpoint disabled interrupt before treating the endpoint as disabled. The core clears this bit before setting the endpoint disabled interrupt. The application must set this bit only if endpoint enable is already set for this endpoint. */
    using OTG_DIEPCTL5_INT_BULK_EPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint enable The application sets this bit to start transmitting data on an endpoint. The core clears this bit before setting any of the following interrupts on this endpoint: SETUP phase done Endpoint disabled Transfer completed */
    using OTG_DIEPCTL5_INT_BULK_EPENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint 5 control register */
    using OTG_DIEPCTL5_ISO = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size The application must program this field with the maximum packet size for the current logical endpoint. This value is in bytes. */
    using OTG_DIEPCTL5_ISO_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB active endpoint Indicates whether this endpoint is active in the current configuration and interface. The core clears this bit for all endpoints (other than EP 0) after detecting a USB reset. After receiving the SetConfiguration and SetInterface commands, the application must program endpoint registers accordingly and set this bit. */
    using OTG_DIEPCTL5_ISO_USBAEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Even/odd frame Applies to isochronous IN endpoints only. Indicates the frame number in which the core transmits/receives isochronous data for this endpoint. The application must program the even/odd frame number in which it intends to transmit/receive isochronous data for this endpoint using the SEVNFRM and SODDFRM fields in this register. */
    using OTG_DIEPCTL5_ISO_EONUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Even frame (value: 0)
     *          - B_0x1: Odd frame (value: 1)
     */
        /** @brief Even frame */
    constexpr std::uint32_t OTG_DIEPCTL5_ISO_EONUM_B_0x0 = 0;
        /** @brief Odd frame */
    constexpr std::uint32_t OTG_DIEPCTL5_ISO_EONUM_B_0x1 = 1;

    /** @brief NAK status It indicates the following: When either the application or the core sets this bit: For non-isochronous IN endpoints: The core stops transmitting any data on an IN endpoint, even if there are data available in the Tx FIFO. For isochronous IN endpoints: The core sends out a zero-length data packet, even if there are data available in the Tx FIFO. Irrespective of this bits setting, the core always responds to SETUP data packets with an ACK handshake. */
    using OTG_DIEPCTL5_ISO_NAKSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The core is transmitting non-NAK handshakes based on the FIFO status. (value: 0)
     *          - B_0x1: The core is transmitting NAK handshakes on this endpoint. (value: 1)
     */
        /** @brief The core is transmitting non-NAK handshakes based on the FIFO status. */
    constexpr std::uint32_t OTG_DIEPCTL5_ISO_NAKSTS_B_0x0 = 0;
        /** @brief The core is transmitting NAK handshakes on this endpoint. */
    constexpr std::uint32_t OTG_DIEPCTL5_ISO_NAKSTS_B_0x1 = 1;

    /** @brief Endpoint type This is the transfer type supported by this logical endpoint. */
    using OTG_DIEPCTL5_ISO_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_DIEPCTL5_ISO_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_DIEPCTL5_ISO_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_DIEPCTL5_ISO_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_DIEPCTL5_ISO_EPTYP_B_0x3 = 3;

    /** @brief STALL handshake Applies to non-control, non-isochronous IN endpoints only (access type is rw). The application sets this bit to stall all tokens from the USB host to this endpoint. If a NAK bit, Global IN NAK, or Global OUT NAK is set along with this bit, the STALL bit takes priority. Only the application can clear this bit, never the core. */
    using OTG_DIEPCTL5_ISO_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx FIFO number These bits specify the FIFO number associated with this endpoint. Each active IN endpoint must be programmed to a separate FIFO number. This field is valid only for IN endpoints. */
    using OTG_DIEPCTL5_ISO_TXFNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear NAK A write to this bit clears the NAK bit for the endpoint. */
    using OTG_DIEPCTL5_ISO_CNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set NAK A write to this bit sets the NAK bit for the endpoint. Using this bit, the application can control the transmission of NAK handshakes on an endpoint. The core can also set this bit for OUT endpoints on a transfer completed interrupt, or after a SETUP is received on the endpoint. */
    using OTG_DIEPCTL5_ISO_SNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set even frame Applies to isochronous IN endpoints only. Writing to this field sets the Even/Odd frame (EONUM) field to even frame. */
    using OTG_DIEPCTL5_ISO_SEVNFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set odd frame Applies to isochronous IN and OUT endpoints only. Writing to this field sets the Even/Odd frame (EONUM) field to odd frame. */
    using OTG_DIEPCTL5_ISO_SODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disable The application sets this bit to stop transmitting/receiving data on an endpoint, even before the transfer for that endpoint is complete. The application must wait for the endpoint disabled interrupt before treating the endpoint as disabled. The core clears this bit before setting the endpoint disabled interrupt. The application must set this bit only if endpoint enable is already set for this endpoint. */
    using OTG_DIEPCTL5_ISO_EPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint enable The application sets this bit to start transmitting data on an endpoint. The core clears this bit before setting any of the following interrupts on this endpoint: SETUP phase done Endpoint disabled Transfer completed */
    using OTG_DIEPCTL5_ISO_EPENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint 5 interrupt register */
    using OTG_DIEPINT5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9A8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed interrupt This field indicates that the programmed transfer is complete on the AHB as well as on the USB, for this endpoint. */
    using OTG_DIEPINT5_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disabled interrupt This bit indicates that the endpoint is disabled per the applications request. */
    using OTG_DIEPINT5_EPDISD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error This is generated only in internal DMA mode when there is an AHB error during an AHB read/write. The application can read the corresponding endpoint DMA address register to get the error address. */
    using OTG_DIEPINT5_AHBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timeout condition Indicates that the core has detected a timeout condition on the USB for the last IN token on this endpoint. */
    using OTG_DIEPINT5_TOC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN token received when Tx FIFO is empty Indicates that an IN token was received when the associated Tx FIFO (periodic/non-periodic) was empty. This interrupt is asserted on the endpoint for which the IN token was received. */
    using OTG_DIEPINT5_ITTXFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN token received with EP mismatch Indicates that the data in the top of the non-periodic TxFIFO belongs to an endpoint other than the one for which the IN token was received. This interrupt is asserted on the endpoint for which the IN token was received. */
    using OTG_DIEPINT5_INEPNM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint NAK effective This bit can be cleared when the application clears the IN endpoint NAK by writing to the CNAK bit in OTG_DIEPCTLx. This interrupt indicates that the core has sampled the NAK bit set (either by the application or by the core). The interrupt indicates that the IN endpoint NAK bit set by the application has taken effect in the core. This interrupt does not guarantee that a NAK handshake is sent on the USB. A STALL bit takes priority over a NAK bit. */
    using OTG_DIEPINT5_INEPNE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit FIFO empty This interrupt is asserted when the Tx FIFO for this endpoint is either half or completely empty. The half or completely empty status is determined by the Tx FIFO Empty Level bit in the OTG_GAHBCFG register (TXFELVL bit in OTG_GAHBCFG). */
    using OTG_DIEPINT5_TXFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Fifo Underrun (TxfifoUndrn) The core generates this interrupt when it detects a transmit FIFO underrun condition for this endpoint. Dependency: This interrupt is valid only when Thresholding is enabled */
    using OTG_DIEPINT5_TXFIFOUDRN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet dropped status This bit indicates to the application that an ISOC OUT packet has been dropped. This bit does not have an associated mask bit and does not generate an interrupt. */
    using OTG_DIEPINT5_PKTDRPSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK input The core generates this interrupt when a NAK is transmitted or received by the device. In case of isochronous IN endpoints the interrupt gets generated when a zero length packet is transmitted due to unavailability of data in the Tx FIFO. */
    using OTG_DIEPINT5_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint 5 transfer size register */
    using OTG_DIEPTSIZ5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9B0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size This field contains the transfer size in bytes for the current endpoint. The core only interrupts the application after it has exhausted the transfer size amount of data. The transfer size can be set to the maximum packet size of the endpoint, to be interrupted at the end of each packet. The core decrements this field every time a packet from the external memory is written to the Tx FIFO. */
    using OTG_DIEPTSIZ5_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count Indicates the total number of USB packets that constitute the transfer size amount of data for this endpoint. This field is decremented every time a packet (maximum size or short packet) is read from the Tx FIFO. */
    using OTG_DIEPTSIZ5_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Multi count For periodic IN endpoints, this field indicates the number of packets that must be transmitted per frame on the USB. The core uses this field to calculate the data PID for isochronous IN endpoints. */
    using OTG_DIEPTSIZ5_MCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: 1 packet (value: 1)
     *          - B_0x2: 2 packets (value: 2)
     *          - B_0x3: 3 packets (value: 3)
     */
        /** @brief 1 packet */
    constexpr std::uint32_t OTG_DIEPTSIZ5_MCNT_B_0x1 = 1;
        /** @brief 2 packets */
    constexpr std::uint32_t OTG_DIEPTSIZ5_MCNT_B_0x2 = 2;
        /** @brief 3 packets */
    constexpr std::uint32_t OTG_DIEPTSIZ5_MCNT_B_0x3 = 3;

    /** @brief OTG device IN endpoint 5 DMA address register */
    using OTG_DIEPDMA5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9B4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA Address This field holds the start address in the external memory from which the data for the endpoint must be fetched. This register is incremented on every AHB transaction. */
    using OTG_DIEPDMA5_DMAADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint transmit FIFO status register */
    using OTG_DTXFSTS5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9B8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint Tx FIFO space available Indicates the amount of free space available in the endpoint Tx FIFO. Values are in terms of 32-bit words: 0xn: n words available Others: Reserved */
    using OTG_DTXFSTS5_INEPTFSAV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Endpoint Tx FIFO is full (value: 0)
     *          - B_0x1: 1 word available (value: 1)
     *          - B_0x2: 2 words available (value: 2)
     */
        /** @brief Endpoint Tx FIFO is full */
    constexpr std::uint32_t OTG_DTXFSTS5_INEPTFSAV_B_0x0 = 0;
        /** @brief 1 word available */
    constexpr std::uint32_t OTG_DTXFSTS5_INEPTFSAV_B_0x1 = 1;
        /** @brief 2 words available */
    constexpr std::uint32_t OTG_DTXFSTS5_INEPTFSAV_B_0x2 = 2;

    /** @brief OTG device IN endpoint 6 control register */
    using OTG_DIEPCTL6_INT_BULK = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9C0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size The application must program this field with the maximum packet size for the current logical endpoint. This value is in bytes. */
    using OTG_DIEPCTL6_INT_BULK_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB active endpoint Indicates whether this endpoint is active in the current configuration and interface. The core clears this bit for all endpoints (other than EP 0) after detecting a USB reset. After receiving the SetConfiguration and SetInterface commands, the application must program endpoint registers accordingly and set this bit. */
    using OTG_DIEPCTL6_INT_BULK_USBAEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint data PID Applies to interrupt/bulk IN endpoints only. Contains the PID of the packet to be received or transmitted on this endpoint. The application must program the PID of the first packet to be received or transmitted on this endpoint, after the endpoint is activated. The application uses the SD0PID and SD1PID register fields to program either DATA0 or DATA1 PID. */
    using OTG_DIEPCTL6_INT_BULK_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATA0 (value: 0)
     *          - B_0x1: DATA1 (value: 1)
     */
        /** @brief DATA0 */
    constexpr std::uint32_t OTG_DIEPCTL6_INT_BULK_DPID_B_0x0 = 0;
        /** @brief DATA1 */
    constexpr std::uint32_t OTG_DIEPCTL6_INT_BULK_DPID_B_0x1 = 1;

    /** @brief NAK status It indicates the following: When either the application or the core sets this bit: For non-isochronous IN endpoints: The core stops transmitting any data on an IN endpoint, even if there are data available in the Tx FIFO. For isochronous IN endpoints: The core sends out a zero-length data packet, even if there are data available in the Tx FIFO. Irrespective of this bits setting, the core always responds to SETUP data packets with an ACK handshake. */
    using OTG_DIEPCTL6_INT_BULK_NAKSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The core is transmitting non-NAK handshakes based on the FIFO status. (value: 0)
     *          - B_0x1: The core is transmitting NAK handshakes on this endpoint. (value: 1)
     */
        /** @brief The core is transmitting non-NAK handshakes based on the FIFO status. */
    constexpr std::uint32_t OTG_DIEPCTL6_INT_BULK_NAKSTS_B_0x0 = 0;
        /** @brief The core is transmitting NAK handshakes on this endpoint. */
    constexpr std::uint32_t OTG_DIEPCTL6_INT_BULK_NAKSTS_B_0x1 = 1;

    /** @brief Endpoint type This is the transfer type supported by this logical endpoint. */
    using OTG_DIEPCTL6_INT_BULK_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_DIEPCTL6_INT_BULK_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_DIEPCTL6_INT_BULK_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_DIEPCTL6_INT_BULK_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_DIEPCTL6_INT_BULK_EPTYP_B_0x3 = 3;

    /** @brief STALL handshake Applies to non-control, non-isochronous IN endpoints only (access type is rw). The application sets this bit to stall all tokens from the USB host to this endpoint. If a NAK bit, Global IN NAK, or Global OUT NAK is set along with this bit, the STALL bit takes priority. Only the application can clear this bit, never the core. */
    using OTG_DIEPCTL6_INT_BULK_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx FIFO number These bits specify the FIFO number associated with this endpoint. Each active IN endpoint must be programmed to a separate FIFO number. This field is valid only for IN endpoints. */
    using OTG_DIEPCTL6_INT_BULK_TXFNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear NAK A write to this bit clears the NAK bit for the endpoint. */
    using OTG_DIEPCTL6_INT_BULK_CNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set NAK A write to this bit sets the NAK bit for the endpoint. Using this bit, the application can control the transmission of NAK handshakes on an endpoint. The core can also set this bit for OUT endpoints on a transfer completed interrupt, or after a SETUP is received on the endpoint. */
    using OTG_DIEPCTL6_INT_BULK_SNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set DATA0 PID Applies to interrupt/bulk IN endpoints only. Writing to this field sets the endpoint data PID (DPID) field in this register to DATA0. */
    using OTG_DIEPCTL6_INT_BULK_SD0PID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set DATA1 PID Writing to this field sets the endpoint data PID (DPID) field in this register to DATA1. */
    using OTG_DIEPCTL6_INT_BULK_SD1PID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disable The application sets this bit to stop transmitting/receiving data on an endpoint, even before the transfer for that endpoint is complete. The application must wait for the endpoint disabled interrupt before treating the endpoint as disabled. The core clears this bit before setting the endpoint disabled interrupt. The application must set this bit only if endpoint enable is already set for this endpoint. */
    using OTG_DIEPCTL6_INT_BULK_EPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint enable The application sets this bit to start transmitting data on an endpoint. The core clears this bit before setting any of the following interrupts on this endpoint: SETUP phase done Endpoint disabled Transfer completed */
    using OTG_DIEPCTL6_INT_BULK_EPENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint 6 control register */
    using OTG_DIEPCTL6_ISO = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9C0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size The application must program this field with the maximum packet size for the current logical endpoint. This value is in bytes. */
    using OTG_DIEPCTL6_ISO_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB active endpoint Indicates whether this endpoint is active in the current configuration and interface. The core clears this bit for all endpoints (other than EP 0) after detecting a USB reset. After receiving the SetConfiguration and SetInterface commands, the application must program endpoint registers accordingly and set this bit. */
    using OTG_DIEPCTL6_ISO_USBAEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Even/odd frame Applies to isochronous IN endpoints only. Indicates the frame number in which the core transmits/receives isochronous data for this endpoint. The application must program the even/odd frame number in which it intends to transmit/receive isochronous data for this endpoint using the SEVNFRM and SODDFRM fields in this register. */
    using OTG_DIEPCTL6_ISO_EONUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Even frame (value: 0)
     *          - B_0x1: Odd frame (value: 1)
     */
        /** @brief Even frame */
    constexpr std::uint32_t OTG_DIEPCTL6_ISO_EONUM_B_0x0 = 0;
        /** @brief Odd frame */
    constexpr std::uint32_t OTG_DIEPCTL6_ISO_EONUM_B_0x1 = 1;

    /** @brief NAK status It indicates the following: When either the application or the core sets this bit: For non-isochronous IN endpoints: The core stops transmitting any data on an IN endpoint, even if there are data available in the Tx FIFO. For isochronous IN endpoints: The core sends out a zero-length data packet, even if there are data available in the Tx FIFO. Irrespective of this bits setting, the core always responds to SETUP data packets with an ACK handshake. */
    using OTG_DIEPCTL6_ISO_NAKSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The core is transmitting non-NAK handshakes based on the FIFO status. (value: 0)
     *          - B_0x1: The core is transmitting NAK handshakes on this endpoint. (value: 1)
     */
        /** @brief The core is transmitting non-NAK handshakes based on the FIFO status. */
    constexpr std::uint32_t OTG_DIEPCTL6_ISO_NAKSTS_B_0x0 = 0;
        /** @brief The core is transmitting NAK handshakes on this endpoint. */
    constexpr std::uint32_t OTG_DIEPCTL6_ISO_NAKSTS_B_0x1 = 1;

    /** @brief Endpoint type This is the transfer type supported by this logical endpoint. */
    using OTG_DIEPCTL6_ISO_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_DIEPCTL6_ISO_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_DIEPCTL6_ISO_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_DIEPCTL6_ISO_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_DIEPCTL6_ISO_EPTYP_B_0x3 = 3;

    /** @brief STALL handshake Applies to non-control, non-isochronous IN endpoints only (access type is rw). The application sets this bit to stall all tokens from the USB host to this endpoint. If a NAK bit, Global IN NAK, or Global OUT NAK is set along with this bit, the STALL bit takes priority. Only the application can clear this bit, never the core. */
    using OTG_DIEPCTL6_ISO_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx FIFO number These bits specify the FIFO number associated with this endpoint. Each active IN endpoint must be programmed to a separate FIFO number. This field is valid only for IN endpoints. */
    using OTG_DIEPCTL6_ISO_TXFNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear NAK A write to this bit clears the NAK bit for the endpoint. */
    using OTG_DIEPCTL6_ISO_CNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set NAK A write to this bit sets the NAK bit for the endpoint. Using this bit, the application can control the transmission of NAK handshakes on an endpoint. The core can also set this bit for OUT endpoints on a transfer completed interrupt, or after a SETUP is received on the endpoint. */
    using OTG_DIEPCTL6_ISO_SNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set even frame Applies to isochronous IN endpoints only. Writing to this field sets the Even/Odd frame (EONUM) field to even frame. */
    using OTG_DIEPCTL6_ISO_SEVNFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set odd frame Applies to isochronous IN and OUT endpoints only. Writing to this field sets the Even/Odd frame (EONUM) field to odd frame. */
    using OTG_DIEPCTL6_ISO_SODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disable The application sets this bit to stop transmitting/receiving data on an endpoint, even before the transfer for that endpoint is complete. The application must wait for the endpoint disabled interrupt before treating the endpoint as disabled. The core clears this bit before setting the endpoint disabled interrupt. The application must set this bit only if endpoint enable is already set for this endpoint. */
    using OTG_DIEPCTL6_ISO_EPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint enable The application sets this bit to start transmitting data on an endpoint. The core clears this bit before setting any of the following interrupts on this endpoint: SETUP phase done Endpoint disabled Transfer completed */
    using OTG_DIEPCTL6_ISO_EPENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint 6 interrupt register */
    using OTG_DIEPINT6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9C8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed interrupt This field indicates that the programmed transfer is complete on the AHB as well as on the USB, for this endpoint. */
    using OTG_DIEPINT6_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disabled interrupt This bit indicates that the endpoint is disabled per the applications request. */
    using OTG_DIEPINT6_EPDISD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error This is generated only in internal DMA mode when there is an AHB error during an AHB read/write. The application can read the corresponding endpoint DMA address register to get the error address. */
    using OTG_DIEPINT6_AHBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timeout condition Indicates that the core has detected a timeout condition on the USB for the last IN token on this endpoint. */
    using OTG_DIEPINT6_TOC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN token received when Tx FIFO is empty Indicates that an IN token was received when the associated Tx FIFO (periodic/non-periodic) was empty. This interrupt is asserted on the endpoint for which the IN token was received. */
    using OTG_DIEPINT6_ITTXFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN token received with EP mismatch Indicates that the data in the top of the non-periodic TxFIFO belongs to an endpoint other than the one for which the IN token was received. This interrupt is asserted on the endpoint for which the IN token was received. */
    using OTG_DIEPINT6_INEPNM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint NAK effective This bit can be cleared when the application clears the IN endpoint NAK by writing to the CNAK bit in OTG_DIEPCTLx. This interrupt indicates that the core has sampled the NAK bit set (either by the application or by the core). The interrupt indicates that the IN endpoint NAK bit set by the application has taken effect in the core. This interrupt does not guarantee that a NAK handshake is sent on the USB. A STALL bit takes priority over a NAK bit. */
    using OTG_DIEPINT6_INEPNE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit FIFO empty This interrupt is asserted when the Tx FIFO for this endpoint is either half or completely empty. The half or completely empty status is determined by the Tx FIFO Empty Level bit in the OTG_GAHBCFG register (TXFELVL bit in OTG_GAHBCFG). */
    using OTG_DIEPINT6_TXFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Fifo Underrun (TxfifoUndrn) The core generates this interrupt when it detects a transmit FIFO underrun condition for this endpoint. Dependency: This interrupt is valid only when Thresholding is enabled */
    using OTG_DIEPINT6_TXFIFOUDRN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet dropped status This bit indicates to the application that an ISOC OUT packet has been dropped. This bit does not have an associated mask bit and does not generate an interrupt. */
    using OTG_DIEPINT6_PKTDRPSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK input The core generates this interrupt when a NAK is transmitted or received by the device. In case of isochronous IN endpoints the interrupt gets generated when a zero length packet is transmitted due to unavailability of data in the Tx FIFO. */
    using OTG_DIEPINT6_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint 6 transfer size register */
    using OTG_DIEPTSIZ6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9D0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size This field contains the transfer size in bytes for the current endpoint. The core only interrupts the application after it has exhausted the transfer size amount of data. The transfer size can be set to the maximum packet size of the endpoint, to be interrupted at the end of each packet. The core decrements this field every time a packet from the external memory is written to the Tx FIFO. */
    using OTG_DIEPTSIZ6_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count Indicates the total number of USB packets that constitute the transfer size amount of data for this endpoint. This field is decremented every time a packet (maximum size or short packet) is read from the Tx FIFO. */
    using OTG_DIEPTSIZ6_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Multi count For periodic IN endpoints, this field indicates the number of packets that must be transmitted per frame on the USB. The core uses this field to calculate the data PID for isochronous IN endpoints. */
    using OTG_DIEPTSIZ6_MCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: 1 packet (value: 1)
     *          - B_0x2: 2 packets (value: 2)
     *          - B_0x3: 3 packets (value: 3)
     */
        /** @brief 1 packet */
    constexpr std::uint32_t OTG_DIEPTSIZ6_MCNT_B_0x1 = 1;
        /** @brief 2 packets */
    constexpr std::uint32_t OTG_DIEPTSIZ6_MCNT_B_0x2 = 2;
        /** @brief 3 packets */
    constexpr std::uint32_t OTG_DIEPTSIZ6_MCNT_B_0x3 = 3;

    /** @brief OTG device IN endpoint 6 DMA address register */
    using OTG_DIEPDMA6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9D4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA Address This field holds the start address in the external memory from which the data for the endpoint must be fetched. This register is incremented on every AHB transaction. */
    using OTG_DIEPDMA6_DMAADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint transmit FIFO status register */
    using OTG_DTXFSTS6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9D8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint Tx FIFO space available Indicates the amount of free space available in the endpoint Tx FIFO. Values are in terms of 32-bit words: 0xn: n words available Others: Reserved */
    using OTG_DTXFSTS6_INEPTFSAV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Endpoint Tx FIFO is full (value: 0)
     *          - B_0x1: 1 word available (value: 1)
     *          - B_0x2: 2 words available (value: 2)
     */
        /** @brief Endpoint Tx FIFO is full */
    constexpr std::uint32_t OTG_DTXFSTS6_INEPTFSAV_B_0x0 = 0;
        /** @brief 1 word available */
    constexpr std::uint32_t OTG_DTXFSTS6_INEPTFSAV_B_0x1 = 1;
        /** @brief 2 words available */
    constexpr std::uint32_t OTG_DTXFSTS6_INEPTFSAV_B_0x2 = 2;

    /** @brief OTG device IN endpoint 7 control register */
    using OTG_DIEPCTL7_INT_BULK = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9E0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size The application must program this field with the maximum packet size for the current logical endpoint. This value is in bytes. */
    using OTG_DIEPCTL7_INT_BULK_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB active endpoint Indicates whether this endpoint is active in the current configuration and interface. The core clears this bit for all endpoints (other than EP 0) after detecting a USB reset. After receiving the SetConfiguration and SetInterface commands, the application must program endpoint registers accordingly and set this bit. */
    using OTG_DIEPCTL7_INT_BULK_USBAEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint data PID Applies to interrupt/bulk IN endpoints only. Contains the PID of the packet to be received or transmitted on this endpoint. The application must program the PID of the first packet to be received or transmitted on this endpoint, after the endpoint is activated. The application uses the SD0PID and SD1PID register fields to program either DATA0 or DATA1 PID. */
    using OTG_DIEPCTL7_INT_BULK_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATA0 (value: 0)
     *          - B_0x1: DATA1 (value: 1)
     */
        /** @brief DATA0 */
    constexpr std::uint32_t OTG_DIEPCTL7_INT_BULK_DPID_B_0x0 = 0;
        /** @brief DATA1 */
    constexpr std::uint32_t OTG_DIEPCTL7_INT_BULK_DPID_B_0x1 = 1;

    /** @brief NAK status It indicates the following: When either the application or the core sets this bit: For non-isochronous IN endpoints: The core stops transmitting any data on an IN endpoint, even if there are data available in the Tx FIFO. For isochronous IN endpoints: The core sends out a zero-length data packet, even if there are data available in the Tx FIFO. Irrespective of this bits setting, the core always responds to SETUP data packets with an ACK handshake. */
    using OTG_DIEPCTL7_INT_BULK_NAKSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The core is transmitting non-NAK handshakes based on the FIFO status. (value: 0)
     *          - B_0x1: The core is transmitting NAK handshakes on this endpoint. (value: 1)
     */
        /** @brief The core is transmitting non-NAK handshakes based on the FIFO status. */
    constexpr std::uint32_t OTG_DIEPCTL7_INT_BULK_NAKSTS_B_0x0 = 0;
        /** @brief The core is transmitting NAK handshakes on this endpoint. */
    constexpr std::uint32_t OTG_DIEPCTL7_INT_BULK_NAKSTS_B_0x1 = 1;

    /** @brief Endpoint type This is the transfer type supported by this logical endpoint. */
    using OTG_DIEPCTL7_INT_BULK_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_DIEPCTL7_INT_BULK_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_DIEPCTL7_INT_BULK_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_DIEPCTL7_INT_BULK_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_DIEPCTL7_INT_BULK_EPTYP_B_0x3 = 3;

    /** @brief STALL handshake Applies to non-control, non-isochronous IN endpoints only (access type is rw). The application sets this bit to stall all tokens from the USB host to this endpoint. If a NAK bit, Global IN NAK, or Global OUT NAK is set along with this bit, the STALL bit takes priority. Only the application can clear this bit, never the core. */
    using OTG_DIEPCTL7_INT_BULK_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx FIFO number These bits specify the FIFO number associated with this endpoint. Each active IN endpoint must be programmed to a separate FIFO number. This field is valid only for IN endpoints. */
    using OTG_DIEPCTL7_INT_BULK_TXFNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear NAK A write to this bit clears the NAK bit for the endpoint. */
    using OTG_DIEPCTL7_INT_BULK_CNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set NAK A write to this bit sets the NAK bit for the endpoint. Using this bit, the application can control the transmission of NAK handshakes on an endpoint. The core can also set this bit for OUT endpoints on a transfer completed interrupt, or after a SETUP is received on the endpoint. */
    using OTG_DIEPCTL7_INT_BULK_SNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set DATA0 PID Applies to interrupt/bulk IN endpoints only. Writing to this field sets the endpoint data PID (DPID) field in this register to DATA0. */
    using OTG_DIEPCTL7_INT_BULK_SD0PID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set DATA1 PID Writing to this field sets the endpoint data PID (DPID) field in this register to DATA1. */
    using OTG_DIEPCTL7_INT_BULK_SD1PID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disable The application sets this bit to stop transmitting/receiving data on an endpoint, even before the transfer for that endpoint is complete. The application must wait for the endpoint disabled interrupt before treating the endpoint as disabled. The core clears this bit before setting the endpoint disabled interrupt. The application must set this bit only if endpoint enable is already set for this endpoint. */
    using OTG_DIEPCTL7_INT_BULK_EPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint enable The application sets this bit to start transmitting data on an endpoint. The core clears this bit before setting any of the following interrupts on this endpoint: SETUP phase done Endpoint disabled Transfer completed */
    using OTG_DIEPCTL7_INT_BULK_EPENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint 7 control register */
    using OTG_DIEPCTL7_ISO = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9E0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size The application must program this field with the maximum packet size for the current logical endpoint. This value is in bytes. */
    using OTG_DIEPCTL7_ISO_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB active endpoint Indicates whether this endpoint is active in the current configuration and interface. The core clears this bit for all endpoints (other than EP 0) after detecting a USB reset. After receiving the SetConfiguration and SetInterface commands, the application must program endpoint registers accordingly and set this bit. */
    using OTG_DIEPCTL7_ISO_USBAEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Even/odd frame Applies to isochronous IN endpoints only. Indicates the frame number in which the core transmits/receives isochronous data for this endpoint. The application must program the even/odd frame number in which it intends to transmit/receive isochronous data for this endpoint using the SEVNFRM and SODDFRM fields in this register. */
    using OTG_DIEPCTL7_ISO_EONUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Even frame (value: 0)
     *          - B_0x1: Odd frame (value: 1)
     */
        /** @brief Even frame */
    constexpr std::uint32_t OTG_DIEPCTL7_ISO_EONUM_B_0x0 = 0;
        /** @brief Odd frame */
    constexpr std::uint32_t OTG_DIEPCTL7_ISO_EONUM_B_0x1 = 1;

    /** @brief NAK status It indicates the following: When either the application or the core sets this bit: For non-isochronous IN endpoints: The core stops transmitting any data on an IN endpoint, even if there are data available in the Tx FIFO. For isochronous IN endpoints: The core sends out a zero-length data packet, even if there are data available in the Tx FIFO. Irrespective of this bits setting, the core always responds to SETUP data packets with an ACK handshake. */
    using OTG_DIEPCTL7_ISO_NAKSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The core is transmitting non-NAK handshakes based on the FIFO status. (value: 0)
     *          - B_0x1: The core is transmitting NAK handshakes on this endpoint. (value: 1)
     */
        /** @brief The core is transmitting non-NAK handshakes based on the FIFO status. */
    constexpr std::uint32_t OTG_DIEPCTL7_ISO_NAKSTS_B_0x0 = 0;
        /** @brief The core is transmitting NAK handshakes on this endpoint. */
    constexpr std::uint32_t OTG_DIEPCTL7_ISO_NAKSTS_B_0x1 = 1;

    /** @brief Endpoint type This is the transfer type supported by this logical endpoint. */
    using OTG_DIEPCTL7_ISO_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_DIEPCTL7_ISO_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_DIEPCTL7_ISO_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_DIEPCTL7_ISO_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_DIEPCTL7_ISO_EPTYP_B_0x3 = 3;

    /** @brief STALL handshake Applies to non-control, non-isochronous IN endpoints only (access type is rw). The application sets this bit to stall all tokens from the USB host to this endpoint. If a NAK bit, Global IN NAK, or Global OUT NAK is set along with this bit, the STALL bit takes priority. Only the application can clear this bit, never the core. */
    using OTG_DIEPCTL7_ISO_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx FIFO number These bits specify the FIFO number associated with this endpoint. Each active IN endpoint must be programmed to a separate FIFO number. This field is valid only for IN endpoints. */
    using OTG_DIEPCTL7_ISO_TXFNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear NAK A write to this bit clears the NAK bit for the endpoint. */
    using OTG_DIEPCTL7_ISO_CNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set NAK A write to this bit sets the NAK bit for the endpoint. Using this bit, the application can control the transmission of NAK handshakes on an endpoint. The core can also set this bit for OUT endpoints on a transfer completed interrupt, or after a SETUP is received on the endpoint. */
    using OTG_DIEPCTL7_ISO_SNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set even frame Applies to isochronous IN endpoints only. Writing to this field sets the Even/Odd frame (EONUM) field to even frame. */
    using OTG_DIEPCTL7_ISO_SEVNFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set odd frame Applies to isochronous IN and OUT endpoints only. Writing to this field sets the Even/Odd frame (EONUM) field to odd frame. */
    using OTG_DIEPCTL7_ISO_SODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disable The application sets this bit to stop transmitting/receiving data on an endpoint, even before the transfer for that endpoint is complete. The application must wait for the endpoint disabled interrupt before treating the endpoint as disabled. The core clears this bit before setting the endpoint disabled interrupt. The application must set this bit only if endpoint enable is already set for this endpoint. */
    using OTG_DIEPCTL7_ISO_EPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint enable The application sets this bit to start transmitting data on an endpoint. The core clears this bit before setting any of the following interrupts on this endpoint: SETUP phase done Endpoint disabled Transfer completed */
    using OTG_DIEPCTL7_ISO_EPENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint 7 interrupt register */
    using OTG_DIEPINT7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9E8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed interrupt This field indicates that the programmed transfer is complete on the AHB as well as on the USB, for this endpoint. */
    using OTG_DIEPINT7_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disabled interrupt This bit indicates that the endpoint is disabled per the applications request. */
    using OTG_DIEPINT7_EPDISD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error This is generated only in internal DMA mode when there is an AHB error during an AHB read/write. The application can read the corresponding endpoint DMA address register to get the error address. */
    using OTG_DIEPINT7_AHBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timeout condition Indicates that the core has detected a timeout condition on the USB for the last IN token on this endpoint. */
    using OTG_DIEPINT7_TOC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN token received when Tx FIFO is empty Indicates that an IN token was received when the associated Tx FIFO (periodic/non-periodic) was empty. This interrupt is asserted on the endpoint for which the IN token was received. */
    using OTG_DIEPINT7_ITTXFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN token received with EP mismatch Indicates that the data in the top of the non-periodic TxFIFO belongs to an endpoint other than the one for which the IN token was received. This interrupt is asserted on the endpoint for which the IN token was received. */
    using OTG_DIEPINT7_INEPNM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint NAK effective This bit can be cleared when the application clears the IN endpoint NAK by writing to the CNAK bit in OTG_DIEPCTLx. This interrupt indicates that the core has sampled the NAK bit set (either by the application or by the core). The interrupt indicates that the IN endpoint NAK bit set by the application has taken effect in the core. This interrupt does not guarantee that a NAK handshake is sent on the USB. A STALL bit takes priority over a NAK bit. */
    using OTG_DIEPINT7_INEPNE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit FIFO empty This interrupt is asserted when the Tx FIFO for this endpoint is either half or completely empty. The half or completely empty status is determined by the Tx FIFO Empty Level bit in the OTG_GAHBCFG register (TXFELVL bit in OTG_GAHBCFG). */
    using OTG_DIEPINT7_TXFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Fifo Underrun (TxfifoUndrn) The core generates this interrupt when it detects a transmit FIFO underrun condition for this endpoint. Dependency: This interrupt is valid only when Thresholding is enabled */
    using OTG_DIEPINT7_TXFIFOUDRN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet dropped status This bit indicates to the application that an ISOC OUT packet has been dropped. This bit does not have an associated mask bit and does not generate an interrupt. */
    using OTG_DIEPINT7_PKTDRPSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK input The core generates this interrupt when a NAK is transmitted or received by the device. In case of isochronous IN endpoints the interrupt gets generated when a zero length packet is transmitted due to unavailability of data in the Tx FIFO. */
    using OTG_DIEPINT7_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint 7 transfer size register */
    using OTG_DIEPTSIZ7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9F0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size This field contains the transfer size in bytes for the current endpoint. The core only interrupts the application after it has exhausted the transfer size amount of data. The transfer size can be set to the maximum packet size of the endpoint, to be interrupted at the end of each packet. The core decrements this field every time a packet from the external memory is written to the Tx FIFO. */
    using OTG_DIEPTSIZ7_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count Indicates the total number of USB packets that constitute the transfer size amount of data for this endpoint. This field is decremented every time a packet (maximum size or short packet) is read from the Tx FIFO. */
    using OTG_DIEPTSIZ7_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Multi count For periodic IN endpoints, this field indicates the number of packets that must be transmitted per frame on the USB. The core uses this field to calculate the data PID for isochronous IN endpoints. */
    using OTG_DIEPTSIZ7_MCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: 1 packet (value: 1)
     *          - B_0x2: 2 packets (value: 2)
     *          - B_0x3: 3 packets (value: 3)
     */
        /** @brief 1 packet */
    constexpr std::uint32_t OTG_DIEPTSIZ7_MCNT_B_0x1 = 1;
        /** @brief 2 packets */
    constexpr std::uint32_t OTG_DIEPTSIZ7_MCNT_B_0x2 = 2;
        /** @brief 3 packets */
    constexpr std::uint32_t OTG_DIEPTSIZ7_MCNT_B_0x3 = 3;

    /** @brief OTG device IN endpoint 7 DMA address register */
    using OTG_DIEPDMA7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9F4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA Address This field holds the start address in the external memory from which the data for the endpoint must be fetched. This register is incremented on every AHB transaction. */
    using OTG_DIEPDMA7_DMAADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint transmit FIFO status register */
    using OTG_DTXFSTS7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9F8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint Tx FIFO space available Indicates the amount of free space available in the endpoint Tx FIFO. Values are in terms of 32-bit words: 0xn: n words available Others: Reserved */
    using OTG_DTXFSTS7_INEPTFSAV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Endpoint Tx FIFO is full (value: 0)
     *          - B_0x1: 1 word available (value: 1)
     *          - B_0x2: 2 words available (value: 2)
     */
        /** @brief Endpoint Tx FIFO is full */
    constexpr std::uint32_t OTG_DTXFSTS7_INEPTFSAV_B_0x0 = 0;
        /** @brief 1 word available */
    constexpr std::uint32_t OTG_DTXFSTS7_INEPTFSAV_B_0x1 = 1;
        /** @brief 2 words available */
    constexpr std::uint32_t OTG_DTXFSTS7_INEPTFSAV_B_0x2 = 2;

    /** @brief OTG device IN endpoint 8 control register */
    using OTG_DIEPCTL8_INT_BULK = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA00, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size The application must program this field with the maximum packet size for the current logical endpoint. This value is in bytes. */
    using OTG_DIEPCTL8_INT_BULK_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB active endpoint Indicates whether this endpoint is active in the current configuration and interface. The core clears this bit for all endpoints (other than EP 0) after detecting a USB reset. After receiving the SetConfiguration and SetInterface commands, the application must program endpoint registers accordingly and set this bit. */
    using OTG_DIEPCTL8_INT_BULK_USBAEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint data PID Applies to interrupt/bulk IN endpoints only. Contains the PID of the packet to be received or transmitted on this endpoint. The application must program the PID of the first packet to be received or transmitted on this endpoint, after the endpoint is activated. The application uses the SD0PID and SD1PID register fields to program either DATA0 or DATA1 PID. */
    using OTG_DIEPCTL8_INT_BULK_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATA0 (value: 0)
     *          - B_0x1: DATA1 (value: 1)
     */
        /** @brief DATA0 */
    constexpr std::uint32_t OTG_DIEPCTL8_INT_BULK_DPID_B_0x0 = 0;
        /** @brief DATA1 */
    constexpr std::uint32_t OTG_DIEPCTL8_INT_BULK_DPID_B_0x1 = 1;

    /** @brief NAK status It indicates the following: When either the application or the core sets this bit: For non-isochronous IN endpoints: The core stops transmitting any data on an IN endpoint, even if there are data available in the Tx FIFO. For isochronous IN endpoints: The core sends out a zero-length data packet, even if there are data available in the Tx FIFO. Irrespective of this bits setting, the core always responds to SETUP data packets with an ACK handshake. */
    using OTG_DIEPCTL8_INT_BULK_NAKSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The core is transmitting non-NAK handshakes based on the FIFO status. (value: 0)
     *          - B_0x1: The core is transmitting NAK handshakes on this endpoint. (value: 1)
     */
        /** @brief The core is transmitting non-NAK handshakes based on the FIFO status. */
    constexpr std::uint32_t OTG_DIEPCTL8_INT_BULK_NAKSTS_B_0x0 = 0;
        /** @brief The core is transmitting NAK handshakes on this endpoint. */
    constexpr std::uint32_t OTG_DIEPCTL8_INT_BULK_NAKSTS_B_0x1 = 1;

    /** @brief Endpoint type This is the transfer type supported by this logical endpoint. */
    using OTG_DIEPCTL8_INT_BULK_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_DIEPCTL8_INT_BULK_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_DIEPCTL8_INT_BULK_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_DIEPCTL8_INT_BULK_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_DIEPCTL8_INT_BULK_EPTYP_B_0x3 = 3;

    /** @brief STALL handshake Applies to non-control, non-isochronous IN endpoints only (access type is rw). The application sets this bit to stall all tokens from the USB host to this endpoint. If a NAK bit, Global IN NAK, or Global OUT NAK is set along with this bit, the STALL bit takes priority. Only the application can clear this bit, never the core. */
    using OTG_DIEPCTL8_INT_BULK_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx FIFO number These bits specify the FIFO number associated with this endpoint. Each active IN endpoint must be programmed to a separate FIFO number. This field is valid only for IN endpoints. */
    using OTG_DIEPCTL8_INT_BULK_TXFNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear NAK A write to this bit clears the NAK bit for the endpoint. */
    using OTG_DIEPCTL8_INT_BULK_CNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set NAK A write to this bit sets the NAK bit for the endpoint. Using this bit, the application can control the transmission of NAK handshakes on an endpoint. The core can also set this bit for OUT endpoints on a transfer completed interrupt, or after a SETUP is received on the endpoint. */
    using OTG_DIEPCTL8_INT_BULK_SNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set DATA0 PID Applies to interrupt/bulk IN endpoints only. Writing to this field sets the endpoint data PID (DPID) field in this register to DATA0. */
    using OTG_DIEPCTL8_INT_BULK_SD0PID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set DATA1 PID Writing to this field sets the endpoint data PID (DPID) field in this register to DATA1. */
    using OTG_DIEPCTL8_INT_BULK_SD1PID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disable The application sets this bit to stop transmitting/receiving data on an endpoint, even before the transfer for that endpoint is complete. The application must wait for the endpoint disabled interrupt before treating the endpoint as disabled. The core clears this bit before setting the endpoint disabled interrupt. The application must set this bit only if endpoint enable is already set for this endpoint. */
    using OTG_DIEPCTL8_INT_BULK_EPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint enable The application sets this bit to start transmitting data on an endpoint. The core clears this bit before setting any of the following interrupts on this endpoint: SETUP phase done Endpoint disabled Transfer completed */
    using OTG_DIEPCTL8_INT_BULK_EPENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint 8 control register */
    using OTG_DIEPCTL8_ISO = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA00, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size The application must program this field with the maximum packet size for the current logical endpoint. This value is in bytes. */
    using OTG_DIEPCTL8_ISO_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB active endpoint Indicates whether this endpoint is active in the current configuration and interface. The core clears this bit for all endpoints (other than EP 0) after detecting a USB reset. After receiving the SetConfiguration and SetInterface commands, the application must program endpoint registers accordingly and set this bit. */
    using OTG_DIEPCTL8_ISO_USBAEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Even/odd frame Applies to isochronous IN endpoints only. Indicates the frame number in which the core transmits/receives isochronous data for this endpoint. The application must program the even/odd frame number in which it intends to transmit/receive isochronous data for this endpoint using the SEVNFRM and SODDFRM fields in this register. */
    using OTG_DIEPCTL8_ISO_EONUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Even frame (value: 0)
     *          - B_0x1: Odd frame (value: 1)
     */
        /** @brief Even frame */
    constexpr std::uint32_t OTG_DIEPCTL8_ISO_EONUM_B_0x0 = 0;
        /** @brief Odd frame */
    constexpr std::uint32_t OTG_DIEPCTL8_ISO_EONUM_B_0x1 = 1;

    /** @brief NAK status It indicates the following: When either the application or the core sets this bit: For non-isochronous IN endpoints: The core stops transmitting any data on an IN endpoint, even if there are data available in the Tx FIFO. For isochronous IN endpoints: The core sends out a zero-length data packet, even if there are data available in the Tx FIFO. Irrespective of this bits setting, the core always responds to SETUP data packets with an ACK handshake. */
    using OTG_DIEPCTL8_ISO_NAKSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The core is transmitting non-NAK handshakes based on the FIFO status. (value: 0)
     *          - B_0x1: The core is transmitting NAK handshakes on this endpoint. (value: 1)
     */
        /** @brief The core is transmitting non-NAK handshakes based on the FIFO status. */
    constexpr std::uint32_t OTG_DIEPCTL8_ISO_NAKSTS_B_0x0 = 0;
        /** @brief The core is transmitting NAK handshakes on this endpoint. */
    constexpr std::uint32_t OTG_DIEPCTL8_ISO_NAKSTS_B_0x1 = 1;

    /** @brief Endpoint type This is the transfer type supported by this logical endpoint. */
    using OTG_DIEPCTL8_ISO_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_DIEPCTL8_ISO_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_DIEPCTL8_ISO_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_DIEPCTL8_ISO_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_DIEPCTL8_ISO_EPTYP_B_0x3 = 3;

    /** @brief STALL handshake Applies to non-control, non-isochronous IN endpoints only (access type is rw). The application sets this bit to stall all tokens from the USB host to this endpoint. If a NAK bit, Global IN NAK, or Global OUT NAK is set along with this bit, the STALL bit takes priority. Only the application can clear this bit, never the core. */
    using OTG_DIEPCTL8_ISO_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx FIFO number These bits specify the FIFO number associated with this endpoint. Each active IN endpoint must be programmed to a separate FIFO number. This field is valid only for IN endpoints. */
    using OTG_DIEPCTL8_ISO_TXFNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear NAK A write to this bit clears the NAK bit for the endpoint. */
    using OTG_DIEPCTL8_ISO_CNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set NAK A write to this bit sets the NAK bit for the endpoint. Using this bit, the application can control the transmission of NAK handshakes on an endpoint. The core can also set this bit for OUT endpoints on a transfer completed interrupt, or after a SETUP is received on the endpoint. */
    using OTG_DIEPCTL8_ISO_SNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set even frame Applies to isochronous IN endpoints only. Writing to this field sets the Even/Odd frame (EONUM) field to even frame. */
    using OTG_DIEPCTL8_ISO_SEVNFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set odd frame Applies to isochronous IN and OUT endpoints only. Writing to this field sets the Even/Odd frame (EONUM) field to odd frame. */
    using OTG_DIEPCTL8_ISO_SODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disable The application sets this bit to stop transmitting/receiving data on an endpoint, even before the transfer for that endpoint is complete. The application must wait for the endpoint disabled interrupt before treating the endpoint as disabled. The core clears this bit before setting the endpoint disabled interrupt. The application must set this bit only if endpoint enable is already set for this endpoint. */
    using OTG_DIEPCTL8_ISO_EPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint enable The application sets this bit to start transmitting data on an endpoint. The core clears this bit before setting any of the following interrupts on this endpoint: SETUP phase done Endpoint disabled Transfer completed */
    using OTG_DIEPCTL8_ISO_EPENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint 8 interrupt register */
    using OTG_DIEPINT8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA08, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed interrupt This field indicates that the programmed transfer is complete on the AHB as well as on the USB, for this endpoint. */
    using OTG_DIEPINT8_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disabled interrupt This bit indicates that the endpoint is disabled per the applications request. */
    using OTG_DIEPINT8_EPDISD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error This is generated only in internal DMA mode when there is an AHB error during an AHB read/write. The application can read the corresponding endpoint DMA address register to get the error address. */
    using OTG_DIEPINT8_AHBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timeout condition Indicates that the core has detected a timeout condition on the USB for the last IN token on this endpoint. */
    using OTG_DIEPINT8_TOC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN token received when Tx FIFO is empty Indicates that an IN token was received when the associated Tx FIFO (periodic/non-periodic) was empty. This interrupt is asserted on the endpoint for which the IN token was received. */
    using OTG_DIEPINT8_ITTXFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN token received with EP mismatch Indicates that the data in the top of the non-periodic TxFIFO belongs to an endpoint other than the one for which the IN token was received. This interrupt is asserted on the endpoint for which the IN token was received. */
    using OTG_DIEPINT8_INEPNM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint NAK effective This bit can be cleared when the application clears the IN endpoint NAK by writing to the CNAK bit in OTG_DIEPCTLx. This interrupt indicates that the core has sampled the NAK bit set (either by the application or by the core). The interrupt indicates that the IN endpoint NAK bit set by the application has taken effect in the core. This interrupt does not guarantee that a NAK handshake is sent on the USB. A STALL bit takes priority over a NAK bit. */
    using OTG_DIEPINT8_INEPNE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit FIFO empty This interrupt is asserted when the Tx FIFO for this endpoint is either half or completely empty. The half or completely empty status is determined by the Tx FIFO Empty Level bit in the OTG_GAHBCFG register (TXFELVL bit in OTG_GAHBCFG). */
    using OTG_DIEPINT8_TXFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Fifo Underrun (TxfifoUndrn) The core generates this interrupt when it detects a transmit FIFO underrun condition for this endpoint. Dependency: This interrupt is valid only when Thresholding is enabled */
    using OTG_DIEPINT8_TXFIFOUDRN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet dropped status This bit indicates to the application that an ISOC OUT packet has been dropped. This bit does not have an associated mask bit and does not generate an interrupt. */
    using OTG_DIEPINT8_PKTDRPSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK input The core generates this interrupt when a NAK is transmitted or received by the device. In case of isochronous IN endpoints the interrupt gets generated when a zero length packet is transmitted due to unavailability of data in the Tx FIFO. */
    using OTG_DIEPINT8_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint 8 transfer size register */
    using OTG_DIEPTSIZ8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size This field contains the transfer size in bytes for the current endpoint. The core only interrupts the application after it has exhausted the transfer size amount of data. The transfer size can be set to the maximum packet size of the endpoint, to be interrupted at the end of each packet. The core decrements this field every time a packet from the external memory is written to the Tx FIFO. */
    using OTG_DIEPTSIZ8_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count Indicates the total number of USB packets that constitute the transfer size amount of data for this endpoint. This field is decremented every time a packet (maximum size or short packet) is read from the Tx FIFO. */
    using OTG_DIEPTSIZ8_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Multi count For periodic IN endpoints, this field indicates the number of packets that must be transmitted per frame on the USB. The core uses this field to calculate the data PID for isochronous IN endpoints. */
    using OTG_DIEPTSIZ8_MCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: 1 packet (value: 1)
     *          - B_0x2: 2 packets (value: 2)
     *          - B_0x3: 3 packets (value: 3)
     */
        /** @brief 1 packet */
    constexpr std::uint32_t OTG_DIEPTSIZ8_MCNT_B_0x1 = 1;
        /** @brief 2 packets */
    constexpr std::uint32_t OTG_DIEPTSIZ8_MCNT_B_0x2 = 2;
        /** @brief 3 packets */
    constexpr std::uint32_t OTG_DIEPTSIZ8_MCNT_B_0x3 = 3;

    /** @brief OTG device IN endpoint 8 DMA address register */
    using OTG_DIEPDMA8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA Address This field holds the start address in the external memory from which the data for the endpoint must be fetched. This register is incremented on every AHB transaction. */
    using OTG_DIEPDMA8_DMAADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device IN endpoint transmit FIFO status register */
    using OTG_DTXFSTS8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint Tx FIFO space available Indicates the amount of free space available in the endpoint Tx FIFO. Values are in terms of 32-bit words: 0xn: n words available Others: Reserved */
    using OTG_DTXFSTS8_INEPTFSAV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Endpoint Tx FIFO is full (value: 0)
     *          - B_0x1: 1 word available (value: 1)
     *          - B_0x2: 2 words available (value: 2)
     */
        /** @brief Endpoint Tx FIFO is full */
    constexpr std::uint32_t OTG_DTXFSTS8_INEPTFSAV_B_0x0 = 0;
        /** @brief 1 word available */
    constexpr std::uint32_t OTG_DTXFSTS8_INEPTFSAV_B_0x1 = 1;
        /** @brief 2 words available */
    constexpr std::uint32_t OTG_DTXFSTS8_INEPTFSAV_B_0x2 = 2;

    /** @brief OTG device control OUT endpoint 0 control register */
    using OTG_DOEPCTL0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB00, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size The maximum packet size for control OUT endpoint 0 is the same as what is programmed in control IN endpoint 0. */
    using OTG_DOEPCTL0_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 64 bytes (value: 0)
     *          - B_0x1: 32 bytes (value: 1)
     *          - B_0x2: 16 bytes (value: 2)
     *          - B_0x3: 8 bytes (value: 3)
     */
        /** @brief 64 bytes */
    constexpr std::uint32_t OTG_DOEPCTL0_MPSIZ_B_0x0 = 0;
        /** @brief 32 bytes */
    constexpr std::uint32_t OTG_DOEPCTL0_MPSIZ_B_0x1 = 1;
        /** @brief 16 bytes */
    constexpr std::uint32_t OTG_DOEPCTL0_MPSIZ_B_0x2 = 2;
        /** @brief 8 bytes */
    constexpr std::uint32_t OTG_DOEPCTL0_MPSIZ_B_0x3 = 3;

    /** @brief USB active endpoint This bit is always set to 1, indicating that a control endpoint 0 is always active in all configurations and interfaces. */
    using OTG_DOEPCTL0_USBAEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK status Indicates the following: When either the application or the core sets this bit, the core stops receiving data, even if there is space in the Rx FIFO to accommodate the incoming packet. Irrespective of this bits setting, the core always responds to SETUP data packets with an ACK handshake. */
    using OTG_DOEPCTL0_NAKSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The core is transmitting non-NAK handshakes based on the FIFO status. (value: 0)
     *          - B_0x1: The core is transmitting NAK handshakes on this endpoint. (value: 1)
     */
        /** @brief The core is transmitting non-NAK handshakes based on the FIFO status. */
    constexpr std::uint32_t OTG_DOEPCTL0_NAKSTS_B_0x0 = 0;
        /** @brief The core is transmitting NAK handshakes on this endpoint. */
    constexpr std::uint32_t OTG_DOEPCTL0_NAKSTS_B_0x1 = 1;

    /** @brief Endpoint type Hardcoded to 00 for control. */
    using OTG_DOEPCTL0_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Snoop mode This bit configures the endpoint to Snoop mode. In Snoop mode, the core does not check the correctness of OUT packets before transferring them to application memory. */
    using OTG_DOEPCTL0_SNPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL handshake The application can only set this bit, and the core clears it, when a SETUP token is received for this endpoint. If a NAK bit or Global OUT NAK is set along with this bit, the STALL bit takes priority. Irrespective of this bits setting, the core always responds to SETUP data packets with an ACK handshake. */
    using OTG_DOEPCTL0_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear NAK A write to this bit clears the NAK bit for the endpoint. */
    using OTG_DOEPCTL0_CNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set NAK A write to this bit sets the NAK bit for the endpoint. Using this bit, the application can control the transmission of NAK handshakes on an endpoint. The core can also set this bit on a transfer completed interrupt, or after a SETUP is received on the endpoint. */
    using OTG_DOEPCTL0_SNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disable The application cannot disable control OUT endpoint 0. */
    using OTG_DOEPCTL0_EPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint enable The application sets this bit to start transmitting data on endpoint 0. The core clears this bit before setting any of the following interrupts on this endpoint: SETUP phase done Endpoint disabled Transfer completed */
    using OTG_DOEPCTL0_EPENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device OUT endpoint 0 interrupt register */
    using OTG_DOEPINT0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB08, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed interrupt This field indicates that the programmed transfer is complete on the AHB as well as on the USB, for this endpoint. */
    using OTG_DOEPINT0_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disabled interrupt This bit indicates that the endpoint is disabled per the applications request. */
    using OTG_DOEPINT0_EPDISD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error This is generated only in internal DMA mode when there is an AHB error during an AHB read/write. The application can read the corresponding endpoint DMA address register to get the error address. */
    using OTG_DOEPINT0_AHBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SETUP phase done Applies to control OUT endpoint only.Indicates that the SETUP phase for the control endpoint is complete and no more back-to-back SETUP packets were received for the current control transfer. On this interrupt, the application can decode the received SETUP data packet. */
    using OTG_DOEPINT0_STUP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OUT token received when endpoint disabled Applies only to control OUT endpoints. Indicates that an OUT token was received when the endpoint was not yet enabled. This interrupt is asserted on the endpoint for which the OUT token was received. */
    using OTG_DOEPINT0_OTEPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Status phase received for control write This interrupt is valid only for control OUT endpoints. This interrupt is generated only after OTG_HS has transferred all the data that the host has sent during the data phase of a control write transfer, to the system memory buffer. The interrupt indicates to the application that the host has switched from data phase to the status phase of a control write transfer. The application can use this interrupt to ACK or STALL the status phase, after it has decoded the data phase. */
    using OTG_DOEPINT0_STSPHSRX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Back-to-back SETUP packets received Applies to control OUT endpoint only. This bit indicates that the core has received more than three back-to-back SETUP packets for this particular endpoint. */
    using OTG_DOEPINT0_B2BSTUP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OUT packet error This interrupt is asserted when the core detects an overflow or a CRC error for an OUT packet. This interrupt is valid only when thresholding is enabled. */
    using OTG_DOEPINT0_OUTPKTERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Babble error interrupt The core generates this interrupt when babble is received for the endpoint. */
    using OTG_DOEPINT0_BERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK input The core generates this interrupt when a NAK is transmitted or received by the device. In case of isochronous IN endpoints the interrupt gets generated when a zero length packet is transmitted due to unavailability of data in the Tx FIFO. */
    using OTG_DOEPINT0_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NYET interrupt This interrupt is generated when a NYET response is transmitted for a non isochronous OUT endpoint. */
    using OTG_DOEPINT0_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Setup packet received Applicable for control OUT endpoints in only in the Buffer DMA Mode. Set by the OTG_HS, this bit indicates that this buffer holds 8 bytes of setup data. There is only one setup packet per buffer. On receiving a setup packet, the OTG_HS closes the buffer and disables the corresponding endpoint after SETUP_COMPLETE status is seen in the Rx FIFO. OTG_HS puts a SETUP_COMPLETE status into the Rx FIFO when it sees the first IN or OUT token after the SETUP packet for that particular endpoint. The application must then re-enable the endpoint to receive any OUT data for the control transfer and reprogram the buffer start address. Because of the above behavior, OTG_HS can receive any number of back to back setup packets and one buffer for every setup packet is used. */
    using OTG_DOEPINT0_STPKTRX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device OUT endpoint 0 transfer size register */
    using OTG_DOEPTSIZ0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size Indicates the transfer size in bytes for endpoint 0. The core interrupts the application only after it has exhausted the transfer size amount of data. The transfer size can be set to the maximum packet size of the endpoint, to be interrupted at the end of each packet. The core decrements this field every time a packet is read from the Rx FIFO and written to the external memory. */
    using OTG_DOEPTSIZ0_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count This field is decremented to zero after a packet is written into the Rx FIFO. */
    using OTG_DOEPTSIZ0_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SETUP packet count This field specifies the number of back-to-back SETUP data packets the endpoint can receive. */
    using OTG_DOEPTSIZ0_STUPCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: 1 packet (value: 1)
     *          - B_0x2: 2 packets (value: 2)
     *          - B_0x3: 3 packets (value: 3)
     */
        /** @brief 1 packet */
    constexpr std::uint32_t OTG_DOEPTSIZ0_STUPCNT_B_0x1 = 1;
        /** @brief 2 packets */
    constexpr std::uint32_t OTG_DOEPTSIZ0_STUPCNT_B_0x2 = 2;
        /** @brief 3 packets */
    constexpr std::uint32_t OTG_DOEPTSIZ0_STUPCNT_B_0x3 = 3;

    /** @brief OTG device OUT endpoint 0 DMA address register */
    using OTG_DOEPDMA0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA Address This field holds the start address in the external memory from which the data for the endpoint must be fetched. This register is incremented on every AHB transaction. */
    using OTG_DOEPDMA0_DMAADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device OUT endpoint 1 control register */
    using OTG_DOEPCTL1_INT_BULK = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size The application must program this field with the maximum packet size for the current logical endpoint. This value is in bytes. */
    using OTG_DOEPCTL1_INT_BULK_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB active endpoint Indicates whether this endpoint is active in the current configuration and interface. The core clears this bit for all endpoints (other than EP 0) after detecting a USB reset. After receiving the SetConfiguration and SetInterface commands, the application must program endpoint registers accordingly and set this bit. */
    using OTG_DOEPCTL1_INT_BULK_USBAEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint data PID Applies to interrupt/bulk OUT endpoints only. Contains the PID of the packet to be received or transmitted on this endpoint. The application must program the PID of the first packet to be received or transmitted on this endpoint, after the endpoint is activated. The application uses the SD0PID and SD1PID register fields to program either DATA0 or DATA1 PID. */
    using OTG_DOEPCTL1_INT_BULK_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATA0 (value: 0)
     *          - B_0x1: DATA1 (value: 1)
     */
        /** @brief DATA0 */
    constexpr std::uint32_t OTG_DOEPCTL1_INT_BULK_DPID_B_0x0 = 0;
        /** @brief DATA1 */
    constexpr std::uint32_t OTG_DOEPCTL1_INT_BULK_DPID_B_0x1 = 1;

    /** @brief NAK status Indicates the following: When either the application or the core sets this bit: The core stops receiving any data on an OUT endpoint, even if there is space in the Rx FIFO to accommodate the incoming packet. Irrespective of this bits setting, the core always responds to SETUP data packets with an ACK handshake. */
    using OTG_DOEPCTL1_INT_BULK_NAKSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The core is transmitting non-NAK handshakes based on the FIFO status. (value: 0)
     *          - B_0x1: The core is transmitting NAK handshakes on this endpoint. (value: 1)
     */
        /** @brief The core is transmitting non-NAK handshakes based on the FIFO status. */
    constexpr std::uint32_t OTG_DOEPCTL1_INT_BULK_NAKSTS_B_0x0 = 0;
        /** @brief The core is transmitting NAK handshakes on this endpoint. */
    constexpr std::uint32_t OTG_DOEPCTL1_INT_BULK_NAKSTS_B_0x1 = 1;

    /** @brief Endpoint type This is the transfer type supported by this logical endpoint. */
    using OTG_DOEPCTL1_INT_BULK_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_DOEPCTL1_INT_BULK_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_DOEPCTL1_INT_BULK_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_DOEPCTL1_INT_BULK_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_DOEPCTL1_INT_BULK_EPTYP_B_0x3 = 3;

    /** @brief Snoop mode This bit configures the endpoint to Snoop mode. In Snoop mode, the core does not check the correctness of OUT packets before transferring them to application memory. */
    using OTG_DOEPCTL1_INT_BULK_SNPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL handshake Applies to non-control, non-isochronous OUT endpoints only (access type is rw). The application sets this bit to stall all tokens from the USB host to this endpoint. If a NAK bit, Global IN NAK, or Global OUT NAK is set along with this bit, the STALL bit takes priority. Only the application can clear this bit, never the core. Applies to control endpoints only (access type is rs). The application can only set this bit, and the core clears it, when a SETUP token is received for this endpoint. If a NAK bit, Global IN NAK, or Global OUT NAK is set along with this bit, the STALL bit takes priority. Irrespective of this bits setting, the core always responds to SETUP data packets with an ACK handshake. */
    using OTG_DOEPCTL1_INT_BULK_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear NAK A write to this bit clears the NAK bit for the endpoint. */
    using OTG_DOEPCTL1_INT_BULK_CNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set NAK A write to this bit sets the NAK bit for the endpoint. Using this bit, the application can control the transmission of NAK handshakes on an endpoint. The core can also set this bit for OUT endpoints on a transfer completed interrupt, or after a SETUP is received on the endpoint. */
    using OTG_DOEPCTL1_INT_BULK_SNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set DATA0 PID Applies to interrupt/bulk OUT endpoints only. Writing to this field sets the endpoint data PID (DPID) field in this register to DATA0. */
    using OTG_DOEPCTL1_INT_BULK_SD0PID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set DATA1 PID Writing to this field sets the endpoint data PID (DPID) field in this register to DATA1. */
    using OTG_DOEPCTL1_INT_BULK_SD1PID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disable The application sets this bit to stop transmitting/receiving data on an endpoint, even before the transfer for that endpoint is complete. The application must wait for the endpoint disabled interrupt before treating the endpoint as disabled. The core clears this bit before setting the endpoint disabled interrupt. The application must set this bit only if endpoint enable is already set for this endpoint. */
    using OTG_DOEPCTL1_INT_BULK_EPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint enable Applies to IN and OUT endpoints. The application sets this bit to start transmitting data on an endpoint. The core clears this bit before setting any of the following interrupts on this endpoint: SETUP phase done Endpoint disabled Transfer completed */
    using OTG_DOEPCTL1_INT_BULK_EPENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device OUT endpoint 1 control register */
    using OTG_DOEPCTL1_ISO = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size The application must program this field with the maximum packet size for the current logical endpoint. This value is in bytes. */
    using OTG_DOEPCTL1_ISO_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB active endpoint Indicates whether this endpoint is active in the current configuration and interface. The core clears this bit for all endpoints (other than EP 0) after detecting a USB reset. After receiving the SetConfiguration and SetInterface commands, the application must program endpoint registers accordingly and set this bit. */
    using OTG_DOEPCTL1_ISO_USBAEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Even/odd frame Applies to isochronous OUT endpoints only. Indicates the frame number in which the core transmits/receives isochronous data for this endpoint. The application must program the even/odd frame number in which it intends to transmit/receive isochronous data for this endpoint using the SEVNFRM and SODDFRM fields in this register. */
    using OTG_DOEPCTL1_ISO_EONUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Even frame (value: 0)
     *          - B_0x1: Odd frame (value: 1)
     */
        /** @brief Even frame */
    constexpr std::uint32_t OTG_DOEPCTL1_ISO_EONUM_B_0x0 = 0;
        /** @brief Odd frame */
    constexpr std::uint32_t OTG_DOEPCTL1_ISO_EONUM_B_0x1 = 1;

    /** @brief NAK status Indicates the following: When either the application or the core sets this bit: The core stops receiving any data on an OUT endpoint, even if there is space in the Rx FIFO to accommodate the incoming packet. Irrespective of this bits setting, the core always responds to SETUP data packets with an ACK handshake. */
    using OTG_DOEPCTL1_ISO_NAKSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The core is transmitting non-NAK handshakes based on the FIFO status. (value: 0)
     *          - B_0x1: The core is transmitting NAK handshakes on this endpoint. (value: 1)
     */
        /** @brief The core is transmitting non-NAK handshakes based on the FIFO status. */
    constexpr std::uint32_t OTG_DOEPCTL1_ISO_NAKSTS_B_0x0 = 0;
        /** @brief The core is transmitting NAK handshakes on this endpoint. */
    constexpr std::uint32_t OTG_DOEPCTL1_ISO_NAKSTS_B_0x1 = 1;

    /** @brief Endpoint type This is the transfer type supported by this logical endpoint. */
    using OTG_DOEPCTL1_ISO_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_DOEPCTL1_ISO_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_DOEPCTL1_ISO_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_DOEPCTL1_ISO_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_DOEPCTL1_ISO_EPTYP_B_0x3 = 3;

    /** @brief Snoop mode This bit configures the endpoint to Snoop mode. In Snoop mode, the core does not check the correctness of OUT packets before transferring them to application memory. */
    using OTG_DOEPCTL1_ISO_SNPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL handshake Applies to non-control, non-isochronous OUT endpoints only (access type is rw). The application sets this bit to stall all tokens from the USB host to this endpoint. If a NAK bit, Global IN NAK, or Global OUT NAK is set along with this bit, the STALL bit takes priority. Only the application can clear this bit, never the core. Applies to control endpoints only (access type is rs). The application can only set this bit, and the core clears it, when a SETUP token is received for this endpoint. If a NAK bit, Global IN NAK, or Global OUT NAK is set along with this bit, the STALL bit takes priority. Irrespective of this bits setting, the core always responds to SETUP data packets with an ACK handshake. */
    using OTG_DOEPCTL1_ISO_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear NAK A write to this bit clears the NAK bit for the endpoint. */
    using OTG_DOEPCTL1_ISO_CNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set NAK A write to this bit sets the NAK bit for the endpoint. Using this bit, the application can control the transmission of NAK handshakes on an endpoint. The core can also set this bit for OUT endpoints on a transfer completed interrupt, or after a SETUP is received on the endpoint. */
    using OTG_DOEPCTL1_ISO_SNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set even frame Applies to isochronous OUT endpoints only. Writing to this field sets the Even/Odd frame (EONUM) field to even frame. */
    using OTG_DOEPCTL1_ISO_SEVNFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set odd frame Applies to isochronous IN and OUT endpoints only. Writing to this field sets the Even/Odd frame (EONUM) field to odd frame. */
    using OTG_DOEPCTL1_ISO_SODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disable The application sets this bit to stop transmitting/receiving data on an endpoint, even before the transfer for that endpoint is complete. The application must wait for the endpoint disabled interrupt before treating the endpoint as disabled. The core clears this bit before setting the endpoint disabled interrupt. The application must set this bit only if endpoint enable is already set for this endpoint. */
    using OTG_DOEPCTL1_ISO_EPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint enable Applies to IN and OUT endpoints. The application sets this bit to start transmitting data on an endpoint. The core clears this bit before setting any of the following interrupts on this endpoint: SETUP phase done Endpoint disabled Transfer completed */
    using OTG_DOEPCTL1_ISO_EPENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device OUT endpoint 1 interrupt register */
    using OTG_DOEPINT1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed interrupt This field indicates that the programmed transfer is complete on the AHB as well as on the USB, for this endpoint. */
    using OTG_DOEPINT1_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disabled interrupt This bit indicates that the endpoint is disabled per the applications request. */
    using OTG_DOEPINT1_EPDISD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error This is generated only in internal DMA mode when there is an AHB error during an AHB read/write. The application can read the corresponding endpoint DMA address register to get the error address. */
    using OTG_DOEPINT1_AHBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SETUP phase done Applies to control OUT endpoint only.Indicates that the SETUP phase for the control endpoint is complete and no more back-to-back SETUP packets were received for the current control transfer. On this interrupt, the application can decode the received SETUP data packet. */
    using OTG_DOEPINT1_STUP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OUT token received when endpoint disabled Applies only to control OUT endpoints. Indicates that an OUT token was received when the endpoint was not yet enabled. This interrupt is asserted on the endpoint for which the OUT token was received. */
    using OTG_DOEPINT1_OTEPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Status phase received for control write This interrupt is valid only for control OUT endpoints. This interrupt is generated only after OTG_HS has transferred all the data that the host has sent during the data phase of a control write transfer, to the system memory buffer. The interrupt indicates to the application that the host has switched from data phase to the status phase of a control write transfer. The application can use this interrupt to ACK or STALL the status phase, after it has decoded the data phase. */
    using OTG_DOEPINT1_STSPHSRX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Back-to-back SETUP packets received Applies to control OUT endpoint only. This bit indicates that the core has received more than three back-to-back SETUP packets for this particular endpoint. */
    using OTG_DOEPINT1_B2BSTUP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OUT packet error This interrupt is asserted when the core detects an overflow or a CRC error for an OUT packet. This interrupt is valid only when thresholding is enabled. */
    using OTG_DOEPINT1_OUTPKTERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Babble error interrupt The core generates this interrupt when babble is received for the endpoint. */
    using OTG_DOEPINT1_BERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK input The core generates this interrupt when a NAK is transmitted or received by the device. In case of isochronous IN endpoints the interrupt gets generated when a zero length packet is transmitted due to unavailability of data in the Tx FIFO. */
    using OTG_DOEPINT1_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NYET interrupt This interrupt is generated when a NYET response is transmitted for a non isochronous OUT endpoint. */
    using OTG_DOEPINT1_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Setup packet received Applicable for control OUT endpoints in only in the Buffer DMA Mode. Set by the OTG_HS, this bit indicates that this buffer holds 8 bytes of setup data. There is only one setup packet per buffer. On receiving a setup packet, the OTG_HS closes the buffer and disables the corresponding endpoint after SETUP_COMPLETE status is seen in the Rx FIFO. OTG_HS puts a SETUP_COMPLETE status into the Rx FIFO when it sees the first IN or OUT token after the SETUP packet for that particular endpoint. The application must then re-enable the endpoint to receive any OUT data for the control transfer and reprogram the buffer start address. Because of the above behavior, OTG_HS can receive any number of back to back setup packets and one buffer for every setup packet is used. */
    using OTG_DOEPINT1_STPKTRX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device OUT endpoint 1 transfer size register */
    using OTG_DOEPTSIZ1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size This field contains the transfer size in bytes for the current endpoint. The core only interrupts the application after it has exhausted the transfer size amount of data. The transfer size can be set to the maximum packet size of the endpoint, to be interrupted at the end of each packet. The core decrements this field every time a packet is read from the Rx FIFO and written to the external memory. */
    using OTG_DOEPTSIZ1_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count Indicates the total number of USB packets that constitute the transfer size amount of data for this endpoint. This field is decremented every time a packet (maximum size or short packet) is written to the Rx FIFO. */
    using OTG_DOEPTSIZ1_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Received data PID This is the data PID received in the last packet for this endpoint. STUPCNT[1:0]: SETUP packet count This field specifies the number of back-to-back SETUP data packets the endpoint can receive. */
    using OTG_DOEPTSIZ1_RXDPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0_ISOCHRONOUS_OUT_ENDPOINTS: DATA0 (value: 0)
     *          - B_0x1_ISOCHRONOUS_OUT_ENDPOINTS: DATA2 (value: 1)
     *          - B_0x2_ISOCHRONOUS_OUT_ENDPOINTS: DATA1 (value: 2)
     *          - B_0x3_ISOCHRONOUS_OUT_ENDPOINTS: MDATA (value: 3)
     */
        /** @brief DATA0 */
    constexpr std::uint32_t OTG_DOEPTSIZ1_RXDPID_B_0x0_ISOCHRONOUS_OUT_ENDPOINTS = 0;
        /** @brief DATA2 */
    constexpr std::uint32_t OTG_DOEPTSIZ1_RXDPID_B_0x1_ISOCHRONOUS_OUT_ENDPOINTS = 1;
        /** @brief DATA1 */
    constexpr std::uint32_t OTG_DOEPTSIZ1_RXDPID_B_0x2_ISOCHRONOUS_OUT_ENDPOINTS = 2;
        /** @brief MDATA */
    constexpr std::uint32_t OTG_DOEPTSIZ1_RXDPID_B_0x3_ISOCHRONOUS_OUT_ENDPOINTS = 3;

    /** @brief OTG device OUT endpoint 1 DMA address register */
    using OTG_DOEPDMA1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA Address This field holds the start address in the external memory from which the data for the endpoint must be fetched. This register is incremented on every AHB transaction. */
    using OTG_DOEPDMA1_DMAADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device OUT endpoint 2 control register */
    using OTG_DOEPCTL2_INT_BULK = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size The application must program this field with the maximum packet size for the current logical endpoint. This value is in bytes. */
    using OTG_DOEPCTL2_INT_BULK_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB active endpoint Indicates whether this endpoint is active in the current configuration and interface. The core clears this bit for all endpoints (other than EP 0) after detecting a USB reset. After receiving the SetConfiguration and SetInterface commands, the application must program endpoint registers accordingly and set this bit. */
    using OTG_DOEPCTL2_INT_BULK_USBAEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint data PID Applies to interrupt/bulk OUT endpoints only. Contains the PID of the packet to be received or transmitted on this endpoint. The application must program the PID of the first packet to be received or transmitted on this endpoint, after the endpoint is activated. The application uses the SD0PID and SD1PID register fields to program either DATA0 or DATA1 PID. */
    using OTG_DOEPCTL2_INT_BULK_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATA0 (value: 0)
     *          - B_0x1: DATA1 (value: 1)
     */
        /** @brief DATA0 */
    constexpr std::uint32_t OTG_DOEPCTL2_INT_BULK_DPID_B_0x0 = 0;
        /** @brief DATA1 */
    constexpr std::uint32_t OTG_DOEPCTL2_INT_BULK_DPID_B_0x1 = 1;

    /** @brief NAK status Indicates the following: When either the application or the core sets this bit: The core stops receiving any data on an OUT endpoint, even if there is space in the Rx FIFO to accommodate the incoming packet. Irrespective of this bits setting, the core always responds to SETUP data packets with an ACK handshake. */
    using OTG_DOEPCTL2_INT_BULK_NAKSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The core is transmitting non-NAK handshakes based on the FIFO status. (value: 0)
     *          - B_0x1: The core is transmitting NAK handshakes on this endpoint. (value: 1)
     */
        /** @brief The core is transmitting non-NAK handshakes based on the FIFO status. */
    constexpr std::uint32_t OTG_DOEPCTL2_INT_BULK_NAKSTS_B_0x0 = 0;
        /** @brief The core is transmitting NAK handshakes on this endpoint. */
    constexpr std::uint32_t OTG_DOEPCTL2_INT_BULK_NAKSTS_B_0x1 = 1;

    /** @brief Endpoint type This is the transfer type supported by this logical endpoint. */
    using OTG_DOEPCTL2_INT_BULK_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_DOEPCTL2_INT_BULK_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_DOEPCTL2_INT_BULK_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_DOEPCTL2_INT_BULK_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_DOEPCTL2_INT_BULK_EPTYP_B_0x3 = 3;

    /** @brief Snoop mode This bit configures the endpoint to Snoop mode. In Snoop mode, the core does not check the correctness of OUT packets before transferring them to application memory. */
    using OTG_DOEPCTL2_INT_BULK_SNPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL handshake Applies to non-control, non-isochronous OUT endpoints only (access type is rw). The application sets this bit to stall all tokens from the USB host to this endpoint. If a NAK bit, Global IN NAK, or Global OUT NAK is set along with this bit, the STALL bit takes priority. Only the application can clear this bit, never the core. Applies to control endpoints only (access type is rs). The application can only set this bit, and the core clears it, when a SETUP token is received for this endpoint. If a NAK bit, Global IN NAK, or Global OUT NAK is set along with this bit, the STALL bit takes priority. Irrespective of this bits setting, the core always responds to SETUP data packets with an ACK handshake. */
    using OTG_DOEPCTL2_INT_BULK_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear NAK A write to this bit clears the NAK bit for the endpoint. */
    using OTG_DOEPCTL2_INT_BULK_CNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set NAK A write to this bit sets the NAK bit for the endpoint. Using this bit, the application can control the transmission of NAK handshakes on an endpoint. The core can also set this bit for OUT endpoints on a transfer completed interrupt, or after a SETUP is received on the endpoint. */
    using OTG_DOEPCTL2_INT_BULK_SNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set DATA0 PID Applies to interrupt/bulk OUT endpoints only. Writing to this field sets the endpoint data PID (DPID) field in this register to DATA0. */
    using OTG_DOEPCTL2_INT_BULK_SD0PID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set DATA1 PID Writing to this field sets the endpoint data PID (DPID) field in this register to DATA1. */
    using OTG_DOEPCTL2_INT_BULK_SD1PID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disable The application sets this bit to stop transmitting/receiving data on an endpoint, even before the transfer for that endpoint is complete. The application must wait for the endpoint disabled interrupt before treating the endpoint as disabled. The core clears this bit before setting the endpoint disabled interrupt. The application must set this bit only if endpoint enable is already set for this endpoint. */
    using OTG_DOEPCTL2_INT_BULK_EPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint enable Applies to IN and OUT endpoints. The application sets this bit to start transmitting data on an endpoint. The core clears this bit before setting any of the following interrupts on this endpoint: SETUP phase done Endpoint disabled Transfer completed */
    using OTG_DOEPCTL2_INT_BULK_EPENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device OUT endpoint 2 control register */
    using OTG_DOEPCTL2_ISO = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size The application must program this field with the maximum packet size for the current logical endpoint. This value is in bytes. */
    using OTG_DOEPCTL2_ISO_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB active endpoint Indicates whether this endpoint is active in the current configuration and interface. The core clears this bit for all endpoints (other than EP 0) after detecting a USB reset. After receiving the SetConfiguration and SetInterface commands, the application must program endpoint registers accordingly and set this bit. */
    using OTG_DOEPCTL2_ISO_USBAEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Even/odd frame Applies to isochronous OUT endpoints only. Indicates the frame number in which the core transmits/receives isochronous data for this endpoint. The application must program the even/odd frame number in which it intends to transmit/receive isochronous data for this endpoint using the SEVNFRM and SODDFRM fields in this register. */
    using OTG_DOEPCTL2_ISO_EONUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Even frame (value: 0)
     *          - B_0x1: Odd frame (value: 1)
     */
        /** @brief Even frame */
    constexpr std::uint32_t OTG_DOEPCTL2_ISO_EONUM_B_0x0 = 0;
        /** @brief Odd frame */
    constexpr std::uint32_t OTG_DOEPCTL2_ISO_EONUM_B_0x1 = 1;

    /** @brief NAK status Indicates the following: When either the application or the core sets this bit: The core stops receiving any data on an OUT endpoint, even if there is space in the Rx FIFO to accommodate the incoming packet. Irrespective of this bits setting, the core always responds to SETUP data packets with an ACK handshake. */
    using OTG_DOEPCTL2_ISO_NAKSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The core is transmitting non-NAK handshakes based on the FIFO status. (value: 0)
     *          - B_0x1: The core is transmitting NAK handshakes on this endpoint. (value: 1)
     */
        /** @brief The core is transmitting non-NAK handshakes based on the FIFO status. */
    constexpr std::uint32_t OTG_DOEPCTL2_ISO_NAKSTS_B_0x0 = 0;
        /** @brief The core is transmitting NAK handshakes on this endpoint. */
    constexpr std::uint32_t OTG_DOEPCTL2_ISO_NAKSTS_B_0x1 = 1;

    /** @brief Endpoint type This is the transfer type supported by this logical endpoint. */
    using OTG_DOEPCTL2_ISO_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_DOEPCTL2_ISO_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_DOEPCTL2_ISO_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_DOEPCTL2_ISO_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_DOEPCTL2_ISO_EPTYP_B_0x3 = 3;

    /** @brief Snoop mode This bit configures the endpoint to Snoop mode. In Snoop mode, the core does not check the correctness of OUT packets before transferring them to application memory. */
    using OTG_DOEPCTL2_ISO_SNPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL handshake Applies to non-control, non-isochronous OUT endpoints only (access type is rw). The application sets this bit to stall all tokens from the USB host to this endpoint. If a NAK bit, Global IN NAK, or Global OUT NAK is set along with this bit, the STALL bit takes priority. Only the application can clear this bit, never the core. Applies to control endpoints only (access type is rs). The application can only set this bit, and the core clears it, when a SETUP token is received for this endpoint. If a NAK bit, Global IN NAK, or Global OUT NAK is set along with this bit, the STALL bit takes priority. Irrespective of this bits setting, the core always responds to SETUP data packets with an ACK handshake. */
    using OTG_DOEPCTL2_ISO_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear NAK A write to this bit clears the NAK bit for the endpoint. */
    using OTG_DOEPCTL2_ISO_CNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set NAK A write to this bit sets the NAK bit for the endpoint. Using this bit, the application can control the transmission of NAK handshakes on an endpoint. The core can also set this bit for OUT endpoints on a transfer completed interrupt, or after a SETUP is received on the endpoint. */
    using OTG_DOEPCTL2_ISO_SNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set even frame Applies to isochronous OUT endpoints only. Writing to this field sets the Even/Odd frame (EONUM) field to even frame. */
    using OTG_DOEPCTL2_ISO_SEVNFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set odd frame Applies to isochronous IN and OUT endpoints only. Writing to this field sets the Even/Odd frame (EONUM) field to odd frame. */
    using OTG_DOEPCTL2_ISO_SODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disable The application sets this bit to stop transmitting/receiving data on an endpoint, even before the transfer for that endpoint is complete. The application must wait for the endpoint disabled interrupt before treating the endpoint as disabled. The core clears this bit before setting the endpoint disabled interrupt. The application must set this bit only if endpoint enable is already set for this endpoint. */
    using OTG_DOEPCTL2_ISO_EPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint enable Applies to IN and OUT endpoints. The application sets this bit to start transmitting data on an endpoint. The core clears this bit before setting any of the following interrupts on this endpoint: SETUP phase done Endpoint disabled Transfer completed */
    using OTG_DOEPCTL2_ISO_EPENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device OUT endpoint 2 interrupt register */
    using OTG_DOEPINT2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed interrupt This field indicates that the programmed transfer is complete on the AHB as well as on the USB, for this endpoint. */
    using OTG_DOEPINT2_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disabled interrupt This bit indicates that the endpoint is disabled per the applications request. */
    using OTG_DOEPINT2_EPDISD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error This is generated only in internal DMA mode when there is an AHB error during an AHB read/write. The application can read the corresponding endpoint DMA address register to get the error address. */
    using OTG_DOEPINT2_AHBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SETUP phase done Applies to control OUT endpoint only.Indicates that the SETUP phase for the control endpoint is complete and no more back-to-back SETUP packets were received for the current control transfer. On this interrupt, the application can decode the received SETUP data packet. */
    using OTG_DOEPINT2_STUP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OUT token received when endpoint disabled Applies only to control OUT endpoints. Indicates that an OUT token was received when the endpoint was not yet enabled. This interrupt is asserted on the endpoint for which the OUT token was received. */
    using OTG_DOEPINT2_OTEPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Status phase received for control write This interrupt is valid only for control OUT endpoints. This interrupt is generated only after OTG_HS has transferred all the data that the host has sent during the data phase of a control write transfer, to the system memory buffer. The interrupt indicates to the application that the host has switched from data phase to the status phase of a control write transfer. The application can use this interrupt to ACK or STALL the status phase, after it has decoded the data phase. */
    using OTG_DOEPINT2_STSPHSRX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Back-to-back SETUP packets received Applies to control OUT endpoint only. This bit indicates that the core has received more than three back-to-back SETUP packets for this particular endpoint. */
    using OTG_DOEPINT2_B2BSTUP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OUT packet error This interrupt is asserted when the core detects an overflow or a CRC error for an OUT packet. This interrupt is valid only when thresholding is enabled. */
    using OTG_DOEPINT2_OUTPKTERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Babble error interrupt The core generates this interrupt when babble is received for the endpoint. */
    using OTG_DOEPINT2_BERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK input The core generates this interrupt when a NAK is transmitted or received by the device. In case of isochronous IN endpoints the interrupt gets generated when a zero length packet is transmitted due to unavailability of data in the Tx FIFO. */
    using OTG_DOEPINT2_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NYET interrupt This interrupt is generated when a NYET response is transmitted for a non isochronous OUT endpoint. */
    using OTG_DOEPINT2_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Setup packet received Applicable for control OUT endpoints in only in the Buffer DMA Mode. Set by the OTG_HS, this bit indicates that this buffer holds 8 bytes of setup data. There is only one setup packet per buffer. On receiving a setup packet, the OTG_HS closes the buffer and disables the corresponding endpoint after SETUP_COMPLETE status is seen in the Rx FIFO. OTG_HS puts a SETUP_COMPLETE status into the Rx FIFO when it sees the first IN or OUT token after the SETUP packet for that particular endpoint. The application must then re-enable the endpoint to receive any OUT data for the control transfer and reprogram the buffer start address. Because of the above behavior, OTG_HS can receive any number of back to back setup packets and one buffer for every setup packet is used. */
    using OTG_DOEPINT2_STPKTRX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device OUT endpoint 2 transfer size register */
    using OTG_DOEPTSIZ2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size This field contains the transfer size in bytes for the current endpoint. The core only interrupts the application after it has exhausted the transfer size amount of data. The transfer size can be set to the maximum packet size of the endpoint, to be interrupted at the end of each packet. The core decrements this field every time a packet is read from the Rx FIFO and written to the external memory. */
    using OTG_DOEPTSIZ2_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count Indicates the total number of USB packets that constitute the transfer size amount of data for this endpoint. This field is decremented every time a packet (maximum size or short packet) is written to the Rx FIFO. */
    using OTG_DOEPTSIZ2_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Received data PID This is the data PID received in the last packet for this endpoint. STUPCNT[1:0]: SETUP packet count This field specifies the number of back-to-back SETUP data packets the endpoint can receive. */
    using OTG_DOEPTSIZ2_RXDPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0_ISOCHRONOUS_OUT_ENDPOINTS: DATA0 (value: 0)
     *          - B_0x1_ISOCHRONOUS_OUT_ENDPOINTS: DATA2 (value: 1)
     *          - B_0x2_ISOCHRONOUS_OUT_ENDPOINTS: DATA1 (value: 2)
     *          - B_0x3_ISOCHRONOUS_OUT_ENDPOINTS: MDATA (value: 3)
     */
        /** @brief DATA0 */
    constexpr std::uint32_t OTG_DOEPTSIZ2_RXDPID_B_0x0_ISOCHRONOUS_OUT_ENDPOINTS = 0;
        /** @brief DATA2 */
    constexpr std::uint32_t OTG_DOEPTSIZ2_RXDPID_B_0x1_ISOCHRONOUS_OUT_ENDPOINTS = 1;
        /** @brief DATA1 */
    constexpr std::uint32_t OTG_DOEPTSIZ2_RXDPID_B_0x2_ISOCHRONOUS_OUT_ENDPOINTS = 2;
        /** @brief MDATA */
    constexpr std::uint32_t OTG_DOEPTSIZ2_RXDPID_B_0x3_ISOCHRONOUS_OUT_ENDPOINTS = 3;

    /** @brief OTG device OUT endpoint 2 DMA address register */
    using OTG_DOEPDMA2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA Address This field holds the start address in the external memory from which the data for the endpoint must be fetched. This register is incremented on every AHB transaction. */
    using OTG_DOEPDMA2_DMAADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device OUT endpoint 3 control register */
    using OTG_DOEPCTL3_INT_BULK = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size The application must program this field with the maximum packet size for the current logical endpoint. This value is in bytes. */
    using OTG_DOEPCTL3_INT_BULK_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB active endpoint Indicates whether this endpoint is active in the current configuration and interface. The core clears this bit for all endpoints (other than EP 0) after detecting a USB reset. After receiving the SetConfiguration and SetInterface commands, the application must program endpoint registers accordingly and set this bit. */
    using OTG_DOEPCTL3_INT_BULK_USBAEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint data PID Applies to interrupt/bulk OUT endpoints only. Contains the PID of the packet to be received or transmitted on this endpoint. The application must program the PID of the first packet to be received or transmitted on this endpoint, after the endpoint is activated. The application uses the SD0PID and SD1PID register fields to program either DATA0 or DATA1 PID. */
    using OTG_DOEPCTL3_INT_BULK_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATA0 (value: 0)
     *          - B_0x1: DATA1 (value: 1)
     */
        /** @brief DATA0 */
    constexpr std::uint32_t OTG_DOEPCTL3_INT_BULK_DPID_B_0x0 = 0;
        /** @brief DATA1 */
    constexpr std::uint32_t OTG_DOEPCTL3_INT_BULK_DPID_B_0x1 = 1;

    /** @brief NAK status Indicates the following: When either the application or the core sets this bit: The core stops receiving any data on an OUT endpoint, even if there is space in the Rx FIFO to accommodate the incoming packet. Irrespective of this bits setting, the core always responds to SETUP data packets with an ACK handshake. */
    using OTG_DOEPCTL3_INT_BULK_NAKSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The core is transmitting non-NAK handshakes based on the FIFO status. (value: 0)
     *          - B_0x1: The core is transmitting NAK handshakes on this endpoint. (value: 1)
     */
        /** @brief The core is transmitting non-NAK handshakes based on the FIFO status. */
    constexpr std::uint32_t OTG_DOEPCTL3_INT_BULK_NAKSTS_B_0x0 = 0;
        /** @brief The core is transmitting NAK handshakes on this endpoint. */
    constexpr std::uint32_t OTG_DOEPCTL3_INT_BULK_NAKSTS_B_0x1 = 1;

    /** @brief Endpoint type This is the transfer type supported by this logical endpoint. */
    using OTG_DOEPCTL3_INT_BULK_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_DOEPCTL3_INT_BULK_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_DOEPCTL3_INT_BULK_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_DOEPCTL3_INT_BULK_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_DOEPCTL3_INT_BULK_EPTYP_B_0x3 = 3;

    /** @brief Snoop mode This bit configures the endpoint to Snoop mode. In Snoop mode, the core does not check the correctness of OUT packets before transferring them to application memory. */
    using OTG_DOEPCTL3_INT_BULK_SNPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL handshake Applies to non-control, non-isochronous OUT endpoints only (access type is rw). The application sets this bit to stall all tokens from the USB host to this endpoint. If a NAK bit, Global IN NAK, or Global OUT NAK is set along with this bit, the STALL bit takes priority. Only the application can clear this bit, never the core. Applies to control endpoints only (access type is rs). The application can only set this bit, and the core clears it, when a SETUP token is received for this endpoint. If a NAK bit, Global IN NAK, or Global OUT NAK is set along with this bit, the STALL bit takes priority. Irrespective of this bits setting, the core always responds to SETUP data packets with an ACK handshake. */
    using OTG_DOEPCTL3_INT_BULK_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear NAK A write to this bit clears the NAK bit for the endpoint. */
    using OTG_DOEPCTL3_INT_BULK_CNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set NAK A write to this bit sets the NAK bit for the endpoint. Using this bit, the application can control the transmission of NAK handshakes on an endpoint. The core can also set this bit for OUT endpoints on a transfer completed interrupt, or after a SETUP is received on the endpoint. */
    using OTG_DOEPCTL3_INT_BULK_SNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set DATA0 PID Applies to interrupt/bulk OUT endpoints only. Writing to this field sets the endpoint data PID (DPID) field in this register to DATA0. */
    using OTG_DOEPCTL3_INT_BULK_SD0PID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set DATA1 PID Writing to this field sets the endpoint data PID (DPID) field in this register to DATA1. */
    using OTG_DOEPCTL3_INT_BULK_SD1PID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disable The application sets this bit to stop transmitting/receiving data on an endpoint, even before the transfer for that endpoint is complete. The application must wait for the endpoint disabled interrupt before treating the endpoint as disabled. The core clears this bit before setting the endpoint disabled interrupt. The application must set this bit only if endpoint enable is already set for this endpoint. */
    using OTG_DOEPCTL3_INT_BULK_EPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint enable Applies to IN and OUT endpoints. The application sets this bit to start transmitting data on an endpoint. The core clears this bit before setting any of the following interrupts on this endpoint: SETUP phase done Endpoint disabled Transfer completed */
    using OTG_DOEPCTL3_INT_BULK_EPENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device OUT endpoint 3 control register */
    using OTG_DOEPCTL3_ISO = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size The application must program this field with the maximum packet size for the current logical endpoint. This value is in bytes. */
    using OTG_DOEPCTL3_ISO_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB active endpoint Indicates whether this endpoint is active in the current configuration and interface. The core clears this bit for all endpoints (other than EP 0) after detecting a USB reset. After receiving the SetConfiguration and SetInterface commands, the application must program endpoint registers accordingly and set this bit. */
    using OTG_DOEPCTL3_ISO_USBAEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Even/odd frame Applies to isochronous OUT endpoints only. Indicates the frame number in which the core transmits/receives isochronous data for this endpoint. The application must program the even/odd frame number in which it intends to transmit/receive isochronous data for this endpoint using the SEVNFRM and SODDFRM fields in this register. */
    using OTG_DOEPCTL3_ISO_EONUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Even frame (value: 0)
     *          - B_0x1: Odd frame (value: 1)
     */
        /** @brief Even frame */
    constexpr std::uint32_t OTG_DOEPCTL3_ISO_EONUM_B_0x0 = 0;
        /** @brief Odd frame */
    constexpr std::uint32_t OTG_DOEPCTL3_ISO_EONUM_B_0x1 = 1;

    /** @brief NAK status Indicates the following: When either the application or the core sets this bit: The core stops receiving any data on an OUT endpoint, even if there is space in the Rx FIFO to accommodate the incoming packet. Irrespective of this bits setting, the core always responds to SETUP data packets with an ACK handshake. */
    using OTG_DOEPCTL3_ISO_NAKSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The core is transmitting non-NAK handshakes based on the FIFO status. (value: 0)
     *          - B_0x1: The core is transmitting NAK handshakes on this endpoint. (value: 1)
     */
        /** @brief The core is transmitting non-NAK handshakes based on the FIFO status. */
    constexpr std::uint32_t OTG_DOEPCTL3_ISO_NAKSTS_B_0x0 = 0;
        /** @brief The core is transmitting NAK handshakes on this endpoint. */
    constexpr std::uint32_t OTG_DOEPCTL3_ISO_NAKSTS_B_0x1 = 1;

    /** @brief Endpoint type This is the transfer type supported by this logical endpoint. */
    using OTG_DOEPCTL3_ISO_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_DOEPCTL3_ISO_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_DOEPCTL3_ISO_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_DOEPCTL3_ISO_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_DOEPCTL3_ISO_EPTYP_B_0x3 = 3;

    /** @brief Snoop mode This bit configures the endpoint to Snoop mode. In Snoop mode, the core does not check the correctness of OUT packets before transferring them to application memory. */
    using OTG_DOEPCTL3_ISO_SNPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL handshake Applies to non-control, non-isochronous OUT endpoints only (access type is rw). The application sets this bit to stall all tokens from the USB host to this endpoint. If a NAK bit, Global IN NAK, or Global OUT NAK is set along with this bit, the STALL bit takes priority. Only the application can clear this bit, never the core. Applies to control endpoints only (access type is rs). The application can only set this bit, and the core clears it, when a SETUP token is received for this endpoint. If a NAK bit, Global IN NAK, or Global OUT NAK is set along with this bit, the STALL bit takes priority. Irrespective of this bits setting, the core always responds to SETUP data packets with an ACK handshake. */
    using OTG_DOEPCTL3_ISO_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear NAK A write to this bit clears the NAK bit for the endpoint. */
    using OTG_DOEPCTL3_ISO_CNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set NAK A write to this bit sets the NAK bit for the endpoint. Using this bit, the application can control the transmission of NAK handshakes on an endpoint. The core can also set this bit for OUT endpoints on a transfer completed interrupt, or after a SETUP is received on the endpoint. */
    using OTG_DOEPCTL3_ISO_SNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set even frame Applies to isochronous OUT endpoints only. Writing to this field sets the Even/Odd frame (EONUM) field to even frame. */
    using OTG_DOEPCTL3_ISO_SEVNFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set odd frame Applies to isochronous IN and OUT endpoints only. Writing to this field sets the Even/Odd frame (EONUM) field to odd frame. */
    using OTG_DOEPCTL3_ISO_SODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disable The application sets this bit to stop transmitting/receiving data on an endpoint, even before the transfer for that endpoint is complete. The application must wait for the endpoint disabled interrupt before treating the endpoint as disabled. The core clears this bit before setting the endpoint disabled interrupt. The application must set this bit only if endpoint enable is already set for this endpoint. */
    using OTG_DOEPCTL3_ISO_EPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint enable Applies to IN and OUT endpoints. The application sets this bit to start transmitting data on an endpoint. The core clears this bit before setting any of the following interrupts on this endpoint: SETUP phase done Endpoint disabled Transfer completed */
    using OTG_DOEPCTL3_ISO_EPENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device OUT endpoint 3 interrupt register */
    using OTG_DOEPINT3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB68, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed interrupt This field indicates that the programmed transfer is complete on the AHB as well as on the USB, for this endpoint. */
    using OTG_DOEPINT3_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disabled interrupt This bit indicates that the endpoint is disabled per the applications request. */
    using OTG_DOEPINT3_EPDISD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error This is generated only in internal DMA mode when there is an AHB error during an AHB read/write. The application can read the corresponding endpoint DMA address register to get the error address. */
    using OTG_DOEPINT3_AHBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SETUP phase done Applies to control OUT endpoint only.Indicates that the SETUP phase for the control endpoint is complete and no more back-to-back SETUP packets were received for the current control transfer. On this interrupt, the application can decode the received SETUP data packet. */
    using OTG_DOEPINT3_STUP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OUT token received when endpoint disabled Applies only to control OUT endpoints. Indicates that an OUT token was received when the endpoint was not yet enabled. This interrupt is asserted on the endpoint for which the OUT token was received. */
    using OTG_DOEPINT3_OTEPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Status phase received for control write This interrupt is valid only for control OUT endpoints. This interrupt is generated only after OTG_HS has transferred all the data that the host has sent during the data phase of a control write transfer, to the system memory buffer. The interrupt indicates to the application that the host has switched from data phase to the status phase of a control write transfer. The application can use this interrupt to ACK or STALL the status phase, after it has decoded the data phase. */
    using OTG_DOEPINT3_STSPHSRX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Back-to-back SETUP packets received Applies to control OUT endpoint only. This bit indicates that the core has received more than three back-to-back SETUP packets for this particular endpoint. */
    using OTG_DOEPINT3_B2BSTUP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OUT packet error This interrupt is asserted when the core detects an overflow or a CRC error for an OUT packet. This interrupt is valid only when thresholding is enabled. */
    using OTG_DOEPINT3_OUTPKTERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Babble error interrupt The core generates this interrupt when babble is received for the endpoint. */
    using OTG_DOEPINT3_BERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK input The core generates this interrupt when a NAK is transmitted or received by the device. In case of isochronous IN endpoints the interrupt gets generated when a zero length packet is transmitted due to unavailability of data in the Tx FIFO. */
    using OTG_DOEPINT3_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NYET interrupt This interrupt is generated when a NYET response is transmitted for a non isochronous OUT endpoint. */
    using OTG_DOEPINT3_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Setup packet received Applicable for control OUT endpoints in only in the Buffer DMA Mode. Set by the OTG_HS, this bit indicates that this buffer holds 8 bytes of setup data. There is only one setup packet per buffer. On receiving a setup packet, the OTG_HS closes the buffer and disables the corresponding endpoint after SETUP_COMPLETE status is seen in the Rx FIFO. OTG_HS puts a SETUP_COMPLETE status into the Rx FIFO when it sees the first IN or OUT token after the SETUP packet for that particular endpoint. The application must then re-enable the endpoint to receive any OUT data for the control transfer and reprogram the buffer start address. Because of the above behavior, OTG_HS can receive any number of back to back setup packets and one buffer for every setup packet is used. */
    using OTG_DOEPINT3_STPKTRX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device OUT endpoint 3 transfer size register */
    using OTG_DOEPTSIZ3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB70, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size This field contains the transfer size in bytes for the current endpoint. The core only interrupts the application after it has exhausted the transfer size amount of data. The transfer size can be set to the maximum packet size of the endpoint, to be interrupted at the end of each packet. The core decrements this field every time a packet is read from the Rx FIFO and written to the external memory. */
    using OTG_DOEPTSIZ3_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count Indicates the total number of USB packets that constitute the transfer size amount of data for this endpoint. This field is decremented every time a packet (maximum size or short packet) is written to the Rx FIFO. */
    using OTG_DOEPTSIZ3_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Received data PID This is the data PID received in the last packet for this endpoint. STUPCNT[1:0]: SETUP packet count This field specifies the number of back-to-back SETUP data packets the endpoint can receive. */
    using OTG_DOEPTSIZ3_RXDPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0_ISOCHRONOUS_OUT_ENDPOINTS: DATA0 (value: 0)
     *          - B_0x1_ISOCHRONOUS_OUT_ENDPOINTS: DATA2 (value: 1)
     *          - B_0x2_ISOCHRONOUS_OUT_ENDPOINTS: DATA1 (value: 2)
     *          - B_0x3_ISOCHRONOUS_OUT_ENDPOINTS: MDATA (value: 3)
     */
        /** @brief DATA0 */
    constexpr std::uint32_t OTG_DOEPTSIZ3_RXDPID_B_0x0_ISOCHRONOUS_OUT_ENDPOINTS = 0;
        /** @brief DATA2 */
    constexpr std::uint32_t OTG_DOEPTSIZ3_RXDPID_B_0x1_ISOCHRONOUS_OUT_ENDPOINTS = 1;
        /** @brief DATA1 */
    constexpr std::uint32_t OTG_DOEPTSIZ3_RXDPID_B_0x2_ISOCHRONOUS_OUT_ENDPOINTS = 2;
        /** @brief MDATA */
    constexpr std::uint32_t OTG_DOEPTSIZ3_RXDPID_B_0x3_ISOCHRONOUS_OUT_ENDPOINTS = 3;

    /** @brief OTG device OUT endpoint 3 DMA address register */
    using OTG_DOEPDMA3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB74, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA Address This field holds the start address in the external memory from which the data for the endpoint must be fetched. This register is incremented on every AHB transaction. */
    using OTG_DOEPDMA3_DMAADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device OUT endpoint 4 control register */
    using OTG_DOEPCTL4_INT_BULK = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB80, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size The application must program this field with the maximum packet size for the current logical endpoint. This value is in bytes. */
    using OTG_DOEPCTL4_INT_BULK_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB active endpoint Indicates whether this endpoint is active in the current configuration and interface. The core clears this bit for all endpoints (other than EP 0) after detecting a USB reset. After receiving the SetConfiguration and SetInterface commands, the application must program endpoint registers accordingly and set this bit. */
    using OTG_DOEPCTL4_INT_BULK_USBAEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint data PID Applies to interrupt/bulk OUT endpoints only. Contains the PID of the packet to be received or transmitted on this endpoint. The application must program the PID of the first packet to be received or transmitted on this endpoint, after the endpoint is activated. The application uses the SD0PID and SD1PID register fields to program either DATA0 or DATA1 PID. */
    using OTG_DOEPCTL4_INT_BULK_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATA0 (value: 0)
     *          - B_0x1: DATA1 (value: 1)
     */
        /** @brief DATA0 */
    constexpr std::uint32_t OTG_DOEPCTL4_INT_BULK_DPID_B_0x0 = 0;
        /** @brief DATA1 */
    constexpr std::uint32_t OTG_DOEPCTL4_INT_BULK_DPID_B_0x1 = 1;

    /** @brief NAK status Indicates the following: When either the application or the core sets this bit: The core stops receiving any data on an OUT endpoint, even if there is space in the Rx FIFO to accommodate the incoming packet. Irrespective of this bits setting, the core always responds to SETUP data packets with an ACK handshake. */
    using OTG_DOEPCTL4_INT_BULK_NAKSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The core is transmitting non-NAK handshakes based on the FIFO status. (value: 0)
     *          - B_0x1: The core is transmitting NAK handshakes on this endpoint. (value: 1)
     */
        /** @brief The core is transmitting non-NAK handshakes based on the FIFO status. */
    constexpr std::uint32_t OTG_DOEPCTL4_INT_BULK_NAKSTS_B_0x0 = 0;
        /** @brief The core is transmitting NAK handshakes on this endpoint. */
    constexpr std::uint32_t OTG_DOEPCTL4_INT_BULK_NAKSTS_B_0x1 = 1;

    /** @brief Endpoint type This is the transfer type supported by this logical endpoint. */
    using OTG_DOEPCTL4_INT_BULK_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_DOEPCTL4_INT_BULK_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_DOEPCTL4_INT_BULK_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_DOEPCTL4_INT_BULK_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_DOEPCTL4_INT_BULK_EPTYP_B_0x3 = 3;

    /** @brief Snoop mode This bit configures the endpoint to Snoop mode. In Snoop mode, the core does not check the correctness of OUT packets before transferring them to application memory. */
    using OTG_DOEPCTL4_INT_BULK_SNPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL handshake Applies to non-control, non-isochronous OUT endpoints only (access type is rw). The application sets this bit to stall all tokens from the USB host to this endpoint. If a NAK bit, Global IN NAK, or Global OUT NAK is set along with this bit, the STALL bit takes priority. Only the application can clear this bit, never the core. Applies to control endpoints only (access type is rs). The application can only set this bit, and the core clears it, when a SETUP token is received for this endpoint. If a NAK bit, Global IN NAK, or Global OUT NAK is set along with this bit, the STALL bit takes priority. Irrespective of this bits setting, the core always responds to SETUP data packets with an ACK handshake. */
    using OTG_DOEPCTL4_INT_BULK_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear NAK A write to this bit clears the NAK bit for the endpoint. */
    using OTG_DOEPCTL4_INT_BULK_CNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set NAK A write to this bit sets the NAK bit for the endpoint. Using this bit, the application can control the transmission of NAK handshakes on an endpoint. The core can also set this bit for OUT endpoints on a transfer completed interrupt, or after a SETUP is received on the endpoint. */
    using OTG_DOEPCTL4_INT_BULK_SNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set DATA0 PID Applies to interrupt/bulk OUT endpoints only. Writing to this field sets the endpoint data PID (DPID) field in this register to DATA0. */
    using OTG_DOEPCTL4_INT_BULK_SD0PID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set DATA1 PID Writing to this field sets the endpoint data PID (DPID) field in this register to DATA1. */
    using OTG_DOEPCTL4_INT_BULK_SD1PID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disable The application sets this bit to stop transmitting/receiving data on an endpoint, even before the transfer for that endpoint is complete. The application must wait for the endpoint disabled interrupt before treating the endpoint as disabled. The core clears this bit before setting the endpoint disabled interrupt. The application must set this bit only if endpoint enable is already set for this endpoint. */
    using OTG_DOEPCTL4_INT_BULK_EPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint enable Applies to IN and OUT endpoints. The application sets this bit to start transmitting data on an endpoint. The core clears this bit before setting any of the following interrupts on this endpoint: SETUP phase done Endpoint disabled Transfer completed */
    using OTG_DOEPCTL4_INT_BULK_EPENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device OUT endpoint 4 control register */
    using OTG_DOEPCTL4_ISO = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB80, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size The application must program this field with the maximum packet size for the current logical endpoint. This value is in bytes. */
    using OTG_DOEPCTL4_ISO_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB active endpoint Indicates whether this endpoint is active in the current configuration and interface. The core clears this bit for all endpoints (other than EP 0) after detecting a USB reset. After receiving the SetConfiguration and SetInterface commands, the application must program endpoint registers accordingly and set this bit. */
    using OTG_DOEPCTL4_ISO_USBAEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Even/odd frame Applies to isochronous OUT endpoints only. Indicates the frame number in which the core transmits/receives isochronous data for this endpoint. The application must program the even/odd frame number in which it intends to transmit/receive isochronous data for this endpoint using the SEVNFRM and SODDFRM fields in this register. */
    using OTG_DOEPCTL4_ISO_EONUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Even frame (value: 0)
     *          - B_0x1: Odd frame (value: 1)
     */
        /** @brief Even frame */
    constexpr std::uint32_t OTG_DOEPCTL4_ISO_EONUM_B_0x0 = 0;
        /** @brief Odd frame */
    constexpr std::uint32_t OTG_DOEPCTL4_ISO_EONUM_B_0x1 = 1;

    /** @brief NAK status Indicates the following: When either the application or the core sets this bit: The core stops receiving any data on an OUT endpoint, even if there is space in the Rx FIFO to accommodate the incoming packet. Irrespective of this bits setting, the core always responds to SETUP data packets with an ACK handshake. */
    using OTG_DOEPCTL4_ISO_NAKSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The core is transmitting non-NAK handshakes based on the FIFO status. (value: 0)
     *          - B_0x1: The core is transmitting NAK handshakes on this endpoint. (value: 1)
     */
        /** @brief The core is transmitting non-NAK handshakes based on the FIFO status. */
    constexpr std::uint32_t OTG_DOEPCTL4_ISO_NAKSTS_B_0x0 = 0;
        /** @brief The core is transmitting NAK handshakes on this endpoint. */
    constexpr std::uint32_t OTG_DOEPCTL4_ISO_NAKSTS_B_0x1 = 1;

    /** @brief Endpoint type This is the transfer type supported by this logical endpoint. */
    using OTG_DOEPCTL4_ISO_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_DOEPCTL4_ISO_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_DOEPCTL4_ISO_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_DOEPCTL4_ISO_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_DOEPCTL4_ISO_EPTYP_B_0x3 = 3;

    /** @brief Snoop mode This bit configures the endpoint to Snoop mode. In Snoop mode, the core does not check the correctness of OUT packets before transferring them to application memory. */
    using OTG_DOEPCTL4_ISO_SNPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL handshake Applies to non-control, non-isochronous OUT endpoints only (access type is rw). The application sets this bit to stall all tokens from the USB host to this endpoint. If a NAK bit, Global IN NAK, or Global OUT NAK is set along with this bit, the STALL bit takes priority. Only the application can clear this bit, never the core. Applies to control endpoints only (access type is rs). The application can only set this bit, and the core clears it, when a SETUP token is received for this endpoint. If a NAK bit, Global IN NAK, or Global OUT NAK is set along with this bit, the STALL bit takes priority. Irrespective of this bits setting, the core always responds to SETUP data packets with an ACK handshake. */
    using OTG_DOEPCTL4_ISO_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear NAK A write to this bit clears the NAK bit for the endpoint. */
    using OTG_DOEPCTL4_ISO_CNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set NAK A write to this bit sets the NAK bit for the endpoint. Using this bit, the application can control the transmission of NAK handshakes on an endpoint. The core can also set this bit for OUT endpoints on a transfer completed interrupt, or after a SETUP is received on the endpoint. */
    using OTG_DOEPCTL4_ISO_SNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set even frame Applies to isochronous OUT endpoints only. Writing to this field sets the Even/Odd frame (EONUM) field to even frame. */
    using OTG_DOEPCTL4_ISO_SEVNFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set odd frame Applies to isochronous IN and OUT endpoints only. Writing to this field sets the Even/Odd frame (EONUM) field to odd frame. */
    using OTG_DOEPCTL4_ISO_SODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disable The application sets this bit to stop transmitting/receiving data on an endpoint, even before the transfer for that endpoint is complete. The application must wait for the endpoint disabled interrupt before treating the endpoint as disabled. The core clears this bit before setting the endpoint disabled interrupt. The application must set this bit only if endpoint enable is already set for this endpoint. */
    using OTG_DOEPCTL4_ISO_EPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint enable Applies to IN and OUT endpoints. The application sets this bit to start transmitting data on an endpoint. The core clears this bit before setting any of the following interrupts on this endpoint: SETUP phase done Endpoint disabled Transfer completed */
    using OTG_DOEPCTL4_ISO_EPENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device OUT endpoint 4 interrupt register */
    using OTG_DOEPINT4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB88, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed interrupt This field indicates that the programmed transfer is complete on the AHB as well as on the USB, for this endpoint. */
    using OTG_DOEPINT4_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disabled interrupt This bit indicates that the endpoint is disabled per the applications request. */
    using OTG_DOEPINT4_EPDISD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error This is generated only in internal DMA mode when there is an AHB error during an AHB read/write. The application can read the corresponding endpoint DMA address register to get the error address. */
    using OTG_DOEPINT4_AHBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SETUP phase done Applies to control OUT endpoint only.Indicates that the SETUP phase for the control endpoint is complete and no more back-to-back SETUP packets were received for the current control transfer. On this interrupt, the application can decode the received SETUP data packet. */
    using OTG_DOEPINT4_STUP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OUT token received when endpoint disabled Applies only to control OUT endpoints. Indicates that an OUT token was received when the endpoint was not yet enabled. This interrupt is asserted on the endpoint for which the OUT token was received. */
    using OTG_DOEPINT4_OTEPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Status phase received for control write This interrupt is valid only for control OUT endpoints. This interrupt is generated only after OTG_HS has transferred all the data that the host has sent during the data phase of a control write transfer, to the system memory buffer. The interrupt indicates to the application that the host has switched from data phase to the status phase of a control write transfer. The application can use this interrupt to ACK or STALL the status phase, after it has decoded the data phase. */
    using OTG_DOEPINT4_STSPHSRX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Back-to-back SETUP packets received Applies to control OUT endpoint only. This bit indicates that the core has received more than three back-to-back SETUP packets for this particular endpoint. */
    using OTG_DOEPINT4_B2BSTUP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OUT packet error This interrupt is asserted when the core detects an overflow or a CRC error for an OUT packet. This interrupt is valid only when thresholding is enabled. */
    using OTG_DOEPINT4_OUTPKTERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Babble error interrupt The core generates this interrupt when babble is received for the endpoint. */
    using OTG_DOEPINT4_BERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK input The core generates this interrupt when a NAK is transmitted or received by the device. In case of isochronous IN endpoints the interrupt gets generated when a zero length packet is transmitted due to unavailability of data in the Tx FIFO. */
    using OTG_DOEPINT4_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NYET interrupt This interrupt is generated when a NYET response is transmitted for a non isochronous OUT endpoint. */
    using OTG_DOEPINT4_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Setup packet received Applicable for control OUT endpoints in only in the Buffer DMA Mode. Set by the OTG_HS, this bit indicates that this buffer holds 8 bytes of setup data. There is only one setup packet per buffer. On receiving a setup packet, the OTG_HS closes the buffer and disables the corresponding endpoint after SETUP_COMPLETE status is seen in the Rx FIFO. OTG_HS puts a SETUP_COMPLETE status into the Rx FIFO when it sees the first IN or OUT token after the SETUP packet for that particular endpoint. The application must then re-enable the endpoint to receive any OUT data for the control transfer and reprogram the buffer start address. Because of the above behavior, OTG_HS can receive any number of back to back setup packets and one buffer for every setup packet is used. */
    using OTG_DOEPINT4_STPKTRX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device OUT endpoint 4 transfer size register */
    using OTG_DOEPTSIZ4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB90, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size This field contains the transfer size in bytes for the current endpoint. The core only interrupts the application after it has exhausted the transfer size amount of data. The transfer size can be set to the maximum packet size of the endpoint, to be interrupted at the end of each packet. The core decrements this field every time a packet is read from the Rx FIFO and written to the external memory. */
    using OTG_DOEPTSIZ4_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count Indicates the total number of USB packets that constitute the transfer size amount of data for this endpoint. This field is decremented every time a packet (maximum size or short packet) is written to the Rx FIFO. */
    using OTG_DOEPTSIZ4_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Received data PID This is the data PID received in the last packet for this endpoint. STUPCNT[1:0]: SETUP packet count This field specifies the number of back-to-back SETUP data packets the endpoint can receive. */
    using OTG_DOEPTSIZ4_RXDPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0_ISOCHRONOUS_OUT_ENDPOINTS: DATA0 (value: 0)
     *          - B_0x1_ISOCHRONOUS_OUT_ENDPOINTS: DATA2 (value: 1)
     *          - B_0x2_ISOCHRONOUS_OUT_ENDPOINTS: DATA1 (value: 2)
     *          - B_0x3_ISOCHRONOUS_OUT_ENDPOINTS: MDATA (value: 3)
     */
        /** @brief DATA0 */
    constexpr std::uint32_t OTG_DOEPTSIZ4_RXDPID_B_0x0_ISOCHRONOUS_OUT_ENDPOINTS = 0;
        /** @brief DATA2 */
    constexpr std::uint32_t OTG_DOEPTSIZ4_RXDPID_B_0x1_ISOCHRONOUS_OUT_ENDPOINTS = 1;
        /** @brief DATA1 */
    constexpr std::uint32_t OTG_DOEPTSIZ4_RXDPID_B_0x2_ISOCHRONOUS_OUT_ENDPOINTS = 2;
        /** @brief MDATA */
    constexpr std::uint32_t OTG_DOEPTSIZ4_RXDPID_B_0x3_ISOCHRONOUS_OUT_ENDPOINTS = 3;

    /** @brief OTG device OUT endpoint 4 DMA address register */
    using OTG_DOEPDMA4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB94, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA Address This field holds the start address in the external memory from which the data for the endpoint must be fetched. This register is incremented on every AHB transaction. */
    using OTG_DOEPDMA4_DMAADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device OUT endpoint 5 control register */
    using OTG_DOEPCTL5_INT_BULK = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBA0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size The application must program this field with the maximum packet size for the current logical endpoint. This value is in bytes. */
    using OTG_DOEPCTL5_INT_BULK_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB active endpoint Indicates whether this endpoint is active in the current configuration and interface. The core clears this bit for all endpoints (other than EP 0) after detecting a USB reset. After receiving the SetConfiguration and SetInterface commands, the application must program endpoint registers accordingly and set this bit. */
    using OTG_DOEPCTL5_INT_BULK_USBAEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint data PID Applies to interrupt/bulk OUT endpoints only. Contains the PID of the packet to be received or transmitted on this endpoint. The application must program the PID of the first packet to be received or transmitted on this endpoint, after the endpoint is activated. The application uses the SD0PID and SD1PID register fields to program either DATA0 or DATA1 PID. */
    using OTG_DOEPCTL5_INT_BULK_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATA0 (value: 0)
     *          - B_0x1: DATA1 (value: 1)
     */
        /** @brief DATA0 */
    constexpr std::uint32_t OTG_DOEPCTL5_INT_BULK_DPID_B_0x0 = 0;
        /** @brief DATA1 */
    constexpr std::uint32_t OTG_DOEPCTL5_INT_BULK_DPID_B_0x1 = 1;

    /** @brief NAK status Indicates the following: When either the application or the core sets this bit: The core stops receiving any data on an OUT endpoint, even if there is space in the Rx FIFO to accommodate the incoming packet. Irrespective of this bits setting, the core always responds to SETUP data packets with an ACK handshake. */
    using OTG_DOEPCTL5_INT_BULK_NAKSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The core is transmitting non-NAK handshakes based on the FIFO status. (value: 0)
     *          - B_0x1: The core is transmitting NAK handshakes on this endpoint. (value: 1)
     */
        /** @brief The core is transmitting non-NAK handshakes based on the FIFO status. */
    constexpr std::uint32_t OTG_DOEPCTL5_INT_BULK_NAKSTS_B_0x0 = 0;
        /** @brief The core is transmitting NAK handshakes on this endpoint. */
    constexpr std::uint32_t OTG_DOEPCTL5_INT_BULK_NAKSTS_B_0x1 = 1;

    /** @brief Endpoint type This is the transfer type supported by this logical endpoint. */
    using OTG_DOEPCTL5_INT_BULK_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_DOEPCTL5_INT_BULK_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_DOEPCTL5_INT_BULK_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_DOEPCTL5_INT_BULK_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_DOEPCTL5_INT_BULK_EPTYP_B_0x3 = 3;

    /** @brief Snoop mode This bit configures the endpoint to Snoop mode. In Snoop mode, the core does not check the correctness of OUT packets before transferring them to application memory. */
    using OTG_DOEPCTL5_INT_BULK_SNPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL handshake Applies to non-control, non-isochronous OUT endpoints only (access type is rw). The application sets this bit to stall all tokens from the USB host to this endpoint. If a NAK bit, Global IN NAK, or Global OUT NAK is set along with this bit, the STALL bit takes priority. Only the application can clear this bit, never the core. Applies to control endpoints only (access type is rs). The application can only set this bit, and the core clears it, when a SETUP token is received for this endpoint. If a NAK bit, Global IN NAK, or Global OUT NAK is set along with this bit, the STALL bit takes priority. Irrespective of this bits setting, the core always responds to SETUP data packets with an ACK handshake. */
    using OTG_DOEPCTL5_INT_BULK_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear NAK A write to this bit clears the NAK bit for the endpoint. */
    using OTG_DOEPCTL5_INT_BULK_CNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set NAK A write to this bit sets the NAK bit for the endpoint. Using this bit, the application can control the transmission of NAK handshakes on an endpoint. The core can also set this bit for OUT endpoints on a transfer completed interrupt, or after a SETUP is received on the endpoint. */
    using OTG_DOEPCTL5_INT_BULK_SNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set DATA0 PID Applies to interrupt/bulk OUT endpoints only. Writing to this field sets the endpoint data PID (DPID) field in this register to DATA0. */
    using OTG_DOEPCTL5_INT_BULK_SD0PID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set DATA1 PID Writing to this field sets the endpoint data PID (DPID) field in this register to DATA1. */
    using OTG_DOEPCTL5_INT_BULK_SD1PID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disable The application sets this bit to stop transmitting/receiving data on an endpoint, even before the transfer for that endpoint is complete. The application must wait for the endpoint disabled interrupt before treating the endpoint as disabled. The core clears this bit before setting the endpoint disabled interrupt. The application must set this bit only if endpoint enable is already set for this endpoint. */
    using OTG_DOEPCTL5_INT_BULK_EPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint enable Applies to IN and OUT endpoints. The application sets this bit to start transmitting data on an endpoint. The core clears this bit before setting any of the following interrupts on this endpoint: SETUP phase done Endpoint disabled Transfer completed */
    using OTG_DOEPCTL5_INT_BULK_EPENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device OUT endpoint 5 control register */
    using OTG_DOEPCTL5_ISO = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBA0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size The application must program this field with the maximum packet size for the current logical endpoint. This value is in bytes. */
    using OTG_DOEPCTL5_ISO_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB active endpoint Indicates whether this endpoint is active in the current configuration and interface. The core clears this bit for all endpoints (other than EP 0) after detecting a USB reset. After receiving the SetConfiguration and SetInterface commands, the application must program endpoint registers accordingly and set this bit. */
    using OTG_DOEPCTL5_ISO_USBAEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Even/odd frame Applies to isochronous OUT endpoints only. Indicates the frame number in which the core transmits/receives isochronous data for this endpoint. The application must program the even/odd frame number in which it intends to transmit/receive isochronous data for this endpoint using the SEVNFRM and SODDFRM fields in this register. */
    using OTG_DOEPCTL5_ISO_EONUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Even frame (value: 0)
     *          - B_0x1: Odd frame (value: 1)
     */
        /** @brief Even frame */
    constexpr std::uint32_t OTG_DOEPCTL5_ISO_EONUM_B_0x0 = 0;
        /** @brief Odd frame */
    constexpr std::uint32_t OTG_DOEPCTL5_ISO_EONUM_B_0x1 = 1;

    /** @brief NAK status Indicates the following: When either the application or the core sets this bit: The core stops receiving any data on an OUT endpoint, even if there is space in the Rx FIFO to accommodate the incoming packet. Irrespective of this bits setting, the core always responds to SETUP data packets with an ACK handshake. */
    using OTG_DOEPCTL5_ISO_NAKSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The core is transmitting non-NAK handshakes based on the FIFO status. (value: 0)
     *          - B_0x1: The core is transmitting NAK handshakes on this endpoint. (value: 1)
     */
        /** @brief The core is transmitting non-NAK handshakes based on the FIFO status. */
    constexpr std::uint32_t OTG_DOEPCTL5_ISO_NAKSTS_B_0x0 = 0;
        /** @brief The core is transmitting NAK handshakes on this endpoint. */
    constexpr std::uint32_t OTG_DOEPCTL5_ISO_NAKSTS_B_0x1 = 1;

    /** @brief Endpoint type This is the transfer type supported by this logical endpoint. */
    using OTG_DOEPCTL5_ISO_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_DOEPCTL5_ISO_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_DOEPCTL5_ISO_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_DOEPCTL5_ISO_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_DOEPCTL5_ISO_EPTYP_B_0x3 = 3;

    /** @brief Snoop mode This bit configures the endpoint to Snoop mode. In Snoop mode, the core does not check the correctness of OUT packets before transferring them to application memory. */
    using OTG_DOEPCTL5_ISO_SNPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL handshake Applies to non-control, non-isochronous OUT endpoints only (access type is rw). The application sets this bit to stall all tokens from the USB host to this endpoint. If a NAK bit, Global IN NAK, or Global OUT NAK is set along with this bit, the STALL bit takes priority. Only the application can clear this bit, never the core. Applies to control endpoints only (access type is rs). The application can only set this bit, and the core clears it, when a SETUP token is received for this endpoint. If a NAK bit, Global IN NAK, or Global OUT NAK is set along with this bit, the STALL bit takes priority. Irrespective of this bits setting, the core always responds to SETUP data packets with an ACK handshake. */
    using OTG_DOEPCTL5_ISO_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear NAK A write to this bit clears the NAK bit for the endpoint. */
    using OTG_DOEPCTL5_ISO_CNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set NAK A write to this bit sets the NAK bit for the endpoint. Using this bit, the application can control the transmission of NAK handshakes on an endpoint. The core can also set this bit for OUT endpoints on a transfer completed interrupt, or after a SETUP is received on the endpoint. */
    using OTG_DOEPCTL5_ISO_SNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set even frame Applies to isochronous OUT endpoints only. Writing to this field sets the Even/Odd frame (EONUM) field to even frame. */
    using OTG_DOEPCTL5_ISO_SEVNFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set odd frame Applies to isochronous IN and OUT endpoints only. Writing to this field sets the Even/Odd frame (EONUM) field to odd frame. */
    using OTG_DOEPCTL5_ISO_SODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disable The application sets this bit to stop transmitting/receiving data on an endpoint, even before the transfer for that endpoint is complete. The application must wait for the endpoint disabled interrupt before treating the endpoint as disabled. The core clears this bit before setting the endpoint disabled interrupt. The application must set this bit only if endpoint enable is already set for this endpoint. */
    using OTG_DOEPCTL5_ISO_EPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint enable Applies to IN and OUT endpoints. The application sets this bit to start transmitting data on an endpoint. The core clears this bit before setting any of the following interrupts on this endpoint: SETUP phase done Endpoint disabled Transfer completed */
    using OTG_DOEPCTL5_ISO_EPENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device OUT endpoint 5 interrupt register */
    using OTG_DOEPINT5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBA8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed interrupt This field indicates that the programmed transfer is complete on the AHB as well as on the USB, for this endpoint. */
    using OTG_DOEPINT5_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disabled interrupt This bit indicates that the endpoint is disabled per the applications request. */
    using OTG_DOEPINT5_EPDISD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error This is generated only in internal DMA mode when there is an AHB error during an AHB read/write. The application can read the corresponding endpoint DMA address register to get the error address. */
    using OTG_DOEPINT5_AHBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SETUP phase done Applies to control OUT endpoint only.Indicates that the SETUP phase for the control endpoint is complete and no more back-to-back SETUP packets were received for the current control transfer. On this interrupt, the application can decode the received SETUP data packet. */
    using OTG_DOEPINT5_STUP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OUT token received when endpoint disabled Applies only to control OUT endpoints. Indicates that an OUT token was received when the endpoint was not yet enabled. This interrupt is asserted on the endpoint for which the OUT token was received. */
    using OTG_DOEPINT5_OTEPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Status phase received for control write This interrupt is valid only for control OUT endpoints. This interrupt is generated only after OTG_HS has transferred all the data that the host has sent during the data phase of a control write transfer, to the system memory buffer. The interrupt indicates to the application that the host has switched from data phase to the status phase of a control write transfer. The application can use this interrupt to ACK or STALL the status phase, after it has decoded the data phase. */
    using OTG_DOEPINT5_STSPHSRX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Back-to-back SETUP packets received Applies to control OUT endpoint only. This bit indicates that the core has received more than three back-to-back SETUP packets for this particular endpoint. */
    using OTG_DOEPINT5_B2BSTUP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OUT packet error This interrupt is asserted when the core detects an overflow or a CRC error for an OUT packet. This interrupt is valid only when thresholding is enabled. */
    using OTG_DOEPINT5_OUTPKTERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Babble error interrupt The core generates this interrupt when babble is received for the endpoint. */
    using OTG_DOEPINT5_BERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK input The core generates this interrupt when a NAK is transmitted or received by the device. In case of isochronous IN endpoints the interrupt gets generated when a zero length packet is transmitted due to unavailability of data in the Tx FIFO. */
    using OTG_DOEPINT5_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NYET interrupt This interrupt is generated when a NYET response is transmitted for a non isochronous OUT endpoint. */
    using OTG_DOEPINT5_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Setup packet received Applicable for control OUT endpoints in only in the Buffer DMA Mode. Set by the OTG_HS, this bit indicates that this buffer holds 8 bytes of setup data. There is only one setup packet per buffer. On receiving a setup packet, the OTG_HS closes the buffer and disables the corresponding endpoint after SETUP_COMPLETE status is seen in the Rx FIFO. OTG_HS puts a SETUP_COMPLETE status into the Rx FIFO when it sees the first IN or OUT token after the SETUP packet for that particular endpoint. The application must then re-enable the endpoint to receive any OUT data for the control transfer and reprogram the buffer start address. Because of the above behavior, OTG_HS can receive any number of back to back setup packets and one buffer for every setup packet is used. */
    using OTG_DOEPINT5_STPKTRX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device OUT endpoint 5 transfer size register */
    using OTG_DOEPTSIZ5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBB0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size This field contains the transfer size in bytes for the current endpoint. The core only interrupts the application after it has exhausted the transfer size amount of data. The transfer size can be set to the maximum packet size of the endpoint, to be interrupted at the end of each packet. The core decrements this field every time a packet is read from the Rx FIFO and written to the external memory. */
    using OTG_DOEPTSIZ5_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count Indicates the total number of USB packets that constitute the transfer size amount of data for this endpoint. This field is decremented every time a packet (maximum size or short packet) is written to the Rx FIFO. */
    using OTG_DOEPTSIZ5_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Received data PID This is the data PID received in the last packet for this endpoint. STUPCNT[1:0]: SETUP packet count This field specifies the number of back-to-back SETUP data packets the endpoint can receive. */
    using OTG_DOEPTSIZ5_RXDPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0_ISOCHRONOUS_OUT_ENDPOINTS: DATA0 (value: 0)
     *          - B_0x1_ISOCHRONOUS_OUT_ENDPOINTS: DATA2 (value: 1)
     *          - B_0x2_ISOCHRONOUS_OUT_ENDPOINTS: DATA1 (value: 2)
     *          - B_0x3_ISOCHRONOUS_OUT_ENDPOINTS: MDATA (value: 3)
     */
        /** @brief DATA0 */
    constexpr std::uint32_t OTG_DOEPTSIZ5_RXDPID_B_0x0_ISOCHRONOUS_OUT_ENDPOINTS = 0;
        /** @brief DATA2 */
    constexpr std::uint32_t OTG_DOEPTSIZ5_RXDPID_B_0x1_ISOCHRONOUS_OUT_ENDPOINTS = 1;
        /** @brief DATA1 */
    constexpr std::uint32_t OTG_DOEPTSIZ5_RXDPID_B_0x2_ISOCHRONOUS_OUT_ENDPOINTS = 2;
        /** @brief MDATA */
    constexpr std::uint32_t OTG_DOEPTSIZ5_RXDPID_B_0x3_ISOCHRONOUS_OUT_ENDPOINTS = 3;

    /** @brief OTG device OUT endpoint 5 DMA address register */
    using OTG_DOEPDMA5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBB4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA Address This field holds the start address in the external memory from which the data for the endpoint must be fetched. This register is incremented on every AHB transaction. */
    using OTG_DOEPDMA5_DMAADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device OUT endpoint 6 control register */
    using OTG_DOEPCTL6_INT_BULK = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBC0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size The application must program this field with the maximum packet size for the current logical endpoint. This value is in bytes. */
    using OTG_DOEPCTL6_INT_BULK_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB active endpoint Indicates whether this endpoint is active in the current configuration and interface. The core clears this bit for all endpoints (other than EP 0) after detecting a USB reset. After receiving the SetConfiguration and SetInterface commands, the application must program endpoint registers accordingly and set this bit. */
    using OTG_DOEPCTL6_INT_BULK_USBAEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint data PID Applies to interrupt/bulk OUT endpoints only. Contains the PID of the packet to be received or transmitted on this endpoint. The application must program the PID of the first packet to be received or transmitted on this endpoint, after the endpoint is activated. The application uses the SD0PID and SD1PID register fields to program either DATA0 or DATA1 PID. */
    using OTG_DOEPCTL6_INT_BULK_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATA0 (value: 0)
     *          - B_0x1: DATA1 (value: 1)
     */
        /** @brief DATA0 */
    constexpr std::uint32_t OTG_DOEPCTL6_INT_BULK_DPID_B_0x0 = 0;
        /** @brief DATA1 */
    constexpr std::uint32_t OTG_DOEPCTL6_INT_BULK_DPID_B_0x1 = 1;

    /** @brief NAK status Indicates the following: When either the application or the core sets this bit: The core stops receiving any data on an OUT endpoint, even if there is space in the Rx FIFO to accommodate the incoming packet. Irrespective of this bits setting, the core always responds to SETUP data packets with an ACK handshake. */
    using OTG_DOEPCTL6_INT_BULK_NAKSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The core is transmitting non-NAK handshakes based on the FIFO status. (value: 0)
     *          - B_0x1: The core is transmitting NAK handshakes on this endpoint. (value: 1)
     */
        /** @brief The core is transmitting non-NAK handshakes based on the FIFO status. */
    constexpr std::uint32_t OTG_DOEPCTL6_INT_BULK_NAKSTS_B_0x0 = 0;
        /** @brief The core is transmitting NAK handshakes on this endpoint. */
    constexpr std::uint32_t OTG_DOEPCTL6_INT_BULK_NAKSTS_B_0x1 = 1;

    /** @brief Endpoint type This is the transfer type supported by this logical endpoint. */
    using OTG_DOEPCTL6_INT_BULK_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_DOEPCTL6_INT_BULK_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_DOEPCTL6_INT_BULK_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_DOEPCTL6_INT_BULK_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_DOEPCTL6_INT_BULK_EPTYP_B_0x3 = 3;

    /** @brief Snoop mode This bit configures the endpoint to Snoop mode. In Snoop mode, the core does not check the correctness of OUT packets before transferring them to application memory. */
    using OTG_DOEPCTL6_INT_BULK_SNPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL handshake Applies to non-control, non-isochronous OUT endpoints only (access type is rw). The application sets this bit to stall all tokens from the USB host to this endpoint. If a NAK bit, Global IN NAK, or Global OUT NAK is set along with this bit, the STALL bit takes priority. Only the application can clear this bit, never the core. Applies to control endpoints only (access type is rs). The application can only set this bit, and the core clears it, when a SETUP token is received for this endpoint. If a NAK bit, Global IN NAK, or Global OUT NAK is set along with this bit, the STALL bit takes priority. Irrespective of this bits setting, the core always responds to SETUP data packets with an ACK handshake. */
    using OTG_DOEPCTL6_INT_BULK_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear NAK A write to this bit clears the NAK bit for the endpoint. */
    using OTG_DOEPCTL6_INT_BULK_CNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set NAK A write to this bit sets the NAK bit for the endpoint. Using this bit, the application can control the transmission of NAK handshakes on an endpoint. The core can also set this bit for OUT endpoints on a transfer completed interrupt, or after a SETUP is received on the endpoint. */
    using OTG_DOEPCTL6_INT_BULK_SNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set DATA0 PID Applies to interrupt/bulk OUT endpoints only. Writing to this field sets the endpoint data PID (DPID) field in this register to DATA0. */
    using OTG_DOEPCTL6_INT_BULK_SD0PID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set DATA1 PID Writing to this field sets the endpoint data PID (DPID) field in this register to DATA1. */
    using OTG_DOEPCTL6_INT_BULK_SD1PID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disable The application sets this bit to stop transmitting/receiving data on an endpoint, even before the transfer for that endpoint is complete. The application must wait for the endpoint disabled interrupt before treating the endpoint as disabled. The core clears this bit before setting the endpoint disabled interrupt. The application must set this bit only if endpoint enable is already set for this endpoint. */
    using OTG_DOEPCTL6_INT_BULK_EPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint enable Applies to IN and OUT endpoints. The application sets this bit to start transmitting data on an endpoint. The core clears this bit before setting any of the following interrupts on this endpoint: SETUP phase done Endpoint disabled Transfer completed */
    using OTG_DOEPCTL6_INT_BULK_EPENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device OUT endpoint 6 control register */
    using OTG_DOEPCTL6_ISO = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBC0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size The application must program this field with the maximum packet size for the current logical endpoint. This value is in bytes. */
    using OTG_DOEPCTL6_ISO_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB active endpoint Indicates whether this endpoint is active in the current configuration and interface. The core clears this bit for all endpoints (other than EP 0) after detecting a USB reset. After receiving the SetConfiguration and SetInterface commands, the application must program endpoint registers accordingly and set this bit. */
    using OTG_DOEPCTL6_ISO_USBAEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Even/odd frame Applies to isochronous OUT endpoints only. Indicates the frame number in which the core transmits/receives isochronous data for this endpoint. The application must program the even/odd frame number in which it intends to transmit/receive isochronous data for this endpoint using the SEVNFRM and SODDFRM fields in this register. */
    using OTG_DOEPCTL6_ISO_EONUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Even frame (value: 0)
     *          - B_0x1: Odd frame (value: 1)
     */
        /** @brief Even frame */
    constexpr std::uint32_t OTG_DOEPCTL6_ISO_EONUM_B_0x0 = 0;
        /** @brief Odd frame */
    constexpr std::uint32_t OTG_DOEPCTL6_ISO_EONUM_B_0x1 = 1;

    /** @brief NAK status Indicates the following: When either the application or the core sets this bit: The core stops receiving any data on an OUT endpoint, even if there is space in the Rx FIFO to accommodate the incoming packet. Irrespective of this bits setting, the core always responds to SETUP data packets with an ACK handshake. */
    using OTG_DOEPCTL6_ISO_NAKSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The core is transmitting non-NAK handshakes based on the FIFO status. (value: 0)
     *          - B_0x1: The core is transmitting NAK handshakes on this endpoint. (value: 1)
     */
        /** @brief The core is transmitting non-NAK handshakes based on the FIFO status. */
    constexpr std::uint32_t OTG_DOEPCTL6_ISO_NAKSTS_B_0x0 = 0;
        /** @brief The core is transmitting NAK handshakes on this endpoint. */
    constexpr std::uint32_t OTG_DOEPCTL6_ISO_NAKSTS_B_0x1 = 1;

    /** @brief Endpoint type This is the transfer type supported by this logical endpoint. */
    using OTG_DOEPCTL6_ISO_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_DOEPCTL6_ISO_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_DOEPCTL6_ISO_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_DOEPCTL6_ISO_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_DOEPCTL6_ISO_EPTYP_B_0x3 = 3;

    /** @brief Snoop mode This bit configures the endpoint to Snoop mode. In Snoop mode, the core does not check the correctness of OUT packets before transferring them to application memory. */
    using OTG_DOEPCTL6_ISO_SNPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL handshake Applies to non-control, non-isochronous OUT endpoints only (access type is rw). The application sets this bit to stall all tokens from the USB host to this endpoint. If a NAK bit, Global IN NAK, or Global OUT NAK is set along with this bit, the STALL bit takes priority. Only the application can clear this bit, never the core. Applies to control endpoints only (access type is rs). The application can only set this bit, and the core clears it, when a SETUP token is received for this endpoint. If a NAK bit, Global IN NAK, or Global OUT NAK is set along with this bit, the STALL bit takes priority. Irrespective of this bits setting, the core always responds to SETUP data packets with an ACK handshake. */
    using OTG_DOEPCTL6_ISO_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear NAK A write to this bit clears the NAK bit for the endpoint. */
    using OTG_DOEPCTL6_ISO_CNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set NAK A write to this bit sets the NAK bit for the endpoint. Using this bit, the application can control the transmission of NAK handshakes on an endpoint. The core can also set this bit for OUT endpoints on a transfer completed interrupt, or after a SETUP is received on the endpoint. */
    using OTG_DOEPCTL6_ISO_SNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set even frame Applies to isochronous OUT endpoints only. Writing to this field sets the Even/Odd frame (EONUM) field to even frame. */
    using OTG_DOEPCTL6_ISO_SEVNFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set odd frame Applies to isochronous IN and OUT endpoints only. Writing to this field sets the Even/Odd frame (EONUM) field to odd frame. */
    using OTG_DOEPCTL6_ISO_SODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disable The application sets this bit to stop transmitting/receiving data on an endpoint, even before the transfer for that endpoint is complete. The application must wait for the endpoint disabled interrupt before treating the endpoint as disabled. The core clears this bit before setting the endpoint disabled interrupt. The application must set this bit only if endpoint enable is already set for this endpoint. */
    using OTG_DOEPCTL6_ISO_EPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint enable Applies to IN and OUT endpoints. The application sets this bit to start transmitting data on an endpoint. The core clears this bit before setting any of the following interrupts on this endpoint: SETUP phase done Endpoint disabled Transfer completed */
    using OTG_DOEPCTL6_ISO_EPENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device OUT endpoint 6 interrupt register */
    using OTG_DOEPINT6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBC8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed interrupt This field indicates that the programmed transfer is complete on the AHB as well as on the USB, for this endpoint. */
    using OTG_DOEPINT6_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disabled interrupt This bit indicates that the endpoint is disabled per the applications request. */
    using OTG_DOEPINT6_EPDISD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error This is generated only in internal DMA mode when there is an AHB error during an AHB read/write. The application can read the corresponding endpoint DMA address register to get the error address. */
    using OTG_DOEPINT6_AHBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SETUP phase done Applies to control OUT endpoint only.Indicates that the SETUP phase for the control endpoint is complete and no more back-to-back SETUP packets were received for the current control transfer. On this interrupt, the application can decode the received SETUP data packet. */
    using OTG_DOEPINT6_STUP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OUT token received when endpoint disabled Applies only to control OUT endpoints. Indicates that an OUT token was received when the endpoint was not yet enabled. This interrupt is asserted on the endpoint for which the OUT token was received. */
    using OTG_DOEPINT6_OTEPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Status phase received for control write This interrupt is valid only for control OUT endpoints. This interrupt is generated only after OTG_HS has transferred all the data that the host has sent during the data phase of a control write transfer, to the system memory buffer. The interrupt indicates to the application that the host has switched from data phase to the status phase of a control write transfer. The application can use this interrupt to ACK or STALL the status phase, after it has decoded the data phase. */
    using OTG_DOEPINT6_STSPHSRX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Back-to-back SETUP packets received Applies to control OUT endpoint only. This bit indicates that the core has received more than three back-to-back SETUP packets for this particular endpoint. */
    using OTG_DOEPINT6_B2BSTUP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OUT packet error This interrupt is asserted when the core detects an overflow or a CRC error for an OUT packet. This interrupt is valid only when thresholding is enabled. */
    using OTG_DOEPINT6_OUTPKTERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Babble error interrupt The core generates this interrupt when babble is received for the endpoint. */
    using OTG_DOEPINT6_BERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK input The core generates this interrupt when a NAK is transmitted or received by the device. In case of isochronous IN endpoints the interrupt gets generated when a zero length packet is transmitted due to unavailability of data in the Tx FIFO. */
    using OTG_DOEPINT6_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NYET interrupt This interrupt is generated when a NYET response is transmitted for a non isochronous OUT endpoint. */
    using OTG_DOEPINT6_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Setup packet received Applicable for control OUT endpoints in only in the Buffer DMA Mode. Set by the OTG_HS, this bit indicates that this buffer holds 8 bytes of setup data. There is only one setup packet per buffer. On receiving a setup packet, the OTG_HS closes the buffer and disables the corresponding endpoint after SETUP_COMPLETE status is seen in the Rx FIFO. OTG_HS puts a SETUP_COMPLETE status into the Rx FIFO when it sees the first IN or OUT token after the SETUP packet for that particular endpoint. The application must then re-enable the endpoint to receive any OUT data for the control transfer and reprogram the buffer start address. Because of the above behavior, OTG_HS can receive any number of back to back setup packets and one buffer for every setup packet is used. */
    using OTG_DOEPINT6_STPKTRX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device OUT endpoint 6 transfer size register */
    using OTG_DOEPTSIZ6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBD0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size This field contains the transfer size in bytes for the current endpoint. The core only interrupts the application after it has exhausted the transfer size amount of data. The transfer size can be set to the maximum packet size of the endpoint, to be interrupted at the end of each packet. The core decrements this field every time a packet is read from the Rx FIFO and written to the external memory. */
    using OTG_DOEPTSIZ6_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count Indicates the total number of USB packets that constitute the transfer size amount of data for this endpoint. This field is decremented every time a packet (maximum size or short packet) is written to the Rx FIFO. */
    using OTG_DOEPTSIZ6_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Received data PID This is the data PID received in the last packet for this endpoint. STUPCNT[1:0]: SETUP packet count This field specifies the number of back-to-back SETUP data packets the endpoint can receive. */
    using OTG_DOEPTSIZ6_RXDPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0_ISOCHRONOUS_OUT_ENDPOINTS: DATA0 (value: 0)
     *          - B_0x1_ISOCHRONOUS_OUT_ENDPOINTS: DATA2 (value: 1)
     *          - B_0x2_ISOCHRONOUS_OUT_ENDPOINTS: DATA1 (value: 2)
     *          - B_0x3_ISOCHRONOUS_OUT_ENDPOINTS: MDATA (value: 3)
     */
        /** @brief DATA0 */
    constexpr std::uint32_t OTG_DOEPTSIZ6_RXDPID_B_0x0_ISOCHRONOUS_OUT_ENDPOINTS = 0;
        /** @brief DATA2 */
    constexpr std::uint32_t OTG_DOEPTSIZ6_RXDPID_B_0x1_ISOCHRONOUS_OUT_ENDPOINTS = 1;
        /** @brief DATA1 */
    constexpr std::uint32_t OTG_DOEPTSIZ6_RXDPID_B_0x2_ISOCHRONOUS_OUT_ENDPOINTS = 2;
        /** @brief MDATA */
    constexpr std::uint32_t OTG_DOEPTSIZ6_RXDPID_B_0x3_ISOCHRONOUS_OUT_ENDPOINTS = 3;

    /** @brief OTG device OUT endpoint 6 DMA address register */
    using OTG_DOEPDMA6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBD4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA Address This field holds the start address in the external memory from which the data for the endpoint must be fetched. This register is incremented on every AHB transaction. */
    using OTG_DOEPDMA6_DMAADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device OUT endpoint 7 control register */
    using OTG_DOEPCTL7_INT_BULK = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBE0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size The application must program this field with the maximum packet size for the current logical endpoint. This value is in bytes. */
    using OTG_DOEPCTL7_INT_BULK_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB active endpoint Indicates whether this endpoint is active in the current configuration and interface. The core clears this bit for all endpoints (other than EP 0) after detecting a USB reset. After receiving the SetConfiguration and SetInterface commands, the application must program endpoint registers accordingly and set this bit. */
    using OTG_DOEPCTL7_INT_BULK_USBAEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint data PID Applies to interrupt/bulk OUT endpoints only. Contains the PID of the packet to be received or transmitted on this endpoint. The application must program the PID of the first packet to be received or transmitted on this endpoint, after the endpoint is activated. The application uses the SD0PID and SD1PID register fields to program either DATA0 or DATA1 PID. */
    using OTG_DOEPCTL7_INT_BULK_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATA0 (value: 0)
     *          - B_0x1: DATA1 (value: 1)
     */
        /** @brief DATA0 */
    constexpr std::uint32_t OTG_DOEPCTL7_INT_BULK_DPID_B_0x0 = 0;
        /** @brief DATA1 */
    constexpr std::uint32_t OTG_DOEPCTL7_INT_BULK_DPID_B_0x1 = 1;

    /** @brief NAK status Indicates the following: When either the application or the core sets this bit: The core stops receiving any data on an OUT endpoint, even if there is space in the Rx FIFO to accommodate the incoming packet. Irrespective of this bits setting, the core always responds to SETUP data packets with an ACK handshake. */
    using OTG_DOEPCTL7_INT_BULK_NAKSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The core is transmitting non-NAK handshakes based on the FIFO status. (value: 0)
     *          - B_0x1: The core is transmitting NAK handshakes on this endpoint. (value: 1)
     */
        /** @brief The core is transmitting non-NAK handshakes based on the FIFO status. */
    constexpr std::uint32_t OTG_DOEPCTL7_INT_BULK_NAKSTS_B_0x0 = 0;
        /** @brief The core is transmitting NAK handshakes on this endpoint. */
    constexpr std::uint32_t OTG_DOEPCTL7_INT_BULK_NAKSTS_B_0x1 = 1;

    /** @brief Endpoint type This is the transfer type supported by this logical endpoint. */
    using OTG_DOEPCTL7_INT_BULK_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_DOEPCTL7_INT_BULK_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_DOEPCTL7_INT_BULK_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_DOEPCTL7_INT_BULK_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_DOEPCTL7_INT_BULK_EPTYP_B_0x3 = 3;

    /** @brief Snoop mode This bit configures the endpoint to Snoop mode. In Snoop mode, the core does not check the correctness of OUT packets before transferring them to application memory. */
    using OTG_DOEPCTL7_INT_BULK_SNPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL handshake Applies to non-control, non-isochronous OUT endpoints only (access type is rw). The application sets this bit to stall all tokens from the USB host to this endpoint. If a NAK bit, Global IN NAK, or Global OUT NAK is set along with this bit, the STALL bit takes priority. Only the application can clear this bit, never the core. Applies to control endpoints only (access type is rs). The application can only set this bit, and the core clears it, when a SETUP token is received for this endpoint. If a NAK bit, Global IN NAK, or Global OUT NAK is set along with this bit, the STALL bit takes priority. Irrespective of this bits setting, the core always responds to SETUP data packets with an ACK handshake. */
    using OTG_DOEPCTL7_INT_BULK_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear NAK A write to this bit clears the NAK bit for the endpoint. */
    using OTG_DOEPCTL7_INT_BULK_CNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set NAK A write to this bit sets the NAK bit for the endpoint. Using this bit, the application can control the transmission of NAK handshakes on an endpoint. The core can also set this bit for OUT endpoints on a transfer completed interrupt, or after a SETUP is received on the endpoint. */
    using OTG_DOEPCTL7_INT_BULK_SNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set DATA0 PID Applies to interrupt/bulk OUT endpoints only. Writing to this field sets the endpoint data PID (DPID) field in this register to DATA0. */
    using OTG_DOEPCTL7_INT_BULK_SD0PID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set DATA1 PID Writing to this field sets the endpoint data PID (DPID) field in this register to DATA1. */
    using OTG_DOEPCTL7_INT_BULK_SD1PID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disable The application sets this bit to stop transmitting/receiving data on an endpoint, even before the transfer for that endpoint is complete. The application must wait for the endpoint disabled interrupt before treating the endpoint as disabled. The core clears this bit before setting the endpoint disabled interrupt. The application must set this bit only if endpoint enable is already set for this endpoint. */
    using OTG_DOEPCTL7_INT_BULK_EPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint enable Applies to IN and OUT endpoints. The application sets this bit to start transmitting data on an endpoint. The core clears this bit before setting any of the following interrupts on this endpoint: SETUP phase done Endpoint disabled Transfer completed */
    using OTG_DOEPCTL7_INT_BULK_EPENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device OUT endpoint 7 control register */
    using OTG_DOEPCTL7_ISO = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBE0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size The application must program this field with the maximum packet size for the current logical endpoint. This value is in bytes. */
    using OTG_DOEPCTL7_ISO_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB active endpoint Indicates whether this endpoint is active in the current configuration and interface. The core clears this bit for all endpoints (other than EP 0) after detecting a USB reset. After receiving the SetConfiguration and SetInterface commands, the application must program endpoint registers accordingly and set this bit. */
    using OTG_DOEPCTL7_ISO_USBAEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Even/odd frame Applies to isochronous OUT endpoints only. Indicates the frame number in which the core transmits/receives isochronous data for this endpoint. The application must program the even/odd frame number in which it intends to transmit/receive isochronous data for this endpoint using the SEVNFRM and SODDFRM fields in this register. */
    using OTG_DOEPCTL7_ISO_EONUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Even frame (value: 0)
     *          - B_0x1: Odd frame (value: 1)
     */
        /** @brief Even frame */
    constexpr std::uint32_t OTG_DOEPCTL7_ISO_EONUM_B_0x0 = 0;
        /** @brief Odd frame */
    constexpr std::uint32_t OTG_DOEPCTL7_ISO_EONUM_B_0x1 = 1;

    /** @brief NAK status Indicates the following: When either the application or the core sets this bit: The core stops receiving any data on an OUT endpoint, even if there is space in the Rx FIFO to accommodate the incoming packet. Irrespective of this bits setting, the core always responds to SETUP data packets with an ACK handshake. */
    using OTG_DOEPCTL7_ISO_NAKSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The core is transmitting non-NAK handshakes based on the FIFO status. (value: 0)
     *          - B_0x1: The core is transmitting NAK handshakes on this endpoint. (value: 1)
     */
        /** @brief The core is transmitting non-NAK handshakes based on the FIFO status. */
    constexpr std::uint32_t OTG_DOEPCTL7_ISO_NAKSTS_B_0x0 = 0;
        /** @brief The core is transmitting NAK handshakes on this endpoint. */
    constexpr std::uint32_t OTG_DOEPCTL7_ISO_NAKSTS_B_0x1 = 1;

    /** @brief Endpoint type This is the transfer type supported by this logical endpoint. */
    using OTG_DOEPCTL7_ISO_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_DOEPCTL7_ISO_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_DOEPCTL7_ISO_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_DOEPCTL7_ISO_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_DOEPCTL7_ISO_EPTYP_B_0x3 = 3;

    /** @brief Snoop mode This bit configures the endpoint to Snoop mode. In Snoop mode, the core does not check the correctness of OUT packets before transferring them to application memory. */
    using OTG_DOEPCTL7_ISO_SNPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL handshake Applies to non-control, non-isochronous OUT endpoints only (access type is rw). The application sets this bit to stall all tokens from the USB host to this endpoint. If a NAK bit, Global IN NAK, or Global OUT NAK is set along with this bit, the STALL bit takes priority. Only the application can clear this bit, never the core. Applies to control endpoints only (access type is rs). The application can only set this bit, and the core clears it, when a SETUP token is received for this endpoint. If a NAK bit, Global IN NAK, or Global OUT NAK is set along with this bit, the STALL bit takes priority. Irrespective of this bits setting, the core always responds to SETUP data packets with an ACK handshake. */
    using OTG_DOEPCTL7_ISO_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear NAK A write to this bit clears the NAK bit for the endpoint. */
    using OTG_DOEPCTL7_ISO_CNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set NAK A write to this bit sets the NAK bit for the endpoint. Using this bit, the application can control the transmission of NAK handshakes on an endpoint. The core can also set this bit for OUT endpoints on a transfer completed interrupt, or after a SETUP is received on the endpoint. */
    using OTG_DOEPCTL7_ISO_SNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set even frame Applies to isochronous OUT endpoints only. Writing to this field sets the Even/Odd frame (EONUM) field to even frame. */
    using OTG_DOEPCTL7_ISO_SEVNFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set odd frame Applies to isochronous IN and OUT endpoints only. Writing to this field sets the Even/Odd frame (EONUM) field to odd frame. */
    using OTG_DOEPCTL7_ISO_SODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disable The application sets this bit to stop transmitting/receiving data on an endpoint, even before the transfer for that endpoint is complete. The application must wait for the endpoint disabled interrupt before treating the endpoint as disabled. The core clears this bit before setting the endpoint disabled interrupt. The application must set this bit only if endpoint enable is already set for this endpoint. */
    using OTG_DOEPCTL7_ISO_EPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint enable Applies to IN and OUT endpoints. The application sets this bit to start transmitting data on an endpoint. The core clears this bit before setting any of the following interrupts on this endpoint: SETUP phase done Endpoint disabled Transfer completed */
    using OTG_DOEPCTL7_ISO_EPENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device OUT endpoint 7 interrupt register */
    using OTG_DOEPINT7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBE8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed interrupt This field indicates that the programmed transfer is complete on the AHB as well as on the USB, for this endpoint. */
    using OTG_DOEPINT7_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disabled interrupt This bit indicates that the endpoint is disabled per the applications request. */
    using OTG_DOEPINT7_EPDISD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error This is generated only in internal DMA mode when there is an AHB error during an AHB read/write. The application can read the corresponding endpoint DMA address register to get the error address. */
    using OTG_DOEPINT7_AHBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SETUP phase done Applies to control OUT endpoint only.Indicates that the SETUP phase for the control endpoint is complete and no more back-to-back SETUP packets were received for the current control transfer. On this interrupt, the application can decode the received SETUP data packet. */
    using OTG_DOEPINT7_STUP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OUT token received when endpoint disabled Applies only to control OUT endpoints. Indicates that an OUT token was received when the endpoint was not yet enabled. This interrupt is asserted on the endpoint for which the OUT token was received. */
    using OTG_DOEPINT7_OTEPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Status phase received for control write This interrupt is valid only for control OUT endpoints. This interrupt is generated only after OTG_HS has transferred all the data that the host has sent during the data phase of a control write transfer, to the system memory buffer. The interrupt indicates to the application that the host has switched from data phase to the status phase of a control write transfer. The application can use this interrupt to ACK or STALL the status phase, after it has decoded the data phase. */
    using OTG_DOEPINT7_STSPHSRX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Back-to-back SETUP packets received Applies to control OUT endpoint only. This bit indicates that the core has received more than three back-to-back SETUP packets for this particular endpoint. */
    using OTG_DOEPINT7_B2BSTUP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OUT packet error This interrupt is asserted when the core detects an overflow or a CRC error for an OUT packet. This interrupt is valid only when thresholding is enabled. */
    using OTG_DOEPINT7_OUTPKTERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Babble error interrupt The core generates this interrupt when babble is received for the endpoint. */
    using OTG_DOEPINT7_BERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK input The core generates this interrupt when a NAK is transmitted or received by the device. In case of isochronous IN endpoints the interrupt gets generated when a zero length packet is transmitted due to unavailability of data in the Tx FIFO. */
    using OTG_DOEPINT7_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NYET interrupt This interrupt is generated when a NYET response is transmitted for a non isochronous OUT endpoint. */
    using OTG_DOEPINT7_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Setup packet received Applicable for control OUT endpoints in only in the Buffer DMA Mode. Set by the OTG_HS, this bit indicates that this buffer holds 8 bytes of setup data. There is only one setup packet per buffer. On receiving a setup packet, the OTG_HS closes the buffer and disables the corresponding endpoint after SETUP_COMPLETE status is seen in the Rx FIFO. OTG_HS puts a SETUP_COMPLETE status into the Rx FIFO when it sees the first IN or OUT token after the SETUP packet for that particular endpoint. The application must then re-enable the endpoint to receive any OUT data for the control transfer and reprogram the buffer start address. Because of the above behavior, OTG_HS can receive any number of back to back setup packets and one buffer for every setup packet is used. */
    using OTG_DOEPINT7_STPKTRX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device OUT endpoint 7 transfer size register */
    using OTG_DOEPTSIZ7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBF0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size This field contains the transfer size in bytes for the current endpoint. The core only interrupts the application after it has exhausted the transfer size amount of data. The transfer size can be set to the maximum packet size of the endpoint, to be interrupted at the end of each packet. The core decrements this field every time a packet is read from the Rx FIFO and written to the external memory. */
    using OTG_DOEPTSIZ7_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count Indicates the total number of USB packets that constitute the transfer size amount of data for this endpoint. This field is decremented every time a packet (maximum size or short packet) is written to the Rx FIFO. */
    using OTG_DOEPTSIZ7_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Received data PID This is the data PID received in the last packet for this endpoint. STUPCNT[1:0]: SETUP packet count This field specifies the number of back-to-back SETUP data packets the endpoint can receive. */
    using OTG_DOEPTSIZ7_RXDPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0_ISOCHRONOUS_OUT_ENDPOINTS: DATA0 (value: 0)
     *          - B_0x1_ISOCHRONOUS_OUT_ENDPOINTS: DATA2 (value: 1)
     *          - B_0x2_ISOCHRONOUS_OUT_ENDPOINTS: DATA1 (value: 2)
     *          - B_0x3_ISOCHRONOUS_OUT_ENDPOINTS: MDATA (value: 3)
     */
        /** @brief DATA0 */
    constexpr std::uint32_t OTG_DOEPTSIZ7_RXDPID_B_0x0_ISOCHRONOUS_OUT_ENDPOINTS = 0;
        /** @brief DATA2 */
    constexpr std::uint32_t OTG_DOEPTSIZ7_RXDPID_B_0x1_ISOCHRONOUS_OUT_ENDPOINTS = 1;
        /** @brief DATA1 */
    constexpr std::uint32_t OTG_DOEPTSIZ7_RXDPID_B_0x2_ISOCHRONOUS_OUT_ENDPOINTS = 2;
        /** @brief MDATA */
    constexpr std::uint32_t OTG_DOEPTSIZ7_RXDPID_B_0x3_ISOCHRONOUS_OUT_ENDPOINTS = 3;

    /** @brief OTG device OUT endpoint 7 DMA address register */
    using OTG_DOEPDMA7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBF4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA Address This field holds the start address in the external memory from which the data for the endpoint must be fetched. This register is incremented on every AHB transaction. */
    using OTG_DOEPDMA7_DMAADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device OUT endpoint 8 control register */
    using OTG_DOEPCTL8_INT_BULK = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC00, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size The application must program this field with the maximum packet size for the current logical endpoint. This value is in bytes. */
    using OTG_DOEPCTL8_INT_BULK_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB active endpoint Indicates whether this endpoint is active in the current configuration and interface. The core clears this bit for all endpoints (other than EP 0) after detecting a USB reset. After receiving the SetConfiguration and SetInterface commands, the application must program endpoint registers accordingly and set this bit. */
    using OTG_DOEPCTL8_INT_BULK_USBAEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint data PID Applies to interrupt/bulk OUT endpoints only. Contains the PID of the packet to be received or transmitted on this endpoint. The application must program the PID of the first packet to be received or transmitted on this endpoint, after the endpoint is activated. The application uses the SD0PID and SD1PID register fields to program either DATA0 or DATA1 PID. */
    using OTG_DOEPCTL8_INT_BULK_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DATA0 (value: 0)
     *          - B_0x1: DATA1 (value: 1)
     */
        /** @brief DATA0 */
    constexpr std::uint32_t OTG_DOEPCTL8_INT_BULK_DPID_B_0x0 = 0;
        /** @brief DATA1 */
    constexpr std::uint32_t OTG_DOEPCTL8_INT_BULK_DPID_B_0x1 = 1;

    /** @brief NAK status Indicates the following: When either the application or the core sets this bit: The core stops receiving any data on an OUT endpoint, even if there is space in the Rx FIFO to accommodate the incoming packet. Irrespective of this bits setting, the core always responds to SETUP data packets with an ACK handshake. */
    using OTG_DOEPCTL8_INT_BULK_NAKSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The core is transmitting non-NAK handshakes based on the FIFO status. (value: 0)
     *          - B_0x1: The core is transmitting NAK handshakes on this endpoint. (value: 1)
     */
        /** @brief The core is transmitting non-NAK handshakes based on the FIFO status. */
    constexpr std::uint32_t OTG_DOEPCTL8_INT_BULK_NAKSTS_B_0x0 = 0;
        /** @brief The core is transmitting NAK handshakes on this endpoint. */
    constexpr std::uint32_t OTG_DOEPCTL8_INT_BULK_NAKSTS_B_0x1 = 1;

    /** @brief Endpoint type This is the transfer type supported by this logical endpoint. */
    using OTG_DOEPCTL8_INT_BULK_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_DOEPCTL8_INT_BULK_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_DOEPCTL8_INT_BULK_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_DOEPCTL8_INT_BULK_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_DOEPCTL8_INT_BULK_EPTYP_B_0x3 = 3;

    /** @brief Snoop mode This bit configures the endpoint to Snoop mode. In Snoop mode, the core does not check the correctness of OUT packets before transferring them to application memory. */
    using OTG_DOEPCTL8_INT_BULK_SNPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL handshake Applies to non-control, non-isochronous OUT endpoints only (access type is rw). The application sets this bit to stall all tokens from the USB host to this endpoint. If a NAK bit, Global IN NAK, or Global OUT NAK is set along with this bit, the STALL bit takes priority. Only the application can clear this bit, never the core. Applies to control endpoints only (access type is rs). The application can only set this bit, and the core clears it, when a SETUP token is received for this endpoint. If a NAK bit, Global IN NAK, or Global OUT NAK is set along with this bit, the STALL bit takes priority. Irrespective of this bits setting, the core always responds to SETUP data packets with an ACK handshake. */
    using OTG_DOEPCTL8_INT_BULK_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear NAK A write to this bit clears the NAK bit for the endpoint. */
    using OTG_DOEPCTL8_INT_BULK_CNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set NAK A write to this bit sets the NAK bit for the endpoint. Using this bit, the application can control the transmission of NAK handshakes on an endpoint. The core can also set this bit for OUT endpoints on a transfer completed interrupt, or after a SETUP is received on the endpoint. */
    using OTG_DOEPCTL8_INT_BULK_SNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set DATA0 PID Applies to interrupt/bulk OUT endpoints only. Writing to this field sets the endpoint data PID (DPID) field in this register to DATA0. */
    using OTG_DOEPCTL8_INT_BULK_SD0PID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set DATA1 PID Writing to this field sets the endpoint data PID (DPID) field in this register to DATA1. */
    using OTG_DOEPCTL8_INT_BULK_SD1PID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disable The application sets this bit to stop transmitting/receiving data on an endpoint, even before the transfer for that endpoint is complete. The application must wait for the endpoint disabled interrupt before treating the endpoint as disabled. The core clears this bit before setting the endpoint disabled interrupt. The application must set this bit only if endpoint enable is already set for this endpoint. */
    using OTG_DOEPCTL8_INT_BULK_EPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint enable Applies to IN and OUT endpoints. The application sets this bit to start transmitting data on an endpoint. The core clears this bit before setting any of the following interrupts on this endpoint: SETUP phase done Endpoint disabled Transfer completed */
    using OTG_DOEPCTL8_INT_BULK_EPENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device OUT endpoint 8 control register */
    using OTG_DOEPCTL8_ISO = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC00, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum packet size The application must program this field with the maximum packet size for the current logical endpoint. This value is in bytes. */
    using OTG_DOEPCTL8_ISO_MPSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB active endpoint Indicates whether this endpoint is active in the current configuration and interface. The core clears this bit for all endpoints (other than EP 0) after detecting a USB reset. After receiving the SetConfiguration and SetInterface commands, the application must program endpoint registers accordingly and set this bit. */
    using OTG_DOEPCTL8_ISO_USBAEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Even/odd frame Applies to isochronous OUT endpoints only. Indicates the frame number in which the core transmits/receives isochronous data for this endpoint. The application must program the even/odd frame number in which it intends to transmit/receive isochronous data for this endpoint using the SEVNFRM and SODDFRM fields in this register. */
    using OTG_DOEPCTL8_ISO_EONUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Even frame (value: 0)
     *          - B_0x1: Odd frame (value: 1)
     */
        /** @brief Even frame */
    constexpr std::uint32_t OTG_DOEPCTL8_ISO_EONUM_B_0x0 = 0;
        /** @brief Odd frame */
    constexpr std::uint32_t OTG_DOEPCTL8_ISO_EONUM_B_0x1 = 1;

    /** @brief NAK status Indicates the following: When either the application or the core sets this bit: The core stops receiving any data on an OUT endpoint, even if there is space in the Rx FIFO to accommodate the incoming packet. Irrespective of this bits setting, the core always responds to SETUP data packets with an ACK handshake. */
    using OTG_DOEPCTL8_ISO_NAKSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The core is transmitting non-NAK handshakes based on the FIFO status. (value: 0)
     *          - B_0x1: The core is transmitting NAK handshakes on this endpoint. (value: 1)
     */
        /** @brief The core is transmitting non-NAK handshakes based on the FIFO status. */
    constexpr std::uint32_t OTG_DOEPCTL8_ISO_NAKSTS_B_0x0 = 0;
        /** @brief The core is transmitting NAK handshakes on this endpoint. */
    constexpr std::uint32_t OTG_DOEPCTL8_ISO_NAKSTS_B_0x1 = 1;

    /** @brief Endpoint type This is the transfer type supported by this logical endpoint. */
    using OTG_DOEPCTL8_ISO_EPTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control (value: 0)
     *          - B_0x1: Isochronous (value: 1)
     *          - B_0x2: Bulk (value: 2)
     *          - B_0x3: Interrupt (value: 3)
     */
        /** @brief Control */
    constexpr std::uint32_t OTG_DOEPCTL8_ISO_EPTYP_B_0x0 = 0;
        /** @brief Isochronous */
    constexpr std::uint32_t OTG_DOEPCTL8_ISO_EPTYP_B_0x1 = 1;
        /** @brief Bulk */
    constexpr std::uint32_t OTG_DOEPCTL8_ISO_EPTYP_B_0x2 = 2;
        /** @brief Interrupt */
    constexpr std::uint32_t OTG_DOEPCTL8_ISO_EPTYP_B_0x3 = 3;

    /** @brief Snoop mode This bit configures the endpoint to Snoop mode. In Snoop mode, the core does not check the correctness of OUT packets before transferring them to application memory. */
    using OTG_DOEPCTL8_ISO_SNPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STALL handshake Applies to non-control, non-isochronous OUT endpoints only (access type is rw). The application sets this bit to stall all tokens from the USB host to this endpoint. If a NAK bit, Global IN NAK, or Global OUT NAK is set along with this bit, the STALL bit takes priority. Only the application can clear this bit, never the core. Applies to control endpoints only (access type is rs). The application can only set this bit, and the core clears it, when a SETUP token is received for this endpoint. If a NAK bit, Global IN NAK, or Global OUT NAK is set along with this bit, the STALL bit takes priority. Irrespective of this bits setting, the core always responds to SETUP data packets with an ACK handshake. */
    using OTG_DOEPCTL8_ISO_STALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear NAK A write to this bit clears the NAK bit for the endpoint. */
    using OTG_DOEPCTL8_ISO_CNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set NAK A write to this bit sets the NAK bit for the endpoint. Using this bit, the application can control the transmission of NAK handshakes on an endpoint. The core can also set this bit for OUT endpoints on a transfer completed interrupt, or after a SETUP is received on the endpoint. */
    using OTG_DOEPCTL8_ISO_SNAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set even frame Applies to isochronous OUT endpoints only. Writing to this field sets the Even/Odd frame (EONUM) field to even frame. */
    using OTG_DOEPCTL8_ISO_SEVNFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set odd frame Applies to isochronous IN and OUT endpoints only. Writing to this field sets the Even/Odd frame (EONUM) field to odd frame. */
    using OTG_DOEPCTL8_ISO_SODDFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disable The application sets this bit to stop transmitting/receiving data on an endpoint, even before the transfer for that endpoint is complete. The application must wait for the endpoint disabled interrupt before treating the endpoint as disabled. The core clears this bit before setting the endpoint disabled interrupt. The application must set this bit only if endpoint enable is already set for this endpoint. */
    using OTG_DOEPCTL8_ISO_EPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint enable Applies to IN and OUT endpoints. The application sets this bit to start transmitting data on an endpoint. The core clears this bit before setting any of the following interrupts on this endpoint: SETUP phase done Endpoint disabled Transfer completed */
    using OTG_DOEPCTL8_ISO_EPENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device OUT endpoint 8 interrupt register */
    using OTG_DOEPINT8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC08, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer completed interrupt This field indicates that the programmed transfer is complete on the AHB as well as on the USB, for this endpoint. */
    using OTG_DOEPINT8_XFRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint disabled interrupt This bit indicates that the endpoint is disabled per the applications request. */
    using OTG_DOEPINT8_EPDISD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB error This is generated only in internal DMA mode when there is an AHB error during an AHB read/write. The application can read the corresponding endpoint DMA address register to get the error address. */
    using OTG_DOEPINT8_AHBERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SETUP phase done Applies to control OUT endpoint only.Indicates that the SETUP phase for the control endpoint is complete and no more back-to-back SETUP packets were received for the current control transfer. On this interrupt, the application can decode the received SETUP data packet. */
    using OTG_DOEPINT8_STUP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OUT token received when endpoint disabled Applies only to control OUT endpoints. Indicates that an OUT token was received when the endpoint was not yet enabled. This interrupt is asserted on the endpoint for which the OUT token was received. */
    using OTG_DOEPINT8_OTEPDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Status phase received for control write This interrupt is valid only for control OUT endpoints. This interrupt is generated only after OTG_HS has transferred all the data that the host has sent during the data phase of a control write transfer, to the system memory buffer. The interrupt indicates to the application that the host has switched from data phase to the status phase of a control write transfer. The application can use this interrupt to ACK or STALL the status phase, after it has decoded the data phase. */
    using OTG_DOEPINT8_STSPHSRX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Back-to-back SETUP packets received Applies to control OUT endpoint only. This bit indicates that the core has received more than three back-to-back SETUP packets for this particular endpoint. */
    using OTG_DOEPINT8_B2BSTUP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OUT packet error This interrupt is asserted when the core detects an overflow or a CRC error for an OUT packet. This interrupt is valid only when thresholding is enabled. */
    using OTG_DOEPINT8_OUTPKTERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Babble error interrupt The core generates this interrupt when babble is received for the endpoint. */
    using OTG_DOEPINT8_BERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NAK input The core generates this interrupt when a NAK is transmitted or received by the device. In case of isochronous IN endpoints the interrupt gets generated when a zero length packet is transmitted due to unavailability of data in the Tx FIFO. */
    using OTG_DOEPINT8_NAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NYET interrupt This interrupt is generated when a NYET response is transmitted for a non isochronous OUT endpoint. */
    using OTG_DOEPINT8_NYET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Setup packet received Applicable for control OUT endpoints in only in the Buffer DMA Mode. Set by the OTG_HS, this bit indicates that this buffer holds 8 bytes of setup data. There is only one setup packet per buffer. On receiving a setup packet, the OTG_HS closes the buffer and disables the corresponding endpoint after SETUP_COMPLETE status is seen in the Rx FIFO. OTG_HS puts a SETUP_COMPLETE status into the Rx FIFO when it sees the first IN or OUT token after the SETUP packet for that particular endpoint. The application must then re-enable the endpoint to receive any OUT data for the control transfer and reprogram the buffer start address. Because of the above behavior, OTG_HS can receive any number of back to back setup packets and one buffer for every setup packet is used. */
    using OTG_DOEPINT8_STPKTRX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG device OUT endpoint 8 transfer size register */
    using OTG_DOEPTSIZ8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer size This field contains the transfer size in bytes for the current endpoint. The core only interrupts the application after it has exhausted the transfer size amount of data. The transfer size can be set to the maximum packet size of the endpoint, to be interrupted at the end of each packet. The core decrements this field every time a packet is read from the Rx FIFO and written to the external memory. */
    using OTG_DOEPTSIZ8_XFRSIZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 19, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet count Indicates the total number of USB packets that constitute the transfer size amount of data for this endpoint. This field is decremented every time a packet (maximum size or short packet) is written to the Rx FIFO. */
    using OTG_DOEPTSIZ8_PKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Received data PID This is the data PID received in the last packet for this endpoint. STUPCNT[1:0]: SETUP packet count This field specifies the number of back-to-back SETUP data packets the endpoint can receive. */
    using OTG_DOEPTSIZ8_RXDPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0_ISOCHRONOUS_OUT_ENDPOINTS: DATA0 (value: 0)
     *          - B_0x1_ISOCHRONOUS_OUT_ENDPOINTS: DATA2 (value: 1)
     *          - B_0x2_ISOCHRONOUS_OUT_ENDPOINTS: DATA1 (value: 2)
     *          - B_0x3_ISOCHRONOUS_OUT_ENDPOINTS: MDATA (value: 3)
     */
        /** @brief DATA0 */
    constexpr std::uint32_t OTG_DOEPTSIZ8_RXDPID_B_0x0_ISOCHRONOUS_OUT_ENDPOINTS = 0;
        /** @brief DATA2 */
    constexpr std::uint32_t OTG_DOEPTSIZ8_RXDPID_B_0x1_ISOCHRONOUS_OUT_ENDPOINTS = 1;
        /** @brief DATA1 */
    constexpr std::uint32_t OTG_DOEPTSIZ8_RXDPID_B_0x2_ISOCHRONOUS_OUT_ENDPOINTS = 2;
        /** @brief MDATA */
    constexpr std::uint32_t OTG_DOEPTSIZ8_RXDPID_B_0x3_ISOCHRONOUS_OUT_ENDPOINTS = 3;

    /** @brief OTG device OUT endpoint 8 DMA address register */
    using OTG_DOEPDMA8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA Address This field holds the start address in the external memory from which the data for the endpoint must be fetched. This register is incremented on every AHB transaction. */
    using OTG_DOEPDMA8_DMAADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG power and clock gating control register */
    using OTG_PCGCCTL = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xE00, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Stop PHY clock The application sets this bit to stop the PHY clock when the USB is suspended, the session is not valid, or the device is disconnected. The application clears this bit when the USB is resumed or a new session starts. */
    using OTG_PCGCCTL_STPPCLK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Gate HCLK The application sets this bit to gate HCLK to modules other than the AHB Slave and Master and wakeup logic when the USB is suspended or the session is not valid. The application clears this bit when the USB is resumed or a new session starts. */
    using OTG_PCGCCTL_GATEHCLK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PHY suspended Indicates that the PHY has been suspended. This bit is updated once the PHY is suspended after the application has set the STPPCLK bit. */
    using OTG_PCGCCTL_PHYSUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable sleep clock gating When this bit is set, core internal clock gating is enabled in Sleep state if the core cannot assert utmi_l1_suspend_n. When this bit is not set, the PHY clock is not gated in Sleep state. */
    using OTG_PCGCCTL_ENL1GTG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PHY in Sleep This bit indicates that the PHY is in the Sleep state. */
    using OTG_PCGCCTL_PHYSLEEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Deep Sleep This bit indicates that the PHY is in Deep Sleep when in L1 state. */
    using OTG_PCGCCTL_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG power and clock gating control register 1 */
    using OTG_PCGCCTL1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xE04, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable active clock gating The application programs GATEEN to enable Active Clock Gating feature for the PHY and AHB clocks. */
    using OTG_PCGCCTL1_GATEEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Counter for clock gating Indicates to the controller how many PHY Clock cycles and AHB Clock cycles of 'IDLE' (no activity) the controller waits for before Gating the respective PHY and AHB clocks internal to the controller. */
    using OTG_PCGCCTL1_CNTGATECLK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 64 clocks (value: 0)
     *          - B_0x1: 128 clocks (value: 1)
     *          - B_0x2: FIELD Reserved (value: 2)
     *          - B_0x3: FIELD Reserved (value: 3)
     */
        /** @brief 64 clocks */
    constexpr std::uint32_t OTG_PCGCCTL1_CNTGATECLK_B_0x0 = 0;
        /** @brief 128 clocks */
    constexpr std::uint32_t OTG_PCGCCTL1_CNTGATECLK_B_0x1 = 1;
        /** @brief FIELD Reserved */
    constexpr std::uint32_t OTG_PCGCCTL1_CNTGATECLK_B_0x2 = 2;
        /** @brief FIELD Reserved */
    constexpr std::uint32_t OTG_PCGCCTL1_CNTGATECLK_B_0x3 = 3;

    /** @brief Enable RAM clock gating Enable gating of the FIFO RAM. */
    using OTG_PCGCCTL1_RAMGATEEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
