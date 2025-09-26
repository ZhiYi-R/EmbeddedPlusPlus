/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32H533_CRS_S_HPP
#define EMBEDDED_PP_STM32H533_CRS_S_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief CRS address block description */
namespace STM32H533::CRS_S {

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

    /** @brief Frequency error counter enable */
    using CRS_CR_CEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Frequency error counter disabled (value: 0)
     *          - B_0x1: Frequency error counter enabled (value: 1)
     */
        /** @brief Frequency error counter disabled */
    constexpr std::uint32_t CRS_CR_CEN_B_0x0 = 0;
        /** @brief Frequency error counter enabled */
    constexpr std::uint32_t CRS_CR_CEN_B_0x1 = 1;

    /** @brief Automatic trimming enable */
    using CRS_CR_AUTOTRIMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Automatic trimming disabled, TRIM bits can be adjusted by the user. (value: 0)
     *          - B_0x1: Automatic trimming enabled, TRIM bits are read-only and under hardware control. (value: 1)
     */
        /** @brief Automatic trimming disabled, TRIM bits can be adjusted by the user. */
    constexpr std::uint32_t CRS_CR_AUTOTRIMEN_B_0x0 = 0;
        /** @brief Automatic trimming enabled, TRIM bits are read-only and under hardware control. */
    constexpr std::uint32_t CRS_CR_AUTOTRIMEN_B_0x1 = 1;

    /** @brief Generate software SYNC event */
    using CRS_CR_SWSYNC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No action (value: 0)
     *          - B_0x1: A software SYNC event is generated. (value: 1)
     */
        /** @brief No action */
    constexpr std::uint32_t CRS_CR_SWSYNC_B_0x0 = 0;
        /** @brief A software SYNC event is generated. */
    constexpr std::uint32_t CRS_CR_SWSYNC_B_0x1 = 1;

    /** @brief HSI48 oscillator smooth trimming */
    using CRS_CR_TRIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRS configuration register */
    using CRS_CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Counter reload value */
    using CRS_CFGR_RELOAD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frequency error limit */
    using CRS_CFGR_FELIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYNC divider */
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

    /** @brief SYNC signal source selection */
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

    /** @brief SYNC polarity selection */
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
    /** @brief SYNC event OK flag */
    using CRS_ISR_SYNCOKF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No SYNC event OK signaled (value: 0)
     *          - B_0x1: SYNC event OK signaled (value: 1)
     */
        /** @brief No SYNC event OK signaled */
    constexpr std::uint32_t CRS_ISR_SYNCOKF_B_0x0 = 0;
        /** @brief SYNC event OK signaled */
    constexpr std::uint32_t CRS_ISR_SYNCOKF_B_0x1 = 1;

    /** @brief SYNC warning flag */
    using CRS_ISR_SYNCWARNF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No SYNC warning signaled (value: 0)
     *          - B_0x1: SYNC warning signaled (value: 1)
     */
        /** @brief No SYNC warning signaled */
    constexpr std::uint32_t CRS_ISR_SYNCWARNF_B_0x0 = 0;
        /** @brief SYNC warning signaled */
    constexpr std::uint32_t CRS_ISR_SYNCWARNF_B_0x1 = 1;

    /** @brief Error flag */
    using CRS_ISR_ERRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No synchronization or trimming error signaled (value: 0)
     *          - B_0x1: Synchronization or trimming error signaled (value: 1)
     */
        /** @brief No synchronization or trimming error signaled */
    constexpr std::uint32_t CRS_ISR_ERRF_B_0x0 = 0;
        /** @brief Synchronization or trimming error signaled */
    constexpr std::uint32_t CRS_ISR_ERRF_B_0x1 = 1;

    /** @brief Expected SYNC flag */
    using CRS_ISR_ESYNCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No expected SYNC signaled (value: 0)
     *          - B_0x1: Expected SYNC signaled (value: 1)
     */
        /** @brief No expected SYNC signaled */
    constexpr std::uint32_t CRS_ISR_ESYNCF_B_0x0 = 0;
        /** @brief Expected SYNC signaled */
    constexpr std::uint32_t CRS_ISR_ESYNCF_B_0x1 = 1;

    /** @brief SYNC error */
    using CRS_ISR_SYNCERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No SYNC error signaled (value: 0)
     *          - B_0x1: SYNC error signaled (value: 1)
     */
        /** @brief No SYNC error signaled */
    constexpr std::uint32_t CRS_ISR_SYNCERR_B_0x0 = 0;
        /** @brief SYNC error signaled */
    constexpr std::uint32_t CRS_ISR_SYNCERR_B_0x1 = 1;

    /** @brief SYNC missed */
    using CRS_ISR_SYNCMISS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No SYNC missed error signaled (value: 0)
     *          - B_0x1: SYNC missed error signaled (value: 1)
     */
        /** @brief No SYNC missed error signaled */
    constexpr std::uint32_t CRS_ISR_SYNCMISS_B_0x0 = 0;
        /** @brief SYNC missed error signaled */
    constexpr std::uint32_t CRS_ISR_SYNCMISS_B_0x1 = 1;

    /** @brief Trimming overflow or underflow */
    using CRS_ISR_TRIMOVF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No trimming error signaled (value: 0)
     *          - B_0x1: Trimming error signaled (value: 1)
     */
        /** @brief No trimming error signaled */
    constexpr std::uint32_t CRS_ISR_TRIMOVF_B_0x0 = 0;
        /** @brief Trimming error signaled */
    constexpr std::uint32_t CRS_ISR_TRIMOVF_B_0x1 = 1;

    /** @brief Frequency error direction */
    using CRS_ISR_FEDIR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Up-counting direction, the actual frequency is above the target (value: 0)
     *          - B_0x1: Down-counting direction, the actual frequency is below the target (value: 1)
     */
        /** @brief Up-counting direction, the actual frequency is above the target */
    constexpr std::uint32_t CRS_ISR_FEDIR_B_0x0 = 0;
        /** @brief Down-counting direction, the actual frequency is below the target */
    constexpr std::uint32_t CRS_ISR_FEDIR_B_0x1 = 1;

    /** @brief Frequency error capture */
    using CRS_ISR_FECAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRS interrupt flag clear register */
    using CRS_ICR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYNC event OK clear flag */
    using CRS_ICR_SYNCOKC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYNC warning clear flag */
    using CRS_ICR_SYNCWARNC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Error clear flag */
    using CRS_ICR_ERRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Expected SYNC clear flag */
    using CRS_ICR_ESYNCC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
