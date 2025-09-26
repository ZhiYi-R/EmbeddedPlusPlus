/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32H533_DCACHE_S_HPP
#define EMBEDDED_PP_STM32H533_DCACHE_S_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief DCACHE register block */
namespace STM32H533::DCACHE_S {

    /** @brief DCACHE control register */
    using DCACHE_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief enable */
    using DCACHE_CR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: cache disabled (value: 0)
     *          - B_0x1: cache enabled (value: 1)
     */
        /** @brief cache disabled */
    constexpr std::uint32_t DCACHE_CR_EN_B_0x0 = 0;
        /** @brief cache enabled */
    constexpr std::uint32_t DCACHE_CR_EN_B_0x1 = 1;

    /** @brief full cache invalidation */
    using DCACHE_CR_CACHEINV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: invalidate entire cache (all cache lines valid bit = 0) (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t DCACHE_CR_CACHEINV_B_0x0 = 0;
        /** @brief invalidate entire cache (all cache lines valid bit = 0) */
    constexpr std::uint32_t DCACHE_CR_CACHEINV_B_0x1 = 1;

    /** @brief cache command maintenance operation (cleans and/or invalidates an address range) */
    using DCACHE_CR_CACHECMD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no operation (value: 0)
     *          - B_0x1: clean range (value: 1)
     *          - B_0x2: invalidate range (value: 2)
     *          - B_0x3: clean and invalidate range (value: 3)
     */
        /** @brief no operation */
    constexpr std::uint32_t DCACHE_CR_CACHECMD_B_0x0 = 0;
        /** @brief clean range */
    constexpr std::uint32_t DCACHE_CR_CACHECMD_B_0x1 = 1;
        /** @brief invalidate range */
    constexpr std::uint32_t DCACHE_CR_CACHECMD_B_0x2 = 2;
        /** @brief clean and invalidate range */
    constexpr std::uint32_t DCACHE_CR_CACHECMD_B_0x3 = 3;

    /** @brief starts maintenance command (maintenance operation defined in CACHECMD). */
    using DCACHE_CR_STARTCMD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: command operation (cache maintenance) finished (value: 0)
     *          - B_0x1: start maintenance command (cache maintenance) (value: 1)
     */
        /** @brief command operation (cache maintenance) finished */
    constexpr std::uint32_t DCACHE_CR_STARTCMD_B_0x0 = 0;
        /** @brief start maintenance command (cache maintenance) */
    constexpr std::uint32_t DCACHE_CR_STARTCMD_B_0x1 = 1;

    /** @brief read-hit monitor enable */
    using DCACHE_CR_RHITMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: cache read-hit monitor switched off. (value: 0)
     *          - B_0x1: cache read-hit monitor enabled (value: 1)
     */
        /** @brief cache read-hit monitor switched off. */
    constexpr std::uint32_t DCACHE_CR_RHITMEN_B_0x0 = 0;
        /** @brief cache read-hit monitor enabled */
    constexpr std::uint32_t DCACHE_CR_RHITMEN_B_0x1 = 1;

    /** @brief read-miss monitor enable */
    using DCACHE_CR_RMISSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: cache read-miss monitor switched off. (value: 0)
     *          - B_0x1: cache read-miss monitor enabled (value: 1)
     */
        /** @brief cache read-miss monitor switched off. */
    constexpr std::uint32_t DCACHE_CR_RMISSMEN_B_0x0 = 0;
        /** @brief cache read-miss monitor enabled */
    constexpr std::uint32_t DCACHE_CR_RMISSMEN_B_0x1 = 1;

    /** @brief read-hit monitor reset */
    using DCACHE_CR_RHITMRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: reset cache read-hit monitor (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t DCACHE_CR_RHITMRST_B_0x0 = 0;
        /** @brief reset cache read-hit monitor */
    constexpr std::uint32_t DCACHE_CR_RHITMRST_B_0x1 = 1;

    /** @brief read-miss monitor reset */
    using DCACHE_CR_RMISSMRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: reset cache read-miss monitor (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t DCACHE_CR_RMISSMRST_B_0x0 = 0;
        /** @brief reset cache read-miss monitor */
    constexpr std::uint32_t DCACHE_CR_RMISSMRST_B_0x1 = 1;

    /** @brief write-hit monitor enable */
    using DCACHE_CR_WHITMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: cache write-hit monitor switched off. (value: 0)
     *          - B_0x1: cache write-hit monitor enabled (value: 1)
     */
        /** @brief cache write-hit monitor switched off. */
    constexpr std::uint32_t DCACHE_CR_WHITMEN_B_0x0 = 0;
        /** @brief cache write-hit monitor enabled */
    constexpr std::uint32_t DCACHE_CR_WHITMEN_B_0x1 = 1;

    /** @brief write-miss monitor enable */
    using DCACHE_CR_WMISSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: cache write-miss monitor switched off. (value: 0)
     *          - B_0x1: cache write-miss monitor enabled (value: 1)
     */
        /** @brief cache write-miss monitor switched off. */
    constexpr std::uint32_t DCACHE_CR_WMISSMEN_B_0x0 = 0;
        /** @brief cache write-miss monitor enabled */
    constexpr std::uint32_t DCACHE_CR_WMISSMEN_B_0x1 = 1;

    /** @brief write-hit monitor reset */
    using DCACHE_CR_WHITMRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: reset cache write-hit monitor (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t DCACHE_CR_WHITMRST_B_0x0 = 0;
        /** @brief reset cache write-hit monitor */
    constexpr std::uint32_t DCACHE_CR_WHITMRST_B_0x1 = 1;

    /** @brief write-miss monitor reset */
    using DCACHE_CR_WMISSMRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: reset cache write-miss monitor (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t DCACHE_CR_WMISSMRST_B_0x0 = 0;
        /** @brief reset cache write-miss monitor */
    constexpr std::uint32_t DCACHE_CR_WMISSMRST_B_0x1 = 1;

    /** @brief output burst type for cache master port read accesses */
    using DCACHE_CR_HBURST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: WRAP (value: 0)
     *          - B_0x1: INCR (value: 1)
     */
        /** @brief WRAP */
    constexpr std::uint32_t DCACHE_CR_HBURST_B_0x0 = 0;
        /** @brief INCR */
    constexpr std::uint32_t DCACHE_CR_HBURST_B_0x1 = 1;

    /** @brief DCACHE status register */
    using DCACHE_SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief full invalidate busy flag */
    using DCACHE_SR_BUSYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: cache not busy on a CACHEINV operation (value: 0)
     *          - B_0x1: cache executing a full invalidate CACHEINV operation (value: 1)
     */
        /** @brief cache not busy on a CACHEINV operation */
    constexpr std::uint32_t DCACHE_SR_BUSYF_B_0x0 = 0;
        /** @brief cache executing a full invalidate CACHEINV operation */
    constexpr std::uint32_t DCACHE_SR_BUSYF_B_0x1 = 1;

    /** @brief full invalidate busy end flag */
    using DCACHE_SR_BSYENDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: cache busy or in idle (value: 0)
     *          - B_0x1: full invalidate CACHEINV operation finished (value: 1)
     */
        /** @brief cache busy or in idle */
    constexpr std::uint32_t DCACHE_SR_BSYENDF_B_0x0 = 0;
        /** @brief full invalidate CACHEINV operation finished */
    constexpr std::uint32_t DCACHE_SR_BSYENDF_B_0x1 = 1;

    /** @brief cache error flag */
    using DCACHE_SR_ERRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no error (value: 0)
     *          - B_0x1: an error occurred during the operation (eviction or clean operation write-back error). (value: 1)
     */
        /** @brief no error */
    constexpr std::uint32_t DCACHE_SR_ERRF_B_0x0 = 0;
        /** @brief an error occurred during the operation (eviction or clean operation write-back error). */
    constexpr std::uint32_t DCACHE_SR_ERRF_B_0x1 = 1;

    /** @brief command busy flag */
    using DCACHE_SR_BUSYCMDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: cache not busy on a CACHECMD command (value: 0)
     *          - B_0x1: cache busy on a CACHECMD command (clean and/or invalidate an address range) (value: 1)
     */
        /** @brief cache not busy on a CACHECMD command */
    constexpr std::uint32_t DCACHE_SR_BUSYCMDF_B_0x0 = 0;
        /** @brief cache busy on a CACHECMD command (clean and/or invalidate an address range) */
    constexpr std::uint32_t DCACHE_SR_BUSYCMDF_B_0x1 = 1;

    /** @brief command end flag */
    using DCACHE_SR_CMDENDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: cache busy or in idle (value: 0)
     *          - B_0x1: CACHECMD command finished (value: 1)
     */
        /** @brief cache busy or in idle */
    constexpr std::uint32_t DCACHE_SR_CMDENDF_B_0x0 = 0;
        /** @brief CACHECMD command finished */
    constexpr std::uint32_t DCACHE_SR_CMDENDF_B_0x1 = 1;

    /** @brief DCACHE interrupt enable register */
    using DCACHE_IER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief interrupt enable on busy end */
    using DCACHE_IER_BSYENDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled on busy end (value: 0)
     *          - B_0x1: Interrupt enabled on busy end (value: 1)
     */
        /** @brief Interrupt disabled on busy end */
    constexpr std::uint32_t DCACHE_IER_BSYENDIE_B_0x0 = 0;
        /** @brief Interrupt enabled on busy end */
    constexpr std::uint32_t DCACHE_IER_BSYENDIE_B_0x1 = 1;

    /** @brief interrupt enable on cache error */
    using DCACHE_IER_ERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled on error (value: 0)
     *          - B_0x1: interrupt enabled on error (value: 1)
     */
        /** @brief interrupt disabled on error */
    constexpr std::uint32_t DCACHE_IER_ERRIE_B_0x0 = 0;
        /** @brief interrupt enabled on error */
    constexpr std::uint32_t DCACHE_IER_ERRIE_B_0x1 = 1;

    /** @brief interrupt enable on command end */
    using DCACHE_IER_CMDENDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled on command end (value: 0)
     *          - B_0x1: interrupt enabled on command end (value: 1)
     */
        /** @brief interrupt disabled on command end */
    constexpr std::uint32_t DCACHE_IER_CMDENDIE_B_0x0 = 0;
        /** @brief interrupt enabled on command end */
    constexpr std::uint32_t DCACHE_IER_CMDENDIE_B_0x1 = 1;

    /** @brief DCACHE flag clear register */
    using DCACHE_FCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief clear full invalidate busy end flag */
    using DCACHE_FCR_CBSYENDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: clears BSYENDF flag in DCACHE_SR (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t DCACHE_FCR_CBSYENDF_B_0x0 = 0;
        /** @brief clears BSYENDF flag in DCACHE_SR */
    constexpr std::uint32_t DCACHE_FCR_CBSYENDF_B_0x1 = 1;

    /** @brief clear cache error flag */
    using DCACHE_FCR_CERRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: clears ERRF flag in DCACHE_SR (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t DCACHE_FCR_CERRF_B_0x0 = 0;
        /** @brief clears ERRF flag in DCACHE_SR */
    constexpr std::uint32_t DCACHE_FCR_CERRF_B_0x1 = 1;

    /** @brief clear command end flag */
    using DCACHE_FCR_CCMDENDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: clears CMDENDF flag in DCACHE_SR (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t DCACHE_FCR_CCMDENDF_B_0x0 = 0;
        /** @brief clears CMDENDF flag in DCACHE_SR */
    constexpr std::uint32_t DCACHE_FCR_CCMDENDF_B_0x1 = 1;

    /** @brief DCACHE read-hit monitor register */
    using DCACHE_RHMONR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief cache read-hit monitor counter */
    using DCACHE_RHMONR_RHITMON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCACHE read-miss monitor register */
    using DCACHE_RMMONR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief cache read-miss monitor counter */
    using DCACHE_RMMONR_RMISSMON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCACHE write-hit monitor register */
    using DCACHE_WHMONR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief cache write-hit monitor counter */
    using DCACHE_WHMONR_WHITMON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCACHE write-miss monitor register */
    using DCACHE_WMMONR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief cache write-miss monitor counter */
    using DCACHE_WMMONR_WMISSMON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCACHE command range start address register */
    using DCACHE_CMDRSADDRR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief start address of range to which the cache maintenance command specified in DCACHE_CR. */
    using DCACHE_CMDRSADDRR_CMDSTARTADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCACHE command range end address register */
    using DCACHE_CMDREADDRR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief end address of range to which the cache maintenance command specified in DCACHE_CR. */
    using DCACHE_CMDREADDRR_CMDENDADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
