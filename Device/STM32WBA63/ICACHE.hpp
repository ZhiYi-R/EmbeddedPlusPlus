/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32WBA63_ICACHE_HPP
#define EMBEDDED_PP_STM32WBA63_ICACHE_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief ICACHE register block */
namespace STM32WBA63::ICACHE {

    /** @brief ICACHE control register */
    using ICACHE_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief enable */
    using ICACHE_CR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: cache disabled (value: 0)
     *          - B_0x1: cache enabled (value: 1)
     */
        /** @brief cache disabled */
    constexpr std::uint32_t ICACHE_CR_EN_B_0x0 = 0;
        /** @brief cache enabled */
    constexpr std::uint32_t ICACHE_CR_EN_B_0x1 = 1;

    /** @brief cache invalidation */
    using ICACHE_CR_CACHEINV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: invalidate entire cache (all cache lines valid bit = 0) (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t ICACHE_CR_CACHEINV_B_0x0 = 0;
        /** @brief invalidate entire cache (all cache lines valid bit = 0) */
    constexpr std::uint32_t ICACHE_CR_CACHEINV_B_0x1 = 1;

    /** @brief cache associativity mode selection */
    using ICACHE_CR_WAYSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: direct mapped cache (1-way cache) (value: 0)
     *          - B_0x1: n-way set associative cache (reset value) (value: 1)
     */
        /** @brief direct mapped cache (1-way cache) */
    constexpr std::uint32_t ICACHE_CR_WAYSEL_B_0x0 = 0;
        /** @brief n-way set associative cache (reset value) */
    constexpr std::uint32_t ICACHE_CR_WAYSEL_B_0x1 = 1;

    /** @brief hit monitor enable */
    using ICACHE_CR_HITMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: cache hit monitor switched off. (value: 0)
     *          - B_0x1: cache hit monitor enabled (value: 1)
     */
        /** @brief cache hit monitor switched off. */
    constexpr std::uint32_t ICACHE_CR_HITMEN_B_0x0 = 0;
        /** @brief cache hit monitor enabled */
    constexpr std::uint32_t ICACHE_CR_HITMEN_B_0x1 = 1;

    /** @brief miss monitor enable */
    using ICACHE_CR_MISSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: cache miss monitor switched off. (value: 0)
     *          - B_0x1: cache miss monitor enabled (value: 1)
     */
        /** @brief cache miss monitor switched off. */
    constexpr std::uint32_t ICACHE_CR_MISSMEN_B_0x0 = 0;
        /** @brief cache miss monitor enabled */
    constexpr std::uint32_t ICACHE_CR_MISSMEN_B_0x1 = 1;

    /** @brief hit monitor reset */
    using ICACHE_CR_HITMRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: release the cache miss monitor reset (needed to enable the counting) (value: 0)
     *          - B_0x1: reset cache hit monitor (value: 1)
     */
        /** @brief release the cache miss monitor reset (needed to enable the counting) */
    constexpr std::uint32_t ICACHE_CR_HITMRST_B_0x0 = 0;
        /** @brief reset cache hit monitor */
    constexpr std::uint32_t ICACHE_CR_HITMRST_B_0x1 = 1;

    /** @brief miss monitor reset */
    using ICACHE_CR_MISSMRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: release the cache miss monitor reset (needed to enable the counting) (value: 0)
     *          - B_0x1: reset cache miss monitor (value: 1)
     */
        /** @brief release the cache miss monitor reset (needed to enable the counting) */
    constexpr std::uint32_t ICACHE_CR_MISSMRST_B_0x0 = 0;
        /** @brief reset cache miss monitor */
    constexpr std::uint32_t ICACHE_CR_MISSMRST_B_0x1 = 1;

    /** @brief ICACHE status register */
    using ICACHE_SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief busy flag */
    using ICACHE_SR_BUSYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: cache not busy on a CACHEINV operation (value: 0)
     *          - B_0x1: cache executing a full invalidate CACHEINV operation (value: 1)
     */
        /** @brief cache not busy on a CACHEINV operation */
    constexpr std::uint32_t ICACHE_SR_BUSYF_B_0x0 = 0;
        /** @brief cache executing a full invalidate CACHEINV operation */
    constexpr std::uint32_t ICACHE_SR_BUSYF_B_0x1 = 1;

    /** @brief busy end flag */
    using ICACHE_SR_BSYENDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: cache busy (value: 0)
     *          - B_0x1: full invalidate CACHEINV operation finished (value: 1)
     */
        /** @brief cache busy */
    constexpr std::uint32_t ICACHE_SR_BSYENDF_B_0x0 = 0;
        /** @brief full invalidate CACHEINV operation finished */
    constexpr std::uint32_t ICACHE_SR_BSYENDF_B_0x1 = 1;

    /** @brief cache error flag */
    using ICACHE_SR_ERRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no error (value: 0)
     *          - B_0x1: an error occurred during the operation (cacheable write) (value: 1)
     */
        /** @brief no error */
    constexpr std::uint32_t ICACHE_SR_ERRF_B_0x0 = 0;
        /** @brief an error occurred during the operation (cacheable write) */
    constexpr std::uint32_t ICACHE_SR_ERRF_B_0x1 = 1;

    /** @brief ICACHE interrupt enable register */
    using ICACHE_IER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief interrupt enable on busy end */
    using ICACHE_IER_BSYENDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled on busy end (value: 0)
     *          - B_0x1: interrupt enabled on busy end (value: 1)
     */
        /** @brief interrupt disabled on busy end */
    constexpr std::uint32_t ICACHE_IER_BSYENDIE_B_0x0 = 0;
        /** @brief interrupt enabled on busy end */
    constexpr std::uint32_t ICACHE_IER_BSYENDIE_B_0x1 = 1;

    /** @brief interrupt enable on cache error */
    using ICACHE_IER_ERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled on error (value: 0)
     *          - B_0x1: interrupt enabled on error (value: 1)
     */
        /** @brief interrupt disabled on error */
    constexpr std::uint32_t ICACHE_IER_ERRIE_B_0x0 = 0;
        /** @brief interrupt enabled on error */
    constexpr std::uint32_t ICACHE_IER_ERRIE_B_0x1 = 1;

    /** @brief ICACHE flag clear register */
    using ICACHE_FCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief clear busy end flag */
    using ICACHE_FCR_CBSYENDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: clears BSYENDF flag in ICACHE_SR. (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t ICACHE_FCR_CBSYENDF_B_0x0 = 0;
        /** @brief clears BSYENDF flag in ICACHE_SR. */
    constexpr std::uint32_t ICACHE_FCR_CBSYENDF_B_0x1 = 1;

    /** @brief clear cache error flag */
    using ICACHE_FCR_CERRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: clears ERRF flag in ICACHE_SR (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t ICACHE_FCR_CERRF_B_0x0 = 0;
        /** @brief clears ERRF flag in ICACHE_SR */
    constexpr std::uint32_t ICACHE_FCR_CERRF_B_0x1 = 1;

    /** @brief ICACHE hit monitor register */
    using ICACHE_HMONR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief cache hit monitor counter */
    using ICACHE_HMONR_HITMON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ICACHE miss monitor register */
    using ICACHE_MMONR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief cache miss monitor counter */
    using ICACHE_MMONR_MISSMON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ICACHE region 0 configuration register */
    using ICACHE_CRR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief base address for region x */
    using ICACHE_CRR0_BASEADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief size for region x */
    using ICACHE_CRR0_RSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: 2 Mbytes (value: 1)
     *          - B_0x2: 4 Mbytes (value: 2)
     *          - B_0x3: 8 Mbytes (value: 3)
     *          - B_0x4: 16 Mbytes (value: 4)
     *          - B_0x5: 32 Mbytes (value: 5)
     *          - B_0x6: 64 Mbytes (value: 6)
     *          - B_0x7: 128 Mbytes (value: 7)
     */
        /** @brief 2 Mbytes */
    constexpr std::uint32_t ICACHE_CRR0_RSIZE_B_0x1 = 1;
        /** @brief 4 Mbytes */
    constexpr std::uint32_t ICACHE_CRR0_RSIZE_B_0x2 = 2;
        /** @brief 8 Mbytes */
    constexpr std::uint32_t ICACHE_CRR0_RSIZE_B_0x3 = 3;
        /** @brief 16 Mbytes */
    constexpr std::uint32_t ICACHE_CRR0_RSIZE_B_0x4 = 4;
        /** @brief 32 Mbytes */
    constexpr std::uint32_t ICACHE_CRR0_RSIZE_B_0x5 = 5;
        /** @brief 64 Mbytes */
    constexpr std::uint32_t ICACHE_CRR0_RSIZE_B_0x6 = 6;
        /** @brief 128 Mbytes */
    constexpr std::uint32_t ICACHE_CRR0_RSIZE_B_0x7 = 7;

    /** @brief enable for region x */
    using ICACHE_CRR0_REN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: disabled (value: 0)
     *          - B_0x1: enabled (value: 1)
     */
        /** @brief disabled */
    constexpr std::uint32_t ICACHE_CRR0_REN_B_0x0 = 0;
        /** @brief enabled */
    constexpr std::uint32_t ICACHE_CRR0_REN_B_0x1 = 1;

    /** @brief remapped address for region x */
    using ICACHE_CRR0_REMAPADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB cache master selection for region x */
    using ICACHE_CRR0_MSTSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no action (master1 selected by default) (value: 0)
     *          - B_0x1: master2 selected (value: 1)
     */
        /** @brief no action (master1 selected by default) */
    constexpr std::uint32_t ICACHE_CRR0_MSTSEL_B_0x0 = 0;
        /** @brief master2 selected */
    constexpr std::uint32_t ICACHE_CRR0_MSTSEL_B_0x1 = 1;

    /** @brief output burst type for region x */
    using ICACHE_CRR0_HBURST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: WRAP (value: 0)
     *          - B_0x1: INCR (value: 1)
     */
        /** @brief WRAP */
    constexpr std::uint32_t ICACHE_CRR0_HBURST_B_0x0 = 0;
        /** @brief INCR */
    constexpr std::uint32_t ICACHE_CRR0_HBURST_B_0x1 = 1;

    /** @brief ICACHE region 1 configuration register */
    using ICACHE_CRR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief base address for region x */
    using ICACHE_CRR1_BASEADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief size for region x */
    using ICACHE_CRR1_RSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: 2 Mbytes (value: 1)
     *          - B_0x2: 4 Mbytes (value: 2)
     *          - B_0x3: 8 Mbytes (value: 3)
     *          - B_0x4: 16 Mbytes (value: 4)
     *          - B_0x5: 32 Mbytes (value: 5)
     *          - B_0x6: 64 Mbytes (value: 6)
     *          - B_0x7: 128 Mbytes (value: 7)
     */
        /** @brief 2 Mbytes */
    constexpr std::uint32_t ICACHE_CRR1_RSIZE_B_0x1 = 1;
        /** @brief 4 Mbytes */
    constexpr std::uint32_t ICACHE_CRR1_RSIZE_B_0x2 = 2;
        /** @brief 8 Mbytes */
    constexpr std::uint32_t ICACHE_CRR1_RSIZE_B_0x3 = 3;
        /** @brief 16 Mbytes */
    constexpr std::uint32_t ICACHE_CRR1_RSIZE_B_0x4 = 4;
        /** @brief 32 Mbytes */
    constexpr std::uint32_t ICACHE_CRR1_RSIZE_B_0x5 = 5;
        /** @brief 64 Mbytes */
    constexpr std::uint32_t ICACHE_CRR1_RSIZE_B_0x6 = 6;
        /** @brief 128 Mbytes */
    constexpr std::uint32_t ICACHE_CRR1_RSIZE_B_0x7 = 7;

    /** @brief enable for region x */
    using ICACHE_CRR1_REN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: disabled (value: 0)
     *          - B_0x1: enabled (value: 1)
     */
        /** @brief disabled */
    constexpr std::uint32_t ICACHE_CRR1_REN_B_0x0 = 0;
        /** @brief enabled */
    constexpr std::uint32_t ICACHE_CRR1_REN_B_0x1 = 1;

    /** @brief remapped address for region x */
    using ICACHE_CRR1_REMAPADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB cache master selection for region x */
    using ICACHE_CRR1_MSTSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no action (master1 selected by default) (value: 0)
     *          - B_0x1: master2 selected (value: 1)
     */
        /** @brief no action (master1 selected by default) */
    constexpr std::uint32_t ICACHE_CRR1_MSTSEL_B_0x0 = 0;
        /** @brief master2 selected */
    constexpr std::uint32_t ICACHE_CRR1_MSTSEL_B_0x1 = 1;

    /** @brief output burst type for region x */
    using ICACHE_CRR1_HBURST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: WRAP (value: 0)
     *          - B_0x1: INCR (value: 1)
     */
        /** @brief WRAP */
    constexpr std::uint32_t ICACHE_CRR1_HBURST_B_0x0 = 0;
        /** @brief INCR */
    constexpr std::uint32_t ICACHE_CRR1_HBURST_B_0x1 = 1;

    /** @brief ICACHE region 2 configuration register */
    using ICACHE_CRR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief base address for region x */
    using ICACHE_CRR2_BASEADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief size for region x */
    using ICACHE_CRR2_RSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: 2 Mbytes (value: 1)
     *          - B_0x2: 4 Mbytes (value: 2)
     *          - B_0x3: 8 Mbytes (value: 3)
     *          - B_0x4: 16 Mbytes (value: 4)
     *          - B_0x5: 32 Mbytes (value: 5)
     *          - B_0x6: 64 Mbytes (value: 6)
     *          - B_0x7: 128 Mbytes (value: 7)
     */
        /** @brief 2 Mbytes */
    constexpr std::uint32_t ICACHE_CRR2_RSIZE_B_0x1 = 1;
        /** @brief 4 Mbytes */
    constexpr std::uint32_t ICACHE_CRR2_RSIZE_B_0x2 = 2;
        /** @brief 8 Mbytes */
    constexpr std::uint32_t ICACHE_CRR2_RSIZE_B_0x3 = 3;
        /** @brief 16 Mbytes */
    constexpr std::uint32_t ICACHE_CRR2_RSIZE_B_0x4 = 4;
        /** @brief 32 Mbytes */
    constexpr std::uint32_t ICACHE_CRR2_RSIZE_B_0x5 = 5;
        /** @brief 64 Mbytes */
    constexpr std::uint32_t ICACHE_CRR2_RSIZE_B_0x6 = 6;
        /** @brief 128 Mbytes */
    constexpr std::uint32_t ICACHE_CRR2_RSIZE_B_0x7 = 7;

    /** @brief enable for region x */
    using ICACHE_CRR2_REN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: disabled (value: 0)
     *          - B_0x1: enabled (value: 1)
     */
        /** @brief disabled */
    constexpr std::uint32_t ICACHE_CRR2_REN_B_0x0 = 0;
        /** @brief enabled */
    constexpr std::uint32_t ICACHE_CRR2_REN_B_0x1 = 1;

    /** @brief remapped address for region x */
    using ICACHE_CRR2_REMAPADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB cache master selection for region x */
    using ICACHE_CRR2_MSTSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no action (master1 selected by default) (value: 0)
     *          - B_0x1: master2 selected (value: 1)
     */
        /** @brief no action (master1 selected by default) */
    constexpr std::uint32_t ICACHE_CRR2_MSTSEL_B_0x0 = 0;
        /** @brief master2 selected */
    constexpr std::uint32_t ICACHE_CRR2_MSTSEL_B_0x1 = 1;

    /** @brief output burst type for region x */
    using ICACHE_CRR2_HBURST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: WRAP (value: 0)
     *          - B_0x1: INCR (value: 1)
     */
        /** @brief WRAP */
    constexpr std::uint32_t ICACHE_CRR2_HBURST_B_0x0 = 0;
        /** @brief INCR */
    constexpr std::uint32_t ICACHE_CRR2_HBURST_B_0x1 = 1;

    /** @brief ICACHE region 3 configuration register */
    using ICACHE_CRR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief base address for region x */
    using ICACHE_CRR3_BASEADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief size for region x */
    using ICACHE_CRR3_RSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: 2 Mbytes (value: 1)
     *          - B_0x2: 4 Mbytes (value: 2)
     *          - B_0x3: 8 Mbytes (value: 3)
     *          - B_0x4: 16 Mbytes (value: 4)
     *          - B_0x5: 32 Mbytes (value: 5)
     *          - B_0x6: 64 Mbytes (value: 6)
     *          - B_0x7: 128 Mbytes (value: 7)
     */
        /** @brief 2 Mbytes */
    constexpr std::uint32_t ICACHE_CRR3_RSIZE_B_0x1 = 1;
        /** @brief 4 Mbytes */
    constexpr std::uint32_t ICACHE_CRR3_RSIZE_B_0x2 = 2;
        /** @brief 8 Mbytes */
    constexpr std::uint32_t ICACHE_CRR3_RSIZE_B_0x3 = 3;
        /** @brief 16 Mbytes */
    constexpr std::uint32_t ICACHE_CRR3_RSIZE_B_0x4 = 4;
        /** @brief 32 Mbytes */
    constexpr std::uint32_t ICACHE_CRR3_RSIZE_B_0x5 = 5;
        /** @brief 64 Mbytes */
    constexpr std::uint32_t ICACHE_CRR3_RSIZE_B_0x6 = 6;
        /** @brief 128 Mbytes */
    constexpr std::uint32_t ICACHE_CRR3_RSIZE_B_0x7 = 7;

    /** @brief enable for region x */
    using ICACHE_CRR3_REN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: disabled (value: 0)
     *          - B_0x1: enabled (value: 1)
     */
        /** @brief disabled */
    constexpr std::uint32_t ICACHE_CRR3_REN_B_0x0 = 0;
        /** @brief enabled */
    constexpr std::uint32_t ICACHE_CRR3_REN_B_0x1 = 1;

    /** @brief remapped address for region x */
    using ICACHE_CRR3_REMAPADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AHB cache master selection for region x */
    using ICACHE_CRR3_MSTSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no action (master1 selected by default) (value: 0)
     *          - B_0x1: master2 selected (value: 1)
     */
        /** @brief no action (master1 selected by default) */
    constexpr std::uint32_t ICACHE_CRR3_MSTSEL_B_0x0 = 0;
        /** @brief master2 selected */
    constexpr std::uint32_t ICACHE_CRR3_MSTSEL_B_0x1 = 1;

    /** @brief output burst type for region x */
    using ICACHE_CRR3_HBURST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: WRAP (value: 0)
     *          - B_0x1: INCR (value: 1)
     */
        /** @brief WRAP */
    constexpr std::uint32_t ICACHE_CRR3_HBURST_B_0x0 = 0;
        /** @brief INCR */
    constexpr std::uint32_t ICACHE_CRR3_HBURST_B_0x1 = 1;

}

#endif
