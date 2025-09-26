/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32H750_ETH_HPP
#define EMBEDDED_PP_STM32H750_ETH_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief ETH register block */
namespace STM32H750::ETH {

    /** @brief Operating mode configuration register */
    using ETH_MACCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receiver Enable When this bit is set, the Rx state machine of the MAC is enabled for receiving packets from the MII interface. When this bit is reset, the MAC Rx state machine is disabled after it completes the reception of the current packet. The Rx state machine does not receive any more packets from the MII interface. */
    using ETH_MACCR_RE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmitter Enable When this bit is set, the Tx state machine of the MAC is enabled for transmission on the MII interface. When this bit is reset, the MAC Tx state machine is disabled after it completes the transmission of the current packet. The Tx state machine does not transmit any more packets. */
    using ETH_MACCR_TE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Preamble Length for Transmit packets These bits control the number of preamble bytes that are added to the beginning of every Tx packet. The preamble reduction occurs only when the MAC is operating in the full-duplex mode. */
    using ETH_MACCR_PRELEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 7 bytes of preamble (value: 0)
     *          - B_0x1: 5 bytes of preamble (value: 1)
     *          - B_0x2: 3 bytes of preamble (value: 2)
     *          - B_0x3: Reserved, must not be used (value: 3)
     */
        /** @brief 7 bytes of preamble */
    constexpr std::uint32_t ETH_MACCR_PRELEN_B_0x0 = 0;
        /** @brief 5 bytes of preamble */
    constexpr std::uint32_t ETH_MACCR_PRELEN_B_0x1 = 1;
        /** @brief 3 bytes of preamble */
    constexpr std::uint32_t ETH_MACCR_PRELEN_B_0x2 = 2;
        /** @brief Reserved, must not be used */
    constexpr std::uint32_t ETH_MACCR_PRELEN_B_0x3 = 3;

    /** @brief Deferral Check When this bit is set, the deferral check function is enabled in the MAC. The MAC issues a Packet Abort status, along with the excessive deferral error bit set in the Tx packet status, when the Tx state machine is deferred for more than 24,288 bit times in 10 or 100 Mbps mode. Deferral begins when the transmitter is ready to transmit, but it is prevented because of an active carrier sense signal (CRS) on MII. The defer time is not cumulative. For example, if the transmitter defers for 10,000 bit times because the CRS signal is active and the CRS signal becomes inactive, the transmitter transmits and collision happens. Because of collision, the transmitter needs to back off and then defer again after back off completion. In such a scenario, the deferral timer is reset to 0, and it is restarted. When this bit is reset, the deferral check function is disabled and the MAC defers until the CRS signal goes inactive. This bit is applicable only in the half-duplex mode. */
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

    /** @brief Disable Retry When this bit is set, the MAC attempts only one transmission. When a collision occurs on the MII interface, the MAC ignores the current packet transmission and reports a Packet Abort with excessive collision error in the Tx packet status. When this bit is reset, the MAC retries based on the settings of the BL field. This bit is applicable only in the half-duplex mode. */
    using ETH_MACCR_DR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Disable Carrier Sense During Transmission When this bit is set, the MAC transmitter ignores the (G)MII CRS signal during packet transmission in the half-duplex mode. As a result, no errors are generated because of Loss of Carrier or No Carrier during transmission. When this bit is reset, the MAC transmitter generates errors because of Carrier Sense. The MAC can even abort the transmission. */
    using ETH_MACCR_DCRS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Disable Receive Own When this bit is set, the MAC disables the reception of packets when the ETH_TX_EN is asserted in the half-duplex mode. When this bit is reset, the MAC receives all packets given by the PHY. This bit is not applicable in the full-duplex mode. This bit is reserved and read-only (RO) with default value in the full-duplex-only configurations. */
    using ETH_MACCR_DO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable Carrier Sense Before Transmission in Full-Duplex Mode When this bit is set, the MAC transmitter checks the CRS signal before packet transmission in the full-duplex mode. The MAC starts the transmission only when the CRS signal is low. When this bit is reset, the MAC transmitter ignores the status of the CRS signal. */
    using ETH_MACCR_ECRSFD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Loopback Mode When this bit is set, the MAC operates in the loopback mode at MII. The MII Rx clock input (eth_mii_rx_clk) is required for the loopback to work properly. This is because the Tx clock is not internally looped back. */
    using ETH_MACCR_LM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Duplex Mode When this bit is set, the MAC operates in the full-duplex mode in which it can transmit and receive simultaneously. */
    using ETH_MACCR_DM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MAC Speed This bit selects the speed in the 10/100 Mbps mode: */
    using ETH_MACCR_FES = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 10 Mbps (value: 0)
     *          - B_0x1: 100 Mbps (value: 1)
     */
        /** @brief 10 Mbps */
    constexpr std::uint32_t ETH_MACCR_FES_B_0x0 = 0;
        /** @brief 100 Mbps */
    constexpr std::uint32_t ETH_MACCR_FES_B_0x1 = 1;

    /** @brief Jumbo Packet Enable When this bit is set, the MAC allows jumbo packets of 9,018 bytes (9,022 bytes for VLAN tagged packets) without reporting a giant packet error in the Rx packet status. For more information about how the setting of this bit and the JE bit impact the Giant packet status, see . */
    using ETH_MACCR_JE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Jabber Disable When this bit is set, the MAC disables the jabber timer on the transmitter. The MAC can transfer packets of up to 16,383 bytes. When this bit is reset, if the application sends more than 2,048 bytes of data (10,240 if JE is set high) during transmission, the MAC does not send rest of the bytes in that packet. */
    using ETH_MACCR_JD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Watchdog Disable When this bit is set, the MAC disables the watchdog timer on the receiver. The MAC can receive packets of up to 16,383 bytes. When this bit is reset, the MAC does not allow more than 2,048 bytes (10,240 if JE is set high) of the packet being received. The MAC cuts off any bytes received after 2,048 bytes. */
    using ETH_MACCR_WD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Automatic Pad or CRC Stripping When this bit is set, the MAC strips the Pad or FCS field on the incoming packets only if the value of the length field is less than 1,536 bytes. All received packets with length field greater than or equal to 1,536 bytes are passed to the application without stripping the Pad or FCS field. When this bit is reset, the MAC passes all incoming packets to the application, without any modification. Note: For information about how the settings of CST bit and this bit impact the packet length, see . */
    using ETH_MACCR_ACS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRC stripping for Type packets When this bit is set, the last four bytes (FCS) of all packets of Ether type (type field greater than 1,536) are stripped and dropped before forwarding the packet to the application. This function is not valid when the IP Checksum Engine (Type 1) is enabled in the MAC receiver. This function is valid when Type 2 Checksum Offload Engine is enabled. Note: For information about how the settings of the ACS bit and this bit impact the packet length, see . */
    using ETH_MACCR_CST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IEEE 802.3as Support for 2K Packets When this bit is set, the MAC considers all packets with up to 2,000 bytes length as normal packets. When the JE bit is not set, the MAC considers all received packets of size more than 2K bytes as Giant packets. When this bit is reset and the JE bit is not set, the MAC considers all received packets of size more than 1,518 bytes (1,522 bytes for tagged) as giant packets. For more information about how the setting of this bit and the JE bit impact the Giant packet status, see Packet Status based on S2KP and JE Bits. Note: When the JE bit is set, setting this bit has no effect on the giant packet status. */
    using ETH_MACCR_S2KP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Giant Packet Size Limit Control Enable When this bit is set, the MAC considers the value in GPSL field in ETH_MACECR register to declare a received packet as Giant packet. This field must be programmed to more than 1,518 bytes. Otherwise, the MAC considers 1,518 bytes as giant packet limit. When this bit is reset, the MAC considers a received packet as Giant packet when its size is greater than 1,518 bytes (1522 bytes for tagged packet). The watchdog timeout limit, Jumbo Packet Enable and 2K Packet Enable have higher precedence over this bit, that is the MAC considers a received packet as Giant packet when its size is greater than 9,018 bytes (9,022 bytes for tagged packet) with Jumbo Packet Enabled and greater than 2,000 bytes with 2K Packet Enabled. The watchdog timeout, if enabled, terminates the received packet when watchdog limit is reached. Therefore, the programmed giant packet limit should be less than the watchdog limit to get the giant packet status. */
    using ETH_MACCR_GPSLCE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Inter-Packet Gap These bits control the minimum IPG between packets during transmission. ... This range of minimum IPG is valid in full-duplex mode. In the half-duplex mode, the minimum IPG can be configured only for 64-bit times (IPG = 100). Lower values are not considered. When a JAM pattern is being transmitted because of backpressure activation, the MAC does not consider the minimum IPG. The above function (IPG less than 96 bit times) is valid only when EIPGEN bit in ETH_MACECR register is reset. When EIPGEN is set, then the minimum IPG (greater than 96 bit times) is controlled as per the description given in EIPG field in ETH_MACECR register. */
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

    /** @brief Checksum Offload When set, this bit enables the IPv4 header checksum checking and IPv4 or IPv6 TCP, UDP, or ICMP payload checksum checking. When this bit is reset, the COE function in the receiver is disabled. The Layer 3 and Layer 4 Packet Filter feature automatically selects the IPC Full Checksum Offload Engine on the Receive side. When this feature is enabled, you must set the IPC bit. */
    using ETH_MACCR_IPC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Source Address Insertion or Replacement Control This field controls the source address insertion or replacement for all transmitted packets. Bit 30 specifies which MAC Address register (0 or 1) is used for source address insertion or replacement based on the values of Bits[29:28]: Others: Reserved, must not be used. Note: Changes to this field take effect only on the start of a packet. If you write to this register field when a packet is being transmitted, only the subsequent packet can use the updated value, that is, the current packet does not use the updated value. */
    using ETH_MACCR_SARC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x2: the MAC inserts the content of the MAC Address 0 registers (MAC Address 0 high register (ETH_MACA0HR) and ) in the SA field of all transmitted packets. (value: 2)
     *          - B_0x3: the MAC replaces the content of the MAC Address 0 registers (MAC Address 0 high register (ETH_MACA0HR) and ) in the SA field of all transmitted packets. (value: 3)
     *          - B_0x6: the MAC inserts the content of the MAC Address 1 registers (MAC Address x high register (ETH_MACAxHR) and ) in the SA field of all transmitted packets (value: 6)
     *          - B_0x7: the MAC replaces the content of the MAC Address 1 registers (MAC Address x high register (ETH_MACAxHR) and ) in the SA field of all transmitted packets. (value: 7)
     */
        /** @brief the MAC inserts the content of the MAC Address 0 registers (MAC Address 0 high register (ETH_MACA0HR) and ) in the SA field of all transmitted packets. */
    constexpr std::uint32_t ETH_MACCR_SARC_B_0x2 = 2;
        /** @brief the MAC replaces the content of the MAC Address 0 registers (MAC Address 0 high register (ETH_MACA0HR) and ) in the SA field of all transmitted packets. */
    constexpr std::uint32_t ETH_MACCR_SARC_B_0x3 = 3;
        /** @brief the MAC inserts the content of the MAC Address 1 registers (MAC Address x high register (ETH_MACAxHR) and ) in the SA field of all transmitted packets */
    constexpr std::uint32_t ETH_MACCR_SARC_B_0x6 = 6;
        /** @brief the MAC replaces the content of the MAC Address 1 registers (MAC Address x high register (ETH_MACAxHR) and ) in the SA field of all transmitted packets. */
    constexpr std::uint32_t ETH_MACCR_SARC_B_0x7 = 7;

    /** @brief ARP Offload Enable When this bit is set, the MAC can recognize an incoming ARP request packet and schedules the ARP packet for transmission. It will forward the ARP packet to the application and also indicate the events in the RxStatus. When this bit is reset, the MAC receiver does not recognize any ARP packet and indicates them as Type frame in the RxStatus. */
    using ETH_MACCR_ARPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extended operating mode configuration register */
    using ETH_MACECR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Giant Packet Size Limit If the received packet size is greater than the value programmed in this field in units of bytes, the MAC declares the received packet as Giant packet. The value programmed in this field must be greater than or equal to 1,518 bytes. Any other programmed value is considered as 1,518 bytes. For VLAN tagged packets, the MAC adds 4 bytes to the programmed value. For double VLAN tagged packets, the MAC adds 8 bytes to the programmed value. The value in this field is applicable when the GPSLCE bit is set in ETH_MACCR register. */
    using ETH_MACECR_GPSL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Disable CRC Checking for Received Packets When this bit is set, the MAC receiver does not check the CRC field in the received packets. When this bit is reset, the MAC receiver always checks the CRC field in the received packets. */
    using ETH_MACECR_DCRCC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Slow Protocol Detection Enable When this bit is set, MAC processes the Slow Protocol packets (Ether Type 0x8809) and provides the Rx status. The MAC discards the Slow Protocol packets with invalid sub-types. When this bit is reset, the MAC forwards all error-free Slow Protocol packets to the application. The MAC considers such packets as normal Type packets. */
    using ETH_MACECR_SPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Unicast Slow Protocol Packet Detect When this bit is set, the MAC detects the Slow Protocol packets with unicast address of the station specified in the and MAC Address 0 low register . The MAC also detects the Slow Protocol packets with the Slow Protocols multicast address (01-80-C2-00-00-02). When this bit is reset, the MAC detects only Slow Protocol packets with the Slow Protocol multicast address specified in the IEEE 802.3-2008, Section 5. */
    using ETH_MACECR_USP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extended Inter-Packet Gap Enable When this bit is set, the MAC interprets EIPG field and IPG field in configuration register (ETH_MACCR) together as minimum IPG greater than 96 bit times in steps of 8 bit times. When this bit is reset, the MAC ignores EIPG field and interprets IPG field in configuration register (ETH_MACCR) as minimum IPG less than or equal to 96 bit times in steps of 8 bit times. Note: The extended Inter-Packet Gap feature must be enabled when operating in Full-Duplex mode only. There may be undesirable effects on back-pressure function and frame transmission if it is enabled in Half-Duplex mode. */
    using ETH_MACECR_EIPGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extended Inter-Packet Gap The value in this field is applicable when the EIPGEN bit is set. This field (as Most Significant bits) along with IPG field in , gives the minimum IPG greater than 96 bit times in steps of 8 bit times. For example: EIPG = 0 and IPG = 0 give 104 bit times EIPG = 0 and IPG = 1 give 112 bit times EIPG = 0 and IPG = 2 give 120 bit times .. EIPG = 7 and IPG = 31 give 2144 bit times */
    using ETH_MACECR_EIPG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet filtering control register */
    using ETH_MACPFR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Promiscuous Mode When this bit is set, the Address Filtering module passes all incoming packets irrespective of the destination or source address. The SA or DA Filter Fails status bits of the Rx Status Word are always cleared when PR is set. */
    using ETH_MACPFR_PR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hash Unicast When this bit is set, the MAC performs the destination address filtering of unicast packets according to the Hash table. When this bit is reset, the MAC performs a perfect destination address filtering for unicast packets, that is, it compares the DA field with the values programmed in DA registers. */
    using ETH_MACPFR_HUC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hash Multicast When this bit is set, the MAC performs the destination address filtering of received multicast packets according to the Hash table. When this bit is reset, the MAC performs the perfect destination address filtering for multicast packets, that is, it compares the DA field with the values programmed in DA registers. */
    using ETH_MACPFR_HMC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DA Inverse Filtering When this bit is set, the Address Check block operates in inverse filtering mode for the DA address comparison for both unicast and multicast packets. When this bit is reset, normal filtering of packets is performed. */
    using ETH_MACPFR_DAIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Pass All Multicast When this bit is set, it indicates that all received packets with a multicast destination address (first bit in the destination address field is '1') are passed. When this bit is reset, filtering of multicast packet depends on HMC bit. */
    using ETH_MACPFR_PM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Disable Broadcast Packets When this bit is set, the AFM module blocks all incoming broadcast packets. In addition, it overrides all other filter settings. When this bit is reset, the AFM module passes all received broadcast packets. */
    using ETH_MACPFR_DBF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Pass Control Packets These bits control the forwarding of all control packets (including unicast and multicast Pause packets). */
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

    /** @brief SA Inverse Filtering When this bit is set, the Address Check block operates in the inverse filtering mode for SA address comparison. If the SA of a packet matches the values programmed in the SA registers, it is marked as failing the SA Address filter. When this bit is reset, if the SA of a packet does not match the values programmed in the SA registers, it is marked as failing the SA Address filter. */
    using ETH_MACPFR_SAIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Source Address Filter Enable When this bit is set, the MAC compares the SA field of the received packets with the values programmed in the enabled SA registers. If the comparison fails, the MAC drops the packet. When this bit is reset, the MAC forwards the received packet to the application with updated SAF bit of the Rx Status depending on the SA address comparison. Note: According to the IEEE specification, Bit 47 of the SA is reserved. However, the MAC compares all 48 bits. The software driver should take this into consideration while programming the MAC address registers for SA. */
    using ETH_MACPFR_SAF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hash or Perfect Filter When this bit is set, the address filter passes a packet if it matches either the perfect filtering or Hash filtering as set by the HMC or HUC bit. When this bit is reset and the HUC or HMC bit is set, the packet is passed only if it matches the Hash filter. */
    using ETH_MACPFR_HPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VLAN Tag Filter Enable When this bit is set, the MAC drops the VLAN tagged packets that do not match the VLAN Tag. When this bit is reset, the MAC forwards all packets irrespective of the match status of the VLAN Tag. */
    using ETH_MACPFR_VTFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer 3 and Layer 4 Filter Enable When this bit is set, the MAC drops packets that do not match the enabled Layer 3 and Layer 4 filters. If Layer 3 or Layer 4 filters are not enabled for matching, this bit does not have any effect. When this bit is reset, the MAC forwards all packets irrespective of the match status of the Layer 3 and Layer 4 fields. */
    using ETH_MACPFR_IPFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Drop Non-TCP/UDP over IP Packets When this bit is set, the MAC drops the non-TCP or UDP over IP packets. The MAC forward only those packets that are processed by the Layer 4 filter. When this bit is reset, the MAC forwards all non-TCP or UDP over IP packets. */
    using ETH_MACPFR_DNTU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive All When this bit is set, the MAC Receiver module passes all received packets to the application, irrespective of whether they pass the address filter or not. The result of the SA or DA filtering is updated (pass or fail) in the corresponding bit in the Rx Status Word. When this bit is reset, the Receiver module passes only those packets to the application that pass the SA or DA address filter. */
    using ETH_MACPFR_RA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Watchdog timeout register */
    using ETH_MACWTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Watchdog Timeout When the PWE bit is set and the WD bit of the (ETH_MACCR) register is reset, this field is used as watchdog timeout for a received packet. If the length of a received packet exceeds the value of this field, such packet is terminated and declared as an error packet. Encoding is as follows: .. Note: When the PWE bit is set, the value in this field should be more than 1,522 (0x05F2). Otherwise, the IEEE 802.3-specified valid tagged packets are declared as error packets and then dropped. */
    using ETH_MACWTR_WTO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 2 Kbytes (value: 0)
     *          - B_0x1: 3 Kbytes (value: 1)
     *          - B_0x2: 4 Kbytes (value: 2)
     *          - B_0x3: 5 Kbytes (value: 3)
     *          - B_0xC: 14 Kbytes (value: 12)
     *          - B_0xD: 15 Kbytes (value: 13)
     *          - B_0xE: 16383 Bytes (value: 14)
     *          - B_0xF: Reserved, must not be used (value: 15)
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
        /** @brief Reserved, must not be used */
    constexpr std::uint32_t ETH_MACWTR_WTO_B_0xF = 15;

    /** @brief Programmable Watchdog Enable When this bit is set and the WD bit of the (ETH_MACCR) register is reset, the WTO field is used as watchdog timeout for a received packet. When this bit is cleared, the watchdog timeout for a received packet is controlled by setting of WD and JE bits in register. */
    using ETH_MACWTR_PWE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hash Table 0 register */
    using ETH_MACHT0R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MAC Hash Table First 32 Bits This field contains the first 32 Bits [31:0] of the Hash table. */
    using ETH_MACHT0R_HT31T0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hash Table 1 register */
    using ETH_MACHT1R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MAC Hash Table Second 32 Bits This field contains the second 32 Bits [63:32] of the Hash table. */
    using ETH_MACHT1R_HT63T32 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VLAN tag register */
    using ETH_MACVTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VLAN Tag Identifier for Receive Packets This field contains the 802.1Q VLAN tag to identify the VLAN packets. This VLAN tag identifier is compared to the 15th and 16th bytes of the packets being received for VLAN packets. The following list describes the bits of this field: Bits[15:13]: User Priority Bit 12: Canonical Format Indicator (CFI) or Drop Eligible Indicator (DEI) Bits[11:0]: VLAN Identifier (VID) field of VLAN tag When the ETV bit is set, only the VID is used for comparison. If this field ([11:0] if ETV is set) is all zeros, the MAC does not check the 15th and 16th bytes for VLAN tag comparison and declares all packets with Type field value of 0x8100 or 0x88a8 as VLAN packets. */
    using ETH_MACVTR_VL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable 12-Bit VLAN Tag Comparison When this bit is set, a 12-bit VLAN identifier is used for comparing and filtering instead of the complete 16-bit VLAN tag. Bits[11:0] of VLAN tag are compared with the corresponding field in the received VLAN-tagged packet. Similarly, when enabled, only 12 bits of the VLAN tag in the received packet are used for Hash-based VLAN filtering. When this bit is reset, all 16 bits of the 15th and 16th bytes of the received VLAN packet are used for comparison and VLAN Hash filtering. */
    using ETH_MACVTR_ETV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VLAN Tag Inverse Match Enable When this bit is set, this bit enables the VLAN Tag inverse matching. The packets without matching VLAN Tag are marked as matched. When reset, this bit enables the VLAN Tag perfect matching. The packets with matched VLAN Tag are marked as matched. */
    using ETH_MACVTR_VTIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable S-VLAN When this bit is set, the MAC transmitter and receiver consider the S-VLAN packets (Type = 0x88A8) as valid VLAN tagged packets. */
    using ETH_MACVTR_ESVL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable Receive S-VLAN Match When this bit is set, the MAC receiver enables filtering or matching for S-VLAN (Type = 0x88A8) packets. When this bit is reset, the MAC receiver enables filtering or matching for C-VLAN (Type = 0x8100) packets. The ERIVLT bit determines the VLAN tag position considered for filtering or matching. */
    using ETH_MACVTR_ERSVLM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Disable VLAN Type Check When this bit is set, the MAC does not check whether the VLAN Tag specified by the ERIVLT bit is of type S-VLAN or C-VLAN. When this bit is reset, the MAC filters or matches the VLAN Tag specified by the ERIVLT bit only when VLAN Tag type is similar to the one specified by the ERSVLM bit. */
    using ETH_MACVTR_DOVLTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable VLAN Tag Stripping on Receive This field indicates the stripping operation on the outer VLAN Tag in received packet: */
    using ETH_MACVTR_EVLS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Do not strip (value: 0)
     *          - B_0x1: Strip if VLAN filter passes (value: 1)
     *          - B_0x2: Strip if VLAN filter fails (value: 2)
     *          - B_0x3: Always strip (value: 3)
     */
        /** @brief Do not strip */
    constexpr std::uint32_t ETH_MACVTR_EVLS_B_0x0 = 0;
        /** @brief Strip if VLAN filter passes */
    constexpr std::uint32_t ETH_MACVTR_EVLS_B_0x1 = 1;
        /** @brief Strip if VLAN filter fails */
    constexpr std::uint32_t ETH_MACVTR_EVLS_B_0x2 = 2;
        /** @brief Always strip */
    constexpr std::uint32_t ETH_MACVTR_EVLS_B_0x3 = 3;

    /** @brief Enable VLAN Tag in Rx status When this bit is set, MAC provides the outer VLAN Tag in the Rx status. When this bit is reset, the MAC does not provide the outer VLAN Tag in Rx status. */
    using ETH_MACVTR_EVLRXS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VLAN Tag Hash Table Match Enable When this bit is set, the most significant four bits of CRC of VLAN Tag are used to index the content of the ETH_MACVLANHTR register. A value of 1 in the VLAN Hash Table register, corresponding to the index, indicates that the packet matched the VLAN Hash table. When the ETV bit is set, the CRC of the 12-bit VLAN Identifier (VID) is used for comparison. When the ETV bit is reset, the CRC of the 16-bit VLAN tag is used for comparison. When this bit is reset, the VLAN Hash Match operation is not performed. */
    using ETH_MACVTR_VTHM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable Double VLAN Processing When this bit is set, the MAC enables processing of up to two VLAN Tags on Tx and Rx (if present). When this bit is reset, the MAC enables processing of up to one VLAN Tag on Tx and Rx (if present). */
    using ETH_MACVTR_EDVLP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable Inner VLAN Tag When this bit and the EDVLP field are set, the MAC receiver enables operation on the inner VLAN Tag (if present). When this bit is reset, the MAC receiver enables operation on the outer VLAN Tag (if present). The ERSVLM bit determines which VLAN type is enabled for filtering or matching.The ERSVLM bit and DOVLTC bit determines which VLAN type is enabled for filtering. */
    using ETH_MACVTR_ERIVLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable Inner VLAN Tag Stripping on Receive This field indicates the stripping operation on inner VLAN Tag in received packet: */
    using ETH_MACVTR_EIVLS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Do not strip (value: 0)
     *          - B_0x1: Strip if VLAN filter passes (value: 1)
     *          - B_0x2: Strip if VLAN filter fails (value: 2)
     *          - B_0x3: Always strip (value: 3)
     */
        /** @brief Do not strip */
    constexpr std::uint32_t ETH_MACVTR_EIVLS_B_0x0 = 0;
        /** @brief Strip if VLAN filter passes */
    constexpr std::uint32_t ETH_MACVTR_EIVLS_B_0x1 = 1;
        /** @brief Strip if VLAN filter fails */
    constexpr std::uint32_t ETH_MACVTR_EIVLS_B_0x2 = 2;
        /** @brief Always strip */
    constexpr std::uint32_t ETH_MACVTR_EIVLS_B_0x3 = 3;

    /** @brief Enable Inner VLAN Tag in Rx Status When this bit is set, the MAC provides the inner VLAN Tag in the Rx status. When this bit is reset, the MAC does not provide the inner VLAN Tag in Rx status. */
    using ETH_MACVTR_EIVLRXS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VLAN Hash table register */
    using ETH_MACVHTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x58, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VLAN Hash Table This field contains the 16-bit VLAN Hash Table. */
    using ETH_MACVHTR_VLHT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VLAN inclusion register */
    using ETH_MACVIR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VLAN Tag for Transmit Packets This field contains the value of the VLAN tag to be inserted or replaced. The value must only be changed when the transmit lines are inactive or during the initialization phase. The following list describes the bits of this field: Bits[15:13]: User Priority Bit 12: Canonical Format Indicator (CFI) or Drop Eligible Indicator (DEI) Bits[11:0]: VLAN Identifier (VID) field of VLAN tag */
    using ETH_MACVIR_VLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VLAN Tag Control in Transmit Packets Note: Changes to this field take effect only on the start of a packet. If you write this register field when a packet is being transmitted, only the subsequent packet can use the updated value, that is, the current packet does not use the updated value. */
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

    /** @brief VLAN Priority Control When this bit is set, the control bits[17:16] are used for VLAN deletion, insertion, or replacement. When this bit is reset, bits[17:16] are ignored. */
    using ETH_MACVIR_VLP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief C-VLAN or S-VLAN When this bit is set, S-VLAN type (0x88A8) is inserted or replaced in the 13th and 14th bytes of transmitted packets. When this bit is reset, C-VLAN type (0x8100) is inserted or replaced in the 13th and 14th bytes of transmitted packets. */
    using ETH_MACVIR_CSVL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: C-LAN (value: 0)
     *          - B_0x1: S-LAN (value: 1)
     */
        /** @brief C-LAN */
    constexpr std::uint32_t ETH_MACVIR_CSVL_B_0x0 = 0;
        /** @brief S-LAN */
    constexpr std::uint32_t ETH_MACVIR_CSVL_B_0x1 = 1;

    /** @brief VLAN Tag Input When this bit is set, it indicates that the VLAN tag to be inserted or replaced in Tx packet should be taken from the Tx descriptor. */
    using ETH_MACVIR_VLTI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel based tag insertion When this bit is set, outer VLAN tag is inserted for every packets transmitted by the MAC. The tag value is taken from the queue/channel specific VLAN tag register. This will override VLTI, VLP, VLC and VLT fields of this register When this bit is set, a write operation to byte 3 of this register initiates the read/write access to the indirect register. When reset outer VLAN operation is based on the setting of VLTI, VLP, VLC and VLT fields of this register */
    using ETH_MACVIR_CBTI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Address This field selects one of the queue/channel specific VLAN Inclusion register for read/write access This does not have any effect when CBTI is reset */
    using ETH_MACVIR_ADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VLAN tag for insertion in the Transmit packets from Tx Queue 0 (value: 0)
     *          - B_0x1: VLAN tag for insertion in the Transmit packets from Tx Queue 1 (value: 1)
     */
        /** @brief VLAN tag for insertion in the Transmit packets from Tx Queue 0 */
    constexpr std::uint32_t ETH_MACVIR_ADDR_B_0x0 = 0;
        /** @brief VLAN tag for insertion in the Transmit packets from Tx Queue 1 */
    constexpr std::uint32_t ETH_MACVIR_ADDR_B_0x1 = 1;

    /** @brief Read write control This bit controls the read or write operation for indirectly accessing the queue/channel specific VLAN Inclusion register. When set indicates write operation and when reset indicates read operation This has no effect when CBTI is reset */
    using ETH_MACVIR_RDWR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Busy This bit indicates the status of the read/write operation of indirect access to the queue/channel specific VLAN inclusion register. For write operation write to a register is complete when this bit is reset. For read operation the read data is valid when the bit is reset. No further writes are allowed to this register when this bit is set. This does not have any effect when CBTI is reset */
    using ETH_MACVIR_BUSY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VLAN inclusion register */
    using ETH_MACVIRALTERNATE = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VLAN Tag for Transmit Packets This field contains the value of the VLAN tag to be inserted or replaced. The value must only be changed when the transmit lines are inactive or during the initialization phase. The following list describes the bits of this field: Bits[15:13]: User Priority Bit 12: Canonical Format Indicator (CFI) or Drop Eligible Indicator (DEI) Bits[11:0]: VLAN Identifier (VID) field of VLAN tag */
    using ETH_MACVIRALTERNATE_VLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief C-VLAN or S-VLAN When this bit is set, S-VLAN type (0x88A8) is inserted or replaced in the 13th and 14th bytes of transmitted packets. When this bit is reset, C-VLAN type (0x8100) is inserted or replaced in the 13th and 14th bytes of transmitted packets. */
    using ETH_MACVIRALTERNATE_CSVL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: C-LAN (value: 0)
     *          - B_0x1: S-LAN (value: 1)
     */
        /** @brief C-LAN */
    constexpr std::uint32_t ETH_MACVIRALTERNATE_CSVL_B_0x0 = 0;
        /** @brief S-LAN */
    constexpr std::uint32_t ETH_MACVIRALTERNATE_CSVL_B_0x1 = 1;

    /** @brief Inner VLAN inclusion register */
    using ETH_MACIVIR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x64, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VLAN Tag for Transmit Packets This field contains the value of the VLAN tag to be inserted or replaced. The value must only be changed when the transmit lines are inactive or during the initialization phase. The following list describes the bits of this field: Bits[15:13]: User Priority Bit 12: Canonical Format Indicator (CFI) or Drop Eligible Indicator (DEI) Bits[11:0]: VLAN Identifier (VID) field of VLAN tag */
    using ETH_MACIVIR_VLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VLAN Tag Control in Transmit Packets The MAC removes the VLAN type (bytes 17 and 18) and VLAN tag (bytes 19 and 20) of all transmitted packets with VLAN tags. The MAC inserts VLT in bytes 19 and 20 of the packet after inserting the Type value (0x8100 or 0x88a8) in bytes 17 and 18. This operation is performed on all transmitted packets, irrespective of whether they already have a VLAN tag. The MAC replaces VLT in bytes 19 and 20 of all VLAN-type transmitted packets (Bytes 17 and 18 are 0x8100 or 0x88a8). Note: Changes to this field take effect only on the start of a packet. If you write to this register field when a packet is being transmitted, only the subsequent packet can use the updated value, that is, the current packet does not use the updated value. */
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

    /** @brief VLAN Priority Control When this bit is set, the VLC field is used for VLAN deletion, insertion, or replacement. When this bit is reset, the VLC field is ignored. */
    using ETH_MACIVIR_VLP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief C-VLAN or S-VLAN When this bit is set, S-VLAN type (0x88A8) is inserted or replaced in the 13th and 14th bytes of transmitted packets. When this bit is reset, C-VLAN type (0x8100) is inserted or replaced in the 13th and 14th bytes of transmitted packets. */
    using ETH_MACIVIR_CSVL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: C-LAN (value: 0)
     *          - B_0x1: S-LAN (value: 1)
     */
        /** @brief C-LAN */
    constexpr std::uint32_t ETH_MACIVIR_CSVL_B_0x0 = 0;
        /** @brief S-LAN */
    constexpr std::uint32_t ETH_MACIVIR_CSVL_B_0x1 = 1;

    /** @brief VLAN Tag Input When this bit is set, it indicates that the VLAN tag to be inserted or replaced in Tx packet should be taken from the Tx descriptor */
    using ETH_MACIVIR_VLTI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx Queue flow control register */
    using ETH_MACQTXFCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x70, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Flow Control Busy or Backpressure Activate This bit initiates a Pause packet in the full-duplex mode and activates the backpressure function in the half-duplex mode if the TFE bit is set. Full-Duplex Mode: this bit should be read as 0 before writing to this register. To initiate a Pause packet, the application must set this bit to 1. During Control packet transfer, this bit continues to be set to indicate that a packet transmission is in progress. When Pause packet transmission is complete, the MAC resets this bit to 0. You should not write to this register until this bit is cleared. Half-Duplex Mode: When this bit is set (and TFE bit is set) in the half-duplex mode, the MAC asserts the backpressure. During backpressure, when the MAC receives a new packet, the transmitter starts sending a JAM pattern resulting in a collision. When the MAC is configured for the full-duplex mode, the BPA is automatically disabled. */
    using ETH_MACQTXFCR_FCB_BPA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Flow Control Enable Full-Duplex Mode: when this bit is set, the MAC enables the flow control operation to Tx Pause packets. When this bit is reset, the flow control operation in the MAC is disabled, and the MAC does not transmit any Pause packets. Half-Duplex Mode: when this bit is set, the MAC enables the backpressure operation. When this bit is reset, the backpressure feature is disabled. */
    using ETH_MACQTXFCR_TFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Pause Low Threshold This field configures the threshold of the Pause timer at which the input flow is checked for automatic retransmission of the Pause packet. The threshold values should be always less than the Pause Time configured in Bits[31:16]. For example, if PT = 100H (256 slot times), and PLT = 001, a second Pause packet is automatically transmitted at 228 (256-28) slot times after the first Pause packet is transmitted. The following list provides the threshold values for different values: The slot time is defined as the time taken to transmit 512 bits (64 bytes) on the MII interface. This (approximate) computation is based on the packet size (64, 1518, 2000, 9018, 16384, or 32768) + 2 Pause Packet Size + IPG in Slot Times. */
    using ETH_MACQTXFCR_PLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Pause Time minus 4 Slot Times (PT -4 slot times) (value: 0)
     *          - B_0x1: Pause Time minus 28 Slot Times (PT -28 slot times) (value: 1)
     *          - B_0x2: Pause Time minus 36 Slot Times (PT -36 slot times) (value: 2)
     *          - B_0x3: Pause Time minus 144 Slot Times (PT -144 slot times) (value: 3)
     *          - B_0x4: Pause Time minus 256 Slot Times (PT -256 slot times) (value: 4)
     *          - B_0x5: Pause Time minus 512 Slot Times (PT -512 slot times) (value: 5)
     *          - B_0x6: Reserved, must not be used (value: 6)
     *          - B_0x7: Reserved, must not be used (value: 7)
     */
        /** @brief Pause Time minus 4 Slot Times (PT -4 slot times) */
    constexpr std::uint32_t ETH_MACQTXFCR_PLT_B_0x0 = 0;
        /** @brief Pause Time minus 28 Slot Times (PT -28 slot times) */
    constexpr std::uint32_t ETH_MACQTXFCR_PLT_B_0x1 = 1;
        /** @brief Pause Time minus 36 Slot Times (PT -36 slot times) */
    constexpr std::uint32_t ETH_MACQTXFCR_PLT_B_0x2 = 2;
        /** @brief Pause Time minus 144 Slot Times (PT -144 slot times) */
    constexpr std::uint32_t ETH_MACQTXFCR_PLT_B_0x3 = 3;
        /** @brief Pause Time minus 256 Slot Times (PT -256 slot times) */
    constexpr std::uint32_t ETH_MACQTXFCR_PLT_B_0x4 = 4;
        /** @brief Pause Time minus 512 Slot Times (PT -512 slot times) */
    constexpr std::uint32_t ETH_MACQTXFCR_PLT_B_0x5 = 5;
        /** @brief Reserved, must not be used */
    constexpr std::uint32_t ETH_MACQTXFCR_PLT_B_0x6 = 6;
        /** @brief Reserved, must not be used */
    constexpr std::uint32_t ETH_MACQTXFCR_PLT_B_0x7 = 7;

    /** @brief Disable Zero-Quanta Pause When this bit is set, it disables the automatic generation of the zero-quanta Pause packets. When this bit is reset, normal operation with automatic zero-quanta Pause packet generation is enabled. */
    using ETH_MACQTXFCR_DZPQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Pause Time This field holds the value to be used in the Pause Time field in the Tx control packet. I */
    using ETH_MACQTXFCR_PT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx flow control register */
    using ETH_MACRXFCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x90, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive Flow Control Enable When this bit is set and the MAC is operating in full-duplex mode, the MAC decodes the received Pause packet and disables its transmitter for a specified (Pause) time. When this bit is reset or the MAC is operating in half-duplex mode, the decode function of the Pause packet is disabled. When PFC is enabled, flow control is enabled for PFC packets. The MAC decodes the received PFC packet and disables the Transmit queue, with matching priorities, for a duration of received Pause time. */
    using ETH_MACRXFCR_RFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Unicast Pause Packet Detect A pause packet is processed when it has the unique multicast address specified in the IEEE 802.3. When this bit is set, the MAC can also detect Pause packets with unicast address of the station. This unicast address should be as specified in (ETH_MACA0HR) and MAC Address 0 low register (ETH_MACAxLR). When this bit is reset, the MAC only detects Pause packets with unique multicast address. Note: The MAC does not process a Pause packet if the multicast address is different from the unique multicast address. This is also applicable to the received PFC packet when the Priority Flow Control (PFC) is enabled. The unique multicast address (0x01_80_C2_00_00_01) is as specified in IEEE 802.1 Qbb-2011. */
    using ETH_MACRXFCR_UP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt status register */
    using ETH_MACISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PHY Interrupt This bit is set when rising edge is detected on the ETH_PHY_INTN input. This bit is cleared when this register is read. */
    using ETH_MACISR_PHYIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PMT Interrupt Status This bit is set when a Magic packet or Wake-on-LAN packet is received in the power-down mode (RWKPRCVD and MGKPRCVD bits in ETH_MACPCSR register). This bit is cleared when Bits[6:5] are cleared because of a Read operation to the (ETH_MACPCSR). */
    using ETH_MACISR_PMTIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPI Interrupt Status This bit is set for any LPI state entry or exit in the MAC Transmitter or Receiver. This bit is cleared when the TLPIEN bit of is read. */
    using ETH_MACISR_LPIIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMC Interrupt Status This bit is set high when MMCTXIS or MMCRXIS is set high. This bit is cleared only when all these bits are low. */
    using ETH_MACISR_MMCIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMC Receive Interrupt Status This bit is set high when an interrupt is generated in the (ETH_MMC_RX_INTERRUPT). This bit is cleared when all bits in this interrupt register are cleared. */
    using ETH_MACISR_MMCRXIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMC Transmit Interrupt Status This bit is set high when an interrupt is generated in the (ETH_MMC_TX_INTERRUPT). This bit is cleared when all bits in this interrupt register are cleared. */
    using ETH_MACISR_MMCTXIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timestamp Interrupt Status If the Timestamp feature is enabled, this bit is set when any of the following conditions is true: The system time value is equal to or exceeds the value specified in the Target Time High and Low registers. There is an overflow in the Seconds register. The Target Time Error occurred, that is, programmed target time already elapsed. If the Auxiliary Snapshot feature is enabled, this bit is set when the auxiliary snapshot trigger is asserted. When drop transmit status is enabled in MTL, this bit is set when the captured transmit timestamp is updated in the (ETH_MACTXTSSNR) and registers. When PTP offload feature is enabled, this bit is set when the captured transmit timestamp is updated in the and timestamp status seconds register (ETH_MACTXTSSSR) registers, for PTO generated Delay Request and Pdelay request packets. This bit is cleared when the corresponding interrupt source bit is read (or corresponding interrupt source bit is written to 1 when RCWE bit of (ETH_MACCSRSWCR) is set) in the . */
    using ETH_MACISR_TSIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Status Interrupt This bit indicates the status of transmitted packets. This bit is set when any of the following bits is set in the : Excessive Collision (EXCOL) Late Collision (LCOL) Excessive Deferral (EXDEF) Loss of Carrier (LCARR) No Carrier (NCARR) Jabber Timeout (TJT) This bit is cleared when the corresponding interrupt source bit is read (or corresponding interrupt source bit is written to 1 when RCWE bit of (ETH_MACCSRSWCR) is set) in the ETH_MACISR register. */
    using ETH_MACISR_TXSTSIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive Status Interrupt This bit indicates the status of received packets. This bit is set when the RWT bit is set in the . This bit is cleared when the corresponding interrupt source bit is read (or corresponding interrupt source bit is written to 1 when RCWE bit of is set) in the ETH_MACISR register. */
    using ETH_MACISR_RXSTSIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt enable register */
    using ETH_MACIER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PHY Interrupt Enable When this bit is set, it enables the assertion of the interrupt signal because of the setting of PHYIS bit in . */
    using ETH_MACIER_PHYIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PMT Interrupt Enable When this bit is set, it enables the assertion of the interrupt signal because of the setting of PMTIS bit in . */
    using ETH_MACIER_PMTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPI Interrupt Enable When this bit is set, it enables the assertion of the interrupt signal because of the setting of LPIIS bit in . */
    using ETH_MACIER_LPIIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timestamp Interrupt Enable When this bit is set, it enables the assertion of the interrupt signal because of the setting of TSIS bit in . */
    using ETH_MACIER_TSIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Status Interrupt Enable When this bit is set, it enables the assertion of the interrupt signal because of the setting of TXSTSIS bit in the . */
    using ETH_MACIER_TXSTSIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive Status Interrupt Enable When this bit is set, it enables the assertion of the interrupt signal because of the setting of RXSTSIS bit in the . */
    using ETH_MACIER_RXSTSIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx Tx status register */
    using ETH_MACRXTXSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Jabber Timeout This bit indicates that the Transmit Jabber Timer expired which happens when the packet size exceeds 2,048 bytes (10,240 bytes when the Jumbo packet is enabled) and JD bit is reset in the . This bit is set when the packet size exceeds 16,383 bytes and the JD bit is set in the register (ETH_MACCR). Cleared on read (or write of 1 when RCWE bit in (ETH_MACCSRSWCR) is set). */
    using ETH_MACRXTXSR_TJT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief No Carrier When the DTXSTS bit is set in the , this bit indicates that the carrier signal from the PHY is not present at the end of preamble transmission. Cleared on read (or write of 1 when RCWE bit in (ETH_MACCSRSWCR) is set). */
    using ETH_MACRXTXSR_NCARR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Loss of Carrier When the DTXSTS bit is set in the , this bit indicates that the loss of carrier occurred during packet transmission, that is, the ETH_CRS signal was inactive for one or more transmission clock periods during packet transmission. This bit is valid only for packets transmitted without collision. Cleared on read (or write of 1 when RCWE bit in (ETH_MACCSRSWCR) is set). */
    using ETH_MACRXTXSR_LCARR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Excessive Deferral When the DTXSTS bit is set in the and the DC bit is set in the , this bit indicates that the transmission ended because of excessive deferral of over 24,288 bit times (155,680 when Jumbo packet is enabled). Cleared on read (or write of 1 when RCWE bit in (ETH_MACCSRSWCR) is set). */
    using ETH_MACRXTXSR_EXDEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Late Collision When the DTXSTS bit is set in the , this bit indicates that the packet transmission aborted because a collision occurred after the collision window (64 bytes including Preamble in MII mode. This bit is not valid if the Underflow error occurs. Cleared on read (or write of 1 when RCWE bit in (ETH_MACCSRSWCR) is set). */
    using ETH_MACRXTXSR_LCOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Excessive Collisions When the DTXSTS bit is set in the , this bit indicates that the transmission aborted after 16 successive collisions while attempting to transmit the current packet. If the DR bit is set in the (ETH_MACCR), this bit is set after the first collision and the packet transmission is aborted. Cleared on read (or write of 1 when RCWE bit in (ETH_MACCSRSWCR) is set). */
    using ETH_MACRXTXSR_EXCOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive Watchdog Timeout This bit is set when a packet with length greater than 2,048 bytes is received (10, 240 bytes when Jumbo Packet mode is enabled) and the WD bit is reset in the configuration register (ETH_MACCR). This bit is set when a packet with length greater than 16,383 bytes is received and the WD bit is set in the (ETH_MACCR). Cleared on read (or write of 1 when RCWE bit in (ETH_MACCSRSWCR) is set). */
    using ETH_MACRXTXSR_RWT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ETH_MACPCSR register */
    using ETH_MACPCSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Power Down When this bit is set, the MAC receiver drops all received packets until it receives the expected magic packet or remote wakeup packet. This bit is then self-cleared and the power-down mode is disabled. The software can clear this bit before the expected magic packet or remote wakeup packet is received. The packets received by the MAC after this bit is cleared are forwarded to the application. This bit must only be set when the Magic Packet Enable, Global Unicast, or Remote wakeup Packet Enable bit is set high. Note: You can gate-off the CSR clock during the power-down mode. However, when the CSR clock is gated-off, you cannot perform any read or write operations on this register. Therefore, the Software cannot clear this bit. */
    using ETH_MACPCSR_PWRDWN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Magic Packet Enable When this bit is set, a power management event is generated when the MAC receives a magic packet. */
    using ETH_MACPCSR_MGKPKTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Remote wakeup Packet Enable When this bit is set, a power management event is generated when the MAC receives a remote wakeup packet. */
    using ETH_MACPCSR_RWKPKTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Magic Packet Received When this bit is set, it indicates that the power management event is generated because of the reception of a magic packet. This bit is cleared when this register is read (or write of 1 when RCWE bit in is set). */
    using ETH_MACPCSR_MGKPRCVD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Remote wakeup Packet Received When this bit is set, it indicates that the power management event is generated because of the reception of a remote wakeup packet. This bit is cleared when this register is read. */
    using ETH_MACPCSR_RWKPRCVD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Global Unicast When this bit set, any unicast packet filtered by the MAC (DAF) address recognition is detected as a remote wakeup packet. */
    using ETH_MACPCSR_GLBLUCAST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Remote wakeup Packet Forwarding Enable When this bit is set along with RWKPKTEN, the MAC receiver drops all received frames until it receives the expected wakeup frame. All frames after that event including the received wakeup frame are forwarded to application. This bit is then self-cleared on receiving the wakeup packet. The application can also clear this bit before the expected wakeup frame is received. In such cases, the MAC reverts to the default behavior where packets received are forwarded to the application. This bit must only be set when RWKPKTEN is set high and PWRDWN is set low. The setting of this bit has no effect when PWRDWN is set high. Note: If Magic Packet Enable and wakeup Frame Enable are both set along with setting of this bit and Magic Packet is received prior to wakeup frame, this bit is self-cleared on receiving Magic Packet, the received Magic packet is dropped, and all frames after received Magic Packet are forwarded to application. */
    using ETH_MACPCSR_RWKPFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Remote wakeup FIFO Pointer This field gives the current value (0 to 7) of the Remote wakeup Packet Filter register pointer. When the value of this pointer is equal to 7, the contents of the Remote wakeup Packet Filter Register are transferred to the eth_mii_rx_clk domain when a Write occurs to that register. */
    using ETH_MACPCSR_RWKPTR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Remote wakeup Packet Filter Register Pointer Reset When this bit is set, the remote wakeup packet filter register pointer is reset to 0. It is automatically cleared after 1 clock cycle. */
    using ETH_MACPCSR_RWKFILTRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ETH_MACRWKPFR register */
    using ETH_MACRWKPFR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Remote wakeup packet filter Refer to , and for details on register content and programming sequence. */
    using ETH_MACRWKPFR_MACRWKPFR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPI control and status register */
    using ETH_MACLCSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit LPI Entry When this bit is set, it indicates that the MAC Transmitter has entered the LPI state because of the setting of the LPIEN bit. This bit is cleared by a read into this register (or write of 1 when RCWE bit in is set). */
    using ETH_MACLCSR_TLPIEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit LPI Exit When this bit is set, it indicates that the MAC transmitter exited the LPI state after the application cleared the LPIEN bit and the LPI TW Timer has expired. This bit is cleared by a read into this register (or write of 1 when RCWE bit in (ETH_MACCSRSWCR) is set). */
    using ETH_MACLCSR_TLPIEX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive LPI Entry When this bit is set, it indicates that the MAC Receiver has received an LPI pattern and entered the LPI state. This bit is cleared by a read into this register (or write of 1 when RCWE bit in is set). Note: This bit may not be set if the MAC stops receiving the LPI pattern for a very short duration, such as, less than three clock cycles of CSR clock. */
    using ETH_MACLCSR_RLPIEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive LPI Exit When this bit is set, it indicates that the MAC Receiver has stopped receiving the LPI pattern on the MII interface, exited the LPI state, and resumed the normal reception. This bit is cleared by a read into this register (or write of 1 when RCWE bit in register (ETH_MACCSRSWCR) is set). Note: This bit may not be set if the MAC stops receiving the LPI pattern for a very short duration, such as, less than three clock cycles of CSR clock. */
    using ETH_MACLCSR_RLPIEX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit LPI State When this bit is set, it indicates that the MAC is transmitting the LPI pattern on the MII interface. */
    using ETH_MACLCSR_TLPIST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive LPI State When this bit is set, it indicates that the MAC is receiving the LPI pattern on the MII interface. */
    using ETH_MACLCSR_RLPIST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPI Enable When this bit is set, it instructs the MAC Transmitter to enter the LPI state. When this bit is reset, it instructs the MAC to exit the LPI state and resume normal transmission. This bit is cleared when the LPITXA bit is set and the MAC exits the LPI state because of the arrival of a new packet for transmission. */
    using ETH_MACLCSR_LPIEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PHY Link Status This bit indicates the link status of the PHY. The MAC Transmitter asserts the LPI pattern only when the link status is up (OKAY) at least for the time indicated by the LPI LS TIMER. When this bit is set, the link is considered to be okay (UP) and when this bit is reset, the link is considered to be down. */
    using ETH_MACLCSR_PLS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPI Tx Automate This bit controls the behavior of the MAC when it is entering or coming out of the LPI mode on the Transmit side. If the LPITXA and LPIEN bits are set to 1, the MAC enters the LPI mode only after all outstanding packets (in the core) and pending packets (in the application interface) have been transmitted. The MAC comes out of the LPI mode when the application sends any packet for transmission or the application issues a Tx FIFO Flush command. In addition, the MAC automatically clears the LPIEN bit when it exits the LPI state. If Tx FIFO Flush is set in the FTQ bit of ETH_MTLTxQOMR, when the MAC is in the LPI mode, it exits the LPI mode. When this bit is 0, the LPIEN bit directly controls behavior of the MAC when it is entering or coming out of the LPI mode. */
    using ETH_MACLCSR_LPITXA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPI Timer Enable This bit controls the automatic entry of the MAC Transmitter into and exit out of the LPI state. When LPITE, LPITXA and LPIEN bits are set, the MAC Transmitter enters LPI state only when the complete MAC TX data path is IDLE for a period indicated by the ETH_MACLETR register. After entering LPI state, if the data path becomes non-IDLE (due to a new packet being accepted for transmission), the Transmitter exits LPI state but does not clear LPIEN bit. This enables the re-entry into LPI state when it is IDLE again. When LPITE is 0, the LPI Auto timer is disabled and MAC Transmitter enters LPI state based on the settings of LPITXA and LPIEN bit descriptions. */
    using ETH_MACLCSR_LPITE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPI Tx Clock Stop Enable When this bit is set, the MAC asserts sbd_tx_clk_gating_ctrl_o signal high after it enters Tx LPI mode to indicate that the Tx clock to MAC can be stopped. When this bit is reset, the MAC does not assert sbd_tx_clk_gating_ctrl_o signal high after it enters Tx LPI mode. If RGMII Interface is selected, the Tx clock is required for transmitting the LPI pattern. The Tx Clock cannot be gated and so the LPITCSE bit cannot be programmed. */
    using ETH_MACLCSR_LPITCSE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPI timers control register */
    using ETH_MACLTCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPI TW Timer This field specifies the minimum time (in microseconds) for which the MAC waits after it stops transmitting the LPI pattern to the PHY and before it resumes the normal transmission. The TLPIEX status bit is set after the expiry of this timer. */
    using ETH_MACLTCR_TWT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPI LS Timer This field specifies the minimum time (in milliseconds) for which the link status from the PHY should be up (OKAY) before the LPI pattern can be transmitted to the PHY. The MAC does not transmit the LPI pattern even when the LPIEN bit is set unless the LPI LS Timer reaches the programmed terminal count. The default value of the LPI LS Timer is 1000 (1 sec) as defined in the IEEE standard. */
    using ETH_MACLTCR_LST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPI entry timer register */
    using ETH_MACLETR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPI Entry Timer This field specifies the time in microseconds the MAC will wait to enter LPI mode, after it has transmitted all the frames. This field is valid and used only when LPITE and LPITXA are set to 1. Bits [2:0] are read-only so that the granularity of this timer is in steps of 8 micro-seconds. */
    using ETH_MACLETR_LPIET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief One-microsecond-tick counter register */
    using ETH_MAC1USTCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xDC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 1 s tick Counter The application must program this counter so that the number of clock cycles of CSR clock is 1 s (subtract 1 from the value before programming). For example if the CSR clock is 100 MHz then this field needs to be programmed to 100 - 1 = 99 (which is 0x63). This is required to generate the 1 s events that are used to update some of the EEE related counters. */
    using ETH_MAC1USTCR_TIC_1US_CNTR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Version register */
    using ETH_MACVR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x110, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IP version */
    using ETH_MACVR_SNPSVER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ST-defined version */
    using ETH_MACVR_USERVER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Debug register */
    using ETH_MACDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x114, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MAC MII Receive Protocol Engine Status When this bit is set, it indicates that the MAC MII receive protocol engine is actively receiving data, and it is not in the Idle state. */
    using ETH_MACDR_RPESTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MAC Receive Packet Controller FIFO Status When this bit is set, this field indicates the active state of the small FIFO Read and Write controllers of the MAC Receive Packet Controller module. */
    using ETH_MACDR_RFCFCSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MAC MII Transmit Protocol Engine Status When this bit is set, it indicates that the MAC MII transmit protocol engine is actively transmitting data, and it is not in the Idle state. */
    using ETH_MACDR_TPESTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MAC Transmit Packet Controller Status This field indicates the state of the MAC Transmit Packet Controller module: Status of the previous packet IPG or backoff period to be over */
    using ETH_MACDR_TFCSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Idle state (value: 0)
     *          - B_0x1: Waiting for one of the following: (value: 1)
     *          - B_0x2: Generating and transmitting a Pause control packet (in full-duplex mode) (value: 2)
     *          - B_0x3: Transferring input packet for transmission (value: 3)
     */
        /** @brief Idle state */
    constexpr std::uint32_t ETH_MACDR_TFCSTS_B_0x0 = 0;
        /** @brief Waiting for one of the following: */
    constexpr std::uint32_t ETH_MACDR_TFCSTS_B_0x1 = 1;
        /** @brief Generating and transmitting a Pause control packet (in full-duplex mode) */
    constexpr std::uint32_t ETH_MACDR_TFCSTS_B_0x2 = 2;
        /** @brief Transferring input packet for transmission */
    constexpr std::uint32_t ETH_MACDR_TFCSTS_B_0x3 = 3;

    /** @brief HW feature 0 register */
    using ETH_MACHWF0R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x11C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 10 or 100 Mbps Support This bit is set to 1 when 10/100 Mbps is selected as operating mode. */
    using ETH_MACHWF0R_MIISEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 1000 Mbps Support This bit is set to 1 when 1000 Mbps is selected as operating mode. */
    using ETH_MACHWF0R_GMIISEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Half-duplex Support This bit is set to 1 when the half-duplex mode is selected */
    using ETH_MACHWF0R_HDSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PCS Registers (TBI, SGMII, or RTBI PHY interface) This bit is set to 1 when the TBI, SGMII, or RTBI PHY interface option is selected */
    using ETH_MACHWF0R_PCSSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VLAN Hash Filter Selected This bit is set to 1 when the Enable VLAN Hash Table Based Filtering option is selected */
    using ETH_MACHWF0R_VLHASH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SMA (MDIO) Interface This bit is set to 1 when the Enable Station Management (MDIO Interface) option is selected */
    using ETH_MACHWF0R_SMASEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PMT Remote Wakeup Packet Enable This bit is set to 1 when the Enable Remote wakeup Packet Detection option is selected */
    using ETH_MACHWF0R_RWKSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PMT Magic Packet Enable This bit is set to 1 when the Enable Magic Packet Detection option is selected */
    using ETH_MACHWF0R_MGKSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RMON Module Enable This bit is set to 1 when the Enable MAC management counters (MMC) option is selected */
    using ETH_MACHWF0R_MMCSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ARP Offload Enabled This bit is set to 1 when the Enable IPv4 ARP Offload option is selected */
    using ETH_MACHWF0R_ARPOFFSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IEEE 1588-2008 Timestamp Enabled This bit is set to 1 when the Enable IEEE 1588 Timestamp Support option is selected */
    using ETH_MACHWF0R_TSSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Energy Efficient Ethernet Enabled This bit is set to 1 when the Enable Energy Efficient Ethernet (EEE) option is selected */
    using ETH_MACHWF0R_EEESEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Checksum Offload Enabled This bit is set to 1 when the Enable Transmit TCP/IP Checksum Insertion option is selected */
    using ETH_MACHWF0R_TXCOESEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive Checksum Offload Enabled This bit is set to 1 when the Enable Receive TCP/IP Checksum Check option is selected */
    using ETH_MACHWF0R_RXCOESEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MAC Addresses 1-31 Selected This bit is set to 1 when the Enable Additional 1-31 MAC Address Registers option is selected */
    using ETH_MACHWF0R_ADDMACADRSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MAC Addresses 32-63 Selected This bit is set to 1 when the Enable Additional 32 MAC Address Registers (32-63) option is selected */
    using ETH_MACHWF0R_MACADR32SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MAC Addresses 64-127 Selected This bit is set to 1 when the Enable Additional 64 MAC Address Registers (64-127) option is selected */
    using ETH_MACHWF0R_MACADR64SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timestamp System Time Source This bit indicates the source of the Timestamp system time: This bit is set to 1 when the Enable IEEE 1588 Timestamp Support option is selected */
    using ETH_MACHWF0R_TSSTSSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Internal (value: 1)
     *          - B_0x2: External (value: 2)
     *          - B_0x3: Both (value: 3)
     *          - B_0x0: Reserved, must not be used (value: 0)
     */
        /** @brief Internal */
    constexpr std::uint32_t ETH_MACHWF0R_TSSTSSEL_B_0x1 = 1;
        /** @brief External */
    constexpr std::uint32_t ETH_MACHWF0R_TSSTSSEL_B_0x2 = 2;
        /** @brief Both */
    constexpr std::uint32_t ETH_MACHWF0R_TSSTSSEL_B_0x3 = 3;
        /** @brief Reserved, must not be used */
    constexpr std::uint32_t ETH_MACHWF0R_TSSTSSEL_B_0x0 = 0;

    /** @brief Source Address or VLAN Insertion Enable This bit is set to 1 when the Enable SA and VLAN Insertion on Tx option is selected */
    using ETH_MACHWF0R_SAVLANINS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Active PHY Selected When you have multiple PHY interfaces in your configuration, this field indicates the sampled value of phy_intf_sel_i during reset de-assertion: Others: Reserved, must not be used */
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
    /** @brief MTL Receive FIFO Size This field contains the configured value of MTL Rx FIFO in bytes expressed as Log to base 2 minus 7, that is, Log2(RXFIFO_SIZE) -7: */
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
     *          - B_0xc: Reserved, must not be used (value: 12)
     *          - B_0xd: Reserved, must not be used (value: 13)
     *          - B_0xe: Reserved, must not be used (value: 14)
     *          - B_0xf: Reserved, must not be used (value: 15)
     *          - B_0x10: Reserved, must not be used (value: 16)
     *          - B_0x11: Reserved, must not be used (value: 17)
     *          - B_0x12: Reserved, must not be used (value: 18)
     *          - B_0x13: Reserved, must not be used (value: 19)
     *          - B_0x14: Reserved, must not be used (value: 20)
     *          - B_0x15: Reserved, must not be used (value: 21)
     *          - B_0x16: Reserved, must not be used (value: 22)
     *          - B_0x17: Reserved, must not be used (value: 23)
     *          - B_0x18: Reserved, must not be used (value: 24)
     *          - B_0x19: Reserved, must not be used (value: 25)
     *          - B_0x1a: Reserved, must not be used (value: 26)
     *          - B_0x1b: Reserved, must not be used (value: 27)
     *          - B_0x1c: Reserved, must not be used (value: 28)
     *          - B_0x1d: Reserved, must not be used (value: 29)
     *          - B_0x1e: Reserved, must not be used (value: 30)
     *          - B_0x1f: Reserved, must not be used (value: 31)
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
        /** @brief Reserved, must not be used */
    constexpr std::uint32_t ETH_MACHWF1R_RXFIFOSIZE_B_0xc = 12;
        /** @brief Reserved, must not be used */
    constexpr std::uint32_t ETH_MACHWF1R_RXFIFOSIZE_B_0xd = 13;
        /** @brief Reserved, must not be used */
    constexpr std::uint32_t ETH_MACHWF1R_RXFIFOSIZE_B_0xe = 14;
        /** @brief Reserved, must not be used */
    constexpr std::uint32_t ETH_MACHWF1R_RXFIFOSIZE_B_0xf = 15;
        /** @brief Reserved, must not be used */
    constexpr std::uint32_t ETH_MACHWF1R_RXFIFOSIZE_B_0x10 = 16;
        /** @brief Reserved, must not be used */
    constexpr std::uint32_t ETH_MACHWF1R_RXFIFOSIZE_B_0x11 = 17;
        /** @brief Reserved, must not be used */
    constexpr std::uint32_t ETH_MACHWF1R_RXFIFOSIZE_B_0x12 = 18;
        /** @brief Reserved, must not be used */
    constexpr std::uint32_t ETH_MACHWF1R_RXFIFOSIZE_B_0x13 = 19;
        /** @brief Reserved, must not be used */
    constexpr std::uint32_t ETH_MACHWF1R_RXFIFOSIZE_B_0x14 = 20;
        /** @brief Reserved, must not be used */
    constexpr std::uint32_t ETH_MACHWF1R_RXFIFOSIZE_B_0x15 = 21;
        /** @brief Reserved, must not be used */
    constexpr std::uint32_t ETH_MACHWF1R_RXFIFOSIZE_B_0x16 = 22;
        /** @brief Reserved, must not be used */
    constexpr std::uint32_t ETH_MACHWF1R_RXFIFOSIZE_B_0x17 = 23;
        /** @brief Reserved, must not be used */
    constexpr std::uint32_t ETH_MACHWF1R_RXFIFOSIZE_B_0x18 = 24;
        /** @brief Reserved, must not be used */
    constexpr std::uint32_t ETH_MACHWF1R_RXFIFOSIZE_B_0x19 = 25;
        /** @brief Reserved, must not be used */
    constexpr std::uint32_t ETH_MACHWF1R_RXFIFOSIZE_B_0x1a = 26;
        /** @brief Reserved, must not be used */
    constexpr std::uint32_t ETH_MACHWF1R_RXFIFOSIZE_B_0x1b = 27;
        /** @brief Reserved, must not be used */
    constexpr std::uint32_t ETH_MACHWF1R_RXFIFOSIZE_B_0x1c = 28;
        /** @brief Reserved, must not be used */
    constexpr std::uint32_t ETH_MACHWF1R_RXFIFOSIZE_B_0x1d = 29;
        /** @brief Reserved, must not be used */
    constexpr std::uint32_t ETH_MACHWF1R_RXFIFOSIZE_B_0x1e = 30;
        /** @brief Reserved, must not be used */
    constexpr std::uint32_t ETH_MACHWF1R_RXFIFOSIZE_B_0x1f = 31;

    /** @brief MTL Transmit FIFO Size This field contains the configured value of MTL Tx FIFO in bytes expressed as Log to base 2 minus 7, that is, Log2(TXFIFO_SIZE) -7: */
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
     *          - B_0xb: Reserved, must not be used (value: 11)
     *          - B_0xc: Reserved, must not be used (value: 12)
     *          - B_0xd: Reserved, must not be used (value: 13)
     *          - B_0xe: Reserved, must not be used (value: 14)
     *          - B_0xf: Reserved, must not be used (value: 15)
     *          - B_0x10: Reserved, must not be used (value: 16)
     *          - B_0x11: Reserved, must not be used (value: 17)
     *          - B_0x12: Reserved, must not be used (value: 18)
     *          - B_0x13: Reserved, must not be used (value: 19)
     *          - B_0x14: Reserved, must not be used (value: 20)
     *          - B_0x15: Reserved, must not be used (value: 21)
     *          - B_0x16: Reserved, must not be used (value: 22)
     *          - B_0x17: Reserved, must not be used (value: 23)
     *          - B_0x18: Reserved, must not be used (value: 24)
     *          - B_0x19: Reserved, must not be used (value: 25)
     *          - B_0x1a: Reserved, must not be used (value: 26)
     *          - B_0x1b: Reserved, must not be used (value: 27)
     *          - B_0x1c: Reserved, must not be used (value: 28)
     *          - B_0x1d: Reserved, must not be used (value: 29)
     *          - B_0x1e: Reserved, must not be used (value: 30)
     *          - B_0x1f: Reserved, must not be used (value: 31)
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
        /** @brief Reserved, must not be used */
    constexpr std::uint32_t ETH_MACHWF1R_TXFIFOSIZE_B_0xb = 11;
        /** @brief Reserved, must not be used */
    constexpr std::uint32_t ETH_MACHWF1R_TXFIFOSIZE_B_0xc = 12;
        /** @brief Reserved, must not be used */
    constexpr std::uint32_t ETH_MACHWF1R_TXFIFOSIZE_B_0xd = 13;
        /** @brief Reserved, must not be used */
    constexpr std::uint32_t ETH_MACHWF1R_TXFIFOSIZE_B_0xe = 14;
        /** @brief Reserved, must not be used */
    constexpr std::uint32_t ETH_MACHWF1R_TXFIFOSIZE_B_0xf = 15;
        /** @brief Reserved, must not be used */
    constexpr std::uint32_t ETH_MACHWF1R_TXFIFOSIZE_B_0x10 = 16;
        /** @brief Reserved, must not be used */
    constexpr std::uint32_t ETH_MACHWF1R_TXFIFOSIZE_B_0x11 = 17;
        /** @brief Reserved, must not be used */
    constexpr std::uint32_t ETH_MACHWF1R_TXFIFOSIZE_B_0x12 = 18;
        /** @brief Reserved, must not be used */
    constexpr std::uint32_t ETH_MACHWF1R_TXFIFOSIZE_B_0x13 = 19;
        /** @brief Reserved, must not be used */
    constexpr std::uint32_t ETH_MACHWF1R_TXFIFOSIZE_B_0x14 = 20;
        /** @brief Reserved, must not be used */
    constexpr std::uint32_t ETH_MACHWF1R_TXFIFOSIZE_B_0x15 = 21;
        /** @brief Reserved, must not be used */
    constexpr std::uint32_t ETH_MACHWF1R_TXFIFOSIZE_B_0x16 = 22;
        /** @brief Reserved, must not be used */
    constexpr std::uint32_t ETH_MACHWF1R_TXFIFOSIZE_B_0x17 = 23;
        /** @brief Reserved, must not be used */
    constexpr std::uint32_t ETH_MACHWF1R_TXFIFOSIZE_B_0x18 = 24;
        /** @brief Reserved, must not be used */
    constexpr std::uint32_t ETH_MACHWF1R_TXFIFOSIZE_B_0x19 = 25;
        /** @brief Reserved, must not be used */
    constexpr std::uint32_t ETH_MACHWF1R_TXFIFOSIZE_B_0x1a = 26;
        /** @brief Reserved, must not be used */
    constexpr std::uint32_t ETH_MACHWF1R_TXFIFOSIZE_B_0x1b = 27;
        /** @brief Reserved, must not be used */
    constexpr std::uint32_t ETH_MACHWF1R_TXFIFOSIZE_B_0x1c = 28;
        /** @brief Reserved, must not be used */
    constexpr std::uint32_t ETH_MACHWF1R_TXFIFOSIZE_B_0x1d = 29;
        /** @brief Reserved, must not be used */
    constexpr std::uint32_t ETH_MACHWF1R_TXFIFOSIZE_B_0x1e = 30;
        /** @brief Reserved, must not be used */
    constexpr std::uint32_t ETH_MACHWF1R_TXFIFOSIZE_B_0x1f = 31;

    /** @brief One-Step Timestamping Enable This bit is set to 1 when the Enable One-Step Timestamp Feature is selected. */
    using ETH_MACHWF1R_OSTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PTP Offload Enable This bit is set to 1 when the Enable PTP Timestamp Offload Feature is selected. */
    using ETH_MACHWF1R_PTOEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IEEE 1588 High Word Register Enable This bit is set to 1 when the Add IEEE 1588 Higher Word Register option is selected */
    using ETH_MACHWF1R_ADVTHWORD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Address width This field indicates the configured address width. Others: Reserved, must not be used */
    using ETH_MACHWF1R_ADDR64 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 32 bits (value: 0)
     */
        /** @brief 32 bits */
    constexpr std::uint32_t ETH_MACHWF1R_ADDR64_B_0x0 = 0;

    /** @brief DCB Feature Enable This bit is set to 1 when the Enable Data Center Bridging option is selected */
    using ETH_MACHWF1R_DCBEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Split Header Feature Enable This bit is set to 1 when the Enable Split Header Structure option is selected */
    using ETH_MACHWF1R_SPHEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TCP Segmentation Offload Enable This bit is set to 1 when the Enable TCP Segmentation Offloading for TCP/IP Packets option is selected */
    using ETH_MACHWF1R_TSOEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA Debug Registers Enable This bit is set to 1 when the Debug Mode Enable option is selected */
    using ETH_MACHWF1R_DBGMEMA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AV Feature Enable This bit is set to 1 when the Enable Audio Video Bridging option is selected. */
    using ETH_MACHWF1R_AVSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx Side Only AV Feature Enable This bit is set to 1 when the Enable Audio Video Bridging option on Rx Side Only is selected. */
    using ETH_MACHWF1R_RAVSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief One Step for PTP over UDP/IP Feature Enable This bit is set to 1 when the Enable one step timestamp for PTP over UDP/IP feature is selected. */
    using ETH_MACHWF1R_POUOST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hash Table Size This field indicates the size of the Hash table: */
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

    /** @brief Total number of L3 or L4 Filters This field indicates the total number of L3 or L4 filters: .. */
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
    /** @brief Number of MTL Receive Queues This field indicates the number of MTL Receive queues: .. */
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

    /** @brief Number of MTL Transmit Queues This field indicates the number of MTL Transmit queues: .. */
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

    /** @brief Number of DMA Receive Channels This field indicates the number of DMA Receive channels: .. */
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

    /** @brief Number of DMA Transmit Channels This field indicates the number of DMA Transmit channels: .. */
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

    /** @brief Number of PPS Outputs This field indicates the number of PPS outputs: */
    using ETH_MACHWF2R_PPSOUTNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No PPS output (value: 0)
     *          - B_0x1: 1 PPS output (value: 1)
     *          - B_0x2: 2 PPS outputs (value: 2)
     *          - B_0x3: 3 PPS outputs (value: 3)
     *          - B_0x4: 4 PPS outputs (value: 4)
     *          - B_0x5: Reserved, must not be used (value: 5)
     *          - B_0x6: Reserved, must not be used (value: 6)
     *          - B_0x7: Reserved, must not be used (value: 7)
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
        /** @brief Reserved, must not be used */
    constexpr std::uint32_t ETH_MACHWF2R_PPSOUTNUM_B_0x5 = 5;
        /** @brief Reserved, must not be used */
    constexpr std::uint32_t ETH_MACHWF2R_PPSOUTNUM_B_0x6 = 6;
        /** @brief Reserved, must not be used */
    constexpr std::uint32_t ETH_MACHWF2R_PPSOUTNUM_B_0x7 = 7;

    /** @brief Number of Auxiliary Snapshot Inputs This field indicates the number of auxiliary snapshot inputs: */
    using ETH_MACHWF2R_AUXSNAPNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No auxiliary input (value: 0)
     *          - B_0x1: 1 auxiliary input (value: 1)
     *          - B_0x2: 2 auxiliary inputs (value: 2)
     *          - B_0x3: 3 auxiliary inputs (value: 3)
     *          - B_0x4: 4 auxiliary inputs (value: 4)
     *          - B_0x5: Reserved, must not be used (value: 5)
     *          - B_0x6: Reserved, must not be used (value: 6)
     *          - B_0x7: Reserved, must not be used (value: 7)
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
        /** @brief Reserved, must not be used */
    constexpr std::uint32_t ETH_MACHWF2R_AUXSNAPNUM_B_0x5 = 5;
        /** @brief Reserved, must not be used */
    constexpr std::uint32_t ETH_MACHWF2R_AUXSNAPNUM_B_0x6 = 6;
        /** @brief Reserved, must not be used */
    constexpr std::uint32_t ETH_MACHWF2R_AUXSNAPNUM_B_0x7 = 7;

    /** @brief HW feature 3 register */
    using ETH_MACHWF3R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x128, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of Extended VLAN Tag Filters Enabled This field indicates the Number of Extended VLAN Tag Filters selected: */
    using ETH_MACHWF3R_NRVF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No Extended Rx VLAN Filters (value: 0)
     *          - B_0x1: 4 Extended Rx VLAN Filters (value: 1)
     *          - B_0x2: 8 Extended Rx VLAN Filters (value: 2)
     *          - B_0x3: 16 Extended Rx VLAN Filters (value: 3)
     *          - B_0x4: 24 Extended Rx VLAN Filters (value: 4)
     *          - B_0x5: 32 Extended Rx VLAN Filters (value: 5)
     *          - B_0x6: Reserved, must not be used (value: 6)
     *          - B_0x7: Reserved, must not be used (value: 7)
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
        /** @brief Reserved, must not be used */
    constexpr std::uint32_t ETH_MACHWF3R_NRVF_B_0x6 = 6;
        /** @brief Reserved, must not be used */
    constexpr std::uint32_t ETH_MACHWF3R_NRVF_B_0x7 = 7;

    /** @brief Queue/Channel based VLAN tag insertion on Tx enable This bit is set to 1 when the Enable Queue/Channel based VLAN tag insertion on Tx feature is selected. */
    using ETH_MACHWF3R_CBTISEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Double VLAN processing enable This bit is set to 1 when Double VLAN processing is enabled. */
    using ETH_MACHWF3R_DVLAN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDIO address register */
    using ETH_MACMDIOAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x200, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MII Busy The application sets this bit to instruct the SMA to initiate a Read or Write access to the MDIOS. The MAC clears this bit after the MDIO frame transfer is completed. Hence the software must not write or change any of the fields in and (ETH_MACMDIODR) as long as this bit is set. For write transfers, the application must first write 16-bit data in the MD field (and also RA field when C45E is set) in register before setting this bit. When C45E is set, it should also write into the RA field of (ETH_MACMDIODR) before initiating a read transfer. When a read transfer is completed (MII busy=0), the data read from the PHY register is valid in the MD field of the register (ETH_MACMDIODR). Note: Even if the addressed PHY is not present, there is no change in the functionality of this bit. */
    using ETH_MACMDIOAR_MB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clause 45 PHY Enable When this bit is set, Clause 45 capable PHY is connected to MDIO. When this bit is reset, Clause 22 capable PHY is connected to MDIO. */
    using ETH_MACMDIOAR_C45E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MII Operation Command This bit indicates the operation command to the PHY. When Clause 22 PHY is enabled, only Write and Read commands are valid. */
    using ETH_MACMDIOAR_GOC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Reserved, must not be used (value: 0)
     *          - B_0x1: Write (value: 1)
     *          - B_0x2: Post Read Increment Address for Clause 45 PHY (value: 2)
     *          - B_0x3: Read (value: 3)
     */
        /** @brief Reserved, must not be used */
    constexpr std::uint32_t ETH_MACMDIOAR_GOC_B_0x0 = 0;
        /** @brief Write */
    constexpr std::uint32_t ETH_MACMDIOAR_GOC_B_0x1 = 1;
        /** @brief Post Read Increment Address for Clause 45 PHY */
    constexpr std::uint32_t ETH_MACMDIOAR_GOC_B_0x2 = 2;
        /** @brief Read */
    constexpr std::uint32_t ETH_MACMDIOAR_GOC_B_0x3 = 3;

    /** @brief Skip Address Packet When this bit is set, the SMA does not send the address packets before read, write, or post-read increment address packets. This bit is valid only when C45E is set. */
    using ETH_MACMDIOAR_SKAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CSR Clock Range The CSR Clock Range selection determines the frequency of the MDC clock according to the CSR clock frequency used in your design: The suggested range of CSR clock frequency applicable for each value (when Bit 11 = 0) ensures that the MDC clock is approximately between 1.0 MHz to 2.5 MHz frequency range. When Bit 11 is set, you can achieve a higher frequency of the MDC clock than the frequency limit of 2.5 MHz (specified in the IEEE 802.3) and program a clock divider of lower value. For example, when CSR clock is of 100 MHz frequency and you program these bits to 1010, the resultant MDC clock is of 12.5 MHz which is above the range specified in IEEE 802.3. Program the following values only if the interfacing chips support faster MDC clocks: */
    using ETH_MACMDIOAR_CR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CSR clock = 60-100 MHz; MDC clock = CSR clock/42 (value: 0)
     *          - B_0x1: CSR clock = 100-150 MHz; MDC clock = CSR clock/62 (value: 1)
     *          - B_0x2: CSR clock = 20-35 MHz; MDC clock = CSR clock/16 (value: 2)
     *          - B_0x3: CSR clock = 35-60 MHz; MDC clock = CSR clock/26 (value: 3)
     *          - B_0x4: CSR clock = 150-250 MHz; MDC clock = CSR clock/102 (value: 4)
     *          - B_0x5: CSR clock = 250-300 MHz; MDC clock = CSR clock/124 (value: 5)
     *          - B_0x6: Reserved, must not be used (value: 6)
     *          - B_0x7: Reserved, must not be used (value: 7)
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
        /** @brief Reserved, must not be used */
    constexpr std::uint32_t ETH_MACMDIOAR_CR_B_0x6 = 6;
        /** @brief Reserved, must not be used */
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

    /** @brief Number of Training Clocks This field controls the number of trailing clock cycles generated on ETH_MDC after the end of transmission of MDIO frame. The valid values can be from 0 to 7. Programming the value to 011 indicates that there are additional three clock cycles on the MDC line after the end of MDIO frame transfer. */
    using ETH_MACMDIOAR_NTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Register/Device Address These bits select the PHY register in selected Clause 22 PHY device. These bits select the Device (MMD) in selected Clause 45 capable PHY. */
    using ETH_MACMDIOAR_RDA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Physical Layer Address This field indicates which Clause 22 PHY devices (out of 32 devices) the MAC is accessing. This field indicates which Clause 45 capable PHYs (out of 32 PHYs) the MAC is accessing. */
    using ETH_MACMDIOAR_PA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Back to Back transactions When this bit is set and the NTC has value greater than 0, then the MAC will inform the completion of a read or write command at the end of frame transfer (before the trailing clocks are transmitted). The software can thus initiate the next command which will be executed immediately irrespective of the number trailing clocks generated for the previous frame. When this bit is reset, then the read/write command completion (MII busy is cleared) only after the trailing clocks are generated. In this mode, it is ensured that the NTC is always generated after each frame. This bit must not be set when NTC=0. */
    using ETH_MACMDIOAR_BTB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Preamble Suppression Enable When this bit is set, the SMA will suppress the 32-bit preamble and transmit MDIO frames with only 1 preamble bit. When this bit is 0, the MDIO frame always has 32 bits of preamble as defined in the IEEE specifications. */
    using ETH_MACMDIOAR_PSE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDIO data register */
    using ETH_MACMDIODR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x204, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MII Data This field contains the 16-bit data value read from the PHY after a Management Read operation or the 16-bit data value to be written to the PHY before a Management Write operation. */
    using ETH_MACMDIODR_MD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Register Address This field is valid only when C45E is set. It contains the Register Address in the PHY to which the MDIO frame is intended for. */
    using ETH_MACMDIODR_RA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ARP address register */
    using ETH_MACARPAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x210, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ARP Protocol Address This field contains the IPv4 Destination Address of the MAC. This address is used for perfect match with the Protocol Address of Target field in the received ARP packet. */
    using ETH_MACARPAR_ARPPA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CSR software control register */
    using ETH_MACCSRSWCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x230, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Register Clear on Write 1 Enable When this bit is set, the access mode to some register fields changes to rc_w1 (clear on write) meaning that the application needs to set that respective bit to 1 to clear it. When this bit is reset, the access mode to these register fields remains rc_r (clear on read). */
    using ETH_MACCSRSWCR_RCWE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Slave Error Response Enable When this bit is set, the MAC responds with a Slave Error for accesses to reserved registers in CSR space. When this bit is reset, the MAC responds with an Okay response to any register accessed from CSR space. */
    using ETH_MACCSRSWCR_SEEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MAC Address 0 high register */
    using ETH_MACA0HR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x300, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MAC Address0[47:32] This field contains the upper 16 bits [47:32] of the first 6-byte MAC address. The MAC uses this field for filtering the received packets and inserting the MAC address in the Transmit Flow Control (Pause) Packets. */
    using ETH_MACA0HR_ADDRHI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Address Enable This bit is always set to 1. */
    using ETH_MACA0HR_AE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MAC Address 0 low register */
    using ETH_MACA0LR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x304, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MAC Address x [31:0] (x = 0 to 3) This field contains the lower 32 bits of the first 6-byte MAC address. The MAC uses this field for filtering the received packets and inserting the MAC address in the Transmit Flow Control (Pause) Packets. */
    using ETH_MACA0LR_ADDRLO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MAC Address 1 high register */
    using ETH_MACA1HR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x308, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MAC Address1 [47:32] This field contains the upper 16 bits[47:32] of the second 6-byte MAC address. */
    using ETH_MACA1HR_ADDRHI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Mask Byte Control These bits are mask control bits for comparing each of the MAC Address bytes. When set high, the MAC does not compare the corresponding byte of received DA or SA with the contents of MAC Address1 registers. Each bit controls the masking of the bytes as follows: Bit 29: ETH_MACAxHR[15:8] Bit 28: ETH_MACAxHR[7:0] Bit 27: ETH_MACAxLR[31:24] Bit 26: ETH_MACAxLR[23:16] Bit 25: ETH_MACAxLR[15:8] Bit 24: ETH_MACAxLR[7:0] You can filter a group of addresses (known as group address filtering) by masking one or more bytes of the address. */
    using ETH_MACA1HR_MBC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Source Address When this bit is set, the MAC Address1[47:0] is used to compare with the SA fields of the received packet. When this bit is reset, the MAC Address x[47:0] is used to compare with the DA fields of the received packet. */
    using ETH_MACA1HR_SA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DA (value: 0)
     *          - B_0x1: SA (value: 1)
     */
        /** @brief DA */
    constexpr std::uint32_t ETH_MACA1HR_SA_B_0x0 = 0;
        /** @brief SA */
    constexpr std::uint32_t ETH_MACA1HR_SA_B_0x1 = 1;

    /** @brief Address Enable When this bit is set, the address filter module uses the second MAC address for perfect filtering. When this bit is reset, the address filter module ignores the address for filtering. */
    using ETH_MACA1HR_AE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MAC Address 1 low register */
    using ETH_MACA1LR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MAC Address x [31:0] (x = 0 to 3) This field contains the lower 32 bits of the first 6-byte MAC address. The MAC uses this field for filtering the received packets and inserting the MAC address in the Transmit Flow Control (Pause) Packets. */
    using ETH_MACA1LR_ADDRLO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MAC Address 2 high register */
    using ETH_MACA2HR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x310, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MAC Address1 [47:32] This field contains the upper 16 bits[47:32] of the second 6-byte MAC address. */
    using ETH_MACA2HR_ADDRHI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Mask Byte Control These bits are mask control bits for comparing each of the MAC Address bytes. When set high, the MAC does not compare the corresponding byte of received DA or SA with the contents of MAC Address1 registers. Each bit controls the masking of the bytes as follows: Bit 29: ETH_MACAxHR[15:8] Bit 28: ETH_MACAxHR[7:0] Bit 27: ETH_MACAxLR[31:24] Bit 26: ETH_MACAxLR[23:16] Bit 25: ETH_MACAxLR[15:8] Bit 24: ETH_MACAxLR[7:0] You can filter a group of addresses (known as group address filtering) by masking one or more bytes of the address. */
    using ETH_MACA2HR_MBC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Source Address When this bit is set, the MAC Address1[47:0] is used to compare with the SA fields of the received packet. When this bit is reset, the MAC Address x[47:0] is used to compare with the DA fields of the received packet. */
    using ETH_MACA2HR_SA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DA (value: 0)
     *          - B_0x1: SA (value: 1)
     */
        /** @brief DA */
    constexpr std::uint32_t ETH_MACA2HR_SA_B_0x0 = 0;
        /** @brief SA */
    constexpr std::uint32_t ETH_MACA2HR_SA_B_0x1 = 1;

    /** @brief Address Enable When this bit is set, the address filter module uses the second MAC address for perfect filtering. When this bit is reset, the address filter module ignores the address for filtering. */
    using ETH_MACA2HR_AE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MAC Address 2 low register */
    using ETH_MACA2LR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x314, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MAC Address x [31:0] (x = 0 to 3) This field contains the lower 32 bits of the first 6-byte MAC address. The MAC uses this field for filtering the received packets and inserting the MAC address in the Transmit Flow Control (Pause) Packets. */
    using ETH_MACA2LR_ADDRLO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MAC Address 3 high register */
    using ETH_MACA3HR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x318, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MAC Address1 [47:32] This field contains the upper 16 bits[47:32] of the second 6-byte MAC address. */
    using ETH_MACA3HR_ADDRHI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Mask Byte Control These bits are mask control bits for comparing each of the MAC Address bytes. When set high, the MAC does not compare the corresponding byte of received DA or SA with the contents of MAC Address1 registers. Each bit controls the masking of the bytes as follows: Bit 29: ETH_MACAxHR[15:8] Bit 28: ETH_MACAxHR[7:0] Bit 27: ETH_MACAxLR[31:24] Bit 26: ETH_MACAxLR[23:16] Bit 25: ETH_MACAxLR[15:8] Bit 24: ETH_MACAxLR[7:0] You can filter a group of addresses (known as group address filtering) by masking one or more bytes of the address. */
    using ETH_MACA3HR_MBC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Source Address When this bit is set, the MAC Address1[47:0] is used to compare with the SA fields of the received packet. When this bit is reset, the MAC Address x[47:0] is used to compare with the DA fields of the received packet. */
    using ETH_MACA3HR_SA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DA (value: 0)
     *          - B_0x1: SA (value: 1)
     */
        /** @brief DA */
    constexpr std::uint32_t ETH_MACA3HR_SA_B_0x0 = 0;
        /** @brief SA */
    constexpr std::uint32_t ETH_MACA3HR_SA_B_0x1 = 1;

    /** @brief Address Enable When this bit is set, the address filter module uses the second MAC address for perfect filtering. When this bit is reset, the address filter module ignores the address for filtering. */
    using ETH_MACA3HR_AE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MAC Address 3 low register */
    using ETH_MACA3LR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x31C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MAC Address x [31:0] (x = 0 to 3) This field contains the lower 32 bits of the first 6-byte MAC address. The MAC uses this field for filtering the received packets and inserting the MAC address in the Transmit Flow Control (Pause) Packets. */
    using ETH_MACA3LR_ADDRLO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMC control register */
    using ETH_MMC_CONTROL = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x700, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Counters Reset When this bit is set, all counters are reset. This bit is cleared automatically after 1 clock cycle. */
    using ETH_MMC_CONTROL_CNTRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Counter Stop Rollover When this bit is set, the counter does not roll over to zero after reaching the maximum value. */
    using ETH_MMC_CONTROL_CNTSTOPRO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reset on Read When this bit is set, the MMC counters are reset to zero after Read (self-clearing after reset). The counters are cleared when the least significant byte lane (Bits[7:0]) is read. */
    using ETH_MMC_CONTROL_RSTONRD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMC Counter Freeze When this bit is set, it freezes all MMC counters to their current value. Until this bit is reset to 0, no MMC counter is updated because of any transmitted or received packet. If any MMC counter is read with the Reset on Read bit set, then that counter is also cleared in this mode. */
    using ETH_MMC_CONTROL_CNTFREEZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Counters Preset When this bit is set, all counters are initialized or preset to almost full or almost half according to the CNTPRSTLVL bit. This bit is cleared automatically after 1 clock cycle. This bit, along with the CNTPRSTLVL bit, is useful for debugging and testing the assertion of interrupts because of MMC counter becoming half-full or full. */
    using ETH_MMC_CONTROL_CNTPRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Full-Half Preset When this bit is low and the CNTPRST bit is set, all MMC counters get preset to almost-half value. All octet counters get preset to 0x7FFF_F800 (Half 2Kbytes) and all packet-counters get preset to 0x7FFF_FFF0 (Half 16). When this bit is high and the CNTPRST bit is set, all MMC counters get preset to almost-full value. All octet counters get preset to 0xFFFF_F800 (Full 2Kbytes) and all packet-counters get preset to 0xFFFF_FFF0 (Full 16). For 16-bit counters, the almost-half preset values are 0x7800 and 0x7FF0 for the respective octet and packet counters. Similarly, the almost-full preset values for the 16-bit counters are 0xF800 and 0xFFF0. */
    using ETH_MMC_CONTROL_CNTPRSTLVL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update MMC Counters for Dropped Broadcast Packets The CNTRST bit has a higher priority than the CNTPRST bit. Therefore, when the software tries to set both bits in the same write cycle, all counters are cleared and the CNTPRST bit is not set. When set, the MAC updates all related MMC Counters for Broadcast packets that are dropped because of the setting of the DBF bit of (ETH_MACPFR). When reset, the MMC Counters are not updated for dropped Broadcast packets. */
    using ETH_MMC_CONTROL_UCDBC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMC Rx interrupt register */
    using ETH_MMC_RX_INTERRUPT = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x704, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMC Receive CRC Error Packet Counter Interrupt Status This bit is set when the counter reaches half of the maximum value or the maximum value. */
    using ETH_MMC_RX_INTERRUPT_RXCRCERPIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMC Receive Alignment Error Packet Counter Interrupt Status This bit is set when the (ETH_RX_ALIGNMENT_ERROR_PACKETS) counter reaches half of the maximum value or the maximum value. */
    using ETH_MMC_RX_INTERRUPT_RXALGNERPIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMC Receive Unicast Good Packet Counter Interrupt Status This bit is set when the (ETH_RX_UNICAST_PACKETS_GOOD) counter reaches half of the maximum value or the maximum value. */
    using ETH_MMC_RX_INTERRUPT_RXUCGPIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMC Receive LPI microsecond counter interrupt status This bit is set when the counter reaches half of the maximum value or the maximum value. */
    using ETH_MMC_RX_INTERRUPT_RXLPIUSCIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMC Receive LPI transition counter interrupt status This bit is set when the counter reaches half of the maximum value or the maximum value. */
    using ETH_MMC_RX_INTERRUPT_RXLPITRCIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMC Tx interrupt register */
    using ETH_MMC_TX_INTERRUPT = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x708, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMC Transmit Single Collision Good Packet Counter Interrupt Status This bit is set when the (ETH_TX_SINGLE_COLLISION_GOOD_PACKETS) counter reaches half of the maximum value or the maximum value. */
    using ETH_MMC_TX_INTERRUPT_TXSCOLGPIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMC Transmit Multiple Collision Good Packet Counter Interrupt Status This bit is set when the (ETH_TX_MULTIPLE_COLLISION_GOOD_PACKETS) counter reaches half of the maximum value or the maximum value. */
    using ETH_MMC_TX_INTERRUPT_TXMCOLGPIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMC Transmit Good Packet Counter Interrupt Status This bit is set when the counter reaches half of the maximum value or the maximum value. */
    using ETH_MMC_TX_INTERRUPT_TXGPKTIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMC Transmit LPI microsecond counter interrupt status This bit is set when the counter reaches half of the maximum value or the maximum value. */
    using ETH_MMC_TX_INTERRUPT_TXLPIUSCIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMC Transmit LPI transition counter interrupt status This bit is set when the counter reaches half of the maximum value or the maximum value. */
    using ETH_MMC_TX_INTERRUPT_TXLPITRCIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMC Rx interrupt mask register */
    using ETH_MMC_RX_INTERRUPT_MASK = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x70C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMC Receive CRC Error Packet Counter Interrupt Mask Setting this bit masks the interrupt when the (ETH_RX_CRC_ERROR_PACKETS) counter reaches half of the maximum value or the maximum value. */
    using ETH_MMC_RX_INTERRUPT_MASK_RXCRCERPIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMC Receive Alignment Error Packet Counter Interrupt Mask Setting this bit masks the interrupt when the (ETH_RX_ALIGNMENT_ERROR_PACKETS) counter reaches half of the maximum value or the maximum value. */
    using ETH_MMC_RX_INTERRUPT_MASK_RXALGNERPIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMC Receive Unicast Good Packet Counter Interrupt Mask Setting this bit masks the interrupt when the (ETH_RX_UNICAST_PACKETS_GOOD) counter reaches half of the maximum value or the maximum value. */
    using ETH_MMC_RX_INTERRUPT_MASK_RXUCGPIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMC Receive LPI microsecond counter interrupt Mask Setting this bit masks the interrupt when the (ETH_RX_LPI_USEC_CNTR) counter reaches half of the maximum value or the maximum value. */
    using ETH_MMC_RX_INTERRUPT_MASK_RXLPIUSCIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMC Receive LPI transition counter interrupt Mask Setting this bit masks the interrupt when the (ETH_RX_LPI_TRAN_CNTR) counter reaches half of the maximum value or the maximum value. */
    using ETH_MMC_RX_INTERRUPT_MASK_RXLPITRCIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMC Tx interrupt mask register */
    using ETH_MMC_TX_INTERRUPT_MASK = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x710, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMC Transmit Single Collision Good Packet Counter Interrupt Mask Setting this bit masks the interrupt when the (ETH_TX_SINGLE_COLLISION_GOOD_PACKETS) counter reaches half of the maximum value or the maximum value. */
    using ETH_MMC_TX_INTERRUPT_MASK_TXSCOLGPIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMC Transmit Multiple Collision Good Packet Counter Interrupt Mask Setting this bit masks the interrupt when the (ETH_TX_MULTIPLE_COLLISION_GOOD_PACKETS) counter reaches half of the maximum value or the maximum value. */
    using ETH_MMC_TX_INTERRUPT_MASK_TXMCOLGPIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMC Transmit Good Packet Counter Interrupt Mask Setting this bit masks the interrupt when the (ETH_TX_PACKET_COUNT_GOOD) counter reaches half of the maximum value or the maximum value. */
    using ETH_MMC_TX_INTERRUPT_MASK_TXGPKTIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMC Transmit LPI microsecond counter interrupt Mask Setting this bit masks the interrupt when the (ETH_TX_LPI_USEC_CNTR) counter reaches half of the maximum value or the maximum value. */
    using ETH_MMC_TX_INTERRUPT_MASK_TXLPIUSCIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMC Transmit LPI transition counter interrupt Mask Setting this bit masks the interrupt when the (ETH_TX_LPI_TRAN_CNTR) counter reaches half of the maximum value or the maximum value. */
    using ETH_MMC_TX_INTERRUPT_MASK_TXLPITRCIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx single collision good packets register */
    using ETH_TX_SINGLE_COLLISION_GOOD_PACKETS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x74C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx Single Collision Good Packets This field indicates the number of successfully transmitted packets after a single collision in the half-duplex mode. */
    using ETH_TX_SINGLE_COLLISION_GOOD_PACKETS_TXSNGLCOLG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx multiple collision good packets register */
    using ETH_TX_MULTIPLE_COLLISION_GOOD_PACKETS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x750, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx Multiple Collision Good Packets This field indicates the number of successfully transmitted packets after multiple collisions in the half-duplex mode. */
    using ETH_TX_MULTIPLE_COLLISION_GOOD_PACKETS_TXMULTCOLG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx packet count good register */
    using ETH_TX_PACKET_COUNT_GOOD = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x768, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx Packet Count Good This field indicates the number of good packets transmitted. */
    using ETH_TX_PACKET_COUNT_GOOD_TXPKTG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx CRC error packets register */
    using ETH_RX_CRC_ERROR_PACKETS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x794, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx CRC Error Packets This field indicates the number of packets received with CRC error. */
    using ETH_RX_CRC_ERROR_PACKETS_RXCRCERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx alignment error packets register */
    using ETH_RX_ALIGNMENT_ERROR_PACKETS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x798, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx Alignment Error Packets This field indicates the number of packets received with alignment (dribble) error. It is valid only in 10/100 mode. */
    using ETH_RX_ALIGNMENT_ERROR_PACKETS_RXALGNERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx unicast packets good register */
    using ETH_RX_UNICAST_PACKETS_GOOD = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7C4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx Unicast Packets Good This field indicates the number of good unicast packets received. */
    using ETH_RX_UNICAST_PACKETS_GOOD_RXUCASTG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx LPI microsecond timer register */
    using ETH_TX_LPI_USEC_CNTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7EC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx LPI Microseconds Counter This field indicates the number of microseconds Tx LPI is asserted. For every Tx LPI Entry and Exit, the Timer value can have an error of +/- 1 microsecond. */
    using ETH_TX_LPI_USEC_CNTR_TXLPIUSC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx LPI transition counter register */
    using ETH_TX_LPI_TRAN_CNTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7F0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx LPI Transition counter This field indicates the number of times Tx LPI Entry has occurred. Even if Tx LPI Entry occurs in Automate mode (because of LPITXA bit set in the (ETH_MACLCSR)), the counter will increment. */
    using ETH_TX_LPI_TRAN_CNTR_TXLPITRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx LPI microsecond counter register */
    using ETH_RX_LPI_USEC_CNTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7F4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx LPI Microseconds Counter This field indicates the number of microseconds Rx LPI is asserted. For every Rx LPI Entry and Exit, the Timer value can have an error of +/- 1 microsecond. */
    using ETH_RX_LPI_USEC_CNTR_RXLPIUSC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx LPI transition counter register */
    using ETH_RX_LPI_TRAN_CNTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7F8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx LPI Transition counter This field indicates the number of times Rx LPI Entry has occurred. */
    using ETH_RX_LPI_TRAN_CNTR_RXLPITRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief L3 and L4 control 0 register */
    using ETH_MACL3L4C0R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x900, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer 3 Protocol Enable When this bit is set, the Layer 3 IP Source or Destination Address matching is enabled for IPv6 packets. When this bit is reset, the Layer 3 IP Source or Destination Address matching is enabled for IPv4 packets. The Layer 3 matching is done only when the L3SAM0 or L3DAM0 bit is set. */
    using ETH_MACL3L4C0R_L3PEN0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer 3 IP SA Match Enable When this bit is set, the Layer 3 IP Source Address field is enabled for matching. When this bit is reset, the MAC ignores the Layer 3 IP Source Address field for matching. Note: When the L3PEN0 bit is set, you should set either this bit or the L3DAM0 bit because either IPv6 SA or DA can be checked for filtering. */
    using ETH_MACL3L4C0R_L3SAM0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer 3 IP SA Inverse Match Enable When this bit is set, the Layer 3 IP Source Address field is enabled for inverse matching. When this bit reset, the Layer 3 IP Source Address field is enabled for perfect matching. This bit is valid and applicable only when the L3SAM0 bit is set. */
    using ETH_MACL3L4C0R_L3SAIM0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer 3 IP DA Match Enable When this bit is set, the Layer 3 IP Destination Address field is enabled for matching. When this bit is reset, the MAC ignores the Layer 3 IP Destination Address field for matching. Note: When the L3PEN0 bit is set, you should set either this bit or the L3SAM0 bit because either IPv6 DA or SA can be checked for filtering. */
    using ETH_MACL3L4C0R_L3DAM0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer 3 IP DA Inverse Match Enable When this bit is set, the Layer 3 IP Destination Address field is enabled for inverse matching. When this bit is reset, the Layer 3 IP Destination Address field is enabled for perfect matching. This bit is valid and applicable only when the L3DAM0 bit is set high. */
    using ETH_MACL3L4C0R_L3DAIM0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer 3 IP SA higher bits match This field contains the number of lower bits of IP source address that are masked for matching in the IPv4 packets. The following list describes the values of this field: 2: Two LSbs [1:0] are masked .. 31: All bits except MSb are masked. Condition: IPv6 packets: This field contains Bits[4:0] of L3HSBM0. These bits indicate the number of higher bits of IP source or destination address matched in the IPv6 packets. This field is valid and applicable only when the L3DAM0 or L3SAM0 bit is set high. */
    using ETH_MACL3L4C0R_L3HSBM0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0_IPV4_PACKETS: No bits are masked. (value: 0)
     *          - B_0x1_IPV4_PACKETS: LSb[0] is masked (value: 1)
     */
        /** @brief No bits are masked. */
    constexpr std::uint32_t ETH_MACL3L4C0R_L3HSBM0_B_0x0_IPV4_PACKETS = 0;
        /** @brief LSb[0] is masked */
    constexpr std::uint32_t ETH_MACL3L4C0R_L3HSBM0_B_0x1_IPV4_PACKETS = 1;

    /** @brief Layer 3 IP DA higher bits match This field contains the number of higher bits of IP Destination Address that are masked in the IPv4 packets: 2: Two LSbs [1:0] are masked .. 31: All bits except MSb are masked. Bits[12:11] of this field correspond to Bits[6:5] of L3HSBM0 which indicate the number of lower bits of IP Source or Destination Address that are masked in the IPv6 packets. Number of bits masked is given by concatenated values of the L3HDBM0[1:0] and L3HSBM0 bits: 2: Two LSbs [1:0] are masked .. 31: All bits except MSb are masked. This field is valid and applicable only when the L3DAM0 or L3SAM0 bit is set. */
    using ETH_MACL3L4C0R_L3HDBM0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0_IPV4_PACKETS: No bits are masked. (value: 0)
     *          - B_0x1_IPV4_PACKETS: LSb[0] is masked (value: 1)
     */
        /** @brief No bits are masked. */
    constexpr std::uint32_t ETH_MACL3L4C0R_L3HDBM0_B_0x0_IPV4_PACKETS = 0;
        /** @brief LSb[0] is masked */
    constexpr std::uint32_t ETH_MACL3L4C0R_L3HDBM0_B_0x1_IPV4_PACKETS = 1;

    /** @brief Layer 4 Protocol Enable When this bit is set, the Source and Destination Port number fields of UDP packets are used for matching. When this bit is reset, the Source and Destination Port number fields of TCP packets are used for matching. The Layer 4 matching is done only when the L4SPM0 or L4DPM0 bit is set. */
    using ETH_MACL3L4C0R_L4PEN0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer 4 Source Port Match Enable When this bit is set, the Layer 4 Source Port number field is enabled for matching. When this bit is reset, the MAC ignores the Layer 4 Source Port number field for matching. */
    using ETH_MACL3L4C0R_L4SPM0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer 4 Source Port Inverse Match Enable When this bit is set, the Layer 4 Source Port number field is enabled for inverse matching. When this bit is reset, the Layer 4 Source Port number field is enabled for perfect matching. This bit is valid and applicable only when the L4SPM0 bit is set high. */
    using ETH_MACL3L4C0R_L4SPIM0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer 4 Destination Port Match Enable When this bit is set, the Layer 4 Destination Port number field is enabled for matching. When this bit is reset, the MAC ignores the Layer 4 Destination Port number field for matching. */
    using ETH_MACL3L4C0R_L4DPM0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer 4 Destination Port Inverse Match Enable When this bit is set, the Layer 4 Destination Port number field is enabled for inverse matching. When this bit is reset, the Layer 4 Destination Port number field is enabled for perfect matching. This bit is valid and applicable only when the L4DPM0 bit is set high. */
    using ETH_MACL3L4C0R_L4DPIM0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ETH_MACL4A0R register */
    using ETH_MACL4A0R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x904, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer 4 Source Port Number Field When the L4PEN0 bit is reset and the L4DPM0 bit is set in the (ETH_MACL3L4C0R), this field contains the value to be matched with the TCP Source Port Number field in the IPv4 or IPv6 packets. When the L4PEN0 and L4DPM0 bits are set in (ETH_MACL3L4C0R), this field contains the value to be matched with the UDP Source Port Number field in the IPv4 or IPv6 packets. */
    using ETH_MACL4A0R_L4SP0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer 4 Destination Port Number Field When the L4PEN0 bit is reset and the L4DPM0 bit is set in the (ETH_MACL3L4C0R), this field contains the value to be matched with the TCP Destination Port Number field in the IPv4 or IPv6 packets. When the L4PEN0 and L4DPM0 bits are set in (ETH_MACL3L4C0R), this field contains the value to be matched with the UDP Destination Port Number field in the IPv4 or IPv6 packets. */
    using ETH_MACL4A0R_L4DP0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer3 Address 0 filter 0 register */
    using ETH_MACL3A00R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x910, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer 3 Address 0 Field When the L3PEN0 and L3SAM0 bits are set in the (ETH_MACL3L4C0R), this field contains the value to be matched with Bits[31:0] of the IP Source Address field in the IPv6 packets. When the L3PEN0 and L3DAM0 bits are set in the (ETH_MACL3L4C0R), this field contains the value to be matched with Bits[31:0] of the IP Destination Address field in the IPv6 packets. When the L3PEN0 bit is reset and the L3SAM0 bit is set in the (ETH_MACL3L4C0R), this field contains the value to be matched with the IP Source Address field in the IPv4 packets. */
    using ETH_MACL3A00R_L3A00 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer3 Address 1 filter 0 register */
    using ETH_MACL3A10R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x914, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer 3 Address 1 Field When the L3PEN0 and L3SAM0 bits are set in the (ETH_MACL3L4C0R), this field contains the value to be matched with Bits[63:32] of the IP Source Address field in the IPv6 packets. When the L3PEN0 and L3DAM0 bits are set in the (ETH_MACL3L4C0R), this field contains the value to be matched with Bits[63:32] of the IP Destination Address field in the IPv6 packets. When the L3PEN0 bit is reset and the L3SAM0 bit is set in the (ETH_MACL3L4C0R), this field contains the value to be matched with the IP Destination Address field in the IPv4 packets. */
    using ETH_MACL3A10R_L3A10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer3 Address 2 filter 0 register */
    using ETH_MACL3A20R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x918, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer 3 Address 2 Field When the L3PEN0 and L3SAM0 bits are set in the (ETH_MACL3L4C0R), this field contains the value to be matched with Bits[95:64] of the IP Source Address field in the IPv6 packets. When the L3PEN0 and L3DAM0 bits are set in the (ETH_MACL3L4C0R), this field contains the value to be matched with Bits[95:64] of the IP Destination Address field in the IPv6 packets. When the L3PEN0 bit is reset in the , this field is not used. */
    using ETH_MACL3A20R_L3A20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer3 Address 3 filter 0 register */
    using ETH_MACL3A30R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x91C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer 3 Address 3 Field When the L3PEN0 and L3SAM0 bits are set in the (ETH_MACL3L4C0R), this field contains the value to be matched with Bits[127:96] of the IP Source Address field in the IPv6 packets. When the L3PEN0 and L3DAM0 bits are set in the (ETH_MACL3L4C0R), this field contains the value to be matched with Bits[127:96] of the IP Destination Address field in the IPv6 packets. When the L3PEN0 bit is reset in the , this field is not used. */
    using ETH_MACL3A30R_L3A30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief L3 and L4 control 1 register */
    using ETH_MACL3L4C1R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x930, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer 3 Protocol Enable When this bit is set, the Layer 3 IP Source or Destination Address matching is enabled for IPv6 packets. When this bit is reset, the Layer 3 IP Source or Destination Address matching is enabled for IPv4 packets. The Layer 3 matching is done only when the L3SAM1 or L3DAM1 bit is set. */
    using ETH_MACL3L4C1R_L3PEN1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer 3 IP SA Match Enable When this bit is set, the Layer 3 IP Source Address field is enabled for matching. When this bit is reset, the MAC ignores the Layer 3 IP Source Address field for matching. Note: When the L3PEN01 bit is set, you should set either this bit or the L3DAM1 bit because either IPv6 SA or DA can be checked for filtering. */
    using ETH_MACL3L4C1R_L3SAM1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer 3 IP SA Inverse Match Enable When this bit is set, the Layer 3 IP Source Address field is enabled for inverse matching. When this bit reset, the Layer 3 IP Source Address field is enabled for perfect matching. This bit is valid and applicable only when the L3SAM1 bit is set. */
    using ETH_MACL3L4C1R_L3SAIM1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer 3 IP DA Match Enable When this bit is set, the Layer 3 IP Destination Address field is enabled for matching. When this bit is reset, the MAC ignores the Layer 3 IP Destination Address field for matching. Note: When the L3PEN1 bit is set, you should set either this bit or the L3SAM1 bit because either IPv6 DA or SA can be checked for filtering. */
    using ETH_MACL3L4C1R_L3DAM1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer 3 IP DA Inverse Match Enable When this bit is set, the Layer 3 IP Destination Address field is enabled for inverse matching. When this bit is reset, the Layer 3 IP Destination Address field is enabled for perfect matching. This bit is valid and applicable only when the L3DAM1 bit is set high. */
    using ETH_MACL3L4C1R_L3DAIM1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer 3 IP SA Higher Bits Match This field contains the number of lower bits of IP Source Address that are masked for matching in the IPv4 packets. The following list describes the values of this field: 2: Two LSbs [1:0] are masked .. 31: All bits except MSb are masked. This field contains Bits[4:0] of L3HSBM1. These bits indicate the number of higher bits of IP Source or Destination Address matched in the IPv6 packets. This field is valid and applicable only when the L3DAM1 or L3SAM1 bit is set high. */
    using ETH_MACL3L4C1R_L3HSBM1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0_IPV4_PACKETS: No bits are masked. (value: 0)
     *          - B_0x1_IPV4_PACKETS: LSb[0] is masked (value: 1)
     */
        /** @brief No bits are masked. */
    constexpr std::uint32_t ETH_MACL3L4C1R_L3HSBM1_B_0x0_IPV4_PACKETS = 0;
        /** @brief LSb[0] is masked */
    constexpr std::uint32_t ETH_MACL3L4C1R_L3HSBM1_B_0x1_IPV4_PACKETS = 1;

    /** @brief Layer 3 IP DA higher bits match This field contains the number of lower bits of IP Destination Address that are masked for matching in the IPv4 packets. The following list describes the values of this field: 2: Two LSbs [1:0] are masked .. 31: All bits except MSb are masked. Bits[12:11] of this field correspond to Bits[6:5] of L3HSBM1, which indicate the number of lower bits of IP Source or Destination Address that are masked in the IPv6 packets. The following list describes the concatenated values of the L3HDBM1[1:0] and L3HSBM1 bits: 2: Two LSbs [1:0] are masked .. 127: All bits except MSb are masked This field is valid and applicable only when the L3DAM1 or L3SAM1 bit is set. */
    using ETH_MACL3L4C1R_L3HDBM1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0_IPV4_PACKETS: No bits are masked. (value: 0)
     *          - B_0x1_IPV4_PACKETS: LSb[0] is masked (value: 1)
     */
        /** @brief No bits are masked. */
    constexpr std::uint32_t ETH_MACL3L4C1R_L3HDBM1_B_0x0_IPV4_PACKETS = 0;
        /** @brief LSb[0] is masked */
    constexpr std::uint32_t ETH_MACL3L4C1R_L3HDBM1_B_0x1_IPV4_PACKETS = 1;

    /** @brief Layer 4 Protocol Enable When this bit is set, the Source and Destination Port number fields of UDP packets are used for matching. When this bit is reset, the Source and Destination Port number fields of TCP packets are used for matching. The Layer 4 matching is done only when the L4SPM1 or L4DPM1 bit is set. */
    using ETH_MACL3L4C1R_L4PEN1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer 4 Source Port Match Enable When this bit is set, the Layer 4 Source Port number field is enabled for matching. When this bit is reset, the MAC ignores the Layer 4 Source Port number field for matching. */
    using ETH_MACL3L4C1R_L4SPM1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer 4 Source Port Inverse Match Enable When this bit is set, the Layer 4 Source Port number field is enabled for inverse matching. When this bit is reset, the Layer 4 Source Port number field is enabled for perfect matching. This bit is valid and applicable only when the L4SPM1 bit is set high. */
    using ETH_MACL3L4C1R_L4SPIM1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer 4 Destination Port Match Enable When this bit is set, the Layer 4 Destination Port number field is enabled for matching. When this bit is reset, the MAC ignores the Layer 4 Destination Port number field for matching. */
    using ETH_MACL3L4C1R_L4DPM1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer 4 Destination Port Inverse Match Enable When this bit is set, the Layer 4 Destination Port number field is enabled for inverse matching. When this bit is reset, the Layer 4 Destination Port number field is enabled for perfect matching. This bit is valid and applicable only when the L4DPM1 bit is set high. */
    using ETH_MACL3L4C1R_L4DPIM1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ETH_MACL4A1R register */
    using ETH_MACL4A1R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x934, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer 4 Source Port Number Field When the L4PEN1 bit is reset and the L4DPM1 bit is set in the (ETH_MACL3L4C1R), this field contains the value to be matched with the TCP Source Port Number field in the IPv4 or IPv6 packets. When the L4PEN1 and L4DPM1 bits are set in (ETH_MACL3L4C1R), this field contains the value to be matched with the UDP Source Port Number field in the IPv4 or IPv6 packets. */
    using ETH_MACL4A1R_L4SP1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer 4 Destination Port Number Field When the L4PEN1 bit is reset and the L4DPM1 bit is set in the (ETH_MACL3L4C1R), this field contains the value to be matched with the TCP Destination Port Number field in the IPv4 or IPv6 packets. When the L4PEN1 and L4DPM1 bits are set in (ETH_MACL3L4C1R), this field contains the value to be matched with the UDP Destination Port Number field in the IPv4 or IPv6 packets. */
    using ETH_MACL4A1R_L4DP1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer3 address 0 filter 1 Register */
    using ETH_MACL3A01R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x940, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer 3 Address 0 Field When the L3PEN1 and L3SAM1bits are set in the (ETH_MACL3L4C1R), this field contains the value to be matched with Bits[31:0] of the IP Source Address field in the IPv6 packets. When the L3PEN1 and L3DAM1 bits are set in the (ETH_MACL3L4C1R), this field contains the value to be matched with Bits[31:0] of the IP Destination Address field in the IPv6 packets. When the L3PEN1 bit is reset and the L3SAM1 bit is set in the (ETH_MACL3L4C1R), this field contains the value to be matched with the IP Source Address field in the IPv4 packets. */
    using ETH_MACL3A01R_L3A01 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer3 address 1 filter 1 register */
    using ETH_MACL3A11R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x944, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer 3 Address 1 Field When the L3PEN1 and L3SAM1 bits are set in the (ETH_MACL3L4C1R), this field contains the value to be matched with Bits[63:32] of the IP Source Address field in the IPv6 packets. When the L3PEN1 and L3DAM1 bits are set in the (ETH_MACL3L4C1R), this field contains the value to be matched with Bits[63:32] of the IP Destination Address field in the IPv6 packets. When the L3PEN1 bit is reset and the L3SAM1 bit is set in the (ETH_MACL3L4C1R), this field contains the value to be matched with the IP Destination Address field in the IPv4 packets. */
    using ETH_MACL3A11R_L3A11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer3 address 2 filter 1 Register */
    using ETH_MACL3A21R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x948, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer 3 Address 2 Field When the L3PEN1 and L3SAM1 bits are set in the (ETH_MACL3L4C1R), this field contains the value to be matched with Bits[95:64] of the IP Source Address field in the IPv6 packets. When the L3PEN1 and L3DAM1 bits are set in the (ETH_MACL3L4C1R), this field contains the value to be matched with Bits[95:64] of the IP Destination Address field in the IPv6 packets. When the L3PEN1 bit is reset in the , this field is not used. */
    using ETH_MACL3A21R_L3A21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer3 address 3 filter 1 register */
    using ETH_MACL3A31R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x94C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Layer 3 Address 3 Field When the L3PEN1 and L3SAM1 bits are set in the (ETH_MACL3L4C1R), this field contains the value to be matched with Bits[127:96] of the IP Source Address field in the IPv6 packets. When the L3PEN1 and L3DAM1 bits are set in the (ETH_MACL3L4C1R), this field contains the value to be matched with Bits[127:96] of the IP Destination Address field in the IPv6 packets. When the L3PEN1 bit is reset in the , this field is not used. */
    using ETH_MACL3A31R_L3A31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timestamp control Register */
    using ETH_MACTSCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB00, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable Timestamp When this bit is set, the timestamp is added for Transmit and Receive packets. When disabled, timestamp is not added for transmit and receive packets and the Timestamp Generator is also suspended. You need to initialize the Timestamp (system time) after enabling this mode. On the Receive side, the MAC processes the 1588 packets only if this bit is set. */
    using ETH_MACTSCR_TSENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fine or Coarse Timestamp Update When this bit is set, the Fine method is used to update system timestamp. When this bit is reset, Coarse method is used to update the system timestamp. */
    using ETH_MACTSCR_TSCFUPDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Initialize Timestamp When this bit is set, the system time is initialized (overwritten) with the value specified in the and update register (ETH_MACSTNUR). This bit should be zero before it is updated. This bit is reset when the initialization is complete. */
    using ETH_MACTSCR_TSINIT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update Timestamp When this bit is set, the system time is updated (added or subtracted) with the value specified in and update register (ETH_MACSTNUR). This bit should be zero before updating it. This bit is reset when the update is complete in hardware. */
    using ETH_MACTSCR_TSUPDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update Addend Register When this bit is set, the content of the Timestamp Addend register is updated in the PTP block for fine correction. This bit is cleared when the update is complete. This bit should be zero before it is set. */
    using ETH_MACTSCR_TSADDREG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable Timestamp for All Packets When this bit is set, the timestamp snapshot is enabled for all packets received by the MAC. */
    using ETH_MACTSCR_TSENALL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timestamp Digital or Binary Rollover Control When this bit is set, the Timestamp Low register rolls over after 0x3B9A_C9FF value (that is, 1 nanosecond accuracy) and increments the timestamp (High) seconds. When this bit is reset, the rollover value of sub-second register is 0x7FFF_FFFF. The sub-second increment must be programmed correctly depending on the PTP reference clock frequency and the value of this bit. */
    using ETH_MACTSCR_TSCTRLSSR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable PTP Packet Processing for Version 2 Format When this bit is set, the IEEE 1588 version 2 format is used to process the PTP packets. When this bit is reset, the IEEE 1588 version 1 format is used to process the PTP packets. The IEEE 1588 formats are described in 'PTP Processing and Control'. */
    using ETH_MACTSCR_TSVER2ENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable Processing of PTP over Ethernet Packets When this bit is set, the MAC receiver processes the PTP packets encapsulated directly in the Ethernet packets. When this bit is reset, the MAC ignores the PTP over Ethernet packets. */
    using ETH_MACTSCR_TSIPENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable Processing of PTP Packets Sent over IPv6-UDP When this bit is set, the MAC receiver processes the PTP packets encapsulated in IPv6-UDP packets. When this bit is clear, the MAC ignores the PTP transported over IPv6-UDP packets. */
    using ETH_MACTSCR_TSIPV6ENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable Processing of PTP Packets Sent over IPv4-UDP When this bit is set, the MAC receiver processes the PTP packets encapsulated in IPv4-UDP packets. When this bit is reset, the MAC ignores the PTP transported over IPv4-UDP packets. This bit is set by default. */
    using ETH_MACTSCR_TSIPV4ENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable Timestamp Snapshot for Event Messages When this bit is set, the timestamp snapshot is taken only for event messages (SYNC, Delay_Req, Pdelay_Req, or Pdelay_Resp). When this bit is reset, the snapshot is taken for all messages except Announce, Management, and Signaling. For more information about the timestamp snapshots, see . */
    using ETH_MACTSCR_TSEVNTENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable Snapshot for Messages Relevant to Master When this bit is set, the snapshot is taken only for the messages that are relevant to the master node. Otherwise, the snapshot is taken for the messages relevant to the slave node. */
    using ETH_MACTSCR_TSMSTRENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Select PTP packets for Taking Snapshots These bits, along with Bits 15 and 14, define the set of PTP packet types for which snapshot needs to be taken. The encoding is given in Register Bits. */
    using ETH_MACTSCR_SNAPTYPSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable MAC Address for PTP Packet Filtering When this bit is set, the DA MAC address (that matches any MAC Address register) is used to filter the PTP packets when PTP is directly sent over Ethernet. When this bit is set, received PTP packets with DA containing a special multicast or unicast address that matches the one programmed in MAC address registers are considered for processing as indicated below, when PTP is directly sent over Ethernet. For normal time stamping operation, MAC address registers 0 to 31 is considered for unicast destination address matching. For PTP offload, only MAC address register 0 is considered for unicast destination address matching. */
    using ETH_MACTSCR_TSENMACADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Timestamp Status Mode When this bit is set, the MAC overwrites the earlier transmit timestamp status even if it is not read by the software. The MAC indicates this by setting the TXTSSMIS bit of the timestamp status nanoseconds register (ETH_MACTXTSSNR) register. When this bit is reset, the MAC ignores the timestamp status of current packet if the timestamp status of previous packet is not read by the software. The MAC indicates this by setting the TXTSSMIS bit of the (ETH_MACTXTSSNR). */
    using ETH_MACTSCR_TXTSSTSM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AV 802.1AS Mode Enable When this bit is set, the MAC processes only untagged PTP over Ethernet packets for providing PTP status and capturing timestamp snapshots, that is, IEEE 802.1AS operating mode. When PTP offload feature is enabled, for the purpose of PTP offload, the transport specific field in the PTP header is generated and checked based on the value of this bit. */
    using ETH_MACTSCR_AV8021ASMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sub-second increment register */
    using ETH_MACSSIR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB04, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sub-second Increment Value The value programmed in this field is accumulated every clock cycle (of clk_ptp_i) with the contents of the sub-second register. For example, when the PTP clock is 50 MHz (period is 20 ns), you should program 20 (0x14) when the System Time Nanoseconds register has an accuracy of 1 ns [TSCTRLSSR bit is set in (ETH_MACTSCR)]. When TSCTRLSSR is cleared, the Nanoseconds register has a resolution of ~0.465 ns. In this case, you should program a value of 43 (0x2B) which is derived by 20 ns/0.465. */
    using ETH_MACSSIR_SSINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief System time seconds register */
    using ETH_MACSTSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB08, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timestamp Second The value in this field indicates the current value in seconds of the System Time maintained by the MAC. */
    using ETH_MACSTSR_TSS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief System time nanoseconds register */
    using ETH_MACSTNR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB0C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timestamp Sub-seconds The value in this field has the sub-second representation of time, with an accuracy of 0.46 ns. When TSCTRLSSR is set in , each bit represents 1 ns. The maximum value is 0x3B9A_C9FF after which it rolls-over to zero. */
    using ETH_MACSTNR_TSSS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 31, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief System time seconds update register */
    using ETH_MACSTSUR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timestamp Seconds The value in this field is the sub-second part of the update. When ADDSUB is reset, this field must be programmed with the sub-second part of the update value, with an accuracy based on the TSCTRLSSR bit of the . When ADDSUB is set, then this field must be programmed with the complement of the sub-second part of the update value as described below. When TSCTRLSSR is set, then the programmed value must be 10^9 - sub-second value>. When TSCTRLSSR is reset, then the programmed value must be 2^31 - sub-second_value> For example, when TSCTRLSSR bit is set and if 2.000000001 seconds need to be subtracted from the system time, then the TSS field in the register (ETH_MACSTSUR) must be 0xFFFF_FFFE (that is, 2^32 - 2), ADDSUB bit in this register should be set, and the TSSS field must be 0x3B9A_C9FF (that is, 10^9 - 1). */
    using ETH_MACSTSUR_TSS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ETH_MACSTNUR register */
    using ETH_MACSTNUR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timestamp Sub-seconds The value in this field has the sub-second representation of time, with an accuracy of 0.46 ns. When the TSCTRLSSR bit is set in the , each bit represents 1 ns and the programmed value should not exceed 0x3B9A_C9FF. */
    using ETH_MACSTNUR_TSSS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 31, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Add or Subtract Time When this bit is set, the time value is subtracted with the contents of the update register. When this bit is reset, the time value is added with the contents of the update register. */
    using ETH_MACSTNUR_ADDSUB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timestamp addend register */
    using ETH_MACTSAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timestamp Addend Register This field indicates the 32-bit time value to be added to the Accumulator register to achieve time synchronization. */
    using ETH_MACTSAR_TSAR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timestamp status register */
    using ETH_MACTSSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timestamp Seconds Overflow When this bit is set, it indicates that the seconds value of the timestamp (when supporting version 2 format) has overflowed beyond 32'hFFFF_FFFF. This bit is cleared when the application reads this bit (or write of 1 when RCWE bit in software control register (ETH_MACCSRSWCR) is set) */
    using ETH_MACTSSR_TSSOVF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timestamp Target Time Reached When set, this bit indicates that the value of system time is greater than or equal to the value specified in the and nanoseconds register (ETH_MACPPSTTNR). This bit is cleared when the application reads this bit (or write of 1 when RCWE bit in software control register (ETH_MACCSRSWCR) is set) */
    using ETH_MACTSSR_TSTARGT0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Auxiliary Timestamp Trigger Snapshot This bit is set high when the auxiliary snapshot is written to the FIFO. This bit is cleared when the application reads this bit (or write of 1 when RCWE bit in software control register (ETH_MACCSRSWCR) is set). */
    using ETH_MACTSSR_AUXTSTRIG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timestamp Target Time Error This bit is set when the latest target time programmed in the register (ETH_MACPPSTTSR) and (ETH_MACPPSTTNR) elapses. This bit is cleared when the application reads this bit (or write of 1 when RCWE bit in is set). */
    using ETH_MACTSSR_TSTRGTERR0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx Timestamp Status Interrupt Status When drop transmit status is enabled in MTL, this bit is set when the captured transmit timestamp is updated in the (ETH_MACTXTSSNR) and . When PTP offload feature is enabled, this bit is set when the captured transmit timestamp is updated in the and timestamp status seconds register (ETH_MACTXTSSSR), for PTO generated Delay Request and Pdelay request packets. This bit is cleared when the is read (or write of 1 when RCWE bit in is set). */
    using ETH_MACTSSR_TXTSSIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Auxiliary Timestamp Snapshot Trigger Identifier These bits identify the Auxiliary trigger inputs for which the timestamp available in the Auxiliary Snapshot Register is applicable. When more than one bit is set at the same time, it means that corresponding auxiliary triggers were sampled at the same clock. These bits are applicable only if the number of Auxiliary snapshots is more than one. One bit is assigned for each trigger as shown in the following list: Bit 16: Auxiliary trigger 0 Bit 17: Auxiliary trigger 1 Bit 18: Auxiliary trigger 2 Bit 19: Auxiliary trigger 3 The software can read this register to find the triggers that are set when the timestamp is taken. */
    using ETH_MACTSSR_ATSSTN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Auxiliary Timestamp Snapshot Trigger Missed This bit is set when the Auxiliary timestamp snapshot FIFO is full and external trigger was set. This indicates that the latest snapshot is not stored in the FIFO. */
    using ETH_MACTSSR_ATSSTM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of Auxiliary Timestamp Snapshots This field indicates the number of Snapshots available in the FIFO. A value equal to the depth of FIFO (4) indicates that the Auxiliary Snapshot FIFO is full. These bits are cleared (to 00000) when the Auxiliary snapshot FIFO clear bit is set. */
    using ETH_MACTSSR_ATSNS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx timestamp status nanoseconds register */
    using ETH_MACTXTSSNR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Timestamp Status Low This field contains the 31 bits of the Nanoseconds field of the Transmit packet's captured timestamp. */
    using ETH_MACTXTSSNR_TXTSSLO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 31, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Timestamp Status Missed When this bit is set, it indicates one of the following: The timestamp of the current packet is ignored if TXTSSTSM bit of the control Register (ETH_MACTSCR) is reset The timestamp of the previous packet is overwritten with timestamp of the current packet if TXTSSTSM bit of the is set. */
    using ETH_MACTXTSSNR_TXTSSMIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx timestamp status seconds register */
    using ETH_MACTXTSSSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Timestamp Status High This field contains the lower 32 bits of the Seconds field of Transmit packet's captured timestamp. */
    using ETH_MACTXTSSSR_TXTSSHI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Auxiliary control register */
    using ETH_MACACR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Auxiliary Snapshot FIFO Clear When set, this bit resets the pointers of the Auxiliary Snapshot FIFO. This bit is cleared when the pointers are reset and the FIFO is empty. When this bit is high, the auxiliary snapshots are stored in the FIFO. */
    using ETH_MACACR_ATSFC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Auxiliary Snapshot 0 Enable This bit controls the capturing of Auxiliary Snapshot Trigger 0. When this bit is set, the auxiliary snapshot of the event on eth_ptp_trg0 input is enabled. When this bit is reset, the events on this input are ignored. */
    using ETH_MACACR_ATSEN0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Auxiliary Snapshot 1 Enable This bit controls the capturing of Auxiliary Snapshot Trigger 1. When this bit is set, the auxiliary snapshot of the event on eth_ptp_trg1 input is enabled. When this bit is reset, the events on this input are ignored. */
    using ETH_MACACR_ATSEN1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Auxiliary Snapshot 2 Enable This bit controls the capturing of Auxiliary Snapshot Trigger 2. When this bit is set, the auxiliary snapshot of the event on eth_ptp_trg2 input is enabled. When this bit is reset, the events on this input are ignored. */
    using ETH_MACACR_ATSEN2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Auxiliary Snapshot 3 Enable This bit controls the capturing of Auxiliary Snapshot Trigger 3. When this bit is set, the auxiliary snapshot of the event on eth_ptp_trg3 input is enabled. When this bit is reset, the events on this input are ignored. */
    using ETH_MACACR_ATSEN3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Auxiliary timestamp nanoseconds register */
    using ETH_MACATSNR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Auxiliary Timestamp Contains the lower 31 bits (nanoseconds field) of the auxiliary timestamp. */
    using ETH_MACATSNR_AUXTSLO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 31, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Auxiliary timestamp seconds register */
    using ETH_MACATSSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB4C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Auxiliary Timestamp Contains the lower 32 bits of the Seconds field of the auxiliary timestamp. */
    using ETH_MACATSSR_AUXTSHI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timestamp Ingress asymmetric correction register */
    using ETH_MACTSIACR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief One-Step Timestamp Ingress Asymmetry Correction This field contains the ingress path asymmetry value to be added to correctionField of Pdelay_Resp PTP packet. The programmed value should be in units of nanoseconds and multiplied by 2^16. For example, 2.5 ns is represented as 0x00028000. The value can also be negative, which is represented in 2's complement form with bit 31 representing the sign bit. */
    using ETH_MACTSIACR_OSTIAC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timestamp Egress asymmetric correction register */
    using ETH_MACTSEACR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief One-Step Timestamp Egress Asymmetry Correction This field contains the egress path asymmetry value to be subtracted from correctionField of Pdelay_Resp PTP packet. The programmed value must be the negated value in units of nanoseconds multiplied by 2^16. For example, if the required correction is +2.5 ns, the programmed value must be 0xFFFD_8000, which is the 2's complement of 0x0002_8000(2.5 * 2^16). Similarly, if the required correction is -3.3 ns, the programmed value is 0x0003_4CCC (3.3 *2^16). */
    using ETH_MACTSEACR_OSTEAC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timestamp Ingress correction nanosecond register */
    using ETH_MACTSICNR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB58, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timestamp Ingress Correction This field contains the ingress path correction value as defined by the Ingress Correction expression. */
    using ETH_MACTSICNR_TSIC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timestamp Egress correction nanosecond register */
    using ETH_MACTSECNR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB5C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timestamp Egress Correction This field contains the nanoseconds part of the egress path correction value as defined by the Egress Correction expression. */
    using ETH_MACTSECNR_TSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ETH_MACPPSCR */
    using ETH_MACPPSCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB70, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PPS Output Frequency Control This field controls the frequency of the PPS output (eth_ptp_pps_out) signal. The default value of PPSCTRL is 0000, and the PPS output is 1 pulse (of width clk_ptp_i) every second. For other values of PPSCTRL, the PPS output becomes a generated clock of following frequencies: .. Note: In the binary rollover mode, the PPS output (eth_ptp_pps_out) has a duty cycle of 50 percent with these frequencies. In the digital rollover mode, the PPS output frequency is an average number. The actual clock is of different frequency that gets synchronized every second. For example: When PPSCTRL = 0001, the PPS (1 Hz) has a low period of 537 ms and a high period of 463 ms When PPSCTRL = 0010, the PPS (2 Hz) is a sequence of One clock of 50 percent duty cycle and 537 ms period Second clock of 463 ms period (268 ms low and 195 ms high) When PPSCTRL = 0011, the PPS (4 Hz) is a sequence of Three clocks of 50 percent duty cycle and 268 ms period Fourth clock of 195 ms period (134 ms low and 61 ms high) This behavior is because of the non-linear toggling of bits in the digital rollover mode in the ETH_MACSTNR register. */
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

    /** @brief Flexible PPS Output Mode Enable When this bit is set, PPSCTRL[3:0] function as PPSCMD. When this bit is reset, PPSCTRL[3:0] function as PPSCTRL (Fixed PPS mode). */
    using ETH_MACPPSCR_PPSEN0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Target Time Register Mode for PPS Output This field indicates the Target Time registers ((ETH_MACPPSTTSR) and ) mode for PPS output signal: */
    using ETH_MACPPSCR_TRGTMODSEL0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Target Time registers are programmed only for generating the interrupt event. (value: 0)
     *          - B_0x1: Reserved, must not be used (value: 1)
     *          - B_0x2: Target Time registers are programmed for generating the interrupt event and starting or stopping the PPS output signal generation. (value: 2)
     *          - B_0x3: Target Time registers are programmed only for starting or stopping the PPS output signal generation. No interrupt is asserted. (value: 3)
     */
        /** @brief Target Time registers are programmed only for generating the interrupt event. */
    constexpr std::uint32_t ETH_MACPPSCR_TRGTMODSEL0_B_0x0 = 0;
        /** @brief Reserved, must not be used */
    constexpr std::uint32_t ETH_MACPPSCR_TRGTMODSEL0_B_0x1 = 1;
        /** @brief Target Time registers are programmed for generating the interrupt event and starting or stopping the PPS output signal generation. */
    constexpr std::uint32_t ETH_MACPPSCR_TRGTMODSEL0_B_0x2 = 2;
        /** @brief Target Time registers are programmed only for starting or stopping the PPS output signal generation. No interrupt is asserted. */
    constexpr std::uint32_t ETH_MACPPSCR_TRGTMODSEL0_B_0x3 = 3;

    /** @brief ETH_MACPPSCRALTERNATE */
    using ETH_MACPPSCRALTERNATE = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB70, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Flexible PPS Output (eth_ptp_pps_out) Control Programming these bits with a non-zero value instructs the MAC to initiate an event. When the command is transferred or synchronized to the PTP clock domain, these bits get cleared automatically. The software should ensure that these bits are programmed only when they are all zero. The following list describes the values of PPSCMD0: This command generates single pulse rising at the start point defined in Target Time Registers (register 455 and 456) and of a duration defined in the PPS Width Register. This command generates the train of pulses rising at the start point defined in the Target Time Registers and of a duration defined in the PPS Width Register and repeated at interval defined in the PPS Interval Register. By default, the PPS pulse train is free-running unless stopped by the 'Stop Pulse train at time' or 'Stop Pulse Train immediately' commands. This command cancels the START Single Pulse and START Pulse Train commands if the system time has not crossed the programmed start time. This command stops the train of pulses initiated by the START Pulse Train command (PPSCMD = 0010) after the time programmed in the Target Time registers elapses. This command immediately stops the train of pulses initiated by the START Pulse Train command (PPSCMD = 0010). This command cancels the STOP pulse train at time command if the programmed stop time has not elapsed. The PPS pulse train becomes free-running on the successful execution of this command. */
    using ETH_MACPPSCRALTERNATE_PPSCMD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No Command (value: 0)
     *          - B_0x1: START Single Pulse. (value: 1)
     *          - B_0x2: START Pulse Train. (value: 2)
     *          - B_0x3: Cancel START. (value: 3)
     *          - B_0x4: STOP Pulse Train at time. (value: 4)
     *          - B_0x5: STOP Pulse Train immediately. (value: 5)
     *          - B_0x6: Cancel STOP Pulse train. (value: 6)
     *          - B_0x7: Reserved, must not be used (value: 7)
     *          - B_0x8: Reserved, must not be used (value: 8)
     *          - B_0x9: Reserved, must not be used (value: 9)
     *          - B_0xa: Reserved, must not be used (value: 10)
     *          - B_0xb: Reserved, must not be used (value: 11)
     *          - B_0xc: Reserved, must not be used (value: 12)
     *          - B_0xd: Reserved, must not be used (value: 13)
     *          - B_0xe: Reserved, must not be used (value: 14)
     *          - B_0xf: Reserved, must not be used (value: 15)
     */
        /** @brief No Command */
    constexpr std::uint32_t ETH_MACPPSCRALTERNATE_PPSCMD_B_0x0 = 0;
        /** @brief START Single Pulse. */
    constexpr std::uint32_t ETH_MACPPSCRALTERNATE_PPSCMD_B_0x1 = 1;
        /** @brief START Pulse Train. */
    constexpr std::uint32_t ETH_MACPPSCRALTERNATE_PPSCMD_B_0x2 = 2;
        /** @brief Cancel START. */
    constexpr std::uint32_t ETH_MACPPSCRALTERNATE_PPSCMD_B_0x3 = 3;
        /** @brief STOP Pulse Train at time. */
    constexpr std::uint32_t ETH_MACPPSCRALTERNATE_PPSCMD_B_0x4 = 4;
        /** @brief STOP Pulse Train immediately. */
    constexpr std::uint32_t ETH_MACPPSCRALTERNATE_PPSCMD_B_0x5 = 5;
        /** @brief Cancel STOP Pulse train. */
    constexpr std::uint32_t ETH_MACPPSCRALTERNATE_PPSCMD_B_0x6 = 6;
        /** @brief Reserved, must not be used */
    constexpr std::uint32_t ETH_MACPPSCRALTERNATE_PPSCMD_B_0x7 = 7;
        /** @brief Reserved, must not be used */
    constexpr std::uint32_t ETH_MACPPSCRALTERNATE_PPSCMD_B_0x8 = 8;
        /** @brief Reserved, must not be used */
    constexpr std::uint32_t ETH_MACPPSCRALTERNATE_PPSCMD_B_0x9 = 9;
        /** @brief Reserved, must not be used */
    constexpr std::uint32_t ETH_MACPPSCRALTERNATE_PPSCMD_B_0xa = 10;
        /** @brief Reserved, must not be used */
    constexpr std::uint32_t ETH_MACPPSCRALTERNATE_PPSCMD_B_0xb = 11;
        /** @brief Reserved, must not be used */
    constexpr std::uint32_t ETH_MACPPSCRALTERNATE_PPSCMD_B_0xc = 12;
        /** @brief Reserved, must not be used */
    constexpr std::uint32_t ETH_MACPPSCRALTERNATE_PPSCMD_B_0xd = 13;
        /** @brief Reserved, must not be used */
    constexpr std::uint32_t ETH_MACPPSCRALTERNATE_PPSCMD_B_0xe = 14;
        /** @brief Reserved, must not be used */
    constexpr std::uint32_t ETH_MACPPSCRALTERNATE_PPSCMD_B_0xf = 15;

    /** @brief Flexible PPS Output Mode Enable When this bit is set, Bits[3:0] function as PPSCMD. When this bit is reset, Bits[3:0] function as PPSCTRL (Fixed PPS mode). */
    using ETH_MACPPSCRALTERNATE_PPSEN0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Target Time Register Mode for PPS Output This field indicates the Target Time registers (MAC registers 96 and 97) mode for PPS output signal: */
    using ETH_MACPPSCRALTERNATE_TRGTMODSEL0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Target Time registers are programmed only for generating the interrupt event. (value: 0)
     *          - B_0x1: Reserved, must not be used (value: 1)
     *          - B_0x2: Target Time registers are programmed for generating the interrupt event and starting or stopping the PPS output signal generation. (value: 2)
     *          - B_0x3: Target Time registers are programmed only for starting or stopping the PPS output signal generation. No interrupt is asserted. (value: 3)
     */
        /** @brief Target Time registers are programmed only for generating the interrupt event. */
    constexpr std::uint32_t ETH_MACPPSCRALTERNATE_TRGTMODSEL0_B_0x0 = 0;
        /** @brief Reserved, must not be used */
    constexpr std::uint32_t ETH_MACPPSCRALTERNATE_TRGTMODSEL0_B_0x1 = 1;
        /** @brief Target Time registers are programmed for generating the interrupt event and starting or stopping the PPS output signal generation. */
    constexpr std::uint32_t ETH_MACPPSCRALTERNATE_TRGTMODSEL0_B_0x2 = 2;
        /** @brief Target Time registers are programmed only for starting or stopping the PPS output signal generation. No interrupt is asserted. */
    constexpr std::uint32_t ETH_MACPPSCRALTERNATE_TRGTMODSEL0_B_0x3 = 3;

    /** @brief PPS target time seconds register */
    using ETH_MACPPSTTSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB80, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PPS Target Time Seconds Register This field stores the time in seconds. When the timestamp value matches or exceeds both Target Timestamp registers, the MAC starts or stops the PPS signal output and generates an interrupt (if enabled) based on Target Time mode selected for the corresponding PPS output in the . */
    using ETH_MACPPSTTSR_TSTRH0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PPS target time nanoseconds register */
    using ETH_MACPPSTTNR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB84, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Target Time Low for PPS Register This register stores the time in (signed) nanoseconds. When the value of the timestamp matches the value in both Target Timestamp registers, the MAC starts or stops the PPS signal output and generates an interrupt (if enabled) based on the TRGTMODSEL0 field (Bits [6:5]) in . When the TSCTRLSSR bit is set in the , this value should not exceed 0x3B9A_C9FF. The actual start or stop time of the PPS signal output may have an error margin up to one unit of sub-second increment value. */
    using ETH_MACPPSTTNR_TTSL0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 31, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PPS Target Time Register Busy The MAC sets this bit when the PPSCMD0 field in the (ETH_MACPPSCR) is programmed to 010 or 011. Programming the PPSCMD0 field to 010 or 011 instructs the MAC to synchronize the Target Time Registers to the PTP clock domain. The MAC clears this bit after synchronizing the Target Time Registers to the PTP clock domain The application must not update the Target Time Registers when this bit is read as 1. Otherwise, the synchronization of the previous programmed time gets corrupted. */
    using ETH_MACPPSTTNR_TRGTBUSY0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PPS interval register */
    using ETH_MACPPSIR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB88, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PPS Output Signal Interval These bits store the interval between the rising edges of PPS signal output. The interval is stored in terms of number of units of sub-second increment value. You need to program one value less than the required interval. For example, if the PTP reference clock is 50 MHz (period of 20 ns), and desired interval between the rising edges of PPS signal output is 100 ns (that is, 5 units of sub-second increment value), you should program value 4 (5-1) in this register. */
    using ETH_MACPPSIR_PPSINT0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PPS width register */
    using ETH_MACPPSWR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB8C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PPS Output Signal Width These bits store the width between the rising edge and corresponding falling edge of PPS signal output. The width is stored in terms of number of units of sub-second increment value. You need to program one value less than the required interval. For example, if PTP reference clock is 50 MHz (period of 20 ns), and width between the rising and corresponding falling edges of PPS signal output is 80 ns (that is, four units of sub-second increment value), you should program value 3 (4-1) in this register. Note: The value programmed in this register must be lesser than the value programmed in . */
    using ETH_MACPPSWR_PPSWIDTH0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PTP Offload control register */
    using ETH_MACPOCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBC0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PTP Offload Enable When this bit is set, the PTP Offload feature is enabled. */
    using ETH_MACPOCR_PTOEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Automatic PTP SYNC message Enable When this bit is set, PTP SYNC message is generated periodically based on interval programmed or trigger from application, when the MAC is programmed to be in Clock Master mode. */
    using ETH_MACPOCR_ASYNCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Automatic PTP Pdelay_Req message Enable When this bit is set, PTP Pdelay_Req message is generated periodically based on interval programmed or trigger from application, when the MAC is programmed to be in Peer-to-Peer Transparent mode. */
    using ETH_MACPOCR_APDREQEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Automatic PTP SYNC message Trigger When this bit is set, one PTP SYNC message is transmitted. This bit is automatically cleared after the PTP SYNC message is transmitted. The application should set the ASYNCEN bit for this operation. */
    using ETH_MACPOCR_ASYNCTRIG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Automatic PTP Pdelay_Req message Trigger When this bit is set, one PTP Pdelay_Req message is transmitted. This bit is automatically cleared after the PTP Pdelay_Req message is transmitted. The application should set the APDREQEN bit for this operation. */
    using ETH_MACPOCR_APDREQTRIG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Disable PTO Delay Request/Response response generation When this bit is set, the Delay Request and Delay response will not be generated for received SYNC and Delay request packet respectively, as required by the programmed mode. */
    using ETH_MACPOCR_DRRDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Domain Number This field indicates the domain Number in which the PTP node is operating. */
    using ETH_MACPOCR_DN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PTP Source Port Identity 0 Register */
    using ETH_MACSPI0R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBC4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Source Port Identity 0 This field indicates bits [31:0] of sourcePortIdentity of PTP node. */
    using ETH_MACSPI0R_SPI0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PTP Source port identity 1 register */
    using ETH_MACSPI1R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBC8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Source Port Identity 1 This field indicates bits [63:32] of sourcePortIdentity of PTP node. */
    using ETH_MACSPI1R_SPI1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PTP Source port identity 2 register */
    using ETH_MACSPI2R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBCC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Source Port Identity 2 This field indicates bits [79:64] of sourcePortIdentity of PTP node. */
    using ETH_MACSPI2R_SPI2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Log message interval register */
    using ETH_MACLMIR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBD0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Log Sync Interval This field indicates the periodicity of the automatically generated SYNC message when the PTP node is Master. Allowed values are -15 to 15. Negative value must be represented in 2's-complement form. For example, if the required value is -1, the value programmed must be 0xFF. */
    using ETH_MACLMIR_LSI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Delay_Req to SYNC Ratio In Slave mode, it is used for controlling frequency of Delay_Req messages transmitted. 2: for every 4 SYNC messages 3: for every 8 SYNC messages 4: for every 16 SYNC messages 5: for every 32 SYNC messages Others: Reserved, must not be used The master sends this information (logMinDelayReqInterval) in the DelayResp PTP messages to the slave. The reception processes this value from the received DelayResp messages and updates this field accordingly. In the Slave mode, the host must not write/update this register unless it has to override the received value. In Master mode, the sum of this field and logSyncInterval (LSI) field is provided in the logMinDelayReqInterval field of the generated multicast Delay_Resp PTP message. */
    using ETH_MACLMIR_DRSYNCR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DelayReq generated for every received SYNC (value: 0)
     *          - B_0x1: DelayReq generated every alternate reception of SYNC (value: 1)
     */
        /** @brief DelayReq generated for every received SYNC */
    constexpr std::uint32_t ETH_MACLMIR_DRSYNCR_B_0x0 = 0;
        /** @brief DelayReq generated every alternate reception of SYNC */
    constexpr std::uint32_t ETH_MACLMIR_DRSYNCR_B_0x1 = 1;

    /** @brief Log Min Pdelay_Req Interval This field indicates logMinPdelayReqInterval of PTP node. This is used to schedule the periodic Pdelay request packet transmission. Allowed values are -15 to 15.Negative value must be represented in 2's-complement form. For example, if the required value is -1, the value programmed must be 0xFF. */
    using ETH_MACLMIR_LMPDRI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Operating mode Register */
    using ETH_MTLOMR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC00, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Drop Transmit Status When this bit is set, the Tx packet status received from the MAC is dropped in the MTL. When this bit is reset, the Tx packet status received from the MAC is forwarded to the application. */
    using ETH_MTLOMR_DTXSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Counters Preset When this bit is set: is initialized/preset to 0x7F0. Missed Packet and Overflow Packet counters in overflow counter register (ETH_MTLRXQMPOCR) is initialized/preset to 0x7F0 This bit is cleared automatically. */
    using ETH_MTLOMR_CNTPRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Counters Reset When this bit is set, all counters are reset. This bit is cleared automatically after 1 clock cycle. If this bit is set along with CNTPRST bit, CNTPRST has precedence. */
    using ETH_MTLOMR_CNTCLR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt status Register */
    using ETH_MTLISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Queue interrupt status This bit indicates that an interrupt has been generated by Queue. To reset this bit, read ETH_MTLQICSR register to identify the interrupt cause and clear the source. */
    using ETH_MTLISR_Q0IS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx queue operating mode Register */
    using ETH_MTLTXQOMR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD00, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Flush Transmit Queue When this bit is set, the Tx queue controller logic is reset to its default values. Therefore, all the data in the Tx queue is lost or flushed. This bit is internally reset when the flushing operation is complete. Until this bit is reset, you should not write to the ETH_MTLTXQOMR register. The data which is already accepted by the MAC transmitter is not flushed. It is scheduled for transmission and results in underflow and runt packet transmission. Note: The flush operation is complete only when the Tx queue is empty and the application has accepted the pending Tx Status of all transmitted packets. To complete this flush operation, the PHY Tx clock (eth_mii_tx_clk) should be active. */
    using ETH_MTLTXQOMR_FTQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Store and Forward When this bit is set, the transmission starts when a full packet resides in the MTL Tx queue. When this bit is set, the TTC values specified in Bits[6:4] of this register are ignored. This bit should be changed only when the transmission is stopped. */
    using ETH_MTLTXQOMR_TSF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Queue Enable This field is used to enable/disable the transmit queue . Others: Reserved, must not be used. Note: In multiple Tx queues configuration, all the queues are disabled by default. Enable the Tx queue by programming this field. */
    using ETH_MTLTXQOMR_TXQEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Not enabled (value: 0)
     *          - B_0x2: Enabled (value: 2)
     */
        /** @brief Not enabled */
    constexpr std::uint32_t ETH_MTLTXQOMR_TXQEN_B_0x0 = 0;
        /** @brief Enabled */
    constexpr std::uint32_t ETH_MTLTXQOMR_TXQEN_B_0x2 = 2;

    /** @brief Transmit Threshold Control These bits control the threshold level of the MTL Tx queue. The transmission starts when the packet size within the MTL Tx queue is larger than the threshold. In addition, full packets with length less than the threshold are also transmitted. These bits are used only when the TSF bit is reset. */
    using ETH_MTLTXQOMR_TTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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
    constexpr std::uint32_t ETH_MTLTXQOMR_TTC_B_0x0 = 0;
        /** @brief 64 */
    constexpr std::uint32_t ETH_MTLTXQOMR_TTC_B_0x1 = 1;
        /** @brief 96 */
    constexpr std::uint32_t ETH_MTLTXQOMR_TTC_B_0x2 = 2;
        /** @brief 128 */
    constexpr std::uint32_t ETH_MTLTXQOMR_TTC_B_0x3 = 3;
        /** @brief 192 */
    constexpr std::uint32_t ETH_MTLTXQOMR_TTC_B_0x4 = 4;
        /** @brief 256 */
    constexpr std::uint32_t ETH_MTLTXQOMR_TTC_B_0x5 = 5;
        /** @brief 384 */
    constexpr std::uint32_t ETH_MTLTXQOMR_TTC_B_0x6 = 6;
        /** @brief 512 */
    constexpr std::uint32_t ETH_MTLTXQOMR_TTC_B_0x7 = 7;

    /** @brief Transmit queue size This field indicates the size of the allocated transmit queues in blocks of 256 bytes. Queue size range from 256 bytes (TQS=0b000) to 2048 bytes (TQS=0b111). */
    using ETH_MTLTXQOMR_TQS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx queue underflow register */
    using ETH_MTLTXQUR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD04, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Underflow Packet Counter This field indicates the number of packets aborted by the controller because of Tx queue Underflow. This counter is incremented each time the MAC aborts outgoing packet because of underflow. The counter is cleared when this register is read. */
    using ETH_MTLTXQUR_UFFRMCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Overflow Bit for Underflow Packet Counter This bit is set every time the Tx queue Underflow Packet Counter field overflows, that is, it has crossed the maximum count. In such a scenario, the overflow packet counter is reset to all-zeros and this bit indicates that the rollover happened. */
    using ETH_MTLTXQUR_UFCNTOVF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx queue debug Register */
    using ETH_MTLTXQDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD08, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Queue in Pause When this bit is high and the Rx flow control is enabled, it indicates that the Tx queue is in the Pause condition (in the full-duplex only mode) because of the following: Reception of the PFC packet for the priorities assigned to the Tx queue when PFC is enabled Reception of 802.3x Pause packet when PFC is disabled */
    using ETH_MTLTXQDR_TXQPAUSED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MTL Tx Queue Read Controller Status This field indicates the state of the Tx Queue Read Controller: */
    using ETH_MTLTXQDR_TRCSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Idle state (value: 0)
     *          - B_0x1: Read state (transferring data to the MAC transmitter) (value: 1)
     *          - B_0x2: Waiting for pending Tx Status from the MAC transmitter (value: 2)
     *          - B_0x3: Flushing the Tx queue because of the Packet Abort request from the MAC (value: 3)
     */
        /** @brief Idle state */
    constexpr std::uint32_t ETH_MTLTXQDR_TRCSTS_B_0x0 = 0;
        /** @brief Read state (transferring data to the MAC transmitter) */
    constexpr std::uint32_t ETH_MTLTXQDR_TRCSTS_B_0x1 = 1;
        /** @brief Waiting for pending Tx Status from the MAC transmitter */
    constexpr std::uint32_t ETH_MTLTXQDR_TRCSTS_B_0x2 = 2;
        /** @brief Flushing the Tx queue because of the Packet Abort request from the MAC */
    constexpr std::uint32_t ETH_MTLTXQDR_TRCSTS_B_0x3 = 3;

    /** @brief MTL Tx Queue Write Controller Status When high, this bit indicates that the MTL Tx queue Write Controller is active, and it is transferring the data to the Tx queue. */
    using ETH_MTLTXQDR_TWCSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MTL Tx Queue Not Empty Status When this bit is high, it indicates that the MTL Tx queue is not empty and some data is left for transmission. */
    using ETH_MTLTXQDR_TXQSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MTL Tx Status FIFO Full Status When high, this bit indicates that the MTL Tx Status FIFO is full. Therefore, the MTL cannot accept any more packets for transmission. */
    using ETH_MTLTXQDR_TXSTSFSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of Packets in the Transmit Queue This field indicates the current number of packets in the Tx queue. When the DTXSTS bit of register is set to 1, this field does not reflect the number of packets in the Transmit queue. */
    using ETH_MTLTXQDR_PTXQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of Status Words in Tx Status FIFO of Queue This field indicates the current number of status in the Tx Status FIFO of this queue. When the DTXSTS bit of ETH_MTLOMR register is set to 1, this field does not reflect the number of status words in Tx Status FIFO. */
    using ETH_MTLTXQDR_STXSTSF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Queue interrupt control status Register */
    using ETH_MTLQICSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Queue Underflow Interrupt Status This bit indicates that the Transmit Queue had an underflow while transmitting the packet. Transmission is suspended and an Underflow Error TDES3[2] is set. This bit is cleared when the application writes 1 to this bit. */
    using ETH_MTLQICSR_TXUNFIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Queue Underflow Interrupt Enable When this bit is set, the Transmit Queue Underflow interrupt is enabled. When this bit is reset, the Transmit Queue Underflow interrupt is disabled. */
    using ETH_MTLQICSR_TXUIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive Queue Overflow Interrupt Status This bit indicates that the Receive Queue had an overflow while receiving the packet. If a partial packet is transferred to the application, the overflow status is set in RDES3[21]. This bit is cleared when the application writes 1 to this bit. */
    using ETH_MTLQICSR_RXOVFIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive Queue Overflow Interrupt Enable When this bit is set, the Receive Queue Overflow interrupt is enabled. When this bit is reset, the Receive Queue Overflow interrupt is disabled. */
    using ETH_MTLQICSR_RXOIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx queue operating mode register */
    using ETH_MTLRXQOMR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive Queue Threshold Control These bits control the threshold level of the MTL Rx queue (in bytes): The received packet is transferred to the application or DMA when the packet size within the MTL Rx queue is larger than the threshold. In addition, full packets with length less than the threshold are automatically transferred. This field is valid only when the RSF bit is zero. This field is ignored when the RSF bit is set to 1. */
    using ETH_MTLRXQOMR_RTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 64 (value: 0)
     *          - B_0x1: 32 (value: 1)
     *          - B_0x2: 96 (value: 2)
     *          - B_0x3: 128 (value: 3)
     */
        /** @brief 64 */
    constexpr std::uint32_t ETH_MTLRXQOMR_RTC_B_0x0 = 0;
        /** @brief 32 */
    constexpr std::uint32_t ETH_MTLRXQOMR_RTC_B_0x1 = 1;
        /** @brief 96 */
    constexpr std::uint32_t ETH_MTLRXQOMR_RTC_B_0x2 = 2;
        /** @brief 128 */
    constexpr std::uint32_t ETH_MTLRXQOMR_RTC_B_0x3 = 3;

    /** @brief Forward Undersized Good Packets When this bit is set, the Rx queue forwards the undersized good packets (packets with no error and length less than 64 bytes), including pad-bytes and CRC. When this bit is reset, the Rx queue drops all packets of less than 64 bytes, unless a packet is already transferred because of the lower value of Rx Threshold, for example, RTC = 01. */
    using ETH_MTLRXQOMR_FUP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Forward Error Packets When this bit is reset, the Rx queue drops packets with error status (CRC error, receive error, watchdog timeout, or overflow). However, if the start byte (write) pointer of a packet is already transferred to the read controller side (in Threshold mode), the packet is not dropped. When this bit is set, all packets except the runt error packets are forwarded to the application or DMA. If the RSF bit is set and the Rx queue overflows when a partial packet is written, the packet is dropped irrespective of the setting of this bit. However, if the RSF bit is reset and the Rx queue overflows when a partial packet is written, a partial packet may be forwarded to the application or DMA. */
    using ETH_MTLRXQOMR_FEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive Queue Store and Forward When this bit is set, the Ethernet peripheral reads a packet from the Rx queue only after the complete packet has been written to it, ignoring the RTC field of this register. When this bit is reset, the Rx queue operates in the Threshold (cut-through) mode, subject to the threshold specified by the RTC field of this register. */
    using ETH_MTLRXQOMR_RSF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Disable Dropping of TCP/IP Checksum Error Packets When this bit is set, the MAC does not drop the packets which only have the errors detected by the Receive Checksum Offload engine. Such packets have errors only in the encapsulated payload. There are no errors (including FCS error) in the Ethernet packet received by the MAC. When this bit is reset, all error packets are dropped if the FEP bit is reset. */
    using ETH_MTLRXQOMR_DIS_TCP_EF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive Queue Size This field is read-only and the configured Rx FIFO size in blocks of 256 bytes is reflected in the reset value. The size of the Queue is (RQS + 1) * 256 bytes. */
    using ETH_MTLRXQOMR_RQS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx queue missed packet and overflow counter register */
    using ETH_MTLRXQMPOCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Overflow Packet Counter This field indicates the number of packets discarded by the Ethernet peripheral because of Receive queue overflow. This counter is incremented each time the Ethernet peripheral discards an incoming packet because of overflow. This counter is reset when this register is read. */
    using ETH_MTLRXQMPOCR_OVFPKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Overflow Counter Overflow Bit When set, this bit indicates that the Rx Queue Overflow Packet Counter field crossed the maximum limit. */
    using ETH_MTLRXQMPOCR_OVFCNTOVF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Missed Packet Counter This field indicates the number of packets missed by the Ethernet peripheral because the application requested to flush the packets for this queue. This counter is reset when this register is read. This counter is incremented by 1 when the DMA discards the packet because of buffer unavailability. */
    using ETH_MTLRXQMPOCR_MISPKTCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Missed Packet Counter Overflow Bit When set, this bit indicates that the Rx Queue Missed Packet Counter crossed the maximum limit. */
    using ETH_MTLRXQMPOCR_MISCNTOVF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx queue debug register */
    using ETH_MTLRXQDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MTL Rx Queue Write Controller Active Status When high, this bit indicates that the MTL Rx queue Write controller is active, and it is transferring a received packet to the Rx queue. */
    using ETH_MTLRXQDR_RWCSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MTL Rx Queue Read Controller State This field gives the state of the Rx queue Read controller: */
    using ETH_MTLRXQDR_RRCSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Idle state (value: 0)
     *          - B_0x1: Reading packet data (value: 1)
     *          - B_0x2: Reading packet status (or timestamp) (value: 2)
     *          - B_0x3: Flushing the packet data and status (value: 3)
     */
        /** @brief Idle state */
    constexpr std::uint32_t ETH_MTLRXQDR_RRCSTS_B_0x0 = 0;
        /** @brief Reading packet data */
    constexpr std::uint32_t ETH_MTLRXQDR_RRCSTS_B_0x1 = 1;
        /** @brief Reading packet status (or timestamp) */
    constexpr std::uint32_t ETH_MTLRXQDR_RRCSTS_B_0x2 = 2;
        /** @brief Flushing the packet data and status */
    constexpr std::uint32_t ETH_MTLRXQDR_RRCSTS_B_0x3 = 3;

    /** @brief MTL Rx Queue Fill-Level Status This field gives the status of the fill-level of the Rx queue: */
    using ETH_MTLRXQDR_RXQSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rx queue empty (value: 0)
     *          - B_0x1: Rx queue fill-level below flow-control deactivate threshold (value: 1)
     *          - B_0x2: Rx queue fill-level above flow-control activate threshold (value: 2)
     *          - B_0x3: Rx queue full (value: 3)
     */
        /** @brief Rx queue empty */
    constexpr std::uint32_t ETH_MTLRXQDR_RXQSTS_B_0x0 = 0;
        /** @brief Rx queue fill-level below flow-control deactivate threshold */
    constexpr std::uint32_t ETH_MTLRXQDR_RXQSTS_B_0x1 = 1;
        /** @brief Rx queue fill-level above flow-control activate threshold */
    constexpr std::uint32_t ETH_MTLRXQDR_RXQSTS_B_0x2 = 2;
        /** @brief Rx queue full */
    constexpr std::uint32_t ETH_MTLRXQDR_RXQSTS_B_0x3 = 3;

    /** @brief Number of Packets in Receive Queue This field indicates the current number of packets in the Rx queue. The theoretical maximum value for this field is 256Kbyte/16bytes = 16K Packets, that is, Max_Queue_Size/Min_Packet_Size. */
    using ETH_MTLRXQDR_PRXQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA mode register */
    using ETH_DMAMR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1000, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software Reset When this bit is set, the MAC and the DMA controller reset the logic and all internal registers of the DMA, MTL, and MAC. This bit is automatically cleared after the reset operation is complete in all clock domains. Before reprogramming any register, a value of zero should be read in this bit. Note: The reset operation is complete only when all resets in all active clock domains are deasserted. Therefore, it is essential that all PHY inputs clocks (applicable for the selected PHY interface) are present for software reset completion. The time to complete the software reset operation depends on the frequency of the slowest active clock. */
    using ETH_DMAMR_SWR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA Tx or Rx Arbitration Scheme This bit specifies the arbitration scheme between the Transmit and Receive paths of all channels: The priority between the paths is according to the priority specified in Bits[14:12] and the priority weight is specified in the TXPR bit. The Tx path has priority over the Rx path when the TXPR bit is set. Otherwise, the Rx path has priority over the Tx path. */
    using ETH_DMAMR_DA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Weighted Round-Robin with Rx:Tx or Tx:Rx (value: 0)
     *          - B_0x1: Fixed priority (value: 1)
     */
        /** @brief Weighted Round-Robin with Rx:Tx or Tx:Rx */
    constexpr std::uint32_t ETH_DMAMR_DA_B_0x0 = 0;
        /** @brief Fixed priority */
    constexpr std::uint32_t ETH_DMAMR_DA_B_0x1 = 1;

    /** @brief Transmit priority When set, this bit indicates that the Tx DMA has higher priority than the Rx DMA during arbitration for the system-side bus. */
    using ETH_DMAMR_TXPR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Priority ratio These bits control the priority ratio in weighted round-robin arbitration between the Rx DMA and Tx DMA. These bits are valid only when the DA bit is reset. The priority ratio is Rx:Tx or Tx:Rx depending on whether the TXPR bit is reset or set. */
    using ETH_DMAMR_PR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The priority ratio is 1:1 (value: 0)
     *          - B_0x1: The priority ratio is 2:1 (value: 1)
     *          - B_0x2: The priority ratio is 3:1 (value: 2)
     *          - B_0x3: The priority ratio is 4:1 (value: 3)
     *          - B_0x4: The priority ratio is 5:1 (value: 4)
     *          - B_0x5: The priority ratio is 6:1 (value: 5)
     *          - B_0x6: The priority ratio is 7:1 (value: 6)
     *          - B_0x7: The priority ratio is 8:1 (value: 7)
     */
        /** @brief The priority ratio is 1:1 */
    constexpr std::uint32_t ETH_DMAMR_PR_B_0x0 = 0;
        /** @brief The priority ratio is 2:1 */
    constexpr std::uint32_t ETH_DMAMR_PR_B_0x1 = 1;
        /** @brief The priority ratio is 3:1 */
    constexpr std::uint32_t ETH_DMAMR_PR_B_0x2 = 2;
        /** @brief The priority ratio is 4:1 */
    constexpr std::uint32_t ETH_DMAMR_PR_B_0x3 = 3;
        /** @brief The priority ratio is 5:1 */
    constexpr std::uint32_t ETH_DMAMR_PR_B_0x4 = 4;
        /** @brief The priority ratio is 6:1 */
    constexpr std::uint32_t ETH_DMAMR_PR_B_0x5 = 5;
        /** @brief The priority ratio is 7:1 */
    constexpr std::uint32_t ETH_DMAMR_PR_B_0x6 = 6;
        /** @brief The priority ratio is 8:1 */
    constexpr std::uint32_t ETH_DMAMR_PR_B_0x7 = 7;

    /** @brief Interrupt Mode This field defines the interrupt mode of the Ethernet peripheral. The behavior of the interrupt signal and of the RI/TI bits in the ETH_DMACSR register changes depending on the INTM value (refer to behavior). */
    using ETH_DMAMR_INTM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief System bus mode register */
    using ETH_DMASBMR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1004, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fixed Burst Length When this bit is set to 1, the AHB master will initiate burst transfers of specified length (INCRx or SINGLE). When this bit is set to 0, the AHB master will initiate transfers of unspecified length (INCR) or SINGLE transfers. */
    using ETH_DMASBMR_FB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Address-Aligned Beats When this bit is set to 1, the master performs address-aligned burst transfers on Read and Write channels. */
    using ETH_DMASBMR_AAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Mixed Burst When this bit is set high and the FB bit is low, the AHB master performs undefined bursts transfers (INCR) for burst length of 16 or more. For burst length of 16 or less, the AHB master performs fixed burst transfers (INCRx and SINGLE). */
    using ETH_DMASBMR_MB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rebuild INCRx Burst When this bit is set high and the AHB master gets SPLIT, RETRY, or Early Burst Termination (EBT) response, the AHB master interface rebuilds the pending beats of any initiated burst transfer with INCRx and SINGLE transfers. By default, the AHB master interface rebuilds pending beats of an EBT with an unspecified (INCR) burst. */
    using ETH_DMASBMR_RB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt status register */
    using ETH_DMAISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1008, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA Channel Interrupt Status This bit indicates an interrupt event in DMA Channel. To reset this bit to 0, the software must read the corresponding register in DMA Channel to get the exact cause of the interrupt and clear its source. */
    using ETH_DMAISR_DC0IS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MTL Interrupt Status This bit indicates an interrupt event in the MTL. To reset this bit to 1'b0, the software must read the corresponding register in the MTL to get the exact cause of the interrupt and clear its source. */
    using ETH_DMAISR_MTLIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MAC Interrupt Status This bit indicates an interrupt event in the MAC. To reset this bit to 1'b0, the software must read the corresponding register in the MAC to get the exact cause of the interrupt and clear its source. */
    using ETH_DMAISR_MACIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Debug status register */
    using ETH_DMADSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x100C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB Master Write Channel When high, this bit indicates that the write channel of the AHB master FMSs are in non-idle state. */
    using ETH_DMADSR_AXWHSTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA Channel Receive Process State This field indicates the Rx DMA FSM state for Channel: The MSB of this field always returns 0. This field does not generate an interrupt. */
    using ETH_DMADSR_RPS0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Stopped (Reset or Stop Receive Command issued) (value: 0)
     *          - B_0x1: Running (Fetching Rx Transfer Descriptor) (value: 1)
     *          - B_0x2: Reserved for future use (value: 2)
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
        /** @brief Reserved for future use */
    constexpr std::uint32_t ETH_DMADSR_RPS0_B_0x2 = 2;
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

    /** @brief DMA Channel Transmit Process State This field indicates the Tx DMA FSM state for Channel: The MSB of this field always returns 0. This field does not generate an interrupt. */
    using ETH_DMADSR_TPS0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Stopped (Reset or Stop Transmit Command issued) (value: 0)
     *          - B_0x1: Running (Fetching Tx Transfer Descriptor) (value: 1)
     *          - B_0x2: Running (Waiting for status) (value: 2)
     *          - B_0x3: Running (Reading Data from system memory buffer and queuing it to the Tx buffer (Tx FIFO)) (value: 3)
     *          - B_0x4: Timestamp write state (value: 4)
     *          - B_0x5: Reserved for future use (value: 5)
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
        /** @brief Reserved for future use */
    constexpr std::uint32_t ETH_DMADSR_TPS0_B_0x5 = 5;
        /** @brief Suspended (Tx Descriptor Unavailable or Tx Buffer Underflow) */
    constexpr std::uint32_t ETH_DMADSR_TPS0_B_0x6 = 6;
        /** @brief Running (Closing Tx Descriptor) */
    constexpr std::uint32_t ETH_DMADSR_TPS0_B_0x7 = 7;

    /** @brief Channel control register */
    using ETH_DMACCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1100, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum Segment Size This field specifies the maximum segment size that should be used while segmenting the packet. This field is valid only if the TSE bit of (ETH_DMACTXCR) is set. The value programmed in this field must be more than the configured Data width in bytes. It is recommended to use a MSS value of 64 bytes or more. */
    using ETH_DMACCR_MSS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 8xPBL mode When this bit is set, the PBL value programmed in Bits[21:16] in register (ETH_DMACTXCR) is multiplied eight times. Therefore, the DMA transfers the data in 8, 16, 32, 64, 128, and 256 beats depending on the PBL value. */
    using ETH_DMACCR_PBLX8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Descriptor Skip Length This bit specifies the 32-bit word number to skip between two unchained descriptors. The address skipping starts from the end of the current descriptor to the start of the next descriptor. When the DSL value is equal to zero, the DMA takes the descriptor table as contiguous. */
    using ETH_DMACCR_DSL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel transmit control register */
    using ETH_DMACTXCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1104, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Start or Stop Transmission Command When this bit is set, transmission is placed in the Running state. The DMA checks the Transmit list at the current position for a packet to be transmitted. The DMA tries to acquire descriptor from either of the following positions: The current position in the list: this is the base address of the Transmit list set by the ETH_DMACTXDLAR register. The position at which the transmission was previously stopped If the DMA does not own the current descriptor, the transmission enters the Suspended state and the TBU bit of the ETH_DMACSR is set. The Start Transmission command is effective only when the transmission is stopped. If the command is issued before setting the ETH_DMACTXDLAR register, the DMA behavior is unpredictable. When this bit is reset, the transmission process is placed in the Stopped state after completing the transmission of the current packet. The Next Descriptor position in the Transmit list is saved, and it becomes the current position when the transmission is restarted. To change the list address, you need to program ETH_DMACTXDLAR register with a new value when this bit is reset. The new value is considered when this bit is set again. The stop transmission command is effective only when the transmission of the current packet is complete or the transmission is in the Suspended state. */
    using ETH_DMACTXCR_ST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Operate on Second Packet When this bit is set, it instructs the DMA to process the second packet of the Transmit data even before the status for the first packet is obtained. */
    using ETH_DMACTXCR_OSF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TCP Segmentation Enabled When this bit is set, the DMA performs the TCP segmentation for packets in Channel i. The TCP segmentation is done only for those packets for which the TSE bit (TDES0[19]) is set in the Tx Normal descriptor. When this bit is set, the TxPBL value must be greater than or equal to 4. */
    using ETH_DMACTXCR_TSE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Programmable Burst Length These bits indicate the maximum number of beats to be transferred in one DMA data transfer. This is the maximum value that is used in a single block Read or Write. The DMA always attempts to burst as specified in PBL each time it starts a burst transfer on the application bus. You can program PBL with any of the following values: 1, 2, 4, 8, 16, or 32. Any other value results in undefined behavior. To transfer more than 32 beats, perform the following steps: Set the PBLx8 mode in ETH_DMACCR. Set the TXPBL[5:0]. Note: The maximum value of TXPBL must be less than or equal to half the Tx Queue size (TQS field of ) in terms of beats. This is required so that the Tx Queue has space to store at least another Tx PBL worth of data while the MTL Tx Queue Controller is transferring data to MAC. The total locations in Tx Queue of size 2048 bytes is 512, TXPBL and 8xPBL needs to be programmed to less than or equal to 512/2. */
    using ETH_DMACTXCR_TXPBL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel receive control register */
    using ETH_DMACRXCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1108, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Start or Stop Receive When this bit is set, the DMA tries to acquire the descriptor from the Receive list and processes the incoming packets. The DMA tries to acquire descriptor from either of the following positions: The current position in the list: this is the address set by the list address register (ETH_DMACRXDLAR). The position at which the Rx process was previously stopped If the DMA does not own the current descriptor, the reception is suspended and the RBU bit of the ETH_DMACSR is set. The Start Receive command is effective only when the reception is stopped. If the command is issued before setting the register (ETH_DMACRXDLAR), the DMA behavior is unpredictable. When this bit is reset, the Rx DMA operation is stopped after the transfer of the current packet. The next descriptor position in the Receive list is saved, and it becomes the current position after the Rx process is restarted. The Stop Receive command is effective only when the Rx process is in the Running (waiting for Rx packet) or Suspended state. */
    using ETH_DMACRXCR_SR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive Buffer size This field indicates the size of the Rx buffers specified in bytes. The maximum buffer size is limited to 16 Kbytes. Note: The buffer size must be a multiple of 4. This is required even if the value of buffer address pointer is not aligned to bus width. If the buffer size is not a multiple of 4, it may result into an undefined behavior. The LSB bits (1:0) are ignored and the DMA internally takes the LSB bits as all-zero. Therefore, these LSB bits are read-only (RO). */
    using ETH_DMACRXCR_RBSZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive Programmable Burst Length These bits indicate the maximum number of beats to be transferred in one DMA data transfer. This is the maximum value that is used in a single block Read or Write. The DMA always attempts to burst as specified in PBL each time it starts a burst transfer on the application bus. You can program PBL with any of the following values: 1, 2, 4, 8, 16, or 32. Any other value results in undefined behavior. To transfer more than 32 beats, perform the following steps: Set the PBLx8 mode in the ETH_DMACCR. Set the RXPBL[5:0]. Note: The maximum value of RXPBL must be less than or equal to half the Rx Queue size (RQS field of ) in terms of beats. This is required so that the Rx Queue has space to store at least another Rx PBL worth of data while the MTL Rx Queue Controller is transferring data to MAC.The total locations in Rx Queue of size 2048 bytes is 512, RXPBL and 8xPBL needs to be programmed to less than or equal to 512/2. */
    using ETH_DMACRXCR_RXPBL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA Rx Channel Packet Flush When this bit is set to 1, the Ethernet peripheral will automatically flush the packet from the Rx queues destined to DMA Rx Channel when the DMA Rx Channel is stopped after a system bus error has occurred. When this bit remains set and the DMA is re-started by the software driver, the packets residing in the Rx Queues that were received when this RxDMA was stopped, are flushed out. The packets that are received by the MAC after the RxDMA is re-started are routed to the RxDMA. The flushing happens on the Read side of the Rx queue. When this bit is set to 0 the Ethernet peripheral does not flush the packet in the Rx queue destined to DMA Rx Channel after the DMA is stopped due to a system bus error. This might cause head-of-line blocking in the corresponding RxQueue. Note: The stopping of packet flow from a Rx DMA Channel to the application by setting RPF works only when there is one-to-one mapping of Rx Queue to Rx DMA channels. In Dynamic mapping mode, setting RPF bit in ETH_DMACRXCR register might flush packets from unintended Rx Queues which are destined to the stopped Rx DMA Channel. */
    using ETH_DMACRXCR_RPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel Tx descriptor list address register */
    using ETH_DMACTXDLAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1114, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Start of Transmit List This field contains the base address of the first descriptor in the Transmit descriptor list. The DMA ignores the LSB bits (1:0) for 32-bit bus width and internally takes these bits as all-zero. Therefore, these LSB bits are read-only (RO). */
    using ETH_DMACTXDLAR_TDESLA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel Rx descriptor list address register */
    using ETH_DMACRXDLAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x111C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Start of Receive List This field contains the base address of the first descriptor in the Rx Descriptor list. The DMA ignores the LSB bits (1:0) for 32-bit bus width and internally takes these bits as all-zero. Therefore, these LSB bits are read-only (RO). */
    using ETH_DMACRXDLAR_RDESLA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel Tx descriptor tail pointer register */
    using ETH_DMACTXDTPR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1120, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Descriptor Tail Pointer This field contains the tail pointer for the Tx descriptor ring. The software writes the tail pointer to add more descriptors to the Tx channel. The hardware tries to transmit all packets referenced by the descriptors between the head and the tail pointer registers. */
    using ETH_DMACTXDTPR_TDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel Rx descriptor tail pointer register */
    using ETH_DMACRXDTPR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1128, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive Descriptor Tail Pointer This field contains the tail pointer for the Rx descriptor ring. The software writes the tail pointer to add more descriptors to the Rx channel. The hardware tries to write all received packets to the descriptors referenced between the head and the tail pointer registers. */
    using ETH_DMACRXDTPR_RDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel Tx descriptor ring length register */
    using ETH_DMACTXRLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x112C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Descriptor Ring Length This field sets the maximum number of Tx descriptors in the circular descriptor ring. The maximum number of descriptors is limited to 1K descriptors. It is recommended to put a minimum ring descriptor length of 4. For example, you can program any value up to 0x3FF in this field. This field is 10 bits wide, if you program 0x3FF, you can have 1024 descriptors. If you want to have 10 descriptors, program it to a value of 0x9. */
    using ETH_DMACTXRLR_TDRL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel Rx descriptor ring length register */
    using ETH_DMACRXRLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1130, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive Descriptor Ring Length This register sets the maximum number of Rx descriptors in the circular descriptor ring. The maximum number of descriptors is limited to 1K descriptors. For example, you can program any value up to 0x3FF in this field. This field is 10-bit wide. If you program 0x3FF, you can have 1024 descriptors. If you want to have 10 descriptors, program it to a value of 0x9. */
    using ETH_DMACRXRLR_RDRL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alternate Receive Buffer Size Indicates size in bytes for Buffer 1 when ARBS[7:0] is programmed to a non-zero value. When ARBS[7:0] = 0, Rx Buffer1 and Rx Buffer2 sizes are based on RBSZ[13:0] field of . */
    using ETH_DMACRXRLR_ARBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel interrupt enable register */
    using ETH_DMACIER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1134, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Interrupt Enable When this bit is set along with the NIE bit, the Transmit Interrupt is enabled. When this bit is reset, the Transmit Interrupt is disabled. */
    using ETH_DMACIER_TIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Stopped Enable When this bit is set along with the AIE bit, the Transmission Stopped interrupt is enabled. When this bit is reset, the Transmission Stopped interrupt is disabled. */
    using ETH_DMACIER_TXSE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Buffer Unavailable Enable When this bit is set along with the NIE bit, the Transmit Buffer Unavailable interrupt is enabled. When this bit is reset, the Transmit Buffer Unavailable interrupt is disabled. */
    using ETH_DMACIER_TBUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive Interrupt Enable When this bit is set along with the NIE bit, the Receive Interrupt is enabled. When this bit is reset, the Receive Interrupt is disabled. */
    using ETH_DMACIER_RIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive Buffer Unavailable Enable When this bit is set along with the AIE bit, the Receive Buffer Unavailable interrupt is enabled. When this bit is reset, the Receive Buffer Unavailable interrupt is disabled. */
    using ETH_DMACIER_RBUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive Stopped Enable When this bit is set along with the AIE bit, the Receive Stopped Interrupt is enabled. When this bit is reset, the Receive Stopped interrupt is disabled. */
    using ETH_DMACIER_RSE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive Watchdog Timeout Enable When this bit is set along with the AIE bit, the Receive Watchdog Timeout interrupt is enabled. When this bit is reset, the Receive Watchdog Timeout interrupt is disabled. */
    using ETH_DMACIER_RWTE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Early Transmit Interrupt Enable When this bit is set along with the AIE bit, the Early Transmit interrupt is enabled. When this bit is reset, the Early Transmit interrupt is disabled. */
    using ETH_DMACIER_ETIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Early Receive Interrupt Enable When this bit is set along with the NIE bit, the Early Receive interrupt is enabled. When this bit is reset, the Early Receive interrupt is disabled. */
    using ETH_DMACIER_ERIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fatal Bus Error Enable When this bit is set along with the AIE bit, the Fatal Bus error interrupt is enabled. When this bit is reset, the Fatal Bus Error error interrupt is disabled. */
    using ETH_DMACIER_FBEE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context Descriptor Error Enable When this bit is set along with the AIE bit, the Context Descriptor error interrupt is enabled. When this bit is reset, the Context Descriptor error interrupt is disabled. */
    using ETH_DMACIER_CDEE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Abnormal Interrupt Summary Enable When this bit is set, the abnormal interrupt summary is enabled. This bit enables the following interrupts in the : Bit 1: Transmit Process Stopped Bit 7: Rx Buffer Unavailable Bit 8: Receive Process Stopped Bit 9: Receive Watchdog Timeout Bit 10: Early Transmit Interrupt Bit 12: Fatal Bus Error When this bit is reset, the abnormal interrupt summary is disabled. */
    using ETH_DMACIER_AIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Normal Interrupt Summary Enable When this bit is set, the normal interrupt summary is enabled. This bit enables the following interrupts in the : Bit 0: Transmit Interrupt Bit 2: Transmit Buffer Unavailable Bit 6: Receive Interrupt Bit 11: Early Receive Interrupt When this bit is reset, the normal interrupt summary is disabled. */
    using ETH_DMACIER_NIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel Rx interrupt watchdog timer register */
    using ETH_DMACRXIWTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1138, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive Interrupt Watchdog Timer Count This field indicates the number of system clock cycles, multiplied by factor indicated in RWTU field, for which the watchdog timer is set. The watchdog timer is triggered with the programmed value after the Rx DMA completes the transfer of a packet for which the RI bit is not set in the ETH_DMACSR, because of the setting of Interrupt Enable bit in the corresponding descriptor RDES3[30]. When the watchdog timer runs out, the RI bit is set and the timer is stopped. The watchdog timer is reset when the RI bit is set high because of automatic setting of RI as per the Interrupt Enable bit RDES3[30] of any received packet. */
    using ETH_DMACRXIWTR_RWT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive Interrupt Watchdog Timer Count Units This field indicates the number of system clock cycles corresponding to one unit in RWT[7:0] field. For example, when RWT[7:0] = 2 and RWTU[1:0] = 1, the watchdog timer is set for 2 * 512 = 1024 system clock cycles. */
    using ETH_DMACRXIWTR_RWTU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 256 (value: 0)
     *          - B_0x1: 512 (value: 1)
     *          - B_0x2: 1024 (value: 2)
     *          - B_0x3: 2048 (value: 3)
     */
        /** @brief 256 */
    constexpr std::uint32_t ETH_DMACRXIWTR_RWTU_B_0x0 = 0;
        /** @brief 512 */
    constexpr std::uint32_t ETH_DMACRXIWTR_RWTU_B_0x1 = 1;
        /** @brief 1024 */
    constexpr std::uint32_t ETH_DMACRXIWTR_RWTU_B_0x2 = 2;
        /** @brief 2048 */
    constexpr std::uint32_t ETH_DMACRXIWTR_RWTU_B_0x3 = 3;

    /** @brief Channel current application transmit descriptor register */
    using ETH_DMACCATXDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1144, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Application Transmit Descriptor Address Pointer The DMA updates this pointer during Tx operation. This pointer is cleared on reset. */
    using ETH_DMACCATXDR_CURTDESAPTR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel current application receive descriptor register */
    using ETH_DMACCARXDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x114C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Application Receive Descriptor Address Pointer The DMA updates this pointer during Rx operation. This pointer is cleared on reset. */
    using ETH_DMACCARXDR_CURRDESAPTR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel current application transmit buffer register */
    using ETH_DMACCATXBR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1154, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Application Transmit Buffer Address Pointer The DMA updates this pointer during Tx operation. This pointer is cleared on reset. */
    using ETH_DMACCATXBR_CURTBUFAPTR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel current application receive buffer register */
    using ETH_DMACCARXBR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x115C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Application Receive Buffer Address Pointer The DMA updates this pointer during Rx operation. This pointer is cleared on reset. */
    using ETH_DMACCARXBR_CURRBUFAPTR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel status register */
    using ETH_DMACSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1160, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Interrupt This bit indicates that the packet transmission is complete. When transmission is complete, Bit 31 of TDES3 is reset in the last descriptor, and the specific packet status information is updated in the descriptor. */
    using ETH_DMACSR_TI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Process Stopped This bit is set when the transmission is stopped. */
    using ETH_DMACSR_TPS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit Buffer Unavailable This bit indicates that the application owns the next descriptor in the Transmit list, and the DMA cannot acquire it. Transmission is suspended. The TPSi field of the register (ETH_DMADSR) register explains the Transmit Process state transitions. To resume processing the Transmit descriptors, the application should do the following: 1. Change the ownership of the descriptor by setting Bit 31 of TDES3. 2. Issue a Transmit Poll Demand command. For ring mode, the application should advance the Transmit Descriptor Tail Pointer register of a channel. */
    using ETH_DMACSR_TBU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive Interrupt This bit indicates that the packet reception is complete. When packet reception is complete, Bit 31 of RDES1 is reset in the last descriptor, and the specific packet status information is updated in the descriptor. The reception remains in the Running state. */
    using ETH_DMACSR_RI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive Buffer Unavailable This bit indicates that the application owns the next descriptor in the Receive list, and the DMA cannot acquire it. The Rx process is suspended. To resume processing Rx descriptors, the application should change the ownership of the descriptor and issue a Receive Poll Demand command. If this command is not issued, the Rx process resumes when the next recognized incoming packet is received. In ring mode, the application should advance the Receive Descriptor Tail Pointer register of a channel. This bit is set only when the DMA owns the previous Rx descriptor. */
    using ETH_DMACSR_RBU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive Process Stopped This bit is asserted when the Rx process enters the Stopped state. */
    using ETH_DMACSR_RPS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive Watchdog Timeout This bit is asserted when a packet with length greater than 2,048 bytes (10,240 bytes when Jumbo Packet mode is enabled) is received. */
    using ETH_DMACSR_RWT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Early Transmit Interrupt This bit indicates that the packet to be transmitted is fully transferred to the MTL Tx FIFO. */
    using ETH_DMACSR_ETI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Early Receive Interrupt This bit indicates that the DMA filled the first data buffer of the packet.The RI bit of this register automatically clears this bit. */
    using ETH_DMACSR_ERI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fatal Bus Error This bit indicates that a bus error occurred (as described in the EB field). When this bit is set, the corresponding DMA channel engine disables all bus accesses. */
    using ETH_DMACSR_FBE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Context Descriptor Error This bit indicates that the DMA Tx/Rx engine received a descriptor error, which indicates invalid context in the middle of packet flow (intermediate descriptor) or all ones descriptor in Tx case and on Rx side it indicates DMA has read a descriptor with either of the buffer address as ones which is considered to be invalid. */
    using ETH_DMACSR_CDE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Abnormal Interrupt Summary Abnormal Interrupt Summary bit value is the logical OR of the following when the corresponding interrupt bits are enabled in the ETH_DMACIER register: Bit 1: Transmit Process Stopped Bit 7: Receive Buffer Unavailable Bit 8: Receive Process Stopped Bit 10: Early Transmit Interrupt Bit 12: Fatal Bus Error Bit 13: Context Descriptor Error Only unmasked bits affect the Abnormal Interrupt Summary bit. This is a sticky bit. You must clear this bit (by writing 1 to this bit) each time a corresponding bit, which causes AIS to be set, is cleared. */
    using ETH_DMACSR_AIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Normal Interrupt Summary Normal Interrupt Summary bit value is the logical OR of the following bits when the corresponding interrupt bits are enabled in the ETH_DMACIER register: Bit 0: Transmit Interrupt Bit 2: Transmit Buffer Unavailable Bit 6: Receive Interrupt Bit 11: Early Receive Interrupt Only unmasked bits (interrupts for which interrupt enable is set in ETH_DMACIER register) affect the Normal Interrupt Summary bit. This is a sticky bit. You must clear this bit (by writing 1 to this bit) each time a corresponding bit which causes NIS to be set is cleared. */
    using ETH_DMACSR_NIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx DMA Error Bits This field indicates the type of error that caused a Bus Error. For example, error response on the AHB interface. Bit[2]: Error during data transfer by Tx DMA when 1, no Error during data transfer by Tx DMA when 0 Bit[1]: Error during descriptor access when 1, Error during data buffer access when 0 Bit[0]: Error during read transfer when 1, Error during write transfer when 0 This field is valid only when the FBE bit is set. This field does not generate an interrupt. */
    using ETH_DMACSR_TEB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx DMA Error Bits This field indicates the type of error that caused a Bus Error. For example, error response on the AHB interface. Bit [2]: Error during data transfer by Rx DMA when 1, no Error during data transfer by Rx DMA when 0. Bit[1]: Error during descriptor access when 1, Error during data buffer access when 0 Bit[0]: Error during read transfer when 1, Error during write transfer when 0 This field is valid only when the FBE bit is set. This field does not generate an interrupt. */
    using ETH_DMACSR_REB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel missed frame count register */
    using ETH_DMACMFCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x116C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Dropped Packet Counters This counter indicates the number of packet counters that are dropped by the DMA either because of bus error or because of programing RPF field in register (ETH_DMACRXCR). The counter gets cleared when this register is read. */
    using ETH_DMACMFCR_MFC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Overflow status of the MFC Counter When this bit is set then the MFC counter does not get incremented further. The bit gets cleared when this register is read. */
    using ETH_DMACMFCR_MFCO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
