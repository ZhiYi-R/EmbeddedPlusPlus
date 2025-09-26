/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32N657_FDCAN1_HPP
#define EMBEDDED_PP_STM32N657_FDCAN1_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief FDCAN register block */
namespace STM32N657::FDCAN1 {

    /** @brief FDCAN core release register */
    using FDCAN_CREL = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timestamp day =18 */
    using FDCAN_CREL_DAY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timestamp month = 12 */
    using FDCAN_CREL_MON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timestamp year = 4 */
    using FDCAN_CREL_YEAR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sub-step of core release = 1 */
    using FDCAN_CREL_SUBSTEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Step of core release = 2 */
    using FDCAN_CREL_STEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Core release = 3 */
    using FDCAN_CREL_REL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FDCAN core release register */
    using FDCAN_CCU_CREL = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timestamp day = 18 */
    using FDCAN_CCU_CREL_DAY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timestamp month = 12 */
    using FDCAN_CCU_CREL_MON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timestamp year = */
    using FDCAN_CCU_CREL_YEAR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sub-step of core release = 1 */
    using FDCAN_CCU_CREL_SUBSTEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Step of core release = 1 */
    using FDCAN_CCU_CREL_STEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Core release = 1 */
    using FDCAN_CCU_CREL_REL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FDCAN Endian register */
    using FDCAN_ENDN = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Endiannes Test value */
    using FDCAN_ENDN_ETV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FDCAN Endian register */
    using FDCAN_CCU_CCFG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Time quanta per bit time */
    using FDCAN_CCU_CCFG_TQBT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bypass clock calibration */
    using FDCAN_CCU_CCFG_BCC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Clock calibration unit generates time quanta clock (value: 0)
     *          - B_0x1: Clock calibration unit bypassed (default configuration) (value: 1)
     */
        /** @brief Clock calibration unit generates time quanta clock */
    constexpr std::uint32_t FDCAN_CCU_CCFG_BCC_B_0x0 = 0;
        /** @brief Clock calibration unit bypassed (default configuration) */
    constexpr std::uint32_t FDCAN_CCU_CCFG_BCC_B_0x1 = 1;

    /** @brief Calibration field length */
    using FDCAN_CCU_CCFG_CFL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Calibration field length is 32 bits (value: 0)
     *          - B_0x1: Calibration field length is 64 bits (value: 1)
     */
        /** @brief Calibration field length is 32 bits */
    constexpr std::uint32_t FDCAN_CCU_CCFG_CFL_B_0x0 = 0;
        /** @brief Calibration field length is 64 bits */
    constexpr std::uint32_t FDCAN_CCU_CCFG_CFL_B_0x1 = 1;

    /** @brief Oscillator clock periods minimum */
    using FDCAN_CCU_CCFG_OCPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clock divider */
    using FDCAN_CCU_CCFG_CDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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
    constexpr std::uint32_t FDCAN_CCU_CCFG_CDIV_B_0x0 = 0;
        /** @brief Divide by 2 */
    constexpr std::uint32_t FDCAN_CCU_CCFG_CDIV_B_0x1 = 1;
        /** @brief Divide by 4 */
    constexpr std::uint32_t FDCAN_CCU_CCFG_CDIV_B_0x2 = 2;
        /** @brief Divide by 6 */
    constexpr std::uint32_t FDCAN_CCU_CCFG_CDIV_B_0x3 = 3;
        /** @brief Divide by 8 */
    constexpr std::uint32_t FDCAN_CCU_CCFG_CDIV_B_0x4 = 4;
        /** @brief Divide by 10 */
    constexpr std::uint32_t FDCAN_CCU_CCFG_CDIV_B_0x5 = 5;
        /** @brief Divide by 12 */
    constexpr std::uint32_t FDCAN_CCU_CCFG_CDIV_B_0x6 = 6;
        /** @brief Divide by 14 */
    constexpr std::uint32_t FDCAN_CCU_CCFG_CDIV_B_0x7 = 7;
        /** @brief Divide by 16 */
    constexpr std::uint32_t FDCAN_CCU_CCFG_CDIV_B_0x8 = 8;
        /** @brief Divide by 18 */
    constexpr std::uint32_t FDCAN_CCU_CCFG_CDIV_B_0x9 = 9;
        /** @brief Divide by 20 */
    constexpr std::uint32_t FDCAN_CCU_CCFG_CDIV_B_0xA = 10;
        /** @brief Divide by 22 */
    constexpr std::uint32_t FDCAN_CCU_CCFG_CDIV_B_0xB = 11;
        /** @brief Divide by 24 */
    constexpr std::uint32_t FDCAN_CCU_CCFG_CDIV_B_0xC = 12;
        /** @brief Divide by 26 */
    constexpr std::uint32_t FDCAN_CCU_CCFG_CDIV_B_0xD = 13;
        /** @brief Divide by 28 */
    constexpr std::uint32_t FDCAN_CCU_CCFG_CDIV_B_0xE = 14;
        /** @brief Divide by 30 */
    constexpr std::uint32_t FDCAN_CCU_CCFG_CDIV_B_0xF = 15;

    /** @brief Software reset */
    using FDCAN_CCU_CCFG_SWR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Calibration status register */
    using FDCAN_CCU_CSTAT = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Oscillator clock period counter */
    using FDCAN_CCU_CSTAT_OCPC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Time quanta counter */
    using FDCAN_CCU_CSTAT_TQC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Calibration state */
    using FDCAN_CCU_CSTAT_CALS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Not_Calibrated (value: 0)
     *          - B_0x1: Basic_Calibrated (value: 1)
     *          - B_0x2: Precision_Calibrated (value: 2)
     */
        /** @brief Not_Calibrated */
    constexpr std::uint32_t FDCAN_CCU_CSTAT_CALS_B_0x0 = 0;
        /** @brief Basic_Calibrated */
    constexpr std::uint32_t FDCAN_CCU_CSTAT_CALS_B_0x1 = 1;
        /** @brief Precision_Calibrated */
    constexpr std::uint32_t FDCAN_CCU_CSTAT_CALS_B_0x2 = 2;

    /** @brief FDCAN data bit timing and prescaler register */
    using FDCAN_DBTP = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronization jump width */
    using FDCAN_DBTP_DSJW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data time segment after sample point */
    using FDCAN_DBTP_DTSEG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data time segment before sample point */
    using FDCAN_DBTP_DTSEG1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data bitrate prescaler */
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

    /** @brief FDCAN data bit timing and prescaler register */
    using FDCAN_CCU_CWD = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WDC */
    using FDCAN_CCU_CWD_WDC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Watchdog value */
    using FDCAN_CCU_CWD_WDV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FDCAN test register */
    using FDCAN_TEST = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Loop back mode */
    using FDCAN_TEST_LBCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Reset value, loop back mode is disabled (value: 0)
     *          - B_0x1: Loop back mode is enabled (see Test modes) (value: 1)
     */
        /** @brief Reset value, loop back mode is disabled */
    constexpr std::uint32_t FDCAN_TEST_LBCK_B_0x0 = 0;
        /** @brief Loop back mode is enabled (see Test modes) */
    constexpr std::uint32_t FDCAN_TEST_LBCK_B_0x1 = 1;

    /** @brief Control of transmit pin */
    using FDCAN_TEST_TX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Reset value , FDCANx_TX TX is controlled by the CAN core, updated at the end of the CAN bit time (value: 0)
     *          - B_0x1: Sample point can be monitored at pin FDCANx_TX (value: 1)
     *          - B_0x2: Dominant (0) level at pin FDCANx_TX (value: 2)
     *          - B_0x3: Recessive (1) at pin FDCANx_TX (value: 3)
     */
        /** @brief Reset value , FDCANx_TX TX is controlled by the CAN core, updated at the end of the CAN bit time */
    constexpr std::uint32_t FDCAN_TEST_TX_B_0x0 = 0;
        /** @brief Sample point can be monitored at pin FDCANx_TX */
    constexpr std::uint32_t FDCAN_TEST_TX_B_0x1 = 1;
        /** @brief Dominant (0) level at pin FDCANx_TX */
    constexpr std::uint32_t FDCAN_TEST_TX_B_0x2 = 2;
        /** @brief Recessive (1) at pin FDCANx_TX */
    constexpr std::uint32_t FDCAN_TEST_TX_B_0x3 = 3;

    /** @brief Receive pin */
    using FDCAN_TEST_RX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The CAN bus is dominant (FDCANx_RX = 0) (value: 0)
     *          - B_0x1: The CAN bus is recessive (FDCANx_RX = 1) (value: 1)
     */
        /** @brief The CAN bus is dominant (FDCANx_RX = 0) */
    constexpr std::uint32_t FDCAN_TEST_RX_B_0x0 = 0;
        /** @brief The CAN bus is recessive (FDCANx_RX = 1) */
    constexpr std::uint32_t FDCAN_TEST_RX_B_0x1 = 1;

    /** @brief FDCAN test register */
    using FDCAN_CCU_IR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Calibration watchdog event */
    using FDCAN_CCU_IR_CWE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No calibration watchdog event (value: 0)
     *          - B_0x1: Calibration watchdog event occurred (value: 1)
     */
        /** @brief No calibration watchdog event */
    constexpr std::uint32_t FDCAN_CCU_IR_CWE_B_0x0 = 0;
        /** @brief Calibration watchdog event occurred */
    constexpr std::uint32_t FDCAN_CCU_IR_CWE_B_0x1 = 1;

    /** @brief Calibration state changed */
    using FDCAN_CCU_IR_CSC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Calibration state unchanged (value: 0)
     *          - B_0x1: Calibration state has changed (value: 1)
     */
        /** @brief Calibration state unchanged */
    constexpr std::uint32_t FDCAN_CCU_IR_CSC_B_0x0 = 0;
        /** @brief Calibration state has changed */
    constexpr std::uint32_t FDCAN_CCU_IR_CSC_B_0x1 = 1;

    /** @brief FDCAN RAM watchdog register */
    using FDCAN_RWD = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Watchdog configuration */
    using FDCAN_RWD_WDC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Watchdog value */
    using FDCAN_RWD_WDV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FDCAN RAM watchdog register */
    using FDCAN_CCU_IE = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Calibration watchdog event enable */
    using FDCAN_CCU_IE_CWEE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t FDCAN_CCU_IE_CWEE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t FDCAN_CCU_IE_CWEE_B_0x1 = 1;

    /** @brief Calibration state changed enable */
    using FDCAN_CCU_IE_CSCE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t FDCAN_CCU_IE_CSCE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t FDCAN_CCU_IE_CSCE_B_0x1 = 1;

    /** @brief FDCAN CC control register */
    using FDCAN_CCCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Initialization */
    using FDCAN_CCCR_INIT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation (value: 0)
     *          - B_0x1: Initialization is started (while FDCAN_CCCR.INIT = 1 CCE bit is automatically cleared when INIT bit is cleared) (value: 1)
     */
        /** @brief Normal operation */
    constexpr std::uint32_t FDCAN_CCCR_INIT_B_0x0 = 0;
        /** @brief Initialization is started (while FDCAN_CCCR.INIT = 1 CCE bit is automatically cleared when INIT bit is cleared) */
    constexpr std::uint32_t FDCAN_CCCR_INIT_B_0x1 = 1;

    /** @brief Configuration change enable */
    using FDCAN_CCCR_CCE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The CPU has no write access to the protected configuration registers (value: 0)
     *          - B_0x1: The CPU has write access to the protected configuration registers (while FDCAN_CCCR.INIT = 1 CCE bit is automatically cleared when INIT bit is cleared) (value: 1)
     */
        /** @brief The CPU has no write access to the protected configuration registers */
    constexpr std::uint32_t FDCAN_CCCR_CCE_B_0x0 = 0;
        /** @brief The CPU has write access to the protected configuration registers (while FDCAN_CCCR.INIT = 1 CCE bit is automatically cleared when INIT bit is cleared) */
    constexpr std::uint32_t FDCAN_CCCR_CCE_B_0x1 = 1;

    /** @brief ASM restricted operation mode */
    using FDCAN_CCCR_ASM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal CAN operation (value: 0)
     *          - B_0x1: Restricted operation mode active (value: 1)
     */
        /** @brief Normal CAN operation */
    constexpr std::uint32_t FDCAN_CCCR_ASM_B_0x0 = 0;
        /** @brief Restricted operation mode active */
    constexpr std::uint32_t FDCAN_CCCR_ASM_B_0x1 = 1;

    /** @brief Clock stop acknowledge */
    using FDCAN_CCCR_CSA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No clock stop acknowledged (value: 0)
     *          - B_0x1: FDCAN may be set in power down by stopping APB clock and kernel clock (value: 1)
     */
        /** @brief No clock stop acknowledged */
    constexpr std::uint32_t FDCAN_CCCR_CSA_B_0x0 = 0;
        /** @brief FDCAN may be set in power down by stopping APB clock and kernel clock */
    constexpr std::uint32_t FDCAN_CCCR_CSA_B_0x1 = 1;

    /** @brief Clock stop request */
    using FDCAN_CCCR_CSR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No clock stop is requested (value: 0)
     *          - B_0x1: Clock stop requested. When clock stop is requested, first INIT and then CSA is set (value: 1)
     */
        /** @brief No clock stop is requested */
    constexpr std::uint32_t FDCAN_CCCR_CSR_B_0x0 = 0;
        /** @brief Clock stop requested. When clock stop is requested, first INIT and then CSA is set */
    constexpr std::uint32_t FDCAN_CCCR_CSR_B_0x1 = 1;

    /** @brief Bus monitoring mode */
    using FDCAN_CCCR_MON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bus monitoring mode is disabled (value: 0)
     *          - B_0x1: Bus monitoring mode is enabled (value: 1)
     */
        /** @brief Bus monitoring mode is disabled */
    constexpr std::uint32_t FDCAN_CCCR_MON_B_0x0 = 0;
        /** @brief Bus monitoring mode is enabled */
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
     *          - B_0x1: Test mode, write access to register TEST enabled (value: 1)
     */
        /** @brief Normal operation, register TEST holds reset values */
    constexpr std::uint32_t FDCAN_CCCR_TEST_B_0x0 = 0;
        /** @brief Test mode, write access to register TEST enabled */
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

    /** @brief FDCAN bitrate switching */
    using FDCAN_CCCR_BRSE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bitrate switching for transmissions disabled (value: 0)
     *          - B_0x1: Bitrate switching for transmissions enabled (value: 1)
     */
        /** @brief Bitrate switching for transmissions disabled */
    constexpr std::uint32_t FDCAN_CCCR_BRSE_B_0x0 = 0;
        /** @brief Bitrate switching for transmissions enabled */
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
     *          - B_0x0: Disabled (value: 0)
     *          - B_0x1: Enabled (value: 1)
     */
        /** @brief Disabled */
    constexpr std::uint32_t FDCAN_CCCR_TXP_B_0x0 = 0;
        /** @brief Enabled */
    constexpr std::uint32_t FDCAN_CCCR_TXP_B_0x1 = 1;

    /** @brief Non ISO operation */
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
    /** @brief Nominal time segment after sample point */
    using FDCAN_NBTP_NTSEG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Nominal time segment before sample point */
    using FDCAN_NBTP_NTSEG1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bitrate prescaler */
    using FDCAN_NBTP_NBRP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Nominal (re)synchronization jump width */
    using FDCAN_NBTP_NSJW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FDCAN timestamp counter configuration register */
    using FDCAN_TSCC = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timestamp select */
    using FDCAN_TSCC_TSS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Timestamp counter value always 0x0000 (value: 0)
     *          - B_0x1: Timestamp counter value incremented according to TCP (value: 1)
     *          - B_0x2: External timestamp counter from TIM3 value used (tim3_cnt[0:15]) (value: 2)
     *          - B_0x3: Same as 00. (value: 3)
     */
        /** @brief Timestamp counter value always 0x0000 */
    constexpr std::uint32_t FDCAN_TSCC_TSS_B_0x0 = 0;
        /** @brief Timestamp counter value incremented according to TCP */
    constexpr std::uint32_t FDCAN_TSCC_TSS_B_0x1 = 1;
        /** @brief External timestamp counter from TIM3 value used (tim3_cnt[0:15]) */
    constexpr std::uint32_t FDCAN_TSCC_TSS_B_0x2 = 2;
        /** @brief Same as 00. */
    constexpr std::uint32_t FDCAN_TSCC_TSS_B_0x3 = 3;

    /** @brief Timestamp counter prescaler */
    using FDCAN_TSCC_TCP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FDCAN timestamp counter value register */
    using FDCAN_TSCV = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timestamp counter */
    using FDCAN_TSCV_TSC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FDCAN timeout counter configuration register */
    using FDCAN_TOCC = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable timeout counter */
    using FDCAN_TOCC_ETOC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Timeout counter disabled (value: 0)
     *          - B_0x1: Timeout counter enabled (value: 1)
     */
        /** @brief Timeout counter disabled */
    constexpr std::uint32_t FDCAN_TOCC_ETOC_B_0x0 = 0;
        /** @brief Timeout counter enabled */
    constexpr std::uint32_t FDCAN_TOCC_ETOC_B_0x1 = 1;

    /** @brief Timeout select */
    using FDCAN_TOCC_TOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Continuous operation (value: 0)
     *          - B_0x1: Timeout controlled by Tx event FIFO (value: 1)
     *          - B_0x2: Timeout controlled by Rx FIFO 0 (value: 2)
     *          - B_0x3: Timeout controlled by Rx FIFO 1 (value: 3)
     */
        /** @brief Continuous operation */
    constexpr std::uint32_t FDCAN_TOCC_TOS_B_0x0 = 0;
        /** @brief Timeout controlled by Tx event FIFO */
    constexpr std::uint32_t FDCAN_TOCC_TOS_B_0x1 = 1;
        /** @brief Timeout controlled by Rx FIFO 0 */
    constexpr std::uint32_t FDCAN_TOCC_TOS_B_0x2 = 2;
        /** @brief Timeout controlled by Rx FIFO 1 */
    constexpr std::uint32_t FDCAN_TOCC_TOS_B_0x3 = 3;

    /** @brief Timeout period */
    using FDCAN_TOCC_TOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FDCAN timeout counter value register */
    using FDCAN_TOCV = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timeout counter */
    using FDCAN_TOCV_TOC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FDCAN error counter register */
    using FDCAN_ECR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit error counter */
    using FDCAN_ECR_TEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive error counter */
    using FDCAN_ECR_REC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive error passive */
    using FDCAN_ECR_RP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The receive error counter is below the error passive level of 128 (value: 0)
     *          - B_0x1: The receive error counter has reached the error passive level of 128 (value: 1)
     */
        /** @brief The receive error counter is below the error passive level of 128 */
    constexpr std::uint32_t FDCAN_ECR_RP_B_0x0 = 0;
        /** @brief The receive error counter has reached the error passive level of 128 */
    constexpr std::uint32_t FDCAN_ECR_RP_B_0x1 = 1;

    /** @brief CAN error logging */
    using FDCAN_ECR_CEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FDCAN protocol status register */
    using FDCAN_PSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Last error code */
    using FDCAN_PSR_LEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No error: No error occurred since LEC has been reset by successful reception or transmission. (value: 0)
     *          - B_0x1: Stuff error: More than 5 equal bits in a sequence have occurred in a part of a received message where this is not allowed. (value: 1)
     *          - B_0x2: Form error: A fixed format part of a received frame has the wrong format. (value: 2)
     *          - B_0x3: AckError: The message transmitted by the FDCAN was not acknowledged by another node. (value: 3)
     *          - B_0x4: Bit1Error: During the transmission of a message (with the exception of the arbitration field), the device wanted to send a recessive level (bit of logical value 1), but the monitored bus value was dominant. (value: 4)
     *          - B_0x5: Bit0Error: During the transmission of a message (or acknowledge bit, or active error flag, or overload flag), the device wanted to send a dominant level (data or identifier bit logical value 0), but the monitored bus value was recessive. During Bus_Off recovery this status is set each time a sequence of 11 recessive bits has been monitored. This enables the CPU to monitor the proceeding of the Bus_Off recovery sequence (indicating the bus is not stuck at dominant or continuously disturbed). (value: 5)
     *          - B_0x6: CRCError: The CRC check sum of a received message was incorrect. The CRC of an incoming message does not match with the CRC calculated from the received data. (value: 6)
     *          - B_0x7: NoChange: Any read access to the protocol status register re-initializes the LEC to 7. When the LEC shows the value 7, no CAN bus event was detected since the last CPU read access to the protocol status register. (value: 7)
     */
        /** @brief No error: No error occurred since LEC has been reset by successful reception or transmission. */
    constexpr std::uint32_t FDCAN_PSR_LEC_B_0x0 = 0;
        /** @brief Stuff error: More than 5 equal bits in a sequence have occurred in a part of a received message where this is not allowed. */
    constexpr std::uint32_t FDCAN_PSR_LEC_B_0x1 = 1;
        /** @brief Form error: A fixed format part of a received frame has the wrong format. */
    constexpr std::uint32_t FDCAN_PSR_LEC_B_0x2 = 2;
        /** @brief AckError: The message transmitted by the FDCAN was not acknowledged by another node. */
    constexpr std::uint32_t FDCAN_PSR_LEC_B_0x3 = 3;
        /** @brief Bit1Error: During the transmission of a message (with the exception of the arbitration field), the device wanted to send a recessive level (bit of logical value 1), but the monitored bus value was dominant. */
    constexpr std::uint32_t FDCAN_PSR_LEC_B_0x4 = 4;
        /** @brief Bit0Error: During the transmission of a message (or acknowledge bit, or active error flag, or overload flag), the device wanted to send a dominant level (data or identifier bit logical value 0), but the monitored bus value was recessive. During Bus_Off recovery this status is set each time a sequence of 11 recessive bits has been monitored. This enables the CPU to monitor the proceeding of the Bus_Off recovery sequence (indicating the bus is not stuck at dominant or continuously disturbed). */
    constexpr std::uint32_t FDCAN_PSR_LEC_B_0x5 = 5;
        /** @brief CRCError: The CRC check sum of a received message was incorrect. The CRC of an incoming message does not match with the CRC calculated from the received data. */
    constexpr std::uint32_t FDCAN_PSR_LEC_B_0x6 = 6;
        /** @brief NoChange: Any read access to the protocol status register re-initializes the LEC to 7. When the LEC shows the value 7, no CAN bus event was detected since the last CPU read access to the protocol status register. */
    constexpr std::uint32_t FDCAN_PSR_LEC_B_0x7 = 7;

    /** @brief Activity */
    using FDCAN_PSR_ACT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Synchronizing: node is synchronizing on CAN communication (value: 0)
     *          - B_0x1: Idle: node is neither receiver nor transmitter (value: 1)
     *          - B_0x2: Receiver: node is operating as receiver (value: 2)
     *          - B_0x3: Transmitter: node is operating as transmitter (value: 3)
     */
        /** @brief Synchronizing: node is synchronizing on CAN communication */
    constexpr std::uint32_t FDCAN_PSR_ACT_B_0x0 = 0;
        /** @brief Idle: node is neither receiver nor transmitter */
    constexpr std::uint32_t FDCAN_PSR_ACT_B_0x1 = 1;
        /** @brief Receiver: node is operating as receiver */
    constexpr std::uint32_t FDCAN_PSR_ACT_B_0x2 = 2;
        /** @brief Transmitter: node is operating as transmitter */
    constexpr std::uint32_t FDCAN_PSR_ACT_B_0x3 = 3;

    /** @brief Error passive */
    using FDCAN_PSR_EP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The FDCAN is in the Error_Active state. It normally takes part in bus communication and sends an active error flag when an error has been detected (value: 0)
     *          - B_0x1: The FDCAN is in the Error_Passive state (value: 1)
     */
        /** @brief The FDCAN is in the Error_Active state. It normally takes part in bus communication and sends an active error flag when an error has been detected */
    constexpr std::uint32_t FDCAN_PSR_EP_B_0x0 = 0;
        /** @brief The FDCAN is in the Error_Passive state */
    constexpr std::uint32_t FDCAN_PSR_EP_B_0x1 = 1;

    /** @brief Warning status */
    using FDCAN_PSR_EW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Both error counters are below the Error_Warning limit of 96 (value: 0)
     *          - B_0x1: At least one of error counter has reached the Error_Warning limit of 96 (value: 1)
     */
        /** @brief Both error counters are below the Error_Warning limit of 96 */
    constexpr std::uint32_t FDCAN_PSR_EW_B_0x0 = 0;
        /** @brief At least one of error counter has reached the Error_Warning limit of 96 */
    constexpr std::uint32_t FDCAN_PSR_EW_B_0x1 = 1;

    /** @brief Bus_Off status */
    using FDCAN_PSR_BO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The FDCAN is not Bus_Off (value: 0)
     *          - B_0x1: The FDCAN is in Bus_Off state (value: 1)
     */
        /** @brief The FDCAN is not Bus_Off */
    constexpr std::uint32_t FDCAN_PSR_BO_B_0x0 = 0;
        /** @brief The FDCAN is in Bus_Off state */
    constexpr std::uint32_t FDCAN_PSR_BO_B_0x1 = 1;

    /** @brief Data last error code */
    using FDCAN_PSR_DLEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ESI flag of last received FDCAN message */
    using FDCAN_PSR_RESI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Last received FDCAN message did not ha ve its ESI flag set (value: 0)
     *          - B_0x1: Last received FDCAN message had its ESI flag set (value: 1)
     */
        /** @brief Last received FDCAN message did not ha ve its ESI flag set */
    constexpr std::uint32_t FDCAN_PSR_RESI_B_0x0 = 0;
        /** @brief Last received FDCAN message had its ESI flag set */
    constexpr std::uint32_t FDCAN_PSR_RESI_B_0x1 = 1;

    /** @brief BRS flag of last received FDCAN message */
    using FDCAN_PSR_RBRS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Last received FDCAN message did not have its BRS flag set (value: 0)
     *          - B_0x1: Last received FDCAN message had its BRS flag set (value: 1)
     */
        /** @brief Last received FDCAN message did not have its BRS flag set */
    constexpr std::uint32_t FDCAN_PSR_RBRS_B_0x0 = 0;
        /** @brief Last received FDCAN message had its BRS flag set */
    constexpr std::uint32_t FDCAN_PSR_RBRS_B_0x1 = 1;

    /** @brief Received FDCAN message */
    using FDCAN_PSR_REDL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Since this bit was reset by the CPU, no FDCAN message has been received (value: 0)
     *          - B_0x1: Message in FDCAN format with EDL flag set has been received (value: 1)
     */
        /** @brief Since this bit was reset by the CPU, no FDCAN message has been received */
    constexpr std::uint32_t FDCAN_PSR_REDL_B_0x0 = 0;
        /** @brief Message in FDCAN format with EDL flag set has been received */
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

    /** @brief Transmitter delay compensation value */
    using FDCAN_PSR_TDCV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FDCAN transmitter delay compensation register */
    using FDCAN_TDCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmitter delay compensation filter window length */
    using FDCAN_TDCR_TDCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmitter delay compensation offset */
    using FDCAN_TDCR_TDCO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FDCAN interrupt register */
    using FDCAN_IR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx FIFO 0 New message */
    using FDCAN_IR_RF0N = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No new message written to Rx FIFO 0 (value: 0)
     *          - B_0x1: New message written to Rx FIFO 0 (value: 1)
     */
        /** @brief No new message written to Rx FIFO 0 */
    constexpr std::uint32_t FDCAN_IR_RF0N_B_0x0 = 0;
        /** @brief New message written to Rx FIFO 0 */
    constexpr std::uint32_t FDCAN_IR_RF0N_B_0x1 = 1;

    /** @brief Rx FIFO 0 watermark reached */
    using FDCAN_IR_RF0W = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rx FIFO 0 fill level below watermark (value: 0)
     *          - B_0x1: Rx FIFO 0 fill level reached watermark (value: 1)
     */
        /** @brief Rx FIFO 0 fill level below watermark */
    constexpr std::uint32_t FDCAN_IR_RF0W_B_0x0 = 0;
        /** @brief Rx FIFO 0 fill level reached watermark */
    constexpr std::uint32_t FDCAN_IR_RF0W_B_0x1 = 1;

    /** @brief Rx FIFO 0 full */
    using FDCAN_IR_RF0F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rx FIFO 0 not full (value: 0)
     *          - B_0x1: Rx FIFO 0 full (value: 1)
     */
        /** @brief Rx FIFO 0 not full */
    constexpr std::uint32_t FDCAN_IR_RF0F_B_0x0 = 0;
        /** @brief Rx FIFO 0 full */
    constexpr std::uint32_t FDCAN_IR_RF0F_B_0x1 = 1;

    /** @brief Rx FIFO 0 message lost */
    using FDCAN_IR_RF0L = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No Rx FIFO 0 message lost (value: 0)
     *          - B_0x1: Rx FIFO 0 message lost, also set after write attempt to Rx FIFO 0 of size 0 (value: 1)
     */
        /** @brief No Rx FIFO 0 message lost */
    constexpr std::uint32_t FDCAN_IR_RF0L_B_0x0 = 0;
        /** @brief Rx FIFO 0 message lost, also set after write attempt to Rx FIFO 0 of size 0 */
    constexpr std::uint32_t FDCAN_IR_RF0L_B_0x1 = 1;

    /** @brief Rx FIFO 1 new message */
    using FDCAN_IR_RF1N = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No new message written to Rx FIFO 1 (value: 0)
     *          - B_0x1: New message written to Rx FIFO 1 (value: 1)
     */
        /** @brief No new message written to Rx FIFO 1 */
    constexpr std::uint32_t FDCAN_IR_RF1N_B_0x0 = 0;
        /** @brief New message written to Rx FIFO 1 */
    constexpr std::uint32_t FDCAN_IR_RF1N_B_0x1 = 1;

    /** @brief Rx FIFO 1 watermark reached */
    using FDCAN_IR_RF1W = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rx FIFO 1 fill level below watermark (value: 0)
     *          - B_0x1: Rx FIFO 1 fill level reached watermark (value: 1)
     */
        /** @brief Rx FIFO 1 fill level below watermark */
    constexpr std::uint32_t FDCAN_IR_RF1W_B_0x0 = 0;
        /** @brief Rx FIFO 1 fill level reached watermark */
    constexpr std::uint32_t FDCAN_IR_RF1W_B_0x1 = 1;

    /** @brief Rx FIFO 1 full */
    using FDCAN_IR_RF1F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rx FIFO 1 not full (value: 0)
     *          - B_0x1: Rx FIFO 1 full (value: 1)
     */
        /** @brief Rx FIFO 1 not full */
    constexpr std::uint32_t FDCAN_IR_RF1F_B_0x0 = 0;
        /** @brief Rx FIFO 1 full */
    constexpr std::uint32_t FDCAN_IR_RF1F_B_0x1 = 1;

    /** @brief Rx FIFO 1 message lost */
    using FDCAN_IR_RF1L = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No Rx FIFO 1 message lost (value: 0)
     *          - B_0x1: Rx FIFO 1 message lost, also set after write attempt to Rx FIFO 1 of size 0 (value: 1)
     */
        /** @brief No Rx FIFO 1 message lost */
    constexpr std::uint32_t FDCAN_IR_RF1L_B_0x0 = 0;
        /** @brief Rx FIFO 1 message lost, also set after write attempt to Rx FIFO 1 of size 0 */
    constexpr std::uint32_t FDCAN_IR_RF1L_B_0x1 = 1;

    /** @brief High priority message */
    using FDCAN_IR_HPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No high priority message received (value: 0)
     *          - B_0x1: High priority message received (value: 1)
     */
        /** @brief No high priority message received */
    constexpr std::uint32_t FDCAN_IR_HPM_B_0x0 = 0;
        /** @brief High priority message received */
    constexpr std::uint32_t FDCAN_IR_HPM_B_0x1 = 1;

    /** @brief Transmission completed */
    using FDCAN_IR_TC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No transmission completed (value: 0)
     *          - B_0x1: Transmission completed (value: 1)
     */
        /** @brief No transmission completed */
    constexpr std::uint32_t FDCAN_IR_TC_B_0x0 = 0;
        /** @brief Transmission completed */
    constexpr std::uint32_t FDCAN_IR_TC_B_0x1 = 1;

    /** @brief Transmission cancellation finished */
    using FDCAN_IR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No transmission cancellation finished (value: 0)
     *          - B_0x1: Transmission cancellation finished (value: 1)
     */
        /** @brief No transmission cancellation finished */
    constexpr std::uint32_t FDCAN_IR_TCF_B_0x0 = 0;
        /** @brief Transmission cancellation finished */
    constexpr std::uint32_t FDCAN_IR_TCF_B_0x1 = 1;

    /** @brief Tx FIFO empty */
    using FDCAN_IR_TFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tx FIFO non-empty (value: 0)
     *          - B_0x1: Tx FIFO empty (value: 1)
     */
        /** @brief Tx FIFO non-empty */
    constexpr std::uint32_t FDCAN_IR_TFE_B_0x0 = 0;
        /** @brief Tx FIFO empty */
    constexpr std::uint32_t FDCAN_IR_TFE_B_0x1 = 1;

    /** @brief Tx event FIFO new entry */
    using FDCAN_IR_TEFN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tx event FIFO unchanged (value: 0)
     *          - B_0x1: Tx handler wrote Tx event FIFO element (value: 1)
     */
        /** @brief Tx event FIFO unchanged */
    constexpr std::uint32_t FDCAN_IR_TEFN_B_0x0 = 0;
        /** @brief Tx handler wrote Tx event FIFO element */
    constexpr std::uint32_t FDCAN_IR_TEFN_B_0x1 = 1;

    /** @brief Tx event FIFO watermark reached */
    using FDCAN_IR_TEFW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tx event FIFO fill level below watermark (value: 0)
     *          - B_0x1: Tx event FIFO fill level reached watermark (value: 1)
     */
        /** @brief Tx event FIFO fill level below watermark */
    constexpr std::uint32_t FDCAN_IR_TEFW_B_0x0 = 0;
        /** @brief Tx event FIFO fill level reached watermark */
    constexpr std::uint32_t FDCAN_IR_TEFW_B_0x1 = 1;

    /** @brief Tx event FIFO full */
    using FDCAN_IR_TEFF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tx event FIFO not full (value: 0)
     *          - B_0x1: Tx event FIFO full (value: 1)
     */
        /** @brief Tx event FIFO not full */
    constexpr std::uint32_t FDCAN_IR_TEFF_B_0x0 = 0;
        /** @brief Tx event FIFO full */
    constexpr std::uint32_t FDCAN_IR_TEFF_B_0x1 = 1;

    /** @brief Tx event FIFO element lost */
    using FDCAN_IR_TEFL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No Tx event FIFO element lost (value: 0)
     *          - B_0x1: Tx event FIFO element lost, also set after write attempt to Tx event FIFO of size 0 (value: 1)
     */
        /** @brief No Tx event FIFO element lost */
    constexpr std::uint32_t FDCAN_IR_TEFL_B_0x0 = 0;
        /** @brief Tx event FIFO element lost, also set after write attempt to Tx event FIFO of size 0 */
    constexpr std::uint32_t FDCAN_IR_TEFL_B_0x1 = 1;

    /** @brief Timestamp wraparound */
    using FDCAN_IR_TSW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No timestamp counter wraparound (value: 0)
     *          - B_0x1: Timestamp counter wraparound (value: 1)
     */
        /** @brief No timestamp counter wraparound */
    constexpr std::uint32_t FDCAN_IR_TSW_B_0x0 = 0;
        /** @brief Timestamp counter wraparound */
    constexpr std::uint32_t FDCAN_IR_TSW_B_0x1 = 1;

    /** @brief Message RAM access failure */
    using FDCAN_IR_MRAF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No message RAM access failure occurred (value: 0)
     *          - B_0x1: Message RAM access failure occurred (value: 1)
     */
        /** @brief No message RAM access failure occurred */
    constexpr std::uint32_t FDCAN_IR_MRAF_B_0x0 = 0;
        /** @brief Message RAM access failure occurred */
    constexpr std::uint32_t FDCAN_IR_MRAF_B_0x1 = 1;

    /** @brief Timeout occurred */
    using FDCAN_IR_TOO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No timeout (value: 0)
     *          - B_0x1: Timeout reached (value: 1)
     */
        /** @brief No timeout */
    constexpr std::uint32_t FDCAN_IR_TOO_B_0x0 = 0;
        /** @brief Timeout reached */
    constexpr std::uint32_t FDCAN_IR_TOO_B_0x1 = 1;

    /** @brief Message stored to dedicated Rx buffer */
    using FDCAN_IR_DRX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No Rx buffer updated (value: 0)
     *          - B_0x1: At least one received message stored into a Rx buffer (value: 1)
     */
        /** @brief No Rx buffer updated */
    constexpr std::uint32_t FDCAN_IR_DRX_B_0x0 = 0;
        /** @brief At least one received message stored into a Rx buffer */
    constexpr std::uint32_t FDCAN_IR_DRX_B_0x1 = 1;

    /** @brief Error logging overflow */
    using FDCAN_IR_ELO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CAN error logging counter did not overflow (value: 0)
     *          - B_0x1: Overflow of CAN error logging counter occurred (value: 1)
     */
        /** @brief CAN error logging counter did not overflow */
    constexpr std::uint32_t FDCAN_IR_ELO_B_0x0 = 0;
        /** @brief Overflow of CAN error logging counter occurred */
    constexpr std::uint32_t FDCAN_IR_ELO_B_0x1 = 1;

    /** @brief Error passive */
    using FDCAN_IR_EP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Error_Passive status unchanged (value: 0)
     *          - B_0x1: Error_Passive status changed (value: 1)
     */
        /** @brief Error_Passive status unchanged */
    constexpr std::uint32_t FDCAN_IR_EP_B_0x0 = 0;
        /** @brief Error_Passive status changed */
    constexpr std::uint32_t FDCAN_IR_EP_B_0x1 = 1;

    /** @brief Warning status */
    using FDCAN_IR_EW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Error_Warning status unchanged (value: 0)
     *          - B_0x1: Error_Warning status changed (value: 1)
     */
        /** @brief Error_Warning status unchanged */
    constexpr std::uint32_t FDCAN_IR_EW_B_0x0 = 0;
        /** @brief Error_Warning status changed */
    constexpr std::uint32_t FDCAN_IR_EW_B_0x1 = 1;

    /** @brief Bus_Off status */
    using FDCAN_IR_BO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bus_Off status unchanged (value: 0)
     *          - B_0x1: Bus_Off status changed (value: 1)
     */
        /** @brief Bus_Off status unchanged */
    constexpr std::uint32_t FDCAN_IR_BO_B_0x0 = 0;
        /** @brief Bus_Off status changed */
    constexpr std::uint32_t FDCAN_IR_BO_B_0x1 = 1;

    /** @brief Watchdog interrupt */
    using FDCAN_IR_WDI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No message RAM watchdog event occurred (value: 0)
     *          - B_0x1: Message RAM watchdog event due to missing READY (value: 1)
     */
        /** @brief No message RAM watchdog event occurred */
    constexpr std::uint32_t FDCAN_IR_WDI_B_0x0 = 0;
        /** @brief Message RAM watchdog event due to missing READY */
    constexpr std::uint32_t FDCAN_IR_WDI_B_0x1 = 1;

    /** @brief Protocol error in arbitration phase (nominal bit time is used) */
    using FDCAN_IR_PEA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No protocol error in arbitration phase (value: 0)
     *          - B_0x1: Protocol error in arbitration phase detected (PSR.LEC different from 0,7) (value: 1)
     */
        /** @brief No protocol error in arbitration phase */
    constexpr std::uint32_t FDCAN_IR_PEA_B_0x0 = 0;
        /** @brief Protocol error in arbitration phase detected (PSR.LEC different from 0,7) */
    constexpr std::uint32_t FDCAN_IR_PEA_B_0x1 = 1;

    /** @brief Protocol error in data phase (data bit time is used) */
    using FDCAN_IR_PED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No protocol error in data phase (value: 0)
     *          - B_0x1: Protocol error in data phase detected (PSR.DLEC different from 0,7) (value: 1)
     */
        /** @brief No protocol error in data phase */
    constexpr std::uint32_t FDCAN_IR_PED_B_0x0 = 0;
        /** @brief Protocol error in data phase detected (PSR.DLEC different from 0,7) */
    constexpr std::uint32_t FDCAN_IR_PED_B_0x1 = 1;

    /** @brief Access to reserved address */
    using FDCAN_IR_ARA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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

    /** @brief Rx FIFO 0 watermark reached interrupt enable */
    using FDCAN_IE_RF0WE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t FDCAN_IE_RF0WE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t FDCAN_IE_RF0WE_B_0x1 = 1;

    /** @brief Rx FIFO 0 full interrupt enable */
    using FDCAN_IE_RF0FE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t FDCAN_IE_RF0FE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t FDCAN_IE_RF0FE_B_0x1 = 1;

    /** @brief Rx FIFO 0 message lost interrupt enable */
    using FDCAN_IE_RF0LE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t FDCAN_IE_RF0LE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t FDCAN_IE_RF0LE_B_0x1 = 1;

    /** @brief Rx FIFO 1 new message interrupt enable */
    using FDCAN_IE_RF1NE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t FDCAN_IE_RF1NE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t FDCAN_IE_RF1NE_B_0x1 = 1;

    /** @brief Rx FIFO 1 watermark reached interrupt enable */
    using FDCAN_IE_RF1WE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t FDCAN_IE_RF1WE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t FDCAN_IE_RF1WE_B_0x1 = 1;

    /** @brief Rx FIFO 1 full interrupt enable */
    using FDCAN_IE_RF1FE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t FDCAN_IE_RF1FE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t FDCAN_IE_RF1FE_B_0x1 = 1;

    /** @brief Rx FIFO 1 message lost interrupt enable */
    using FDCAN_IE_RF1LE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t FDCAN_IE_RF1LE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t FDCAN_IE_RF1LE_B_0x1 = 1;

    /** @brief High priority message interrupt enable */
    using FDCAN_IE_HPME = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t FDCAN_IE_HPME_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t FDCAN_IE_HPME_B_0x1 = 1;

    /** @brief Transmission completed interrupt enable */
    using FDCAN_IE_TCE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t FDCAN_IE_TCE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t FDCAN_IE_TCE_B_0x1 = 1;

    /** @brief Transmission cancellation finished interrupt enable */
    using FDCAN_IE_TCFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t FDCAN_IE_TCFE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t FDCAN_IE_TCFE_B_0x1 = 1;

    /** @brief Tx FIFO empty interrupt enable */
    using FDCAN_IE_TFEE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t FDCAN_IE_TFEE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t FDCAN_IE_TFEE_B_0x1 = 1;

    /** @brief Tx event FIFO new entry interrupt enable */
    using FDCAN_IE_TEFNE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t FDCAN_IE_TEFNE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t FDCAN_IE_TEFNE_B_0x1 = 1;

    /** @brief Tx event FIFO watermark reached interrupt enable */
    using FDCAN_IE_TEFWE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t FDCAN_IE_TEFWE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t FDCAN_IE_TEFWE_B_0x1 = 1;

    /** @brief Tx event FIFO full interrupt enable */
    using FDCAN_IE_TEFFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t FDCAN_IE_TEFFE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t FDCAN_IE_TEFFE_B_0x1 = 1;

    /** @brief Tx event FIFO element lost interrupt enable */
    using FDCAN_IE_TEFLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t FDCAN_IE_TEFLE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t FDCAN_IE_TEFLE_B_0x1 = 1;

    /** @brief Timestamp wraparound interrupt enable */
    using FDCAN_IE_TSWE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t FDCAN_IE_TSWE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t FDCAN_IE_TSWE_B_0x1 = 1;

    /** @brief Message RAM access failure interrupt enable */
    using FDCAN_IE_MRAFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t FDCAN_IE_MRAFE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t FDCAN_IE_MRAFE_B_0x1 = 1;

    /** @brief Timeout occurred interrupt enable */
    using FDCAN_IE_TOOE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t FDCAN_IE_TOOE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t FDCAN_IE_TOOE_B_0x1 = 1;

    /** @brief Message stored to dedicated Rx buffer interrupt enable */
    using FDCAN_IE_DRXE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t FDCAN_IE_DRXE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t FDCAN_IE_DRXE_B_0x1 = 1;

    /** @brief Error logging overflow interrupt enable */
    using FDCAN_IE_ELOE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t FDCAN_IE_ELOE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t FDCAN_IE_ELOE_B_0x1 = 1;

    /** @brief Error passive interrupt enable */
    using FDCAN_IE_EPE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t FDCAN_IE_EPE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t FDCAN_IE_EPE_B_0x1 = 1;

    /** @brief Warning status interrupt enable */
    using FDCAN_IE_EWE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t FDCAN_IE_EWE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t FDCAN_IE_EWE_B_0x1 = 1;

    /** @brief Bus_Off status */
    using FDCAN_IE_BOE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t FDCAN_IE_BOE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t FDCAN_IE_BOE_B_0x1 = 1;

    /** @brief Watchdog interrupt enable */
    using FDCAN_IE_WDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t FDCAN_IE_WDIE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t FDCAN_IE_WDIE_B_0x1 = 1;

    /** @brief Protocol error in Arbitration phase enable */
    using FDCAN_IE_PEAE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Protocol error in data phase enable */
    using FDCAN_IE_PEDE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Access to Reserved address enable */
    using FDCAN_IE_ARAE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FDCAN interrupt line select register */
    using FDCAN_ILS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x58, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx FIFO 0 new message interrupt line */
    using FDCAN_ILS_RF0NL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx FIFO 0 watermark reached interrupt line */
    using FDCAN_ILS_RF0WL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx FIFO 0 full interrupt line */
    using FDCAN_ILS_RF0FL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx FIFO 0 message lost interrupt line */
    using FDCAN_ILS_RF0LL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx FIFO 1 new message interrupt line */
    using FDCAN_ILS_RF1NL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx FIFO 1 watermark reached interrupt line */
    using FDCAN_ILS_RF1WL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx FIFO 1 full interrupt line */
    using FDCAN_ILS_RF1FL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx FIFO 1 message lost interrupt line */
    using FDCAN_ILS_RF1LL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief High priority message interrupt line */
    using FDCAN_ILS_HPML = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission completed interrupt line */
    using FDCAN_ILS_TCL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission cancellation finished interrupt line */
    using FDCAN_ILS_TCFL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx FIFO empty interrupt line */
    using FDCAN_ILS_TFEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx event FIFO new entry interrupt line */
    using FDCAN_ILS_TEFNL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx event FIFO watermark reached interrupt line */
    using FDCAN_ILS_TEFWL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx event FIFO full interrupt line */
    using FDCAN_ILS_TEFFL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx event FIFO element Lost interrupt line */
    using FDCAN_ILS_TEFLL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timestamp wraparound interrupt line */
    using FDCAN_ILS_TSWL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Message RAM access failure interrupt line */
    using FDCAN_ILS_MRAFL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timeout occurred interrupt line */
    using FDCAN_ILS_TOOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Message stored to dedicated Rx buffer interrupt line */
    using FDCAN_ILS_DRXL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Error logging overflow interrupt line */
    using FDCAN_ILS_ELOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Error passive interrupt line */
    using FDCAN_ILS_EPL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Warning status interrupt line */
    using FDCAN_ILS_EWL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bus_Off status */
    using FDCAN_ILS_BOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Watchdog interrupt line */
    using FDCAN_ILS_WDIL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Protocol error in arbitration phase line */
    using FDCAN_ILS_PEAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Protocol error in data phase line */
    using FDCAN_ILS_PEDL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Access to reserved address line */
    using FDCAN_ILS_ARAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FDCAN interrupt line enable register */
    using FDCAN_ILE = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable interrupt line 0 */
    using FDCAN_ILE_EINT0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt line fdcan_intr0_it disabled (value: 0)
     *          - B_0x1: Interrupt line fdcan_intr0_it enabled (value: 1)
     */
        /** @brief Interrupt line fdcan_intr0_it disabled */
    constexpr std::uint32_t FDCAN_ILE_EINT0_B_0x0 = 0;
        /** @brief Interrupt line fdcan_intr0_it enabled */
    constexpr std::uint32_t FDCAN_ILE_EINT0_B_0x1 = 1;

    /** @brief Enable interrupt line 1 */
    using FDCAN_ILE_EINT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt line fdcan_intr1_it disabled (value: 0)
     *          - B_0x1: Interrupt line fdcan_intr1_it enabled (value: 1)
     */
        /** @brief Interrupt line fdcan_intr1_it disabled */
    constexpr std::uint32_t FDCAN_ILE_EINT1_B_0x0 = 0;
        /** @brief Interrupt line fdcan_intr1_it enabled */
    constexpr std::uint32_t FDCAN_ILE_EINT1_B_0x1 = 1;

    /** @brief FDCAN global filter configuration register */
    using FDCAN_GFC = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x80, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reject remote frames extended */
    using FDCAN_GFC_RRFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Filter remote frames with 29-bit standard ID (value: 0)
     *          - B_0x1: Reject all remote frames with 29-bit standard ID (value: 1)
     */
        /** @brief Filter remote frames with 29-bit standard ID */
    constexpr std::uint32_t FDCAN_GFC_RRFE_B_0x0 = 0;
        /** @brief Reject all remote frames with 29-bit standard ID */
    constexpr std::uint32_t FDCAN_GFC_RRFE_B_0x1 = 1;

    /** @brief Reject remote frames standard */
    using FDCAN_GFC_RRFS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Filter remote frames with 11-bit standard ID (value: 0)
     *          - B_0x1: Reject all remote frames with 11-bit standard ID (value: 1)
     */
        /** @brief Filter remote frames with 11-bit standard ID */
    constexpr std::uint32_t FDCAN_GFC_RRFS_B_0x0 = 0;
        /** @brief Reject all remote frames with 11-bit standard ID */
    constexpr std::uint32_t FDCAN_GFC_RRFS_B_0x1 = 1;

    /** @brief Accept non-matching frames extended */
    using FDCAN_GFC_ANFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Accept in Rx FIFO 0 (value: 0)
     *          - B_0x1: Accept in Rx FIFO 1 (value: 1)
     *          - B_0x2: Reject (value: 2)
     *          - B_0x3: Reject (value: 3)
     */
        /** @brief Accept in Rx FIFO 0 */
    constexpr std::uint32_t FDCAN_GFC_ANFE_B_0x0 = 0;
        /** @brief Accept in Rx FIFO 1 */
    constexpr std::uint32_t FDCAN_GFC_ANFE_B_0x1 = 1;
        /** @brief Reject */
    constexpr std::uint32_t FDCAN_GFC_ANFE_B_0x2 = 2;
        /** @brief Reject */
    constexpr std::uint32_t FDCAN_GFC_ANFE_B_0x3 = 3;

    /** @brief Accept non-matching frames standard */
    using FDCAN_GFC_ANFS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Accept in Rx FIFO 0 (value: 0)
     *          - B_0x1: Accept in Rx FIFO 1 (value: 1)
     *          - B_0x2: Reject (value: 2)
     *          - B_0x3: Reject (value: 3)
     */
        /** @brief Accept in Rx FIFO 0 */
    constexpr std::uint32_t FDCAN_GFC_ANFS_B_0x0 = 0;
        /** @brief Accept in Rx FIFO 1 */
    constexpr std::uint32_t FDCAN_GFC_ANFS_B_0x1 = 1;
        /** @brief Reject */
    constexpr std::uint32_t FDCAN_GFC_ANFS_B_0x2 = 2;
        /** @brief Reject */
    constexpr std::uint32_t FDCAN_GFC_ANFS_B_0x3 = 3;

    /** @brief FDCAN standard ID filter configuration register */
    using FDCAN_SIDFC = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x84, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Filter list standard start address */
    using FDCAN_SIDFC_FLSSA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief List size standard */
    using FDCAN_SIDFC_LSS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No standard message ID filter (value: 0)
     */
        /** @brief No standard message ID filter */
    constexpr std::uint32_t FDCAN_SIDFC_LSS_B_0x0 = 0;

    /** @brief FDCAN extended ID filter configuration register */
    using FDCAN_XIDFC = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x88, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Filter list extended start address */
    using FDCAN_XIDFC_FLESA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief List size extended */
    using FDCAN_XIDFC_LSE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No extended message ID filter (value: 0)
     */
        /** @brief No extended message ID filter */
    constexpr std::uint32_t FDCAN_XIDFC_LSE_B_0x0 = 0;

    /** @brief FDCAN extended ID and mask register */
    using FDCAN_XIDAM = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x90, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extended ID Mask */
    using FDCAN_XIDAM_EIDM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 29, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FDCAN high priority message status register */
    using FDCAN_HPMS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x94, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Buffer index */
    using FDCAN_HPMS_BIDX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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

    /** @brief Filter index */
    using FDCAN_HPMS_FIDX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Filter list */
    using FDCAN_HPMS_FLST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Standard filter list (value: 0)
     *          - B_0x1: Extended filter list (value: 1)
     */
        /** @brief Standard filter list */
    constexpr std::uint32_t FDCAN_HPMS_FLST_B_0x0 = 0;
        /** @brief Extended filter list */
    constexpr std::uint32_t FDCAN_HPMS_FLST_B_0x1 = 1;

    /** @brief FDCAN new data 1 register */
    using FDCAN_NDAT1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x98, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief New data[31:0] */
    using FDCAN_NDAT1_ND0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rx buffer not updated (value: 0)
     *          - B_0x1: Rx buffer updated from new message (value: 1)
     */
        /** @brief Rx buffer not updated */
    constexpr std::uint32_t FDCAN_NDAT1_ND0_B_0x0 = 0;
        /** @brief Rx buffer updated from new message */
    constexpr std::uint32_t FDCAN_NDAT1_ND0_B_0x1 = 1;

    /** @brief New data[31:0] */
    using FDCAN_NDAT1_ND1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rx buffer not updated (value: 0)
     *          - B_0x1: Rx buffer updated from new message (value: 1)
     */
        /** @brief Rx buffer not updated */
    constexpr std::uint32_t FDCAN_NDAT1_ND1_B_0x0 = 0;
        /** @brief Rx buffer updated from new message */
    constexpr std::uint32_t FDCAN_NDAT1_ND1_B_0x1 = 1;

    /** @brief New data[31:0] */
    using FDCAN_NDAT1_ND2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rx buffer not updated (value: 0)
     *          - B_0x1: Rx buffer updated from new message (value: 1)
     */
        /** @brief Rx buffer not updated */
    constexpr std::uint32_t FDCAN_NDAT1_ND2_B_0x0 = 0;
        /** @brief Rx buffer updated from new message */
    constexpr std::uint32_t FDCAN_NDAT1_ND2_B_0x1 = 1;

    /** @brief New data[31:0] */
    using FDCAN_NDAT1_ND3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rx buffer not updated (value: 0)
     *          - B_0x1: Rx buffer updated from new message (value: 1)
     */
        /** @brief Rx buffer not updated */
    constexpr std::uint32_t FDCAN_NDAT1_ND3_B_0x0 = 0;
        /** @brief Rx buffer updated from new message */
    constexpr std::uint32_t FDCAN_NDAT1_ND3_B_0x1 = 1;

    /** @brief New data[31:0] */
    using FDCAN_NDAT1_ND4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rx buffer not updated (value: 0)
     *          - B_0x1: Rx buffer updated from new message (value: 1)
     */
        /** @brief Rx buffer not updated */
    constexpr std::uint32_t FDCAN_NDAT1_ND4_B_0x0 = 0;
        /** @brief Rx buffer updated from new message */
    constexpr std::uint32_t FDCAN_NDAT1_ND4_B_0x1 = 1;

    /** @brief New data[31:0] */
    using FDCAN_NDAT1_ND5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rx buffer not updated (value: 0)
     *          - B_0x1: Rx buffer updated from new message (value: 1)
     */
        /** @brief Rx buffer not updated */
    constexpr std::uint32_t FDCAN_NDAT1_ND5_B_0x0 = 0;
        /** @brief Rx buffer updated from new message */
    constexpr std::uint32_t FDCAN_NDAT1_ND5_B_0x1 = 1;

    /** @brief New data[31:0] */
    using FDCAN_NDAT1_ND6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rx buffer not updated (value: 0)
     *          - B_0x1: Rx buffer updated from new message (value: 1)
     */
        /** @brief Rx buffer not updated */
    constexpr std::uint32_t FDCAN_NDAT1_ND6_B_0x0 = 0;
        /** @brief Rx buffer updated from new message */
    constexpr std::uint32_t FDCAN_NDAT1_ND6_B_0x1 = 1;

    /** @brief New data[31:0] */
    using FDCAN_NDAT1_ND7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rx buffer not updated (value: 0)
     *          - B_0x1: Rx buffer updated from new message (value: 1)
     */
        /** @brief Rx buffer not updated */
    constexpr std::uint32_t FDCAN_NDAT1_ND7_B_0x0 = 0;
        /** @brief Rx buffer updated from new message */
    constexpr std::uint32_t FDCAN_NDAT1_ND7_B_0x1 = 1;

    /** @brief New data[31:0] */
    using FDCAN_NDAT1_ND8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rx buffer not updated (value: 0)
     *          - B_0x1: Rx buffer updated from new message (value: 1)
     */
        /** @brief Rx buffer not updated */
    constexpr std::uint32_t FDCAN_NDAT1_ND8_B_0x0 = 0;
        /** @brief Rx buffer updated from new message */
    constexpr std::uint32_t FDCAN_NDAT1_ND8_B_0x1 = 1;

    /** @brief New data[31:0] */
    using FDCAN_NDAT1_ND9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rx buffer not updated (value: 0)
     *          - B_0x1: Rx buffer updated from new message (value: 1)
     */
        /** @brief Rx buffer not updated */
    constexpr std::uint32_t FDCAN_NDAT1_ND9_B_0x0 = 0;
        /** @brief Rx buffer updated from new message */
    constexpr std::uint32_t FDCAN_NDAT1_ND9_B_0x1 = 1;

    /** @brief New data[31:0] */
    using FDCAN_NDAT1_ND10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rx buffer not updated (value: 0)
     *          - B_0x1: Rx buffer updated from new message (value: 1)
     */
        /** @brief Rx buffer not updated */
    constexpr std::uint32_t FDCAN_NDAT1_ND10_B_0x0 = 0;
        /** @brief Rx buffer updated from new message */
    constexpr std::uint32_t FDCAN_NDAT1_ND10_B_0x1 = 1;

    /** @brief New data[31:0] */
    using FDCAN_NDAT1_ND11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rx buffer not updated (value: 0)
     *          - B_0x1: Rx buffer updated from new message (value: 1)
     */
        /** @brief Rx buffer not updated */
    constexpr std::uint32_t FDCAN_NDAT1_ND11_B_0x0 = 0;
        /** @brief Rx buffer updated from new message */
    constexpr std::uint32_t FDCAN_NDAT1_ND11_B_0x1 = 1;

    /** @brief New data[31:0] */
    using FDCAN_NDAT1_ND12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rx buffer not updated (value: 0)
     *          - B_0x1: Rx buffer updated from new message (value: 1)
     */
        /** @brief Rx buffer not updated */
    constexpr std::uint32_t FDCAN_NDAT1_ND12_B_0x0 = 0;
        /** @brief Rx buffer updated from new message */
    constexpr std::uint32_t FDCAN_NDAT1_ND12_B_0x1 = 1;

    /** @brief New data[31:0] */
    using FDCAN_NDAT1_ND13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rx buffer not updated (value: 0)
     *          - B_0x1: Rx buffer updated from new message (value: 1)
     */
        /** @brief Rx buffer not updated */
    constexpr std::uint32_t FDCAN_NDAT1_ND13_B_0x0 = 0;
        /** @brief Rx buffer updated from new message */
    constexpr std::uint32_t FDCAN_NDAT1_ND13_B_0x1 = 1;

    /** @brief New data[31:0] */
    using FDCAN_NDAT1_ND14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rx buffer not updated (value: 0)
     *          - B_0x1: Rx buffer updated from new message (value: 1)
     */
        /** @brief Rx buffer not updated */
    constexpr std::uint32_t FDCAN_NDAT1_ND14_B_0x0 = 0;
        /** @brief Rx buffer updated from new message */
    constexpr std::uint32_t FDCAN_NDAT1_ND14_B_0x1 = 1;

    /** @brief New data[31:0] */
    using FDCAN_NDAT1_ND15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rx buffer not updated (value: 0)
     *          - B_0x1: Rx buffer updated from new message (value: 1)
     */
        /** @brief Rx buffer not updated */
    constexpr std::uint32_t FDCAN_NDAT1_ND15_B_0x0 = 0;
        /** @brief Rx buffer updated from new message */
    constexpr std::uint32_t FDCAN_NDAT1_ND15_B_0x1 = 1;

    /** @brief New data[31:0] */
    using FDCAN_NDAT1_ND16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rx buffer not updated (value: 0)
     *          - B_0x1: Rx buffer updated from new message (value: 1)
     */
        /** @brief Rx buffer not updated */
    constexpr std::uint32_t FDCAN_NDAT1_ND16_B_0x0 = 0;
        /** @brief Rx buffer updated from new message */
    constexpr std::uint32_t FDCAN_NDAT1_ND16_B_0x1 = 1;

    /** @brief New data[31:0] */
    using FDCAN_NDAT1_ND17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rx buffer not updated (value: 0)
     *          - B_0x1: Rx buffer updated from new message (value: 1)
     */
        /** @brief Rx buffer not updated */
    constexpr std::uint32_t FDCAN_NDAT1_ND17_B_0x0 = 0;
        /** @brief Rx buffer updated from new message */
    constexpr std::uint32_t FDCAN_NDAT1_ND17_B_0x1 = 1;

    /** @brief New data[31:0] */
    using FDCAN_NDAT1_ND18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rx buffer not updated (value: 0)
     *          - B_0x1: Rx buffer updated from new message (value: 1)
     */
        /** @brief Rx buffer not updated */
    constexpr std::uint32_t FDCAN_NDAT1_ND18_B_0x0 = 0;
        /** @brief Rx buffer updated from new message */
    constexpr std::uint32_t FDCAN_NDAT1_ND18_B_0x1 = 1;

    /** @brief New data[31:0] */
    using FDCAN_NDAT1_ND19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rx buffer not updated (value: 0)
     *          - B_0x1: Rx buffer updated from new message (value: 1)
     */
        /** @brief Rx buffer not updated */
    constexpr std::uint32_t FDCAN_NDAT1_ND19_B_0x0 = 0;
        /** @brief Rx buffer updated from new message */
    constexpr std::uint32_t FDCAN_NDAT1_ND19_B_0x1 = 1;

    /** @brief New data[31:0] */
    using FDCAN_NDAT1_ND20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rx buffer not updated (value: 0)
     *          - B_0x1: Rx buffer updated from new message (value: 1)
     */
        /** @brief Rx buffer not updated */
    constexpr std::uint32_t FDCAN_NDAT1_ND20_B_0x0 = 0;
        /** @brief Rx buffer updated from new message */
    constexpr std::uint32_t FDCAN_NDAT1_ND20_B_0x1 = 1;

    /** @brief New data[31:0] */
    using FDCAN_NDAT1_ND21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rx buffer not updated (value: 0)
     *          - B_0x1: Rx buffer updated from new message (value: 1)
     */
        /** @brief Rx buffer not updated */
    constexpr std::uint32_t FDCAN_NDAT1_ND21_B_0x0 = 0;
        /** @brief Rx buffer updated from new message */
    constexpr std::uint32_t FDCAN_NDAT1_ND21_B_0x1 = 1;

    /** @brief New data[31:0] */
    using FDCAN_NDAT1_ND22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rx buffer not updated (value: 0)
     *          - B_0x1: Rx buffer updated from new message (value: 1)
     */
        /** @brief Rx buffer not updated */
    constexpr std::uint32_t FDCAN_NDAT1_ND22_B_0x0 = 0;
        /** @brief Rx buffer updated from new message */
    constexpr std::uint32_t FDCAN_NDAT1_ND22_B_0x1 = 1;

    /** @brief New data[31:0] */
    using FDCAN_NDAT1_ND23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rx buffer not updated (value: 0)
     *          - B_0x1: Rx buffer updated from new message (value: 1)
     */
        /** @brief Rx buffer not updated */
    constexpr std::uint32_t FDCAN_NDAT1_ND23_B_0x0 = 0;
        /** @brief Rx buffer updated from new message */
    constexpr std::uint32_t FDCAN_NDAT1_ND23_B_0x1 = 1;

    /** @brief New data[31:0] */
    using FDCAN_NDAT1_ND24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rx buffer not updated (value: 0)
     *          - B_0x1: Rx buffer updated from new message (value: 1)
     */
        /** @brief Rx buffer not updated */
    constexpr std::uint32_t FDCAN_NDAT1_ND24_B_0x0 = 0;
        /** @brief Rx buffer updated from new message */
    constexpr std::uint32_t FDCAN_NDAT1_ND24_B_0x1 = 1;

    /** @brief New data[31:0] */
    using FDCAN_NDAT1_ND25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rx buffer not updated (value: 0)
     *          - B_0x1: Rx buffer updated from new message (value: 1)
     */
        /** @brief Rx buffer not updated */
    constexpr std::uint32_t FDCAN_NDAT1_ND25_B_0x0 = 0;
        /** @brief Rx buffer updated from new message */
    constexpr std::uint32_t FDCAN_NDAT1_ND25_B_0x1 = 1;

    /** @brief New data[31:0] */
    using FDCAN_NDAT1_ND26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rx buffer not updated (value: 0)
     *          - B_0x1: Rx buffer updated from new message (value: 1)
     */
        /** @brief Rx buffer not updated */
    constexpr std::uint32_t FDCAN_NDAT1_ND26_B_0x0 = 0;
        /** @brief Rx buffer updated from new message */
    constexpr std::uint32_t FDCAN_NDAT1_ND26_B_0x1 = 1;

    /** @brief New data[31:0] */
    using FDCAN_NDAT1_ND27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rx buffer not updated (value: 0)
     *          - B_0x1: Rx buffer updated from new message (value: 1)
     */
        /** @brief Rx buffer not updated */
    constexpr std::uint32_t FDCAN_NDAT1_ND27_B_0x0 = 0;
        /** @brief Rx buffer updated from new message */
    constexpr std::uint32_t FDCAN_NDAT1_ND27_B_0x1 = 1;

    /** @brief New data[31:0] */
    using FDCAN_NDAT1_ND28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rx buffer not updated (value: 0)
     *          - B_0x1: Rx buffer updated from new message (value: 1)
     */
        /** @brief Rx buffer not updated */
    constexpr std::uint32_t FDCAN_NDAT1_ND28_B_0x0 = 0;
        /** @brief Rx buffer updated from new message */
    constexpr std::uint32_t FDCAN_NDAT1_ND28_B_0x1 = 1;

    /** @brief New data[31:0] */
    using FDCAN_NDAT1_ND29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rx buffer not updated (value: 0)
     *          - B_0x1: Rx buffer updated from new message (value: 1)
     */
        /** @brief Rx buffer not updated */
    constexpr std::uint32_t FDCAN_NDAT1_ND29_B_0x0 = 0;
        /** @brief Rx buffer updated from new message */
    constexpr std::uint32_t FDCAN_NDAT1_ND29_B_0x1 = 1;

    /** @brief New data[31:0] */
    using FDCAN_NDAT1_ND30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rx buffer not updated (value: 0)
     *          - B_0x1: Rx buffer updated from new message (value: 1)
     */
        /** @brief Rx buffer not updated */
    constexpr std::uint32_t FDCAN_NDAT1_ND30_B_0x0 = 0;
        /** @brief Rx buffer updated from new message */
    constexpr std::uint32_t FDCAN_NDAT1_ND30_B_0x1 = 1;

    /** @brief New data[31:0] */
    using FDCAN_NDAT1_ND31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rx buffer not updated (value: 0)
     *          - B_0x1: Rx buffer updated from new message (value: 1)
     */
        /** @brief Rx buffer not updated */
    constexpr std::uint32_t FDCAN_NDAT1_ND31_B_0x0 = 0;
        /** @brief Rx buffer updated from new message */
    constexpr std::uint32_t FDCAN_NDAT1_ND31_B_0x1 = 1;

    /** @brief FDCAN new data 2 register */
    using FDCAN_NDAT2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief New data[63:32] */
    using FDCAN_NDAT2_ND32 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rx buffer not updated (value: 0)
     *          - B_0x1: Rx buffer updated from new message (value: 1)
     */
        /** @brief Rx buffer not updated */
    constexpr std::uint32_t FDCAN_NDAT2_ND32_B_0x0 = 0;
        /** @brief Rx buffer updated from new message */
    constexpr std::uint32_t FDCAN_NDAT2_ND32_B_0x1 = 1;

    /** @brief New data[63:32] */
    using FDCAN_NDAT2_ND33 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rx buffer not updated (value: 0)
     *          - B_0x1: Rx buffer updated from new message (value: 1)
     */
        /** @brief Rx buffer not updated */
    constexpr std::uint32_t FDCAN_NDAT2_ND33_B_0x0 = 0;
        /** @brief Rx buffer updated from new message */
    constexpr std::uint32_t FDCAN_NDAT2_ND33_B_0x1 = 1;

    /** @brief New data[63:32] */
    using FDCAN_NDAT2_ND34 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rx buffer not updated (value: 0)
     *          - B_0x1: Rx buffer updated from new message (value: 1)
     */
        /** @brief Rx buffer not updated */
    constexpr std::uint32_t FDCAN_NDAT2_ND34_B_0x0 = 0;
        /** @brief Rx buffer updated from new message */
    constexpr std::uint32_t FDCAN_NDAT2_ND34_B_0x1 = 1;

    /** @brief New data[63:32] */
    using FDCAN_NDAT2_ND35 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rx buffer not updated (value: 0)
     *          - B_0x1: Rx buffer updated from new message (value: 1)
     */
        /** @brief Rx buffer not updated */
    constexpr std::uint32_t FDCAN_NDAT2_ND35_B_0x0 = 0;
        /** @brief Rx buffer updated from new message */
    constexpr std::uint32_t FDCAN_NDAT2_ND35_B_0x1 = 1;

    /** @brief New data[63:32] */
    using FDCAN_NDAT2_ND36 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rx buffer not updated (value: 0)
     *          - B_0x1: Rx buffer updated from new message (value: 1)
     */
        /** @brief Rx buffer not updated */
    constexpr std::uint32_t FDCAN_NDAT2_ND36_B_0x0 = 0;
        /** @brief Rx buffer updated from new message */
    constexpr std::uint32_t FDCAN_NDAT2_ND36_B_0x1 = 1;

    /** @brief New data[63:32] */
    using FDCAN_NDAT2_ND37 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rx buffer not updated (value: 0)
     *          - B_0x1: Rx buffer updated from new message (value: 1)
     */
        /** @brief Rx buffer not updated */
    constexpr std::uint32_t FDCAN_NDAT2_ND37_B_0x0 = 0;
        /** @brief Rx buffer updated from new message */
    constexpr std::uint32_t FDCAN_NDAT2_ND37_B_0x1 = 1;

    /** @brief New data[63:32] */
    using FDCAN_NDAT2_ND38 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rx buffer not updated (value: 0)
     *          - B_0x1: Rx buffer updated from new message (value: 1)
     */
        /** @brief Rx buffer not updated */
    constexpr std::uint32_t FDCAN_NDAT2_ND38_B_0x0 = 0;
        /** @brief Rx buffer updated from new message */
    constexpr std::uint32_t FDCAN_NDAT2_ND38_B_0x1 = 1;

    /** @brief New data[63:32] */
    using FDCAN_NDAT2_ND39 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rx buffer not updated (value: 0)
     *          - B_0x1: Rx buffer updated from new message (value: 1)
     */
        /** @brief Rx buffer not updated */
    constexpr std::uint32_t FDCAN_NDAT2_ND39_B_0x0 = 0;
        /** @brief Rx buffer updated from new message */
    constexpr std::uint32_t FDCAN_NDAT2_ND39_B_0x1 = 1;

    /** @brief New data[63:32] */
    using FDCAN_NDAT2_ND40 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rx buffer not updated (value: 0)
     *          - B_0x1: Rx buffer updated from new message (value: 1)
     */
        /** @brief Rx buffer not updated */
    constexpr std::uint32_t FDCAN_NDAT2_ND40_B_0x0 = 0;
        /** @brief Rx buffer updated from new message */
    constexpr std::uint32_t FDCAN_NDAT2_ND40_B_0x1 = 1;

    /** @brief New data[63:32] */
    using FDCAN_NDAT2_ND41 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rx buffer not updated (value: 0)
     *          - B_0x1: Rx buffer updated from new message (value: 1)
     */
        /** @brief Rx buffer not updated */
    constexpr std::uint32_t FDCAN_NDAT2_ND41_B_0x0 = 0;
        /** @brief Rx buffer updated from new message */
    constexpr std::uint32_t FDCAN_NDAT2_ND41_B_0x1 = 1;

    /** @brief New data[63:32] */
    using FDCAN_NDAT2_ND42 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rx buffer not updated (value: 0)
     *          - B_0x1: Rx buffer updated from new message (value: 1)
     */
        /** @brief Rx buffer not updated */
    constexpr std::uint32_t FDCAN_NDAT2_ND42_B_0x0 = 0;
        /** @brief Rx buffer updated from new message */
    constexpr std::uint32_t FDCAN_NDAT2_ND42_B_0x1 = 1;

    /** @brief New data[63:32] */
    using FDCAN_NDAT2_ND43 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rx buffer not updated (value: 0)
     *          - B_0x1: Rx buffer updated from new message (value: 1)
     */
        /** @brief Rx buffer not updated */
    constexpr std::uint32_t FDCAN_NDAT2_ND43_B_0x0 = 0;
        /** @brief Rx buffer updated from new message */
    constexpr std::uint32_t FDCAN_NDAT2_ND43_B_0x1 = 1;

    /** @brief New data[63:32] */
    using FDCAN_NDAT2_ND44 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rx buffer not updated (value: 0)
     *          - B_0x1: Rx buffer updated from new message (value: 1)
     */
        /** @brief Rx buffer not updated */
    constexpr std::uint32_t FDCAN_NDAT2_ND44_B_0x0 = 0;
        /** @brief Rx buffer updated from new message */
    constexpr std::uint32_t FDCAN_NDAT2_ND44_B_0x1 = 1;

    /** @brief New data[63:32] */
    using FDCAN_NDAT2_ND45 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rx buffer not updated (value: 0)
     *          - B_0x1: Rx buffer updated from new message (value: 1)
     */
        /** @brief Rx buffer not updated */
    constexpr std::uint32_t FDCAN_NDAT2_ND45_B_0x0 = 0;
        /** @brief Rx buffer updated from new message */
    constexpr std::uint32_t FDCAN_NDAT2_ND45_B_0x1 = 1;

    /** @brief New data[63:32] */
    using FDCAN_NDAT2_ND46 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rx buffer not updated (value: 0)
     *          - B_0x1: Rx buffer updated from new message (value: 1)
     */
        /** @brief Rx buffer not updated */
    constexpr std::uint32_t FDCAN_NDAT2_ND46_B_0x0 = 0;
        /** @brief Rx buffer updated from new message */
    constexpr std::uint32_t FDCAN_NDAT2_ND46_B_0x1 = 1;

    /** @brief New data[63:32] */
    using FDCAN_NDAT2_ND47 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rx buffer not updated (value: 0)
     *          - B_0x1: Rx buffer updated from new message (value: 1)
     */
        /** @brief Rx buffer not updated */
    constexpr std::uint32_t FDCAN_NDAT2_ND47_B_0x0 = 0;
        /** @brief Rx buffer updated from new message */
    constexpr std::uint32_t FDCAN_NDAT2_ND47_B_0x1 = 1;

    /** @brief New data[63:32] */
    using FDCAN_NDAT2_ND48 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rx buffer not updated (value: 0)
     *          - B_0x1: Rx buffer updated from new message (value: 1)
     */
        /** @brief Rx buffer not updated */
    constexpr std::uint32_t FDCAN_NDAT2_ND48_B_0x0 = 0;
        /** @brief Rx buffer updated from new message */
    constexpr std::uint32_t FDCAN_NDAT2_ND48_B_0x1 = 1;

    /** @brief New data[63:32] */
    using FDCAN_NDAT2_ND49 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rx buffer not updated (value: 0)
     *          - B_0x1: Rx buffer updated from new message (value: 1)
     */
        /** @brief Rx buffer not updated */
    constexpr std::uint32_t FDCAN_NDAT2_ND49_B_0x0 = 0;
        /** @brief Rx buffer updated from new message */
    constexpr std::uint32_t FDCAN_NDAT2_ND49_B_0x1 = 1;

    /** @brief New data[63:32] */
    using FDCAN_NDAT2_ND50 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rx buffer not updated (value: 0)
     *          - B_0x1: Rx buffer updated from new message (value: 1)
     */
        /** @brief Rx buffer not updated */
    constexpr std::uint32_t FDCAN_NDAT2_ND50_B_0x0 = 0;
        /** @brief Rx buffer updated from new message */
    constexpr std::uint32_t FDCAN_NDAT2_ND50_B_0x1 = 1;

    /** @brief New data[63:32] */
    using FDCAN_NDAT2_ND51 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rx buffer not updated (value: 0)
     *          - B_0x1: Rx buffer updated from new message (value: 1)
     */
        /** @brief Rx buffer not updated */
    constexpr std::uint32_t FDCAN_NDAT2_ND51_B_0x0 = 0;
        /** @brief Rx buffer updated from new message */
    constexpr std::uint32_t FDCAN_NDAT2_ND51_B_0x1 = 1;

    /** @brief New data[63:32] */
    using FDCAN_NDAT2_ND52 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rx buffer not updated (value: 0)
     *          - B_0x1: Rx buffer updated from new message (value: 1)
     */
        /** @brief Rx buffer not updated */
    constexpr std::uint32_t FDCAN_NDAT2_ND52_B_0x0 = 0;
        /** @brief Rx buffer updated from new message */
    constexpr std::uint32_t FDCAN_NDAT2_ND52_B_0x1 = 1;

    /** @brief New data[63:32] */
    using FDCAN_NDAT2_ND53 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rx buffer not updated (value: 0)
     *          - B_0x1: Rx buffer updated from new message (value: 1)
     */
        /** @brief Rx buffer not updated */
    constexpr std::uint32_t FDCAN_NDAT2_ND53_B_0x0 = 0;
        /** @brief Rx buffer updated from new message */
    constexpr std::uint32_t FDCAN_NDAT2_ND53_B_0x1 = 1;

    /** @brief New data[63:32] */
    using FDCAN_NDAT2_ND54 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rx buffer not updated (value: 0)
     *          - B_0x1: Rx buffer updated from new message (value: 1)
     */
        /** @brief Rx buffer not updated */
    constexpr std::uint32_t FDCAN_NDAT2_ND54_B_0x0 = 0;
        /** @brief Rx buffer updated from new message */
    constexpr std::uint32_t FDCAN_NDAT2_ND54_B_0x1 = 1;

    /** @brief New data[63:32] */
    using FDCAN_NDAT2_ND55 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rx buffer not updated (value: 0)
     *          - B_0x1: Rx buffer updated from new message (value: 1)
     */
        /** @brief Rx buffer not updated */
    constexpr std::uint32_t FDCAN_NDAT2_ND55_B_0x0 = 0;
        /** @brief Rx buffer updated from new message */
    constexpr std::uint32_t FDCAN_NDAT2_ND55_B_0x1 = 1;

    /** @brief New data[63:32] */
    using FDCAN_NDAT2_ND56 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rx buffer not updated (value: 0)
     *          - B_0x1: Rx buffer updated from new message (value: 1)
     */
        /** @brief Rx buffer not updated */
    constexpr std::uint32_t FDCAN_NDAT2_ND56_B_0x0 = 0;
        /** @brief Rx buffer updated from new message */
    constexpr std::uint32_t FDCAN_NDAT2_ND56_B_0x1 = 1;

    /** @brief New data[63:32] */
    using FDCAN_NDAT2_ND57 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rx buffer not updated (value: 0)
     *          - B_0x1: Rx buffer updated from new message (value: 1)
     */
        /** @brief Rx buffer not updated */
    constexpr std::uint32_t FDCAN_NDAT2_ND57_B_0x0 = 0;
        /** @brief Rx buffer updated from new message */
    constexpr std::uint32_t FDCAN_NDAT2_ND57_B_0x1 = 1;

    /** @brief New data[63:32] */
    using FDCAN_NDAT2_ND58 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rx buffer not updated (value: 0)
     *          - B_0x1: Rx buffer updated from new message (value: 1)
     */
        /** @brief Rx buffer not updated */
    constexpr std::uint32_t FDCAN_NDAT2_ND58_B_0x0 = 0;
        /** @brief Rx buffer updated from new message */
    constexpr std::uint32_t FDCAN_NDAT2_ND58_B_0x1 = 1;

    /** @brief New data[63:32] */
    using FDCAN_NDAT2_ND59 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rx buffer not updated (value: 0)
     *          - B_0x1: Rx buffer updated from new message (value: 1)
     */
        /** @brief Rx buffer not updated */
    constexpr std::uint32_t FDCAN_NDAT2_ND59_B_0x0 = 0;
        /** @brief Rx buffer updated from new message */
    constexpr std::uint32_t FDCAN_NDAT2_ND59_B_0x1 = 1;

    /** @brief New data[63:32] */
    using FDCAN_NDAT2_ND60 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rx buffer not updated (value: 0)
     *          - B_0x1: Rx buffer updated from new message (value: 1)
     */
        /** @brief Rx buffer not updated */
    constexpr std::uint32_t FDCAN_NDAT2_ND60_B_0x0 = 0;
        /** @brief Rx buffer updated from new message */
    constexpr std::uint32_t FDCAN_NDAT2_ND60_B_0x1 = 1;

    /** @brief New data[63:32] */
    using FDCAN_NDAT2_ND61 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rx buffer not updated (value: 0)
     *          - B_0x1: Rx buffer updated from new message (value: 1)
     */
        /** @brief Rx buffer not updated */
    constexpr std::uint32_t FDCAN_NDAT2_ND61_B_0x0 = 0;
        /** @brief Rx buffer updated from new message */
    constexpr std::uint32_t FDCAN_NDAT2_ND61_B_0x1 = 1;

    /** @brief New data[63:32] */
    using FDCAN_NDAT2_ND62 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rx buffer not updated (value: 0)
     *          - B_0x1: Rx buffer updated from new message (value: 1)
     */
        /** @brief Rx buffer not updated */
    constexpr std::uint32_t FDCAN_NDAT2_ND62_B_0x0 = 0;
        /** @brief Rx buffer updated from new message */
    constexpr std::uint32_t FDCAN_NDAT2_ND62_B_0x1 = 1;

    /** @brief New data[63:32] */
    using FDCAN_NDAT2_ND63 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rx buffer not updated (value: 0)
     *          - B_0x1: Rx buffer updated from new message (value: 1)
     */
        /** @brief Rx buffer not updated */
    constexpr std::uint32_t FDCAN_NDAT2_ND63_B_0x0 = 0;
        /** @brief Rx buffer updated from new message */
    constexpr std::uint32_t FDCAN_NDAT2_ND63_B_0x1 = 1;

    /** @brief FDCAN Rx FIFO 0 configuration register */
    using FDCAN_RXF0C = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx FIFO 0 start address */
    using FDCAN_RXF0C_F0SA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx FIFO 0 size */
    using FDCAN_RXF0C_F0S = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No Rx FIFO 0 (value: 0)
     */
        /** @brief No Rx FIFO 0 */
    constexpr std::uint32_t FDCAN_RXF0C_F0S_B_0x0 = 0;

    /** @brief FIFO 0 watermark */
    using FDCAN_RXF0C_F0WM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Watermark interrupt disabled (value: 0)
     */
        /** @brief Watermark interrupt disabled */
    constexpr std::uint32_t FDCAN_RXF0C_F0WM_B_0x0 = 0;

    /** @brief FIFO 0 operation mode */
    using FDCAN_RXF0C_F0OM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FIFO 0 blocking mode (value: 0)
     *          - B_0x1: FIFO 0 overwrite mode (value: 1)
     */
        /** @brief FIFO 0 blocking mode */
    constexpr std::uint32_t FDCAN_RXF0C_F0OM_B_0x0 = 0;
        /** @brief FIFO 0 overwrite mode */
    constexpr std::uint32_t FDCAN_RXF0C_F0OM_B_0x1 = 1;

    /** @brief FDCAN Rx FIFO 0 status register */
    using FDCAN_RXF0S = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx FIFO 0 fill level */
    using FDCAN_RXF0S_F0FL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx FIFO 0 get index */
    using FDCAN_RXF0S_F0GI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx FIFO 0 put index */
    using FDCAN_RXF0S_F0PI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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

    /** @brief Rx FIFO 0 message lost */
    using FDCAN_RXF0S_RF0L = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No Rx FIFO 0 message lost (value: 0)
     *          - B_0x1: Rx FIFO 0 message lost, also set after write attempt to Rx FIFO 0 of size 0 (value: 1)
     */
        /** @brief No Rx FIFO 0 message lost */
    constexpr std::uint32_t FDCAN_RXF0S_RF0L_B_0x0 = 0;
        /** @brief Rx FIFO 0 message lost, also set after write attempt to Rx FIFO 0 of size 0 */
    constexpr std::uint32_t FDCAN_RXF0S_RF0L_B_0x1 = 1;

    /** @brief FDCAN Rx FIFO 0 acknowledge register */
    using FDCAN_RXF0A = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx FIFO 0 acknowledge index */
    using FDCAN_RXF0A_F0AI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FDCAN Rx buffer configuration register */
    using FDCAN_RXBC = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xAC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx buffer start address */
    using FDCAN_RXBC_RBSA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FDCAN Rx FIFO 1 configuration register */
    using FDCAN_RXF1C = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx FIFO 1 start address */
    using FDCAN_RXF1C_F1SA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx FIFO 1 size */
    using FDCAN_RXF1C_F1S = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No Rx FIFO 1 (value: 0)
     */
        /** @brief No Rx FIFO 1 */
    constexpr std::uint32_t FDCAN_RXF1C_F1S_B_0x0 = 0;

    /** @brief Rx FIFO 1 watermark */
    using FDCAN_RXF1C_F1WM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Watermark interrupt disabled (value: 0)
     */
        /** @brief Watermark interrupt disabled */
    constexpr std::uint32_t FDCAN_RXF1C_F1WM_B_0x0 = 0;

    /** @brief FIFO 1 operation mode */
    using FDCAN_RXF1C_F1OM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FIFO 1 blocking mode (value: 0)
     *          - B_0x1: FIFO 1 overwrite mode (value: 1)
     */
        /** @brief FIFO 1 blocking mode */
    constexpr std::uint32_t FDCAN_RXF1C_F1OM_B_0x0 = 0;
        /** @brief FIFO 1 overwrite mode */
    constexpr std::uint32_t FDCAN_RXF1C_F1OM_B_0x1 = 1;

    /** @brief FDCAN Rx FIFO 1 status register */
    using FDCAN_RXF1S = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx FIFO 1 fill level */
    using FDCAN_RXF1S_F1FL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx FIFO 1 get index */
    using FDCAN_RXF1S_F1GI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx FIFO 1 put index */
    using FDCAN_RXF1S_F1PI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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

    /** @brief Rx FIFO 1 message lost */
    using FDCAN_RXF1S_RF1L = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No Rx FIFO 1 message lost (value: 0)
     *          - B_0x1: Rx FIFO 1 message lost, also set after write attempt to Rx FIFO 1 of size 0. (value: 1)
     */
        /** @brief No Rx FIFO 1 message lost */
    constexpr std::uint32_t FDCAN_RXF1S_RF1L_B_0x0 = 0;
        /** @brief Rx FIFO 1 message lost, also set after write attempt to Rx FIFO 1 of size 0. */
    constexpr std::uint32_t FDCAN_RXF1S_RF1L_B_0x1 = 1;

    /** @brief Debug message status */
    using FDCAN_RXF1S_DMS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Idle state, wait for reception of debug messages (value: 0)
     *          - B_0x1: Debug message A received (value: 1)
     *          - B_0x2: Debug messages A, B received (value: 2)
     *          - B_0x3: Debug messages A, B, C received (value: 3)
     */
        /** @brief Idle state, wait for reception of debug messages */
    constexpr std::uint32_t FDCAN_RXF1S_DMS_B_0x0 = 0;
        /** @brief Debug message A received */
    constexpr std::uint32_t FDCAN_RXF1S_DMS_B_0x1 = 1;
        /** @brief Debug messages A, B received */
    constexpr std::uint32_t FDCAN_RXF1S_DMS_B_0x2 = 2;
        /** @brief Debug messages A, B, C received */
    constexpr std::uint32_t FDCAN_RXF1S_DMS_B_0x3 = 3;

    /** @brief FDCAN Rx FIFO 1 acknowledge register */
    using FDCAN_RXF1A = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx FIFO 1 acknowledge index */
    using FDCAN_RXF1A_F1AI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FDCAN Rx buffer element size configuration register */
    using FDCAN_RXESC = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx FIFO 1 data field size */
    using FDCAN_RXESC_F0DS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 8-byte data field (value: 0)
     *          - B_0x1: 12-byte data field (value: 1)
     *          - B_0x2: 16-byte data field (value: 2)
     *          - B_0x3: 20-byte data field (value: 3)
     *          - B_0x4: 24-byte data field (value: 4)
     *          - B_0x5: 32-byte data field (value: 5)
     *          - B_0x6: 48-byte data field (value: 6)
     *          - B_0x7: 64-byte data field (value: 7)
     */
        /** @brief 8-byte data field */
    constexpr std::uint32_t FDCAN_RXESC_F0DS_B_0x0 = 0;
        /** @brief 12-byte data field */
    constexpr std::uint32_t FDCAN_RXESC_F0DS_B_0x1 = 1;
        /** @brief 16-byte data field */
    constexpr std::uint32_t FDCAN_RXESC_F0DS_B_0x2 = 2;
        /** @brief 20-byte data field */
    constexpr std::uint32_t FDCAN_RXESC_F0DS_B_0x3 = 3;
        /** @brief 24-byte data field */
    constexpr std::uint32_t FDCAN_RXESC_F0DS_B_0x4 = 4;
        /** @brief 32-byte data field */
    constexpr std::uint32_t FDCAN_RXESC_F0DS_B_0x5 = 5;
        /** @brief 48-byte data field */
    constexpr std::uint32_t FDCAN_RXESC_F0DS_B_0x6 = 6;
        /** @brief 64-byte data field */
    constexpr std::uint32_t FDCAN_RXESC_F0DS_B_0x7 = 7;

    /** @brief Rx FIFO 0 data field size */
    using FDCAN_RXESC_F1DS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 8-byte data field (value: 0)
     *          - B_0x1: 12-byte data field (value: 1)
     *          - B_0x2: 16-byte data field (value: 2)
     *          - B_0x3: 20-byte data field (value: 3)
     *          - B_0x4: 24-byte data field (value: 4)
     *          - B_0x5: 32-byte data field (value: 5)
     *          - B_0x6: 48-byte data field (value: 6)
     *          - B_0x7: 64-byte data field (value: 7)
     */
        /** @brief 8-byte data field */
    constexpr std::uint32_t FDCAN_RXESC_F1DS_B_0x0 = 0;
        /** @brief 12-byte data field */
    constexpr std::uint32_t FDCAN_RXESC_F1DS_B_0x1 = 1;
        /** @brief 16-byte data field */
    constexpr std::uint32_t FDCAN_RXESC_F1DS_B_0x2 = 2;
        /** @brief 20-byte data field */
    constexpr std::uint32_t FDCAN_RXESC_F1DS_B_0x3 = 3;
        /** @brief 24-byte data field */
    constexpr std::uint32_t FDCAN_RXESC_F1DS_B_0x4 = 4;
        /** @brief 32-byte data field */
    constexpr std::uint32_t FDCAN_RXESC_F1DS_B_0x5 = 5;
        /** @brief 48-byte data field */
    constexpr std::uint32_t FDCAN_RXESC_F1DS_B_0x6 = 6;
        /** @brief 64-byte data field */
    constexpr std::uint32_t FDCAN_RXESC_F1DS_B_0x7 = 7;

    /** @brief Rx buffer data field size */
    using FDCAN_RXESC_RBDS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 8-byte data field (value: 0)
     *          - B_0x1: 12-byte data field (value: 1)
     *          - B_0x2: 16-byte data field (value: 2)
     *          - B_0x3: 20-byte data field (value: 3)
     *          - B_0x4: 24-byte data field (value: 4)
     *          - B_0x5: 32-byte data field (value: 5)
     *          - B_0x6: 48-byte data field (value: 6)
     *          - B_0x7: 64-byte data field (value: 7)
     */
        /** @brief 8-byte data field */
    constexpr std::uint32_t FDCAN_RXESC_RBDS_B_0x0 = 0;
        /** @brief 12-byte data field */
    constexpr std::uint32_t FDCAN_RXESC_RBDS_B_0x1 = 1;
        /** @brief 16-byte data field */
    constexpr std::uint32_t FDCAN_RXESC_RBDS_B_0x2 = 2;
        /** @brief 20-byte data field */
    constexpr std::uint32_t FDCAN_RXESC_RBDS_B_0x3 = 3;
        /** @brief 24-byte data field */
    constexpr std::uint32_t FDCAN_RXESC_RBDS_B_0x4 = 4;
        /** @brief 32-byte data field */
    constexpr std::uint32_t FDCAN_RXESC_RBDS_B_0x5 = 5;
        /** @brief 48-byte data field */
    constexpr std::uint32_t FDCAN_RXESC_RBDS_B_0x6 = 6;
        /** @brief 64-byte data field */
    constexpr std::uint32_t FDCAN_RXESC_RBDS_B_0x7 = 7;

    /** @brief FDCAN Tx buffer configuration register */
    using FDCAN_TXBC = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx buffers start address */
    using FDCAN_TXBC_TBSA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of dedicated transmit buffers */
    using FDCAN_TXBC_NDTB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No dedicated Tx buffers (value: 0)
     */
        /** @brief No dedicated Tx buffers */
    constexpr std::uint32_t FDCAN_TXBC_NDTB_B_0x0 = 0;

    /** @brief Transmit FIFO/queue size */
    using FDCAN_TXBC_TFQS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No Tx FIFO/queue (value: 0)
     */
        /** @brief No Tx FIFO/queue */
    constexpr std::uint32_t FDCAN_TXBC_TFQS_B_0x0 = 0;

    /** @brief Tx FIFO/queue mode */
    using FDCAN_TXBC_TFQM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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
    /** @brief Tx FIFO free level */
    using FDCAN_TXFQS_TFFL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx FIFO get index. */
    using FDCAN_TXFQS_TFGI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx FIFO/queue put index */
    using FDCAN_TXFQS_TFQPI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx FIFO/queue full */
    using FDCAN_TXFQS_TFQF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FDCAN Tx buffer element size configuration register */
    using FDCAN_TXESC = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx buffer data Field size: */
    using FDCAN_TXESC_TBDS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 8-byte data field (value: 0)
     *          - B_0x1: 12-byte data field (value: 1)
     *          - B_0x2: 16-byte data field (value: 2)
     *          - B_0x3: 20-byte data field (value: 3)
     *          - B_0x4: 24-byte data field (value: 4)
     *          - B_0x5: 32-byte data field (value: 5)
     *          - B_0x6: 48-byte data field (value: 6)
     *          - B_0x7: 64-byte data field (value: 7)
     */
        /** @brief 8-byte data field */
    constexpr std::uint32_t FDCAN_TXESC_TBDS_B_0x0 = 0;
        /** @brief 12-byte data field */
    constexpr std::uint32_t FDCAN_TXESC_TBDS_B_0x1 = 1;
        /** @brief 16-byte data field */
    constexpr std::uint32_t FDCAN_TXESC_TBDS_B_0x2 = 2;
        /** @brief 20-byte data field */
    constexpr std::uint32_t FDCAN_TXESC_TBDS_B_0x3 = 3;
        /** @brief 24-byte data field */
    constexpr std::uint32_t FDCAN_TXESC_TBDS_B_0x4 = 4;
        /** @brief 32-byte data field */
    constexpr std::uint32_t FDCAN_TXESC_TBDS_B_0x5 = 5;
        /** @brief 48-byte data field */
    constexpr std::uint32_t FDCAN_TXESC_TBDS_B_0x6 = 6;
        /** @brief 64-byte data field */
    constexpr std::uint32_t FDCAN_TXESC_TBDS_B_0x7 = 7;

    /** @brief FDCAN Tx buffer request pending register */
    using FDCAN_TXBRP = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xCC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission request pending */
    using FDCAN_TXBRP_TRP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No transmission request pending (value: 0)
     *          - B_0x1: Transmission request pending (value: 1)
     */
        /** @brief No transmission request pending */
    constexpr std::uint32_t FDCAN_TXBRP_TRP_B_0x0 = 0;
        /** @brief Transmission request pending */
    constexpr std::uint32_t FDCAN_TXBRP_TRP_B_0x1 = 1;

    /** @brief FDCAN Tx buffer add request register */
    using FDCAN_TXBAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Add request */
    using FDCAN_TXBAR_AR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No transmission request added (value: 0)
     *          - B_0x1: Transmission requested added. (value: 1)
     */
        /** @brief No transmission request added */
    constexpr std::uint32_t FDCAN_TXBAR_AR_B_0x0 = 0;
        /** @brief Transmission requested added. */
    constexpr std::uint32_t FDCAN_TXBAR_AR_B_0x1 = 1;

    /** @brief FDCAN Tx buffer cancellation request register */
    using FDCAN_TXBCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Cancellation request */
    using FDCAN_TXBCR_CR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No cancellation pending (value: 0)
     *          - B_0x1: Cancellation pending (value: 1)
     */
        /** @brief No cancellation pending */
    constexpr std::uint32_t FDCAN_TXBCR_CR_B_0x0 = 0;
        /** @brief Cancellation pending */
    constexpr std::uint32_t FDCAN_TXBCR_CR_B_0x1 = 1;

    /** @brief FDCAN Tx buffer transmission occurred register */
    using FDCAN_TXBTO = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission occurred */
    using FDCAN_TXBTO_TO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No transmission occurred (value: 0)
     *          - B_0x1: Transmission occurred (value: 1)
     */
        /** @brief No transmission occurred */
    constexpr std::uint32_t FDCAN_TXBTO_TO_B_0x0 = 0;
        /** @brief Transmission occurred */
    constexpr std::uint32_t FDCAN_TXBTO_TO_B_0x1 = 1;

    /** @brief FDCAN Tx buffer cancellation finished register */
    using FDCAN_TXBCF = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xDC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Cancellation finished */
    using FDCAN_TXBCF_CF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No transmit buffer cancellation (value: 0)
     *          - B_0x1: Transmit buffer cancellation finished (value: 1)
     */
        /** @brief No transmit buffer cancellation */
    constexpr std::uint32_t FDCAN_TXBCF_CF_B_0x0 = 0;
        /** @brief Transmit buffer cancellation finished */
    constexpr std::uint32_t FDCAN_TXBCF_CF_B_0x1 = 1;

    /** @brief FDCAN Tx buffer transmission interrupt enable register */
    using FDCAN_TXBTIE = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xE0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission interrupt enable */
    using FDCAN_TXBTIE_TIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Transmission interrupt disabled (value: 0)
     *          - B_0x1: Transmission interrupt enable (value: 1)
     */
        /** @brief Transmission interrupt disabled */
    constexpr std::uint32_t FDCAN_TXBTIE_TIE_B_0x0 = 0;
        /** @brief Transmission interrupt enable */
    constexpr std::uint32_t FDCAN_TXBTIE_TIE_B_0x1 = 1;

    /** @brief FDCAN Tx buffer cancellation finished interrupt enable register */
    using FDCAN_TXBCIE = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xE4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Cancellation finished interrupt enable */
    using FDCAN_TXBCIE_CFIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Cancellation finished interrupt disabled (value: 0)
     *          - B_0x1: Cancellation finished interrupt enabled (value: 1)
     */
        /** @brief Cancellation finished interrupt disabled */
    constexpr std::uint32_t FDCAN_TXBCIE_CFIE_B_0x0 = 0;
        /** @brief Cancellation finished interrupt enabled */
    constexpr std::uint32_t FDCAN_TXBCIE_CFIE_B_0x1 = 1;

    /** @brief FDCAN Tx event FIFO configuration register */
    using FDCAN_TXEFC = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Event FIFO start address */
    using FDCAN_TXEFC_EFSA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Event FIFO size. */
    using FDCAN_TXEFC_EFS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tx event FIFO disabled (value: 0)
     */
        /** @brief Tx event FIFO disabled */
    constexpr std::uint32_t FDCAN_TXEFC_EFS_B_0x0 = 0;

    /** @brief Event FIFO watermark */
    using FDCAN_TXEFC_EFWM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Watermark interrupt disabled (value: 0)
     */
        /** @brief Watermark interrupt disabled */
    constexpr std::uint32_t FDCAN_TXEFC_EFWM_B_0x0 = 0;

    /** @brief FDCAN Tx event FIFO status register */
    using FDCAN_TXEFS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Event FIFO fill level */
    using FDCAN_TXEFS_EFFL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Event FIFO get index */
    using FDCAN_TXEFS_EFGI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Event FIFO put index */
    using FDCAN_TXEFS_EFPI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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

    /** @brief Tx event FIFO element lost */
    using FDCAN_TXEFS_TEFL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FDCAN Tx event FIFO acknowledge register */
    using FDCAN_TXEFA = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Event FIFO acknowledge index */
    using FDCAN_TXEFA_EFAI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FDCAN TT trigger memory configuration register */
    using FDCAN_TTTMC = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x100, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger memory start address. */
    using FDCAN_TTTMC_TMSA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger memory elements */
    using FDCAN_TTTMC_TME = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No trigger memory (value: 0)
     */
        /** @brief No trigger memory */
    constexpr std::uint32_t FDCAN_TTTMC_TME_B_0x0 = 0;

    /** @brief FDCAN TT reference message configuration register */
    using FDCAN_TTRMC = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x104, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reference identifier. */
    using FDCAN_TTRMC_RID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 29, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extended identifier */
    using FDCAN_TTRMC_XTD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 11-bit standard identifier (value: 0)
     *          - B_0x1: 29-bit extended identifier (value: 1)
     */
        /** @brief 11-bit standard identifier */
    constexpr std::uint32_t FDCAN_TTRMC_XTD_B_0x0 = 0;
        /** @brief 29-bit extended identifier */
    constexpr std::uint32_t FDCAN_TTRMC_XTD_B_0x1 = 1;

    /** @brief Reference message payload select */
    using FDCAN_TTRMC_RMPS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Reference message has no additional payload (value: 0)
     *          - B_0x1: The following elements are taken from Tx buffer 0: (value: 1)
     */
        /** @brief Reference message has no additional payload */
    constexpr std::uint32_t FDCAN_TTRMC_RMPS_B_0x0 = 0;
        /** @brief The following elements are taken from Tx buffer 0: */
    constexpr std::uint32_t FDCAN_TTRMC_RMPS_B_0x1 = 1;

    /** @brief FDCAN TT operation configuration register */
    using FDCAN_TTOCF = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x108, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Operation mode. */
    using FDCAN_TTOCF_OM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Event-driven CAN communication, default (value: 0)
     *          - B_0x1: TTCAN level 1 (value: 1)
     *          - B_0x2: TTCAN level 2 (value: 2)
     *          - B_0x3: TTCAN level 0 (value: 3)
     */
        /** @brief Event-driven CAN communication, default */
    constexpr std::uint32_t FDCAN_TTOCF_OM_B_0x0 = 0;
        /** @brief TTCAN level 1 */
    constexpr std::uint32_t FDCAN_TTOCF_OM_B_0x1 = 1;
        /** @brief TTCAN level 2 */
    constexpr std::uint32_t FDCAN_TTOCF_OM_B_0x2 = 2;
        /** @brief TTCAN level 0 */
    constexpr std::uint32_t FDCAN_TTOCF_OM_B_0x3 = 3;

    /** @brief Gap enable. */
    using FDCAN_TTOCF_GEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Strictly time-triggered operation (value: 0)
     *          - B_0x1: External event-synchronized time-triggered operation (value: 1)
     */
        /** @brief Strictly time-triggered operation */
    constexpr std::uint32_t FDCAN_TTOCF_GEN_B_0x0 = 0;
        /** @brief External event-synchronized time-triggered operation */
    constexpr std::uint32_t FDCAN_TTOCF_GEN_B_0x1 = 1;

    /** @brief Time master. */
    using FDCAN_TTOCF_TM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Time master function disabled (value: 0)
     *          - B_0x1: Potential time master (value: 1)
     */
        /** @brief Time master function disabled */
    constexpr std::uint32_t FDCAN_TTOCF_TM_B_0x0 = 0;
        /** @brief Potential time master */
    constexpr std::uint32_t FDCAN_TTOCF_TM_B_0x1 = 1;

    /** @brief LD of synchronization deviation limit. */
    using FDCAN_TTOCF_LDSDL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Initial reference trigger offset. */
    using FDCAN_TTOCF_IRTO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable external clock synchronization */
    using FDCAN_TTOCF_EECS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: External clock synchronization in FDCAN level 0, 2 disabled (value: 0)
     *          - B_0x1: External clock synchronization in FDCAN level 0, 2 enabled (value: 1)
     */
        /** @brief External clock synchronization in FDCAN level 0, 2 disabled */
    constexpr std::uint32_t FDCAN_TTOCF_EECS_B_0x0 = 0;
        /** @brief External clock synchronization in FDCAN level 0, 2 enabled */
    constexpr std::uint32_t FDCAN_TTOCF_EECS_B_0x1 = 1;

    /** @brief Application watchdog limit. */
    using FDCAN_TTOCF_AWL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable global time filtering. */
    using FDCAN_TTOCF_EGTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Global time filtering in FDCAN level 0, 2 is disabled (value: 0)
     *          - B_0x1: Global time filtering in FDCAN level 0, 2 is enabled (value: 1)
     */
        /** @brief Global time filtering in FDCAN level 0, 2 is disabled */
    constexpr std::uint32_t FDCAN_TTOCF_EGTF_B_0x0 = 0;
        /** @brief Global time filtering in FDCAN level 0, 2 is enabled */
    constexpr std::uint32_t FDCAN_TTOCF_EGTF_B_0x1 = 1;

    /** @brief Enable clock calibration. */
    using FDCAN_TTOCF_ECC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Automatic clock calibration in FDCAN level 0, 2 is disabled (value: 0)
     *          - B_0x1: Automatic clock calibration in FDCAN level 0, 2 is enabled (value: 1)
     */
        /** @brief Automatic clock calibration in FDCAN level 0, 2 is disabled */
    constexpr std::uint32_t FDCAN_TTOCF_ECC_B_0x0 = 0;
        /** @brief Automatic clock calibration in FDCAN level 0, 2 is enabled */
    constexpr std::uint32_t FDCAN_TTOCF_ECC_B_0x1 = 1;

    /** @brief Event trigger polarity. */
    using FDCAN_TTOCF_EVTP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising edge trigger (value: 0)
     *          - B_0x1: Falling edge trigger (value: 1)
     */
        /** @brief Rising edge trigger */
    constexpr std::uint32_t FDCAN_TTOCF_EVTP_B_0x0 = 0;
        /** @brief Falling edge trigger */
    constexpr std::uint32_t FDCAN_TTOCF_EVTP_B_0x1 = 1;

    /** @brief FDCAN TT matrix limits register */
    using FDCAN_TTMLM = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Cycle count Max */
    using FDCAN_TTMLM_CCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x00: 1 basic cycle per matrix cycle (value: 0)
     *          - B_0x01: 2 basic cycles per matrix cycle (value: 1)
     *          - B_0x03: 4 basic cycles per matrix cycle (value: 3)
     *          - B_0x07: 8 basic cycles per matrix cycle (value: 7)
     *          - B_0x0F: 16 basic cycles per matrix cycle (value: 15)
     *          - B_0x1F: 32 basic cycles per matrix cycle (value: 31)
     *          - B_0x3F: 64 basic cycles per matrix cycle (value: 63)
     */
        /** @brief 1 basic cycle per matrix cycle */
    constexpr std::uint32_t FDCAN_TTMLM_CCM_B_0x00 = 0;
        /** @brief 2 basic cycles per matrix cycle */
    constexpr std::uint32_t FDCAN_TTMLM_CCM_B_0x01 = 1;
        /** @brief 4 basic cycles per matrix cycle */
    constexpr std::uint32_t FDCAN_TTMLM_CCM_B_0x03 = 3;
        /** @brief 8 basic cycles per matrix cycle */
    constexpr std::uint32_t FDCAN_TTMLM_CCM_B_0x07 = 7;
        /** @brief 16 basic cycles per matrix cycle */
    constexpr std::uint32_t FDCAN_TTMLM_CCM_B_0x0F = 15;
        /** @brief 32 basic cycles per matrix cycle */
    constexpr std::uint32_t FDCAN_TTMLM_CCM_B_0x1F = 31;
        /** @brief 64 basic cycles per matrix cycle */
    constexpr std::uint32_t FDCAN_TTMLM_CCM_B_0x3F = 63;

    /** @brief Cycle start synchronization */
    using FDCAN_TTMLM_CSS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No sync pulse (value: 0)
     *          - B_0x1: Sync pulse at start of basic cycle (value: 1)
     *          - B_0x2: Sync pulse at start of matrix cycle (value: 2)
     */
        /** @brief No sync pulse */
    constexpr std::uint32_t FDCAN_TTMLM_CSS_B_0x0 = 0;
        /** @brief Sync pulse at start of basic cycle */
    constexpr std::uint32_t FDCAN_TTMLM_CSS_B_0x1 = 1;
        /** @brief Sync pulse at start of matrix cycle */
    constexpr std::uint32_t FDCAN_TTMLM_CSS_B_0x2 = 2;

    /** @brief Tx enable window */
    using FDCAN_TTMLM_TXEW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Expected number of Tx triggers */
    using FDCAN_TTMLM_ENTT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FDCAN TUR configuration register */
    using FDCAN_TURCF = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x110, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Numerator configuration low. */
    using FDCAN_TURCF_NCL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Denominator configuration. */
    using FDCAN_TURCF_DC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0000: Illegal value (value: 0)
     */
        /** @brief Illegal value */
    constexpr std::uint32_t FDCAN_TURCF_DC_B_0x0000 = 0;

    /** @brief Enable local time. */
    using FDCAN_TURCF_ELT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Local time is stopped, default (value: 0)
     *          - B_0x1: Local time is enabled (value: 1)
     */
        /** @brief Local time is stopped, default */
    constexpr std::uint32_t FDCAN_TURCF_ELT_B_0x0 = 0;
        /** @brief Local time is enabled */
    constexpr std::uint32_t FDCAN_TURCF_ELT_B_0x1 = 1;

    /** @brief FDCAN TT operation control register */
    using FDCAN_TTOCN = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x114, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Set global time. */
    using FDCAN_TTOCN_SGT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief External clock synchronization. */
    using FDCAN_TTOCN_ECS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Stop watch polarity. */
    using FDCAN_TTOCN_SWP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rising edge trigger (value: 0)
     *          - B_0x1: Falling edge trigger (value: 1)
     */
        /** @brief Rising edge trigger */
    constexpr std::uint32_t FDCAN_TTOCN_SWP_B_0x0 = 0;
        /** @brief Falling edge trigger */
    constexpr std::uint32_t FDCAN_TTOCN_SWP_B_0x1 = 1;

    /** @brief Stop watch source. */
    using FDCAN_TTOCN_SWS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Stop watch disabled (value: 0)
     *          - B_0x1: Actual value of cycle time is copied to FDCAN_TTCPT.SWV (value: 1)
     *          - B_0x2: Actual value of local time is copied to FDCAN_TTCPT.SWV (value: 2)
     *          - B_0x3: Actual value of global time is copied to FDCAN_TTCPT.SWV (value: 3)
     */
        /** @brief Stop watch disabled */
    constexpr std::uint32_t FDCAN_TTOCN_SWS_B_0x0 = 0;
        /** @brief Actual value of cycle time is copied to FDCAN_TTCPT.SWV */
    constexpr std::uint32_t FDCAN_TTOCN_SWS_B_0x1 = 1;
        /** @brief Actual value of local time is copied to FDCAN_TTCPT.SWV */
    constexpr std::uint32_t FDCAN_TTOCN_SWS_B_0x2 = 2;
        /** @brief Actual value of global time is copied to FDCAN_TTCPT.SWV */
    constexpr std::uint32_t FDCAN_TTOCN_SWS_B_0x3 = 3;

    /** @brief Register time mark interrupt pulse enable. */
    using FDCAN_TTOCN_RTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Register time mark interrupt output disabled (value: 0)
     *          - B_0x1: Register time mark interrupt output enabled (value: 1)
     */
        /** @brief Register time mark interrupt output disabled */
    constexpr std::uint32_t FDCAN_TTOCN_RTIE_B_0x0 = 0;
        /** @brief Register time mark interrupt output enabled */
    constexpr std::uint32_t FDCAN_TTOCN_RTIE_B_0x1 = 1;

    /** @brief Register time mark compare. */
    using FDCAN_TTOCN_TMC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No Register time mark interrupt generated (value: 0)
     *          - B_0x1: Register time mark interrupt if time mark = cycle time (value: 1)
     *          - B_0x2: Register time mark interrupt if time mark = local time (value: 2)
     *          - B_0x3: Register time mark interrupt if time mark = global time (value: 3)
     */
        /** @brief No Register time mark interrupt generated */
    constexpr std::uint32_t FDCAN_TTOCN_TMC_B_0x0 = 0;
        /** @brief Register time mark interrupt if time mark = cycle time */
    constexpr std::uint32_t FDCAN_TTOCN_TMC_B_0x1 = 1;
        /** @brief Register time mark interrupt if time mark = local time */
    constexpr std::uint32_t FDCAN_TTOCN_TMC_B_0x2 = 2;
        /** @brief Register time mark interrupt if time mark = global time */
    constexpr std::uint32_t FDCAN_TTOCN_TMC_B_0x3 = 3;

    /** @brief Trigger time mark interrupt pulse enable */
    using FDCAN_TTOCN_TTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Trigger time mark interrupt output fdcan1_tmp for more than one instance and fdcan_tmp if only one instance disabled (value: 0)
     *          - B_0x1: Trigger time mark interrupt output fdcan1_tmp for more than one instance and fdcan_tmp if only one instance enabled (value: 1)
     */
        /** @brief Trigger time mark interrupt output fdcan1_tmp for more than one instance and fdcan_tmp if only one instance disabled */
    constexpr std::uint32_t FDCAN_TTOCN_TTIE_B_0x0 = 0;
        /** @brief Trigger time mark interrupt output fdcan1_tmp for more than one instance and fdcan_tmp if only one instance enabled */
    constexpr std::uint32_t FDCAN_TTOCN_TTIE_B_0x1 = 1;

    /** @brief Gap control select */
    using FDCAN_TTOCN_GCS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gap control independent from event trigger (value: 0)
     *          - B_0x1: Gap control by input event trigger pin (value: 1)
     */
        /** @brief Gap control independent from event trigger */
    constexpr std::uint32_t FDCAN_TTOCN_GCS_B_0x0 = 0;
        /** @brief Gap control by input event trigger pin */
    constexpr std::uint32_t FDCAN_TTOCN_GCS_B_0x1 = 1;

    /** @brief Finish gap. */
    using FDCAN_TTOCN_FGP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No reference message requested (value: 0)
     *          - B_0x1: Application requested start of reference message (value: 1)
     */
        /** @brief No reference message requested */
    constexpr std::uint32_t FDCAN_TTOCN_FGP_B_0x0 = 0;
        /** @brief Application requested start of reference message */
    constexpr std::uint32_t FDCAN_TTOCN_FGP_B_0x1 = 1;

    /** @brief Time mark gap. */
    using FDCAN_TTOCN_TMG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Reset by each reference message (value: 0)
     *          - B_0x1: Next reference message started when register time mark interrupt FDCAN_TTIR.RTMI is activated (value: 1)
     */
        /** @brief Reset by each reference message */
    constexpr std::uint32_t FDCAN_TTOCN_TMG_B_0x0 = 0;
        /** @brief Next reference message started when register time mark interrupt FDCAN_TTIR.RTMI is activated */
    constexpr std::uint32_t FDCAN_TTOCN_TMG_B_0x1 = 1;

    /** @brief Next is gap. */
    using FDCAN_TTOCN_NIG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action, reset by reception of any reference message (value: 0)
     *          - B_0x1: Transmit next reference message with Next_is_Gap = 1 (value: 1)
     */
        /** @brief No action, reset by reception of any reference message */
    constexpr std::uint32_t FDCAN_TTOCN_NIG_B_0x0 = 0;
        /** @brief Transmit next reference message with Next_is_Gap = 1 */
    constexpr std::uint32_t FDCAN_TTOCN_NIG_B_0x1 = 1;

    /** @brief External synchronization control */
    using FDCAN_TTOCN_ESCN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: External synchronization disabled (value: 0)
     *          - B_0x1: External synchronization enabled (value: 1)
     */
        /** @brief External synchronization disabled */
    constexpr std::uint32_t FDCAN_TTOCN_ESCN_B_0x0 = 0;
        /** @brief External synchronization enabled */
    constexpr std::uint32_t FDCAN_TTOCN_ESCN_B_0x1 = 1;

    /** @brief TT operation control register locked. */
    using FDCAN_TTOCN_LCKC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write access to FDCAN_TTOCN enabled (value: 0)
     *          - B_0x1: Write access to FDCAN_TTOCN locked (value: 1)
     */
        /** @brief Write access to FDCAN_TTOCN enabled */
    constexpr std::uint32_t FDCAN_TTOCN_LCKC_B_0x0 = 0;
        /** @brief Write access to FDCAN_TTOCN locked */
    constexpr std::uint32_t FDCAN_TTOCN_LCKC_B_0x1 = 1;

    /** @brief FDCAN TT global time preset register */
    using FDCAN_TTGTP = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x118, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Time preset */
    using FDCAN_TTGTP_TP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Cycle time target phase */
    using FDCAN_TTGTP_CTP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FDCAN TT time mark register */
    using FDCAN_TTTMK = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x11C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Time mark */
    using FDCAN_TTTMK_TM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Time mark cycle code */
    using FDCAN_TTTMK_TICC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TT time mark register locked */
    using FDCAN_TTTMK_LCKM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write access to FDCAN_TTTMK enabled (value: 0)
     *          - B_0x1: Write access to FDCAN_TTTMK locked (value: 1)
     */
        /** @brief Write access to FDCAN_TTTMK enabled */
    constexpr std::uint32_t FDCAN_TTTMK_LCKM_B_0x0 = 0;
        /** @brief Write access to FDCAN_TTTMK locked */
    constexpr std::uint32_t FDCAN_TTTMK_LCKM_B_0x1 = 1;

    /** @brief FDCAN TT interrupt register */
    using FDCAN_TTIR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x120, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Start of basic cycle */
    using FDCAN_TTIR_SBC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No basic cycle started since bit has been reset (value: 0)
     *          - B_0x1: Basic cycle started (value: 1)
     */
        /** @brief No basic cycle started since bit has been reset */
    constexpr std::uint32_t FDCAN_TTIR_SBC_B_0x0 = 0;
        /** @brief Basic cycle started */
    constexpr std::uint32_t FDCAN_TTIR_SBC_B_0x1 = 1;

    /** @brief Start of matrix cycle */
    using FDCAN_TTIR_SMC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No matrix cycle started since bit has been reset (value: 0)
     *          - B_0x1: Matrix cycle started (value: 1)
     */
        /** @brief No matrix cycle started since bit has been reset */
    constexpr std::uint32_t FDCAN_TTIR_SMC_B_0x0 = 0;
        /** @brief Matrix cycle started */
    constexpr std::uint32_t FDCAN_TTIR_SMC_B_0x1 = 1;

    /** @brief Change of synchronization mode */
    using FDCAN_TTIR_CSM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No change in master to slave relation or schedule synchronization (value: 0)
     *          - B_0x1: Master to slave relation or schedule synchronization changed, (value: 1)
     */
        /** @brief No change in master to slave relation or schedule synchronization */
    constexpr std::uint32_t FDCAN_TTIR_CSM_B_0x0 = 0;
        /** @brief Master to slave relation or schedule synchronization changed, */
    constexpr std::uint32_t FDCAN_TTIR_CSM_B_0x1 = 1;

    /** @brief Start of gap */
    using FDCAN_TTIR_SOG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Register time mark interrupt */
    using FDCAN_TTIR_RTMI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Time mark not reached (value: 0)
     *          - B_0x1: Time mark reached (value: 1)
     */
        /** @brief Time mark not reached */
    constexpr std::uint32_t FDCAN_TTIR_RTMI_B_0x0 = 0;
        /** @brief Time mark reached */
    constexpr std::uint32_t FDCAN_TTIR_RTMI_B_0x1 = 1;

    /** @brief Trigger time mark event internal */
    using FDCAN_TTIR_TTMI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Time mark not reached (value: 0)
     *          - B_0x1: Time mark reached (level 0: cycle time FDCAN_TTOCF.RTO x 0x200) (value: 1)
     */
        /** @brief Time mark not reached */
    constexpr std::uint32_t FDCAN_TTIR_TTMI_B_0x0 = 0;
        /** @brief Time mark reached (level 0: cycle time FDCAN_TTOCF.RTO x 0x200) */
    constexpr std::uint32_t FDCAN_TTIR_TTMI_B_0x1 = 1;

    /** @brief Stop watch event */
    using FDCAN_TTIR_SWE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No rising/falling edge at stop watch trigger pin detected (value: 0)
     *          - B_0x1: Rising/falling edge at stop watch trigger pin detected (value: 1)
     */
        /** @brief No rising/falling edge at stop watch trigger pin detected */
    constexpr std::uint32_t FDCAN_TTIR_SWE_B_0x0 = 0;
        /** @brief Rising/falling edge at stop watch trigger pin detected */
    constexpr std::uint32_t FDCAN_TTIR_SWE_B_0x1 = 1;

    /** @brief Global time wrap */
    using FDCAN_TTIR_GTW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No global time wrap occurred (value: 0)
     *          - B_0x1: Global time wrap from 0xFFFF to 0x0000 occurred (value: 1)
     */
        /** @brief No global time wrap occurred */
    constexpr std::uint32_t FDCAN_TTIR_GTW_B_0x0 = 0;
        /** @brief Global time wrap from 0xFFFF to 0x0000 occurred */
    constexpr std::uint32_t FDCAN_TTIR_GTW_B_0x1 = 1;

    /** @brief Global time discontinuity */
    using FDCAN_TTIR_GTD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No discontinuity of global time (value: 0)
     *          - B_0x1: Discontinuity of global time (value: 1)
     */
        /** @brief No discontinuity of global time */
    constexpr std::uint32_t FDCAN_TTIR_GTD_B_0x0 = 0;
        /** @brief Discontinuity of global time */
    constexpr std::uint32_t FDCAN_TTIR_GTD_B_0x1 = 1;

    /** @brief Global time error */
    using FDCAN_TTIR_GTE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Synchronization deviation within limit (value: 0)
     *          - B_0x1: Synchronization deviation exceeded limit (value: 1)
     */
        /** @brief Synchronization deviation within limit */
    constexpr std::uint32_t FDCAN_TTIR_GTE_B_0x0 = 0;
        /** @brief Synchronization deviation exceeded limit */
    constexpr std::uint32_t FDCAN_TTIR_GTE_B_0x1 = 1;

    /** @brief Tx count underflow */
    using FDCAN_TTIR_TXU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Number of Tx trigger as expected (value: 0)
     *          - B_0x1: Less Tx trigger than expected in one cycle (value: 1)
     */
        /** @brief Number of Tx trigger as expected */
    constexpr std::uint32_t FDCAN_TTIR_TXU_B_0x0 = 0;
        /** @brief Less Tx trigger than expected in one cycle */
    constexpr std::uint32_t FDCAN_TTIR_TXU_B_0x1 = 1;

    /** @brief Tx count overflow */
    using FDCAN_TTIR_TXO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Number of Tx trigger as expected (value: 0)
     *          - B_0x1: More Tx trigger than expected in one cycle (value: 1)
     */
        /** @brief Number of Tx trigger as expected */
    constexpr std::uint32_t FDCAN_TTIR_TXO_B_0x0 = 0;
        /** @brief More Tx trigger than expected in one cycle */
    constexpr std::uint32_t FDCAN_TTIR_TXO_B_0x1 = 1;

    /** @brief Scheduling error 1 */
    using FDCAN_TTIR_SE1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No scheduling error 1 (value: 0)
     *          - B_0x1: Scheduling error 1 occurred (value: 1)
     */
        /** @brief No scheduling error 1 */
    constexpr std::uint32_t FDCAN_TTIR_SE1_B_0x0 = 0;
        /** @brief Scheduling error 1 occurred */
    constexpr std::uint32_t FDCAN_TTIR_SE1_B_0x1 = 1;

    /** @brief Scheduling error 2 */
    using FDCAN_TTIR_SE2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No scheduling error 2 (value: 0)
     *          - B_0x1: Scheduling error 2 occurred (value: 1)
     */
        /** @brief No scheduling error 2 */
    constexpr std::uint32_t FDCAN_TTIR_SE2_B_0x0 = 0;
        /** @brief Scheduling error 2 occurred */
    constexpr std::uint32_t FDCAN_TTIR_SE2_B_0x1 = 1;

    /** @brief Error level changed */
    using FDCAN_TTIR_ELC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No change in error level (value: 0)
     *          - B_0x1: Error level changed (value: 1)
     */
        /** @brief No change in error level */
    constexpr std::uint32_t FDCAN_TTIR_ELC_B_0x0 = 0;
        /** @brief Error level changed */
    constexpr std::uint32_t FDCAN_TTIR_ELC_B_0x1 = 1;

    /** @brief Initialization watch trigger */
    using FDCAN_TTIR_IWTG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Watch trigger */
    using FDCAN_TTIR_WT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No missing reference message (value: 0)
     *          - B_0x1: Missing reference message (level 0: cycle time 0xFF00) (value: 1)
     */
        /** @brief No missing reference message */
    constexpr std::uint32_t FDCAN_TTIR_WT_B_0x0 = 0;
        /** @brief Missing reference message (level 0: cycle time 0xFF00) */
    constexpr std::uint32_t FDCAN_TTIR_WT_B_0x1 = 1;

    /** @brief Application watchdog */
    using FDCAN_TTIR_AW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application watchdog served in time (value: 0)
     *          - B_0x1: Application watchdog not served in time (value: 1)
     */
        /** @brief Application watchdog served in time */
    constexpr std::uint32_t FDCAN_TTIR_AW_B_0x0 = 0;
        /** @brief Application watchdog not served in time */
    constexpr std::uint32_t FDCAN_TTIR_AW_B_0x1 = 1;

    /** @brief Configuration error */
    using FDCAN_TTIR_CER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No error found in trigger list (value: 0)
     *          - B_0x1: Error found in trigger list (value: 1)
     */
        /** @brief No error found in trigger list */
    constexpr std::uint32_t FDCAN_TTIR_CER_B_0x0 = 0;
        /** @brief Error found in trigger list */
    constexpr std::uint32_t FDCAN_TTIR_CER_B_0x1 = 1;

    /** @brief FDCAN TT interrupt enable register */
    using FDCAN_TTIE = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x124, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Start of basic cycle interrupt enable */
    using FDCAN_TTIE_SBCE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TT interrupt disabled (value: 0)
     *          - B_0x1: TT interrupt enabled (value: 1)
     */
        /** @brief TT interrupt disabled */
    constexpr std::uint32_t FDCAN_TTIE_SBCE_B_0x0 = 0;
        /** @brief TT interrupt enabled */
    constexpr std::uint32_t FDCAN_TTIE_SBCE_B_0x1 = 1;

    /** @brief Start of matrix cycle interrupt enable */
    using FDCAN_TTIE_SMCE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TT interrupt disabled (value: 0)
     *          - B_0x1: TT interrupt enabled (value: 1)
     */
        /** @brief TT interrupt disabled */
    constexpr std::uint32_t FDCAN_TTIE_SMCE_B_0x0 = 0;
        /** @brief TT interrupt enabled */
    constexpr std::uint32_t FDCAN_TTIE_SMCE_B_0x1 = 1;

    /** @brief Change of synchronization mode interrupt enable */
    using FDCAN_TTIE_CSME = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TT interrupt disabled (value: 0)
     *          - B_0x1: TT interrupt enabled (value: 1)
     */
        /** @brief TT interrupt disabled */
    constexpr std::uint32_t FDCAN_TTIE_CSME_B_0x0 = 0;
        /** @brief TT interrupt enabled */
    constexpr std::uint32_t FDCAN_TTIE_CSME_B_0x1 = 1;

    /** @brief Start of gap interrupt enable */
    using FDCAN_TTIE_SOGE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TT interrupt disabled (value: 0)
     *          - B_0x1: TT interrupt enabled (value: 1)
     */
        /** @brief TT interrupt disabled */
    constexpr std::uint32_t FDCAN_TTIE_SOGE_B_0x0 = 0;
        /** @brief TT interrupt enabled */
    constexpr std::uint32_t FDCAN_TTIE_SOGE_B_0x1 = 1;

    /** @brief Register time mark interrupt enable */
    using FDCAN_TTIE_RTMIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TT interrupt disabled (value: 0)
     *          - B_0x1: TT interrupt enabled (value: 1)
     */
        /** @brief TT interrupt disabled */
    constexpr std::uint32_t FDCAN_TTIE_RTMIE_B_0x0 = 0;
        /** @brief TT interrupt enabled */
    constexpr std::uint32_t FDCAN_TTIE_RTMIE_B_0x1 = 1;

    /** @brief Trigger time mark event internal interrupt enable */
    using FDCAN_TTIE_TTMIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TT interrupt disabled (value: 0)
     *          - B_0x1: TT interrupt enabled (value: 1)
     */
        /** @brief TT interrupt disabled */
    constexpr std::uint32_t FDCAN_TTIE_TTMIE_B_0x0 = 0;
        /** @brief TT interrupt enabled */
    constexpr std::uint32_t FDCAN_TTIE_TTMIE_B_0x1 = 1;

    /** @brief Stop watch event interrupt enable */
    using FDCAN_TTIE_SWEE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TT interrupt disabled (value: 0)
     *          - B_0x1: TT interrupt enabled (value: 1)
     */
        /** @brief TT interrupt disabled */
    constexpr std::uint32_t FDCAN_TTIE_SWEE_B_0x0 = 0;
        /** @brief TT interrupt enabled */
    constexpr std::uint32_t FDCAN_TTIE_SWEE_B_0x1 = 1;

    /** @brief Global time wrap interrupt enable */
    using FDCAN_TTIE_GTWE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TT interrupt disabled (value: 0)
     *          - B_0x1: TT interrupt enabled (value: 1)
     */
        /** @brief TT interrupt disabled */
    constexpr std::uint32_t FDCAN_TTIE_GTWE_B_0x0 = 0;
        /** @brief TT interrupt enabled */
    constexpr std::uint32_t FDCAN_TTIE_GTWE_B_0x1 = 1;

    /** @brief Global time discontinuity interrupt enable */
    using FDCAN_TTIE_GTDE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TT interrupt disabled (value: 0)
     *          - B_0x1: TT interrupt enabled (value: 1)
     */
        /** @brief TT interrupt disabled */
    constexpr std::uint32_t FDCAN_TTIE_GTDE_B_0x0 = 0;
        /** @brief TT interrupt enabled */
    constexpr std::uint32_t FDCAN_TTIE_GTDE_B_0x1 = 1;

    /** @brief Global time error interrupt enable */
    using FDCAN_TTIE_GTEE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TT interrupt disabled (value: 0)
     *          - B_0x1: TT interrupt enabled (value: 1)
     */
        /** @brief TT interrupt disabled */
    constexpr std::uint32_t FDCAN_TTIE_GTEE_B_0x0 = 0;
        /** @brief TT interrupt enabled */
    constexpr std::uint32_t FDCAN_TTIE_GTEE_B_0x1 = 1;

    /** @brief Tx count underflow interrupt enable */
    using FDCAN_TTIE_TXUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TT interrupt disabled (value: 0)
     *          - B_0x1: TT interrupt enabled (value: 1)
     */
        /** @brief TT interrupt disabled */
    constexpr std::uint32_t FDCAN_TTIE_TXUE_B_0x0 = 0;
        /** @brief TT interrupt enabled */
    constexpr std::uint32_t FDCAN_TTIE_TXUE_B_0x1 = 1;

    /** @brief Tx count overflow interrupt enable */
    using FDCAN_TTIE_TXOE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TT interrupt disabled (value: 0)
     *          - B_0x1: TT interrupt enabled (value: 1)
     */
        /** @brief TT interrupt disabled */
    constexpr std::uint32_t FDCAN_TTIE_TXOE_B_0x0 = 0;
        /** @brief TT interrupt enabled */
    constexpr std::uint32_t FDCAN_TTIE_TXOE_B_0x1 = 1;

    /** @brief Scheduling error 1 interrupt enable */
    using FDCAN_TTIE_SE1E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TT interrupt disabled (value: 0)
     *          - B_0x1: TT interrupt enabled (value: 1)
     */
        /** @brief TT interrupt disabled */
    constexpr std::uint32_t FDCAN_TTIE_SE1E_B_0x0 = 0;
        /** @brief TT interrupt enabled */
    constexpr std::uint32_t FDCAN_TTIE_SE1E_B_0x1 = 1;

    /** @brief Scheduling error 2 interrupt enable */
    using FDCAN_TTIE_SE2E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TT interrupt disabled (value: 0)
     *          - B_0x1: TT interrupt enabled (value: 1)
     */
        /** @brief TT interrupt disabled */
    constexpr std::uint32_t FDCAN_TTIE_SE2E_B_0x0 = 0;
        /** @brief TT interrupt enabled */
    constexpr std::uint32_t FDCAN_TTIE_SE2E_B_0x1 = 1;

    /** @brief Change error level interrupt enable */
    using FDCAN_TTIE_ELCE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TT interrupt disabled (value: 0)
     *          - B_0x1: TT interrupt enabled (value: 1)
     */
        /** @brief TT interrupt disabled */
    constexpr std::uint32_t FDCAN_TTIE_ELCE_B_0x0 = 0;
        /** @brief TT interrupt enabled */
    constexpr std::uint32_t FDCAN_TTIE_ELCE_B_0x1 = 1;

    /** @brief Initialization watch trigger interrupt enable */
    using FDCAN_TTIE_IWTE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TT interrupt disabled (value: 0)
     *          - B_0x1: TT interrupt enabled (value: 1)
     */
        /** @brief TT interrupt disabled */
    constexpr std::uint32_t FDCAN_TTIE_IWTE_B_0x0 = 0;
        /** @brief TT interrupt enabled */
    constexpr std::uint32_t FDCAN_TTIE_IWTE_B_0x1 = 1;

    /** @brief Watch trigger interrupt enable */
    using FDCAN_TTIE_WTE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TT interrupt disabled (value: 0)
     *          - B_0x1: TT interrupt enabled (value: 1)
     */
        /** @brief TT interrupt disabled */
    constexpr std::uint32_t FDCAN_TTIE_WTE_B_0x0 = 0;
        /** @brief TT interrupt enabled */
    constexpr std::uint32_t FDCAN_TTIE_WTE_B_0x1 = 1;

    /** @brief Application watchdog interrupt enable */
    using FDCAN_TTIE_AWE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TT interrupt disabled (value: 0)
     *          - B_0x1: TT interrupt enabled (value: 1)
     */
        /** @brief TT interrupt disabled */
    constexpr std::uint32_t FDCAN_TTIE_AWE_B_0x0 = 0;
        /** @brief TT interrupt enabled */
    constexpr std::uint32_t FDCAN_TTIE_AWE_B_0x1 = 1;

    /** @brief Configuration error interrupt enable */
    using FDCAN_TTIE_CERE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TT interrupt disabled (value: 0)
     *          - B_0x1: TT interrupt enabled (value: 1)
     */
        /** @brief TT interrupt disabled */
    constexpr std::uint32_t FDCAN_TTIE_CERE_B_0x0 = 0;
        /** @brief TT interrupt enabled */
    constexpr std::uint32_t FDCAN_TTIE_CERE_B_0x1 = 1;

    /** @brief FDCAN TT interrupt line select register */
    using FDCAN_TTILS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x128, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Start of basic cycle interrupt line */
    using FDCAN_TTILS_SBCL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TT interrupt assigned to interrupt line 0 (value: 0)
     *          - B_0x1: TT interrupt assigned to interrupt line 1 (value: 1)
     */
        /** @brief TT interrupt assigned to interrupt line 0 */
    constexpr std::uint32_t FDCAN_TTILS_SBCL_B_0x0 = 0;
        /** @brief TT interrupt assigned to interrupt line 1 */
    constexpr std::uint32_t FDCAN_TTILS_SBCL_B_0x1 = 1;

    /** @brief Start of matrix cycle interrupt line */
    using FDCAN_TTILS_SMCL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TT interrupt assigned to interrupt line 0 (value: 0)
     *          - B_0x1: TT interrupt assigned to interrupt line 1 (value: 1)
     */
        /** @brief TT interrupt assigned to interrupt line 0 */
    constexpr std::uint32_t FDCAN_TTILS_SMCL_B_0x0 = 0;
        /** @brief TT interrupt assigned to interrupt line 1 */
    constexpr std::uint32_t FDCAN_TTILS_SMCL_B_0x1 = 1;

    /** @brief Change of synchronization mode interrupt line */
    using FDCAN_TTILS_CSML = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TT interrupt assigned to interrupt line 0 (value: 0)
     *          - B_0x1: TT interrupt assigned to interrupt line 1 (value: 1)
     */
        /** @brief TT interrupt assigned to interrupt line 0 */
    constexpr std::uint32_t FDCAN_TTILS_CSML_B_0x0 = 0;
        /** @brief TT interrupt assigned to interrupt line 1 */
    constexpr std::uint32_t FDCAN_TTILS_CSML_B_0x1 = 1;

    /** @brief Start of gap interrupt line */
    using FDCAN_TTILS_SOGL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TT interrupt assigned to interrupt line 0 (value: 0)
     *          - B_0x1: TT interrupt assigned to interrupt line 1 (value: 1)
     */
        /** @brief TT interrupt assigned to interrupt line 0 */
    constexpr std::uint32_t FDCAN_TTILS_SOGL_B_0x0 = 0;
        /** @brief TT interrupt assigned to interrupt line 1 */
    constexpr std::uint32_t FDCAN_TTILS_SOGL_B_0x1 = 1;

    /** @brief Register time mark interrupt line */
    using FDCAN_TTILS_RTMIL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TT interrupt assigned to interrupt line 0 (value: 0)
     *          - B_0x1: TT interrupt assigned to interrupt line 1 (value: 1)
     */
        /** @brief TT interrupt assigned to interrupt line 0 */
    constexpr std::uint32_t FDCAN_TTILS_RTMIL_B_0x0 = 0;
        /** @brief TT interrupt assigned to interrupt line 1 */
    constexpr std::uint32_t FDCAN_TTILS_RTMIL_B_0x1 = 1;

    /** @brief Trigger time mark event internal interrupt line */
    using FDCAN_TTILS_TTMIL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TT interrupt assigned to interrupt line 0 (value: 0)
     *          - B_0x1: TT interrupt assigned to interrupt line 1 (value: 1)
     */
        /** @brief TT interrupt assigned to interrupt line 0 */
    constexpr std::uint32_t FDCAN_TTILS_TTMIL_B_0x0 = 0;
        /** @brief TT interrupt assigned to interrupt line 1 */
    constexpr std::uint32_t FDCAN_TTILS_TTMIL_B_0x1 = 1;

    /** @brief Stop watch event interrupt line */
    using FDCAN_TTILS_SWEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TT interrupt assigned to interrupt line 0 (value: 0)
     *          - B_0x1: TT interrupt assigned to interrupt line 1 (value: 1)
     */
        /** @brief TT interrupt assigned to interrupt line 0 */
    constexpr std::uint32_t FDCAN_TTILS_SWEL_B_0x0 = 0;
        /** @brief TT interrupt assigned to interrupt line 1 */
    constexpr std::uint32_t FDCAN_TTILS_SWEL_B_0x1 = 1;

    /** @brief Global time wrap interrupt line */
    using FDCAN_TTILS_GTWL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TT interrupt assigned to interrupt line 0 (value: 0)
     *          - B_0x1: TT interrupt assigned to interrupt line 1 (value: 1)
     */
        /** @brief TT interrupt assigned to interrupt line 0 */
    constexpr std::uint32_t FDCAN_TTILS_GTWL_B_0x0 = 0;
        /** @brief TT interrupt assigned to interrupt line 1 */
    constexpr std::uint32_t FDCAN_TTILS_GTWL_B_0x1 = 1;

    /** @brief Global time discontinuity interrupt line */
    using FDCAN_TTILS_GTDL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TT interrupt assigned to interrupt line 0 (value: 0)
     *          - B_0x1: TT interrupt assigned to interrupt line 1 (value: 1)
     */
        /** @brief TT interrupt assigned to interrupt line 0 */
    constexpr std::uint32_t FDCAN_TTILS_GTDL_B_0x0 = 0;
        /** @brief TT interrupt assigned to interrupt line 1 */
    constexpr std::uint32_t FDCAN_TTILS_GTDL_B_0x1 = 1;

    /** @brief Global time error interrupt line */
    using FDCAN_TTILS_GTEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TT interrupt assigned to interrupt line 0 (value: 0)
     *          - B_0x1: TT interrupt assigned to interrupt line 1 (value: 1)
     */
        /** @brief TT interrupt assigned to interrupt line 0 */
    constexpr std::uint32_t FDCAN_TTILS_GTEL_B_0x0 = 0;
        /** @brief TT interrupt assigned to interrupt line 1 */
    constexpr std::uint32_t FDCAN_TTILS_GTEL_B_0x1 = 1;

    /** @brief Tx count underflow interrupt line */
    using FDCAN_TTILS_TXUL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TT interrupt assigned to interrupt line 0 (value: 0)
     *          - B_0x1: TT interrupt assigned to interrupt line 1 (value: 1)
     */
        /** @brief TT interrupt assigned to interrupt line 0 */
    constexpr std::uint32_t FDCAN_TTILS_TXUL_B_0x0 = 0;
        /** @brief TT interrupt assigned to interrupt line 1 */
    constexpr std::uint32_t FDCAN_TTILS_TXUL_B_0x1 = 1;

    /** @brief Tx count overflow interrupt line */
    using FDCAN_TTILS_TXOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TT interrupt assigned to interrupt line 0 (value: 0)
     *          - B_0x1: TT interrupt assigned to interrupt line 1 (value: 1)
     */
        /** @brief TT interrupt assigned to interrupt line 0 */
    constexpr std::uint32_t FDCAN_TTILS_TXOL_B_0x0 = 0;
        /** @brief TT interrupt assigned to interrupt line 1 */
    constexpr std::uint32_t FDCAN_TTILS_TXOL_B_0x1 = 1;

    /** @brief Scheduling error 1 interrupt line */
    using FDCAN_TTILS_SE1L = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TT interrupt assigned to interrupt line 0 (value: 0)
     *          - B_0x1: TT interrupt assigned to interrupt line 1 (value: 1)
     */
        /** @brief TT interrupt assigned to interrupt line 0 */
    constexpr std::uint32_t FDCAN_TTILS_SE1L_B_0x0 = 0;
        /** @brief TT interrupt assigned to interrupt line 1 */
    constexpr std::uint32_t FDCAN_TTILS_SE1L_B_0x1 = 1;

    /** @brief Scheduling error 2 interrupt line */
    using FDCAN_TTILS_SE2L = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TT interrupt assigned to interrupt line 0 (value: 0)
     *          - B_0x1: TT interrupt assigned to interrupt line 1 (value: 1)
     */
        /** @brief TT interrupt assigned to interrupt line 0 */
    constexpr std::uint32_t FDCAN_TTILS_SE2L_B_0x0 = 0;
        /** @brief TT interrupt assigned to interrupt line 1 */
    constexpr std::uint32_t FDCAN_TTILS_SE2L_B_0x1 = 1;

    /** @brief Change error level interrupt line */
    using FDCAN_TTILS_ELCL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TT interrupt assigned to interrupt line 0 (value: 0)
     *          - B_0x1: TT interrupt assigned to interrupt line 1 (value: 1)
     */
        /** @brief TT interrupt assigned to interrupt line 0 */
    constexpr std::uint32_t FDCAN_TTILS_ELCL_B_0x0 = 0;
        /** @brief TT interrupt assigned to interrupt line 1 */
    constexpr std::uint32_t FDCAN_TTILS_ELCL_B_0x1 = 1;

    /** @brief Initialization watch trigger interrupt line */
    using FDCAN_TTILS_IWTL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TT interrupt assigned to interrupt line 0 (value: 0)
     *          - B_0x1: TT interrupt assigned to interrupt line 1 (value: 1)
     */
        /** @brief TT interrupt assigned to interrupt line 0 */
    constexpr std::uint32_t FDCAN_TTILS_IWTL_B_0x0 = 0;
        /** @brief TT interrupt assigned to interrupt line 1 */
    constexpr std::uint32_t FDCAN_TTILS_IWTL_B_0x1 = 1;

    /** @brief Watch trigger interrupt line */
    using FDCAN_TTILS_WTL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TT interrupt assigned to interrupt line 0 (value: 0)
     *          - B_0x1: TT interrupt assigned to interrupt line 1 (value: 1)
     */
        /** @brief TT interrupt assigned to interrupt line 0 */
    constexpr std::uint32_t FDCAN_TTILS_WTL_B_0x0 = 0;
        /** @brief TT interrupt assigned to interrupt line 1 */
    constexpr std::uint32_t FDCAN_TTILS_WTL_B_0x1 = 1;

    /** @brief Application watchdog interrupt line */
    using FDCAN_TTILS_AWL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TT interrupt assigned to interrupt line 0 (value: 0)
     *          - B_0x1: TT interrupt assigned to interrupt line 1 (value: 1)
     */
        /** @brief TT interrupt assigned to interrupt line 0 */
    constexpr std::uint32_t FDCAN_TTILS_AWL_B_0x0 = 0;
        /** @brief TT interrupt assigned to interrupt line 1 */
    constexpr std::uint32_t FDCAN_TTILS_AWL_B_0x1 = 1;

    /** @brief Configuration error interrupt line */
    using FDCAN_TTILS_CERL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TT interrupt assigned to interrupt line 0 (value: 0)
     *          - B_0x1: TT interrupt assigned to interrupt line 1 (value: 1)
     */
        /** @brief TT interrupt assigned to interrupt line 0 */
    constexpr std::uint32_t FDCAN_TTILS_CERL_B_0x0 = 0;
        /** @brief TT interrupt assigned to interrupt line 1 */
    constexpr std::uint32_t FDCAN_TTILS_CERL_B_0x1 = 1;

    /** @brief FDCAN TT operation status register */
    using FDCAN_TTOST = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x12C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Error level */
    using FDCAN_TTOST_EL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Severity 0 - No error (value: 0)
     *          - B_0x1: Severity 1 - Warning (value: 1)
     *          - B_0x2: Severity 2 - error (value: 2)
     *          - B_0x3: Severity 3 - Severe error (value: 3)
     */
        /** @brief Severity 0 - No error */
    constexpr std::uint32_t FDCAN_TTOST_EL_B_0x0 = 0;
        /** @brief Severity 1 - Warning */
    constexpr std::uint32_t FDCAN_TTOST_EL_B_0x1 = 1;
        /** @brief Severity 2 - error */
    constexpr std::uint32_t FDCAN_TTOST_EL_B_0x2 = 2;
        /** @brief Severity 3 - Severe error */
    constexpr std::uint32_t FDCAN_TTOST_EL_B_0x3 = 3;

    /** @brief Master state */
    using FDCAN_TTOST_MS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Master_Off, no master properties relevant (value: 0)
     *          - B_0x1: Operating as time Slave (value: 1)
     *          - B_0x2: Operating as backup time master (value: 2)
     *          - B_0x3: Operating as current time master (value: 3)
     */
        /** @brief Master_Off, no master properties relevant */
    constexpr std::uint32_t FDCAN_TTOST_MS_B_0x0 = 0;
        /** @brief Operating as time Slave */
    constexpr std::uint32_t FDCAN_TTOST_MS_B_0x1 = 1;
        /** @brief Operating as backup time master */
    constexpr std::uint32_t FDCAN_TTOST_MS_B_0x2 = 2;
        /** @brief Operating as current time master */
    constexpr std::uint32_t FDCAN_TTOST_MS_B_0x3 = 3;

    /** @brief Synchronization state */
    using FDCAN_TTOST_SYS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Out of Synchronization (value: 0)
     *          - B_0x1: Synchronizing to FDCAN communication (value: 1)
     *          - B_0x2: Schedule suspended by gap (In_Gap) (value: 2)
     *          - B_0x3: Synchronized to schedule (In_Schedule) (value: 3)
     */
        /** @brief Out of Synchronization */
    constexpr std::uint32_t FDCAN_TTOST_SYS_B_0x0 = 0;
        /** @brief Synchronizing to FDCAN communication */
    constexpr std::uint32_t FDCAN_TTOST_SYS_B_0x1 = 1;
        /** @brief Schedule suspended by gap (In_Gap) */
    constexpr std::uint32_t FDCAN_TTOST_SYS_B_0x2 = 2;
        /** @brief Synchronized to schedule (In_Schedule) */
    constexpr std::uint32_t FDCAN_TTOST_SYS_B_0x3 = 3;

    /** @brief Quality of global time phase */
    using FDCAN_TTOST_QGTP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Global time not valid (value: 0)
     *          - B_0x1: Global time in phase with time master (value: 1)
     */
        /** @brief Global time not valid */
    constexpr std::uint32_t FDCAN_TTOST_QGTP_B_0x0 = 0;
        /** @brief Global time in phase with time master */
    constexpr std::uint32_t FDCAN_TTOST_QGTP_B_0x1 = 1;

    /** @brief Quality of clock speed */
    using FDCAN_TTOST_QCS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Local clock speed not synchronized to time master clock speed (value: 0)
     *          - B_0x1: Synchronization deviation less than or equal to SDL (value: 1)
     */
        /** @brief Local clock speed not synchronized to time master clock speed */
    constexpr std::uint32_t FDCAN_TTOST_QCS_B_0x0 = 0;
        /** @brief Synchronization deviation less than or equal to SDL */
    constexpr std::uint32_t FDCAN_TTOST_QCS_B_0x1 = 1;

    /** @brief Reference trigger offset */
    using FDCAN_TTOST_RTO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wait for global time discontinuity */
    using FDCAN_TTOST_WGTD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No global time preset pending (value: 0)
     *          - B_0x1: Node waits for the global time preset to take effect. The bit is reset when the node has transmitted a reference message with Disc_Bit = 1 or after it received a reference message. (value: 1)
     */
        /** @brief No global time preset pending */
    constexpr std::uint32_t FDCAN_TTOST_WGTD_B_0x0 = 0;
        /** @brief Node waits for the global time preset to take effect. The bit is reset when the node has transmitted a reference message with Disc_Bit = 1 or after it received a reference message. */
    constexpr std::uint32_t FDCAN_TTOST_WGTD_B_0x1 = 1;

    /** @brief Gap finished indicator */
    using FDCAN_TTOST_GFI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Reset at the end of each reference message (value: 0)
     *          - B_0x1: Gap finished by FDCAN (value: 1)
     */
        /** @brief Reset at the end of each reference message */
    constexpr std::uint32_t FDCAN_TTOST_GFI_B_0x0 = 0;
        /** @brief Gap finished by FDCAN */
    constexpr std::uint32_t FDCAN_TTOST_GFI_B_0x1 = 1;

    /** @brief Time master priority */
    using FDCAN_TTOST_TMP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Gap started indicator */
    using FDCAN_TTOST_GSI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No gap in schedule, reset by each reference message and for all time slaves (value: 0)
     *          - B_0x1: Gap time after basic cycle has started (value: 1)
     */
        /** @brief No gap in schedule, reset by each reference message and for all time slaves */
    constexpr std::uint32_t FDCAN_TTOST_GSI_B_0x0 = 0;
        /** @brief Gap time after basic cycle has started */
    constexpr std::uint32_t FDCAN_TTOST_GSI_B_0x1 = 1;

    /** @brief Wait for event */
    using FDCAN_TTOST_WFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No gap announced, reset by a reference message with Next_is_Gap = 0 (value: 0)
     *          - B_0x1: Reference message with Next_is_Gap = 1 received (value: 1)
     */
        /** @brief No gap announced, reset by a reference message with Next_is_Gap = 0 */
    constexpr std::uint32_t FDCAN_TTOST_WFE_B_0x0 = 0;
        /** @brief Reference message with Next_is_Gap = 1 received */
    constexpr std::uint32_t FDCAN_TTOST_WFE_B_0x1 = 1;

    /** @brief Application watchdog event */
    using FDCAN_TTOST_AWE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application watchdog served in time (value: 0)
     *          - B_0x1: Failed to serve application watchdog in time (value: 1)
     */
        /** @brief Application watchdog served in time */
    constexpr std::uint32_t FDCAN_TTOST_AWE_B_0x0 = 0;
        /** @brief Failed to serve application watchdog in time */
    constexpr std::uint32_t FDCAN_TTOST_AWE_B_0x1 = 1;

    /** @brief Wait for external clock synchronization. */
    using FDCAN_TTOST_WECS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No external clock synchronization pending (value: 0)
     *          - B_0x1: Node waits for external clock synchronization to take effect. The bit is reset at the start of the next basic cycle. (value: 1)
     */
        /** @brief No external clock synchronization pending */
    constexpr std::uint32_t FDCAN_TTOST_WECS_B_0x0 = 0;
        /** @brief Node waits for external clock synchronization to take effect. The bit is reset at the start of the next basic cycle. */
    constexpr std::uint32_t FDCAN_TTOST_WECS_B_0x1 = 1;

    /** @brief Schedule phase lock */
    using FDCAN_TTOST_SPL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Phase outside range (value: 0)
     *          - B_0x1: Phase inside range (value: 1)
     */
        /** @brief Phase outside range */
    constexpr std::uint32_t FDCAN_TTOST_SPL_B_0x0 = 0;
        /** @brief Phase inside range */
    constexpr std::uint32_t FDCAN_TTOST_SPL_B_0x1 = 1;

    /** @brief FDCAN TUR numerator actual register */
    using FDCAN_TURNA = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x130, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Numerator actual value */
    using FDCAN_TURNA_NAV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0EFFF: illegal value (value: 61439)
     *          - B_0x21000: illegal value (value: 135168)
     */
        /** @brief illegal value */
    constexpr std::uint32_t FDCAN_TURNA_NAV_B_0x0EFFF = 61439;
        /** @brief illegal value */
    constexpr std::uint32_t FDCAN_TURNA_NAV_B_0x21000 = 135168;

    /** @brief FDCAN TT local and global time register */
    using FDCAN_TTLGT = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x134, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Local time */
    using FDCAN_TTLGT_LT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Global time */
    using FDCAN_TTLGT_GT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FDCAN TT cycle time and count register */
    using FDCAN_TTCTC = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x138, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Cycle time */
    using FDCAN_TTCTC_CT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Cycle count */
    using FDCAN_TTCTC_CC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FDCAN TT capture time register */
    using FDCAN_TTCPT = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x13C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Cycle count value */
    using FDCAN_TTCPT_CCV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Stop watch value */
    using FDCAN_TTCPT_SWV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FDCAN TT cycle sync mark register */
    using FDCAN_TTCSM = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x140, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Cycle sync mark */
    using FDCAN_TTCSM_CSM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FDCAN TT trigger select register */
    using FDCAN_TTTS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x300, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Stop watch trigger input selection */
    using FDCAN_TTTS_SWTDEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fdcan1_swt0 (value: 0)
     *          - B_0x1: fdcan1_swt1 (value: 1)
     *          - B_0x2: fdcan1_swt2 (value: 2)
     *          - B_0x3: fdcan1_swt3 (value: 3)
     */
        /** @brief fdcan1_swt0 */
    constexpr std::uint32_t FDCAN_TTTS_SWTDEL_B_0x0 = 0;
        /** @brief fdcan1_swt1 */
    constexpr std::uint32_t FDCAN_TTTS_SWTDEL_B_0x1 = 1;
        /** @brief fdcan1_swt2 */
    constexpr std::uint32_t FDCAN_TTTS_SWTDEL_B_0x2 = 2;
        /** @brief fdcan1_swt3 */
    constexpr std::uint32_t FDCAN_TTTS_SWTDEL_B_0x3 = 3;

    /** @brief Event trigger input selection */
    using FDCAN_TTTS_EVTSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fdcan1_evt0 (value: 0)
     *          - B_0x1: fdcan1_evt1 (value: 1)
     *          - B_0x2: fdcan1_evt2 (value: 2)
     *          - B_0x3: fdcan1_evt3 (value: 3)
     */
        /** @brief fdcan1_evt0 */
    constexpr std::uint32_t FDCAN_TTTS_EVTSEL_B_0x0 = 0;
        /** @brief fdcan1_evt1 */
    constexpr std::uint32_t FDCAN_TTTS_EVTSEL_B_0x1 = 1;
        /** @brief fdcan1_evt2 */
    constexpr std::uint32_t FDCAN_TTTS_EVTSEL_B_0x2 = 2;
        /** @brief fdcan1_evt3 */
    constexpr std::uint32_t FDCAN_TTTS_EVTSEL_B_0x3 = 3;

}

#endif
