/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32N647_DCMIPP_HPP
#define EMBEDDED_PP_STM32N647_DCMIPP_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Digital camera interface pixel pipeline */
namespace STM32N647::DCMIPP {

    /** @brief DCMIPP IPPLUG global register 1 */
    using DCMIPP_IPGR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Memory page size, as power of 2 of 64-byte units: */
    using DCMIPP_IPGR1_MEMORYPAGE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 64 bytes (value: 0)
     *          - B_0x1: 128 bytes (value: 1)
     */
        /** @brief 64 bytes */
    constexpr std::uint32_t DCMIPP_IPGR1_MEMORYPAGE_B_0x0 = 0;
        /** @brief 128 bytes */
    constexpr std::uint32_t DCMIPP_IPGR1_MEMORYPAGE_B_0x1 = 1;

    /** @brief Quality of service */
    using DCMIPP_IPGR1_QOS_MODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP IPPLUG global register 2 */
    using DCMIPP_IPGR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Request to lock the IP-Plug, to allow reconfiguration. */
    using DCMIPP_IPGR2_PSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No lock requested, IP-Plug runs on demand by background HW. (value: 0)
     *          - B_0x1: Lock requested: IP-Plug freezes shortly (see IDLE bit when lock is active). (value: 1)
     */
        /** @brief No lock requested, IP-Plug runs on demand by background HW. */
    constexpr std::uint32_t DCMIPP_IPGR2_PSTART_B_0x0 = 0;
        /** @brief Lock requested: IP-Plug freezes shortly (see IDLE bit when lock is active). */
    constexpr std::uint32_t DCMIPP_IPGR2_PSTART_B_0x1 = 1;

    /** @brief DCMIPP IPPLUG global register 3 */
    using DCMIPP_IPGR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Status of IP-Plug */
    using DCMIPP_IPGR3_IDLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IP-Plug is running (on demand by background HW) (value: 0)
     *          - B_0x1: IP-Plug is currently locked and can be reconfigured (value: 1)
     */
        /** @brief IP-Plug is running (on demand by background HW) */
    constexpr std::uint32_t DCMIPP_IPGR3_IDLE_B_0x0 = 0;
        /** @brief IP-Plug is currently locked and can be reconfigured */
    constexpr std::uint32_t DCMIPP_IPGR3_IDLE_B_0x1 = 1;

    /** @brief DCMIPP IPPLUG identification register */
    using DCMIPP_IPGR8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Division identifier (0x14) */
    using DCMIPP_IPGR8_DID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Revision identifier (0x03) */
    using DCMIPP_IPGR8_REVID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Architecture identifier (0x04) */
    using DCMIPP_IPGR8_ARCHIID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IP identifier (0xAA) */
    using DCMIPP_IPGR8_IPPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP IPPLUG Clientx register 1 */
    using DCMIPP_IPC1R1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Burst size as power of 2 of 8-byte units */
    using DCMIPP_IPC1R1_TRAFFIC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 8 bytes (value: 0)
     *          - B_0x1: 16 bytes (value: 1)
     */
        /** @brief 8 bytes */
    constexpr std::uint32_t DCMIPP_IPC1R1_TRAFFIC_B_0x0 = 0;
        /** @brief 16 bytes */
    constexpr std::uint32_t DCMIPP_IPC1R1_TRAFFIC_B_0x1 = 1;

    /** @brief Maximum outstanding transactions */
    using DCMIPP_IPC1R1_OTR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disabled. No outstanding transaction limitation (except via FIFO size) (value: 0)
     *          - B_0x1: Maximum two outstanding transactions ongoing. (value: 1)
     */
        /** @brief Disabled. No outstanding transaction limitation (except via FIFO size) */
    constexpr std::uint32_t DCMIPP_IPC1R1_OTR_B_0x0 = 0;
        /** @brief Maximum two outstanding transactions ongoing. */
    constexpr std::uint32_t DCMIPP_IPC1R1_OTR_B_0x1 = 1;

    /** @brief DCMIPP IPPLUG Clientx register 2 */
    using DCMIPP_IPC1R2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Non-user, must be kept at reset value. */
    using DCMIPP_IPC1R2_SVCMAPPING = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Ratio for WLRU[3:0] arbitration */
    using DCMIPP_IPC1R2_WLRU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Ratio part = 1 (value: 0)
     *          - B_0x1: Ratio part = 2 (value: 1)
     */
        /** @brief Ratio part = 1 */
    constexpr std::uint32_t DCMIPP_IPC1R2_WLRU_B_0x0 = 0;
        /** @brief Ratio part = 2 */
    constexpr std::uint32_t DCMIPP_IPC1R2_WLRU_B_0x1 = 1;

    /** @brief DCMIPP IPPLUG Clientx register 3 */
    using DCMIPP_IPC1R3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Start word (AXI width = 64 bits) of the FIFO of Clientx. */
    using DCMIPP_IPC1R3_DPREGSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End word (AXI width = 64 bits) of the FIFO of Clientx. */
    using DCMIPP_IPC1R3_DPREGEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP IPPLUG Clientx register 1 */
    using DCMIPP_IPC2R1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Burst size as power of 2 of 8-byte units */
    using DCMIPP_IPC2R1_TRAFFIC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 8 bytes (value: 0)
     *          - B_0x1: 16 bytes (value: 1)
     */
        /** @brief 8 bytes */
    constexpr std::uint32_t DCMIPP_IPC2R1_TRAFFIC_B_0x0 = 0;
        /** @brief 16 bytes */
    constexpr std::uint32_t DCMIPP_IPC2R1_TRAFFIC_B_0x1 = 1;

    /** @brief Maximum outstanding transactions */
    using DCMIPP_IPC2R1_OTR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disabled. No outstanding transaction limitation (except via FIFO size) (value: 0)
     *          - B_0x1: Maximum two outstanding transactions ongoing. (value: 1)
     */
        /** @brief Disabled. No outstanding transaction limitation (except via FIFO size) */
    constexpr std::uint32_t DCMIPP_IPC2R1_OTR_B_0x0 = 0;
        /** @brief Maximum two outstanding transactions ongoing. */
    constexpr std::uint32_t DCMIPP_IPC2R1_OTR_B_0x1 = 1;

    /** @brief DCMIPP IPPLUG Clientx register 2 */
    using DCMIPP_IPC2R2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Non-user, must be kept at reset value. */
    using DCMIPP_IPC2R2_SVCMAPPING = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Ratio for WLRU[3:0] arbitration */
    using DCMIPP_IPC2R2_WLRU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Ratio part = 1 (value: 0)
     *          - B_0x1: Ratio part = 2 (value: 1)
     */
        /** @brief Ratio part = 1 */
    constexpr std::uint32_t DCMIPP_IPC2R2_WLRU_B_0x0 = 0;
        /** @brief Ratio part = 2 */
    constexpr std::uint32_t DCMIPP_IPC2R2_WLRU_B_0x1 = 1;

    /** @brief DCMIPP IPPLUG Clientx register 3 */
    using DCMIPP_IPC2R3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Start word (AXI width = 64 bits) of the FIFO of Clientx. */
    using DCMIPP_IPC2R3_DPREGSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End word (AXI width = 64 bits) of the FIFO of Clientx. */
    using DCMIPP_IPC2R3_DPREGEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP IPPLUG Clientx register 1 */
    using DCMIPP_IPC3R1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Burst size as power of 2 of 8-byte units */
    using DCMIPP_IPC3R1_TRAFFIC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 8 bytes (value: 0)
     *          - B_0x1: 16 bytes (value: 1)
     */
        /** @brief 8 bytes */
    constexpr std::uint32_t DCMIPP_IPC3R1_TRAFFIC_B_0x0 = 0;
        /** @brief 16 bytes */
    constexpr std::uint32_t DCMIPP_IPC3R1_TRAFFIC_B_0x1 = 1;

    /** @brief Maximum outstanding transactions */
    using DCMIPP_IPC3R1_OTR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disabled. No outstanding transaction limitation (except via FIFO size) (value: 0)
     *          - B_0x1: Maximum two outstanding transactions ongoing. (value: 1)
     */
        /** @brief Disabled. No outstanding transaction limitation (except via FIFO size) */
    constexpr std::uint32_t DCMIPP_IPC3R1_OTR_B_0x0 = 0;
        /** @brief Maximum two outstanding transactions ongoing. */
    constexpr std::uint32_t DCMIPP_IPC3R1_OTR_B_0x1 = 1;

    /** @brief DCMIPP IPPLUG Clientx register 2 */
    using DCMIPP_IPC3R2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Non-user, must be kept at reset value. */
    using DCMIPP_IPC3R2_SVCMAPPING = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Ratio for WLRU[3:0] arbitration */
    using DCMIPP_IPC3R2_WLRU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Ratio part = 1 (value: 0)
     *          - B_0x1: Ratio part = 2 (value: 1)
     */
        /** @brief Ratio part = 1 */
    constexpr std::uint32_t DCMIPP_IPC3R2_WLRU_B_0x0 = 0;
        /** @brief Ratio part = 2 */
    constexpr std::uint32_t DCMIPP_IPC3R2_WLRU_B_0x1 = 1;

    /** @brief DCMIPP IPPLUG Clientx register 3 */
    using DCMIPP_IPC3R3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Start word (AXI width = 64 bits) of the FIFO of Clientx. */
    using DCMIPP_IPC3R3_DPREGSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End word (AXI width = 64 bits) of the FIFO of Clientx. */
    using DCMIPP_IPC3R3_DPREGEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP IPPLUG Clientx register 1 */
    using DCMIPP_IPC4R1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Burst size as power of 2 of 8-byte units */
    using DCMIPP_IPC4R1_TRAFFIC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 8 bytes (value: 0)
     *          - B_0x1: 16 bytes (value: 1)
     */
        /** @brief 8 bytes */
    constexpr std::uint32_t DCMIPP_IPC4R1_TRAFFIC_B_0x0 = 0;
        /** @brief 16 bytes */
    constexpr std::uint32_t DCMIPP_IPC4R1_TRAFFIC_B_0x1 = 1;

    /** @brief Maximum outstanding transactions */
    using DCMIPP_IPC4R1_OTR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disabled. No outstanding transaction limitation (except via FIFO size) (value: 0)
     *          - B_0x1: Maximum two outstanding transactions ongoing. (value: 1)
     */
        /** @brief Disabled. No outstanding transaction limitation (except via FIFO size) */
    constexpr std::uint32_t DCMIPP_IPC4R1_OTR_B_0x0 = 0;
        /** @brief Maximum two outstanding transactions ongoing. */
    constexpr std::uint32_t DCMIPP_IPC4R1_OTR_B_0x1 = 1;

    /** @brief DCMIPP IPPLUG Clientx register 2 */
    using DCMIPP_IPC4R2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Non-user, must be kept at reset value. */
    using DCMIPP_IPC4R2_SVCMAPPING = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Ratio for WLRU[3:0] arbitration */
    using DCMIPP_IPC4R2_WLRU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Ratio part = 1 (value: 0)
     *          - B_0x1: Ratio part = 2 (value: 1)
     */
        /** @brief Ratio part = 1 */
    constexpr std::uint32_t DCMIPP_IPC4R2_WLRU_B_0x0 = 0;
        /** @brief Ratio part = 2 */
    constexpr std::uint32_t DCMIPP_IPC4R2_WLRU_B_0x1 = 1;

    /** @brief DCMIPP IPPLUG Clientx register 3 */
    using DCMIPP_IPC4R3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x58, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Start word (AXI width = 64 bits) of the FIFO of Clientx. */
    using DCMIPP_IPC4R3_DPREGSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End word (AXI width = 64 bits) of the FIFO of Clientx. */
    using DCMIPP_IPC4R3_DPREGEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP IPPLUG Clientx register 1 */
    using DCMIPP_IPC5R1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Burst size as power of 2 of 8-byte units */
    using DCMIPP_IPC5R1_TRAFFIC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 8 bytes (value: 0)
     *          - B_0x1: 16 bytes (value: 1)
     */
        /** @brief 8 bytes */
    constexpr std::uint32_t DCMIPP_IPC5R1_TRAFFIC_B_0x0 = 0;
        /** @brief 16 bytes */
    constexpr std::uint32_t DCMIPP_IPC5R1_TRAFFIC_B_0x1 = 1;

    /** @brief Maximum outstanding transactions */
    using DCMIPP_IPC5R1_OTR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disabled. No outstanding transaction limitation (except via FIFO size) (value: 0)
     *          - B_0x1: Maximum two outstanding transactions ongoing. (value: 1)
     */
        /** @brief Disabled. No outstanding transaction limitation (except via FIFO size) */
    constexpr std::uint32_t DCMIPP_IPC5R1_OTR_B_0x0 = 0;
        /** @brief Maximum two outstanding transactions ongoing. */
    constexpr std::uint32_t DCMIPP_IPC5R1_OTR_B_0x1 = 1;

    /** @brief DCMIPP IPPLUG Clientx register 2 */
    using DCMIPP_IPC5R2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x64, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Non-user, must be kept at reset value. */
    using DCMIPP_IPC5R2_SVCMAPPING = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Ratio for WLRU[3:0] arbitration */
    using DCMIPP_IPC5R2_WLRU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Ratio part = 1 (value: 0)
     *          - B_0x1: Ratio part = 2 (value: 1)
     */
        /** @brief Ratio part = 1 */
    constexpr std::uint32_t DCMIPP_IPC5R2_WLRU_B_0x0 = 0;
        /** @brief Ratio part = 2 */
    constexpr std::uint32_t DCMIPP_IPC5R2_WLRU_B_0x1 = 1;

    /** @brief DCMIPP IPPLUG Clientx register 3 */
    using DCMIPP_IPC5R3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x68, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Start word (AXI width = 64 bits) of the FIFO of Clientx. */
    using DCMIPP_IPC5R3_DPREGSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End word (AXI width = 64 bits) of the FIFO of Clientx. */
    using DCMIPP_IPC5R3_DPREGEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP parallel interface control register */
    using DCMIPP_PRCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x104, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Embedded synchronization select */
    using DCMIPP_PRCR_ESS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Hardware synchronization data capture (frame/line start/stop) is synchronized with the HSYNC/VSYNC signals. (value: 0)
     *          - B_0x1: Embedded synchronization data capture is synchronized with synchronization codes embedded in the data flow. (value: 1)
     */
        /** @brief Hardware synchronization data capture (frame/line start/stop) is synchronized with the HSYNC/VSYNC signals. */
    constexpr std::uint32_t DCMIPP_PRCR_ESS_B_0x0 = 0;
        /** @brief Embedded synchronization data capture is synchronized with synchronization codes embedded in the data flow. */
    constexpr std::uint32_t DCMIPP_PRCR_ESS_B_0x1 = 1;

    /** @brief Pixel clock polarity */
    using DCMIPP_PRCR_PCKPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling edge active (value: 0)
     *          - B_0x1: Rising edge active (value: 1)
     */
        /** @brief Falling edge active */
    constexpr std::uint32_t DCMIPP_PRCR_PCKPOL_B_0x0 = 0;
        /** @brief Rising edge active */
    constexpr std::uint32_t DCMIPP_PRCR_PCKPOL_B_0x1 = 1;

    /** @brief Horizontal synchronization polarity */
    using DCMIPP_PRCR_HSPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSYNC active low (value: 0)
     *          - B_0x1: HSYNC active high (value: 1)
     */
        /** @brief HSYNC active low */
    constexpr std::uint32_t DCMIPP_PRCR_HSPOL_B_0x0 = 0;
        /** @brief HSYNC active high */
    constexpr std::uint32_t DCMIPP_PRCR_HSPOL_B_0x1 = 1;

    /** @brief Vertical synchronization polarity */
    using DCMIPP_PRCR_VSPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VSYNC active low (value: 0)
     *          - B_0x1: VSYNC active high (value: 1)
     */
        /** @brief VSYNC active low */
    constexpr std::uint32_t DCMIPP_PRCR_VSPOL_B_0x0 = 0;
        /** @brief VSYNC active high */
    constexpr std::uint32_t DCMIPP_PRCR_VSPOL_B_0x1 = 1;

    /** @brief Extended data mode */
    using DCMIPP_PRCR_EDM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interface captures 8-bit data on every pixel clock (value: 0)
     *          - B_0x1: Interface captures 10-bit data on every pixel clock (value: 1)
     *          - B_0x2: Interface captures 12-bit data on every pixel clock (value: 2)
     *          - B_0x3: Interface captures 14-bit data on every pixel clock (value: 3)
     *          - B_0x4: Interface captures 16-bit data on every pixel clock (value: 4)
     */
        /** @brief Interface captures 8-bit data on every pixel clock */
    constexpr std::uint32_t DCMIPP_PRCR_EDM_B_0x0 = 0;
        /** @brief Interface captures 10-bit data on every pixel clock */
    constexpr std::uint32_t DCMIPP_PRCR_EDM_B_0x1 = 1;
        /** @brief Interface captures 12-bit data on every pixel clock */
    constexpr std::uint32_t DCMIPP_PRCR_EDM_B_0x2 = 2;
        /** @brief Interface captures 14-bit data on every pixel clock */
    constexpr std::uint32_t DCMIPP_PRCR_EDM_B_0x3 = 3;
        /** @brief Interface captures 16-bit data on every pixel clock */
    constexpr std::uint32_t DCMIPP_PRCR_EDM_B_0x4 = 4;

    /** @brief Parallel interface enable */
    using DCMIPP_PRCR_ENABLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Parallel interface disabled to lower power consumption (value: 0)
     *          - B_0x1: Parallel interface enabled (value: 1)
     */
        /** @brief Parallel interface disabled to lower power consumption */
    constexpr std::uint32_t DCMIPP_PRCR_ENABLE_B_0x0 = 0;
        /** @brief Parallel interface enabled */
    constexpr std::uint32_t DCMIPP_PRCR_ENABLE_B_0x1 = 1;

    /** @brief Other values: data are captured and output as-is only through the data/dump pipeline (e.g. JPEG or byte input format). */
    using DCMIPP_PRCR_FORMAT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1E: YUV422 (value: 30)
     *          - B_0x22: RGB565 (value: 34)
     *          - B_0x24: RGB888 (= YUV444) (value: 36)
     *          - B_0x2A: RAW8 (value: 42)
     *          - B_0x2B: RAW10 (value: 43)
     *          - B_0x2C: RAW12 (value: 44)
     *          - B_0x2D: RAW14 (value: 45)
     *          - B_0x4A: monochrome 8-bit (value: 74)
     *          - B_0x4B: monochrome 10-bit (value: 75)
     *          - B_0x4C: monochrome 12-bit (value: 76)
     *          - B_0x4D: monochrome 14-bit (value: 77)
     *          - B_0x5A: byte stream (JPEG, compressed video) (value: 90)
     */
        /** @brief YUV422 */
    constexpr std::uint32_t DCMIPP_PRCR_FORMAT_B_0x1E = 30;
        /** @brief RGB565 */
    constexpr std::uint32_t DCMIPP_PRCR_FORMAT_B_0x22 = 34;
        /** @brief RGB888 (= YUV444) */
    constexpr std::uint32_t DCMIPP_PRCR_FORMAT_B_0x24 = 36;
        /** @brief RAW8 */
    constexpr std::uint32_t DCMIPP_PRCR_FORMAT_B_0x2A = 42;
        /** @brief RAW10 */
    constexpr std::uint32_t DCMIPP_PRCR_FORMAT_B_0x2B = 43;
        /** @brief RAW12 */
    constexpr std::uint32_t DCMIPP_PRCR_FORMAT_B_0x2C = 44;
        /** @brief RAW14 */
    constexpr std::uint32_t DCMIPP_PRCR_FORMAT_B_0x2D = 45;
        /** @brief monochrome 8-bit */
    constexpr std::uint32_t DCMIPP_PRCR_FORMAT_B_0x4A = 74;
        /** @brief monochrome 10-bit */
    constexpr std::uint32_t DCMIPP_PRCR_FORMAT_B_0x4B = 75;
        /** @brief monochrome 12-bit */
    constexpr std::uint32_t DCMIPP_PRCR_FORMAT_B_0x4C = 76;
        /** @brief monochrome 14-bit */
    constexpr std::uint32_t DCMIPP_PRCR_FORMAT_B_0x4D = 77;
        /** @brief byte stream (JPEG, compressed video) */
    constexpr std::uint32_t DCMIPP_PRCR_FORMAT_B_0x5A = 90;

    /** @brief Swap data (cycle 0 vs. cycle 1) for pixels received on two cycles */
    using DCMIPP_PRCR_SWAPCYCLES = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Default (value: 0)
     *          - B_0x1: Swap active: the data of cycle 1 is used before the data of cycle 0. (value: 1)
     */
        /** @brief Default */
    constexpr std::uint32_t DCMIPP_PRCR_SWAPCYCLES_B_0x0 = 0;
        /** @brief Swap active: the data of cycle 1 is used before the data of cycle 0. */
    constexpr std::uint32_t DCMIPP_PRCR_SWAPCYCLES_B_0x1 = 1;

    /** @brief Swap LSB vs. MSB within each received component */
    using DCMIPP_PRCR_SWAPBITS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: As received (value: 0)
     *          - B_0x1: Swapped MSB vs. LSB (value: 1)
     */
        /** @brief As received */
    constexpr std::uint32_t DCMIPP_PRCR_SWAPBITS_B_0x0 = 0;
        /** @brief Swapped MSB vs. LSB */
    constexpr std::uint32_t DCMIPP_PRCR_SWAPBITS_B_0x1 = 1;

    /** @brief DCMIPP parallel interface embedded synchronization code register */
    using DCMIPP_PRESCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x108, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame start delimiter code */
    using DCMIPP_PRESCR_FSC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Line start delimiter code */
    using DCMIPP_PRESCR_LSC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Line end delimiter code */
    using DCMIPP_PRESCR_LEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame end delimiter code */
    using DCMIPP_PRESCR_FEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP parallel interface embedded synchronization unmask register */
    using DCMIPP_PRESUR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame start delimiter unmask */
    using DCMIPP_PRESUR_FSU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The corresponding bit in the FSC byte in DCMIPP_ESCR is masked while comparing the frame start delimiter with the received data (value: 0)
     *          - B_0x1: The corresponding bit in the FSC byte in DCMIPP_ESCR is compared while comparing the frame start delimiter with the received data (value: 1)
     */
        /** @brief The corresponding bit in the FSC byte in DCMIPP_ESCR is masked while comparing the frame start delimiter with the received data */
    constexpr std::uint32_t DCMIPP_PRESUR_FSU_B_0x0 = 0;
        /** @brief The corresponding bit in the FSC byte in DCMIPP_ESCR is compared while comparing the frame start delimiter with the received data */
    constexpr std::uint32_t DCMIPP_PRESUR_FSU_B_0x1 = 1;

    /** @brief Line start delimiter unmask */
    using DCMIPP_PRESUR_LSU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The corresponding bit in the LSC byte in DCMIPP_ESCR is masked while comparing the line start delimiter with the received data (value: 0)
     *          - B_0x1: The corresponding bit in the LSC byte in DCMIPP_ESCR is compared while comparing the line start delimiter with the received data (value: 1)
     */
        /** @brief The corresponding bit in the LSC byte in DCMIPP_ESCR is masked while comparing the line start delimiter with the received data */
    constexpr std::uint32_t DCMIPP_PRESUR_LSU_B_0x0 = 0;
        /** @brief The corresponding bit in the LSC byte in DCMIPP_ESCR is compared while comparing the line start delimiter with the received data */
    constexpr std::uint32_t DCMIPP_PRESUR_LSU_B_0x1 = 1;

    /** @brief Line end delimiter unmask */
    using DCMIPP_PRESUR_LEU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The corresponding bit in the LEC byte in DCMIPP_ESCR is masked while comparing the line end delimiter with the received data (value: 0)
     *          - B_0x1: The corresponding bit in the LEC byte in DCMIPP_ESCR is compared while comparing the line end delimiter with the received data (value: 1)
     */
        /** @brief The corresponding bit in the LEC byte in DCMIPP_ESCR is masked while comparing the line end delimiter with the received data */
    constexpr std::uint32_t DCMIPP_PRESUR_LEU_B_0x0 = 0;
        /** @brief The corresponding bit in the LEC byte in DCMIPP_ESCR is compared while comparing the line end delimiter with the received data */
    constexpr std::uint32_t DCMIPP_PRESUR_LEU_B_0x1 = 1;

    /** @brief Frame end delimiter unmask */
    using DCMIPP_PRESUR_FEU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The corresponding bit in the FEC byte in DCMIPP_ESCR is masked while comparing the frame end delimiter with the received data. (value: 0)
     *          - B_0x1: The corresponding bit in the FEC byte in DCMIPP_ESCR is compared while comparing the frame end delimiter with the received data (value: 1)
     */
        /** @brief The corresponding bit in the FEC byte in DCMIPP_ESCR is masked while comparing the frame end delimiter with the received data. */
    constexpr std::uint32_t DCMIPP_PRESUR_FEU_B_0x0 = 0;
        /** @brief The corresponding bit in the FEC byte in DCMIPP_ESCR is compared while comparing the frame end delimiter with the received data */
    constexpr std::uint32_t DCMIPP_PRESUR_FEU_B_0x1 = 1;

    /** @brief DCMIPP parallel interface interrupt enable register */
    using DCMIPP_PRIER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1F4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization error interrupt enable */
    using DCMIPP_PRIER_ERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No interrupt generation (value: 0)
     *          - B_0x1: An interrupt is generated if the embedded synchronization codes are not received in the correct order. (value: 1)
     */
        /** @brief No interrupt generation */
    constexpr std::uint32_t DCMIPP_PRIER_ERRIE_B_0x0 = 0;
        /** @brief An interrupt is generated if the embedded synchronization codes are not received in the correct order. */
    constexpr std::uint32_t DCMIPP_PRIER_ERRIE_B_0x1 = 1;

    /** @brief DCMIPP parallel interface status register */
    using DCMIPP_PRSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1F8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization error raw interrupt status */
    using DCMIPP_PRSR_ERRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No synchronization error detected (value: 0)
     *          - B_0x1: Embedded synchronization characters are not received in the correct order. (value: 1)
     */
        /** @brief No synchronization error detected */
    constexpr std::uint32_t DCMIPP_PRSR_ERRF_B_0x0 = 0;
        /** @brief Embedded synchronization characters are not received in the correct order. */
    constexpr std::uint32_t DCMIPP_PRSR_ERRF_B_0x1 = 1;

    /** @brief This bit gives the state of the HSYNC pin with the correct programmed polarity if ENABLE bit is set into the DCMIPP_PRCR register and if the pixel clock is received. It is set during the blanking period whatever the polarity selected in HPOL bit, and cleared otherwise. */
    using DCMIPP_PRSR_HSYNC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Active line (value: 0)
     *          - B_0x1: Synchronization between lines (value: 1)
     */
        /** @brief Active line */
    constexpr std::uint32_t DCMIPP_PRSR_HSYNC_B_0x0 = 0;
        /** @brief Synchronization between lines */
    constexpr std::uint32_t DCMIPP_PRSR_HSYNC_B_0x1 = 1;

    /** @brief This bit gives the state of the VSYNC pin with the correct programmed polarity if ENABLE bit is set into the DCMIPP_PRCR register and if the pixel clock is received. It is set during the blanking period whatever the polarity selected in VPOL bit, and cleared otherwise. */
    using DCMIPP_PRSR_VSYNC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Active frame (value: 0)
     *          - B_0x1: Synchronization between frames (value: 1)
     */
        /** @brief Active frame */
    constexpr std::uint32_t DCMIPP_PRSR_VSYNC_B_0x0 = 0;
        /** @brief Synchronization between frames */
    constexpr std::uint32_t DCMIPP_PRSR_VSYNC_B_0x1 = 1;

    /** @brief DCMIPP parallel interface interrupt clear register */
    using DCMIPP_PRFCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1FC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization error interrupt status clear */
    using DCMIPP_PRFCR_CERRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP common configuration register */
    using DCMIPP_CMCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x204, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief input selection */
    using DCMIPP_CMCR_INSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DCMI (value: 0)
     *          - B_0x1: CSI-2 (value: 1)
     */
        /** @brief DCMI */
    constexpr std::uint32_t DCMIPP_CMCR_INSEL_B_0x0 = 0;
        /** @brief CSI-2 */
    constexpr std::uint32_t DCMIPP_CMCR_INSEL_B_0x1 = 1;

    /** @brief Pipe selection for the frame counter */
    using DCMIPP_CMCR_PSFC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Frame counter mapped to Pipe0 (value: 0)
     *          - B_0x1: Frame counter mapped to Pipe1 (value: 1)
     *          - B_0x2: Frame counter mapped to Pipe2 (value: 2)
     */
        /** @brief Frame counter mapped to Pipe0 */
    constexpr std::uint32_t DCMIPP_CMCR_PSFC_B_0x0 = 0;
        /** @brief Frame counter mapped to Pipe1 */
    constexpr std::uint32_t DCMIPP_CMCR_PSFC_B_0x1 = 1;
        /** @brief Frame counter mapped to Pipe2 */
    constexpr std::uint32_t DCMIPP_CMCR_PSFC_B_0x2 = 2;

    /** @brief Clear frame counter */
    using DCMIPP_CMCR_CFC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Swap R/U and B/V */
    using DCMIPP_CMCR_SWAPRB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RGB/VYU (value: 0)
     *          - B_0x1: BGR/UYV (value: 1)
     */
        /** @brief RGB/VYU */
    constexpr std::uint32_t DCMIPP_CMCR_SWAPRB_B_0x0 = 0;
        /** @brief BGR/UYV */
    constexpr std::uint32_t DCMIPP_CMCR_SWAPRB_B_0x1 = 1;

    /** @brief DCMIPP common frame counter register */
    using DCMIPP_CMFRCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x208, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame counter, read-only, loops around. */
    using DCMIPP_CMFRCR_FRMCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP common interrupt enable register */
    using DCMIPP_CMIER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3F0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXI transfer error interrupt enable for IPPLUG */
    using DCMIPP_CMIER_ATXERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No interrupt generation (value: 0)
     *          - B_0x1: An interrupt is generated (value: 1)
     */
        /** @brief No interrupt generation */
    constexpr std::uint32_t DCMIPP_CMIER_ATXERRIE_B_0x0 = 0;
        /** @brief An interrupt is generated */
    constexpr std::uint32_t DCMIPP_CMIER_ATXERRIE_B_0x1 = 1;

    /** @brief Limit interrupt enable for the parallel Interface */
    using DCMIPP_CMIER_PRERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No interrupt generation (value: 0)
     *          - B_0x1: An interrupt is generated (value: 1)
     */
        /** @brief No interrupt generation */
    constexpr std::uint32_t DCMIPP_CMIER_PRERRIE_B_0x0 = 0;
        /** @brief An interrupt is generated */
    constexpr std::uint32_t DCMIPP_CMIER_PRERRIE_B_0x1 = 1;

    /** @brief Multi-line capture complete interrupt enable for Pipe0 */
    using DCMIPP_CMIER_P0LINEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No interrupt generation (value: 0)
     *          - B_0x1: An interrupt is generated (value: 1)
     */
        /** @brief No interrupt generation */
    constexpr std::uint32_t DCMIPP_CMIER_P0LINEIE_B_0x0 = 0;
        /** @brief An interrupt is generated */
    constexpr std::uint32_t DCMIPP_CMIER_P0LINEIE_B_0x1 = 1;

    /** @brief Frame capture complete interrupt enable for Pipe0 */
    using DCMIPP_CMIER_P0FRAMEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No interrupt generation (value: 0)
     *          - B_0x1: An interrupt is generated (value: 1)
     */
        /** @brief No interrupt generation */
    constexpr std::uint32_t DCMIPP_CMIER_P0FRAMEIE_B_0x0 = 0;
        /** @brief An interrupt is generated */
    constexpr std::uint32_t DCMIPP_CMIER_P0FRAMEIE_B_0x1 = 1;

    /** @brief Vertical sync interrupt enable for Pipe0 */
    using DCMIPP_CMIER_P0VSYNCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No interrupt generation (value: 0)
     *          - B_0x1: An interrupt is generated (value: 1)
     */
        /** @brief No interrupt generation */
    constexpr std::uint32_t DCMIPP_CMIER_P0VSYNCIE_B_0x0 = 0;
        /** @brief An interrupt is generated */
    constexpr std::uint32_t DCMIPP_CMIER_P0VSYNCIE_B_0x1 = 1;

    /** @brief Limit interrupt enable for Pipe0 */
    using DCMIPP_CMIER_P0LIMITIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No interrupt generation (value: 0)
     *          - B_0x1: An interrupt is generated (value: 1)
     */
        /** @brief No interrupt generation */
    constexpr std::uint32_t DCMIPP_CMIER_P0LIMITIE_B_0x0 = 0;
        /** @brief An interrupt is generated */
    constexpr std::uint32_t DCMIPP_CMIER_P0LIMITIE_B_0x1 = 1;

    /** @brief Overrun interrupt enable for Pipe0 */
    using DCMIPP_CMIER_P0OVRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No interrupt generation (value: 0)
     *          - B_0x1: An interrupt is generated (value: 1)
     */
        /** @brief No interrupt generation */
    constexpr std::uint32_t DCMIPP_CMIER_P0OVRIE_B_0x0 = 0;
        /** @brief An interrupt is generated */
    constexpr std::uint32_t DCMIPP_CMIER_P0OVRIE_B_0x1 = 1;

    /** @brief Multi-line capture complete interrupt status clear for Pipe1 */
    using DCMIPP_CMIER_P1LINEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No interrupt generation (value: 0)
     *          - B_0x1: An interrupt is generated (value: 1)
     */
        /** @brief No interrupt generation */
    constexpr std::uint32_t DCMIPP_CMIER_P1LINEIE_B_0x0 = 0;
        /** @brief An interrupt is generated */
    constexpr std::uint32_t DCMIPP_CMIER_P1LINEIE_B_0x1 = 1;

    /** @brief Frame capture complete interrupt enable for Pipe1 */
    using DCMIPP_CMIER_P1FRAMEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No interrupt generation (value: 0)
     *          - B_0x1: An interrupt is generated (value: 1)
     */
        /** @brief No interrupt generation */
    constexpr std::uint32_t DCMIPP_CMIER_P1FRAMEIE_B_0x0 = 0;
        /** @brief An interrupt is generated */
    constexpr std::uint32_t DCMIPP_CMIER_P1FRAMEIE_B_0x1 = 1;

    /** @brief Vertical sync interrupt enable for Pipe1 */
    using DCMIPP_CMIER_P1VSYNCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No interrupt generation (value: 0)
     *          - B_0x1: An interrupt is generated (value: 1)
     */
        /** @brief No interrupt generation */
    constexpr std::uint32_t DCMIPP_CMIER_P1VSYNCIE_B_0x0 = 0;
        /** @brief An interrupt is generated */
    constexpr std::uint32_t DCMIPP_CMIER_P1VSYNCIE_B_0x1 = 1;

    /** @brief Overrun interrupt enable for Pipe1 */
    using DCMIPP_CMIER_P1OVRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Multi-line capture complete interrupt enable for Pipe2 */
    using DCMIPP_CMIER_P2LINEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No interrupt generation (value: 0)
     *          - B_0x1: An interrupt is generated. (value: 1)
     */
        /** @brief No interrupt generation */
    constexpr std::uint32_t DCMIPP_CMIER_P2LINEIE_B_0x0 = 0;
        /** @brief An interrupt is generated. */
    constexpr std::uint32_t DCMIPP_CMIER_P2LINEIE_B_0x1 = 1;

    /** @brief Frame capture complete interrupt enable for Pipe2 */
    using DCMIPP_CMIER_P2FRAMEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No interrupt generation (value: 0)
     *          - B_0x1: An interrupt is generated. (value: 1)
     */
        /** @brief No interrupt generation */
    constexpr std::uint32_t DCMIPP_CMIER_P2FRAMEIE_B_0x0 = 0;
        /** @brief An interrupt is generated. */
    constexpr std::uint32_t DCMIPP_CMIER_P2FRAMEIE_B_0x1 = 1;

    /** @brief Vertical sync interrupt enable for Pipe2 */
    using DCMIPP_CMIER_P2VSYNCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No interrupt generation (value: 0)
     *          - B_0x1: An interrupt is generated. (value: 1)
     */
        /** @brief No interrupt generation */
    constexpr std::uint32_t DCMIPP_CMIER_P2VSYNCIE_B_0x0 = 0;
        /** @brief An interrupt is generated. */
    constexpr std::uint32_t DCMIPP_CMIER_P2VSYNCIE_B_0x1 = 1;

    /** @brief Overrun interrupt status enable for Pipe2 */
    using DCMIPP_CMIER_P2OVRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No interrupt generation (value: 0)
     *          - B_0x1: An interrupt is generated (value: 1)
     */
        /** @brief No interrupt generation */
    constexpr std::uint32_t DCMIPP_CMIER_P2OVRIE_B_0x0 = 0;
        /** @brief An interrupt is generated */
    constexpr std::uint32_t DCMIPP_CMIER_P2OVRIE_B_0x1 = 1;

    /** @brief DCMIPP common status register 1 */
    using DCMIPP_CMSR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3F4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This bit gives the state of the HSYNC pin with the correct programmed polarity on the parallel interface if ENABLE bit is set into the DCMIPP_PRCR register and if the pixel clock is received. It is set during the blanking period whatever the polarity selected in HPOL bit of the DCMIPP_PRCR register, and cleared otherwise. */
    using DCMIPP_CMSR1_PRHSYNC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Active line (value: 0)
     *          - B_0x1: Synchronization between lines (value: 1)
     */
        /** @brief Active line */
    constexpr std::uint32_t DCMIPP_CMSR1_PRHSYNC_B_0x0 = 0;
        /** @brief Synchronization between lines */
    constexpr std::uint32_t DCMIPP_CMSR1_PRHSYNC_B_0x1 = 1;

    /** @brief This bit gives the state of the VSYNC pin with the correct programmed polarity on the parallel interface if ENABLE bit is set into the DCMIPP_PRCR register and if the pixel clock is received. It is set during the blanking period whatever the polarity selected in VPOL bit of the DCMIPP_PRCR register, and cleared otherwise. */
    using DCMIPP_CMSR1_PRVSYNC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Active frame (value: 0)
     *          - B_0x1: Synchronization between frames (value: 1)
     */
        /** @brief Active frame */
    constexpr std::uint32_t DCMIPP_CMSR1_PRVSYNC_B_0x0 = 0;
        /** @brief Synchronization between frames */
    constexpr std::uint32_t DCMIPP_CMSR1_PRVSYNC_B_0x1 = 1;

    /** @brief Last line LSB bit, sampled at Frame capture complete event for Pipe0 */
    using DCMIPP_CMSR1_P0LSTLINE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Last frame LSB bit, sampled at Frame capture complete event for Pipe0 */
    using DCMIPP_CMSR1_P0LSTFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Active frame capture (active from start-of-frame to frame complete) for Pipe0 */
    using DCMIPP_CMSR1_P0CPTACT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No capture currently active (value: 0)
     *          - B_0x1: Capture currently active (value: 1)
     */
        /** @brief No capture currently active */
    constexpr std::uint32_t DCMIPP_CMSR1_P0CPTACT_B_0x0 = 0;
        /** @brief Capture currently active */
    constexpr std::uint32_t DCMIPP_CMSR1_P0CPTACT_B_0x1 = 1;

    /** @brief Last line LSB bit, sampled at Frame capture complete event for Pipe1 */
    using DCMIPP_CMSR1_P1LSTLINE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Last frame LSB bit, sampled at frame capture complete event for Pipe1 */
    using DCMIPP_CMSR1_P1LSTFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Active frame capture (active from start-of-frame to frame complete) for Pipe1 */
    using DCMIPP_CMSR1_P1CPTACT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No capture currently active (value: 0)
     *          - B_0x1: Capture currently active (value: 1)
     */
        /** @brief No capture currently active */
    constexpr std::uint32_t DCMIPP_CMSR1_P1CPTACT_B_0x0 = 0;
        /** @brief Capture currently active */
    constexpr std::uint32_t DCMIPP_CMSR1_P1CPTACT_B_0x1 = 1;

    /** @brief Last line LSB bit, sampled at frame capture complete event for Pipe2 */
    using DCMIPP_CMSR1_P2LSTLINE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Last frame LSB bit, sampled at frame capture complete event for Pipe2 */
    using DCMIPP_CMSR1_P2LSTFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Active frame capture (active from start-of-frame to frame complete) for Pipe2 */
    using DCMIPP_CMSR1_P2CPTACT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No capture currently active (value: 0)
     *          - B_0x1: Capture currently active (value: 1)
     */
        /** @brief No capture currently active */
    constexpr std::uint32_t DCMIPP_CMSR1_P2CPTACT_B_0x0 = 0;
        /** @brief Capture currently active */
    constexpr std::uint32_t DCMIPP_CMSR1_P2CPTACT_B_0x1 = 1;

    /** @brief DCMIPP common status register 2 */
    using DCMIPP_CMSR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3F8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXI transfer error interrupt status flag for the IPPLUG. */
    using DCMIPP_CMSR2_ATXERRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No AXI transfer error detected (value: 0)
     *          - B_0x1: AXI transfer error occurred on an AXI client. This bit signals an error on a client without any specific hardware action, the software must handle the situation (normally used when debugging software application code). (value: 1)
     */
        /** @brief No AXI transfer error detected */
    constexpr std::uint32_t DCMIPP_CMSR2_ATXERRF_B_0x0 = 0;
        /** @brief AXI transfer error occurred on an AXI client. This bit signals an error on a client without any specific hardware action, the software must handle the situation (normally used when debugging software application code). */
    constexpr std::uint32_t DCMIPP_CMSR2_ATXERRF_B_0x1 = 1;

    /** @brief Synchronization error raw interrupt status for the parallel interface. */
    using DCMIPP_CMSR2_PRERRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No synchronization error detected (value: 0)
     *          - B_0x1: Embedded synchronization characters are not received in the correct order. (value: 1)
     */
        /** @brief No synchronization error detected */
    constexpr std::uint32_t DCMIPP_CMSR2_PRERRF_B_0x0 = 0;
        /** @brief Embedded synchronization characters are not received in the correct order. */
    constexpr std::uint32_t DCMIPP_CMSR2_PRERRF_B_0x1 = 1;

    /** @brief Multi-line capture completed raw interrupt status for Pipe0 */
    using DCMIPP_CMSR2_P0LINEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame capture completed raw interrupt status for Pipe0 */
    using DCMIPP_CMSR2_P0FRAMEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No capture or ongoing capture (value: 0)
     *          - B_0x1: All data of a frame have been captured (value: 1)
     */
        /** @brief No capture or ongoing capture */
    constexpr std::uint32_t DCMIPP_CMSR2_P0FRAMEF_B_0x0 = 0;
        /** @brief All data of a frame have been captured */
    constexpr std::uint32_t DCMIPP_CMSR2_P0FRAMEF_B_0x1 = 1;

    /** @brief VSYNC raw interrupt status for Pipe0 */
    using DCMIPP_CMSR2_P0VSYNCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Limit raw interrupt status for Pipe0 */
    using DCMIPP_CMSR2_P0LIMITF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Overrun raw interrupt status for Pipe0 */
    using DCMIPP_CMSR2_P0OVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No data buffer overrun occurred (value: 0)
     *          - B_0x1: A data buffer overrun occurred and this frame data are corrupted (value: 1)
     */
        /** @brief No data buffer overrun occurred */
    constexpr std::uint32_t DCMIPP_CMSR2_P0OVRF_B_0x0 = 0;
        /** @brief A data buffer overrun occurred and this frame data are corrupted */
    constexpr std::uint32_t DCMIPP_CMSR2_P0OVRF_B_0x1 = 1;

    /** @brief Multi-line capture completed raw interrupt status for Pipe1 */
    using DCMIPP_CMSR2_P1LINEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame capture completed raw interrupt status for Pipe1 */
    using DCMIPP_CMSR2_P1FRAMEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No capture or ongoing capture (value: 0)
     *          - B_0x1: All data of a frame have been captured (value: 1)
     */
        /** @brief No capture or ongoing capture */
    constexpr std::uint32_t DCMIPP_CMSR2_P1FRAMEF_B_0x0 = 0;
        /** @brief All data of a frame have been captured */
    constexpr std::uint32_t DCMIPP_CMSR2_P1FRAMEF_B_0x1 = 1;

    /** @brief VSYNC raw interrupt status for Pipe1 */
    using DCMIPP_CMSR2_P1VSYNCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Overrun raw interrupt status for Pipe1 */
    using DCMIPP_CMSR2_P1OVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No data buffer overrun occurred (value: 0)
     *          - B_0x1: A data buffer overrun occurred and this frame data are corrupted (value: 1)
     */
        /** @brief No data buffer overrun occurred */
    constexpr std::uint32_t DCMIPP_CMSR2_P1OVRF_B_0x0 = 0;
        /** @brief A data buffer overrun occurred and this frame data are corrupted */
    constexpr std::uint32_t DCMIPP_CMSR2_P1OVRF_B_0x1 = 1;

    /** @brief Multi-line capture completed raw interrupt status for Pipe2 */
    using DCMIPP_CMSR2_P2LINEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame capture completed raw interrupt status for Pipe2 */
    using DCMIPP_CMSR2_P2FRAMEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No capture or ongoing capture (value: 0)
     *          - B_0x1: All data of a frame have been captured (value: 1)
     */
        /** @brief No capture or ongoing capture */
    constexpr std::uint32_t DCMIPP_CMSR2_P2FRAMEF_B_0x0 = 0;
        /** @brief All data of a frame have been captured */
    constexpr std::uint32_t DCMIPP_CMSR2_P2FRAMEF_B_0x1 = 1;

    /** @brief VSYNC raw interrupt status for Pipe2 */
    using DCMIPP_CMSR2_P2VSYNCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Overrun raw interrupt status for Pipe2 */
    using DCMIPP_CMSR2_P2OVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No data buffer overrun occurred (value: 0)
     *          - B_0x1: A data buffer overrun occurred and this frame data are corrupted (value: 1)
     */
        /** @brief No data buffer overrun occurred */
    constexpr std::uint32_t DCMIPP_CMSR2_P2OVRF_B_0x0 = 0;
        /** @brief A data buffer overrun occurred and this frame data are corrupted */
    constexpr std::uint32_t DCMIPP_CMSR2_P2OVRF_B_0x1 = 1;

    /** @brief DCMIPP common interrupt clear register */
    using DCMIPP_CMFCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3FC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXI transfer error interrupt status clear */
    using DCMIPP_CMFCR_CATXERRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization error interrupt status clear */
    using DCMIPP_CMFCR_CPRERRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Multi-line capture complete interrupt status clear */
    using DCMIPP_CMFCR_CP0LINEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame capture complete interrupt status clear */
    using DCMIPP_CMFCR_CP0FRAMEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vertical synchronization interrupt status clear */
    using DCMIPP_CMFCR_CP0VSYNCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief limit interrupt status clear */
    using DCMIPP_CMFCR_CP0LIMITF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Overrun interrupt status clear */
    using DCMIPP_CMFCR_CP0OVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Multi-line capture complete interrupt status clear */
    using DCMIPP_CMFCR_CP1LINEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame capture complete interrupt status clear */
    using DCMIPP_CMFCR_CP1FRAMEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vertical synchronization interrupt status clear */
    using DCMIPP_CMFCR_CP1VSYNCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Overrun interrupt status clear */
    using DCMIPP_CMFCR_CP1OVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Multi-line capture complete interrupt status clear */
    using DCMIPP_CMFCR_CP2LINEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame capture complete interrupt status clear */
    using DCMIPP_CMFCR_CP2FRAMEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vertical synchronization interrupt status clear */
    using DCMIPP_CMFCR_CP2VSYNCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Overrun interrupt status clear */
    using DCMIPP_CMFCR_CP2OVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe0 flow selection configuration register */
    using DCMIPP_P0FSCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x404, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data type selection ID A */
    using DCMIPP_P0FSCR_DTIDA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data type selection ID B */
    using DCMIPP_P0FSCR_DTIDB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Flow selection mode */
    using DCMIPP_P0FSCR_DTMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Only flow DTIDA from the selected virtual channel is forwarded in the pipe (value: 0)
     *          - B_0x1: Flows DTIDA and/or DTIDB from the selected virtual channel are forwarded in the pipe (value: 1)
     *          - B_0x2: All data types from the selected virtual channel (except the DTIDA or DTIDB) are forwarded in the pipe (value: 2)
     *          - B_0x3: All data types of the selected virtual channel VC are forwarded in the pipe (value: 3)
     */
        /** @brief Only flow DTIDA from the selected virtual channel is forwarded in the pipe */
    constexpr std::uint32_t DCMIPP_P0FSCR_DTMODE_B_0x0 = 0;
        /** @brief Flows DTIDA and/or DTIDB from the selected virtual channel are forwarded in the pipe */
    constexpr std::uint32_t DCMIPP_P0FSCR_DTMODE_B_0x1 = 1;
        /** @brief All data types from the selected virtual channel (except the DTIDA or DTIDB) are forwarded in the pipe */
    constexpr std::uint32_t DCMIPP_P0FSCR_DTMODE_B_0x2 = 2;
        /** @brief All data types of the selected virtual channel VC are forwarded in the pipe */
    constexpr std::uint32_t DCMIPP_P0FSCR_DTMODE_B_0x3 = 3;

    /** @brief Flow selection mode */
    using DCMIPP_P0FSCR_VC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Activation of PipeN */
    using DCMIPP_P0FSCR_PIPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Pipe disabled (value: 0)
     *          - B_0x1: Pipe enabled, can start capturing with CPTMODE, CPTREQ, CPTACK (value: 1)
     */
        /** @brief Pipe disabled */
    constexpr std::uint32_t DCMIPP_P0FSCR_PIPEN_B_0x0 = 0;
        /** @brief Pipe enabled, can start capturing with CPTMODE, CPTREQ, CPTACK */
    constexpr std::uint32_t DCMIPP_P0FSCR_PIPEN_B_0x1 = 1;

    /** @brief DCMIPP Pipe0 flow control configuration register */
    using DCMIPP_P0FCTCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x500, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame capture rate control */
    using DCMIPP_P0FCTCR_FRATE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: All frames are captured (value: 0)
     *          - B_0x1: One out of two frames captured (50% bandwidth reduction) (value: 1)
     *          - B_0x2: One out of four frames captured (75% bandwidth reduction) (value: 2)
     *          - B_0x3: One out of eight frames captured (87% bandwidth reduction) (value: 3)
     */
        /** @brief All frames are captured */
    constexpr std::uint32_t DCMIPP_P0FCTCR_FRATE_B_0x0 = 0;
        /** @brief One out of two frames captured (50% bandwidth reduction) */
    constexpr std::uint32_t DCMIPP_P0FCTCR_FRATE_B_0x1 = 1;
        /** @brief One out of four frames captured (75% bandwidth reduction) */
    constexpr std::uint32_t DCMIPP_P0FCTCR_FRATE_B_0x2 = 2;
        /** @brief One out of eight frames captured (87% bandwidth reduction) */
    constexpr std::uint32_t DCMIPP_P0FCTCR_FRATE_B_0x3 = 3;

    /** @brief Capture mode */
    using DCMIPP_P0FCTCR_CPTMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Continuous grab mode - The received data are transferred into the destination memory through the AXI master. (value: 0)
     *          - B_0x1: Snapshot mode (single frame) - Once activated, the interface waits for the start of frame, and then transfers a single frame through the AXI master. At the end of the frame, the CPTACT bit is automatically reset. (value: 1)
     */
        /** @brief Continuous grab mode - The received data are transferred into the destination memory through the AXI master. */
    constexpr std::uint32_t DCMIPP_P0FCTCR_CPTMODE_B_0x0 = 0;
        /** @brief Snapshot mode (single frame) - Once activated, the interface waits for the start of frame, and then transfers a single frame through the AXI master. At the end of the frame, the CPTACT bit is automatically reset. */
    constexpr std::uint32_t DCMIPP_P0FCTCR_CPTMODE_B_0x1 = 1;

    /** @brief Capture requested */
    using DCMIPP_P0FCTCR_CPTREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Capture not requested for next frame (value: 0)
     *          - B_0x1: Capture requested for next frame (value: 1)
     */
        /** @brief Capture not requested for next frame */
    constexpr std::uint32_t DCMIPP_P0FCTCR_CPTREQ_B_0x0 = 0;
        /** @brief Capture requested for next frame */
    constexpr std::uint32_t DCMIPP_P0FCTCR_CPTREQ_B_0x1 = 1;

    /** @brief DCMIPP Pipe0 stat/crop start register */
    using DCMIPP_P0SCSTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x504, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Horizontal start, from 0 to 4094 words wide */
    using DCMIPP_P0SCSTR_HSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vertical start, from 0 to 4094 pixels high */
    using DCMIPP_P0SCSTR_VSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe0 stat/crop size register */
    using DCMIPP_P0SCSZR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x508, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Horizontal size, from 0 to 4094 word wide (data 32-bit) */
    using DCMIPP_P0SCSZR_HSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vertical size, from 0 to 4094 pixels high */
    using DCMIPP_P0SCSZR_VSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This bit is set and cleared by software. It has a meaning only if ENABLE bit is set. */
    using DCMIPP_P0SCSZR_POSNEG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Positive area, the rectangle defined by VSIZE, HSIZE, and VSTART, HSTART (value: 0)
     *          - B_0x1: Negative area, the area excluding the rectangle defined by VSIZE, HSIZE, and VSTART, HSTART (value: 1)
     */
        /** @brief Positive area, the rectangle defined by VSIZE, HSIZE, and VSTART, HSTART */
    constexpr std::uint32_t DCMIPP_P0SCSZR_POSNEG_B_0x0 = 0;
        /** @brief Negative area, the area excluding the rectangle defined by VSIZE, HSIZE, and VSTART, HSTART */
    constexpr std::uint32_t DCMIPP_P0SCSZR_POSNEG_B_0x1 = 1;

    /** @brief This bit is set and cleared by software. */
    using DCMIPP_P0SCSZR_ENABLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bypass. All the data are computed, if the statistic data are sent within the frame, they are sent to the processing pipe as pixels data. (value: 0)
     *          - B_0x1: Enable. Depending on bit POSNEG value, the rectangle defined by VSIZE, HSIZE, VSTART and HSTART can be used to extract or to remove some data (statistical extraction or removal, or basic 2D crop features). (value: 1)
     */
        /** @brief Bypass. All the data are computed, if the statistic data are sent within the frame, they are sent to the processing pipe as pixels data. */
    constexpr std::uint32_t DCMIPP_P0SCSZR_ENABLE_B_0x0 = 0;
        /** @brief Enable. Depending on bit POSNEG value, the rectangle defined by VSIZE, HSIZE, VSTART and HSTART can be used to extract or to remove some data (statistical extraction or removal, or basic 2D crop features). */
    constexpr std::uint32_t DCMIPP_P0SCSZR_ENABLE_B_0x1 = 1;

    /** @brief DCMIPP Pipe0 dump counter register */
    using DCMIPP_P0DCCNTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5B0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of data dumped during the frame. */
    using DCMIPP_P0DCCNTR_CNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 26, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe0 dump limit register */
    using DCMIPP_P0DCLMTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5B4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum number of 32-bit data that can be dumped during a frame, after the crop 2D operation. */
    using DCMIPP_P0DCLMTR_LIMIT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief None */
    using DCMIPP_P0DCLMTR_ENABLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disabled, no check on the amount of 32-bit words transmitted (value: 0)
     *          - B_0x1: Enabled, check done versus limit (value: 1)
     */
        /** @brief Disabled, no check on the amount of 32-bit words transmitted */
    constexpr std::uint32_t DCMIPP_P0DCLMTR_ENABLE_B_0x0 = 0;
        /** @brief Enabled, check done versus limit */
    constexpr std::uint32_t DCMIPP_P0DCLMTR_ENABLE_B_0x1 = 1;

    /** @brief DCMIPP Pipe0 pixel packer configuration register */
    using DCMIPP_P0PPCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5C0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Swaps, within a 32-bit word, byte 0-vs-1 and byte 2-vs-3. It corresponds, for YUV422 pixels formats, to swap between UYVY and YUYV. */
    using DCMIPP_P0PPCR_SWAPYUV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Outputs the provided words, as described in Section 34.10: Pixel format description. (value: 0)
     *          - B_0x1: Swaps the bytes from provided words, byte 0-vs.-1 and 2-vs.-3 (value: 1)
     */
        /** @brief Outputs the provided words, as described in Section 34.10: Pixel format description. */
    constexpr std::uint32_t DCMIPP_P0PPCR_SWAPYUV_B_0x0 = 0;
        /** @brief Swaps the bytes from provided words, byte 0-vs.-1 and 2-vs.-3 */
    constexpr std::uint32_t DCMIPP_P0PPCR_SWAPYUV_B_0x1 = 1;

    /** @brief Pad mode for monochrome and raw Bayer 10/12/14 bpp: MSB vs. LSB alignment. */
    using DCMIPP_P0PPCR_PAD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Aligns on LSB (and pads null bits on MSB), for backward compatibility with former DCMI. (value: 0)
     *          - B_0x1: Aligns on MSB (and pads null bits on LSB), for better ease of software or GPU. (value: 1)
     */
        /** @brief Aligns on LSB (and pads null bits on MSB), for backward compatibility with former DCMI. */
    constexpr std::uint32_t DCMIPP_P0PPCR_PAD_B_0x0 = 0;
        /** @brief Aligns on MSB (and pads null bits on LSB), for better ease of software or GPU. */
    constexpr std::uint32_t DCMIPP_P0PPCR_PAD_B_0x1 = 1;

    /** @brief CSI header dump enable */
    using DCMIPP_P0PPCR_HEADEREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CSI-2 headers are not dumped (value: 0)
     *          - B_0x1: CSI-2 headers are dumped as a 32-bit word. (value: 1)
     */
        /** @brief CSI-2 headers are not dumped */
    constexpr std::uint32_t DCMIPP_P0PPCR_HEADEREN_B_0x0 = 0;
        /** @brief CSI-2 headers are dumped as a 32-bit word. */
    constexpr std::uint32_t DCMIPP_P0PPCR_HEADEREN_B_0x1 = 1;

    /** @brief Byte select mode */
    using DCMIPP_P0PPCR_BSM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interface captures all received data (value: 0)
     *          - B_0x1: Interface captures 1 data out of 2 (value: 1)
     *          - B_0x2: Interface captures one byte out of four (value: 2)
     *          - B_0x3: Interface captures two bytes out of four (value: 3)
     */
        /** @brief Interface captures all received data */
    constexpr std::uint32_t DCMIPP_P0PPCR_BSM_B_0x0 = 0;
        /** @brief Interface captures 1 data out of 2 */
    constexpr std::uint32_t DCMIPP_P0PPCR_BSM_B_0x1 = 1;
        /** @brief Interface captures one byte out of four */
    constexpr std::uint32_t DCMIPP_P0PPCR_BSM_B_0x2 = 2;
        /** @brief Interface captures two bytes out of four */
    constexpr std::uint32_t DCMIPP_P0PPCR_BSM_B_0x3 = 3;

    /** @brief Odd/even byte select (byte select start) */
    using DCMIPP_P0PPCR_OEBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interface captures the first data (byte or double byte) from the frame/line start, the second one is dropped (value: 0)
     *          - B_0x1: Interface captures the second data (byte or double byte) from the frame/line start, the first one is dropped (value: 1)
     */
        /** @brief Interface captures the first data (byte or double byte) from the frame/line start, the second one is dropped */
    constexpr std::uint32_t DCMIPP_P0PPCR_OEBS_B_0x0 = 0;
        /** @brief Interface captures the second data (byte or double byte) from the frame/line start, the first one is dropped */
    constexpr std::uint32_t DCMIPP_P0PPCR_OEBS_B_0x1 = 1;

    /** @brief Line select mode */
    using DCMIPP_P0PPCR_LSM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interface captures all received lines (value: 0)
     *          - B_0x1: Interface captures one line out of two (value: 1)
     */
        /** @brief Interface captures all received lines */
    constexpr std::uint32_t DCMIPP_P0PPCR_LSM_B_0x0 = 0;
        /** @brief Interface captures one line out of two */
    constexpr std::uint32_t DCMIPP_P0PPCR_LSM_B_0x1 = 1;

    /** @brief Odd/even line select (line select start) */
    using DCMIPP_P0PPCR_OELS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interface captures first line after the frame start, second one is dropped (value: 0)
     *          - B_0x1: Interface captures second line from the frame start, first one is dropped (value: 1)
     */
        /** @brief Interface captures first line after the frame start, second one is dropped */
    constexpr std::uint32_t DCMIPP_P0PPCR_OELS_B_0x0 = 0;
        /** @brief Interface captures second line from the frame start, first one is dropped */
    constexpr std::uint32_t DCMIPP_P0PPCR_OELS_B_0x1 = 1;

    /** @brief Amount of capture completed lines for LINE event and interrupt */
    using DCMIPP_P0PPCR_LINEMULT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event after one line (value: 0)
     *          - B_0x1: Event after two lines (value: 1)
     *          - B_0x2: Event after four lines (value: 2)
     *          - B_0x3: Event after eight lines (value: 3)
     *          - B_0x4: Event after sixteen lines (value: 4)
     *          - B_0x5: Event after 32 lines (value: 5)
     *          - B_0x6: Event after 64 lines (value: 6)
     *          - B_0x7: Event after 128 lines (value: 7)
     */
        /** @brief Event after one line */
    constexpr std::uint32_t DCMIPP_P0PPCR_LINEMULT_B_0x0 = 0;
        /** @brief Event after two lines */
    constexpr std::uint32_t DCMIPP_P0PPCR_LINEMULT_B_0x1 = 1;
        /** @brief Event after four lines */
    constexpr std::uint32_t DCMIPP_P0PPCR_LINEMULT_B_0x2 = 2;
        /** @brief Event after eight lines */
    constexpr std::uint32_t DCMIPP_P0PPCR_LINEMULT_B_0x3 = 3;
        /** @brief Event after sixteen lines */
    constexpr std::uint32_t DCMIPP_P0PPCR_LINEMULT_B_0x4 = 4;
        /** @brief Event after 32 lines */
    constexpr std::uint32_t DCMIPP_P0PPCR_LINEMULT_B_0x5 = 5;
        /** @brief Event after 64 lines */
    constexpr std::uint32_t DCMIPP_P0PPCR_LINEMULT_B_0x6 = 6;
        /** @brief Event after 128 lines */
    constexpr std::uint32_t DCMIPP_P0PPCR_LINEMULT_B_0x7 = 7;

    /** @brief Double buffer mode */
    using DCMIPP_P0PPCR_DBM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No double buffer mode activated. Pipe0 always dumps to memory address set by DCMIPP_P0PPM0AR1. (value: 0)
     *          - B_0x1: Double buffer mode activated. Dump address location switches from DCMIPP_P0PPM0AR1 to DCMIPP_P0PPM0AR2 alternatively on each frame. (value: 1)
     */
        /** @brief No double buffer mode activated. Pipe0 always dumps to memory address set by DCMIPP_P0PPM0AR1. */
    constexpr std::uint32_t DCMIPP_P0PPCR_DBM_B_0x0 = 0;
        /** @brief Double buffer mode activated. Dump address location switches from DCMIPP_P0PPM0AR1 to DCMIPP_P0PPM0AR2 alternatively on each frame. */
    constexpr std::uint32_t DCMIPP_P0PPCR_DBM_B_0x1 = 1;

    /** @brief DCMIPP Pipe0 pixel packer Memory0 address register 1 */
    using DCMIPP_P0PPM0AR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5C4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Memory0 address */
    using DCMIPP_P0PPM0AR1_M0A = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe0 pixel packer Memory0 address register 2 */
    using DCMIPP_P0PPM0AR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5C8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Memory0 address */
    using DCMIPP_P0PPM0AR2_M0A = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe0 status Memory0 address register */
    using DCMIPP_P0STM0AR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5D0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Memory0 address */
    using DCMIPP_P0STM0AR_M0A = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe0 interrupt enable register */
    using DCMIPP_P0IER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5F4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Multi-line capture completed interrupt enable */
    using DCMIPP_P0IER_LINEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No interrupt generation when the line is received (value: 0)
     *          - B_0x1: An interrupt is generated after the full capture of a group of lines (or last line reached) (value: 1)
     */
        /** @brief No interrupt generation when the line is received */
    constexpr std::uint32_t DCMIPP_P0IER_LINEIE_B_0x0 = 0;
        /** @brief An interrupt is generated after the full capture of a group of lines (or last line reached) */
    constexpr std::uint32_t DCMIPP_P0IER_LINEIE_B_0x1 = 1;

    /** @brief Frame capture completed interrupt enable */
    using DCMIPP_P0IER_FRAMEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No interrupt generation (value: 0)
     *          - B_0x1: An interrupt is generated after the full capture of a cropped frame (value: 1)
     */
        /** @brief No interrupt generation */
    constexpr std::uint32_t DCMIPP_P0IER_FRAMEIE_B_0x0 = 0;
        /** @brief An interrupt is generated after the full capture of a cropped frame */
    constexpr std::uint32_t DCMIPP_P0IER_FRAMEIE_B_0x1 = 1;

    /** @brief VSYNC interrupt enable */
    using DCMIPP_P0IER_VSYNCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No interrupt generation (value: 0)
     *          - B_0x1: An interrupt is generated on each VSYNC (captured or not) (value: 1)
     */
        /** @brief No interrupt generation */
    constexpr std::uint32_t DCMIPP_P0IER_VSYNCIE_B_0x0 = 0;
        /** @brief An interrupt is generated on each VSYNC (captured or not) */
    constexpr std::uint32_t DCMIPP_P0IER_VSYNCIE_B_0x1 = 1;

    /** @brief Limit interrupt enable */
    using DCMIPP_P0IER_LIMITIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No interrupt generation when the limit is reached (value: 0)
     *          - B_0x1: An interrupt is generated when the limit is reached (value: 1)
     */
        /** @brief No interrupt generation when the limit is reached */
    constexpr std::uint32_t DCMIPP_P0IER_LIMITIE_B_0x0 = 0;
        /** @brief An interrupt is generated when the limit is reached */
    constexpr std::uint32_t DCMIPP_P0IER_LIMITIE_B_0x1 = 1;

    /** @brief Overrun interrupt enable */
    using DCMIPP_P0IER_OVRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No interrupt generation (value: 0)
     *          - B_0x1: An interrupt is generated if the AXI master is unable to transfer the last data before new data (32-bit) are received. (value: 1)
     */
        /** @brief No interrupt generation */
    constexpr std::uint32_t DCMIPP_P0IER_OVRIE_B_0x0 = 0;
        /** @brief An interrupt is generated if the AXI master is unable to transfer the last data before new data (32-bit) are received. */
    constexpr std::uint32_t DCMIPP_P0IER_OVRIE_B_0x1 = 1;

    /** @brief DCMIPP Pipe0 status register */
    using DCMIPP_P0SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5F8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Multi-line capture completed raw interrupt status */
    using DCMIPP_P0SR_LINEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame capture completed raw interrupt status */
    using DCMIPP_P0SR_FRAMEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No capture or ongoing capture (value: 0)
     *          - B_0x1: All data of a frame have been captured (value: 1)
     */
        /** @brief No capture or ongoing capture */
    constexpr std::uint32_t DCMIPP_P0SR_FRAMEF_B_0x0 = 0;
        /** @brief All data of a frame have been captured */
    constexpr std::uint32_t DCMIPP_P0SR_FRAMEF_B_0x1 = 1;

    /** @brief VSYNC raw interrupt status */
    using DCMIPP_P0SR_VSYNCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Limit raw interrupt status */
    using DCMIPP_P0SR_LIMITF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Overrun raw interrupt status */
    using DCMIPP_P0SR_OVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No data buffer overrun occurred (value: 0)
     *          - B_0x1: A data buffer overrun occurred and this frame data are corrupted (value: 1)
     */
        /** @brief No data buffer overrun occurred */
    constexpr std::uint32_t DCMIPP_P0SR_OVRF_B_0x0 = 0;
        /** @brief A data buffer overrun occurred and this frame data are corrupted */
    constexpr std::uint32_t DCMIPP_P0SR_OVRF_B_0x1 = 1;

    /** @brief Last line LSB bit, sampled at frame capture complete event. */
    using DCMIPP_P0SR_LSTLINE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Last frame LSB bit, sampled at frame capture complete event. The information is extracted from the frame data number that can be delivered by the camera through the CSI2 interface. */
    using DCMIPP_P0SR_LSTFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture immediate status */
    using DCMIPP_P0SR_CPTACT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Capture currently inactive (value: 0)
     *          - B_0x1: Capture currently active (value: 1)
     */
        /** @brief Capture currently inactive */
    constexpr std::uint32_t DCMIPP_P0SR_CPTACT_B_0x0 = 0;
        /** @brief Capture currently active */
    constexpr std::uint32_t DCMIPP_P0SR_CPTACT_B_0x1 = 1;

    /** @brief DCMIPP Pipe0 interrupt clear register */
    using DCMIPP_P0FCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5FC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Multi-line capture complete interrupt status clear */
    using DCMIPP_P0FCR_CLINEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame capture complete interrupt status clear */
    using DCMIPP_P0FCR_CFRAMEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vertical synchronization interrupt status clear */
    using DCMIPP_P0FCR_CVSYNCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief limit interrupt status clear */
    using DCMIPP_P0FCR_CLIMITF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Overrun interrupt status clear */
    using DCMIPP_P0FCR_COVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe0 current flow selection configuration register */
    using DCMIPP_P0CFSCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x604, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current data type selection ID A */
    using DCMIPP_P0CFSCR_DTIDA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current data type selection ID B */
    using DCMIPP_P0CFSCR_DTIDB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Flow selection mode */
    using DCMIPP_P0CFSCR_DTMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Only flow DTIDA from the selected virtual channel is forwarded in the pipe. (value: 0)
     *          - B_0x1: Flows DTIDA and/or DTIDB from the selected virtual channel are forwarded in the pipe. (value: 1)
     *          - B_0x2: All Datatypes from the selected virtual channel, except the DTIDA or DTIDB are forwarded into the pipe. (value: 2)
     *          - B_0x3: All Datatypes of the selected virtual channel VC are forwarded in the pipe. (value: 3)
     */
        /** @brief Only flow DTIDA from the selected virtual channel is forwarded in the pipe. */
    constexpr std::uint32_t DCMIPP_P0CFSCR_DTMODE_B_0x0 = 0;
        /** @brief Flows DTIDA and/or DTIDB from the selected virtual channel are forwarded in the pipe. */
    constexpr std::uint32_t DCMIPP_P0CFSCR_DTMODE_B_0x1 = 1;
        /** @brief All Datatypes from the selected virtual channel, except the DTIDA or DTIDB are forwarded into the pipe. */
    constexpr std::uint32_t DCMIPP_P0CFSCR_DTMODE_B_0x2 = 2;
        /** @brief All Datatypes of the selected virtual channel VC are forwarded in the pipe. */
    constexpr std::uint32_t DCMIPP_P0CFSCR_DTMODE_B_0x3 = 3;

    /** @brief Current flow selection mode */
    using DCMIPP_P0CFSCR_VC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current activation of PipeN */
    using DCMIPP_P0CFSCR_PIPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Pipe disabled (value: 0)
     *          - B_0x1: Pipe enabled, can start capturing with CPTMODE, CPTREQ, CPTACK. (value: 1)
     */
        /** @brief Pipe disabled */
    constexpr std::uint32_t DCMIPP_P0CFSCR_PIPEN_B_0x0 = 0;
        /** @brief Pipe enabled, can start capturing with CPTMODE, CPTREQ, CPTACK. */
    constexpr std::uint32_t DCMIPP_P0CFSCR_PIPEN_B_0x1 = 1;

    /** @brief DCMIPP Pipe0 current flow control configuration register */
    using DCMIPP_P0CFCTCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x700, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame capture rate control */
    using DCMIPP_P0CFCTCR_FRATE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: All frames are captured (value: 0)
     *          - B_0x1: One out of two frames captured (50% bandwidth reduction) (value: 1)
     *          - B_0x2: One out of four frames captured (75% bandwidth reduction) (value: 2)
     *          - B_0x3: One out of eight frames captured (87% bandwidth reduction) (value: 3)
     */
        /** @brief All frames are captured */
    constexpr std::uint32_t DCMIPP_P0CFCTCR_FRATE_B_0x0 = 0;
        /** @brief One out of two frames captured (50% bandwidth reduction) */
    constexpr std::uint32_t DCMIPP_P0CFCTCR_FRATE_B_0x1 = 1;
        /** @brief One out of four frames captured (75% bandwidth reduction) */
    constexpr std::uint32_t DCMIPP_P0CFCTCR_FRATE_B_0x2 = 2;
        /** @brief One out of eight frames captured (87% bandwidth reduction) */
    constexpr std::uint32_t DCMIPP_P0CFCTCR_FRATE_B_0x3 = 3;

    /** @brief Capture mode */
    using DCMIPP_P0CFCTCR_CPTMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Continuous grab mode - The received data are transferred into the destination memory through the AXI master. (value: 0)
     *          - B_0x1: Snapshot mode (single frame) - Once activated, the interface waits for the start of frame, and then transfers a single frame through the AXI master. At the end of the frame the CPTACT bit is automatically reset. (value: 1)
     */
        /** @brief Continuous grab mode - The received data are transferred into the destination memory through the AXI master. */
    constexpr std::uint32_t DCMIPP_P0CFCTCR_CPTMODE_B_0x0 = 0;
        /** @brief Snapshot mode (single frame) - Once activated, the interface waits for the start of frame, and then transfers a single frame through the AXI master. At the end of the frame the CPTACT bit is automatically reset. */
    constexpr std::uint32_t DCMIPP_P0CFCTCR_CPTMODE_B_0x1 = 1;

    /** @brief Capture requested */
    using DCMIPP_P0CFCTCR_CPTREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Capture not requested for next frame. (value: 0)
     *          - B_0x1: Capture requested for next frame. (value: 1)
     */
        /** @brief Capture not requested for next frame. */
    constexpr std::uint32_t DCMIPP_P0CFCTCR_CPTREQ_B_0x0 = 0;
        /** @brief Capture requested for next frame. */
    constexpr std::uint32_t DCMIPP_P0CFCTCR_CPTREQ_B_0x1 = 1;

    /** @brief DCMIPP Pipe0 current stat/crop start register */
    using DCMIPP_P0CSCSTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x704, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current horizontal start, from 0 to 4094 words wide */
    using DCMIPP_P0CSCSTR_HSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current vertical start, from 0 to 4094 pixels high */
    using DCMIPP_P0CSCSTR_VSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe0 current stat/crop size register */
    using DCMIPP_P0CSCSZR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x708, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current horizontal size, from 0 to 4094 word wide (data 32-bit). */
    using DCMIPP_P0CSCSZR_HSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current vertical size, from 0 to 4094 pixels high. */
    using DCMIPP_P0CSCSZR_VSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current value of the POSNEG bit */
    using DCMIPP_P0CSCSZR_POSNEG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Positive area. The rectangle defined by VSIZE,HSIZE, and VSTART, HSTART is the active area. (value: 0)
     *          - B_0x1: Negative area. The active area is the area excluding the rectangle defined by VSIZE, HSIZE, and VSTART, HSTART. (value: 1)
     */
        /** @brief Positive area. The rectangle defined by VSIZE,HSIZE, and VSTART, HSTART is the active area. */
    constexpr std::uint32_t DCMIPP_P0CSCSZR_POSNEG_B_0x0 = 0;
        /** @brief Negative area. The active area is the area excluding the rectangle defined by VSIZE, HSIZE, and VSTART, HSTART. */
    constexpr std::uint32_t DCMIPP_P0CSCSZR_POSNEG_B_0x1 = 1;

    /** @brief Current value of the ENABLE bit */
    using DCMIPP_P0CSCSZR_ENABLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bypass. All data are computed, if the statistics data are sent within the frame, they are sent to the processing pipe as pixels data. (value: 0)
     *          - B_0x1: Enable: Depending on bit POSNEG value, the rectangle defined by the VSIZE, HSIZE, VSTART, HSTART can be used to extract or to remove certain amount of data (statistical extraction or removal, or basic 2D crop features) (value: 1)
     */
        /** @brief Bypass. All data are computed, if the statistics data are sent within the frame, they are sent to the processing pipe as pixels data. */
    constexpr std::uint32_t DCMIPP_P0CSCSZR_ENABLE_B_0x0 = 0;
        /** @brief Enable: Depending on bit POSNEG value, the rectangle defined by the VSIZE, HSIZE, VSTART, HSTART can be used to extract or to remove certain amount of data (statistical extraction or removal, or basic 2D crop features) */
    constexpr std::uint32_t DCMIPP_P0CSCSZR_ENABLE_B_0x1 = 1;

    /** @brief DCMIPP Pipe0 current pixel packer configuration register */
    using DCMIPP_P0CPPCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7C0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Swaps, within a 32-bit word, byte 0 vs. 1 and byte 2 vs. 3. It corresponds, for YUV422 pixels formats, to swap between UYVY and YUYV. */
    using DCMIPP_P0CPPCR_SWAPYUV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Outputs the provided words, as described in Section 34.10: Pixel format description. (value: 0)
     *          - B_0x1: Swaps the bytes from provided words, byte 0 vs. 1 and 2 vs. 3. (value: 1)
     */
        /** @brief Outputs the provided words, as described in Section 34.10: Pixel format description. */
    constexpr std::uint32_t DCMIPP_P0CPPCR_SWAPYUV_B_0x0 = 0;
        /** @brief Swaps the bytes from provided words, byte 0 vs. 1 and 2 vs. 3. */
    constexpr std::uint32_t DCMIPP_P0CPPCR_SWAPYUV_B_0x1 = 1;

    /** @brief Current Pad mode for monochrome and raw Bayer 10/12/14 bpp: MSB vs. LSB alignment */
    using DCMIPP_P0CPPCR_PAD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Aligns on LSB (and pads null bits on MSB), for backward compatibility with former DCMI (value: 0)
     *          - B_0x1: Aligns on MSB (and pads null bits on LSB), for better ease of software or GPU (value: 1)
     */
        /** @brief Aligns on LSB (and pads null bits on MSB), for backward compatibility with former DCMI */
    constexpr std::uint32_t DCMIPP_P0CPPCR_PAD_B_0x0 = 0;
        /** @brief Aligns on MSB (and pads null bits on LSB), for better ease of software or GPU */
    constexpr std::uint32_t DCMIPP_P0CPPCR_PAD_B_0x1 = 1;

    /** @brief Current CSI header dump enable */
    using DCMIPP_P0CPPCR_HEADEREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CSI-2 headers are not dumped. (value: 0)
     *          - B_0x1: CSI-2 headers are dumped as a 32-bit words. (value: 1)
     */
        /** @brief CSI-2 headers are not dumped. */
    constexpr std::uint32_t DCMIPP_P0CPPCR_HEADEREN_B_0x0 = 0;
        /** @brief CSI-2 headers are dumped as a 32-bit words. */
    constexpr std::uint32_t DCMIPP_P0CPPCR_HEADEREN_B_0x1 = 1;

    /** @brief Current Byte select mode */
    using DCMIPP_P0CPPCR_BSM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interface captures all received data (value: 0)
     *          - B_0x1: Interface captures one data out of two (value: 1)
     *          - B_0x2: Interface captures one byte out of four (value: 2)
     *          - B_0x3: Interface captures two bytes out of four (value: 3)
     */
        /** @brief Interface captures all received data */
    constexpr std::uint32_t DCMIPP_P0CPPCR_BSM_B_0x0 = 0;
        /** @brief Interface captures one data out of two */
    constexpr std::uint32_t DCMIPP_P0CPPCR_BSM_B_0x1 = 1;
        /** @brief Interface captures one byte out of four */
    constexpr std::uint32_t DCMIPP_P0CPPCR_BSM_B_0x2 = 2;
        /** @brief Interface captures two bytes out of four */
    constexpr std::uint32_t DCMIPP_P0CPPCR_BSM_B_0x3 = 3;

    /** @brief Current odd/even byte select (byte select start) */
    using DCMIPP_P0CPPCR_OEBS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interface captures the first data (byte or double byte) from the frame/line start, the second one is dropped (value: 0)
     *          - B_0x1: Interface captures the second data (byte or double byte) from the frame/line start, the first one is dropped (value: 1)
     */
        /** @brief Interface captures the first data (byte or double byte) from the frame/line start, the second one is dropped */
    constexpr std::uint32_t DCMIPP_P0CPPCR_OEBS_B_0x0 = 0;
        /** @brief Interface captures the second data (byte or double byte) from the frame/line start, the first one is dropped */
    constexpr std::uint32_t DCMIPP_P0CPPCR_OEBS_B_0x1 = 1;

    /** @brief Current Line select mode */
    using DCMIPP_P0CPPCR_LSM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interface captures all received lines (value: 0)
     *          - B_0x1: Interface captures one line out of two (value: 1)
     */
        /** @brief Interface captures all received lines */
    constexpr std::uint32_t DCMIPP_P0CPPCR_LSM_B_0x0 = 0;
        /** @brief Interface captures one line out of two */
    constexpr std::uint32_t DCMIPP_P0CPPCR_LSM_B_0x1 = 1;

    /** @brief Current odd/even line select (ine select start) */
    using DCMIPP_P0CPPCR_OELS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interface captures the first line after the frame start, the second one is dropped (value: 0)
     *          - B_0x1: Interface captures the second line from the frame start, the first one is dropped (value: 1)
     */
        /** @brief Interface captures the first line after the frame start, the second one is dropped */
    constexpr std::uint32_t DCMIPP_P0CPPCR_OELS_B_0x0 = 0;
        /** @brief Interface captures the second line from the frame start, the first one is dropped */
    constexpr std::uint32_t DCMIPP_P0CPPCR_OELS_B_0x1 = 1;

    /** @brief Current amount of capture completed lines for LINE event and interrupt */
    using DCMIPP_P0CPPCR_LINEMULT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event after every line (value: 0)
     *          - B_0x1: Event after two lines (value: 1)
     *          - B_0x2: Event after four lines (value: 2)
     *          - B_0x3: Event after eight lines (value: 3)
     *          - B_0x4: Event after sixteen lines (value: 4)
     *          - B_0x5: Event after 32 lines (value: 5)
     *          - B_0x6: Event after 64 lines (value: 6)
     *          - B_0x7: Event after 128 lines (value: 7)
     */
        /** @brief Event after every line */
    constexpr std::uint32_t DCMIPP_P0CPPCR_LINEMULT_B_0x0 = 0;
        /** @brief Event after two lines */
    constexpr std::uint32_t DCMIPP_P0CPPCR_LINEMULT_B_0x1 = 1;
        /** @brief Event after four lines */
    constexpr std::uint32_t DCMIPP_P0CPPCR_LINEMULT_B_0x2 = 2;
        /** @brief Event after eight lines */
    constexpr std::uint32_t DCMIPP_P0CPPCR_LINEMULT_B_0x3 = 3;
        /** @brief Event after sixteen lines */
    constexpr std::uint32_t DCMIPP_P0CPPCR_LINEMULT_B_0x4 = 4;
        /** @brief Event after 32 lines */
    constexpr std::uint32_t DCMIPP_P0CPPCR_LINEMULT_B_0x5 = 5;
        /** @brief Event after 64 lines */
    constexpr std::uint32_t DCMIPP_P0CPPCR_LINEMULT_B_0x6 = 6;
        /** @brief Event after 128 lines */
    constexpr std::uint32_t DCMIPP_P0CPPCR_LINEMULT_B_0x7 = 7;

    /** @brief Double buffer mode */
    using DCMIPP_P0CPPCR_DBM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No double buffer mode activated. Pipe0 is always dump to memory address set by DCMIPP_P0PPM0AR1 register (value: 0)
     *          - B_0x1: Double buffer mode activated. Dump address location switches from DCMIPP_P0PPM0AR1 register to DCMIPP_P0PPM0AR2 register alternatively on each frame. (value: 1)
     */
        /** @brief No double buffer mode activated. Pipe0 is always dump to memory address set by DCMIPP_P0PPM0AR1 register */
    constexpr std::uint32_t DCMIPP_P0CPPCR_DBM_B_0x0 = 0;
        /** @brief Double buffer mode activated. Dump address location switches from DCMIPP_P0PPM0AR1 register to DCMIPP_P0PPM0AR2 register alternatively on each frame. */
    constexpr std::uint32_t DCMIPP_P0CPPCR_DBM_B_0x1 = 1;

    /** @brief DCMIPP Pipe0 current pixel packer Memory0 address register 1 */
    using DCMIPP_P0CPPM0AR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7C4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Memory0 address */
    using DCMIPP_P0CPPM0AR1_M0A = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe0 current pixel packer Memory0 address register 2 */
    using DCMIPP_P0CPPM0AR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7C8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Memory0 address */
    using DCMIPP_P0CPPM0AR2_M0A = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe1 flow selection configuration register */
    using DCMIPP_P1FSCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x804, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data type selection ID A */
    using DCMIPP_P1FSCR_DTIDA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data type selection ID B */
    using DCMIPP_P1FSCR_DTIDB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Flow selection mode */
    using DCMIPP_P1FSCR_DTMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Only flow DTIDA from the selected virtual channel is forwarded in the pipe (value: 0)
     *          - B_0x1: Flows DTIDA and/or DTIDB from the selected virtual channel are forwarded in the pipe (value: 1)
     */
        /** @brief Only flow DTIDA from the selected virtual channel is forwarded in the pipe */
    constexpr std::uint32_t DCMIPP_P1FSCR_DTMODE_B_0x0 = 0;
        /** @brief Flows DTIDA and/or DTIDB from the selected virtual channel are forwarded in the pipe */
    constexpr std::uint32_t DCMIPP_P1FSCR_DTMODE_B_0x1 = 1;

    /** @brief Differentiates Pipe2 from Pipe1 */
    using DCMIPP_P1FSCR_PIPEDIFF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Pipe2 receives the same data as Pipe1 (Ie data filtered by Pipe1 configuration for VC and DTIDA/DTIDB and DTMODE mode, as well as FDTF and FDTFEN bit). (value: 0)
     *          - B_0x1: Pipe1 gets pixels from only VC and DT configured in Pipe1, processed by all block belonging to the image processing functional block (ie, demosaicing, auto exposure, statistics, contrast enhancement). (value: 1)
     */
        /** @brief Pipe2 receives the same data as Pipe1 (Ie data filtered by Pipe1 configuration for VC and DTIDA/DTIDB and DTMODE mode, as well as FDTF and FDTFEN bit). */
    constexpr std::uint32_t DCMIPP_P1FSCR_PIPEDIFF_B_0x0 = 0;
        /** @brief Pipe1 gets pixels from only VC and DT configured in Pipe1, processed by all block belonging to the image processing functional block (ie, demosaicing, auto exposure, statistics, contrast enhancement). */
    constexpr std::uint32_t DCMIPP_P1FSCR_PIPEDIFF_B_0x1 = 1;

    /** @brief Flow selection mode */
    using DCMIPP_P1FSCR_VC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Force Datatype format. */
    using DCMIPP_P1FSCR_FDTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Force Datatype format enable. */
    using DCMIPP_P1FSCR_FDTFEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable force Datatype format. The Datatype format used by the pipe is the one defined into DTIDx1: Enable force Datatype format. When the Datatype DTIDx is detected by the pipe, the real pixel format considered by the pipe is the one set into the FDTF[5:0] bit field instead of the physical one received by the CSI2 Host. It allows to handle, for instance, 3D sensors camera using user data type in bottom-up approach, and to explicitly define the pixel format to be handled by the pipe. Note that the flow is first selected using the DTMODE and DTIDA/B, and then, if selected, its data type may be forced with the to FDTC using FDTFEN = 1. (value: 0)
     */
        /** @brief Disable force Datatype format. The Datatype format used by the pipe is the one defined into DTIDx1: Enable force Datatype format. When the Datatype DTIDx is detected by the pipe, the real pixel format considered by the pipe is the one set into the FDTF[5:0] bit field instead of the physical one received by the CSI2 Host. It allows to handle, for instance, 3D sensors camera using user data type in bottom-up approach, and to explicitly define the pixel format to be handled by the pipe. Note that the flow is first selected using the DTMODE and DTIDA/B, and then, if selected, its data type may be forced with the to FDTC using FDTFEN = 1. */
    constexpr std::uint32_t DCMIPP_P1FSCR_FDTFEN_B_0x0 = 0;

    /** @brief Activation of PipeN */
    using DCMIPP_P1FSCR_PIPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Pipe disabled (value: 0)
     *          - B_0x1: Pipe enabled, can start capturing with CPTMODE, CPTREQ, CPTACK (value: 1)
     */
        /** @brief Pipe disabled */
    constexpr std::uint32_t DCMIPP_P1FSCR_PIPEN_B_0x0 = 0;
        /** @brief Pipe enabled, can start capturing with CPTMODE, CPTREQ, CPTACK */
    constexpr std::uint32_t DCMIPP_P1FSCR_PIPEN_B_0x1 = 1;

    /** @brief DCMIPP Pipe1 stat removal configuration register */
    using DCMIPP_P1SRCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x820, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Amount of following lines to keep when CROPEN = 1. If LASTLINE = 0 all pixels after FIRSTLINEDEL are fed through. */
    using DCMIPP_P1SRCR_LASTLINE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Amount of first lines to delete when CROPEN = 1 */
    using DCMIPP_P1SRCR_FIRSTLINEDEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Crop line enable */
    using DCMIPP_P1SRCR_CROPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No crop (all pixels are fed through) (value: 0)
     *          - B_0x1: Crop (value: 1)
     */
        /** @brief No crop (all pixels are fed through) */
    constexpr std::uint32_t DCMIPP_P1SRCR_CROPEN_B_0x0 = 0;
        /** @brief Crop */
    constexpr std::uint32_t DCMIPP_P1SRCR_CROPEN_B_0x1 = 1;

    /** @brief DCMIPP Pipe1 bad pixel removal control register */
    using DCMIPP_P1BPRCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x824, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bad pixel detection must be enabled only for raw Bayer flows, as it corrupts RGB flows. */
    using DCMIPP_P1BPRCR_ENABLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bypass: bad pixel removal is not active, all pixels are transmitted through (value: 0)
     *          - B_0x1: Enable: if bad pixel are detected, they are replaced by corrected pixels (value: 1)
     */
        /** @brief Bypass: bad pixel removal is not active, all pixels are transmitted through */
    constexpr std::uint32_t DCMIPP_P1BPRCR_ENABLE_B_0x0 = 0;
        /** @brief Enable: if bad pixel are detected, they are replaced by corrected pixels */
    constexpr std::uint32_t DCMIPP_P1BPRCR_ENABLE_B_0x1 = 1;

    /** @brief Strength (aggressiveness) of the bad pixel detection */
    using DCMIPP_P1BPRCR_STRENGTH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The filter is fairly tolerant: only a few pixels are declared bad, due to their high noise (value: 0)
     */
        /** @brief The filter is fairly tolerant: only a few pixels are declared bad, due to their high noise */
    constexpr std::uint32_t DCMIPP_P1BPRCR_STRENGTH_B_0x0 = 0;

    /** @brief DCMIPP Pipe1 bad pixel removal status register */
    using DCMIPP_P1BPRSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x828, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Amount of detected bad pixels */
    using DCMIPP_P1BPRSR_BADCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe1 decimation register */
    using DCMIPP_P1DECR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x830, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief None */
    using DCMIPP_P1DECR_ENABLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bypass: decimation is not active, all pixels are transmitted (value: 0)
     *          - B_0x1: Enable: one pixel every 1, 2, 4 or 8, in H and V is transmitted, following HDEC and VDEC (value: 1)
     */
        /** @brief Bypass: decimation is not active, all pixels are transmitted */
    constexpr std::uint32_t DCMIPP_P1DECR_ENABLE_B_0x0 = 0;
        /** @brief Enable: one pixel every 1, 2, 4 or 8, in H and V is transmitted, following HDEC and VDEC */
    constexpr std::uint32_t DCMIPP_P1DECR_ENABLE_B_0x1 = 1;

    /** @brief Horizontal decimation ratio */
    using DCMIPP_P1DECR_HDEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: All pixels are transmitted, no horizontal decimation (value: 0)
     *          - B_0x1: One line out of two transmitted (for raw Bayer data, two lines of components every four) (value: 1)
     */
        /** @brief All pixels are transmitted, no horizontal decimation */
    constexpr std::uint32_t DCMIPP_P1DECR_HDEC_B_0x0 = 0;
        /** @brief One line out of two transmitted (for raw Bayer data, two lines of components every four) */
    constexpr std::uint32_t DCMIPP_P1DECR_HDEC_B_0x1 = 1;

    /** @brief Vertical decimation ratio */
    using DCMIPP_P1DECR_VDEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: All pixels are transmitted, no vertical decimation (value: 0)
     *          - B_0x1: One line out of two transmitted (for raw Bayer data, two lines of components every four) (value: 1)
     */
        /** @brief All pixels are transmitted, no vertical decimation */
    constexpr std::uint32_t DCMIPP_P1DECR_VDEC_B_0x0 = 0;
        /** @brief One line out of two transmitted (for raw Bayer data, two lines of components every four) */
    constexpr std::uint32_t DCMIPP_P1DECR_VDEC_B_0x1 = 1;

    /** @brief DCMIPP Pipe1 black level calibration control register */
    using DCMIPP_P1BLCCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x840, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Black level calibration */
    using DCMIPP_P1BLCCR_ENABLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bypass: black level calibration is not active, all pixels are transmitted non-modified. (value: 0)
     *          - B_0x1: Enable: the BLC R, G, B are subtracted. (value: 1)
     */
        /** @brief Bypass: black level calibration is not active, all pixels are transmitted non-modified. */
    constexpr std::uint32_t DCMIPP_P1BLCCR_ENABLE_B_0x0 = 0;
        /** @brief Enable: the BLC R, G, B are subtracted. */
    constexpr std::uint32_t DCMIPP_P1BLCCR_ENABLE_B_0x1 = 1;

    /** @brief Black level calibration - Blue */
    using DCMIPP_P1BLCCR_BLCB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Black level calibration - Green */
    using DCMIPP_P1BLCCR_BLCG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Black level calibration - Red */
    using DCMIPP_P1BLCCR_BLCR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe1 exposure control register 1 */
    using DCMIPP_P1EXCR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x844, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Exposure control (multiplication and shift) of all red, green and blue */
    using DCMIPP_P1EXCR1_ENABLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bypass: exposure multiplier and shift are not applied (value: 0)
     *          - B_0x1: Enable: the exposure multiplication and shift is applied (value: 1)
     */
        /** @brief Bypass: exposure multiplier and shift are not applied */
    constexpr std::uint32_t DCMIPP_P1EXCR1_ENABLE_B_0x0 = 0;
        /** @brief Enable: the exposure multiplication and shift is applied */
    constexpr std::uint32_t DCMIPP_P1EXCR1_ENABLE_B_0x1 = 1;

    /** @brief Exposure multiplier - Red */
    using DCMIPP_P1EXCR1_MULTR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Exposure shift - Red */
    using DCMIPP_P1EXCR1_SHFR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe1 exposure control register 2 */
    using DCMIPP_P1EXCR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x848, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Exposure multiplier - Blue */
    using DCMIPP_P1EXCR2_MULTB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Exposure shift - Blue */
    using DCMIPP_P1EXCR2_SHFB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Exposure multiplier - Green */
    using DCMIPP_P1EXCR2_MULTG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Exposure shift - Green */
    using DCMIPP_P1EXCR2_SHFG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe1 statistics1 control register */
    using DCMIPP_P1ST1CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x850, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief None */
    using DCMIPP_P1ST1CR_ENABLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disabled: statistics are not accumulated. (value: 0)
     *          - B_0x1: Enable: statistics are accumulated (value: 1)
     */
        /** @brief Disabled: statistics are not accumulated. */
    constexpr std::uint32_t DCMIPP_P1ST1CR_ENABLE_B_0x0 = 0;
        /** @brief Enable: statistics are accumulated */
    constexpr std::uint32_t DCMIPP_P1ST1CR_ENABLE_B_0x1 = 1;

    /** @brief Current bin definition */
    using DCMIPP_P1ST1CR_BINS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: All Pixels: Accu is incremented of Component, if 0 less than or equal to Component less than 256. (value: 0)
     *          - B_0x1: NoExt16: Accu is incremented of Component, if 16 less than or equal to Component less than 240 (value: 1)
     */
        /** @brief All Pixels: Accu is incremented of Component, if 0 less than or equal to Component less than 256. */
    constexpr std::uint32_t DCMIPP_P1ST1CR_BINS_B_0x0 = 0;
        /** @brief NoExt16: Accu is incremented of Component, if 16 less than or equal to Component less than 240 */
    constexpr std::uint32_t DCMIPP_P1ST1CR_BINS_B_0x1 = 1;

    /** @brief Statistics source */
    using DCMIPP_P1ST1CR_SRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Statistics mode */
    using DCMIPP_P1ST1CR_MODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Average: accumulates the 8-bit component value of the considered pixel components. (value: 0)
     *          - B_0x1: Bins: accumulates 256 for each considered pixel component fitting a bin dynamic. (value: 1)
     */
        /** @brief Average: accumulates the 8-bit component value of the considered pixel components. */
    constexpr std::uint32_t DCMIPP_P1ST1CR_MODE_B_0x0 = 0;
        /** @brief Bins: accumulates 256 for each considered pixel component fitting a bin dynamic. */
    constexpr std::uint32_t DCMIPP_P1ST1CR_MODE_B_0x1 = 1;

    /** @brief DCMIPP Pipe1 statistics 2 control register */
    using DCMIPP_P1ST2CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x854, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief None */
    using DCMIPP_P1ST2CR_ENABLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disabled: statistics are not accumulated (value: 0)
     *          - B_0x1: Enabled: statistics are accumulated (value: 1)
     */
        /** @brief Disabled: statistics are not accumulated */
    constexpr std::uint32_t DCMIPP_P1ST2CR_ENABLE_B_0x0 = 0;
        /** @brief Enabled: statistics are accumulated */
    constexpr std::uint32_t DCMIPP_P1ST2CR_ENABLE_B_0x1 = 1;

    /** @brief Bin definition */
    using DCMIPP_P1ST2CR_BINS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AllPixels: Accu is incremented of Component, if 0 less than or equal to Component less than 256. (value: 0)
     *          - B_0x1: NoExt16: Accu is incremented of Component, if 16 less than or equal to Component less than 240. (value: 1)
     */
        /** @brief AllPixels: Accu is incremented of Component, if 0 less than or equal to Component less than 256. */
    constexpr std::uint32_t DCMIPP_P1ST2CR_BINS_B_0x0 = 0;
        /** @brief NoExt16: Accu is incremented of Component, if 16 less than or equal to Component less than 240. */
    constexpr std::uint32_t DCMIPP_P1ST2CR_BINS_B_0x1 = 1;

    /** @brief Statistics source */
    using DCMIPP_P1ST2CR_SRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Statistics mode */
    using DCMIPP_P1ST2CR_MODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Average: accumulates the 8-bit component value of the considered pixel components. (value: 0)
     *          - B_0x1: Bins: accumulates 256 for each considered pixel component fitting a bin dynamic. (value: 1)
     */
        /** @brief Average: accumulates the 8-bit component value of the considered pixel components. */
    constexpr std::uint32_t DCMIPP_P1ST2CR_MODE_B_0x0 = 0;
        /** @brief Bins: accumulates 256 for each considered pixel component fitting a bin dynamic. */
    constexpr std::uint32_t DCMIPP_P1ST2CR_MODE_B_0x1 = 1;

    /** @brief DCMIPP Pipe1 statistics 3 control register */
    using DCMIPP_P1ST3CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x858, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief None */
    using DCMIPP_P1ST3CR_ENABLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disabled: statistics are not accumulated (value: 0)
     *          - B_0x1: Enabled: statistics are accumulated (value: 1)
     */
        /** @brief Disabled: statistics are not accumulated */
    constexpr std::uint32_t DCMIPP_P1ST3CR_ENABLE_B_0x0 = 0;
        /** @brief Enabled: statistics are accumulated */
    constexpr std::uint32_t DCMIPP_P1ST3CR_ENABLE_B_0x1 = 1;

    /** @brief Bin definition */
    using DCMIPP_P1ST3CR_BINS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AllPixels: Accu is incremented of Component, if 0 less than or equal to Component less than 256. (value: 0)
     *          - B_0x1: NoExt16: Accu is incremented of Component, if 16 less than or equal to Component less than 240. (value: 1)
     */
        /** @brief AllPixels: Accu is incremented of Component, if 0 less than or equal to Component less than 256. */
    constexpr std::uint32_t DCMIPP_P1ST3CR_BINS_B_0x0 = 0;
        /** @brief NoExt16: Accu is incremented of Component, if 16 less than or equal to Component less than 240. */
    constexpr std::uint32_t DCMIPP_P1ST3CR_BINS_B_0x1 = 1;

    /** @brief Statistics source */
    using DCMIPP_P1ST3CR_SRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Statistics mode */
    using DCMIPP_P1ST3CR_MODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Average: accumulates the 8-bit component value of the considered pixel components. (value: 0)
     *          - B_0x1: Bins: accumulates 256 for each considered pixel component fitting a bin dynamic. (value: 1)
     */
        /** @brief Average: accumulates the 8-bit component value of the considered pixel components. */
    constexpr std::uint32_t DCMIPP_P1ST3CR_MODE_B_0x0 = 0;
        /** @brief Bins: accumulates 256 for each considered pixel component fitting a bin dynamic. */
    constexpr std::uint32_t DCMIPP_P1ST3CR_MODE_B_0x1 = 1;

    /** @brief DCMIPP Pipe1 statistics window start register */
    using DCMIPP_P1STSTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x85C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Horizontal start, from 0 to 4094 pixels wide */
    using DCMIPP_P1STSTR_HSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vertical start, from 0 to 4094 pixels high */
    using DCMIPP_P1STSTR_VSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe1 statistics window size register */
    using DCMIPP_P1STSZR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x860, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Horizontal size, from 0 to 4094 pixels wide */
    using DCMIPP_P1STSZR_HSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vertical size, from 0 to 4094 pixels high */
    using DCMIPP_P1STSZR_VSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief None */
    using DCMIPP_P1STSZR_CROPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bypass, all pixels are used to compute the statistics (value: 0)
     *          - B_0x1: Enable, only the rectangle defined by VSTART, HSTART, VSIZE, HSIZE is used for statistics. (value: 1)
     */
        /** @brief Bypass, all pixels are used to compute the statistics */
    constexpr std::uint32_t DCMIPP_P1STSZR_CROPEN_B_0x0 = 0;
        /** @brief Enable, only the rectangle defined by VSTART, HSTART, VSIZE, HSIZE is used for statistics. */
    constexpr std::uint32_t DCMIPP_P1STSZR_CROPEN_B_0x1 = 1;

    /** @brief DCMIPP Pipe1 statistics 1 status register */
    using DCMIPP_P1ST1SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x864, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Accumulation result, divided by 256. */
    using DCMIPP_P1ST1SR_ACCU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe1 statistics 2 status register */
    using DCMIPP_P1ST2SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x868, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief accumulation result, divided by 256. */
    using DCMIPP_P1ST2SR_ACCU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe1 statistics 3 status register */
    using DCMIPP_P1ST3SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x86C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief accumulation result, divided by 256. */
    using DCMIPP_P1ST3SR_ACCU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe1 demosaicing configuration register */
    using DCMIPP_P1DMCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x870, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief None */
    using DCMIPP_P1DMCR_ENABLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bypass (value: 0)
     *          - B_0x1: Enable demosaicing (value: 1)
     */
        /** @brief Bypass */
    constexpr std::uint32_t DCMIPP_P1DMCR_ENABLE_B_0x0 = 0;
        /** @brief Enable demosaicing */
    constexpr std::uint32_t DCMIPP_P1DMCR_ENABLE_B_0x1 = 1;

    /** @brief Raw Bayer type */
    using DCMIPP_P1DMCR_TYPE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RGGB (value: 0)
     *          - B_0x1: GRBG (value: 1)
     *          - B_0x2: GBRG (value: 2)
     *          - B_0x3: BGGR (value: 3)
     */
        /** @brief RGGB */
    constexpr std::uint32_t DCMIPP_P1DMCR_TYPE_B_0x0 = 0;
        /** @brief GRBG */
    constexpr std::uint32_t DCMIPP_P1DMCR_TYPE_B_0x1 = 1;
        /** @brief GBRG */
    constexpr std::uint32_t DCMIPP_P1DMCR_TYPE_B_0x2 = 2;
        /** @brief BGGR */
    constexpr std::uint32_t DCMIPP_P1DMCR_TYPE_B_0x3 = 3;

    /** @brief Strength of the peak detection */
    using DCMIPP_P1DMCR_PEAK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No peak detection, pure linear interpolation (value: 0)
     */
        /** @brief No peak detection, pure linear interpolation */
    constexpr std::uint32_t DCMIPP_P1DMCR_PEAK_B_0x0 = 0;

    /** @brief Strength of the vertical line detection */
    using DCMIPP_P1DMCR_LINEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No vertical line detection, pure linear interpolation (value: 0)
     */
        /** @brief No vertical line detection, pure linear interpolation */
    constexpr std::uint32_t DCMIPP_P1DMCR_LINEV_B_0x0 = 0;

    /** @brief Strength of the horizontal line detection */
    using DCMIPP_P1DMCR_LINEH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No horizontal line detection, pure linear interpolation (value: 0)
     */
        /** @brief No horizontal line detection, pure linear interpolation */
    constexpr std::uint32_t DCMIPP_P1DMCR_LINEH_B_0x0 = 0;

    /** @brief Strength of the edge detection */
    using DCMIPP_P1DMCR_EDGE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No edge detection, pure linear interpolation (value: 0)
     */
        /** @brief No edge detection, pure linear interpolation */
    constexpr std::uint32_t DCMIPP_P1DMCR_EDGE_B_0x0 = 0;

    /** @brief DCMIPP Pipe1 ColorConv configuration register */
    using DCMIPP_P1CCCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x880, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief None */
    using DCMIPP_P1CCCR_ENABLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ColorConv is bypassed (value: 0)
     *          - B_0x1: ColorConv is enabled (value: 1)
     */
        /** @brief ColorConv is bypassed */
    constexpr std::uint32_t DCMIPP_P1CCCR_ENABLE_B_0x0 = 0;
        /** @brief ColorConv is enabled */
    constexpr std::uint32_t DCMIPP_P1CCCR_ENABLE_B_0x1 = 1;

    /** @brief output samples type used while CLAMP is activated */
    using DCMIPP_P1CCCR_TYPE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Clamped to [16;235] for Y and to [16;240] for U and V (value: 0)
     *          - B_0x1: Clamped to [16;235] for R, G and B (value: 1)
     */
        /** @brief Clamped to [16;235] for Y and to [16;240] for U and V */
    constexpr std::uint32_t DCMIPP_P1CCCR_TYPE_B_0x0 = 0;
        /** @brief Clamped to [16;235] for R, G and B */
    constexpr std::uint32_t DCMIPP_P1CCCR_TYPE_B_0x1 = 1;

    /** @brief Clamp the output samples */
    using DCMIPP_P1CCCR_CLAMP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Not activated (clamped to [0;255] by default) (value: 0)
     *          - B_0x1: Activated, depending on TYPE (value: 1)
     */
        /** @brief Not activated (clamped to [0;255] by default) */
    constexpr std::uint32_t DCMIPP_P1CCCR_CLAMP_B_0x0 = 0;
        /** @brief Activated, depending on TYPE */
    constexpr std::uint32_t DCMIPP_P1CCCR_CLAMP_B_0x1 = 1;

    /** @brief DCMIPP Pipe1 ColorConv red coefficient register 1 */
    using DCMIPP_P1CCRR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x884, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Coefficient row 1 column 1 of the matrix */
    using DCMIPP_P1CCRR1_RR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Coefficient row 1 column 2 of the matrix */
    using DCMIPP_P1CCRR1_RG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe1 ColorConv red coefficient register 2 */
    using DCMIPP_P1CCRR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x888, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Coefficient row 1 column 3 of the matrix */
    using DCMIPP_P1CCRR2_RB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Coefficient row 1 of the added column (signed integer value) */
    using DCMIPP_P1CCRR2_RA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe1 ColorConv green coefficient register 1 */
    using DCMIPP_P1CCGR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x88C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Coefficient row 2 column 1 of the matrix */
    using DCMIPP_P1CCGR1_GR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Coefficient row 2 column 2 of the matrix */
    using DCMIPP_P1CCGR1_GG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe1 ColorConv green coefficient register 2 */
    using DCMIPP_P1CCGR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x890, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Coefficient row 2 column 3 of the matrix */
    using DCMIPP_P1CCGR2_GB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Coefficient row 2 of the added column (signed integer value) */
    using DCMIPP_P1CCGR2_GA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipex ColorConv blue coefficient register 1 */
    using DCMIPP_P1CCBR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x894, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Coefficient row 3 column 1 of the matrix */
    using DCMIPP_P1CCBR1_BR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Coefficient row 3 column 2 of the matrix */
    using DCMIPP_P1CCBR1_BG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe1 ColorConv blue coefficient register 2 */
    using DCMIPP_P1CCBR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x898, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Coefficient row 3 column 3 of the matrix */
    using DCMIPP_P1CCBR2_BB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Coefficient row 3 of the added column (signed integer value) */
    using DCMIPP_P1CCBR2_BA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe1 contrast control register 1 */
    using DCMIPP_P1CTCR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief None */
    using DCMIPP_P1CTCR1_ENABLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bypass, pixels are forwarded idle. (value: 0)
     *          - B_0x1: Enable, contrast enhancement is applied on pixels. (value: 1)
     */
        /** @brief Bypass, pixels are forwarded idle. */
    constexpr std::uint32_t DCMIPP_P1CTCR1_ENABLE_B_0x0 = 0;
        /** @brief Enable, contrast enhancement is applied on pixels. */
    constexpr std::uint32_t DCMIPP_P1CTCR1_ENABLE_B_0x1 = 1;

    /** @brief Luminance increase for input luminance of 0 (increase is idle with LUMx = 16) */
    using DCMIPP_P1CTCR1_LUM0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe1 contrast control register 2 */
    using DCMIPP_P1CTCR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8A4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Luminance increase for input luminance of 128 (increase is idle with LUMx = 16) */
    using DCMIPP_P1CTCR2_LUM4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Luminance increase for input luminance of 96 (increase is idle with LUMx = 16) */
    using DCMIPP_P1CTCR2_LUM3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Luminance increase for input luminance of 64 (increase is idle with LUMx = 16) */
    using DCMIPP_P1CTCR2_LUM2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Luminance increase for input luminance of 32 (increase is idle with LUMx = 16) */
    using DCMIPP_P1CTCR2_LUM1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe1 contrast control register 3 */
    using DCMIPP_P1CTCR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8A8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Luminance increase for input luminance of 256 (increase is idle with LUMx = 16) */
    using DCMIPP_P1CTCR3_LUM8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Luminance increase for input luminance of 224 (increase is idle with LUMx = 16) */
    using DCMIPP_P1CTCR3_LUM7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Luminance increase for input luminance of 192 (increase is idle with LUMx = 16) */
    using DCMIPP_P1CTCR3_LUM6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Luminance increase for input luminance of 160 (increase is idle with LUMx = 16) */
    using DCMIPP_P1CTCR3_LUM5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipex flow control configuration register */
    using DCMIPP_P1FCTCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x900, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame capture rate control */
    using DCMIPP_P1FCTCR_FRATE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: All frames are captured (value: 0)
     *          - B_0x1: One out of two frames captured (50% bandwidth reduction) (value: 1)
     *          - B_0x2: One out of four frames captured (75% bandwidth reduction) (value: 2)
     *          - B_0x3: One out of eight frames captured (87% bandwidth reduction) (value: 3)
     */
        /** @brief All frames are captured */
    constexpr std::uint32_t DCMIPP_P1FCTCR_FRATE_B_0x0 = 0;
        /** @brief One out of two frames captured (50% bandwidth reduction) */
    constexpr std::uint32_t DCMIPP_P1FCTCR_FRATE_B_0x1 = 1;
        /** @brief One out of four frames captured (75% bandwidth reduction) */
    constexpr std::uint32_t DCMIPP_P1FCTCR_FRATE_B_0x2 = 2;
        /** @brief One out of eight frames captured (87% bandwidth reduction) */
    constexpr std::uint32_t DCMIPP_P1FCTCR_FRATE_B_0x3 = 3;

    /** @brief Capture mode */
    using DCMIPP_P1FCTCR_CPTMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Continuous grab mode. The received data are transferred into the destination memory through the AXI master. (value: 0)
     *          - B_0x1: Snapshot mode (single frame). Once activated, the interface waits for the start of frame and then transfers a single frame through the AXI master. At the end of the frame, the CPTACT bit is automatically reset. (value: 1)
     */
        /** @brief Continuous grab mode. The received data are transferred into the destination memory through the AXI master. */
    constexpr std::uint32_t DCMIPP_P1FCTCR_CPTMODE_B_0x0 = 0;
        /** @brief Snapshot mode (single frame). Once activated, the interface waits for the start of frame and then transfers a single frame through the AXI master. At the end of the frame, the CPTACT bit is automatically reset. */
    constexpr std::uint32_t DCMIPP_P1FCTCR_CPTMODE_B_0x1 = 1;

    /** @brief Capture requested */
    using DCMIPP_P1FCTCR_CPTREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Capture not requested for next frame (value: 0)
     *          - B_0x1: Capture requested for next frame (value: 1)
     */
        /** @brief Capture not requested for next frame */
    constexpr std::uint32_t DCMIPP_P1FCTCR_CPTREQ_B_0x0 = 0;
        /** @brief Capture requested for next frame */
    constexpr std::uint32_t DCMIPP_P1FCTCR_CPTREQ_B_0x1 = 1;

    /** @brief DCMIPP Pipex crop window start register */
    using DCMIPP_P1CRSTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x904, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Horizontal start, from 0 to 4094 pixels wide */
    using DCMIPP_P1CRSTR_HSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vertical start, from 0 to 4094 pixels high */
    using DCMIPP_P1CRSTR_VSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipex crop window size register */
    using DCMIPP_P1CRSZR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x908, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Horizontal size, from 0 to 4094 pixels wide. If the value is maintained at 0 when enabling the crop by means of the ENABLE bit, the value is forced internally at 0xFFE, which is the maximum value. */
    using DCMIPP_P1CRSZR_HSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vertical size, from 0 to 4094 pixels high. If the value is maintained at 0 when enabling the crop thanks to the ENABLE bit, the value is forced internally at 0xFFE, which is the maximum value. */
    using DCMIPP_P1CRSZR_VSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief None */
    using DCMIPP_P1CRSZR_ENABLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bypass, all pixels are transmitted through (no need to set any start and size values) (value: 0)
     *          - B_0x1: Enable, only the rectangle defined by VSIZE, HSIZE, VSTART, HSTART is transmitted. (value: 1)
     */
        /** @brief Bypass, all pixels are transmitted through (no need to set any start and size values) */
    constexpr std::uint32_t DCMIPP_P1CRSZR_ENABLE_B_0x0 = 0;
        /** @brief Enable, only the rectangle defined by VSIZE, HSIZE, VSTART, HSTART is transmitted. */
    constexpr std::uint32_t DCMIPP_P1CRSZR_ENABLE_B_0x1 = 1;

    /** @brief DCMIPP Pipex decimation register */
    using DCMIPP_P1DCCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x90C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief None */
    using DCMIPP_P1DCCR_ENABLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bypass: decimation is not active, all pixels are transmitted (value: 0)
     *          - B_0x1: Enable: one pixel every 1, 2, 4 or 8, in H and V is transmitted, following HDEC and VDEC (value: 1)
     */
        /** @brief Bypass: decimation is not active, all pixels are transmitted */
    constexpr std::uint32_t DCMIPP_P1DCCR_ENABLE_B_0x0 = 0;
        /** @brief Enable: one pixel every 1, 2, 4 or 8, in H and V is transmitted, following HDEC and VDEC */
    constexpr std::uint32_t DCMIPP_P1DCCR_ENABLE_B_0x1 = 1;

    /** @brief Horizontal decimation ratio */
    using DCMIPP_P1DCCR_HDEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: All pixels are transmitted, no horizontal decimation (value: 0)
     *          - B_0x1: One line out of two transmitted (value: 1)
     */
        /** @brief All pixels are transmitted, no horizontal decimation */
    constexpr std::uint32_t DCMIPP_P1DCCR_HDEC_B_0x0 = 0;
        /** @brief One line out of two transmitted */
    constexpr std::uint32_t DCMIPP_P1DCCR_HDEC_B_0x1 = 1;

    /** @brief Vertical decimation ratio */
    using DCMIPP_P1DCCR_VDEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: All pixels are transmitted, no vertical decimation (value: 0)
     *          - B_0x1: One line out of two transmitted (value: 1)
     */
        /** @brief All pixels are transmitted, no vertical decimation */
    constexpr std::uint32_t DCMIPP_P1DCCR_VDEC_B_0x0 = 0;
        /** @brief One line out of two transmitted */
    constexpr std::uint32_t DCMIPP_P1DCCR_VDEC_B_0x1 = 1;

    /** @brief DCMIPP Pipex downsize configuration register */
    using DCMIPP_P1DSCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x910, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Horizontal division factor, from 128 (8x) to 1023 (1x) */
    using DCMIPP_P1DSCR_HDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vertical division factor, from 128 (8x) to 1023 (1x) */
    using DCMIPP_P1DSCR_VDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief None */
    using DCMIPP_P1DSCR_ENABLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Down scaler is bypassed (value: 0)
     *          - B_0x1: Down scaler is enabled (value: 1)
     */
        /** @brief Down scaler is bypassed */
    constexpr std::uint32_t DCMIPP_P1DSCR_ENABLE_B_0x0 = 0;
        /** @brief Down scaler is enabled */
    constexpr std::uint32_t DCMIPP_P1DSCR_ENABLE_B_0x1 = 1;

    /** @brief DCMIPP Pipex downsize ratio register */
    using DCMIPP_P1DSRTIOR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x914, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Horizontal ratio, from 8192 (1x) to 65535 (8x) */
    using DCMIPP_P1DSRTIOR_HRATIO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vertical ratio, from 8192 (1x) to 65535 (8x) */
    using DCMIPP_P1DSRTIOR_VRATIO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipex downsize destination size register */
    using DCMIPP_P1DSSZR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x918, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Horizontal size, from 0 to 4094 pixels wide */
    using DCMIPP_P1DSSZR_HSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vertical size, from 0 to 4094 pixels high */
    using DCMIPP_P1DSSZR_VSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipex common ROI configuration register */
    using DCMIPP_P1CMRICR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x920, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Region of interest line size width */
    using DCMIPP_P1CMRICR_ROILSZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Line width 1 pixel (value: 0)
     *          - B_0x1: Line width 2 pixels (value: 1)
     *          - B_0x2: Line width 4 pixels (value: 2)
     *          - B_0x3: Line width 8 pixels (value: 3)
     */
        /** @brief Line width 1 pixel */
    constexpr std::uint32_t DCMIPP_P1CMRICR_ROILSZ_B_0x0 = 0;
        /** @brief Line width 2 pixels */
    constexpr std::uint32_t DCMIPP_P1CMRICR_ROILSZ_B_0x1 = 1;
        /** @brief Line width 4 pixels */
    constexpr std::uint32_t DCMIPP_P1CMRICR_ROILSZ_B_0x2 = 2;
        /** @brief Line width 8 pixels */
    constexpr std::uint32_t DCMIPP_P1CMRICR_ROILSZ_B_0x3 = 3;

    /** @brief Region of interest 1 enable */
    using DCMIPP_P1CMRICR_ROI1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable ROI (value: 0)
     *          - B_0x1: Enable ROI (value: 1)
     */
        /** @brief Disable ROI */
    constexpr std::uint32_t DCMIPP_P1CMRICR_ROI1EN_B_0x0 = 0;
        /** @brief Enable ROI */
    constexpr std::uint32_t DCMIPP_P1CMRICR_ROI1EN_B_0x1 = 1;

    /** @brief Region of interest 2 enable */
    using DCMIPP_P1CMRICR_ROI2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable ROI (value: 0)
     *          - B_0x1: Enable ROI (value: 1)
     */
        /** @brief Disable ROI */
    constexpr std::uint32_t DCMIPP_P1CMRICR_ROI2EN_B_0x0 = 0;
        /** @brief Enable ROI */
    constexpr std::uint32_t DCMIPP_P1CMRICR_ROI2EN_B_0x1 = 1;

    /** @brief Region of interest 3 enable */
    using DCMIPP_P1CMRICR_ROI3EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable ROI (value: 0)
     *          - B_0x1: Enable ROI (value: 1)
     */
        /** @brief Disable ROI */
    constexpr std::uint32_t DCMIPP_P1CMRICR_ROI3EN_B_0x0 = 0;
        /** @brief Enable ROI */
    constexpr std::uint32_t DCMIPP_P1CMRICR_ROI3EN_B_0x1 = 1;

    /** @brief Region of interest 4 enable */
    using DCMIPP_P1CMRICR_ROI4EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable ROI (value: 0)
     *          - B_0x1: Enable ROI (value: 1)
     */
        /** @brief Disable ROI */
    constexpr std::uint32_t DCMIPP_P1CMRICR_ROI4EN_B_0x0 = 0;
        /** @brief Enable ROI */
    constexpr std::uint32_t DCMIPP_P1CMRICR_ROI4EN_B_0x1 = 1;

    /** @brief Region of interest 5 enable */
    using DCMIPP_P1CMRICR_ROI5EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable ROI (value: 0)
     *          - B_0x1: Enable ROI (value: 1)
     */
        /** @brief Disable ROI */
    constexpr std::uint32_t DCMIPP_P1CMRICR_ROI5EN_B_0x0 = 0;
        /** @brief Enable ROI */
    constexpr std::uint32_t DCMIPP_P1CMRICR_ROI5EN_B_0x1 = 1;

    /** @brief Region of interest 6 enable */
    using DCMIPP_P1CMRICR_ROI6EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable ROI (value: 0)
     *          - B_0x1: Enable ROI (value: 1)
     */
        /** @brief Disable ROI */
    constexpr std::uint32_t DCMIPP_P1CMRICR_ROI6EN_B_0x0 = 0;
        /** @brief Enable ROI */
    constexpr std::uint32_t DCMIPP_P1CMRICR_ROI6EN_B_0x1 = 1;

    /** @brief Region of interest 7 enable */
    using DCMIPP_P1CMRICR_ROI7EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable ROI (value: 0)
     *          - B_0x1: Enable ROI (value: 1)
     */
        /** @brief Disable ROI */
    constexpr std::uint32_t DCMIPP_P1CMRICR_ROI7EN_B_0x0 = 0;
        /** @brief Enable ROI */
    constexpr std::uint32_t DCMIPP_P1CMRICR_ROI7EN_B_0x1 = 1;

    /** @brief Region of interest 8 enable */
    using DCMIPP_P1CMRICR_ROI8EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable ROI (value: 0)
     *          - B_0x1: Enable ROI (value: 1)
     */
        /** @brief Disable ROI */
    constexpr std::uint32_t DCMIPP_P1CMRICR_ROI8EN_B_0x0 = 0;
        /** @brief Enable ROI */
    constexpr std::uint32_t DCMIPP_P1CMRICR_ROI8EN_B_0x1 = 1;

    /** @brief DCMIPP Pipe1 ROI1 configuration register 1 */
    using DCMIPP_P1RI1CR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x924, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Horizontal start, from 0 to 4094 pixels wide */
    using DCMIPP_P1RI1CR1_HSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Color line blue */
    using DCMIPP_P1RI1CR1_CLB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Color line green */
    using DCMIPP_P1RI1CR1_CLG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vertical start, from 0 to 4094 pixels high */
    using DCMIPP_P1RI1CR1_VSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Color line red */
    using DCMIPP_P1RI1CR1_CLR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe1 ROI1 configuration register 2 */
    using DCMIPP_P1RI1CR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x928, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Horizontal size, from 0 to 4094 pixels wide */
    using DCMIPP_P1RI1CR2_HSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vertical size, from 0 to 4094 pixels high */
    using DCMIPP_P1RI1CR2_VSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe1 ROI2 configuration register 1 */
    using DCMIPP_P1RI2CR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x92C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Horizontal start, from 0 to 4094 pixels wide */
    using DCMIPP_P1RI2CR1_HSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Color line blue */
    using DCMIPP_P1RI2CR1_CLB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Color line green */
    using DCMIPP_P1RI2CR1_CLG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vertical start, from 0 to 4094 pixels high */
    using DCMIPP_P1RI2CR1_VSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Color line red */
    using DCMIPP_P1RI2CR1_CLR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe1 ROI2 configuration register 2 */
    using DCMIPP_P1RI2CR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x930, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Horizontal size, from 0 to 4094 pixels wide */
    using DCMIPP_P1RI2CR2_HSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vertical size, from 0 to 4094 pixels high */
    using DCMIPP_P1RI2CR2_VSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe1 ROI3 configuration register 1 */
    using DCMIPP_P1RI3CR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x934, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Horizontal start, from 0 to 4094 pixels wide */
    using DCMIPP_P1RI3CR1_HSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Color line blue */
    using DCMIPP_P1RI3CR1_CLB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Color line green */
    using DCMIPP_P1RI3CR1_CLG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vertical start, from 0 to 4094 pixels high */
    using DCMIPP_P1RI3CR1_VSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Color line red */
    using DCMIPP_P1RI3CR1_CLR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe1 ROI3 configuration register 2 */
    using DCMIPP_P1RI3CR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x938, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Horizontal size, from 0 to 4094 pixels wide */
    using DCMIPP_P1RI3CR2_HSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vertical size, from 0 to 4094 pixels high */
    using DCMIPP_P1RI3CR2_VSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe1 ROI4 configuration register 1 */
    using DCMIPP_P1RI4CR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x93C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Horizontal start, from 0 to 4094 pixels wide */
    using DCMIPP_P1RI4CR1_HSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Color line blue */
    using DCMIPP_P1RI4CR1_CLB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Color line green */
    using DCMIPP_P1RI4CR1_CLG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vertical start, from 0 to 4094 pixels high */
    using DCMIPP_P1RI4CR1_VSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Color line red */
    using DCMIPP_P1RI4CR1_CLR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe1 ROI4 configuration register 2 */
    using DCMIPP_P1RI4CR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x940, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Horizontal size, from 0 to 4094 pixels wide */
    using DCMIPP_P1RI4CR2_HSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vertical size, from 0 to 4094 pixels high */
    using DCMIPP_P1RI4CR2_VSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe1 ROI5 configuration register 1 */
    using DCMIPP_P1RI5CR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x944, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Horizontal start, from 0 to 4094 pixels wide */
    using DCMIPP_P1RI5CR1_HSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Color line blue */
    using DCMIPP_P1RI5CR1_CLB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Color line green */
    using DCMIPP_P1RI5CR1_CLG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vertical start, from 0 to 4094 pixels high */
    using DCMIPP_P1RI5CR1_VSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Color line red */
    using DCMIPP_P1RI5CR1_CLR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe1 ROI5 configuration register 2 */
    using DCMIPP_P1RI5CR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x948, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Horizontal size, from 0 to 4094 pixels wide */
    using DCMIPP_P1RI5CR2_HSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vertical size, from 0 to 4094 pixels high */
    using DCMIPP_P1RI5CR2_VSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe1 ROI6 configuration register 1 */
    using DCMIPP_P1RI6CR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x94C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Horizontal start, from 0 to 4094 pixels wide */
    using DCMIPP_P1RI6CR1_HSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Color line blue */
    using DCMIPP_P1RI6CR1_CLB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Color line green */
    using DCMIPP_P1RI6CR1_CLG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vertical start, from 0 to 4094 pixels high */
    using DCMIPP_P1RI6CR1_VSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Color line red */
    using DCMIPP_P1RI6CR1_CLR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe1 ROI6 configuration register 2 */
    using DCMIPP_P1RI6CR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x950, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Horizontal size, from 0 to 4094 pixels wide */
    using DCMIPP_P1RI6CR2_HSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vertical size, from 0 to 4094 pixels high */
    using DCMIPP_P1RI6CR2_VSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe1 ROI7 configuration register 1 */
    using DCMIPP_P1RI7CR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x954, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Horizontal start, from 0 to 4094 pixels wide */
    using DCMIPP_P1RI7CR1_HSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Color line blue */
    using DCMIPP_P1RI7CR1_CLB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Color line green */
    using DCMIPP_P1RI7CR1_CLG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vertical start, from 0 to 4094 pixels high */
    using DCMIPP_P1RI7CR1_VSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Color line red */
    using DCMIPP_P1RI7CR1_CLR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe1 ROI7 configuration register 2 */
    using DCMIPP_P1RI7CR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x958, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Horizontal size, from 0 to 4094 pixels wide */
    using DCMIPP_P1RI7CR2_HSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vertical size, from 0 to 4094 pixels high */
    using DCMIPP_P1RI7CR2_VSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe1 ROI8 configuration register 1 */
    using DCMIPP_P1RI8CR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x95C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Horizontal start, from 0 to 4094 pixels wide */
    using DCMIPP_P1RI8CR1_HSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Color line blue */
    using DCMIPP_P1RI8CR1_CLB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Color line green */
    using DCMIPP_P1RI8CR1_CLG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vertical start, from 0 to 4094 pixels high */
    using DCMIPP_P1RI8CR1_VSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Color line red */
    using DCMIPP_P1RI8CR1_CLR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe1 ROI8 configuration register 2 */
    using DCMIPP_P1RI8CR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x960, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Horizontal size, from 0 to 4094 pixels wide */
    using DCMIPP_P1RI8CR2_HSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vertical size, from 0 to 4094 pixels high */
    using DCMIPP_P1RI8CR2_VSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipex gamma configuration register */
    using DCMIPP_P1GMCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x970, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief None */
    using DCMIPP_P1GMCR_ENABLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gamma is bypassed (value: 0)
     *          - B_0x1: Gamma is enabled (value: 1)
     */
        /** @brief Gamma is bypassed */
    constexpr std::uint32_t DCMIPP_P1GMCR_ENABLE_B_0x0 = 0;
        /** @brief Gamma is enabled */
    constexpr std::uint32_t DCMIPP_P1GMCR_ENABLE_B_0x1 = 1;

    /** @brief DCMIPP Pipe1 YUVConv configuration register */
    using DCMIPP_P1YUVCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x980, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief None */
    using DCMIPP_P1YUVCR_ENABLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ColorConv is bypassed (value: 0)
     *          - B_0x1: ColorConv is enabled (value: 1)
     */
        /** @brief ColorConv is bypassed */
    constexpr std::uint32_t DCMIPP_P1YUVCR_ENABLE_B_0x0 = 0;
        /** @brief ColorConv is enabled */
    constexpr std::uint32_t DCMIPP_P1YUVCR_ENABLE_B_0x1 = 1;

    /** @brief Output samples type used while CLAMP is activated */
    using DCMIPP_P1YUVCR_TYPE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Clamped to [16;235] for Y and to [16;240] for U and V (value: 0)
     *          - B_0x1: Clamped to [16;235] for R, G and B (value: 1)
     */
        /** @brief Clamped to [16;235] for Y and to [16;240] for U and V */
    constexpr std::uint32_t DCMIPP_P1YUVCR_TYPE_B_0x0 = 0;
        /** @brief Clamped to [16;235] for R, G and B */
    constexpr std::uint32_t DCMIPP_P1YUVCR_TYPE_B_0x1 = 1;

    /** @brief Clamp the output samples */
    using DCMIPP_P1YUVCR_CLAMP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Not activated (clamped to [0;255] by default) (value: 0)
     *          - B_0x1: Activated, depending on TYPE (value: 1)
     */
        /** @brief Not activated (clamped to [0;255] by default) */
    constexpr std::uint32_t DCMIPP_P1YUVCR_CLAMP_B_0x0 = 0;
        /** @brief Activated, depending on TYPE */
    constexpr std::uint32_t DCMIPP_P1YUVCR_CLAMP_B_0x1 = 1;

    /** @brief DCMIPP Pipe1 YUVConv red coefficient register 1 */
    using DCMIPP_P1YUVRR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x984, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Coefficient row 1 column 1 of the matrix */
    using DCMIPP_P1YUVRR1_RR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Coefficient row 1 column 2 of the matrix */
    using DCMIPP_P1YUVRR1_RG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe1 YUVConv red coefficient register 2 */
    using DCMIPP_P1YUVRR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x988, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Coefficient row 1 column 3 of the matrix */
    using DCMIPP_P1YUVRR2_RB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Coefficient row 1 of the added column (signed integer value) */
    using DCMIPP_P1YUVRR2_RA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe1 YUVConv green coefficient register 1 */
    using DCMIPP_P1YUVGR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x98C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Coefficient row 2 column 1 of the matrix */
    using DCMIPP_P1YUVGR1_GR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Coefficient row 2 column 2 of the matrix */
    using DCMIPP_P1YUVGR1_GG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe1 YUVConv green coefficient register 2 */
    using DCMIPP_P1YUVGR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x990, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Coefficient row 2 column 3 of the matrix */
    using DCMIPP_P1YUVGR2_GB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Coefficient row 2 of the added column (signed integer value) */
    using DCMIPP_P1YUVGR2_GA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe1 YUVConv blue coefficient register 1 */
    using DCMIPP_P1YUVBR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x994, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Coefficient row 3 column 1 of the matrix */
    using DCMIPP_P1YUVBR1_BR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Coefficient row 3 column 2 of the matrix */
    using DCMIPP_P1YUVBR1_BG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe1 YUV blue coefficient register 2 */
    using DCMIPP_P1YUVBR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x998, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Coefficient row 3 column 3 of the matrix */
    using DCMIPP_P1YUVBR2_BB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Coefficient row 3 of the added column (signed integer value) */
    using DCMIPP_P1YUVBR2_BA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe1 pixel packer configuration register */
    using DCMIPP_P1PPCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9C0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Memory format */
    using DCMIPP_P1PPCR_FORMAT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RGB888 or YUV444 1-buffer (value: 0)
     *          - B_0x1: RGB565 1-buffer (value: 1)
     *          - B_0x2: ARGB8888 (with A = 0xFF) (value: 2)
     *          - B_0x3: RGBA8888 (with A = 0xFF) (value: 3)
     *          - B_0x4: monochrome Y8 or G8 1-buffer (value: 4)
     *          - B_0x5: YUV444 1-buffer (32 bpp, FOURCC = AYUV, with A = 0xFF) (value: 5)
     *          - B_0x6: YUV422 1-buffer (16 bpp, FOURCC = YUYV) (value: 6)
     *          - B_0x7: YUV422 2-buffer (16 bpp, FOURCC = none) (value: 7)
     *          - B_0x8: YUV420 2-buffer (12 bpp, FOURCC = NV21), NV12 available with SWAPRB = 1 (value: 8)
     *          - B_0x9: YUV420 3-buffer (12 bpp, FOURCC = YV12) (value: 9)
     *          - B_0xA: YUV422 1-buffer (16 bpp, FOURCC = UYVY) (value: 10)
     */
        /** @brief RGB888 or YUV444 1-buffer */
    constexpr std::uint32_t DCMIPP_P1PPCR_FORMAT_B_0x0 = 0;
        /** @brief RGB565 1-buffer */
    constexpr std::uint32_t DCMIPP_P1PPCR_FORMAT_B_0x1 = 1;
        /** @brief ARGB8888 (with A = 0xFF) */
    constexpr std::uint32_t DCMIPP_P1PPCR_FORMAT_B_0x2 = 2;
        /** @brief RGBA8888 (with A = 0xFF) */
    constexpr std::uint32_t DCMIPP_P1PPCR_FORMAT_B_0x3 = 3;
        /** @brief monochrome Y8 or G8 1-buffer */
    constexpr std::uint32_t DCMIPP_P1PPCR_FORMAT_B_0x4 = 4;
        /** @brief YUV444 1-buffer (32 bpp, FOURCC = AYUV, with A = 0xFF) */
    constexpr std::uint32_t DCMIPP_P1PPCR_FORMAT_B_0x5 = 5;
        /** @brief YUV422 1-buffer (16 bpp, FOURCC = YUYV) */
    constexpr std::uint32_t DCMIPP_P1PPCR_FORMAT_B_0x6 = 6;
        /** @brief YUV422 2-buffer (16 bpp, FOURCC = none) */
    constexpr std::uint32_t DCMIPP_P1PPCR_FORMAT_B_0x7 = 7;
        /** @brief YUV420 2-buffer (12 bpp, FOURCC = NV21), NV12 available with SWAPRB = 1 */
    constexpr std::uint32_t DCMIPP_P1PPCR_FORMAT_B_0x8 = 8;
        /** @brief YUV420 3-buffer (12 bpp, FOURCC = YV12) */
    constexpr std::uint32_t DCMIPP_P1PPCR_FORMAT_B_0x9 = 9;
        /** @brief YUV422 1-buffer (16 bpp, FOURCC = UYVY) */
    constexpr std::uint32_t DCMIPP_P1PPCR_FORMAT_B_0xA = 10;

    /** @brief Swaps R-vs-B components if RGB, and U-vs-V components if YUV */
    using DCMIPP_P1PPCR_SWAPRB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No swap of R-vs-B (U-vs-V) (value: 0)
     *          - B_0x1: Swap active (value: 1)
     */
        /** @brief No swap of R-vs-B (U-vs-V) */
    constexpr std::uint32_t DCMIPP_P1PPCR_SWAPRB_B_0x0 = 0;
        /** @brief Swap active */
    constexpr std::uint32_t DCMIPP_P1PPCR_SWAPRB_B_0x1 = 1;

    /** @brief Amount of capture completed lines for LINE Event and Interrupt */
    using DCMIPP_P1PPCR_LINEMULT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event after one line (value: 0)
     *          - B_0x1: Event after two lines (value: 1)
     *          - B_0x2: Event after four lines (value: 2)
     *          - B_0x3: Event after eight lines (value: 3)
     *          - B_0x4: Event after sixteen lines (value: 4)
     *          - B_0x5: Event after 32 lines (value: 5)
     *          - B_0x6: Event after 64 lines (value: 6)
     *          - B_0x7: Event after 128 lines (value: 7)
     */
        /** @brief Event after one line */
    constexpr std::uint32_t DCMIPP_P1PPCR_LINEMULT_B_0x0 = 0;
        /** @brief Event after two lines */
    constexpr std::uint32_t DCMIPP_P1PPCR_LINEMULT_B_0x1 = 1;
        /** @brief Event after four lines */
    constexpr std::uint32_t DCMIPP_P1PPCR_LINEMULT_B_0x2 = 2;
        /** @brief Event after eight lines */
    constexpr std::uint32_t DCMIPP_P1PPCR_LINEMULT_B_0x3 = 3;
        /** @brief Event after sixteen lines */
    constexpr std::uint32_t DCMIPP_P1PPCR_LINEMULT_B_0x4 = 4;
        /** @brief Event after 32 lines */
    constexpr std::uint32_t DCMIPP_P1PPCR_LINEMULT_B_0x5 = 5;
        /** @brief Event after 64 lines */
    constexpr std::uint32_t DCMIPP_P1PPCR_LINEMULT_B_0x6 = 6;
        /** @brief Event after 128 lines */
    constexpr std::uint32_t DCMIPP_P1PPCR_LINEMULT_B_0x7 = 7;

    /** @brief Double buffer mode */
    using DCMIPP_P1PPCR_DBM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No double buffer mode activated. Pipe1 always drains out the pixels to memory address set by DCMIPP_P1PPM0AR1, and DCMIPP_P1PPM1AR1 as well as DCMIPP_P1PPM2AR1 in case of semi-planar or multi-planar buffer configuration (value: 0)
     *          - B_0x1: Double buffer mode activated. Output pixels address location switches from DCMIPP_P1PPM0AR1 to DCMIPP_P1PPM0AR2 alternatively on each frame. For the semi- and multi-planar operations, the output pixels switches from/to DCMIPP_P1PPM1AR1 to/from DCMIPP_P1PPM1AR2. Memory buffer switches from/to DCMIPP_P1PPM2AR1 to/from DCMIPP_P1PPM2AR2 for multi-planar operations. (value: 1)
     */
        /** @brief No double buffer mode activated. Pipe1 always drains out the pixels to memory address set by DCMIPP_P1PPM0AR1, and DCMIPP_P1PPM1AR1 as well as DCMIPP_P1PPM2AR1 in case of semi-planar or multi-planar buffer configuration */
    constexpr std::uint32_t DCMIPP_P1PPCR_DBM_B_0x0 = 0;
        /** @brief Double buffer mode activated. Output pixels address location switches from DCMIPP_P1PPM0AR1 to DCMIPP_P1PPM0AR2 alternatively on each frame. For the semi- and multi-planar operations, the output pixels switches from/to DCMIPP_P1PPM1AR1 to/from DCMIPP_P1PPM1AR2. Memory buffer switches from/to DCMIPP_P1PPM2AR1 to/from DCMIPP_P1PPM2AR2 for multi-planar operations. */
    constexpr std::uint32_t DCMIPP_P1PPCR_DBM_B_0x1 = 1;

    /** @brief Line multi address wrapping modulo. */
    using DCMIPP_P1PPCR_LMAWM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wraps address after every line (value: 0)
     *          - B_0x1: Wraps address after two lines (value: 1)
     *          - B_0x2: Wraps address after four lines (value: 2)
     *          - B_0x3: Wraps address after eight lines (value: 3)
     *          - B_0x4: Wraps address after sixteen lines (value: 4)
     *          - B_0x5: Wraps address after 32 lines (value: 5)
     *          - B_0x6: Wraps address after 64 lines (value: 6)
     *          - B_0x7: Wraps address after 128 lines (value: 7)
     */
        /** @brief Wraps address after every line */
    constexpr std::uint32_t DCMIPP_P1PPCR_LMAWM_B_0x0 = 0;
        /** @brief Wraps address after two lines */
    constexpr std::uint32_t DCMIPP_P1PPCR_LMAWM_B_0x1 = 1;
        /** @brief Wraps address after four lines */
    constexpr std::uint32_t DCMIPP_P1PPCR_LMAWM_B_0x2 = 2;
        /** @brief Wraps address after eight lines */
    constexpr std::uint32_t DCMIPP_P1PPCR_LMAWM_B_0x3 = 3;
        /** @brief Wraps address after sixteen lines */
    constexpr std::uint32_t DCMIPP_P1PPCR_LMAWM_B_0x4 = 4;
        /** @brief Wraps address after 32 lines */
    constexpr std::uint32_t DCMIPP_P1PPCR_LMAWM_B_0x5 = 5;
        /** @brief Wraps address after 64 lines */
    constexpr std::uint32_t DCMIPP_P1PPCR_LMAWM_B_0x6 = 6;
        /** @brief Wraps address after 128 lines */
    constexpr std::uint32_t DCMIPP_P1PPCR_LMAWM_B_0x7 = 7;

    /** @brief Line multi address wrapping enable bit. */
    using DCMIPP_P1PPCR_LMAWE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Line multi address wrapping disabled. (value: 0)
     *          - B_0x1: Line multi address wrapping enabled. (value: 1)
     */
        /** @brief Line multi address wrapping disabled. */
    constexpr std::uint32_t DCMIPP_P1PPCR_LMAWE_B_0x0 = 0;
        /** @brief Line multi address wrapping enabled. */
    constexpr std::uint32_t DCMIPP_P1PPCR_LMAWE_B_0x1 = 1;

    /** @brief DCMIPP Pipe1 pixel packer Memory0 address register 1 */
    using DCMIPP_P1PPM0AR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9C4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Memory0 address */
    using DCMIPP_P1PPM0AR1_M0A = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe1 pixel packer Memory0 address register 2 */
    using DCMIPP_P1PPM0AR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9C8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Memory0 address */
    using DCMIPP_P1PPM0AR2_M0A = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipex pixel packer Memory0 pitch register */
    using DCMIPP_P1PPM0PR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9CC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of bytes between the address of two consecutive lines. */
    using DCMIPP_P1PPM0PR_PITCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 15, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipex status Memory0 address register */
    using DCMIPP_P1STM0AR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9D0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Memory0 address */
    using DCMIPP_P1STM0AR_M0A = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipex pixel packer Memory1 address register 1 */
    using DCMIPP_P1PPM1AR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9D4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Memory1 address */
    using DCMIPP_P1PPM1AR1_M1A = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipex pixel packer Memory1 address register 2 */
    using DCMIPP_P1PPM1AR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9D8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Memory1 address */
    using DCMIPP_P1PPM1AR2_M1A = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipex pixel packer Memory1 pitch register */
    using DCMIPP_P1PPM1PR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9DC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of bytes between the address of two consecutive lines. */
    using DCMIPP_P1PPM1PR_PITCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 15, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipex status Memory1 address register */
    using DCMIPP_P1STM1AR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9E0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Memory1 address */
    using DCMIPP_P1STM1AR_M1A = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipex pixel packer memory2 address register 1 */
    using DCMIPP_P1PPM2AR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9E4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Memory 2 address */
    using DCMIPP_P1PPM2AR1_M2A = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipex pixel packer memory2 address register 2 */
    using DCMIPP_P1PPM2AR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9E8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Memory 2 address */
    using DCMIPP_P1PPM2AR2_M2A = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipex status Memory2 address register */
    using DCMIPP_P1STM2AR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9F0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Memory2 address */
    using DCMIPP_P1STM2AR_M2A = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe1 interrupt enable register */
    using DCMIPP_P1IER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9F4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Multi-line capture completed interrupt enable */
    using DCMIPP_P1IER_LINEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No interrupt generation when the line is received (value: 0)
     *          - B_0x1: An interrupt is generated after the full capture of a group of lines (or last line reached) (value: 1)
     */
        /** @brief No interrupt generation when the line is received */
    constexpr std::uint32_t DCMIPP_P1IER_LINEIE_B_0x0 = 0;
        /** @brief An interrupt is generated after the full capture of a group of lines (or last line reached) */
    constexpr std::uint32_t DCMIPP_P1IER_LINEIE_B_0x1 = 1;

    /** @brief Frame capture completed interrupt enable */
    using DCMIPP_P1IER_FRAMEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No interrupt generation (value: 0)
     *          - B_0x1: An interrupt is generated after the full capture of a cropped frame (value: 1)
     */
        /** @brief No interrupt generation */
    constexpr std::uint32_t DCMIPP_P1IER_FRAMEIE_B_0x0 = 0;
        /** @brief An interrupt is generated after the full capture of a cropped frame */
    constexpr std::uint32_t DCMIPP_P1IER_FRAMEIE_B_0x1 = 1;

    /** @brief VSYNC interrupt enable */
    using DCMIPP_P1IER_VSYNCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No interrupt generation (value: 0)
     *          - B_0x1: An interrupt is generated on each VSYNC (captured or not) (value: 1)
     */
        /** @brief No interrupt generation */
    constexpr std::uint32_t DCMIPP_P1IER_VSYNCIE_B_0x0 = 0;
        /** @brief An interrupt is generated on each VSYNC (captured or not) */
    constexpr std::uint32_t DCMIPP_P1IER_VSYNCIE_B_0x1 = 1;

    /** @brief Overrun interrupt enable */
    using DCMIPP_P1IER_OVRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No interrupt generation (value: 0)
     *          - B_0x1: An interrupt is generated if the AXI master is unable to transfer the last data before new data (32-bit) are received. (value: 1)
     */
        /** @brief No interrupt generation */
    constexpr std::uint32_t DCMIPP_P1IER_OVRIE_B_0x0 = 0;
        /** @brief An interrupt is generated if the AXI master is unable to transfer the last data before new data (32-bit) are received. */
    constexpr std::uint32_t DCMIPP_P1IER_OVRIE_B_0x1 = 1;

    /** @brief DCMIPP Pipe1 status register */
    using DCMIPP_P1SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9F8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Multi-line capture completed raw interrupt status */
    using DCMIPP_P1SR_LINEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame capture completed raw interrupt status */
    using DCMIPP_P1SR_FRAMEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No capture or ongoing capture (value: 0)
     *          - B_0x1: All data of a frame have been captured. (value: 1)
     */
        /** @brief No capture or ongoing capture */
    constexpr std::uint32_t DCMIPP_P1SR_FRAMEF_B_0x0 = 0;
        /** @brief All data of a frame have been captured. */
    constexpr std::uint32_t DCMIPP_P1SR_FRAMEF_B_0x1 = 1;

    /** @brief VSYNC raw interrupt status */
    using DCMIPP_P1SR_VSYNCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Overrun raw interrupt status */
    using DCMIPP_P1SR_OVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No data buffer overrun occurred (value: 0)
     *          - B_0x1: A data buffer overrun occurred and this frame data are corrupted. (value: 1)
     */
        /** @brief No data buffer overrun occurred */
    constexpr std::uint32_t DCMIPP_P1SR_OVRF_B_0x0 = 0;
        /** @brief A data buffer overrun occurred and this frame data are corrupted. */
    constexpr std::uint32_t DCMIPP_P1SR_OVRF_B_0x1 = 1;

    /** @brief Last line LSB bit, sampled at frame capture complete event. */
    using DCMIPP_P1SR_LSTLINE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Last frame LSB bit, sampled at frame capture complete event. The information is extracted from the frame data number, which can be delivered by the camera through the CSI2 interface. */
    using DCMIPP_P1SR_LSTFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture immediate status */
    using DCMIPP_P1SR_CPTACT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Capture currently inactive (value: 0)
     *          - B_0x1: Capture currently active (value: 1)
     */
        /** @brief Capture currently inactive */
    constexpr std::uint32_t DCMIPP_P1SR_CPTACT_B_0x0 = 0;
        /** @brief Capture currently active */
    constexpr std::uint32_t DCMIPP_P1SR_CPTACT_B_0x1 = 1;

    /** @brief DCMIPP Pipe1 interrupt clear register */
    using DCMIPP_P1FCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9FC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Multi-line capture complete interrupt status clear */
    using DCMIPP_P1FCR_CLINEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame capture complete interrupt status clear */
    using DCMIPP_P1FCR_CFRAMEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vertical synchronization interrupt status clear */
    using DCMIPP_P1FCR_CVSYNCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Overrun interrupt status clear */
    using DCMIPP_P1FCR_COVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe1 current flow selection configuration register */
    using DCMIPP_P1CFSCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA04, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current data type ID A */
    using DCMIPP_P1CFSCR_DTIDA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current data type ID B */
    using DCMIPP_P1CFSCR_DTIDB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Flow selection mode */
    using DCMIPP_P1CFSCR_DTMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Only flow DTID A from the selected virtual channel is forwarded in the pipe. (value: 0)
     *          - B_0x1: Flows DTIDA and DTIDB from the selected virtual channel are forwarded in the pipe. This combination is valid only if the FDTFEN bit is set. (value: 1)
     */
        /** @brief Only flow DTID A from the selected virtual channel is forwarded in the pipe. */
    constexpr std::uint32_t DCMIPP_P1CFSCR_DTMODE_B_0x0 = 0;
        /** @brief Flows DTIDA and DTIDB from the selected virtual channel are forwarded in the pipe. This combination is valid only if the FDTFEN bit is set. */
    constexpr std::uint32_t DCMIPP_P1CFSCR_DTMODE_B_0x1 = 1;

    /** @brief Current differentiates Pipe2 vs. Pipe1 */
    using DCMIPP_P1CFSCR_PIPEDIFF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Pipe2 gets Pipe1 pixels after their processing in shared Gamma, StatRemoval, Demosaicing. Pipe2 shares the same VC DTID of Pipe1 when a CSI2 camera sensor is plugged. (value: 0)
     *          - B_0x1: Pipe1 gets pixels from only VC/DTID configured in pipe1, processed by all including Gamma, StatRemoval, Demosaicing. Pipe2 gets pixels from only VC/DTID configured in Pipe2, processed from Crop only (Gamma common with Pipe1, no StatRem, no demosaicing) (value: 1)
     */
        /** @brief Pipe2 gets Pipe1 pixels after their processing in shared Gamma, StatRemoval, Demosaicing. Pipe2 shares the same VC DTID of Pipe1 when a CSI2 camera sensor is plugged. */
    constexpr std::uint32_t DCMIPP_P1CFSCR_PIPEDIFF_B_0x0 = 0;
        /** @brief Pipe1 gets pixels from only VC/DTID configured in pipe1, processed by all including Gamma, StatRemoval, Demosaicing. Pipe2 gets pixels from only VC/DTID configured in Pipe2, processed from Crop only (Gamma common with Pipe1, no StatRem, no demosaicing) */
    constexpr std::uint32_t DCMIPP_P1CFSCR_PIPEDIFF_B_0x1 = 1;

    /** @brief Current flow selection mode */
    using DCMIPP_P1CFSCR_VC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current force data type format */
    using DCMIPP_P1CFSCR_FDTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current force data type format enable */
    using DCMIPP_P1CFSCR_FDTFEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable force data type format. The data type format used by the pipe is the one defined into DTIDx (value: 0)
     *          - B_0x1: Enable force data type format. When the data type DTIDx is detected by the pipe, the real pixel format considering by the pipe is the one set into the FDTF[5:0] bit field instead of the physical one received by the CSI2 host. It allows to handle, for instance, 3D sensors camera with user data type in bottom-up approach, and to explicitly define the pixel format to be handled by the pipe. (value: 1)
     */
        /** @brief Disable force data type format. The data type format used by the pipe is the one defined into DTIDx */
    constexpr std::uint32_t DCMIPP_P1CFSCR_FDTFEN_B_0x0 = 0;
        /** @brief Enable force data type format. When the data type DTIDx is detected by the pipe, the real pixel format considering by the pipe is the one set into the FDTF[5:0] bit field instead of the physical one received by the CSI2 host. It allows to handle, for instance, 3D sensors camera with user data type in bottom-up approach, and to explicitly define the pixel format to be handled by the pipe. */
    constexpr std::uint32_t DCMIPP_P1CFSCR_FDTFEN_B_0x1 = 1;

    /** @brief Current activation of PipeN */
    using DCMIPP_P1CFSCR_PIPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Pipe disabled (value: 0)
     *          - B_0x1: Pipe enabled, can start capturing with CPTMODE, CPTREQ, CPTACK. (value: 1)
     */
        /** @brief Pipe disabled */
    constexpr std::uint32_t DCMIPP_P1CFSCR_PIPEN_B_0x0 = 0;
        /** @brief Pipe enabled, can start capturing with CPTMODE, CPTREQ, CPTACK. */
    constexpr std::uint32_t DCMIPP_P1CFSCR_PIPEN_B_0x1 = 1;

    /** @brief DCMIPP Pipe1 current bad pixel removal register */
    using DCMIPP_P1CBPRCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current status of enable bit */
    using DCMIPP_P1CBPRCR_ENABLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bypass: bad pixel removal is not active, all pixels are transmitted through (value: 0)
     *          - B_0x1: Enable: if bad pixel are detected, they are replaced by corrected pixels. (value: 1)
     */
        /** @brief Bypass: bad pixel removal is not active, all pixels are transmitted through */
    constexpr std::uint32_t DCMIPP_P1CBPRCR_ENABLE_B_0x0 = 0;
        /** @brief Enable: if bad pixel are detected, they are replaced by corrected pixels. */
    constexpr std::uint32_t DCMIPP_P1CBPRCR_ENABLE_B_0x1 = 1;

    /** @brief Current strength (aggressiveness) of the bad pixel detection: */
    using DCMIPP_P1CBPRCR_STRENGTH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: the filter is fairly tolerant: only a few pixels are declared bad, due to their high noise. (value: 0)
     */
        /** @brief the filter is fairly tolerant: only a few pixels are declared bad, due to their high noise. */
    constexpr std::uint32_t DCMIPP_P1CBPRCR_STRENGTH_B_0x0 = 0;

    /** @brief DCMIPP Pipe1 current black level calibration control register */
    using DCMIPP_P1CBLCCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief For current black level calibration */
    using DCMIPP_P1CBLCCR_ENABLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bypass: black level calibration is not active, all pixels are transmitted non-modified. (value: 0)
     *          - B_0x1: Enable: the BLCR, G, B are subtracted. (value: 1)
     */
        /** @brief Bypass: black level calibration is not active, all pixels are transmitted non-modified. */
    constexpr std::uint32_t DCMIPP_P1CBLCCR_ENABLE_B_0x0 = 0;
        /** @brief Enable: the BLCR, G, B are subtracted. */
    constexpr std::uint32_t DCMIPP_P1CBLCCR_ENABLE_B_0x1 = 1;

    /** @brief Current black level calibration - Blue */
    using DCMIPP_P1CBLCCR_BLCB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current black level calibration - Green */
    using DCMIPP_P1CBLCCR_BLCG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current black level calibration - Red */
    using DCMIPP_P1CBLCCR_BLCR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe1 current exposure control register 1 */
    using DCMIPP_P1CEXCR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief for exposure control (multiplication and shift) */
    using DCMIPP_P1CEXCR1_ENABLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bypass: exposure multiplier and shift are not applied. (value: 0)
     *          - B_0x1: Enable: the exposure multiplication and shift is applied. (value: 1)
     */
        /** @brief Bypass: exposure multiplier and shift are not applied. */
    constexpr std::uint32_t DCMIPP_P1CEXCR1_ENABLE_B_0x0 = 0;
        /** @brief Enable: the exposure multiplication and shift is applied. */
    constexpr std::uint32_t DCMIPP_P1CEXCR1_ENABLE_B_0x1 = 1;

    /** @brief Current exposure multiplier - Red */
    using DCMIPP_P1CEXCR1_MULTR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current exposure shift - Red */
    using DCMIPP_P1CEXCR1_SHFR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe1 current exposure control register 2 */
    using DCMIPP_P1CEXCR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current exposure multiplier - Blue */
    using DCMIPP_P1CEXCR2_MULTB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current exposure shift - Blue */
    using DCMIPP_P1CEXCR2_SHFB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current exposure multiplier - Green */
    using DCMIPP_P1CEXCR2_MULTG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current exposure shift - Green */
    using DCMIPP_P1CEXCR2_SHFG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe1 current statistics 1 control register */
    using DCMIPP_P1CST1CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current enable bit value */
    using DCMIPP_P1CST1CR_ENABLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disabled: statistics are not accumulated. (value: 0)
     *          - B_0x1: Enable: statistics are accumulated (value: 1)
     */
        /** @brief Disabled: statistics are not accumulated. */
    constexpr std::uint32_t DCMIPP_P1CST1CR_ENABLE_B_0x0 = 0;
        /** @brief Enable: statistics are accumulated */
    constexpr std::uint32_t DCMIPP_P1CST1CR_ENABLE_B_0x1 = 1;

    /** @brief Current bin definition */
    using DCMIPP_P1CST1CR_BINS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AllPixels: Accu is incremented of Component, if 0 less than or equal to Component less than 256 (value: 0)
     *          - B_0x1: NoExt16: Accu is incremented of Component, if 16 less than or equal to Component less than 240 (value: 1)
     */
        /** @brief AllPixels: Accu is incremented of Component, if 0 less than or equal to Component less than 256 */
    constexpr std::uint32_t DCMIPP_P1CST1CR_BINS_B_0x0 = 0;
        /** @brief NoExt16: Accu is incremented of Component, if 16 less than or equal to Component less than 240 */
    constexpr std::uint32_t DCMIPP_P1CST1CR_BINS_B_0x1 = 1;

    /** @brief Current source of statistics */
    using DCMIPP_P1CST1CR_SRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current statistics mode */
    using DCMIPP_P1CST1CR_MODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Average: accumulates the 8-bit component value of the considered pixel components. (value: 0)
     *          - B_0x1: Bins: accumulates 256 for each considered pixel component fitting a bin dynamic. (value: 1)
     */
        /** @brief Average: accumulates the 8-bit component value of the considered pixel components. */
    constexpr std::uint32_t DCMIPP_P1CST1CR_MODE_B_0x0 = 0;
        /** @brief Bins: accumulates 256 for each considered pixel component fitting a bin dynamic. */
    constexpr std::uint32_t DCMIPP_P1CST1CR_MODE_B_0x1 = 1;

    /** @brief Current accumulation result, divided by 256. */
    using DCMIPP_P1CST1CR_ACCU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe1 current statistics 2 control register */
    using DCMIPP_P1CST2CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief None */
    using DCMIPP_P1CST2CR_ENABLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disabled: statistics are not accumulated. (value: 0)
     *          - B_0x1: Enable: statistics are accumulated (value: 1)
     */
        /** @brief Disabled: statistics are not accumulated. */
    constexpr std::uint32_t DCMIPP_P1CST2CR_ENABLE_B_0x0 = 0;
        /** @brief Enable: statistics are accumulated */
    constexpr std::uint32_t DCMIPP_P1CST2CR_ENABLE_B_0x1 = 1;

    /** @brief Bin definition */
    using DCMIPP_P1CST2CR_BINS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AllPixels: Accu is incremented of Component, if 0 less than or equal to Component less than 256 (value: 0)
     *          - B_0x1: NoExt16: Accu is incremented of Component, if 16 less than or equal to Component less than 240 (value: 1)
     */
        /** @brief AllPixels: Accu is incremented of Component, if 0 less than or equal to Component less than 256 */
    constexpr std::uint32_t DCMIPP_P1CST2CR_BINS_B_0x0 = 0;
        /** @brief NoExt16: Accu is incremented of Component, if 16 less than or equal to Component less than 240 */
    constexpr std::uint32_t DCMIPP_P1CST2CR_BINS_B_0x1 = 1;

    /** @brief Statistics source */
    using DCMIPP_P1CST2CR_SRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Statistics mode */
    using DCMIPP_P1CST2CR_MODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Average: accumulates the 8-bit component value of the considered pixel components. (value: 0)
     *          - B_0x1: Bins: accumulates 256 for each considered pixel component fitting a bin dynamic. (value: 1)
     */
        /** @brief Average: accumulates the 8-bit component value of the considered pixel components. */
    constexpr std::uint32_t DCMIPP_P1CST2CR_MODE_B_0x0 = 0;
        /** @brief Bins: accumulates 256 for each considered pixel component fitting a bin dynamic. */
    constexpr std::uint32_t DCMIPP_P1CST2CR_MODE_B_0x1 = 1;

    /** @brief Accumulation result, divided by 256. */
    using DCMIPP_P1CST2CR_ACCU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe1 current statistics 3 control register */
    using DCMIPP_P1CST3CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA58, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief None */
    using DCMIPP_P1CST3CR_ENABLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disabled: statistics are not accumulated. (value: 0)
     *          - B_0x1: Enable: statistics are accumulated (value: 1)
     */
        /** @brief Disabled: statistics are not accumulated. */
    constexpr std::uint32_t DCMIPP_P1CST3CR_ENABLE_B_0x0 = 0;
        /** @brief Enable: statistics are accumulated */
    constexpr std::uint32_t DCMIPP_P1CST3CR_ENABLE_B_0x1 = 1;

    /** @brief Current bin definition */
    using DCMIPP_P1CST3CR_BINS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AllPixels: Accu is incremented of Component, if 0 less than or equal to Component less than 256 (value: 0)
     *          - B_0x1: NoExt16: Accu is incremented of Component, if 16 less than or equal to Component less than 240 (value: 1)
     */
        /** @brief AllPixels: Accu is incremented of Component, if 0 less than or equal to Component less than 256 */
    constexpr std::uint32_t DCMIPP_P1CST3CR_BINS_B_0x0 = 0;
        /** @brief NoExt16: Accu is incremented of Component, if 16 less than or equal to Component less than 240 */
    constexpr std::uint32_t DCMIPP_P1CST3CR_BINS_B_0x1 = 1;

    /** @brief Statistics source */
    using DCMIPP_P1CST3CR_SRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Statistics mode */
    using DCMIPP_P1CST3CR_MODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Average: accumulates the 8-bit component value of the considered pixel components. (value: 0)
     *          - B_0x1: Bins: accumulates 256 for each considered pixel component fitting a bin dynamic. (value: 1)
     */
        /** @brief Average: accumulates the 8-bit component value of the considered pixel components. */
    constexpr std::uint32_t DCMIPP_P1CST3CR_MODE_B_0x0 = 0;
        /** @brief Bins: accumulates 256 for each considered pixel component fitting a bin dynamic. */
    constexpr std::uint32_t DCMIPP_P1CST3CR_MODE_B_0x1 = 1;

    /** @brief Accumulation result, divided by 256. */
    using DCMIPP_P1CST3CR_ACCU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe1 current statistics window start register */
    using DCMIPP_P1CSTSTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA5C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current horizontal start, from 0 to 4094 pixels wide */
    using DCMIPP_P1CSTSTR_HSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current vertical start, from 0 to 4094 pixels high */
    using DCMIPP_P1CSTSTR_VSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe1 current statistics window size register */
    using DCMIPP_P1CSTSZR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current horizontal size, from 0 to 4094 pixels wide */
    using DCMIPP_P1CSTSZR_HSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current vertical size, from 0 to 4094 pixels high */
    using DCMIPP_P1CSTSZR_VSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current CROPEN bit value */
    using DCMIPP_P1CSTSZR_CROPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bypass, all pixels are used to compute the statistics. (value: 0)
     *          - B_0x1: Enable, only the rectangle defined by VSTART, HSTART, VSIZE, HSIZE, are used for statistics. (value: 1)
     */
        /** @brief Bypass, all pixels are used to compute the statistics. */
    constexpr std::uint32_t DCMIPP_P1CSTSZR_CROPEN_B_0x0 = 0;
        /** @brief Enable, only the rectangle defined by VSTART, HSTART, VSIZE, HSIZE, are used for statistics. */
    constexpr std::uint32_t DCMIPP_P1CSTSZR_CROPEN_B_0x1 = 1;

    /** @brief DCMIPP Pipe1 current ColorConv configuration register */
    using DCMIPP_P1CCCCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA80, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current value applied */
    using DCMIPP_P1CCCCR_ENABLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ColorConv is bypassed (value: 0)
     *          - B_0x1: ColorConv is enabled (value: 1)
     */
        /** @brief ColorConv is bypassed */
    constexpr std::uint32_t DCMIPP_P1CCCCR_ENABLE_B_0x0 = 0;
        /** @brief ColorConv is enabled */
    constexpr std::uint32_t DCMIPP_P1CCCCR_ENABLE_B_0x1 = 1;

    /** @brief Output samples type used while CLAMP is activated */
    using DCMIPP_P1CCCCR_TYPE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: clamped to [16;235] for Y and to [16;240] for U and V (value: 0)
     *          - B_0x1: clamped to [16;235] for R, G and B (value: 1)
     */
        /** @brief clamped to [16;235] for Y and to [16;240] for U and V */
    constexpr std::uint32_t DCMIPP_P1CCCCR_TYPE_B_0x0 = 0;
        /** @brief clamped to [16;235] for R, G and B */
    constexpr std::uint32_t DCMIPP_P1CCCCR_TYPE_B_0x1 = 1;

    /** @brief Clamp the output samples */
    using DCMIPP_P1CCCCR_CLAMP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Not activated (clamped to [0;255] by default) (value: 0)
     *          - B_0x1: Activated, depending on TYPE (value: 1)
     */
        /** @brief Not activated (clamped to [0;255] by default) */
    constexpr std::uint32_t DCMIPP_P1CCCCR_CLAMP_B_0x0 = 0;
        /** @brief Activated, depending on TYPE */
    constexpr std::uint32_t DCMIPP_P1CCCCR_CLAMP_B_0x1 = 1;

    /** @brief DCMIPP Pipe1 current ColorConv red coefficient register 1 */
    using DCMIPP_P1CCCRR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA84, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current coefficient row 1 column 1 of the matrix */
    using DCMIPP_P1CCCRR1_RR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current coefficient row 1 column 2 of the matrix */
    using DCMIPP_P1CCCRR1_RG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe1 current ColorConv red coefficient register 2 */
    using DCMIPP_P1CCCRR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA88, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current coefficient row 1 column 3 of the matrix */
    using DCMIPP_P1CCCRR2_RB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current coefficient row 1 of the added column (signed integer value) */
    using DCMIPP_P1CCCRR2_RA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe1 current ColorConv green coefficient register 1 */
    using DCMIPP_P1CCCGR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA8C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current coefficient row 2 column 1 of the matrix */
    using DCMIPP_P1CCCGR1_GR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current coefficient row 2 column 2 of the matrix */
    using DCMIPP_P1CCCGR1_GG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe1 current ColorConv green coefficient register 2 */
    using DCMIPP_P1CCCGR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA90, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current coefficient row 2 column 3 of the matrix */
    using DCMIPP_P1CCCGR2_GB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current coefficient row 2 of the added column (signed integer value) */
    using DCMIPP_P1CCCGR2_GA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipex current ColorConv blue coefficient register 1 */
    using DCMIPP_P1CCCBR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA94, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current coefficient row 3 column 1 of the matrix */
    using DCMIPP_P1CCCBR1_BR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current coefficient row 3 column 2 of the matrix */
    using DCMIPP_P1CCCBR1_BG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe1 current ColorConv blue coefficient register 2 */
    using DCMIPP_P1CCCBR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA98, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current coefficient row 3 column 3 of the matrix */
    using DCMIPP_P1CCCBR2_BB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current coefficient row 3 of the added column (signed integer value) */
    using DCMIPP_P1CCCBR2_BA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe1 current contrast control register 1 */
    using DCMIPP_P1CCTCR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xAA0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current ENABLE bit value */
    using DCMIPP_P1CCTCR1_ENABLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bypass, pixels are forwarded idle. (value: 0)
     *          - B_0x1: Enable, contrast enhancement is applied on pixels. (value: 1)
     */
        /** @brief Bypass, pixels are forwarded idle. */
    constexpr std::uint32_t DCMIPP_P1CCTCR1_ENABLE_B_0x0 = 0;
        /** @brief Enable, contrast enhancement is applied on pixels. */
    constexpr std::uint32_t DCMIPP_P1CCTCR1_ENABLE_B_0x1 = 1;

    /** @brief Current luminance increase for input luminance of 0 (increase is idle with LUMx = 16) */
    using DCMIPP_P1CCTCR1_LUM0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe1 current contrast control register 2 */
    using DCMIPP_P1CCTCR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xAA4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current luminance increase for input luminance of 128 (increase is idle with LUMx = 16) */
    using DCMIPP_P1CCTCR2_LUM4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current luminance increase for input luminance of 96 (increase is idle with LUMx = 16) */
    using DCMIPP_P1CCTCR2_LUM3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current luminance increase for input luminance of 64 (increase is idle with LUMx = 16) */
    using DCMIPP_P1CCTCR2_LUM2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current luminance increase for input luminance of 32 (increase is idle with LUMx = 16) */
    using DCMIPP_P1CCTCR2_LUM1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe1 current contrast control register 3 */
    using DCMIPP_P1CCTCR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xAA8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Luminance increase for input luminance of 256 (increase is idle with LUMx = 16) */
    using DCMIPP_P1CCTCR3_LUM8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Luminance increase for input luminance of 224 (increase is idle with LUMx = 16) */
    using DCMIPP_P1CCTCR3_LUM7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Luminance increase for input luminance of 192 (increase is idle with LUMx = 16) */
    using DCMIPP_P1CCTCR3_LUM6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Luminance increase for input luminance of 160 (increase is idle with LUMx = 16) */
    using DCMIPP_P1CCTCR3_LUM5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipex current flow control configuration register */
    using DCMIPP_P1CFCTCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB00, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame capture rate control */
    using DCMIPP_P1CFCTCR_FRATE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: All frames are captured (value: 0)
     *          - B_0x1: One out of two frames captured (50% bandwidth reduction) (value: 1)
     *          - B_0x2: One out of four frames captured (75% bandwidth reduction) (value: 2)
     *          - B_0x3: One out of eight frames captured (87% bandwidth reduction) (value: 3)
     */
        /** @brief All frames are captured */
    constexpr std::uint32_t DCMIPP_P1CFCTCR_FRATE_B_0x0 = 0;
        /** @brief One out of two frames captured (50% bandwidth reduction) */
    constexpr std::uint32_t DCMIPP_P1CFCTCR_FRATE_B_0x1 = 1;
        /** @brief One out of four frames captured (75% bandwidth reduction) */
    constexpr std::uint32_t DCMIPP_P1CFCTCR_FRATE_B_0x2 = 2;
        /** @brief One out of eight frames captured (87% bandwidth reduction) */
    constexpr std::uint32_t DCMIPP_P1CFCTCR_FRATE_B_0x3 = 3;

    /** @brief Capture mode */
    using DCMIPP_P1CFCTCR_CPTMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Continuous grab mode - Received data are transferred into the destination memory through the AXI master. (value: 0)
     *          - B_0x1: Snapshot mode (single frame) - Once activated, the interface waits for the start of frame and then transfers a single frame through the AXI master. At the end of the frame, the CPTACT bit is automatically reset. (value: 1)
     */
        /** @brief Continuous grab mode - Received data are transferred into the destination memory through the AXI master. */
    constexpr std::uint32_t DCMIPP_P1CFCTCR_CPTMODE_B_0x0 = 0;
        /** @brief Snapshot mode (single frame) - Once activated, the interface waits for the start of frame and then transfers a single frame through the AXI master. At the end of the frame, the CPTACT bit is automatically reset. */
    constexpr std::uint32_t DCMIPP_P1CFCTCR_CPTMODE_B_0x1 = 1;

    /** @brief Capture requested */
    using DCMIPP_P1CFCTCR_CPTREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Capture not requested for next frame. (value: 0)
     *          - B_0x1: Capture requested for next frame. (value: 1)
     */
        /** @brief Capture not requested for next frame. */
    constexpr std::uint32_t DCMIPP_P1CFCTCR_CPTREQ_B_0x0 = 0;
        /** @brief Capture requested for next frame. */
    constexpr std::uint32_t DCMIPP_P1CFCTCR_CPTREQ_B_0x1 = 1;

    /** @brief DCMIPP Pipex current crop window start register */
    using DCMIPP_P1CCRSTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB04, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current horizontal start, from 0 to 4094 pixels wide */
    using DCMIPP_P1CCRSTR_HSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current vertical start, from 0 to 4094 pixels high */
    using DCMIPP_P1CCRSTR_VSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipex current crop window size register */
    using DCMIPP_P1CCRSZR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB08, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current horizontal size, from 0 to 4094 pixels wide */
    using DCMIPP_P1CCRSZR_HSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current vertical size, from 0 to 4094 pixels high */
    using DCMIPP_P1CCRSZR_VSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current ENABLE bit value. */
    using DCMIPP_P1CCRSZR_ENABLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bypass, all pixels are transmitted through (no need to set any start and size values) (value: 0)
     *          - B_0x1: Enable, only the rectangle defined by VSIZE, HSIZE, VSTART, HSTART is transmitted. (value: 1)
     */
        /** @brief Bypass, all pixels are transmitted through (no need to set any start and size values) */
    constexpr std::uint32_t DCMIPP_P1CCRSZR_ENABLE_B_0x0 = 0;
        /** @brief Enable, only the rectangle defined by VSIZE, HSIZE, VSTART, HSTART is transmitted. */
    constexpr std::uint32_t DCMIPP_P1CCRSZR_ENABLE_B_0x1 = 1;

    /** @brief DCMIPP Pipex current decimation register */
    using DCMIPP_P1CDCCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB0C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief None */
    using DCMIPP_P1CDCCR_ENABLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bypass: decimation is not active, all pixels are transmitted (value: 0)
     *          - B_0x1: Enable: one pixel every 1, 2, 4 or 8, in H and V is transmitted, following HDEC and VDEC (value: 1)
     */
        /** @brief Bypass: decimation is not active, all pixels are transmitted */
    constexpr std::uint32_t DCMIPP_P1CDCCR_ENABLE_B_0x0 = 0;
        /** @brief Enable: one pixel every 1, 2, 4 or 8, in H and V is transmitted, following HDEC and VDEC */
    constexpr std::uint32_t DCMIPP_P1CDCCR_ENABLE_B_0x1 = 1;

    /** @brief Horizontal decimation ratio */
    using DCMIPP_P1CDCCR_HDEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: All pixels are transmitted, no horizontal decimation (value: 0)
     *          - B_0x1: One line out of two transmitted (value: 1)
     */
        /** @brief All pixels are transmitted, no horizontal decimation */
    constexpr std::uint32_t DCMIPP_P1CDCCR_HDEC_B_0x0 = 0;
        /** @brief One line out of two transmitted */
    constexpr std::uint32_t DCMIPP_P1CDCCR_HDEC_B_0x1 = 1;

    /** @brief Vertical decimation ratio */
    using DCMIPP_P1CDCCR_VDEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: All pixels are transmitted, no vertical decimation (value: 0)
     *          - B_0x1: One line out of two transmitted (value: 1)
     */
        /** @brief All pixels are transmitted, no vertical decimation */
    constexpr std::uint32_t DCMIPP_P1CDCCR_VDEC_B_0x0 = 0;
        /** @brief One line out of two transmitted */
    constexpr std::uint32_t DCMIPP_P1CDCCR_VDEC_B_0x1 = 1;

    /** @brief DCMIPP Pipex current downsize configuration register */
    using DCMIPP_P1CDSCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current horizontal division factor, from 128 (8x) to 1023 (1x) */
    using DCMIPP_P1CDSCR_HDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current vertical division factor, from 128 (8x) to 1023 (1x) */
    using DCMIPP_P1CDSCR_VDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current value of bit ENABLE */
    using DCMIPP_P1CDSCR_ENABLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Down scaler is bypassed (value: 0)
     *          - B_0x1: Down scaler is enabled (value: 1)
     */
        /** @brief Down scaler is bypassed */
    constexpr std::uint32_t DCMIPP_P1CDSCR_ENABLE_B_0x0 = 0;
        /** @brief Down scaler is enabled */
    constexpr std::uint32_t DCMIPP_P1CDSCR_ENABLE_B_0x1 = 1;

    /** @brief DCMIPP Pipex current downsize ratio register */
    using DCMIPP_P1CDSRTIOR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current horizontal ratio, from 8192 (1x) to 65535 (8x) */
    using DCMIPP_P1CDSRTIOR_HRATIO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current vertical ratio, from 8192 (1x) to 65535 (8x) */
    using DCMIPP_P1CDSRTIOR_VRATIO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipex current downsize destination size register */
    using DCMIPP_P1CDSSZR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current horizontal size, from 0 to 4094 pixels wide */
    using DCMIPP_P1CDSSZR_HSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current vertical size, from 0 to 4094 pixels high */
    using DCMIPP_P1CDSSZR_VSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipex current common ROI configuration register */
    using DCMIPP_P1CCMRICR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current region of interest line size width */
    using DCMIPP_P1CCMRICR_ROILSZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Line width 1 pixel (value: 0)
     *          - B_0x1: Line width 2 pixels (value: 1)
     *          - B_0x2: Line width 4 pixels (value: 2)
     *          - B_0x3: Line width 8 pixels (value: 3)
     */
        /** @brief Line width 1 pixel */
    constexpr std::uint32_t DCMIPP_P1CCMRICR_ROILSZ_B_0x0 = 0;
        /** @brief Line width 2 pixels */
    constexpr std::uint32_t DCMIPP_P1CCMRICR_ROILSZ_B_0x1 = 1;
        /** @brief Line width 4 pixels */
    constexpr std::uint32_t DCMIPP_P1CCMRICR_ROILSZ_B_0x2 = 2;
        /** @brief Line width 8 pixels */
    constexpr std::uint32_t DCMIPP_P1CCMRICR_ROILSZ_B_0x3 = 3;

    /** @brief Current region of interest 1 enable */
    using DCMIPP_P1CCMRICR_ROI1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable ROI (value: 0)
     *          - B_0x1: Enable ROI (value: 1)
     */
        /** @brief Disable ROI */
    constexpr std::uint32_t DCMIPP_P1CCMRICR_ROI1EN_B_0x0 = 0;
        /** @brief Enable ROI */
    constexpr std::uint32_t DCMIPP_P1CCMRICR_ROI1EN_B_0x1 = 1;

    /** @brief Current region of interest 2 enable */
    using DCMIPP_P1CCMRICR_ROI2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable ROI (value: 0)
     *          - B_0x1: Enable ROI (value: 1)
     */
        /** @brief Disable ROI */
    constexpr std::uint32_t DCMIPP_P1CCMRICR_ROI2EN_B_0x0 = 0;
        /** @brief Enable ROI */
    constexpr std::uint32_t DCMIPP_P1CCMRICR_ROI2EN_B_0x1 = 1;

    /** @brief Current region of interest 3 enable */
    using DCMIPP_P1CCMRICR_ROI3EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable ROI (value: 0)
     *          - B_0x1: Enable ROI (value: 1)
     */
        /** @brief Disable ROI */
    constexpr std::uint32_t DCMIPP_P1CCMRICR_ROI3EN_B_0x0 = 0;
        /** @brief Enable ROI */
    constexpr std::uint32_t DCMIPP_P1CCMRICR_ROI3EN_B_0x1 = 1;

    /** @brief Current region of interest 4 enable */
    using DCMIPP_P1CCMRICR_ROI4EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable ROI (value: 0)
     *          - B_0x1: Enable ROI (value: 1)
     */
        /** @brief Disable ROI */
    constexpr std::uint32_t DCMIPP_P1CCMRICR_ROI4EN_B_0x0 = 0;
        /** @brief Enable ROI */
    constexpr std::uint32_t DCMIPP_P1CCMRICR_ROI4EN_B_0x1 = 1;

    /** @brief Current region of interest 5 enable */
    using DCMIPP_P1CCMRICR_ROI5EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable ROI (value: 0)
     *          - B_0x1: Enable ROI (value: 1)
     */
        /** @brief Disable ROI */
    constexpr std::uint32_t DCMIPP_P1CCMRICR_ROI5EN_B_0x0 = 0;
        /** @brief Enable ROI */
    constexpr std::uint32_t DCMIPP_P1CCMRICR_ROI5EN_B_0x1 = 1;

    /** @brief Current region of interest 6 enable */
    using DCMIPP_P1CCMRICR_ROI6EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable ROI (value: 0)
     *          - B_0x1: Enable ROI (value: 1)
     */
        /** @brief Disable ROI */
    constexpr std::uint32_t DCMIPP_P1CCMRICR_ROI6EN_B_0x0 = 0;
        /** @brief Enable ROI */
    constexpr std::uint32_t DCMIPP_P1CCMRICR_ROI6EN_B_0x1 = 1;

    /** @brief Current region of interest 7 enable */
    using DCMIPP_P1CCMRICR_ROI7EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable ROI (value: 0)
     *          - B_0x1: Enable ROI (value: 1)
     */
        /** @brief Disable ROI */
    constexpr std::uint32_t DCMIPP_P1CCMRICR_ROI7EN_B_0x0 = 0;
        /** @brief Enable ROI */
    constexpr std::uint32_t DCMIPP_P1CCMRICR_ROI7EN_B_0x1 = 1;

    /** @brief Current region of interest 8 enable */
    using DCMIPP_P1CCMRICR_ROI8EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable ROI (value: 0)
     *          - B_0x1: Enable ROI (value: 1)
     */
        /** @brief Disable ROI */
    constexpr std::uint32_t DCMIPP_P1CCMRICR_ROI8EN_B_0x0 = 0;
        /** @brief Enable ROI */
    constexpr std::uint32_t DCMIPP_P1CCMRICR_ROI8EN_B_0x1 = 1;

    /** @brief DCMIPP Pipe1 current ROI1 configuration register 1 */
    using DCMIPP_P1CRI1CR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current horizontal start, from 0 to 4094 pixels wide */
    using DCMIPP_P1CRI1CR1_HSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current color line blue */
    using DCMIPP_P1CRI1CR1_CLB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current color line green */
    using DCMIPP_P1CRI1CR1_CLG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current vertical start, from 0 to 4094 pixels high */
    using DCMIPP_P1CRI1CR1_VSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current color line red */
    using DCMIPP_P1CRI1CR1_CLR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe1 current ROI1 configuration register 2 */
    using DCMIPP_P1CRI1CR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current horizontal size, from 0 to 4094 pixels wide */
    using DCMIPP_P1CRI1CR2_HSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current vertical size, from 0 to 4094 pixels high */
    using DCMIPP_P1CRI1CR2_VSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe1 current ROI2 configuration register 1 */
    using DCMIPP_P1CRI2CR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current horizontal start, from 0 to 4094 pixels wide */
    using DCMIPP_P1CRI2CR1_HSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current color line blue */
    using DCMIPP_P1CRI2CR1_CLB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current color line green */
    using DCMIPP_P1CRI2CR1_CLG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current vertical start, from 0 to 4094 pixels high */
    using DCMIPP_P1CRI2CR1_VSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current color line red */
    using DCMIPP_P1CRI2CR1_CLR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe1 current ROI2 configuration register 2 */
    using DCMIPP_P1CRI2CR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current horizontal size, from 0 to 4094 pixels wide */
    using DCMIPP_P1CRI2CR2_HSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current vertical size, from 0 to 4094 pixels high */
    using DCMIPP_P1CRI2CR2_VSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe1 current ROI3 configuration register 1 */
    using DCMIPP_P1CRI3CR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current horizontal start, from 0 to 4094 pixels wide */
    using DCMIPP_P1CRI3CR1_HSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current color line blue */
    using DCMIPP_P1CRI3CR1_CLB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current color line green */
    using DCMIPP_P1CRI3CR1_CLG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current vertical start, from 0 to 4094 pixels high */
    using DCMIPP_P1CRI3CR1_VSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current color line red */
    using DCMIPP_P1CRI3CR1_CLR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe1 current ROI3 configuration register 2 */
    using DCMIPP_P1CRI3CR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current horizontal size, from 0 to 4094 pixels wide */
    using DCMIPP_P1CRI3CR2_HSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current vertical size, from 0 to 4094 pixels high */
    using DCMIPP_P1CRI3CR2_VSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe1 current ROI4 configuration register 1 */
    using DCMIPP_P1CRI4CR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current horizontal start, from 0 to 4094 pixels wide */
    using DCMIPP_P1CRI4CR1_HSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current color line blue */
    using DCMIPP_P1CRI4CR1_CLB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current color line green */
    using DCMIPP_P1CRI4CR1_CLG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current vertical start, from 0 to 4094 pixels high */
    using DCMIPP_P1CRI4CR1_VSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current color line red */
    using DCMIPP_P1CRI4CR1_CLR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe1 current ROI4 configuration register 2 */
    using DCMIPP_P1CRI4CR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current horizontal size, from 0 to 4094 pixels wide */
    using DCMIPP_P1CRI4CR2_HSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current vertical size, from 0 to 4094 pixels high */
    using DCMIPP_P1CRI4CR2_VSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe1 current ROI5 configuration register 1 */
    using DCMIPP_P1CRI5CR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current horizontal start, from 0 to 4094 pixels wide */
    using DCMIPP_P1CRI5CR1_HSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current color line blue */
    using DCMIPP_P1CRI5CR1_CLB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current color line green */
    using DCMIPP_P1CRI5CR1_CLG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current vertical start, from 0 to 4094 pixels high */
    using DCMIPP_P1CRI5CR1_VSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current color line red */
    using DCMIPP_P1CRI5CR1_CLR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe1 current ROI5 configuration register 2 */
    using DCMIPP_P1CRI5CR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current horizontal size, from 0 to 4094 pixels wide */
    using DCMIPP_P1CRI5CR2_HSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current vertical size, from 0 to 4094 pixels high */
    using DCMIPP_P1CRI5CR2_VSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe1 current ROI6 configuration register 1 */
    using DCMIPP_P1CRI6CR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB4C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current horizontal start, from 0 to 4094 pixels wide */
    using DCMIPP_P1CRI6CR1_HSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current color line blue */
    using DCMIPP_P1CRI6CR1_CLB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current color line green */
    using DCMIPP_P1CRI6CR1_CLG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current vertical start, from 0 to 4094 pixels high */
    using DCMIPP_P1CRI6CR1_VSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current color line red */
    using DCMIPP_P1CRI6CR1_CLR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe1 current ROI6 configuration register 2 */
    using DCMIPP_P1CRI6CR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current horizontal size, from 0 to 4094 pixels wide */
    using DCMIPP_P1CRI6CR2_HSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current vertical size, from 0 to 4094 pixels high */
    using DCMIPP_P1CRI6CR2_VSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe1 current ROI7 configuration register 1 */
    using DCMIPP_P1CRI7CR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current horizontal start, from 0 to 4094 pixels wide */
    using DCMIPP_P1CRI7CR1_HSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current color line blue */
    using DCMIPP_P1CRI7CR1_CLB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current color line green */
    using DCMIPP_P1CRI7CR1_CLG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current vertical start, from 0 to 4094 pixels high */
    using DCMIPP_P1CRI7CR1_VSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current color line red */
    using DCMIPP_P1CRI7CR1_CLR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe1 current ROI7 configuration register 2 */
    using DCMIPP_P1CRI7CR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB58, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current horizontal size, from 0 to 4094 pixels wide */
    using DCMIPP_P1CRI7CR2_HSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current vertical size, from 0 to 4094 pixels high */
    using DCMIPP_P1CRI7CR2_VSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe1 current ROI8 configuration register 1 */
    using DCMIPP_P1CRI8CR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB5C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current horizontal start, from 0 to 4094 pixels wide */
    using DCMIPP_P1CRI8CR1_HSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current color line blue */
    using DCMIPP_P1CRI8CR1_CLB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current color line green */
    using DCMIPP_P1CRI8CR1_CLG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current vertical start, from 0 to 4094 pixels high */
    using DCMIPP_P1CRI8CR1_VSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current color line red */
    using DCMIPP_P1CRI8CR1_CLR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe1 current ROI8 configuration register 2 */
    using DCMIPP_P1CRI8CR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current horizontal size, from 0 to 4094 pixels wide */
    using DCMIPP_P1CRI8CR2_HSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current vertical size, from 0 to 4094 pixels high */
    using DCMIPP_P1CRI8CR2_VSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe1 current pixel packer configuration register */
    using DCMIPP_P1CPPCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBC0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Memory format */
    using DCMIPP_P1CPPCR_FORMAT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RGB888 or YUV444 1-buffer (value: 0)
     *          - B_0x1: RGB565 1-buffer (value: 1)
     *          - B_0x2: ARGB8888 (with A = 0xFF) (value: 2)
     *          - B_0x3: RGBA8888 (with A = 0xFF) (value: 3)
     *          - B_0x4: monochrome Y8 or G8 1-buffer (value: 4)
     *          - B_0x5: YUV444 1-buffer (32 bpp, FOURCC = AYUV, with A = 0xFF) (value: 5)
     *          - B_0x6: YUV422 1-buffer (16 bpp, FOURCC = YUYV) (value: 6)
     *          - B_0x7: YUV422 2-buffer (16 bpp, FOURCC = none) (value: 7)
     *          - B_0x8: YUV420 2-buffer (12 bpp, FOURCC = NV21), NV12 available with SWAPRB = 1 (value: 8)
     *          - B_0x9: YUV420 3-buffer (12 bpp, FOURCC = YV12) (value: 9)
     *          - B_0xA: YUV422 1-buffer (16 bpp, FOURCC = UYVY) (value: 10)
     */
        /** @brief RGB888 or YUV444 1-buffer */
    constexpr std::uint32_t DCMIPP_P1CPPCR_FORMAT_B_0x0 = 0;
        /** @brief RGB565 1-buffer */
    constexpr std::uint32_t DCMIPP_P1CPPCR_FORMAT_B_0x1 = 1;
        /** @brief ARGB8888 (with A = 0xFF) */
    constexpr std::uint32_t DCMIPP_P1CPPCR_FORMAT_B_0x2 = 2;
        /** @brief RGBA8888 (with A = 0xFF) */
    constexpr std::uint32_t DCMIPP_P1CPPCR_FORMAT_B_0x3 = 3;
        /** @brief monochrome Y8 or G8 1-buffer */
    constexpr std::uint32_t DCMIPP_P1CPPCR_FORMAT_B_0x4 = 4;
        /** @brief YUV444 1-buffer (32 bpp, FOURCC = AYUV, with A = 0xFF) */
    constexpr std::uint32_t DCMIPP_P1CPPCR_FORMAT_B_0x5 = 5;
        /** @brief YUV422 1-buffer (16 bpp, FOURCC = YUYV) */
    constexpr std::uint32_t DCMIPP_P1CPPCR_FORMAT_B_0x6 = 6;
        /** @brief YUV422 2-buffer (16 bpp, FOURCC = none) */
    constexpr std::uint32_t DCMIPP_P1CPPCR_FORMAT_B_0x7 = 7;
        /** @brief YUV420 2-buffer (12 bpp, FOURCC = NV21), NV12 available with SWAPRB = 1 */
    constexpr std::uint32_t DCMIPP_P1CPPCR_FORMAT_B_0x8 = 8;
        /** @brief YUV420 3-buffer (12 bpp, FOURCC = YV12) */
    constexpr std::uint32_t DCMIPP_P1CPPCR_FORMAT_B_0x9 = 9;
        /** @brief YUV422 1-buffer (16 bpp, FOURCC = UYVY) */
    constexpr std::uint32_t DCMIPP_P1CPPCR_FORMAT_B_0xA = 10;

    /** @brief Swaps R-vs-B components if RGB, and U-vs-V components if YUV */
    using DCMIPP_P1CPPCR_SWAPRB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No swap of R-vs-B (U-vs-V) (value: 0)
     *          - B_0x1: Swap active (value: 1)
     */
        /** @brief No swap of R-vs-B (U-vs-V) */
    constexpr std::uint32_t DCMIPP_P1CPPCR_SWAPRB_B_0x0 = 0;
        /** @brief Swap active */
    constexpr std::uint32_t DCMIPP_P1CPPCR_SWAPRB_B_0x1 = 1;

    /** @brief Amount of capture completed lines for LINE Event and Interrupt */
    using DCMIPP_P1CPPCR_LINEMULT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event after one line (value: 0)
     *          - B_0x1: Event after two lines (value: 1)
     *          - B_0x2: Event after four lines (value: 2)
     *          - B_0x3: Event after eight lines (value: 3)
     *          - B_0x4: Event after sixteen lines (value: 4)
     *          - B_0x5: Event after 32 lines (value: 5)
     *          - B_0x6: Event after 64 lines (value: 6)
     *          - B_0x7: Event after 128 lines (value: 7)
     */
        /** @brief Event after one line */
    constexpr std::uint32_t DCMIPP_P1CPPCR_LINEMULT_B_0x0 = 0;
        /** @brief Event after two lines */
    constexpr std::uint32_t DCMIPP_P1CPPCR_LINEMULT_B_0x1 = 1;
        /** @brief Event after four lines */
    constexpr std::uint32_t DCMIPP_P1CPPCR_LINEMULT_B_0x2 = 2;
        /** @brief Event after eight lines */
    constexpr std::uint32_t DCMIPP_P1CPPCR_LINEMULT_B_0x3 = 3;
        /** @brief Event after sixteen lines */
    constexpr std::uint32_t DCMIPP_P1CPPCR_LINEMULT_B_0x4 = 4;
        /** @brief Event after 32 lines */
    constexpr std::uint32_t DCMIPP_P1CPPCR_LINEMULT_B_0x5 = 5;
        /** @brief Event after 64 lines */
    constexpr std::uint32_t DCMIPP_P1CPPCR_LINEMULT_B_0x6 = 6;
        /** @brief Event after 128 lines */
    constexpr std::uint32_t DCMIPP_P1CPPCR_LINEMULT_B_0x7 = 7;

    /** @brief Double buffer mode */
    using DCMIPP_P1CPPCR_DBM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No double buffer mode activated. Pipe1 always drains out the pixels to memory address set by DCMIPP_P1PPM0AR1, and DCMIPP_P1PPM1AR1 as well as DCMIPP_P1PPM2AR1 in case of semi-planar or multi-planar buffer configuration (value: 0)
     *          - B_0x1: Double buffer mode activated. Output pixels address location switches from DCMIPP_P1PPM0AR1 to DCMIPP_P1PPM0AR2 alternatively on each frame. For the semi- and multi-planar operations, the output pixels switches from/to DCMIPP_P1PPM1AR1 to/from DCMIPP_P1PPM1AR2. Memory buffer switches from/to DCMIPP_P1PPM2AR1 to/from DCMIPP_P1PPM2AR2 for multi-planar operations. (value: 1)
     */
        /** @brief No double buffer mode activated. Pipe1 always drains out the pixels to memory address set by DCMIPP_P1PPM0AR1, and DCMIPP_P1PPM1AR1 as well as DCMIPP_P1PPM2AR1 in case of semi-planar or multi-planar buffer configuration */
    constexpr std::uint32_t DCMIPP_P1CPPCR_DBM_B_0x0 = 0;
        /** @brief Double buffer mode activated. Output pixels address location switches from DCMIPP_P1PPM0AR1 to DCMIPP_P1PPM0AR2 alternatively on each frame. For the semi- and multi-planar operations, the output pixels switches from/to DCMIPP_P1PPM1AR1 to/from DCMIPP_P1PPM1AR2. Memory buffer switches from/to DCMIPP_P1PPM2AR1 to/from DCMIPP_P1PPM2AR2 for multi-planar operations. */
    constexpr std::uint32_t DCMIPP_P1CPPCR_DBM_B_0x1 = 1;

    /** @brief Line multi address wrapping modulo */
    using DCMIPP_P1CPPCR_LMAWM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wraps address after every line (value: 0)
     *          - B_0x1: Wraps address after two lines (value: 1)
     *          - B_0x2: Wraps address after four lines (value: 2)
     *          - B_0x3: Wraps address after eight lines (value: 3)
     *          - B_0x4: Wraps address after sixteen lines (value: 4)
     *          - B_0x5: Wraps address after 32 lines (value: 5)
     *          - B_0x6: Wraps address after 64 lines (value: 6)
     *          - B_0x7: Wraps address after 128 lines (value: 7)
     */
        /** @brief Wraps address after every line */
    constexpr std::uint32_t DCMIPP_P1CPPCR_LMAWM_B_0x0 = 0;
        /** @brief Wraps address after two lines */
    constexpr std::uint32_t DCMIPP_P1CPPCR_LMAWM_B_0x1 = 1;
        /** @brief Wraps address after four lines */
    constexpr std::uint32_t DCMIPP_P1CPPCR_LMAWM_B_0x2 = 2;
        /** @brief Wraps address after eight lines */
    constexpr std::uint32_t DCMIPP_P1CPPCR_LMAWM_B_0x3 = 3;
        /** @brief Wraps address after sixteen lines */
    constexpr std::uint32_t DCMIPP_P1CPPCR_LMAWM_B_0x4 = 4;
        /** @brief Wraps address after 32 lines */
    constexpr std::uint32_t DCMIPP_P1CPPCR_LMAWM_B_0x5 = 5;
        /** @brief Wraps address after 64 lines */
    constexpr std::uint32_t DCMIPP_P1CPPCR_LMAWM_B_0x6 = 6;
        /** @brief Wraps address after 128 lines */
    constexpr std::uint32_t DCMIPP_P1CPPCR_LMAWM_B_0x7 = 7;

    /** @brief Line multi address wrapping enable bit */
    using DCMIPP_P1CPPCR_LMAWE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Line multi address wrapping disabled. (value: 0)
     *          - B_0x1: Line multi address wrapping enabled. (value: 1)
     */
        /** @brief Line multi address wrapping disabled. */
    constexpr std::uint32_t DCMIPP_P1CPPCR_LMAWE_B_0x0 = 0;
        /** @brief Line multi address wrapping enabled. */
    constexpr std::uint32_t DCMIPP_P1CPPCR_LMAWE_B_0x1 = 1;

    /** @brief DCMIPP Pipe1 current pixel packer Memory0 address register 1 */
    using DCMIPP_P1CPPM0AR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBC4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Memory0 address */
    using DCMIPP_P1CPPM0AR1_M0A = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe1 current pixel packer Memory0 address register 2 */
    using DCMIPP_P1CPPM0AR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBC8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Memory0 address */
    using DCMIPP_P1CPPM0AR2_M0A = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipex current pixel packer Memory0 pitch register */
    using DCMIPP_P1CPPM0PR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBCC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current number of bytes between the address of two consecutive lines. */
    using DCMIPP_P1CPPM0PR_PITCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 15, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipex current pixel packer Memory1 address register 1 */
    using DCMIPP_P1CPPM1AR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBD4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Memory1 address */
    using DCMIPP_P1CPPM1AR1_M1A = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipex current pixel packer Memory1 address register 2 */
    using DCMIPP_P1CPPM1AR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBD8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Memory1 address */
    using DCMIPP_P1CPPM1AR2_M1A = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipex current pixel packer Memory1 pitch register */
    using DCMIPP_P1CPPM1PR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBDC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current number of bytes between the address of two consecutive lines */
    using DCMIPP_P1CPPM1PR_PITCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 15, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipex current pixel packer Memory2 address register 1 */
    using DCMIPP_P1CPPM2AR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBE4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Memory 2 address */
    using DCMIPP_P1CPPM2AR1_M2A = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipex current pixel packer Memory2 address register 1 */
    using DCMIPP_P1CPPM2AR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBE8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Memory 2 address */
    using DCMIPP_P1CPPM2AR2_M2A = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe2 flow selection configuration register */
    using DCMIPP_P2FSCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC04, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data type ID */
    using DCMIPP_P2FSCR_DTIDA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Flow selection mode */
    using DCMIPP_P2FSCR_VC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Force data type format */
    using DCMIPP_P2FSCR_FDTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Force data type format enable */
    using DCMIPP_P2FSCR_FDTFEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable force data type format. The data type format used by the pipe is the one defined into DTIDx (value: 0)
     *          - B_0x1: Enable force data type format. When the data type DTIDA is detected by the pipe, the real pixel format considered by the pipe is the one set into the FDTF[5:0] bit field instead of the physical one received by the CSI2 host. (value: 1)
     */
        /** @brief Disable force data type format. The data type format used by the pipe is the one defined into DTIDx */
    constexpr std::uint32_t DCMIPP_P2FSCR_FDTFEN_B_0x0 = 0;
        /** @brief Enable force data type format. When the data type DTIDA is detected by the pipe, the real pixel format considered by the pipe is the one set into the FDTF[5:0] bit field instead of the physical one received by the CSI2 host. */
    constexpr std::uint32_t DCMIPP_P2FSCR_FDTFEN_B_0x1 = 1;

    /** @brief Activation of PipeN */
    using DCMIPP_P2FSCR_PIPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PipeN disabled (value: 0)
     *          - B_0x1: PipeN enabled, can start capturing with CPTMODE, CPTREQ, CPTACK (value: 1)
     */
        /** @brief PipeN disabled */
    constexpr std::uint32_t DCMIPP_P2FSCR_PIPEN_B_0x0 = 0;
        /** @brief PipeN enabled, can start capturing with CPTMODE, CPTREQ, CPTACK */
    constexpr std::uint32_t DCMIPP_P2FSCR_PIPEN_B_0x1 = 1;

    /** @brief DCMIPP Pipex flow control configuration register */
    using DCMIPP_P2FCTCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD00, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame capture rate control */
    using DCMIPP_P2FCTCR_FRATE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: All frames are captured (value: 0)
     *          - B_0x1: One out of two frames captured (50% bandwidth reduction) (value: 1)
     *          - B_0x2: One out of four frames captured (75% bandwidth reduction) (value: 2)
     *          - B_0x3: One out of eight frames captured (87% bandwidth reduction) (value: 3)
     */
        /** @brief All frames are captured */
    constexpr std::uint32_t DCMIPP_P2FCTCR_FRATE_B_0x0 = 0;
        /** @brief One out of two frames captured (50% bandwidth reduction) */
    constexpr std::uint32_t DCMIPP_P2FCTCR_FRATE_B_0x1 = 1;
        /** @brief One out of four frames captured (75% bandwidth reduction) */
    constexpr std::uint32_t DCMIPP_P2FCTCR_FRATE_B_0x2 = 2;
        /** @brief One out of eight frames captured (87% bandwidth reduction) */
    constexpr std::uint32_t DCMIPP_P2FCTCR_FRATE_B_0x3 = 3;

    /** @brief Capture mode */
    using DCMIPP_P2FCTCR_CPTMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Continuous grab mode. The received data are transferred into the destination memory through the AXI master. (value: 0)
     *          - B_0x1: Snapshot mode (single frame). Once activated, the interface waits for the start of frame and then transfers a single frame through the AXI master. At the end of the frame, the CPTACT bit is automatically reset. (value: 1)
     */
        /** @brief Continuous grab mode. The received data are transferred into the destination memory through the AXI master. */
    constexpr std::uint32_t DCMIPP_P2FCTCR_CPTMODE_B_0x0 = 0;
        /** @brief Snapshot mode (single frame). Once activated, the interface waits for the start of frame and then transfers a single frame through the AXI master. At the end of the frame, the CPTACT bit is automatically reset. */
    constexpr std::uint32_t DCMIPP_P2FCTCR_CPTMODE_B_0x1 = 1;

    /** @brief Capture requested */
    using DCMIPP_P2FCTCR_CPTREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Capture not requested for next frame (value: 0)
     *          - B_0x1: Capture requested for next frame (value: 1)
     */
        /** @brief Capture not requested for next frame */
    constexpr std::uint32_t DCMIPP_P2FCTCR_CPTREQ_B_0x0 = 0;
        /** @brief Capture requested for next frame */
    constexpr std::uint32_t DCMIPP_P2FCTCR_CPTREQ_B_0x1 = 1;

    /** @brief DCMIPP Pipex crop window start register */
    using DCMIPP_P2CRSTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD04, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Horizontal start, from 0 to 4094 pixels wide */
    using DCMIPP_P2CRSTR_HSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vertical start, from 0 to 4094 pixels high */
    using DCMIPP_P2CRSTR_VSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipex crop window size register */
    using DCMIPP_P2CRSZR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD08, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Horizontal size, from 0 to 4094 pixels wide. If the value is maintained at 0 when enabling the crop by means of the ENABLE bit, the value is forced internally at 0xFFE, which is the maximum value. */
    using DCMIPP_P2CRSZR_HSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vertical size, from 0 to 4094 pixels high. If the value is maintained at 0 when enabling the crop thanks to the ENABLE bit, the value is forced internally at 0xFFE, which is the maximum value. */
    using DCMIPP_P2CRSZR_VSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief None */
    using DCMIPP_P2CRSZR_ENABLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bypass, all pixels are transmitted through (no need to set any start and size values) (value: 0)
     *          - B_0x1: Enable, only the rectangle defined by VSIZE, HSIZE, VSTART, HSTART is transmitted. (value: 1)
     */
        /** @brief Bypass, all pixels are transmitted through (no need to set any start and size values) */
    constexpr std::uint32_t DCMIPP_P2CRSZR_ENABLE_B_0x0 = 0;
        /** @brief Enable, only the rectangle defined by VSIZE, HSIZE, VSTART, HSTART is transmitted. */
    constexpr std::uint32_t DCMIPP_P2CRSZR_ENABLE_B_0x1 = 1;

    /** @brief DCMIPP Pipex decimation register */
    using DCMIPP_P2DCCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD0C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief None */
    using DCMIPP_P2DCCR_ENABLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bypass: decimation is not active, all pixels are transmitted (value: 0)
     *          - B_0x1: Enable: one pixel every 1, 2, 4 or 8, in H and V is transmitted, following HDEC and VDEC (value: 1)
     */
        /** @brief Bypass: decimation is not active, all pixels are transmitted */
    constexpr std::uint32_t DCMIPP_P2DCCR_ENABLE_B_0x0 = 0;
        /** @brief Enable: one pixel every 1, 2, 4 or 8, in H and V is transmitted, following HDEC and VDEC */
    constexpr std::uint32_t DCMIPP_P2DCCR_ENABLE_B_0x1 = 1;

    /** @brief Horizontal decimation ratio */
    using DCMIPP_P2DCCR_HDEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: All pixels are transmitted, no horizontal decimation (value: 0)
     *          - B_0x1: One line out of two transmitted (value: 1)
     */
        /** @brief All pixels are transmitted, no horizontal decimation */
    constexpr std::uint32_t DCMIPP_P2DCCR_HDEC_B_0x0 = 0;
        /** @brief One line out of two transmitted */
    constexpr std::uint32_t DCMIPP_P2DCCR_HDEC_B_0x1 = 1;

    /** @brief Vertical decimation ratio */
    using DCMIPP_P2DCCR_VDEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: All pixels are transmitted, no vertical decimation (value: 0)
     *          - B_0x1: One line out of two transmitted (value: 1)
     */
        /** @brief All pixels are transmitted, no vertical decimation */
    constexpr std::uint32_t DCMIPP_P2DCCR_VDEC_B_0x0 = 0;
        /** @brief One line out of two transmitted */
    constexpr std::uint32_t DCMIPP_P2DCCR_VDEC_B_0x1 = 1;

    /** @brief DCMIPP Pipex downsize configuration register */
    using DCMIPP_P2DSCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Horizontal division factor, from 128 (8x) to 1023 (1x) */
    using DCMIPP_P2DSCR_HDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vertical division factor, from 128 (8x) to 1023 (1x) */
    using DCMIPP_P2DSCR_VDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief None */
    using DCMIPP_P2DSCR_ENABLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Down scaler is bypassed (value: 0)
     *          - B_0x1: Down scaler is enabled (value: 1)
     */
        /** @brief Down scaler is bypassed */
    constexpr std::uint32_t DCMIPP_P2DSCR_ENABLE_B_0x0 = 0;
        /** @brief Down scaler is enabled */
    constexpr std::uint32_t DCMIPP_P2DSCR_ENABLE_B_0x1 = 1;

    /** @brief DCMIPP Pipex downsize ratio register */
    using DCMIPP_P2DSRTIOR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Horizontal ratio, from 8192 (1x) to 65535 (8x) */
    using DCMIPP_P2DSRTIOR_HRATIO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vertical ratio, from 8192 (1x) to 65535 (8x) */
    using DCMIPP_P2DSRTIOR_VRATIO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipex downsize destination size register */
    using DCMIPP_P2DSSZR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Horizontal size, from 0 to 4094 pixels wide */
    using DCMIPP_P2DSSZR_HSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vertical size, from 0 to 4094 pixels high */
    using DCMIPP_P2DSSZR_VSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipex common ROI configuration register */
    using DCMIPP_P2CMRICR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Region of interest line size width */
    using DCMIPP_P2CMRICR_ROILSZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Line width 1 pixel (value: 0)
     *          - B_0x1: Line width 2 pixels (value: 1)
     *          - B_0x2: Line width 4 pixels (value: 2)
     *          - B_0x3: Line width 8 pixels (value: 3)
     */
        /** @brief Line width 1 pixel */
    constexpr std::uint32_t DCMIPP_P2CMRICR_ROILSZ_B_0x0 = 0;
        /** @brief Line width 2 pixels */
    constexpr std::uint32_t DCMIPP_P2CMRICR_ROILSZ_B_0x1 = 1;
        /** @brief Line width 4 pixels */
    constexpr std::uint32_t DCMIPP_P2CMRICR_ROILSZ_B_0x2 = 2;
        /** @brief Line width 8 pixels */
    constexpr std::uint32_t DCMIPP_P2CMRICR_ROILSZ_B_0x3 = 3;

    /** @brief Region of interest 1 enable */
    using DCMIPP_P2CMRICR_ROI1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable ROI (value: 0)
     *          - B_0x1: Enable ROI (value: 1)
     */
        /** @brief Disable ROI */
    constexpr std::uint32_t DCMIPP_P2CMRICR_ROI1EN_B_0x0 = 0;
        /** @brief Enable ROI */
    constexpr std::uint32_t DCMIPP_P2CMRICR_ROI1EN_B_0x1 = 1;

    /** @brief Region of interest 2 enable */
    using DCMIPP_P2CMRICR_ROI2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable ROI (value: 0)
     *          - B_0x1: Enable ROI (value: 1)
     */
        /** @brief Disable ROI */
    constexpr std::uint32_t DCMIPP_P2CMRICR_ROI2EN_B_0x0 = 0;
        /** @brief Enable ROI */
    constexpr std::uint32_t DCMIPP_P2CMRICR_ROI2EN_B_0x1 = 1;

    /** @brief Region of interest 3 enable */
    using DCMIPP_P2CMRICR_ROI3EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable ROI (value: 0)
     *          - B_0x1: Enable ROI (value: 1)
     */
        /** @brief Disable ROI */
    constexpr std::uint32_t DCMIPP_P2CMRICR_ROI3EN_B_0x0 = 0;
        /** @brief Enable ROI */
    constexpr std::uint32_t DCMIPP_P2CMRICR_ROI3EN_B_0x1 = 1;

    /** @brief Region of interest 4 enable */
    using DCMIPP_P2CMRICR_ROI4EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable ROI (value: 0)
     *          - B_0x1: Enable ROI (value: 1)
     */
        /** @brief Disable ROI */
    constexpr std::uint32_t DCMIPP_P2CMRICR_ROI4EN_B_0x0 = 0;
        /** @brief Enable ROI */
    constexpr std::uint32_t DCMIPP_P2CMRICR_ROI4EN_B_0x1 = 1;

    /** @brief Region of interest 5 enable */
    using DCMIPP_P2CMRICR_ROI5EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable ROI (value: 0)
     *          - B_0x1: Enable ROI (value: 1)
     */
        /** @brief Disable ROI */
    constexpr std::uint32_t DCMIPP_P2CMRICR_ROI5EN_B_0x0 = 0;
        /** @brief Enable ROI */
    constexpr std::uint32_t DCMIPP_P2CMRICR_ROI5EN_B_0x1 = 1;

    /** @brief Region of interest 6 enable */
    using DCMIPP_P2CMRICR_ROI6EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable ROI (value: 0)
     *          - B_0x1: Enable ROI (value: 1)
     */
        /** @brief Disable ROI */
    constexpr std::uint32_t DCMIPP_P2CMRICR_ROI6EN_B_0x0 = 0;
        /** @brief Enable ROI */
    constexpr std::uint32_t DCMIPP_P2CMRICR_ROI6EN_B_0x1 = 1;

    /** @brief Region of interest 7 enable */
    using DCMIPP_P2CMRICR_ROI7EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable ROI (value: 0)
     *          - B_0x1: Enable ROI (value: 1)
     */
        /** @brief Disable ROI */
    constexpr std::uint32_t DCMIPP_P2CMRICR_ROI7EN_B_0x0 = 0;
        /** @brief Enable ROI */
    constexpr std::uint32_t DCMIPP_P2CMRICR_ROI7EN_B_0x1 = 1;

    /** @brief Region of interest 8 enable */
    using DCMIPP_P2CMRICR_ROI8EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable ROI (value: 0)
     *          - B_0x1: Enable ROI (value: 1)
     */
        /** @brief Disable ROI */
    constexpr std::uint32_t DCMIPP_P2CMRICR_ROI8EN_B_0x0 = 0;
        /** @brief Enable ROI */
    constexpr std::uint32_t DCMIPP_P2CMRICR_ROI8EN_B_0x1 = 1;

    /** @brief DCMIPP Pipe2 ROI1 configuration register 1 */
    using DCMIPP_P2RI1CR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Horizontal start, from 0 to 4094 pixels wide */
    using DCMIPP_P2RI1CR1_HSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Color line blue */
    using DCMIPP_P2RI1CR1_CLB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Color line green */
    using DCMIPP_P2RI1CR1_CLG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vertical start, from 0 to 4094 pixels high */
    using DCMIPP_P2RI1CR1_VSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Color line red */
    using DCMIPP_P2RI1CR1_CLR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe2 ROI1 configuration register 2 */
    using DCMIPP_P2RI1CR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Horizontal size, from 0 to 4094 pixels wide */
    using DCMIPP_P2RI1CR2_HSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vertical size, from 0 to 4094 pixels high */
    using DCMIPP_P2RI1CR2_VSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe2 ROI2 configuration register 1 */
    using DCMIPP_P2RI2CR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Horizontal start, from 0 to 4094 pixels wide */
    using DCMIPP_P2RI2CR1_HSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Color line blue */
    using DCMIPP_P2RI2CR1_CLB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Color line green */
    using DCMIPP_P2RI2CR1_CLG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vertical start, from 0 to 4094 pixels high */
    using DCMIPP_P2RI2CR1_VSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Color line red */
    using DCMIPP_P2RI2CR1_CLR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe2 ROI2 configuration register 2 */
    using DCMIPP_P2RI2CR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Horizontal size, from 0 to 4094 pixels wide */
    using DCMIPP_P2RI2CR2_HSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vertical size, from 0 to 4094 pixels high */
    using DCMIPP_P2RI2CR2_VSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe2 ROI3 configuration register 1 */
    using DCMIPP_P2RI3CR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Horizontal start, from 0 to 4094 pixels wide */
    using DCMIPP_P2RI3CR1_HSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Color line blue */
    using DCMIPP_P2RI3CR1_CLB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Color line green */
    using DCMIPP_P2RI3CR1_CLG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vertical start, from 0 to 4094 pixels high */
    using DCMIPP_P2RI3CR1_VSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Color line red */
    using DCMIPP_P2RI3CR1_CLR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe2 ROI3 configuration register 2 */
    using DCMIPP_P2RI3CR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Horizontal size, from 0 to 4094 pixels wide */
    using DCMIPP_P2RI3CR2_HSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vertical size, from 0 to 4094 pixels high */
    using DCMIPP_P2RI3CR2_VSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe2 ROI4 configuration register 1 */
    using DCMIPP_P2RI4CR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Horizontal start, from 0 to 4094 pixels wide */
    using DCMIPP_P2RI4CR1_HSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Color line blue */
    using DCMIPP_P2RI4CR1_CLB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Color line green */
    using DCMIPP_P2RI4CR1_CLG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vertical start, from 0 to 4094 pixels high */
    using DCMIPP_P2RI4CR1_VSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Color line red */
    using DCMIPP_P2RI4CR1_CLR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe2 ROI4 configuration register 2 */
    using DCMIPP_P2RI4CR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Horizontal size, from 0 to 4094 pixels wide */
    using DCMIPP_P2RI4CR2_HSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vertical size, from 0 to 4094 pixels high */
    using DCMIPP_P2RI4CR2_VSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe2 ROI5 configuration register 1 */
    using DCMIPP_P2RI5CR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Horizontal start, from 0 to 4094 pixels wide */
    using DCMIPP_P2RI5CR1_HSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Color line blue */
    using DCMIPP_P2RI5CR1_CLB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Color line green */
    using DCMIPP_P2RI5CR1_CLG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vertical start, from 0 to 4094 pixels high */
    using DCMIPP_P2RI5CR1_VSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Color line red */
    using DCMIPP_P2RI5CR1_CLR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe2 ROI5 configuration register 2 */
    using DCMIPP_P2RI5CR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Horizontal size, from 0 to 4094 pixels wide */
    using DCMIPP_P2RI5CR2_HSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vertical size, from 0 to 4094 pixels high */
    using DCMIPP_P2RI5CR2_VSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe2 ROI6 configuration register 1 */
    using DCMIPP_P2RI6CR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD4C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Horizontal start, from 0 to 4094 pixels wide */
    using DCMIPP_P2RI6CR1_HSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Color line blue */
    using DCMIPP_P2RI6CR1_CLB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Color line green */
    using DCMIPP_P2RI6CR1_CLG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vertical start, from 0 to 4094 pixels high */
    using DCMIPP_P2RI6CR1_VSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Color line red */
    using DCMIPP_P2RI6CR1_CLR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe2 ROI6 configuration register 2 */
    using DCMIPP_P2RI6CR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Horizontal size, from 0 to 4094 pixels wide */
    using DCMIPP_P2RI6CR2_HSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vertical size, from 0 to 4094 pixels high */
    using DCMIPP_P2RI6CR2_VSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe2 ROI7 configuration register 1 */
    using DCMIPP_P2RI7CR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Horizontal start, from 0 to 4094 pixels wide */
    using DCMIPP_P2RI7CR1_HSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Color line blue */
    using DCMIPP_P2RI7CR1_CLB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Color line green */
    using DCMIPP_P2RI7CR1_CLG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vertical start, from 0 to 4094 pixels high */
    using DCMIPP_P2RI7CR1_VSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Color line red */
    using DCMIPP_P2RI7CR1_CLR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe2 ROI7 configuration register 2 */
    using DCMIPP_P2RI7CR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD58, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Horizontal size, from 0 to 4094 pixels wide */
    using DCMIPP_P2RI7CR2_HSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vertical size, from 0 to 4094 pixels high */
    using DCMIPP_P2RI7CR2_VSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe2 ROI8 configuration register 1 */
    using DCMIPP_P2RI8CR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD5C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Horizontal start, from 0 to 4094 pixels wide */
    using DCMIPP_P2RI8CR1_HSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Color line blue */
    using DCMIPP_P2RI8CR1_CLB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Color line green */
    using DCMIPP_P2RI8CR1_CLG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vertical start, from 0 to 4094 pixels high */
    using DCMIPP_P2RI8CR1_VSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Color line red */
    using DCMIPP_P2RI8CR1_CLR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe2 ROI8 configuration register 2 */
    using DCMIPP_P2RI8CR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Horizontal size, from 0 to 4094 pixels wide */
    using DCMIPP_P2RI8CR2_HSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vertical size, from 0 to 4094 pixels high */
    using DCMIPP_P2RI8CR2_VSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipex gamma configuration register */
    using DCMIPP_P2GMCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD70, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief None */
    using DCMIPP_P2GMCR_ENABLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gamma is bypassed (value: 0)
     *          - B_0x1: Gamma is enabled (value: 1)
     */
        /** @brief Gamma is bypassed */
    constexpr std::uint32_t DCMIPP_P2GMCR_ENABLE_B_0x0 = 0;
        /** @brief Gamma is enabled */
    constexpr std::uint32_t DCMIPP_P2GMCR_ENABLE_B_0x1 = 1;

    /** @brief DCMIPP Pipe2 pixel packer configuration register */
    using DCMIPP_P2PPCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xDC0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Memory format (only coplanar formats are supported in Pipe2) */
    using DCMIPP_P2PPCR_FORMAT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RG/B888 or YUV444 1-buffer (value: 0)
     *          - B_0x1: RGB565 1-buffer (value: 1)
     *          - B_0x2: ARGB8888 (value: 2)
     *          - B_0x3: RGBA8888 (value: 3)
     *          - B_0x4: monochrome Y8 or G8 1-buffer (value: 4)
     *          - B_0x5: YUV444 1-buffer (FOURCC = AYUV) (value: 5)
     *          - B_0x6: YUV422 1-buffer (FOURCC = YUYV) (value: 6)
     */
        /** @brief RG/B888 or YUV444 1-buffer */
    constexpr std::uint32_t DCMIPP_P2PPCR_FORMAT_B_0x0 = 0;
        /** @brief RGB565 1-buffer */
    constexpr std::uint32_t DCMIPP_P2PPCR_FORMAT_B_0x1 = 1;
        /** @brief ARGB8888 */
    constexpr std::uint32_t DCMIPP_P2PPCR_FORMAT_B_0x2 = 2;
        /** @brief RGBA8888 */
    constexpr std::uint32_t DCMIPP_P2PPCR_FORMAT_B_0x3 = 3;
        /** @brief monochrome Y8 or G8 1-buffer */
    constexpr std::uint32_t DCMIPP_P2PPCR_FORMAT_B_0x4 = 4;
        /** @brief YUV444 1-buffer (FOURCC = AYUV) */
    constexpr std::uint32_t DCMIPP_P2PPCR_FORMAT_B_0x5 = 5;
        /** @brief YUV422 1-buffer (FOURCC = YUYV) */
    constexpr std::uint32_t DCMIPP_P2PPCR_FORMAT_B_0x6 = 6;

    /** @brief Swaps R-vs-B components if RGB, and if YUV, swaps U-vs-V components */
    using DCMIPP_P2PPCR_SWAPRB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No swap of R-vs-B (U-vs-V) (value: 0)
     *          - B_0x1: Swap active. (value: 1)
     */
        /** @brief No swap of R-vs-B (U-vs-V) */
    constexpr std::uint32_t DCMIPP_P2PPCR_SWAPRB_B_0x0 = 0;
        /** @brief Swap active. */
    constexpr std::uint32_t DCMIPP_P2PPCR_SWAPRB_B_0x1 = 1;

    /** @brief Amount of capture completed lines for LINE event and interrupt */
    using DCMIPP_P2PPCR_LINEMULT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event after every line (value: 0)
     *          - B_0x1: Event after two lines (value: 1)
     *          - B_0x2: Event after four lines (value: 2)
     *          - B_0x3: Event after eight lines (value: 3)
     *          - B_0x4: Event after sixteen lines (value: 4)
     *          - B_0x5: Event after 32 lines (value: 5)
     *          - B_0x6: Event after 64 lines (value: 6)
     *          - B_0x7: Event after 128 lines (value: 7)
     */
        /** @brief Event after every line */
    constexpr std::uint32_t DCMIPP_P2PPCR_LINEMULT_B_0x0 = 0;
        /** @brief Event after two lines */
    constexpr std::uint32_t DCMIPP_P2PPCR_LINEMULT_B_0x1 = 1;
        /** @brief Event after four lines */
    constexpr std::uint32_t DCMIPP_P2PPCR_LINEMULT_B_0x2 = 2;
        /** @brief Event after eight lines */
    constexpr std::uint32_t DCMIPP_P2PPCR_LINEMULT_B_0x3 = 3;
        /** @brief Event after sixteen lines */
    constexpr std::uint32_t DCMIPP_P2PPCR_LINEMULT_B_0x4 = 4;
        /** @brief Event after 32 lines */
    constexpr std::uint32_t DCMIPP_P2PPCR_LINEMULT_B_0x5 = 5;
        /** @brief Event after 64 lines */
    constexpr std::uint32_t DCMIPP_P2PPCR_LINEMULT_B_0x6 = 6;
        /** @brief Event after 128 lines */
    constexpr std::uint32_t DCMIPP_P2PPCR_LINEMULT_B_0x7 = 7;

    /** @brief Double buffer mode */
    using DCMIPP_P2PPCR_DBM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No double buffer mode activated. Pipe2 is always dump to memory address set by DCMIPP_P2PPM0AR1 (value: 0)
     *          - B_0x1: Double buffer mode activated. Dump address location switches from DCMIPP_P2PPM0AR1 register to DCMIPP_P2PPM0AR2 register alternatively on each frame (value: 1)
     */
        /** @brief No double buffer mode activated. Pipe2 is always dump to memory address set by DCMIPP_P2PPM0AR1 */
    constexpr std::uint32_t DCMIPP_P2PPCR_DBM_B_0x0 = 0;
        /** @brief Double buffer mode activated. Dump address location switches from DCMIPP_P2PPM0AR1 register to DCMIPP_P2PPM0AR2 register alternatively on each frame */
    constexpr std::uint32_t DCMIPP_P2PPCR_DBM_B_0x1 = 1;

    /** @brief Line multi address wrapping modulo */
    using DCMIPP_P2PPCR_LMAWM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wraps address after every line (value: 0)
     *          - B_0x1: Wraps address after two lines (value: 1)
     *          - B_0x2: Wraps address after four lines (value: 2)
     *          - B_0x3: Wraps address after eight lines (value: 3)
     *          - B_0x4: Wraps address after sixteen lines (value: 4)
     *          - B_0x5: Wraps address after 32 lines (value: 5)
     *          - B_0x6: Wraps address after 64 lines (value: 6)
     *          - B_0x7: Wraps address after 128 lines (value: 7)
     */
        /** @brief Wraps address after every line */
    constexpr std::uint32_t DCMIPP_P2PPCR_LMAWM_B_0x0 = 0;
        /** @brief Wraps address after two lines */
    constexpr std::uint32_t DCMIPP_P2PPCR_LMAWM_B_0x1 = 1;
        /** @brief Wraps address after four lines */
    constexpr std::uint32_t DCMIPP_P2PPCR_LMAWM_B_0x2 = 2;
        /** @brief Wraps address after eight lines */
    constexpr std::uint32_t DCMIPP_P2PPCR_LMAWM_B_0x3 = 3;
        /** @brief Wraps address after sixteen lines */
    constexpr std::uint32_t DCMIPP_P2PPCR_LMAWM_B_0x4 = 4;
        /** @brief Wraps address after 32 lines */
    constexpr std::uint32_t DCMIPP_P2PPCR_LMAWM_B_0x5 = 5;
        /** @brief Wraps address after 64 lines */
    constexpr std::uint32_t DCMIPP_P2PPCR_LMAWM_B_0x6 = 6;
        /** @brief Wraps address after 128 lines */
    constexpr std::uint32_t DCMIPP_P2PPCR_LMAWM_B_0x7 = 7;

    /** @brief Line multi address wrapping enable bit */
    using DCMIPP_P2PPCR_LMAWE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Line multi address wrapping disabled. (value: 0)
     *          - B_0x1: Line multi address wrapping enabled. (value: 1)
     */
        /** @brief Line multi address wrapping disabled. */
    constexpr std::uint32_t DCMIPP_P2PPCR_LMAWE_B_0x0 = 0;
        /** @brief Line multi address wrapping enabled. */
    constexpr std::uint32_t DCMIPP_P2PPCR_LMAWE_B_0x1 = 1;

    /** @brief DCMIPP Pipe2 pixel packer Memory0 address register 1 */
    using DCMIPP_P2PPM0AR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xDC4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Memory0 address */
    using DCMIPP_P2PPM0AR1_M0A = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe2 pixel packer Memory0 address register 2 */
    using DCMIPP_P2PPM0AR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xDC8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Memory0 address */
    using DCMIPP_P2PPM0AR2_M0A = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipex pixel packer Memory0 pitch register */
    using DCMIPP_P2PPM0PR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xDCC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of bytes between the address of two consecutive lines. */
    using DCMIPP_P2PPM0PR_PITCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 15, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipex status Memory0 address register */
    using DCMIPP_P2STM0AR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xDD0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Memory0 address */
    using DCMIPP_P2STM0AR_M0A = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe2 interrupt enable register */
    using DCMIPP_P2IER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xDF4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Multi-line capture completed interrupt enable */
    using DCMIPP_P2IER_LINEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No interrupt generation when the line is received (value: 0)
     *          - B_0x1: An interrupt is generated after the full capture of a group of lines (or last line reached) (value: 1)
     */
        /** @brief No interrupt generation when the line is received */
    constexpr std::uint32_t DCMIPP_P2IER_LINEIE_B_0x0 = 0;
        /** @brief An interrupt is generated after the full capture of a group of lines (or last line reached) */
    constexpr std::uint32_t DCMIPP_P2IER_LINEIE_B_0x1 = 1;

    /** @brief Frame capture completed interrupt enable */
    using DCMIPP_P2IER_FRAMEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No interrupt generation (value: 0)
     *          - B_0x1: An interrupt is generated after the full capture of a cropped frame (value: 1)
     */
        /** @brief No interrupt generation */
    constexpr std::uint32_t DCMIPP_P2IER_FRAMEIE_B_0x0 = 0;
        /** @brief An interrupt is generated after the full capture of a cropped frame */
    constexpr std::uint32_t DCMIPP_P2IER_FRAMEIE_B_0x1 = 1;

    /** @brief VSYNC interrupt enable */
    using DCMIPP_P2IER_VSYNCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No interrupt generation (value: 0)
     *          - B_0x1: An interrupt is generated on each VSYNC (captured or not) (value: 1)
     */
        /** @brief No interrupt generation */
    constexpr std::uint32_t DCMIPP_P2IER_VSYNCIE_B_0x0 = 0;
        /** @brief An interrupt is generated on each VSYNC (captured or not) */
    constexpr std::uint32_t DCMIPP_P2IER_VSYNCIE_B_0x1 = 1;

    /** @brief Overrun interrupt enable */
    using DCMIPP_P2IER_OVRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No interrupt generation (value: 0)
     *          - B_0x1: An interrupt is generated if the AXI master is unable to transfer the last data before new data (32-bit) are received (value: 1)
     */
        /** @brief No interrupt generation */
    constexpr std::uint32_t DCMIPP_P2IER_OVRIE_B_0x0 = 0;
        /** @brief An interrupt is generated if the AXI master is unable to transfer the last data before new data (32-bit) are received */
    constexpr std::uint32_t DCMIPP_P2IER_OVRIE_B_0x1 = 1;

    /** @brief DCMIPP Pipe2 status register */
    using DCMIPP_P2SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xDF8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Multi-line capture completed raw interrupt status */
    using DCMIPP_P2SR_LINEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame capture completed raw interrupt status */
    using DCMIPP_P2SR_FRAMEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No capture or ongoing capture (value: 0)
     *          - B_0x1: All data of a frame have been captured (value: 1)
     */
        /** @brief No capture or ongoing capture */
    constexpr std::uint32_t DCMIPP_P2SR_FRAMEF_B_0x0 = 0;
        /** @brief All data of a frame have been captured */
    constexpr std::uint32_t DCMIPP_P2SR_FRAMEF_B_0x1 = 1;

    /** @brief VSYNC raw interrupt status */
    using DCMIPP_P2SR_VSYNCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Overrun raw interrupt status */
    using DCMIPP_P2SR_OVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No data buffer overrun occurred (value: 0)
     *          - B_0x1: A data buffer overrun occurred and data of this frame are corrupted (value: 1)
     */
        /** @brief No data buffer overrun occurred */
    constexpr std::uint32_t DCMIPP_P2SR_OVRF_B_0x0 = 0;
        /** @brief A data buffer overrun occurred and data of this frame are corrupted */
    constexpr std::uint32_t DCMIPP_P2SR_OVRF_B_0x1 = 1;

    /** @brief Last line LSB bit, sampled at frame capture complete event. */
    using DCMIPP_P2SR_LSTLINE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Last frame LSB bit, sampled at frame capture complete event. The information is extracted from the frame data number which can be delivered by the camera through the CSI2 interface. */
    using DCMIPP_P2SR_LSTFRM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Capture immediate status */
    using DCMIPP_P2SR_CPTACT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Capture currently inactive (value: 0)
     *          - B_0x1: Capture currently active (value: 1)
     */
        /** @brief Capture currently inactive */
    constexpr std::uint32_t DCMIPP_P2SR_CPTACT_B_0x0 = 0;
        /** @brief Capture currently active */
    constexpr std::uint32_t DCMIPP_P2SR_CPTACT_B_0x1 = 1;

    /** @brief DCMIPP Pipe2 interrupt clear register */
    using DCMIPP_P2FCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xDFC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Multi-line capture complete interrupt status clear */
    using DCMIPP_P2FCR_CLINEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame capture complete interrupt status clear */
    using DCMIPP_P2FCR_CFRAMEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vertical synchronization interrupt status clear */
    using DCMIPP_P2FCR_CVSYNCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Overrun interrupt status clear */
    using DCMIPP_P2FCR_COVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe2 current flow selection configuration register */
    using DCMIPP_P2CFSCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xE04, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current data type ID */
    using DCMIPP_P2CFSCR_DTIDA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current flow selection mode */
    using DCMIPP_P2CFSCR_VC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current force data type format */
    using DCMIPP_P2CFSCR_FDTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current force data type format enable */
    using DCMIPP_P2CFSCR_FDTFEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable force data type format. The data type format used by the pipe is the one defined into DTIDx (value: 0)
     *          - B_0x1: Enable force data type format. When data type DTIDA is detected by the pipe, the real pixel format considering by the pipe is the one set into the FDTF[5:0] bit field instead of the physical one received by the CSI2 host. (value: 1)
     */
        /** @brief Disable force data type format. The data type format used by the pipe is the one defined into DTIDx */
    constexpr std::uint32_t DCMIPP_P2CFSCR_FDTFEN_B_0x0 = 0;
        /** @brief Enable force data type format. When data type DTIDA is detected by the pipe, the real pixel format considering by the pipe is the one set into the FDTF[5:0] bit field instead of the physical one received by the CSI2 host. */
    constexpr std::uint32_t DCMIPP_P2CFSCR_FDTFEN_B_0x1 = 1;

    /** @brief Current activation of PipeN */
    using DCMIPP_P2CFSCR_PIPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Pipe disabled (value: 0)
     *          - B_0x1: Pipe enabled, can start capturing with CPTMODE, CPTREQ, CPTACK. (value: 1)
     */
        /** @brief Pipe disabled */
    constexpr std::uint32_t DCMIPP_P2CFSCR_PIPEN_B_0x0 = 0;
        /** @brief Pipe enabled, can start capturing with CPTMODE, CPTREQ, CPTACK. */
    constexpr std::uint32_t DCMIPP_P2CFSCR_PIPEN_B_0x1 = 1;

    /** @brief DCMIPP Pipex current flow control configuration register */
    using DCMIPP_P2CFCTCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF00, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame capture rate control */
    using DCMIPP_P2CFCTCR_FRATE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: All frames are captured (value: 0)
     *          - B_0x1: One out of two frames captured (50% bandwidth reduction) (value: 1)
     *          - B_0x2: One out of four frames captured (75% bandwidth reduction) (value: 2)
     *          - B_0x3: One out of eight frames captured (87% bandwidth reduction) (value: 3)
     */
        /** @brief All frames are captured */
    constexpr std::uint32_t DCMIPP_P2CFCTCR_FRATE_B_0x0 = 0;
        /** @brief One out of two frames captured (50% bandwidth reduction) */
    constexpr std::uint32_t DCMIPP_P2CFCTCR_FRATE_B_0x1 = 1;
        /** @brief One out of four frames captured (75% bandwidth reduction) */
    constexpr std::uint32_t DCMIPP_P2CFCTCR_FRATE_B_0x2 = 2;
        /** @brief One out of eight frames captured (87% bandwidth reduction) */
    constexpr std::uint32_t DCMIPP_P2CFCTCR_FRATE_B_0x3 = 3;

    /** @brief Capture mode */
    using DCMIPP_P2CFCTCR_CPTMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Continuous grab mode - Received data are transferred into the destination memory through the AXI master. (value: 0)
     *          - B_0x1: Snapshot mode (single frame) - Once activated, the interface waits for the start of frame and then transfers a single frame through the AXI master. At the end of the frame, the CPTACT bit is automatically reset. (value: 1)
     */
        /** @brief Continuous grab mode - Received data are transferred into the destination memory through the AXI master. */
    constexpr std::uint32_t DCMIPP_P2CFCTCR_CPTMODE_B_0x0 = 0;
        /** @brief Snapshot mode (single frame) - Once activated, the interface waits for the start of frame and then transfers a single frame through the AXI master. At the end of the frame, the CPTACT bit is automatically reset. */
    constexpr std::uint32_t DCMIPP_P2CFCTCR_CPTMODE_B_0x1 = 1;

    /** @brief Capture requested */
    using DCMIPP_P2CFCTCR_CPTREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Capture not requested for next frame. (value: 0)
     *          - B_0x1: Capture requested for next frame. (value: 1)
     */
        /** @brief Capture not requested for next frame. */
    constexpr std::uint32_t DCMIPP_P2CFCTCR_CPTREQ_B_0x0 = 0;
        /** @brief Capture requested for next frame. */
    constexpr std::uint32_t DCMIPP_P2CFCTCR_CPTREQ_B_0x1 = 1;

    /** @brief DCMIPP Pipex current crop window start register */
    using DCMIPP_P2CCRSTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF04, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current horizontal start, from 0 to 4094 pixels wide */
    using DCMIPP_P2CCRSTR_HSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current vertical start, from 0 to 4094 pixels high */
    using DCMIPP_P2CCRSTR_VSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipex current crop window size register */
    using DCMIPP_P2CCRSZR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF08, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current horizontal size, from 0 to 4094 pixels wide */
    using DCMIPP_P2CCRSZR_HSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current vertical size, from 0 to 4094 pixels high */
    using DCMIPP_P2CCRSZR_VSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current ENABLE bit value. */
    using DCMIPP_P2CCRSZR_ENABLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bypass, all pixels are transmitted through (no need to set any start and size values) (value: 0)
     *          - B_0x1: Enable, only the rectangle defined by VSIZE, HSIZE, VSTART, HSTART is transmitted. (value: 1)
     */
        /** @brief Bypass, all pixels are transmitted through (no need to set any start and size values) */
    constexpr std::uint32_t DCMIPP_P2CCRSZR_ENABLE_B_0x0 = 0;
        /** @brief Enable, only the rectangle defined by VSIZE, HSIZE, VSTART, HSTART is transmitted. */
    constexpr std::uint32_t DCMIPP_P2CCRSZR_ENABLE_B_0x1 = 1;

    /** @brief DCMIPP Pipex current decimation register */
    using DCMIPP_P2CDCCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF0C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief None */
    using DCMIPP_P2CDCCR_ENABLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bypass: decimation is not active, all pixels are transmitted (value: 0)
     *          - B_0x1: Enable: one pixel every 1, 2, 4 or 8, in H and V is transmitted, following HDEC and VDEC (value: 1)
     */
        /** @brief Bypass: decimation is not active, all pixels are transmitted */
    constexpr std::uint32_t DCMIPP_P2CDCCR_ENABLE_B_0x0 = 0;
        /** @brief Enable: one pixel every 1, 2, 4 or 8, in H and V is transmitted, following HDEC and VDEC */
    constexpr std::uint32_t DCMIPP_P2CDCCR_ENABLE_B_0x1 = 1;

    /** @brief Horizontal decimation ratio */
    using DCMIPP_P2CDCCR_HDEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: All pixels are transmitted, no horizontal decimation (value: 0)
     *          - B_0x1: One line out of two transmitted (value: 1)
     */
        /** @brief All pixels are transmitted, no horizontal decimation */
    constexpr std::uint32_t DCMIPP_P2CDCCR_HDEC_B_0x0 = 0;
        /** @brief One line out of two transmitted */
    constexpr std::uint32_t DCMIPP_P2CDCCR_HDEC_B_0x1 = 1;

    /** @brief Vertical decimation ratio */
    using DCMIPP_P2CDCCR_VDEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: All pixels are transmitted, no vertical decimation (value: 0)
     *          - B_0x1: One line out of two transmitted (value: 1)
     */
        /** @brief All pixels are transmitted, no vertical decimation */
    constexpr std::uint32_t DCMIPP_P2CDCCR_VDEC_B_0x0 = 0;
        /** @brief One line out of two transmitted */
    constexpr std::uint32_t DCMIPP_P2CDCCR_VDEC_B_0x1 = 1;

    /** @brief DCMIPP Pipex current downsize configuration register */
    using DCMIPP_P2CDSCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current horizontal division factor, from 128 (8x) to 1023 (1x) */
    using DCMIPP_P2CDSCR_HDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current vertical division factor, from 128 (8x) to 1023 (1x) */
    using DCMIPP_P2CDSCR_VDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current value of bit ENABLE */
    using DCMIPP_P2CDSCR_ENABLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Down scaler is bypassed (value: 0)
     *          - B_0x1: Down scaler is enabled (value: 1)
     */
        /** @brief Down scaler is bypassed */
    constexpr std::uint32_t DCMIPP_P2CDSCR_ENABLE_B_0x0 = 0;
        /** @brief Down scaler is enabled */
    constexpr std::uint32_t DCMIPP_P2CDSCR_ENABLE_B_0x1 = 1;

    /** @brief DCMIPP Pipex current downsize ratio register */
    using DCMIPP_P2CDSRTIOR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current horizontal ratio, from 8192 (1x) to 65535 (8x) */
    using DCMIPP_P2CDSRTIOR_HRATIO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current vertical ratio, from 8192 (1x) to 65535 (8x) */
    using DCMIPP_P2CDSRTIOR_VRATIO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipex current downsize destination size register */
    using DCMIPP_P2CDSSZR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current horizontal size, from 0 to 4094 pixels wide */
    using DCMIPP_P2CDSSZR_HSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current vertical size, from 0 to 4094 pixels high */
    using DCMIPP_P2CDSSZR_VSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipex current common ROI configuration register */
    using DCMIPP_P2CCMRICR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current region of interest line size width */
    using DCMIPP_P2CCMRICR_ROILSZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Line width 1 pixel (value: 0)
     *          - B_0x1: Line width 2 pixels (value: 1)
     *          - B_0x2: Line width 4 pixels (value: 2)
     *          - B_0x3: Line width 8 pixels (value: 3)
     */
        /** @brief Line width 1 pixel */
    constexpr std::uint32_t DCMIPP_P2CCMRICR_ROILSZ_B_0x0 = 0;
        /** @brief Line width 2 pixels */
    constexpr std::uint32_t DCMIPP_P2CCMRICR_ROILSZ_B_0x1 = 1;
        /** @brief Line width 4 pixels */
    constexpr std::uint32_t DCMIPP_P2CCMRICR_ROILSZ_B_0x2 = 2;
        /** @brief Line width 8 pixels */
    constexpr std::uint32_t DCMIPP_P2CCMRICR_ROILSZ_B_0x3 = 3;

    /** @brief Current region of interest 1 enable */
    using DCMIPP_P2CCMRICR_ROI1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable ROI (value: 0)
     *          - B_0x1: Enable ROI (value: 1)
     */
        /** @brief Disable ROI */
    constexpr std::uint32_t DCMIPP_P2CCMRICR_ROI1EN_B_0x0 = 0;
        /** @brief Enable ROI */
    constexpr std::uint32_t DCMIPP_P2CCMRICR_ROI1EN_B_0x1 = 1;

    /** @brief Current region of interest 2 enable */
    using DCMIPP_P2CCMRICR_ROI2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable ROI (value: 0)
     *          - B_0x1: Enable ROI (value: 1)
     */
        /** @brief Disable ROI */
    constexpr std::uint32_t DCMIPP_P2CCMRICR_ROI2EN_B_0x0 = 0;
        /** @brief Enable ROI */
    constexpr std::uint32_t DCMIPP_P2CCMRICR_ROI2EN_B_0x1 = 1;

    /** @brief Current region of interest 3 enable */
    using DCMIPP_P2CCMRICR_ROI3EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable ROI (value: 0)
     *          - B_0x1: Enable ROI (value: 1)
     */
        /** @brief Disable ROI */
    constexpr std::uint32_t DCMIPP_P2CCMRICR_ROI3EN_B_0x0 = 0;
        /** @brief Enable ROI */
    constexpr std::uint32_t DCMIPP_P2CCMRICR_ROI3EN_B_0x1 = 1;

    /** @brief Current region of interest 4 enable */
    using DCMIPP_P2CCMRICR_ROI4EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable ROI (value: 0)
     *          - B_0x1: Enable ROI (value: 1)
     */
        /** @brief Disable ROI */
    constexpr std::uint32_t DCMIPP_P2CCMRICR_ROI4EN_B_0x0 = 0;
        /** @brief Enable ROI */
    constexpr std::uint32_t DCMIPP_P2CCMRICR_ROI4EN_B_0x1 = 1;

    /** @brief Current region of interest 5 enable */
    using DCMIPP_P2CCMRICR_ROI5EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable ROI (value: 0)
     *          - B_0x1: Enable ROI (value: 1)
     */
        /** @brief Disable ROI */
    constexpr std::uint32_t DCMIPP_P2CCMRICR_ROI5EN_B_0x0 = 0;
        /** @brief Enable ROI */
    constexpr std::uint32_t DCMIPP_P2CCMRICR_ROI5EN_B_0x1 = 1;

    /** @brief Current region of interest 6 enable */
    using DCMIPP_P2CCMRICR_ROI6EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable ROI (value: 0)
     *          - B_0x1: Enable ROI (value: 1)
     */
        /** @brief Disable ROI */
    constexpr std::uint32_t DCMIPP_P2CCMRICR_ROI6EN_B_0x0 = 0;
        /** @brief Enable ROI */
    constexpr std::uint32_t DCMIPP_P2CCMRICR_ROI6EN_B_0x1 = 1;

    /** @brief Current region of interest 7 enable */
    using DCMIPP_P2CCMRICR_ROI7EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable ROI (value: 0)
     *          - B_0x1: Enable ROI (value: 1)
     */
        /** @brief Disable ROI */
    constexpr std::uint32_t DCMIPP_P2CCMRICR_ROI7EN_B_0x0 = 0;
        /** @brief Enable ROI */
    constexpr std::uint32_t DCMIPP_P2CCMRICR_ROI7EN_B_0x1 = 1;

    /** @brief Current region of interest 8 enable */
    using DCMIPP_P2CCMRICR_ROI8EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable ROI (value: 0)
     *          - B_0x1: Enable ROI (value: 1)
     */
        /** @brief Disable ROI */
    constexpr std::uint32_t DCMIPP_P2CCMRICR_ROI8EN_B_0x0 = 0;
        /** @brief Enable ROI */
    constexpr std::uint32_t DCMIPP_P2CCMRICR_ROI8EN_B_0x1 = 1;

    /** @brief DCMIPP Pipe2 current ROI1 configuration register 1 */
    using DCMIPP_P2CRI1CR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current horizontal start, from 0 to 4094 pixels wide */
    using DCMIPP_P2CRI1CR1_HSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current color line blue */
    using DCMIPP_P2CRI1CR1_CLB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current color line green */
    using DCMIPP_P2CRI1CR1_CLG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current vertical start, from 0 to 4094 pixels high */
    using DCMIPP_P2CRI1CR1_VSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current color line red */
    using DCMIPP_P2CRI1CR1_CLR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe2 current ROI1 configuration register 2 */
    using DCMIPP_P2CRI1CR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current horizontal size, from 0 to 4094 pixels wide */
    using DCMIPP_P2CRI1CR2_HSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current vertical size, from 0 to 4094 pixels high */
    using DCMIPP_P2CRI1CR2_VSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe2 current ROI2 configuration register 1 */
    using DCMIPP_P2CRI2CR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current horizontal start, from 0 to 4094 pixels wide */
    using DCMIPP_P2CRI2CR1_HSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current color line blue */
    using DCMIPP_P2CRI2CR1_CLB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current color line green */
    using DCMIPP_P2CRI2CR1_CLG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current vertical start, from 0 to 4094 pixels high */
    using DCMIPP_P2CRI2CR1_VSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current color line red */
    using DCMIPP_P2CRI2CR1_CLR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe2 current ROI2 configuration register 2 */
    using DCMIPP_P2CRI2CR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current horizontal size, from 0 to 4094 pixels wide */
    using DCMIPP_P2CRI2CR2_HSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current vertical size, from 0 to 4094 pixels high */
    using DCMIPP_P2CRI2CR2_VSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe2 current ROI3 configuration register 1 */
    using DCMIPP_P2CRI3CR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current horizontal start, from 0 to 4094 pixels wide */
    using DCMIPP_P2CRI3CR1_HSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current color line blue */
    using DCMIPP_P2CRI3CR1_CLB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current color line green */
    using DCMIPP_P2CRI3CR1_CLG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current vertical start, from 0 to 4094 pixels high */
    using DCMIPP_P2CRI3CR1_VSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current color line red */
    using DCMIPP_P2CRI3CR1_CLR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe2 current ROI3 configuration register 2 */
    using DCMIPP_P2CRI3CR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current horizontal size, from 0 to 4094 pixels wide */
    using DCMIPP_P2CRI3CR2_HSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current vertical size, from 0 to 4094 pixels high */
    using DCMIPP_P2CRI3CR2_VSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe2 current ROI4 configuration register 1 */
    using DCMIPP_P2CRI4CR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current horizontal start, from 0 to 4094 pixels wide */
    using DCMIPP_P2CRI4CR1_HSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current color line blue */
    using DCMIPP_P2CRI4CR1_CLB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current color line green */
    using DCMIPP_P2CRI4CR1_CLG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current vertical start, from 0 to 4094 pixels high */
    using DCMIPP_P2CRI4CR1_VSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current color line red */
    using DCMIPP_P2CRI4CR1_CLR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe2 current ROI4 configuration register 2 */
    using DCMIPP_P2CRI4CR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current horizontal size, from 0 to 4094 pixels wide */
    using DCMIPP_P2CRI4CR2_HSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current vertical size, from 0 to 4094 pixels high */
    using DCMIPP_P2CRI4CR2_VSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe2 current ROI5 configuration register 1 */
    using DCMIPP_P2CRI5CR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current horizontal start, from 0 to 4094 pixels wide */
    using DCMIPP_P2CRI5CR1_HSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current color line blue */
    using DCMIPP_P2CRI5CR1_CLB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current color line green */
    using DCMIPP_P2CRI5CR1_CLG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current vertical start, from 0 to 4094 pixels high */
    using DCMIPP_P2CRI5CR1_VSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current color line red */
    using DCMIPP_P2CRI5CR1_CLR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe2 current ROI5 configuration register 2 */
    using DCMIPP_P2CRI5CR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current horizontal size, from 0 to 4094 pixels wide */
    using DCMIPP_P2CRI5CR2_HSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current vertical size, from 0 to 4094 pixels high */
    using DCMIPP_P2CRI5CR2_VSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe2 current ROI6 configuration register 1 */
    using DCMIPP_P2CRI6CR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF4C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current horizontal start, from 0 to 4094 pixels wide */
    using DCMIPP_P2CRI6CR1_HSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current color line blue */
    using DCMIPP_P2CRI6CR1_CLB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current color line green */
    using DCMIPP_P2CRI6CR1_CLG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current vertical start, from 0 to 4094 pixels high */
    using DCMIPP_P2CRI6CR1_VSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current color line red */
    using DCMIPP_P2CRI6CR1_CLR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe2 current ROI6 configuration register 2 */
    using DCMIPP_P2CRI6CR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current horizontal size, from 0 to 4094 pixels wide */
    using DCMIPP_P2CRI6CR2_HSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current vertical size, from 0 to 4094 pixels high */
    using DCMIPP_P2CRI6CR2_VSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe2 current ROI7 configuration register 1 */
    using DCMIPP_P2CRI7CR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current horizontal start, from 0 to 4094 pixels wide */
    using DCMIPP_P2CRI7CR1_HSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current color line blue */
    using DCMIPP_P2CRI7CR1_CLB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current color line green */
    using DCMIPP_P2CRI7CR1_CLG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current vertical start, from 0 to 4094 pixels high */
    using DCMIPP_P2CRI7CR1_VSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current color line red */
    using DCMIPP_P2CRI7CR1_CLR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe2 current ROI7 configuration register 2 */
    using DCMIPP_P2CRI7CR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF58, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current horizontal size, from 0 to 4094 pixels wide */
    using DCMIPP_P2CRI7CR2_HSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current vertical size, from 0 to 4094 pixels high */
    using DCMIPP_P2CRI7CR2_VSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe2 current ROI8 configuration register 1 */
    using DCMIPP_P2CRI8CR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF5C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current horizontal start, from 0 to 4094 pixels wide */
    using DCMIPP_P2CRI8CR1_HSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current color line blue */
    using DCMIPP_P2CRI8CR1_CLB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current color line green */
    using DCMIPP_P2CRI8CR1_CLG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current vertical start, from 0 to 4094 pixels high */
    using DCMIPP_P2CRI8CR1_VSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current color line red */
    using DCMIPP_P2CRI8CR1_CLR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe2 current ROI8 configuration register 2 */
    using DCMIPP_P2CRI8CR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current horizontal size, from 0 to 4094 pixels wide */
    using DCMIPP_P2CRI8CR2_HSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current vertical size, from 0 to 4094 pixels high */
    using DCMIPP_P2CRI8CR2_VSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe2 current pixel packer configuration register */
    using DCMIPP_P2CPPCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFC0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Memory format (only coplanar formats are supported in Pipe2) */
    using DCMIPP_P2CPPCR_FORMAT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RG/B888 or YUV444 1-buffer (value: 0)
     *          - B_0x1: RGB565 1-buffer (value: 1)
     *          - B_0x2: ARGB8888 (value: 2)
     *          - B_0x3: RGBA8888 (value: 3)
     *          - B_0x4: monochrome Y8 or G8 1-buffer (value: 4)
     *          - B_0x5: YUV444 1-buffer (FOURCC = AYUV) (value: 5)
     *          - B_0x6: YUV422 1-buffer (FOURCC = YUYV) (value: 6)
     */
        /** @brief RG/B888 or YUV444 1-buffer */
    constexpr std::uint32_t DCMIPP_P2CPPCR_FORMAT_B_0x0 = 0;
        /** @brief RGB565 1-buffer */
    constexpr std::uint32_t DCMIPP_P2CPPCR_FORMAT_B_0x1 = 1;
        /** @brief ARGB8888 */
    constexpr std::uint32_t DCMIPP_P2CPPCR_FORMAT_B_0x2 = 2;
        /** @brief RGBA8888 */
    constexpr std::uint32_t DCMIPP_P2CPPCR_FORMAT_B_0x3 = 3;
        /** @brief monochrome Y8 or G8 1-buffer */
    constexpr std::uint32_t DCMIPP_P2CPPCR_FORMAT_B_0x4 = 4;
        /** @brief YUV444 1-buffer (FOURCC = AYUV) */
    constexpr std::uint32_t DCMIPP_P2CPPCR_FORMAT_B_0x5 = 5;
        /** @brief YUV422 1-buffer (FOURCC = YUYV) */
    constexpr std::uint32_t DCMIPP_P2CPPCR_FORMAT_B_0x6 = 6;

    /** @brief Swaps R-vs-B components if RGB, and if YUV, swaps U-vs-V components */
    using DCMIPP_P2CPPCR_SWAPRB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No swap of R-vs-B (U-vs-V) (value: 0)
     *          - B_0x1: Swap active. (value: 1)
     */
        /** @brief No swap of R-vs-B (U-vs-V) */
    constexpr std::uint32_t DCMIPP_P2CPPCR_SWAPRB_B_0x0 = 0;
        /** @brief Swap active. */
    constexpr std::uint32_t DCMIPP_P2CPPCR_SWAPRB_B_0x1 = 1;

    /** @brief Amount of capture completed lines for LINE event and interrupt */
    using DCMIPP_P2CPPCR_LINEMULT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event after every line (value: 0)
     *          - B_0x1: Event after two lines (value: 1)
     *          - B_0x2: Event after four lines (value: 2)
     *          - B_0x3: Event after eight lines (value: 3)
     *          - B_0x4: Event after sixteen lines (value: 4)
     *          - B_0x5: Event after 32 lines (value: 5)
     *          - B_0x6: Event after 64 lines (value: 6)
     *          - B_0x7: Event after 128 lines (value: 7)
     */
        /** @brief Event after every line */
    constexpr std::uint32_t DCMIPP_P2CPPCR_LINEMULT_B_0x0 = 0;
        /** @brief Event after two lines */
    constexpr std::uint32_t DCMIPP_P2CPPCR_LINEMULT_B_0x1 = 1;
        /** @brief Event after four lines */
    constexpr std::uint32_t DCMIPP_P2CPPCR_LINEMULT_B_0x2 = 2;
        /** @brief Event after eight lines */
    constexpr std::uint32_t DCMIPP_P2CPPCR_LINEMULT_B_0x3 = 3;
        /** @brief Event after sixteen lines */
    constexpr std::uint32_t DCMIPP_P2CPPCR_LINEMULT_B_0x4 = 4;
        /** @brief Event after 32 lines */
    constexpr std::uint32_t DCMIPP_P2CPPCR_LINEMULT_B_0x5 = 5;
        /** @brief Event after 64 lines */
    constexpr std::uint32_t DCMIPP_P2CPPCR_LINEMULT_B_0x6 = 6;
        /** @brief Event after 128 lines */
    constexpr std::uint32_t DCMIPP_P2CPPCR_LINEMULT_B_0x7 = 7;

    /** @brief Double buffer mode */
    using DCMIPP_P2CPPCR_DBM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No double buffer mode activated. Pipe2 is always dump to memory address set by DCMIPP_P2PPM0AR1 (value: 0)
     *          - B_0x1: Double buffer mode activated. Dump address location switches from DCMIPP_P2PPM0AR1 register to DCMIPP_P2PPM0AR2 register alternatively on each frame (value: 1)
     */
        /** @brief No double buffer mode activated. Pipe2 is always dump to memory address set by DCMIPP_P2PPM0AR1 */
    constexpr std::uint32_t DCMIPP_P2CPPCR_DBM_B_0x0 = 0;
        /** @brief Double buffer mode activated. Dump address location switches from DCMIPP_P2PPM0AR1 register to DCMIPP_P2PPM0AR2 register alternatively on each frame */
    constexpr std::uint32_t DCMIPP_P2CPPCR_DBM_B_0x1 = 1;

    /** @brief Line multi address wrapping modulo */
    using DCMIPP_P2CPPCR_LMAWM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wraps address after every line (value: 0)
     *          - B_0x1: Wraps address after two lines (value: 1)
     *          - B_0x2: Wraps address after four lines (value: 2)
     *          - B_0x3: Wraps address after eight lines (value: 3)
     *          - B_0x4: Wraps address after sixteen lines (value: 4)
     *          - B_0x5: Wraps address after 32 lines (value: 5)
     *          - B_0x6: Wraps address after 64 lines (value: 6)
     *          - B_0x7: Wraps address after 128 lines (value: 7)
     */
        /** @brief Wraps address after every line */
    constexpr std::uint32_t DCMIPP_P2CPPCR_LMAWM_B_0x0 = 0;
        /** @brief Wraps address after two lines */
    constexpr std::uint32_t DCMIPP_P2CPPCR_LMAWM_B_0x1 = 1;
        /** @brief Wraps address after four lines */
    constexpr std::uint32_t DCMIPP_P2CPPCR_LMAWM_B_0x2 = 2;
        /** @brief Wraps address after eight lines */
    constexpr std::uint32_t DCMIPP_P2CPPCR_LMAWM_B_0x3 = 3;
        /** @brief Wraps address after sixteen lines */
    constexpr std::uint32_t DCMIPP_P2CPPCR_LMAWM_B_0x4 = 4;
        /** @brief Wraps address after 32 lines */
    constexpr std::uint32_t DCMIPP_P2CPPCR_LMAWM_B_0x5 = 5;
        /** @brief Wraps address after 64 lines */
    constexpr std::uint32_t DCMIPP_P2CPPCR_LMAWM_B_0x6 = 6;
        /** @brief Wraps address after 128 lines */
    constexpr std::uint32_t DCMIPP_P2CPPCR_LMAWM_B_0x7 = 7;

    /** @brief Line multi address wrapping enable bit */
    using DCMIPP_P2CPPCR_LMAWE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Line multi address wrapping disabled. (value: 0)
     *          - B_0x1: Line multi address wrapping enabled. (value: 1)
     */
        /** @brief Line multi address wrapping disabled. */
    constexpr std::uint32_t DCMIPP_P2CPPCR_LMAWE_B_0x0 = 0;
        /** @brief Line multi address wrapping enabled. */
    constexpr std::uint32_t DCMIPP_P2CPPCR_LMAWE_B_0x1 = 1;

    /** @brief DCMIPP Pipe2 current pixel packer Memory0 address register 1 */
    using DCMIPP_P2CPPM0AR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFC4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Memory0 address */
    using DCMIPP_P2CPPM0AR1_M0A = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe2 current pixel packer Memory0 address register 2 */
    using DCMIPP_P2CPPM0AR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFC8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Memory0 address */
    using DCMIPP_P2CPPM0AR2_M0A = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
