/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32G0B1_TAMP_HPP
#define EMBEDDED_PP_STM32G0B1_TAMP_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Tamper and backup registers */
namespace STM32G0B1::TAMP {

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
     *          - B_0x1: Tamper 2 event does not erase the backup registers. (value: 1)
     */
        /** @brief Tamper 2 event erases the backup registers. */
    constexpr std::uint32_t TAMP_CR2_TAMP2NOER_B_0x0 = 0;
        /** @brief Tamper 2 event does not erase the backup registers. */
    constexpr std::uint32_t TAMP_CR2_TAMP2NOER_B_0x1 = 1;

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

    /** @brief Active level for tamper 1 input (active mode disabled) If TAMPFLT = 00 Tamper 1 input rising edge and high level triggers a tamper detection event. If TAMPFLT = 00 Tamper 1 input falling edge and low level triggers a tamper detection event. */
    using TAMP_CR2_TAMP1TRG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: If TAMPFLT diferent 00 Tamper 1 input staying low triggers a tamper detection event. (value: 0)
     *          - B_0x1: If TAMPFLT = 00 Tamper 1 input staying high triggers a tamper detection event. (value: 1)
     */
        /** @brief If TAMPFLT diferent 00 Tamper 1 input staying low triggers a tamper detection event. */
    constexpr std::uint32_t TAMP_CR2_TAMP1TRG_B_0x0 = 0;
        /** @brief If TAMPFLT = 00 Tamper 1 input staying high triggers a tamper detection event. */
    constexpr std::uint32_t TAMP_CR2_TAMP1TRG_B_0x1 = 1;

    /** @brief Active level for tamper 2 input (active mode disabled) If TAMPFLT = 00 Tamper 2 input rising edge and high level triggers a tamper detection event. If TAMPFLT = 00 Tamper 2 input falling edge and low level triggers a tamper detection event. */
    using TAMP_CR2_TAMP2TRG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: If TAMPFLT diferent 00 Tamper 2 input staying low triggers a tamper detection event. (value: 0)
     *          - B_0x1: If TAMPFLT = 00 Tamper 2 input staying high triggers a tamper detection event. (value: 1)
     */
        /** @brief If TAMPFLT diferent 00 Tamper 2 input staying low triggers a tamper detection event. */
    constexpr std::uint32_t TAMP_CR2_TAMP2TRG_B_0x0 = 0;
        /** @brief If TAMPFLT = 00 Tamper 2 input staying high triggers a tamper detection event. */
    constexpr std::uint32_t TAMP_CR2_TAMP2TRG_B_0x1 = 1;

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

    /** @brief TAMP status register */
    using TAMP_SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP1 detection flag This flag is set by hardware when a tamper detection event is detected on the TAMP1 input. */
    using TAMP_SR_TAMP1F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP2 detection flag This flag is set by hardware when a tamper detection event is detected on the TAMP2 input. */
    using TAMP_SR_TAMP2F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSE monitoring tamper detection flag This flag is set by hardware when a tamper detection event is detected on the internal tamper 3. */
    using TAMP_SR_ITAMP3F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSE monitoring tamper detection flag This flag is set by hardware when a tamper detection event is detected on the internal tamper 4. */
    using TAMP_SR_ITAMP4F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RTC calendar overflow tamper detection flag This flag is set by hardware when a tamper detection event is detected on the internal tamper 5. */
    using TAMP_SR_ITAMP5F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ST manufacturer readout tamper detection flag This flag is set by hardware when a tamper detection event is detected on the internal tamper 6. */
    using TAMP_SR_ITAMP6F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP masked interrupt status register */
    using TAMP_MISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP1 interrupt masked flag This flag is set by hardware when the tamper 1 interrupt is raised. */
    using TAMP_MISR_TAMP1MF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP2 interrupt masked flag This flag is set by hardware when the tamper 2 interrupt is raised. */
    using TAMP_MISR_TAMP2MF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSE monitoring tamper interrupt masked flag This flag is set by hardware when the internal tamper 3 interrupt is raised. */
    using TAMP_MISR_ITAMP3MF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HSE monitoring tamper interrupt masked flag This flag is set by hardware when the internal tamper 4 interrupt is raised. */
    using TAMP_MISR_ITAMP4MF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RTC calendar overflow tamper interrupt masked flag This flag is set by hardware when the internal tamper 5 interrupt is raised. */
    using TAMP_MISR_ITAMP5MF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ST manufacturer readout tamper interrupt masked flag This flag is set by hardware when the internal tamper 6 interrupt is raised. */
    using TAMP_MISR_ITAMP6MF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TAMP status clear register */
    using TAMP_SCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear TAMP1 detection flag Writing 1 in this bit clears the TAMP1F bit in the TAMP_SR register. */
    using TAMP_SCR_CTAMP1F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear TAMP2 detection flag Writing 1 in this bit clears the TAMP2F bit in the TAMP_SR register. */
    using TAMP_SCR_CTAMP2F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear ITAMP3 detection flag Writing 1 in this bit clears the ITAMP3F bit in the TAMP_SR register. */
    using TAMP_SCR_CITAMP3F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear ITAMP4 detection flag Writing 1 in this bit clears the ITAMP4F bit in the TAMP_SR register. */
    using TAMP_SCR_CITAMP4F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear ITAMP5 detection flag Writing 1 in this bit clears the ITAMP5F bit in the TAMP_SR register. */
    using TAMP_SCR_CITAMP5F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear ITAMP6 detection flag Writing 1 in this bit clears the ITAMP6F bit in the TAMP_SR register. */
    using TAMP_SCR_CITAMP6F = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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
}

#endif
