/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32G0B1_FDCAN2_HPP
#define EMBEDDED_PP_STM32G0B1_FDCAN2_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief FD controller area network */
namespace STM32G0B1::FDCAN2 {

    /** @brief FDCAN core release register */
    using FDCAN_CREL = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 18 */
    using FDCAN_CREL_DAY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 12 */
    using FDCAN_CREL_MON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 4 */
    using FDCAN_CREL_YEAR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 1 */
    using FDCAN_CREL_SUBSTEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 2 */
    using FDCAN_CREL_STEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 3 */
    using FDCAN_CREL_REL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FDCAN endian register */
    using FDCAN_ENDN = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endianness test value The endianness test value is 0x8765 4321. */
    using FDCAN_ENDN_ETV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FDCAN data bit timing and prescaler register */
    using FDCAN_DBTP = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization jump width Must always be smaller than DTSEG2, valid values are 0 to 15. The value used by the hardware is the one programmed, incremented by 1: tSJW = (DSJW + 1) x tq. */
    using FDCAN_DBTP_DSJW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data time segment after sample point Valid values are 0 to 15. The value used by the hardware is the one programmed, incremented by 1, i.e. tBS2 = (DTSEG2 + 1) x tq. */
    using FDCAN_DBTP_DTSEG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data time segment before sample point Valid values are 0 to 31. The value used by the hardware is the one programmed, incremented by 1, i.e. tBS1 = (DTSEG1 + 1) x tq. */
    using FDCAN_DBTP_DTSEG1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data bit rate prescaler The value by which the oscillator frequency is divided to generate the bit time quanta. The bit time is built up from a multiple of this quanta. Valid values for the Baud Rate Prescaler are 0 to 31. The hardware interpreters this value as the value programmed plus 1. */
    using FDCAN_DBTP_DBRP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transceiver delay compensation */
    using FDCAN_DBTP_TDC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Transceiver delay compensation disabled (value: 0)
     *          - B_0x1: Transceiver delay compensation enabled (value: 1)
     */
        /** @brief Transceiver delay compensation disabled */
    constexpr std::uint32_t FDCAN_DBTP_TDC_B_0x0 = 0;
        /** @brief Transceiver delay compensation enabled */
    constexpr std::uint32_t FDCAN_DBTP_TDC_B_0x1 = 1;

    /** @brief FDCAN test register */
    using FDCAN_TEST = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Loop back mode */
    using FDCAN_TEST_LBCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Reset value, Loop Back mode is disabled (value: 0)
     *          - B_0x1: Loop Back mode is enabled (see Power down (Sleep mode)) (value: 1)
     */
        /** @brief Reset value, Loop Back mode is disabled */
    constexpr std::uint32_t FDCAN_TEST_LBCK_B_0x0 = 0;
        /** @brief Loop Back mode is enabled (see Power down (Sleep mode)) */
    constexpr std::uint32_t FDCAN_TEST_LBCK_B_0x1 = 1;

    /** @brief Control of transmit pin */
    using FDCAN_TEST_TX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Reset value, FDCANx_TX TX is controlled by the CAN core, updated at the end of the CAN bit time (value: 0)
     *          - B_0x1: Sample point can be monitored at pin FDCANx_TX (value: 1)
     *          - B_0x2: Dominant (0) level at pin FDCANx_TX (value: 2)
     *          - B_0x3: Recessive (1) at pin FDCANx_TX (value: 3)
     */
        /** @brief Reset value, FDCANx_TX TX is controlled by the CAN core, updated at the end of the CAN bit time */
    constexpr std::uint32_t FDCAN_TEST_TX_B_0x0 = 0;
        /** @brief Sample point can be monitored at pin FDCANx_TX */
    constexpr std::uint32_t FDCAN_TEST_TX_B_0x1 = 1;
        /** @brief Dominant (0) level at pin FDCANx_TX */
    constexpr std::uint32_t FDCAN_TEST_TX_B_0x2 = 2;
        /** @brief Recessive (1) at pin FDCANx_TX */
    constexpr std::uint32_t FDCAN_TEST_TX_B_0x3 = 3;

    /** @brief Receive pin Monitors the actual value of pin FDCANx_RX */
    using FDCAN_TEST_RX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The CAN bus is dominant (FDCANx_RX = 0) (value: 0)
     *          - B_0x1: The CAN bus is recessive (FDCANx_RX = 1) (value: 1)
     */
        /** @brief The CAN bus is dominant (FDCANx_RX = 0) */
    constexpr std::uint32_t FDCAN_TEST_RX_B_0x0 = 0;
        /** @brief The CAN bus is recessive (FDCANx_RX = 1) */
    constexpr std::uint32_t FDCAN_TEST_RX_B_0x1 = 1;

    /** @brief FDCAN RAM watchdog register */
    using FDCAN_RWD = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Watchdog configuration Start value of the message RAM watchdog counter. With the reset value of 00, the counter is disabled. These are protected write (P) bits, write access is possible only when the bit 1 [CCE] and bit 0 [INIT] of FDCAN_CCCR register are set to 1. */
    using FDCAN_RWD_WDC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Watchdog value Actual message RAM watchdog counter value. */
    using FDCAN_RWD_WDV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FDCAN CC control register */
    using FDCAN_CCCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Initialization */
    using FDCAN_CCCR_INIT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation (value: 0)
     *          - B_0x1: Initialization started (value: 1)
     */
        /** @brief Normal operation */
    constexpr std::uint32_t FDCAN_CCCR_INIT_B_0x0 = 0;
        /** @brief Initialization started */
    constexpr std::uint32_t FDCAN_CCCR_INIT_B_0x1 = 1;

    /** @brief Configuration change enable */
    using FDCAN_CCCR_CCE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The CPU has no write access to the protected configuration registers. (value: 0)
     *          - B_0x1: The CPU has write access to the protected configuration registers (while CCCR.INIT = 1). (value: 1)
     */
        /** @brief The CPU has no write access to the protected configuration registers. */
    constexpr std::uint32_t FDCAN_CCCR_CCE_B_0x0 = 0;
        /** @brief The CPU has write access to the protected configuration registers (while CCCR.INIT = 1). */
    constexpr std::uint32_t FDCAN_CCCR_CCE_B_0x1 = 1;

    /** @brief ASM restricted operation mode The restricted operation mode is intended for applications that adapt themselves to different CAN bit rates. The application tests different bit rates and leaves the Restricted Operation Mode after it has received a valid frame. In the optional Restricted Operation Mode the node is able to transmit and receive data and remote frames and it gives acknowledge to valid frames, but it does not send active error frames or overload frames. In case of an error condition or overload condition, it does not send dominant bits, instead it waits for the occurrence of bus idle condition to resynchronize itself to the CAN communication. The error counters are not incremented. Bit ASM can only be set by software when both CCE and INIT are set to 1. The bit can be reset by the software at any time. */
    using FDCAN_CCCR_ASM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal CAN operation (value: 0)
     *          - B_0x1: Restricted Operation Mode active (value: 1)
     */
        /** @brief Normal CAN operation */
    constexpr std::uint32_t FDCAN_CCCR_ASM_B_0x0 = 0;
        /** @brief Restricted Operation Mode active */
    constexpr std::uint32_t FDCAN_CCCR_ASM_B_0x1 = 1;

    /** @brief Clock stop acknowledge */
    using FDCAN_CCCR_CSA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No clock stop acknowledged (value: 0)
     *          - B_0x1: FDCAN may be set in power down by stopping APB clock and kernel clock. (value: 1)
     */
        /** @brief No clock stop acknowledged */
    constexpr std::uint32_t FDCAN_CCCR_CSA_B_0x0 = 0;
        /** @brief FDCAN may be set in power down by stopping APB clock and kernel clock. */
    constexpr std::uint32_t FDCAN_CCCR_CSA_B_0x1 = 1;

    /** @brief Clock stop request */
    using FDCAN_CCCR_CSR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No clock stop requested (value: 0)
     *          - B_0x1: Clock stop requested. When clock stop is requested, first INIT and then CSA is set after all pending transfer requests have been completed and the CAN bus reached idle. (value: 1)
     */
        /** @brief No clock stop requested */
    constexpr std::uint32_t FDCAN_CCCR_CSR_B_0x0 = 0;
        /** @brief Clock stop requested. When clock stop is requested, first INIT and then CSA is set after all pending transfer requests have been completed and the CAN bus reached idle. */
    constexpr std::uint32_t FDCAN_CCCR_CSR_B_0x1 = 1;

    /** @brief Bus monitoring mode Bit MON can only be set by software when both CCE and INIT are set to 1. The bit can be reset by the Host at any time. */
    using FDCAN_CCCR_MON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bus monitoring mode disabled (value: 0)
     *          - B_0x1: Bus monitoring mode enabled (value: 1)
     */
        /** @brief Bus monitoring mode disabled */
    constexpr std::uint32_t FDCAN_CCCR_MON_B_0x0 = 0;
        /** @brief Bus monitoring mode enabled */
    constexpr std::uint32_t FDCAN_CCCR_MON_B_0x1 = 1;

    /** @brief Disable automatic retransmission */
    using FDCAN_CCCR_DAR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Automatic retransmission of messages not transmitted successfully enabled (value: 0)
     *          - B_0x1: Automatic retransmission disabled (value: 1)
     */
        /** @brief Automatic retransmission of messages not transmitted successfully enabled */
    constexpr std::uint32_t FDCAN_CCCR_DAR_B_0x0 = 0;
        /** @brief Automatic retransmission disabled */
    constexpr std::uint32_t FDCAN_CCCR_DAR_B_0x1 = 1;

    /** @brief Test mode enable */
    using FDCAN_CCCR_TEST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation, register TEST holds reset values (value: 0)
     *          - B_0x1: Test Mode, write access to register TEST enabled (value: 1)
     */
        /** @brief Normal operation, register TEST holds reset values */
    constexpr std::uint32_t FDCAN_CCCR_TEST_B_0x0 = 0;
        /** @brief Test Mode, write access to register TEST enabled */
    constexpr std::uint32_t FDCAN_CCCR_TEST_B_0x1 = 1;

    /** @brief FD operation enable */
    using FDCAN_CCCR_FDOE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FD operation disabled (value: 0)
     *          - B_0x1: FD operation enabled (value: 1)
     */
        /** @brief FD operation disabled */
    constexpr std::uint32_t FDCAN_CCCR_FDOE_B_0x0 = 0;
        /** @brief FD operation enabled */
    constexpr std::uint32_t FDCAN_CCCR_FDOE_B_0x1 = 1;

    /** @brief FDCAN bit rate switching */
    using FDCAN_CCCR_BRSE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bit rate switching for transmissions disabled (value: 0)
     *          - B_0x1: Bit rate switching for transmissions enabled (value: 1)
     */
        /** @brief Bit rate switching for transmissions disabled */
    constexpr std::uint32_t FDCAN_CCCR_BRSE_B_0x0 = 0;
        /** @brief Bit rate switching for transmissions enabled */
    constexpr std::uint32_t FDCAN_CCCR_BRSE_B_0x1 = 1;

    /** @brief Protocol exception handling disable */
    using FDCAN_CCCR_PXHD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Protocol exception handling enabled (value: 0)
     *          - B_0x1: Protocol exception handling disabled (value: 1)
     */
        /** @brief Protocol exception handling enabled */
    constexpr std::uint32_t FDCAN_CCCR_PXHD_B_0x0 = 0;
        /** @brief Protocol exception handling disabled */
    constexpr std::uint32_t FDCAN_CCCR_PXHD_B_0x1 = 1;

    /** @brief Edge filtering during bus integration */
    using FDCAN_CCCR_EFBI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Edge filtering disabled (value: 0)
     *          - B_0x1: Two consecutive dominant tq required to detect an edge for hard synchronization (value: 1)
     */
        /** @brief Edge filtering disabled */
    constexpr std::uint32_t FDCAN_CCCR_EFBI_B_0x0 = 0;
        /** @brief Two consecutive dominant tq required to detect an edge for hard synchronization */
    constexpr std::uint32_t FDCAN_CCCR_EFBI_B_0x1 = 1;

    /** @brief If this bit is set, the FDCAN pauses for two CAN bit times before starting the next transmission after successfully transmitting a frame. */
    using FDCAN_CCCR_TXP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: disabled (value: 0)
     *          - B_0x1: enabled (value: 1)
     */
        /** @brief disabled */
    constexpr std::uint32_t FDCAN_CCCR_TXP_B_0x0 = 0;
        /** @brief enabled */
    constexpr std::uint32_t FDCAN_CCCR_TXP_B_0x1 = 1;

    /** @brief Non ISO operation If this bit is set, the FDCAN uses the CAN FD frame format as specified by the Bosch CAN FD Specification V1.0. */
    using FDCAN_CCCR_NISO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CAN FD frame format according to ISO11898-1 (value: 0)
     *          - B_0x1: CAN FD frame format according to Bosch CAN FD Specification V1.0 (value: 1)
     */
        /** @brief CAN FD frame format according to ISO11898-1 */
    constexpr std::uint32_t FDCAN_CCCR_NISO_B_0x0 = 0;
        /** @brief CAN FD frame format according to Bosch CAN FD Specification V1.0 */
    constexpr std::uint32_t FDCAN_CCCR_NISO_B_0x1 = 1;

    /** @brief FDCAN nominal bit timing and prescaler register */
    using FDCAN_NBTP = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Nominal time segment after sample point Valid values are 0 to 127. The actual interpretation by the hardware of this value is such that one more than the programmed value is used. */
    using FDCAN_NBTP_NTSEG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Nominal time segment before sample point Valid values are 0 to 255. The actual interpretation by the hardware of this value is such that one more than the programmed value is used. These are protected write (P) bits, write access is possible only when the bit 1 [CCE] and bit 0 [INIT] of CCCR register are set to 1. */
    using FDCAN_NBTP_NTSEG1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bit rate prescaler Value by which the oscillator frequency is divided for generating the bit time quanta. The bit time is built up from a multiple of this quanta. Valid values are 0 to 511. The actual interpretation by the hardware of this value is such that one more than the value programmed here is used. These are protected write (P) bits, write access is possible only when the bit 1 [CCE] and bit 0 [INIT] of CCCR register are set to 1. */
    using FDCAN_NBTP_NBRP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Nominal (re)synchronization jump width Valid values are 0 to 127. The actual interpretation by the hardware of this value is such that the used value is the one programmed incremented by one. These are protected write (P) bits, write access is possible only when the bit 1 [CCE] and bit 0 [INIT] of CCCR register are set to 1. */
    using FDCAN_NBTP_NSJW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FDCAN timestamp counter configuration register */
    using FDCAN_TSCC = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timestamp select These are protected write (P) bits, write access is possible only when the bit 1 [CCE] and bit 0 [INIT] of CCCR register are set to 1. */
    using FDCAN_TSCC_TSS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Timestamp counter value always 0x0000 (value: 0)
     *          - B_0x1: Timestamp counter value incremented according to TCP (value: 1)
     *          - B_0x2: External timestamp counter from TIM3 value (tim3_cnt[0:15]) (value: 2)
     *          - B_0x3: Same as 00. (value: 3)
     */
        /** @brief Timestamp counter value always 0x0000 */
    constexpr std::uint32_t FDCAN_TSCC_TSS_B_0x0 = 0;
        /** @brief Timestamp counter value incremented according to TCP */
    constexpr std::uint32_t FDCAN_TSCC_TSS_B_0x1 = 1;
        /** @brief External timestamp counter from TIM3 value (tim3_cnt[0:15]) */
    constexpr std::uint32_t FDCAN_TSCC_TSS_B_0x2 = 2;
        /** @brief Same as 00. */
    constexpr std::uint32_t FDCAN_TSCC_TSS_B_0x3 = 3;

    /** @brief Timestamp counter prescaler Configures the timestamp and timeout counters time unit in multiples of CAN bit times [1 : 16]. The actual interpretation by the hardware of this value is such that one more than the value programmed here is used. In CAN FD mode the internal timestamp counter TCP does not provide a constant time base due to the different CAN bit times between arbitration phase and data phase. Thus CAN FD requires an external counter for timestamp generation (TSS = 10). These are protected write (P) bits, write access is possible only when the bit 1 [CCE] and bit 0 [INIT] of CCCR register are set to 1. */
    using FDCAN_TSCC_TCP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FDCAN timestamp counter value register */
    using FDCAN_TSCV = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timestamp counter The internal/external timestamp counter value is captured on start of frame (both Rx and Tx). When TSCC[TSS] = 01, the timestamp counter is incremented in multiples of CAN bit times [1 : 16] depending on the configuration of TSCC[TCP]. A wrap around sets interrupt flag IR[TSW]. Write access resets the counter to 0. When TSCC.TSS = 10, TSC reflects the external timestamp counter value. A write access has no impact. */
    using FDCAN_TSCV_TSC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FDCAN timeout counter configuration register */
    using FDCAN_TOCC = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timeout counter enable This is a protected write (P) bit, write access is possible only when the bit 1 [CCE] and bit 0 [INIT] of CCCR register are set to 1. */
    using FDCAN_TOCC_ETOC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Timeout counter disabled (value: 0)
     *          - B_0x1: Timeout counter enabled (value: 1)
     */
        /** @brief Timeout counter disabled */
    constexpr std::uint32_t FDCAN_TOCC_ETOC_B_0x0 = 0;
        /** @brief Timeout counter enabled */
    constexpr std::uint32_t FDCAN_TOCC_ETOC_B_0x1 = 1;

    /** @brief Timeout select When operating in Continuous mode, a write to TOCV presets the counter to the value configured by TOCC[TOP] and continues down-counting. When the timeout counter is controlled by one of the FIFOs, an empty FIFO presets the counter to the value configured by TOCC[TOP]. Down-counting is started when the first FIFO element is stored. These are protected write (P) bits, write access is possible only when the bit 1 [CCE] and bit 0 [INIT] of CCCR register are set to 1. */
    using FDCAN_TOCC_TOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Continuous operation (value: 0)
     *          - B_0x1: Timeout controlled by Tx Event FIFO (value: 1)
     *          - B_0x2: Timeout controlled by Rx FIFO 0 (value: 2)
     *          - B_0x3: Timeout controlled by Rx FIFO 1 (value: 3)
     */
        /** @brief Continuous operation */
    constexpr std::uint32_t FDCAN_TOCC_TOS_B_0x0 = 0;
        /** @brief Timeout controlled by Tx Event FIFO */
    constexpr std::uint32_t FDCAN_TOCC_TOS_B_0x1 = 1;
        /** @brief Timeout controlled by Rx FIFO 0 */
    constexpr std::uint32_t FDCAN_TOCC_TOS_B_0x2 = 2;
        /** @brief Timeout controlled by Rx FIFO 1 */
    constexpr std::uint32_t FDCAN_TOCC_TOS_B_0x3 = 3;

    /** @brief Timeout period Start value of the timeout counter (down-counter). Configures the timeout period. */
    using FDCAN_TOCC_TOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FDCAN timeout counter value register */
    using FDCAN_TOCV = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timeout counter The timeout counter is decremented in multiples of CAN bit times [1 : 16] depending on the configuration of TSCC.TCP. When decremented to 0, interrupt flag IR.TOO is set and the Timeout Counter is stopped. Start and reset/restart conditions are configured via TOCC.TOS. */
    using FDCAN_TOCV_TOC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FDCAN error counter register */
    using FDCAN_ECR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit error counter Actual state of the transmit error counter, values between 0 and 255. When CCCR.ASM is set, the CAN protocol controller does not increment TEC and REC when a CAN protocol error is detected, but CEL is still incremented. */
    using FDCAN_ECR_TEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive error counter Actual state of the receive error counter, values between 0 and 127. */
    using FDCAN_ECR_REC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive error passive */
    using FDCAN_ECR_RP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The receive error counter is below the error passive level of 128. (value: 0)
     *          - B_0x1: The receive error counter has reached the error passive level of 128. (value: 1)
     */
        /** @brief The receive error counter is below the error passive level of 128. */
    constexpr std::uint32_t FDCAN_ECR_RP_B_0x0 = 0;
        /** @brief The receive error counter has reached the error passive level of 128. */
    constexpr std::uint32_t FDCAN_ECR_RP_B_0x1 = 1;

    /** @brief CAN error logging The counter is incremented each time when a CAN protocol error causes the transmit error counter or the receive error counter to be incremented. It is reset by read access to CEL. The counter stops at 0xFF; the next increment of TEC or REC sets interrupt flag IR[ELO]. Access type is RX: reset on read. */
    using FDCAN_ECR_CEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FDCAN protocol status register */
    using FDCAN_PSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Last error code The LEC indicates the type of the last error to occur on the CAN bus. This field is cleared to 0 when a message has been transferred (reception or transmission) without error. Access type is RS: set on read. */
    using FDCAN_PSR_LEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No Error: No error occurred since LEC has been reset by successful reception or transmission. (value: 0)
     *          - B_0x1: Stuff Error: More than 5 equal bits in a sequence have occurred in a part of a received message where this is not allowed. (value: 1)
     *          - B_0x2: Form Error: A fixed format part of a received frame has the wrong format. (value: 2)
     *          - B_0x3: AckError: The message transmitted by the FDCAN was not acknowledged by another node. (value: 3)
     *          - B_0x4: Bit1Error: During the transmission of a message (with the exception of the arbitration field), the device wanted to send a recessive level (bit of logical value 1), but the monitored bus value was dominant. (value: 4)
     *          - B_0x5: Bit0Error: During the transmission of a message (or acknowledge bit, or active error flag, or overload flag), the device wanted to send a dominant level (data or identifier bit logical value 0), but the monitored bus value was recessive. During Bus_Off recovery this status is set each time a sequence of 11 recessive bits has been monitored. This enables the CPU to monitor the proceeding of the Bus_Off recovery sequence (indicating the bus is not stuck at dominant or continuously disturbed). (value: 5)
     *          - B_0x6: CRCError: The CRC check sum of a received message was incorrect. The CRC of an incoming message does not match with the CRC calculated from the received data. (value: 6)
     *          - B_0x7: NoChange: Any read access to the Protocol status register re-initializes the LEC to '7'. When the LEC shows the value '7', no CAN bus event was detected since the last CPU read access to the Protocol status register. (value: 7)
     */
        /** @brief No Error: No error occurred since LEC has been reset by successful reception or transmission. */
    constexpr std::uint32_t FDCAN_PSR_LEC_B_0x0 = 0;
        /** @brief Stuff Error: More than 5 equal bits in a sequence have occurred in a part of a received message where this is not allowed. */
    constexpr std::uint32_t FDCAN_PSR_LEC_B_0x1 = 1;
        /** @brief Form Error: A fixed format part of a received frame has the wrong format. */
    constexpr std::uint32_t FDCAN_PSR_LEC_B_0x2 = 2;
        /** @brief AckError: The message transmitted by the FDCAN was not acknowledged by another node. */
    constexpr std::uint32_t FDCAN_PSR_LEC_B_0x3 = 3;
        /** @brief Bit1Error: During the transmission of a message (with the exception of the arbitration field), the device wanted to send a recessive level (bit of logical value 1), but the monitored bus value was dominant. */
    constexpr std::uint32_t FDCAN_PSR_LEC_B_0x4 = 4;
        /** @brief Bit0Error: During the transmission of a message (or acknowledge bit, or active error flag, or overload flag), the device wanted to send a dominant level (data or identifier bit logical value 0), but the monitored bus value was recessive. During Bus_Off recovery this status is set each time a sequence of 11 recessive bits has been monitored. This enables the CPU to monitor the proceeding of the Bus_Off recovery sequence (indicating the bus is not stuck at dominant or continuously disturbed). */
    constexpr std::uint32_t FDCAN_PSR_LEC_B_0x5 = 5;
        /** @brief CRCError: The CRC check sum of a received message was incorrect. The CRC of an incoming message does not match with the CRC calculated from the received data. */
    constexpr std::uint32_t FDCAN_PSR_LEC_B_0x6 = 6;
        /** @brief NoChange: Any read access to the Protocol status register re-initializes the LEC to '7'. When the LEC shows the value '7', no CAN bus event was detected since the last CPU read access to the Protocol status register. */
    constexpr std::uint32_t FDCAN_PSR_LEC_B_0x7 = 7;

    /** @brief Activity Monitors the module's CAN communication state. */
    using FDCAN_PSR_ACT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Synchronizing: node is synchronizing on CAN communication. (value: 0)
     *          - B_0x1: Idle: node is neither receiver nor transmitter. (value: 1)
     *          - B_0x2: Receiver: node is operating as receiver. (value: 2)
     *          - B_0x3: Transmitter: node is operating as transmitter. (value: 3)
     */
        /** @brief Synchronizing: node is synchronizing on CAN communication. */
    constexpr std::uint32_t FDCAN_PSR_ACT_B_0x0 = 0;
        /** @brief Idle: node is neither receiver nor transmitter. */
    constexpr std::uint32_t FDCAN_PSR_ACT_B_0x1 = 1;
        /** @brief Receiver: node is operating as receiver. */
    constexpr std::uint32_t FDCAN_PSR_ACT_B_0x2 = 2;
        /** @brief Transmitter: node is operating as transmitter. */
    constexpr std::uint32_t FDCAN_PSR_ACT_B_0x3 = 3;

    /** @brief Error passive */
    using FDCAN_PSR_EP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The FDCAN is in the Error_Active state. It normally takes part in bus communication and sends an active error flag when an error has been detected. (value: 0)
     *          - B_0x1: The FDCAN is in the Error_Passive state. (value: 1)
     */
        /** @brief The FDCAN is in the Error_Active state. It normally takes part in bus communication and sends an active error flag when an error has been detected. */
    constexpr std::uint32_t FDCAN_PSR_EP_B_0x0 = 0;
        /** @brief The FDCAN is in the Error_Passive state. */
    constexpr std::uint32_t FDCAN_PSR_EP_B_0x1 = 1;

    /** @brief Warning Sstatus */
    using FDCAN_PSR_EW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Both error counters are below the Error_Warning limit of 96. (value: 0)
     *          - B_0x1: At least one of error counter has reached the Error_Warning limit of 96. (value: 1)
     */
        /** @brief Both error counters are below the Error_Warning limit of 96. */
    constexpr std::uint32_t FDCAN_PSR_EW_B_0x0 = 0;
        /** @brief At least one of error counter has reached the Error_Warning limit of 96. */
    constexpr std::uint32_t FDCAN_PSR_EW_B_0x1 = 1;

    /** @brief Bus_Off status */
    using FDCAN_PSR_BO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The FDCAN is not Bus_Off. (value: 0)
     *          - B_0x1: The FDCAN is in Bus_Off state. (value: 1)
     */
        /** @brief The FDCAN is not Bus_Off. */
    constexpr std::uint32_t FDCAN_PSR_BO_B_0x0 = 0;
        /** @brief The FDCAN is in Bus_Off state. */
    constexpr std::uint32_t FDCAN_PSR_BO_B_0x1 = 1;

    /** @brief Data last error code Type of last error that occurred in the data phase of a FDCAN format frame with its BRS flag set. Coding is the same as for LEC. This field is cleared to 0 when a FDCAN format frame with its BRS flag set has been transferred (reception or transmission) without error. Access type is RS: set on read. */
    using FDCAN_PSR_DLEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ESI flag of last received FDCAN message This bit is set together with REDL, independent of acceptance filtering. Access type is RX: reset on read. */
    using FDCAN_PSR_RESI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Last received FDCAN message did not have its ESI flag set. (value: 0)
     *          - B_0x1: Last received FDCAN message had its ESI flag set. (value: 1)
     */
        /** @brief Last received FDCAN message did not have its ESI flag set. */
    constexpr std::uint32_t FDCAN_PSR_RESI_B_0x0 = 0;
        /** @brief Last received FDCAN message had its ESI flag set. */
    constexpr std::uint32_t FDCAN_PSR_RESI_B_0x1 = 1;

    /** @brief BRS flag of last received FDCAN message This bit is set together with REDL, independent of acceptance filtering. Access type is RX: reset on read. */
    using FDCAN_PSR_RBRS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Last received FDCAN message did not have its BRS flag set. (value: 0)
     *          - B_0x1: Last received FDCAN message had its BRS flag set. (value: 1)
     */
        /** @brief Last received FDCAN message did not have its BRS flag set. */
    constexpr std::uint32_t FDCAN_PSR_RBRS_B_0x0 = 0;
        /** @brief Last received FDCAN message had its BRS flag set. */
    constexpr std::uint32_t FDCAN_PSR_RBRS_B_0x1 = 1;

    /** @brief Received FDCAN message This bit is set independent of acceptance filtering. Access type is RX: reset on read. */
    using FDCAN_PSR_REDL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Since this bit was reset by the CPU, no FDCAN message has been received. (value: 0)
     *          - B_0x1: Message in FDCAN format with EDL flag set has been received. (value: 1)
     */
        /** @brief Since this bit was reset by the CPU, no FDCAN message has been received. */
    constexpr std::uint32_t FDCAN_PSR_REDL_B_0x0 = 0;
        /** @brief Message in FDCAN format with EDL flag set has been received. */
    constexpr std::uint32_t FDCAN_PSR_REDL_B_0x1 = 1;

    /** @brief Protocol exception event */
    using FDCAN_PSR_PXE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No protocol exception event occurred since last read access (value: 0)
     *          - B_0x1: Protocol exception event occurred (value: 1)
     */
        /** @brief No protocol exception event occurred since last read access */
    constexpr std::uint32_t FDCAN_PSR_PXE_B_0x0 = 0;
        /** @brief Protocol exception event occurred */
    constexpr std::uint32_t FDCAN_PSR_PXE_B_0x1 = 1;

    /** @brief Transmitter delay compensation value Position of the secondary sample point, defined by the sum of the measured delay from FDCAN_TX to FDCAN_RX and TDCR.TDCO. The SSP position is, in the data phase, the number of minimum time quanta (mtq) between the start of the transmitted bit and the secondary sample point. Valid values are 0 to 127 mtq. */
    using FDCAN_PSR_TDCV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FDCAN transmitter delay compensation register */
    using FDCAN_TDCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmitter delay compensation filter window length Defines the minimum value for the SSP position, dominant edges on FDCAN_RX that would result in an earlier SSP position are ignored for transmitter delay measurements. These are protected write (P) bits, which means that write access by the bits is possible only when the bit 1 [CCE] and bit 0 [INIT] of CCCR register are set to 1. */
    using FDCAN_TDCR_TDCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmitter delay compensation offset Offset value defining the distance between the measured delay from FDCAN_TX to FDCAN_RX and the secondary sample point. Valid values are 0 to 127 mtq. These are protected write (P) bits, which means that write access by the bits is possible only when the bit 1 [CCE] and bit 0 [INIT] of CCCR register are set to 1. */
    using FDCAN_TDCR_TDCO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FDCAN interrupt register */
    using FDCAN_IR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx FIFO 0 new message */
    using FDCAN_IR_RF0N = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No new message written to Rx FIFO 0 (value: 0)
     *          - B_0x1: New message written to Rx FIFO 0 (value: 1)
     */
        /** @brief No new message written to Rx FIFO 0 */
    constexpr std::uint32_t FDCAN_IR_RF0N_B_0x0 = 0;
        /** @brief New message written to Rx FIFO 0 */
    constexpr std::uint32_t FDCAN_IR_RF0N_B_0x1 = 1;

    /** @brief Rx FIFO 0 full */
    using FDCAN_IR_RF0F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rx FIFO 0 not full (value: 0)
     *          - B_0x1: Rx FIFO 0 full (value: 1)
     */
        /** @brief Rx FIFO 0 not full */
    constexpr std::uint32_t FDCAN_IR_RF0F_B_0x0 = 0;
        /** @brief Rx FIFO 0 full */
    constexpr std::uint32_t FDCAN_IR_RF0F_B_0x1 = 1;

    /** @brief Rx FIFO 0 message lost */
    using FDCAN_IR_RF0L = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No Rx FIFO 0 message lost (value: 0)
     *          - B_0x1: Rx FIFO 0 message lost (value: 1)
     */
        /** @brief No Rx FIFO 0 message lost */
    constexpr std::uint32_t FDCAN_IR_RF0L_B_0x0 = 0;
        /** @brief Rx FIFO 0 message lost */
    constexpr std::uint32_t FDCAN_IR_RF0L_B_0x1 = 1;

    /** @brief Rx FIFO 1 new message */
    using FDCAN_IR_RF1N = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No new message written to Rx FIFO 1 (value: 0)
     *          - B_0x1: New message written to Rx FIFO 1 (value: 1)
     */
        /** @brief No new message written to Rx FIFO 1 */
    constexpr std::uint32_t FDCAN_IR_RF1N_B_0x0 = 0;
        /** @brief New message written to Rx FIFO 1 */
    constexpr std::uint32_t FDCAN_IR_RF1N_B_0x1 = 1;

    /** @brief Rx FIFO 1 full */
    using FDCAN_IR_RF1F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rx FIFO 1 not full (value: 0)
     *          - B_0x1: Rx FIFO 1 full (value: 1)
     */
        /** @brief Rx FIFO 1 not full */
    constexpr std::uint32_t FDCAN_IR_RF1F_B_0x0 = 0;
        /** @brief Rx FIFO 1 full */
    constexpr std::uint32_t FDCAN_IR_RF1F_B_0x1 = 1;

    /** @brief Rx FIFO 1 message lost */
    using FDCAN_IR_RF1L = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No Rx FIFO 1 message lost (value: 0)
     *          - B_0x1: Rx FIFO 1 message lost (value: 1)
     */
        /** @brief No Rx FIFO 1 message lost */
    constexpr std::uint32_t FDCAN_IR_RF1L_B_0x0 = 0;
        /** @brief Rx FIFO 1 message lost */
    constexpr std::uint32_t FDCAN_IR_RF1L_B_0x1 = 1;

    /** @brief High-priority message */
    using FDCAN_IR_HPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No high-priority message received (value: 0)
     *          - B_0x1: High-priority message received (value: 1)
     */
        /** @brief No high-priority message received */
    constexpr std::uint32_t FDCAN_IR_HPM_B_0x0 = 0;
        /** @brief High-priority message received */
    constexpr std::uint32_t FDCAN_IR_HPM_B_0x1 = 1;

    /** @brief Transmission completed */
    using FDCAN_IR_TC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No transmission completed (value: 0)
     *          - B_0x1: Transmission completed (value: 1)
     */
        /** @brief No transmission completed */
    constexpr std::uint32_t FDCAN_IR_TC_B_0x0 = 0;
        /** @brief Transmission completed */
    constexpr std::uint32_t FDCAN_IR_TC_B_0x1 = 1;

    /** @brief Transmission cancellation finished */
    using FDCAN_IR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No transmission cancellation finished (value: 0)
     *          - B_0x1: Transmission cancellation finished (value: 1)
     */
        /** @brief No transmission cancellation finished */
    constexpr std::uint32_t FDCAN_IR_TCF_B_0x0 = 0;
        /** @brief Transmission cancellation finished */
    constexpr std::uint32_t FDCAN_IR_TCF_B_0x1 = 1;

    /** @brief Tx FIFO empty */
    using FDCAN_IR_TFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tx FIFO non-empty (value: 0)
     *          - B_0x1: Tx FIFO empty (value: 1)
     */
        /** @brief Tx FIFO non-empty */
    constexpr std::uint32_t FDCAN_IR_TFE_B_0x0 = 0;
        /** @brief Tx FIFO empty */
    constexpr std::uint32_t FDCAN_IR_TFE_B_0x1 = 1;

    /** @brief Tx event FIFO New Entry */
    using FDCAN_IR_TEFN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tx event FIFO unchanged (value: 0)
     *          - B_0x1: Tx handler wrote Tx event FIFO element. (value: 1)
     */
        /** @brief Tx event FIFO unchanged */
    constexpr std::uint32_t FDCAN_IR_TEFN_B_0x0 = 0;
        /** @brief Tx handler wrote Tx event FIFO element. */
    constexpr std::uint32_t FDCAN_IR_TEFN_B_0x1 = 1;

    /** @brief Tx event FIFO full */
    using FDCAN_IR_TEFF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tx event FIFO Not full (value: 0)
     *          - B_0x1: Tx event FIFO full (value: 1)
     */
        /** @brief Tx event FIFO Not full */
    constexpr std::uint32_t FDCAN_IR_TEFF_B_0x0 = 0;
        /** @brief Tx event FIFO full */
    constexpr std::uint32_t FDCAN_IR_TEFF_B_0x1 = 1;

    /** @brief Tx event FIFO element lost */
    using FDCAN_IR_TEFL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No Tx event FIFO element lost (value: 0)
     *          - B_0x1: Tx event FIFO element lost (value: 1)
     */
        /** @brief No Tx event FIFO element lost */
    constexpr std::uint32_t FDCAN_IR_TEFL_B_0x0 = 0;
        /** @brief Tx event FIFO element lost */
    constexpr std::uint32_t FDCAN_IR_TEFL_B_0x1 = 1;

    /** @brief Timestamp wraparound */
    using FDCAN_IR_TSW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No timestamp counter wrap-around (value: 0)
     *          - B_0x1: Timestamp counter wrapped around (value: 1)
     */
        /** @brief No timestamp counter wrap-around */
    constexpr std::uint32_t FDCAN_IR_TSW_B_0x0 = 0;
        /** @brief Timestamp counter wrapped around */
    constexpr std::uint32_t FDCAN_IR_TSW_B_0x1 = 1;

    /** @brief Message RAM access failure The flag is set when the Rx handler: has not completed acceptance filtering or storage of an accepted message until the arbitration field of the following message has been received. In this case acceptance filtering or message storage is aborted and the Rx Handler starts processing of the following message. was unable to write a message to the message RAM. In this case message storage is aborted. In both cases the FIFO put index is not updated. The partly stored message is overwritten when the next message is stored to this location. The flag is also set when the Tx Handler was not able to read a message from the Message RAM in time. In this case message transmission is aborted. In case of a Tx Handler access failure the FDCAN is switched into Restricted Operation Mode (see mode). To leave Restricted Operation Mode, the Host CPU has to reset CCCR.ASM. */
    using FDCAN_IR_MRAF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No Message RAM access failure occurred (value: 0)
     *          - B_0x1: Message RAM access failure occurred (value: 1)
     */
        /** @brief No Message RAM access failure occurred */
    constexpr std::uint32_t FDCAN_IR_MRAF_B_0x0 = 0;
        /** @brief Message RAM access failure occurred */
    constexpr std::uint32_t FDCAN_IR_MRAF_B_0x1 = 1;

    /** @brief Timeout occurred */
    using FDCAN_IR_TOO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No timeout (value: 0)
     *          - B_0x1: Timeout reached (value: 1)
     */
        /** @brief No timeout */
    constexpr std::uint32_t FDCAN_IR_TOO_B_0x0 = 0;
        /** @brief Timeout reached */
    constexpr std::uint32_t FDCAN_IR_TOO_B_0x1 = 1;

    /** @brief Error logging overflow */
    using FDCAN_IR_ELO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CAN error logging counter did not overflow. (value: 0)
     *          - B_0x1: Overflow of CAN error logging counter occurred. (value: 1)
     */
        /** @brief CAN error logging counter did not overflow. */
    constexpr std::uint32_t FDCAN_IR_ELO_B_0x0 = 0;
        /** @brief Overflow of CAN error logging counter occurred. */
    constexpr std::uint32_t FDCAN_IR_ELO_B_0x1 = 1;

    /** @brief Error passive */
    using FDCAN_IR_EP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Error_Passive status unchanged (value: 0)
     *          - B_0x1: Error_Passive status changed (value: 1)
     */
        /** @brief Error_Passive status unchanged */
    constexpr std::uint32_t FDCAN_IR_EP_B_0x0 = 0;
        /** @brief Error_Passive status changed */
    constexpr std::uint32_t FDCAN_IR_EP_B_0x1 = 1;

    /** @brief Warning status */
    using FDCAN_IR_EW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Error_Warning status unchanged (value: 0)
     *          - B_0x1: Error_Warning status changed (value: 1)
     */
        /** @brief Error_Warning status unchanged */
    constexpr std::uint32_t FDCAN_IR_EW_B_0x0 = 0;
        /** @brief Error_Warning status changed */
    constexpr std::uint32_t FDCAN_IR_EW_B_0x1 = 1;

    /** @brief Bus_Off status */
    using FDCAN_IR_BO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bus_Off status unchanged (value: 0)
     *          - B_0x1: Bus_Off status changed (value: 1)
     */
        /** @brief Bus_Off status unchanged */
    constexpr std::uint32_t FDCAN_IR_BO_B_0x0 = 0;
        /** @brief Bus_Off status changed */
    constexpr std::uint32_t FDCAN_IR_BO_B_0x1 = 1;

    /** @brief Watchdog interrupt */
    using FDCAN_IR_WDI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No message RAM watchdog event occurred (value: 0)
     *          - B_0x1: Message RAM watchdog event due to missing READY (value: 1)
     */
        /** @brief No message RAM watchdog event occurred */
    constexpr std::uint32_t FDCAN_IR_WDI_B_0x0 = 0;
        /** @brief Message RAM watchdog event due to missing READY */
    constexpr std::uint32_t FDCAN_IR_WDI_B_0x1 = 1;

    /** @brief Protocol error in arbitration phase (nominal bit time is used) */
    using FDCAN_IR_PEA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No protocol error in arbitration phase (value: 0)
     *          - B_0x1: Protocol error in arbitration phase detected (PSR.LEC different from 0,7) (value: 1)
     */
        /** @brief No protocol error in arbitration phase */
    constexpr std::uint32_t FDCAN_IR_PEA_B_0x0 = 0;
        /** @brief Protocol error in arbitration phase detected (PSR.LEC different from 0,7) */
    constexpr std::uint32_t FDCAN_IR_PEA_B_0x1 = 1;

    /** @brief Protocol error in data phase (data bit time is used) */
    using FDCAN_IR_PED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No protocol error in data phase (value: 0)
     *          - B_0x1: Protocol error in data phase detected (PSR.DLEC different from 0,7) (value: 1)
     */
        /** @brief No protocol error in data phase */
    constexpr std::uint32_t FDCAN_IR_PED_B_0x0 = 0;
        /** @brief Protocol error in data phase detected (PSR.DLEC different from 0,7) */
    constexpr std::uint32_t FDCAN_IR_PED_B_0x1 = 1;

    /** @brief Access to reserved address */
    using FDCAN_IR_ARA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No access to reserved address occurred (value: 0)
     *          - B_0x1: Access to reserved address occurred (value: 1)
     */
        /** @brief No access to reserved address occurred */
    constexpr std::uint32_t FDCAN_IR_ARA_B_0x0 = 0;
        /** @brief Access to reserved address occurred */
    constexpr std::uint32_t FDCAN_IR_ARA_B_0x1 = 1;

    /** @brief FDCAN interrupt enable register */
    using FDCAN_IE = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx FIFO 0 new message interrupt enable */
    using FDCAN_IE_RF0NE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t FDCAN_IE_RF0NE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t FDCAN_IE_RF0NE_B_0x1 = 1;

    /** @brief Rx FIFO 0 full interrupt enable */
    using FDCAN_IE_RF0FE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t FDCAN_IE_RF0FE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t FDCAN_IE_RF0FE_B_0x1 = 1;

    /** @brief Rx FIFO 0 message lost interrupt enable */
    using FDCAN_IE_RF0LE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t FDCAN_IE_RF0LE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t FDCAN_IE_RF0LE_B_0x1 = 1;

    /** @brief Rx FIFO 1 new message interrupt enable */
    using FDCAN_IE_RF1NE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t FDCAN_IE_RF1NE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t FDCAN_IE_RF1NE_B_0x1 = 1;

    /** @brief Rx FIFO 1 full interrupt enable */
    using FDCAN_IE_RF1FE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t FDCAN_IE_RF1FE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t FDCAN_IE_RF1FE_B_0x1 = 1;

    /** @brief Rx FIFO 1 message lost interrupt enable */
    using FDCAN_IE_RF1LE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t FDCAN_IE_RF1LE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t FDCAN_IE_RF1LE_B_0x1 = 1;

    /** @brief High-priority message interrupt enable */
    using FDCAN_IE_HPME = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t FDCAN_IE_HPME_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t FDCAN_IE_HPME_B_0x1 = 1;

    /** @brief Transmission completed interrupt enable */
    using FDCAN_IE_TCE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t FDCAN_IE_TCE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t FDCAN_IE_TCE_B_0x1 = 1;

    /** @brief Transmission cancellation finished interrupt enable */
    using FDCAN_IE_TCFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t FDCAN_IE_TCFE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t FDCAN_IE_TCFE_B_0x1 = 1;

    /** @brief Tx FIFO empty interrupt enable */
    using FDCAN_IE_TFEE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t FDCAN_IE_TFEE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t FDCAN_IE_TFEE_B_0x1 = 1;

    /** @brief Tx event FIFO new entry interrupt enable */
    using FDCAN_IE_TEFNE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t FDCAN_IE_TEFNE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t FDCAN_IE_TEFNE_B_0x1 = 1;

    /** @brief Tx event FIFO full interrupt enable */
    using FDCAN_IE_TEFFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t FDCAN_IE_TEFFE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t FDCAN_IE_TEFFE_B_0x1 = 1;

    /** @brief Tx event FIFO element lost interrupt enable */
    using FDCAN_IE_TEFLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t FDCAN_IE_TEFLE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t FDCAN_IE_TEFLE_B_0x1 = 1;

    /** @brief Timestamp wraparound interrupt enable */
    using FDCAN_IE_TSWE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t FDCAN_IE_TSWE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t FDCAN_IE_TSWE_B_0x1 = 1;

    /** @brief Message RAM access failure interrupt enable */
    using FDCAN_IE_MRAFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t FDCAN_IE_MRAFE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t FDCAN_IE_MRAFE_B_0x1 = 1;

    /** @brief Timeout occurred interrupt enable */
    using FDCAN_IE_TOOE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t FDCAN_IE_TOOE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t FDCAN_IE_TOOE_B_0x1 = 1;

    /** @brief Error logging overflow interrupt enable */
    using FDCAN_IE_ELOE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t FDCAN_IE_ELOE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t FDCAN_IE_ELOE_B_0x1 = 1;

    /** @brief Error passive interrupt enable */
    using FDCAN_IE_EPE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t FDCAN_IE_EPE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t FDCAN_IE_EPE_B_0x1 = 1;

    /** @brief Warning status interrupt enable */
    using FDCAN_IE_EWE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t FDCAN_IE_EWE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t FDCAN_IE_EWE_B_0x1 = 1;

    /** @brief Bus_Off status */
    using FDCAN_IE_BOE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t FDCAN_IE_BOE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t FDCAN_IE_BOE_B_0x1 = 1;

    /** @brief Watchdog interrupt enable */
    using FDCAN_IE_WDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t FDCAN_IE_WDIE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t FDCAN_IE_WDIE_B_0x1 = 1;

    /** @brief Protocol error in arbitration phase enable */
    using FDCAN_IE_PEAE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Protocol error in data phase enable */
    using FDCAN_IE_PEDE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Access to reserved address enable */
    using FDCAN_IE_ARAE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FDCAN interrupt line select register */
    using FDCAN_ILS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x58, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RX FIFO bit grouping the following interruption RF0LL: Rx FIFO 0 message lost interrupt line RF0FL: Rx FIFO 0 full interrupt line RF0NL: Rx FIFO 0 new message interrupt line */
    using FDCAN_ILS_RxFIFO0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RX FIFO bit grouping the following interruption RF1LL: Rx FIFO 1 message lost interrupt line RF1FL: Rx FIFO 1 full Interrupt line RF1NL: Rx FIFO 1 new message interrupt line */
    using FDCAN_ILS_RxFIFO1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Status message bit grouping the following interruption TCFL: Transmission cancellation finished interrupt line TCL: Transmission completed interrupt line HPML: High-priority message interrupt line */
    using FDCAN_ILS_SMSG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx FIFO ERROR grouping the following interruption TEFLL: Tx event FIFO element lost interrupt line TEFFL: Tx event FIFO full interrupt line TEFNL: Tx event FIFO new entry interrupt line TFEL: Tx FIFO empty interrupt line */
    using FDCAN_ILS_TFERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt regrouping the following interruption TOOL: Timeout occurred interrupt line MRAFL: Message RAM access failure interrupt line TSWL: Timestamp wraparound interrupt line */
    using FDCAN_ILS_MISC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BERR */
    using FDCAN_ILS_BERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Protocol error grouping the following interruption ARAL: Access to reserved address line PEDL: Protocol error in data phase line PEAL: Protocol error in arbitration phase line WDIL: Watchdog interrupt line BOL: Bus_Off status EWL: Warning status interrupt line */
    using FDCAN_ILS_PERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FDCAN interrupt line enable register */
    using FDCAN_ILE = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable interrupt line 0 */
    using FDCAN_ILE_EINT0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt line fdcan_intr1_it disabled (value: 0)
     *          - B_0x1: Interrupt line fdcan_intr1_it enabled (value: 1)
     */
        /** @brief Interrupt line fdcan_intr1_it disabled */
    constexpr std::uint32_t FDCAN_ILE_EINT0_B_0x0 = 0;
        /** @brief Interrupt line fdcan_intr1_it enabled */
    constexpr std::uint32_t FDCAN_ILE_EINT0_B_0x1 = 1;

    /** @brief Enable interrupt line 1 */
    using FDCAN_ILE_EINT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt line fdcan_intr0_it disabled (value: 0)
     *          - B_0x1: Interrupt line fdcan_intr0_it enabled (value: 1)
     */
        /** @brief Interrupt line fdcan_intr0_it disabled */
    constexpr std::uint32_t FDCAN_ILE_EINT1_B_0x0 = 0;
        /** @brief Interrupt line fdcan_intr0_it enabled */
    constexpr std::uint32_t FDCAN_ILE_EINT1_B_0x1 = 1;

    /** @brief FDCAN global filter configuration register */
    using FDCAN_RXGFC = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x80, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reject remote frames extended These are protected write (P) bits, which means that write access by the bits is possible only when the bit 1 [CCE] and bit 0 [INIT] of CCCR register are set to 1. */
    using FDCAN_RXGFC_RRFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Filter remote frames with 29-bit standard IDs (value: 0)
     *          - B_0x1: Reject all remote frames with 29-bit standard IDs (value: 1)
     */
        /** @brief Filter remote frames with 29-bit standard IDs */
    constexpr std::uint32_t FDCAN_RXGFC_RRFE_B_0x0 = 0;
        /** @brief Reject all remote frames with 29-bit standard IDs */
    constexpr std::uint32_t FDCAN_RXGFC_RRFE_B_0x1 = 1;

    /** @brief Reject remote frames standard These are protected write (P) bits, which means that write access by the bits is possible only when the bit 1 [CCE] and bit 0 [INIT] of CCCR register are set to 1. */
    using FDCAN_RXGFC_RRFS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Filter remote frames with 11-bit standard IDs (value: 0)
     *          - B_0x1: Reject all remote frames with 11-bit standard IDs (value: 1)
     */
        /** @brief Filter remote frames with 11-bit standard IDs */
    constexpr std::uint32_t FDCAN_RXGFC_RRFS_B_0x0 = 0;
        /** @brief Reject all remote frames with 11-bit standard IDs */
    constexpr std::uint32_t FDCAN_RXGFC_RRFS_B_0x1 = 1;

    /** @brief Accept non-matching frames extended Defines how received messages with 29-bit IDs that do not match any element of the filter list are treated. These are protected write (P) bits, which means that write access by the bits is possible only when the bit 1 [CCE] and bit 0 [INIT] of CCCR register are set to 1. */
    using FDCAN_RXGFC_ANFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Accept in Rx FIFO 0 (value: 0)
     *          - B_0x1: Accept in Rx FIFO 1 (value: 1)
     *          - B_0x2: Reject (value: 2)
     *          - B_0x3: Reject (value: 3)
     */
        /** @brief Accept in Rx FIFO 0 */
    constexpr std::uint32_t FDCAN_RXGFC_ANFE_B_0x0 = 0;
        /** @brief Accept in Rx FIFO 1 */
    constexpr std::uint32_t FDCAN_RXGFC_ANFE_B_0x1 = 1;
        /** @brief Reject */
    constexpr std::uint32_t FDCAN_RXGFC_ANFE_B_0x2 = 2;
        /** @brief Reject */
    constexpr std::uint32_t FDCAN_RXGFC_ANFE_B_0x3 = 3;

    /** @brief Accept Non-matching frames standard Defines how received messages with 11-bit IDs that do not match any element of the filter list are treated. These are protected write (P) bits, which means that write access by the bits is possible only when the bit 1 [CCE] and bit 0 [INIT] of CCCR register are set to 1. */
    using FDCAN_RXGFC_ANFS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Accept in Rx FIFO 0 (value: 0)
     *          - B_0x1: Accept in Rx FIFO 1 (value: 1)
     *          - B_0x2: Reject (value: 2)
     *          - B_0x3: Reject (value: 3)
     */
        /** @brief Accept in Rx FIFO 0 */
    constexpr std::uint32_t FDCAN_RXGFC_ANFS_B_0x0 = 0;
        /** @brief Accept in Rx FIFO 1 */
    constexpr std::uint32_t FDCAN_RXGFC_ANFS_B_0x1 = 1;
        /** @brief Reject */
    constexpr std::uint32_t FDCAN_RXGFC_ANFS_B_0x2 = 2;
        /** @brief Reject */
    constexpr std::uint32_t FDCAN_RXGFC_ANFS_B_0x3 = 3;

    /** @brief FIFO 1 operation mode (overwrite or blocking) This is a protected write (P) bits, which means that write access by the bits is possible only when the bit 1 [CCE] and bit 0 [INIT] of CCCR register are set to 1. */
    using FDCAN_RXGFC_F1OM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FIFO 0 operation mode (overwrite or blocking) This is protected write (P) bits, which means that write access by the bits is possible only when the bit 1 [CCE] and bit 0 [INIT] of CCCR register are set to 1. */
    using FDCAN_RXGFC_F0OM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief List size standard >28: Values greater than 28 are interpreted as 28. These are protected write (P) bits, which means that write access by the bits is possible only when the bit 1 [CCE] and bit 0 [INIT] of CCCR register are set to 1. */
    using FDCAN_RXGFC_LSS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No standard message ID filter (value: 0)
     *          - B_0x1: Number of standard message ID filter elements (value: 1)
     *          - B_0x2: Number of standard message ID filter elements (value: 2)
     *          - B_0x3: Number of standard message ID filter elements (value: 3)
     *          - B_0x4: Number of standard message ID filter elements (value: 4)
     *          - B_0x5: Number of standard message ID filter elements (value: 5)
     *          - B_0x6: Number of standard message ID filter elements (value: 6)
     *          - B_0x7: Number of standard message ID filter elements (value: 7)
     *          - B_0x8: Number of standard message ID filter elements (value: 8)
     *          - B_0x9: Number of standard message ID filter elements (value: 9)
     *          - B_0xa: Number of standard message ID filter elements (value: 10)
     *          - B_0xb: Number of standard message ID filter elements (value: 11)
     *          - B_0xc: Number of standard message ID filter elements (value: 12)
     *          - B_0xd: Number of standard message ID filter elements (value: 13)
     *          - B_0xe: Number of standard message ID filter elements (value: 14)
     *          - B_0xf: Number of standard message ID filter elements (value: 15)
     *          - B_0x10: Number of standard message ID filter elements (value: 16)
     *          - B_0x11: Number of standard message ID filter elements (value: 17)
     *          - B_0x12: Number of standard message ID filter elements (value: 18)
     *          - B_0x13: Number of standard message ID filter elements (value: 19)
     *          - B_0x14: Number of standard message ID filter elements (value: 20)
     *          - B_0x15: Number of standard message ID filter elements (value: 21)
     *          - B_0x16: Number of standard message ID filter elements (value: 22)
     *          - B_0x17: Number of standard message ID filter elements (value: 23)
     *          - B_0x18: Number of standard message ID filter elements (value: 24)
     *          - B_0x19: Number of standard message ID filter elements (value: 25)
     *          - B_0x1a: Number of standard message ID filter elements (value: 26)
     *          - B_0x1b: Number of standard message ID filter elements (value: 27)
     *          - B_0x1c: Number of standard message ID filter elements (value: 28)
     */
        /** @brief No standard message ID filter */
    constexpr std::uint32_t FDCAN_RXGFC_LSS_B_0x0 = 0;
        /** @brief Number of standard message ID filter elements */
    constexpr std::uint32_t FDCAN_RXGFC_LSS_B_0x1 = 1;
        /** @brief Number of standard message ID filter elements */
    constexpr std::uint32_t FDCAN_RXGFC_LSS_B_0x2 = 2;
        /** @brief Number of standard message ID filter elements */
    constexpr std::uint32_t FDCAN_RXGFC_LSS_B_0x3 = 3;
        /** @brief Number of standard message ID filter elements */
    constexpr std::uint32_t FDCAN_RXGFC_LSS_B_0x4 = 4;
        /** @brief Number of standard message ID filter elements */
    constexpr std::uint32_t FDCAN_RXGFC_LSS_B_0x5 = 5;
        /** @brief Number of standard message ID filter elements */
    constexpr std::uint32_t FDCAN_RXGFC_LSS_B_0x6 = 6;
        /** @brief Number of standard message ID filter elements */
    constexpr std::uint32_t FDCAN_RXGFC_LSS_B_0x7 = 7;
        /** @brief Number of standard message ID filter elements */
    constexpr std::uint32_t FDCAN_RXGFC_LSS_B_0x8 = 8;
        /** @brief Number of standard message ID filter elements */
    constexpr std::uint32_t FDCAN_RXGFC_LSS_B_0x9 = 9;
        /** @brief Number of standard message ID filter elements */
    constexpr std::uint32_t FDCAN_RXGFC_LSS_B_0xa = 10;
        /** @brief Number of standard message ID filter elements */
    constexpr std::uint32_t FDCAN_RXGFC_LSS_B_0xb = 11;
        /** @brief Number of standard message ID filter elements */
    constexpr std::uint32_t FDCAN_RXGFC_LSS_B_0xc = 12;
        /** @brief Number of standard message ID filter elements */
    constexpr std::uint32_t FDCAN_RXGFC_LSS_B_0xd = 13;
        /** @brief Number of standard message ID filter elements */
    constexpr std::uint32_t FDCAN_RXGFC_LSS_B_0xe = 14;
        /** @brief Number of standard message ID filter elements */
    constexpr std::uint32_t FDCAN_RXGFC_LSS_B_0xf = 15;
        /** @brief Number of standard message ID filter elements */
    constexpr std::uint32_t FDCAN_RXGFC_LSS_B_0x10 = 16;
        /** @brief Number of standard message ID filter elements */
    constexpr std::uint32_t FDCAN_RXGFC_LSS_B_0x11 = 17;
        /** @brief Number of standard message ID filter elements */
    constexpr std::uint32_t FDCAN_RXGFC_LSS_B_0x12 = 18;
        /** @brief Number of standard message ID filter elements */
    constexpr std::uint32_t FDCAN_RXGFC_LSS_B_0x13 = 19;
        /** @brief Number of standard message ID filter elements */
    constexpr std::uint32_t FDCAN_RXGFC_LSS_B_0x14 = 20;
        /** @brief Number of standard message ID filter elements */
    constexpr std::uint32_t FDCAN_RXGFC_LSS_B_0x15 = 21;
        /** @brief Number of standard message ID filter elements */
    constexpr std::uint32_t FDCAN_RXGFC_LSS_B_0x16 = 22;
        /** @brief Number of standard message ID filter elements */
    constexpr std::uint32_t FDCAN_RXGFC_LSS_B_0x17 = 23;
        /** @brief Number of standard message ID filter elements */
    constexpr std::uint32_t FDCAN_RXGFC_LSS_B_0x18 = 24;
        /** @brief Number of standard message ID filter elements */
    constexpr std::uint32_t FDCAN_RXGFC_LSS_B_0x19 = 25;
        /** @brief Number of standard message ID filter elements */
    constexpr std::uint32_t FDCAN_RXGFC_LSS_B_0x1a = 26;
        /** @brief Number of standard message ID filter elements */
    constexpr std::uint32_t FDCAN_RXGFC_LSS_B_0x1b = 27;
        /** @brief Number of standard message ID filter elements */
    constexpr std::uint32_t FDCAN_RXGFC_LSS_B_0x1c = 28;

    /** @brief List size extended >8: Values greater than 8 are interpreted as 8. These are protected write (P) bits, which means that write access by the bits is possible only when the bit 1 [CCE] and bit 0 [INIT] of CCCR register are set to 1. */
    using FDCAN_RXGFC_LSE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No extended message ID filter (value: 0)
     *          - B_0x1: Number of extended message ID filter elements (value: 1)
     *          - B_0x2: Number of extended message ID filter elements (value: 2)
     *          - B_0x3: Number of extended message ID filter elements (value: 3)
     *          - B_0x4: Number of extended message ID filter elements (value: 4)
     *          - B_0x5: Number of extended message ID filter elements (value: 5)
     *          - B_0x6: Number of extended message ID filter elements (value: 6)
     *          - B_0x7: Number of extended message ID filter elements (value: 7)
     *          - B_0x8: Number of extended message ID filter elements (value: 8)
     */
        /** @brief No extended message ID filter */
    constexpr std::uint32_t FDCAN_RXGFC_LSE_B_0x0 = 0;
        /** @brief Number of extended message ID filter elements */
    constexpr std::uint32_t FDCAN_RXGFC_LSE_B_0x1 = 1;
        /** @brief Number of extended message ID filter elements */
    constexpr std::uint32_t FDCAN_RXGFC_LSE_B_0x2 = 2;
        /** @brief Number of extended message ID filter elements */
    constexpr std::uint32_t FDCAN_RXGFC_LSE_B_0x3 = 3;
        /** @brief Number of extended message ID filter elements */
    constexpr std::uint32_t FDCAN_RXGFC_LSE_B_0x4 = 4;
        /** @brief Number of extended message ID filter elements */
    constexpr std::uint32_t FDCAN_RXGFC_LSE_B_0x5 = 5;
        /** @brief Number of extended message ID filter elements */
    constexpr std::uint32_t FDCAN_RXGFC_LSE_B_0x6 = 6;
        /** @brief Number of extended message ID filter elements */
    constexpr std::uint32_t FDCAN_RXGFC_LSE_B_0x7 = 7;
        /** @brief Number of extended message ID filter elements */
    constexpr std::uint32_t FDCAN_RXGFC_LSE_B_0x8 = 8;

    /** @brief FDCAN extended ID and mask register */
    using FDCAN_XIDAM = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x84, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extended ID mask For acceptance filtering of extended frames the Extended ID AND Mask is AND-ed with the Message ID of a received frame. Intended for masking of 29-bit IDs in SAE J1939. With the reset value of all bits set to 1 the mask is not active. These are protected write (P) bits, which means that write access by the bits is possible only when the bit 1 [CCE] and bit 0 [INIT] of CCCR register are set to 1. */
    using FDCAN_XIDAM_EIDM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 29, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FDCAN high-priority message status register */
    using FDCAN_HPMS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x88, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Buffer index Index of Rx FIFO element to which the message was stored. Only valid when MSI[1] = 1. */
    using FDCAN_HPMS_BIDX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Message storage indicator */
    using FDCAN_HPMS_MSI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No FIFO selected (value: 0)
     *          - B_0x1: FIFO overrun (value: 1)
     *          - B_0x2: Message stored in FIFO 0 (value: 2)
     *          - B_0x3: Message stored in FIFO 1 (value: 3)
     */
        /** @brief No FIFO selected */
    constexpr std::uint32_t FDCAN_HPMS_MSI_B_0x0 = 0;
        /** @brief FIFO overrun */
    constexpr std::uint32_t FDCAN_HPMS_MSI_B_0x1 = 1;
        /** @brief Message stored in FIFO 0 */
    constexpr std::uint32_t FDCAN_HPMS_MSI_B_0x2 = 2;
        /** @brief Message stored in FIFO 1 */
    constexpr std::uint32_t FDCAN_HPMS_MSI_B_0x3 = 3;

    /** @brief Filter index Index of matching filter element. Range is 0 to RXGFC[LSS] - 1 or RXGFC[LSE] - 1. */
    using FDCAN_HPMS_FIDX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Filter list Indicates the filter list of the matching filter element. */
    using FDCAN_HPMS_FLST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Standard filter list (value: 0)
     *          - B_0x1: Extended filter list (value: 1)
     */
        /** @brief Standard filter list */
    constexpr std::uint32_t FDCAN_HPMS_FLST_B_0x0 = 0;
        /** @brief Extended filter list */
    constexpr std::uint32_t FDCAN_HPMS_FLST_B_0x1 = 1;

    /** @brief FDCAN Rx FIFO 0 status register */
    using FDCAN_RXF0S = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x90, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx FIFO 0 fill level Number of elements stored in Rx FIFO 0, range 0 to 3. */
    using FDCAN_RXF0S_F0FL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx FIFO 0 get index Rx FIFO 0 read index pointer, range 0 to 2. */
    using FDCAN_RXF0S_F0GI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx FIFO 0 put index Rx FIFO 0 write index pointer, range 0 to 2. */
    using FDCAN_RXF0S_F0PI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx FIFO 0 full */
    using FDCAN_RXF0S_F0F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rx FIFO 0 not full (value: 0)
     *          - B_0x1: Rx FIFO 0 full (value: 1)
     */
        /** @brief Rx FIFO 0 not full */
    constexpr std::uint32_t FDCAN_RXF0S_F0F_B_0x0 = 0;
        /** @brief Rx FIFO 0 full */
    constexpr std::uint32_t FDCAN_RXF0S_F0F_B_0x1 = 1;

    /** @brief Rx FIFO 0 message lost This bit is a copy of interrupt flag IR[RF0L]. When IR[RF0L] is reset, this bit is also reset. */
    using FDCAN_RXF0S_RF0L = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No Rx FIFO 0 message lost (value: 0)
     *          - B_0x1: Rx FIFO 0 message lost, also set after write attempt to Rx FIFO 0 of size 0 (value: 1)
     */
        /** @brief No Rx FIFO 0 message lost */
    constexpr std::uint32_t FDCAN_RXF0S_RF0L_B_0x0 = 0;
        /** @brief Rx FIFO 0 message lost, also set after write attempt to Rx FIFO 0 of size 0 */
    constexpr std::uint32_t FDCAN_RXF0S_RF0L_B_0x1 = 1;

    /** @brief CAN Rx FIFO 0 acknowledge register */
    using FDCAN_RXF0A = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x94, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx FIFO 0 acknowledge index After the Host has read a message or a sequence of messages from Rx FIFO 0 it has to write the buffer index of the last element read from Rx FIFO 0 to F0AI. This sets the Rx FIFO0 get index RXF0S[F0GI] to F0AI + 1 and update the FIFO 0 fill level RXF0S[F0FL]. */
    using FDCAN_RXF0A_F0AI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FDCAN Rx FIFO 1 status register */
    using FDCAN_RXF1S = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x98, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx FIFO 1 fill level Number of elements stored in Rx FIFO 1, range 0 to 3. */
    using FDCAN_RXF1S_F1FL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx FIFO 1 get index Rx FIFO 1 read index pointer, range 0 to 2. */
    using FDCAN_RXF1S_F1GI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx FIFO 1 put index Rx FIFO 1 write index pointer, range 0 to 2. */
    using FDCAN_RXF1S_F1PI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx FIFO 1 full */
    using FDCAN_RXF1S_F1F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rx FIFO 1 not full (value: 0)
     *          - B_0x1: Rx FIFO 1 full (value: 1)
     */
        /** @brief Rx FIFO 1 not full */
    constexpr std::uint32_t FDCAN_RXF1S_F1F_B_0x0 = 0;
        /** @brief Rx FIFO 1 full */
    constexpr std::uint32_t FDCAN_RXF1S_F1F_B_0x1 = 1;

    /** @brief Rx FIFO 1 message lost This bit is a copy of interrupt flag IR[RF1L]. When IR[RF1L] is reset, this bit is also reset. */
    using FDCAN_RXF1S_RF1L = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No Rx FIFO 1 message lost (value: 0)
     *          - B_0x1: Rx FIFO 1 message lost, also set after write attempt to Rx FIFO 1 of size 0 (value: 1)
     */
        /** @brief No Rx FIFO 1 message lost */
    constexpr std::uint32_t FDCAN_RXF1S_RF1L_B_0x0 = 0;
        /** @brief Rx FIFO 1 message lost, also set after write attempt to Rx FIFO 1 of size 0 */
    constexpr std::uint32_t FDCAN_RXF1S_RF1L_B_0x1 = 1;

    /** @brief FDCAN Rx FIFO 1 acknowledge register */
    using FDCAN_RXF1A = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx FIFO 1 acknowledge index After the Host has read a message or a sequence of messages from Rx FIFO 1 it has to write the buffer index of the last element read from Rx FIFO 1 to F1AI. This sets the Rx FIFO1 get index RXF1S[F1GI] to F1AI + 1 and update the FIFO 1 Fill Level RXF1S[F1FL]. */
    using FDCAN_RXF1A_F1AI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FDCAN Tx buffer configuration register */
    using FDCAN_TXBC = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx FIFO/queue mode This is a protected write (P) bit, which means that write access by the bits is possible only when the bit 1 [CCE] and bit 0 [INIT] of CCCR register are set to 1. */
    using FDCAN_TXBC_TFQM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tx FIFO operation (value: 0)
     *          - B_0x1: Tx queue operation. (value: 1)
     */
        /** @brief Tx FIFO operation */
    constexpr std::uint32_t FDCAN_TXBC_TFQM_B_0x0 = 0;
        /** @brief Tx queue operation. */
    constexpr std::uint32_t FDCAN_TXBC_TFQM_B_0x1 = 1;

    /** @brief FDCAN Tx FIFO/queue status register */
    using FDCAN_TXFQS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx FIFO free level Number of consecutive free Tx FIFO elements starting from TFGI, range 0 to 3. Read as 0 when Tx queue operation is configured (TXBC[TFQM] = 1). */
    using FDCAN_TXFQS_TFFL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx FIFO get index Tx FIFO read index pointer, range 0 to 3. Read as 0 when Tx queue operation is configured (TXBC.TFQM = 1) */
    using FDCAN_TXFQS_TFGI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx FIFO/queue put index Tx FIFO/queue write index pointer, range 0 to 3 */
    using FDCAN_TXFQS_TFQPI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx FIFO/queue full */
    using FDCAN_TXFQS_TFQF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tx FIFO/queue not full (value: 0)
     *          - B_0x1: Tx FIFO/queue full (value: 1)
     */
        /** @brief Tx FIFO/queue not full */
    constexpr std::uint32_t FDCAN_TXFQS_TFQF_B_0x0 = 0;
        /** @brief Tx FIFO/queue full */
    constexpr std::uint32_t FDCAN_TXFQS_TFQF_B_0x1 = 1;

    /** @brief FDCAN Tx buffer request pending register */
    using FDCAN_TXBRP = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission request pending Each Tx Buffer has its own transmission request pending bit. The bits are set via register TXBAR. The bits are reset after a requested transmission has completed or has been canceled via register TXBCR. After a TXBRP bit has been set, a Tx scan is started to check for the pending Tx request with the highest priority (Tx Buffer with lowest Message ID). A cancellation request resets the corresponding transmission request pending bit of register TXBRP. In case a transmission has already been started when a cancellation is requested, this is done at the end of the transmission, regardless whether the transmission was successful or not. The cancellation request bits are reset directly after the corresponding TXBRP bit has been reset. After a cancellation has been requested, a finished cancellation is signaled via TXBCF after successful transmission together with the corresponding TXBTO bit when the transmission has not yet been started at the point of cancellation when the transmission has been aborted due to lost arbitration when an error occurred during frame transmission In DAR mode all transmissions are automatically canceled if they are not successful. The corresponding TXBCF bit is set for all unsuccessful transmissions. */
    using FDCAN_TXBRP_TRP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No transmission request pending (value: 0)
     *          - B_0x1: Transmission request pending (value: 1)
     */
        /** @brief No transmission request pending */
    constexpr std::uint32_t FDCAN_TXBRP_TRP_B_0x0 = 0;
        /** @brief Transmission request pending */
    constexpr std::uint32_t FDCAN_TXBRP_TRP_B_0x1 = 1;

    /** @brief FDCAN Tx buffer add request register */
    using FDCAN_TXBAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xCC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Add request Each Tx buffer has its own add request bit. Writing a 1 sets the corresponding add request bit; writing a 0 has no impact. This enables the Host to set transmission requests for multiple Tx buffers with one write to TXBAR. When no Tx scan is running, the bits are reset immediately, else the bits remain set until the Tx scan process has completed. */
    using FDCAN_TXBAR_AR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No transmission request added (value: 0)
     *          - B_0x1: Transmission requested added. (value: 1)
     */
        /** @brief No transmission request added */
    constexpr std::uint32_t FDCAN_TXBAR_AR_B_0x0 = 0;
        /** @brief Transmission requested added. */
    constexpr std::uint32_t FDCAN_TXBAR_AR_B_0x1 = 1;

    /** @brief FDCAN Tx buffer cancellation request register */
    using FDCAN_TXBCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Cancellation request Each Tx buffer has its own cancellation request bit. Writing a 1 sets the corresponding CR bit; writing a 0 has no impact. This enables the Host to set cancellation requests for multiple Tx buffers with one write to TXBCR. The bits remain set until the corresponding TXBRP bit is reset. */
    using FDCAN_TXBCR_CR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No cancellation pending (value: 0)
     *          - B_0x1: Cancellation pending (value: 1)
     */
        /** @brief No cancellation pending */
    constexpr std::uint32_t FDCAN_TXBCR_CR_B_0x0 = 0;
        /** @brief Cancellation pending */
    constexpr std::uint32_t FDCAN_TXBCR_CR_B_0x1 = 1;

    /** @brief FDCAN Tx buffer transmission occurred register */
    using FDCAN_TXBTO = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission occurred. Each Tx buffer has its own TO bit. The bits are set when the corresponding TXBRP bit is cleared after a successful transmission. The bits are reset when a new transmission is requested by writing a 1 to the corresponding bit of register TXBAR. */
    using FDCAN_TXBTO_TO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No transmission occurred (value: 0)
     *          - B_0x1: Transmission occurred (value: 1)
     */
        /** @brief No transmission occurred */
    constexpr std::uint32_t FDCAN_TXBTO_TO_B_0x0 = 0;
        /** @brief Transmission occurred */
    constexpr std::uint32_t FDCAN_TXBTO_TO_B_0x1 = 1;

    /** @brief FDCAN Tx buffer cancellation finished register */
    using FDCAN_TXBCF = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Cancellation finished Each Tx buffer has its own CF bit. The bits are set when the corresponding TXBRP bit is cleared after a cancellation was requested via TXBCR. In case the corresponding TXBRP bit was not set at the point of cancellation, CF is set immediately. The bits are reset when a new transmission is requested by writing a 1 to the corresponding bit of register TXBAR. */
    using FDCAN_TXBCF_CF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No transmit buffer cancellation (value: 0)
     *          - B_0x1: Transmit buffer cancellation finished (value: 1)
     */
        /** @brief No transmit buffer cancellation */
    constexpr std::uint32_t FDCAN_TXBCF_CF_B_0x0 = 0;
        /** @brief Transmit buffer cancellation finished */
    constexpr std::uint32_t FDCAN_TXBCF_CF_B_0x1 = 1;

    /** @brief FDCAN Tx buffer transmission interrupt enable register */
    using FDCAN_TXBTIE = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xDC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission interrupt enable Each Tx buffer has its own TIE bit. */
    using FDCAN_TXBTIE_TIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Transmission interrupt disabled (value: 0)
     *          - B_0x1: Transmission interrupt enable (value: 1)
     */
        /** @brief Transmission interrupt disabled */
    constexpr std::uint32_t FDCAN_TXBTIE_TIE_B_0x0 = 0;
        /** @brief Transmission interrupt enable */
    constexpr std::uint32_t FDCAN_TXBTIE_TIE_B_0x1 = 1;

    /** @brief FDCAN Tx buffer cancellation finished interrupt enable register */
    using FDCAN_TXBCIE = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xE0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Cancellation finished interrupt enable. Each Tx buffer has its own CFIE bit. */
    using FDCAN_TXBCIE_CFIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Cancellation finished interrupt disabled (value: 0)
     *          - B_0x1: Cancellation finished interrupt enabled (value: 1)
     */
        /** @brief Cancellation finished interrupt disabled */
    constexpr std::uint32_t FDCAN_TXBCIE_CFIE_B_0x0 = 0;
        /** @brief Cancellation finished interrupt enabled */
    constexpr std::uint32_t FDCAN_TXBCIE_CFIE_B_0x1 = 1;

    /** @brief FDCAN Tx event FIFO status register */
    using FDCAN_TXEFS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xE4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Event FIFO fill level Number of elements stored in Tx event FIFO, range 0 to 3. */
    using FDCAN_TXEFS_EFFL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Event FIFO get index Tx Event FIFO read index pointer, range 0 to 3. */
    using FDCAN_TXEFS_EFGI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Event FIFO put index Tx Event FIFO write index pointer, range 0 to 3. */
    using FDCAN_TXEFS_EFPI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Event FIFO full */
    using FDCAN_TXEFS_EFF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tx event FIFO not full (value: 0)
     *          - B_0x1: Tx event FIFO full (value: 1)
     */
        /** @brief Tx event FIFO not full */
    constexpr std::uint32_t FDCAN_TXEFS_EFF_B_0x0 = 0;
        /** @brief Tx event FIFO full */
    constexpr std::uint32_t FDCAN_TXEFS_EFF_B_0x1 = 1;

    /** @brief Tx Event FIFO element lost This bit is a copy of interrupt flag IR[TEFL]. When IR[TEFL] is reset, this bit is also reset. 0 No Tx event FIFO element lost 1 Tx event FIFO element lost, also set after write attempt to Tx Event FIFO of size 0. */
    using FDCAN_TXEFS_TEFL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FDCAN Tx event FIFO acknowledge register */
    using FDCAN_TXEFA = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xE8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Event FIFO acknowledge index After the Host has read an element or a sequence of elements from the Tx event FIFO, it has to write the index of the last element read from Tx event FIFO to EFAI. This sets the Tx event FIFO get index TXEFS[EFGI] to EFAI + 1 and updates the FIFO 0 fill level TXEFS[EFFL]. */
    using FDCAN_TXEFA_EFAI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FDCAN CFG clock divider register */
    using FDCAN_CKDIV = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x100, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief input clock divider The APB clock could be divided prior to be used by the CAN sub system. The rate must be computed using the divider output clock. These are protected write (P) bits, which means that write access by the bits is possible only when the bit 1 [CCE] and bit 0 [INIT] of CCCR register are set to 1. */
    using FDCAN_CKDIV_PDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Divide by 1 (value: 0)
     *          - B_0x1: Divide by 2 (value: 1)
     *          - B_0x2: Divide by 4 (value: 2)
     *          - B_0x3: Divide by 6 (value: 3)
     *          - B_0x4: Divide by 8 (value: 4)
     *          - B_0x5: Divide by 10 (value: 5)
     *          - B_0x6: Divide by 12 (value: 6)
     *          - B_0x7: Divide by 14 (value: 7)
     *          - B_0x8: Divide by 16 (value: 8)
     *          - B_0x9: Divide by 18 (value: 9)
     *          - B_0xA: Divide by 20 (value: 10)
     *          - B_0xB: Divide by 22 (value: 11)
     *          - B_0xC: Divide by 24 (value: 12)
     *          - B_0xD: Divide by 26 (value: 13)
     *          - B_0xE: Divide by 28 (value: 14)
     *          - B_0xF: Divide by 30 (value: 15)
     */
        /** @brief Divide by 1 */
    constexpr std::uint32_t FDCAN_CKDIV_PDIV_B_0x0 = 0;
        /** @brief Divide by 2 */
    constexpr std::uint32_t FDCAN_CKDIV_PDIV_B_0x1 = 1;
        /** @brief Divide by 4 */
    constexpr std::uint32_t FDCAN_CKDIV_PDIV_B_0x2 = 2;
        /** @brief Divide by 6 */
    constexpr std::uint32_t FDCAN_CKDIV_PDIV_B_0x3 = 3;
        /** @brief Divide by 8 */
    constexpr std::uint32_t FDCAN_CKDIV_PDIV_B_0x4 = 4;
        /** @brief Divide by 10 */
    constexpr std::uint32_t FDCAN_CKDIV_PDIV_B_0x5 = 5;
        /** @brief Divide by 12 */
    constexpr std::uint32_t FDCAN_CKDIV_PDIV_B_0x6 = 6;
        /** @brief Divide by 14 */
    constexpr std::uint32_t FDCAN_CKDIV_PDIV_B_0x7 = 7;
        /** @brief Divide by 16 */
    constexpr std::uint32_t FDCAN_CKDIV_PDIV_B_0x8 = 8;
        /** @brief Divide by 18 */
    constexpr std::uint32_t FDCAN_CKDIV_PDIV_B_0x9 = 9;
        /** @brief Divide by 20 */
    constexpr std::uint32_t FDCAN_CKDIV_PDIV_B_0xA = 10;
        /** @brief Divide by 22 */
    constexpr std::uint32_t FDCAN_CKDIV_PDIV_B_0xB = 11;
        /** @brief Divide by 24 */
    constexpr std::uint32_t FDCAN_CKDIV_PDIV_B_0xC = 12;
        /** @brief Divide by 26 */
    constexpr std::uint32_t FDCAN_CKDIV_PDIV_B_0xD = 13;
        /** @brief Divide by 28 */
    constexpr std::uint32_t FDCAN_CKDIV_PDIV_B_0xE = 14;
        /** @brief Divide by 30 */
    constexpr std::uint32_t FDCAN_CKDIV_PDIV_B_0xF = 15;

}

#endif
