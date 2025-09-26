/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32WB05_PWRC_HPP
#define EMBEDDED_PP_STM32WB05_PWRC_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief PWRC peripheral */
namespace STM32WB05::PWRC {

    /** @brief CR1 register */
    using CR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPMS Low Power Mode Selection Selection of the low power mode entered when CPU enters DEEP SLEEP mode and BLE is rdy2sleep. */
    using CR1_LPMS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Deep Stop mode (default) (value: 0)
     *          - B_0x1: Shutdown mode (value: 1)
     */
        /** @brief Deep Stop mode (default) */
    constexpr std::uint32_t CR1_LPMS_B_0x0 = 0;
        /** @brief Shutdown mode */
    constexpr std::uint32_t CR1_LPMS_B_0x1 = 1;

    /** @brief ENSDNBOR: Enable BOR supply monitoring during shutdown mode. */
    using CR1_ENSDNBOR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: the PD_ALL_SHUTDOWN signal is not set during SHUTDOWN mode (value: 1)
     *          - B_0x0: the PD_ALL_SHUTDOWN signal is set during SHUTDOWN mode. (value: 0)
     */
        /** @brief the PD_ALL_SHUTDOWN signal is not set during SHUTDOWN mode */
    constexpr std::uint32_t CR1_ENSDNBOR_B_0x1 = 1;
        /** @brief the PD_ALL_SHUTDOWN signal is set during SHUTDOWN mode. */
    constexpr std::uint32_t CR1_ENSDNBOR_B_0x0 = 0;

    /** @brief IBIAS_RUN_AUTO: Enable automatic IBIAS control during RUN/DEEPSTOP mode. 0: IBIAS control is manual (and controlled by IBIAS_RUN_STATE register) 1: IBIAS control is automatic (default). */
    using CR1_IBIAS_RUN_AUTO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IBIAS_RUN_STATE: Enable/Disable IBIAS during RUN mode when automatic mode is disabled. 0: IBIAS control is disabled (default). 1: IBIAS control is enabled. */
    using CR1_IBIAS_RUN_STATE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief APC Apply Pull-up and pull-down configuration from CPU */
    using CR1_APC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: the I/O pull-up and pull-down configurations defined in the PUCRx and PDCRx registers is applied. (value: 1)
     *          - B_0x0: the PUCRx and PDCRx are not used to control the I/O pull-up and pull-down configuration of the product I/Os. (value: 0)
     */
        /** @brief the I/O pull-up and pull-down configurations defined in the PUCRx and PDCRx registers is applied. */
    constexpr std::uint32_t CR1_APC_B_0x1 = 1;
        /** @brief the PUCRx and PDCRx are not used to control the I/O pull-up and pull-down configuration of the product I/Os. */
    constexpr std::uint32_t CR1_APC_B_0x0 = 0;

    /** @brief ENBORH: enable BORH configuration */
    using CR1_ENBORH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: BORH is enabled, threshold level depends on SELBOR[1:0] (value: 1)
     *          - B_0x0: BORH off (VBOR0): threshold level for above 1.60V voltage operation. (value: 0)
     */
        /** @brief BORH is enabled, threshold level depends on SELBOR[1:0] */
    constexpr std::uint32_t CR1_ENBORH_B_0x1 = 1;
        /** @brief BORH off (VBOR0): threshold level for above 1.60V voltage operation. */
    constexpr std::uint32_t CR1_ENBORH_B_0x0 = 0;

    /** @brief SELBORH[1:0]: BORH selection of Vbor threshold */
    using CR1_SELBORH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x3: BORH Level 4(VBOR4): threshold level for above 2.81 V voltage operation. (value: 3)
     *          - B_0x2: BORH Level 3 (VBOR3): threshold level for above 2.52 V voltage operation (value: 2)
     *          - B_0x1: BORH Level 2 (VBOR2): threshold level for above 2.21 V voltage operation (value: 1)
     *          - B_0x0: BORH Level 1 (VBOR1): threshold level for above 2.0V voltage operation. (value: 0)
     */
        /** @brief BORH Level 4(VBOR4): threshold level for above 2.81 V voltage operation. */
    constexpr std::uint32_t CR1_SELBORH_B_0x3 = 3;
        /** @brief BORH Level 3 (VBOR3): threshold level for above 2.52 V voltage operation */
    constexpr std::uint32_t CR1_SELBORH_B_0x2 = 2;
        /** @brief BORH Level 2 (VBOR2): threshold level for above 2.21 V voltage operation */
    constexpr std::uint32_t CR1_SELBORH_B_0x1 = 1;
        /** @brief BORH Level 1 (VBOR1): threshold level for above 2.0V voltage operation. */
    constexpr std::uint32_t CR1_SELBORH_B_0x0 = 0;

    /** @brief ENBORL: Enable BORL reset supervising during RUN mode. 0: No BORL is monitored during RUN mode. 1: BORL is monitored during RUN mode (a POR reset will happen if VDDIO goes below 1.6V during RUN mode) (default). Note: Enabling this feature prevents blocking the device if VDDIO goes below supported voltages during RUN. */
    using CR1_ENBORL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CR2 register */
    using CR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PVDE Programmable Voltage Detector Enable When this bit is set the Power Voltage Detector is enabled */
    using CR2_PVDE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PVDLS[2:0] Programmable Voltage Detector Level selection then PVDO=1) */
    using CR2_PVDLS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 2.05 V - Lowest level (value: 0)
     *          - B_0x1: 2.20 V (value: 1)
     *          - B_0x2: 2.36 V (value: 2)
     *          - B_0x3: 2.52 V (value: 3)
     *          - B_0x4: 2.64 V (value: 4)
     *          - B_0x5: 2.81 V (value: 5)
     *          - B_0x6: 2.91 V - Highest level (value: 6)
     *          - B_0x7: External input analog voltage (compare internally to VBGP; When external input <VBGP (value: 7)
     */
        /** @brief 2.05 V - Lowest level */
    constexpr std::uint32_t CR2_PVDLS_B_0x0 = 0;
        /** @brief 2.20 V */
    constexpr std::uint32_t CR2_PVDLS_B_0x1 = 1;
        /** @brief 2.36 V */
    constexpr std::uint32_t CR2_PVDLS_B_0x2 = 2;
        /** @brief 2.52 V */
    constexpr std::uint32_t CR2_PVDLS_B_0x3 = 3;
        /** @brief 2.64 V */
    constexpr std::uint32_t CR2_PVDLS_B_0x4 = 4;
        /** @brief 2.81 V */
    constexpr std::uint32_t CR2_PVDLS_B_0x5 = 5;
        /** @brief 2.91 V - Highest level */
    constexpr std::uint32_t CR2_PVDLS_B_0x6 = 6;
        /** @brief External input analog voltage (compare internally to VBGP; When external input <VBGP */
    constexpr std::uint32_t CR2_PVDLS_B_0x7 = 7;

    /** @brief DBGRET: PA2 and PA3 retention enable after DEEPSTOP 0: PA2, PA3 don't retain their status exiting from DEEPSTOP. (default) 1: PA2, PA3 retain their status exiting from DEEPSTOP. */
    using CR2_DBGRET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RAMRET1: RAM1 retention during low power mode */
    using CR2_RAMRET1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: RAM1 bank is powered during low power mode (value: 1)
     *          - B_0x0: RAM1 bank is disabled during low power mode (by default) (value: 0)
     */
        /** @brief RAM1 bank is powered during low power mode */
    constexpr std::uint32_t CR2_RAMRET1_B_0x1 = 1;
        /** @brief RAM1 bank is disabled during low power mode (by default) */
    constexpr std::uint32_t CR2_RAMRET1_B_0x0 = 0;

    /** @brief GPIORET: GPIO retention enable. 0: GPIO don't retain their status during DEEPSTOP and exiting from DEEPSTOP (default) 1: GPIO retain their status during DEEPSTOP and exiting from DEEPSTOP. Note: it's mandatory to ensure this bit is set before entering DEEPSTOP unless DBRG.DEEPSTOP2 bit is set. */
    using CR2_GPIORET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ENTS: Enable Temperature Sensor */
    using CR2_ENTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Temperature sensor is enabled (value: 1)
     *          - B_0x0: Temperature sensor is disabled (value: 0)
     */
        /** @brief Temperature sensor is enabled */
    constexpr std::uint32_t CR2_ENTS_B_0x1 = 1;
        /** @brief Temperature sensor is disabled */
    constexpr std::uint32_t CR2_ENTS_B_0x0 = 0;

    /** @brief CR3 register */
    using CR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EWU0 Enable WakeUp line 0 (PB0) When this bit is set the wakeup line 0 is enabled and a rising or falling edge on wakeup line 0 will trigger a CPU wakeup event depending on CR4.WP0 bit. */
    using CR3_EWU0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EWU1 Enable WakeUp line 1 (PB1) When this bit is set the wakeup line 1 is enabled and a rising or falling edge on wakeup line 1 will trigger a CPU wakeup event depending on CR4.WP1 bit. */
    using CR3_EWU1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EWU2 Enable WakeUp line 2 (PB2) When this bit is set the wakeup line 2 is enabled and a rising or falling edge on wakeup line 2 will trigger a CPU wakeup event depending on CR4.WP2 bit. */
    using CR3_EWU2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EWU3 Enable WakeUp line 3 (PB3) When this bit is set the wakeup line 3 is enabled and a rising or falling edge on wakeup line 3 will trigger a CPU wakeup event depending on CR4.WP3 bit. */
    using CR3_EWU3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EWU4 Enable WakeUp line 4 (PB4) When this bit is set the wakeup line 4 is enabled and a rising or falling edge on wakeup line 4 will trigger a CPU wakeup event depending on CR4.WP4 bit. */
    using CR3_EWU4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EWU5 Enable WakeUp line 5 (PB5) When this bit is set the wakeup line 5 is enabled and a rising or falling edge on wakeup line 5 will trigger a CPU wakeup event depending on CR4.WP5 bit. */
    using CR3_EWU5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EWU6 Enable WakeUp line 6 (PB6) When this bit is set the wakeup line 6 is enabled and a rising or falling edge on wakeup line 6 will trigger a CPU wakeup event depending on CR4.WP6 bit. */
    using CR3_EWU6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EWU7 Enable WakeUp line 7 (PB7) When this bit is set the wakeup line 7 is enabled and a rising or falling edge on wakeup line 7 will trigger a CPU wakeup event depending on CR4.WP7 bit. */
    using CR3_EWU7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EWU8 Enable WakeUp line 8 (PA8) When this bit is set the wakeup line 8 is enabled and a rising or falling edge on wakeup line 8 will trigger a CPU wakeup event depending on CR4.WP8 bit. */
    using CR3_EWU8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EWU9 Enable WakeUp line 9 (PA9) When this bit is set the wakeup line 9 is enabled and a rising or falling edge on wakeup line 9 will trigger a CPU wakeup event depending on CR4.WP9 bit. */
    using CR3_EWU9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EWU10 Enable WakeUp line 10 (PA10) When this bit is set the wakeup line 10 is enabled and a rising or falling edge on wakeup line 10 will trigger a CPU wakeup event depending on CR4.WP10 bit. */
    using CR3_EWU10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EWU11 Enable WakeUp line 11 (PA11) When this bit is set the wakeup line 11 is enabled and a rising or falling edge on wakeup line 11 will trigger a CPU wakeup event depending on CR4.WP11 bit. */
    using CR3_EWU11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EWBLE: Enable wakeup on BLE event. 0: Wakeup on BLE line is disabled (default). 1: Wakeup on BLE line is enabled. */
    using CR3_EWBLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EWBLEHCPU: Enable wakeup on BLE Host CPU event. 0: Wakeup on BLE Host CPU line is disabled (default). 1: Wakeup on BLE Host CPU line is enabled. */
    using CR3_EWBLEHCPU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EIWL2: Enable wakeup on Internal event (LPUART). 0: Wakeup on internal line is disabled (default). 1: Wakeup on internal line is enabled. */
    using CR3_EIWL2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EIWL: Enable wakeup on Internal event (RTC). 0: Wakeup on internal line is disabled (default). 1: Wakeup on internal line is enabled. */
    using CR3_EIWL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CR4 register */
    using CR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WUP0 Wake-up Line Polarity 0 (PB0) This bit defines the polarity used for event detection on external wake-up line 0 */
    using CR4_WUP0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Detection on high level (rising edge) (value: 0)
     *          - B_0x1: Detection on low level (falling edge) (value: 1)
     */
        /** @brief Detection on high level (rising edge) */
    constexpr std::uint32_t CR4_WUP0_B_0x0 = 0;
        /** @brief Detection on low level (falling edge) */
    constexpr std::uint32_t CR4_WUP0_B_0x1 = 1;

    /** @brief WUP1 Wake-up Line Polarity 1 (PB1) This bit defines the polarity used for event detection on external wake-up line 1 */
    using CR4_WUP1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Detection on high level (rising edge) (value: 0)
     *          - B_0x1: Detection on low level (falling edge) (value: 1)
     */
        /** @brief Detection on high level (rising edge) */
    constexpr std::uint32_t CR4_WUP1_B_0x0 = 0;
        /** @brief Detection on low level (falling edge) */
    constexpr std::uint32_t CR4_WUP1_B_0x1 = 1;

    /** @brief WUP2 Wake-up Line Polarity 2 (PB2) This bit defines the polarity used for event detection on external wake-up line 2 */
    using CR4_WUP2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Detection on high level (rising edge) (value: 0)
     *          - B_0x1: Detection on low level (falling edge) (value: 1)
     */
        /** @brief Detection on high level (rising edge) */
    constexpr std::uint32_t CR4_WUP2_B_0x0 = 0;
        /** @brief Detection on low level (falling edge) */
    constexpr std::uint32_t CR4_WUP2_B_0x1 = 1;

    /** @brief WUP3 Wake-up Line Polarity 3 (PB3) This bit defines the polarity used for event detection on external wake-up line 3 */
    using CR4_WUP3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Detection on high level (rising edge) (value: 0)
     *          - B_0x1: Detection on low level (falling edge) (value: 1)
     */
        /** @brief Detection on high level (rising edge) */
    constexpr std::uint32_t CR4_WUP3_B_0x0 = 0;
        /** @brief Detection on low level (falling edge) */
    constexpr std::uint32_t CR4_WUP3_B_0x1 = 1;

    /** @brief WUP4 Wake-up Line Polarity 4 (PB4) This bit defines the polarity used for event detection on external wake-up line 4 */
    using CR4_WUP4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Detection on high level (rising edge) (value: 0)
     *          - B_0x1: Detection on low level (falling edge) (value: 1)
     */
        /** @brief Detection on high level (rising edge) */
    constexpr std::uint32_t CR4_WUP4_B_0x0 = 0;
        /** @brief Detection on low level (falling edge) */
    constexpr std::uint32_t CR4_WUP4_B_0x1 = 1;

    /** @brief WUP5 Wake-up Line Polarity 5 (PB5) This bit defines the polarity used for event detection on external wake-up line 5 */
    using CR4_WUP5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Detection on high level (rising edge) (value: 0)
     *          - B_0x1: Detection on low level (falling edge) (value: 1)
     */
        /** @brief Detection on high level (rising edge) */
    constexpr std::uint32_t CR4_WUP5_B_0x0 = 0;
        /** @brief Detection on low level (falling edge) */
    constexpr std::uint32_t CR4_WUP5_B_0x1 = 1;

    /** @brief WUP6 Wake-up Line Polarity 6 (PB6) This bit defines the polarity used for event detection on external wake-up line 6 */
    using CR4_WUP6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Detection on high level (rising edge) (value: 0)
     *          - B_0x1: Detection on low level (falling edge) (value: 1)
     */
        /** @brief Detection on high level (rising edge) */
    constexpr std::uint32_t CR4_WUP6_B_0x0 = 0;
        /** @brief Detection on low level (falling edge) */
    constexpr std::uint32_t CR4_WUP6_B_0x1 = 1;

    /** @brief WUP7 Wake-up Line Polarity 7 (PB7) This bit defines the polarity used for event detection on external wake-up line 7 */
    using CR4_WUP7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Detection on high level (rising edge) (value: 0)
     *          - B_0x1: Detection on low level (falling edge) (value: 1)
     */
        /** @brief Detection on high level (rising edge) */
    constexpr std::uint32_t CR4_WUP7_B_0x0 = 0;
        /** @brief Detection on low level (falling edge) */
    constexpr std::uint32_t CR4_WUP7_B_0x1 = 1;

    /** @brief WUP8 Wake-up Line Polarity 8 (PA8) This bit defines the polarity used for event detection on external wake-up line 8 */
    using CR4_WUP8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Detection on high level (rising edge) (value: 0)
     *          - B_0x1: Detection on low level (falling edge) (value: 1)
     */
        /** @brief Detection on high level (rising edge) */
    constexpr std::uint32_t CR4_WUP8_B_0x0 = 0;
        /** @brief Detection on low level (falling edge) */
    constexpr std::uint32_t CR4_WUP8_B_0x1 = 1;

    /** @brief WUP9 Wake-up Line Polarity 9 (PA9) This bit defines the polarity used for event detection on external wake-up line 9 */
    using CR4_WUP9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Detection on high level (rising edge) (value: 0)
     *          - B_0x1: Detection on low level (falling edge) (value: 1)
     */
        /** @brief Detection on high level (rising edge) */
    constexpr std::uint32_t CR4_WUP9_B_0x0 = 0;
        /** @brief Detection on low level (falling edge) */
    constexpr std::uint32_t CR4_WUP9_B_0x1 = 1;

    /** @brief WUP10 Wake-up Line Polarity 10 (PA10) This bit defines the polarity used for event detection on external wake-up line 10 */
    using CR4_WUP10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Detection on high level (rising edge) (value: 0)
     *          - B_0x1: Detection on low level (falling edge) (value: 1)
     */
        /** @brief Detection on high level (rising edge) */
    constexpr std::uint32_t CR4_WUP10_B_0x0 = 0;
        /** @brief Detection on low level (falling edge) */
    constexpr std::uint32_t CR4_WUP10_B_0x1 = 1;

    /** @brief WUP11 Wake-up Line Polarity 11 (PA11) This bit defines the polarity used for event detection on external wake-up line 11 */
    using CR4_WUP11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Detection on high level (rising edge) (value: 0)
     *          - B_0x1: Detection on low level (falling edge) (value: 1)
     */
        /** @brief Detection on high level (rising edge) */
    constexpr std::uint32_t CR4_WUP11_B_0x0 = 0;
        /** @brief Detection on low level (falling edge) */
    constexpr std::uint32_t CR4_WUP11_B_0x1 = 1;

    /** @brief SR1 register */
    using SR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WUF0 WakeUp Flag 0 (PB0) This bit is set when a wakeup is detected on wakeup line 0. It is cleared by a reset pad or by writing 1 in this bit field. writting this bit, clears the interrupt: */
    using SR1_WUF0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: clear the interrupt (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t SR1_WUF0_B_0x0 = 0;
        /** @brief clear the interrupt */
    constexpr std::uint32_t SR1_WUF0_B_0x1 = 1;

    /** @brief WUF1 WakeUp Flag 1 (PB1) This bit is set when a wakeup is detected on wakeup line 1. It is cleared by a reset pad or by writing 1 in this bit field. writting this bit, clears the interrupt: */
    using SR1_WUF1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: clear the interrupt (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t SR1_WUF1_B_0x0 = 0;
        /** @brief clear the interrupt */
    constexpr std::uint32_t SR1_WUF1_B_0x1 = 1;

    /** @brief WUF2 WakeUp Flag 2 (PB2) This bit is set when a wakeup is detected on wakeup line 2. It is cleared by a reset pad or by writing 1 in this bit field. writting this bit, clears the interrupt: */
    using SR1_WUF2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: clear the interrupt (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t SR1_WUF2_B_0x0 = 0;
        /** @brief clear the interrupt */
    constexpr std::uint32_t SR1_WUF2_B_0x1 = 1;

    /** @brief WUF3 WakeUp Flag 3 (PB3) This bit is set when a wakeup is detected on wakeup line 3. It is cleared by a reset pad or by writing 1 in this bit field. writting this bit, clears the interrupt: */
    using SR1_WUF3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: clear the interrupt (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t SR1_WUF3_B_0x0 = 0;
        /** @brief clear the interrupt */
    constexpr std::uint32_t SR1_WUF3_B_0x1 = 1;

    /** @brief WUF4 WakeUp Flag 4 (PB4) This bit is set when a wakeup is detected on wakeup line 4. It is cleared by a reset pad or by writing 1 in this bit field. writting this bit, clears the interrupt: */
    using SR1_WUF4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: clear the interrupt (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t SR1_WUF4_B_0x0 = 0;
        /** @brief clear the interrupt */
    constexpr std::uint32_t SR1_WUF4_B_0x1 = 1;

    /** @brief WUF5 WakeUp Flag 5 (PB5) This bit is set when a wakeup is detected on wakeup line 5. It is cleared by a reset pad or by writing 1 in this bit field. writting this bit, clears the interrupt: */
    using SR1_WUF5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: clear the interrupt (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t SR1_WUF5_B_0x0 = 0;
        /** @brief clear the interrupt */
    constexpr std::uint32_t SR1_WUF5_B_0x1 = 1;

    /** @brief WUF6 WakeUp Flag 6 (PB6) This bit is set when a wakeup is detected on wakeup line 6. It is cleared by a reset pad or by writing 1 in this bit field. writting this bit, clears the interrupt: */
    using SR1_WUF6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: clear the interrupt (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t SR1_WUF6_B_0x0 = 0;
        /** @brief clear the interrupt */
    constexpr std::uint32_t SR1_WUF6_B_0x1 = 1;

    /** @brief WUF7 WakeUp Flag 7 (PB7) This bit is set when a wakeup is detected on wakeup line 7. It is cleared by a reset pad or by writing 1 in this bit field. writting this bit, clears the interrupt: */
    using SR1_WUF7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: clear the interrupt (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t SR1_WUF7_B_0x0 = 0;
        /** @brief clear the interrupt */
    constexpr std::uint32_t SR1_WUF7_B_0x1 = 1;

    /** @brief WUF8 WakeUp Flag 8 (PA8) This bit is set when a wakeup is detected on wakeup line 8. It is cleared by a reset pad or by writing 1 in this bit field. writting this bit, clears the interrupt: */
    using SR1_WUF8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: clear the interrupt (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t SR1_WUF8_B_0x0 = 0;
        /** @brief clear the interrupt */
    constexpr std::uint32_t SR1_WUF8_B_0x1 = 1;

    /** @brief WUF9 WakeUp Flag 9 (PA9) This bit is set when a wakeup is detected on wakeup line 9. It is cleared by a reset pad or by writing 1 in this bit field. writting this bit, clears the interrupt: */
    using SR1_WUF9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: clear the interrupt (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t SR1_WUF9_B_0x0 = 0;
        /** @brief clear the interrupt */
    constexpr std::uint32_t SR1_WUF9_B_0x1 = 1;

    /** @brief WUF10 WakeUp Flag 10 (PA10) This bit is set when a wakeup is detected on wakeup line 10. It is cleared by a reset pad or by writing 1 in this bit field. writting this bit, clears the interrupt: */
    using SR1_WUF10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: clear the interrupt (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t SR1_WUF10_B_0x0 = 0;
        /** @brief clear the interrupt */
    constexpr std::uint32_t SR1_WUF10_B_0x1 = 1;

    /** @brief WUF11 WakeUp Flag 11 (PA11) This bit is set when a wakeup is detected on wakeup line 11. It is cleared by a reset pad or by writing 1 in this bit field. writting this bit, clears the interrupt: */
    using SR1_WUF11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: clear the interrupt (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t SR1_WUF11_B_0x0 = 0;
        /** @brief clear the interrupt */
    constexpr std::uint32_t SR1_WUF11_B_0x1 = 1;

    /** @brief WBLEF: BLE wakeup flag. 0: no wakeup from BLE occurred since last clear. 1: a wakeup from BLE occurred since last clear. Cleared by writing 1 in this bit. */
    using SR1_WBLEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WBLEHCPUF: BLE Host CPU wakeup flag. 0: no wakeup from BLE Host CPU occurred since last clear. 1: a wakeup from BLE Host CPU occurred since last clear. Cleared by writing 1 in this bit. */
    using SR1_WBLEHCPUF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IWUF2: Internal wakeup 2 flag (LPUART). 0: no wakeup from LPUART occurred since last clear. 1: a wakeup from LPUART occurred since last clear. Note: The user must clear the LPUART wakeup flag inside the LPUART IP to clear this bit (mirror of the LPUART wakeup line on the PWRC block). */
    using SR1_IWUF2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IWUF: Internal wakeup flag (RTC). 0: no wakeup from RTC occurred since last clear. 1: a wakeup from RTC occurred since last clear. Note: The user must clear the RTC wakeup flag inside the RTC IP to clear this bit (mirror of the RTC wakeup line on the PWRC block). */
    using SR1_IWUF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SR2 register */
    using SR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SMPSBYPR: SMPS Force Bypass Control Replica This bit mirrors the actual BYPASS_3V3 control signal driven to the SMPS regulator, dependant on the real working state. */
    using SR2_SMPSBYPR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SMPSENR: SMPS Enable Control Replica This bit mirrors the actual ENABLE_3V3 control signal driven to the SMPS regulator, dependant on the real working state. */
    using SR2_SMPSENR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SMPSRDY: SMPS Ready Status This bit provides the information whether SMPS is ready. */
    using SR2_SMPSRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SMPS regulator is not ready (value: 0)
     *          - B_0x1: SMPS regulator is ready. (value: 1)
     */
        /** @brief SMPS regulator is not ready */
    constexpr std::uint32_t SR2_SMPSRDY_B_0x0 = 0;
        /** @brief SMPS regulator is ready. */
    constexpr std::uint32_t SR2_SMPSRDY_B_0x1 = 1;

    /** @brief Bit3: PB15 input value on VDD33 latched at POR Bit2: PB14 input value on VDD33 latched at POR Bit1: PB13 input value on VDD33 latched at POR Bit0: PB12 input value on VDD33 latched at POR */
    using SR2_IOBOOTVAL2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief REGLPS: Regulator Low Power Started This bit provides the information whether low power regulator is ready. */
    using SR2_REGLPS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LP regulator is not ready. (value: 0)
     *          - B_0x1: LP regulator is ready. (value: 1)
     */
        /** @brief LP regulator is not ready. */
    constexpr std::uint32_t SR2_REGLPS_B_0x0 = 0;
        /** @brief LP regulator is ready. */
    constexpr std::uint32_t SR2_REGLPS_B_0x1 = 1;

    /** @brief REGMS: Regulator Main LDO Started This bit provides the information whether main regulator is ready. */
    using SR2_REGMS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Main regulator is not ready. (value: 0)
     *          - B_0x1: Main regulator is ready. (value: 1)
     */
        /** @brief Main regulator is not ready. */
    constexpr std::uint32_t SR2_REGMS_B_0x0 = 0;
        /** @brief Main regulator is ready. */
    constexpr std::uint32_t SR2_REGMS_B_0x1 = 1;

    /** @brief PVDO: Power Voltage Detector Output When the Power Voltage Detector is enabled (CR2.PVDE) this bit is set when the system supply (VDDIO) is lower than the selected PVD threshold (CR2.PVDLS) */
    using SR2_PVDO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bit3: PA11 input value on VDD33 latched at POR Bit2: PA10 input value on VDD33 latched at POR Bit1: PA9 input value on VDD33 latched at POR Bit0: PA8 input value on VDD33 latched at POR */
    using SR2_IOBOOTVAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CR5 register */
    using CR5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SMPSLVL[3:0] SMPS Output Level Voltage Selection Select the SMPS output voltage with a granularity of 50mV. Default = '0100' (1.4V) Vout = 1.2 + 0.05*SMPSOUT (V) */
    using CR5_SMPSLVL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SMPSBOMSEL: SMPS BOM Selection: */
    using CR5_SMPSBOMSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BOM1 (value: 0)
     *          - B_0x1: BOM2 (default) (value: 1)
     *          - B_0x2: BOM3 (value: 2)
     *          - B_0x3: n/a (value: 3)
     */
        /** @brief BOM1 */
    constexpr std::uint32_t CR5_SMPSBOMSEL_B_0x0 = 0;
        /** @brief BOM2 (default) */
    constexpr std::uint32_t CR5_SMPSBOMSEL_B_0x1 = 1;
        /** @brief BOM3 */
    constexpr std::uint32_t CR5_SMPSBOMSEL_B_0x2 = 2;
        /** @brief n/a */
    constexpr std::uint32_t CR5_SMPSBOMSEL_B_0x3 = 3;

    /** @brief SMPSFB Force ready check When this bit is set, the SMPS FSM will consider the SMPS ready . */
    using CR5_SMPSFRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (by default) (value: 0)
     *          - B_0x1: SMPS is considered READY (value: 1)
     */
        /** @brief no effect (by default) */
    constexpr std::uint32_t CR5_SMPSFRDY_B_0x0 = 0;
        /** @brief SMPS is considered READY */
    constexpr std::uint32_t CR5_SMPSFRDY_B_0x1 = 1;

    /** @brief SMPSLPOPEN: In Low Power mode SMPS is in OPEN mode (instead of PRECHARGE mode). When this bit is set, when the chip is in Low power mode the SMPS regulator will be disabled (HZ) Documentation needed. */
    using CR5_SMPSLPOPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: in Low Power mode, SMPS is in PRECHARGE, output is connected to VDDIO. (value: 0)
     *          - B_0x1: in Low Power mode, SMPS is disabled, output is floating (value: 1)
     */
        /** @brief in Low Power mode, SMPS is in PRECHARGE, output is connected to VDDIO. */
    constexpr std::uint32_t CR5_SMPSLPOPEN_B_0x0 = 0;
        /** @brief in Low Power mode, SMPS is disabled, output is floating */
    constexpr std::uint32_t CR5_SMPSLPOPEN_B_0x1 = 1;

    /** @brief SMPSFB Force SMPS Regulator in bypass mode When this bit is set, the SMPS regulator will be forced to operate in precharge mode. the actual state of SMPS can be observed thanks to the replica SR2.SMPSBYPR. */
    using CR5_SMPSFBYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (by default) (value: 0)
     *          - B_0x1: SMPS is disabled and bypassed (ENABLE_3V3=0 and PRECHARGE_3V3=1) (value: 1)
     */
        /** @brief no effect (by default) */
    constexpr std::uint32_t CR5_SMPSFBYP_B_0x0 = 0;
        /** @brief SMPS is disabled and bypassed (ENABLE_3V3=0 and PRECHARGE_3V3=1) */
    constexpr std::uint32_t CR5_SMPSFBYP_B_0x1 = 1;

    /** @brief NOSMPS: No SMPS Mode When this bit is set, the SMPS regulator will be disabled. Note that this configuration should be used only when SMPS_FB pad is directly connected to VBATT or Vext, without L/C BOM. */
    using CR5_NOSMPS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect, SMPS is enabled. (value: 0)
     *          - B_0x1: SMPS is disabled; (value: 1)
     */
        /** @brief No effect, SMPS is enabled. */
    constexpr std::uint32_t CR5_NOSMPS_B_0x0 = 0;
        /** @brief SMPS is disabled; */
    constexpr std::uint32_t CR5_NOSMPS_B_0x1 = 1;

    /** @brief SMPS_ENA_DCM: enable discontinuous conduction mode */
    using CR5_SMPS_ENA_DCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: disable (value: 0)
     *          - B_0x1: enable (value: 1)
     */
        /** @brief disable */
    constexpr std::uint32_t CR5_SMPS_ENA_DCM_B_0x0 = 0;
        /** @brief enable */
    constexpr std::uint32_t CR5_SMPS_ENA_DCM_B_0x1 = 1;

    /** @brief CLKDETR_DISABLE: disable SMPS clock detection The SMPS clock detection enables an automatic SMPS bypass switching in case of unwanted loss of SMPS clock. */
    using CR5_CLKDETR_DISABLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SMPS clock detection enabled (default) (value: 0)
     *          - B_0x1: SMPS clock detection disabled (value: 1)
     */
        /** @brief SMPS clock detection enabled (default) */
    constexpr std::uint32_t CR5_CLKDETR_DISABLE_B_0x0 = 0;
        /** @brief SMPS clock detection disabled */
    constexpr std::uint32_t CR5_CLKDETR_DISABLE_B_0x1 = 1;

    /** @brief SMPS_PRECH_CUR_SEL[1:0] Selection for SMPS PRECHARGE limit current */
    using CR5_SMPS_PRECH_CUR_SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 2.5mA (value: 0)
     *          - B_0x1: 5mA (value: 1)
     *          - B_0x2: 10mA (value: 2)
     *          - B_0x3: 20mA (default) (value: 3)
     */
        /** @brief 2.5mA */
    constexpr std::uint32_t CR5_SMPS_PRECH_CUR_SEL_B_0x0 = 0;
        /** @brief 5mA */
    constexpr std::uint32_t CR5_SMPS_PRECH_CUR_SEL_B_0x1 = 1;
        /** @brief 10mA */
    constexpr std::uint32_t CR5_SMPS_PRECH_CUR_SEL_B_0x2 = 2;
        /** @brief 20mA (default) */
    constexpr std::uint32_t CR5_SMPS_PRECH_CUR_SEL_B_0x3 = 3;

    /** @brief PUCRA register */
    using PUCRA = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU[x] : Pull Up Pull up activation on port A[i] pad when APC bit of PWRC CR3 is set */
    using PUCRA_PU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Pull-Up activated on port A[i] when APC bit of PWRC CR3 bit is set and PWR_PDCRA[x] is reset (value: 1)
     *          - B_0x0: Pull-Up not activated on port A[i] (value: 0)
     */
        /** @brief Pull-Up activated on port A[i] when APC bit of PWRC CR3 bit is set and PWR_PDCRA[x] is reset */
    constexpr std::uint32_t PUCRA_PU_B_0x1 = 1;
        /** @brief Pull-Up not activated on port A[i] */
    constexpr std::uint32_t PUCRA_PU_B_0x0 = 0;

    /** @brief PDCRA register */
    using PDCRA = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD[x]: Pull Down Pull Down activation on port A[i] pad when APC bit of PWRC CR3 is set */
    using PDCRA_PD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Pull-Down activated on Port A[i] when APC bit of PWRC CR3 bit is set (value: 1)
     *          - B_0x0: Pull-Down not activated on Port A[i] (value: 0)
     */
        /** @brief Pull-Down activated on Port A[i] when APC bit of PWRC CR3 bit is set */
    constexpr std::uint32_t PDCRA_PD_B_0x1 = 1;
        /** @brief Pull-Down not activated on Port A[i] */
    constexpr std::uint32_t PDCRA_PD_B_0x0 = 0;

    /** @brief PUCRB register */
    using PUCRB = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU[x] : Pull Up Pull up activation on port B[i] pad when APC bit of PWRC CR3 is set */
    using PUCRB_PU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Pull-Up activated on port B[i] when APC bit of PWRC CR3 bit is set and PWR_PDCRB[x] is reset (value: 1)
     *          - B_0x0: Pull-Up not activated on port B[i] (value: 0)
     */
        /** @brief Pull-Up activated on port B[i] when APC bit of PWRC CR3 bit is set and PWR_PDCRB[x] is reset */
    constexpr std::uint32_t PUCRB_PU_B_0x1 = 1;
        /** @brief Pull-Up not activated on port B[i] */
    constexpr std::uint32_t PUCRB_PU_B_0x0 = 0;

    /** @brief PDCRB register */
    using PDCRB = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD[x]: Pull Down Pull Down activation on port B[i] pad when APC bit of PWRC CR3 is set */
    using PDCRB_PD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Pull-Down activated on Port B[i] when APC bit of PWRC CR3 bit is set (value: 1)
     *          - B_0x0: Pull-Down not activated on Port B[i] (value: 0)
     */
        /** @brief Pull-Down activated on Port B[i] when APC bit of PWRC CR3 bit is set */
    constexpr std::uint32_t PDCRB_PD_B_0x1 = 1;
        /** @brief Pull-Down not activated on Port B[i] */
    constexpr std::uint32_t PDCRB_PD_B_0x0 = 0;

    /** @brief CR6 register */
    using CR6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EWU12 Enable WakeUp line 12 (PA0) When this bit is set the wakeup line 12 is enabled and a rising or falling edge on wakeup line 0 will trigger a CPU wakeup event depending on CR7.WP0 bit. */
    using CR6_EWU12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EWU13 Enable WakeUp line 13 (PA1) When this bit is set the wakeup line 13 is enabled and a rising or falling edge on wakeup line 1 will trigger a CPU wakeup event depending on CR7.WP1 bit. */
    using CR6_EWU13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EWU14 Enable WakeUp line 14 (PA2) When this bit is set the wakeup line 14 is enabled and a rising or falling edge on wakeup line 2 will trigger a CPU wakeup event depending on CR7.WP2 bit. */
    using CR6_EWU14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EWU15 Enable WakeUp line 15 (PA3) When this bit is set the wakeup line 15 is enabled and a rising or falling edge on wakeup line 3 will trigger a CPU wakeup event depending on CR7.WP3 bit. */
    using CR6_EWU15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EWU16 Enable WakeUp line 16 (PB12) When this bit is set the wakeup line 16 is enabled and a rising or falling edge on wakeup line 4 will trigger a CPU wakeup event depending on CR7.WP4 bit. */
    using CR6_EWU16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EWU17 Enable WakeUp line 17 (PB13) When this bit is set the wakeup line 17 is enabled and a rising or falling edge on wakeup line 5 will trigger a CPU wakeup event depending on CR7.WP5 bit. */
    using CR6_EWU17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EWU18 Enable WakeUp line 18 (PB14) When this bit is set the wakeup line 18 is enabled and a rising or falling edge on wakeup line 6 will trigger a CPU wakeup event depending on CR7.WP6 bit. */
    using CR6_EWU18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EWU19 Enable WakeUp line 19 (PB15) When this bit is set the wakeup line 19 is enabled and a rising or falling edge on wakeup line 7 will trigger a CPU wakeup event depending on CR7.WP7 bit. */
    using CR6_EWU19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CR7 register */
    using CR7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WUP12 Wake-up Line Polarity 12 (PA0) This bit defines the polarity used for event detection on external wake-up line 12 */
    using CR7_WUP12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Detection on high level (rising edge) (value: 0)
     *          - B_0x1: Detection on low level (falling edge) (value: 1)
     */
        /** @brief Detection on high level (rising edge) */
    constexpr std::uint32_t CR7_WUP12_B_0x0 = 0;
        /** @brief Detection on low level (falling edge) */
    constexpr std::uint32_t CR7_WUP12_B_0x1 = 1;

    /** @brief WUP13 Wake-up Line Polarity 13 (PA1) This bit defines the polarity used for event detection on external wake-up line 13 */
    using CR7_WUP13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Detection on high level (rising edge) (value: 0)
     *          - B_0x1: Detection on low level (falling edge) (value: 1)
     */
        /** @brief Detection on high level (rising edge) */
    constexpr std::uint32_t CR7_WUP13_B_0x0 = 0;
        /** @brief Detection on low level (falling edge) */
    constexpr std::uint32_t CR7_WUP13_B_0x1 = 1;

    /** @brief WUP14 Wake-up Line Polarity 14 (PA2) This bit defines the polarity used for event detection on external wake-up line 14 */
    using CR7_WUP14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Detection on high level (rising edge) (value: 0)
     *          - B_0x1: Detection on low level (falling edge) (value: 1)
     */
        /** @brief Detection on high level (rising edge) */
    constexpr std::uint32_t CR7_WUP14_B_0x0 = 0;
        /** @brief Detection on low level (falling edge) */
    constexpr std::uint32_t CR7_WUP14_B_0x1 = 1;

    /** @brief WUP15 Wake-up Line Polarity 15 (PA3) This bit defines the polarity used for event detection on external wake-up line 15 */
    using CR7_WUP15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Detection on high level (rising edge) (value: 0)
     *          - B_0x1: Detection on low level (falling edge) (value: 1)
     */
        /** @brief Detection on high level (rising edge) */
    constexpr std::uint32_t CR7_WUP15_B_0x0 = 0;
        /** @brief Detection on low level (falling edge) */
    constexpr std::uint32_t CR7_WUP15_B_0x1 = 1;

    /** @brief WUP16 Wake-up Line Polarity 16 (PB12) This bit defines the polarity used for event detection on external wake-up line 16 */
    using CR7_WUP16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Detection on high level (rising edge) (value: 0)
     *          - B_0x1: Detection on low level (falling edge) (value: 1)
     */
        /** @brief Detection on high level (rising edge) */
    constexpr std::uint32_t CR7_WUP16_B_0x0 = 0;
        /** @brief Detection on low level (falling edge) */
    constexpr std::uint32_t CR7_WUP16_B_0x1 = 1;

    /** @brief WUP17 Wake-up Line Polarity 17 (PB13) This bit defines the polarity used for event detection on external wake-up line 17 */
    using CR7_WUP17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Detection on high level (rising edge) (value: 0)
     *          - B_0x1: Detection on low level (falling edge) (value: 1)
     */
        /** @brief Detection on high level (rising edge) */
    constexpr std::uint32_t CR7_WUP17_B_0x0 = 0;
        /** @brief Detection on low level (falling edge) */
    constexpr std::uint32_t CR7_WUP17_B_0x1 = 1;

    /** @brief WUP18 Wake-up Line Polarity 18 (PB14) This bit defines the polarity used for event detection on external wake-up line 18 */
    using CR7_WUP18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Detection on high level (rising edge) (value: 0)
     *          - B_0x1: Detection on low level (falling edge) (value: 1)
     */
        /** @brief Detection on high level (rising edge) */
    constexpr std::uint32_t CR7_WUP18_B_0x0 = 0;
        /** @brief Detection on low level (falling edge) */
    constexpr std::uint32_t CR7_WUP18_B_0x1 = 1;

    /** @brief WUP19 Wake-up Line Polarity 19 (PB15) This bit defines the polarity used for event detection on external wake-up line 19 */
    using CR7_WUP19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Detection on high level (rising edge) (value: 0)
     *          - B_0x1: Detection on low level (falling edge) (value: 1)
     */
        /** @brief Detection on high level (rising edge) */
    constexpr std::uint32_t CR7_WUP19_B_0x0 = 0;
        /** @brief Detection on low level (falling edge) */
    constexpr std::uint32_t CR7_WUP19_B_0x1 = 1;

    /** @brief SR3 register */
    using SR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WUF12 WakeUp Flag 12 PA0 This bit is set when a wakeup is detected on wakeup line 12. It is cleared by a reset pad or by writing 1 in this bit field. writting this bit, clears the interrupt: */
    using SR3_WUF12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: clear the interrupt (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t SR3_WUF12_B_0x0 = 0;
        /** @brief clear the interrupt */
    constexpr std::uint32_t SR3_WUF12_B_0x1 = 1;

    /** @brief WUF13 WakeUp Flag 13 PA1 This bit is set when a wakeup is detected on wakeup line 13. It is cleared by a reset pad or by writing 1 in this bit field. writting this bit, clears the interrupt: */
    using SR3_WUF13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: clear the interrupt (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t SR3_WUF13_B_0x0 = 0;
        /** @brief clear the interrupt */
    constexpr std::uint32_t SR3_WUF13_B_0x1 = 1;

    /** @brief WUF14 WakeUp Flag 14 PA2 This bit is set when a wakeup is detected on wakeup line 14. It is cleared by a reset pad or by writing 1 in this bit field. writting this bit, clears the interrupt: */
    using SR3_WUF14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: clear the interrupt (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t SR3_WUF14_B_0x0 = 0;
        /** @brief clear the interrupt */
    constexpr std::uint32_t SR3_WUF14_B_0x1 = 1;

    /** @brief WUF15 WakeUp Flag 15 PA3 This bit is set when a wakeup is detected on wakeup line 15. It is cleared by a reset pad or by writing 1 in this bit field. writting this bit, clears the interrupt: */
    using SR3_WUF15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: clear the interrupt (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t SR3_WUF15_B_0x0 = 0;
        /** @brief clear the interrupt */
    constexpr std::uint32_t SR3_WUF15_B_0x1 = 1;

    /** @brief WUF16 WakeUp Flag 16 PB12 This bit is set when a wakeup is detected on wakeup line 16. It is cleared by a reset pad or by writing 1 in this bit field. writting this bit, clears the interrupt: */
    using SR3_WUF16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: clear the interrupt (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t SR3_WUF16_B_0x0 = 0;
        /** @brief clear the interrupt */
    constexpr std::uint32_t SR3_WUF16_B_0x1 = 1;

    /** @brief WUF17 WakeUp Flag 17 PB13 This bit is set when a wakeup is detected on wakeup line 17. It is cleared by a reset pad or by writing 1 in this bit field. writting this bit, clears the interrupt: */
    using SR3_WUF17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: clear the interrupt (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t SR3_WUF17_B_0x0 = 0;
        /** @brief clear the interrupt */
    constexpr std::uint32_t SR3_WUF17_B_0x1 = 1;

    /** @brief WUF18 WakeUp Flag 18 PB14 This bit is set when a wakeup is detected on wakeup line 18. It is cleared by a reset pad or by writing 1 in this bit field. writting this bit, clears the interrupt: */
    using SR3_WUF18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: clear the interrupt (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t SR3_WUF18_B_0x0 = 0;
        /** @brief clear the interrupt */
    constexpr std::uint32_t SR3_WUF18_B_0x1 = 1;

    /** @brief WUF19 WakeUp Flag 19 PB15 This bit is set when a wakeup is detected on wakeup line 19. It is cleared by a reset pad or by writing 1 in this bit field. writting this bit, clears the interrupt: */
    using SR3_WUF19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: clear the interrupt (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t SR3_WUF19_B_0x0 = 0;
        /** @brief clear the interrupt */
    constexpr std::uint32_t SR3_WUF19_B_0x1 = 1;

    /** @brief DBGR register */
    using DBGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x84, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DEEPSTOP2: DEEPSTOP2 low power saving emulation enable. 0: normal DEEPSTOP will be applied 1: DEEPSTOP2 (debugger features not lost) will be applied instead of DEEPSTOP. */
    using DBGR_DEEPSTOP2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DIS_PRECH[2:0]: disable precharge during deepstop (debug) - 111: precharge and SMPS monitoring are disabled (whatever CR5.SMPSLPOPEN) - 101: precharge are activated only at deepstop exit (to be used only with CR5.SMPSLPOPEN=1) - else: No effect (default 0x0) */
    using DBGR_DIS_PRECH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EXTSRR register */
    using EXTSRR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x88, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DEEPSTOPF System DeepStop Flag This bit is set by hardware and cleared only by a POR reset or by writing '1' in this bit field */
    using EXTSRR_DEEPSTOPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: System has not been in DEEPSTOP mode (value: 0)
     *          - B_0x1: System has been in DEEPSTOP mode (value: 1)
     */
        /** @brief System has not been in DEEPSTOP mode */
    constexpr std::uint32_t EXTSRR_DEEPSTOPF_B_0x0 = 0;
        /** @brief System has been in DEEPSTOP mode */
    constexpr std::uint32_t EXTSRR_DEEPSTOPF_B_0x1 = 1;

    /** @brief RFPHASEF RFPHASE Flag This bit is set by hardware after a Radio wake-up event (BLE activation); it is cleared either by software, writing '1' in this bit field, or by hardware when Ready2Sleep signal is asserted by the Radio IP. */
    using EXTSRR_RFPHASEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RF IP does not require attention (value: 0)
     *          - B_0x1: RF IP awake and requesting system attention (value: 1)
     */
        /** @brief RF IP does not require attention */
    constexpr std::uint32_t EXTSRR_RFPHASEF_B_0x0 = 0;
        /** @brief RF IP awake and requesting system attention */
    constexpr std::uint32_t EXTSRR_RFPHASEF_B_0x1 = 1;

    /** @brief DBGSMPS register */
    using DBGSMPS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TESTDIG: SMPS TEST_DIG_3V3[3:0] SMPS control signal */
    using DBGSMPS_TESTDIG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TESTKEL: SMPS TEST_KEL_3V3[1:0] SMPS control signal */
    using DBGSMPS_TESTKEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HOT_STUP_3V3 SMPS control signal */
    using DBGSMPS_HOT_STUP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NO_STUP_3V3 SMPS control signal */
    using DBGSMPS_NO_STUP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TESTILIM: SMPS TEST_ILIM_3V3 SMPS control signal */
    using DBGSMPS_TESTILIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CTLRES_RAM_3V3 SMPS control signal */
    using DBGSMPS_CTLRES_RAMP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DIS_BIG_MOS_3V3 SMPS control signal */
    using DBGSMPS_DIS_BIG_MOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TEST_OL_3V3 SMPS control signal */
    using DBGSMPS_TEST_OL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TRIMR register */
    using TRIMR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x90, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RFD_REG_TRIM[3:0]: RF LDO trimming. Default value when no trimming is '0111'. */
    using TRIMR_RFD_REG_TRIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TRIM_MR[3:0]: Main regulator voltage trimming. Default value when no trimming is '0000'. */
    using TRIMR_TRIM_MR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SMPS_TRIM[2:0]: SMPS output voltage trimming. Note: the default value is the centered value ('011'). */
    using TRIMR_SMPS_TRIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ENGTRIM register */
    using ENGTRIM = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x94, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TRIMRFDREGEN: RFD_REG_TRIM software overload enable. 0: Hardware trimming value from TRIMR.RFD_REG_TRIM bit field is applied. 1: Software trimming value from ENGTRIM.RFD_REG_TRIM bit field is applied */
    using ENGTRIM_TRIMRFDREGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RFD_REG_TRIM[3:0]: RF LDO trimming chosen by the software. */
    using ENGTRIM_RFD_REG_TRIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TRIMMREN: TRIM_MR software overload enable. 0: Hardware trimming value from TRIMR.TRIM_MR bit field is applied. 1: Software trimming value from ENGTRIM.TRIM_MR bit field is applied */
    using ENGTRIM_TRIMMREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TRIM_MR[3:0]: Main regulator voltage trimming chosen by the software. */
    using ENGTRIM_TRIM_MR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SMPSTRIMEN: SMPS_TRIM software overload enable. 0: Hardware trimming value from TRIMR.SMPS_TRIM bit field is applied. 1: Trimming value from ENGTRIM.SMPS_TRIM bit field is applied */
    using ENGTRIM_SMPSTRIMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SMPS_TRIM[2:0]: SMPS output voltage trimming chosen by the software. */
    using ENGTRIM_SMPS_TRIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DBG1 register */
    using DBG1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x98, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief These bits are set and cleared by the SMPS FSM.They show the sequencer executed states. 2: SMPS RUN 3: STOP 4: NOSMPS 5: PRECHARGE */
    using DBG1_SMPS_FSM_STATE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: STARTUP (value: 0)
     *          - B_0x1: SMPS REQ (value: 1)
     */
        /** @brief STARTUP */
    constexpr std::uint32_t DBG1_SMPS_FSM_STATE_B_0x0 = 0;
        /** @brief SMPS REQ */
    constexpr std::uint32_t DBG1_SMPS_FSM_STATE_B_0x1 = 1;

    /** @brief These bits are set and cleared by the FLASH FSM.They show the sequencer executed states. 2: READY 3: SWITCH OFF 4: POWER DOWN */
    using DBG1_FLASH_FSM_STATE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: POR (value: 0)
     *          - B_0x1: POWER UP (value: 1)
     */
        /** @brief POR */
    constexpr std::uint32_t DBG1_FLASH_FSM_STATE_B_0x0 = 0;
        /** @brief POWER UP */
    constexpr std::uint32_t DBG1_FLASH_FSM_STATE_B_0x1 = 1;

    /** @brief DBG2 register */
    using DBG2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief These bits are set and cleared by the PMU FSM.They show the sequencer executed states. 2: DS ENTRY 3: WAIT1 4: WAIT2 5: WAIT 6: WAIT3 7: WAIT4 8: ISOLATION 9: DEEPSTOP */
    using DBG2_PMU_FSM_STATE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: POR (value: 0)
     *          - B_0x1: RUN (value: 1)
     *          - B_0x2: SHUTDOWN (value: 2)
     *          - B_0x3: DEEPSTOP EXIT (value: 3)
     */
        /** @brief POR */
    constexpr std::uint32_t DBG2_PMU_FSM_STATE_B_0x0 = 0;
        /** @brief RUN */
    constexpr std::uint32_t DBG2_PMU_FSM_STATE_B_0x1 = 1;
        /** @brief SHUTDOWN */
    constexpr std::uint32_t DBG2_PMU_FSM_STATE_B_0x2 = 2;
        /** @brief DEEPSTOP EXIT */
    constexpr std::uint32_t DBG2_PMU_FSM_STATE_B_0x3 = 3;

    /** @brief These bits are set and cleared by the RAM FSM.They show the sequencer executed states. 2: READY 3: OFF */
    using DBG2_RAM_FSM_STATE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: POR (value: 0)
     *          - B_0x1: POWER UP (value: 1)
     */
        /** @brief POR */
    constexpr std::uint32_t DBG2_RAM_FSM_STATE_B_0x0 = 0;
        /** @brief POWER UP */
    constexpr std::uint32_t DBG2_RAM_FSM_STATE_B_0x1 = 1;

}

#endif
