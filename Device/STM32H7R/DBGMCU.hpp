/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32H7R_DBGMCU_HPP
#define EMBEDDED_PP_STM32H7R_DBGMCU_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Microcontroller debug unit */
namespace STM32H7R::DBGMCU {

    /** @brief DBGMCU identity code register */
    using DBGMCU_IDC = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Device ID */
    using DBGMCU_IDC_DEV_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x485: STM32H7Rx/Sx (value: 1157)
     */
        /** @brief STM32H7Rx/Sx */
    constexpr std::uint32_t DBGMCU_IDC_DEV_ID_B_0x485 = 1157;

    /** @brief Revision */
    using DBGMCU_IDC_REV_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DBGMCU configuration register */
    using DBGMCU_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Debug in Sleep mode enable */
    using DBGMCU_CR_DBGSLEEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation - the processor clock is stopped automatically in Sleep mode (value: 0)
     *          - B_0x1: Automatic clock stop disabled - processor clock continues to run, allowing full debug capability (value: 1)
     */
        /** @brief Normal operation - the processor clock is stopped automatically in Sleep mode */
    constexpr std::uint32_t DBGMCU_CR_DBGSLEEP_B_0x0 = 0;
        /** @brief Automatic clock stop disabled - processor clock continues to run, allowing full debug capability */
    constexpr std::uint32_t DBGMCU_CR_DBGSLEEP_B_0x1 = 1;

    /** @brief Debug in Stop mode enable */
    using DBGMCU_CR_DBGSTOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation - all clocks are disabled automatically in Stop mode (value: 0)
     *          - B_0x1: Automatic clock stop disabled - all active clocks and oscillators continue to run during Stop mode, allowing full debug capability. On exit from Stop mode, the clock settings are set to the Stop mode exit state. (value: 1)
     */
        /** @brief Normal operation - all clocks are disabled automatically in Stop mode */
    constexpr std::uint32_t DBGMCU_CR_DBGSTOP_B_0x0 = 0;
        /** @brief Automatic clock stop disabled - all active clocks and oscillators continue to run during Stop mode, allowing full debug capability. On exit from Stop mode, the clock settings are set to the Stop mode exit state. */
    constexpr std::uint32_t DBGMCU_CR_DBGSTOP_B_0x1 = 1;

    /** @brief Debug in Standby mode enable */
    using DBGMCU_CR_DBGSTBY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation - all clocks are disabled and the core powered down automatically in Standby mode. (value: 0)
     *          - B_0x1: Automatic clock stop/power-down disabled - all active clocks and oscillators continue to run during Standby mode, and the core supply is maintained, allowing full debug capability. On exit from Standby mode, a core reset is performed. (value: 1)
     */
        /** @brief Normal operation - all clocks are disabled and the core powered down automatically in Standby mode. */
    constexpr std::uint32_t DBGMCU_CR_DBGSTBY_B_0x0 = 0;
        /** @brief Automatic clock stop/power-down disabled - all active clocks and oscillators continue to run during Standby mode, and the core supply is maintained, allowing full debug capability. On exit from Standby mode, a core reset is performed. */
    constexpr std::uint32_t DBGMCU_CR_DBGSTBY_B_0x1 = 1;

    /** @brief Debug credentials reset type This bit selects which type of reset is used to revoke the debug authentication credentials */
    using DBGMCU_CR_DCRT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: System reset (value: 0)
     *          - B_0x1: Power reset (value: 1)
     */
        /** @brief System reset */
    constexpr std::uint32_t DBGMCU_CR_DCRT_B_0x0 = 0;
        /** @brief Power reset */
    constexpr std::uint32_t DBGMCU_CR_DCRT_B_0x1 = 1;

    /** @brief Trace port clock enable. This bit enables the trace port clock, TRACECLK. */
    using DBGMCU_CR_TRACECLKEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disabled - TRACECLK is disabled (value: 0)
     *          - B_0x1: Enabled - TRACECLK is active (value: 1)
     */
        /** @brief Disabled - TRACECLK is disabled */
    constexpr std::uint32_t DBGMCU_CR_TRACECLKEN_B_0x0 = 0;
        /** @brief Enabled - TRACECLK is active */
    constexpr std::uint32_t DBGMCU_CR_TRACECLKEN_B_0x1 = 1;

    /** @brief D1 debug clock enable This bit allows the debug components in the D1 clock domain (excluding those in the processor core) to be switched off if they are not needed. */
    using DBGMCU_CR_D1DBGCKEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disabled - D1 domain debug components are disabled and their clocks gated (value: 0)
     *          - B_0x1: Enabled - D1 domain debug components are clocked whenever the corresponding domain clock (CK_HCLK_D1) is active (value: 1)
     */
        /** @brief Disabled - D1 domain debug components are disabled and their clocks gated */
    constexpr std::uint32_t DBGMCU_CR_D1DBGCKEN_B_0x0 = 0;
        /** @brief Enabled - D1 domain debug components are clocked whenever the corresponding domain clock (CK_HCLK_D1) is active */
    constexpr std::uint32_t DBGMCU_CR_D1DBGCKEN_B_0x1 = 1;

    /** @brief External trigger output enable This bit controls the direction of the bi-directional trigger pin, TRGIO. */
    using DBGMCU_CR_TRGOEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Input - TRGIO is connected to TRGIN (value: 0)
     *          - B_0x1: Output - TRGIO is connected to TRGOUT (value: 1)
     */
        /** @brief Input - TRGIO is connected to TRGIN */
    constexpr std::uint32_t DBGMCU_CR_TRGOEN_B_0x0 = 0;
        /** @brief Output - TRGIO is connected to TRGOUT */
    constexpr std::uint32_t DBGMCU_CR_TRGOEN_B_0x1 = 1;

    /** @brief DBGMCU AHB5 peripheral freeze register */
    using DBGMCU_AHB5FZR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HPDMA channel 0 stop in debug */
    using DBGMCU_AHB5FZR_DBG_HPDMA_0_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. HPDMA channel 0 continues to operate while the CPU is in debug mode. (value: 0)
     *          - B_0x1: stop in debug. HPDMA channel 0 is frozen while the CPU is in debug mode. (value: 1)
     */
        /** @brief normal operation. HPDMA channel 0 continues to operate while the CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB5FZR_DBG_HPDMA_0_STOP_B_0x0 = 0;
        /** @brief stop in debug. HPDMA channel 0 is frozen while the CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB5FZR_DBG_HPDMA_0_STOP_B_0x1 = 1;

    /** @brief HPDMA channel 1 stop in debug */
    using DBGMCU_AHB5FZR_DBG_HPDMA_1_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. HPDMA channel 1continues to operate while the CPU is in debug mode. (value: 0)
     *          - B_0x1: stop in debug. HPDMA channel 1 is frozen while the CPU is in debug mode. (value: 1)
     */
        /** @brief normal operation. HPDMA channel 1continues to operate while the CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB5FZR_DBG_HPDMA_1_STOP_B_0x0 = 0;
        /** @brief stop in debug. HPDMA channel 1 is frozen while the CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB5FZR_DBG_HPDMA_1_STOP_B_0x1 = 1;

    /** @brief HPDMA channel 2 stop in debug */
    using DBGMCU_AHB5FZR_DBG_HPDMA_2_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. HPDMA channel 2 continues to operate while the CPU is in debug mode. (value: 0)
     *          - B_0x1: stop in debug. HPDMA channel 2 is frozen while the CPU is in debug mode. (value: 1)
     */
        /** @brief normal operation. HPDMA channel 2 continues to operate while the CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB5FZR_DBG_HPDMA_2_STOP_B_0x0 = 0;
        /** @brief stop in debug. HPDMA channel 2 is frozen while the CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB5FZR_DBG_HPDMA_2_STOP_B_0x1 = 1;

    /** @brief HPDMA channel 3 stop in debug */
    using DBGMCU_AHB5FZR_DBG_HPDMA_3_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. HPDMA channel 3 continues to operate while the CPU is in debug mode. (value: 0)
     *          - B_0x1: stop in debug. HPDMA channel 3 is frozen while the CPU is in debug mode. (value: 1)
     */
        /** @brief normal operation. HPDMA channel 3 continues to operate while the CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB5FZR_DBG_HPDMA_3_STOP_B_0x0 = 0;
        /** @brief stop in debug. HPDMA channel 3 is frozen while the CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB5FZR_DBG_HPDMA_3_STOP_B_0x1 = 1;

    /** @brief HPDMA channel 4 stop in debug */
    using DBGMCU_AHB5FZR_DBG_HPDMA_4_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. HPDMA channel 4 continues to operate while the CPU is in debug mode. (value: 0)
     *          - B_0x1: stop in debug. HPDMA channel 4 is frozen while the CPU is in debug mode. (value: 1)
     */
        /** @brief normal operation. HPDMA channel 4 continues to operate while the CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB5FZR_DBG_HPDMA_4_STOP_B_0x0 = 0;
        /** @brief stop in debug. HPDMA channel 4 is frozen while the CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB5FZR_DBG_HPDMA_4_STOP_B_0x1 = 1;

    /** @brief HPDMA channel 5 stop in debug */
    using DBGMCU_AHB5FZR_DBG_HPDMA_5_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. HPDMA channel 5 continues to operate while the CPU is in debug mode. (value: 0)
     *          - B_0x1: stop in debug. HPDMA channel 5 is frozen while the CPU is in debug mode. (value: 1)
     */
        /** @brief normal operation. HPDMA channel 5 continues to operate while the CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB5FZR_DBG_HPDMA_5_STOP_B_0x0 = 0;
        /** @brief stop in debug. HPDMA channel 5 is frozen while the CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB5FZR_DBG_HPDMA_5_STOP_B_0x1 = 1;

    /** @brief HPDMA channel 6 stop in debug */
    using DBGMCU_AHB5FZR_DBG_HPDMA_6_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. HPDMA channel 6 continues to operate while the CPU is in debug mode. (value: 0)
     *          - B_0x1: stop in debug. HPDMA channel 6 is frozen while the CPU is in debug mode. (value: 1)
     */
        /** @brief normal operation. HPDMA channel 6 continues to operate while the CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB5FZR_DBG_HPDMA_6_STOP_B_0x0 = 0;
        /** @brief stop in debug. HPDMA channel 6 is frozen while the CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB5FZR_DBG_HPDMA_6_STOP_B_0x1 = 1;

    /** @brief HPDMA channel 7 stop in debug */
    using DBGMCU_AHB5FZR_DBG_HPDMA_7_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. HPDMA channel 7 continues to operate while the CPU is in debug mode. (value: 0)
     *          - B_0x1: stop in debug. HPDMA channel 7 is frozen while the CPU is in debug mode. (value: 1)
     */
        /** @brief normal operation. HPDMA channel 7 continues to operate while the CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB5FZR_DBG_HPDMA_7_STOP_B_0x0 = 0;
        /** @brief stop in debug. HPDMA channel 7 is frozen while the CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB5FZR_DBG_HPDMA_7_STOP_B_0x1 = 1;

    /** @brief HPDMA channel 8 stop in debug */
    using DBGMCU_AHB5FZR_DBG_HPDMA_8_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. HPDMA channel 8 continues to operate while the CPU is in debug mode. (value: 0)
     *          - B_0x1: stop in debug. HPDMA channel _ is frozen while the CPU is in debug mode. (value: 1)
     */
        /** @brief normal operation. HPDMA channel 8 continues to operate while the CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB5FZR_DBG_HPDMA_8_STOP_B_0x0 = 0;
        /** @brief stop in debug. HPDMA channel _ is frozen while the CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB5FZR_DBG_HPDMA_8_STOP_B_0x1 = 1;

    /** @brief HPDMA channel 9 stop in debug */
    using DBGMCU_AHB5FZR_DBG_HPDMA_9_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. HPDMA channel 9 continues to operate while the CPU is in debug mode. (value: 0)
     *          - B_0x1: stop in debug. HPDMA channel 9 is frozen while the CPU is in debug mode. (value: 1)
     */
        /** @brief normal operation. HPDMA channel 9 continues to operate while the CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB5FZR_DBG_HPDMA_9_STOP_B_0x0 = 0;
        /** @brief stop in debug. HPDMA channel 9 is frozen while the CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB5FZR_DBG_HPDMA_9_STOP_B_0x1 = 1;

    /** @brief HPDMA channel 10 stop in debug */
    using DBGMCU_AHB5FZR_DBG_HPDMA_10_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. HPDMA channel 10 continues to operate while the CPU is in debug mode. (value: 0)
     *          - B_0x1: stop in debug. HPDMA channel 10 is frozen while the CPU is in debug mode. (value: 1)
     */
        /** @brief normal operation. HPDMA channel 10 continues to operate while the CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB5FZR_DBG_HPDMA_10_STOP_B_0x0 = 0;
        /** @brief stop in debug. HPDMA channel 10 is frozen while the CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB5FZR_DBG_HPDMA_10_STOP_B_0x1 = 1;

    /** @brief HPDMA channel 11 stop in debug */
    using DBGMCU_AHB5FZR_DBG_HPDMA_11_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. HPDMA channel 11 continues to operate while the CPU is in debug mode. (value: 0)
     *          - B_0x1: stop in debug. HPDMA channel 11 is frozen while the CPU is in debug mode. (value: 1)
     */
        /** @brief normal operation. HPDMA channel 11 continues to operate while the CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB5FZR_DBG_HPDMA_11_STOP_B_0x0 = 0;
        /** @brief stop in debug. HPDMA channel 11 is frozen while the CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB5FZR_DBG_HPDMA_11_STOP_B_0x1 = 1;

    /** @brief HPDMA channel 12 stop in debug */
    using DBGMCU_AHB5FZR_DBG_HPDMA_12_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. HPDMA channel 12 continues to operate while the CPU is in debug mode. (value: 0)
     *          - B_0x1: stop in debug. HPDMA channel 12 is frozen while the CPU is in debug mode. (value: 1)
     */
        /** @brief normal operation. HPDMA channel 12 continues to operate while the CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB5FZR_DBG_HPDMA_12_STOP_B_0x0 = 0;
        /** @brief stop in debug. HPDMA channel 12 is frozen while the CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB5FZR_DBG_HPDMA_12_STOP_B_0x1 = 1;

    /** @brief HPDMA channel 13 stop in debug */
    using DBGMCU_AHB5FZR_DBG_HPDMA_13_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. HPDMA channel 13 continues to operate while the CPU is in debug mode. (value: 0)
     *          - B_0x1: stop in debug. HPDMA channel 13 is frozen while the CPU is in debug mode. (value: 1)
     */
        /** @brief normal operation. HPDMA channel 13 continues to operate while the CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB5FZR_DBG_HPDMA_13_STOP_B_0x0 = 0;
        /** @brief stop in debug. HPDMA channel 13 is frozen while the CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB5FZR_DBG_HPDMA_13_STOP_B_0x1 = 1;

    /** @brief HPDMA channel 14 stop in debug */
    using DBGMCU_AHB5FZR_DBG_HPDMA_14_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. HPDMA channel 14 continues to operate while the CPU is in debug mode. (value: 0)
     *          - B_0x1: stop in debug. HPDMA channel 14 is frozen while the CPU s in debug mode. (value: 1)
     */
        /** @brief normal operation. HPDMA channel 14 continues to operate while the CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB5FZR_DBG_HPDMA_14_STOP_B_0x0 = 0;
        /** @brief stop in debug. HPDMA channel 14 is frozen while the CPU s in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB5FZR_DBG_HPDMA_14_STOP_B_0x1 = 1;

    /** @brief HPDMA channel 15 stop in debug */
    using DBGMCU_AHB5FZR_DBG_HPDMA_15_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. HPDMA channel 15 continues to operate while the CPU is in debug mode. (value: 0)
     *          - B_0x1: stop in debug. HPDMA channel 15 is frozen while the CPU is in debug mode. (value: 1)
     */
        /** @brief normal operation. HPDMA channel 15 continues to operate while the CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB5FZR_DBG_HPDMA_15_STOP_B_0x0 = 0;
        /** @brief stop in debug. HPDMA channel 15 is frozen while the CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB5FZR_DBG_HPDMA_15_STOP_B_0x1 = 1;

    /** @brief DBGMCU AHB1 peripheral freeze register */
    using DBGMCU_AHB1FZR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 0 stop in debug */
    using DBGMCU_AHB1FZR_DBG_GPDMA_0_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. GPDMA channel 0 continues to operate while the CPU is in debug mode. (value: 0)
     *          - B_0x1: stop in debug. GPDMA channel 0 is frozen while the CPU is in debug mode. (value: 1)
     */
        /** @brief normal operation. GPDMA channel 0 continues to operate while the CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA_0_STOP_B_0x0 = 0;
        /** @brief stop in debug. GPDMA channel 0 is frozen while the CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA_0_STOP_B_0x1 = 1;

    /** @brief GPDMA channel 1 stop in debug */
    using DBGMCU_AHB1FZR_DBG_GPDMA_1_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. GPDMA channel 1continues to operate while the CPU is in debug mode. (value: 0)
     *          - B_0x1: stop in debug. GPDMA channel 1 is frozen while the CPU is in debug mode. (value: 1)
     */
        /** @brief normal operation. GPDMA channel 1continues to operate while the CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA_1_STOP_B_0x0 = 0;
        /** @brief stop in debug. GPDMA channel 1 is frozen while the CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA_1_STOP_B_0x1 = 1;

    /** @brief GPDMA channel 2 stop in debug */
    using DBGMCU_AHB1FZR_DBG_GPDMA_2_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. GPDMA channel 2 continues to operate while the CPU is in debug mode. (value: 0)
     *          - B_0x1: stop in debug. GPDMA channel 2 is frozen while the CPU is in debug mode. (value: 1)
     */
        /** @brief normal operation. GPDMA channel 2 continues to operate while the CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA_2_STOP_B_0x0 = 0;
        /** @brief stop in debug. GPDMA channel 2 is frozen while the CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA_2_STOP_B_0x1 = 1;

    /** @brief GPDMA channel 3 stop in debug */
    using DBGMCU_AHB1FZR_DBG_GPDMA_3_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. GPDMA channel 3 continues to operate while the CPU is in debug mode. (value: 0)
     *          - B_0x1: stop in debug. GPDMA channel 3 is frozen while the CPU is in debug mode. (value: 1)
     */
        /** @brief normal operation. GPDMA channel 3 continues to operate while the CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA_3_STOP_B_0x0 = 0;
        /** @brief stop in debug. GPDMA channel 3 is frozen while the CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA_3_STOP_B_0x1 = 1;

    /** @brief GPDMA channel 4 stop in debug */
    using DBGMCU_AHB1FZR_DBG_GPDMA_4_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. GPDMA channel 4 continues to operate while the CPU is in debug mode. (value: 0)
     *          - B_0x1: stop in debug. GPDMA channel 4 is frozen while the CPU is in debug mode. (value: 1)
     */
        /** @brief normal operation. GPDMA channel 4 continues to operate while the CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA_4_STOP_B_0x0 = 0;
        /** @brief stop in debug. GPDMA channel 4 is frozen while the CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA_4_STOP_B_0x1 = 1;

    /** @brief GPDMA channel 5 stop in debug */
    using DBGMCU_AHB1FZR_DBG_GPDMA_5_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. GPDMA channel 5 continues to operate while the CPU is in debug mode. (value: 0)
     *          - B_0x1: stop in debug. GPDMA channel 5 is frozen while the CPU is in debug mode. (value: 1)
     */
        /** @brief normal operation. GPDMA channel 5 continues to operate while the CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA_5_STOP_B_0x0 = 0;
        /** @brief stop in debug. GPDMA channel 5 is frozen while the CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA_5_STOP_B_0x1 = 1;

    /** @brief GPDMA channel 6 stop in debug */
    using DBGMCU_AHB1FZR_DBG_GPDMA_6_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. GPDMA channel 6 continues to operate while the CPU is in debug mode. (value: 0)
     *          - B_0x1: stop in debug. GPDMA channel 6 is frozen while the CPU is in debug mode. (value: 1)
     */
        /** @brief normal operation. GPDMA channel 6 continues to operate while the CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA_6_STOP_B_0x0 = 0;
        /** @brief stop in debug. GPDMA channel 6 is frozen while the CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA_6_STOP_B_0x1 = 1;

    /** @brief GPDMA channel 7 stop in debug */
    using DBGMCU_AHB1FZR_DBG_GPDMA_7_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. GPDMA channel 7 continues to operate while the CPU is in debug mode. (value: 0)
     *          - B_0x1: stop in debug. GPDMA channel 7 is frozen while the CPU is in debug mode. (value: 1)
     */
        /** @brief normal operation. GPDMA channel 7 continues to operate while the CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA_7_STOP_B_0x0 = 0;
        /** @brief stop in debug. GPDMA channel 7 is frozen while the CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA_7_STOP_B_0x1 = 1;

    /** @brief GPDMA channel 8 stop in debug */
    using DBGMCU_AHB1FZR_DBG_GPDMA_8_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. GPDMA channel 8 continues to operate while the CPU is in debug mode. (value: 0)
     *          - B_0x1: stop in debug. GPDMA channel _ is frozen while the CPU is in debug mode. (value: 1)
     */
        /** @brief normal operation. GPDMA channel 8 continues to operate while the CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA_8_STOP_B_0x0 = 0;
        /** @brief stop in debug. GPDMA channel _ is frozen while the CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA_8_STOP_B_0x1 = 1;

    /** @brief GPDMA channel 9 stop in debug */
    using DBGMCU_AHB1FZR_DBG_GPDMA_9_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. GPDMA channel 9 continues to operate while the CPU is in debug mode. (value: 0)
     *          - B_0x1: stop in debug. GPDMA channel 9 is frozen while the CPU is in debug mode. (value: 1)
     */
        /** @brief normal operation. GPDMA channel 9 continues to operate while the CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA_9_STOP_B_0x0 = 0;
        /** @brief stop in debug. GPDMA channel 9 is frozen while the CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA_9_STOP_B_0x1 = 1;

    /** @brief GPDMA channel 10 stop in debug */
    using DBGMCU_AHB1FZR_DBG_GPDMA_10_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. GPDMA channel 10 continues to operate while the CPU is in debug mode. (value: 0)
     *          - B_0x1: stop in debug. GPDMA channel 10 is frozen while the CPU is in debug mode. (value: 1)
     */
        /** @brief normal operation. GPDMA channel 10 continues to operate while the CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA_10_STOP_B_0x0 = 0;
        /** @brief stop in debug. GPDMA channel 10 is frozen while the CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA_10_STOP_B_0x1 = 1;

    /** @brief GPDMA channel 11 stop in debug */
    using DBGMCU_AHB1FZR_DBG_GPDMA_11_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. GPDMA channel 11 continues to operate while the CPU is in debug mode. (value: 0)
     *          - B_0x1: stop in debug. GPDMA channel 11 is frozen while the CPU is in debug mode. (value: 1)
     */
        /** @brief normal operation. GPDMA channel 11 continues to operate while the CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA_11_STOP_B_0x0 = 0;
        /** @brief stop in debug. GPDMA channel 11 is frozen while the CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA_11_STOP_B_0x1 = 1;

    /** @brief GPDMA channel 12 stop in debug */
    using DBGMCU_AHB1FZR_DBG_GPDMA_12_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. GPDMA channel 12 continues to operate while the CPU is in debug mode. (value: 0)
     *          - B_0x1: stop in debug. GPDMA channel 12 is frozen while the CPU is in debug mode. (value: 1)
     */
        /** @brief normal operation. GPDMA channel 12 continues to operate while the CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA_12_STOP_B_0x0 = 0;
        /** @brief stop in debug. GPDMA channel 12 is frozen while the CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA_12_STOP_B_0x1 = 1;

    /** @brief GPDMA channel 13 stop in debug */
    using DBGMCU_AHB1FZR_DBG_GPDMA_13_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. GPDMA channel 13 continues to operate while the CPU is in debug mode. (value: 0)
     *          - B_0x1: stop in debug. GPDMA channel 13 is frozen while the CPU is in debug mode. (value: 1)
     */
        /** @brief normal operation. GPDMA channel 13 continues to operate while the CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA_13_STOP_B_0x0 = 0;
        /** @brief stop in debug. GPDMA channel 13 is frozen while the CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA_13_STOP_B_0x1 = 1;

    /** @brief GPDMA channel 14 stop in debug */
    using DBGMCU_AHB1FZR_DBG_GPDMA_14_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. GPDMA channel 14 continues to operate while the CPU is in debug mode. (value: 0)
     *          - B_0x1: stop in debug. GPDMA channel 14 is frozen while the CPU s in debug mode. (value: 1)
     */
        /** @brief normal operation. GPDMA channel 14 continues to operate while the CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA_14_STOP_B_0x0 = 0;
        /** @brief stop in debug. GPDMA channel 14 is frozen while the CPU s in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA_14_STOP_B_0x1 = 1;

    /** @brief GPDMA channel 15 stop in debug */
    using DBGMCU_AHB1FZR_DBG_GPDMA_15_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: normal operation. GPDMA channel 15 continues to operate while the CPU is in debug mode. (value: 0)
     *          - B_0x1: stop in debug. GPDMA channel 15 is frozen while the CPU is in debug mode. (value: 1)
     */
        /** @brief normal operation. GPDMA channel 15 continues to operate while the CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA_15_STOP_B_0x0 = 0;
        /** @brief stop in debug. GPDMA channel 15 is frozen while the CPU is in debug mode. */
    constexpr std::uint32_t DBGMCU_AHB1FZR_DBG_GPDMA_15_STOP_B_0x1 = 1;

    /** @brief DBGMCU APB1 peripheral freeze register */
    using DBGMCU_APB1FZR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM2 stop in debug */
    using DBGMCU_APB1FZR_TIM2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation - TIM2 continues operating while the core is in Debug mode (value: 0)
     *          - B_0x1: Stop in debug - TIM2 is frozen while Cortex-M7 is in Debug mode (value: 1)
     */
        /** @brief Normal operation - TIM2 continues operating while the core is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB1FZR_TIM2_B_0x0 = 0;
        /** @brief Stop in debug - TIM2 is frozen while Cortex-M7 is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB1FZR_TIM2_B_0x1 = 1;

    /** @brief TIM3 stop in debug */
    using DBGMCU_APB1FZR_TIM3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation - TIM3 continues operating while the core is in Debug mode (value: 0)
     *          - B_0x1: Stop in debug - TIM3 is frozen while Cortex-M7 is in Debug mode (value: 1)
     */
        /** @brief Normal operation - TIM3 continues operating while the core is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB1FZR_TIM3_B_0x0 = 0;
        /** @brief Stop in debug - TIM3 is frozen while Cortex-M7 is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB1FZR_TIM3_B_0x1 = 1;

    /** @brief TIM4 stop in debug */
    using DBGMCU_APB1FZR_TIM4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation - TIM4 continues operating while the core is in Debug mode (value: 0)
     *          - B_0x1: Stop in debug - TIM4 is frozen while Cortex-M7 is in Debug mode (value: 1)
     */
        /** @brief Normal operation - TIM4 continues operating while the core is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB1FZR_TIM4_B_0x0 = 0;
        /** @brief Stop in debug - TIM4 is frozen while Cortex-M7 is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB1FZR_TIM4_B_0x1 = 1;

    /** @brief TIM5 stop in debug */
    using DBGMCU_APB1FZR_TIM5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation - TIM5 continues operating while the core is in Debug mode (value: 0)
     *          - B_0x1: Stop in debug - TIM5 is frozen while Cortex-M7 is in Debug mode (value: 1)
     */
        /** @brief Normal operation - TIM5 continues operating while the core is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB1FZR_TIM5_B_0x0 = 0;
        /** @brief Stop in debug - TIM5 is frozen while Cortex-M7 is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB1FZR_TIM5_B_0x1 = 1;

    /** @brief TIM6 stop in debug */
    using DBGMCU_APB1FZR_TIM6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation - TIM6 continues operating while the core is in Debug mode (value: 0)
     *          - B_0x1: Stop in debug - TIM6 is frozen while Cortex-M7 is in Debug mode (value: 1)
     */
        /** @brief Normal operation - TIM6 continues operating while the core is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB1FZR_TIM6_B_0x0 = 0;
        /** @brief Stop in debug - TIM6 is frozen while Cortex-M7 is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB1FZR_TIM6_B_0x1 = 1;

    /** @brief TIM7 stop in debug */
    using DBGMCU_APB1FZR_TIM7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation - TIM7 continues operatinge while the core is in Debug mode (value: 0)
     *          - B_0x1: Stop in debug - TIM7 is frozen while Cortex-M7 is in Debug mode (value: 1)
     */
        /** @brief Normal operation - TIM7 continues operatinge while the core is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB1FZR_TIM7_B_0x0 = 0;
        /** @brief Stop in debug - TIM7 is frozen while Cortex-M7 is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB1FZR_TIM7_B_0x1 = 1;

    /** @brief TIM12 stop in debug */
    using DBGMCU_APB1FZR_TIM12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation - TIM12 continues operatinge while the core is in Debug mode (value: 0)
     *          - B_0x1: Stop in debug - TIM12 is frozen while Cortex-M7 is in Debug mode (value: 1)
     */
        /** @brief Normal operation - TIM12 continues operatinge while the core is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB1FZR_TIM12_B_0x0 = 0;
        /** @brief Stop in debug - TIM12 is frozen while Cortex-M7 is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB1FZR_TIM12_B_0x1 = 1;

    /** @brief TIM13 stop in debug */
    using DBGMCU_APB1FZR_TIM13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation - TIM13 continues operating while the core is in Debug mode (value: 0)
     *          - B_0x1: Stop in debug - TIM13 is frozen while Cortex-M7 is in Debug mode (value: 1)
     */
        /** @brief Normal operation - TIM13 continues operating while the core is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB1FZR_TIM13_B_0x0 = 0;
        /** @brief Stop in debug - TIM13 is frozen while Cortex-M7 is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB1FZR_TIM13_B_0x1 = 1;

    /** @brief TIM14 stop in debug */
    using DBGMCU_APB1FZR_TIM14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation - TIM14 continues operating while the core is in Debug mode (value: 0)
     *          - B_0x1: Stop in debug - TIM14 is frozen while Cortex-M7 is in Debug mode (value: 1)
     */
        /** @brief Normal operation - TIM14 continues operating while the core is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB1FZR_TIM14_B_0x0 = 0;
        /** @brief Stop in debug - TIM14 is frozen while Cortex-M7 is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB1FZR_TIM14_B_0x1 = 1;

    /** @brief LPTIM1 stop in debug */
    using DBGMCU_APB1FZR_LPTIM1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation - LPTIM1 continues operating while the core is in Debug mode (value: 0)
     *          - B_0x1: Stop in debug - LPTIM1 is frozen while Cortex-M7 is in Debug mode (value: 1)
     */
        /** @brief Normal operation - LPTIM1 continues operating while the core is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB1FZR_LPTIM1_B_0x0 = 0;
        /** @brief Stop in debug - LPTIM1 is frozen while Cortex-M7 is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB1FZR_LPTIM1_B_0x1 = 1;

    /** @brief WWDG stop in debug */
    using DBGMCU_APB1FZR_WWDG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation - WWDG continues to operate while the Cortex-M7 is in Debug mode (value: 0)
     *          - B_0x1: Stop in debug - WWDG is frozen while the Cortex-M7 is in Debug mode (value: 1)
     */
        /** @brief Normal operation - WWDG continues to operate while the Cortex-M7 is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB1FZR_WWDG_B_0x0 = 0;
        /** @brief Stop in debug - WWDG is frozen while the Cortex-M7 is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB1FZR_WWDG_B_0x1 = 1;

    /** @brief I2C1 SMBUS timeout stop in debug */
    using DBGMCU_APB1FZR_I2C1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation - I2C1 SMBUS timeout continues operating while the core is in Debug mode (value: 0)
     *          - B_0x1: Stop in debug - I2C1 SMBUS timeout is frozen while the core is in Debug mode (value: 1)
     */
        /** @brief Normal operation - I2C1 SMBUS timeout continues operating while the core is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB1FZR_I2C1_B_0x0 = 0;
        /** @brief Stop in debug - I2C1 SMBUS timeout is frozen while the core is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB1FZR_I2C1_B_0x1 = 1;

    /** @brief I2C2 SMBUS timeout stop in debug */
    using DBGMCU_APB1FZR_I2C2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation - I2C2 SMBUS timeout continues operating while the core is in Debug mode (value: 0)
     *          - B_0x1: Stop in debug - I2C2 SMBUS timeout is frozen while Cortex-M7 is in Debug mode (value: 1)
     */
        /** @brief Normal operation - I2C2 SMBUS timeout continues operating while the core is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB1FZR_I2C2_B_0x0 = 0;
        /** @brief Stop in debug - I2C2 SMBUS timeout is frozen while Cortex-M7 is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB1FZR_I2C2_B_0x1 = 1;

    /** @brief I2C3 SMBUS timeout stop in debug */
    using DBGMCU_APB1FZR_I2C3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation - I2C3 SMBUS timeout continues operating while the core is in Debug mode (value: 0)
     *          - B_0x1: Stop in debug - I2C3 SMBUS timeout is frozen while Cortex-M7 is in Debug mode (value: 1)
     */
        /** @brief Normal operation - I2C3 SMBUS timeout continues operating while the core is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB1FZR_I2C3_B_0x0 = 0;
        /** @brief Stop in debug - I2C3 SMBUS timeout is frozen while Cortex-M7 is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB1FZR_I2C3_B_0x1 = 1;

    /** @brief DBGMCU APB2 peripheral freeze register */
    using DBGMCU_APB2FZ = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TIM1 stop in debug */
    using DBGMCU_APB2FZ_TIM1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation - TIM1 continues operating while the core is in Debug mode (value: 0)
     *          - B_0x1: Stop in debug - TIM1 is frozen and TIM1 outputs are disabled while Cortex-M7 is in Debug mode. (value: 1)
     */
        /** @brief Normal operation - TIM1 continues operating while the core is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB2FZ_TIM1_B_0x0 = 0;
        /** @brief Stop in debug - TIM1 is frozen and TIM1 outputs are disabled while Cortex-M7 is in Debug mode. */
    constexpr std::uint32_t DBGMCU_APB2FZ_TIM1_B_0x1 = 1;

    /** @brief TIM15 stop in debug */
    using DBGMCU_APB2FZ_TIM15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation - TIM15 continues operating while the core is in Debug mode (value: 0)
     *          - B_0x1: Stop in debug - TIM15 is frozen and TIM15 outputs are disabled while Cortex-M7 is in Debug mode (value: 1)
     */
        /** @brief Normal operation - TIM15 continues operating while the core is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB2FZ_TIM15_B_0x0 = 0;
        /** @brief Stop in debug - TIM15 is frozen and TIM15 outputs are disabled while Cortex-M7 is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB2FZ_TIM15_B_0x1 = 1;

    /** @brief TIM16 stop in debug */
    using DBGMCU_APB2FZ_TIM16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation - TIM16 continues operating while the core is in Debug mode (value: 0)
     *          - B_0x1: Stop in debug - TIM16 is frozen and TIM16 outputs are disabled while Cortex-M7 is in Debug mode (value: 1)
     */
        /** @brief Normal operation - TIM16 continues operating while the core is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB2FZ_TIM16_B_0x0 = 0;
        /** @brief Stop in debug - TIM16 is frozen and TIM16 outputs are disabled while Cortex-M7 is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB2FZ_TIM16_B_0x1 = 1;

    /** @brief TIM17 stop in debug */
    using DBGMCU_APB2FZ_TIM17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation - TIM17 continues operating while the core is in Debug mode (value: 0)
     *          - B_0x1: Stop in debug - TIM17 is frozen and TIM17 outputs are disabled while Cortex-M7 is in Debug mode (value: 1)
     */
        /** @brief Normal operation - TIM17 continues operating while the core is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB2FZ_TIM17_B_0x0 = 0;
        /** @brief Stop in debug - TIM17 is frozen and TIM17 outputs are disabled while Cortex-M7 is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB2FZ_TIM17_B_0x1 = 1;

    /** @brief TIM9 stop in debug */
    using DBGMCU_APB2FZ_TIM9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation - TIM9 continues operating while the core is in Debug mode (value: 0)
     *          - B_0x1: Stop in debug - TIM9 is frozen and TIM9 outputs are disabled while Cortex-M7 is in Debug mode (value: 1)
     */
        /** @brief Normal operation - TIM9 continues operating while the core is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB2FZ_TIM9_B_0x0 = 0;
        /** @brief Stop in debug - TIM9 is frozen and TIM9 outputs are disabled while Cortex-M7 is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB2FZ_TIM9_B_0x1 = 1;

    /** @brief DBGMCU APB4 peripheral freeze register */
    using DBGMCU_APB4FZR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPTIM2 stop in debug */
    using DBGMCU_APB4FZR_LPTIM2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation - LPTIM2 continues operating while the core is in Debug mode (value: 0)
     *          - B_0x1: Stop in debug - LPTIM2 is frozen while Cortex-M7 is in Debug mode (value: 1)
     */
        /** @brief Normal operation - LPTIM2 continues operating while the core is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB4FZR_LPTIM2_B_0x0 = 0;
        /** @brief Stop in debug - LPTIM2 is frozen while Cortex-M7 is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB4FZR_LPTIM2_B_0x1 = 1;

    /** @brief LPTIM2 stop in debug */
    using DBGMCU_APB4FZR_LPTIM3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation - LPTIM2 continues operating while the core is in Debug mode (value: 0)
     *          - B_0x1: Stop in debug - LPTIM2 is frozen while Cortex-M7 is in Debug mode (value: 1)
     */
        /** @brief Normal operation - LPTIM2 continues operating while the core is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB4FZR_LPTIM3_B_0x0 = 0;
        /** @brief Stop in debug - LPTIM2 is frozen while Cortex-M7 is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB4FZR_LPTIM3_B_0x1 = 1;

    /** @brief LPTIM4 stop in debug */
    using DBGMCU_APB4FZR_LPTIM4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation - LPTIM4 continues operating while the core is in Debug mode (value: 0)
     *          - B_0x1: Stop in debug - LPTIM4 is frozen while Cortex-M7 is in Debug mode (value: 1)
     */
        /** @brief Normal operation - LPTIM4 continues operating while the core is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB4FZR_LPTIM4_B_0x0 = 0;
        /** @brief Stop in debug - LPTIM4 is frozen while Cortex-M7 is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB4FZR_LPTIM4_B_0x1 = 1;

    /** @brief LPTIM5 stop in debug */
    using DBGMCU_APB4FZR_LPTIM5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation - LPTIM5 continues operating while the core is in Debug mode (value: 0)
     *          - B_0x1: Stop in debug - LPTIM5 is frozen while Cortex-M7 is in Debug mode (value: 1)
     */
        /** @brief Normal operation - LPTIM5 continues operating while the core is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB4FZR_LPTIM5_B_0x0 = 0;
        /** @brief Stop in debug - LPTIM5 is frozen while Cortex-M7 is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB4FZR_LPTIM5_B_0x1 = 1;

    /** @brief RTC stop in debug */
    using DBGMCU_APB4FZR_RTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation - RTC continues operating while the core is in Debug mode (value: 0)
     *          - B_0x1: Stop in debug - RTC is frozen while Cortex-M7 is in Debug mode (value: 1)
     */
        /** @brief Normal operation - RTC continues operating while the core is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB4FZR_RTC_B_0x0 = 0;
        /** @brief Stop in debug - RTC is frozen while Cortex-M7 is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB4FZR_RTC_B_0x1 = 1;

    /** @brief Independent watchdog for stop in debug */
    using DBGMCU_APB4FZR_IWDG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal operation - watchdog continues counting while the core is in Debug mode (value: 0)
     *          - B_0x1: Stop in debug - watchdog is frozen while Cortex-M7 is in Debug mode (value: 1)
     */
        /** @brief Normal operation - watchdog continues counting while the core is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB4FZR_IWDG_B_0x0 = 0;
        /** @brief Stop in debug - watchdog is frozen while Cortex-M7 is in Debug mode */
    constexpr std::uint32_t DBGMCU_APB4FZR_IWDG_B_0x1 = 1;

    /** @brief DBGMCU status register */
    using DBGMCU_SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bit n identifies whether access port AP n is open (can be accessed via the debug port) or locked (debug access to the AP is blocked) Bit n = 0: APn absent Bit n = 1: APn present */
    using DBGMCU_SR_AP_PRESENT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bit n identifies whether access port AP n is open (can be accessed via the debug port) or locked (debug access to the AP is blocked) Bit n = 0: APn locked Bit n = 1: APn enabled */
    using DBGMCU_SR_AP_ENABLED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DBGMCU debug authentication mailbox host register */
    using DBGMCU_DBG_AUTH_HOST = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x100, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Debug host to device mailbox message. During debug authentication the debug host communicates with the device via this register. */
    using DBGMCU_DBG_AUTH_HOST_MESSAGE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DBGMCU debug authentication mailbox device register */
    using DBGMCU_DBG_AUTH_DEVICE = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x104, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Device to debug host mailbox message. During debug authentication the device communicates with the debug host via this register. */
    using DBGMCU_DBG_AUTH_DEVICE_MESSAGE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DBGMCU debug authentication mailbox acknowledge register */
    using DBGMCU_DBG_AUTH_ACK = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x108, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Host to device acknowledge. The device sets this bit to indicate that it has placed a message in the DBGMCU_DBG_AUTH_DEVICE register. It should be reset by the host after reading the message */
    using DBGMCU_DBG_AUTH_ACK_HOST_ACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Device to device acknowledge. The host sets this bit to indicate that it has placed a message in the DBGMCU_DBG_AUTH_HOST register. It is reset by the device after reading the message */
    using DBGMCU_DBG_AUTH_ACK_DEV_ACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DBGMCU peripheral identity register 4 */
    using DBGMCU_PIDR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFD0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JEP106 continuation code */
    using DBGMCU_PIDR4_JEP106CON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: STMicroelectronics JEDEC code (value: 0)
     */
        /** @brief STMicroelectronics JEDEC code */
    constexpr std::uint32_t DBGMCU_PIDR4_JEP106CON_B_0x0 = 0;

    /** @brief Register file size */
    using DBGMCU_PIDR4_SIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Register file occupies a single 4 Kbyte region (value: 0)
     */
        /** @brief Register file occupies a single 4 Kbyte region */
    constexpr std::uint32_t DBGMCU_PIDR4_SIZE_B_0x0 = 0;

    /** @brief DBGMCU peripheral identity register 0 */
    using DBGMCU_PIDR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFE0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Part number field, bits [7:0] */
    using DBGMCU_PIDR0_PARTNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DBGMCU (value: 0)
     */
        /** @brief DBGMCU */
    constexpr std::uint32_t DBGMCU_PIDR0_PARTNUM_B_0x0 = 0;

    /** @brief DBGMCU peripheral identity register 1 */
    using DBGMCU_PIDR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFE4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Part number field, bits [11:8] */
    using DBGMCU_PIDR1_PARTNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DBGMCU (value: 0)
     */
        /** @brief DBGMCU */
    constexpr std::uint32_t DBGMCU_PIDR1_PARTNUM_B_0x0 = 0;

    /** @brief JEP106 identity code field, bits [3:0] */
    using DBGMCU_PIDR1_JEP106ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: STMicroelectronics JEDEC code (value: 0)
     */
        /** @brief STMicroelectronics JEDEC code */
    constexpr std::uint32_t DBGMCU_PIDR1_JEP106ID_B_0x0 = 0;

    /** @brief DBGMCU peripheral identity register 2 */
    using DBGMCU_PIDR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFE8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JEP106 identity code field, bits [6:4] */
    using DBGMCU_PIDR2_JEP106ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x2: STMicroelectronics JEDEC code (value: 2)
     */
        /** @brief STMicroelectronics JEDEC code */
    constexpr std::uint32_t DBGMCU_PIDR2_JEP106ID_B_0x2 = 2;

    /** @brief JEDEC assigned value */
    using DBGMCU_PIDR2_JEDEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Designer ID specified by JEDEC (value: 1)
     */
        /** @brief Designer ID specified by JEDEC */
    constexpr std::uint32_t DBGMCU_PIDR2_JEDEC_B_0x1 = 1;

    /** @brief Component revision number */
    using DBGMCU_PIDR2_REVISION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: rev 0 (value: 0)
     */
        /** @brief rev 0 */
    constexpr std::uint32_t DBGMCU_PIDR2_REVISION_B_0x0 = 0;

    /** @brief DBGMCU peripheral identity register 3 */
    using DBGMCU_PIDR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFEC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Customer modified */
    using DBGMCU_PIDR3_CMOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No customer modifications (value: 0)
     */
        /** @brief No customer modifications */
    constexpr std::uint32_t DBGMCU_PIDR3_CMOD_B_0x0 = 0;

    /** @brief Metal fix version */
    using DBGMCU_PIDR3_REVAND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No metal fix (value: 0)
     */
        /** @brief No metal fix */
    constexpr std::uint32_t DBGMCU_PIDR3_REVAND_B_0x0 = 0;

    /** @brief DBGMCU component identity register */
    using DBGMCU_CIDR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFF0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Component ID field, bits [7:0] */
    using DBGMCU_CIDR0_PREAMBLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0D: Common ID value (value: 13)
     */
        /** @brief Common ID value */
    constexpr std::uint32_t DBGMCU_CIDR0_PREAMBLE_B_0x0D = 13;

    /** @brief DBGMCU component identity register */
    using DBGMCU_CIDR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFF4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Component ID field, bits [11:8] */
    using DBGMCU_CIDR1_PREAMBLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Common ID value (value: 0)
     */
        /** @brief Common ID value */
    constexpr std::uint32_t DBGMCU_CIDR1_PREAMBLE_B_0x0 = 0;

    /** @brief Component ID field, bits [15:12] - component class */
    using DBGMCU_CIDR1_CLASS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0xF: System component with non-standard register layout (value: 15)
     */
        /** @brief System component with non-standard register layout */
    constexpr std::uint32_t DBGMCU_CIDR1_CLASS_B_0xF = 15;

    /** @brief DBGMCU component identity register */
    using DBGMCU_CIDR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFF8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Component ID field, bits [23:16] */
    using DBGMCU_CIDR2_PREAMBLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x05: Common ID value (value: 5)
     */
        /** @brief Common ID value */
    constexpr std::uint32_t DBGMCU_CIDR2_PREAMBLE_B_0x05 = 5;

    /** @brief DBGMCU component identity register */
    using DBGMCU_CIDR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFFC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Component ID field, bits [31:24] */
    using DBGMCU_CIDR3_PREAMBLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0xB1: Common ID value (value: 177)
     */
        /** @brief Common ID value */
    constexpr std::uint32_t DBGMCU_CIDR3_PREAMBLE_B_0xB1 = 177;

}

#endif
