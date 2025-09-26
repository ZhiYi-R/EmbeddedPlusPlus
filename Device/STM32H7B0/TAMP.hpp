/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32H7B0_TAMP_HPP
#define EMBEDDED_PP_STM32H7B0_TAMP_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Tamper and backup */
namespace STM32H7B0::TAMP {

    /** @brief TAMP control register 1 */
    using TAMP_CR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tamper detection on TAMP_IN1 enable */
    using TAMP_CR1_TAMP1E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tamper detection on TAMP_IN1 is disabled. (value: 0)
     *          - B_0x1: Tamper detection on TAMP_IN1 is enabled. (value: 1)
     */
        /** @brief Tamper detection on TAMP_IN1 is disabled. */
    constexpr std::uint32_t TAMP_CR1_TAMP1E_B_0x0 = 0;
        /** @brief Tamper detection on TAMP_IN1 is enabled. */
    constexpr std::uint32_t TAMP_CR1_TAMP1E_B_0x1 = 1;

    /** @brief Tamper detection on TAMP_IN2 enable */
    using TAMP_CR1_TAMP2E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tamper detection on TAMP_IN2 is disabled. (value: 0)
     *          - B_0x1: Tamper detection on TAMP_IN2 is enabled. (value: 1)
     */
        /** @brief Tamper detection on TAMP_IN2 is disabled. */
    constexpr std::uint32_t TAMP_CR1_TAMP2E_B_0x0 = 0;
        /** @brief Tamper detection on TAMP_IN2 is enabled. */
    constexpr std::uint32_t TAMP_CR1_TAMP2E_B_0x1 = 1;

    /** @brief Tamper detection on TAMP_IN3 enable */
    using TAMP_CR1_TAMP3E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tamper detection on TAMP_IN3 is disabled. (value: 0)
     *          - B_0x1: Tamper detection on TAMP_IN3 is enabled. (value: 1)
     */
        /** @brief Tamper detection on TAMP_IN3 is disabled. */
    constexpr std::uint32_t TAMP_CR1_TAMP3E_B_0x0 = 0;
        /** @brief Tamper detection on TAMP_IN3 is enabled. */
    constexpr std::uint32_t TAMP_CR1_TAMP3E_B_0x1 = 1;

    /** @brief Internal tamper 1 enable: RTC power domain supply monitoring */
    using TAMP_CR1_ITAMP1E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Internal tamper 1 disabled. (value: 0)
     *          - B_0x1: Internal tamper 1 enabled: a tamper is generated when the RTC power domain supply is below or above thresholds. (value: 1)
     */
        /** @brief Internal tamper 1 disabled. */
    constexpr std::uint32_t TAMP_CR1_ITAMP1E_B_0x0 = 0;
        /** @brief Internal tamper 1 enabled: a tamper is generated when the RTC power domain supply is below or above thresholds. */
    constexpr std::uint32_t TAMP_CR1_ITAMP1E_B_0x1 = 1;

    /** @brief Internal tamper 2 enable: Temperature monitoring */
    using TAMP_CR1_ITAMP2E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Internal tamper 2 disabled. (value: 0)
     *          - B_0x1: Internal tamper 2 enabled: a tamper is generated when the temperature is below or above thresholds. (value: 1)
     */
        /** @brief Internal tamper 2 disabled. */
    constexpr std::uint32_t TAMP_CR1_ITAMP2E_B_0x0 = 0;
        /** @brief Internal tamper 2 enabled: a tamper is generated when the temperature is below or above thresholds. */
    constexpr std::uint32_t TAMP_CR1_ITAMP2E_B_0x1 = 1;

    /** @brief Internal tamper 3 enable: LSE monitoring */
    using TAMP_CR1_ITAMP3E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Internal tamper 3 disabled. (value: 0)
     *          - B_0x1: Internal tamper 3 enabled: a tamper is generated when the LSE frequency is below or above thresholds. (value: 1)
     */
        /** @brief Internal tamper 3 disabled. */
    constexpr std::uint32_t TAMP_CR1_ITAMP3E_B_0x0 = 0;
        /** @brief Internal tamper 3 enabled: a tamper is generated when the LSE frequency is below or above thresholds. */
    constexpr std::uint32_t TAMP_CR1_ITAMP3E_B_0x1 = 1;

    /** @brief Internal tamper 4 enable: HSE monitoring */
    using TAMP_CR1_ITAMP4E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Internal tamper 4 disabled. (value: 0)
     *          - B_0x1: Internal tamper 4 enabled. a tamper is generated when the HSE frequency is below or above thresholds. (value: 1)
     */
        /** @brief Internal tamper 4 disabled. */
    constexpr std::uint32_t TAMP_CR1_ITAMP4E_B_0x0 = 0;
        /** @brief Internal tamper 4 enabled. a tamper is generated when the HSE frequency is below or above thresholds. */
    constexpr std::uint32_t TAMP_CR1_ITAMP4E_B_0x1 = 1;

    /** @brief Internal tamper 5 enable: RTC calendar overflow */
    using TAMP_CR1_ITAMP5E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Internal tamper 5 disabled. (value: 0)
     *          - B_0x1: Internal tamper 5 enabled: a tamper is generated when the RTC calendar reaches its maximum value, on the 31st of December 99, at 23:59:59. The calendar is then frozen and cannot overflow. (value: 1)
     */
        /** @brief Internal tamper 5 disabled. */
    constexpr std::uint32_t TAMP_CR1_ITAMP5E_B_0x0 = 0;
        /** @brief Internal tamper 5 enabled: a tamper is generated when the RTC calendar reaches its maximum value, on the 31st of December 99, at 23:59:59. The calendar is then frozen and cannot overflow. */
    constexpr std::uint32_t TAMP_CR1_ITAMP5E_B_0x1 = 1;

    /** @brief Internal tamper 6 enable: ST manufacturer readout */
    using TAMP_CR1_ITAMP6E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Internal tamper 6 disabled. (value: 0)
     *          - B_0x1: Internal tamper 6 enabled: a tamper is generated in case of ST manufacturer readout. (value: 1)
     */
        /** @brief Internal tamper 6 disabled. */
    constexpr std::uint32_t TAMP_CR1_ITAMP6E_B_0x0 = 0;
        /** @brief Internal tamper 6 enabled: a tamper is generated in case of ST manufacturer readout. */
    constexpr std::uint32_t TAMP_CR1_ITAMP6E_B_0x1 = 1;

    /** @brief Internal tamper 8 enable: monotonic counter overflow */
    using TAMP_CR1_ITAMP8E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Internal tamper 8 disabled. (value: 0)
     *          - B_0x1: Internal tamper 8 enabled: a tamper is generated when the TAMP_CNT overflows. (value: 1)
     */
        /** @brief Internal tamper 8 disabled. */
    constexpr std::uint32_t TAMP_CR1_ITAMP8E_B_0x0 = 0;
        /** @brief Internal tamper 8 enabled: a tamper is generated when the TAMP_CNT overflows. */
    constexpr std::uint32_t TAMP_CR1_ITAMP8E_B_0x1 = 1;

    /** @brief TAMP control register 2 */
    using TAMP_CR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tamper 1 no erase */
    using TAMP_CR2_TAMP1NOER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tamper 1 event erases the backup registers. (value: 0)
     *          - B_0x1: Tamper 1 event does not erase the backup registers. (value: 1)
     */
        /** @brief Tamper 1 event erases the backup registers. */
    constexpr std::uint32_t TAMP_CR2_TAMP1NOER_B_0x0 = 0;
        /** @brief Tamper 1 event does not erase the backup registers. */
    constexpr std::uint32_t TAMP_CR2_TAMP1NOER_B_0x1 = 1;

    /** @brief Tamper 2 no erase */
    using TAMP_CR2_TAMP2NOER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tamper 2 event erases the backup registers. (value: 0)
     *          - B_0x1: Tamper 2 event does not erase the backup registers(1). (value: 1)
     */
        /** @brief Tamper 2 event erases the backup registers. */
    constexpr std::uint32_t TAMP_CR2_TAMP2NOER_B_0x0 = 0;
        /** @brief Tamper 2 event does not erase the backup registers(1). */
    constexpr std::uint32_t TAMP_CR2_TAMP2NOER_B_0x1 = 1;

    /** @brief Tamper 3 no erase */
    using TAMP_CR2_TAMP3NOER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tamper 3 event erases the backup registers. (value: 0)
     *          - B_0x1: Tamper 3 event does not erase the backup registers(1). (value: 1)
     */
        /** @brief Tamper 3 event erases the backup registers. */
    constexpr std::uint32_t TAMP_CR2_TAMP3NOER_B_0x0 = 0;
        /** @brief Tamper 3 event does not erase the backup registers(1). */
    constexpr std::uint32_t TAMP_CR2_TAMP3NOER_B_0x1 = 1;

    /** @brief Tamper 1 mask The tamper 1 interrupt must not be enabled when TAMP1MSK is set. */
    using TAMP_CR2_TAMP1MSK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tamper 1 event generates a trigger event and TAMP1F must be cleared by software to allow next tamper event detection. (value: 0)
     *          - B_0x1: Tamper 1 event generates a trigger event. TAMP1F is masked and internally cleared by hardware. The backup registers are not erased. (value: 1)
     */
        /** @brief Tamper 1 event generates a trigger event and TAMP1F must be cleared by software to allow next tamper event detection. */
    constexpr std::uint32_t TAMP_CR2_TAMP1MSK_B_0x0 = 0;
        /** @brief Tamper 1 event generates a trigger event. TAMP1F is masked and internally cleared by hardware. The backup registers are not erased. */
    constexpr std::uint32_t TAMP_CR2_TAMP1MSK_B_0x1 = 1;

    /** @brief Tamper 2 mask The tamper 2 interrupt must not be enabled when TAMP2MSK is set. */
    using TAMP_CR2_TAMP2MSK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tamper 2 event generates a trigger event and TAMP2F must be cleared by software to allow next tamper event detection. (value: 0)
     *          - B_0x1: Tamper 2 event generates a trigger event. TAMP2F is masked and internally cleared by hardware. The backup registers are not erased. (value: 1)
     */
        /** @brief Tamper 2 event generates a trigger event and TAMP2F must be cleared by software to allow next tamper event detection. */
    constexpr std::uint32_t TAMP_CR2_TAMP2MSK_B_0x0 = 0;
        /** @brief Tamper 2 event generates a trigger event. TAMP2F is masked and internally cleared by hardware. The backup registers are not erased. */
    constexpr std::uint32_t TAMP_CR2_TAMP2MSK_B_0x1 = 1;

    /** @brief Tamper 3 mask The tamper 3 interrupt must not be enabled when TAMP3MSK is set. */
    using TAMP_CR2_TAMP3MSK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tamper 3 event generates a trigger event and TAMP3F must be cleared by software to allow next tamper event detection. (value: 0)
     *          - B_0x1: Tamper 3 event generates a trigger event. TAMP3F is masked and internally cleared by hardware. The backup registers are not erased. (value: 1)
     */
        /** @brief Tamper 3 event generates a trigger event and TAMP3F must be cleared by software to allow next tamper event detection. */
    constexpr std::uint32_t TAMP_CR2_TAMP3MSK_B_0x0 = 0;
        /** @brief Tamper 3 event generates a trigger event. TAMP3F is masked and internally cleared by hardware. The backup registers are not erased. */
    constexpr std::uint32_t TAMP_CR2_TAMP3MSK_B_0x1 = 1;

    /** @brief Active level for tamper 1 input (active mode disabled) If TAMPFLT = 00 Tamper 1 input rising edge and high level triggers a tamper detection event. If TAMPFLT = 00 Tamper 1 input falling edge and low level triggers a tamper detection event. */
    using TAMP_CR2_TAMP1TRG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: If TAMPFLT different 00 Tamper 1 input staying low triggers a tamper detection event. (value: 0)
     *          - B_0x1: If TAMPFLT equal 00 Tamper 1 input staying high triggers a tamper detection event. (value: 1)
     */
        /** @brief If TAMPFLT different 00 Tamper 1 input staying low triggers a tamper detection event. */
    constexpr std::uint32_t TAMP_CR2_TAMP1TRG_B_0x0 = 0;
        /** @brief If TAMPFLT equal 00 Tamper 1 input staying high triggers a tamper detection event. */
    constexpr std::uint32_t TAMP_CR2_TAMP1TRG_B_0x1 = 1;

    /** @brief Active level for tamper 2 input (active mode disabled) If TAMPFLT = 00 Tamper 2 input rising edge and high level triggers a tamper detection event. If TAMPFLT = 00 Tamper 2 input falling edge and low level triggers a tamper detection event. */
    using TAMP_CR2_TAMP2TRG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: If TAMPFLT different 00 Tamper 2 input staying low triggers a tamper detection event. (value: 0)
     *          - B_0x1: If TAMPFLT different 00 Tamper 2 input staying high triggers a tamper detection event. (value: 1)
     */
        /** @brief If TAMPFLT different 00 Tamper 2 input staying low triggers a tamper detection event. */
    constexpr std::uint32_t TAMP_CR2_TAMP2TRG_B_0x0 = 0;
        /** @brief If TAMPFLT different 00 Tamper 2 input staying high triggers a tamper detection event. */
    constexpr std::uint32_t TAMP_CR2_TAMP2TRG_B_0x1 = 1;

    /** @brief Active level for tamper 3 input (active mode disabled) If TAMPFLT = 00 Tamper 3 input rising edge and high level triggers a tamper detection event. If TAMPFLT = 00 Tamper 3 input falling edge and low level triggers a tamper detection event. */
    using TAMP_CR2_TAMP3TRG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: If TAMPFLT different 00 Tamper 3 input staying low triggers a tamper detection event. (value: 0)
     *          - B_0x1: If TAMPFLT different 00 Tamper 3 input staying high triggers a tamper detection event. (value: 1)
     */
        /** @brief If TAMPFLT different 00 Tamper 3 input staying low triggers a tamper detection event. */
    constexpr std::uint32_t TAMP_CR2_TAMP3TRG_B_0x0 = 0;
        /** @brief If TAMPFLT different 00 Tamper 3 input staying high triggers a tamper detection event. */
    constexpr std::uint32_t TAMP_CR2_TAMP3TRG_B_0x1 = 1;

    /** @brief TAMP filter control register */
    using TAMP_FLTCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tamper sampling frequency Determines the frequency at which each of the TAMP_INx inputs are sampled. */
    using TAMP_FLTCR_TAMPFREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RTCCLK / 32768 (1 Hz when RTCCLK = 32768 Hz) (value: 0)
     *          - B_0x1: RTCCLK / 16384 (2 Hz when RTCCLK = 32768 Hz) (value: 1)
     *          - B_0x2: RTCCLK / 8192 (4 Hz when RTCCLK = 32768 Hz) (value: 2)
     *          - B_0x3: RTCCLK / 4096 (8 Hz when RTCCLK = 32768 Hz) (value: 3)
     *          - B_0x4: RTCCLK / 2048 (16 Hz when RTCCLK = 32768 Hz) (value: 4)
     *          - B_0x5: RTCCLK / 1024 (32 Hz when RTCCLK = 32768 Hz) (value: 5)
     *          - B_0x6: RTCCLK / 512 (64 Hz when RTCCLK = 32768 Hz) (value: 6)
     *          - B_0x7: RTCCLK / 256 (128 Hz when RTCCLK = 32768 Hz) (value: 7)
     */
        /** @brief RTCCLK / 32768 (1 Hz when RTCCLK = 32768 Hz) */
    constexpr std::uint32_t TAMP_FLTCR_TAMPFREQ_B_0x0 = 0;
        /** @brief RTCCLK / 16384 (2 Hz when RTCCLK = 32768 Hz) */
    constexpr std::uint32_t TAMP_FLTCR_TAMPFREQ_B_0x1 = 1;
        /** @brief RTCCLK / 8192 (4 Hz when RTCCLK = 32768 Hz) */
    constexpr std::uint32_t TAMP_FLTCR_TAMPFREQ_B_0x2 = 2;
        /** @brief RTCCLK / 4096 (8 Hz when RTCCLK = 32768 Hz) */
    constexpr std::uint32_t TAMP_FLTCR_TAMPFREQ_B_0x3 = 3;
        /** @brief RTCCLK / 2048 (16 Hz when RTCCLK = 32768 Hz) */
    constexpr std::uint32_t TAMP_FLTCR_TAMPFREQ_B_0x4 = 4;
        /** @brief RTCCLK / 1024 (32 Hz when RTCCLK = 32768 Hz) */
    constexpr std::uint32_t TAMP_FLTCR_TAMPFREQ_B_0x5 = 5;
        /** @brief RTCCLK / 512 (64 Hz when RTCCLK = 32768 Hz) */
    constexpr std::uint32_t TAMP_FLTCR_TAMPFREQ_B_0x6 = 6;
        /** @brief RTCCLK / 256 (128 Hz when RTCCLK = 32768 Hz) */
    constexpr std::uint32_t TAMP_FLTCR_TAMPFREQ_B_0x7 = 7;

    /** @brief TAMP_INx filter count These bits determines the number of consecutive samples at the specified level (TAMP*TRG) needed to activate a tamper event. TAMPFLT is valid for each of the TAMP_INx inputs. */
    using TAMP_FLTCR_TAMPFLT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tamper event is activated on edge of TAMP_INx input transitions to the active level (no internal pull-up on TAMP_INx input). (value: 0)
     *          - B_0x1: Tamper event is activated after 2 consecutive samples at the active level. (value: 1)
     *          - B_0x2: Tamper event is activated after 4 consecutive samples at the active level. (value: 2)
     *          - B_0x3: Tamper event is activated after 8 consecutive samples at the active level. (value: 3)
     */
        /** @brief Tamper event is activated on edge of TAMP_INx input transitions to the active level (no internal pull-up on TAMP_INx input). */
    constexpr std::uint32_t TAMP_FLTCR_TAMPFLT_B_0x0 = 0;
        /** @brief Tamper event is activated after 2 consecutive samples at the active level. */
    constexpr std::uint32_t TAMP_FLTCR_TAMPFLT_B_0x1 = 1;
        /** @brief Tamper event is activated after 4 consecutive samples at the active level. */
    constexpr std::uint32_t TAMP_FLTCR_TAMPFLT_B_0x2 = 2;
        /** @brief Tamper event is activated after 8 consecutive samples at the active level. */
    constexpr std::uint32_t TAMP_FLTCR_TAMPFLT_B_0x3 = 3;

    /** @brief TAMP_INx precharge duration These bit determines the duration of time during which the pull-up/is activated before each sample. TAMPPRCH is valid for each of the TAMP_INx inputs. */
    using TAMP_FLTCR_TAMPPRCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1 RTCCLK cycle (value: 0)
     *          - B_0x1: 2 RTCCLK cycles (value: 1)
     *          - B_0x2: 4 RTCCLK cycles (value: 2)
     *          - B_0x3: 8 RTCCLK cycles (value: 3)
     */
        /** @brief 1 RTCCLK cycle */
    constexpr std::uint32_t TAMP_FLTCR_TAMPPRCH_B_0x0 = 0;
        /** @brief 2 RTCCLK cycles */
    constexpr std::uint32_t TAMP_FLTCR_TAMPPRCH_B_0x1 = 1;
        /** @brief 4 RTCCLK cycles */
    constexpr std::uint32_t TAMP_FLTCR_TAMPPRCH_B_0x2 = 2;
        /** @brief 8 RTCCLK cycles */
    constexpr std::uint32_t TAMP_FLTCR_TAMPPRCH_B_0x3 = 3;

    /** @brief TAMP_INx pull-up disable This bit determines if each of the TAMPx pins are precharged before each sample. */
    using TAMP_FLTCR_TAMPPUDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Precharge TAMP_INx pins before sampling (enable internal pull-up) (value: 0)
     *          - B_0x1: Disable precharge of TAMP_INx pins. (value: 1)
     */
        /** @brief Precharge TAMP_INx pins before sampling (enable internal pull-up) */
    constexpr std::uint32_t TAMP_FLTCR_TAMPPUDIS_B_0x0 = 0;
        /** @brief Disable precharge of TAMP_INx pins. */
    constexpr std::uint32_t TAMP_FLTCR_TAMPPUDIS_B_0x1 = 1;

    /** @brief TAMP active tamper control register 1 */
    using TAMP_ATCR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tamper 1 active mode */
    using TAMP_ATCR1_TAMP1AM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tamper 1 detection mode is passive. (value: 0)
     *          - B_0x1: Tamper 1 detection mode is active. (value: 1)
     */
        /** @brief Tamper 1 detection mode is passive. */
    constexpr std::uint32_t TAMP_ATCR1_TAMP1AM_B_0x0 = 0;
        /** @brief Tamper 1 detection mode is active. */
    constexpr std::uint32_t TAMP_ATCR1_TAMP1AM_B_0x1 = 1;

    /** @brief Tamper 2 active mode */
    using TAMP_ATCR1_TAMP2AM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tamper 2 detection mode is passive. (value: 0)
     *          - B_0x1: Tamper 2 detection mode is active. (value: 1)
     */
        /** @brief Tamper 2 detection mode is passive. */
    constexpr std::uint32_t TAMP_ATCR1_TAMP2AM_B_0x0 = 0;
        /** @brief Tamper 2 detection mode is active. */
    constexpr std::uint32_t TAMP_ATCR1_TAMP2AM_B_0x1 = 1;

    /** @brief Tamper 3 active mode */
    using TAMP_ATCR1_TAMP3AM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tamper 3 detection mode is passive. (value: 0)
     *          - B_0x1: Tamper 3 detection mode is active. (value: 1)
     */
        /** @brief Tamper 3 detection mode is passive. */
    constexpr std::uint32_t TAMP_ATCR1_TAMP3AM_B_0x0 = 0;
        /** @brief Tamper 3 detection mode is active. */
    constexpr std::uint32_t TAMP_ATCR1_TAMP3AM_B_0x1 = 1;

    /** @brief Active tamper shared output 1 selection The selected output must be available in the package pinout */
    using TAMP_ATCR1_ATOSEL1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TAMPOUTSEL1 = TAMP_OUT1 (value: 0)
     *          - B_0x1: TAMPOUTSEL1 = TAMP_OUT2 (value: 1)
     *          - B_0x2: TAMPOUTSEL1 = TAMP_OUT3 (value: 2)
     */
        /** @brief TAMPOUTSEL1 = TAMP_OUT1 */
    constexpr std::uint32_t TAMP_ATCR1_ATOSEL1_B_0x0 = 0;
        /** @brief TAMPOUTSEL1 = TAMP_OUT2 */
    constexpr std::uint32_t TAMP_ATCR1_ATOSEL1_B_0x1 = 1;
        /** @brief TAMPOUTSEL1 = TAMP_OUT3 */
    constexpr std::uint32_t TAMP_ATCR1_ATOSEL1_B_0x2 = 2;

    /** @brief Active tamper shared output 2 selection The selected output must be available in the package pinout */
    using TAMP_ATCR1_ATOSEL2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TAMPOUTSEL2 = TAMP_OUT1 (value: 0)
     *          - B_0x1: TAMPOUTSEL2 = TAMP_OUT2 (value: 1)
     *          - B_0x2: TAMPOUTSEL2 = TAMP_OUT3 (value: 2)
     */
        /** @brief TAMPOUTSEL2 = TAMP_OUT1 */
    constexpr std::uint32_t TAMP_ATCR1_ATOSEL2_B_0x0 = 0;
        /** @brief TAMPOUTSEL2 = TAMP_OUT2 */
    constexpr std::uint32_t TAMP_ATCR1_ATOSEL2_B_0x1 = 1;
        /** @brief TAMPOUTSEL2 = TAMP_OUT3 */
    constexpr std::uint32_t TAMP_ATCR1_ATOSEL2_B_0x2 = 2;

    /** @brief Active tamper shared output 3 selection The selected output must be available in the package pinout */
    using TAMP_ATCR1_ATOSEL3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TAMPOUTSEL3 = TAMP_OUT1 (value: 0)
     *          - B_0x1: TAMPOUTSEL3 = TAMP_OUT2 (value: 1)
     *          - B_0x2: TAMPOUTSEL3 = TAMP_OUT3 (value: 2)
     */
        /** @brief TAMPOUTSEL3 = TAMP_OUT1 */
    constexpr std::uint32_t TAMP_ATCR1_ATOSEL3_B_0x0 = 0;
        /** @brief TAMPOUTSEL3 = TAMP_OUT2 */
    constexpr std::uint32_t TAMP_ATCR1_ATOSEL3_B_0x1 = 1;
        /** @brief TAMPOUTSEL3 = TAMP_OUT3 */
    constexpr std::uint32_t TAMP_ATCR1_ATOSEL3_B_0x2 = 2;

    /** @brief Active tamper RTC asynchronous prescaler clock selection These bits selects the RTC asynchronous prescaler stage output.The selected clock is CK_ATPRE. fCK_ATPRE = fRTCCLK / 2ATCKSEL when (PREDIV_A+1) = 128. ... Note: These bits can be written only when all active tampers are disabled. The write protection remains for up to 1.5 ck_atpre cycles after all the active tampers are disable. */
    using TAMP_ATCR1_ATCKSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RTCCLK is selected (value: 0)
     *          - B_0x1: RTCCLK/2 is selected when (PREDIV_A+1) = 128 (actually selects 1st flip flop output) (value: 1)
     *          - B_0x2: RTCCLK/4 is selected when (PREDIV_A+1) = 128 (actually selects 2nd flip flop output) (value: 2)
     *          - B_0x7: RTCCLK/128 is selected when (PREDIV_A+1) = 128 (actually selects 7th flip flop output) (value: 7)
     */
        /** @brief RTCCLK is selected */
    constexpr std::uint32_t TAMP_ATCR1_ATCKSEL_B_0x0 = 0;
        /** @brief RTCCLK/2 is selected when (PREDIV_A+1) = 128 (actually selects 1st flip flop output) */
    constexpr std::uint32_t TAMP_ATCR1_ATCKSEL_B_0x1 = 1;
        /** @brief RTCCLK/4 is selected when (PREDIV_A+1) = 128 (actually selects 2nd flip flop output) */
    constexpr std::uint32_t TAMP_ATCR1_ATCKSEL_B_0x2 = 2;
        /** @brief RTCCLK/128 is selected when (PREDIV_A+1) = 128 (actually selects 7th flip flop output) */
    constexpr std::uint32_t TAMP_ATCR1_ATCKSEL_B_0x7 = 7;

    /** @brief Active tamper output change period The tamper output is changed every CK_ATPER = (2ATPER x CK_ATPRE) cycles. Refer to . */
    using TAMP_ATCR1_ATPER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Active tamper output sharing */
    using TAMP_ATCR1_ATOSHARE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Each active tamper input TAMP_INi is compared with its dedicated output TAMP_OUTi (value: 0)
     *          - B_0x1: Each active tamper input TAMP_INi is compared with TAMPOUTSELx as defined below, with TAMPOUTSELx defined by ATOSELx bits. (value: 1)
     */
        /** @brief Each active tamper input TAMP_INi is compared with its dedicated output TAMP_OUTi */
    constexpr std::uint32_t TAMP_ATCR1_ATOSHARE_B_0x0 = 0;
        /** @brief Each active tamper input TAMP_INi is compared with TAMPOUTSELx as defined below, with TAMPOUTSELx defined by ATOSELx bits. */
    constexpr std::uint32_t TAMP_ATCR1_ATOSHARE_B_0x1 = 1;

    /** @brief Active tamper filter enable */
    using TAMP_ATCR1_FLTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Active tamper filtering disable (value: 0)
     *          - B_0x1: Active tamper filtering enable: a tamper event is detected when 2 comparison mismatches occur out of 4 consecutive samples. (value: 1)
     */
        /** @brief Active tamper filtering disable */
    constexpr std::uint32_t TAMP_ATCR1_FLTEN_B_0x0 = 0;
        /** @brief Active tamper filtering enable: a tamper event is detected when 2 comparison mismatches occur out of 4 consecutive samples. */
    constexpr std::uint32_t TAMP_ATCR1_FLTEN_B_0x1 = 1;

    /** @brief TAMP active tamper seed register */
    using TAMP_ATSEEDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Pseudo-random generator seed value This register must be written four times with 32-bit values to provide the 128-bit seed to the PRNG. Writing to this register automatically sends the seed value to the PRNG. */
    using TAMP_ATSEEDR_SEED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP active tamper output register */
    using TAMP_ATOR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Pseudo-random generator value This field provides the values of the PRNG output. Because of potential inconsistencies due to synchronization delays, PRNG must be read at least twice. The read value is correct if it is equal to previous read value. */
    using TAMP_ATOR_PRNG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Seed running flag This flag is set by hardware when a new seed is written in the TAMP_ATSEEDR. It is cleared by hardware when the PRNG has absorbed this new seed, and by system reset. The TAMP APB cock must not be switched off as long as SEEDF is set. */
    using TAMP_ATOR_SEEDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Active tamper initialization status This flag is set by hardware when the PRNG has absorbed the first 128-bit seed, meaning that the enabled active tampers are functional. This flag is left unchanged when the active tampers are disabled. */
    using TAMP_ATOR_INITS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP interrupt enable register */
    using TAMP_IER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tamper 1 interrupt enable */
    using TAMP_IER_TAMP1IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tamper 1 interrupt disabled. (value: 0)
     *          - B_0x1: Tamper 1 interrupt enabled. (value: 1)
     */
        /** @brief Tamper 1 interrupt disabled. */
    constexpr std::uint32_t TAMP_IER_TAMP1IE_B_0x0 = 0;
        /** @brief Tamper 1 interrupt enabled. */
    constexpr std::uint32_t TAMP_IER_TAMP1IE_B_0x1 = 1;

    /** @brief Tamper 2 interrupt enable */
    using TAMP_IER_TAMP2IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tamper 2 interrupt disabled. (value: 0)
     *          - B_0x1: Tamper 2 interrupt enabled. (value: 1)
     */
        /** @brief Tamper 2 interrupt disabled. */
    constexpr std::uint32_t TAMP_IER_TAMP2IE_B_0x0 = 0;
        /** @brief Tamper 2 interrupt enabled. */
    constexpr std::uint32_t TAMP_IER_TAMP2IE_B_0x1 = 1;

    /** @brief Tamper 3 interrupt enable */
    using TAMP_IER_TAMP3IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tamper 3 interrupt disabled. (value: 0)
     *          - B_0x1: Tamper 3 interrupt enabled.. (value: 1)
     */
        /** @brief Tamper 3 interrupt disabled. */
    constexpr std::uint32_t TAMP_IER_TAMP3IE_B_0x0 = 0;
        /** @brief Tamper 3 interrupt enabled.. */
    constexpr std::uint32_t TAMP_IER_TAMP3IE_B_0x1 = 1;

    /** @brief Internal tamper 1 interrupt enable: RTC power domain supply monitoring */
    using TAMP_IER_ITAMP1IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Internal tamper 1 interrupt disabled. (value: 0)
     *          - B_0x1: Internal tamper 1 interrupt enabled (value: 1)
     */
        /** @brief Internal tamper 1 interrupt disabled. */
    constexpr std::uint32_t TAMP_IER_ITAMP1IE_B_0x0 = 0;
        /** @brief Internal tamper 1 interrupt enabled */
    constexpr std::uint32_t TAMP_IER_ITAMP1IE_B_0x1 = 1;

    /** @brief Internal tamper 2 interrupt enable: Temperature monitoring */
    using TAMP_IER_ITAMP2IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Internal tamper 2 interrupt disabled. (value: 0)
     *          - B_0x1: Internal tamper 2 interrupt enabled. (value: 1)
     */
        /** @brief Internal tamper 2 interrupt disabled. */
    constexpr std::uint32_t TAMP_IER_ITAMP2IE_B_0x0 = 0;
        /** @brief Internal tamper 2 interrupt enabled. */
    constexpr std::uint32_t TAMP_IER_ITAMP2IE_B_0x1 = 1;

    /** @brief Internal tamper 3 interrupt enable: LSE monitoring */
    using TAMP_IER_ITAMP3IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Internal tamper 3 interrupt disabled. (value: 0)
     *          - B_0x1: Internal tamper 3 interrupt enabled. (value: 1)
     */
        /** @brief Internal tamper 3 interrupt disabled. */
    constexpr std::uint32_t TAMP_IER_ITAMP3IE_B_0x0 = 0;
        /** @brief Internal tamper 3 interrupt enabled. */
    constexpr std::uint32_t TAMP_IER_ITAMP3IE_B_0x1 = 1;

    /** @brief Internal tamper 4 interrupt enable: HSE monitoring */
    using TAMP_IER_ITAMP4IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Internal tamper 4 interrupt disabled. (value: 0)
     *          - B_0x1: Internal tamper 4 interrupt enabled. (value: 1)
     */
        /** @brief Internal tamper 4 interrupt disabled. */
    constexpr std::uint32_t TAMP_IER_ITAMP4IE_B_0x0 = 0;
        /** @brief Internal tamper 4 interrupt enabled. */
    constexpr std::uint32_t TAMP_IER_ITAMP4IE_B_0x1 = 1;

    /** @brief Internal tamper 5 interrupt enable: RTC calendar overflow */
    using TAMP_IER_ITAMP5IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Internal tamper 5 interrupt disabled. (value: 0)
     *          - B_0x1: Internal tamper 5 interrupt enabled. (value: 1)
     */
        /** @brief Internal tamper 5 interrupt disabled. */
    constexpr std::uint32_t TAMP_IER_ITAMP5IE_B_0x0 = 0;
        /** @brief Internal tamper 5 interrupt enabled. */
    constexpr std::uint32_t TAMP_IER_ITAMP5IE_B_0x1 = 1;

    /** @brief Internal tamper 6 interrupt enable: ST manufacturer readout */
    using TAMP_IER_ITAMP6IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Internal tamper 6 interrupt disabled. (value: 0)
     *          - B_0x1: Internal tamper 6 interrupt enabled. (value: 1)
     */
        /** @brief Internal tamper 6 interrupt disabled. */
    constexpr std::uint32_t TAMP_IER_ITAMP6IE_B_0x0 = 0;
        /** @brief Internal tamper 6 interrupt enabled. */
    constexpr std::uint32_t TAMP_IER_ITAMP6IE_B_0x1 = 1;

    /** @brief Internal tamper 8 interrupt enable: monotonic counter overflow */
    using TAMP_IER_ITAMP8IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Internal tamper 8 interrupt disabled. (value: 0)
     *          - B_0x1: Internal tamper 8 interrupt enabled. (value: 1)
     */
        /** @brief Internal tamper 8 interrupt disabled. */
    constexpr std::uint32_t TAMP_IER_ITAMP8IE_B_0x0 = 0;
        /** @brief Internal tamper 8 interrupt enabled. */
    constexpr std::uint32_t TAMP_IER_ITAMP8IE_B_0x1 = 1;

    /** @brief TAMP status register */
    using TAMP_SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP1 detection flag This flag is set by hardware when a tamper detection event is detected on the TAMP1 input. */
    using TAMP_SR_TAMP1F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP2 detection flag This flag is set by hardware when a tamper detection event is detected on the TAMP2 input. */
    using TAMP_SR_TAMP2F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP3 detection flag This flag is set by hardware when a tamper detection event is detected on the TAMP3 input. */
    using TAMP_SR_TAMP3F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RTC power domain voltage monitoring tamper detection flag This flag is set by hardware when a tamper detection event is detected on the internal tamper 1. */
    using TAMP_SR_ITAMP1F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Temperature monitoring tamper detection flag This flag is set by hardware when a tamper detection event is detected on the internal tamper 2. */
    using TAMP_SR_ITAMP2F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSE monitoring tamper detection flag This flag is set by hardware when a tamper detection event is detected on the internal tamper 3. */
    using TAMP_SR_ITAMP3F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSE monitoring tamper detection flag This flag is set by hardware when a tamper detection event is detected on the internal tamper 4. */
    using TAMP_SR_ITAMP4F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RTC calendar overflow tamper detection flag This flag is set by hardware when a tamper detection event is detected on the internal tamper 5. */
    using TAMP_SR_ITAMP5F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ST manufacturer readout tamper detection flag This flag is set by hardware when a tamper detection event is detected on the internal tamper 6. */
    using TAMP_SR_ITAMP6F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Monotonic counter overflow tamper flag This flag is set by hardware when a tamper detection event is detected on the internal tamper 8. */
    using TAMP_SR_ITAMP8F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP masked interrupt status register */
    using TAMP_MISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP1 interrupt masked flag This flag is set by hardware when the tamper 1 interrupt is raised. */
    using TAMP_MISR_TAMP1MF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP2 interrupt masked flag This flag is set by hardware when the tamper 2 interrupt is raised. */
    using TAMP_MISR_TAMP2MF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP3 interrupt masked flag This flag is set by hardware when the tamper 3 interrupt is raised. */
    using TAMP_MISR_TAMP3MF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RTC power domain voltage monitoring tamper interrupt masked flag This flag is set by hardware when the internal tamper 1 interrupt is raised. */
    using TAMP_MISR_ITAMP1MF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Temperature monitoring tamper interrupt masked flag This flag is set by hardware when the internal tamper 2 interrupt is raised. */
    using TAMP_MISR_ITAMP2MF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSE monitoring tamper interrupt masked flag This flag is set by hardware when the internal tamper 3 interrupt is raised. */
    using TAMP_MISR_ITAMP3MF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSE monitoring tamper interrupt masked flag This flag is set by hardware when the internal tamper 4 interrupt is raised. */
    using TAMP_MISR_ITAMP4MF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RTC calendar overflow tamper interrupt masked flag This flag is set by hardware when the internal tamper 5 interrupt is raised. */
    using TAMP_MISR_ITAMP5MF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ST manufacturer readout tamper interrupt masked flag This flag is set by hardware when the internal tamper 6 interrupt is raised. */
    using TAMP_MISR_ITAMP6MF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Monotonic counter overflow interrupt masked flag This flag is set by hardware when the internal tamper 8 interrupt is raised. */
    using TAMP_MISR_ITAMP8MF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP status clear register */
    using TAMP_SCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear TAMP1 detection flag Writing 1 in this bit clears the TAMP1F bit in the TAMP_SR register. */
    using TAMP_SCR_CTAMP1F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear TAMP2 detection flag Writing 1 in this bit clears the TAMP2F bit in the TAMP_SR register. */
    using TAMP_SCR_CTAMP2F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear TAMP3 detection flag Writing 1 in this bit clears the TAMP3F bit in the TAMP_SR register. */
    using TAMP_SCR_CTAMP3F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear ITAMP1 detection flag Writing 1 in this bit clears the ITAMP1F bit in the TAMP_SR register. */
    using TAMP_SCR_CITAMP1F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear ITAMP2 detection flag Writing 1 in this bit clears the ITAMP2F bit in the TAMP_SR register. */
    using TAMP_SCR_CITAMP2F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear ITAMP3 detection flag Writing 1 in this bit clears the ITAMP3F bit in the TAMP_SR register. */
    using TAMP_SCR_CITAMP3F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear ITAMP4 detection flag Writing 1 in this bit clears the ITAMP4F bit in the TAMP_SR register. */
    using TAMP_SCR_CITAMP4F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear ITAMP5 detection flag Writing 1 in this bit clears the ITAMP5F bit in the TAMP_SR register. */
    using TAMP_SCR_CITAMP5F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear ITAMP6 detection flag Writing 1 in this bit clears the ITAMP6F bit in the TAMP_SR register. */
    using TAMP_SCR_CITAMP6F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear ITAMP8 detection flag Writing 1 in this bit clears the ITAMP8F bit in the TAMP_SR register. */
    using TAMP_SCR_CITAMP8F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP monotonic counter register */
    using TAMP_COUNTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This register is read-only only and is incremented by one when a write access is done to this register. This register cannot roll-over and is frozen when reaching the maximum value. */
    using TAMP_COUNTR_COUNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP configuration register */
    using TAMP_CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP_OUT3 mapping */
    using TAMP_CFGR_OUT3_RMP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TAMP_OUT3 is mapped on PI8 (value: 0)
     *          - B_0x1: TAMP_OUT3 is mapped on PC13 (value: 1)
     */
        /** @brief TAMP_OUT3 is mapped on PI8 */
    constexpr std::uint32_t TAMP_CFGR_OUT3_RMP_B_0x0 = 0;
        /** @brief TAMP_OUT3 is mapped on PC13 */
    constexpr std::uint32_t TAMP_CFGR_OUT3_RMP_B_0x1 = 1;

    /** @brief TAMP backup 0 register */
    using TAMP_BKP0R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x100, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. They are powered-on by VBAT when VDD is switched off, so that they are not reset by System reset, and their contents remain valid when the device operates in low-power mode. In the default configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled. */
    using TAMP_BKP0R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 1 register */
    using TAMP_BKP1R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x104, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. They are powered-on by VBAT when VDD is switched off, so that they are not reset by System reset, and their contents remain valid when the device operates in low-power mode. In the default configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled. */
    using TAMP_BKP1R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 2 register */
    using TAMP_BKP2R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x108, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. They are powered-on by VBAT when VDD is switched off, so that they are not reset by System reset, and their contents remain valid when the device operates in low-power mode. In the default configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled. */
    using TAMP_BKP2R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 3 register */
    using TAMP_BKP3R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. They are powered-on by VBAT when VDD is switched off, so that they are not reset by System reset, and their contents remain valid when the device operates in low-power mode. In the default configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled. */
    using TAMP_BKP3R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 4 register */
    using TAMP_BKP4R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x110, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. They are powered-on by VBAT when VDD is switched off, so that they are not reset by System reset, and their contents remain valid when the device operates in low-power mode. In the default configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled. */
    using TAMP_BKP4R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 5 register */
    using TAMP_BKP5R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x114, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. They are powered-on by VBAT when VDD is switched off, so that they are not reset by System reset, and their contents remain valid when the device operates in low-power mode. In the default configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled. */
    using TAMP_BKP5R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 6 register */
    using TAMP_BKP6R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x118, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. They are powered-on by VBAT when VDD is switched off, so that they are not reset by System reset, and their contents remain valid when the device operates in low-power mode. In the default configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled. */
    using TAMP_BKP6R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 7 register */
    using TAMP_BKP7R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x11C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. They are powered-on by VBAT when VDD is switched off, so that they are not reset by System reset, and their contents remain valid when the device operates in low-power mode. In the default configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled. */
    using TAMP_BKP7R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 8 register */
    using TAMP_BKP8R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x120, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. They are powered-on by VBAT when VDD is switched off, so that they are not reset by System reset, and their contents remain valid when the device operates in low-power mode. In the default configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled. */
    using TAMP_BKP8R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 9 register */
    using TAMP_BKP9R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x124, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. They are powered-on by VBAT when VDD is switched off, so that they are not reset by System reset, and their contents remain valid when the device operates in low-power mode. In the default configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled. */
    using TAMP_BKP9R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 10 register */
    using TAMP_BKP10R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x128, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. They are powered-on by VBAT when VDD is switched off, so that they are not reset by System reset, and their contents remain valid when the device operates in low-power mode. In the default configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled. */
    using TAMP_BKP10R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 11 register */
    using TAMP_BKP11R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x12C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. They are powered-on by VBAT when VDD is switched off, so that they are not reset by System reset, and their contents remain valid when the device operates in low-power mode. In the default configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled. */
    using TAMP_BKP11R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 12 register */
    using TAMP_BKP12R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x130, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. They are powered-on by VBAT when VDD is switched off, so that they are not reset by System reset, and their contents remain valid when the device operates in low-power mode. In the default configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled. */
    using TAMP_BKP12R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 13 register */
    using TAMP_BKP13R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x134, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. They are powered-on by VBAT when VDD is switched off, so that they are not reset by System reset, and their contents remain valid when the device operates in low-power mode. In the default configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled. */
    using TAMP_BKP13R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 14 register */
    using TAMP_BKP14R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x138, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. They are powered-on by VBAT when VDD is switched off, so that they are not reset by System reset, and their contents remain valid when the device operates in low-power mode. In the default configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled. */
    using TAMP_BKP14R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 15 register */
    using TAMP_BKP15R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x13C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. They are powered-on by VBAT when VDD is switched off, so that they are not reset by System reset, and their contents remain valid when the device operates in low-power mode. In the default configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled. */
    using TAMP_BKP15R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 16 register */
    using TAMP_BKP16R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x140, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. They are powered-on by VBAT when VDD is switched off, so that they are not reset by System reset, and their contents remain valid when the device operates in low-power mode. In the default configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled. */
    using TAMP_BKP16R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 17 register */
    using TAMP_BKP17R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x144, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. They are powered-on by VBAT when VDD is switched off, so that they are not reset by System reset, and their contents remain valid when the device operates in low-power mode. In the default configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled. */
    using TAMP_BKP17R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 18 register */
    using TAMP_BKP18R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x148, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. They are powered-on by VBAT when VDD is switched off, so that they are not reset by System reset, and their contents remain valid when the device operates in low-power mode. In the default configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled. */
    using TAMP_BKP18R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 19 register */
    using TAMP_BKP19R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. They are powered-on by VBAT when VDD is switched off, so that they are not reset by System reset, and their contents remain valid when the device operates in low-power mode. In the default configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled. */
    using TAMP_BKP19R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 20 register */
    using TAMP_BKP20R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x150, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. They are powered-on by VBAT when VDD is switched off, so that they are not reset by System reset, and their contents remain valid when the device operates in low-power mode. In the default configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled. */
    using TAMP_BKP20R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 21 register */
    using TAMP_BKP21R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x154, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. They are powered-on by VBAT when VDD is switched off, so that they are not reset by System reset, and their contents remain valid when the device operates in low-power mode. In the default configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled. */
    using TAMP_BKP21R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 22 register */
    using TAMP_BKP22R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x158, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. They are powered-on by VBAT when VDD is switched off, so that they are not reset by System reset, and their contents remain valid when the device operates in low-power mode. In the default configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled. */
    using TAMP_BKP22R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 23 register */
    using TAMP_BKP23R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x15C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. They are powered-on by VBAT when VDD is switched off, so that they are not reset by System reset, and their contents remain valid when the device operates in low-power mode. In the default configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled. */
    using TAMP_BKP23R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 24 register */
    using TAMP_BKP24R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x160, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. They are powered-on by VBAT when VDD is switched off, so that they are not reset by System reset, and their contents remain valid when the device operates in low-power mode. In the default configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled. */
    using TAMP_BKP24R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 25 register */
    using TAMP_BKP25R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x164, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. They are powered-on by VBAT when VDD is switched off, so that they are not reset by System reset, and their contents remain valid when the device operates in low-power mode. In the default configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled. */
    using TAMP_BKP25R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 26 register */
    using TAMP_BKP26R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x168, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. They are powered-on by VBAT when VDD is switched off, so that they are not reset by System reset, and their contents remain valid when the device operates in low-power mode. In the default configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled. */
    using TAMP_BKP26R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 27 register */
    using TAMP_BKP27R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x16C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. They are powered-on by VBAT when VDD is switched off, so that they are not reset by System reset, and their contents remain valid when the device operates in low-power mode. In the default configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled. */
    using TAMP_BKP27R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 28 register */
    using TAMP_BKP28R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x170, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. They are powered-on by VBAT when VDD is switched off, so that they are not reset by System reset, and their contents remain valid when the device operates in low-power mode. In the default configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled. */
    using TAMP_BKP28R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 29 register */
    using TAMP_BKP29R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x174, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. They are powered-on by VBAT when VDD is switched off, so that they are not reset by System reset, and their contents remain valid when the device operates in low-power mode. In the default configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled. */
    using TAMP_BKP29R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 30 register */
    using TAMP_BKP30R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x178, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. They are powered-on by VBAT when VDD is switched off, so that they are not reset by System reset, and their contents remain valid when the device operates in low-power mode. In the default configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled. */
    using TAMP_BKP30R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP backup 31 register */
    using TAMP_BKP31R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x17C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. They are powered-on by VBAT when VDD is switched off, so that they are not reset by System reset, and their contents remain valid when the device operates in low-power mode. In the default configuration this register is reset on a tamper detection event. It is forced to reset value as long as there is at least one internal or external tamper flag being set. This register is also reset when the readout protection (RDP) is disabled. */
    using TAMP_BKP31R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
