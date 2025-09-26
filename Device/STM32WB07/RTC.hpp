/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32WB07_RTC_HPP
#define EMBEDDED_PP_STM32WB07_RTC_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief RTC peripheral */
namespace STM32WB07::RTC {

    /** @brief RTC_TR register */
    using RTC_TR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Second units in BCD format. */
    using RTC_TR_SU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Second tens in BCD format. */
    using RTC_TR_ST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Minute units in BCD format. */
    using RTC_TR_MNU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Minute tens in BCD format. */
    using RTC_TR_MNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hour units in BCD format. */
    using RTC_TR_HU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hour tens in BCD format. */
    using RTC_TR_HT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AM/PM notation. 0: AM or 24-hour format 1: PM */
    using RTC_TR_PM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RTC_DR register */
    using RTC_DR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Date units in BCD format. */
    using RTC_DR_DU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Date tens in BCD format. */
    using RTC_DR_DT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Month units in BCD format. */
    using RTC_DR_MU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Month tens in BCD format. */
    using RTC_DR_MT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Week day units 000: forbidden 001: Monday 010: Tuesday 011: Wednesday 100: Thursday 101: Friday 110: Saturday 111: Sunday */
    using RTC_DR_WDU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Year units in BCD format. */
    using RTC_DR_YU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Year tens in BCD format. */
    using RTC_DR_YT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RTC_CR register */
    using RTC_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wakeup clock selection 000: RTC/16 clock is selected 001: RTC/8 clock is selected 010: RTC/4 clock is selected 011: RTC/2 clock is selected 10x: ck_spre (usually 1 Hz) clock is selected 11x: ck_spre (usually 1 Hz) clock is selected and 216 is added to the WUT counter value */
    using RTC_CR_WUCKSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bypass the shadow registers 0: Calendar values (when reading from RTC_SSR, RTC_TR, and RTC_DR) are taken from the shadow registers, which are updated once every two RTCCLK cycles. 1: Calendar values (when reading from RTC_SSR, RTC_TR, and RTC_DR) are taken directly from the calendar counters. */
    using RTC_CR_BYPSHAD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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

    /** @brief Alarm A enable 0: Alarm A disabled 1: Alarm A enabled */
    using RTC_CR_ALRAE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wakeup timer enable 0: Wakeup timer disabled 1: Wakeup timer enabled */
    using RTC_CR_WUTE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alarm A interrupt enable 0: Alarm A interrupt disabled 1: Alarm A interrupt enabled */
    using RTC_CR_ALRAIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wakeup timer interrupt enable 0: Wakeup timer interrupt disabled 1: Wakeup timer interrupt enabled */
    using RTC_CR_WUTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Add 1 hour (summer time change) When this bit is set outside initialization mode, 1 hour is added to the calendar time. This bit is always read as 0. 0: No effect 1: Adds 1 hour to the current time. This can be used for summer time change */
    using RTC_CR_ADD1H = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Subtract 1 hour (winter time change) When this bit is set outside initialization mode, 1 hour is subtracted to the calendar time if the current hour is not 0. This bit is always read as 0. Setting this bit has no effect when current hour is 0. 0: No effect 1: Subtracts 1 hour to the current time. This can be used for winter time change. */
    using RTC_CR_SUB1H = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Backup This bit can be written by the user to memorize whether the daylight saving time change has been performed or not. */
    using RTC_CR_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Calibration output selection When COE=1, this bit selects which signal is output on RTC_CALIB. 0: Calibration output is 512 Hz 1: Calibration output is 1 Hz These frequencies are valid for RTCCLK at 32.768 kHz and prescalers at their default values (PREDIV_A=127 and PREDIV_S=255). */
    using RTC_CR_COSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Output polarity This bit is used to configure the polarity of RTC_ALARM output 0: The pin is high when ALRAF/WUTF is asserted (depending on OSEL[1:0]) 1: The pin is low when ALRAF/WUTF is asserted (depending on OSEL[1:0]). */
    using RTC_CR_POL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Output selection These bits are used to select the flag to be routed to RTC_ALARM output 00: Output disabled 01: Alarm A output enabled 10: Reserved 11: Wakeup output enabled */
    using RTC_CR_OSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Calibration output enable This bit enables the RTC_CALIB output 0: Calibration output disabled 1: Calibration output enabled */
    using RTC_CR_COE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RTC_ISR register */
    using RTC_ISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alarm A write flag This bit is set by hardware when Alarm A values can be changed, after the ALRAE bit has been set to 0 in RTC_CR. It is cleared by hardware in initialization mode. 0: Alarm A update not allowed 1: Alarm A update allowed. */
    using RTC_ISR_ALRAWF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wakeup timer write flag This bit is set by hardware when the wakeup timer values can be changed, after the WUTE bit has been set to 0 in RTC_CR. 0: Wakeup timer configuration update not allowed 1: Wakeup timer configuration update allowed. */
    using RTC_ISR_WUTWF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Shift operation pending 0: No shift operation is pending 1: A shift operation is pending This flag is set by hardware as soon as a shift operation is initiated by a write to the RTC_SHIFTR register. It is cleared by hardware when the corresponding shift operation has been executed. Writing to the SHPF bit has no effect. */
    using RTC_ISR_SHPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Initialization status flag This bit is set by hardware when the calendar year field is different from 0 (power-on reset state). 0: Calendar has not been initialized 1: Calendar has been initialized */
    using RTC_ISR_INITS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Registers synchronization flag This bit is set by hardware each time the calendar registers are copied into the shadow registers (RTC_SSRx, RTC_TRx and RTC_DRx). This bit is cleared by hardware in initialization mode, while a shift operation is pending (SHPF=1), or when in bypass shadow regsiter mode (BYPSHAD=1). This bit can also be cleared by software. It is cleared either by software or by hardware in initialization mode. 0: Calendar shadow registers not yet synchronized 1: Calendar shadow registers synchronized. */
    using RTC_ISR_RSF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Initialization flag When this bit is set to 1, the RTC is in initialization state, and the time, date and prescaler registers can be updated. 0: Calendar registers update is not allowed 1: Calendar registers update is allowed. */
    using RTC_ISR_INITF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Initialization mode 0: Free running mode 1: Initialization mode used to program time and date register (RTC_TR and RTC_DR), and prescaler register (RTC_PRER). Counters are stopped and start counting from the new value when INIT is reset. */
    using RTC_ISR_INIT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alarm A flag This flag is set by hardware when the time/date registers (RTC_TR and RTC_DR) match the Alarm A register (RTC_ALRMAR). This flag is cleared by software by writing 0. */
    using RTC_ISR_ALRAF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wakeup timer flag This flag is set by hardware when the wakeup auto-reload counter reaches 0. This flag is cleared by software by writing 0. This flag must be cleared by software at least 1.5 RTCCLK periods before WUTF is set to 1 again. */
    using RTC_ISR_WUTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Recalibration pending Flag The RECALPF status flag is automatically set to 1 when software writes to the RTC_CALR register, indicating that the RTC_CALR register is blocked. When the new calibration settings are taken into account, this bit returns to 0. */
    using RTC_ISR_RECALPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RTC_PRER register */
    using RTC_PRER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronous prescaler factor This is the synchronous division factor: ck_spre frequency = ck_apre frequency/(PREDIV_S+1) */
    using RTC_PRER_PREDIV_S = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 15, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Asynchronous prescaler factor This is the asynchronous division factor: ck_apre frequency = RTCCLK frequency/(PREDIV_A+1) */
    using RTC_PRER_PREDIV_A = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RTC_WUTR register */
    using RTC_WUTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wakeup auto-reload value bits When the wakeup timer is enabled (WUTE set to 1), the WUTF flag is set every (WUT[15:0] + 1) ck_wut cycles. The ck_wut period is selected through WUCKSEL[2:0] bits of the RTC_CR register When WUCKSEL[2] = 1, the wakeup timer becomes 17-bits and WUCKSEL[1] effectively becomes WUT[16] the most-significant bit to be reloaded into the timer. The first assertion of WUTF occurs (WUT+1) ck_wut cycles after WUTE is set. Setting WUT[15:0] to 0x0000 with WUCKSEL[2:0] =011 (RTCCLK/2) is forbidden. */
    using RTC_WUTR_WUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RTC_ALRMAR register */
    using RTC_ALRMAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Second units in BCD format. */
    using RTC_ALRMAR_SU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Second tens in BCD format. */
    using RTC_ALRMAR_ST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alarm A seconds mask 0: Alarm A set if the seconds match 1: Seconds dont care in Alarm A comparison */
    using RTC_ALRMAR_MSK1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Minute units in BCD format. */
    using RTC_ALRMAR_MNU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Minute tens in BCD format. */
    using RTC_ALRMAR_MNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alarm A minutes mask 0: Alarm A set if the minutes match 1: Minutes dont care in Alarm A comparison */
    using RTC_ALRMAR_MSK2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hour units in BCD format. */
    using RTC_ALRMAR_HU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hour tens in BCD format. */
    using RTC_ALRMAR_HT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AM/PM notation 0: AM or 24-hour format 1: PM */
    using RTC_ALRMAR_PM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alarm A hours mask 0: Alarm A set if the hours match 1: Hours dont care in Alarm A comparison */
    using RTC_ALRMAR_MSK3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Date units or day in BCD format. */
    using RTC_ALRMAR_DU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Date tens in BCD format. */
    using RTC_ALRMAR_DT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Week day selection 0: DU[3:0] represents the date units 1: DU[3:0] represents the week day. DT[1:0] is dont care. */
    using RTC_ALRMAR_WDSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alarm A date mask 0: Alarm A set if the date/day match 1: Date/day dont care in Alarm A comparison */
    using RTC_ALRMAR_MSK4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RTC_WPR register */
    using RTC_WPR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Write protection key This byte is written by software. Reading this byte always returns 0x00 */
    using RTC_WPR_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RTC_SSR register */
    using RTC_SSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sub second value SS[15:0] is the value in the synchronous prescalers counter. The fraction of a second is given by the formula below: Second fraction = ( PREDIV_S - SS ) / ( PREDIV_S + 1 ) */
    using RTC_SSR_SS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RTC_SHIFTR register */
    using RTC_SHIFTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Subtract a fraction of a second These bits are write only and is always read as zero. Writing to this bit has no effect when a shift operation is pending (when SHPF=1, in RTC_ISR). The value which is written to SUBFS is added to the synchronous prescalers counter. Since this counter counts down, this operation effectively subtracts from (delays) the clock by: Delay (seconds) = SUBFS / ( PREDIV_S + 1 ) A fraction of a second can effectively be added to the clock (advancing the clock) when the ADD1S function is used in conjunction with SUBFS, effectively advancing the clock by : Advance (seconds) = ( 1 - ( SUBFS / ( PREDIV_S + 1 ) ) ) . */
    using RTC_SHIFTR_SUBFS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 15, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Add one second 0: No effect 1: Add one second to the clock/calendar This bit is write only and is always read as zero. Writing to this bit has no effect when a shift operation is pending (when SHPF=1, in RTC_ISR). This function is intended to be used with SUBFS (see description below) in order to effectively add a fraction of a second to the clock in an atomic operation. */
    using RTC_SHIFTR_ADD1S = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RTC_CALR register */
    using RTC_CALR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Calibration minus The frequency of the calendar is reduced by masking CALM out of 220 RTCCLK pulses (32 seconds if the input frequency is 32768 Hz). This decreases the frequency of the calendar with a resolution of 0.9537 ppm. To increase the frequency of the calendar, this feature should be used in conjunction with CALP. */
    using RTC_CALR_CALM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Use a 16-second calibration cycle period When CALW16 is set to 1 , the 16-second calibration cycle period is selected.This bit must not be set to 1 if CALW8=1. Note: CALM[0] is stucked at 0 when CALW16=1. */
    using RTC_CALR_CALW16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Use an 8-second calibration cycle period When CALW8 is set to 1 , the 8-second calibration cycle period is selected. Note: CALM[1:0] are stucked at 00 when CALW8=1. */
    using RTC_CALR_CALW8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Increase frequency of RTC by 488.5 ppm 0: No RTCCLK pulses are added. 1: One RTCCLK pulse is effectively inserted every 211 pulses (frequency incresed by 488.5 ppm). This feature is intended to be used in conjunction with CALM, which lowers the frequency of the calendar with a fine resolution. if the input frequency is 32768 Hz, the number of RTCCLK pulses added during a 32-second window is calculated as follows: (512 * CALP) - CALM. */
    using RTC_CALR_CALP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RTC_ALRMASSR register */
    using RTC_ALRMASSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sub seconds value This value is compared with the contents of the synchronous prescalers counter to determine if Alarm A is to be activated. Only bits 0 up MASKSS-1 are compared. */
    using RTC_ALRMASSR_SS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 15, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Mask the most-significant bits starting at this bit 0: No comparison on sub seconds for Alarm A. The alarm is set when the seconds unit is incremented (assuming that the rest of the fields match). 1: SS[14:1] are dont care in Alarm A comparison. Only SS[0] is compared. 2: SS[14:2] are dont care in Alarm A comparison. Only SS[1:0] are compared. 3: SS[14:3] are dont care in Alarm A comparison. Only SS[2:0] are compared. ... 12: SS[14:12] are dont care in Alarm A comparison. SS[11:0] are compared. 13: SS[14:13] are dont care in Alarm A comparison. SS[12:0] are compared. 14: SS[14] is dont care in Alarm A comparison. SS[13:0] are compared. 15: All 15 SS bits are compared and must match to activate alarm. The overflow bits of the synchronous counter (bits 15) is never compared. This bit can be different from 0 only after a shift operation. */
    using RTC_ALRMASSR_MASKSS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RTC_BKP0R register */
    using RTC_BKP0R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. They are powered-on by VDD12o so they are retained during DEEPSTOP mode. The application can write or read data to and from these registers. This register is reset on PORESETn only. */
    using RTC_BKP0R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RTC_BKP1R register */
    using RTC_BKP1R = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The application can write or read data to and from these registers. They are powered-on by VDD12o so they are retained during DEEPSTOP mode. The application can write or read data to and from these registers. This register is reset on PORESETn only. */
    using RTC_BKP1R_BKP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
