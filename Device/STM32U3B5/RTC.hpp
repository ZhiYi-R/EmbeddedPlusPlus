/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32U3B5_RTC_HPP
#define EMBEDDED_PP_STM32U3B5_RTC_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief RTC register block */
namespace STM32U3B5::RTC {

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
    /** @brief Week day units */
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
    /** @brief RTC subsecond register */
    using RTC_SSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronous binary counter */
    using RTC_SSR_SS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RTC initialization control and status register */
    using RTC_ICSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up timer write flag */
    using RTC_ICSR_WUTWF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up timer configuration update not allowed except in initialization mode (value: 0)
     *          - B_0x1: Wake-up timer configuration update allowed (value: 1)
     */
        /** @brief Wake-up timer configuration update not allowed except in initialization mode */
    constexpr std::uint32_t RTC_ICSR_WUTWF_B_0x0 = 0;
        /** @brief Wake-up timer configuration update allowed */
    constexpr std::uint32_t RTC_ICSR_WUTWF_B_0x1 = 1;

    /** @brief Shift operation pending */
    using RTC_ICSR_SHPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No shift operation is pending (value: 0)
     *          - B_0x1: A shift operation is pending (value: 1)
     */
        /** @brief No shift operation is pending */
    constexpr std::uint32_t RTC_ICSR_SHPF_B_0x0 = 0;
        /** @brief A shift operation is pending */
    constexpr std::uint32_t RTC_ICSR_SHPF_B_0x1 = 1;

    /** @brief Initialization status flag */
    using RTC_ICSR_INITS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Calendar has not been initialized (value: 0)
     *          - B_0x1: Calendar has been initialized (value: 1)
     */
        /** @brief Calendar has not been initialized */
    constexpr std::uint32_t RTC_ICSR_INITS_B_0x0 = 0;
        /** @brief Calendar has been initialized */
    constexpr std::uint32_t RTC_ICSR_INITS_B_0x1 = 1;

    /** @brief Registers synchronization flag */
    using RTC_ICSR_RSF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Calendar shadow registers not yet synchronized (value: 0)
     *          - B_0x1: Calendar shadow registers synchronized (value: 1)
     */
        /** @brief Calendar shadow registers not yet synchronized */
    constexpr std::uint32_t RTC_ICSR_RSF_B_0x0 = 0;
        /** @brief Calendar shadow registers synchronized */
    constexpr std::uint32_t RTC_ICSR_RSF_B_0x1 = 1;

    /** @brief Initialization flag */
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
     *          - B_0x1: Initialization mode used to program time and date register (RTC_TR and RTC_DR), and prescaler register (RTC_PRER), plus BIN and BCDU fields. (value: 1)
     */
        /** @brief Free running mode */
    constexpr std::uint32_t RTC_ICSR_INIT_B_0x0 = 0;
        /** @brief Initialization mode used to program time and date register (RTC_TR and RTC_DR), and prescaler register (RTC_PRER), plus BIN and BCDU fields. */
    constexpr std::uint32_t RTC_ICSR_INIT_B_0x1 = 1;

    /** @brief Binary mode */
    using RTC_ICSR_BIN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Free running BCD calendar mode (Binary mode disabled). (value: 0)
     *          - B_0x1: Free running Binary mode (BCD mode disabled) (value: 1)
     *          - B_0x2: Free running BCD calendar and Binary modes (value: 2)
     *          - B_0x3: Free running BCD calendar and Binary modes (value: 3)
     */
        /** @brief Free running BCD calendar mode (Binary mode disabled). */
    constexpr std::uint32_t RTC_ICSR_BIN_B_0x0 = 0;
        /** @brief Free running Binary mode (BCD mode disabled) */
    constexpr std::uint32_t RTC_ICSR_BIN_B_0x1 = 1;
        /** @brief Free running BCD calendar and Binary modes */
    constexpr std::uint32_t RTC_ICSR_BIN_B_0x2 = 2;
        /** @brief Free running BCD calendar and Binary modes */
    constexpr std::uint32_t RTC_ICSR_BIN_B_0x3 = 3;

    /** @brief BCD update (BIN = 10 or 11) */
    using RTC_ICSR_BCDU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1s calendar increment is generated each time SS[7:0] = 0 (value: 0)
     *          - B_0x1: 1s calendar increment is generated each time SS[8:0] = 0 (value: 1)
     *          - B_0x2: 1s calendar increment is generated each time SS[9:0] = 0 (value: 2)
     *          - B_0x3: 1s calendar increment is generated each time SS[10:0] = 0 (value: 3)
     *          - B_0x4: 1s calendar increment is generated each time SS[11:0] = 0 (value: 4)
     *          - B_0x5: 1s calendar increment is generated each time SS[12:0] = 0 (value: 5)
     *          - B_0x6: 1s calendar increment is generated each time SS[13:0] = 0 (value: 6)
     *          - B_0x7: 1s calendar increment is generated each time SS[14:0] = 0 (value: 7)
     */
        /** @brief 1s calendar increment is generated each time SS[7:0] = 0 */
    constexpr std::uint32_t RTC_ICSR_BCDU_B_0x0 = 0;
        /** @brief 1s calendar increment is generated each time SS[8:0] = 0 */
    constexpr std::uint32_t RTC_ICSR_BCDU_B_0x1 = 1;
        /** @brief 1s calendar increment is generated each time SS[9:0] = 0 */
    constexpr std::uint32_t RTC_ICSR_BCDU_B_0x2 = 2;
        /** @brief 1s calendar increment is generated each time SS[10:0] = 0 */
    constexpr std::uint32_t RTC_ICSR_BCDU_B_0x3 = 3;
        /** @brief 1s calendar increment is generated each time SS[11:0] = 0 */
    constexpr std::uint32_t RTC_ICSR_BCDU_B_0x4 = 4;
        /** @brief 1s calendar increment is generated each time SS[12:0] = 0 */
    constexpr std::uint32_t RTC_ICSR_BCDU_B_0x5 = 5;
        /** @brief 1s calendar increment is generated each time SS[13:0] = 0 */
    constexpr std::uint32_t RTC_ICSR_BCDU_B_0x6 = 6;
        /** @brief 1s calendar increment is generated each time SS[14:0] = 0 */
    constexpr std::uint32_t RTC_ICSR_BCDU_B_0x7 = 7;

    /** @brief Recalibration pending Flag */
    using RTC_ICSR_RECALPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RTC prescaler register */
    using RTC_PRER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronous prescaler factor */
    using RTC_PRER_PREDIV_S = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 15, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Asynchronous prescaler factor */
    using RTC_PRER_PREDIV_A = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RTC wake-up timer register */
    using RTC_WUTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up auto-reload value bits */
    using RTC_WUTR_WUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up auto-reload output clear value */
    using RTC_WUTR_WUTOCLR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RTC control register */
    using RTC_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ck_wut wake-up clock selection */
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

    /** @brief Timestamp event active edge */
    using RTC_CR_TSEDGE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RTC_TS input rising edge generates a timestamp event (value: 0)
     *          - B_0x1: RTC_TS input falling edge generates a timestamp event (value: 1)
     */
        /** @brief RTC_TS input rising edge generates a timestamp event */
    constexpr std::uint32_t RTC_CR_TSEDGE_B_0x0 = 0;
        /** @brief RTC_TS input falling edge generates a timestamp event */
    constexpr std::uint32_t RTC_CR_TSEDGE_B_0x1 = 1;

    /** @brief RTC_REFIN reference clock detection enable (50 or 60Hz) */
    using RTC_CR_REFCKON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RTC_REFIN detection disabled (value: 0)
     *          - B_0x1: RTC_REFIN detection enabled (value: 1)
     */
        /** @brief RTC_REFIN detection disabled */
    constexpr std::uint32_t RTC_CR_REFCKON_B_0x0 = 0;
        /** @brief RTC_REFIN detection enabled */
    constexpr std::uint32_t RTC_CR_REFCKON_B_0x1 = 1;

    /** @brief Bypass the shadow registers */
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

    /** @brief SSR underflow interrupt enable */
    using RTC_CR_SSRUIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SSR underflow interrupt disabled (value: 0)
     *          - B_0x1: SSR underflow interrupt enabled (value: 1)
     */
        /** @brief SSR underflow interrupt disabled */
    constexpr std::uint32_t RTC_CR_SSRUIE_B_0x0 = 0;
        /** @brief SSR underflow interrupt enabled */
    constexpr std::uint32_t RTC_CR_SSRUIE_B_0x1 = 1;

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

    /** @brief Wake-up timer enable */
    using RTC_CR_WUTE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up timer disabled (value: 0)
     *          - B_0x1: Wake-up timer enabled (value: 1)
     */
        /** @brief Wake-up timer disabled */
    constexpr std::uint32_t RTC_CR_WUTE_B_0x0 = 0;
        /** @brief Wake-up timer enabled */
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

    /** @brief Wake-up timer interrupt enable */
    using RTC_CR_WUTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up timer interrupt disabled (value: 0)
     *          - B_0x1: Wake-up timer interrupt enabled (value: 1)
     */
        /** @brief Wake-up timer interrupt disabled */
    constexpr std::uint32_t RTC_CR_WUTIE_B_0x0 = 0;
        /** @brief Wake-up timer interrupt enabled */
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

    /** @brief Add 1 hour (summer time change) */
    using RTC_CR_ADD1H = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Adds 1 hour to the current time. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RTC_CR_ADD1H_B_0x0 = 0;
        /** @brief Adds 1 hour to the current time. */
    constexpr std::uint32_t RTC_CR_ADD1H_B_0x1 = 1;

    /** @brief Subtract 1 hour (winter time change) */
    using RTC_CR_SUB1H = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Subtracts 1 hour to the current time. (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t RTC_CR_SUB1H_B_0x0 = 0;
        /** @brief Subtracts 1 hour to the current time. */
    constexpr std::uint32_t RTC_CR_SUB1H_B_0x1 = 1;

    /** @brief Backup */
    using RTC_CR_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Calibration output selection */
    using RTC_CR_COSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Calibration output is 512Hz (value: 0)
     *          - B_0x1: Calibration output is 1Hz (value: 1)
     */
        /** @brief Calibration output is 512Hz */
    constexpr std::uint32_t RTC_CR_COSEL_B_0x0 = 0;
        /** @brief Calibration output is 1Hz */
    constexpr std::uint32_t RTC_CR_COSEL_B_0x1 = 1;

    /** @brief Output polarity */
    using RTC_CR_POL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The pin is high when ALRAF/ALRBF/WUTF is asserted (depending on OSEL[1:0]), or when a TAMPxF/ITAMPxF is asserted (if TAMPOE = 1). (value: 0)
     *          - B_0x1: The pin is low when ALRAF/ALRBF/WUTF is asserted (depending on OSEL[1:0]), or when a TAMPxF/ITAMPxF is asserted (if TAMPOE = 1). (value: 1)
     */
        /** @brief The pin is high when ALRAF/ALRBF/WUTF is asserted (depending on OSEL[1:0]), or when a TAMPxF/ITAMPxF is asserted (if TAMPOE = 1). */
    constexpr std::uint32_t RTC_CR_POL_B_0x0 = 0;
        /** @brief The pin is low when ALRAF/ALRBF/WUTF is asserted (depending on OSEL[1:0]), or when a TAMPxF/ITAMPxF is asserted (if TAMPOE = 1). */
    constexpr std::uint32_t RTC_CR_POL_B_0x1 = 1;

    /** @brief Output selection */
    using RTC_CR_OSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Output disabled (value: 0)
     *          - B_0x1: Alarm A output enabled (value: 1)
     *          - B_0x2: Alarm B output enabled (value: 2)
     *          - B_0x3: Wake-up output enabled (value: 3)
     */
        /** @brief Output disabled */
    constexpr std::uint32_t RTC_CR_OSEL_B_0x0 = 0;
        /** @brief Alarm A output enabled */
    constexpr std::uint32_t RTC_CR_OSEL_B_0x1 = 1;
        /** @brief Alarm B output enabled */
    constexpr std::uint32_t RTC_CR_OSEL_B_0x2 = 2;
        /** @brief Wake-up output enabled */
    constexpr std::uint32_t RTC_CR_OSEL_B_0x3 = 3;

    /** @brief Calibration output enable */
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

    /** @brief Activate timestamp on tamper detection event */
    using RTC_CR_TAMPTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tamper detection event does not cause a RTC timestamp to be saved if none of the RTC_TAMPSCR bit is set (value: 0)
     *          - B_0x1: Save RTC timestamp on tamper detection event (for any tamper event, whatever RTC_TAMPSCR value) (value: 1)
     */
        /** @brief Tamper detection event does not cause a RTC timestamp to be saved if none of the RTC_TAMPSCR bit is set */
    constexpr std::uint32_t RTC_CR_TAMPTS_B_0x0 = 0;
        /** @brief Save RTC timestamp on tamper detection event (for any tamper event, whatever RTC_TAMPSCR value) */
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

    /** @brief Alarm A flag automatic clear */
    using RTC_CR_ALRAFCLR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Alarm A event generates a trigger event and ALRAF must be cleared by software to allow next alarm event. (value: 0)
     *          - B_0x1: Alarm A event generates a trigger event. (value: 1)
     */
        /** @brief Alarm A event generates a trigger event and ALRAF must be cleared by software to allow next alarm event. */
    constexpr std::uint32_t RTC_CR_ALRAFCLR_B_0x0 = 0;
        /** @brief Alarm A event generates a trigger event. */
    constexpr std::uint32_t RTC_CR_ALRAFCLR_B_0x1 = 1;

    /** @brief Alarm B flag automatic clear */
    using RTC_CR_ALRBFCLR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Alarm B event generates a trigger event and ALRBF must be cleared by software to allow next alarm event. (value: 0)
     *          - B_0x1: Alarm B event generates a trigger event. (value: 1)
     */
        /** @brief Alarm B event generates a trigger event and ALRBF must be cleared by software to allow next alarm event. */
    constexpr std::uint32_t RTC_CR_ALRBFCLR_B_0x0 = 0;
        /** @brief Alarm B event generates a trigger event. */
    constexpr std::uint32_t RTC_CR_ALRBFCLR_B_0x1 = 1;

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

    /** @brief RTC_OUT2 output enable */
    using RTC_CR_OUT2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RTC privilege mode control register */
    using RTC_PRIVCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alarm A and SSR underflow privilege protection */
    using RTC_PRIVCFGR_ALRAPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RTC Alarm A and SSR underflow configuration and interrupt clear can be written when the APB access is privileged or non-privileged. (value: 0)
     *          - B_0x1: RTC Alarm A and SSR underflow configuration and interrupt clear can be written only when the APB access is privileged. (value: 1)
     */
        /** @brief RTC Alarm A and SSR underflow configuration and interrupt clear can be written when the APB access is privileged or non-privileged. */
    constexpr std::uint32_t RTC_PRIVCFGR_ALRAPRIV_B_0x0 = 0;
        /** @brief RTC Alarm A and SSR underflow configuration and interrupt clear can be written only when the APB access is privileged. */
    constexpr std::uint32_t RTC_PRIVCFGR_ALRAPRIV_B_0x1 = 1;

    /** @brief Alarm B privilege protection */
    using RTC_PRIVCFGR_ALRBPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RTC Alarm B configuration and interrupt clear can be written when the APB access is privileged or non-privileged. (value: 0)
     *          - B_0x1: RTC Alarm B configuration and interrupt clear can be written only when the APB access is privileged. (value: 1)
     */
        /** @brief RTC Alarm B configuration and interrupt clear can be written when the APB access is privileged or non-privileged. */
    constexpr std::uint32_t RTC_PRIVCFGR_ALRBPRIV_B_0x0 = 0;
        /** @brief RTC Alarm B configuration and interrupt clear can be written only when the APB access is privileged. */
    constexpr std::uint32_t RTC_PRIVCFGR_ALRBPRIV_B_0x1 = 1;

    /** @brief Wake-up timer privilege protection */
    using RTC_PRIVCFGR_WUTPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RTC wake-up timer configuration and interrupt clear can be written when the APB access is privileged or non-privileged. (value: 0)
     *          - B_0x1: RTC wake-up timer configuration and interrupt clear can be written only when the APB access is privileged. (value: 1)
     */
        /** @brief RTC wake-up timer configuration and interrupt clear can be written when the APB access is privileged or non-privileged. */
    constexpr std::uint32_t RTC_PRIVCFGR_WUTPRIV_B_0x0 = 0;
        /** @brief RTC wake-up timer configuration and interrupt clear can be written only when the APB access is privileged. */
    constexpr std::uint32_t RTC_PRIVCFGR_WUTPRIV_B_0x1 = 1;

    /** @brief Timestamp privilege protection */
    using RTC_PRIVCFGR_TSPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RTC Timestamp configuration and interrupt clear can be written when the APB access is privileged or non-privileged. (value: 0)
     *          - B_0x1: RTC Timestamp configuration and interrupt clear can be written only when the APB access is privileged. (value: 1)
     */
        /** @brief RTC Timestamp configuration and interrupt clear can be written when the APB access is privileged or non-privileged. */
    constexpr std::uint32_t RTC_PRIVCFGR_TSPRIV_B_0x0 = 0;
        /** @brief RTC Timestamp configuration and interrupt clear can be written only when the APB access is privileged. */
    constexpr std::uint32_t RTC_PRIVCFGR_TSPRIV_B_0x1 = 1;

    /** @brief Shift register, Delight saving, calibration and reference clock privilege protection */
    using RTC_PRIVCFGR_CALPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Shift register, Delight saving, calibration and reference clock can be written when the APB access is privileged or non-privileged. (value: 0)
     *          - B_0x1: Shift register, Delight saving, calibration and reference clock can be written only when the APB access is privileged. (value: 1)
     */
        /** @brief Shift register, Delight saving, calibration and reference clock can be written when the APB access is privileged or non-privileged. */
    constexpr std::uint32_t RTC_PRIVCFGR_CALPRIV_B_0x0 = 0;
        /** @brief Shift register, Delight saving, calibration and reference clock can be written only when the APB access is privileged. */
    constexpr std::uint32_t RTC_PRIVCFGR_CALPRIV_B_0x1 = 1;

    /** @brief Initialization privilege protection */
    using RTC_PRIVCFGR_INITPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RTC Initialization mode, calendar and prescalers registers can be written when the APB access is privileged or non-privileged. (value: 0)
     *          - B_0x1: RTC Initialization mode, calendar and prescalers registers can be written only when the APB access is privileged. (value: 1)
     */
        /** @brief RTC Initialization mode, calendar and prescalers registers can be written when the APB access is privileged or non-privileged. */
    constexpr std::uint32_t RTC_PRIVCFGR_INITPRIV_B_0x0 = 0;
        /** @brief RTC Initialization mode, calendar and prescalers registers can be written only when the APB access is privileged. */
    constexpr std::uint32_t RTC_PRIVCFGR_INITPRIV_B_0x1 = 1;

    /** @brief RTC privilege protection */
    using RTC_PRIVCFGR_PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: All RTC registers can be written when the APB access is privileged or non-privileged, except the registers protected by other privilege protection bits. (value: 0)
     *          - B_0x1: All RTC registers can be written only when the APB access is privileged. (value: 1)
     */
        /** @brief All RTC registers can be written when the APB access is privileged or non-privileged, except the registers protected by other privilege protection bits. */
    constexpr std::uint32_t RTC_PRIVCFGR_PRIV_B_0x0 = 0;
        /** @brief All RTC registers can be written only when the APB access is privileged. */
    constexpr std::uint32_t RTC_PRIVCFGR_PRIV_B_0x1 = 1;

    /** @brief RTC secure configuration register */
    using RTC_SECCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alarm A and SSR underflow protection */
    using RTC_SECCFGR_ALRASEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RTC alarm A and SSR underflow configuration and interrupt clear can be written when the APB access is secure or nonsecure. (value: 0)
     *          - B_0x1: RTC alarm A and SSR underflow configuration and interrupt clear can be written only when the APB access is secure. (value: 1)
     */
        /** @brief RTC alarm A and SSR underflow configuration and interrupt clear can be written when the APB access is secure or nonsecure. */
    constexpr std::uint32_t RTC_SECCFGR_ALRASEC_B_0x0 = 0;
        /** @brief RTC alarm A and SSR underflow configuration and interrupt clear can be written only when the APB access is secure. */
    constexpr std::uint32_t RTC_SECCFGR_ALRASEC_B_0x1 = 1;

    /** @brief Alarm B protection */
    using RTC_SECCFGR_ALRBSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RTC alarm B configuration and interrupt clear can be written when the APB access is secure or nonsecure. (value: 0)
     *          - B_0x1: RTC alarm B configuration and interrupt clear can be written only when the APB access is secure. (value: 1)
     */
        /** @brief RTC alarm B configuration and interrupt clear can be written when the APB access is secure or nonsecure. */
    constexpr std::uint32_t RTC_SECCFGR_ALRBSEC_B_0x0 = 0;
        /** @brief RTC alarm B configuration and interrupt clear can be written only when the APB access is secure. */
    constexpr std::uint32_t RTC_SECCFGR_ALRBSEC_B_0x1 = 1;

    /** @brief Wake-up timer protection */
    using RTC_SECCFGR_WUTSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RTC wake-up timer configuration and interrupt clear can be written when the APB access is secure or nonsecure. (value: 0)
     *          - B_0x1: RTC wake-up timer configuration and interrupt clear can be written only when the APB access is secure. (value: 1)
     */
        /** @brief RTC wake-up timer configuration and interrupt clear can be written when the APB access is secure or nonsecure. */
    constexpr std::uint32_t RTC_SECCFGR_WUTSEC_B_0x0 = 0;
        /** @brief RTC wake-up timer configuration and interrupt clear can be written only when the APB access is secure. */
    constexpr std::uint32_t RTC_SECCFGR_WUTSEC_B_0x1 = 1;

    /** @brief Timestamp protection */
    using RTC_SECCFGR_TSSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RTC timestamp configuration and interrupt clear can be written when the APB access is secure or nonsecure. (value: 0)
     *          - B_0x1: RTC timestamp configuration and interrupt clear can be written only when the APB access is secure. (value: 1)
     */
        /** @brief RTC timestamp configuration and interrupt clear can be written when the APB access is secure or nonsecure. */
    constexpr std::uint32_t RTC_SECCFGR_TSSEC_B_0x0 = 0;
        /** @brief RTC timestamp configuration and interrupt clear can be written only when the APB access is secure. */
    constexpr std::uint32_t RTC_SECCFGR_TSSEC_B_0x1 = 1;

    /** @brief Shift register, daylight saving, calibration and reference clock protection */
    using RTC_SECCFGR_CALSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Shift register, daylight saving, calibration and reference clock can be written when the APB access is secure or nonsecure. (value: 0)
     *          - B_0x1: Shift register, daylight saving, calibration and reference clock can be written only when the APB access is secure. (value: 1)
     */
        /** @brief Shift register, daylight saving, calibration and reference clock can be written when the APB access is secure or nonsecure. */
    constexpr std::uint32_t RTC_SECCFGR_CALSEC_B_0x0 = 0;
        /** @brief Shift register, daylight saving, calibration and reference clock can be written only when the APB access is secure. */
    constexpr std::uint32_t RTC_SECCFGR_CALSEC_B_0x1 = 1;

    /** @brief Initialization protection */
    using RTC_SECCFGR_INITSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RTC Initialization mode, calendar and prescalers registers can be written when the APB access is secure or nonsecure. (value: 0)
     *          - B_0x1: RTC Initialization mode, calendar and prescalers registers can be written only when the APB access is secure. (value: 1)
     */
        /** @brief RTC Initialization mode, calendar and prescalers registers can be written when the APB access is secure or nonsecure. */
    constexpr std::uint32_t RTC_SECCFGR_INITSEC_B_0x0 = 0;
        /** @brief RTC Initialization mode, calendar and prescalers registers can be written only when the APB access is secure. */
    constexpr std::uint32_t RTC_SECCFGR_INITSEC_B_0x1 = 1;

    /** @brief RTC global protection */
    using RTC_SECCFGR_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: All RTC registers can be written when the APB access is secure or nonsecure, except the registers protected by other secure protection bits. (value: 0)
     *          - B_0x1: All RTC registers can be written only when the APB access is secure. (value: 1)
     */
        /** @brief All RTC registers can be written when the APB access is secure or nonsecure, except the registers protected by other secure protection bits. */
    constexpr std::uint32_t RTC_SECCFGR_SEC_B_0x0 = 0;
        /** @brief All RTC registers can be written only when the APB access is secure. */
    constexpr std::uint32_t RTC_SECCFGR_SEC_B_0x1 = 1;

    /** @brief RTC write protection register */
    using RTC_WPR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Write protection key */
    using RTC_WPR_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RTC calibration register */
    using RTC_CALR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Calibration minus */
    using RTC_CALR_CALM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RTC low-power mode */
    using RTC_CALR_LPCAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Calibration window is 2less thansup>20less than/sup> RTCCLK, which is a high-consumption mode. (value: 0)
     *          - B_0x1: Calibration window is 2less thansup>20less than/sup> ck_apre, which is the required configuration for ultra-low consumption mode. (value: 1)
     */
        /** @brief Calibration window is 2less thansup>20less than/sup> RTCCLK, which is a high-consumption mode. */
    constexpr std::uint32_t RTC_CALR_LPCAL_B_0x0 = 0;
        /** @brief Calibration window is 2less thansup>20less than/sup> ck_apre, which is the required configuration for ultra-low consumption mode. */
    constexpr std::uint32_t RTC_CALR_LPCAL_B_0x1 = 1;

    /** @brief Use a 16-second calibration cycle period */
    using RTC_CALR_CALW16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Use an 8-second calibration cycle period */
    using RTC_CALR_CALW8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Increase frequency of RTC by 488. */
    using RTC_CALR_CALP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No RTCCLK pulses are added. (value: 0)
     *          - B_0x1: One RTCCLK pulse is effectively inserted every 2less thansup>11less than/sup> pulses (frequency increased by 488. (value: 1)
     */
        /** @brief No RTCCLK pulses are added. */
    constexpr std::uint32_t RTC_CALR_CALP_B_0x0 = 0;
        /** @brief One RTCCLK pulse is effectively inserted every 2less thansup>11less than/sup> pulses (frequency increased by 488. */
    constexpr std::uint32_t RTC_CALR_CALP_B_0x1 = 1;

    /** @brief RTC shift control register */
    using RTC_SHIFTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Subtract a fraction of a second */
    using RTC_SHIFTR_SUBFS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 15, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Add one second */
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
    /** @brief RTC timestamp subsecond register */
    using RTC_TSSSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Subsecond value/synchronous binary counter values */
    using RTC_TSSSR_SS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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
     *          - B_0x1: DU[3:0] represents the week day. (value: 1)
     */
        /** @brief DU[3:0] represents the date units */
    constexpr std::uint32_t RTC_ALRMAR_WDSEL_B_0x0 = 0;
        /** @brief DU[3:0] represents the week day. */
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

    /** @brief RTC alarm A subsecond register */
    using RTC_ALRMASSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Subseconds value */
    using RTC_ALRMASSR_SS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 15, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Mask the most-significant bits starting at this bit */
    using RTC_ALRMASSR_MASKSS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No comparison on subseconds for Alarm A. (value: 0)
     *          - B_0x1: SS[31:1] are don't care in Alarm A comparison. (value: 1)
     */
        /** @brief No comparison on subseconds for Alarm A. */
    constexpr std::uint32_t RTC_ALRMASSR_MASKSS_B_0x0 = 0;
        /** @brief SS[31:1] are don't care in Alarm A comparison. */
    constexpr std::uint32_t RTC_ALRMASSR_MASKSS_B_0x1 = 1;

    /** @brief Clear synchronous counter on alarm (Binary mode only) */
    using RTC_ALRMASSR_SSCLR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The synchronous binary counter (SS[31:0] in RTC_SSR) is free-running. (value: 0)
     *          - B_0x1: The synchronous binary counter (SS[31:0] in RTC_SSR) is running from 0xFFFFFFFF to RTC_ALRABINR. (value: 1)
     */
        /** @brief The synchronous binary counter (SS[31:0] in RTC_SSR) is free-running. */
    constexpr std::uint32_t RTC_ALRMASSR_SSCLR_B_0x0 = 0;
        /** @brief The synchronous binary counter (SS[31:0] in RTC_SSR) is running from 0xFFFFFFFF to RTC_ALRABINR. */
    constexpr std::uint32_t RTC_ALRMASSR_SSCLR_B_0x1 = 1;

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
     *          - B_0x1: DU[3:0] represents the week day. (value: 1)
     */
        /** @brief DU[3:0] represents the date units */
    constexpr std::uint32_t RTC_ALRMBR_WDSEL_B_0x0 = 0;
        /** @brief DU[3:0] represents the week day. */
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

    /** @brief RTC alarm B subsecond register */
    using RTC_ALRMBSSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Subseconds value */
    using RTC_ALRMBSSR_SS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 15, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Mask the most-significant bits starting at this bit */
    using RTC_ALRMBSSR_MASKSS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No comparison on subseconds for Alarm B. (value: 0)
     *          - B_0x1: SS[31:1] are don't care in Alarm B comparison. (value: 1)
     */
        /** @brief No comparison on subseconds for Alarm B. */
    constexpr std::uint32_t RTC_ALRMBSSR_MASKSS_B_0x0 = 0;
        /** @brief SS[31:1] are don't care in Alarm B comparison. */
    constexpr std::uint32_t RTC_ALRMBSSR_MASKSS_B_0x1 = 1;

    /** @brief Clear synchronous counter on alarm (Binary mode only) */
    using RTC_ALRMBSSR_SSCLR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The synchronous binary counter (SS[31:0] in RTC_SSR) is free-running. (value: 0)
     *          - B_0x1: The synchronous binary counter (SS[31:0] in RTC_SSR) is running from 0xFFFFFFFF to RTC_ALRBBINR. (value: 1)
     */
        /** @brief The synchronous binary counter (SS[31:0] in RTC_SSR) is free-running. */
    constexpr std::uint32_t RTC_ALRMBSSR_SSCLR_B_0x0 = 0;
        /** @brief The synchronous binary counter (SS[31:0] in RTC_SSR) is running from 0xFFFFFFFF to RTC_ALRBBINR. */
    constexpr std::uint32_t RTC_ALRMBSSR_SSCLR_B_0x1 = 1;

    /** @brief RTC status register */
    using RTC_SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alarm A flag */
    using RTC_SR_ALRAF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alarm B flag */
    using RTC_SR_ALRBF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up timer flag */
    using RTC_SR_WUTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timestamp flag */
    using RTC_SR_TSF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timestamp overflow flag */
    using RTC_SR_TSOVF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Internal timestamp flag */
    using RTC_SR_ITSF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SSR underflow flag */
    using RTC_SR_SSRUF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RTC nonsecure masked interrupt status register */
    using RTC_MISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alarm A masked flag */
    using RTC_MISR_ALRAMF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alarm B nonsecure masked flag */
    using RTC_MISR_ALRBMF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up timer nonsecure masked flag */
    using RTC_MISR_WUTMF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timestamp nonsecure masked flag */
    using RTC_MISR_TSMF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timestamp overflow nonsecure masked flag */
    using RTC_MISR_TSOVMF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Internal timestamp nonsecure masked flag */
    using RTC_MISR_ITSMF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SSR underflow nonsecure masked flag */
    using RTC_MISR_SSRUMF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RTC secure masked interrupt status register */
    using RTC_SMISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x58, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alarm A interrupt secure masked flag */
    using RTC_SMISR_ALRAMF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alarm B interrupt secure masked flag */
    using RTC_SMISR_ALRBMF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up timer interrupt secure masked flag */
    using RTC_SMISR_WUTMF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timestamp interrupt secure masked flag */
    using RTC_SMISR_TSMF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timestamp overflow interrupt secure masked flag */
    using RTC_SMISR_TSOVMF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Internal timestamp interrupt secure masked flag */
    using RTC_SMISR_ITSMF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SSR underflow secure masked flag */
    using RTC_SMISR_SSRUMF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RTC status clear register */
    using RTC_SCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear alarm A flag */
    using RTC_SCR_CALRAF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear alarm B flag */
    using RTC_SCR_CALRBF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear wake-up timer flag */
    using RTC_SCR_CWUTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear timestamp flag */
    using RTC_SCR_CTSF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear timestamp overflow flag */
    using RTC_SCR_CTSOVF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear internal timestamp flag */
    using RTC_SCR_CITSF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear SSR underflow flag */
    using RTC_SCR_CSSRUF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RTC timestamp on tamper control register */
    using RTC_TAMPTSCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x64, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timestamp on external tamper TAMP1 event */
    using RTC_TAMPTSCR_TAMP1TS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: When TAMPTS=0, TAMP1 detection event does not cause an RTC timestamp to be saved (value: 0)
     *          - B_0x1: Save RTC timestamp on TAMP1 detection event (whatever TAMPTS value) (value: 1)
     */
        /** @brief When TAMPTS=0, TAMP1 detection event does not cause an RTC timestamp to be saved */
    constexpr std::uint32_t RTC_TAMPTSCR_TAMP1TS_B_0x0 = 0;
        /** @brief Save RTC timestamp on TAMP1 detection event (whatever TAMPTS value) */
    constexpr std::uint32_t RTC_TAMPTSCR_TAMP1TS_B_0x1 = 1;

    /** @brief Timestamp on external tamper TAMP2 event */
    using RTC_TAMPTSCR_TAMP2TS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: When TAMPTS=0, TAMP2 detection event does not cause an RTC timestamp to be saved (value: 0)
     *          - B_0x1: Save RTC timestamp on TAMP2 detection event (whatever TAMPTS value) (value: 1)
     */
        /** @brief When TAMPTS=0, TAMP2 detection event does not cause an RTC timestamp to be saved */
    constexpr std::uint32_t RTC_TAMPTSCR_TAMP2TS_B_0x0 = 0;
        /** @brief Save RTC timestamp on TAMP2 detection event (whatever TAMPTS value) */
    constexpr std::uint32_t RTC_TAMPTSCR_TAMP2TS_B_0x1 = 1;

    /** @brief Timestamp on external tamper TAMP3 event */
    using RTC_TAMPTSCR_TAMP3TS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: When TAMPTS=0, TAMP3 detection event does not cause an RTC timestamp to be saved (value: 0)
     *          - B_0x1: Save RTC timestamp on TAMP3 detection event (whatever TAMPTS value) (value: 1)
     */
        /** @brief When TAMPTS=0, TAMP3 detection event does not cause an RTC timestamp to be saved */
    constexpr std::uint32_t RTC_TAMPTSCR_TAMP3TS_B_0x0 = 0;
        /** @brief Save RTC timestamp on TAMP3 detection event (whatever TAMPTS value) */
    constexpr std::uint32_t RTC_TAMPTSCR_TAMP3TS_B_0x1 = 1;

    /** @brief Timestamp on external tamper TAMP4 event */
    using RTC_TAMPTSCR_TAMP4TS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: When TAMPTS=0, TAMP4 detection event does not cause an RTC timestamp to be saved (value: 0)
     *          - B_0x1: Save RTC timestamp on TAMP4 detection event (whatever TAMPTS value) (value: 1)
     */
        /** @brief When TAMPTS=0, TAMP4 detection event does not cause an RTC timestamp to be saved */
    constexpr std::uint32_t RTC_TAMPTSCR_TAMP4TS_B_0x0 = 0;
        /** @brief Save RTC timestamp on TAMP4 detection event (whatever TAMPTS value) */
    constexpr std::uint32_t RTC_TAMPTSCR_TAMP4TS_B_0x1 = 1;

    /** @brief Timestamp on external tamper TAMP5 event */
    using RTC_TAMPTSCR_TAMP5TS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: When TAMPTS=0, TAMP5 detection event does not cause an RTC timestamp to be saved (value: 0)
     *          - B_0x1: Save RTC timestamp on TAMP5 detection event (whatever TAMPTS value) (value: 1)
     */
        /** @brief When TAMPTS=0, TAMP5 detection event does not cause an RTC timestamp to be saved */
    constexpr std::uint32_t RTC_TAMPTSCR_TAMP5TS_B_0x0 = 0;
        /** @brief Save RTC timestamp on TAMP5 detection event (whatever TAMPTS value) */
    constexpr std::uint32_t RTC_TAMPTSCR_TAMP5TS_B_0x1 = 1;

    /** @brief Timestamp on internal tamper event */
    using RTC_TAMPTSCR_ITAMPTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: When TAMPTS=0, internal tamper detection event does not cause a RTC timestamp to be saved (value: 0)
     *          - B_0x1: Save RTC timestamp on any internal tamper detection event (whatever TAMPTS value) (value: 1)
     */
        /** @brief When TAMPTS=0, internal tamper detection event does not cause a RTC timestamp to be saved */
    constexpr std::uint32_t RTC_TAMPTSCR_ITAMPTS_B_0x0 = 0;
        /** @brief Save RTC timestamp on any internal tamper detection event (whatever TAMPTS value) */
    constexpr std::uint32_t RTC_TAMPTSCR_ITAMPTS_B_0x1 = 1;

    /** @brief RTC timestamp status register */
    using RTC_TSIDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x68, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timestamp flag source identification */
    using RTC_TSIDR_TSID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RTC_TS pin event (value: 0)
     *          - B_0x1: TAMP1F event (value: 1)
     *          - B_0x2: TAMP2F event (value: 2)
     *          - B_0x3: TAMP3F event (value: 3)
     *          - B_0x4: TAMP4F event (value: 4)
     *          - B_0x5: TAMP5F event (value: 5)
     *          - B_0x10: Internal tamper event (value: 16)
     *          - B_0x20: Internal timestamp event (from rtc_its internal signal) (value: 32)
     */
        /** @brief RTC_TS pin event */
    constexpr std::uint32_t RTC_TSIDR_TSID_B_0x0 = 0;
        /** @brief TAMP1F event */
    constexpr std::uint32_t RTC_TSIDR_TSID_B_0x1 = 1;
        /** @brief TAMP2F event */
    constexpr std::uint32_t RTC_TSIDR_TSID_B_0x2 = 2;
        /** @brief TAMP3F event */
    constexpr std::uint32_t RTC_TSIDR_TSID_B_0x3 = 3;
        /** @brief TAMP4F event */
    constexpr std::uint32_t RTC_TSIDR_TSID_B_0x4 = 4;
        /** @brief TAMP5F event */
    constexpr std::uint32_t RTC_TSIDR_TSID_B_0x5 = 5;
        /** @brief Internal tamper event */
    constexpr std::uint32_t RTC_TSIDR_TSID_B_0x10 = 16;
        /** @brief Internal timestamp event (from rtc_its internal signal) */
    constexpr std::uint32_t RTC_TSIDR_TSID_B_0x20 = 32;

    /** @brief RTC alarm A binary mode register */
    using RTC_ALRABINR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x70, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronous counter alarm value in Binary mode */
    using RTC_ALRABINR_SS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RTC alarm B binary mode register */
    using RTC_ALRBBINR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x74, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronous counter alarm value in Binary mode */
    using RTC_ALRBBINR_SS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
