/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32G070_RTC_HPP
#define EMBEDDED_PP_STM32G070_RTC_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Real-time clock */
namespace STM32G070::RTC {

    /** @brief RTC time register */
    using RTC_TR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Second units in BCD format */
    using RTC_TR_SU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Second tens in BCD format */
    using RTC_TR_ST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Minute units in BCD format */
    using RTC_TR_MNU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Minute tens in BCD format */
    using RTC_TR_MNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hour units in BCD format */
    using RTC_TR_HU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hour tens in BCD format */
    using RTC_TR_HT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AM/PM notation */
    using RTC_TR_PM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AM or 24-hour format (value: 0)
     *          - B_0x1: PM (value: 1)
     */
        /** @brief AM or 24-hour format */
    constexpr std::uint32_t RTC_TR_PM_B_0x0 = 0;
        /** @brief PM */
    constexpr std::uint32_t RTC_TR_PM_B_0x1 = 1;

    /** @brief RTC date register */
    using RTC_DR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Date units in BCD format */
    using RTC_DR_DU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Date tens in BCD format */
    using RTC_DR_DT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Month units in BCD format */
    using RTC_DR_MU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Month tens in BCD format */
    using RTC_DR_MT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Week day units ... */
    using RTC_DR_WDU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: forbidden (value: 0)
     *          - B_0x1: Monday (value: 1)
     *          - B_0x7: Sunday (value: 7)
     */
        /** @brief forbidden */
    constexpr std::uint32_t RTC_DR_WDU_B_0x0 = 0;
        /** @brief Monday */
    constexpr std::uint32_t RTC_DR_WDU_B_0x1 = 1;
        /** @brief Sunday */
    constexpr std::uint32_t RTC_DR_WDU_B_0x7 = 7;

    /** @brief Year units in BCD format */
    using RTC_DR_YU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Year tens in BCD format */
    using RTC_DR_YT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RTC sub second register */
    using RTC_SSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sub second value SS[15:0] is the value in the synchronous prescaler counter. The fraction of a second is given by the formula below: Second fraction = (PREDIV_S - SS) / (PREDIV_S + 1) Note: SS can be larger than PREDIV_S only after a shift operation. In that case, the correct time/date is one second less than as indicated by RTC_TR/RTC_DR. */
    using RTC_SSR_SS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RTC initialization control and status register */
    using RTC_ICSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alarm A write flag This bit is set by hardware when alarm A values can be changed, after the ALRAE bit has been set to 0 in RTC_CR. It is cleared by hardware in initialization mode. */
    using RTC_ICSR_ALRAWF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Alarm A update not allowed (value: 0)
     *          - B_0x1: Alarm A update allowed (value: 1)
     */
        /** @brief Alarm A update not allowed */
    constexpr std::uint32_t RTC_ICSR_ALRAWF_B_0x0 = 0;
        /** @brief Alarm A update allowed */
    constexpr std::uint32_t RTC_ICSR_ALRAWF_B_0x1 = 1;

    /** @brief Alarm B write flag This bit is set by hardware when alarm B values can be changed, after the ALRBE bit has been set to 0 in RTC_CR. It is cleared by hardware in initialization mode. */
    using RTC_ICSR_ALRBWF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Alarm B update not allowed (value: 0)
     *          - B_0x1: Alarm B update allowed (value: 1)
     */
        /** @brief Alarm B update not allowed */
    constexpr std::uint32_t RTC_ICSR_ALRBWF_B_0x0 = 0;
        /** @brief Alarm B update allowed */
    constexpr std::uint32_t RTC_ICSR_ALRBWF_B_0x1 = 1;

    /** @brief Wakeup timer write flag This bit is set by hardware when WUT value can be changed, after the WUTE bit has been set to 0 in RTC_CR. It is cleared by hardware in initialization mode. */
    using RTC_ICSR_WUTWF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wakeup timer configuration update not allowed except in initialization mode (value: 0)
     *          - B_0x1: Wakeup timer configuration update allowed (value: 1)
     */
        /** @brief Wakeup timer configuration update not allowed except in initialization mode */
    constexpr std::uint32_t RTC_ICSR_WUTWF_B_0x0 = 0;
        /** @brief Wakeup timer configuration update allowed */
    constexpr std::uint32_t RTC_ICSR_WUTWF_B_0x1 = 1;

    /** @brief Shift operation pending This flag is set by hardware as soon as a shift operation is initiated by a write to the RTC_SHIFTR register. It is cleared by hardware when the corresponding shift operation has been executed. Writing to the SHPF bit has no effect. */
    using RTC_ICSR_SHPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No shift operation is pending (value: 0)
     *          - B_0x1: A shift operation is pending (value: 1)
     */
        /** @brief No shift operation is pending */
    constexpr std::uint32_t RTC_ICSR_SHPF_B_0x0 = 0;
        /** @brief A shift operation is pending */
    constexpr std::uint32_t RTC_ICSR_SHPF_B_0x1 = 1;

    /** @brief Initialization status flag This bit is set by hardware when the calendar year field is different from 0 (Backup domain reset state). */
    using RTC_ICSR_INITS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Calendar has not been initialized (value: 0)
     *          - B_0x1: Calendar has been initialized (value: 1)
     */
        /** @brief Calendar has not been initialized */
    constexpr std::uint32_t RTC_ICSR_INITS_B_0x0 = 0;
        /** @brief Calendar has been initialized */
    constexpr std::uint32_t RTC_ICSR_INITS_B_0x1 = 1;

    /** @brief Registers synchronization flag This bit is set by hardware each time the calendar registers are copied into the shadow registers (RTC_SSR, RTC_TR and RTC_DR). This bit is cleared by hardware in initialization mode, while a shift operation is pending (SHPF = 1), or when in bypass shadow register mode (BYPSHAD = 1). This bit can also be cleared by software. It is cleared either by software or by hardware in initialization mode. */
    using RTC_ICSR_RSF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Calendar shadow registers not yet synchronized (value: 0)
     *          - B_0x1: Calendar shadow registers synchronized (value: 1)
     */
        /** @brief Calendar shadow registers not yet synchronized */
    constexpr std::uint32_t RTC_ICSR_RSF_B_0x0 = 0;
        /** @brief Calendar shadow registers synchronized */
    constexpr std::uint32_t RTC_ICSR_RSF_B_0x1 = 1;

    /** @brief Initialization flag When this bit is set to 1, the RTC is in initialization state, and the time, date and prescaler registers can be updated. */
    using RTC_ICSR_INITF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Calendar registers update is not allowed (value: 0)
     *          - B_0x1: Calendar registers update is allowed (value: 1)
     */
        /** @brief Calendar registers update is not allowed */
    constexpr std::uint32_t RTC_ICSR_INITF_B_0x0 = 0;
        /** @brief Calendar registers update is allowed */
    constexpr std::uint32_t RTC_ICSR_INITF_B_0x1 = 1;

    /** @brief Initialization mode */
    using RTC_ICSR_INIT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Free running mode (value: 0)
     *          - B_0x1: Initialization mode used to program time and date register (RTC_TR and RTC_DR), and prescaler register (RTC_PRER). Counters are stopped and start counting from the new value when INIT is reset. (value: 1)
     */
        /** @brief Free running mode */
    constexpr std::uint32_t RTC_ICSR_INIT_B_0x0 = 0;
        /** @brief Initialization mode used to program time and date register (RTC_TR and RTC_DR), and prescaler register (RTC_PRER). Counters are stopped and start counting from the new value when INIT is reset. */
    constexpr std::uint32_t RTC_ICSR_INIT_B_0x1 = 1;

    /** @brief Recalibration pending Flag The RECALPF status flag is automatically set to 1 when software writes to the RTC_CALR register, indicating that the RTC_CALR register is blocked. When the new calibration settings are taken into account, this bit returns to 0. Refer to . */
    using RTC_ICSR_RECALPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RTC prescaler register */
    using RTC_PRER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronous prescaler factor This is the synchronous division factor: ck_spre frequency = ck_apre frequency/(PREDIV_S+1) */
    using RTC_PRER_PREDIV_S = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 15, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Asynchronous prescaler factor This is the asynchronous division factor: ck_apre frequency = RTCCLK frequency/(PREDIV_A+1) */
    using RTC_PRER_PREDIV_A = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RTC wakeup timer register */
    using RTC_WUTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wakeup auto-reload value bits When the wakeup timer is enabled (WUTE set to 1), the WUTF flag is set every (WUT[15:0]+1) ck_wut cycles. The ck_wut period is selected through WUCKSEL[2:0] bits of the RTC_CR register. When WUCKSEL[2] = 1, the wakeup timer becomes 17-bits and WUCKSEL[1] effectively becomes WUT[16] the most-significant bit to be reloaded into the timer. The first assertion of WUTF occurs between WUT and (WUT + 1) ck_wut cycles after WUTE is set. Setting WUT[15:0] to 0x0000 with WUCKSEL[2:0] = 011 (RTCCLK/2) is forbidden. */
    using RTC_WUTR_WUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief control register */
    using RTC_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ck_wut wakeup clock selection 10x: ck_spre (usually 1Hz) clock is selected 11x: ck_spre (usually 1Hz) clock is selected and 216is added to the WUT counter value */
    using RTC_CR_WUCKSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RTC/16 clock is selected (value: 0)
     *          - B_0x1: RTC/8 clock is selected (value: 1)
     *          - B_0x2: RTC/4 clock is selected (value: 2)
     *          - B_0x3: RTC/2 clock is selected (value: 3)
     */
        /** @brief RTC/16 clock is selected */
    constexpr std::uint32_t RTC_CR_WUCKSEL_B_0x0 = 0;
        /** @brief RTC/8 clock is selected */
    constexpr std::uint32_t RTC_CR_WUCKSEL_B_0x1 = 1;
        /** @brief RTC/4 clock is selected */
    constexpr std::uint32_t RTC_CR_WUCKSEL_B_0x2 = 2;
        /** @brief RTC/2 clock is selected */
    constexpr std::uint32_t RTC_CR_WUCKSEL_B_0x3 = 3;

    /** @brief Timestamp event active edge TSE must be reset when TSEDGE is changed to avoid unwanted TSF setting. */
    using RTC_CR_TSEDGE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RTC_TS input rising edge generates a timestamp event (value: 0)
     *          - B_0x1: RTC_TS input falling edge generates a timestamp event (value: 1)
     */
        /** @brief RTC_TS input rising edge generates a timestamp event */
    constexpr std::uint32_t RTC_CR_TSEDGE_B_0x0 = 0;
        /** @brief RTC_TS input falling edge generates a timestamp event */
    constexpr std::uint32_t RTC_CR_TSEDGE_B_0x1 = 1;

    /** @brief RTC_REFIN reference clock detection enable (50 or 60Hz) Note: PREDIV_S must be 0x00FF. */
    using RTC_CR_REFCKON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RTC_REFIN detection disabled (value: 0)
     *          - B_0x1: RTC_REFIN detection enabled (value: 1)
     */
        /** @brief RTC_REFIN detection disabled */
    constexpr std::uint32_t RTC_CR_REFCKON_B_0x0 = 0;
        /** @brief RTC_REFIN detection enabled */
    constexpr std::uint32_t RTC_CR_REFCKON_B_0x1 = 1;

    /** @brief Bypass the shadow registers Note: If the frequency of the APB1 clock is less than seven times the frequency of RTCCLK, BYPSHAD must be set to 1. */
    using RTC_CR_BYPSHAD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Calendar values (when reading from RTC_SSR, RTC_TR, and RTC_DR) are taken from the shadow registers, which are updated once every two RTCCLK cycles. (value: 0)
     *          - B_0x1: Calendar values (when reading from RTC_SSR, RTC_TR, and RTC_DR) are taken directly from the calendar counters. (value: 1)
     */
        /** @brief Calendar values (when reading from RTC_SSR, RTC_TR, and RTC_DR) are taken from the shadow registers, which are updated once every two RTCCLK cycles. */
    constexpr std::uint32_t RTC_CR_BYPSHAD_B_0x0 = 0;
        /** @brief Calendar values (when reading from RTC_SSR, RTC_TR, and RTC_DR) are taken directly from the calendar counters. */
    constexpr std::uint32_t RTC_CR_BYPSHAD_B_0x1 = 1;

    /** @brief Hour format */
    using RTC_CR_FMT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 24 hour/day format (value: 0)
     *          - B_0x1: AM/PM hour format (value: 1)
     */
        /** @brief 24 hour/day format */
    constexpr std::uint32_t RTC_CR_FMT_B_0x0 = 0;
        /** @brief AM/PM hour format */
    constexpr std::uint32_t RTC_CR_FMT_B_0x1 = 1;

    /** @brief Alarm A enable */
    using RTC_CR_ALRAE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Alarm A disabled (value: 0)
     *          - B_0x1: Alarm A enabled (value: 1)
     */
        /** @brief Alarm A disabled */
    constexpr std::uint32_t RTC_CR_ALRAE_B_0x0 = 0;
        /** @brief Alarm A enabled */
    constexpr std::uint32_t RTC_CR_ALRAE_B_0x1 = 1;

    /** @brief Alarm B enable */
    using RTC_CR_ALRBE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Alarm B disabled (value: 0)
     *          - B_0x1: Alarm B enabled (value: 1)
     */
        /** @brief Alarm B disabled */
    constexpr std::uint32_t RTC_CR_ALRBE_B_0x0 = 0;
        /** @brief Alarm B enabled */
    constexpr std::uint32_t RTC_CR_ALRBE_B_0x1 = 1;

    /** @brief Wakeup timer enable Note: When the wakeup timer is disabled, wait for WUTWF=1 before enabling it again. */
    using RTC_CR_WUTE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wakeup timer disabled (value: 0)
     *          - B_0x1: Wakeup timer enabled (value: 1)
     */
        /** @brief Wakeup timer disabled */
    constexpr std::uint32_t RTC_CR_WUTE_B_0x0 = 0;
        /** @brief Wakeup timer enabled */
    constexpr std::uint32_t RTC_CR_WUTE_B_0x1 = 1;

    /** @brief timestamp enable */
    using RTC_CR_TSE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: timestamp disable (value: 0)
     *          - B_0x1: timestamp enable (value: 1)
     */
        /** @brief timestamp disable */
    constexpr std::uint32_t RTC_CR_TSE_B_0x0 = 0;
        /** @brief timestamp enable */
    constexpr std::uint32_t RTC_CR_TSE_B_0x1 = 1;

    /** @brief Alarm A interrupt enable */
    using RTC_CR_ALRAIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Alarm A interrupt disabled (value: 0)
     *          - B_0x1: Alarm A interrupt enabled (value: 1)
     */
        /** @brief Alarm A interrupt disabled */
    constexpr std::uint32_t RTC_CR_ALRAIE_B_0x0 = 0;
        /** @brief Alarm A interrupt enabled */
    constexpr std::uint32_t RTC_CR_ALRAIE_B_0x1 = 1;

    /** @brief Alarm B interrupt enable */
    using RTC_CR_ALRBIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Alarm B interrupt disable (value: 0)
     *          - B_0x1: Alarm B interrupt enable (value: 1)
     */
        /** @brief Alarm B interrupt disable */
    constexpr std::uint32_t RTC_CR_ALRBIE_B_0x0 = 0;
        /** @brief Alarm B interrupt enable */
    constexpr std::uint32_t RTC_CR_ALRBIE_B_0x1 = 1;

    /** @brief Wakeup timer interrupt enable */
    using RTC_CR_WUTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wakeup timer interrupt disabled (value: 0)
     *          - B_0x1: Wakeup timer interrupt enabled (value: 1)
     */
        /** @brief Wakeup timer interrupt disabled */
    constexpr std::uint32_t RTC_CR_WUTIE_B_0x0 = 0;
        /** @brief Wakeup timer interrupt enabled */
    constexpr std::uint32_t RTC_CR_WUTIE_B_0x1 = 1;

    /** @brief Timestamp interrupt enable */
    using RTC_CR_TSIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Timestamp interrupt disable (value: 0)
     *          - B_0x1: Timestamp interrupt enable (value: 1)
     */
        /** @brief Timestamp interrupt disable */
    constexpr std::uint32_t RTC_CR_TSIE_B_0x0 = 0;
        /** @brief Timestamp interrupt enable */
    constexpr std::uint32_t RTC_CR_TSIE_B_0x1 = 1;

    /** @brief Add 1 hour (summer time change) When this bit is set outside initialization mode, 1 hour is added to the calendar time. This bit is always read as 0. */
    using RTC_CR_ADD1H = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Adds 1 hour to the current time. This can be used for summer time change (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RTC_CR_ADD1H_B_0x0 = 0;
        /** @brief Adds 1 hour to the current time. This can be used for summer time change */
    constexpr std::uint32_t RTC_CR_ADD1H_B_0x1 = 1;

    /** @brief Subtract 1 hour (winter time change) When this bit is set outside initialization mode, 1 hour is subtracted to the calendar time if the current hour is not 0. This bit is always read as 0. Setting this bit has no effect when current hour is 0. */
    using RTC_CR_SUB1H = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Subtracts 1 hour to the current time. This can be used for winter time change. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RTC_CR_SUB1H_B_0x0 = 0;
        /** @brief Subtracts 1 hour to the current time. This can be used for winter time change. */
    constexpr std::uint32_t RTC_CR_SUB1H_B_0x1 = 1;

    /** @brief Backup This bit can be written by the user to memorize whether the daylight saving time change has been performed or not. */
    using RTC_CR_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Calibration output selection When COE = 1, this bit selects which signal is output on CALIB. These frequencies are valid for RTCCLK at 32.768kHz and prescalers at their default values (PREDIV_A = 127 and PREDIV_S = 255). Refer to . */
    using RTC_CR_COSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Calibration output is 512Hz (value: 0)
     *          - B_0x1: Calibration output is 1Hz (value: 1)
     */
        /** @brief Calibration output is 512Hz */
    constexpr std::uint32_t RTC_CR_COSEL_B_0x0 = 0;
        /** @brief Calibration output is 1Hz */
    constexpr std::uint32_t RTC_CR_COSEL_B_0x1 = 1;

    /** @brief Output polarity This bit is used to configure the polarity of TAMPALRM output. */
    using RTC_CR_POL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The pin is high when ALRAF/ALRBF/WUTF is asserted (depending on OSEL[1:0]), or when a TAMPxF/ITAMPxF is asserted (if TAMPOE = 1). (value: 0)
     *          - B_0x1: The pin is low when ALRAF/ALRBF/WUTF is asserted (depending on OSEL[1:0]), or when a TAMPxF/ITAMPxF is asserted (if TAMPOE = 1). (value: 1)
     */
        /** @brief The pin is high when ALRAF/ALRBF/WUTF is asserted (depending on OSEL[1:0]), or when a TAMPxF/ITAMPxF is asserted (if TAMPOE = 1). */
    constexpr std::uint32_t RTC_CR_POL_B_0x0 = 0;
        /** @brief The pin is low when ALRAF/ALRBF/WUTF is asserted (depending on OSEL[1:0]), or when a TAMPxF/ITAMPxF is asserted (if TAMPOE = 1). */
    constexpr std::uint32_t RTC_CR_POL_B_0x1 = 1;

    /** @brief Output selection These bits are used to select the flag to be routed to TAMPALRM output. */
    using RTC_CR_OSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Output disabled (value: 0)
     *          - B_0x1: Alarm A output enabled (value: 1)
     *          - B_0x2: Alarm B output enabled (value: 2)
     *          - B_0x3: Wakeup output enabled (value: 3)
     */
        /** @brief Output disabled */
    constexpr std::uint32_t RTC_CR_OSEL_B_0x0 = 0;
        /** @brief Alarm A output enabled */
    constexpr std::uint32_t RTC_CR_OSEL_B_0x1 = 1;
        /** @brief Alarm B output enabled */
    constexpr std::uint32_t RTC_CR_OSEL_B_0x2 = 2;
        /** @brief Wakeup output enabled */
    constexpr std::uint32_t RTC_CR_OSEL_B_0x3 = 3;

    /** @brief Calibration output enable This bit enables the CALIB output */
    using RTC_CR_COE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Calibration output disabled (value: 0)
     *          - B_0x1: Calibration output enabled (value: 1)
     */
        /** @brief Calibration output disabled */
    constexpr std::uint32_t RTC_CR_COE_B_0x0 = 0;
        /** @brief Calibration output enabled */
    constexpr std::uint32_t RTC_CR_COE_B_0x1 = 1;

    /** @brief timestamp on internal event enable */
    using RTC_CR_ITSE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: internal event timestamp disabled (value: 0)
     *          - B_0x1: internal event timestamp enabled (value: 1)
     */
        /** @brief internal event timestamp disabled */
    constexpr std::uint32_t RTC_CR_ITSE_B_0x0 = 0;
        /** @brief internal event timestamp enabled */
    constexpr std::uint32_t RTC_CR_ITSE_B_0x1 = 1;

    /** @brief Activate timestamp on tamper detection event TAMPTS is valid even if TSE = 0 in the RTC_CR register. Timestamp flag is set after the tamper flags, therefore if TAMPTS and TSIE are set, it is recommended to disable the tamper interrupts in order to avoid servicing 2 interrupts. */
    using RTC_CR_TAMPTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tamper detection event does not cause a RTC timestamp to be saved (value: 0)
     *          - B_0x1: Save RTC timestamp on tamper detection event (value: 1)
     */
        /** @brief Tamper detection event does not cause a RTC timestamp to be saved */
    constexpr std::uint32_t RTC_CR_TAMPTS_B_0x0 = 0;
        /** @brief Save RTC timestamp on tamper detection event */
    constexpr std::uint32_t RTC_CR_TAMPTS_B_0x1 = 1;

    /** @brief Tamper detection output enable on TAMPALRM */
    using RTC_CR_TAMPOE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The tamper flag is not routed on TAMPALRM (value: 0)
     *          - B_0x1: The tamper flag is routed on TAMPALRM, combined with the signal provided by OSEL and with the polarity provided by POL. (value: 1)
     */
        /** @brief The tamper flag is not routed on TAMPALRM */
    constexpr std::uint32_t RTC_CR_TAMPOE_B_0x0 = 0;
        /** @brief The tamper flag is routed on TAMPALRM, combined with the signal provided by OSEL and with the polarity provided by POL. */
    constexpr std::uint32_t RTC_CR_TAMPOE_B_0x1 = 1;

    /** @brief TAMPALRM pull-up enable */
    using RTC_CR_TAMPALRM_PU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No pull-up is applied on TAMPALRM output (value: 0)
     *          - B_0x1: A pull-up is applied on TAMPALRM output (value: 1)
     */
        /** @brief No pull-up is applied on TAMPALRM output */
    constexpr std::uint32_t RTC_CR_TAMPALRM_PU_B_0x0 = 0;
        /** @brief A pull-up is applied on TAMPALRM output */
    constexpr std::uint32_t RTC_CR_TAMPALRM_PU_B_0x1 = 1;

    /** @brief TAMPALRM output type */
    using RTC_CR_TAMPALRM_TYPE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TAMPALRM is push-pull output (value: 0)
     *          - B_0x1: TAMPALRM is open-drain output (value: 1)
     */
        /** @brief TAMPALRM is push-pull output */
    constexpr std::uint32_t RTC_CR_TAMPALRM_TYPE_B_0x0 = 0;
        /** @brief TAMPALRM is open-drain output */
    constexpr std::uint32_t RTC_CR_TAMPALRM_TYPE_B_0x1 = 1;

    /** @brief RTC_OUT2 output enable Setting this bit allows to remap the RTC outputs on RTC_OUT2 as follows: OUT2EN = 0: RTC output 2 disable If OSEL different 00 or TAMPOE = 1: TAMPALRM is output on RTC_OUT1 If OSEL = 00 and TAMPOE = 0 and COE = 1: CALIB is output on RTC_OUT1 OUT2EN = 1: RTC output 2 enable If (OSEL different 00 or TAMPOE = 1) and COE = 0: TAMPALRM is output on RTC_OUT2 If OSEL = 00 and TAMPOE = 0 and COE = 1: CALIB is output on RTC_OUT2 If (OSEL 00 or TAMPOE = 1) and COE = 1: CALIB is output on RTC_OUT2 and TAMPALRM is output on RTC_OUT1. */
    using RTC_CR_OUT2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief write protection register */
    using RTC_WPR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Write protection key This byte is written by software. Reading this byte always returns 0x00. Refer to for a description of how to unlock RTC register write protection. */
    using RTC_WPR_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RTC calibration register */
    using RTC_CALR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Calibration minus The frequency of the calendar is reduced by masking CALM out of 220 RTCCLK pulses (32 seconds if the input frequency is 32768Hz). This decreases the frequency of the calendar with a resolution of 0.9537ppm. To increase the frequency of the calendar, this feature should be used in conjunction with CALP. See . */
    using RTC_CALR_CALM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Use a 16-second calibration cycle period When CALW16 is set to 1, the 16-second calibration cycle period is selected. This bit must not be set to 1 if CALW8 = 1. Note: CALM[0] is stuck at 0 when CALW16 = 1. Refer to calibration. */
    using RTC_CALR_CALW16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Use an 8-second calibration cycle period When CALW8 is set to 1, the 8-second calibration cycle period is selected. Note: CALM[1:0] are stuck at 00 when CALW8 = 1. Refer to digital calibration. */
    using RTC_CALR_CALW8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Increase frequency of RTC by 488 */
    using RTC_CALR_CALP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No RTCCLK pulses are added. (value: 0)
     *          - B_0x1: One RTCCLK pulse is effectively inserted every 211 pulses (frequency increased by 488.5ppm). (value: 1)
     */
        /** @brief No RTCCLK pulses are added. */
    constexpr std::uint32_t RTC_CALR_CALP_B_0x0 = 0;
        /** @brief One RTCCLK pulse is effectively inserted every 211 pulses (frequency increased by 488.5ppm). */
    constexpr std::uint32_t RTC_CALR_CALP_B_0x1 = 1;

    /** @brief RTC shift control register */
    using RTC_SHIFTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Subtract a fraction of a second These bits are write only and is always read as zero. Writing to this bit has no effect when a shift operation is pending (when SHPF = 1, in RTC_ICSR). The value which is written to SUBFS is added to the synchronous prescaler counter. Since this counter counts down, this operation effectively subtracts from (delays) the clock by: Delay (seconds) = SUBFS / (PREDIV_S + 1) A fraction of a second can effectively be added to the clock (advancing the clock) when the ADD1S function is used in conjunction with SUBFS, effectively advancing the clock by: Advance (seconds) = (1 - (SUBFS / (PREDIV_S + 1))). Note: Writing to SUBFS causes RSF to be cleared. Software can then wait until RSF = 1 to be sure that the shadow registers have been updated with the shifted time. */
    using RTC_SHIFTR_SUBFS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 15, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Add one second This bit is write only and is always read as zero. Writing to this bit has no effect when a shift operation is pending (when SHPF = 1, in RTC_ICSR). This function is intended to be used with SUBFS (see description below) in order to effectively add a fraction of a second to the clock in an atomic operation. */
    using RTC_SHIFTR_ADD1S = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Add one second to the clock/calendar (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RTC_SHIFTR_ADD1S_B_0x0 = 0;
        /** @brief Add one second to the clock/calendar */
    constexpr std::uint32_t RTC_SHIFTR_ADD1S_B_0x1 = 1;

    /** @brief RTC timestamp time register */
    using RTC_TSTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Second units in BCD format. */
    using RTC_TSTR_SU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Second tens in BCD format. */
    using RTC_TSTR_ST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Minute units in BCD format. */
    using RTC_TSTR_MNU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Minute tens in BCD format. */
    using RTC_TSTR_MNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hour units in BCD format. */
    using RTC_TSTR_HU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hour tens in BCD format. */
    using RTC_TSTR_HT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AM/PM notation */
    using RTC_TSTR_PM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AM or 24-hour format (value: 0)
     *          - B_0x1: PM (value: 1)
     */
        /** @brief AM or 24-hour format */
    constexpr std::uint32_t RTC_TSTR_PM_B_0x0 = 0;
        /** @brief PM */
    constexpr std::uint32_t RTC_TSTR_PM_B_0x1 = 1;

    /** @brief RTC timestamp date register */
    using RTC_TSDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Date units in BCD format */
    using RTC_TSDR_DU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Date tens in BCD format */
    using RTC_TSDR_DT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Month units in BCD format */
    using RTC_TSDR_MU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Month tens in BCD format */
    using RTC_TSDR_MT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Week day units */
    using RTC_TSDR_WDU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RTC timestamp sub second register */
    using RTC_TSSSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sub second value SS[15:0] is the value of the synchronous prescaler counter when the timestamp event occurred. */
    using RTC_TSSSR_SS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RTC alarm A register */
    using RTC_ALRMAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Second units in BCD format. */
    using RTC_ALRMAR_SU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Second tens in BCD format. */
    using RTC_ALRMAR_ST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alarm A seconds mask */
    using RTC_ALRMAR_MSK1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Alarm A set if the seconds match (value: 0)
     *          - B_0x1: Seconds don't care in alarm A comparison (value: 1)
     */
        /** @brief Alarm A set if the seconds match */
    constexpr std::uint32_t RTC_ALRMAR_MSK1_B_0x0 = 0;
        /** @brief Seconds don't care in alarm A comparison */
    constexpr std::uint32_t RTC_ALRMAR_MSK1_B_0x1 = 1;

    /** @brief Minute units in BCD format */
    using RTC_ALRMAR_MNU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Minute tens in BCD format */
    using RTC_ALRMAR_MNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alarm A minutes mask */
    using RTC_ALRMAR_MSK2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Alarm A set if the minutes match (value: 0)
     *          - B_0x1: Minutes don't care in alarm A comparison (value: 1)
     */
        /** @brief Alarm A set if the minutes match */
    constexpr std::uint32_t RTC_ALRMAR_MSK2_B_0x0 = 0;
        /** @brief Minutes don't care in alarm A comparison */
    constexpr std::uint32_t RTC_ALRMAR_MSK2_B_0x1 = 1;

    /** @brief Hour units in BCD format */
    using RTC_ALRMAR_HU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hour tens in BCD format */
    using RTC_ALRMAR_HT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AM/PM notation */
    using RTC_ALRMAR_PM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AM or 24-hour format (value: 0)
     *          - B_0x1: PM (value: 1)
     */
        /** @brief AM or 24-hour format */
    constexpr std::uint32_t RTC_ALRMAR_PM_B_0x0 = 0;
        /** @brief PM */
    constexpr std::uint32_t RTC_ALRMAR_PM_B_0x1 = 1;

    /** @brief Alarm A hours mask */
    using RTC_ALRMAR_MSK3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Alarm A set if the hours match (value: 0)
     *          - B_0x1: Hours don't care in alarm A comparison (value: 1)
     */
        /** @brief Alarm A set if the hours match */
    constexpr std::uint32_t RTC_ALRMAR_MSK3_B_0x0 = 0;
        /** @brief Hours don't care in alarm A comparison */
    constexpr std::uint32_t RTC_ALRMAR_MSK3_B_0x1 = 1;

    /** @brief Date units or day in BCD format */
    using RTC_ALRMAR_DU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Date tens in BCD format */
    using RTC_ALRMAR_DT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Week day selection */
    using RTC_ALRMAR_WDSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DU[3:0] represents the date units (value: 0)
     *          - B_0x1: DU[3:0] represents the week day. DT[1:0] is don't care. (value: 1)
     */
        /** @brief DU[3:0] represents the date units */
    constexpr std::uint32_t RTC_ALRMAR_WDSEL_B_0x0 = 0;
        /** @brief DU[3:0] represents the week day. DT[1:0] is don't care. */
    constexpr std::uint32_t RTC_ALRMAR_WDSEL_B_0x1 = 1;

    /** @brief Alarm A date mask */
    using RTC_ALRMAR_MSK4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Alarm A set if the date/day match (value: 0)
     *          - B_0x1: Date/day don't care in alarm A comparison (value: 1)
     */
        /** @brief Alarm A set if the date/day match */
    constexpr std::uint32_t RTC_ALRMAR_MSK4_B_0x0 = 0;
        /** @brief Date/day don't care in alarm A comparison */
    constexpr std::uint32_t RTC_ALRMAR_MSK4_B_0x1 = 1;

    /** @brief RTC alarm A sub second register */
    using RTC_ALRMASSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sub seconds value This value is compared with the contents of the synchronous prescaler counter to determine if alarm A is to be activated. Only bits 0 up MASKSS-1 are compared. */
    using RTC_ALRMASSR_SS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 15, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Mask the most-significant bits starting at this bit 2:	SS[14:2] are don't care in alarm A comparison. Only SS[1:0] are compared. 3:	SS[14:3] are don't care in alarm A comparison. Only SS[2:0] are compared. ... 12:	SS[14:12] are don't care in alarm A comparison. SS[11:0] are compared. 13:	SS[14:13] are don't care in alarm A comparison. SS[12:0] are compared. 14:	SS[14] is don't care in alarm A comparison. SS[13:0] are compared. 15:	All 15 SS bits are compared and must match to activate alarm. The overflow bits of the synchronous counter (bits 15) is never compared. This bit can be different from 0 only after a shift operation. Note: The overflow bits of the synchronous counter (bits 15) is never compared. This bit can be different from 0 only after a shift operation. */
    using RTC_ALRMASSR_MASKSS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No comparison on sub seconds for alarm A. The alarm is set when the seconds unit is incremented (assuming that the rest of the fields match). (value: 0)
     *          - B_0x1: SS[14:1] are don't care in alarm A comparison. Only SS[0] is compared. (value: 1)
     */
        /** @brief No comparison on sub seconds for alarm A. The alarm is set when the seconds unit is incremented (assuming that the rest of the fields match). */
    constexpr std::uint32_t RTC_ALRMASSR_MASKSS_B_0x0 = 0;
        /** @brief SS[14:1] are don't care in alarm A comparison. Only SS[0] is compared. */
    constexpr std::uint32_t RTC_ALRMASSR_MASKSS_B_0x1 = 1;

    /** @brief RTC alarm B register */
    using RTC_ALRMBR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Second units in BCD format */
    using RTC_ALRMBR_SU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Second tens in BCD format */
    using RTC_ALRMBR_ST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alarm B seconds mask */
    using RTC_ALRMBR_MSK1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Alarm B set if the seconds match (value: 0)
     *          - B_0x1: Seconds don't care in alarm B comparison (value: 1)
     */
        /** @brief Alarm B set if the seconds match */
    constexpr std::uint32_t RTC_ALRMBR_MSK1_B_0x0 = 0;
        /** @brief Seconds don't care in alarm B comparison */
    constexpr std::uint32_t RTC_ALRMBR_MSK1_B_0x1 = 1;

    /** @brief Minute units in BCD format */
    using RTC_ALRMBR_MNU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Minute tens in BCD format */
    using RTC_ALRMBR_MNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alarm B minutes mask */
    using RTC_ALRMBR_MSK2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Alarm B set if the minutes match (value: 0)
     *          - B_0x1: Minutes don't care in alarm B comparison (value: 1)
     */
        /** @brief Alarm B set if the minutes match */
    constexpr std::uint32_t RTC_ALRMBR_MSK2_B_0x0 = 0;
        /** @brief Minutes don't care in alarm B comparison */
    constexpr std::uint32_t RTC_ALRMBR_MSK2_B_0x1 = 1;

    /** @brief Hour units in BCD format */
    using RTC_ALRMBR_HU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hour tens in BCD format */
    using RTC_ALRMBR_HT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AM/PM notation */
    using RTC_ALRMBR_PM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AM or 24-hour format (value: 0)
     *          - B_0x1: PM (value: 1)
     */
        /** @brief AM or 24-hour format */
    constexpr std::uint32_t RTC_ALRMBR_PM_B_0x0 = 0;
        /** @brief PM */
    constexpr std::uint32_t RTC_ALRMBR_PM_B_0x1 = 1;

    /** @brief Alarm B hours mask */
    using RTC_ALRMBR_MSK3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Alarm B set if the hours match (value: 0)
     *          - B_0x1: Hours don't care in alarm B comparison (value: 1)
     */
        /** @brief Alarm B set if the hours match */
    constexpr std::uint32_t RTC_ALRMBR_MSK3_B_0x0 = 0;
        /** @brief Hours don't care in alarm B comparison */
    constexpr std::uint32_t RTC_ALRMBR_MSK3_B_0x1 = 1;

    /** @brief Date units or day in BCD format */
    using RTC_ALRMBR_DU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Date tens in BCD format */
    using RTC_ALRMBR_DT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Week day selection */
    using RTC_ALRMBR_WDSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DU[3:0] represents the date units (value: 0)
     *          - B_0x1: DU[3:0] represents the week day. DT[1:0] is don't care. (value: 1)
     */
        /** @brief DU[3:0] represents the date units */
    constexpr std::uint32_t RTC_ALRMBR_WDSEL_B_0x0 = 0;
        /** @brief DU[3:0] represents the week day. DT[1:0] is don't care. */
    constexpr std::uint32_t RTC_ALRMBR_WDSEL_B_0x1 = 1;

    /** @brief Alarm B date mask */
    using RTC_ALRMBR_MSK4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Alarm B set if the date and day match (value: 0)
     *          - B_0x1: Date and day don't care in alarm B comparison (value: 1)
     */
        /** @brief Alarm B set if the date and day match */
    constexpr std::uint32_t RTC_ALRMBR_MSK4_B_0x0 = 0;
        /** @brief Date and day don't care in alarm B comparison */
    constexpr std::uint32_t RTC_ALRMBR_MSK4_B_0x1 = 1;

    /** @brief RTC alarm B sub second register */
    using RTC_ALRMBSSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sub seconds value This value is compared with the contents of the synchronous prescaler counter to determine if alarm B is to be activated. Only bits 0 up to MASKSS-1 are compared. */
    using RTC_ALRMBSSR_SS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 15, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Mask the most-significant bits starting at this bit ... The overflow bits of the synchronous counter (bits 15) is never compared. This bit can be different from 0 only after a shift operation. */
    using RTC_ALRMBSSR_MASKSS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No comparison on sub seconds for alarm B. The alarm is set when the seconds unit is incremented (assuming that the rest of the fields match). (value: 0)
     *          - B_0x1: SS[14:1] are don't care in alarm B comparison. Only SS[0] is compared. (value: 1)
     *          - B_0x2: SS[14:2] are don't care in alarm B comparison. Only SS[1:0] are compared. (value: 2)
     *          - B_0x3: SS[14:3] are don't care in alarm B comparison. Only SS[2:0] are compared. (value: 3)
     *          - B_0xC: SS[14:12] are don't care in alarm B comparison. SS[11:0] are compared. (value: 12)
     *          - B_0xD: SS[14:13] are don't care in alarm B comparison. SS[12:0] are compared. (value: 13)
     *          - B_0xE: SS[14] is don't care in alarm B comparison. SS[13:0] are compared. (value: 14)
     *          - B_0xF: All 15 SS bits are compared and must match to activate alarm. (value: 15)
     */
        /** @brief No comparison on sub seconds for alarm B. The alarm is set when the seconds unit is incremented (assuming that the rest of the fields match). */
    constexpr std::uint32_t RTC_ALRMBSSR_MASKSS_B_0x0 = 0;
        /** @brief SS[14:1] are don't care in alarm B comparison. Only SS[0] is compared. */
    constexpr std::uint32_t RTC_ALRMBSSR_MASKSS_B_0x1 = 1;
        /** @brief SS[14:2] are don't care in alarm B comparison. Only SS[1:0] are compared. */
    constexpr std::uint32_t RTC_ALRMBSSR_MASKSS_B_0x2 = 2;
        /** @brief SS[14:3] are don't care in alarm B comparison. Only SS[2:0] are compared. */
    constexpr std::uint32_t RTC_ALRMBSSR_MASKSS_B_0x3 = 3;
        /** @brief SS[14:12] are don't care in alarm B comparison. SS[11:0] are compared. */
    constexpr std::uint32_t RTC_ALRMBSSR_MASKSS_B_0xC = 12;
        /** @brief SS[14:13] are don't care in alarm B comparison. SS[12:0] are compared. */
    constexpr std::uint32_t RTC_ALRMBSSR_MASKSS_B_0xD = 13;
        /** @brief SS[14] is don't care in alarm B comparison. SS[13:0] are compared. */
    constexpr std::uint32_t RTC_ALRMBSSR_MASKSS_B_0xE = 14;
        /** @brief All 15 SS bits are compared and must match to activate alarm. */
    constexpr std::uint32_t RTC_ALRMBSSR_MASKSS_B_0xF = 15;

    /** @brief RTC status register */
    using RTC_SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alarm A flag This flag is set by hardware when the time/date registers (RTC_TR and RTC_DR) match the alarm A register (RTC_ALRMAR). */
    using RTC_SR_ALRAF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alarm B flag This flag is set by hardware when the time/date registers (RTC_TR and RTC_DR) match the alarm B register (RTC_ALRMBR). */
    using RTC_SR_ALRBF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wakeup timer flag This flag is set by hardware when the wakeup auto-reload counter reaches 0. This flag must be cleared by software at least 1.5 RTCCLK periods before WUTF is set to 1 again. */
    using RTC_SR_WUTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timestamp flag This flag is set by hardware when a timestamp event occurs. If ITSF flag is set, TSF must be cleared together with ITSF. */
    using RTC_SR_TSF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timestamp overflow flag This flag is set by hardware when a timestamp event occurs while TSF is already set. It is recommended to check and then clear TSOVF only after clearing the TSF bit. Otherwise, an overflow might not be noticed if a timestamp event occurs immediately before the TSF bit is cleared. */
    using RTC_SR_TSOVF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Internal timestamp flag This flag is set by hardware when a timestamp on the internal event occurs. */
    using RTC_SR_ITSF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RTC masked interrupt status register */
    using RTC_MISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alarm A masked flag This flag is set by hardware when the alarm A interrupt occurs. */
    using RTC_MISR_ALRAMF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alarm B masked flag This flag is set by hardware when the alarm B interrupt occurs. */
    using RTC_MISR_ALRBMF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wakeup timer masked flag This flag is set by hardware when the wakeup timer interrupt occurs. This flag must be cleared by software at least 1.5 RTCCLK periods before WUTF is set to 1 again. */
    using RTC_MISR_WUTMF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timestamp masked flag This flag is set by hardware when a timestamp interrupt occurs. If ITSF flag is set, TSF must be cleared together with ITSF. */
    using RTC_MISR_TSMF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timestamp overflow masked flag This flag is set by hardware when a timestamp interrupt occurs while TSMF is already set. It is recommended to check and then clear TSOVF only after clearing the TSF bit. Otherwise, an overflow might not be noticed if a timestamp event occurs immediately before the TSF bit is cleared. */
    using RTC_MISR_TSOVMF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Internal timestamp masked flag This flag is set by hardware when a timestamp on the internal event occurs and timestampinterrupt is raised. */
    using RTC_MISR_ITSMF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RTC status clear register */
    using RTC_SCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear alarm A flag Writing 1 in this bit clears the ALRAF bit in the RTC_SR register. */
    using RTC_SCR_CALRAF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear alarm B flag Writing 1 in this bit clears the ALRBF bit in the RTC_SR register. */
    using RTC_SCR_CALRBF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear wakeup timer flag Writing 1 in this bit clears the WUTF bit in the RTC_SR register. */
    using RTC_SCR_CWUTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear timestamp flag Writing 1 in this bit clears the TSOVF bit in the RTC_SR register. If ITSF flag is set, TSF must be cleared together with ITSF by setting CRSF and CITSF. */
    using RTC_SCR_CTSF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear timestamp overflow flag Writing 1 in this bit clears the TSOVF bit in the RTC_SR register. It is recommended to check and then clear TSOVF only after clearing the TSF bit. Otherwise, an overflow might not be noticed if a timestamp event occurs immediately before the TSF bit is cleared. */
    using RTC_SCR_CTSOVF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear internal timestamp flag Writing 1 in this bit clears the ITSF bit in the RTC_SR register. */
    using RTC_SCR_CITSF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
