/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32N645_CACHEAXI_S_HPP
#define EMBEDDED_PP_STM32N645_CACHEAXI_S_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief AXI cache */
namespace STM32N645::CACHEAXI_S {

    /** @brief CACHEAXI control register 1 */
    using CACHEAXI_CR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief enable */
    using CACHEAXI_CR1_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: cache mode disabled (CACHEAXI bypassed, or in SRAM mode if option supported) (value: 0)
     *          - B_0x1: cache mode enabled (value: 1)
     */
        /** @brief cache mode disabled (CACHEAXI bypassed, or in SRAM mode if option supported) */
    constexpr std::uint32_t CACHEAXI_CR1_EN_B_0x0 = 0;
        /** @brief cache mode enabled */
    constexpr std::uint32_t CACHEAXI_CR1_EN_B_0x1 = 1;

    /** @brief full cache invalidation */
    using CACHEAXI_CR1_CACHEINV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: invalidate entire cache (all cache lines valid bit = 0) (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t CACHEAXI_CR1_CACHEINV_B_0x0 = 0;
        /** @brief invalidate entire cache (all cache lines valid bit = 0) */
    constexpr std::uint32_t CACHEAXI_CR1_CACHEINV_B_0x1 = 1;

    /** @brief read-hit monitor enable */
    using CACHEAXI_CR1_RHITMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: cache read-hit monitor switched off. Stopping the monitor does not reset it. (value: 0)
     *          - B_0x1: cache read-hit monitor enabled (value: 1)
     */
        /** @brief cache read-hit monitor switched off. Stopping the monitor does not reset it. */
    constexpr std::uint32_t CACHEAXI_CR1_RHITMEN_B_0x0 = 0;
        /** @brief cache read-hit monitor enabled */
    constexpr std::uint32_t CACHEAXI_CR1_RHITMEN_B_0x1 = 1;

    /** @brief read-miss monitor enable */
    using CACHEAXI_CR1_RMISSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: cache read-miss monitor switched off. Stopping the monitor does not reset it. (value: 0)
     *          - B_0x1: cache read-miss monitor enabled (value: 1)
     */
        /** @brief cache read-miss monitor switched off. Stopping the monitor does not reset it. */
    constexpr std::uint32_t CACHEAXI_CR1_RMISSMEN_B_0x0 = 0;
        /** @brief cache read-miss monitor enabled */
    constexpr std::uint32_t CACHEAXI_CR1_RMISSMEN_B_0x1 = 1;

    /** @brief read-hit monitor reset */
    using CACHEAXI_CR1_RHITMRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: reset cache read-hit monitor (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t CACHEAXI_CR1_RHITMRST_B_0x0 = 0;
        /** @brief reset cache read-hit monitor */
    constexpr std::uint32_t CACHEAXI_CR1_RHITMRST_B_0x1 = 1;

    /** @brief read-miss monitor reset */
    using CACHEAXI_CR1_RMISSMRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: reset cache read-miss monitor (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t CACHEAXI_CR1_RMISSMRST_B_0x0 = 0;
        /** @brief reset cache read-miss monitor */
    constexpr std::uint32_t CACHEAXI_CR1_RMISSMRST_B_0x1 = 1;

    /** @brief write-hit monitor enable */
    using CACHEAXI_CR1_WHITMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: cache write-hit monitor switched off. Stopping the monitor does not reset it. (value: 0)
     *          - B_0x1: cache write-hit monitor enabled (value: 1)
     */
        /** @brief cache write-hit monitor switched off. Stopping the monitor does not reset it. */
    constexpr std::uint32_t CACHEAXI_CR1_WHITMEN_B_0x0 = 0;
        /** @brief cache write-hit monitor enabled */
    constexpr std::uint32_t CACHEAXI_CR1_WHITMEN_B_0x1 = 1;

    /** @brief write-miss monitor enable */
    using CACHEAXI_CR1_WMISSMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: cache write-miss monitor switched off. Stopping the monitor does not reset it. (value: 0)
     *          - B_0x1: cache write-miss monitor enabled (value: 1)
     */
        /** @brief cache write-miss monitor switched off. Stopping the monitor does not reset it. */
    constexpr std::uint32_t CACHEAXI_CR1_WMISSMEN_B_0x0 = 0;
        /** @brief cache write-miss monitor enabled */
    constexpr std::uint32_t CACHEAXI_CR1_WMISSMEN_B_0x1 = 1;

    /** @brief write-hit monitor reset */
    using CACHEAXI_CR1_WHITMRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: reset cache write-hit monitor (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t CACHEAXI_CR1_WHITMRST_B_0x0 = 0;
        /** @brief reset cache write-hit monitor */
    constexpr std::uint32_t CACHEAXI_CR1_WHITMRST_B_0x1 = 1;

    /** @brief write-miss monitor reset */
    using CACHEAXI_CR1_WMISSMRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: reset cache write-miss monitor (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t CACHEAXI_CR1_WMISSMRST_B_0x0 = 0;
        /** @brief reset cache write-miss monitor */
    constexpr std::uint32_t CACHEAXI_CR1_WMISSMRST_B_0x1 = 1;

    /** @brief read-allocate miss monitor enable */
    using CACHEAXI_CR1_RAMMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: cache read-allocate miss monitor switched off. Stopping the monitor does not reset it. (value: 0)
     *          - B_0x1: cache read-allocate miss monitor enabled (value: 1)
     */
        /** @brief cache read-allocate miss monitor switched off. Stopping the monitor does not reset it. */
    constexpr std::uint32_t CACHEAXI_CR1_RAMMEN_B_0x0 = 0;
        /** @brief cache read-allocate miss monitor enabled */
    constexpr std::uint32_t CACHEAXI_CR1_RAMMEN_B_0x1 = 1;

    /** @brief write-allocate miss monitor enable */
    using CACHEAXI_CR1_WAMMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: cache write-allocate miss monitor switched off. Stopping the monitor does not reset it. (value: 0)
     *          - B_0x1: cache write-allocate miss monitor enabled (value: 1)
     */
        /** @brief cache write-allocate miss monitor switched off. Stopping the monitor does not reset it. */
    constexpr std::uint32_t CACHEAXI_CR1_WAMMEN_B_0x0 = 0;
        /** @brief cache write-allocate miss monitor enabled */
    constexpr std::uint32_t CACHEAXI_CR1_WAMMEN_B_0x1 = 1;

    /** @brief read-allocate miss monitor reset */
    using CACHEAXI_CR1_RAMMRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: reset cache read-allocate miss monitor (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t CACHEAXI_CR1_RAMMRST_B_0x0 = 0;
        /** @brief reset cache read-allocate miss monitor */
    constexpr std::uint32_t CACHEAXI_CR1_RAMMRST_B_0x1 = 1;

    /** @brief write-allocate miss monitor reset */
    using CACHEAXI_CR1_WAMMRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: reset cache write-allocate miss monitor (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t CACHEAXI_CR1_WAMMRST_B_0x0 = 0;
        /** @brief reset cache write-allocate miss monitor */
    constexpr std::uint32_t CACHEAXI_CR1_WAMMRST_B_0x1 = 1;

    /** @brief write-through monitor enable */
    using CACHEAXI_CR1_WTMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: cache write-through monitor switched off. Stopping the monitor does not reset it. (value: 0)
     *          - B_0x1: cache write-through monitor enabled (value: 1)
     */
        /** @brief cache write-through monitor switched off. Stopping the monitor does not reset it. */
    constexpr std::uint32_t CACHEAXI_CR1_WTMEN_B_0x0 = 0;
        /** @brief cache write-through monitor enabled */
    constexpr std::uint32_t CACHEAXI_CR1_WTMEN_B_0x1 = 1;

    /** @brief eviction monitor enable */
    using CACHEAXI_CR1_EVIMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: cache eviction monitor switched off. Stopping the monitor does not reset it. (value: 0)
     *          - B_0x1: cache eviction monitor enabled (value: 1)
     */
        /** @brief cache eviction monitor switched off. Stopping the monitor does not reset it. */
    constexpr std::uint32_t CACHEAXI_CR1_EVIMEN_B_0x0 = 0;
        /** @brief cache eviction monitor enabled */
    constexpr std::uint32_t CACHEAXI_CR1_EVIMEN_B_0x1 = 1;

    /** @brief write-through monitor reset */
    using CACHEAXI_CR1_WTMRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: reset cache write-through monitor (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t CACHEAXI_CR1_WTMRST_B_0x0 = 0;
        /** @brief reset cache write-through monitor */
    constexpr std::uint32_t CACHEAXI_CR1_WTMRST_B_0x1 = 1;

    /** @brief eviction monitor reset */
    using CACHEAXI_CR1_EVIMRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: reset cache eviction monitor (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t CACHEAXI_CR1_EVIMRST_B_0x0 = 0;
        /** @brief reset cache eviction monitor */
    constexpr std::uint32_t CACHEAXI_CR1_EVIMRST_B_0x1 = 1;

    /** @brief CACHEAXI status register */
    using CACHEAXI_SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief full invalidate busy flag */
    using CACHEAXI_SR_BUSYF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: cache not busy on a CACHEINV operation (value: 0)
     *          - B_0x1: cache executing a full invalidate CACHEINV operation (value: 1)
     */
        /** @brief cache not busy on a CACHEINV operation */
    constexpr std::uint32_t CACHEAXI_SR_BUSYF_B_0x0 = 0;
        /** @brief cache executing a full invalidate CACHEINV operation */
    constexpr std::uint32_t CACHEAXI_SR_BUSYF_B_0x1 = 1;

    /** @brief full invalidate busy end flag */
    using CACHEAXI_SR_BSYENDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: cache busy or in idle (value: 0)
     *          - B_0x1: full invalidate CACHEINV operation finished (value: 1)
     */
        /** @brief cache busy or in idle */
    constexpr std::uint32_t CACHEAXI_SR_BSYENDF_B_0x0 = 0;
        /** @brief full invalidate CACHEINV operation finished */
    constexpr std::uint32_t CACHEAXI_SR_BSYENDF_B_0x1 = 1;

    /** @brief cache error flag */
    using CACHEAXI_SR_ERRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no error (value: 0)
     *          - B_0x1: an error occurred during the operation (eviction or clean operation write-back error). (value: 1)
     */
        /** @brief no error */
    constexpr std::uint32_t CACHEAXI_SR_ERRF_B_0x0 = 0;
        /** @brief an error occurred during the operation (eviction or clean operation write-back error). */
    constexpr std::uint32_t CACHEAXI_SR_ERRF_B_0x1 = 1;

    /** @brief command busy flag */
    using CACHEAXI_SR_BUSYCMDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: cache not busy on a CACHECMD command (value: 0)
     *          - B_0x1: cache busy on a CACHECMD command (clean or clean-and-invalidate an address range) (value: 1)
     */
        /** @brief cache not busy on a CACHECMD command */
    constexpr std::uint32_t CACHEAXI_SR_BUSYCMDF_B_0x0 = 0;
        /** @brief cache busy on a CACHECMD command (clean or clean-and-invalidate an address range) */
    constexpr std::uint32_t CACHEAXI_SR_BUSYCMDF_B_0x1 = 1;

    /** @brief command end flag */
    using CACHEAXI_SR_CMDENDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: cache busy or in idle (value: 0)
     *          - B_0x1: CACHECMD command finished (value: 1)
     */
        /** @brief cache busy or in idle */
    constexpr std::uint32_t CACHEAXI_SR_CMDENDF_B_0x0 = 0;
        /** @brief CACHECMD command finished */
    constexpr std::uint32_t CACHEAXI_SR_CMDENDF_B_0x1 = 1;

    /** @brief CACHEAXI interrupt enable register */
    using CACHEAXI_IER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief interrupt enable on busy end */
    using CACHEAXI_IER_BSYENDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled on busy end (value: 0)
     *          - B_0x1: Interrupt enabled on busy end (value: 1)
     */
        /** @brief Interrupt disabled on busy end */
    constexpr std::uint32_t CACHEAXI_IER_BSYENDIE_B_0x0 = 0;
        /** @brief Interrupt enabled on busy end */
    constexpr std::uint32_t CACHEAXI_IER_BSYENDIE_B_0x1 = 1;

    /** @brief interrupt enable on cache error */
    using CACHEAXI_IER_ERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled on error (value: 0)
     *          - B_0x1: interrupt enabled on error (value: 1)
     */
        /** @brief interrupt disabled on error */
    constexpr std::uint32_t CACHEAXI_IER_ERRIE_B_0x0 = 0;
        /** @brief interrupt enabled on error */
    constexpr std::uint32_t CACHEAXI_IER_ERRIE_B_0x1 = 1;

    /** @brief interrupt enable on command end */
    using CACHEAXI_IER_CMDENDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled on command end (value: 0)
     *          - B_0x1: interrupt enabled on command end (value: 1)
     */
        /** @brief interrupt disabled on command end */
    constexpr std::uint32_t CACHEAXI_IER_CMDENDIE_B_0x0 = 0;
        /** @brief interrupt enabled on command end */
    constexpr std::uint32_t CACHEAXI_IER_CMDENDIE_B_0x1 = 1;

    /** @brief CACHEAXI flag clear register */
    using CACHEAXI_FCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief clear full invalidate busy end flag */
    using CACHEAXI_FCR_CBSYENDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: clears BSYENDF flag in CACHEAXI_SR. (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t CACHEAXI_FCR_CBSYENDF_B_0x0 = 0;
        /** @brief clears BSYENDF flag in CACHEAXI_SR. */
    constexpr std::uint32_t CACHEAXI_FCR_CBSYENDF_B_0x1 = 1;

    /** @brief clear cache error flag */
    using CACHEAXI_FCR_CERRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: clears ERRF flag in CACHEAXI_SR. (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t CACHEAXI_FCR_CERRF_B_0x0 = 0;
        /** @brief clears ERRF flag in CACHEAXI_SR. */
    constexpr std::uint32_t CACHEAXI_FCR_CERRF_B_0x1 = 1;

    /** @brief clear command end flag */
    using CACHEAXI_FCR_CCMDENDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: clears CMDENDF flag in CACHEAXI_SR. (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t CACHEAXI_FCR_CCMDENDF_B_0x0 = 0;
        /** @brief clears CMDENDF flag in CACHEAXI_SR. */
    constexpr std::uint32_t CACHEAXI_FCR_CCMDENDF_B_0x1 = 1;

    /** @brief CACHEAXI read-hit monitor register */
    using CACHEAXI_RHMONR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief cache read-hit monitor counter */
    using CACHEAXI_RHMONR_RHITMON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CACHEAXI read-miss monitor register */
    using CACHEAXI_RMMONR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief cache read-miss monitor counter */
    using CACHEAXI_RMMONR_RMISSMON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CACHEAXI read-allocate miss monitor register */
    using CACHEAXI_RAMMONR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief cache read-allocate miss monitor counter */
    using CACHEAXI_RAMMONR_RAMMON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CACHEAXI eviction monitor register */
    using CACHEAXI_EVIMONR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief cache eviction monitor counter */
    using CACHEAXI_EVIMONR_EVIMON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CACHEAXI write-hit monitor register */
    using CACHEAXI_WHMONR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief cache write-hit monitor counter */
    using CACHEAXI_WHMONR_WHITMON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CACHEAXI write-miss monitor register */
    using CACHEAXI_WMMONR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief cache write-miss monitor counter */
    using CACHEAXI_WMMONR_WMISSMON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CACHEAXI write-allocate miss monitor register */
    using CACHEAXI_WAMMONR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief cache write-allocate miss monitor counter */
    using CACHEAXI_WAMMONR_WAMMON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CACHEAXI write-through monitor register */
    using CACHEAXI_WTMONR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief cache write-through monitor counter */
    using CACHEAXI_WTMONR_WTMON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CACHEAXI control register 2 */
    using CACHEAXI_CR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x100, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief starts maintenance range command (maintenance operation defined in CACHECMD). */
    using CACHEAXI_CR2_STARTCMD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: command operation (cache maintenance) finished (value: 0)
     *          - B_0x1: start maintenance command (cache maintenance) (value: 1)
     */
        /** @brief command operation (cache maintenance) finished */
    constexpr std::uint32_t CACHEAXI_CR2_STARTCMD_B_0x0 = 0;
        /** @brief start maintenance command (cache maintenance) */
    constexpr std::uint32_t CACHEAXI_CR2_STARTCMD_B_0x1 = 1;

    /** @brief cache command maintenance operation (clean or clean-and-invalidate an address range) */
    using CACHEAXI_CR2_CACHECMD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no operation (value: 0)
     *          - B_0x1: clean range (value: 1)
     *          - B_0x3: clean and invalidate range (value: 3)
     */
        /** @brief no operation */
    constexpr std::uint32_t CACHEAXI_CR2_CACHECMD_B_0x0 = 0;
        /** @brief clean range */
    constexpr std::uint32_t CACHEAXI_CR2_CACHECMD_B_0x1 = 1;
        /** @brief clean and invalidate range */
    constexpr std::uint32_t CACHEAXI_CR2_CACHECMD_B_0x3 = 3;

    /** @brief CACHEAXI command range start address register */
    using CACHEAXI_CMDRSADDRR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x104, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief start address of range to which the cache maintenance command specified in CACHEAXI_CR2.CACHECMD field applies */
    using CACHEAXI_CMDRSADDRR_CMDSTARTADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 26, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CACHEAXI command range end address register */
    using CACHEAXI_CMDREADDRR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x108, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief end address of range to which the cache maintenance command specified in CACHEAXI_CR2.CACHECMD field applies */
    using CACHEAXI_CMDREADDRR_CMDENDADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 26, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
