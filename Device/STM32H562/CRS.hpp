/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32H562_CRS_HPP
#define EMBEDDED_PP_STM32H562_CRS_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Clock recovery system */
namespace STM32H562::CRS {

    /** @brief CRS control register */
    using CRS_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYNC event OK interrupt enable */
    using CRS_CR_SYNCOKIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SYNC event OK (SYNCOKF) interrupt disabled (value: 0)
     *          - B_0x1: SYNC event OK (SYNCOKF) interrupt enabled (value: 1)
     */
        /** @brief SYNC event OK (SYNCOKF) interrupt disabled */
    constexpr std::uint32_t CRS_CR_SYNCOKIE_B_0x0 = 0;
        /** @brief SYNC event OK (SYNCOKF) interrupt enabled */
    constexpr std::uint32_t CRS_CR_SYNCOKIE_B_0x1 = 1;

    /** @brief SYNC warning interrupt enable */
    using CRS_CR_SYNCWARNIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SYNC warning (SYNCWARNF) interrupt disabled (value: 0)
     *          - B_0x1: SYNC warning (SYNCWARNF) interrupt enabled (value: 1)
     */
        /** @brief SYNC warning (SYNCWARNF) interrupt disabled */
    constexpr std::uint32_t CRS_CR_SYNCWARNIE_B_0x0 = 0;
        /** @brief SYNC warning (SYNCWARNF) interrupt enabled */
    constexpr std::uint32_t CRS_CR_SYNCWARNIE_B_0x1 = 1;

    /** @brief Synchronization or trimming error interrupt enable */
    using CRS_CR_ERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Synchronization or trimming error (ERRF) interrupt disabled (value: 0)
     *          - B_0x1: Synchronization or trimming error (ERRF) interrupt enabled (value: 1)
     */
        /** @brief Synchronization or trimming error (ERRF) interrupt disabled */
    constexpr std::uint32_t CRS_CR_ERRIE_B_0x0 = 0;
        /** @brief Synchronization or trimming error (ERRF) interrupt enabled */
    constexpr std::uint32_t CRS_CR_ERRIE_B_0x1 = 1;

    /** @brief Expected SYNC interrupt enable */
    using CRS_CR_ESYNCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Expected SYNC (ESYNCF) interrupt disabled (value: 0)
     *          - B_0x1: Expected SYNC (ESYNCF) interrupt enabled (value: 1)
     */
        /** @brief Expected SYNC (ESYNCF) interrupt disabled */
    constexpr std::uint32_t CRS_CR_ESYNCIE_B_0x0 = 0;
        /** @brief Expected SYNC (ESYNCF) interrupt enabled */
    constexpr std::uint32_t CRS_CR_ESYNCIE_B_0x1 = 1;

    /** @brief Frequency error counter enable This bit enables the oscillator clock for the frequency error counter. When this bit is set, the CRS_CFGR register is write-protected and cannot be modified. */
    using CRS_CR_CEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Frequency error counter disabled (value: 0)
     *          - B_0x1: Frequency error counter enabled (value: 1)
     */
        /** @brief Frequency error counter disabled */
    constexpr std::uint32_t CRS_CR_CEN_B_0x0 = 0;
        /** @brief Frequency error counter enabled */
    constexpr std::uint32_t CRS_CR_CEN_B_0x1 = 1;

    /** @brief Automatic trimming enable This bit enables the automatic hardware adjustment of TRIM bits according to the measured frequency error between two SYNC events. If this bit is set, the TRIM bits are read-only. The TRIM value can be adjusted by hardware by one or two steps at a time, depending on the measured frequency error value. Refer to for more details. */
    using CRS_CR_AUTOTRIMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Automatic trimming disabled, TRIM bits can be adjusted by the user. (value: 0)
     *          - B_0x1: Automatic trimming enabled, TRIM bits are read-only and under hardware control. (value: 1)
     */
        /** @brief Automatic trimming disabled, TRIM bits can be adjusted by the user. */
    constexpr std::uint32_t CRS_CR_AUTOTRIMEN_B_0x0 = 0;
        /** @brief Automatic trimming enabled, TRIM bits are read-only and under hardware control. */
    constexpr std::uint32_t CRS_CR_AUTOTRIMEN_B_0x1 = 1;

    /** @brief Generate software SYNC event This bit is set by software in order to generate a software SYNC event. It is automatically cleared by hardware. */
    using CRS_CR_SWSYNC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: A software SYNC event is generated. (value: 1)
     */
        /** @brief No action */
    constexpr std::uint32_t CRS_CR_SWSYNC_B_0x0 = 0;
        /** @brief A software SYNC event is generated. */
    constexpr std::uint32_t CRS_CR_SWSYNC_B_0x1 = 1;

    /** @brief HSI48 oscillator smooth trimming These bits provide a user-programmable trimming value to the HSI48 oscillator. They can be programmed to adjust to variations in voltage and temperature that influence the frequency of the HSI48 oscillator. The default value is 32, which corresponds to the middle of the trimming interval. The trimming step is specified in the product datasheet. A higher TRIM value corresponds to a higher output frequency. When the AUTOTRIMEN bit is set, this field is controlled by hardware and is read-only. */
    using CRS_CR_TRIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRS configuration register */
    using CRS_CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Counter reload value RELOAD is the value to be loaded in the frequency error counter with each SYNC event. Refer to for more details about counter behavior. */
    using CRS_CFGR_RELOAD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frequency error limit FELIM contains the value to be used to evaluate the captured frequency error value latched in the FECAP[15:0] bits of the CRS_ISR register. Refer to for more details about FECAP evaluation. */
    using CRS_CFGR_FELIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYNC divider These bits are set and cleared by software to control the division factor of the SYNC signal. */
    using CRS_CFGR_SYNCDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SYNC not divided (default) (value: 0)
     *          - B_0x1: SYNC divided by 2 (value: 1)
     *          - B_0x2: SYNC divided by 4 (value: 2)
     *          - B_0x3: SYNC divided by 8 (value: 3)
     *          - B_0x4: SYNC divided by 16 (value: 4)
     *          - B_0x5: SYNC divided by 32 (value: 5)
     *          - B_0x6: SYNC divided by 64 (value: 6)
     *          - B_0x7: SYNC divided by 128 (value: 7)
     */
        /** @brief SYNC not divided (default) */
    constexpr std::uint32_t CRS_CFGR_SYNCDIV_B_0x0 = 0;
        /** @brief SYNC divided by 2 */
    constexpr std::uint32_t CRS_CFGR_SYNCDIV_B_0x1 = 1;
        /** @brief SYNC divided by 4 */
    constexpr std::uint32_t CRS_CFGR_SYNCDIV_B_0x2 = 2;
        /** @brief SYNC divided by 8 */
    constexpr std::uint32_t CRS_CFGR_SYNCDIV_B_0x3 = 3;
        /** @brief SYNC divided by 16 */
    constexpr std::uint32_t CRS_CFGR_SYNCDIV_B_0x4 = 4;
        /** @brief SYNC divided by 32 */
    constexpr std::uint32_t CRS_CFGR_SYNCDIV_B_0x5 = 5;
        /** @brief SYNC divided by 64 */
    constexpr std::uint32_t CRS_CFGR_SYNCDIV_B_0x6 = 6;
        /** @brief SYNC divided by 128 */
    constexpr std::uint32_t CRS_CFGR_SYNCDIV_B_0x7 = 7;

    /** @brief SYNC signal source selection These bits are set and cleared by software to select the SYNC signal source (see CRS internal input/output signals for STM32U575/585): Note: When using USB LPM (Link Power Management) and the device is in Sleep mode, the periodic USB SOF is not generated by the host. No SYNC signal is therefore provided to the CRS to calibrate the HSI48 oscillator on the run. To guarantee the required clock precision after waking up from Sleep mode, the LSE or reference clock on the GPIOs must be used as SYNC signal. */
    using CRS_CFGR_SYNCSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: crs_sync_in_1 selected as SYNC signal source (value: 0)
     *          - B_0x1: crs_sync_in_2 selected as SYNC signal source (value: 1)
     *          - B_0x2: crs_sync_in_3 selected as SYNC signal source (value: 2)
     *          - B_0x3: crs_sync_in_4 selected as SYNC signal source (value: 3)
     */
        /** @brief crs_sync_in_1 selected as SYNC signal source */
    constexpr std::uint32_t CRS_CFGR_SYNCSRC_B_0x0 = 0;
        /** @brief crs_sync_in_2 selected as SYNC signal source */
    constexpr std::uint32_t CRS_CFGR_SYNCSRC_B_0x1 = 1;
        /** @brief crs_sync_in_3 selected as SYNC signal source */
    constexpr std::uint32_t CRS_CFGR_SYNCSRC_B_0x2 = 2;
        /** @brief crs_sync_in_4 selected as SYNC signal source */
    constexpr std::uint32_t CRS_CFGR_SYNCSRC_B_0x3 = 3;

    /** @brief SYNC polarity selection This bit is set and cleared by software to select the input polarity for the SYNC signal source. */
    using CRS_CFGR_SYNCPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SYNC active on rising edge (default) (value: 0)
     *          - B_0x1: SYNC active on falling edge (value: 1)
     */
        /** @brief SYNC active on rising edge (default) */
    constexpr std::uint32_t CRS_CFGR_SYNCPOL_B_0x0 = 0;
        /** @brief SYNC active on falling edge */
    constexpr std::uint32_t CRS_CFGR_SYNCPOL_B_0x1 = 1;

    /** @brief CRS interrupt and status register */
    using CRS_ISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYNC event OK flag This flag is set by hardware when the measured frequency error is smaller than FELIM * 3. This means that either no adjustment of the TRIM value is needed or that an adjustment by one trimming step is enough to compensate the frequency error. An interrupt is generated if the SYNCOKIE bit is set in the CRS_CR register. It is cleared by software by setting the SYNCOKC bit in the CRS_ICR register. */
    using CRS_ISR_SYNCOKF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No SYNC event OK signalized (value: 0)
     *          - B_0x1: SYNC event OK signalized (value: 1)
     */
        /** @brief No SYNC event OK signalized */
    constexpr std::uint32_t CRS_ISR_SYNCOKF_B_0x0 = 0;
        /** @brief SYNC event OK signalized */
    constexpr std::uint32_t CRS_ISR_SYNCOKF_B_0x1 = 1;

    /** @brief SYNC warning flag This flag is set by hardware when the measured frequency error is greater than or equal to FELIM * 3, but smaller than FELIM * 128. This means that to compensate the frequency error, the TRIM value must be adjusted by two steps or more. An interrupt is generated if the SYNCWARNIE bit is set in the CRS_CR register. It is cleared by software by setting the SYNCWARNC bit in the CRS_ICR register. */
    using CRS_ISR_SYNCWARNF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No SYNC warning signalized (value: 0)
     *          - B_0x1: SYNC warning signalized (value: 1)
     */
        /** @brief No SYNC warning signalized */
    constexpr std::uint32_t CRS_ISR_SYNCWARNF_B_0x0 = 0;
        /** @brief SYNC warning signalized */
    constexpr std::uint32_t CRS_ISR_SYNCWARNF_B_0x1 = 1;

    /** @brief Error flag This flag is set by hardware in case of any synchronization or trimming error. It is the logical OR of the TRIMOVF, SYNCMISS and SYNCERR bits. An interrupt is generated if the ERRIE bit is set in the CRS_CR register. It is cleared by software in reaction to setting the ERRC bit in the CRS_ICR register, which clears the TRIMOVF, SYNCMISS and SYNCERR bits. */
    using CRS_ISR_ERRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No synchronization or trimming error signalized (value: 0)
     *          - B_0x1: Synchronization or trimming error signalized (value: 1)
     */
        /** @brief No synchronization or trimming error signalized */
    constexpr std::uint32_t CRS_ISR_ERRF_B_0x0 = 0;
        /** @brief Synchronization or trimming error signalized */
    constexpr std::uint32_t CRS_ISR_ERRF_B_0x1 = 1;

    /** @brief Expected SYNC flag This flag is set by hardware when the frequency error counter reached a zero value. An interrupt is generated if the ESYNCIE bit is set in the CRS_CR register. It is cleared by software by setting the ESYNCC bit in the CRS_ICR register. */
    using CRS_ISR_ESYNCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No expected SYNC signalized (value: 0)
     *          - B_0x1: Expected SYNC signalized (value: 1)
     */
        /** @brief No expected SYNC signalized */
    constexpr std::uint32_t CRS_ISR_ESYNCF_B_0x0 = 0;
        /** @brief Expected SYNC signalized */
    constexpr std::uint32_t CRS_ISR_ESYNCF_B_0x1 = 1;

    /** @brief SYNC error This flag is set by hardware when the SYNC pulse arrives before the ESYNC event and the measured frequency error is greater than or equal to FELIM * 128. This means that the frequency error is too big (internal frequency too low) to be compensated by adjusting the TRIM value, and that some other action has to be taken. An interrupt is generated if the ERRIE bit is set in the CRS_CR register. It is cleared by software by setting the ERRC bit in the CRS_ICR register. */
    using CRS_ISR_SYNCERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No SYNC error signalized (value: 0)
     *          - B_0x1: SYNC error signalized (value: 1)
     */
        /** @brief No SYNC error signalized */
    constexpr std::uint32_t CRS_ISR_SYNCERR_B_0x0 = 0;
        /** @brief SYNC error signalized */
    constexpr std::uint32_t CRS_ISR_SYNCERR_B_0x1 = 1;

    /** @brief SYNC missed This flag is set by hardware when the frequency error counter reached value FELIM * 128 and no SYNC was detected, meaning either that a SYNC pulse was missed or that the frequency error is too big (internal frequency too high) to be compensated by adjusting the TRIM value, and that some other action has to be taken. At this point, the frequency error counter is stopped (waiting for a next SYNC) and an interrupt is generated if the ERRIE bit is set in the CRS_CR register. It is cleared by software by setting the ERRC bit in the CRS_ICR register. */
    using CRS_ISR_SYNCMISS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No SYNC missed error signalized (value: 0)
     *          - B_0x1: SYNC missed error signalized (value: 1)
     */
        /** @brief No SYNC missed error signalized */
    constexpr std::uint32_t CRS_ISR_SYNCMISS_B_0x0 = 0;
        /** @brief SYNC missed error signalized */
    constexpr std::uint32_t CRS_ISR_SYNCMISS_B_0x1 = 1;

    /** @brief Trimming overflow or underflow This flag is set by hardware when the automatic trimming tries to over- or under-flow the TRIM value. An interrupt is generated if the ERRIE bit is set in the CRS_CR register. It is cleared by software by setting the ERRC bit in the CRS_ICR register. */
    using CRS_ISR_TRIMOVF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No trimming error signalized (value: 0)
     *          - B_0x1: Trimming error signalized (value: 1)
     */
        /** @brief No trimming error signalized */
    constexpr std::uint32_t CRS_ISR_TRIMOVF_B_0x0 = 0;
        /** @brief Trimming error signalized */
    constexpr std::uint32_t CRS_ISR_TRIMOVF_B_0x1 = 1;

    /** @brief Frequency error direction FEDIR is the counting direction of the frequency error counter latched in the time of the last SYNC event. It shows whether the actual frequency is below or above the target. */
    using CRS_ISR_FEDIR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Upcounting direction, the actual frequency is above the target. (value: 0)
     *          - B_0x1: Downcounting direction, the actual frequency is below the target. (value: 1)
     */
        /** @brief Upcounting direction, the actual frequency is above the target. */
    constexpr std::uint32_t CRS_ISR_FEDIR_B_0x0 = 0;
        /** @brief Downcounting direction, the actual frequency is below the target. */
    constexpr std::uint32_t CRS_ISR_FEDIR_B_0x1 = 1;

    /** @brief Frequency error capture FECAP is the frequency error counter value latched in the time of the last SYNC event. Refer to for more details about FECAP usage. */
    using CRS_ISR_FECAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRS interrupt flag clear register */
    using CRS_ICR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYNC event OK clear flag Writing 1 to this bit clears the SYNCOKF flag in the CRS_ISR register. */
    using CRS_ICR_SYNCOKC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYNC warning clear flag Writing 1 to this bit clears the SYNCWARNF flag in the CRS_ISR register. */
    using CRS_ICR_SYNCWARNC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Error clear flag Writing 1 to this bit clears TRIMOVF, SYNCMISS and SYNCERR bits and consequently also the ERRF flag in the CRS_ISR register. */
    using CRS_ICR_ERRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Expected SYNC clear flag Writing 1 to this bit clears the ESYNCF flag in the CRS_ISR register. */
    using CRS_ICR_ESYNCC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
