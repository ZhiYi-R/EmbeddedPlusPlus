/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32H723_OTG1_HS_GLOBAL_HPP
#define EMBEDDED_PP_STM32H723_OTG1_HS_GLOBAL_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief USB 1 on the go high speed */
namespace STM32H723::OTG1_HS_GLOBAL {

    /** @brief OTG_HS control and status register */
    using OTG_HS_GOTGCTL = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Session request success The core sets this bit when a session request initiation is successful. Note: Only accessible in device mode. */
    using OTG_HS_GOTGCTL_SRQSCS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Session request failure (value: 0)
     *          - B_0x1: Session request success (value: 1)
     */
        /** @brief Session request failure */
    constexpr std::uint32_t OTG_HS_GOTGCTL_SRQSCS_B_0x0 = 0;
        /** @brief Session request success */
    constexpr std::uint32_t OTG_HS_GOTGCTL_SRQSCS_B_0x1 = 1;

    /** @brief Session request The application sets this bit to initiate a session request on the USB. The application can clear this bit by writing a 0 when the host negotiation success status change bit in the OTG_GOTGINT register (HNSSCHG bit in OTG_GOTGINT) is set. The core clears this bit when the HNSSCHG bit is cleared. If the user uses the USB 1.1 full-speed serial transceiver interface to initiate the session request, the application must wait until VBUS discharges to 0.2 V, after the B-session valid bit in this register (BSVLD bit in OTG_GOTGCTL) is cleared. Note: Only accessible in device mode. */
    using OTG_HS_GOTGCTL_SRQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No session request (value: 0)
     *          - B_0x1: Session request (value: 1)
     */
        /** @brief No session request */
    constexpr std::uint32_t OTG_HS_GOTGCTL_SRQ_B_0x0 = 0;
        /** @brief Session request */
    constexpr std::uint32_t OTG_HS_GOTGCTL_SRQ_B_0x1 = 1;

    /** @brief VBUS valid override enable. This bit is used to enable/disable the software to override the vbusvalid signal using the VBVALOVAL bit. Note: Only accessible in host mode. */
    using OTG_HS_GOTGCTL_VBVALOEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Override is disabled and vbusvalid signal from the respective PHY selected is used internally by the core (value: 0)
     *          - B_0x1: Internally vbusvalid received from the PHY is overridden with VBVALOVAL bit value (value: 1)
     */
        /** @brief Override is disabled and vbusvalid signal from the respective PHY selected is used internally by the core */
    constexpr std::uint32_t OTG_HS_GOTGCTL_VBVALOEN_B_0x0 = 0;
        /** @brief Internally vbusvalid received from the PHY is overridden with VBVALOVAL bit value */
    constexpr std::uint32_t OTG_HS_GOTGCTL_VBVALOEN_B_0x1 = 1;

    /** @brief VBUS valid override value. This bit is used to set override value for vbusvalid signal when VBVALOEN bit is set. Note: Only accessible in host mode. */
    using OTG_HS_GOTGCTL_VBVALOVAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: vbusvalid value is '0' when VBVALOEN = 1 (value: 0)
     *          - B_0x1: vbusvalid value is '1' when VBVALOEN = 1 (value: 1)
     */
        /** @brief vbusvalid value is '0' when VBVALOEN = 1 */
    constexpr std::uint32_t OTG_HS_GOTGCTL_VBVALOVAL_B_0x0 = 0;
        /** @brief vbusvalid value is '1' when VBVALOEN = 1 */
    constexpr std::uint32_t OTG_HS_GOTGCTL_VBVALOVAL_B_0x1 = 1;

    /** @brief A-peripheral session valid override enable. This bit is used to enable/disable the software to override the Avalid signal using the AVALOVAL bit. Note: Only accessible in host mode. */
    using OTG_HS_GOTGCTL_AVALOEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Override is disabled and Avalid signal from the respective PHY selected is used internally by the core (value: 0)
     *          - B_0x1: Internally Avalid received from the PHY is overridden with AVALOVAL bit value (value: 1)
     */
        /** @brief Override is disabled and Avalid signal from the respective PHY selected is used internally by the core */
    constexpr std::uint32_t OTG_HS_GOTGCTL_AVALOEN_B_0x0 = 0;
        /** @brief Internally Avalid received from the PHY is overridden with AVALOVAL bit value */
    constexpr std::uint32_t OTG_HS_GOTGCTL_AVALOEN_B_0x1 = 1;

    /** @brief A-peripheral session valid override value. This bit is used to set override value for Avalid signal when AVALOEN bit is set. Note: Only accessible in host mode. */
    using OTG_HS_GOTGCTL_AVALOVAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Avalid value is '0' when AVALOEN = 1 (value: 0)
     *          - B_0x1: Avalid value is '1' when AVALOEN = 1 (value: 1)
     */
        /** @brief Avalid value is '0' when AVALOEN = 1 */
    constexpr std::uint32_t OTG_HS_GOTGCTL_AVALOVAL_B_0x0 = 0;
        /** @brief Avalid value is '1' when AVALOEN = 1 */
    constexpr std::uint32_t OTG_HS_GOTGCTL_AVALOVAL_B_0x1 = 1;

    /** @brief B-peripheral session valid override enable. This bit is used to enable/disable the software to override the Bvalid signal using the BVALOVAL bit. Note: Only accessible in device mode. */
    using OTG_HS_GOTGCTL_BVALOEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Override is disabled and Bvalid signal from the respective PHY selected is used internally by the core (value: 0)
     *          - B_0x1: Internally Bvalid received from the PHY is overridden with BVALOVAL bit value (value: 1)
     */
        /** @brief Override is disabled and Bvalid signal from the respective PHY selected is used internally by the core */
    constexpr std::uint32_t OTG_HS_GOTGCTL_BVALOEN_B_0x0 = 0;
        /** @brief Internally Bvalid received from the PHY is overridden with BVALOVAL bit value */
    constexpr std::uint32_t OTG_HS_GOTGCTL_BVALOEN_B_0x1 = 1;

    /** @brief B-peripheral session valid override value. This bit is used to set override value for Bvalid signal when BVALOEN bit is set. Note: Only accessible in device mode. */
    using OTG_HS_GOTGCTL_BVALOVAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bvalid value is '0' when BVALOEN = 1 (value: 0)
     *          - B_0x1: Bvalid value is '1' when BVALOEN = 1 (value: 1)
     */
        /** @brief Bvalid value is '0' when BVALOEN = 1 */
    constexpr std::uint32_t OTG_HS_GOTGCTL_BVALOVAL_B_0x0 = 0;
        /** @brief Bvalid value is '1' when BVALOEN = 1 */
    constexpr std::uint32_t OTG_HS_GOTGCTL_BVALOVAL_B_0x1 = 1;

    /** @brief Host negotiation success The core sets this bit when host negotiation is successful. The core clears this bit when the HNP request (HNPRQ) bit in this register is set. Note: Only accessible in device mode. */
    using OTG_HS_GOTGCTL_HNGSCS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Host negotiation failure (value: 0)
     *          - B_0x1: Host negotiation success (value: 1)
     */
        /** @brief Host negotiation failure */
    constexpr std::uint32_t OTG_HS_GOTGCTL_HNGSCS_B_0x0 = 0;
        /** @brief Host negotiation success */
    constexpr std::uint32_t OTG_HS_GOTGCTL_HNGSCS_B_0x1 = 1;

    /** @brief HNP request The application sets this bit to initiate an HNP request to the connected USB host. The application can clear this bit by writing a 0 when the host negotiation success status change bit in the OTG_GOTGINT register (HNSSCHG bit in OTG_GOTGINT) is set. The core clears this bit when the HNSSCHG bit is cleared. Note: Only accessible in device mode. */
    using OTG_HS_GOTGCTL_HNPRQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No HNP request (value: 0)
     *          - B_0x1: HNP request (value: 1)
     */
        /** @brief No HNP request */
    constexpr std::uint32_t OTG_HS_GOTGCTL_HNPRQ_B_0x0 = 0;
        /** @brief HNP request */
    constexpr std::uint32_t OTG_HS_GOTGCTL_HNPRQ_B_0x1 = 1;

    /** @brief host set HNP enable The application sets this bit when it has successfully enabled HNP (using the SetFeature.SetHNPEnable command) on the connected device. Note: Only accessible in host mode. */
    using OTG_HS_GOTGCTL_HSHNPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Host Set HNP is not enabled (value: 0)
     *          - B_0x1: Host Set HNP is enabled (value: 1)
     */
        /** @brief Host Set HNP is not enabled */
    constexpr std::uint32_t OTG_HS_GOTGCTL_HSHNPEN_B_0x0 = 0;
        /** @brief Host Set HNP is enabled */
    constexpr std::uint32_t OTG_HS_GOTGCTL_HSHNPEN_B_0x1 = 1;

    /** @brief Device HNP enabled The application sets this bit when it successfully receives a SetFeature.SetHNPEnable command from the connected USB host. Note: Only accessible in device mode. */
    using OTG_HS_GOTGCTL_DHNPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HNP is not enabled in the application (value: 0)
     *          - B_0x1: HNP is enabled in the application (value: 1)
     */
        /** @brief HNP is not enabled in the application */
    constexpr std::uint32_t OTG_HS_GOTGCTL_DHNPEN_B_0x0 = 0;
        /** @brief HNP is enabled in the application */
    constexpr std::uint32_t OTG_HS_GOTGCTL_DHNPEN_B_0x1 = 1;

    /** @brief Embedded host enable It is used to select between OTG A device state machine and embedded host state machine. */
    using OTG_HS_GOTGCTL_EHEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OTG A device state machine is selected (value: 0)
     *          - B_0x1: Embedded host state machine is selected (value: 1)
     */
        /** @brief OTG A device state machine is selected */
    constexpr std::uint32_t OTG_HS_GOTGCTL_EHEN_B_0x0 = 0;
        /** @brief Embedded host state machine is selected */
    constexpr std::uint32_t OTG_HS_GOTGCTL_EHEN_B_0x1 = 1;

    /** @brief Connector ID status Indicates the connector ID status on a connect event. Note: Accessible in both device and host modes. */
    using OTG_HS_GOTGCTL_CIDSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The OTG_HS controller is in A-device mode (value: 0)
     *          - B_0x1: The OTG_HS controller is in B-device mode (value: 1)
     */
        /** @brief The OTG_HS controller is in A-device mode */
    constexpr std::uint32_t OTG_HS_GOTGCTL_CIDSTS_B_0x0 = 0;
        /** @brief The OTG_HS controller is in B-device mode */
    constexpr std::uint32_t OTG_HS_GOTGCTL_CIDSTS_B_0x1 = 1;

    /** @brief Long/short debounce time Indicates the debounce time of a detected connection. Note: Only accessible in host mode. */
    using OTG_HS_GOTGCTL_DBCT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Long debounce time, used for physical connections (100 ms + 2.5 us) (value: 0)
     *          - B_0x1: Short debounce time, used for soft connections (2.5 us) (value: 1)
     */
        /** @brief Long debounce time, used for physical connections (100 ms + 2.5 us) */
    constexpr std::uint32_t OTG_HS_GOTGCTL_DBCT_B_0x0 = 0;
        /** @brief Short debounce time, used for soft connections (2.5 us) */
    constexpr std::uint32_t OTG_HS_GOTGCTL_DBCT_B_0x1 = 1;

    /** @brief A-session valid Indicates the host mode transceiver status. Note: Only accessible in host mode. */
    using OTG_HS_GOTGCTL_ASVLD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: A-session is not valid (value: 0)
     *          - B_0x1: A-session is valid (value: 1)
     */
        /** @brief A-session is not valid */
    constexpr std::uint32_t OTG_HS_GOTGCTL_ASVLD_B_0x0 = 0;
        /** @brief A-session is valid */
    constexpr std::uint32_t OTG_HS_GOTGCTL_ASVLD_B_0x1 = 1;

    /** @brief B-session valid Indicates the device mode transceiver status. In OTG mode, the user can use this bit to determine if the device is connected or disconnected. Note: Only accessible in device mode. */
    using OTG_HS_GOTGCTL_BSVLD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: B-session is not valid. (value: 0)
     *          - B_0x1: B-session is valid. (value: 1)
     */
        /** @brief B-session is not valid. */
    constexpr std::uint32_t OTG_HS_GOTGCTL_BSVLD_B_0x0 = 0;
        /** @brief B-session is valid. */
    constexpr std::uint32_t OTG_HS_GOTGCTL_BSVLD_B_0x1 = 1;

    /** @brief OTG version Selects the OTG revision. */
    using OTG_HS_GOTGCTL_OTGVER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OTG Version 1.3. OTG1.3 is obsolete for new product development. (value: 0)
     *          - B_0x1: OTG Version 2.0. In this version the core supports only data line pulsing for SRP. (value: 1)
     */
        /** @brief OTG Version 1.3. OTG1.3 is obsolete for new product development. */
    constexpr std::uint32_t OTG_HS_GOTGCTL_OTGVER_B_0x0 = 0;
        /** @brief OTG Version 2.0. In this version the core supports only data line pulsing for SRP. */
    constexpr std::uint32_t OTG_HS_GOTGCTL_OTGVER_B_0x1 = 1;

    /** @brief Current mode of operation Indicates the current mode (host or device). */
    using OTG_HS_GOTGCTL_CURMOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Device mode (value: 0)
     *          - B_0x1: Host mode (value: 1)
     */
        /** @brief Device mode */
    constexpr std::uint32_t OTG_HS_GOTGCTL_CURMOD_B_0x0 = 0;
        /** @brief Host mode */
    constexpr std::uint32_t OTG_HS_GOTGCTL_CURMOD_B_0x1 = 1;

    /** @brief OTG_HS interrupt register */
    using OTG_HS_GOTGINT = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Session end detected */
    using OTG_HS_GOTGINT_SEDET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Session request success status change */
    using OTG_HS_GOTGINT_SRSSCHG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Host negotiation success status change */
    using OTG_HS_GOTGINT_HNSSCHG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Host negotiation detected */
    using OTG_HS_GOTGINT_HNGDET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief A-device timeout change */
    using OTG_HS_GOTGINT_ADTOCHG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Debounce done */
    using OTG_HS_GOTGINT_DBCDNE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS AHB configuration register */
    using OTG_HS_GAHBCFG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Global interrupt mask */
    using OTG_HS_GAHBCFG_GINTMSK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Burst length/type */
    using OTG_HS_GAHBCFG_HBSTLEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA enable */
    using OTG_HS_GAHBCFG_DMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TxFIFO empty level */
    using OTG_HS_GAHBCFG_TXFELVL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Periodic TxFIFO empty level */
    using OTG_HS_GAHBCFG_PTXFELVL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS USB configuration register */
    using OTG_HS_GUSBCFG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FS timeout calibration */
    using OTG_HS_GUSBCFG_TOCAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB 2.0 high-speed ULPI PHY or USB 1.1 full-speed serial transceiver select */
    using OTG_HS_GUSBCFG_PHYSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SRP-capable */
    using OTG_HS_GUSBCFG_SRPCAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HNP-capable */
    using OTG_HS_GUSBCFG_HNPCAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB turnaround time */
    using OTG_HS_GUSBCFG_TRDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PHY Low-power clock select */
    using OTG_HS_GUSBCFG_PHYLPCS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ULPI FS/LS select */
    using OTG_HS_GUSBCFG_ULPIFSLS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ULPI Auto-resume */
    using OTG_HS_GUSBCFG_ULPIAR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ULPI Clock SuspendM */
    using OTG_HS_GUSBCFG_ULPICSM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ULPI External VBUS Drive */
    using OTG_HS_GUSBCFG_ULPIEVBUSD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ULPI external VBUS indicator */
    using OTG_HS_GUSBCFG_ULPIEVBUSI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TermSel DLine pulsing selection */
    using OTG_HS_GUSBCFG_TSDPS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Indicator complement */
    using OTG_HS_GUSBCFG_PCCI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Indicator pass through */
    using OTG_HS_GUSBCFG_PTCI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ULPI interface protect disable */
    using OTG_HS_GUSBCFG_ULPIIPD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Forced host mode */
    using OTG_HS_GUSBCFG_FHMOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Forced peripheral mode */
    using OTG_HS_GUSBCFG_FDMOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS reset register */
    using OTG_HS_GRSTCTL = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Core soft reset */
    using OTG_HS_GRSTCTL_CSRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HCLK soft reset */
    using OTG_HS_GRSTCTL_HSRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Host frame counter reset */
    using OTG_HS_GRSTCTL_FCRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RxFIFO flush */
    using OTG_HS_GRSTCTL_RXFFLSH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TxFIFO flush */
    using OTG_HS_GRSTCTL_TXFFLSH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TxFIFO number */
    using OTG_HS_GRSTCTL_TXFNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA request signal enabled for USB OTG HS */
    using OTG_HS_GRSTCTL_DMAREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB master idle */
    using OTG_HS_GRSTCTL_AHBIDL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS core interrupt register */
    using OTG_HS_GINTSTS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current mode of operation Indicates the current mode. Note: Accessible in both host and device modes. */
    using OTG_HS_GINTSTS_CMOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Device mode (value: 0)
     *          - B_0x1: Host mode (value: 1)
     */
        /** @brief Device mode */
    constexpr std::uint32_t OTG_HS_GINTSTS_CMOD_B_0x0 = 0;
        /** @brief Host mode */
    constexpr std::uint32_t OTG_HS_GINTSTS_CMOD_B_0x1 = 1;

    /** @brief Mode mismatch interrupt The core sets this bit when the application is trying to access: A host mode register, when the core is operating in device mode A device mode register, when the core is operating in host mode The register access is completed on the AHB with an OKAY response, but is ignored by the core internally and does not affect the operation of the core. Note: Accessible in both host and device modes. */
    using OTG_HS_GINTSTS_MMIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG interrupt The core sets this bit to indicate an OTG protocol event. The application must read the OTG interrupt status (OTG_GOTGINT) register to determine the exact event that caused this interrupt. The application must clear the appropriate status bit in the OTG_GOTGINT register to clear this bit. Note: Accessible in both host and device modes. */
    using OTG_HS_GINTSTS_OTGINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Start of frame In host mode, the core sets this bit to indicate that an SOF (FS), or Keep-Alive (LS) is transmitted on the USB. The application must write a 1 to this bit to clear the interrupt. In device mode, in the core sets this bit to indicate that an SOF token has been received on the USB. The application can read the OTG_DSTS register to get the current frame number. This interrupt is seen only when the core is operating in FS. Note: This register may return '1' if read immediately after power on reset. If the register bit reads '1' immediately after power on reset it does not indicate that an SOF has been sent (in case of host mode) or SOF has been received (in case of device mode). The read value of this interrupt is valid only after a valid connection between host and device is established. If the bit is set after power on reset the application can clear the bit. Note: Accessible in both host and device modes. */
    using OTG_HS_GINTSTS_SOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx FIFO non-empty Indicates that there is at least one packet pending to be read from the Rx FIFO. Note: Accessible in both host and device modes. */
    using OTG_HS_GINTSTS_RXFLVL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Non-periodic Tx FIFO empty This interrupt is asserted when the non-periodic Tx FIFO is either half or completely empty, and there is space for at least one entry to be written to the non-periodic transmit request queue. The half or completely empty status is determined by the non-periodic Tx FIFO empty level bit in the OTG_GAHBCFG register (TXFELVL bit in OTG_GAHBCFG). Note: Accessible in host mode only. */
    using OTG_HS_GINTSTS_NPTXFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Global IN non-periodic NAK effective Indicates that the Set global non-periodic IN NAK bit in the OTG_DCTL register (SGINAK bit in OTG_DCTL), set by the application, has taken effect in the core. That is, the core has sampled the Global IN NAK bit set by the application. This bit can be cleared by clearing the Clear global non-periodic IN NAK bit in the OTG_DCTL register (CGINAK bit in OTG_DCTL). This interrupt does not necessarily mean that a NAK handshake is sent out on the USB. The STALL bit takes precedence over the NAK bit. Note: Only accessible in device mode. */
    using OTG_HS_GINTSTS_GINAKEFF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Global OUT NAK effective Indicates that the Set global OUT NAK bit in the OTG_DCTL register (SGONAK bit in OTG_DCTL), set by the application, has taken effect in the core. This bit can be cleared by writing the Clear global OUT NAK bit in the OTG_DCTL register (CGONAK bit in OTG_DCTL). Note: Only accessible in device mode. */
    using OTG_HS_GINTSTS_GONAKEFF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Early suspend The core sets this bit to indicate that an Idle state has been detected on the USB for 3 ms. Note: Only accessible in device mode. */
    using OTG_HS_GINTSTS_ESUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB suspend The core sets this bit to indicate that a suspend was detected on the USB. The core enters the suspended state when there is no activity on the data lines for an extended period of time. Note: Only accessible in device mode. */
    using OTG_HS_GINTSTS_USBSUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB reset The core sets this bit to indicate that a reset is detected on the USB. Note: Only accessible in device mode. */
    using OTG_HS_GINTSTS_USBRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enumeration done The core sets this bit to indicate that speed enumeration is complete. The application must read the OTG_DSTS register to obtain the enumerated speed. Note: Only accessible in device mode. */
    using OTG_HS_GINTSTS_ENUMDNE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Isochronous OUT packet dropped interrupt The core sets this bit when it fails to write an isochronous OUT packet into the Rx FIFO because the Rx FIFO does not have enough space to accommodate a maximum size packet for the isochronous OUT endpoint. Note: Only accessible in device mode. */
    using OTG_HS_GINTSTS_ISOODRP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of periodic frame interrupt Indicates that the period specified in the periodic frame interval field of the OTG_DCFG register (PFIVL bit in OTG_DCFG) has been reached in the current frame. Note: Only accessible in device mode. */
    using OTG_HS_GINTSTS_EOPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint interrupt The core sets this bit to indicate that an interrupt is pending on one of the IN endpoints of the core (in device mode). The application must read the OTG_DAINT register to determine the exact number of the IN endpoint on which the interrupt occurred, and then read the corresponding OTG_DIEPINTx register to determine the exact cause of the interrupt. The application must clear the appropriate status bit in the corresponding OTG_DIEPINTx register to clear this bit. Note: Only accessible in device mode. */
    using OTG_HS_GINTSTS_IEPINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OUT endpoint interrupt The core sets this bit to indicate that an interrupt is pending on one of the OUT endpoints of the core (in device mode). The application must read the OTG_DAINT register to determine the exact number of the OUT endpoint on which the interrupt occurred, and then read the corresponding OTG_DOEPINTx register to determine the exact cause of the interrupt. The application must clear the appropriate status bit in the corresponding OTG_DOEPINTx register to clear this bit. Note: Only accessible in device mode. */
    using OTG_HS_GINTSTS_OEPINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Incomplete isochronous IN transfer The core sets this interrupt to indicate that there is at least one isochronous IN endpoint on which the transfer is not completed in the current frame. This interrupt is asserted along with the End of periodic frame interrupt (EOPF) bit in this register. Note: Only accessible in device mode. */
    using OTG_HS_GINTSTS_IISOIXFR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IPXFR_INCOMPISOOUT field */
    using OTG_HS_GINTSTS_IPXFR_INCOMPISOOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data fetch suspended This interrupt is valid only in DMA mode. This interrupt indicates that the core has stopped fetching data for IN endpoints due to the unavailability of TxFIFO space or request queue space. This interrupt is used by the application for an endpoint mismatch algorithm. For example, after detecting an endpoint mismatch, the application: Sets a global nonperiodic IN NAK handshake Disables IN endpoints Flushes the FIFO Determines the token sequence from the IN token sequence learning queue Re-enables the endpoints Clears the global nonperiodic IN NAK handshake If the global nonperiodic IN NAK is cleared, the core has not yet fetched data for the IN endpoint, and the IN token is received: the core generates an IN token received when FIFO empty interrupt. The OTG then sends a NAK response to the host. To avoid this scenario, the application can check the FetSusp interrupt in OTG_GINTSTS, which ensures that the FIFO is full before clearing a global NAK handshake. Alternatively, the application can mask the IN token received when FIFO empty interrupt when clearing a global IN NAK handshake. */
    using OTG_HS_GINTSTS_DATAFSUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reset detected interrupt In device mode, this interrupt is asserted when a reset is detected on the USB in partial power-down mode when the device is in suspend. Note: Only accessible in device mode. */
    using OTG_HS_GINTSTS_RSTDET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Host port interrupt The core sets this bit to indicate a change in port status of one of the OTG_HS controller ports in host mode. The application must read the OTG_HPRT register to determine the exact event that caused this interrupt. The application must clear the appropriate status bit in the OTG_HPRT register to clear this bit. Note: Only accessible in host mode. */
    using OTG_HS_GINTSTS_HPRTINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Host channels interrupt The core sets this bit to indicate that an interrupt is pending on one of the channels of the core (in host mode). The application must read the OTG_HAINT register to determine the exact number of the channel on which the interrupt occurred, and then read the corresponding OTG_HCINTx register to determine the exact cause of the interrupt. The application must clear the appropriate status bit in the OTG_HCINTx register to clear this bit. Note: Only accessible in host mode. */
    using OTG_HS_GINTSTS_HCINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Periodic Tx FIFO empty Asserted when the periodic transmit FIFO is either half or completely empty and there is space for at least one entry to be written in the periodic request queue. The half or completely empty status is determined by the periodic Tx FIFO empty level bit in the OTG_GAHBCFG register (PTXFELVL bit in OTG_GAHBCFG). Note: Only accessible in host mode. */
    using OTG_HS_GINTSTS_PTXFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPM interrupt In device mode, this interrupt is asserted when the device receives an LPM transaction and responds with a non-ERRORed response. In host mode, this interrupt is asserted when the device responds to an LPM transaction with a non-ERRORed response or when the host core has completed LPM transactions for the programmed number of times (RETRYCNT bit in OTG_GLPMCFG). This field is valid only if the LPMEN bit in OTG_GLPMCFG is set to 1. */
    using OTG_HS_GINTSTS_LPMINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Connector ID status change The core sets this bit when there is a change in connector ID status. Note: Accessible in both device and host modes. */
    using OTG_HS_GINTSTS_CIDSCHG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Disconnect detected interrupt Asserted when a device disconnect is detected. Note: Only accessible in host mode. */
    using OTG_HS_GINTSTS_DISCINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Session request/new session detected interrupt In host mode, this interrupt is asserted when a session request is detected from the device. In device mode, this interrupt is asserted when VBUS is in the valid range for a B-peripheral device. Accessible in both device and host modes. */
    using OTG_HS_GINTSTS_SRQINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Resume/remote wakeup detected interrupt Wakeup interrupt during suspend(L2) or LPM(L1) state. During suspend(L2): In device mode, this interrupt is asserted when a resume is detected on the USB. In host mode, this interrupt is asserted when a remote wakeup is detected on the USB. During LPM(L1): This interrupt is asserted for either host initiated resume or device initiated remote wakeup on USB. Note: Accessible in both device and host modes. */
    using OTG_HS_GINTSTS_WKUPINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS interrupt mask register */
    using OTG_HS_GINTMSK = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Mode mismatch interrupt mask Note: Accessible in both device and host modes. */
    using OTG_HS_GINTMSK_MMISM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HS_GINTMSK_MMISM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HS_GINTMSK_MMISM_B_0x1 = 1;

    /** @brief OTG interrupt mask Note: Accessible in both device and host modes. */
    using OTG_HS_GINTMSK_OTGINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HS_GINTMSK_OTGINT_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HS_GINTMSK_OTGINT_B_0x1 = 1;

    /** @brief Start of frame mask Note: Accessible in both device and host modes. */
    using OTG_HS_GINTMSK_SOFM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HS_GINTMSK_SOFM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HS_GINTMSK_SOFM_B_0x1 = 1;

    /** @brief Receive FIFO non-empty mask Note: Accessible in both device and host modes. */
    using OTG_HS_GINTMSK_RXFLVLM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HS_GINTMSK_RXFLVLM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HS_GINTMSK_RXFLVLM_B_0x1 = 1;

    /** @brief Non-periodic Tx FIFO empty mask Note: Only accessible in host mode. */
    using OTG_HS_GINTMSK_NPTXFEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HS_GINTMSK_NPTXFEM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HS_GINTMSK_NPTXFEM_B_0x1 = 1;

    /** @brief Global non-periodic IN NAK effective mask Note: Only accessible in device mode. */
    using OTG_HS_GINTMSK_GINAKEFFM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HS_GINTMSK_GINAKEFFM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HS_GINTMSK_GINAKEFFM_B_0x1 = 1;

    /** @brief Global OUT NAK effective mask Note: Only accessible in device mode. */
    using OTG_HS_GINTMSK_GONAKEFFM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HS_GINTMSK_GONAKEFFM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HS_GINTMSK_GONAKEFFM_B_0x1 = 1;

    /** @brief Early suspend mask Note: Only accessible in device mode. */
    using OTG_HS_GINTMSK_ESUSPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HS_GINTMSK_ESUSPM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HS_GINTMSK_ESUSPM_B_0x1 = 1;

    /** @brief USB suspend mask Note: Only accessible in device mode. */
    using OTG_HS_GINTMSK_USBSUSPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HS_GINTMSK_USBSUSPM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HS_GINTMSK_USBSUSPM_B_0x1 = 1;

    /** @brief USB reset mask Note: Only accessible in device mode. */
    using OTG_HS_GINTMSK_USBRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HS_GINTMSK_USBRST_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HS_GINTMSK_USBRST_B_0x1 = 1;

    /** @brief Enumeration done mask Note: Only accessible in device mode. */
    using OTG_HS_GINTMSK_ENUMDNEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HS_GINTMSK_ENUMDNEM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HS_GINTMSK_ENUMDNEM_B_0x1 = 1;

    /** @brief Isochronous OUT packet dropped interrupt mask Note: Only accessible in device mode. */
    using OTG_HS_GINTMSK_ISOODRPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HS_GINTMSK_ISOODRPM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HS_GINTMSK_ISOODRPM_B_0x1 = 1;

    /** @brief End of periodic frame interrupt mask Note: Only accessible in device mode. */
    using OTG_HS_GINTMSK_EOPFM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HS_GINTMSK_EOPFM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HS_GINTMSK_EOPFM_B_0x1 = 1;

    /** @brief IN endpoints interrupt mask Note: Only accessible in device mode. */
    using OTG_HS_GINTMSK_IEPINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HS_GINTMSK_IEPINT_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HS_GINTMSK_IEPINT_B_0x1 = 1;

    /** @brief OUT endpoints interrupt mask Note: Only accessible in device mode. */
    using OTG_HS_GINTMSK_OEPINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HS_GINTMSK_OEPINT_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HS_GINTMSK_OEPINT_B_0x1 = 1;

    /** @brief Incomplete isochronous IN transfer mask Note: Only accessible in device mode. */
    using OTG_HS_GINTMSK_IISOIXFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HS_GINTMSK_IISOIXFRM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HS_GINTMSK_IISOIXFRM_B_0x1 = 1;

    /** @brief IPXFRM_IISOOXFRM field */
    using OTG_HS_GINTMSK_IPXFRM_IISOOXFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data fetch suspended mask Only accessible in peripheral mode. */
    using OTG_HS_GINTMSK_FSUSPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HS_GINTMSK_FSUSPM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HS_GINTMSK_FSUSPM_B_0x1 = 1;

    /** @brief Reset detected interrupt mask Note: Only accessible in device mode. */
    using OTG_HS_GINTMSK_RSTDETM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HS_GINTMSK_RSTDETM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HS_GINTMSK_RSTDETM_B_0x1 = 1;

    /** @brief Host port interrupt mask Note: Only accessible in host mode. */
    using OTG_HS_GINTMSK_PRTIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HS_GINTMSK_PRTIM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HS_GINTMSK_PRTIM_B_0x1 = 1;

    /** @brief Host channels interrupt mask Note: Only accessible in host mode. */
    using OTG_HS_GINTMSK_HCIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HS_GINTMSK_HCIM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HS_GINTMSK_HCIM_B_0x1 = 1;

    /** @brief Periodic Tx FIFO empty mask Note: Only accessible in host mode. */
    using OTG_HS_GINTMSK_PTXFEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HS_GINTMSK_PTXFEM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HS_GINTMSK_PTXFEM_B_0x1 = 1;

    /** @brief LPM interrupt mask Note: Accessible in both host and device modes. */
    using OTG_HS_GINTMSK_LPMINTM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HS_GINTMSK_LPMINTM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HS_GINTMSK_LPMINTM_B_0x1 = 1;

    /** @brief Connector ID status change mask Note: Accessible in both host and device modes. */
    using OTG_HS_GINTMSK_CIDSCHGM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HS_GINTMSK_CIDSCHGM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HS_GINTMSK_CIDSCHGM_B_0x1 = 1;

    /** @brief Disconnect detected interrupt mask Note: Only accessible in host mode. */
    using OTG_HS_GINTMSK_DISCINT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HS_GINTMSK_DISCINT_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HS_GINTMSK_DISCINT_B_0x1 = 1;

    /** @brief Session request/new session detected interrupt mask Note: Accessible in both host and device modes. */
    using OTG_HS_GINTMSK_SRQIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HS_GINTMSK_SRQIM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HS_GINTMSK_SRQIM_B_0x1 = 1;

    /** @brief Resume/remote wakeup detected interrupt mask Note: Accessible in both host and device modes. */
    using OTG_HS_GINTMSK_WUIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Masked interrupt (value: 0)
     *          - B_0x1: Unmasked interrupt (value: 1)
     */
        /** @brief Masked interrupt */
    constexpr std::uint32_t OTG_HS_GINTMSK_WUIM_B_0x0 = 0;
        /** @brief Unmasked interrupt */
    constexpr std::uint32_t OTG_HS_GINTMSK_WUIM_B_0x1 = 1;

    /** @brief OTG_HS Receive status debug read register (host mode) */
    using OTG_HS_GRXSTSR_Host = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel number */
    using OTG_HS_GRXSTSR_Host_CHNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Byte count */
    using OTG_HS_GRXSTSR_Host_BCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data PID */
    using OTG_HS_GRXSTSR_Host_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet status */
    using OTG_HS_GRXSTSR_Host_PKTSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS status read and pop register (host mode) */
    using OTG_HS_GRXSTSP_Host = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel number */
    using OTG_HS_GRXSTSP_Host_CHNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Byte count */
    using OTG_HS_GRXSTSP_Host_BCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data PID */
    using OTG_HS_GRXSTSP_Host_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet status */
    using OTG_HS_GRXSTSP_Host_PKTSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS Receive FIFO size register */
    using OTG_HS_GRXFSIZ = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RxFIFO depth */
    using OTG_HS_GRXFSIZ_RXFD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS nonperiodic transmit FIFO size register (host mode) */
    using OTG_HS_HNPTXFSIZ_Host = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Nonperiodic transmit RAM start address */
    using OTG_HS_HNPTXFSIZ_Host_NPTXFSA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Nonperiodic TxFIFO depth */
    using OTG_HS_HNPTXFSIZ_Host_NPTXFD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint 0 transmit FIFO size (peripheral mode) */
    using OTG_HS_DIEPTXF0_Device = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint 0 transmit RAM start address */
    using OTG_HS_DIEPTXF0_Device_TX0FSA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint 0 TxFIFO depth */
    using OTG_HS_DIEPTXF0_Device_TX0FD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS nonperiodic transmit FIFO/queue status register */
    using OTG_HS_GNPTXSTS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Nonperiodic TxFIFO space available */
    using OTG_HS_GNPTXSTS_NPTXFSAV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Nonperiodic transmit request queue space available */
    using OTG_HS_GNPTXSTS_NPTQXSAV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Top of the nonperiodic transmit request queue */
    using OTG_HS_GNPTXSTS_NPTXQTOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS general core configuration register */
    using OTG_HS_GCCFG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data contact detection (DCD) status */
    using OTG_HS_GCCFG_DCDET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Primary detection (PD) status */
    using OTG_HS_GCCFG_PDET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secondary detection (SD) status */
    using OTG_HS_GCCFG_SDET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DM pull-up detection status */
    using OTG_HS_GCCFG_PS2DET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Power down */
    using OTG_HS_GCCFG_PWRDWN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Battery charging detector (BCD) enable */
    using OTG_HS_GCCFG_BCDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data contact detection (DCD) mode enable */
    using OTG_HS_GCCFG_DCDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Primary detection (PD) mode enable */
    using OTG_HS_GCCFG_PDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Secondary detection (SD) mode enable */
    using OTG_HS_GCCFG_SDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USB VBUS detection enable */
    using OTG_HS_GCCFG_VBDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS core ID register */
    using OTG_HS_CID = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Product ID field */
    using OTG_HS_CID_PRODUCT_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS Host periodic transmit FIFO size register */
    using OTG_HS_HPTXFSIZ = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x100, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Host periodic TxFIFO start address */
    using OTG_HS_HPTXFSIZ_PTXSA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Host periodic TxFIFO depth */
    using OTG_HS_HPTXFSIZ_PTXFD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS device IN endpoint transmit FIFO size register */
    using OTG_HS_DIEPTXF1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x104, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint FIFOx transmit RAM start address */
    using OTG_HS_DIEPTXF1_INEPTXSA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint TxFIFO depth */
    using OTG_HS_DIEPTXF1_INEPTXFD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS device IN endpoint transmit FIFO size register */
    using OTG_HS_DIEPTXF2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x108, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint FIFOx transmit RAM start address */
    using OTG_HS_DIEPTXF2_INEPTXSA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint TxFIFO depth */
    using OTG_HS_DIEPTXF2_INEPTXFD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS device IN endpoint transmit FIFO size register */
    using OTG_HS_DIEPTXF3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint FIFOx transmit RAM start address */
    using OTG_HS_DIEPTXF3_INEPTXSA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint TxFIFO depth */
    using OTG_HS_DIEPTXF3_INEPTXFD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS device IN endpoint transmit FIFO size register */
    using OTG_HS_DIEPTXF4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x110, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint FIFOx transmit RAM start address */
    using OTG_HS_DIEPTXF4_INEPTXSA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint TxFIFO depth */
    using OTG_HS_DIEPTXF4_INEPTXFD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS device IN endpoint transmit FIFO size register */
    using OTG_HS_DIEPTXF5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x114, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint FIFOx transmit RAM start address */
    using OTG_HS_DIEPTXF5_INEPTXSA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint TxFIFO depth */
    using OTG_HS_DIEPTXF5_INEPTXFD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS device IN endpoint transmit FIFO size register */
    using OTG_HS_DIEPTXF6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x118, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint FIFOx transmit RAM start address */
    using OTG_HS_DIEPTXF6_INEPTXSA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint TxFIFO depth */
    using OTG_HS_DIEPTXF6_INEPTXFD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS device IN endpoint transmit FIFO size register */
    using OTG_HS_DIEPTXF7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x12C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint FIFOx transmit RAM start address */
    using OTG_HS_DIEPTXF7_INEPTXSA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint TxFIFO depth */
    using OTG_HS_DIEPTXF7_INEPTXFD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_DIEPTXF8 register */
    using OTG_DIEPTXF8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x120, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint FIFOx transmit RAM start address This field contains the memory start address for IN endpoint transmit FIFOx. The address must be aligned with a 32-bit memory location. */
    using OTG_DIEPTXF8_INEPTXSA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IN endpoint Tx FIFO depth This value is in terms of 32-bit words. Minimum value is 16 */
    using OTG_DIEPTXF8_INEPTXFD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS Receive status debug read register (peripheral mode mode) */
    using OTG_HS_GRXSTSR_Device = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint number */
    using OTG_HS_GRXSTSR_Device_EPNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Byte count */
    using OTG_HS_GRXSTSR_Device_BCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data PID */
    using OTG_HS_GRXSTSR_Device_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet status */
    using OTG_HS_GRXSTSR_Device_PKTSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame number */
    using OTG_HS_GRXSTSR_Device_FRMNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame number */
    using OTG_HS_GRXSTSR_Device_STSPHST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG_HS status read and pop register (peripheral mode) */
    using OTG_HS_GRXSTSP_Device = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endpoint number */
    using OTG_HS_GRXSTSP_Device_EPNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Byte count */
    using OTG_HS_GRXSTSP_Device_BCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data PID */
    using OTG_HS_GRXSTSP_Device_DPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet status */
    using OTG_HS_GRXSTSP_Device_PKTSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame number */
    using OTG_HS_GRXSTSP_Device_FRMNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame number */
    using OTG_HS_GRXSTSP_Device_STSPHST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTG core LPM configuration register */
    using OTG_HS_GLPMCFG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPM support enable */
    using OTG_HS_GLPMCFG_LPMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPM token acknowledge enable */
    using OTG_HS_GLPMCFG_LPMACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Best effort service latency */
    using OTG_HS_GLPMCFG_BESL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief bRemoteWake value */
    using OTG_HS_GLPMCFG_REMWAKE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief L1 Shallow Sleep enable */
    using OTG_HS_GLPMCFG_L1SSEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BESL threshold */
    using OTG_HS_GLPMCFG_BESLTHRS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief L1 deep sleep enable */
    using OTG_HS_GLPMCFG_L1DSEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPM response */
    using OTG_HS_GLPMCFG_LPMRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port sleep status */
    using OTG_HS_GLPMCFG_SLPSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sleep State Resume OK */
    using OTG_HS_GLPMCFG_L1RSMOK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPM Channel Index */
    using OTG_HS_GLPMCFG_LPMCHIDX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPM retry count */
    using OTG_HS_GLPMCFG_LPMRCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Send LPM transaction */
    using OTG_HS_GLPMCFG_SNDLPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPM retry count status */
    using OTG_HS_GLPMCFG_LPMRCNTSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable best effort service latency */
    using OTG_HS_GLPMCFG_ENBESL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
