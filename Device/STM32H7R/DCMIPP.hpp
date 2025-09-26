/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32H7R_DCMIPP_HPP
#define EMBEDDED_PP_STM32H7R_DCMIPP_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Digital camera interface pixel pipeline */
namespace STM32H7R::DCMIPP {

    /** @brief DCMIPP IP-Plug global register 1 */
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

    /** @brief Quality of service Set of functions enabling to build and configure an architecture able to meet bandwidth and latency requirements. */
    using DCMIPP_IPGR1_QOS_MODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP IP-Plug global register 2 */
    using DCMIPP_IPGR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Request to lock the IP-Plug, to allow reconfiguration. PSTART must be reset to 0 after configuration is completed, to restart the IP-Plug. */
    using DCMIPP_IPGR2_PSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No lock requested, IP-Plug runs on demand by background HW. (value: 0)
     *          - B_0x1: Lock requested: IP-Plug freezes shortly (see IDLE bit when lock is active). (value: 1)
     */
        /** @brief No lock requested, IP-Plug runs on demand by background HW. */
    constexpr std::uint32_t DCMIPP_IPGR2_PSTART_B_0x0 = 0;
        /** @brief Lock requested: IP-Plug freezes shortly (see IDLE bit when lock is active). */
    constexpr std::uint32_t DCMIPP_IPGR2_PSTART_B_0x1 = 1;

    /** @brief DCMIPP IP-Plug global register 3 */
    using DCMIPP_IPGR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Status of IP-Plug IDLE is set some time after a request by setting PSTART at 1, and reset by resetting PSTART at 0. */
    using DCMIPP_IPGR3_IDLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IP-Plug is running (on demand by background HW) (value: 0)
     *          - B_0x1: IP-Plug is currently locked and can be reconfigured (value: 1)
     */
        /** @brief IP-Plug is running (on demand by background HW) */
    constexpr std::uint32_t DCMIPP_IPGR3_IDLE_B_0x0 = 0;
        /** @brief IP-Plug is currently locked and can be reconfigured */
    constexpr std::uint32_t DCMIPP_IPGR3_IDLE_B_0x1 = 1;

    /** @brief DCMIPP IP-Plug identification register */
    using DCMIPP_IPGR8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Division identifier (0x14) */
    using DCMIPP_IPGR8_DID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Revision identifier (0x03) */
    using DCMIPP_IPGR8_REVID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Architecture identifier (0x04) */
    using DCMIPP_IPGR8_ARCHIID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IP identifier (0xAA) */
    using DCMIPP_IPGR8_IPPID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP IP-Plug Clientx register 1 */
    using DCMIPP_IPC1R1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Burst size as power of 2 of 8-byte units Other values: Reserved */
    using DCMIPP_IPC1R1_TRAFFIC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 8 bytes (value: 0)
     *          - B_0x1: 16 bytes (value: 1)
     */
        /** @brief 8 bytes */
    constexpr std::uint32_t DCMIPP_IPC1R1_TRAFFIC_B_0x0 = 0;
        /** @brief 16 bytes */
    constexpr std::uint32_t DCMIPP_IPC1R1_TRAFFIC_B_0x1 = 1;

    /** @brief Maximum outstanding transactions ... Other values are not allowed. */
    using DCMIPP_IPC1R1_OTR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disabled. No outstanding transaction limitation (except via FIFO size) (value: 0)
     *          - B_0x1: Maximum two outstanding transactions ongoing. (value: 1)
     */
        /** @brief Disabled. No outstanding transaction limitation (except via FIFO size) */
    constexpr std::uint32_t DCMIPP_IPC1R1_OTR_B_0x0 = 0;
        /** @brief Maximum two outstanding transactions ongoing. */
    constexpr std::uint32_t DCMIPP_IPC1R1_OTR_B_0x1 = 1;

    /** @brief DCMIPP IP-Plug Clientx register 2 */
    using DCMIPP_IPC1R2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Non-user, must be kept at reset value. */
    using DCMIPP_IPC1R2_SVCMAPPING = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Ratio for WLRU[3:0] arbitration A client gets a portion of the total bandwidth = Ratio(client) / Sum(all ratio) ... */
    using DCMIPP_IPC1R2_WLRU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Ratio part = 1 (value: 0)
     *          - B_0x1: Ratio part = 2 (value: 1)
     */
        /** @brief Ratio part = 1 */
    constexpr std::uint32_t DCMIPP_IPC1R2_WLRU_B_0x0 = 0;
        /** @brief Ratio part = 2 */
    constexpr std::uint32_t DCMIPP_IPC1R2_WLRU_B_0x1 = 1;

    /** @brief DCMIPP IP-Plug Clientx register 3 */
    using DCMIPP_IPC1R3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Start word (AXI width = 64 bits) of the FIFO of Clientx. */
    using DCMIPP_IPC1R3_DPREGSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End word (AXI width = 64 bits) of the FIFO of Clientx. The addressed word is included in the FIFO, so that next DPREGSTART is DPREGEND + 1. */
    using DCMIPP_IPC1R3_DPREGEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP parallel interface control register */
    using DCMIPP_PRCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x104, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Embedded synchronization select Valid only for 8-bit parallel data. HSPOL/VSPOL are ignored when this bit is set. */
    using DCMIPP_PRCR_ESS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Hardware synchronization data capture (frame/line start/stop) is synchronized with the HSYNC/VSYNC signals. (value: 0)
     *          - B_0x1: Embedded synchronization data capture is synchronized with synchronization codes embedded in the data flow. (value: 1)
     */
        /** @brief Hardware synchronization data capture (frame/line start/stop) is synchronized with the HSYNC/VSYNC signals. */
    constexpr std::uint32_t DCMIPP_PRCR_ESS_B_0x0 = 0;
        /** @brief Embedded synchronization data capture is synchronized with synchronization codes embedded in the data flow. */
    constexpr std::uint32_t DCMIPP_PRCR_ESS_B_0x1 = 1;

    /** @brief Pixel clock polarity This bit configures the capture edge of the pixel clock */
    using DCMIPP_PRCR_PCKPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling edge active (value: 0)
     *          - B_0x1: Rising edge active (value: 1)
     */
        /** @brief Falling edge active */
    constexpr std::uint32_t DCMIPP_PRCR_PCKPOL_B_0x0 = 0;
        /** @brief Rising edge active */
    constexpr std::uint32_t DCMIPP_PRCR_PCKPOL_B_0x1 = 1;

    /** @brief Horizontal synchronization polarity This bit indicates the level on the HSYNC pin when the data are not valid on the parallel interface. */
    using DCMIPP_PRCR_HSPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HSYNC active low (value: 0)
     *          - B_0x1: HSYNC active high (value: 1)
     */
        /** @brief HSYNC active low */
    constexpr std::uint32_t DCMIPP_PRCR_HSPOL_B_0x0 = 0;
        /** @brief HSYNC active high */
    constexpr std::uint32_t DCMIPP_PRCR_HSPOL_B_0x1 = 1;

    /** @brief Vertical synchronization polarity This bit indicates the level on the VSYNC pin when the data are not valid on the parallel interface. */
    using DCMIPP_PRCR_VSPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VSYNC active low (value: 0)
     *          - B_0x1: VSYNC active high (value: 1)
     */
        /** @brief VSYNC active low */
    constexpr std::uint32_t DCMIPP_PRCR_VSPOL_B_0x0 = 0;
        /** @brief VSYNC active high */
    constexpr std::uint32_t DCMIPP_PRCR_VSPOL_B_0x1 = 1;

    /** @brief Extended data mode Other values: Reserved. */
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

    /** @brief Parallel interface enable The parallel interface configuration registers must be correctly programmed before enabling this bit. */
    using DCMIPP_PRCR_ENABLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Parallel interface disabled to lower power consumption (value: 0)
     *          - B_0x1: Parallel interface enabled (value: 1)
     */
        /** @brief Parallel interface disabled to lower power consumption */
    constexpr std::uint32_t DCMIPP_PRCR_ENABLE_B_0x0 = 0;
        /** @brief Parallel interface enabled */
    constexpr std::uint32_t DCMIPP_PRCR_ENABLE_B_0x1 = 1;

    /** @brief Other values: data are captured and output as-is only through the data/dump pipeline (for example JPEG or byte input format). The monochrome Y input is inserted in the pipe as YUV pixels, with the U and V components set to neutral, to represent a grey color. */
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

    /** @brief Swap data (cycle 0 vs. cycle 1) for pixels received on two cycles The swap must not be activated by software for pixels received in one or three cycles. */
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
    /** @brief Frame start delimiter code This byte specifies the code of the frame start delimiter. The code consists of four bytes in the form of 0xFF, 0x00, 0x00, FSC. If FSC is programmed to 0xFF, no frame start delimiter is detected, but the first occurrence of LSC after an FEC code is interpreted as the start of frame delimiter. */
    using DCMIPP_PRESCR_FSC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Line start delimiter code This byte specifies the code of the line start delimiter. The code consists of four bytes in the form of 0xFF, 0x00, 0x00, LSC. */
    using DCMIPP_PRESCR_LSC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Line end delimiter code This byte specifies the code of the line end delimiter. The code consists of four bytes in the form of 0xFF, 0x00, 0x00, LEC. */
    using DCMIPP_PRESCR_LEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame end delimiter code This byte specifies the code of the frame end delimiter. The code consists of four bytes in the form of 0xFF, 0x00, 0x00, FEC. If FEC is programmed to 0xFF, all the unused codes (0xFF00 00XY) are interpreted as frame end delimiters. */
    using DCMIPP_PRESCR_FEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP parallel interface embedded synchronization unmask register */
    using DCMIPP_PRESUR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame start delimiter unmask This byte specifies the mask to be applied to the code of the frame start delimiter. */
    using DCMIPP_PRESUR_FSU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The corresponding bit in the FSC byte in DCMIPP_ESCR is masked while comparing the frame start delimiter with the received data (value: 0)
     *          - B_0x1: The corresponding bit in the FSC byte in DCMIPP_ESCR is compared while comparing the frame start delimiter with the received data (value: 1)
     */
        /** @brief The corresponding bit in the FSC byte in DCMIPP_ESCR is masked while comparing the frame start delimiter with the received data */
    constexpr std::uint32_t DCMIPP_PRESUR_FSU_B_0x0 = 0;
        /** @brief The corresponding bit in the FSC byte in DCMIPP_ESCR is compared while comparing the frame start delimiter with the received data */
    constexpr std::uint32_t DCMIPP_PRESUR_FSU_B_0x1 = 1;

    /** @brief Line start delimiter unmask This byte specifies the mask to be applied to the code of the line start delimiter. */
    using DCMIPP_PRESUR_LSU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The corresponding bit in the LSC byte in DCMIPP_ESCR is masked while comparing the line start delimiter with the received data (value: 0)
     *          - B_0x1: The corresponding bit in the LSC byte in DCMIPP_ESCR is compared while comparing the line start delimiter with the received data (value: 1)
     */
        /** @brief The corresponding bit in the LSC byte in DCMIPP_ESCR is masked while comparing the line start delimiter with the received data */
    constexpr std::uint32_t DCMIPP_PRESUR_LSU_B_0x0 = 0;
        /** @brief The corresponding bit in the LSC byte in DCMIPP_ESCR is compared while comparing the line start delimiter with the received data */
    constexpr std::uint32_t DCMIPP_PRESUR_LSU_B_0x1 = 1;

    /** @brief Line end delimiter unmask This byte specifies the mask to be applied to the code of the line end delimiter. */
    using DCMIPP_PRESUR_LEU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The corresponding bit in the LEC byte in DCMIPP_ESCR is masked while comparing the line end delimiter with the received data (value: 0)
     *          - B_0x1: The corresponding bit in the LEC byte in DCMIPP_ESCR is compared while comparing the line end delimiter with the received data (value: 1)
     */
        /** @brief The corresponding bit in the LEC byte in DCMIPP_ESCR is masked while comparing the line end delimiter with the received data */
    constexpr std::uint32_t DCMIPP_PRESUR_LEU_B_0x0 = 0;
        /** @brief The corresponding bit in the LEC byte in DCMIPP_ESCR is compared while comparing the line end delimiter with the received data */
    constexpr std::uint32_t DCMIPP_PRESUR_LEU_B_0x1 = 1;

    /** @brief Frame end delimiter unmask This byte specifies the mask to be applied to the code of the frame end delimiter. */
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
    /** @brief Synchronization error interrupt enable This bit is available only in embedded synchronization mode. */
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
    /** @brief Synchronization error raw interrupt status This bit is valid only in the embedded synchronization mode. It is cleared by writing a 1 to the CERRF bit in DCMIPP_PRFCR. This bit is available only in embedded synchronization mode. */
    using DCMIPP_PRSR_ERRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No synchronization error detected (value: 0)
     *          - B_0x1: Embedded synchronization characters are not received in the correct order. (value: 1)
     */
        /** @brief No synchronization error detected */
    constexpr std::uint32_t DCMIPP_PRSR_ERRF_B_0x0 = 0;
        /** @brief Embedded synchronization characters are not received in the correct order. */
    constexpr std::uint32_t DCMIPP_PRSR_ERRF_B_0x1 = 1;

    /** @brief This bit gives the state of the HSYNC pin with the correct programmed polarity if ENABLE bit is set into the DCMIPP_PRCR register and if the pixel clock is received. It is set during the blanking period whatever the polarity selected in HPOL bit, and cleared otherwise. When embedded synchronization codes are used: In case of embedded synchronization, this bit is meaningful only if the CAPTURE bit in DCMIPP_CR is set. */
    using DCMIPP_PRSR_HSYNC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Active line (value: 0)
     *          - B_0x1: Synchronization between lines (value: 1)
     */
        /** @brief Active line */
    constexpr std::uint32_t DCMIPP_PRSR_HSYNC_B_0x0 = 0;
        /** @brief Synchronization between lines */
    constexpr std::uint32_t DCMIPP_PRSR_HSYNC_B_0x1 = 1;

    /** @brief This bit gives the state of the VSYNC pin with the correct programmed polarity if ENABLE bit is set into the DCMIPP_PRCR register and if the pixel clock is received. It is set during the blanking period whatever the polarity selected in VPOL bit, and cleared otherwise. When embedded synchronization codes are used: In case of embedded synchronization, this bit is meaningful only if the CAPTURE bit in DCMIPP_CR is set. */
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
    /** @brief Synchronization error interrupt status clear Writing a 1 into this bit clears the ERRF bit in DCMIPP_PRSR. This bit is available only in embedded synchronization mode. */
    using DCMIPP_PRFCR_CERRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP common configuration register */
    using DCMIPP_CMCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x204, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear frame counter When this bit is set, the frame counter associated to a pipe is cleared. It resets DCMIPP_CMFRCR register. This bit is always read at 0. */
    using DCMIPP_CMCR_CFC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP common frame counter register */
    using DCMIPP_CMFRCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x208, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame counter, read-only, loops around. Incremented following VSYNC detection mapped to the pipe configured into bits PSFC[1:0] of the DCMIPP_CMCR register. The counter is cleared using the CRC bit in the DCMIPP_CMCR register. */
    using DCMIPP_CMFRCR_FRMCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP common interrupt enable register */
    using DCMIPP_CMIER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3F0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXI transfer error interrupt enable for IP-Plug */
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

    /** @brief DCMIPP common status register 1 */
    using DCMIPP_CMSR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3F4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This bit gives the state of the HSYNC pin with the correct programmed polarity on the parallel interface if ENABLE bit is set into the DCMIPP_PRCR register and if the pixel clock is received. It is set during the blanking period whatever the polarity selected in HPOL bit of the DCMIPP_PRCR register, and cleared otherwise. When embedded synchronization codes are used the meaning of this bit is the following: In case of embedded synchronization, this bit is meaningful only if the CAPTURE bit in the DCMIPP_PRCR register is set. */
    using DCMIPP_CMSR1_PRHSYNC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Active line (value: 0)
     *          - B_0x1: Synchronization between lines (value: 1)
     */
        /** @brief Active line */
    constexpr std::uint32_t DCMIPP_CMSR1_PRHSYNC_B_0x0 = 0;
        /** @brief Synchronization between lines */
    constexpr std::uint32_t DCMIPP_CMSR1_PRHSYNC_B_0x1 = 1;

    /** @brief This bit gives the state of the VSYNC pin with the correct programmed polarity on the parallel interface if ENABLE bit is set into the DCMIPP_PRCR register and if the pixel clock is received. It is set during the blanking period whatever the polarity selected in VPOL bit of the DCMIPP_PRCR register, and cleared otherwise. When embedded synchronization codes are used, the meaning of this bit is the following: In case of embedded synchronization, this bit is meaningful only if the CAPTURE bit in the DCMIPP_PRCR register is set. */
    using DCMIPP_CMSR1_PRVSYNC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Active frame (value: 0)
     *          - B_0x1: Synchronization between frames (value: 1)
     */
        /** @brief Active frame */
    constexpr std::uint32_t DCMIPP_CMSR1_PRVSYNC_B_0x0 = 0;
        /** @brief Synchronization between frames */
    constexpr std::uint32_t DCMIPP_CMSR1_PRVSYNC_B_0x1 = 1;

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

    /** @brief DCMIPP common status register 2 */
    using DCMIPP_CMSR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3F8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXI transfer error interrupt status flag for the IP-Plug. This bit is cleared by writing a 1 to CATXERRF bit in the DCMIPP_CMFCR register. */
    using DCMIPP_CMSR2_ATXERRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No AXI transfer error detected (value: 0)
     *          - B_0x1: AXI transfer error occurred on an AXI client. This bit signals an error on a client without any specific hardware action, the software must handle the situation (normally used when debugging software application code). (value: 1)
     */
        /** @brief No AXI transfer error detected */
    constexpr std::uint32_t DCMIPP_CMSR2_ATXERRF_B_0x0 = 0;
        /** @brief AXI transfer error occurred on an AXI client. This bit signals an error on a client without any specific hardware action, the software must handle the situation (normally used when debugging software application code). */
    constexpr std::uint32_t DCMIPP_CMSR2_ATXERRF_B_0x1 = 1;

    /** @brief Synchronization error raw interrupt status for the parallel interface. This bit is valid only in the embedded synchronization mode. It is cleared by writing a 1 to the CPRERRF bit in the DCMIPP_CMFCR register. This bit is available only in embedded synchronization mode. */
    using DCMIPP_CMSR2_PRERRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No synchronization error detected (value: 0)
     *          - B_0x1: Embedded synchronization characters are not received in the correct order. (value: 1)
     */
        /** @brief No synchronization error detected */
    constexpr std::uint32_t DCMIPP_CMSR2_PRERRF_B_0x0 = 0;
        /** @brief Embedded synchronization characters are not received in the correct order. */
    constexpr std::uint32_t DCMIPP_CMSR2_PRERRF_B_0x1 = 1;

    /** @brief Multi-line capture completed raw interrupt status for Pipe0 This bit is set when one/more lines have been completed. The periodicity of LINEF event is configured by LINEMULT bits into DCMIPP_P0PPCR register. When reaching end of frame, this event is triggered out to allow software action even if the LINEMULT value set is not a multiple of the total lines frame. In the case of embedded synchronization, this bit is set only if the CAPTURE bit in the DCMIPP_CR register is set. It is cleared by writing a 1 to the CP0LINEF bit in the DCMIPP_CMFCR register. */
    using DCMIPP_CMSR2_P0LINEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame capture completed raw interrupt status for Pipe0 This bit is set when all data of a frame or window have been captured. In case of a cropped window, this bit is set at the end of line of the last line in the crop, even if the captured frame is empty (for example window cropped outside the frame). This bit is cleared by writing a 1 to the CP0FRAMEF bit in the DCMIPP_CMFCR register. */
    using DCMIPP_CMSR2_P0FRAMEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No capture or ongoing capture (value: 0)
     *          - B_0x1: All data of a frame have been captured (value: 1)
     */
        /** @brief No capture or ongoing capture */
    constexpr std::uint32_t DCMIPP_CMSR2_P0FRAMEF_B_0x0 = 0;
        /** @brief All data of a frame have been captured */
    constexpr std::uint32_t DCMIPP_CMSR2_P0FRAMEF_B_0x1 = 1;

    /** @brief VSYNC raw interrupt status for Pipe0 This bit is set when the VSYNC signal changes from the inactive state to the active state. In the case of embedded synchronization, this bit is set only if the CAPTURE bit is set in DCMIPP_CR. It is cleared by writing a 1 to the CP0VSYNCF bit in the DCMIPP_CMFCR register. */
    using DCMIPP_CMSR2_P0VSYNCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Limit raw interrupt status for Pipe0 This bit is set when the data counter DCMIPP_P0DCCNT reaches its maximum value DCMIPP_P0DCLIMIT. It is cleared by writing a 1 to the CP0LIMITF bit in the DCMIPP_CMFCR register. */
    using DCMIPP_CMSR2_P0LIMITF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Overrun raw interrupt status for Pipe0 This bit is cleared by writing a 1 to the CP0OVRF bit in the DCMIPP_CMFCR register. */
    using DCMIPP_CMSR2_P0OVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No data buffer overrun occurred (value: 0)
     *          - B_0x1: A data buffer overrun occurred and this frame data are corrupted (value: 1)
     */
        /** @brief No data buffer overrun occurred */
    constexpr std::uint32_t DCMIPP_CMSR2_P0OVRF_B_0x0 = 0;
        /** @brief A data buffer overrun occurred and this frame data are corrupted */
    constexpr std::uint32_t DCMIPP_CMSR2_P0OVRF_B_0x1 = 1;

    /** @brief DCMIPP common interrupt clear register */
    using DCMIPP_CMFCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3FC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AXI transfer error interrupt status clear Writing a 1 into this bit clears the ATXERRF bit in the DCMIPP_CMSR2 register. */
    using DCMIPP_CMFCR_CATXERRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization error interrupt status clear Writing a 1 into this bit clears the PRERRF bit in the DCMIPP_CMSR2 register. This bit is available only in embedded synchronization mode. */
    using DCMIPP_CMFCR_CPRERRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Multi-line capture complete interrupt status clear Writing a 1 into this bit clears P0LINEF in the DCMIPP_CMSR2 register */
    using DCMIPP_CMFCR_CP0LINEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame capture complete interrupt status clear Writing a 1 into this bit clears the P0FRAMEF bit in the DCMIPP_CMSR2 register. */
    using DCMIPP_CMFCR_CP0FRAMEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vertical synchronization interrupt status clear Writing a 1 into this bit clears the P0VSYNCF bit in the DCMIPP_CMSR2 register. */
    using DCMIPP_CMFCR_CP0VSYNCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief limit interrupt status clear Writing a 1 into this bit clears P0LIMITF in the DCMIPP_CMSR2 register */
    using DCMIPP_CMFCR_CP0LIMITF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Overrun interrupt status clear Writing a 1 into this bit clears the P0OVRF bit in the DCMIPP_CMSR2 register */
    using DCMIPP_CMFCR_CP0OVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe0 flow selection configuration register */
    using DCMIPP_P0FSCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x404, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Activation of PipeN Note: This bit is not shadowed, differently from all other bits in this register. */
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
    /** @brief Frame capture rate control These bits define the frequency of frame capture. They are meaningful only in Continuous grab mode, ignored in Snapshot mode. */
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

    /** @brief Capture requested When PIPEN = 1 and when the CPTREQ is set to 1 the pipe waits for the first VSync, and automatically starts a capture and sets CPTACT = 1 to mention it. In Snapshot mode the CPTREQ bit is automatically cleared at the start of the first received frame. In Continuous grab mode, the capture remains active and CPTREQ = 1 until the software clears CPTREQ: the capture stops and CPTACT is reset at the end of the ongoing frame. The DCMI and pipe configuration registers must be correctly programmed before enabling this bit. */
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
    /** @brief Horizontal size, from 0 to 4094 word wide (data 32-bit) If the value is maintained at 0 when enabling the crop by means of ENABLE bit, the crop operation is not performed on horizontal direction. */
    using DCMIPP_P0SCSZR_HSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vertical size, from 0 to 4094 pixels high If the value is maintained at 0 when enabling the crop by means of ENABLE bit, the crop operation is not performed on vertical direction. */
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

    /** @brief This bit is set and cleared by software. if POSNEG = 0, the data inside the rectangle area are transmitted (it can correspond to a statistical data removal, or as a crop feature in a data valid image area). if POSNEG = 1, the data outside of the rectangle area are transmitted (it can correspond to a statistical data extraction, rejecting all data inside the window). This bit must be kept cleared if the input format is JPEG, to avoid unpredictable behavior of the pipe. */
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
    /** @brief Number of data dumped during the frame. The size of the data is expressed in bytes. It counts only the data selected by means of the CROP 2D function. The counter saturates at 0x3FFFFFF. Granularity is 32-bit for all the formats except for the byte stream formats (for example JPEG) having byte granularity. */
    using DCMIPP_P0DCCNTR_CNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 26, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe0 dump limit register */
    using DCMIPP_P0DCLMTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5B4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum number of 32-bit data that can be dumped during a frame, after the crop 2D operation. */
    using DCMIPP_P0DCLMTR_LIMIT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ENABLE field */
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

    /** @brief Byte select mode Modes 10 and 11 work only with EDM [2:0] = 000 into the DCMIPP_PRCR register. */
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

    /** @brief Odd/even byte select (byte select start) This bit works in conjunction with BSM field (BSM different from 00) */
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

    /** @brief Odd/even line select (line select start) This bit works in conjunction with LSM field (LSM = 1). */
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

    /** @brief Double buffer mode This bit is set and cleared by software. */
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
    /** @brief Memory0 address Base address of memory area 0, to whom data are written. It is assumed to be a multiple of 16, hence its bits 3:0 are always at 0x0. */
    using DCMIPP_P0PPM0AR1_M0A = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe0 pixel packer Memory0 address register 2 */
    using DCMIPP_P0PPM0AR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5C8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Memory0 address Base address of memory area 0, to whom data are written. It is assumed to be a multiple of 16, hence its bits 3:0 are always at 0x0. */
    using DCMIPP_P0PPM0AR2_M0A = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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
    /** @brief Multi-line capture completed raw interrupt status This bit is set when one/more lines have been completed. For the JPEG mode, this bit is raised at the end of the frame. The periodicity of LINEF event is configured by LINEMULT bits into DCMIPP_P0PPCR register. When reaching end of frame, this event is triggered out to allow software action even if the LINEMULT value set is not a multiple of the total lines frame. In case of embedded synchronization, this bit is set only if the CAPTURE bit in the DCMIPP_CR register is set. It is cleared by writing a 1 to the CLINEF bit in the DCMIPP_P0FCR register. */
    using DCMIPP_P0SR_LINEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame capture completed raw interrupt status This bit is set when all data of a frame or window have been captured. In case of a cropped window, this bit is set at the end of line of the last line in the crop. It is set even if the captured frame is empty (for example window cropped outside the frame). This bit is cleared by writing a 1 to the CFRAMEF bit in DCMIPP_P0FCR. */
    using DCMIPP_P0SR_FRAMEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No capture or ongoing capture (value: 0)
     *          - B_0x1: All data of a frame have been captured (value: 1)
     */
        /** @brief No capture or ongoing capture */
    constexpr std::uint32_t DCMIPP_P0SR_FRAMEF_B_0x0 = 0;
        /** @brief All data of a frame have been captured */
    constexpr std::uint32_t DCMIPP_P0SR_FRAMEF_B_0x1 = 1;

    /** @brief VSYNC raw interrupt status This bit is set when the VSYNC signal changes from the inactive state to the active state. In case of embedded synchronization, this bit is set only if the CAPTURE bit is set in DCMIPP_CR. It is cleared by writing a 1 to the CVSYNCF bit in the DCMIPP_P0FCR register. */
    using DCMIPP_P0SR_VSYNCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Limit raw interrupt status This bit is set when the data counter DCMIPP_PxDCCNTR reaches its maximum value DCMIPP_PxDCLIMITR. It is cleared by writing a 1 to the CLIMITF bit in the DCMIPP_P0FCR register. */
    using DCMIPP_P0SR_LIMITF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Overrun raw interrupt status This bit is cleared by writing a 1 to the COVRF bit in the DCMIPP_P0FCR register. */
    using DCMIPP_P0SR_OVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No data buffer overrun occurred (value: 0)
     *          - B_0x1: A data buffer overrun occurred and this frame data are corrupted (value: 1)
     */
        /** @brief No data buffer overrun occurred */
    constexpr std::uint32_t DCMIPP_P0SR_OVRF_B_0x0 = 0;
        /** @brief A data buffer overrun occurred and this frame data are corrupted */
    constexpr std::uint32_t DCMIPP_P0SR_OVRF_B_0x1 = 1;

    /** @brief Capture immediate status This bit is automatically reset at the end of frame capture complete event (after all the data of that frame have been captured and the IP-Plug has started to emit the last burst on the AXI, usually before the next VSync). */
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
    /** @brief Multi-line capture complete interrupt status clear Writing a 1 into this bit clears LINEF in the DCMIPP_P0SR register. */
    using DCMIPP_P0FCR_CLINEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame capture complete interrupt status clear Writing a 1 into this bit clears the FRAMEF bit in the DCMIPP_P0SR register. */
    using DCMIPP_P0FCR_CFRAMEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vertical synchronization interrupt status clear Writing a 1 into this bit clears the VSYNCF bit in the DCMIPP_P0SR register. */
    using DCMIPP_P0FCR_CVSYNCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief limit interrupt status clear Writing a 1 into this bit clears LIMITF in the DCMIPP_P0SR register. */
    using DCMIPP_P0FCR_CLIMITF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Overrun interrupt status clear Writing a 1 into this bit clears the OVRF bit in the DCMIPP_P0SR register. */
    using DCMIPP_P0FCR_COVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe0 current flow control configuration register */
    using DCMIPP_P0CFCTCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x700, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame capture rate control These bits define the frequency of frame capture. They are meaningful only in Continuous grab mode, ignored in Snapshot mode. */
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

    /** @brief Capture requested When PIPEN = 1, and when the CPTREQ is set to 1 the pipe waits for the first VSync, and automatically starts a capture and sets CPTACT = 1 to mention it. In Snapshot mode the CPTREQ bit is automatically cleared at the start of the first frame received. In continuous grab mode the capture remains active and CPTREQ = 1, until the software clears CPTREQ: the capture stops and CPTACT is reset at the end of the ongoing frame. The DCMI and pipe configuration registers must be correctly programmed before enabling this bit. */
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
    /** @brief Current horizontal size, from 0 to 4094 word wide (data 32-bit). If the value is maintained at 0 when enabling the crop by means of the ENABLE bit, the value is forced internally at 0xFFE, which is the maximum value. */
    using DCMIPP_P0CSCSZR_HSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current vertical size, from 0 to 4094 pixels high. If the value is maintained at 0 when enabling the crop by means of the ENABLE bit, the value is forced internally at 0xFFE which is the maximum value. */
    using DCMIPP_P0CSCSZR_VSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Current value of the POSNEG bit This bit has a meaning only if ENABLE bit is set. */
    using DCMIPP_P0CSCSZR_POSNEG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Positive area. The rectangle defined by VSIZE,HSIZE, and VSTART, HSTART is the active area. (value: 0)
     *          - B_0x1: Negative area. The active area is the area excluding the rectangle defined by VSIZE, HSIZE, and VSTART, HSTART. (value: 1)
     */
        /** @brief Positive area. The rectangle defined by VSIZE,HSIZE, and VSTART, HSTART is the active area. */
    constexpr std::uint32_t DCMIPP_P0CSCSZR_POSNEG_B_0x0 = 0;
        /** @brief Negative area. The active area is the area excluding the rectangle defined by VSIZE, HSIZE, and VSTART, HSTART. */
    constexpr std::uint32_t DCMIPP_P0CSCSZR_POSNEG_B_0x1 = 1;

    /** @brief Current value of the ENABLE bit if POSNEG = 0, the data inside the rectangle area are transmitted (can correspond to a statistical data removal, or as a crop feature in a data valid image area). if POSNEG = 1, the data outside of the rectangle area are transmitted (can correspond to a statistical data extraction, rejecting all data inside the window) */
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

    /** @brief Current Byte select mode Modes 10 and 11 work only with EDM [2:0] = 000 into the DCMIPP_PRCR register. */
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

    /** @brief Current odd/even byte select (byte select start) This bit works in conjunction with BSM field (BSM different from 00) */
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

    /** @brief Current odd/even line select (ine select start) This bit works in conjunction with LSM field (LSM = 1) */
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
    /** @brief Memory0 address Base address of the current memory area 0, to whom data are written. It is assumed to be a multiple of 16, hence its bits 3:0 are always at 0x0. */
    using DCMIPP_P0CPPM0AR1_M0A = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCMIPP Pipe0 current pixel packer Memory0 address register 2 */
    using DCMIPP_P0CPPM0AR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7C8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Memory0 address Base address of the current memory area 0, to whom data are written. It is assumed to be a multiple of 16, hence its bits 3:0 are always at 0x0. */
    using DCMIPP_P0CPPM0AR2_M0A = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
