/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32N645_UCPD_S_HPP
#define EMBEDDED_PP_STM32N645_UCPD_S_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief USB Type-C/USB Power Delivery interface */
namespace STM32N645::UCPD_S {

    /** @brief UCPD configuration register 1 */
    using UCPD_CFGR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Division ratio for producing half-bit clock */
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

    /** @brief Division ratio for producing inter-frame gap timer clock */
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

    /** @brief Transition window duration */
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

    /** @brief Pre-scaler division ratio for generating ucpd_clk */
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

    /** @brief Receiver ordered set enable */
    using UCPD_CFGR1_RXORDSETEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission DMA mode enable */
    using UCPD_CFGR1_TXDMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t UCPD_CFGR1_TXDMAEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t UCPD_CFGR1_TXDMAEN_B_0x1 = 1;

    /** @brief Reception DMA mode enable */
    using UCPD_CFGR1_RXDMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t UCPD_CFGR1_RXDMAEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t UCPD_CFGR1_RXDMAEN_B_0x1 = 1;

    /** @brief UCPD peripheral enable */
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
    /** @brief BMC decoder Rx pre-filter enable */
    using UCPD_CFGR2_RXFILTDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Enable (value: 0)
     *          - B_0x1: Disable (value: 1)
     */
        /** @brief Enable */
    constexpr std::uint32_t UCPD_CFGR2_RXFILTDIS_B_0x0 = 0;
        /** @brief Disable */
    constexpr std::uint32_t UCPD_CFGR2_RXFILTDIS_B_0x1 = 1;

    /** @brief BMC decoder Rx pre-filter sampling method */
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

    /** @brief Wakeup from Stop mode enable */
    using UCPD_CFGR2_WUPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t UCPD_CFGR2_WUPEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t UCPD_CFGR2_WUPEN_B_0x1 = 1;

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

    /** @brief Command to send a Tx packet */
    using UCPD_CR_TXSEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Start Tx packet transmission (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t UCPD_CR_TXSEND_B_0x0 = 0;
        /** @brief Start Tx packet transmission */
    constexpr std::uint32_t UCPD_CR_TXSEND_B_0x1 = 1;

    /** @brief Command to send a Tx Hard Reset */
    using UCPD_CR_TXHRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Start Tx Hard Reset message (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t UCPD_CR_TXHRST_B_0x0 = 0;
        /** @brief Start Tx Hard Reset message */
    constexpr std::uint32_t UCPD_CR_TXHRST_B_0x1 = 1;

    /** @brief Receiver mode */
    using UCPD_CR_RXMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal receive mode (value: 0)
     *          - B_0x1: BIST receive mode (BIST test data mode) (value: 1)
     */
        /** @brief Normal receive mode */
    constexpr std::uint32_t UCPD_CR_RXMODE_B_0x0 = 0;
        /** @brief BIST receive mode (BIST test data mode) */
    constexpr std::uint32_t UCPD_CR_RXMODE_B_0x1 = 1;

    /** @brief USB Power Delivery receiver enable */
    using UCPD_CR_PHYRXEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable (value: 0)
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Disable */
    constexpr std::uint32_t UCPD_CR_PHYRXEN_B_0x0 = 0;
        /** @brief Enable */
    constexpr std::uint32_t UCPD_CR_PHYRXEN_B_0x1 = 1;

    /** @brief CC1/CC2 line selector for USB Power Delivery signaling */
    using UCPD_CR_PHYCCSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Use CC1 IO for Power Delivery communication (value: 0)
     *          - B_0x1: Use CC2 IO for Power Delivery communication (value: 1)
     */
        /** @brief Use CC1 IO for Power Delivery communication */
    constexpr std::uint32_t UCPD_CR_PHYCCSEL_B_0x0 = 0;
        /** @brief Use CC2 IO for Power Delivery communication */
    constexpr std::uint32_t UCPD_CR_PHYCCSEL_B_0x1 = 1;

    /** @brief Analog PHY sub-mode */
    using UCPD_CR_ANASUBMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog PHY operating mode */
    using UCPD_CR_ANAMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Source (value: 0)
     *          - B_0x1: Sink (value: 1)
     */
        /** @brief Source */
    constexpr std::uint32_t UCPD_CR_ANAMODE_B_0x0 = 0;
        /** @brief Sink */
    constexpr std::uint32_t UCPD_CR_ANAMODE_B_0x1 = 1;

    /** @brief CC line enable */
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

    /** @brief FRS event detection enable */
    using UCPD_CR_FRSRXEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Enable (value: 1)
     */
        /** @brief Enable */
    constexpr std::uint32_t UCPD_CR_FRSRXEN_B_0x1 = 1;

    /** @brief FRS Tx signaling enable. */
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

    /** @brief CC1 Type-C detector disable */
    using UCPD_CR_CC1TCDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Enable (value: 0)
     *          - B_0x1: Disable (value: 1)
     */
        /** @brief Enable */
    constexpr std::uint32_t UCPD_CR_CC1TCDIS_B_0x0 = 0;
        /** @brief Disable */
    constexpr std::uint32_t UCPD_CR_CC1TCDIS_B_0x1 = 1;

    /** @brief CC2 Type-C detector disable */
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
    /** @brief Transmit interrupt status */
    using UCPD_SR_TXIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: New Tx data write not required (value: 0)
     *          - B_0x1: New Tx data write required (value: 1)
     */
        /** @brief New Tx data write not required */
    constexpr std::uint32_t UCPD_SR_TXIS_B_0x0 = 0;
        /** @brief New Tx data write required */
    constexpr std::uint32_t UCPD_SR_TXIS_B_0x1 = 1;

    /** @brief Message transmission discarded */
    using UCPD_SR_TXMSGDISC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No Tx message discarded (value: 0)
     *          - B_0x1: Tx message discarded (value: 1)
     */
        /** @brief No Tx message discarded */
    constexpr std::uint32_t UCPD_SR_TXMSGDISC_B_0x0 = 0;
        /** @brief Tx message discarded */
    constexpr std::uint32_t UCPD_SR_TXMSGDISC_B_0x1 = 1;

    /** @brief Message transmission completed */
    using UCPD_SR_TXMSGSENT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No Tx message completed (value: 0)
     *          - B_0x1: Tx message completed (value: 1)
     */
        /** @brief No Tx message completed */
    constexpr std::uint32_t UCPD_SR_TXMSGSENT_B_0x0 = 0;
        /** @brief Tx message completed */
    constexpr std::uint32_t UCPD_SR_TXMSGSENT_B_0x1 = 1;

    /** @brief Transmit message abort */
    using UCPD_SR_TXMSGABT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No transmit message abort (value: 0)
     *          - B_0x1: Transmit message abort (value: 1)
     */
        /** @brief No transmit message abort */
    constexpr std::uint32_t UCPD_SR_TXMSGABT_B_0x0 = 0;
        /** @brief Transmit message abort */
    constexpr std::uint32_t UCPD_SR_TXMSGABT_B_0x1 = 1;

    /** @brief Hard Reset discarded */
    using UCPD_SR_HRSTDISC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No Hard Reset discarded (value: 0)
     *          - B_0x1: Hard Reset discarded (value: 1)
     */
        /** @brief No Hard Reset discarded */
    constexpr std::uint32_t UCPD_SR_HRSTDISC_B_0x0 = 0;
        /** @brief Hard Reset discarded */
    constexpr std::uint32_t UCPD_SR_HRSTDISC_B_0x1 = 1;

    /** @brief Hard Reset message sent */
    using UCPD_SR_HRSTSENT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No Hard Reset message sent (value: 0)
     *          - B_0x1: Hard Reset message sent (value: 1)
     */
        /** @brief No Hard Reset message sent */
    constexpr std::uint32_t UCPD_SR_HRSTSENT_B_0x0 = 0;
        /** @brief Hard Reset message sent */
    constexpr std::uint32_t UCPD_SR_HRSTSENT_B_0x1 = 1;

    /** @brief Tx data underrun detection */
    using UCPD_SR_TXUND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No Tx data underrun detected (value: 0)
     *          - B_0x1: Tx data underrun detected (value: 1)
     */
        /** @brief No Tx data underrun detected */
    constexpr std::uint32_t UCPD_SR_TXUND_B_0x0 = 0;
        /** @brief Tx data underrun detected */
    constexpr std::uint32_t UCPD_SR_TXUND_B_0x1 = 1;

    /** @brief Receive data register not empty detection */
    using UCPD_SR_RXNE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rx data register empty (value: 0)
     *          - B_0x1: Rx data register not empty (value: 1)
     */
        /** @brief Rx data register empty */
    constexpr std::uint32_t UCPD_SR_RXNE_B_0x0 = 0;
        /** @brief Rx data register not empty */
    constexpr std::uint32_t UCPD_SR_RXNE_B_0x1 = 1;

    /** @brief Rx ordered set (4 K-codes) detection */
    using UCPD_SR_RXORDDET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No ordered set detected (value: 0)
     *          - B_0x1: A new ordered set detected (value: 1)
     */
        /** @brief No ordered set detected */
    constexpr std::uint32_t UCPD_SR_RXORDDET_B_0x0 = 0;
        /** @brief A new ordered set detected */
    constexpr std::uint32_t UCPD_SR_RXORDDET_B_0x1 = 1;

    /** @brief Rx Hard Reset receipt detection */
    using UCPD_SR_RXHRSTDET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Hard Reset not received (value: 0)
     *          - B_0x1: Hard Reset received (value: 1)
     */
        /** @brief Hard Reset not received */
    constexpr std::uint32_t UCPD_SR_RXHRSTDET_B_0x0 = 0;
        /** @brief Hard Reset received */
    constexpr std::uint32_t UCPD_SR_RXHRSTDET_B_0x1 = 1;

    /** @brief Rx data overflow detection */
    using UCPD_SR_RXOVR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No overflow (value: 0)
     *          - B_0x1: Overflow (value: 1)
     */
        /** @brief No overflow */
    constexpr std::uint32_t UCPD_SR_RXOVR_B_0x0 = 0;
        /** @brief Overflow */
    constexpr std::uint32_t UCPD_SR_RXOVR_B_0x1 = 1;

    /** @brief Rx message received */
    using UCPD_SR_RXMSGEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No new Rx message received (value: 0)
     *          - B_0x1: A new Rx message received (value: 1)
     */
        /** @brief No new Rx message received */
    constexpr std::uint32_t UCPD_SR_RXMSGEND_B_0x0 = 0;
        /** @brief A new Rx message received */
    constexpr std::uint32_t UCPD_SR_RXMSGEND_B_0x1 = 1;

    /** @brief Receive message error */
    using UCPD_SR_RXERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No error detected (value: 0)
     *          - B_0x1: Error(s) detected (value: 1)
     */
        /** @brief No error detected */
    constexpr std::uint32_t UCPD_SR_RXERR_B_0x0 = 0;
        /** @brief Error(s) detected */
    constexpr std::uint32_t UCPD_SR_RXERR_B_0x1 = 1;

    /** @brief Type-C voltage level event on CC1 line */
    using UCPD_SR_TYPECEVT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No new event (value: 0)
     *          - B_0x1: A new Type-C event (value: 1)
     */
        /** @brief No new event */
    constexpr std::uint32_t UCPD_SR_TYPECEVT1_B_0x0 = 0;
        /** @brief A new Type-C event */
    constexpr std::uint32_t UCPD_SR_TYPECEVT1_B_0x1 = 1;

    /** @brief Type-C voltage level event on CC2 line */
    using UCPD_SR_TYPECEVT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No new event (value: 0)
     *          - B_0x1: A new Type-C event (value: 1)
     */
        /** @brief No new event */
    constexpr std::uint32_t UCPD_SR_TYPECEVT2_B_0x0 = 0;
        /** @brief A new Type-C event */
    constexpr std::uint32_t UCPD_SR_TYPECEVT2_B_0x1 = 1;

    /** @brief The status bitfield indicates the voltage level on the CC1 line in its steady state. */
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

    /** @brief CC2 line voltage level */
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

    /** @brief FRS detection event */
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
    /** @brief Tx message discard flag (TXMSGDISC) clear */
    using UCPD_ICR_TXMSGDISCCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx message send flag (TXMSGSENT) clear */
    using UCPD_ICR_TXMSGSENTCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx message abort flag (TXMSGABT) clear */
    using UCPD_ICR_TXMSGABTCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hard reset discard flag (HRSTDISC) clear */
    using UCPD_ICR_HRSTDISCCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hard reset send flag (HRSTSENT) clear */
    using UCPD_ICR_HRSTSENTCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx underflow flag (TXUND) clear */
    using UCPD_ICR_TXUNDCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx ordered set detect flag (RXORDDET) clear */
    using UCPD_ICR_RXORDDETCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx Hard Reset detect flag (RXHRSTDET) clear */
    using UCPD_ICR_RXHRSTDETCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx overflow flag (RXOVR) clear */
    using UCPD_ICR_RXOVRCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx message received flag (RXMSGEND) clear */
    using UCPD_ICR_RXMSGENDCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Type-C CC1 event flag (TYPECEVT1) clear */
    using UCPD_ICR_TYPECEVT1CF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Type-C CC2 line event flag (TYPECEVT2) clear */
    using UCPD_ICR_TYPECEVT2CF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FRS event flag (FRSEVT) clear */
    using UCPD_ICR_FRSEVTCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UCPD Tx ordered set type register */
    using UCPD_TX_ORDSETR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Ordered set to transmit */
    using UCPD_TX_ORDSETR_TXORDSET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UCPD Tx payload size register */
    using UCPD_TX_PAYSZR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Payload size yet to transmit */
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

    /** @brief The bit indicates the number of correct K-codes. For debug purposes only. */
    using UCPD_RX_ORDSETR_RXSOP3OF4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 4 correct K-codes out of 4 (value: 0)
     *          - B_0x1: 3 correct K-codes out of 4 (value: 1)
     */
        /** @brief 4 correct K-codes out of 4 */
    constexpr std::uint32_t UCPD_RX_ORDSETR_RXSOP3OF4_B_0x0 = 0;
        /** @brief 3 correct K-codes out of 4 */
    constexpr std::uint32_t UCPD_RX_ORDSETR_RXSOP3OF4_B_0x1 = 1;

    /** @brief The bitfield is for debug purposes only. */
    using UCPD_RX_ORDSETR_RXSOPKINVALID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No K-code corrupted (value: 0)
     *          - B_0x1: First K-code corrupted (value: 1)
     *          - B_0x2: Second K-code corrupted (value: 2)
     *          - B_0x3: Third K-code corrupted (value: 3)
     *          - B_0x4: Fourth K-code corrupted (value: 4)
     */
        /** @brief No K-code corrupted */
    constexpr std::uint32_t UCPD_RX_ORDSETR_RXSOPKINVALID_B_0x0 = 0;
        /** @brief First K-code corrupted */
    constexpr std::uint32_t UCPD_RX_ORDSETR_RXSOPKINVALID_B_0x1 = 1;
        /** @brief Second K-code corrupted */
    constexpr std::uint32_t UCPD_RX_ORDSETR_RXSOPKINVALID_B_0x2 = 2;
        /** @brief Third K-code corrupted */
    constexpr std::uint32_t UCPD_RX_ORDSETR_RXSOPKINVALID_B_0x3 = 3;
        /** @brief Fourth K-code corrupted */
    constexpr std::uint32_t UCPD_RX_ORDSETR_RXSOPKINVALID_B_0x4 = 4;

    /** @brief UCPD Rx payload size register */
    using UCPD_RX_PAYSZR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx payload size received */
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
