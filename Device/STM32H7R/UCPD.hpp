/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32H7R_UCPD_HPP
#define EMBEDDED_PP_STM32H7R_UCPD_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief USB Type-C/USB Power Delivery interface */
namespace STM32H7R::UCPD {

    /** @brief UCPD configuration register 1 */
    using UCPD_CFGR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Division ratio for producing half-bit clock The bitfield determines the division ratio (the bitfield value plus one) of a ucpd_clk divider producing half-bit clock (hbit_clk). */
    using UCPD_CFGR1_HBITCLKDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: 1 (bypass) (value: 0)
     *          - B_0x1A: 27 (value: 26)
     *          - B_0x3F: 64 (value: 63)
     */
        /** @brief 1 (bypass) */
    constexpr std::uint32_t UCPD_CFGR1_HBITCLKDIV_B_0x00 = 0;
        /** @brief 27 */
    constexpr std::uint32_t UCPD_CFGR1_HBITCLKDIV_B_0x1A = 26;
        /** @brief 64 */
    constexpr std::uint32_t UCPD_CFGR1_HBITCLKDIV_B_0x3F = 63;

    /** @brief Division ratio for producing inter-frame gap timer clock The bitfield determines the division ratio (the bitfield value minus one) of a ucpd_clk divider producing inter-frame gap timer clock (tInterFrameGap). The division ratio 15 is to apply for Tx clock at the USB PD 2.0 specification nominal value. The division ratios below 15 are to apply for Tx clock below nominal, and the division ratios above 15 for Tx clock above nominal. */
    using UCPD_CFGR1_IFRGAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: Not supported (value: 0)
     *          - B_0x01: 2 (value: 1)
     *          - B_0x0D: 14 (value: 13)
     *          - B_0x0E: 15 (value: 14)
     *          - B_0x0F: 16 (value: 15)
     *          - B_0x1F: 32 (value: 31)
     */
        /** @brief Not supported */
    constexpr std::uint32_t UCPD_CFGR1_IFRGAP_B_0x00 = 0;
        /** @brief 2 */
    constexpr std::uint32_t UCPD_CFGR1_IFRGAP_B_0x01 = 1;
        /** @brief 14 */
    constexpr std::uint32_t UCPD_CFGR1_IFRGAP_B_0x0D = 13;
        /** @brief 15 */
    constexpr std::uint32_t UCPD_CFGR1_IFRGAP_B_0x0E = 14;
        /** @brief 16 */
    constexpr std::uint32_t UCPD_CFGR1_IFRGAP_B_0x0F = 15;
        /** @brief 32 */
    constexpr std::uint32_t UCPD_CFGR1_IFRGAP_B_0x1F = 31;

    /** @brief Transition window duration The bitfield determines the division ratio (the bitfield value minus one) of a hbit_clk divider producing tTransitionWindow interval. Set a value that produces an interval of 12 to 20 us, taking into account the ucpd_clk frequency and the HBITCLKDIV[5:0] bitfield setting. */
    using UCPD_CFGR1_TRANSWIN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: Not supported (value: 0)
     *          - B_0x01: 2 (value: 1)
     *          - B_0x09: 10 (recommended) (value: 9)
     *          - B_0x1F: 32 (value: 31)
     */
        /** @brief Not supported */
    constexpr std::uint32_t UCPD_CFGR1_TRANSWIN_B_0x00 = 0;
        /** @brief 2 */
    constexpr std::uint32_t UCPD_CFGR1_TRANSWIN_B_0x01 = 1;
        /** @brief 10 (recommended) */
    constexpr std::uint32_t UCPD_CFGR1_TRANSWIN_B_0x09 = 9;
        /** @brief 32 */
    constexpr std::uint32_t UCPD_CFGR1_TRANSWIN_B_0x1F = 31;

    /** @brief Pre-scaler division ratio for generating ucpd_clk The bitfield determines the division ratio of a kernel clock pre-scaler producing UCPD peripheral clock (ucpd_clk). It is recommended to use the pre-scaler so as to set the ucpd_clk frequency in the range from 6 to 9 MHz. */
    using UCPD_CFGR1_PSC_USBPDCLK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1 (bypass) (value: 0)
     *          - B_0x1: 2 (value: 1)
     *          - B_0x2: 4 (value: 2)
     *          - B_0x3: 8 (value: 3)
     *          - B_0x4: 16 (value: 4)
     */
        /** @brief 1 (bypass) */
    constexpr std::uint32_t UCPD_CFGR1_PSC_USBPDCLK_B_0x0 = 0;
        /** @brief 2 */
    constexpr std::uint32_t UCPD_CFGR1_PSC_USBPDCLK_B_0x1 = 1;
        /** @brief 4 */
    constexpr std::uint32_t UCPD_CFGR1_PSC_USBPDCLK_B_0x2 = 2;
        /** @brief 8 */
    constexpr std::uint32_t UCPD_CFGR1_PSC_USBPDCLK_B_0x3 = 3;
        /** @brief 16 */
    constexpr std::uint32_t UCPD_CFGR1_PSC_USBPDCLK_B_0x4 = 4;

    /** @brief Receiver ordered set enable The bitfield determines the types of ordered sets that the receiver must detect. When set/cleared, each bit enables/disables a specific function: 0bxxxxxxxx1: SOP detect enabled 0bxxxxxxx1x: SOP' detect enabled 0bxxxxxx1xx: SOP'' detect enabled 0bxxxxx1xxx: Hard Reset detect enabled 0bxxxx1xxxx: Cable Detect reset enabled 0bxxx1xxxxx: SOP'_Debug enabled 0bxx1xxxxxx: SOP''_Debug enabled 0bx1xxxxxxx: SOP extension#1 enabled 0b1xxxxxxxx: SOP extension#2 enabled */
    using UCPD_CFGR1_RXORDSETEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission DMA mode enable When set, the bit enables DMA mode for transmission. */
    using UCPD_CFGR1_TXDMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t UCPD_CFGR1_TXDMAEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t UCPD_CFGR1_TXDMAEN_B_0x1 = 1;

    /** @brief Reception DMA mode enable When set, the bit enables DMA mode for reception. */
    using UCPD_CFGR1_RXDMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t UCPD_CFGR1_RXDMAEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t UCPD_CFGR1_RXDMAEN_B_0x1 = 1;

    /** @brief UCPD peripheral enable General enable of the UCPD peripheral. Upon disabling, the peripheral instantly quits any ongoing activity and all control bits and bitfields default to their reset values. They must be set to their desired values each time the peripheral transits from disabled to enabled state. */
    using UCPD_CFGR1_UCPDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t UCPD_CFGR1_UCPDEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t UCPD_CFGR1_UCPDEN_B_0x1 = 1;

    /** @brief UCPD configuration register 2 */
    using UCPD_CFGR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BMC decoder Rx pre-filter enable The sampling clock is that of the receiver (that is, after pre-scaler). */
    using UCPD_CFGR2_RXFILTDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Enable (value: 0)
     *          - B_0x1: Disable (value: 1)
     */
        /** @brief Enable */
    constexpr std::uint32_t UCPD_CFGR2_RXFILTDIS_B_0x0 = 0;
        /** @brief Disable */
    constexpr std::uint32_t UCPD_CFGR2_RXFILTDIS_B_0x1 = 1;

    /** @brief BMC decoder Rx pre-filter sampling method Number of consistent consecutive samples before confirming a new value. */
    using UCPD_CFGR2_RXFILT2N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 3 samples (value: 0)
     *          - B_0x1: 2 samples (value: 1)
     */
        /** @brief 3 samples */
    constexpr std::uint32_t UCPD_CFGR2_RXFILT2N3_B_0x0 = 0;
        /** @brief 2 samples */
    constexpr std::uint32_t UCPD_CFGR2_RXFILT2N3_B_0x1 = 1;

    /** @brief Force ClkReq clock request */
    using UCPD_CFGR2_FORCECLK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Do not force clock request (value: 0)
     *          - B_0x1: Force clock request (value: 1)
     */
        /** @brief Do not force clock request */
    constexpr std::uint32_t UCPD_CFGR2_FORCECLK_B_0x0 = 0;
        /** @brief Force clock request */
    constexpr std::uint32_t UCPD_CFGR2_FORCECLK_B_0x1 = 1;

    /** @brief Wakeup from Stop mode enable Setting the bit enables the UCPD_ASYNC_INT signal. */
    using UCPD_CFGR2_WUPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t UCPD_CFGR2_WUPEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t UCPD_CFGR2_WUPEN_B_0x1 = 1;

    /** @brief Rx analog filter enable Setting the bit enables the Rx analog filter required for optimum Power Delivery reception. */
    using UCPD_CFGR2_RXAFILTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t UCPD_CFGR2_RXAFILTEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t UCPD_CFGR2_RXAFILTEN_B_0x1 = 1;

    /** @brief UCPD control register */
    using UCPD_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Type of Tx packet */
    using UCPD_CR_TXMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Transmission of Tx packet previously defined in other registers (value: 0)
     *          - B_0x1: Cable Reset sequence (value: 1)
     *          - B_0x2: BIST test sequence (BIST Carrier Mode 2) (value: 2)
     */
        /** @brief Transmission of Tx packet previously defined in other registers */
    constexpr std::uint32_t UCPD_CR_TXMODE_B_0x0 = 0;
        /** @brief Cable Reset sequence */
    constexpr std::uint32_t UCPD_CR_TXMODE_B_0x1 = 1;
        /** @brief BIST test sequence (BIST Carrier Mode 2) */
    constexpr std::uint32_t UCPD_CR_TXMODE_B_0x2 = 2;

    /** @brief Command to send a Tx packet The bit is cleared by hardware as soon as the packet transmission begins or is discarded. */
    using UCPD_CR_TXSEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Start Tx packet transmission (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t UCPD_CR_TXSEND_B_0x0 = 0;
        /** @brief Start Tx packet transmission */
    constexpr std::uint32_t UCPD_CR_TXSEND_B_0x1 = 1;

    /** @brief Command to send a Tx Hard Reset The bit is cleared by hardware as soon as the message transmission begins or is discarded. */
    using UCPD_CR_TXHRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Start Tx Hard Reset message (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t UCPD_CR_TXHRST_B_0x0 = 0;
        /** @brief Start Tx Hard Reset message */
    constexpr std::uint32_t UCPD_CR_TXHRST_B_0x1 = 1;

    /** @brief Receiver mode Determines the mode of the receiver. When the bit is set, RXORDSET behaves normally, RXDR no longer receives bytes yet the CRC checking still proceeds as for a normal message. As this mode prevents reception of the header (containing MessageID), software has to auto-increment a received MessageID counter for inclusion in the GoodCRC acknowledge that must still be transmitted during this test. */
    using UCPD_CR_RXMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal receive mode (value: 0)
     *          - B_0x1: BIST receive mode (BIST test data mode) (value: 1)
     */
        /** @brief Normal receive mode */
    constexpr std::uint32_t UCPD_CR_RXMODE_B_0x0 = 0;
        /** @brief BIST receive mode (BIST test data mode) */
    constexpr std::uint32_t UCPD_CR_RXMODE_B_0x1 = 1;

    /** @brief USB Power Delivery receiver enable Both CC1 and CC2 receivers are disabled when the bit is cleared. Only the CC receiver selected via the PHYCCSEL bit is enabled when the bit is set. */
    using UCPD_CR_PHYRXEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t UCPD_CR_PHYRXEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t UCPD_CR_PHYRXEN_B_0x1 = 1;

    /** @brief CC1/CC2 line selector for USB Power Delivery signaling The selection depends on the cable orientation as discovered at attach. */
    using UCPD_CR_PHYCCSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Use CC1 IO for Power Delivery communication (value: 0)
     *          - B_0x1: Use CC2 IO for Power Delivery communication (value: 1)
     */
        /** @brief Use CC1 IO for Power Delivery communication */
    constexpr std::uint32_t UCPD_CR_PHYCCSEL_B_0x0 = 0;
        /** @brief Use CC2 IO for Power Delivery communication */
    constexpr std::uint32_t UCPD_CR_PHYCCSEL_B_0x1 = 1;

    /** @brief Analog PHY sub-mode Refer to Table 876: Coding for ANAMODE, ANASUBMODE and link with TYPEC_VSTATE_CCx for the effect of this bitfield. */
    using UCPD_CR_ANASUBMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog PHY operating mode The use of CC1 and CC2 depends on CCENABLE. Refer to Table 876: Coding for ANAMODE, ANASUBMODE and link with TYPEC_VSTATE_CCx for the effect of this bitfield in conjunction with ANASUBMODE[1:0]. */
    using UCPD_CR_ANAMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Source (value: 0)
     *          - B_0x1: Sink (value: 1)
     */
        /** @brief Source */
    constexpr std::uint32_t UCPD_CR_ANAMODE_B_0x0 = 0;
        /** @brief Sink */
    constexpr std::uint32_t UCPD_CR_ANAMODE_B_0x1 = 1;

    /** @brief CC line enable This bitfield enables CC1 and CC2 line analog PHYs (pull-ups and pull-downs) according to ANAMODE and ANASUBMODE[1:0] setting. A single line PHY can be enabled when, for example, the other line is driven by VCONN via an external VCONN switch. Enabling both PHYs is the normal usage for sink/source. */
    using UCPD_CR_CCENABLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable both PHYs (value: 0)
     *          - B_0x1: Enable CC1 PHY (value: 1)
     *          - B_0x2: Enable CC2 PHY (value: 2)
     *          - B_0x3: Enable CC1 and CC2 PHY (value: 3)
     */
        /** @brief Disable both PHYs */
    constexpr std::uint32_t UCPD_CR_CCENABLE_B_0x0 = 0;
        /** @brief Enable CC1 PHY */
    constexpr std::uint32_t UCPD_CR_CCENABLE_B_0x1 = 1;
        /** @brief Enable CC2 PHY */
    constexpr std::uint32_t UCPD_CR_CCENABLE_B_0x2 = 2;
        /** @brief Enable CC1 and CC2 PHY */
    constexpr std::uint32_t UCPD_CR_CCENABLE_B_0x3 = 3;

    /** @brief FRS event detection enable Setting the bit enables FRS Rx event (FRSEVT) detection on the CC line selected through the PHYCCSEL bit. 0: Disable Clear the bit when the device is attached to an FRS-incapable source/sink. */
    using UCPD_CR_FRSRXEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Enable */
    constexpr std::uint32_t UCPD_CR_FRSRXEN_B_0x1 = 1;

    /** @brief FRS Tx signaling enable. Setting the bit enables FRS Tx signaling. The bit is cleared by hardware after a delay respecting the USB Power Delivery specification Revision 3.1. */
    using UCPD_CR_FRSTX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t UCPD_CR_FRSTX_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t UCPD_CR_FRSTX_B_0x1 = 1;

    /** @brief Rdch condition drive */
    using UCPD_CR_RDCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Rdch condition drive (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t UCPD_CR_RDCH_B_0x0 = 0;
        /** @brief Rdch condition drive */
    constexpr std::uint32_t UCPD_CR_RDCH_B_0x1 = 1;

    /** @brief CC1 Type-C detector disable The bit disables the Type-C detector on the CC1 line. When enabled, the Type-C detector for CC1 is configured through ANAMODE and ANASUBMODE[1:0]. */
    using UCPD_CR_CC1TCDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Enable (value: 0)
     *          - B_0x1: Disable (value: 1)
     */
        /** @brief Enable */
    constexpr std::uint32_t UCPD_CR_CC1TCDIS_B_0x0 = 0;
        /** @brief Disable */
    constexpr std::uint32_t UCPD_CR_CC1TCDIS_B_0x1 = 1;

    /** @brief CC2 Type-C detector disable The bit disables the Type-C detector on the CC2 line. When enabled, the Type-C detector for CC2 is configured through ANAMODE and ANASUBMODE[1:0]. */
    using UCPD_CR_CC2TCDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Enable (value: 0)
     *          - B_0x1: Disable (value: 1)
     */
        /** @brief Enable */
    constexpr std::uint32_t UCPD_CR_CC2TCDIS_B_0x0 = 0;
        /** @brief Disable */
    constexpr std::uint32_t UCPD_CR_CC2TCDIS_B_0x1 = 1;

    /** @brief UCPD interrupt mask register */
    using UCPD_IMR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TXIS interrupt enable */
    using UCPD_IMR_TXISIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t UCPD_IMR_TXISIE_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t UCPD_IMR_TXISIE_B_0x1 = 1;

    /** @brief TXMSGDISC interrupt enable */
    using UCPD_IMR_TXMSGDISCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t UCPD_IMR_TXMSGDISCIE_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t UCPD_IMR_TXMSGDISCIE_B_0x1 = 1;

    /** @brief TXMSGSENT interrupt enable */
    using UCPD_IMR_TXMSGSENTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t UCPD_IMR_TXMSGSENTIE_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t UCPD_IMR_TXMSGSENTIE_B_0x1 = 1;

    /** @brief TXMSGABT interrupt enable */
    using UCPD_IMR_TXMSGABTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t UCPD_IMR_TXMSGABTIE_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t UCPD_IMR_TXMSGABTIE_B_0x1 = 1;

    /** @brief HRSTDISC interrupt enable */
    using UCPD_IMR_HRSTDISCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t UCPD_IMR_HRSTDISCIE_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t UCPD_IMR_HRSTDISCIE_B_0x1 = 1;

    /** @brief HRSTSENT interrupt enable */
    using UCPD_IMR_HRSTSENTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t UCPD_IMR_HRSTSENTIE_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t UCPD_IMR_HRSTSENTIE_B_0x1 = 1;

    /** @brief TXUND interrupt enable */
    using UCPD_IMR_TXUNDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t UCPD_IMR_TXUNDIE_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t UCPD_IMR_TXUNDIE_B_0x1 = 1;

    /** @brief RXNE interrupt enable */
    using UCPD_IMR_RXNEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t UCPD_IMR_RXNEIE_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t UCPD_IMR_RXNEIE_B_0x1 = 1;

    /** @brief RXORDDET interrupt enable */
    using UCPD_IMR_RXORDDETIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t UCPD_IMR_RXORDDETIE_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t UCPD_IMR_RXORDDETIE_B_0x1 = 1;

    /** @brief RXHRSTDET interrupt enable */
    using UCPD_IMR_RXHRSTDETIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t UCPD_IMR_RXHRSTDETIE_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t UCPD_IMR_RXHRSTDETIE_B_0x1 = 1;

    /** @brief RXOVR interrupt enable */
    using UCPD_IMR_RXOVRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t UCPD_IMR_RXOVRIE_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t UCPD_IMR_RXOVRIE_B_0x1 = 1;

    /** @brief RXMSGEND interrupt enable */
    using UCPD_IMR_RXMSGENDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t UCPD_IMR_RXMSGENDIE_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t UCPD_IMR_RXMSGENDIE_B_0x1 = 1;

    /** @brief TYPECEVT1 interrupt enable */
    using UCPD_IMR_TYPECEVT1IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TYPECEVT2 interrupt enable */
    using UCPD_IMR_TYPECEVT2IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t UCPD_IMR_TYPECEVT2IE_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t UCPD_IMR_TYPECEVT2IE_B_0x1 = 1;

    /** @brief FRSEVT interrupt enable */
    using UCPD_IMR_FRSEVTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t UCPD_IMR_FRSEVTIE_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t UCPD_IMR_FRSEVTIE_B_0x1 = 1;

    /** @brief UCPD status register */
    using UCPD_SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit interrupt status The flag indicates that the UCPD_TXDR register is empty and new data write is required (as the amount of data sent has not reached the payload size defined in the TXPAYSZ bitfield). The flag is cleared with the data write into the UCPD_TXDR register. */
    using UCPD_SR_TXIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: New Tx data write not required (value: 0)
     *          - B_0x1: New Tx data write required (value: 1)
     */
        /** @brief New Tx data write not required */
    constexpr std::uint32_t UCPD_SR_TXIS_B_0x0 = 0;
        /** @brief New Tx data write required */
    constexpr std::uint32_t UCPD_SR_TXIS_B_0x1 = 1;

    /** @brief Message transmission discarded The flag indicates that a message transmission was dropped. The flag is cleared by setting the TXMSGDISCCF bit. Transmission of a message can be dropped if there is a concurrent receive in progress or at excessive noise on the line. After a Tx message is discarded, the flag is only raised when the CC line becomes idle. */
    using UCPD_SR_TXMSGDISC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No Tx message discarded (value: 0)
     *          - B_0x1: Tx message discarded (value: 1)
     */
        /** @brief No Tx message discarded */
    constexpr std::uint32_t UCPD_SR_TXMSGDISC_B_0x0 = 0;
        /** @brief Tx message discarded */
    constexpr std::uint32_t UCPD_SR_TXMSGDISC_B_0x1 = 1;

    /** @brief Message transmission completed The flag indicates the completion of packet transmission. It is cleared by setting the TXMSGSENTCF bit. In the event of a message transmission interrupted by a Hard Reset, the flag is not raised. */
    using UCPD_SR_TXMSGSENT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No Tx message completed (value: 0)
     *          - B_0x1: Tx message completed (value: 1)
     */
        /** @brief No Tx message completed */
    constexpr std::uint32_t UCPD_SR_TXMSGSENT_B_0x0 = 0;
        /** @brief Tx message completed */
    constexpr std::uint32_t UCPD_SR_TXMSGSENT_B_0x1 = 1;

    /** @brief Transmit message abort The flag indicates that a Tx message is aborted due to a subsequent Hard Reset message send request taking priority during transmit. It is cleared by setting the TXMSGABTCF bit. */
    using UCPD_SR_TXMSGABT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No transmit message abort (value: 0)
     *          - B_0x1: Transmit message abort (value: 1)
     */
        /** @brief No transmit message abort */
    constexpr std::uint32_t UCPD_SR_TXMSGABT_B_0x0 = 0;
        /** @brief Transmit message abort */
    constexpr std::uint32_t UCPD_SR_TXMSGABT_B_0x1 = 1;

    /** @brief Hard Reset discarded The flag indicates that the Hard Reset message is discarded. The flag is cleared by setting the HRSTDISCCF bit. */
    using UCPD_SR_HRSTDISC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No Hard Reset discarded (value: 0)
     *          - B_0x1: Hard Reset discarded (value: 1)
     */
        /** @brief No Hard Reset discarded */
    constexpr std::uint32_t UCPD_SR_HRSTDISC_B_0x0 = 0;
        /** @brief Hard Reset discarded */
    constexpr std::uint32_t UCPD_SR_HRSTDISC_B_0x1 = 1;

    /** @brief Hard Reset message sent The flag indicates that the Hard Reset message is sent. The flag is cleared by setting the HRSTSENTCF bit. */
    using UCPD_SR_HRSTSENT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No Hard Reset message sent (value: 0)
     *          - B_0x1: Hard Reset message sent (value: 1)
     */
        /** @brief No Hard Reset message sent */
    constexpr std::uint32_t UCPD_SR_HRSTSENT_B_0x0 = 0;
        /** @brief Hard Reset message sent */
    constexpr std::uint32_t UCPD_SR_HRSTSENT_B_0x1 = 1;

    /** @brief Tx data underrun detection The flag indicates that the Tx data register (UCPD_TXDR) was not written in time for a transmit message to execute normally. It is cleared by setting the TXUNDCF bit. */
    using UCPD_SR_TXUND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No Tx data underrun detected (value: 0)
     *          - B_0x1: Tx data underrun detected (value: 1)
     */
        /** @brief No Tx data underrun detected */
    constexpr std::uint32_t UCPD_SR_TXUND_B_0x0 = 0;
        /** @brief Tx data underrun detected */
    constexpr std::uint32_t UCPD_SR_TXUND_B_0x1 = 1;

    /** @brief Receive data register not empty detection The flag indicates that the UCPD_RXDR register is not empty. It is automatically cleared upon reading UCPD_RXDR. */
    using UCPD_SR_RXNE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rx data register empty (value: 0)
     *          - B_0x1: Rx data register not empty (value: 1)
     */
        /** @brief Rx data register empty */
    constexpr std::uint32_t UCPD_SR_RXNE_B_0x0 = 0;
        /** @brief Rx data register not empty */
    constexpr std::uint32_t UCPD_SR_RXNE_B_0x1 = 1;

    /** @brief Rx ordered set (4 K-codes) detection The flag indicates the detection of an ordered set. The relevant information is stored in the RXORDSET[2:0] bitfield of the UCPD_RX_ORDSET register. It is cleared by setting the RXORDDETCF bit. */
    using UCPD_SR_RXORDDET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No ordered set detected (value: 0)
     *          - B_0x1: A new ordered set detected (value: 1)
     */
        /** @brief No ordered set detected */
    constexpr std::uint32_t UCPD_SR_RXORDDET_B_0x0 = 0;
        /** @brief A new ordered set detected */
    constexpr std::uint32_t UCPD_SR_RXORDDET_B_0x1 = 1;

    /** @brief Rx Hard Reset receipt detection The flag indicates the receipt of valid Hard Reset message. It is cleared by setting the RXHRSTDETCF bit. */
    using UCPD_SR_RXHRSTDET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Hard Reset not received (value: 0)
     *          - B_0x1: Hard Reset received (value: 1)
     */
        /** @brief Hard Reset not received */
    constexpr std::uint32_t UCPD_SR_RXHRSTDET_B_0x0 = 0;
        /** @brief Hard Reset received */
    constexpr std::uint32_t UCPD_SR_RXHRSTDET_B_0x1 = 1;

    /** @brief Rx data overflow detection The flag indicates Rx data buffer overflow. It is cleared by setting the RXOVRCF bit. The buffer overflow can occur if the received data are not read fast enough. */
    using UCPD_SR_RXOVR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No overflow (value: 0)
     *          - B_0x1: Overflow (value: 1)
     */
        /** @brief No overflow */
    constexpr std::uint32_t UCPD_SR_RXOVR_B_0x0 = 0;
        /** @brief Overflow */
    constexpr std::uint32_t UCPD_SR_RXOVR_B_0x1 = 1;

    /** @brief Rx message received The flag indicates whether a message (except Hard Reset message) has been received, regardless the CRC value. The flag is cleared by setting the RXMSGENDCF bit. The RXERR flag set when the RXMSGEND flag goes high indicates errors in the last-received message. */
    using UCPD_SR_RXMSGEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No new Rx message received (value: 0)
     *          - B_0x1: A new Rx message received (value: 1)
     */
        /** @brief No new Rx message received */
    constexpr std::uint32_t UCPD_SR_RXMSGEND_B_0x0 = 0;
        /** @brief A new Rx message received */
    constexpr std::uint32_t UCPD_SR_RXMSGEND_B_0x1 = 1;

    /** @brief Receive message error The flag indicates errors of the last Rx message declared (via RXMSGEND), such as incorrect CRC or truncated message (a line becoming static before EOP is met). It is asserted whenever the RXMSGEND flag is set. */
    using UCPD_SR_RXERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No error detected (value: 0)
     *          - B_0x1: Error(s) detected (value: 1)
     */
        /** @brief No error detected */
    constexpr std::uint32_t UCPD_SR_RXERR_B_0x0 = 0;
        /** @brief Error(s) detected */
    constexpr std::uint32_t UCPD_SR_RXERR_B_0x1 = 1;

    /** @brief Type-C voltage level event on CC1 line The flag indicates a change of the TYPEC_VSTATE_CC1[1:0] bitfield value, which corresponds to a new Type-C event. It is cleared by setting the TYPECEVT2CF bit. */
    using UCPD_SR_TYPECEVT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No new event (value: 0)
     *          - B_0x1: A new Type-C event (value: 1)
     */
        /** @brief No new event */
    constexpr std::uint32_t UCPD_SR_TYPECEVT1_B_0x0 = 0;
        /** @brief A new Type-C event */
    constexpr std::uint32_t UCPD_SR_TYPECEVT1_B_0x1 = 1;

    /** @brief Type-C voltage level event on CC2 line The flag indicates a change of the TYPEC_VSTATE_CC2[1:0] bitfield value, which corresponds to a new Type-C event. It is cleared by setting the TYPECEVT2CF bit. */
    using UCPD_SR_TYPECEVT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No new event (value: 0)
     *          - B_0x1: A new Type-C event (value: 1)
     */
        /** @brief No new event */
    constexpr std::uint32_t UCPD_SR_TYPECEVT2_B_0x0 = 0;
        /** @brief A new Type-C event */
    constexpr std::uint32_t UCPD_SR_TYPECEVT2_B_0x1 = 1;

    /** @brief The status bitfield indicates the voltage level on the CC1 line in its steady state. The voltage variation on the CC1 line during USB PD messages due to the BMC PHY modulation does not impact the bitfield value. */
    using UCPD_SR_TYPEC_VSTATE_CC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Lowest (value: 0)
     *          - B_0x1: Low (value: 1)
     *          - B_0x2: High (value: 2)
     *          - B_0x3: Highest (value: 3)
     */
        /** @brief Lowest */
    constexpr std::uint32_t UCPD_SR_TYPEC_VSTATE_CC1_B_0x0 = 0;
        /** @brief Low */
    constexpr std::uint32_t UCPD_SR_TYPEC_VSTATE_CC1_B_0x1 = 1;
        /** @brief High */
    constexpr std::uint32_t UCPD_SR_TYPEC_VSTATE_CC1_B_0x2 = 2;
        /** @brief Highest */
    constexpr std::uint32_t UCPD_SR_TYPEC_VSTATE_CC1_B_0x3 = 3;

    /** @brief CC2 line voltage level The status bitfield indicates the voltage level on the CC2 line in its steady state. The voltage variation on the CC2 line during USB PD messages due to the BMC PHY modulation does not impact the bitfield value. */
    using UCPD_SR_TYPEC_VSTATE_CC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Lowest (value: 0)
     *          - B_0x1: Low (value: 1)
     *          - B_0x2: High (value: 2)
     *          - B_0x3: Highest (value: 3)
     */
        /** @brief Lowest */
    constexpr std::uint32_t UCPD_SR_TYPEC_VSTATE_CC2_B_0x0 = 0;
        /** @brief Low */
    constexpr std::uint32_t UCPD_SR_TYPEC_VSTATE_CC2_B_0x1 = 1;
        /** @brief High */
    constexpr std::uint32_t UCPD_SR_TYPEC_VSTATE_CC2_B_0x2 = 2;
        /** @brief Highest */
    constexpr std::uint32_t UCPD_SR_TYPEC_VSTATE_CC2_B_0x3 = 3;

    /** @brief FRS detection event The flag is cleared by setting the FRSEVTCF bit. */
    using UCPD_SR_FRSEVT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No new event (value: 0)
     *          - B_0x1: New FRS receive event occurred (value: 1)
     */
        /** @brief No new event */
    constexpr std::uint32_t UCPD_SR_FRSEVT_B_0x0 = 0;
        /** @brief New FRS receive event occurred */
    constexpr std::uint32_t UCPD_SR_FRSEVT_B_0x1 = 1;

    /** @brief UCPD interrupt clear register */
    using UCPD_ICR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx message discard flag (TXMSGDISC) clear Setting the bit clears the TXMSGDISC flag in the UCPD_SR register. */
    using UCPD_ICR_TXMSGDISCCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx message send flag (TXMSGSENT) clear Setting the bit clears the TXMSGSENT flag in the UCPD_SR register. */
    using UCPD_ICR_TXMSGSENTCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx message abort flag (TXMSGABT) clear Setting the bit clears the TXMSGABT flag in the UCPD_SR register. */
    using UCPD_ICR_TXMSGABTCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hard reset discard flag (HRSTDISC) clear Setting the bit clears the HRSTDISC flag in the UCPD_SR register. */
    using UCPD_ICR_HRSTDISCCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hard reset send flag (HRSTSENT) clear Setting the bit clears the HRSTSENT flag in the UCPD_SR register. */
    using UCPD_ICR_HRSTSENTCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx underflow flag (TXUND) clear Setting the bit clears the TXUND flag in the UCPD_SR register. */
    using UCPD_ICR_TXUNDCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx ordered set detect flag (RXORDDET) clear Setting the bit clears the RXORDDET flag in the UCPD_SR register. */
    using UCPD_ICR_RXORDDETCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx Hard Reset detect flag (RXHRSTDET) clear Setting the bit clears the RXHRSTDET flag in the UCPD_SR register. */
    using UCPD_ICR_RXHRSTDETCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx overflow flag (RXOVR) clear Setting the bit clears the RXOVR flag in the UCPD_SR register. */
    using UCPD_ICR_RXOVRCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx message received flag (RXMSGEND) clear Setting the bit clears the RXMSGEND flag in the UCPD_SR register. */
    using UCPD_ICR_RXMSGENDCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Type-C CC1 event flag (TYPECEVT1) clear Setting the bit clears the TYPECEVT1 flag in the UCPD_SR register */
    using UCPD_ICR_TYPECEVT1CF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Type-C CC2 line event flag (TYPECEVT2) clear Setting the bit clears the TYPECEVT2 flag in the UCPD_SR register */
    using UCPD_ICR_TYPECEVT2CF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FRS event flag (FRSEVT) clear Setting the bit clears the FRSEVT flag in the UCPD_SR register. */
    using UCPD_ICR_FRSEVTCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UCPD Tx ordered set type register */
    using UCPD_TX_ORDSETR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Ordered set to transmit The bitfield determines a full 20-bit sequence to transmit, consisting of four K-codes, each of five bits, defining the packet to transmit. The bit 0 (bit 0 of K-code1) is the first, the bit 19 (bit 4 of code 4) the last. */
    using UCPD_TX_ORDSETR_TXORDSET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UCPD Tx payload size register */
    using UCPD_TX_PAYSZR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Payload size yet to transmit The bitfield is modified by software and by hardware. It contains the number of bytes of a payload (including header but excluding CRC) yet to transmit: each time a data byte is written into the UCPD_TXDR register, the bitfield value decrements and the TXIS bit is set, except when the bitfield value reaches zero. The enumerated values are standard payload sizes before the start of transmission. */
    using UCPD_TX_PAYSZR_TXPAYSZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x2: 2 bytes - the size of Control message from the protocol layer (value: 2)
     *          - B_0x6: 6 bytes - the shortest Data message allowed from the protocol layer) (value: 6)
     *          - B_0x1E: 30 bytes - the longest non-extended Data message allowed from the protocol layer (value: 30)
     *          - B_0x106: 262 bytes - the longest possible extended message (value: 262)
     *          - B_0x3FF: 1024 bytes - the longest possible payload (for future expansion) (value: 1023)
     */
        /** @brief 2 bytes - the size of Control message from the protocol layer */
    constexpr std::uint32_t UCPD_TX_PAYSZR_TXPAYSZ_B_0x2 = 2;
        /** @brief 6 bytes - the shortest Data message allowed from the protocol layer) */
    constexpr std::uint32_t UCPD_TX_PAYSZR_TXPAYSZ_B_0x6 = 6;
        /** @brief 30 bytes - the longest non-extended Data message allowed from the protocol layer */
    constexpr std::uint32_t UCPD_TX_PAYSZR_TXPAYSZ_B_0x1E = 30;
        /** @brief 262 bytes - the longest possible extended message */
    constexpr std::uint32_t UCPD_TX_PAYSZR_TXPAYSZ_B_0x106 = 262;
        /** @brief 1024 bytes - the longest possible payload (for future expansion) */
    constexpr std::uint32_t UCPD_TX_PAYSZR_TXPAYSZ_B_0x3FF = 1023;

    /** @brief UCPD Tx data register */
    using UCPD_TXDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data byte to transmit */
    using UCPD_TXDR_TXDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UCPD Rx ordered set register */
    using UCPD_RX_ORDSETR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx ordered set code detected */
    using UCPD_RX_ORDSETR_RXORDSET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SOP code detected in receiver (value: 0)
     *          - B_0x1: SOP' code detected in receiver (value: 1)
     *          - B_0x2: SOP'' code detected in receiver (value: 2)
     *          - B_0x3: SOP'_Debug detected in receiver (value: 3)
     *          - B_0x4: SOP''_Debug detected in receiver (value: 4)
     *          - B_0x5: Cable Reset detected in receiver (value: 5)
     *          - B_0x6: SOP extension#1 detected in receiver (value: 6)
     *          - B_0x7: SOP extension#2 detected in receiver (value: 7)
     */
        /** @brief SOP code detected in receiver */
    constexpr std::uint32_t UCPD_RX_ORDSETR_RXORDSET_B_0x0 = 0;
        /** @brief SOP' code detected in receiver */
    constexpr std::uint32_t UCPD_RX_ORDSETR_RXORDSET_B_0x1 = 1;
        /** @brief SOP'' code detected in receiver */
    constexpr std::uint32_t UCPD_RX_ORDSETR_RXORDSET_B_0x2 = 2;
        /** @brief SOP'_Debug detected in receiver */
    constexpr std::uint32_t UCPD_RX_ORDSETR_RXORDSET_B_0x3 = 3;
        /** @brief SOP''_Debug detected in receiver */
    constexpr std::uint32_t UCPD_RX_ORDSETR_RXORDSET_B_0x4 = 4;
        /** @brief Cable Reset detected in receiver */
    constexpr std::uint32_t UCPD_RX_ORDSETR_RXORDSET_B_0x5 = 5;
        /** @brief SOP extension#1 detected in receiver */
    constexpr std::uint32_t UCPD_RX_ORDSETR_RXORDSET_B_0x6 = 6;
        /** @brief SOP extension#2 detected in receiver */
    constexpr std::uint32_t UCPD_RX_ORDSETR_RXORDSET_B_0x7 = 7;

    /** @brief The bit indicates the number of correct codes. For debug purposes only. */
    using UCPD_RX_ORDSETR_RXSOP3OF4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 4 correct codes out of 4 (value: 0)
     *          - B_0x1: 3 correct codes out of 4 (value: 1)
     */
        /** @brief 4 correct codes out of 4 */
    constexpr std::uint32_t UCPD_RX_ORDSETR_RXSOP3OF4_B_0x0 = 0;
        /** @brief 3 correct codes out of 4 */
    constexpr std::uint32_t UCPD_RX_ORDSETR_RXSOP3OF4_B_0x1 = 1;

    /** @brief The bitfield is for debug purposes only. Others: Invalid */
    using UCPD_RX_ORDSETR_RXSOPKINVALID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No code corrupted (value: 0)
     *          - B_0x1: First code corrupted (value: 1)
     *          - B_0x2: Second code corrupted (value: 2)
     *          - B_0x3: Third code corrupted (value: 3)
     *          - B_0x4: Fourth code corrupted (value: 4)
     */
        /** @brief No code corrupted */
    constexpr std::uint32_t UCPD_RX_ORDSETR_RXSOPKINVALID_B_0x0 = 0;
        /** @brief First code corrupted */
    constexpr std::uint32_t UCPD_RX_ORDSETR_RXSOPKINVALID_B_0x1 = 1;
        /** @brief Second code corrupted */
    constexpr std::uint32_t UCPD_RX_ORDSETR_RXSOPKINVALID_B_0x2 = 2;
        /** @brief Third code corrupted */
    constexpr std::uint32_t UCPD_RX_ORDSETR_RXSOPKINVALID_B_0x3 = 3;
        /** @brief Fourth code corrupted */
    constexpr std::uint32_t UCPD_RX_ORDSETR_RXSOPKINVALID_B_0x4 = 4;

    /** @brief UCPD Rx payload size register */
    using UCPD_RX_PAYSZR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx payload size received This bitfield contains the number of bytes of a payload (including header but excluding CRC) received: each time a new data byte is received in the UCPD_RXDR register, the bitfield value increments and the RXMSGEND flag is set (and an interrupt generated if enabled). The bitfield may return a spurious value when a byte reception is ongoing (the RXMSGEND flag is low). */
    using UCPD_RX_PAYSZR_RXPAYSZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x2: 2 bytes - the size of Control message from the protocol layer (value: 2)
     *          - B_0x6: 6 bytes - the shortest Data message allowed from the protocol layer) (value: 6)
     *          - B_0x1E: 30 bytes - the longest non-extended Data message allowed from the protocol layer (value: 30)
     *          - B_0x106: 262 bytes - the longest possible extended message (value: 262)
     *          - B_0x3FF: 1024 bytes - the longest possible payload (for future expansion) (value: 1023)
     */
        /** @brief 2 bytes - the size of Control message from the protocol layer */
    constexpr std::uint32_t UCPD_RX_PAYSZR_RXPAYSZ_B_0x2 = 2;
        /** @brief 6 bytes - the shortest Data message allowed from the protocol layer) */
    constexpr std::uint32_t UCPD_RX_PAYSZR_RXPAYSZ_B_0x6 = 6;
        /** @brief 30 bytes - the longest non-extended Data message allowed from the protocol layer */
    constexpr std::uint32_t UCPD_RX_PAYSZR_RXPAYSZ_B_0x1E = 30;
        /** @brief 262 bytes - the longest possible extended message */
    constexpr std::uint32_t UCPD_RX_PAYSZR_RXPAYSZ_B_0x106 = 262;
        /** @brief 1024 bytes - the longest possible payload (for future expansion) */
    constexpr std::uint32_t UCPD_RX_PAYSZR_RXPAYSZ_B_0x3FF = 1023;

    /** @brief UCPD receive data register */
    using UCPD_RXDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data byte received */
    using UCPD_RXDR_RXDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UCPD Rx ordered set extension register 1 */
    using UCPD_RX_ORDEXTR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Ordered set 1 received */
    using UCPD_RX_ORDEXTR1_RXSOPX1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UCPD Rx ordered set extension register 2 */
    using UCPD_RX_ORDEXTR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Ordered set 2 received */
    using UCPD_RX_ORDEXTR2_RXSOPX2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
