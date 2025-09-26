/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32N657_ETH_HPP
#define EMBEDDED_PP_STM32N657_ETH_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Ethernet address block description */
namespace STM32N657::ETH {

    /** @brief Operating mode configuration register */
    using ETH_MACCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receiver Enable */
    using ETH_MACCR_RE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmitter Enable */
    using ETH_MACCR_TE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Preamble Length for Transmit packets */
    using ETH_MACCR_PRELEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 7 bytes of preamble (value: 0)
     *          - B_0x1: 5 bytes of preamble (value: 1)
     *          - B_0x2: 3 bytes of preamble (value: 2)
     */
        /** @brief 7 bytes of preamble */
    constexpr std::uint32_t ETH_MACCR_PRELEN_B_0x0 = 0;
        /** @brief 5 bytes of preamble */
    constexpr std::uint32_t ETH_MACCR_PRELEN_B_0x1 = 1;
        /** @brief 3 bytes of preamble */
    constexpr std::uint32_t ETH_MACCR_PRELEN_B_0x2 = 2;

    /** @brief Deferral Check */
    using ETH_MACCR_DC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Back-Off Limit */
    using ETH_MACCR_BL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: k= min (n, 10) (value: 0)
     *          - B_0x1: k = min (n, 8) (value: 1)
     *          - B_0x2: k = min (n, 4) (value: 2)
     *          - B_0x3: k = min (n, 1) (value: 3)
     */
        /** @brief k= min (n, 10) */
    constexpr std::uint32_t ETH_MACCR_BL_B_0x0 = 0;
        /** @brief k = min (n, 8) */
    constexpr std::uint32_t ETH_MACCR_BL_B_0x1 = 1;
        /** @brief k = min (n, 4) */
    constexpr std::uint32_t ETH_MACCR_BL_B_0x2 = 2;
        /** @brief k = min (n, 1) */
    constexpr std::uint32_t ETH_MACCR_BL_B_0x3 = 3;

    /** @brief Disable Retry */
    using ETH_MACCR_DR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Disable Carrier Sense During Transmission */
    using ETH_MACCR_DCRS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Disable Receive Own */
    using ETH_MACCR_DO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable Carrier Sense Before Transmission in Full-duplex mode */
    using ETH_MACCR_ECRSFD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Loopback Mode */
    using ETH_MACCR_LM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Duplex Mode */
    using ETH_MACCR_DM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MAC Speed */
    using ETH_MACCR_FES = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 10 Mbps (value: 0)
     *          - B_0x1: 100 Mbps (value: 1)
     */
        /** @brief 10 Mbps */
    constexpr std::uint32_t ETH_MACCR_FES_B_0x0 = 0;
        /** @brief 100 Mbps */
    constexpr std::uint32_t ETH_MACCR_FES_B_0x1 = 1;

    /** @brief Port Select */
    using ETH_MACCR_PS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: For 1000 Mbps operations (value: 0)
     *          - B_0x1: For 10 or 100 Mbps operations (value: 1)
     */
        /** @brief For 1000 Mbps operations */
    constexpr std::uint32_t ETH_MACCR_PS_B_0x0 = 0;
        /** @brief For 10 or 100 Mbps operations */
    constexpr std::uint32_t ETH_MACCR_PS_B_0x1 = 1;

    /** @brief Jumbo Packet Enable */
    using ETH_MACCR_JE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Jabber Disable */
    using ETH_MACCR_JD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet Burst Enable */
    using ETH_MACCR_BE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Watchdog Disable */
    using ETH_MACCR_WD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Automatic Pad or CRC Stripping */
    using ETH_MACCR_ACS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRC stripping for Type packets */
    using ETH_MACCR_CST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IEEE 802.3as Support for 2K Packets */
    using ETH_MACCR_S2KP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Giant Packet Size Limit Control Enable */
    using ETH_MACCR_GPSLCE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Inter-Packet Gap */
    using ETH_MACCR_IPG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 96 bit times (value: 0)
     *          - B_0x1: 88 bit times (value: 1)
     *          - B_0x2: 80 bit times (value: 2)
     *          - B_0x7: 40 bit times (value: 7)
     */
        /** @brief 96 bit times */
    constexpr std::uint32_t ETH_MACCR_IPG_B_0x0 = 0;
        /** @brief 88 bit times */
    constexpr std::uint32_t ETH_MACCR_IPG_B_0x1 = 1;
        /** @brief 80 bit times */
    constexpr std::uint32_t ETH_MACCR_IPG_B_0x2 = 2;
        /** @brief 40 bit times */
    constexpr std::uint32_t ETH_MACCR_IPG_B_0x7 = 7;

    /** @brief Checksum Offload */
    using ETH_MACCR_IPC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Source Address Insertion or Replacement Control */
    using ETH_MACCR_SARC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x2: the MAC inserts the content of the MAC Address 0 registers (MAC Address 0 high register (ETH_MACA0HR) and MAC Address x low register (ETH_MACAxLR)) in the SA field of all transmitted packets. (value: 2)
     *          - B_0x3: the MAC replaces the content of the MAC Address 0 registers (MAC Address 0 high register (ETH_MACA0HR) and MAC Address x low register (ETH_MACAxLR)) in the SA field of all transmitted packets. (value: 3)
     *          - B_0x6: the MAC inserts the content of the MAC Address 1 registers (MAC Address x high register (ETH_MACAxHR) and MAC Address x low register (ETH_MACAxLR)) in the SA field of all transmitted packets (value: 6)
     *          - B_0x7: the MAC replaces the content of the MAC Address 1 registers (MAC Address x high register (ETH_MACAxHR) and MAC Address x low register (ETH_MACAxLR)) in the SA field of all transmitted packets. (value: 7)
     */
        /** @brief the MAC inserts the content of the MAC Address 0 registers (MAC Address 0 high register (ETH_MACA0HR) and MAC Address x low register (ETH_MACAxLR)) in the SA field of all transmitted packets. */
    constexpr std::uint32_t ETH_MACCR_SARC_B_0x2 = 2;
        /** @brief the MAC replaces the content of the MAC Address 0 registers (MAC Address 0 high register (ETH_MACA0HR) and MAC Address x low register (ETH_MACAxLR)) in the SA field of all transmitted packets. */
    constexpr std::uint32_t ETH_MACCR_SARC_B_0x3 = 3;
        /** @brief the MAC inserts the content of the MAC Address 1 registers (MAC Address x high register (ETH_MACAxHR) and MAC Address x low register (ETH_MACAxLR)) in the SA field of all transmitted packets */
    constexpr std::uint32_t ETH_MACCR_SARC_B_0x6 = 6;
        /** @brief the MAC replaces the content of the MAC Address 1 registers (MAC Address x high register (ETH_MACAxHR) and MAC Address x low register (ETH_MACAxLR)) in the SA field of all transmitted packets. */
    constexpr std::uint32_t ETH_MACCR_SARC_B_0x7 = 7;

    /** @brief ARP Offload Enable */
    using ETH_MACCR_ARPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extended operating mode configuration register */
    using ETH_MACECR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Giant Packet Size Limit */
    using ETH_MACECR_GPSL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Disable CRC Checking for Received Packets */
    using ETH_MACECR_DCRCC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Slow Protocol Detection Enable */
    using ETH_MACECR_SPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Unicast Slow Protocol Packet Detect */
    using ETH_MACECR_USP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extended Inter-Packet Gap Enable */
    using ETH_MACECR_EIPGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extended Inter-Packet Gap */
    using ETH_MACECR_EIPG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ARP Packet Drop if IP Address Mismatch */
    using ETH_MACECR_APDIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet filtering control register */
    using ETH_MACPFR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Promiscuous Mode */
    using ETH_MACPFR_PR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hash Unicast */
    using ETH_MACPFR_HUC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hash Multicast */
    using ETH_MACPFR_HMC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DA Inverse Filtering */
    using ETH_MACPFR_DAIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Pass All Multicast */
    using ETH_MACPFR_PM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Disable Broadcast Packets */
    using ETH_MACPFR_DBF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Pass Control Packets */
    using ETH_MACPFR_PCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The MAC filters all control packets from reaching the application. (value: 0)
     *          - B_0x1: The MAC forwards all control packets except Pause packets to the application even if they fail the Address filter. (value: 1)
     *          - B_0x2: The MAC forwards all control packets to the application even if they fail the Address filter. (value: 2)
     *          - B_0x3: The MAC forwards the control packets that pass the Address filter. (value: 3)
     */
        /** @brief The MAC filters all control packets from reaching the application. */
    constexpr std::uint32_t ETH_MACPFR_PCF_B_0x0 = 0;
        /** @brief The MAC forwards all control packets except Pause packets to the application even if they fail the Address filter. */
    constexpr std::uint32_t ETH_MACPFR_PCF_B_0x1 = 1;
        /** @brief The MAC forwards all control packets to the application even if they fail the Address filter. */
    constexpr std::uint32_t ETH_MACPFR_PCF_B_0x2 = 2;
        /** @brief The MAC forwards the control packets that pass the Address filter. */
    constexpr std::uint32_t ETH_MACPFR_PCF_B_0x3 = 3;

    /** @brief SA Inverse Filtering */
    using ETH_MACPFR_SAIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Source Address Filter Enable */
    using ETH_MACPFR_SAF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hash or Perfect Filter */
    using ETH_MACPFR_HPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VLAN Tag Filter Enable */
    using ETH_MACPFR_VTFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer 3 and Layer 4 Filter Enable */
    using ETH_MACPFR_IPFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Drop Non-TCP/UDP over IP Packets */
    using ETH_MACPFR_DNTU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive All */
    using ETH_MACPFR_RA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Watchdog timeout register */
    using ETH_MACWTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Watchdog Timeout */
    using ETH_MACWTR_WTO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 2 Kbytes (value: 0)
     *          - B_0x1: 3 Kbytes (value: 1)
     *          - B_0x2: 4 Kbytes (value: 2)
     *          - B_0x3: 5 Kbytes (value: 3)
     *          - B_0xC: 14 Kbytes (value: 12)
     *          - B_0xD: 15 Kbytes (value: 13)
     *          - B_0xE: 16383 Bytes (value: 14)
     */
        /** @brief 2 Kbytes */
    constexpr std::uint32_t ETH_MACWTR_WTO_B_0x0 = 0;
        /** @brief 3 Kbytes */
    constexpr std::uint32_t ETH_MACWTR_WTO_B_0x1 = 1;
        /** @brief 4 Kbytes */
    constexpr std::uint32_t ETH_MACWTR_WTO_B_0x2 = 2;
        /** @brief 5 Kbytes */
    constexpr std::uint32_t ETH_MACWTR_WTO_B_0x3 = 3;
        /** @brief 14 Kbytes */
    constexpr std::uint32_t ETH_MACWTR_WTO_B_0xC = 12;
        /** @brief 15 Kbytes */
    constexpr std::uint32_t ETH_MACWTR_WTO_B_0xD = 13;
        /** @brief 16383 Bytes */
    constexpr std::uint32_t ETH_MACWTR_WTO_B_0xE = 14;

    /** @brief Programmable Watchdog Enable */
    using ETH_MACWTR_PWE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hash Table 0 register */
    using ETH_MACHT0R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MAC Hash Table First 32 Bits */
    using ETH_MACHT0R_HT31T0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hash Table 1 register */
    using ETH_MACHT1R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MAC Hash Table Second 32 Bits */
    using ETH_MACHT1R_HT63T32 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VLAN tag Control register */
    using ETH_MACVTCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Operation Busy */
    using ETH_MACVTCR_OB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Command Type */
    using ETH_MACVTCR_CT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Offset */
    using ETH_MACVTCR_OFS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ETH_MACVTDR holds MAC VLAN Tag Filter0 content (value: 0)
     *          - B_0x1: ETH_MACVTDR holds MAC VLAN Tag Filter1 content (value: 1)
     *          - B_0x2: ETH_MACVTDR holds MAC VLAN Tag Filter2 content (value: 2)
     *          - B_0x3: ETH_MACVTDR holds MAC VLAN Tag Filter3 content (value: 3)
     */
        /** @brief ETH_MACVTDR holds MAC VLAN Tag Filter0 content */
    constexpr std::uint32_t ETH_MACVTCR_OFS_B_0x0 = 0;
        /** @brief ETH_MACVTDR holds MAC VLAN Tag Filter1 content */
    constexpr std::uint32_t ETH_MACVTCR_OFS_B_0x1 = 1;
        /** @brief ETH_MACVTDR holds MAC VLAN Tag Filter2 content */
    constexpr std::uint32_t ETH_MACVTCR_OFS_B_0x2 = 2;
        /** @brief ETH_MACVTDR holds MAC VLAN Tag Filter3 content */
    constexpr std::uint32_t ETH_MACVTCR_OFS_B_0x3 = 3;

    /** @brief Enable 12-Bit VLAN Tag Comparison */
    using ETH_MACVTCR_ETV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VLAN Tag Inverse Match Enable */
    using ETH_MACVTCR_VTIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable S-VLAN */
    using ETH_MACVTCR_ESVL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable Receive S-VLAN Match */
    using ETH_MACVTCR_ERSVLM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Disable VLAN Type Check */
    using ETH_MACVTCR_DOVLTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable VLAN Tag Stripping on Receive */
    using ETH_MACVTCR_EVLS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Do not strip (value: 0)
     *          - B_0x1: Strip if VLAN filter passes (value: 1)
     *          - B_0x2: Strip if VLAN filter fails (value: 2)
     *          - B_0x3: Always strip (value: 3)
     */
        /** @brief Do not strip */
    constexpr std::uint32_t ETH_MACVTCR_EVLS_B_0x0 = 0;
        /** @brief Strip if VLAN filter passes */
    constexpr std::uint32_t ETH_MACVTCR_EVLS_B_0x1 = 1;
        /** @brief Strip if VLAN filter fails */
    constexpr std::uint32_t ETH_MACVTCR_EVLS_B_0x2 = 2;
        /** @brief Always strip */
    constexpr std::uint32_t ETH_MACVTCR_EVLS_B_0x3 = 3;

    /** @brief Enable VLAN Tag in Rx status */
    using ETH_MACVTCR_EVLRXS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VLAN Tag Hash Table Match Enable */
    using ETH_MACVTCR_VTHM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable Double VLAN Processing */
    using ETH_MACVTCR_EDVLP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable Inner VLAN Tag */
    using ETH_MACVTCR_ERIVLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable Inner VLAN Tag Stripping on Receive */
    using ETH_MACVTCR_EIVLS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Do not strip (value: 0)
     *          - B_0x1: Strip if VLAN filter passes (value: 1)
     *          - B_0x2: Strip if VLAN filter fails (value: 2)
     *          - B_0x3: Always strip (value: 3)
     */
        /** @brief Do not strip */
    constexpr std::uint32_t ETH_MACVTCR_EIVLS_B_0x0 = 0;
        /** @brief Strip if VLAN filter passes */
    constexpr std::uint32_t ETH_MACVTCR_EIVLS_B_0x1 = 1;
        /** @brief Strip if VLAN filter fails */
    constexpr std::uint32_t ETH_MACVTCR_EIVLS_B_0x2 = 2;
        /** @brief Always strip */
    constexpr std::uint32_t ETH_MACVTCR_EIVLS_B_0x3 = 3;

    /** @brief Enable Inner VLAN Tag in Rx Status */
    using ETH_MACVTCR_EIVLRXS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VLAN tag data register */
    using ETH_MACVTDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VLAN Tag ID */
    using ETH_MACVTDR_VID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VLAN Tag Enable */
    using ETH_MACVTDR_VEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 12-bit or 16-bit VLAN comparison */
    using ETH_MACVTDR_ETV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 16-bit VLAN (value: 0)
     *          - B_0x1: 12-bit VLAN (value: 1)
     */
        /** @brief 16-bit VLAN */
    constexpr std::uint32_t ETH_MACVTDR_ETV_B_0x0 = 0;
        /** @brief 12-bit VLAN */
    constexpr std::uint32_t ETH_MACVTDR_ETV_B_0x1 = 1;

    /** @brief Disable VLAN Type Comparison */
    using ETH_MACVTDR_DOVLTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable S-VLAN Match for received Frames */
    using ETH_MACVTDR_ERSVLM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable Inner VLAN Tag Comparison */
    using ETH_MACVTDR_ERIVLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA Channel Number Enable */
    using ETH_MACVTDR_DMACHEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA Channel Number */
    using ETH_MACVTDR_DMACHN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VLAN Hash table register */
    using ETH_MACVHTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x58, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VLAN Hash Table */
    using ETH_MACVHTR_VLHT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VLAN inclusion register */
    using ETH_MACVIR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VLAN Tag for Transmit Packets */
    using ETH_MACVIR_VLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VLAN Tag Control in Transmit Packets */
    using ETH_MACVIR_VLC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No VLAN tag deletion, insertion, or replacement (value: 0)
     *          - B_0x1: VLAN tag deletion. The MAC removes the VLAN type (bytes 13 and 14) and VLAN tag (bytes 15 and 16) of all transmitted packets with VLAN tags. (value: 1)
     *          - B_0x2: VLAN tag insertion. The MAC inserts VLT in bytes 15 and 16 of the packet after inserting the Type value (0x8100 or 0x88a8) in bytes 13 and 14. This operation is performed on all transmitted packets, irrespective of whether they already have a VLAN tag. (value: 2)
     *          - B_0x3: VLAN tag replacement. The MAC replaces VLT in bytes 15 and 16 of all VLAN-type transmitted packets (Bytes 13 and 14 are 0x8100 or 0x88a8). (value: 3)
     */
        /** @brief No VLAN tag deletion, insertion, or replacement */
    constexpr std::uint32_t ETH_MACVIR_VLC_B_0x0 = 0;
        /** @brief VLAN tag deletion. The MAC removes the VLAN type (bytes 13 and 14) and VLAN tag (bytes 15 and 16) of all transmitted packets with VLAN tags. */
    constexpr std::uint32_t ETH_MACVIR_VLC_B_0x1 = 1;
        /** @brief VLAN tag insertion. The MAC inserts VLT in bytes 15 and 16 of the packet after inserting the Type value (0x8100 or 0x88a8) in bytes 13 and 14. This operation is performed on all transmitted packets, irrespective of whether they already have a VLAN tag. */
    constexpr std::uint32_t ETH_MACVIR_VLC_B_0x2 = 2;
        /** @brief VLAN tag replacement. The MAC replaces VLT in bytes 15 and 16 of all VLAN-type transmitted packets (Bytes 13 and 14 are 0x8100 or 0x88a8). */
    constexpr std::uint32_t ETH_MACVIR_VLC_B_0x3 = 3;

    /** @brief VLAN Priority Control */
    using ETH_MACVIR_VLP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief C-VLAN or S-VLAN */
    using ETH_MACVIR_CSVL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: C-LAN (value: 0)
     *          - B_0x1: S-LAN (value: 1)
     */
        /** @brief C-LAN */
    constexpr std::uint32_t ETH_MACVIR_CSVL_B_0x0 = 0;
        /** @brief S-LAN */
    constexpr std::uint32_t ETH_MACVIR_CSVL_B_0x1 = 1;

    /** @brief VLAN Tag Input */
    using ETH_MACVIR_VLTI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel based tag insertion */
    using ETH_MACVIR_CBTI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Address */
    using ETH_MACVIR_ADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VLAN tag for insertion in the Transmit packets from Tx Queue 0 (value: 0)
     *          - B_0x1: VLAN tag for insertion in the Transmit packets from Tx Queue 1 (value: 1)
     */
        /** @brief VLAN tag for insertion in the Transmit packets from Tx Queue 0 */
    constexpr std::uint32_t ETH_MACVIR_ADDR_B_0x0 = 0;
        /** @brief VLAN tag for insertion in the Transmit packets from Tx Queue 1 */
    constexpr std::uint32_t ETH_MACVIR_ADDR_B_0x1 = 1;

    /** @brief Read write control */
    using ETH_MACVIR_RDWR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Busy */
    using ETH_MACVIR_BUSY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VLAN inclusion register */
    using ETH_MACVIR_alternate = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VLAN Tag for Transmit Packets */
    using ETH_MACVIR_alternate_VLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief C-VLAN or S-VLAN */
    using ETH_MACVIR_alternate_CSVL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: C-LAN (value: 0)
     *          - B_0x1: S-LAN (value: 1)
     */
        /** @brief C-LAN */
    constexpr std::uint32_t ETH_MACVIR_alternate_CSVL_B_0x0 = 0;
        /** @brief S-LAN */
    constexpr std::uint32_t ETH_MACVIR_alternate_CSVL_B_0x1 = 1;

    /** @brief Inner VLAN inclusion register */
    using ETH_MACIVIR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x64, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VLAN Tag for Transmit Packets */
    using ETH_MACIVIR_VLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VLAN Tag Control in Transmit Packets */
    using ETH_MACIVIR_VLC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No VLAN tag deletion, insertion, or replacement (value: 0)
     *          - B_0x1: VLAN tag deletion (value: 1)
     *          - B_0x2: VLAN tag insertion (value: 2)
     *          - B_0x3: VLAN tag replacement (value: 3)
     */
        /** @brief No VLAN tag deletion, insertion, or replacement */
    constexpr std::uint32_t ETH_MACIVIR_VLC_B_0x0 = 0;
        /** @brief VLAN tag deletion */
    constexpr std::uint32_t ETH_MACIVIR_VLC_B_0x1 = 1;
        /** @brief VLAN tag insertion */
    constexpr std::uint32_t ETH_MACIVIR_VLC_B_0x2 = 2;
        /** @brief VLAN tag replacement */
    constexpr std::uint32_t ETH_MACIVIR_VLC_B_0x3 = 3;

    /** @brief VLAN Priority Control */
    using ETH_MACIVIR_VLP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief C-VLAN or S-VLAN */
    using ETH_MACIVIR_CSVL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: C-LAN (value: 0)
     *          - B_0x1: S-LAN (value: 1)
     */
        /** @brief C-LAN */
    constexpr std::uint32_t ETH_MACIVIR_CSVL_B_0x0 = 0;
        /** @brief S-LAN */
    constexpr std::uint32_t ETH_MACIVIR_CSVL_B_0x1 = 1;

    /** @brief VLAN Tag Input */
    using ETH_MACIVIR_VLTI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx Queue 0 flow control register */
    using ETH_MACQ0TXFCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x70, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Flow Control Busy or Backpressure Activate */
    using ETH_MACQ0TXFCR_FCB_BPA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Flow Control Enable */
    using ETH_MACQ0TXFCR_TFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Pause Low Threshold */
    using ETH_MACQ0TXFCR_PLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Pause Time minus 4 Slot Times (PT -4 slot times) (value: 0)
     *          - B_0x1: Pause Time minus 28 Slot Times (PT -28 slot times) (value: 1)
     *          - B_0x2: Pause Time minus 36 Slot Times (PT -36 slot times) (value: 2)
     *          - B_0x3: Pause Time minus 144 Slot Times (PT -144 slot times) (value: 3)
     *          - B_0x4: Pause Time minus 256 Slot Times (PT -256 slot times) (value: 4)
     *          - B_0x5: Pause Time minus 512 Slot Times (PT -512 slot times) (value: 5)
     */
        /** @brief Pause Time minus 4 Slot Times (PT -4 slot times) */
    constexpr std::uint32_t ETH_MACQ0TXFCR_PLT_B_0x0 = 0;
        /** @brief Pause Time minus 28 Slot Times (PT -28 slot times) */
    constexpr std::uint32_t ETH_MACQ0TXFCR_PLT_B_0x1 = 1;
        /** @brief Pause Time minus 36 Slot Times (PT -36 slot times) */
    constexpr std::uint32_t ETH_MACQ0TXFCR_PLT_B_0x2 = 2;
        /** @brief Pause Time minus 144 Slot Times (PT -144 slot times) */
    constexpr std::uint32_t ETH_MACQ0TXFCR_PLT_B_0x3 = 3;
        /** @brief Pause Time minus 256 Slot Times (PT -256 slot times) */
    constexpr std::uint32_t ETH_MACQ0TXFCR_PLT_B_0x4 = 4;
        /** @brief Pause Time minus 512 Slot Times (PT -512 slot times) */
    constexpr std::uint32_t ETH_MACQ0TXFCR_PLT_B_0x5 = 5;

    /** @brief Disable Zero-Quanta Pause */
    using ETH_MACQ0TXFCR_DZPQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Pause Time */
    using ETH_MACQ0TXFCR_PT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx flow control register */
    using ETH_MACRXFCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x90, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive Flow Control Enable */
    using ETH_MACRXFCR_RFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Unicast Pause Packet Detect */
    using ETH_MACRXFCR_UP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx Queue control register */
    using ETH_MACRXQCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x94, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Unicast Address Filter Fail Packets Queuing Enable. */
    using ETH_MACRXQCR_UFFQE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Unicast Address Filter Fail Packets Queue. */
    using ETH_MACRXQCR_UFFQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Queue 0 (value: 0)
     *          - B_0x1: Queue 1 (value: 1)
     */
        /** @brief Queue 0 */
    constexpr std::uint32_t ETH_MACRXQCR_UFFQ_B_0x0 = 0;
        /** @brief Queue 1 */
    constexpr std::uint32_t ETH_MACRXQCR_UFFQ_B_0x1 = 1;

    /** @brief Multicast Address Filter Fail Packets Queuing Enable. */
    using ETH_MACRXQCR_MFFQE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Multicast Address Filter Fail Packets Queue. */
    using ETH_MACRXQCR_MFFQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Queue 0 (value: 0)
     *          - B_0x1: Queue 1 (value: 1)
     */
        /** @brief Queue 0 */
    constexpr std::uint32_t ETH_MACRXQCR_MFFQ_B_0x0 = 0;
        /** @brief Queue 1 */
    constexpr std::uint32_t ETH_MACRXQCR_MFFQ_B_0x1 = 1;

    /** @brief VLAN Tag Filter Fail Packets Queuing Enable */
    using ETH_MACRXQCR_VFFQE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disabled (value: 0)
     *          - B_0x1: Enabled (value: 1)
     */
        /** @brief Disabled */
    constexpr std::uint32_t ETH_MACRXQCR_VFFQE_B_0x0 = 0;
        /** @brief Enabled */
    constexpr std::uint32_t ETH_MACRXQCR_VFFQE_B_0x1 = 1;

    /** @brief VLAN Tag Filter Fail Packets Queue */
    using ETH_MACRXQCR_VFFQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Queue 0 (value: 0)
     *          - B_0x1: Queue 1 (value: 1)
     */
        /** @brief Queue 0 */
    constexpr std::uint32_t ETH_MACRXQCR_VFFQ_B_0x0 = 0;
        /** @brief Queue 1 */
    constexpr std::uint32_t ETH_MACRXQCR_VFFQ_B_0x1 = 1;

    /** @brief Rx queue control 0 register */
    using ETH_MACRXQC0R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive Queue 0 Enable */
    using ETH_MACRXQC0R_RXQ0EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Not enabled (value: 0)
     *          - B_0x1: Queue 0 enabled for AV (value: 1)
     *          - B_0x2: Queue 0 enabled for Generic traffic (value: 2)
     */
        /** @brief Not enabled */
    constexpr std::uint32_t ETH_MACRXQC0R_RXQ0EN_B_0x0 = 0;
        /** @brief Queue 0 enabled for AV */
    constexpr std::uint32_t ETH_MACRXQC0R_RXQ0EN_B_0x1 = 1;
        /** @brief Queue 0 enabled for Generic traffic */
    constexpr std::uint32_t ETH_MACRXQC0R_RXQ0EN_B_0x2 = 2;

    /** @brief Receive Queue 1 Enable */
    using ETH_MACRXQC0R_RXQ1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Not enabled (value: 0)
     *          - B_0x1: Queue 1 enabled for AV (value: 1)
     *          - B_0x2: Queue 1 enabled for Generic traffic (value: 2)
     */
        /** @brief Not enabled */
    constexpr std::uint32_t ETH_MACRXQC0R_RXQ1EN_B_0x0 = 0;
        /** @brief Queue 1 enabled for AV */
    constexpr std::uint32_t ETH_MACRXQC0R_RXQ1EN_B_0x1 = 1;
        /** @brief Queue 1 enabled for Generic traffic */
    constexpr std::uint32_t ETH_MACRXQC0R_RXQ1EN_B_0x2 = 2;

    /** @brief Rx queue control 1 register */
    using ETH_MACRXQC1R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AV Untagged Control Packets Queue */
    using ETH_MACRXQC1R_AVCPQ0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Receive Queue 0 (value: 0)
     *          - B_0x1: Receive Queue 1 (value: 1)
     */
        /** @brief Receive Queue 0 */
    constexpr std::uint32_t ETH_MACRXQC1R_AVCPQ0_B_0x0 = 0;
        /** @brief Receive Queue 1 */
    constexpr std::uint32_t ETH_MACRXQC1R_AVCPQ0_B_0x1 = 1;

    /** @brief AV Untagged Control Packets Queue */
    using ETH_MACRXQC1R_AVCPQ1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Receive Queue 0 (value: 0)
     *          - B_0x1: Receive Queue 1 (value: 1)
     */
        /** @brief Receive Queue 0 */
    constexpr std::uint32_t ETH_MACRXQC1R_AVCPQ1_B_0x0 = 0;
        /** @brief Receive Queue 1 */
    constexpr std::uint32_t ETH_MACRXQC1R_AVCPQ1_B_0x1 = 1;

    /** @brief AV Untagged Control Packets Queue */
    using ETH_MACRXQC1R_AVCPQ2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Receive Queue 0 (value: 0)
     *          - B_0x1: Receive Queue 1 (value: 1)
     */
        /** @brief Receive Queue 0 */
    constexpr std::uint32_t ETH_MACRXQC1R_AVCPQ2_B_0x0 = 0;
        /** @brief Receive Queue 1 */
    constexpr std::uint32_t ETH_MACRXQC1R_AVCPQ2_B_0x1 = 1;

    /** @brief PTP Packets Queue */
    using ETH_MACRXQC1R_PTPQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rx queue 0 (value: 0)
     *          - B_0x1: Rx queue 1 (value: 1)
     */
        /** @brief Rx queue 0 */
    constexpr std::uint32_t ETH_MACRXQC1R_PTPQ_B_0x0 = 0;
        /** @brief Rx queue 1 */
    constexpr std::uint32_t ETH_MACRXQC1R_PTPQ_B_0x1 = 1;

    /** @brief Untagged Packet Queue */
    using ETH_MACRXQC1R_UPQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rx queue 0 (value: 0)
     *          - B_0x1: Rx queue 1 (value: 1)
     */
        /** @brief Rx queue 0 */
    constexpr std::uint32_t ETH_MACRXQC1R_UPQ_B_0x0 = 0;
        /** @brief Rx queue 1 */
    constexpr std::uint32_t ETH_MACRXQC1R_UPQ_B_0x1 = 1;

    /** @brief Multicast and Broadcast Queue */
    using ETH_MACRXQC1R_MCBCQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rx queue 0 (value: 0)
     *          - B_0x1: Rx queue 1 (value: 1)
     */
        /** @brief Rx queue 0 */
    constexpr std::uint32_t ETH_MACRXQC1R_MCBCQ_B_0x0 = 0;
        /** @brief Rx queue 1 */
    constexpr std::uint32_t ETH_MACRXQC1R_MCBCQ_B_0x1 = 1;

    /** @brief Multicast and Broadcast Queue Enable */
    using ETH_MACRXQC1R_MCBCQEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tagged AV Control Packets Queuing Enable */
    using ETH_MACRXQC1R_TACPQE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tagged PTP over Ethernet Packets Queuing Control */
    using ETH_MACRXQC1R_TPQC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VLAN tagged PTPoE packets are routed as generic VLAN tagged packet (based on PSRQ for only non-AV enabled Rx queues). (value: 0)
     *          - B_0x1: VLAN tagged PTPoE packets are routed to Rx Queue specified by PTPQ field (this Rx Queue can be enabled for AV or non-AV traffic) (value: 1)
     *          - B_0x2: VLAN tagged PTPoE packets are routed to only AV enabled Rx queues based on PSRQ. (value: 2)
     */
        /** @brief VLAN tagged PTPoE packets are routed as generic VLAN tagged packet (based on PSRQ for only non-AV enabled Rx queues). */
    constexpr std::uint32_t ETH_MACRXQC1R_TPQC_B_0x0 = 0;
        /** @brief VLAN tagged PTPoE packets are routed to Rx Queue specified by PTPQ field (this Rx Queue can be enabled for AV or non-AV traffic) */
    constexpr std::uint32_t ETH_MACRXQC1R_TPQC_B_0x1 = 1;
        /** @brief VLAN tagged PTPoE packets are routed to only AV enabled Rx queues based on PSRQ. */
    constexpr std::uint32_t ETH_MACRXQC1R_TPQC_B_0x2 = 2;

    /** @brief Frame Preemption Residue Queue */
    using ETH_MACRXQC1R_FPRQ0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Rx queue 1 (value: 1)
     */
        /** @brief Rx queue 1 */
    constexpr std::uint32_t ETH_MACRXQC1R_FPRQ0_B_0x1 = 1;

    /** @brief Frame Preemption Residue Queue */
    using ETH_MACRXQC1R_FPRQ1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Rx queue 1 (value: 1)
     */
        /** @brief Rx queue 1 */
    constexpr std::uint32_t ETH_MACRXQC1R_FPRQ1_B_0x1 = 1;

    /** @brief Frame Preemption Residue Queue */
    using ETH_MACRXQC1R_FPRQ2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Rx queue 1 (value: 1)
     */
        /** @brief Rx queue 1 */
    constexpr std::uint32_t ETH_MACRXQC1R_FPRQ2_B_0x1 = 1;

    /** @brief Overriding MC-BC queue priority select */
    using ETH_MACRXQC1R_OMCBCQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Priority of MCBCQ is reduced and the received packet is first routed to PTPQ, AVCPQ, depending on packet type. (value: 1)
     *          - B_0x0: Received Multicast/Broadcast packet is routed to MCBCQ. (value: 0)
     */
        /** @brief Priority of MCBCQ is reduced and the received packet is first routed to PTPQ, AVCPQ, depending on packet type. */
    constexpr std::uint32_t ETH_MACRXQC1R_OMCBCQ_B_0x1 = 1;
        /** @brief Received Multicast/Broadcast packet is routed to MCBCQ. */
    constexpr std::uint32_t ETH_MACRXQC1R_OMCBCQ_B_0x0 = 0;

    /** @brief Type Field Based Rx Queuing Enable */
    using ETH_MACRXQC1R_TBRQE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx queue control 2 register */
    using ETH_MACRXQC2R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Priorities Selected in the Receive Queue 0 */
    using ETH_MACRXQC2R_PSRQ0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Priorities Selected in the Receive Queue 1 */
    using ETH_MACRXQC2R_PSRQ1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt status register */
    using ETH_MACISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RGMII Interrupt Status */
    using ETH_MACISR_RGSMIIIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PHY Interrupt */
    using ETH_MACISR_PHYIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PMT Interrupt Status */
    using ETH_MACISR_PMTIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPI Interrupt Status */
    using ETH_MACISR_LPIIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMC Interrupt Status */
    using ETH_MACISR_MMCIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMC Receive Interrupt Status */
    using ETH_MACISR_MMCRXIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMC Transmit Interrupt Status */
    using ETH_MACISR_MMCTXIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timestamp Interrupt Status */
    using ETH_MACISR_TSIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Status Interrupt */
    using ETH_MACISR_TXSTSIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive Status Interrupt */
    using ETH_MACISR_RXSTSIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame Preemption Interrupt Status */
    using ETH_MACISR_FPEIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDIO Interrupt Status */
    using ETH_MACISR_MDIOIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMC FPE Transmit Interrupt Status */
    using ETH_MACISR_MFTIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMC FPE Receive Interrupt Status */
    using ETH_MACISR_MFRIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt enable register */
    using ETH_MACIER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RGMII Interrupt Enable */
    using ETH_MACIER_RGSMIIIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PHY Interrupt Enable */
    using ETH_MACIER_PHYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PMT Interrupt Enable */
    using ETH_MACIER_PMTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPI Interrupt Enable */
    using ETH_MACIER_LPIIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timestamp Interrupt Enable */
    using ETH_MACIER_TSIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Status Interrupt Enable */
    using ETH_MACIER_TXSTSIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive Status Interrupt Enable */
    using ETH_MACIER_RXSTSIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame Preemption Interrupt Enable */
    using ETH_MACIER_FPEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDIO Interrupt Enable */
    using ETH_MACIER_MDIOIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx Tx status register */
    using ETH_MACRXTXSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Jabber Timeout */
    using ETH_MACRXTXSR_TJT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief No Carrier */
    using ETH_MACRXTXSR_NCARR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Loss of Carrier */
    using ETH_MACRXTXSR_LCARR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Excessive Deferral */
    using ETH_MACRXTXSR_EXDEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Late Collision */
    using ETH_MACRXTXSR_LCOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Excessive Collisions */
    using ETH_MACRXTXSR_EXCOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive Watchdog Timeout */
    using ETH_MACRXTXSR_RWT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PMT control status register */
    using ETH_MACPCSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Power Down */
    using ETH_MACPCSR_PWRDWN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Magic Packet Enable */
    using ETH_MACPCSR_MGKPKTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Remote wake-up Packet Enable */
    using ETH_MACPCSR_RWKPKTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Magic Packet Received */
    using ETH_MACPCSR_MGKPRCVD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Remote wake-up Packet Received */
    using ETH_MACPCSR_RWKPRCVD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Global Unicast */
    using ETH_MACPCSR_GLBLUCAST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Remote wake-up Packet Forwarding Enable */
    using ETH_MACPCSR_RWKPFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Remote wake-up FIFO Pointer */
    using ETH_MACPCSR_RWKPTR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Remote wake-up Packet Filter Register Pointer Reset */
    using ETH_MACPCSR_RWKFILTRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Remote wake-up packet filter register */
    using ETH_MACRWKPFR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Remote wake-up packet filter */
    using ETH_MACRWKPFR_MACRWKPFR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPI control and status register */
    using ETH_MACLCSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit LPI Entry */
    using ETH_MACLCSR_TLPIEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit LPI Exit */
    using ETH_MACLCSR_TLPIEX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive LPI Entry */
    using ETH_MACLCSR_RLPIEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive LPI Exit */
    using ETH_MACLCSR_RLPIEX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit LPI State */
    using ETH_MACLCSR_TLPIST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive LPI State */
    using ETH_MACLCSR_RLPIST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPI Enable */
    using ETH_MACLCSR_LPIEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PHY Link Status */
    using ETH_MACLCSR_PLS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PHY Link Status Enable */
    using ETH_MACLCSR_PLSEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPI Tx Automate */
    using ETH_MACLCSR_LPITXA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPI Timer Enable */
    using ETH_MACLCSR_LPITE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPI Tx Clock Stop Enable */
    using ETH_MACLCSR_LPITCSE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPI timers control register */
    using ETH_MACLTCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPI TW Timer */
    using ETH_MACLTCR_TWT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPI LS Timer */
    using ETH_MACLTCR_LST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPI entry timer register */
    using ETH_MACLETR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPI Entry Timer */
    using ETH_MACLETR_LPIET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief One-microsecond-tick counter register */
    using ETH_MAC1USTCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xDC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 1 s tick Counter */
    using ETH_MAC1USTCR_TIC_1US_CNTR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PHYIF control status register */
    using ETH_MACPHYCSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Configuration in RGMII */
    using ETH_MACPHYCSR_TC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Link Up or Down */
    using ETH_MACPHYCSR_LUD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Link Down (value: 0)
     *          - B_0x1: Link Up (value: 1)
     */
        /** @brief Link Down */
    constexpr std::uint32_t ETH_MACPHYCSR_LUD_B_0x0 = 0;
        /** @brief Link Up */
    constexpr std::uint32_t ETH_MACPHYCSR_LUD_B_0x1 = 1;

    /** @brief Link Mode */
    using ETH_MACPHYCSR_LNKMOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Half-duplex mode (value: 0)
     *          - B_0x1: Full-duplex mode (value: 1)
     */
        /** @brief Half-duplex mode */
    constexpr std::uint32_t ETH_MACPHYCSR_LNKMOD_B_0x0 = 0;
        /** @brief Full-duplex mode */
    constexpr std::uint32_t ETH_MACPHYCSR_LNKMOD_B_0x1 = 1;

    /** @brief Link Speed */
    using ETH_MACPHYCSR_LNKSPEED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 2.5 MHz (value: 0)
     *          - B_0x1: 25 MHz (value: 1)
     *          - B_0x2: 125 MHz (value: 2)
     */
        /** @brief 2.5 MHz */
    constexpr std::uint32_t ETH_MACPHYCSR_LNKSPEED_B_0x0 = 0;
        /** @brief 25 MHz */
    constexpr std::uint32_t ETH_MACPHYCSR_LNKSPEED_B_0x1 = 1;
        /** @brief 125 MHz */
    constexpr std::uint32_t ETH_MACPHYCSR_LNKSPEED_B_0x2 = 2;

    /** @brief Link Status */
    using ETH_MACPHYCSR_LNKSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Link down (value: 0)
     *          - B_0x1: Link up (value: 1)
     */
        /** @brief Link down */
    constexpr std::uint32_t ETH_MACPHYCSR_LNKSTS_B_0x0 = 0;
        /** @brief Link up */
    constexpr std::uint32_t ETH_MACPHYCSR_LNKSTS_B_0x1 = 1;

    /** @brief Version register */
    using ETH_MACVR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x110, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IP version */
    using ETH_MACVR_SNPSVER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ST-defined version */
    using ETH_MACVR_USERVER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Debug register */
    using ETH_MACDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x114, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MAC GMII or MII Receive Protocol Engine Status */
    using ETH_MACDR_RPESTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MAC Receive Packet Controller FIFO Status */
    using ETH_MACDR_RFCFCSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MAC GMII or MII Transmit Protocol Engine Status */
    using ETH_MACDR_TPESTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MAC Transmit Packet Controller Status */
    using ETH_MACDR_TFCSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Idle state (value: 0)
     *          - B_0x1: Waiting for one of the following: (value: 1)
     *          - B_0x2: Generating and transmitting a Pause control packet (in Full-duplex mode) (value: 2)
     *          - B_0x3: Transferring input packet for transmission (value: 3)
     */
        /** @brief Idle state */
    constexpr std::uint32_t ETH_MACDR_TFCSTS_B_0x0 = 0;
        /** @brief Waiting for one of the following: */
    constexpr std::uint32_t ETH_MACDR_TFCSTS_B_0x1 = 1;
        /** @brief Generating and transmitting a Pause control packet (in Full-duplex mode) */
    constexpr std::uint32_t ETH_MACDR_TFCSTS_B_0x2 = 2;
        /** @brief Transferring input packet for transmission */
    constexpr std::uint32_t ETH_MACDR_TFCSTS_B_0x3 = 3;

    /** @brief HW feature 0 register */
    using ETH_MACHWF0R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x11C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 10 or 100 Mbps Support */
    using ETH_MACHWF0R_MIISEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 1000 Mbps Support */
    using ETH_MACHWF0R_GMIISEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Half-duplex Support */
    using ETH_MACHWF0R_HDSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PCS Registers (TBI, SGMII, or RTBI PHY interface) */
    using ETH_MACHWF0R_PCSSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VLAN Hash Filter Selected */
    using ETH_MACHWF0R_VLHASH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SMA (MDIO) Interface */
    using ETH_MACHWF0R_SMASEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PMT Remote wake-up Packet Enable */
    using ETH_MACHWF0R_RWKSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PMT Magic Packet Enable */
    using ETH_MACHWF0R_MGKSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RMON Module Enable */
    using ETH_MACHWF0R_MMCSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ARP Offload Enabled */
    using ETH_MACHWF0R_ARPOFFSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IEEE 1588-2008 Timestamp Enabled */
    using ETH_MACHWF0R_TSSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Energy Efficient Ethernet Enabled */
    using ETH_MACHWF0R_EEESEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Checksum Offload Enabled */
    using ETH_MACHWF0R_TXCOESEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive Checksum Offload Enabled */
    using ETH_MACHWF0R_RXCOESEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MAC Addresses 1-31 Selected */
    using ETH_MACHWF0R_ADDMACADRSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MAC Addresses 32-63 Selected */
    using ETH_MACHWF0R_MACADR32SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MAC Addresses 64-127 Selected */
    using ETH_MACHWF0R_MACADR64SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timestamp System Time Source */
    using ETH_MACHWF0R_TSSTSSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Internal (value: 1)
     *          - B_0x2: External (value: 2)
     *          - B_0x3: Both (value: 3)
     */
        /** @brief Internal */
    constexpr std::uint32_t ETH_MACHWF0R_TSSTSSEL_B_0x1 = 1;
        /** @brief External */
    constexpr std::uint32_t ETH_MACHWF0R_TSSTSSEL_B_0x2 = 2;
        /** @brief Both */
    constexpr std::uint32_t ETH_MACHWF0R_TSSTSSEL_B_0x3 = 3;

    /** @brief Source Address or VLAN Insertion Enable */
    using ETH_MACHWF0R_SAVLANINS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Active PHY Selected */
    using ETH_MACHWF0R_ACTPHYSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GMII or MII (value: 0)
     *          - B_0x1: RGMII (value: 1)
     *          - B_0x2: SGMII (value: 2)
     *          - B_0x3: TBI (value: 3)
     *          - B_0x4: RMII (value: 4)
     *          - B_0x5: RTBI (value: 5)
     *          - B_0x6: SMII (value: 6)
     */
        /** @brief GMII or MII */
    constexpr std::uint32_t ETH_MACHWF0R_ACTPHYSEL_B_0x0 = 0;
        /** @brief RGMII */
    constexpr std::uint32_t ETH_MACHWF0R_ACTPHYSEL_B_0x1 = 1;
        /** @brief SGMII */
    constexpr std::uint32_t ETH_MACHWF0R_ACTPHYSEL_B_0x2 = 2;
        /** @brief TBI */
    constexpr std::uint32_t ETH_MACHWF0R_ACTPHYSEL_B_0x3 = 3;
        /** @brief RMII */
    constexpr std::uint32_t ETH_MACHWF0R_ACTPHYSEL_B_0x4 = 4;
        /** @brief RTBI */
    constexpr std::uint32_t ETH_MACHWF0R_ACTPHYSEL_B_0x5 = 5;
        /** @brief SMII */
    constexpr std::uint32_t ETH_MACHWF0R_ACTPHYSEL_B_0x6 = 6;

    /** @brief HW feature 1 register */
    using ETH_MACHWF1R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x120, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MTL Receive FIFO Size */
    using ETH_MACHWF1R_RXFIFOSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 128 bytes (value: 0)
     *          - B_0x1: 256 bytes (value: 1)
     *          - B_0x2: 512 bytes (value: 2)
     *          - B_0x3: 1,024 bytes (value: 3)
     *          - B_0x4: 2,048 bytes (value: 4)
     *          - B_0x5: 4,096 bytes (value: 5)
     *          - B_0x6: 8,192 bytes (value: 6)
     *          - B_0x7: 16,384 bytes (value: 7)
     *          - B_0x8: 32 Kbytes (value: 8)
     *          - B_0x9: 64 Kbytes (value: 9)
     *          - B_0xA: 128 Kbytes (value: 10)
     *          - B_0xB: 256 Kbytes (value: 11)
     */
        /** @brief 128 bytes */
    constexpr std::uint32_t ETH_MACHWF1R_RXFIFOSIZE_B_0x0 = 0;
        /** @brief 256 bytes */
    constexpr std::uint32_t ETH_MACHWF1R_RXFIFOSIZE_B_0x1 = 1;
        /** @brief 512 bytes */
    constexpr std::uint32_t ETH_MACHWF1R_RXFIFOSIZE_B_0x2 = 2;
        /** @brief 1,024 bytes */
    constexpr std::uint32_t ETH_MACHWF1R_RXFIFOSIZE_B_0x3 = 3;
        /** @brief 2,048 bytes */
    constexpr std::uint32_t ETH_MACHWF1R_RXFIFOSIZE_B_0x4 = 4;
        /** @brief 4,096 bytes */
    constexpr std::uint32_t ETH_MACHWF1R_RXFIFOSIZE_B_0x5 = 5;
        /** @brief 8,192 bytes */
    constexpr std::uint32_t ETH_MACHWF1R_RXFIFOSIZE_B_0x6 = 6;
        /** @brief 16,384 bytes */
    constexpr std::uint32_t ETH_MACHWF1R_RXFIFOSIZE_B_0x7 = 7;
        /** @brief 32 Kbytes */
    constexpr std::uint32_t ETH_MACHWF1R_RXFIFOSIZE_B_0x8 = 8;
        /** @brief 64 Kbytes */
    constexpr std::uint32_t ETH_MACHWF1R_RXFIFOSIZE_B_0x9 = 9;
        /** @brief 128 Kbytes */
    constexpr std::uint32_t ETH_MACHWF1R_RXFIFOSIZE_B_0xA = 10;
        /** @brief 256 Kbytes */
    constexpr std::uint32_t ETH_MACHWF1R_RXFIFOSIZE_B_0xB = 11;

    /** @brief Single Port RAM Enable */
    using ETH_MACHWF1R_SPRAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MTL Transmit FIFO Size */
    using ETH_MACHWF1R_TXFIFOSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 128 bytes (value: 0)
     *          - B_0x1: 256 bytes (value: 1)
     *          - B_0x2: 512 bytes (value: 2)
     *          - B_0x3: 1,024 bytes (value: 3)
     *          - B_0x4: 2,048 bytes (value: 4)
     *          - B_0x5: 4,096 bytes (value: 5)
     *          - B_0x6: 8,192 bytes (value: 6)
     *          - B_0x7: 16,384 bytes (value: 7)
     *          - B_0x8: 32 Kbytes (value: 8)
     *          - B_0x9: 64 Kbytes (value: 9)
     *          - B_0xA: 128 Kbytes (value: 10)
     */
        /** @brief 128 bytes */
    constexpr std::uint32_t ETH_MACHWF1R_TXFIFOSIZE_B_0x0 = 0;
        /** @brief 256 bytes */
    constexpr std::uint32_t ETH_MACHWF1R_TXFIFOSIZE_B_0x1 = 1;
        /** @brief 512 bytes */
    constexpr std::uint32_t ETH_MACHWF1R_TXFIFOSIZE_B_0x2 = 2;
        /** @brief 1,024 bytes */
    constexpr std::uint32_t ETH_MACHWF1R_TXFIFOSIZE_B_0x3 = 3;
        /** @brief 2,048 bytes */
    constexpr std::uint32_t ETH_MACHWF1R_TXFIFOSIZE_B_0x4 = 4;
        /** @brief 4,096 bytes */
    constexpr std::uint32_t ETH_MACHWF1R_TXFIFOSIZE_B_0x5 = 5;
        /** @brief 8,192 bytes */
    constexpr std::uint32_t ETH_MACHWF1R_TXFIFOSIZE_B_0x6 = 6;
        /** @brief 16,384 bytes */
    constexpr std::uint32_t ETH_MACHWF1R_TXFIFOSIZE_B_0x7 = 7;
        /** @brief 32 Kbytes */
    constexpr std::uint32_t ETH_MACHWF1R_TXFIFOSIZE_B_0x8 = 8;
        /** @brief 64 Kbytes */
    constexpr std::uint32_t ETH_MACHWF1R_TXFIFOSIZE_B_0x9 = 9;
        /** @brief 128 Kbytes */
    constexpr std::uint32_t ETH_MACHWF1R_TXFIFOSIZE_B_0xA = 10;

    /** @brief One-Step Timestamping Enable */
    using ETH_MACHWF1R_OSTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PTP Offload Enable */
    using ETH_MACHWF1R_PTOEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IEEE 1588 High Word Register Enable */
    using ETH_MACHWF1R_ADVTHWORD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Address width */
    using ETH_MACHWF1R_ADDR64 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 32 bits (value: 0)
     */
        /** @brief 32 bits */
    constexpr std::uint32_t ETH_MACHWF1R_ADDR64_B_0x0 = 0;

    /** @brief DCB Feature Enable */
    using ETH_MACHWF1R_DCBEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Split Header Feature Enable */
    using ETH_MACHWF1R_SPHEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TCP Segmentation Offload Enable */
    using ETH_MACHWF1R_TSOEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA Debug Registers Enable */
    using ETH_MACHWF1R_DBGMEMA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AV Feature Enable */
    using ETH_MACHWF1R_AVSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx Side Only AV Feature Enable */
    using ETH_MACHWF1R_RAVSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief One Step for PTP over UDP/IP Feature Enable */
    using ETH_MACHWF1R_POUOST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hash Table Size */
    using ETH_MACHWF1R_HASHTBLSZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No Hash table (value: 0)
     *          - B_0x1: 64 (value: 1)
     *          - B_0x2: 128 (value: 2)
     *          - B_0x3: 256 (value: 3)
     */
        /** @brief No Hash table */
    constexpr std::uint32_t ETH_MACHWF1R_HASHTBLSZ_B_0x0 = 0;
        /** @brief 64 */
    constexpr std::uint32_t ETH_MACHWF1R_HASHTBLSZ_B_0x1 = 1;
        /** @brief 128 */
    constexpr std::uint32_t ETH_MACHWF1R_HASHTBLSZ_B_0x2 = 2;
        /** @brief 256 */
    constexpr std::uint32_t ETH_MACHWF1R_HASHTBLSZ_B_0x3 = 3;

    /** @brief Total number of L3 or L4 Filters */
    using ETH_MACHWF1R_L3L4FNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No L3 or L4 Filter (value: 0)
     *          - B_0x1: 1 L3 or L4 Filter (value: 1)
     *          - B_0x2: 2 L3 or L4 Filters (value: 2)
     *          - B_0x8: 8 L3 or L4 (value: 8)
     */
        /** @brief No L3 or L4 Filter */
    constexpr std::uint32_t ETH_MACHWF1R_L3L4FNUM_B_0x0 = 0;
        /** @brief 1 L3 or L4 Filter */
    constexpr std::uint32_t ETH_MACHWF1R_L3L4FNUM_B_0x1 = 1;
        /** @brief 2 L3 or L4 Filters */
    constexpr std::uint32_t ETH_MACHWF1R_L3L4FNUM_B_0x2 = 2;
        /** @brief 8 L3 or L4 */
    constexpr std::uint32_t ETH_MACHWF1R_L3L4FNUM_B_0x8 = 8;

    /** @brief HW feature 2 register */
    using ETH_MACHWF2R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x124, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of MTL Receive Queues */
    using ETH_MACHWF2R_RXQCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1 MTL Rx queue (value: 0)
     *          - B_0x1: 2 MTL Rx queues (value: 1)
     *          - B_0x7: 8 MTL Rx (value: 7)
     */
        /** @brief 1 MTL Rx queue */
    constexpr std::uint32_t ETH_MACHWF2R_RXQCNT_B_0x0 = 0;
        /** @brief 2 MTL Rx queues */
    constexpr std::uint32_t ETH_MACHWF2R_RXQCNT_B_0x1 = 1;
        /** @brief 8 MTL Rx */
    constexpr std::uint32_t ETH_MACHWF2R_RXQCNT_B_0x7 = 7;

    /** @brief Number of MTL Transmit Queues */
    using ETH_MACHWF2R_TXQCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1 MTL Tx queue (value: 0)
     *          - B_0x1: 2 MTL Tx queues (value: 1)
     *          - B_0x7: 8 MTL Tx (value: 7)
     */
        /** @brief 1 MTL Tx queue */
    constexpr std::uint32_t ETH_MACHWF2R_TXQCNT_B_0x0 = 0;
        /** @brief 2 MTL Tx queues */
    constexpr std::uint32_t ETH_MACHWF2R_TXQCNT_B_0x1 = 1;
        /** @brief 8 MTL Tx */
    constexpr std::uint32_t ETH_MACHWF2R_TXQCNT_B_0x7 = 7;

    /** @brief Number of DMA Receive Channels */
    using ETH_MACHWF2R_RXCHCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1 DMA Rx Channel (value: 0)
     *          - B_0x1: 2 DMA Rx Channels (value: 1)
     *          - B_0x7: 8 DMA Rx (value: 7)
     */
        /** @brief 1 DMA Rx Channel */
    constexpr std::uint32_t ETH_MACHWF2R_RXCHCNT_B_0x0 = 0;
        /** @brief 2 DMA Rx Channels */
    constexpr std::uint32_t ETH_MACHWF2R_RXCHCNT_B_0x1 = 1;
        /** @brief 8 DMA Rx */
    constexpr std::uint32_t ETH_MACHWF2R_RXCHCNT_B_0x7 = 7;

    /** @brief Rx DMA Descriptor Cache Size in terms of 16-byte descriptors */
    using ETH_MACHWF2R_RDCSZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Cache not configured (value: 0)
     *          - B_0x1: Four 16-byte descriptors (value: 1)
     *          - B_0x2: Eight 16-byte descriptors (value: 2)
     *          - B_0x3: Sixteen 16-byte descriptors (value: 3)
     */
        /** @brief Cache not configured */
    constexpr std::uint32_t ETH_MACHWF2R_RDCSZ_B_0x0 = 0;
        /** @brief Four 16-byte descriptors */
    constexpr std::uint32_t ETH_MACHWF2R_RDCSZ_B_0x1 = 1;
        /** @brief Eight 16-byte descriptors */
    constexpr std::uint32_t ETH_MACHWF2R_RDCSZ_B_0x2 = 2;
        /** @brief Sixteen 16-byte descriptors */
    constexpr std::uint32_t ETH_MACHWF2R_RDCSZ_B_0x3 = 3;

    /** @brief Number of DMA Transmit Channels */
    using ETH_MACHWF2R_TXCHCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1 DMA Tx Channel (value: 0)
     *          - B_0x1: 2 DMA Tx Channels (value: 1)
     *          - B_0x7: 8 DMA Tx (value: 7)
     */
        /** @brief 1 DMA Tx Channel */
    constexpr std::uint32_t ETH_MACHWF2R_TXCHCNT_B_0x0 = 0;
        /** @brief 2 DMA Tx Channels */
    constexpr std::uint32_t ETH_MACHWF2R_TXCHCNT_B_0x1 = 1;
        /** @brief 8 DMA Tx */
    constexpr std::uint32_t ETH_MACHWF2R_TXCHCNT_B_0x7 = 7;

    /** @brief Tx DMA Descriptor Cache Size in terms of 16-byte descriptors */
    using ETH_MACHWF2R_TDCSZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Cache not configured (value: 0)
     *          - B_0x1: Four 16-byte descriptors (value: 1)
     *          - B_0x2: Eight 16-byte descriptors (value: 2)
     *          - B_0x3: Sixteen 16-byte descriptors (value: 3)
     */
        /** @brief Cache not configured */
    constexpr std::uint32_t ETH_MACHWF2R_TDCSZ_B_0x0 = 0;
        /** @brief Four 16-byte descriptors */
    constexpr std::uint32_t ETH_MACHWF2R_TDCSZ_B_0x1 = 1;
        /** @brief Eight 16-byte descriptors */
    constexpr std::uint32_t ETH_MACHWF2R_TDCSZ_B_0x2 = 2;
        /** @brief Sixteen 16-byte descriptors */
    constexpr std::uint32_t ETH_MACHWF2R_TDCSZ_B_0x3 = 3;

    /** @brief Number of PPS Outputs */
    using ETH_MACHWF2R_PPSOUTNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No PPS output (value: 0)
     *          - B_0x1: 1 PPS output (value: 1)
     *          - B_0x2: 2 PPS outputs (value: 2)
     *          - B_0x3: 3 PPS outputs (value: 3)
     *          - B_0x4: 4 PPS outputs (value: 4)
     */
        /** @brief No PPS output */
    constexpr std::uint32_t ETH_MACHWF2R_PPSOUTNUM_B_0x0 = 0;
        /** @brief 1 PPS output */
    constexpr std::uint32_t ETH_MACHWF2R_PPSOUTNUM_B_0x1 = 1;
        /** @brief 2 PPS outputs */
    constexpr std::uint32_t ETH_MACHWF2R_PPSOUTNUM_B_0x2 = 2;
        /** @brief 3 PPS outputs */
    constexpr std::uint32_t ETH_MACHWF2R_PPSOUTNUM_B_0x3 = 3;
        /** @brief 4 PPS outputs */
    constexpr std::uint32_t ETH_MACHWF2R_PPSOUTNUM_B_0x4 = 4;

    /** @brief Number of Auxiliary Snapshot Inputs */
    using ETH_MACHWF2R_AUXSNAPNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No auxiliary input (value: 0)
     *          - B_0x1: 1 auxiliary input (value: 1)
     *          - B_0x2: 2 auxiliary inputs (value: 2)
     *          - B_0x3: 3 auxiliary inputs (value: 3)
     *          - B_0x4: 4 auxiliary inputs (value: 4)
     */
        /** @brief No auxiliary input */
    constexpr std::uint32_t ETH_MACHWF2R_AUXSNAPNUM_B_0x0 = 0;
        /** @brief 1 auxiliary input */
    constexpr std::uint32_t ETH_MACHWF2R_AUXSNAPNUM_B_0x1 = 1;
        /** @brief 2 auxiliary inputs */
    constexpr std::uint32_t ETH_MACHWF2R_AUXSNAPNUM_B_0x2 = 2;
        /** @brief 3 auxiliary inputs */
    constexpr std::uint32_t ETH_MACHWF2R_AUXSNAPNUM_B_0x3 = 3;
        /** @brief 4 auxiliary inputs */
    constexpr std::uint32_t ETH_MACHWF2R_AUXSNAPNUM_B_0x4 = 4;

    /** @brief HW feature 3 register */
    using ETH_MACHWF3R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x128, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of Extended VLAN Tag Filters Enabled */
    using ETH_MACHWF3R_NRVF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No Extended Rx VLAN Filters (value: 0)
     *          - B_0x1: 4 Extended Rx VLAN Filters (value: 1)
     *          - B_0x2: 8 Extended Rx VLAN Filters (value: 2)
     *          - B_0x3: 16 Extended Rx VLAN Filters (value: 3)
     *          - B_0x4: 24 Extended Rx VLAN Filters (value: 4)
     *          - B_0x5: 32 Extended Rx VLAN Filters (value: 5)
     */
        /** @brief No Extended Rx VLAN Filters */
    constexpr std::uint32_t ETH_MACHWF3R_NRVF_B_0x0 = 0;
        /** @brief 4 Extended Rx VLAN Filters */
    constexpr std::uint32_t ETH_MACHWF3R_NRVF_B_0x1 = 1;
        /** @brief 8 Extended Rx VLAN Filters */
    constexpr std::uint32_t ETH_MACHWF3R_NRVF_B_0x2 = 2;
        /** @brief 16 Extended Rx VLAN Filters */
    constexpr std::uint32_t ETH_MACHWF3R_NRVF_B_0x3 = 3;
        /** @brief 24 Extended Rx VLAN Filters */
    constexpr std::uint32_t ETH_MACHWF3R_NRVF_B_0x4 = 4;
        /** @brief 32 Extended Rx VLAN Filters */
    constexpr std::uint32_t ETH_MACHWF3R_NRVF_B_0x5 = 5;

    /** @brief Queue/Channel based VLAN tag insertion on Tx enable */
    using ETH_MACHWF3R_CBTISEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Double VLAN processing enable */
    using ETH_MACHWF3R_DVLAN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Broadcast/Multicast Packet Duplication */
    using ETH_MACHWF3R_PDUPSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Flexible Receive Parser Selected */
    using ETH_MACHWF3R_FRPSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Flexible Receive Parser Buffer size */
    using ETH_MACHWF3R_FRPBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 64 bytes (value: 0)
     *          - B_0x1: 128 bytes (value: 1)
     *          - B_0x2: 256 bytes (value: 2)
     */
        /** @brief 64 bytes */
    constexpr std::uint32_t ETH_MACHWF3R_FRPBS_B_0x0 = 0;
        /** @brief 128 bytes */
    constexpr std::uint32_t ETH_MACHWF3R_FRPBS_B_0x1 = 1;
        /** @brief 256 bytes */
    constexpr std::uint32_t ETH_MACHWF3R_FRPBS_B_0x2 = 2;

    /** @brief Flexible Receive Parser Table Entries size */
    using ETH_MACHWF3R_FRPES = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 64 entries (value: 0)
     *          - B_0x1: 128 entries (value: 1)
     *          - B_0x2: 256 entries (value: 2)
     */
        /** @brief 64 entries */
    constexpr std::uint32_t ETH_MACHWF3R_FRPES_B_0x0 = 0;
        /** @brief 128 entries */
    constexpr std::uint32_t ETH_MACHWF3R_FRPES_B_0x1 = 1;
        /** @brief 256 entries */
    constexpr std::uint32_t ETH_MACHWF3R_FRPES_B_0x2 = 2;

    /** @brief Enhancements to Scheduled Traffic Enable */
    using ETH_MACHWF3R_ESTSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Depth of the Gate Control List */
    using ETH_MACHWF3R_ESTDEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No depth (value: 0)
     *          - B_0x1: 64 (value: 1)
     *          - B_0x2: 128 (value: 2)
     *          - B_0x3: 256 (value: 3)
     *          - B_0x4: 512 (value: 4)
     *          - B_0x5: 1024 (value: 5)
     */
        /** @brief No depth */
    constexpr std::uint32_t ETH_MACHWF3R_ESTDEP_B_0x0 = 0;
        /** @brief 64 */
    constexpr std::uint32_t ETH_MACHWF3R_ESTDEP_B_0x1 = 1;
        /** @brief 128 */
    constexpr std::uint32_t ETH_MACHWF3R_ESTDEP_B_0x2 = 2;
        /** @brief 256 */
    constexpr std::uint32_t ETH_MACHWF3R_ESTDEP_B_0x3 = 3;
        /** @brief 512 */
    constexpr std::uint32_t ETH_MACHWF3R_ESTDEP_B_0x4 = 4;
        /** @brief 1024 */
    constexpr std::uint32_t ETH_MACHWF3R_ESTDEP_B_0x5 = 5;

    /** @brief Width of the Time Interval field in the Gate Control List */
    using ETH_MACHWF3R_ESTWID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No width (value: 0)
     *          - B_0x1: 16 (value: 1)
     *          - B_0x2: 20 (value: 2)
     *          - B_0x3: 24 (value: 3)
     */
        /** @brief No width */
    constexpr std::uint32_t ETH_MACHWF3R_ESTWID_B_0x0 = 0;
        /** @brief 16 */
    constexpr std::uint32_t ETH_MACHWF3R_ESTWID_B_0x1 = 1;
        /** @brief 20 */
    constexpr std::uint32_t ETH_MACHWF3R_ESTWID_B_0x2 = 2;
        /** @brief 24 */
    constexpr std::uint32_t ETH_MACHWF3R_ESTWID_B_0x3 = 3;

    /** @brief Frame Preemption Enable */
    using ETH_MACHWF3R_FPESEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Time-based scheduling Enable */
    using ETH_MACHWF3R_TBSSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Automotive Safety Package */
    using ETH_MACHWF3R_ASP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: None (value: 0)
     *          - B_0x1: ECC only (value: 1)
     *          - B_0x2: AS_NPPE (value: 2)
     *          - B_0x3: AS_PPE (value: 3)
     */
        /** @brief None */
    constexpr std::uint32_t ETH_MACHWF3R_ASP_B_0x0 = 0;
        /** @brief ECC only */
    constexpr std::uint32_t ETH_MACHWF3R_ASP_B_0x1 = 1;
        /** @brief AS_NPPE */
    constexpr std::uint32_t ETH_MACHWF3R_ASP_B_0x2 = 2;
        /** @brief AS_PPE */
    constexpr std::uint32_t ETH_MACHWF3R_ASP_B_0x3 = 3;

    /** @brief MDIO address register */
    using ETH_MACMDIOAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x200, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GMII Busy */
    using ETH_MACMDIOAR_GB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clause 45 PHY Enable */
    using ETH_MACMDIOAR_C45E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GMII Operation Command */
    using ETH_MACMDIOAR_GOC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Write (value: 1)
     *          - B_0x2: Post Read Increment Address for Clause 45 PHY (value: 2)
     *          - B_0x3: Read (value: 3)
     */
        /** @brief Write */
    constexpr std::uint32_t ETH_MACMDIOAR_GOC_B_0x1 = 1;
        /** @brief Post Read Increment Address for Clause 45 PHY */
    constexpr std::uint32_t ETH_MACMDIOAR_GOC_B_0x2 = 2;
        /** @brief Read */
    constexpr std::uint32_t ETH_MACMDIOAR_GOC_B_0x3 = 3;

    /** @brief Skip Address Packet */
    using ETH_MACMDIOAR_SKAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CSR Clock Range */
    using ETH_MACMDIOAR_CR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CSR clock = 60-100 MHz; MDC clock = CSR clock/42 (value: 0)
     *          - B_0x1: CSR clock = 100-150 MHz; MDC clock = CSR clock/62 (value: 1)
     *          - B_0x2: CSR clock = 20-35 MHz; MDC clock = CSR clock/16 (value: 2)
     *          - B_0x3: CSR clock = 35-60 MHz; MDC clock = CSR clock/26 (value: 3)
     *          - B_0x4: CSR clock = 150-250 MHz; MDC clock = CSR clock/102 (value: 4)
     *          - B_0x5: CSR clock = 250-300 MHz; MDC clock = CSR clock/124 (value: 5)
     *          - B_0x6: CSR clock = 300-500 MHz; MDC clock = CSR clock/204 (value: 6)
     *          - B_0x7: CSR clock = 500-800 MHz; MDC clock = CSR clock/324 (value: 7)
     *          - B_0x8: CSR clock/4 (value: 8)
     *          - B_0x9: CSR clock/6 (value: 9)
     *          - B_0xA: CSR clock/8 (value: 10)
     *          - B_0xB: CSR clock/10 (value: 11)
     *          - B_0xC: CSR clock/12 (value: 12)
     *          - B_0xD: CSR clock/14 (value: 13)
     *          - B_0xE: CSR clock/16 (value: 14)
     *          - B_0xF: CSR clock/18 (value: 15)
     */
        /** @brief CSR clock = 60-100 MHz; MDC clock = CSR clock/42 */
    constexpr std::uint32_t ETH_MACMDIOAR_CR_B_0x0 = 0;
        /** @brief CSR clock = 100-150 MHz; MDC clock = CSR clock/62 */
    constexpr std::uint32_t ETH_MACMDIOAR_CR_B_0x1 = 1;
        /** @brief CSR clock = 20-35 MHz; MDC clock = CSR clock/16 */
    constexpr std::uint32_t ETH_MACMDIOAR_CR_B_0x2 = 2;
        /** @brief CSR clock = 35-60 MHz; MDC clock = CSR clock/26 */
    constexpr std::uint32_t ETH_MACMDIOAR_CR_B_0x3 = 3;
        /** @brief CSR clock = 150-250 MHz; MDC clock = CSR clock/102 */
    constexpr std::uint32_t ETH_MACMDIOAR_CR_B_0x4 = 4;
        /** @brief CSR clock = 250-300 MHz; MDC clock = CSR clock/124 */
    constexpr std::uint32_t ETH_MACMDIOAR_CR_B_0x5 = 5;
        /** @brief CSR clock = 300-500 MHz; MDC clock = CSR clock/204 */
    constexpr std::uint32_t ETH_MACMDIOAR_CR_B_0x6 = 6;
        /** @brief CSR clock = 500-800 MHz; MDC clock = CSR clock/324 */
    constexpr std::uint32_t ETH_MACMDIOAR_CR_B_0x7 = 7;
        /** @brief CSR clock/4 */
    constexpr std::uint32_t ETH_MACMDIOAR_CR_B_0x8 = 8;
        /** @brief CSR clock/6 */
    constexpr std::uint32_t ETH_MACMDIOAR_CR_B_0x9 = 9;
        /** @brief CSR clock/8 */
    constexpr std::uint32_t ETH_MACMDIOAR_CR_B_0xA = 10;
        /** @brief CSR clock/10 */
    constexpr std::uint32_t ETH_MACMDIOAR_CR_B_0xB = 11;
        /** @brief CSR clock/12 */
    constexpr std::uint32_t ETH_MACMDIOAR_CR_B_0xC = 12;
        /** @brief CSR clock/14 */
    constexpr std::uint32_t ETH_MACMDIOAR_CR_B_0xD = 13;
        /** @brief CSR clock/16 */
    constexpr std::uint32_t ETH_MACMDIOAR_CR_B_0xE = 14;
        /** @brief CSR clock/18 */
    constexpr std::uint32_t ETH_MACMDIOAR_CR_B_0xF = 15;

    /** @brief Number of Training Clocks */
    using ETH_MACMDIOAR_NTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Register/Device Address */
    using ETH_MACMDIOAR_RDA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Physical Layer Address */
    using ETH_MACMDIOAR_PA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Back to Back transactions */
    using ETH_MACMDIOAR_BTB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Preamble Suppression Enable */
    using ETH_MACMDIOAR_PSE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDIO data register */
    using ETH_MACMDIODR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x204, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GMII Data */
    using ETH_MACMDIODR_GD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Register Address */
    using ETH_MACMDIODR_RA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ARP address register */
    using ETH_MACARPAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x210, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ARP Protocol Address */
    using ETH_MACARPAR_ARPPA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CSR software control register */
    using ETH_MACCSRSWCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x230, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Register Clear on Write 1 Enable */
    using ETH_MACCSRSWCR_RCWE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Slave Error Response Enable */
    using ETH_MACCSRSWCR_SEEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FPE control and status register */
    using ETH_MACFPECSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x234, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable Tx Frame Preemption */
    using ETH_MACFPECSR_EFPE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Send Verify mPacket */
    using ETH_MACFPECSR_SVER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Send Respond mPacket */
    using ETH_MACFPECSR_SRSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Received Verify Frame */
    using ETH_MACFPECSR_RVER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Received Respond Frame */
    using ETH_MACFPECSR_RRSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmitted Verify Frame */
    using ETH_MACFPECSR_TVER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmitted Respond Frame */
    using ETH_MACFPECSR_TRSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MAC presentation time register */
    using ETH_MACPRSTIMR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x240, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MAC 1722 Presentation Time in ns */
    using ETH_MACPRSTIMR_MPTN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MAC presentation time update register */
    using ETH_MACPRSTIMUR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x244, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MAC 1722 Presentation Time Update */
    using ETH_MACPRSTIMUR_MPTU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MAC Address 0 high register */
    using ETH_MACA0HR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x300, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MAC Address0[47:32] */
    using ETH_MACA0HR_ADDRHI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA Channel Select */
    using ETH_MACA0HR_DCS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DMA Rx channel 0 (value: 0)
     *          - B_0x1: DMA Rx channel 1 (value: 1)
     */
        /** @brief DMA Rx channel 0 */
    constexpr std::uint32_t ETH_MACA0HR_DCS_B_0x0 = 0;
        /** @brief DMA Rx channel 1 */
    constexpr std::uint32_t ETH_MACA0HR_DCS_B_0x1 = 1;

    /** @brief Address Enable */
    using ETH_MACA0HR_AE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MAC Address 0 low register */
    using ETH_MACA0LR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x304, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MAC Address x [31:0] */
    using ETH_MACA0LR_ADDRLO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MAC Address 1 high register */
    using ETH_MACA1HR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x308, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MAC Address1 [47:32] */
    using ETH_MACA1HR_ADDRHI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA Channel Select */
    using ETH_MACA1HR_DCS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DMA Rx channel 0 (value: 0)
     *          - B_0x1: DMA Rx channel 1 (value: 1)
     */
        /** @brief DMA Rx channel 0 */
    constexpr std::uint32_t ETH_MACA1HR_DCS_B_0x0 = 0;
        /** @brief DMA Rx channel 1 */
    constexpr std::uint32_t ETH_MACA1HR_DCS_B_0x1 = 1;

    /** @brief Mask Byte Control */
    using ETH_MACA1HR_MBC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Source Address */
    using ETH_MACA1HR_SA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DA (value: 0)
     *          - B_0x1: SA (value: 1)
     */
        /** @brief DA */
    constexpr std::uint32_t ETH_MACA1HR_SA_B_0x0 = 0;
        /** @brief SA */
    constexpr std::uint32_t ETH_MACA1HR_SA_B_0x1 = 1;

    /** @brief Address Enable */
    using ETH_MACA1HR_AE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MAC Address 1 low register */
    using ETH_MACA1LR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MAC Address x [31:0] */
    using ETH_MACA1LR_ADDRLO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MAC Address 2 high register */
    using ETH_MACA2HR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x310, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MAC Address1 [47:32] */
    using ETH_MACA2HR_ADDRHI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA Channel Select */
    using ETH_MACA2HR_DCS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DMA Rx channel 0 (value: 0)
     *          - B_0x1: DMA Rx channel 1 (value: 1)
     */
        /** @brief DMA Rx channel 0 */
    constexpr std::uint32_t ETH_MACA2HR_DCS_B_0x0 = 0;
        /** @brief DMA Rx channel 1 */
    constexpr std::uint32_t ETH_MACA2HR_DCS_B_0x1 = 1;

    /** @brief Mask Byte Control */
    using ETH_MACA2HR_MBC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Source Address */
    using ETH_MACA2HR_SA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DA (value: 0)
     *          - B_0x1: SA (value: 1)
     */
        /** @brief DA */
    constexpr std::uint32_t ETH_MACA2HR_SA_B_0x0 = 0;
        /** @brief SA */
    constexpr std::uint32_t ETH_MACA2HR_SA_B_0x1 = 1;

    /** @brief Address Enable */
    using ETH_MACA2HR_AE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MAC Address 2 low register */
    using ETH_MACA2LR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x314, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MAC Address x [31:0] */
    using ETH_MACA2LR_ADDRLO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MAC Address 3 high register */
    using ETH_MACA3HR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x318, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MAC Address1 [47:32] */
    using ETH_MACA3HR_ADDRHI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA Channel Select */
    using ETH_MACA3HR_DCS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DMA Rx channel 0 (value: 0)
     *          - B_0x1: DMA Rx channel 1 (value: 1)
     */
        /** @brief DMA Rx channel 0 */
    constexpr std::uint32_t ETH_MACA3HR_DCS_B_0x0 = 0;
        /** @brief DMA Rx channel 1 */
    constexpr std::uint32_t ETH_MACA3HR_DCS_B_0x1 = 1;

    /** @brief Mask Byte Control */
    using ETH_MACA3HR_MBC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Source Address */
    using ETH_MACA3HR_SA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DA (value: 0)
     *          - B_0x1: SA (value: 1)
     */
        /** @brief DA */
    constexpr std::uint32_t ETH_MACA3HR_SA_B_0x0 = 0;
        /** @brief SA */
    constexpr std::uint32_t ETH_MACA3HR_SA_B_0x1 = 1;

    /** @brief Address Enable */
    using ETH_MACA3HR_AE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MAC Address 3 low register */
    using ETH_MACA3LR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x31C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MAC Address x [31:0] */
    using ETH_MACA3LR_ADDRLO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMC control register */
    using ETH_MMC_CONTROL = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x700, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Counters Reset */
    using ETH_MMC_CONTROL_CNTRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Counter Stop Rollover */
    using ETH_MMC_CONTROL_CNTSTOPRO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reset on Read */
    using ETH_MMC_CONTROL_RSTONRD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMC Counter Freeze */
    using ETH_MMC_CONTROL_CNTFREEZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Counters Preset */
    using ETH_MMC_CONTROL_CNTPRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Full-Half Preset */
    using ETH_MMC_CONTROL_CNTPRSTLVL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update MMC Counters for Dropped Broadcast Packets */
    using ETH_MMC_CONTROL_UCDBC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMC Rx interrupt register */
    using ETH_MMC_RX_INTERRUPT = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x704, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMC Receive CRC Error Packet Counter Interrupt Status */
    using ETH_MMC_RX_INTERRUPT_RXCRCERPIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMC Receive Alignment Error Packet Counter Interrupt Status */
    using ETH_MMC_RX_INTERRUPT_RXALGNERPIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMC Receive Unicast Good Packet Counter Interrupt Status */
    using ETH_MMC_RX_INTERRUPT_RXUCGPIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMC Receive LPI microsecond counter interrupt status */
    using ETH_MMC_RX_INTERRUPT_RXLPIUSCIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMC Receive LPI transition counter interrupt status */
    using ETH_MMC_RX_INTERRUPT_RXLPITRCIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMC Tx interrupt register */
    using ETH_MMC_TX_INTERRUPT = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x708, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMC Transmit Single Collision Good Packet Counter Interrupt Status */
    using ETH_MMC_TX_INTERRUPT_TXSCOLGPIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMC Transmit Multiple Collision Good Packet Counter Interrupt Status */
    using ETH_MMC_TX_INTERRUPT_TXMCOLGPIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMC Transmit Good Packet Counter Interrupt Status */
    using ETH_MMC_TX_INTERRUPT_TXGPKTIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMC Transmit LPI microsecond counter interrupt status */
    using ETH_MMC_TX_INTERRUPT_TXLPIUSCIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMC Transmit LPI transition counter interrupt status */
    using ETH_MMC_TX_INTERRUPT_TXLPITRCIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMC Rx interrupt mask register */
    using ETH_MMC_RX_INTERRUPT_MASK = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x70C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMC Receive CRC Error Packet Counter Interrupt Mask */
    using ETH_MMC_RX_INTERRUPT_MASK_RXCRCERPIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMC Receive Alignment Error Packet Counter Interrupt Mask */
    using ETH_MMC_RX_INTERRUPT_MASK_RXALGNERPIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMC Receive Unicast Good Packet Counter Interrupt Mask */
    using ETH_MMC_RX_INTERRUPT_MASK_RXUCGPIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMC Receive LPI microsecond counter interrupt Mask */
    using ETH_MMC_RX_INTERRUPT_MASK_RXLPIUSCIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMC Receive LPI transition counter interrupt Mask */
    using ETH_MMC_RX_INTERRUPT_MASK_RXLPITRCIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMC Tx interrupt mask register */
    using ETH_MMC_TX_INTERRUPT_MASK = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x710, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMC Transmit Single Collision Good Packet Counter Interrupt Mask */
    using ETH_MMC_TX_INTERRUPT_MASK_TXSCOLGPIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMC Transmit Multiple Collision Good Packet Counter Interrupt Mask */
    using ETH_MMC_TX_INTERRUPT_MASK_TXMCOLGPIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMC Transmit Good Packet Counter Interrupt Mask */
    using ETH_MMC_TX_INTERRUPT_MASK_TXGPKTIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMC Transmit LPI microsecond counter interrupt Mask */
    using ETH_MMC_TX_INTERRUPT_MASK_TXLPIUSCIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMC Transmit LPI transition counter interrupt Mask */
    using ETH_MMC_TX_INTERRUPT_MASK_TXLPITRCIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx single collision good packets register */
    using ETH_TX_SINGLE_COLLISION_GOOD_PACKETS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x74C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx Single Collision Good Packets */
    using ETH_TX_SINGLE_COLLISION_GOOD_PACKETS_TXSNGLCOLG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx multiple collision good packets register */
    using ETH_TX_MULTIPLE_COLLISION_GOOD_PACKETS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x750, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx Multiple Collision Good Packets */
    using ETH_TX_MULTIPLE_COLLISION_GOOD_PACKETS_TXMULTCOLG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx packet count good register */
    using ETH_TX_PACKET_COUNT_GOOD = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x768, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx Packet Count Good */
    using ETH_TX_PACKET_COUNT_GOOD_TXPKTG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx CRC error packets register */
    using ETH_RX_CRC_ERROR_PACKETS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x794, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx CRC Error Packets */
    using ETH_RX_CRC_ERROR_PACKETS_RXCRCERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx alignment error packets register */
    using ETH_RX_ALIGNMENT_ERROR_PACKETS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x798, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx Alignment Error Packets */
    using ETH_RX_ALIGNMENT_ERROR_PACKETS_RXALGNERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx unicast packets good register */
    using ETH_RX_UNICAST_PACKETS_GOOD = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7C4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx Unicast Packets Good */
    using ETH_RX_UNICAST_PACKETS_GOOD_RXUCASTG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx LPI microsecond timer register */
    using ETH_TX_LPI_USEC_CNTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7EC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx LPI Microseconds Counter */
    using ETH_TX_LPI_USEC_CNTR_TXLPIUSC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx LPI transition counter register */
    using ETH_TX_LPI_TRAN_CNTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7F0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx LPI Transition counter */
    using ETH_TX_LPI_TRAN_CNTR_TXLPITRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx LPI microsecond counter register */
    using ETH_RX_LPI_USEC_CNTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7F4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx LPI Microseconds Counter */
    using ETH_RX_LPI_USEC_CNTR_RXLPIUSC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx LPI transition counter register */
    using ETH_RX_LPI_TRAN_CNTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7F8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx LPI Transition counter */
    using ETH_RX_LPI_TRAN_CNTR_RXLPITRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMC FPE Tx interrupt status register */
    using ETH_MMC_FPE_TX_ISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMC Tx FPE Fragment Counter Interrupt status */
    using ETH_MMC_FPE_TX_ISR_FCIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMC Tx Hold Request Counter Interrupt Status */
    using ETH_MMC_FPE_TX_ISR_HRCIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMC FPE Tx interrupt mask register */
    using ETH_MMC_FPE_TX_IMR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8A4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMC Transmit Fragment Counter Interrupt Mask */
    using ETH_MMC_FPE_TX_IMR_FCIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMC Transmit Hold Request Counter Interrupt Mask */
    using ETH_MMC_FPE_TX_IMR_HRCIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMC FPE Tx fragment counter register */
    using ETH_MMC_FPE_TX_FCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8A8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx FPE Fragment counter */
    using ETH_MMC_FPE_TX_FCR_TXFFC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMC Tx hold request counter register */
    using ETH_MMC_TX_HRCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8AC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx Hold Request Counter */
    using ETH_MMC_TX_HRCR_TXHRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMC FPE Rx interrupt status register */
    using ETH_MMC_FPE_RX_ISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8C0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMC Rx Packet Assembly Error Counter Interrupt Status */
    using ETH_MMC_FPE_RX_ISR_PAECIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMC Rx Packet SMD Error Counter Interrupt Status */
    using ETH_MMC_FPE_RX_ISR_PSECIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMC Rx Packet Assembly OK Counter Interrupt Status */
    using ETH_MMC_FPE_RX_ISR_PAOCIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMC Rx FPE Fragment Counter Interrupt Status */
    using ETH_MMC_FPE_RX_ISR_FCIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMC FPE Rx interrupt mask register */
    using ETH_MMC_FPE_RX_IMR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8C4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMC Rx Packet Assembly Error Counter Interrupt Mask */
    using ETH_MMC_FPE_RX_IMR_PAECIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMC Rx Packet SMD Error Counter Interrupt Mask */
    using ETH_MMC_FPE_RX_IMR_PSECIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMC Rx Packet Assembly OK Counter Interrupt Mask */
    using ETH_MMC_FPE_RX_IMR_PAOCIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMC Rx FPE Fragment Counter Interrupt Mask */
    using ETH_MMC_FPE_RX_IMR_FCIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMC Rx packet assembly error register */
    using ETH_RX_PACKET_ASM_ERR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8C8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx Packet Assembly Error Counter */
    using ETH_RX_PACKET_ASM_ERR_PAEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMC Rx packet SMD error register */
    using ETH_RX_PACKET_SMD_ERR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8CC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx Packet SMD Error Counter */
    using ETH_RX_PACKET_SMD_ERR_PSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMC Rx packet assembly OK register */
    using ETH_RX_PACKET_ASM_OKR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8D0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx Packet Assembly OK Counter */
    using ETH_RX_PACKET_ASM_OKR_PAOC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMC Rx FPE fragments counter register */
    using ETH_RX_FPE_FRAG_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8D4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx FPE Fragment Counter */
    using ETH_RX_FPE_FRAG_CR_FFC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief L3 and L4 control 0 register */
    using ETH_MACL3L4C0R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x900, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer 3 Protocol Enable */
    using ETH_MACL3L4C0R_L3PEN0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer 3 IP SA Match Enable */
    using ETH_MACL3L4C0R_L3SAM0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer 3 IP SA Inverse Match Enable */
    using ETH_MACL3L4C0R_L3SAIM0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer 3 IP DA Match Enable */
    using ETH_MACL3L4C0R_L3DAM0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer 3 IP DA Inverse Match Enable */
    using ETH_MACL3L4C0R_L3DAIM0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer 3 IP SA higher bits match */
    using ETH_MACL3L4C0R_L3HSBM0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0_IPV4_PACKETS: No bits are masked. (value: 0)
     *          - B_0x1_IPV4_PACKETS: LSb[0] is masked (value: 1)
     */
        /** @brief No bits are masked. */
    constexpr std::uint32_t ETH_MACL3L4C0R_L3HSBM0_B_0x0_IPV4_PACKETS = 0;
        /** @brief LSb[0] is masked */
    constexpr std::uint32_t ETH_MACL3L4C0R_L3HSBM0_B_0x1_IPV4_PACKETS = 1;

    /** @brief Layer 3 IP DA higher bits match */
    using ETH_MACL3L4C0R_L3HDBM0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0_IPV4_PACKETS: No bits are masked. (value: 0)
     *          - B_0x1_IPV4_PACKETS: LSb[0] is masked (value: 1)
     */
        /** @brief No bits are masked. */
    constexpr std::uint32_t ETH_MACL3L4C0R_L3HDBM0_B_0x0_IPV4_PACKETS = 0;
        /** @brief LSb[0] is masked */
    constexpr std::uint32_t ETH_MACL3L4C0R_L3HDBM0_B_0x1_IPV4_PACKETS = 1;

    /** @brief Layer 4 Protocol Enable */
    using ETH_MACL3L4C0R_L4PEN0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer 4 Source Port Match Enable */
    using ETH_MACL3L4C0R_L4SPM0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer 4 Source Port Inverse Match Enable */
    using ETH_MACL3L4C0R_L4SPIM0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer 4 Destination Port Match Enable */
    using ETH_MACL3L4C0R_L4DPM0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer 4 Destination Port Inverse Match Enable */
    using ETH_MACL3L4C0R_L4DPIM0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA Channel Number */
    using ETH_MACL3L4C0R_DMCHN0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DMA channel 0 (value: 0)
     *          - B_0x1: DMA channel 1 (value: 1)
     */
        /** @brief DMA channel 0 */
    constexpr std::uint32_t ETH_MACL3L4C0R_DMCHN0_B_0x0 = 0;
        /** @brief DMA channel 1 */
    constexpr std::uint32_t ETH_MACL3L4C0R_DMCHN0_B_0x1 = 1;

    /** @brief DMA Channel Select Enable */
    using ETH_MACL3L4C0R_DMCHEN0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer4 Address filter 0 register */
    using ETH_MACL4A0R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x904, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer 4 Source Port Number Field */
    using ETH_MACL4A0R_L4SP0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer 4 Destination Port Number Field */
    using ETH_MACL4A0R_L4DP0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer3 Address 0 filter 0 register */
    using ETH_MACL3A00R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x910, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer 3 Address 0 Field */
    using ETH_MACL3A00R_L3A00 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer3 Address 1 filter 0 register */
    using ETH_MACL3A10R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x914, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer 3 Address 1 Field */
    using ETH_MACL3A10R_L3A10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer3 Address 2 filter 0 register */
    using ETH_MACL3A20R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x918, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer 3 Address 2 Field */
    using ETH_MACL3A20R_L3A20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer3 Address 3 filter 0 register */
    using ETH_MACL3A30R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x91C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer 3 Address 3 Field */
    using ETH_MACL3A30R_L3A30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief L3 and L4 control 1 register */
    using ETH_MACL3L4C1R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x930, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer 3 Protocol Enable */
    using ETH_MACL3L4C1R_L3PEN1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer 3 IP SA Match Enable */
    using ETH_MACL3L4C1R_L3SAM1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer 3 IP SA Inverse Match Enable */
    using ETH_MACL3L4C1R_L3SAIM1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer 3 IP DA Match Enable */
    using ETH_MACL3L4C1R_L3DAM1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer 3 IP DA Inverse Match Enable */
    using ETH_MACL3L4C1R_L3DAIM1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer 3 IP SA Higher Bits Match */
    using ETH_MACL3L4C1R_L3HSBM1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0_IPV4_PACKETS: No bits are masked. (value: 0)
     *          - B_0x1_IPV4_PACKETS: LSb[0] is masked (value: 1)
     */
        /** @brief No bits are masked. */
    constexpr std::uint32_t ETH_MACL3L4C1R_L3HSBM1_B_0x0_IPV4_PACKETS = 0;
        /** @brief LSb[0] is masked */
    constexpr std::uint32_t ETH_MACL3L4C1R_L3HSBM1_B_0x1_IPV4_PACKETS = 1;

    /** @brief Layer 3 IP DA higher bits match */
    using ETH_MACL3L4C1R_L3HDBM1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0_IPV4_PACKETS: No bits are masked. (value: 0)
     *          - B_0x1_IPV4_PACKETS: LSb[0] is masked (value: 1)
     */
        /** @brief No bits are masked. */
    constexpr std::uint32_t ETH_MACL3L4C1R_L3HDBM1_B_0x0_IPV4_PACKETS = 0;
        /** @brief LSb[0] is masked */
    constexpr std::uint32_t ETH_MACL3L4C1R_L3HDBM1_B_0x1_IPV4_PACKETS = 1;

    /** @brief Layer 4 Protocol Enable */
    using ETH_MACL3L4C1R_L4PEN1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer 4 Source Port Match Enable */
    using ETH_MACL3L4C1R_L4SPM1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer 4 Source Port Inverse Match Enable */
    using ETH_MACL3L4C1R_L4SPIM1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer 4 Destination Port Match Enable */
    using ETH_MACL3L4C1R_L4DPM1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer 4 Destination Port Inverse Match Enable */
    using ETH_MACL3L4C1R_L4DPIM1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA Channel Number */
    using ETH_MACL3L4C1R_DMCHN1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA Channel Select Enable */
    using ETH_MACL3L4C1R_DMCHEN1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer 4 address filter 1 register */
    using ETH_MACL4A1R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x934, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer 4 Source Port Number Field */
    using ETH_MACL4A1R_L4SP1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer 4 Destination Port Number Field */
    using ETH_MACL4A1R_L4DP1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer3 address 0 filter 1 Register */
    using ETH_MACL3A01R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x940, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer 3 Address 0 Field */
    using ETH_MACL3A01R_L3A01 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer3 address 1 filter 1 register */
    using ETH_MACL3A11R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x944, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer 3 Address 1 Field */
    using ETH_MACL3A11R_L3A11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer3 address 2 filter 1 Register */
    using ETH_MACL3A21R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x948, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer 3 Address 2 Field */
    using ETH_MACL3A21R_L3A21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer3 address 3 filter 1 register */
    using ETH_MACL3A31R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x94C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer 3 Address 3 Field */
    using ETH_MACL3A31R_L3A31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MAC Indirect Access Control register */
    using ETH_MAC_IACR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA70, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Operation Busy. */
    using ETH_MAC_IACR_OB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Command type */
    using ETH_MAC_IACR_COM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Indicates a read operation. (value: 1)
     *          - B_0x0: Indicates a write operation. (value: 0)
     */
        /** @brief Indicates a read operation. */
    constexpr std::uint32_t ETH_MAC_IACR_COM_B_0x1 = 1;
        /** @brief Indicates a write operation. */
    constexpr std::uint32_t ETH_MAC_IACR_COM_B_0x0 = 0;

    /** @brief Auto-increment */
    using ETH_MAC_IACR_AUTO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: AOFF is incremented by 1. The software should ensure not to cause a wrap condition. Byte-wise read/write is not supported when auto-increment is enabled. (value: 1)
     *          - B_0x0: AOFF is not automatically incremented. The software should program the correct address offset for each access. (value: 0)
     */
        /** @brief AOFF is incremented by 1. The software should ensure not to cause a wrap condition. Byte-wise read/write is not supported when auto-increment is enabled. */
    constexpr std::uint32_t ETH_MAC_IACR_AUTO_B_0x1 = 1;
        /** @brief AOFF is not automatically incremented. The software should program the correct address offset for each access. */
    constexpr std::uint32_t ETH_MAC_IACR_AUTO_B_0x0 = 0;

    /** @brief Address Offset */
    using ETH_MAC_IACR_AOFF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IndReg0 (Indirect register 0) (value: 0)
     *          - B_0x1: IndReg1 (Indirect register 1) (value: 1)
     *          - B_0x7: IndReg7 (Indirect register 7) (value: 7)
     */
        /** @brief IndReg0 (Indirect register 0) */
    constexpr std::uint32_t ETH_MAC_IACR_AOFF_B_0x0 = 0;
        /** @brief IndReg1 (Indirect register 1) */
    constexpr std::uint32_t ETH_MAC_IACR_AOFF_B_0x1 = 1;
        /** @brief IndReg7 (Indirect register 7) */
    constexpr std::uint32_t ETH_MAC_IACR_AOFF_B_0x7 = 7;

    /** @brief Mode Select */
    using ETH_MAC_IACR_MSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Typ_RXQ_ (Type-based RXQ mapping) (value: 0)
     */
        /** @brief Typ_RXQ_ (Type-based RXQ mapping) */
    constexpr std::uint32_t ETH_MAC_IACR_MSEL_B_0x0 = 0;

    /** @brief MAC type-based Rx Queue mapping register */
    using ETH_MAC_TMRQR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA74, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Type field Value */
    using ETH_MAC_TMRQR_TYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Type Match Rx Queue Number */
    using ETH_MAC_TMRQR_TMRQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Preemption or Express Packet */
    using ETH_MAC_TMRQR_PFEX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Express packet (value: 0)
     *          - B_0x1: Preemption packet (value: 1)
     */
        /** @brief Express packet */
    constexpr std::uint32_t ETH_MAC_TMRQR_PFEX_B_0x0 = 0;
        /** @brief Preemption packet */
    constexpr std::uint32_t ETH_MAC_TMRQR_PFEX_B_0x1 = 1;

    /** @brief Timestamp control Register */
    using ETH_MACTSCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB00, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable Timestamp */
    using ETH_MACTSCR_TSENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fine or Coarse Timestamp Update */
    using ETH_MACTSCR_TSCFUPDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Initialize Timestamp */
    using ETH_MACTSCR_TSINIT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update Timestamp */
    using ETH_MACTSCR_TSUPDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update Addend Register */
    using ETH_MACTSCR_TSADDREG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Presentation Time Generation Enable */
    using ETH_MACTSCR_PTGE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable Timestamp for All Packets */
    using ETH_MACTSCR_TSENALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timestamp Digital or Binary Rollover Control */
    using ETH_MACTSCR_TSCTRLSSR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable PTP Packet Processing for Version 2 Format */
    using ETH_MACTSCR_TSVER2ENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable Processing of PTP over Ethernet Packets */
    using ETH_MACTSCR_TSIPENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable Processing of PTP Packets Sent over IPv6-UDP */
    using ETH_MACTSCR_TSIPV6ENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable Processing of PTP Packets Sent over IPv4-UDP */
    using ETH_MACTSCR_TSIPV4ENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable Timestamp Snapshot for Event Messages */
    using ETH_MACTSCR_TSEVNTENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable Snapshot for Messages Relevant to Master */
    using ETH_MACTSCR_TSMSTRENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Select PTP packets for Taking Snapshots */
    using ETH_MACTSCR_SNAPTYPSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable MAC Address for PTP Packet Filtering */
    using ETH_MACTSCR_TSENMACADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief External System Time Input */
    using ETH_MACTSCR_ESTI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Timestamp Status Mode */
    using ETH_MACTSCR_TXTSSTSM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AV 802.1AS Mode Enable */
    using ETH_MACTSCR_AV8021ASMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Subsecond increment register */
    using ETH_MACSSIR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB04, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Subsecond Increment Value */
    using ETH_MACSSIR_SSINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief System time seconds register */
    using ETH_MACSTSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB08, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timestamp Second */
    using ETH_MACSTSR_TSS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief System time nanoseconds register */
    using ETH_MACSTNR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB0C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timestamp subseconds */
    using ETH_MACSTNR_TSSS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 31, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief System time seconds update register */
    using ETH_MACSTSUR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timestamp Seconds */
    using ETH_MACSTSUR_TSS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief System time nanoseconds update register */
    using ETH_MACSTNUR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timestamp subseconds */
    using ETH_MACSTNUR_TSSS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 31, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Add or Subtract Time */
    using ETH_MACSTNUR_ADDSUB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timestamp addend register */
    using ETH_MACTSAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timestamp Addend Register */
    using ETH_MACTSAR_TSAR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timestamp status register */
    using ETH_MACTSSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timestamp Seconds Overflow */
    using ETH_MACTSSR_TSSOVF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timestamp Target Time Reached */
    using ETH_MACTSSR_TSTARGT0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Auxiliary Timestamp Trigger Snapshot */
    using ETH_MACTSSR_AUXTSTRIG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timestamp Target Time Error */
    using ETH_MACTSSR_TSTRGTERR0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timestamp Target Time Reached */
    using ETH_MACTSSR_TSTARGT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timestamp Target Time Error */
    using ETH_MACTSSR_TSTRGTERR1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx Timestamp Status Interrupt Status */
    using ETH_MACTSSR_TXTSSIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Auxiliary Timestamp Snapshot Trigger Identifier */
    using ETH_MACTSSR_ATSSTN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Auxiliary Timestamp Snapshot Trigger Missed */
    using ETH_MACTSSR_ATSSTM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of Auxiliary Timestamp Snapshots */
    using ETH_MACTSSR_ATSNS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx timestamp status nanoseconds register */
    using ETH_MACTXTSSNR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Timestamp Status Low */
    using ETH_MACTXTSSNR_TXTSSLO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 31, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Timestamp Status Missed */
    using ETH_MACTXTSSNR_TXTSSMIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx timestamp status seconds register */
    using ETH_MACTXTSSSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Timestamp Status High */
    using ETH_MACTXTSSSR_TXTSSHI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Auxiliary control register */
    using ETH_MACACR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Auxiliary Snapshot FIFO Clear */
    using ETH_MACACR_ATSFC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Auxiliary Snapshot 0 Enable */
    using ETH_MACACR_ATSEN0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Auxiliary Snapshot 1 Enable */
    using ETH_MACACR_ATSEN1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Auxiliary Snapshot 2 Enable */
    using ETH_MACACR_ATSEN2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Auxiliary Snapshot 3 Enable */
    using ETH_MACACR_ATSEN3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Auxiliary timestamp nanoseconds register */
    using ETH_MACATSNR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Auxiliary Timestamp */
    using ETH_MACATSNR_AUXTSLO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 31, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Auxiliary timestamp seconds register */
    using ETH_MACATSSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB4C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Auxiliary Timestamp */
    using ETH_MACATSSR_AUXTSHI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timestamp Ingress asymmetric correction register */
    using ETH_MACTSIACR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief One-Step Timestamp Ingress Asymmetry Correction */
    using ETH_MACTSIACR_OSTIAC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timestamp Egress asymmetric correction register */
    using ETH_MACTSEACR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief One-Step Timestamp Egress Asymmetry Correction */
    using ETH_MACTSEACR_OSTEAC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timestamp Ingress correction nanosecond register */
    using ETH_MACTSICNR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB58, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timestamp Ingress Correction */
    using ETH_MACTSICNR_TSIC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timestamp Egress correction nanosecond register */
    using ETH_MACTSECNR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB5C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timestamp Egress Correction */
    using ETH_MACTSECNR_TSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timestamp Ingress Latency register */
    using ETH_MACTSILR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB68, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Ingress Timestamp Latency, in subnanoseconds */
    using ETH_MACTSILR_ITLSNS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Ingress Timestamp Latency, in nanoseconds */
    using ETH_MACTSILR_ITLNS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timestamp Egress Latency register */
    using ETH_MACTSELR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB6C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Egress Timestamp Latency, in subnanoseconds */
    using ETH_MACTSELR_ETLSNS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Egress Timestamp Latency, in nanoseconds */
    using ETH_MACTSELR_ETLNS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PPS control register */
    using ETH_MACPPSCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB70, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PPS Output Frequency Control */
    using ETH_MACPPSCR_PPSCTRL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: The binary rollover is 2 Hz, and the digital rollover is 1 Hz. (value: 1)
     *          - B_0x2: The binary rollover is 4 Hz, and the digital rollover is 2 Hz. (value: 2)
     *          - B_0x3: The binary rollover is 8 Hz, and the digital rollover is 4 Hz. (value: 3)
     *          - B_0x4: The binary rollover is 16 Hz, and the digital rollover is 8 Hz. (value: 4)
     *          - B_0xF: The binary rollover is 32.768 KHz and the digital rollover is 16.384 KHz. (value: 15)
     */
        /** @brief The binary rollover is 2 Hz, and the digital rollover is 1 Hz. */
    constexpr std::uint32_t ETH_MACPPSCR_PPSCTRL_B_0x1 = 1;
        /** @brief The binary rollover is 4 Hz, and the digital rollover is 2 Hz. */
    constexpr std::uint32_t ETH_MACPPSCR_PPSCTRL_B_0x2 = 2;
        /** @brief The binary rollover is 8 Hz, and the digital rollover is 4 Hz. */
    constexpr std::uint32_t ETH_MACPPSCR_PPSCTRL_B_0x3 = 3;
        /** @brief The binary rollover is 16 Hz, and the digital rollover is 8 Hz. */
    constexpr std::uint32_t ETH_MACPPSCR_PPSCTRL_B_0x4 = 4;
        /** @brief The binary rollover is 32.768 KHz and the digital rollover is 16.384 KHz. */
    constexpr std::uint32_t ETH_MACPPSCR_PPSCTRL_B_0xF = 15;

    /** @brief Flexible PPS Output Mode Enable */
    using ETH_MACPPSCR_PPSEN0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Target Time Register Mode for PPS Output */
    using ETH_MACPPSCR_TRGTMODSEL0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Target Time registers are programmed only for generating the interrupt event. (value: 0)
     *          - B_0x1: Enables MCGR Interrupt whose status bit is indicated by TSTARGT0 bit in Timestamp status register (ETH_MACTSSR) register (value: 1)
     *          - B_0x2: Target Time registers are programmed for generating the interrupt event and starting or stopping the PPS output signal generation. (value: 2)
     *          - B_0x3: Target Time registers are programmed only for starting or stopping the PPS output signal generation. No interrupt is asserted. (value: 3)
     */
        /** @brief Target Time registers are programmed only for generating the interrupt event. */
    constexpr std::uint32_t ETH_MACPPSCR_TRGTMODSEL0_B_0x0 = 0;
        /** @brief Enables MCGR Interrupt whose status bit is indicated by TSTARGT0 bit in Timestamp status register (ETH_MACTSSR) register */
    constexpr std::uint32_t ETH_MACPPSCR_TRGTMODSEL0_B_0x1 = 1;
        /** @brief Target Time registers are programmed for generating the interrupt event and starting or stopping the PPS output signal generation. */
    constexpr std::uint32_t ETH_MACPPSCR_TRGTMODSEL0_B_0x2 = 2;
        /** @brief Target Time registers are programmed only for starting or stopping the PPS output signal generation. No interrupt is asserted. */
    constexpr std::uint32_t ETH_MACPPSCR_TRGTMODSEL0_B_0x3 = 3;

    /** @brief MCGR Mode Enable for PPS0 Output */
    using ETH_MACPPSCR_MCGREN0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PPS mode (value: 0)
     *          - B_0x1: MCGR mode (value: 1)
     */
        /** @brief PPS mode */
    constexpr std::uint32_t ETH_MACPPSCR_MCGREN0_B_0x0 = 0;
        /** @brief MCGR mode */
    constexpr std::uint32_t ETH_MACPPSCR_MCGREN0_B_0x1 = 1;

    /** @brief Time Select */
    using ETH_MACPPSCR_TIMESEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PPS control register */
    using ETH_MACPPSCR_alternate = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB70, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Flexible PPS Output 0 (eth_ptp_pps_out) Control */
    using ETH_MACPPSCR_alternate_PPSCMD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No Command (value: 0)
     *          - B_0x1: START Single Pulse. (value: 1)
     *          - B_0x2: START Pulse Train. (value: 2)
     *          - B_0x3: Cancel START. (value: 3)
     *          - B_0x4: STOP Pulse Train at time. (value: 4)
     *          - B_0x5: STOP Pulse Train immediately. (value: 5)
     *          - B_0x6: Cancel STOP Pulse train. (value: 6)
     */
        /** @brief No Command */
    constexpr std::uint32_t ETH_MACPPSCR_alternate_PPSCMD_B_0x0 = 0;
        /** @brief START Single Pulse. */
    constexpr std::uint32_t ETH_MACPPSCR_alternate_PPSCMD_B_0x1 = 1;
        /** @brief START Pulse Train. */
    constexpr std::uint32_t ETH_MACPPSCR_alternate_PPSCMD_B_0x2 = 2;
        /** @brief Cancel START. */
    constexpr std::uint32_t ETH_MACPPSCR_alternate_PPSCMD_B_0x3 = 3;
        /** @brief STOP Pulse Train at time. */
    constexpr std::uint32_t ETH_MACPPSCR_alternate_PPSCMD_B_0x4 = 4;
        /** @brief STOP Pulse Train immediately. */
    constexpr std::uint32_t ETH_MACPPSCR_alternate_PPSCMD_B_0x5 = 5;
        /** @brief Cancel STOP Pulse train. */
    constexpr std::uint32_t ETH_MACPPSCR_alternate_PPSCMD_B_0x6 = 6;

    /** @brief Flexible PPS Output 0 Mode Enable */
    using ETH_MACPPSCR_alternate_PPSEN0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Target Time Register Mode for PPS Output 0 */
    using ETH_MACPPSCR_alternate_TRGTMODSEL0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Target Time registers are programmed only for generating the interrupt event. (value: 0)
     *          - B_0x1: Enables MCGR Interrupt whose status bit is indicated by TSTARGT0 bit in Timestamp status register (ETH_MACTSSR) register (value: 1)
     *          - B_0x2: Target Time registers are programmed for generating the interrupt event and starting or stopping the PPS output 0 signal generation. (value: 2)
     *          - B_0x3: Target Time registers are programmed only for starting or stopping the PPS output 0 signal generation. No interrupt is asserted. (value: 3)
     */
        /** @brief Target Time registers are programmed only for generating the interrupt event. */
    constexpr std::uint32_t ETH_MACPPSCR_alternate_TRGTMODSEL0_B_0x0 = 0;
        /** @brief Enables MCGR Interrupt whose status bit is indicated by TSTARGT0 bit in Timestamp status register (ETH_MACTSSR) register */
    constexpr std::uint32_t ETH_MACPPSCR_alternate_TRGTMODSEL0_B_0x1 = 1;
        /** @brief Target Time registers are programmed for generating the interrupt event and starting or stopping the PPS output 0 signal generation. */
    constexpr std::uint32_t ETH_MACPPSCR_alternate_TRGTMODSEL0_B_0x2 = 2;
        /** @brief Target Time registers are programmed only for starting or stopping the PPS output 0 signal generation. No interrupt is asserted. */
    constexpr std::uint32_t ETH_MACPPSCR_alternate_TRGTMODSEL0_B_0x3 = 3;

    /** @brief MCGR Mode Enable for PPS Output 0 */
    using ETH_MACPPSCR_alternate_MCGREN0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PPS mode (value: 0)
     *          - B_0x1: MCGR mode (value: 1)
     */
        /** @brief PPS mode */
    constexpr std::uint32_t ETH_MACPPSCR_alternate_MCGREN0_B_0x0 = 0;
        /** @brief MCGR mode */
    constexpr std::uint32_t ETH_MACPPSCR_alternate_MCGREN0_B_0x1 = 1;

    /** @brief Flexible PPS Output 1 Control */
    using ETH_MACPPSCR_alternate_PPSCMD1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Target Time Register Mode for PPS Output 1 */
    using ETH_MACPPSCR_alternate_TRGTMODSEL1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Target time registers are programmed only for generating the interrupt event. (value: 0)
     *          - B_0x1: Enabled MCGR Interrupt whose status bit is indicated by TSTARGT1 bit in Timestamp status register (ETH_MACTSSR) register (value: 1)
     *          - B_0x2: Target time registers are programmed for generating the interrupt event and starting or stopping the PPS output signal generation. (value: 2)
     *          - B_0x3: Target time registers are programmed only for starting or stopping the PPS output signal generation. No interrupt is asserted. (value: 3)
     */
        /** @brief Target time registers are programmed only for generating the interrupt event. */
    constexpr std::uint32_t ETH_MACPPSCR_alternate_TRGTMODSEL1_B_0x0 = 0;
        /** @brief Enabled MCGR Interrupt whose status bit is indicated by TSTARGT1 bit in Timestamp status register (ETH_MACTSSR) register */
    constexpr std::uint32_t ETH_MACPPSCR_alternate_TRGTMODSEL1_B_0x1 = 1;
        /** @brief Target time registers are programmed for generating the interrupt event and starting or stopping the PPS output signal generation. */
    constexpr std::uint32_t ETH_MACPPSCR_alternate_TRGTMODSEL1_B_0x2 = 2;
        /** @brief Target time registers are programmed only for starting or stopping the PPS output signal generation. No interrupt is asserted. */
    constexpr std::uint32_t ETH_MACPPSCR_alternate_TRGTMODSEL1_B_0x3 = 3;

    /** @brief MCGR Mode Enable for PPS Output 1 */
    using ETH_MACPPSCR_alternate_MCGREN1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PPS mode (value: 0)
     *          - B_0x1: MCGR mode (value: 1)
     */
        /** @brief PPS mode */
    constexpr std::uint32_t ETH_MACPPSCR_alternate_MCGREN1_B_0x0 = 0;
        /** @brief MCGR mode */
    constexpr std::uint32_t ETH_MACPPSCR_alternate_MCGREN1_B_0x1 = 1;

    /** @brief Time Select */
    using ETH_MACPPSCR_alternate_TIMESEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PPS 0 target time seconds register */
    using ETH_MACPPSTTS0R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB80, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PPS Target Time Seconds Register */
    using ETH_MACPPSTTS0R_TSTRH0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PPS 0 target time nanoseconds register */
    using ETH_MACPPSTTN0R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB84, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Target Time Low for PPS Register */
    using ETH_MACPPSTTN0R_TTSL0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 31, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PPS Target Time Register Busy */
    using ETH_MACPPSTTN0R_TRGTBUSY0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PPS 0 interval register */
    using ETH_MACPPSI0R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB88, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PPS Output Signal Interval */
    using ETH_MACPPSI0R_PPSINT0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PPS 0 width register */
    using ETH_MACPPSW0R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB8C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PPS Output Signal Width */
    using ETH_MACPPSW0R_PPSWIDTH0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PPS 1 target time seconds register */
    using ETH_MACPPSTTS1R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB90, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PPS Target Time Seconds Register */
    using ETH_MACPPSTTS1R_TSTRH0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PPS 1 target time nanoseconds register */
    using ETH_MACPPSTTN1R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB94, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Target Time Low for PPS Register */
    using ETH_MACPPSTTN1R_TTSL0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 31, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PPS Target Time Register Busy */
    using ETH_MACPPSTTN1R_TRGTBUSY0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PPS 1 interval register */
    using ETH_MACPPSI1R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB98, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PPS Output Signal Interval */
    using ETH_MACPPSI1R_PPSINT0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PPS 1 width register */
    using ETH_MACPPSW1R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB9C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PPS Output Signal Width */
    using ETH_MACPPSW1R_PPSWIDTH0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PTP Offload control register */
    using ETH_MACPOCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBC0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PTP Offload Enable */
    using ETH_MACPOCR_PTOEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Automatic PTP SYNC message Enable */
    using ETH_MACPOCR_ASYNCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Automatic PTP Pdelay_Req message Enable */
    using ETH_MACPOCR_APDREQEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Automatic PTP SYNC message Trigger */
    using ETH_MACPOCR_ASYNCTRIG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Automatic PTP Pdelay_Req message Trigger */
    using ETH_MACPOCR_APDREQTRIG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Disable PTO Delay Request/Response response generation */
    using ETH_MACPOCR_DRRDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Disable Peer Delay Response response generation */
    using ETH_MACPOCR_PDRDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Domain Number */
    using ETH_MACPOCR_DN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PTP Source Port Identity 0 Register */
    using ETH_MACSPI0R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBC4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Source Port Identity 0 */
    using ETH_MACSPI0R_SPI0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PTP Source port identity 1 register */
    using ETH_MACSPI1R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBC8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Source Port Identity 1 */
    using ETH_MACSPI1R_SPI1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PTP Source port identity 2 register */
    using ETH_MACSPI2R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBCC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Source Port Identity 2 */
    using ETH_MACSPI2R_SPI2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Log message interval register */
    using ETH_MACLMIR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBD0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Log Sync Interval */
    using ETH_MACLMIR_LSI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Delay_Req to SYNC Ratio */
    using ETH_MACLMIR_DRSYNCR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DelayReq generated for every received SYNC (value: 0)
     *          - B_0x1: DelayReq generated every alternate reception of SYNC (value: 1)
     */
        /** @brief DelayReq generated for every received SYNC */
    constexpr std::uint32_t ETH_MACLMIR_DRSYNCR_B_0x0 = 0;
        /** @brief DelayReq generated every alternate reception of SYNC */
    constexpr std::uint32_t ETH_MACLMIR_DRSYNCR_B_0x1 = 1;

    /** @brief Log Min Pdelay_Req Interval */
    using ETH_MACLMIR_LMPDRI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Operating mode Register */
    using ETH_MTLOMR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC00, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Drop Transmit Status */
    using ETH_MTLOMR_DTXSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive Arbitration Algorithm */
    using ETH_MTLOMR_RAA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Strict priority (SP). Queue 0 has the lowest priority and the last queue has the highest priority. (value: 0)
     *          - B_0x1: Weighted Strict priority (WSP) (value: 1)
     */
        /** @brief Strict priority (SP). Queue 0 has the lowest priority and the last queue has the highest priority. */
    constexpr std::uint32_t ETH_MTLOMR_RAA_B_0x0 = 0;
        /** @brief Weighted Strict priority (WSP) */
    constexpr std::uint32_t ETH_MTLOMR_RAA_B_0x1 = 1;

    /** @brief Tx Scheduling Algorithm */
    using ETH_MTLOMR_SCHALG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Weighted round robin (WRR) algorithm (value: 0)
     *          - B_0x3: Strict priority (SP) algorithm. (value: 3)
     */
        /** @brief Weighted round robin (WRR) algorithm */
    constexpr std::uint32_t ETH_MTLOMR_SCHALG_B_0x0 = 0;
        /** @brief Strict priority (SP) algorithm. */
    constexpr std::uint32_t ETH_MTLOMR_SCHALG_B_0x3 = 3;

    /** @brief Counters Preset */
    using ETH_MTLOMR_CNTPRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Counters Reset */
    using ETH_MTLOMR_CNTCLR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt status Register */
    using ETH_MTLISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Queue 0 interrupt status */
    using ETH_MTLISR_Q0IS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Queue 1 interrupt status */
    using ETH_MTLISR_Q1IS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EST (TAS- 802.1Qbv) Interrupt Status */
    using ETH_MTLISR_ESTIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx Queue and DMA Channel Mapping Register */
    using ETH_MTLRXQDMAMR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Queue 0 Mapped to DMA Channel */
    using ETH_MTLRXQDMAMR_Q0MDMACH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DMA Channel 0 (value: 0)
     *          - B_0x1: DMA Channel 1 (value: 1)
     */
        /** @brief DMA Channel 0 */
    constexpr std::uint32_t ETH_MTLRXQDMAMR_Q0MDMACH_B_0x0 = 0;
        /** @brief DMA Channel 1 */
    constexpr std::uint32_t ETH_MTLRXQDMAMR_Q0MDMACH_B_0x1 = 1;

    /** @brief Queue 0 Enabled for DA-based DMA Channel Selection */
    using ETH_MTLRXQDMAMR_Q0DDMACH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Queue 1 Mapped to DMA Channel */
    using ETH_MTLRXQDMAMR_Q1MDMACH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DMA Channel 0 (value: 0)
     *          - B_0x1: DMA Channel 1 (value: 1)
     */
        /** @brief DMA Channel 0 */
    constexpr std::uint32_t ETH_MTLRXQDMAMR_Q1MDMACH_B_0x0 = 0;
        /** @brief DMA Channel 1 */
    constexpr std::uint32_t ETH_MTLRXQDMAMR_Q1MDMACH_B_0x1 = 1;

    /** @brief Queue 1 Enabled for DA-based DMA Channel Selection */
    using ETH_MTLRXQDMAMR_Q1DDMACH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TBS control register */
    using ETH_MTLTBSCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EST offset mode */
    using ETH_MTLTBSCR_ESTM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: EST offset mode disabled (value: 0)
     *          - B_0x1: EST offset mode enabled (value: 1)
     */
        /** @brief EST offset mode disabled */
    constexpr std::uint32_t ETH_MTLTBSCR_ESTM_B_0x0 = 0;
        /** @brief EST offset mode enabled */
    constexpr std::uint32_t ETH_MTLTBSCR_ESTM_B_0x1 = 1;

    /** @brief Launch expiry offset valid */
    using ETH_MTLTBSCR_LEOV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LEOS field invalid (value: 0)
     *          - B_0x1: LEOS field valid (value: 1)
     */
        /** @brief LEOS field invalid */
    constexpr std::uint32_t ETH_MTLTBSCR_LEOV_B_0x0 = 0;
        /** @brief LEOS field valid */
    constexpr std::uint32_t ETH_MTLTBSCR_LEOV_B_0x1 = 1;

    /** @brief Launch Expiry GSN Offset */
    using ETH_MTLTBSCR_LEGOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Launch Expiry Offset */
    using ETH_MTLTBSCR_LEOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EST Control Register */
    using ETH_MTLESTCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable EST */
    using ETH_MTLESTCR_EEST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: EST disabled (value: 0)
     *          - B_0x1: EST enabled (value: 1)
     */
        /** @brief EST disabled */
    constexpr std::uint32_t ETH_MTLESTCR_EEST_B_0x0 = 0;
        /** @brief EST enabled */
    constexpr std::uint32_t ETH_MTLESTCR_EEST_B_0x1 = 1;

    /** @brief Switch to S/W owned list */
    using ETH_MTLESTCR_SSWL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Do not Drop frames during Frame Size Error */
    using ETH_MTLESTCR_DDBF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Drop (value: 0)
     *          - B_0x1: Don't drop (value: 1)
     */
        /** @brief Drop */
    constexpr std::uint32_t ETH_MTLESTCR_DDBF_B_0x0 = 0;
        /** @brief Don't drop */
    constexpr std::uint32_t ETH_MTLESTCR_DDBF_B_0x1 = 1;

    /** @brief Drop Frames causing Scheduling Error */
    using ETH_MTLESTCR_DFBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Don't drop (value: 0)
     *          - B_0x1: Drop (value: 1)
     */
        /** @brief Don't drop */
    constexpr std::uint32_t ETH_MTLESTCR_DFBS_B_0x0 = 0;
        /** @brief Drop */
    constexpr std::uint32_t ETH_MTLESTCR_DFBS_B_0x1 = 1;

    /** @brief Loop Count to report Scheduling Error */
    using ETH_MTLESTCR_LCSE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 4 iterations (value: 0)
     *          - B_0x1: 8 iterations (value: 1)
     *          - B_0x2: 16 iterations (value: 2)
     *          - B_0x3: 32 iterations (value: 3)
     */
        /** @brief 4 iterations */
    constexpr std::uint32_t ETH_MTLESTCR_LCSE_B_0x0 = 0;
        /** @brief 8 iterations */
    constexpr std::uint32_t ETH_MTLESTCR_LCSE_B_0x1 = 1;
        /** @brief 16 iterations */
    constexpr std::uint32_t ETH_MTLESTCR_LCSE_B_0x2 = 2;
        /** @brief 32 iterations */
    constexpr std::uint32_t ETH_MTLESTCR_LCSE_B_0x3 = 3;

    /** @brief Time Interval Left Shift Amount */
    using ETH_MTLESTCR_TILS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No left shift needed (equal to x1ns) (value: 0)
     *          - B_0x1: Left shift TI by 1 bit (equal to x2ns) (value: 1)
     *          - B_0x2: Left shift TI by 2 bits (equal to x4ns) (value: 2)
     *          - B_0x4: Left shift TI by 7 bits (equal to x128ns) (value: 4)
     */
        /** @brief No left shift needed (equal to x1ns) */
    constexpr std::uint32_t ETH_MTLESTCR_TILS_B_0x0 = 0;
        /** @brief Left shift TI by 1 bit (equal to x2ns) */
    constexpr std::uint32_t ETH_MTLESTCR_TILS_B_0x1 = 1;
        /** @brief Left shift TI by 2 bits (equal to x4ns) */
    constexpr std::uint32_t ETH_MTLESTCR_TILS_B_0x2 = 2;
        /** @brief Left shift TI by 7 bits (equal to x128ns) */
    constexpr std::uint32_t ETH_MTLESTCR_TILS_B_0x4 = 4;

    /** @brief Current Time Offset Value */
    using ETH_MTLESTCR_CTOV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PTP Time Offset Value */
    using ETH_MTLESTCR_PTOV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EST Extended Control Register */
    using ETH_MTLESTECR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Overhead Bytes Value */
    using ETH_MTLESTECR_OVHD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EST Status Register */
    using ETH_MTLESTSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC58, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Switch to S/W owned list Complete */
    using ETH_MTLESTSR_SWLC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Inactive (value: 0)
     *          - B_0x1: Active (value: 1)
     */
        /** @brief Inactive */
    constexpr std::uint32_t ETH_MTLESTSR_SWLC_B_0x0 = 0;
        /** @brief Active */
    constexpr std::uint32_t ETH_MTLESTSR_SWLC_B_0x1 = 1;

    /** @brief BTR Error */
    using ETH_MTLESTSR_BTRE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Inactive (value: 0)
     *          - B_0x1: Active (value: 1)
     */
        /** @brief Inactive */
    constexpr std::uint32_t ETH_MTLESTSR_BTRE_B_0x0 = 0;
        /** @brief Active */
    constexpr std::uint32_t ETH_MTLESTSR_BTRE_B_0x1 = 1;

    /** @brief Head-Of-Line Blocking due to Frame Size */
    using ETH_MTLESTSR_HLBF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Head-Of-Line Blocking due to Scheduling */
    using ETH_MTLESTSR_HLBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Inactive (value: 0)
     *          - B_0x1: Active (value: 1)
     */
        /** @brief Inactive */
    constexpr std::uint32_t ETH_MTLESTSR_HLBS_B_0x0 = 0;
        /** @brief Active */
    constexpr std::uint32_t ETH_MTLESTSR_HLBS_B_0x1 = 1;

    /** @brief Constant Gate Control Error */
    using ETH_MTLESTSR_CGCE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Inactive (value: 0)
     *          - B_0x1: Active (value: 1)
     */
        /** @brief Inactive */
    constexpr std::uint32_t ETH_MTLESTSR_CGCE_B_0x0 = 0;
        /** @brief Active */
    constexpr std::uint32_t ETH_MTLESTSR_CGCE_B_0x1 = 1;

    /** @brief S/W owned list */
    using ETH_MTLESTSR_SWOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Inactive (value: 0)
     *          - B_0x1: Active (value: 1)
     */
        /** @brief Inactive */
    constexpr std::uint32_t ETH_MTLESTSR_SWOL_B_0x0 = 0;
        /** @brief Active */
    constexpr std::uint32_t ETH_MTLESTSR_SWOL_B_0x1 = 1;

    /** @brief BTR Error Loop Count */
    using ETH_MTLESTSR_BTRL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current GCL slot number */
    using ETH_MTLESTSR_CGSN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EST Schedule Error Register */
    using ETH_MTLESTSCHER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Schedule Error Queue Number */
    using ETH_MTLESTSCHER_SEQN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EST Frame size Error Register */
    using ETH_MTLESTFSER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC64, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame Size Error Queue Number */
    using ETH_MTLESTFSER_FEQN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EST Frame size Capture Register */
    using ETH_MTLESTFSCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC68, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame Size of HLBF */
    using ETH_MTLESTFSCR_HBFS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 15, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Queue Number of HLBF */
    using ETH_MTLESTFSCR_HBFQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EST Interrupt Enable Register */
    using ETH_MTLESTIER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC70, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Enable for Switch List */
    using ETH_MTLESTIER_IECC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Enable for BTR Error */
    using ETH_MTLESTIER_IEBE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Enable for HLBF */
    using ETH_MTLESTIER_IEHF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Enable for HLBS */
    using ETH_MTLESTIER_IEHS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Enable for CGCE */
    using ETH_MTLESTIER_CGCE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EST Gate Control List Register */
    using ETH_MTLESTGCLCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC80, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Start Read/Write Operation */
    using ETH_MTLESTGCLCR_SRWO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Indicates the start/progress of a Read/Write operation (value: 1)
     */
        /** @brief Indicates the start/progress of a Read/Write operation */
    constexpr std::uint32_t ETH_MTLESTGCLCR_SRWO_B_0x1 = 1;

    /** @brief Read 1, Write 0 */
    using ETH_MTLESTGCLCR_R1W0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Read operation (value: 1)
     *          - B_0x0: Write operation. (value: 0)
     */
        /** @brief Read operation */
    constexpr std::uint32_t ETH_MTLESTGCLCR_R1W0_B_0x1 = 1;
        /** @brief Write operation. */
    constexpr std::uint32_t ETH_MTLESTGCLCR_R1W0_B_0x0 = 0;

    /** @brief Gate Control Related Registers */
    using ETH_MTLESTGCLCR_GCRR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Debug Mode */
    using ETH_MTLESTGCLCR_DBGM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Debug Mode Bank Select */
    using ETH_MTLESTGCLCR_DBGB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bank 0 (value: 0)
     *          - B_0x1: Bank 1 (value: 1)
     */
        /** @brief Bank 0 */
    constexpr std::uint32_t ETH_MTLESTGCLCR_DBGB_B_0x0 = 0;
        /** @brief Bank 1 */
    constexpr std::uint32_t ETH_MTLESTGCLCR_DBGB_B_0x1 = 1;

    /** @brief Gate Control List Address: */
    using ETH_MTLESTGCLCR_ADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0_GCRR__EQUAL_1: BTR Low (31:0) (value: 0)
     *          - B_0x1_GCRR__EQUAL_1: BTR High (63:31) (value: 1)
     *          - B_0x2_GCRR__EQUAL_1: CTR Low (31:0) (value: 2)
     *          - B_0x3_GCRR__EQUAL_1: CTR High (39:32) (value: 3)
     *          - B_0x4_GCRR__EQUAL_1: TER (30:0) (value: 4)
     *          - B_0x5_GCRR__EQUAL_1: LLR (6:0) (value: 5)
     */
        /** @brief BTR Low (31:0) */
    constexpr std::uint32_t ETH_MTLESTGCLCR_ADDR_B_0x0_GCRR__EQUAL_1 = 0;
        /** @brief BTR High (63:31) */
    constexpr std::uint32_t ETH_MTLESTGCLCR_ADDR_B_0x1_GCRR__EQUAL_1 = 1;
        /** @brief CTR Low (31:0) */
    constexpr std::uint32_t ETH_MTLESTGCLCR_ADDR_B_0x2_GCRR__EQUAL_1 = 2;
        /** @brief CTR High (39:32) */
    constexpr std::uint32_t ETH_MTLESTGCLCR_ADDR_B_0x3_GCRR__EQUAL_1 = 3;
        /** @brief TER (30:0) */
    constexpr std::uint32_t ETH_MTLESTGCLCR_ADDR_B_0x4_GCRR__EQUAL_1 = 4;
        /** @brief LLR (6:0) */
    constexpr std::uint32_t ETH_MTLESTGCLCR_ADDR_B_0x5_GCRR__EQUAL_1 = 5;

    /** @brief EST Gate Control List Data Register */
    using ETH_MTLESTGCLDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC84, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Gate Control Data */
    using ETH_MTLESTGCLDR_GCD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FPE Frame Preemption Control Status Register */
    using ETH_MTLFPECSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC90, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Additional Fragment Size */
    using ETH_MTLFPECSR_AFSZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Preemption Classification */
    using ETH_MTLFPECSR_PEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hold/Release Status */
    using ETH_MTLFPECSR_HRS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Indicates a Set-and-Hold-MAC operation was last executed and the pMAC is in Hold State. (value: 1)
     *          - B_0x0: Indicates a Set-and-Release-MAC operation was last executed and the pMAC is in Release State. (value: 0)
     */
        /** @brief Indicates a Set-and-Hold-MAC operation was last executed and the pMAC is in Hold State. */
    constexpr std::uint32_t ETH_MTLFPECSR_HRS_B_0x1 = 1;
        /** @brief Indicates a Set-and-Release-MAC operation was last executed and the pMAC is in Release State. */
    constexpr std::uint32_t ETH_MTLFPECSR_HRS_B_0x0 = 0;

    /** @brief FPE Frame Preemption Advance Register */
    using ETH_MTLFPEAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC94, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hold Advance */
    using ETH_MTLFPEAR_HADV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Release Advance */
    using ETH_MTLFPEAR_RADV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief T0 queue 0 operating mode Register */
    using ETH_MTLTXQ0OMR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD00, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Flush Transmit Queue */
    using ETH_MTLTXQ0OMR_FTQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Store and Forward */
    using ETH_MTLTXQ0OMR_TSF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Queue Enable */
    using ETH_MTLTXQ0OMR_TXQEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Not enabled (value: 0)
     *          - B_0x1: Enable in AV mode (value: 1)
     *          - B_0x2: Enabled (value: 2)
     */
        /** @brief Not enabled */
    constexpr std::uint32_t ETH_MTLTXQ0OMR_TXQEN_B_0x0 = 0;
        /** @brief Enable in AV mode */
    constexpr std::uint32_t ETH_MTLTXQ0OMR_TXQEN_B_0x1 = 1;
        /** @brief Enabled */
    constexpr std::uint32_t ETH_MTLTXQ0OMR_TXQEN_B_0x2 = 2;

    /** @brief Transmit Threshold Control */
    using ETH_MTLTXQ0OMR_TTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 32 (value: 0)
     *          - B_0x1: 64 (value: 1)
     *          - B_0x2: 96 (value: 2)
     *          - B_0x3: 128 (value: 3)
     *          - B_0x4: 192 (value: 4)
     *          - B_0x5: 256 (value: 5)
     *          - B_0x6: 384 (value: 6)
     *          - B_0x7: 512 (value: 7)
     */
        /** @brief 32 */
    constexpr std::uint32_t ETH_MTLTXQ0OMR_TTC_B_0x0 = 0;
        /** @brief 64 */
    constexpr std::uint32_t ETH_MTLTXQ0OMR_TTC_B_0x1 = 1;
        /** @brief 96 */
    constexpr std::uint32_t ETH_MTLTXQ0OMR_TTC_B_0x2 = 2;
        /** @brief 128 */
    constexpr std::uint32_t ETH_MTLTXQ0OMR_TTC_B_0x3 = 3;
        /** @brief 192 */
    constexpr std::uint32_t ETH_MTLTXQ0OMR_TTC_B_0x4 = 4;
        /** @brief 256 */
    constexpr std::uint32_t ETH_MTLTXQ0OMR_TTC_B_0x5 = 5;
        /** @brief 384 */
    constexpr std::uint32_t ETH_MTLTXQ0OMR_TTC_B_0x6 = 6;
        /** @brief 512 */
    constexpr std::uint32_t ETH_MTLTXQ0OMR_TTC_B_0x7 = 7;

    /** @brief Transmit queue size */
    using ETH_MTLTXQ0OMR_TQS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief T0 queue 0 underflow register */
    using ETH_MTLTXQ0UR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD04, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Underflow Packet Counter */
    using ETH_MTLTXQ0UR_UFFRMCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Overflow Bit for Underflow Packet Counter */
    using ETH_MTLTXQ0UR_UFCNTOVF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief T0 queue 0 debug register */
    using ETH_MTLTXQ0DR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD08, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Queue in Pause */
    using ETH_MTLTXQ0DR_TXQPAUSED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MTL Tx Queue Read Controller Status */
    using ETH_MTLTXQ0DR_TRCSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Idle state (value: 0)
     *          - B_0x1: Read state (transferring data to the MAC transmitter) (value: 1)
     *          - B_0x2: Waiting for pending Tx Status from the MAC transmitter (value: 2)
     *          - B_0x3: Flushing the Tx queue because of the Packet Abort request from the MAC (value: 3)
     */
        /** @brief Idle state */
    constexpr std::uint32_t ETH_MTLTXQ0DR_TRCSTS_B_0x0 = 0;
        /** @brief Read state (transferring data to the MAC transmitter) */
    constexpr std::uint32_t ETH_MTLTXQ0DR_TRCSTS_B_0x1 = 1;
        /** @brief Waiting for pending Tx Status from the MAC transmitter */
    constexpr std::uint32_t ETH_MTLTXQ0DR_TRCSTS_B_0x2 = 2;
        /** @brief Flushing the Tx queue because of the Packet Abort request from the MAC */
    constexpr std::uint32_t ETH_MTLTXQ0DR_TRCSTS_B_0x3 = 3;

    /** @brief MTL Tx Queue Write Controller Status */
    using ETH_MTLTXQ0DR_TWCSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MTL Tx Queue Not Empty Status */
    using ETH_MTLTXQ0DR_TXQSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MTL Tx Status FIFO Full Status */
    using ETH_MTLTXQ0DR_TXSTSFSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of Packets in the Transmit Queue */
    using ETH_MTLTXQ0DR_PTXQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of Status Words in Tx Status FIFO of Queue */
    using ETH_MTLTXQ0DR_STXSTSF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief T0 queue 0 ETS status Register */
    using ETH_MTLTXQ0ESR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Average Bits per Slot */
    using ETH_MTLTXQ0ESR_ABS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx queue 0 quantum weight register */
    using ETH_MTLTXQ0QWR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Weights */
    using ETH_MTLTXQ0QWR_ISCQW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Queue 0 interrupt control status Register */
    using ETH_MTLQ0ICSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Queue Underflow Interrupt Status */
    using ETH_MTLQ0ICSR_TXUNFIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Average Bits Per Slot Interrupt Status */
    using ETH_MTLQ0ICSR_ABPSIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Queue Underflow Interrupt Enable */
    using ETH_MTLQ0ICSR_TXUIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Average Bits Per Slot Interrupt Enable */
    using ETH_MTLQ0ICSR_ABPSIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive Queue Overflow Interrupt Status */
    using ETH_MTLQ0ICSR_RXOVFIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive Queue Overflow Interrupt Enable */
    using ETH_MTLQ0ICSR_RXOIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief R0 queue 0 operating mode register */
    using ETH_MTLRXQ0OMR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive Queue Threshold Control */
    using ETH_MTLRXQ0OMR_RTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 64 (value: 0)
     *          - B_0x1: 32 (value: 1)
     *          - B_0x2: 96 (value: 2)
     *          - B_0x3: 128 (value: 3)
     */
        /** @brief 64 */
    constexpr std::uint32_t ETH_MTLRXQ0OMR_RTC_B_0x0 = 0;
        /** @brief 32 */
    constexpr std::uint32_t ETH_MTLRXQ0OMR_RTC_B_0x1 = 1;
        /** @brief 96 */
    constexpr std::uint32_t ETH_MTLRXQ0OMR_RTC_B_0x2 = 2;
        /** @brief 128 */
    constexpr std::uint32_t ETH_MTLRXQ0OMR_RTC_B_0x3 = 3;

    /** @brief Forward Undersized Good Packets */
    using ETH_MTLRXQ0OMR_FUP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Forward Error Packets */
    using ETH_MTLRXQ0OMR_FEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive Queue Store and Forward */
    using ETH_MTLRXQ0OMR_RSF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Disable Dropping of TCP/IP Checksum Error Packets */
    using ETH_MTLRXQ0OMR_DIS_TCP_EF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable Hardware Flow Control */
    using ETH_MTLRXQ0OMR_EHFC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Threshold for Activating Flow Control (in Half-duplex and Full-duplex) */
    using ETH_MTLRXQ0OMR_RFA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Threshold for Deactivating Flow Control (in Half-duplex and Full-duplex modes) */
    using ETH_MTLRXQ0OMR_RFD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Full minus 1 Kbyte (value: 0)
     *          - B_0x1: Full minus 1.5 Kbyte (value: 1)
     */
        /** @brief Full minus 1 Kbyte */
    constexpr std::uint32_t ETH_MTLRXQ0OMR_RFD_B_0x0 = 0;
        /** @brief Full minus 1.5 Kbyte */
    constexpr std::uint32_t ETH_MTLRXQ0OMR_RFD_B_0x1 = 1;

    /** @brief Receive Queue Size */
    using ETH_MTLRXQ0OMR_RQS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief R0 queue 0 missed packet and overflow counter register */
    using ETH_MTLRXQ0MPOCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Overflow Packet Counter */
    using ETH_MTLRXQ0MPOCR_OVFPKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Overflow Counter Overflow Bit */
    using ETH_MTLRXQ0MPOCR_OVFCNTOVF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Missed Packet Counter */
    using ETH_MTLRXQ0MPOCR_MISPKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Missed Packet Counter Overflow Bit */
    using ETH_MTLRXQ0MPOCR_MISCNTOVF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief R0 queue 0 debug register */
    using ETH_MTLRXQ0DR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MTL Rx Queue Write Controller Active Status */
    using ETH_MTLRXQ0DR_RWCSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MTL Rx Queue Read Controller State */
    using ETH_MTLRXQ0DR_RRCSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Idle state (value: 0)
     *          - B_0x1: Reading packet data (value: 1)
     *          - B_0x2: Reading packet status (or timestamp) (value: 2)
     *          - B_0x3: Flushing the packet data and status (value: 3)
     */
        /** @brief Idle state */
    constexpr std::uint32_t ETH_MTLRXQ0DR_RRCSTS_B_0x0 = 0;
        /** @brief Reading packet data */
    constexpr std::uint32_t ETH_MTLRXQ0DR_RRCSTS_B_0x1 = 1;
        /** @brief Reading packet status (or timestamp) */
    constexpr std::uint32_t ETH_MTLRXQ0DR_RRCSTS_B_0x2 = 2;
        /** @brief Flushing the packet data and status */
    constexpr std::uint32_t ETH_MTLRXQ0DR_RRCSTS_B_0x3 = 3;

    /** @brief MTL Rx Queue Fill-Level Status */
    using ETH_MTLRXQ0DR_RXQSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rx queue empty (value: 0)
     *          - B_0x1: Rx queue fill-level below flow-control deactivate threshold (value: 1)
     *          - B_0x2: Rx queue fill-level above flow-control activate threshold (value: 2)
     *          - B_0x3: Rx queue full (value: 3)
     */
        /** @brief Rx queue empty */
    constexpr std::uint32_t ETH_MTLRXQ0DR_RXQSTS_B_0x0 = 0;
        /** @brief Rx queue fill-level below flow-control deactivate threshold */
    constexpr std::uint32_t ETH_MTLRXQ0DR_RXQSTS_B_0x1 = 1;
        /** @brief Rx queue fill-level above flow-control activate threshold */
    constexpr std::uint32_t ETH_MTLRXQ0DR_RXQSTS_B_0x2 = 2;
        /** @brief Rx queue full */
    constexpr std::uint32_t ETH_MTLRXQ0DR_RXQSTS_B_0x3 = 3;

    /** @brief Number of Packets in Receive Queue */
    using ETH_MTLRXQ0DR_PRXQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief R0 queue 0 control register */
    using ETH_MTLRXQ0CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive Queue Weight */
    using ETH_MTLRXQ0CR_RXQ_WEGT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive Queue Packet Arbitration */
    using ETH_MTLRXQ0CR_RXQ_FRM_ARBIT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief T1 queue 1 operating mode Register */
    using ETH_MTLTXQ1OMR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Flush Transmit Queue */
    using ETH_MTLTXQ1OMR_FTQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Store and Forward */
    using ETH_MTLTXQ1OMR_TSF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Queue Enable */
    using ETH_MTLTXQ1OMR_TXQEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Not enabled (value: 0)
     *          - B_0x1: Enable in AV mode (value: 1)
     *          - B_0x2: Enabled (value: 2)
     */
        /** @brief Not enabled */
    constexpr std::uint32_t ETH_MTLTXQ1OMR_TXQEN_B_0x0 = 0;
        /** @brief Enable in AV mode */
    constexpr std::uint32_t ETH_MTLTXQ1OMR_TXQEN_B_0x1 = 1;
        /** @brief Enabled */
    constexpr std::uint32_t ETH_MTLTXQ1OMR_TXQEN_B_0x2 = 2;

    /** @brief Transmit Threshold Control */
    using ETH_MTLTXQ1OMR_TTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 32 (value: 0)
     *          - B_0x1: 64 (value: 1)
     *          - B_0x2: 96 (value: 2)
     *          - B_0x3: 128 (value: 3)
     *          - B_0x4: 192 (value: 4)
     *          - B_0x5: 256 (value: 5)
     *          - B_0x6: 384 (value: 6)
     *          - B_0x7: 512 (value: 7)
     */
        /** @brief 32 */
    constexpr std::uint32_t ETH_MTLTXQ1OMR_TTC_B_0x0 = 0;
        /** @brief 64 */
    constexpr std::uint32_t ETH_MTLTXQ1OMR_TTC_B_0x1 = 1;
        /** @brief 96 */
    constexpr std::uint32_t ETH_MTLTXQ1OMR_TTC_B_0x2 = 2;
        /** @brief 128 */
    constexpr std::uint32_t ETH_MTLTXQ1OMR_TTC_B_0x3 = 3;
        /** @brief 192 */
    constexpr std::uint32_t ETH_MTLTXQ1OMR_TTC_B_0x4 = 4;
        /** @brief 256 */
    constexpr std::uint32_t ETH_MTLTXQ1OMR_TTC_B_0x5 = 5;
        /** @brief 384 */
    constexpr std::uint32_t ETH_MTLTXQ1OMR_TTC_B_0x6 = 6;
        /** @brief 512 */
    constexpr std::uint32_t ETH_MTLTXQ1OMR_TTC_B_0x7 = 7;

    /** @brief Transmit queue size */
    using ETH_MTLTXQ1OMR_TQS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief T1 queue 1 underflow register */
    using ETH_MTLTXQ1UR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Underflow Packet Counter */
    using ETH_MTLTXQ1UR_UFFRMCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Overflow Bit for Underflow Packet Counter */
    using ETH_MTLTXQ1UR_UFCNTOVF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief T1 queue 1 debug register */
    using ETH_MTLTXQ1DR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Queue in Pause */
    using ETH_MTLTXQ1DR_TXQPAUSED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MTL Tx Queue Read Controller Status */
    using ETH_MTLTXQ1DR_TRCSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Idle state (value: 0)
     *          - B_0x1: Read state (transferring data to the MAC transmitter) (value: 1)
     *          - B_0x2: Waiting for pending Tx Status from the MAC transmitter (value: 2)
     *          - B_0x3: Flushing the Tx queue because of the Packet Abort request from the MAC (value: 3)
     */
        /** @brief Idle state */
    constexpr std::uint32_t ETH_MTLTXQ1DR_TRCSTS_B_0x0 = 0;
        /** @brief Read state (transferring data to the MAC transmitter) */
    constexpr std::uint32_t ETH_MTLTXQ1DR_TRCSTS_B_0x1 = 1;
        /** @brief Waiting for pending Tx Status from the MAC transmitter */
    constexpr std::uint32_t ETH_MTLTXQ1DR_TRCSTS_B_0x2 = 2;
        /** @brief Flushing the Tx queue because of the Packet Abort request from the MAC */
    constexpr std::uint32_t ETH_MTLTXQ1DR_TRCSTS_B_0x3 = 3;

    /** @brief MTL Tx Queue Write Controller Status */
    using ETH_MTLTXQ1DR_TWCSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MTL Tx Queue Not Empty Status */
    using ETH_MTLTXQ1DR_TXQSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MTL Tx Status FIFO Full Status */
    using ETH_MTLTXQ1DR_TXSTSFSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of Packets in the Transmit Queue */
    using ETH_MTLTXQ1DR_PTXQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of Status Words in Tx Status FIFO of Queue */
    using ETH_MTLTXQ1DR_STXSTSF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx queue 1 ETS control Register */
    using ETH_MTLTXQ1ECR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AV Algorithm */
    using ETH_MTLTXQ1ECR_AVALG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Credit Control */
    using ETH_MTLTXQ1ECR_CC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Slot Count */
    using ETH_MTLTXQ1ECR_SLC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1 Slot (value: 0)
     *          - B_0x1: 2 Slots (value: 1)
     *          - B_0x2: 4 Slots (value: 2)
     *          - B_0x3: 8 Slots (value: 3)
     *          - B_0x4: 16 Slots (value: 4)
     */
        /** @brief 1 Slot */
    constexpr std::uint32_t ETH_MTLTXQ1ECR_SLC_B_0x0 = 0;
        /** @brief 2 Slots */
    constexpr std::uint32_t ETH_MTLTXQ1ECR_SLC_B_0x1 = 1;
        /** @brief 4 Slots */
    constexpr std::uint32_t ETH_MTLTXQ1ECR_SLC_B_0x2 = 2;
        /** @brief 8 Slots */
    constexpr std::uint32_t ETH_MTLTXQ1ECR_SLC_B_0x3 = 3;
        /** @brief 16 Slots */
    constexpr std::uint32_t ETH_MTLTXQ1ECR_SLC_B_0x4 = 4;

    /** @brief T1 queue 1 ETS status Register */
    using ETH_MTLTXQ1ESR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Average Bits per Slot */
    using ETH_MTLTXQ1ESR_ABS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx queue 1 quantum weight register */
    using ETH_MTLTXQ1QWR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD58, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IdleSlopeCredit or Weights */
    using ETH_MTLTXQ1QWR_ISCQW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx queue 1 send slope credit Register */
    using ETH_MTLTXQ1SSCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD5C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief sendSlopeCredit Value */
    using ETH_MTLTXQ1SSCR_SSC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx Queue 1 hiCredit register */
    using ETH_MTLTXQ1HCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief hiCredit Value */
    using ETH_MTLTXQ1HCR_HC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 29, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx queue 1 loCredit register */
    using ETH_MTLTXQ1LCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD64, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief loCredit Value */
    using ETH_MTLTXQ1LCR_LC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 29, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Queue 1 interrupt control status Register */
    using ETH_MTLQ1ICSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD6C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Queue Underflow Interrupt Status */
    using ETH_MTLQ1ICSR_TXUNFIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Average Bits Per Slot Interrupt Status */
    using ETH_MTLQ1ICSR_ABPSIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Queue Underflow Interrupt Enable */
    using ETH_MTLQ1ICSR_TXUIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Average Bits Per Slot Interrupt Enable */
    using ETH_MTLQ1ICSR_ABPSIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive Queue Overflow Interrupt Status */
    using ETH_MTLQ1ICSR_RXOVFIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive Queue Overflow Interrupt Enable */
    using ETH_MTLQ1ICSR_RXOIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief R1 queue 1 operating mode register */
    using ETH_MTLRXQ1OMR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD70, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive Queue Threshold Control */
    using ETH_MTLRXQ1OMR_RTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 64 (value: 0)
     *          - B_0x1: 32 (value: 1)
     *          - B_0x2: 96 (value: 2)
     *          - B_0x3: 128 (value: 3)
     */
        /** @brief 64 */
    constexpr std::uint32_t ETH_MTLRXQ1OMR_RTC_B_0x0 = 0;
        /** @brief 32 */
    constexpr std::uint32_t ETH_MTLRXQ1OMR_RTC_B_0x1 = 1;
        /** @brief 96 */
    constexpr std::uint32_t ETH_MTLRXQ1OMR_RTC_B_0x2 = 2;
        /** @brief 128 */
    constexpr std::uint32_t ETH_MTLRXQ1OMR_RTC_B_0x3 = 3;

    /** @brief Forward Undersized Good Packets */
    using ETH_MTLRXQ1OMR_FUP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Forward Error Packets */
    using ETH_MTLRXQ1OMR_FEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive Queue Store and Forward */
    using ETH_MTLRXQ1OMR_RSF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Disable Dropping of TCP/IP Checksum Error Packets */
    using ETH_MTLRXQ1OMR_DIS_TCP_EF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable Hardware Flow Control */
    using ETH_MTLRXQ1OMR_EHFC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Threshold for Activating Flow Control (in Half-duplex and Full-duplex) */
    using ETH_MTLRXQ1OMR_RFA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Threshold for Deactivating Flow Control (in Half-duplex and Full-duplex modes) */
    using ETH_MTLRXQ1OMR_RFD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Full minus 1 Kbyte (value: 0)
     *          - B_0x1: Full minus 1.5 Kbyte (value: 1)
     */
        /** @brief Full minus 1 Kbyte */
    constexpr std::uint32_t ETH_MTLRXQ1OMR_RFD_B_0x0 = 0;
        /** @brief Full minus 1.5 Kbyte */
    constexpr std::uint32_t ETH_MTLRXQ1OMR_RFD_B_0x1 = 1;

    /** @brief Receive Queue Size */
    using ETH_MTLRXQ1OMR_RQS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief R1 queue 1 missed packet and overflow counter register */
    using ETH_MTLRXQ1MPOCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD74, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Overflow Packet Counter */
    using ETH_MTLRXQ1MPOCR_OVFPKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Overflow Counter Overflow Bit */
    using ETH_MTLRXQ1MPOCR_OVFCNTOVF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Missed Packet Counter */
    using ETH_MTLRXQ1MPOCR_MISPKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Missed Packet Counter Overflow Bit */
    using ETH_MTLRXQ1MPOCR_MISCNTOVF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief R1 queue 1 debug register */
    using ETH_MTLRXQ1DR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD78, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MTL Rx Queue Write Controller Active Status */
    using ETH_MTLRXQ1DR_RWCSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MTL Rx Queue Read Controller State */
    using ETH_MTLRXQ1DR_RRCSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Idle state (value: 0)
     *          - B_0x1: Reading packet data (value: 1)
     *          - B_0x2: Reading packet status (or timestamp) (value: 2)
     *          - B_0x3: Flushing the packet data and status (value: 3)
     */
        /** @brief Idle state */
    constexpr std::uint32_t ETH_MTLRXQ1DR_RRCSTS_B_0x0 = 0;
        /** @brief Reading packet data */
    constexpr std::uint32_t ETH_MTLRXQ1DR_RRCSTS_B_0x1 = 1;
        /** @brief Reading packet status (or timestamp) */
    constexpr std::uint32_t ETH_MTLRXQ1DR_RRCSTS_B_0x2 = 2;
        /** @brief Flushing the packet data and status */
    constexpr std::uint32_t ETH_MTLRXQ1DR_RRCSTS_B_0x3 = 3;

    /** @brief MTL Rx Queue Fill-Level Status */
    using ETH_MTLRXQ1DR_RXQSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rx queue empty (value: 0)
     *          - B_0x1: Rx queue fill-level below flow-control deactivate threshold (value: 1)
     *          - B_0x2: Rx queue fill-level above flow-control activate threshold (value: 2)
     *          - B_0x3: Rx queue full (value: 3)
     */
        /** @brief Rx queue empty */
    constexpr std::uint32_t ETH_MTLRXQ1DR_RXQSTS_B_0x0 = 0;
        /** @brief Rx queue fill-level below flow-control deactivate threshold */
    constexpr std::uint32_t ETH_MTLRXQ1DR_RXQSTS_B_0x1 = 1;
        /** @brief Rx queue fill-level above flow-control activate threshold */
    constexpr std::uint32_t ETH_MTLRXQ1DR_RXQSTS_B_0x2 = 2;
        /** @brief Rx queue full */
    constexpr std::uint32_t ETH_MTLRXQ1DR_RXQSTS_B_0x3 = 3;

    /** @brief Number of Packets in Receive Queue */
    using ETH_MTLRXQ1DR_PRXQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief R1 queue 1 control register */
    using ETH_MTLRXQ1CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD7C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive Queue Weight */
    using ETH_MTLRXQ1CR_RXQ_WEGT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive Queue Packet Arbitration */
    using ETH_MTLRXQ1CR_RXQ_FRM_ARBIT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA mode register */
    using ETH_DMAMR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1000, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software Reset */
    using ETH_DMAMR_SWR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Arbitration Algorithm */
    using ETH_DMAMR_TAA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Fixed priority. In fixed priority, Channel 0 has the lowest priority and the last channel has the highest priority. (value: 0)
     *          - B_0x1: Weighted Strict priority (WSP) (value: 1)
     *          - B_0x2: Weighted Round-Robin (WRR) (value: 2)
     */
        /** @brief Fixed priority. In fixed priority, Channel 0 has the lowest priority and the last channel has the highest priority. */
    constexpr std::uint32_t ETH_DMAMR_TAA_B_0x0 = 0;
        /** @brief Weighted Strict priority (WSP) */
    constexpr std::uint32_t ETH_DMAMR_TAA_B_0x1 = 1;
        /** @brief Weighted Round-Robin (WRR) */
    constexpr std::uint32_t ETH_DMAMR_TAA_B_0x2 = 2;

    /** @brief Descriptor Posted Write */
    using ETH_DMAMR_DSPW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The descriptor writes are always non-posted. (value: 0)
     *          - B_0x1: The descriptor writes are non-posted only when IOC (Interrupt on completion) is set in last descriptor. Otherwise, the descriptor writes are always posted. (value: 1)
     */
        /** @brief The descriptor writes are always non-posted. */
    constexpr std::uint32_t ETH_DMAMR_DSPW_B_0x0 = 0;
        /** @brief The descriptor writes are non-posted only when IOC (Interrupt on completion) is set in last descriptor. Otherwise, the descriptor writes are always posted. */
    constexpr std::uint32_t ETH_DMAMR_DSPW_B_0x1 = 1;

    /** @brief Transmit priority */
    using ETH_DMAMR_TXPR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Mode */
    using ETH_DMAMR_INTM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief System bus mode register */
    using ETH_DMASBMR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1004, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fixed Burst Length */
    using ETH_DMASBMR_FB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXI Burst Length 4 */
    using ETH_DMASBMR_BLEN4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXI Burst Length 8 */
    using ETH_DMASBMR_BLEN8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXI Burst Length 16 */
    using ETH_DMASBMR_BLEN16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXI Burst Length 32 */
    using ETH_DMASBMR_BLEN32 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXI Burst Length 64 */
    using ETH_DMASBMR_BLEN64 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXI Burst Length 128 */
    using ETH_DMASBMR_BLEN128 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXI Burst Length 256 */
    using ETH_DMASBMR_BLEN256 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Automatic AXI LPI enable */
    using ETH_DMASBMR_AALE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Address-Aligned Beats */
    using ETH_DMASBMR_AAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 1 Kbyte Boundary Crossing Enable for the AXI Master */
    using ETH_DMASBMR_ONEKBBE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXI Maximum Read Outstanding Request Limit */
    using ETH_DMASBMR_RD_OSR_LMT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXI Maximum Write Outstanding Request Limit */
    using ETH_DMASBMR_WR_OSR_LMT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Unlock on Magic Packet or Remote wake-up packet */
    using ETH_DMASBMR_LPI_XIT_PKT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable Low Power Interface (LPI) */
    using ETH_DMASBMR_EN_LPI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt status register */
    using ETH_DMAISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1008, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA Channel 0 Interrupt Status */
    using ETH_DMAISR_DC0IS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA Channel 1 Interrupt Status */
    using ETH_DMAISR_DC1IS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MTL Interrupt Status */
    using ETH_DMAISR_MTLIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MAC Interrupt Status */
    using ETH_DMAISR_MACIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Debug status register */
    using ETH_DMADSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x100C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXI Master Write Channel */
    using ETH_DMADSR_AXWHSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXI Master Read Channel Status */
    using ETH_DMADSR_AXRHSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA Channel 0 Receive Process State */
    using ETH_DMADSR_RPS0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Stopped (Reset or Stop Receive Command issued) (value: 0)
     *          - B_0x1: Running (Fetching Rx Transfer Descriptor) (value: 1)
     *          - B_0x3: Running (Waiting for Rx packet) (value: 3)
     *          - B_0x4: Suspended (Rx Descriptor Unavailable) (value: 4)
     *          - B_0x5: Running (Closing the Rx Descriptor) (value: 5)
     *          - B_0x6: Timestamp write state (value: 6)
     *          - B_0x7: Running (Transferring the received packet data from the Rx buffer to the system memory) (value: 7)
     */
        /** @brief Stopped (Reset or Stop Receive Command issued) */
    constexpr std::uint32_t ETH_DMADSR_RPS0_B_0x0 = 0;
        /** @brief Running (Fetching Rx Transfer Descriptor) */
    constexpr std::uint32_t ETH_DMADSR_RPS0_B_0x1 = 1;
        /** @brief Running (Waiting for Rx packet) */
    constexpr std::uint32_t ETH_DMADSR_RPS0_B_0x3 = 3;
        /** @brief Suspended (Rx Descriptor Unavailable) */
    constexpr std::uint32_t ETH_DMADSR_RPS0_B_0x4 = 4;
        /** @brief Running (Closing the Rx Descriptor) */
    constexpr std::uint32_t ETH_DMADSR_RPS0_B_0x5 = 5;
        /** @brief Timestamp write state */
    constexpr std::uint32_t ETH_DMADSR_RPS0_B_0x6 = 6;
        /** @brief Running (Transferring the received packet data from the Rx buffer to the system memory) */
    constexpr std::uint32_t ETH_DMADSR_RPS0_B_0x7 = 7;

    /** @brief DMA Channel 0 Transmit Process State */
    using ETH_DMADSR_TPS0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Stopped (Reset or Stop Transmit Command issued) (value: 0)
     *          - B_0x1: Running (Fetching Tx Transfer Descriptor) (value: 1)
     *          - B_0x2: Running (Waiting for status) (value: 2)
     *          - B_0x3: Running (Reading Data from system memory buffer and queuing it to the Tx buffer (Tx FIFO)) (value: 3)
     *          - B_0x4: Timestamp write state (value: 4)
     *          - B_0x6: Suspended (Tx Descriptor Unavailable or Tx Buffer Underflow) (value: 6)
     *          - B_0x7: Running (Closing Tx Descriptor) (value: 7)
     */
        /** @brief Stopped (Reset or Stop Transmit Command issued) */
    constexpr std::uint32_t ETH_DMADSR_TPS0_B_0x0 = 0;
        /** @brief Running (Fetching Tx Transfer Descriptor) */
    constexpr std::uint32_t ETH_DMADSR_TPS0_B_0x1 = 1;
        /** @brief Running (Waiting for status) */
    constexpr std::uint32_t ETH_DMADSR_TPS0_B_0x2 = 2;
        /** @brief Running (Reading Data from system memory buffer and queuing it to the Tx buffer (Tx FIFO)) */
    constexpr std::uint32_t ETH_DMADSR_TPS0_B_0x3 = 3;
        /** @brief Timestamp write state */
    constexpr std::uint32_t ETH_DMADSR_TPS0_B_0x4 = 4;
        /** @brief Suspended (Tx Descriptor Unavailable or Tx Buffer Underflow) */
    constexpr std::uint32_t ETH_DMADSR_TPS0_B_0x6 = 6;
        /** @brief Running (Closing Tx Descriptor) */
    constexpr std::uint32_t ETH_DMADSR_TPS0_B_0x7 = 7;

    /** @brief DMA Channel 1 Receive Process State */
    using ETH_DMADSR_RPS1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA Channel 1 Transmit Process State */
    using ETH_DMADSR_TPS1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXI4 transmit channel ACE control register */
    using ETH_DMAA4TXACR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1020, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit DMA Read Descriptor Cache Control */
    using ETH_DMAA4TXACR_TDRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit DMA Extended Packet Buffer or TSO Payload Cache Control */
    using ETH_DMAA4TXACR_TEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit DMA First Packet Buffer or TSO Header Cache Control */
    using ETH_DMAA4TXACR_THC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXI4 receive channel ACE control register */
    using ETH_DMAA4RXACR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1024, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive DMA Write Descriptor Cache Control */
    using ETH_DMAA4RXACR_RDWC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive DMA Payload Cache Control */
    using ETH_DMAA4RXACR_RPC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive DMA Header Cache Control */
    using ETH_DMAA4RXACR_RHC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive DMA Buffer Cache Control */
    using ETH_DMAA4RXACR_RDC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXI4 descriptor ACE control register */
    using ETH_DMAA4DACR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1028, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit DMA Write Descriptor Cache control */
    using ETH_DMAA4DACR_TDWC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit DMA Write Descriptor Domain control */
    using ETH_DMAA4DACR_TDWD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive DMA Read Descriptor Cache control */
    using ETH_DMAA4DACR_RDRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXI4 LPI Entry Interval register */
    using ETH_DMALPIEI = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1040, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPI Entry Interval */
    using ETH_DMALPIEI_LPIEI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA TBS control register 0 */
    using ETH_DMATBSCTRL0R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1050, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fetch time offset valid */
    using ETH_DMATBSCTRL0R_FTOV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Fetch time offset invalid (value: 0)
     *          - B_0x1: Fetch time offset valid (value: 1)
     */
        /** @brief Fetch time offset invalid */
    constexpr std::uint32_t ETH_DMATBSCTRL0R_FTOV_B_0x0 = 0;
        /** @brief Fetch time offset valid */
    constexpr std::uint32_t ETH_DMATBSCTRL0R_FTOV_B_0x1 = 1;

    /** @brief Fetch GSN offset */
    using ETH_DMATBSCTRL0R_FGOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fetch time offset */
    using ETH_DMATBSCTRL0R_FTOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel 0 control register */
    using ETH_DMAC0CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1100, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum Segment Size */
    using ETH_DMAC0CR_MSS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 8xPBL mode */
    using ETH_DMAC0CR_PBLX8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Descriptor Skip Length */
    using ETH_DMAC0CR_DSL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel 0 transmit control register */
    using ETH_DMAC0TXCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1104, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Start or Stop Transmission Command */
    using ETH_DMAC0TXCR_ST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Channel Weight */
    using ETH_DMAC0TXCR_TCW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Operate on Second Packet */
    using ETH_DMAC0TXCR_OSF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TCP Segmentation Enabled */
    using ETH_DMAC0TXCR_TSE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Ignore PBL Requirement */
    using ETH_DMAC0TXCR_IPBL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Programmable Burst Length */
    using ETH_DMAC0TXCR_TXPBL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit QOS */
    using ETH_DMAC0TXCR_TQOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enhanced Descriptor Enable */
    using ETH_DMAC0TXCR_EDSE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel 0 receive control register */
    using ETH_DMAC0RXCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1108, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Start or Stop Receive */
    using ETH_DMAC0RXCR_SR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive Buffer size */
    using ETH_DMAC0RXCR_RBSZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive Programmable Burst Length */
    using ETH_DMAC0RXCR_RXPBL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx AXI4 QOS. */
    using ETH_DMAC0RXCR_RQOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA Rx Channel x Packet Flush */
    using ETH_DMAC0RXCR_RPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel 0 T0 descriptor list address register */
    using ETH_DMAC0TXDLAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1114, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Start of Transmit List */
    using ETH_DMAC0TXDLAR_TDESLA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel 0 Rx descriptor list address register */
    using ETH_DMAC0RXDLAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x111C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Start of Receive List */
    using ETH_DMAC0RXDLAR_RDESLA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel 0 T0 descriptor tail pointer register */
    using ETH_DMAC0TXDTPR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1120, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Descriptor Tail Pointer */
    using ETH_DMAC0TXDTPR_TDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel 0 R0 descriptor tail pointer register */
    using ETH_DMAC0RXDTPR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1128, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive Descriptor Tail Pointer */
    using ETH_DMAC0RXDTPR_RDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel 0 T0 descriptor ring length register */
    using ETH_DMAC0TXRLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x112C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Descriptor Ring Length */
    using ETH_DMAC0TXRLR_TDRL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel 0 R0 descriptor ring length register */
    using ETH_DMAC0RXRLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1130, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive Descriptor Ring Length */
    using ETH_DMAC0RXRLR_RDRL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alternate Receive Buffer Size */
    using ETH_DMAC0RXRLR_ARBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel 0 interrupt enable register */
    using ETH_DMAC0IER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1134, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Interrupt Enable */
    using ETH_DMAC0IER_TIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Stopped Enable */
    using ETH_DMAC0IER_TXSE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Buffer Unavailable Enable */
    using ETH_DMAC0IER_TBUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive Interrupt Enable */
    using ETH_DMAC0IER_RIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive Buffer Unavailable Enable */
    using ETH_DMAC0IER_RBUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive Stopped Enable */
    using ETH_DMAC0IER_RSE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive Watchdog Timeout Enable */
    using ETH_DMAC0IER_RWTE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Early Transmit Interrupt Enable */
    using ETH_DMAC0IER_ETIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Early Receive Interrupt Enable */
    using ETH_DMAC0IER_ERIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fatal Bus Error Enable */
    using ETH_DMAC0IER_FBEE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context Descriptor Error Enable */
    using ETH_DMAC0IER_CDEE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Abnormal Interrupt Summary Enable */
    using ETH_DMAC0IER_AIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Normal Interrupt Summary Enable */
    using ETH_DMAC0IER_NIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel 0 R0 interrupt watchdog timer register */
    using ETH_DMAC0RXIWTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1138, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive Interrupt Watchdog Timer Count */
    using ETH_DMAC0RXIWTR_RWT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive Interrupt Watchdog Timer Count Units */
    using ETH_DMAC0RXIWTR_RWTU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 256 (value: 0)
     *          - B_0x1: 512 (value: 1)
     *          - B_0x2: 1024 (value: 2)
     *          - B_0x3: 2048 (value: 3)
     */
        /** @brief 256 */
    constexpr std::uint32_t ETH_DMAC0RXIWTR_RWTU_B_0x0 = 0;
        /** @brief 512 */
    constexpr std::uint32_t ETH_DMAC0RXIWTR_RWTU_B_0x1 = 1;
        /** @brief 1024 */
    constexpr std::uint32_t ETH_DMAC0RXIWTR_RWTU_B_0x2 = 2;
        /** @brief 2048 */
    constexpr std::uint32_t ETH_DMAC0RXIWTR_RWTU_B_0x3 = 3;

    /** @brief Channel 0 slot function control status register */
    using ETH_DMAC0SFCSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x113C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable Slot Comparison */
    using ETH_DMAC0SFCSR_ESC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Advance Slot Check */
    using ETH_DMAC0SFCSR_ASC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Slot Interval Value */
    using ETH_DMAC0SFCSR_SIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference Slot Number */
    using ETH_DMAC0SFCSR_RSN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel 0 current application transmit descriptor register */
    using ETH_DMAC0CATXDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1144, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Application Transmit Descriptor Address Pointer */
    using ETH_DMAC0CATXDR_CURTDESAPTR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel 0 current application receive descriptor register */
    using ETH_DMAC0CARXDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x114C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Application Receive Descriptor Address Pointer */
    using ETH_DMAC0CARXDR_CURRDESAPTR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel 0 current application transmit buffer register */
    using ETH_DMAC0CATXBR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1154, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Application Transmit Buffer Address Pointer */
    using ETH_DMAC0CATXBR_CURTBUFAPTR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel 0 current application receive buffer register */
    using ETH_DMAC0CARXBR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x115C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Application Receive Buffer Address Pointer */
    using ETH_DMAC0CARXBR_CURRBUFAPTR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel 0 status register */
    using ETH_DMAC0SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1160, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Interrupt */
    using ETH_DMAC0SR_TI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Process Stopped */
    using ETH_DMAC0SR_TPS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Buffer Unavailable */
    using ETH_DMAC0SR_TBU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive Interrupt */
    using ETH_DMAC0SR_RI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive Buffer Unavailable */
    using ETH_DMAC0SR_RBU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive Process Stopped */
    using ETH_DMAC0SR_RPS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive Watchdog Timeout */
    using ETH_DMAC0SR_RWT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Early Transmit Interrupt */
    using ETH_DMAC0SR_ETI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Early Receive Interrupt */
    using ETH_DMAC0SR_ERI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fatal Bus Error */
    using ETH_DMAC0SR_FBE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context Descriptor Error */
    using ETH_DMAC0SR_CDE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Abnormal Interrupt Summary */
    using ETH_DMAC0SR_AIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Normal Interrupt Summary */
    using ETH_DMAC0SR_NIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx DMA Error Bits */
    using ETH_DMAC0SR_TEB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx DMA Error Bits */
    using ETH_DMAC0SR_REB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel 0 missed frame count register */
    using ETH_DMAC0MFCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1164, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Dropped Packet Counters */
    using ETH_DMAC0MFCR_MFC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Overflow status of the MFC Counter */
    using ETH_DMAC0MFCR_MFCO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel 1 control register */
    using ETH_DMAC1CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1180, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum Segment Size */
    using ETH_DMAC1CR_MSS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 8xPBL mode */
    using ETH_DMAC1CR_PBLX8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Descriptor Skip Length */
    using ETH_DMAC1CR_DSL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel 1 transmit control register */
    using ETH_DMAC1TXCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1184, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Start or Stop Transmission Command */
    using ETH_DMAC1TXCR_ST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Channel Weight */
    using ETH_DMAC1TXCR_TCW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Operate on Second Packet */
    using ETH_DMAC1TXCR_OSF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TCP Segmentation Enabled */
    using ETH_DMAC1TXCR_TSE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Ignore PBL Requirement */
    using ETH_DMAC1TXCR_IPBL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Programmable Burst Length */
    using ETH_DMAC1TXCR_TXPBL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit QOS */
    using ETH_DMAC1TXCR_TQOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enhanced Descriptor Enable */
    using ETH_DMAC1TXCR_EDSE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel 1 receive control register */
    using ETH_DMAC1RXCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1188, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Start or Stop Receive */
    using ETH_DMAC1RXCR_SR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive Buffer size */
    using ETH_DMAC1RXCR_RBSZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive Programmable Burst Length */
    using ETH_DMAC1RXCR_RXPBL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx AXI4 QOS. */
    using ETH_DMAC1RXCR_RQOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA Rx Channel x Packet Flush */
    using ETH_DMAC1RXCR_RPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel 1 T1 descriptor list address register */
    using ETH_DMAC1TXDLAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1194, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Start of Transmit List */
    using ETH_DMAC1TXDLAR_TDESLA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel 1 T1 descriptor tail pointer register */
    using ETH_DMAC1TXDTPR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x11A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Descriptor Tail Pointer */
    using ETH_DMAC1TXDTPR_TDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel 1 R1 descriptor tail pointer register */
    using ETH_DMAC1RXDTPR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x11A8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive Descriptor Tail Pointer */
    using ETH_DMAC1RXDTPR_RDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel 1 T1 descriptor ring length register */
    using ETH_DMAC1TXRLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x11AC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Descriptor Ring Length */
    using ETH_DMAC1TXRLR_TDRL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel 1 R1 descriptor ring length register */
    using ETH_DMAC1RXRLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x11B0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive Descriptor Ring Length */
    using ETH_DMAC1RXRLR_RDRL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alternate Receive Buffer Size */
    using ETH_DMAC1RXRLR_ARBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel 1 interrupt enable register */
    using ETH_DMAC1IER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x11B4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Interrupt Enable */
    using ETH_DMAC1IER_TIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Stopped Enable */
    using ETH_DMAC1IER_TXSE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Buffer Unavailable Enable */
    using ETH_DMAC1IER_TBUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive Interrupt Enable */
    using ETH_DMAC1IER_RIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive Buffer Unavailable Enable */
    using ETH_DMAC1IER_RBUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive Stopped Enable */
    using ETH_DMAC1IER_RSE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive Watchdog Timeout Enable */
    using ETH_DMAC1IER_RWTE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Early Transmit Interrupt Enable */
    using ETH_DMAC1IER_ETIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Early Receive Interrupt Enable */
    using ETH_DMAC1IER_ERIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fatal Bus Error Enable */
    using ETH_DMAC1IER_FBEE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context Descriptor Error Enable */
    using ETH_DMAC1IER_CDEE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Abnormal Interrupt Summary Enable */
    using ETH_DMAC1IER_AIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Normal Interrupt Summary Enable */
    using ETH_DMAC1IER_NIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel 1 R1 interrupt watchdog timer register */
    using ETH_DMAC1RXIWTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x11B8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive Interrupt Watchdog Timer Count */
    using ETH_DMAC1RXIWTR_RWT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive Interrupt Watchdog Timer Count Units */
    using ETH_DMAC1RXIWTR_RWTU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 256 (value: 0)
     *          - B_0x1: 512 (value: 1)
     *          - B_0x2: 1024 (value: 2)
     *          - B_0x3: 2048 (value: 3)
     */
        /** @brief 256 */
    constexpr std::uint32_t ETH_DMAC1RXIWTR_RWTU_B_0x0 = 0;
        /** @brief 512 */
    constexpr std::uint32_t ETH_DMAC1RXIWTR_RWTU_B_0x1 = 1;
        /** @brief 1024 */
    constexpr std::uint32_t ETH_DMAC1RXIWTR_RWTU_B_0x2 = 2;
        /** @brief 2048 */
    constexpr std::uint32_t ETH_DMAC1RXIWTR_RWTU_B_0x3 = 3;

    /** @brief Channel 1 slot function control status register */
    using ETH_DMAC1SFCSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x11BC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable Slot Comparison */
    using ETH_DMAC1SFCSR_ESC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Advance Slot Check */
    using ETH_DMAC1SFCSR_ASC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Slot Interval Value */
    using ETH_DMAC1SFCSR_SIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference Slot Number */
    using ETH_DMAC1SFCSR_RSN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel 1 current application transmit descriptor register */
    using ETH_DMAC1CATXDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x11C4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Application Transmit Descriptor Address Pointer */
    using ETH_DMAC1CATXDR_CURTDESAPTR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel 1 current application receive descriptor register */
    using ETH_DMAC1CARXDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x11CC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Application Receive Descriptor Address Pointer */
    using ETH_DMAC1CARXDR_CURRDESAPTR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel 1 current application transmit buffer register */
    using ETH_DMAC1CATXBR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x11D4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Application Transmit Buffer Address Pointer */
    using ETH_DMAC1CATXBR_CURTBUFAPTR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel 1 current application receive buffer register */
    using ETH_DMAC1CARXBR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x11DC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Application Receive Buffer Address Pointer */
    using ETH_DMAC1CARXBR_CURRBUFAPTR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel 1 status register */
    using ETH_DMAC1SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x11E0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Interrupt */
    using ETH_DMAC1SR_TI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Process Stopped */
    using ETH_DMAC1SR_TPS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Buffer Unavailable */
    using ETH_DMAC1SR_TBU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive Interrupt */
    using ETH_DMAC1SR_RI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive Buffer Unavailable */
    using ETH_DMAC1SR_RBU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive Process Stopped */
    using ETH_DMAC1SR_RPS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive Watchdog Timeout */
    using ETH_DMAC1SR_RWT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Early Transmit Interrupt */
    using ETH_DMAC1SR_ETI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Early Receive Interrupt */
    using ETH_DMAC1SR_ERI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fatal Bus Error */
    using ETH_DMAC1SR_FBE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context Descriptor Error */
    using ETH_DMAC1SR_CDE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Abnormal Interrupt Summary */
    using ETH_DMAC1SR_AIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Normal Interrupt Summary */
    using ETH_DMAC1SR_NIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx DMA Error Bits */
    using ETH_DMAC1SR_TEB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx DMA Error Bits */
    using ETH_DMAC1SR_REB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel 1 missed frame count register */
    using ETH_DMAC1MFCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x11E4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Dropped Packet Counters */
    using ETH_DMAC1MFCR_MFC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Overflow status of the MFC Counter */
    using ETH_DMAC1MFCR_MFCO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
