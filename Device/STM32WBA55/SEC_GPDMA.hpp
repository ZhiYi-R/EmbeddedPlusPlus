/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32WBA55_SEC_GPDMA_HPP
#define EMBEDDED_PP_STM32WBA55_SEC_GPDMA_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief General purpose direct memory access controller */
namespace STM32WBA55::SEC_GPDMA {

    /** @brief GPDMA secure configuration register */
    using GPDMA_SECCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief secure state of channel x */
    using GPDMA_SECCFGR_SEC0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GPDMA_SECCFGR_SEC0_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GPDMA_SECCFGR_SEC0_B_0x1 = 1;

    /** @brief secure state of channel x */
    using GPDMA_SECCFGR_SEC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GPDMA_SECCFGR_SEC1_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GPDMA_SECCFGR_SEC1_B_0x1 = 1;

    /** @brief secure state of channel x */
    using GPDMA_SECCFGR_SEC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GPDMA_SECCFGR_SEC2_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GPDMA_SECCFGR_SEC2_B_0x1 = 1;

    /** @brief secure state of channel x */
    using GPDMA_SECCFGR_SEC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GPDMA_SECCFGR_SEC3_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GPDMA_SECCFGR_SEC3_B_0x1 = 1;

    /** @brief secure state of channel x */
    using GPDMA_SECCFGR_SEC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GPDMA_SECCFGR_SEC4_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GPDMA_SECCFGR_SEC4_B_0x1 = 1;

    /** @brief secure state of channel x */
    using GPDMA_SECCFGR_SEC5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GPDMA_SECCFGR_SEC5_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GPDMA_SECCFGR_SEC5_B_0x1 = 1;

    /** @brief secure state of channel x */
    using GPDMA_SECCFGR_SEC6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GPDMA_SECCFGR_SEC6_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GPDMA_SECCFGR_SEC6_B_0x1 = 1;

    /** @brief secure state of channel x */
    using GPDMA_SECCFGR_SEC7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GPDMA_SECCFGR_SEC7_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GPDMA_SECCFGR_SEC7_B_0x1 = 1;

    /** @brief GPDMA privileged configuration register */
    using GPDMA_PRIVCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief privileged state of channel x */
    using GPDMA_PRIVCFGR_PRIV0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GPDMA_PRIVCFGR_PRIV0_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GPDMA_PRIVCFGR_PRIV0_B_0x1 = 1;

    /** @brief privileged state of channel x */
    using GPDMA_PRIVCFGR_PRIV1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GPDMA_PRIVCFGR_PRIV1_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GPDMA_PRIVCFGR_PRIV1_B_0x1 = 1;

    /** @brief privileged state of channel x */
    using GPDMA_PRIVCFGR_PRIV2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GPDMA_PRIVCFGR_PRIV2_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GPDMA_PRIVCFGR_PRIV2_B_0x1 = 1;

    /** @brief privileged state of channel x */
    using GPDMA_PRIVCFGR_PRIV3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GPDMA_PRIVCFGR_PRIV3_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GPDMA_PRIVCFGR_PRIV3_B_0x1 = 1;

    /** @brief privileged state of channel x */
    using GPDMA_PRIVCFGR_PRIV4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GPDMA_PRIVCFGR_PRIV4_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GPDMA_PRIVCFGR_PRIV4_B_0x1 = 1;

    /** @brief privileged state of channel x */
    using GPDMA_PRIVCFGR_PRIV5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GPDMA_PRIVCFGR_PRIV5_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GPDMA_PRIVCFGR_PRIV5_B_0x1 = 1;

    /** @brief privileged state of channel x */
    using GPDMA_PRIVCFGR_PRIV6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GPDMA_PRIVCFGR_PRIV6_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GPDMA_PRIVCFGR_PRIV6_B_0x1 = 1;

    /** @brief privileged state of channel x */
    using GPDMA_PRIVCFGR_PRIV7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GPDMA_PRIVCFGR_PRIV7_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GPDMA_PRIVCFGR_PRIV7_B_0x1 = 1;

    /** @brief GPDMA configuration lock register */
    using GPDMA_RCFGLOCKR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief lock the configuration of GPDMA_SECCFGR.SECx and GPDMA_PRIVCFGR.PRIVx, until a global GPDMA reset This bit is cleared after reset and, once set, it cannot be reset until a global GPDMA reset. */
    using GPDMA_RCFGLOCKR_LOCK0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: secure privilege configuration of the channel x is writable. (value: 0)
     *          - B_0x1: secure privilege configuration of the channel x is not writable. (value: 1)
     */
        /** @brief secure privilege configuration of the channel x is writable. */
    constexpr std::uint32_t GPDMA_RCFGLOCKR_LOCK0_B_0x0 = 0;
        /** @brief secure privilege configuration of the channel x is not writable. */
    constexpr std::uint32_t GPDMA_RCFGLOCKR_LOCK0_B_0x1 = 1;

    /** @brief lock the configuration of GPDMA_SECCFGR.SECx and GPDMA_PRIVCFGR.PRIVx, until a global GPDMA reset This bit is cleared after reset and, once set, it cannot be reset until a global GPDMA reset. */
    using GPDMA_RCFGLOCKR_LOCK1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: secure privilege configuration of the channel x is writable. (value: 0)
     *          - B_0x1: secure privilege configuration of the channel x is not writable. (value: 1)
     */
        /** @brief secure privilege configuration of the channel x is writable. */
    constexpr std::uint32_t GPDMA_RCFGLOCKR_LOCK1_B_0x0 = 0;
        /** @brief secure privilege configuration of the channel x is not writable. */
    constexpr std::uint32_t GPDMA_RCFGLOCKR_LOCK1_B_0x1 = 1;

    /** @brief lock the configuration of GPDMA_SECCFGR.SECx and GPDMA_PRIVCFGR.PRIVx, until a global GPDMA reset This bit is cleared after reset and, once set, it cannot be reset until a global GPDMA reset. */
    using GPDMA_RCFGLOCKR_LOCK2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: secure privilege configuration of the channel x is writable. (value: 0)
     *          - B_0x1: secure privilege configuration of the channel x is not writable. (value: 1)
     */
        /** @brief secure privilege configuration of the channel x is writable. */
    constexpr std::uint32_t GPDMA_RCFGLOCKR_LOCK2_B_0x0 = 0;
        /** @brief secure privilege configuration of the channel x is not writable. */
    constexpr std::uint32_t GPDMA_RCFGLOCKR_LOCK2_B_0x1 = 1;

    /** @brief lock the configuration of GPDMA_SECCFGR.SECx and GPDMA_PRIVCFGR.PRIVx, until a global GPDMA reset This bit is cleared after reset and, once set, it cannot be reset until a global GPDMA reset. */
    using GPDMA_RCFGLOCKR_LOCK3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: secure privilege configuration of the channel x is writable. (value: 0)
     *          - B_0x1: secure privilege configuration of the channel x is not writable. (value: 1)
     */
        /** @brief secure privilege configuration of the channel x is writable. */
    constexpr std::uint32_t GPDMA_RCFGLOCKR_LOCK3_B_0x0 = 0;
        /** @brief secure privilege configuration of the channel x is not writable. */
    constexpr std::uint32_t GPDMA_RCFGLOCKR_LOCK3_B_0x1 = 1;

    /** @brief lock the configuration of GPDMA_SECCFGR.SECx and GPDMA_PRIVCFGR.PRIVx, until a global GPDMA reset This bit is cleared after reset and, once set, it cannot be reset until a global GPDMA reset. */
    using GPDMA_RCFGLOCKR_LOCK4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: secure privilege configuration of the channel x is writable. (value: 0)
     *          - B_0x1: secure privilege configuration of the channel x is not writable. (value: 1)
     */
        /** @brief secure privilege configuration of the channel x is writable. */
    constexpr std::uint32_t GPDMA_RCFGLOCKR_LOCK4_B_0x0 = 0;
        /** @brief secure privilege configuration of the channel x is not writable. */
    constexpr std::uint32_t GPDMA_RCFGLOCKR_LOCK4_B_0x1 = 1;

    /** @brief lock the configuration of GPDMA_SECCFGR.SECx and GPDMA_PRIVCFGR.PRIVx, until a global GPDMA reset This bit is cleared after reset and, once set, it cannot be reset until a global GPDMA reset. */
    using GPDMA_RCFGLOCKR_LOCK5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: secure privilege configuration of the channel x is writable. (value: 0)
     *          - B_0x1: secure privilege configuration of the channel x is not writable. (value: 1)
     */
        /** @brief secure privilege configuration of the channel x is writable. */
    constexpr std::uint32_t GPDMA_RCFGLOCKR_LOCK5_B_0x0 = 0;
        /** @brief secure privilege configuration of the channel x is not writable. */
    constexpr std::uint32_t GPDMA_RCFGLOCKR_LOCK5_B_0x1 = 1;

    /** @brief lock the configuration of GPDMA_SECCFGR.SECx and GPDMA_PRIVCFGR.PRIVx, until a global GPDMA reset This bit is cleared after reset and, once set, it cannot be reset until a global GPDMA reset. */
    using GPDMA_RCFGLOCKR_LOCK6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: secure privilege configuration of the channel x is writable. (value: 0)
     *          - B_0x1: secure privilege configuration of the channel x is not writable. (value: 1)
     */
        /** @brief secure privilege configuration of the channel x is writable. */
    constexpr std::uint32_t GPDMA_RCFGLOCKR_LOCK6_B_0x0 = 0;
        /** @brief secure privilege configuration of the channel x is not writable. */
    constexpr std::uint32_t GPDMA_RCFGLOCKR_LOCK6_B_0x1 = 1;

    /** @brief lock the configuration of GPDMA_SECCFGR.SECx and GPDMA_PRIVCFGR.PRIVx, until a global GPDMA reset This bit is cleared after reset and, once set, it cannot be reset until a global GPDMA reset. */
    using GPDMA_RCFGLOCKR_LOCK7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: secure privilege configuration of the channel x is writable. (value: 0)
     *          - B_0x1: secure privilege configuration of the channel x is not writable. (value: 1)
     */
        /** @brief secure privilege configuration of the channel x is writable. */
    constexpr std::uint32_t GPDMA_RCFGLOCKR_LOCK7_B_0x0 = 0;
        /** @brief secure privilege configuration of the channel x is not writable. */
    constexpr std::uint32_t GPDMA_RCFGLOCKR_LOCK7_B_0x1 = 1;

    /** @brief GPDMA non-secure masked interrupt status register */
    using GPDMA_MISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief masked interrupt status of channel x */
    using GPDMA_MISR_MIS0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt occurred on channel x (value: 0)
     *          - B_0x1: an interrupt occurred on channel x (value: 1)
     */
        /** @brief no interrupt occurred on channel x */
    constexpr std::uint32_t GPDMA_MISR_MIS0_B_0x0 = 0;
        /** @brief an interrupt occurred on channel x */
    constexpr std::uint32_t GPDMA_MISR_MIS0_B_0x1 = 1;

    /** @brief masked interrupt status of channel x */
    using GPDMA_MISR_MIS1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt occurred on channel x (value: 0)
     *          - B_0x1: an interrupt occurred on channel x (value: 1)
     */
        /** @brief no interrupt occurred on channel x */
    constexpr std::uint32_t GPDMA_MISR_MIS1_B_0x0 = 0;
        /** @brief an interrupt occurred on channel x */
    constexpr std::uint32_t GPDMA_MISR_MIS1_B_0x1 = 1;

    /** @brief masked interrupt status of channel x */
    using GPDMA_MISR_MIS2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt occurred on channel x (value: 0)
     *          - B_0x1: an interrupt occurred on channel x (value: 1)
     */
        /** @brief no interrupt occurred on channel x */
    constexpr std::uint32_t GPDMA_MISR_MIS2_B_0x0 = 0;
        /** @brief an interrupt occurred on channel x */
    constexpr std::uint32_t GPDMA_MISR_MIS2_B_0x1 = 1;

    /** @brief masked interrupt status of channel x */
    using GPDMA_MISR_MIS3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt occurred on channel x (value: 0)
     *          - B_0x1: an interrupt occurred on channel x (value: 1)
     */
        /** @brief no interrupt occurred on channel x */
    constexpr std::uint32_t GPDMA_MISR_MIS3_B_0x0 = 0;
        /** @brief an interrupt occurred on channel x */
    constexpr std::uint32_t GPDMA_MISR_MIS3_B_0x1 = 1;

    /** @brief masked interrupt status of channel x */
    using GPDMA_MISR_MIS4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt occurred on channel x (value: 0)
     *          - B_0x1: an interrupt occurred on channel x (value: 1)
     */
        /** @brief no interrupt occurred on channel x */
    constexpr std::uint32_t GPDMA_MISR_MIS4_B_0x0 = 0;
        /** @brief an interrupt occurred on channel x */
    constexpr std::uint32_t GPDMA_MISR_MIS4_B_0x1 = 1;

    /** @brief masked interrupt status of channel x */
    using GPDMA_MISR_MIS5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt occurred on channel x (value: 0)
     *          - B_0x1: an interrupt occurred on channel x (value: 1)
     */
        /** @brief no interrupt occurred on channel x */
    constexpr std::uint32_t GPDMA_MISR_MIS5_B_0x0 = 0;
        /** @brief an interrupt occurred on channel x */
    constexpr std::uint32_t GPDMA_MISR_MIS5_B_0x1 = 1;

    /** @brief masked interrupt status of channel x */
    using GPDMA_MISR_MIS6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt occurred on channel x (value: 0)
     *          - B_0x1: an interrupt occurred on channel x (value: 1)
     */
        /** @brief no interrupt occurred on channel x */
    constexpr std::uint32_t GPDMA_MISR_MIS6_B_0x0 = 0;
        /** @brief an interrupt occurred on channel x */
    constexpr std::uint32_t GPDMA_MISR_MIS6_B_0x1 = 1;

    /** @brief masked interrupt status of channel x */
    using GPDMA_MISR_MIS7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt occurred on channel x (value: 0)
     *          - B_0x1: an interrupt occurred on channel x (value: 1)
     */
        /** @brief no interrupt occurred on channel x */
    constexpr std::uint32_t GPDMA_MISR_MIS7_B_0x0 = 0;
        /** @brief an interrupt occurred on channel x */
    constexpr std::uint32_t GPDMA_MISR_MIS7_B_0x1 = 1;

    /** @brief GPDMA secure masked interrupt status register */
    using GPDMA_SMISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief masked interrupt status of the secure channel x */
    using GPDMA_SMISR_MIS0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt occurred on the secure channel x (value: 0)
     *          - B_0x1: an interrupt occurred on the secure channel x (value: 1)
     */
        /** @brief no interrupt occurred on the secure channel x */
    constexpr std::uint32_t GPDMA_SMISR_MIS0_B_0x0 = 0;
        /** @brief an interrupt occurred on the secure channel x */
    constexpr std::uint32_t GPDMA_SMISR_MIS0_B_0x1 = 1;

    /** @brief masked interrupt status of the secure channel x */
    using GPDMA_SMISR_MIS1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt occurred on the secure channel x (value: 0)
     *          - B_0x1: an interrupt occurred on the secure channel x (value: 1)
     */
        /** @brief no interrupt occurred on the secure channel x */
    constexpr std::uint32_t GPDMA_SMISR_MIS1_B_0x0 = 0;
        /** @brief an interrupt occurred on the secure channel x */
    constexpr std::uint32_t GPDMA_SMISR_MIS1_B_0x1 = 1;

    /** @brief masked interrupt status of the secure channel x */
    using GPDMA_SMISR_MIS2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt occurred on the secure channel x (value: 0)
     *          - B_0x1: an interrupt occurred on the secure channel x (value: 1)
     */
        /** @brief no interrupt occurred on the secure channel x */
    constexpr std::uint32_t GPDMA_SMISR_MIS2_B_0x0 = 0;
        /** @brief an interrupt occurred on the secure channel x */
    constexpr std::uint32_t GPDMA_SMISR_MIS2_B_0x1 = 1;

    /** @brief masked interrupt status of the secure channel x */
    using GPDMA_SMISR_MIS3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt occurred on the secure channel x (value: 0)
     *          - B_0x1: an interrupt occurred on the secure channel x (value: 1)
     */
        /** @brief no interrupt occurred on the secure channel x */
    constexpr std::uint32_t GPDMA_SMISR_MIS3_B_0x0 = 0;
        /** @brief an interrupt occurred on the secure channel x */
    constexpr std::uint32_t GPDMA_SMISR_MIS3_B_0x1 = 1;

    /** @brief masked interrupt status of the secure channel x */
    using GPDMA_SMISR_MIS4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt occurred on the secure channel x (value: 0)
     *          - B_0x1: an interrupt occurred on the secure channel x (value: 1)
     */
        /** @brief no interrupt occurred on the secure channel x */
    constexpr std::uint32_t GPDMA_SMISR_MIS4_B_0x0 = 0;
        /** @brief an interrupt occurred on the secure channel x */
    constexpr std::uint32_t GPDMA_SMISR_MIS4_B_0x1 = 1;

    /** @brief masked interrupt status of the secure channel x */
    using GPDMA_SMISR_MIS5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt occurred on the secure channel x (value: 0)
     *          - B_0x1: an interrupt occurred on the secure channel x (value: 1)
     */
        /** @brief no interrupt occurred on the secure channel x */
    constexpr std::uint32_t GPDMA_SMISR_MIS5_B_0x0 = 0;
        /** @brief an interrupt occurred on the secure channel x */
    constexpr std::uint32_t GPDMA_SMISR_MIS5_B_0x1 = 1;

    /** @brief masked interrupt status of the secure channel x */
    using GPDMA_SMISR_MIS6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt occurred on the secure channel x (value: 0)
     *          - B_0x1: an interrupt occurred on the secure channel x (value: 1)
     */
        /** @brief no interrupt occurred on the secure channel x */
    constexpr std::uint32_t GPDMA_SMISR_MIS6_B_0x0 = 0;
        /** @brief an interrupt occurred on the secure channel x */
    constexpr std::uint32_t GPDMA_SMISR_MIS6_B_0x1 = 1;

    /** @brief masked interrupt status of the secure channel x */
    using GPDMA_SMISR_MIS7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt occurred on the secure channel x (value: 0)
     *          - B_0x1: an interrupt occurred on the secure channel x (value: 1)
     */
        /** @brief no interrupt occurred on the secure channel x */
    constexpr std::uint32_t GPDMA_SMISR_MIS7_B_0x0 = 0;
        /** @brief an interrupt occurred on the secure channel x */
    constexpr std::uint32_t GPDMA_SMISR_MIS7_B_0x1 = 1;

    /** @brief GPDMA channel 0 linked-list base address register */
    using GPDMA_C0LBAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief linked-list base address of GPDMA channel x */
    using GPDMA_C0LBAR_LBA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 0 flag clear register */
    using GPDMA_C0FCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transfer complete flag clear */
    using GPDMA_C0FCR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding TCF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C0FCR_TCF_B_0x0 = 0;
        /** @brief corresponding TCF flag cleared */
    constexpr std::uint32_t GPDMA_C0FCR_TCF_B_0x1 = 1;

    /** @brief half transfer flag clear */
    using GPDMA_C0FCR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding HTF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C0FCR_HTF_B_0x0 = 0;
        /** @brief corresponding HTF flag cleared */
    constexpr std::uint32_t GPDMA_C0FCR_HTF_B_0x1 = 1;

    /** @brief data transfer error flag clear */
    using GPDMA_C0FCR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding DTEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C0FCR_DTEF_B_0x0 = 0;
        /** @brief corresponding DTEF flag cleared */
    constexpr std::uint32_t GPDMA_C0FCR_DTEF_B_0x1 = 1;

    /** @brief update link transfer error flag clear */
    using GPDMA_C0FCR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding ULEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C0FCR_ULEF_B_0x0 = 0;
        /** @brief corresponding ULEF flag cleared */
    constexpr std::uint32_t GPDMA_C0FCR_ULEF_B_0x1 = 1;

    /** @brief user setting error flag clear */
    using GPDMA_C0FCR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding USEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C0FCR_USEF_B_0x0 = 0;
        /** @brief corresponding USEF flag cleared */
    constexpr std::uint32_t GPDMA_C0FCR_USEF_B_0x1 = 1;

    /** @brief completed suspension flag clear */
    using GPDMA_C0FCR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding SUSPF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C0FCR_SUSPF_B_0x0 = 0;
        /** @brief corresponding SUSPF flag cleared */
    constexpr std::uint32_t GPDMA_C0FCR_SUSPF_B_0x1 = 1;

    /** @brief trigger overrun flag clear */
    using GPDMA_C0FCR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding TOF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C0FCR_TOF_B_0x0 = 0;
        /** @brief corresponding TOF flag cleared */
    constexpr std::uint32_t GPDMA_C0FCR_TOF_B_0x1 = 1;

    /** @brief GPDMA channel 0 status register */
    using GPDMA_C0SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief idle flag This idle flag is deasserted by hardware when the channel is enabled (GPDMA_CxCR.EN = 1) with a valid channel configuration (no USEF to be immediately reported). This idle flag is asserted after hard reset or by hardware when the channel is back in idle state (in suspended or disabled state). */
    using GPDMA_C0SR_IDLEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: channel not in idle state (value: 0)
     *          - B_0x1: channel in idle state (value: 1)
     */
        /** @brief channel not in idle state */
    constexpr std::uint32_t GPDMA_C0SR_IDLEF_B_0x0 = 0;
        /** @brief channel in idle state */
    constexpr std::uint32_t GPDMA_C0SR_IDLEF_B_0x1 = 1;

    /** @brief transfer complete flag A transfer complete event is either a block transfer complete, or a LLI transfer complete including the upload of the next LLI if any, or the full linked-list completion, depending on the transfer complete event mode (GPDMA_CxTR2.TCEM[1:0]). */
    using GPDMA_C0SR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no transfer complete event (value: 0)
     *          - B_0x1: a transfer complete event occurred (value: 1)
     */
        /** @brief no transfer complete event */
    constexpr std::uint32_t GPDMA_C0SR_TCF_B_0x0 = 0;
        /** @brief a transfer complete event occurred */
    constexpr std::uint32_t GPDMA_C0SR_TCF_B_0x1 = 1;

    /** @brief half transfer flag A half block transfer occurs when half of the bytes of the source block size (rounded up integer of GPDMA_CxBR1.BNDT[15:0]/2) has been transferred to the destination. */
    using GPDMA_C0SR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no half transfer event (value: 0)
     *          - B_0x1: a half transfer event occurred (value: 1)
     */
        /** @brief no half transfer event */
    constexpr std::uint32_t GPDMA_C0SR_HTF_B_0x0 = 0;
        /** @brief a half transfer event occurred */
    constexpr std::uint32_t GPDMA_C0SR_HTF_B_0x1 = 1;

    /** @brief data transfer error flag */
    using GPDMA_C0SR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no data transfer error event (value: 0)
     *          - B_0x1: a master bus error event occurred on a data transfer (value: 1)
     */
        /** @brief no data transfer error event */
    constexpr std::uint32_t GPDMA_C0SR_DTEF_B_0x0 = 0;
        /** @brief a master bus error event occurred on a data transfer */
    constexpr std::uint32_t GPDMA_C0SR_DTEF_B_0x1 = 1;

    /** @brief update link transfer error flag */
    using GPDMA_C0SR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no update link transfer error event (value: 0)
     *          - B_0x1: a master bus error event occurred while updating a linked-list register from memory (value: 1)
     */
        /** @brief no update link transfer error event */
    constexpr std::uint32_t GPDMA_C0SR_ULEF_B_0x0 = 0;
        /** @brief a master bus error event occurred while updating a linked-list register from memory */
    constexpr std::uint32_t GPDMA_C0SR_ULEF_B_0x1 = 1;

    /** @brief user setting error flag */
    using GPDMA_C0SR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no user setting error event (value: 0)
     *          - B_0x1: a user setting error event occurred (value: 1)
     */
        /** @brief no user setting error event */
    constexpr std::uint32_t GPDMA_C0SR_USEF_B_0x0 = 0;
        /** @brief a user setting error event occurred */
    constexpr std::uint32_t GPDMA_C0SR_USEF_B_0x1 = 1;

    /** @brief completed suspension flag */
    using GPDMA_C0SR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no completed suspension event (value: 0)
     *          - B_0x1: a completed suspension event occurred (value: 1)
     */
        /** @brief no completed suspension event */
    constexpr std::uint32_t GPDMA_C0SR_SUSPF_B_0x0 = 0;
        /** @brief a completed suspension event occurred */
    constexpr std::uint32_t GPDMA_C0SR_SUSPF_B_0x1 = 1;

    /** @brief trigger overrun flag */
    using GPDMA_C0SR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no trigger overrun event (value: 0)
     *          - B_0x1: a trigger overrun event occurred (value: 1)
     */
        /** @brief no trigger overrun event */
    constexpr std::uint32_t GPDMA_C0SR_TOF_B_0x0 = 0;
        /** @brief a trigger overrun event occurred */
    constexpr std::uint32_t GPDMA_C0SR_TOF_B_0x1 = 1;

    /** @brief monitored FIFO level Number of available write beats in the FIFO, in units of the programmed destination data width (see GPDMA_CxTR1.DDW_LOG2[1:0], in units of bytes, half-words, or words). Note: After having suspended an active transfer, the user may need to read FIFOL[7:0], additionally to GPDMA_CxBR1.BDNT[15:0] to know how many data have been transferred to the destination. Before reading, the user may wait for the transfer to be suspended (GPDMA_CxSR.SUSPF = 1). */
    using GPDMA_C0SR_FIFOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 0 control register */
    using GPDMA_C0CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x64, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief enable Writing 1 into the field RESET (bit 1) causes the hardware to de-assert this bit, whatever is written into this bit 0. Else: this bit is deasserted by hardware when there is a transfer error (master bus error or user setting error) or when there is a channel transfer complete (channel ready to be configured, for example if LSM=1 at the end of a single execution of the LLI). Else, this bit can be asserted by software. Writing 0 into this EN bit is ignored. */
    using GPDMA_C0CR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write: ignored, read: channel disabled (value: 0)
     *          - B_0x1: write: enable channel, read: channel enabled (value: 1)
     */
        /** @brief write: ignored, read: channel disabled */
    constexpr std::uint32_t GPDMA_C0CR_EN_B_0x0 = 0;
        /** @brief write: enable channel, read: channel enabled */
    constexpr std::uint32_t GPDMA_C0CR_EN_B_0x1 = 1;

    /** @brief reset This bit is write only. Writing 0 has no impact. Writing 1 implies the reset of the following: the FIFO, the channel internal state, SUSP and EN bits (whatever is written receptively in bit 2 and bit 0). The reset is effective when the channel is in steady state, meaning one of the following: - active channel in suspended state (GPDMA_CxSR.SUSPF = 1 and GPDMA_CxSR.IDLEF = GPDMA_CxCR.EN = 1) - channel in disabled state (GPDMA_CxSR.IDLEF = 1 and GPDMA_CxCR.EN = 0). After writing a RESET, to continue using this channel, the user must explicitly reconfigure the channel including the hardware-modified configuration registers (GPDMA_CxBR1, GPDMA_CxSAR and GPDMA_CxDAR) before enabling again the channel (see the programming sequence in Figure 44). */
    using GPDMA_C0CR_RESET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no channel reset (value: 0)
     *          - B_0x1: channel reset (value: 1)
     */
        /** @brief no channel reset */
    constexpr std::uint32_t GPDMA_C0CR_RESET_B_0x0 = 0;
        /** @brief channel reset */
    constexpr std::uint32_t GPDMA_C0CR_RESET_B_0x1 = 1;

    /** @brief suspend Writing 1 into the field RESET (bit 1) causes the hardware to de-assert this bit, whatever is written into this bit 2. Else: Software must write 1 in order to suspend an active channel (channel with an ongoing GPDMA transfer over its master ports). The software must write 0 in order to resume a suspended channel, following the programming sequence detailed in Figure 43. */
    using GPDMA_C0CR_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write: resume channel, read: channel not suspended (value: 0)
     *          - B_0x1: write: suspend channel, read: channel suspended. (value: 1)
     */
        /** @brief write: resume channel, read: channel not suspended */
    constexpr std::uint32_t GPDMA_C0CR_SUSP_B_0x0 = 0;
        /** @brief write: suspend channel, read: channel suspended. */
    constexpr std::uint32_t GPDMA_C0CR_SUSP_B_0x1 = 1;

    /** @brief transfer complete interrupt enable */
    using GPDMA_C0CR_TCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C0CR_TCIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C0CR_TCIE_B_0x1 = 1;

    /** @brief half transfer complete interrupt enable */
    using GPDMA_C0CR_HTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C0CR_HTIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C0CR_HTIE_B_0x1 = 1;

    /** @brief data transfer error interrupt enable */
    using GPDMA_C0CR_DTEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C0CR_DTEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C0CR_DTEIE_B_0x1 = 1;

    /** @brief update link transfer error interrupt enable */
    using GPDMA_C0CR_ULEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C0CR_ULEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C0CR_ULEIE_B_0x1 = 1;

    /** @brief user setting error interrupt enable */
    using GPDMA_C0CR_USEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C0CR_USEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C0CR_USEIE_B_0x1 = 1;

    /** @brief completed suspension interrupt enable */
    using GPDMA_C0CR_SUSPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C0CR_SUSPIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C0CR_SUSPIE_B_0x1 = 1;

    /** @brief trigger overrun interrupt enable */
    using GPDMA_C0CR_TOIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C0CR_TOIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C0CR_TOIE_B_0x1 = 1;

    /** @brief Link step mode First the (possible 1D/repeated) block transfer is executed as defined by the current internal register file until GPDMA_CxBR1.BNDT[15:0] = 0. Secondly the next linked-list data structure is conditionally uploaded from memory as defined by GPDMA_CxLLR. Then channel execution is completed. Note: This bit must be written when EN=0. This bit is read-only when EN=1. */
    using GPDMA_C0CR_LSM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: channel executed for the full linked-list and completed at the end of the last LLI (GPDMA_CxLLR = 0). The 16 low-significant bits of the link address are null (LA[15:0] = 0) and all the update bits are null (UT1 =UB1 = UT2 = USA = UDA = ULL = 0). Then GPDMA_CxBR1.BNDT[15:0] = 0. (value: 0)
     *          - B_0x1: channel executed once for the current LLI (value: 1)
     */
        /** @brief channel executed for the full linked-list and completed at the end of the last LLI (GPDMA_CxLLR = 0). The 16 low-significant bits of the link address are null (LA[15:0] = 0) and all the update bits are null (UT1 =UB1 = UT2 = USA = UDA = ULL = 0). Then GPDMA_CxBR1.BNDT[15:0] = 0. */
    constexpr std::uint32_t GPDMA_C0CR_LSM_B_0x0 = 0;
        /** @brief channel executed once for the current LLI */
    constexpr std::uint32_t GPDMA_C0CR_LSM_B_0x1 = 1;

    /** @brief linked-list allocated port This bit is used to allocate the master port for the update of the GPDMA linked-list registers from the memory. Note: This bit must be written when EN=0. This bit is read-only when EN=1. */
    using GPDMA_C0CR_LAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C0CR_LAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C0CR_LAP_B_0x1 = 1;

    /** @brief priority level of the channel x GPDMA transfer versus others Note: This bit must be written when EN = 0. This bit is read-only when EN = 1. */
    using GPDMA_C0CR_PRIO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: low priority, low weight (value: 0)
     *          - B_0x1: low priority, mid weight (value: 1)
     *          - B_0x2: low priority, high weight (value: 2)
     *          - B_0x3: high priority (value: 3)
     */
        /** @brief low priority, low weight */
    constexpr std::uint32_t GPDMA_C0CR_PRIO_B_0x0 = 0;
        /** @brief low priority, mid weight */
    constexpr std::uint32_t GPDMA_C0CR_PRIO_B_0x1 = 1;
        /** @brief low priority, high weight */
    constexpr std::uint32_t GPDMA_C0CR_PRIO_B_0x2 = 2;
        /** @brief high priority */
    constexpr std::uint32_t GPDMA_C0CR_PRIO_B_0x3 = 3;

    /** @brief GPDMA channel 0 transfer register 1 */
    using GPDMA_C0TR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x90, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief binary logarithm of the source data width of a burst in bytes Setting a 8-byte data width causes a user setting error to be reported and no transfer is issued. A source block size must be a multiple of the source data width (GPDMA_CxBR1.BNDT[2:0] versus SDW_LOG2[1:0]). Otherwise, a user setting error is reported and no transfer is issued. Note: A source burst transfer must have an aligned address with its data width (start address GPDMA_CxSAR[2:0] versus SDW_LOG2[1:0]). Otherwise, a user setting error is reported and none transfer is issued. */
    using GPDMA_C0TR1_SDW_LOG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: byte (value: 0)
     *          - B_0x1: half-word (2 bytes) (value: 1)
     *          - B_0x2: word (4 bytes) (value: 2)
     *          - B_0x3: user setting error reported and no transfer issued (value: 3)
     */
        /** @brief byte */
    constexpr std::uint32_t GPDMA_C0TR1_SDW_LOG2_B_0x0 = 0;
        /** @brief half-word (2 bytes) */
    constexpr std::uint32_t GPDMA_C0TR1_SDW_LOG2_B_0x1 = 1;
        /** @brief word (4 bytes) */
    constexpr std::uint32_t GPDMA_C0TR1_SDW_LOG2_B_0x2 = 2;
        /** @brief user setting error reported and no transfer issued */
    constexpr std::uint32_t GPDMA_C0TR1_SDW_LOG2_B_0x3 = 3;

    /** @brief source incrementing burst The source address, pointed by GPDMA_CxSAR, is kept constant after a burst beat/single transfer or is incremented by the offset value corresponding to a contiguous data after a burst beat/single transfer. */
    using GPDMA_C0TR1_SINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fixed burst (value: 0)
     *          - B_0x1: contiguously incremented burst (value: 1)
     */
        /** @brief fixed burst */
    constexpr std::uint32_t GPDMA_C0TR1_SINC_B_0x0 = 0;
        /** @brief contiguously incremented burst */
    constexpr std::uint32_t GPDMA_C0TR1_SINC_B_0x1 = 1;

    /** @brief source burst length minus 1, between 0 and 63 The burst length unit is one data named beat within a burst. If SBL_1[5:0] =0 , the burst can be named as single. Each data/beat has a width defined by the destination data width SDW_LOG2[1:0]. Note: If a burst transfer crossed a 1-Kbyte address boundary on a AHB transfer, the GPDMA modifies and shortens the programmed burst into singles or bursts of lower length, to be compliant with the AHB protocol. Note: If a burst transfer is of length greater than the FIFO size of the channel x, the GPDMA modifies and shortens the programmed burst into singles or bursts of lower length, to be compliant with the FIFO size. Transfer performance is lower, with GPDMA re-arbitration between effective and lower singles/bursts, but the data integrity is guaranteed. */
    using GPDMA_C0TR1_SBL_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief padding/alignment mode If DDW_LOG2[1:0] = SDW_LOG2[1:0]: if the data width of a burst destination transfer is equal to the data width of a burst source transfer, these bits are ignored. Else, in the following enumerated values, the condition PAM_1 is when destination data width is higher that source data width, and the condition PAM_2 is when destination data width is higher than source data width. 1x: successive source data are FIFO queued and packed at the destination data width, in a left (LSB) to right (MSB) order (named little endian), before a destination transfer Note: 1x: source data is FIFO queued and unpacked at the destination data width, to be transferred in a left (LSB) to right (MSB) order (named little endian) to the destination */
    using GPDMA_C0TR1_PAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0_PAM_1: source data is transferred as right aligned, padded with 0s up to the destination data width (value: 0)
     *          - B_0x1_PAM_1: source data is transferred as right aligned, sign extended up to the destination data width (value: 1)
     */
        /** @brief source data is transferred as right aligned, padded with 0s up to the destination data width */
    constexpr std::uint32_t GPDMA_C0TR1_PAM_B_0x0_PAM_1 = 0;
        /** @brief source data is transferred as right aligned, sign extended up to the destination data width */
    constexpr std::uint32_t GPDMA_C0TR1_PAM_B_0x1_PAM_1 = 1;

    /** @brief source byte exchange within the unaligned half-word of each source word If the source data width is shorter than a word, this bit is ignored. If the source data width is a word: */
    using GPDMA_C0TR1_SBX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no byte-based exchange within the unaligned half-word of each source word (value: 0)
     *          - B_0x1: the two consecutive bytes within the unaligned half-word of each source word are exchanged. (value: 1)
     */
        /** @brief no byte-based exchange within the unaligned half-word of each source word */
    constexpr std::uint32_t GPDMA_C0TR1_SBX_B_0x0 = 0;
        /** @brief the two consecutive bytes within the unaligned half-word of each source word are exchanged. */
    constexpr std::uint32_t GPDMA_C0TR1_SBX_B_0x1 = 1;

    /** @brief source allocated port This bit is used to allocate the master port for the source transfer Note: This bit must be written when EN = 0. This bit is read-only when EN = 1. */
    using GPDMA_C0TR1_SAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C0TR1_SAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C0TR1_SAP_B_0x1 = 1;

    /** @brief security attribute of the GPDMA transfer from the source If GPDMA_SECCFGR.SECx = 1 and the access is secure: This is a secure register bit. This bit can only be read by a secure software. This bit must be written by a secure software when GPDMA_SECCFGR.SECx =1 . A secure write is ignored when GPDMA_SECCFGR.SECx = 0. When GPDMA_SECCFGR.SECx is deasserted, this SSEC bit is also deasserted by hardware (on a secure reconfiguration of the channel as non-secure), and the GPDMA transfer from the source is non-secure. */
    using GPDMA_C0TR1_SSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPDMA transfer non-secure (value: 0)
     *          - B_0x1: GPDMA transfer secure (value: 1)
     */
        /** @brief GPDMA transfer non-secure */
    constexpr std::uint32_t GPDMA_C0TR1_SSEC_B_0x0 = 0;
        /** @brief GPDMA transfer secure */
    constexpr std::uint32_t GPDMA_C0TR1_SSEC_B_0x1 = 1;

    /** @brief binary logarithm of the destination data width of a burst, in bytes Setting a 8-byte data width causes a user setting error to be reported and none transfer is issued. Note: A destination burst transfer must have an aligned address with its data width (start address GPDMA_CxDAR[2:0] versus DDW_LOG2[1:0]). Otherwise a user setting error is reported and no transfer is issued. */
    using GPDMA_C0TR1_DDW_LOG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: byte (value: 0)
     *          - B_0x1: half-word (2 bytes) (value: 1)
     *          - B_0x2: word (4 bytes) (value: 2)
     *          - B_0x3: user setting error reported and no transfer issued (value: 3)
     */
        /** @brief byte */
    constexpr std::uint32_t GPDMA_C0TR1_DDW_LOG2_B_0x0 = 0;
        /** @brief half-word (2 bytes) */
    constexpr std::uint32_t GPDMA_C0TR1_DDW_LOG2_B_0x1 = 1;
        /** @brief word (4 bytes) */
    constexpr std::uint32_t GPDMA_C0TR1_DDW_LOG2_B_0x2 = 2;
        /** @brief user setting error reported and no transfer issued */
    constexpr std::uint32_t GPDMA_C0TR1_DDW_LOG2_B_0x3 = 3;

    /** @brief destination incrementing burst The destination address, pointed by GPDMA_CxDAR, is kept constant after a burst beat/single transfer, or is incremented by the offset value corresponding to a contiguous data after a burst beat/single transfer. */
    using GPDMA_C0TR1_DINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fixed burst (value: 0)
     *          - B_0x1: contiguously incremented burst (value: 1)
     */
        /** @brief fixed burst */
    constexpr std::uint32_t GPDMA_C0TR1_DINC_B_0x0 = 0;
        /** @brief contiguously incremented burst */
    constexpr std::uint32_t GPDMA_C0TR1_DINC_B_0x1 = 1;

    /** @brief destination burst length minus 1, between 0 and 63 The burst length unit is one data named beat within a burst. If DBL_1[5:0] =0 , the burst can be named as single. Each data/beat has a width defined by the destination data width DDW_LOG2[1:0]. Note: If a burst transfer crossed a 1-Kbyte address boundary on a AHB transfer, the GPDMA modifies and shortens the programmed burst into singles or bursts of lower length, to be compliant with the AHB protocol. Note: If a burst transfer is of length greater than the FIFO size of the channel x, the GPDMA modifies and shortens the programmed burst into singles or bursts of lower length, to be compliant with the FIFO size. Transfer performance is lower, with GPDMA re-arbitration between effective and lower singles/bursts, but the data integrity is guaranteed. */
    using GPDMA_C0TR1_DBL_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination byte exchange If the destination data size is a byte, this bit is ignored. If the destination data size is not a byte: */
    using GPDMA_C0TR1_DBX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no byte-based exchange within half-word (value: 0)
     *          - B_0x1: the two consecutive (post PAM) bytes are exchanged in each destination half-word. (value: 1)
     */
        /** @brief no byte-based exchange within half-word */
    constexpr std::uint32_t GPDMA_C0TR1_DBX_B_0x0 = 0;
        /** @brief the two consecutive (post PAM) bytes are exchanged in each destination half-word. */
    constexpr std::uint32_t GPDMA_C0TR1_DBX_B_0x1 = 1;

    /** @brief destination half-word exchange If the destination data size is shorter than a word, this bit is ignored. If the destination data size is a word: */
    using GPDMA_C0TR1_DHX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no halfword-based exchanged within word (value: 0)
     *          - B_0x1: the two consecutive (post PAM) half-words are exchanged in each destination word. (value: 1)
     */
        /** @brief no halfword-based exchanged within word */
    constexpr std::uint32_t GPDMA_C0TR1_DHX_B_0x0 = 0;
        /** @brief the two consecutive (post PAM) half-words are exchanged in each destination word. */
    constexpr std::uint32_t GPDMA_C0TR1_DHX_B_0x1 = 1;

    /** @brief destination allocated port This bit is used to allocate the master port for the destination transfer Note: This bit must be written when EN = 0. This bit is read-only when EN = 1. */
    using GPDMA_C0TR1_DAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C0TR1_DAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C0TR1_DAP_B_0x1 = 1;

    /** @brief security attribute of the GPDMA transfer to the destination If GPDMA_SECCFGR.SECx = 1 and the access is secure: This is a secure register bit. This bit can only be read by a secure software. This bit must be written by a secure software when GPDMA_SECCFGR.SECx = 1. A secure write is ignored when GPDMA_SECCFGR.SECx = 0. When GPDMA_SECCFGR.SECx is deasserted, this DSEC bit is also deasserted by hardware (on a secure reconfiguration of the channel as non-secure), and the GPDMA transfer to the destination is non-secure. */
    using GPDMA_C0TR1_DSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPDMA transfer non-secure (value: 0)
     *          - B_0x1: GPDMA transfer secure (value: 1)
     */
        /** @brief GPDMA transfer non-secure */
    constexpr std::uint32_t GPDMA_C0TR1_DSEC_B_0x0 = 0;
        /** @brief GPDMA transfer secure */
    constexpr std::uint32_t GPDMA_C0TR1_DSEC_B_0x1 = 1;

    /** @brief GPDMA channel 0 transfer register 2 */
    using GPDMA_C0TR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x94, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA hardware request selection These bits are ignored if channel x is activated (GPDMA_CxCR.EN asserted) with SWREQ = 1 (software request for a memory-to-memory transfer). Else, the selected hardware request is internally taken into account as per Section 16.3.3. The user must not assign a same input hardware request (same REQSEL[5:0] value) to different active GPDMA channels (GPDMA_CxCR.EN = 1 and GPDMA_CxTR2.SWREQ = 0 for these channels). GPDMA is not intended to hardware support the case of simultaneous enabled channels incorrectly configured with a same hardware peripheral request signal, and there is no user setting error reporting. */
    using GPDMA_C0TR2_REQSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief software request This bit is internally taken into account when GPDMA_CxCR.EN is asserted. */
    using GPDMA_C0TR2_SWREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no software request. The selected hardware request REQSEL[5:0] is taken into account. (value: 0)
     *          - B_0x1: software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[5:0] is ignored. (value: 1)
     */
        /** @brief no software request. The selected hardware request REQSEL[5:0] is taken into account. */
    constexpr std::uint32_t GPDMA_C0TR2_SWREQ_B_0x0 = 0;
        /** @brief software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[5:0] is ignored. */
    constexpr std::uint32_t GPDMA_C0TR2_SWREQ_B_0x1 = 1;

    /** @brief destination hardware request This bit is ignored if channel x is activated (GPDMA_CxCR.EN asserted) with SWREQ = 1 (software request for a memory-to-memory transfer). Else: */
    using GPDMA_C0TR2_DREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: selected hardware request driven by a source peripheral (request signal taken into account by the GPDMA transfer scheduler over the source/read port) (value: 0)
     *          - B_0x1: selected hardware request driven by a destination peripheral (request signal taken into account by the GPDMA transfer scheduler over the destination/write port) (value: 1)
     */
        /** @brief selected hardware request driven by a source peripheral (request signal taken into account by the GPDMA transfer scheduler over the source/read port) */
    constexpr std::uint32_t GPDMA_C0TR2_DREQ_B_0x0 = 0;
        /** @brief selected hardware request driven by a destination peripheral (request signal taken into account by the GPDMA transfer scheduler over the destination/write port) */
    constexpr std::uint32_t GPDMA_C0TR2_DREQ_B_0x1 = 1;

    /** @brief Block hardware request If the channel x is activated (GPDMA_CxCR.EN asserted) with SWREQ = 1 (software request for a memory-to-memory transfer), this bit is ignored. Else: */
    using GPDMA_C0TR2_BREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a burst level. (value: 0)
     *          - B_0x1: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see Section 16.3.3). (value: 1)
     */
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a burst level. */
    constexpr std::uint32_t GPDMA_C0TR2_BREQ_B_0x0 = 0;
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see Section 16.3.3). */
    constexpr std::uint32_t GPDMA_C0TR2_BREQ_B_0x1 = 1;

    /** @brief trigger mode These bits define the transfer granularity for its conditioning by the trigger. */
    using GPDMA_C0TR2_TRIGM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: at block level: the first burst read of each block transfer is conditioned by one hit trigger . (value: 0)
     *          - B_0x1: channel x = 0 to 7, same as 0010: at link level: a LLI link transfer is conditioned by one hit trigger. The LLI data transfer (if any) is not conditioned. (value: 1)
     *          - B_0x3: at programmed burst level: If SWREQ = 1, each programmed burst read is conditioned by one hit trigger. If SWREQ = 0, each programmed burst that is requested by the selected peripheral, is conditioned by one hit trigger. (value: 3)
     */
        /** @brief at block level: the first burst read of each block transfer is conditioned by one hit trigger . */
    constexpr std::uint32_t GPDMA_C0TR2_TRIGM_B_0x0 = 0;
        /** @brief channel x = 0 to 7, same as 0010: at link level: a LLI link transfer is conditioned by one hit trigger. The LLI data transfer (if any) is not conditioned. */
    constexpr std::uint32_t GPDMA_C0TR2_TRIGM_B_0x1 = 1;
        /** @brief at programmed burst level: If SWREQ = 1, each programmed burst read is conditioned by one hit trigger. If SWREQ = 0, each programmed burst that is requested by the selected peripheral, is conditioned by one hit trigger. */
    constexpr std::uint32_t GPDMA_C0TR2_TRIGM_B_0x3 = 3;

    /** @brief trigger event input selection These bits select the trigger event input of the GPDMA transfer (as per Section 16.3.5), with an active trigger event if TRIGPOL[1:0] different 00. */
    using GPDMA_C0TR2_TRIGSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief trigger event polarity These bits define the polarity of the selected trigger event input defined by TRIGSEL[4:0]. */
    using GPDMA_C0TR2_TRIGPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no trigger (masked trigger event) (value: 0)
     *          - B_0x1: trigger on the rising edge (value: 1)
     *          - B_0x2: trigger on the falling edge (value: 2)
     *          - B_0x3: same as 00 (value: 3)
     */
        /** @brief no trigger (masked trigger event) */
    constexpr std::uint32_t GPDMA_C0TR2_TRIGPOL_B_0x0 = 0;
        /** @brief trigger on the rising edge */
    constexpr std::uint32_t GPDMA_C0TR2_TRIGPOL_B_0x1 = 1;
        /** @brief trigger on the falling edge */
    constexpr std::uint32_t GPDMA_C0TR2_TRIGPOL_B_0x2 = 2;
        /** @brief same as 00 */
    constexpr std::uint32_t GPDMA_C0TR2_TRIGPOL_B_0x3 = 3;

    /** @brief transfer complete event mode These bits define the transfer granularity for the transfer complete and half transfer complete events generation. Note: If the initial LLIsub0 /subdata transfer is null/void (directly programmed by the internal register file with GPDMA_CxBR1.BNDT[15:0] = 0), then neither the complete transfer event nor the half transfer event is generated. Note: If the initial LLIsub0 /subdata transfer is null/void (directly programmed by the internal register file with GPDMA_CxBR1.BNDT[15:0] = 0), then neither the complete transfer event nor the half transfer event is generated. Note: If the initial LLIsub0 /subdata transfer is null/void (i.e. directly programmed by the internal register file with GPDMA_CxBR1.BNDT[15:0] =0 ), then the half transfer event is not generated, and the transfer complete event is generated when is completed the loading of the LLIsub1/sub. */
    using GPDMA_C0TR2_TCEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: at block level (when GPDMA_CxBR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. (value: 0)
     *          - B_0x1: channel x (0 to 7, same as 00 (value: 1)
     *          - B_0x2: at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer. (value: 2)
     *          - B_0x3: at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address GPDMA_CxLLR.LA[15:2] to zero and clears all the GPDMA_CxLLR update bits (UT1, UT2, UB1, USA, UDA and ULL). If the channel transfer is continuous/infinite, no event is generated. (value: 3)
     */
        /** @brief at block level (when GPDMA_CxBR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. */
    constexpr std::uint32_t GPDMA_C0TR2_TCEM_B_0x0 = 0;
        /** @brief channel x (0 to 7, same as 00 */
    constexpr std::uint32_t GPDMA_C0TR2_TCEM_B_0x1 = 1;
        /** @brief at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer. */
    constexpr std::uint32_t GPDMA_C0TR2_TCEM_B_0x2 = 2;
        /** @brief at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address GPDMA_CxLLR.LA[15:2] to zero and clears all the GPDMA_CxLLR update bits (UT1, UT2, UB1, USA, UDA and ULL). If the channel transfer is continuous/infinite, no event is generated. */
    constexpr std::uint32_t GPDMA_C0TR2_TCEM_B_0x3 = 3;

    /** @brief GPDMA channel 0 block register 1 */
    using GPDMA_C0BR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x98, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief block number of data bytes to transfer from the source Block size transferred from the source. When the channel is enabled, this field becomes read-only and is decremented, indicating the remaining number of data items in the current source block to be transferred. BNDT[15:0] is programmed in number of bytes, maximum source block size is 64 Kbytes -1. Once the last data transfer is completed (BNDT[15:0] = 0): - if GPDMA_CxLLR.UB1 = 1, this field is updated by the LLI in the memory. - if GPDMA_CxLLR.UB1 = 0 and if there is at least one non null Uxx update bit, this field is internally restored to the programmed value. - if all GPDMA_CxLLR.Uxx = 0 and if GPDMA_CxLLR.LA[15:0] = 0, this field is internally restored to the programmed value (infinite/continuous last LLI). - if GPDMA_CxLLR = 0, this field is kept as zero following the last LLI data transfer. Note: A non-null source block size must be a multiple of the source data width (BNDT[2:0] versus GPDMA_CxTR1.SDW_LOG2[1:0]). Else a user setting error is reported and no transfer is issued. Note: When configured in packing mode (GPDMA_CxTR1.PAM[1] = 1 and destination data width different from source data width), a non-null source block size must be a multiple of the destination data width (BNDT[2:0] versus GPDMA_CxTR1.DDW_LOG2[1:0]). Else a user setting error is reported and no transfer is issued. */
    using GPDMA_C0BR1_BNDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 0 source address register */
    using GPDMA_C0SAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief source address This field is the pointer to the address from which the next data is read. During the channel activity, depending on the source addressing mode (GPDMA_CxTR1.SINC), this field is kept fixed or incremented by the data width (GPDMA_CxTR1.SDW_LOG2[1:0]) after each burst source data, reflecting the next address from which data is read. During the channel activity, this address is updated after each completed source burst, consequently to: the programmed source burst; either in fixed addressing mode or in contiguous-data incremented mode. If contiguously incremented (GPDMA_CxTR1.SINC = 1), then the additional address offset value is the programmed burst size, as defined by GPDMA_CxTR1.SBL_1[5:0] and GPDMA_CxTR1.SDW_LOG2[21:0] the additional source incremented/decremented offset value as programmed by GPDMA_CxBR1.SDEC In linked-list mode, after a LLI data transfer is completed, this register is automatically updated by GPDMA from the memory, provided the LLI is set with GPDMA_CxLLR.USA = 1. Note: A source address must be aligned with the programmed data width of a source burst (SA[2:0] versus GPDMA_CxTR1.SDW_LOG2[1:0]). Else, a user setting error is reported and no transfer is issued. */
    using GPDMA_C0SAR_SA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 0 destination address register */
    using GPDMA_C0DAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination address This field is the pointer to the address from which the next data is written. During the channel activity, depending on the destination addressing mode (GPDMA_CxTR1.DINC), this field is kept fixed or incremented by the data width (GPDMA_CxTR1.DDW_LOG2[21:0]) after each burst destination data, reflecting the next address from which data is written. During the channel activity, this address is updated after each completed destination burst, consequently to: the programmed destination burst; either in fixed addressing mode or in contiguous-data incremented mode. If contiguously incremented (GPDMA_CxTR1.DINC = 1), then the additional address offset value is the programmed burst size, as defined by GPDMA_CxTR1.DBL_1[5:0] and GPDMA_CxTR1.DDW_LOG2[1:0] the additional destination incremented/decremented offset value as programmed by GPDMA_CxBR1.DDEC. In linked-list mode, after a LLI data transfer is completed, this register is automatically updated by the GPDMA from the memory, provided the LLI is set with GPDMA_CxLLR.UDA = 1. Note: A destination address must be aligned with the programmed data width of a destination burst (DA[2:0] versus GPDMA_CxTR1.DDW_LOG2[1:0]). Else, a user setting error is reported and no transfer is issued. */
    using GPDMA_C0DAR_DA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 0 linked-list address register */
    using GPDMA_C0LLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xCC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pointer (16-bit low-significant address) to the next linked-list data structure If UT1 = UT2 = UB1 = USA = UDA = ULL = 0 and if LA[15:20] = 0, the current LLI is the last one. The channel transfer is completed without any update of the linked-list GPDMA register file. Else, this field is the pointer to the memory address offset from which the next linked-list data structure is automatically fetched from, once the data transfer is completed, in order to conditionally update the linked-list GPDMA internal register file (GPDMA_CxCTR1, GPDMA_CxTR2, GPDMA_CxBR1, GPDMA_CxSAR, GPDMA_CxDAR and GPDMA_CxLLR). Note: The user must program the pointer to be 32-bit aligned. The two low-significant bits are write ignored. */
    using GPDMA_C0LLR_LA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxLLR register from memory This bit is used to control the update of GPDMA_CxLLR from the memory during the link transfer. */
    using GPDMA_C0LLR_ULL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxLLR update (value: 0)
     *          - B_0x1: GPDMA_CxLLR update (value: 1)
     */
        /** @brief no GPDMA_CxLLR update */
    constexpr std::uint32_t GPDMA_C0LLR_ULL_B_0x0 = 0;
        /** @brief GPDMA_CxLLR update */
    constexpr std::uint32_t GPDMA_C0LLR_ULL_B_0x1 = 1;

    /** @brief Update GPDMA_CxDAR register from memory This bit is used to control the update of GPDMA_CxDAR from the memory during the link transfer. */
    using GPDMA_C0LLR_UDA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxDAR update (value: 0)
     *          - B_0x1: GPDMA_CxDAR update (value: 1)
     */
        /** @brief no GPDMA_CxDAR update */
    constexpr std::uint32_t GPDMA_C0LLR_UDA_B_0x0 = 0;
        /** @brief GPDMA_CxDAR update */
    constexpr std::uint32_t GPDMA_C0LLR_UDA_B_0x1 = 1;

    /** @brief update GPDMA_CxSAR from memory This bit controls the update of GPDMA_CxSAR from the memory during the link transfer. */
    using GPDMA_C0LLR_USA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxSAR update (value: 0)
     *          - B_0x1: GPDMA_CxSAR update (value: 1)
     */
        /** @brief no GPDMA_CxSAR update */
    constexpr std::uint32_t GPDMA_C0LLR_USA_B_0x0 = 0;
        /** @brief GPDMA_CxSAR update */
    constexpr std::uint32_t GPDMA_C0LLR_USA_B_0x1 = 1;

    /** @brief Update GPDMA_CxBR1 from memory This bit controls the update of GPDMA_CxBR1 from the memory during the link transfer. If UB1 = 0 and if GPDMA_CxLLR different 0, the linked-list is not completed. GPDMA_CxBR1.BNDT[15:0] is then restored to the programmed value after data transfer is completed and before the link transfer. */
    using GPDMA_C0LLR_UB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxBR1 update from memory (GPDMA_CxBR1.BNDT[15:0] restored if any link transfer) (value: 0)
     *          - B_0x1: GPDMA_CxBR1 update (value: 1)
     */
        /** @brief no GPDMA_CxBR1 update from memory (GPDMA_CxBR1.BNDT[15:0] restored if any link transfer) */
    constexpr std::uint32_t GPDMA_C0LLR_UB1_B_0x0 = 0;
        /** @brief GPDMA_CxBR1 update */
    constexpr std::uint32_t GPDMA_C0LLR_UB1_B_0x1 = 1;

    /** @brief Update GPDMA_CxTR2 from memory This bit controls the update of GPDMA_CxTR2 from the memory during the link transfer. */
    using GPDMA_C0LLR_UT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxTR2 update (value: 0)
     *          - B_0x1: GPDMA_CxTR2 update (value: 1)
     */
        /** @brief no GPDMA_CxTR2 update */
    constexpr std::uint32_t GPDMA_C0LLR_UT2_B_0x0 = 0;
        /** @brief GPDMA_CxTR2 update */
    constexpr std::uint32_t GPDMA_C0LLR_UT2_B_0x1 = 1;

    /** @brief Update GPDMA_CxTR1 from memory This bit controls the update of GPDMA_CxTR1 from the memory during the link transfer. */
    using GPDMA_C0LLR_UT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxTR1 update (value: 0)
     *          - B_0x1: GPDMA_CxTR1 update (value: 1)
     */
        /** @brief no GPDMA_CxTR1 update */
    constexpr std::uint32_t GPDMA_C0LLR_UT1_B_0x0 = 0;
        /** @brief GPDMA_CxTR1 update */
    constexpr std::uint32_t GPDMA_C0LLR_UT1_B_0x1 = 1;

    /** @brief GPDMA channel 1 linked-list base address register */
    using GPDMA_C1LBAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief linked-list base address of GPDMA channel x */
    using GPDMA_C1LBAR_LBA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 1 flag clear register */
    using GPDMA_C1FCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xDC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transfer complete flag clear */
    using GPDMA_C1FCR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding TCF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C1FCR_TCF_B_0x0 = 0;
        /** @brief corresponding TCF flag cleared */
    constexpr std::uint32_t GPDMA_C1FCR_TCF_B_0x1 = 1;

    /** @brief half transfer flag clear */
    using GPDMA_C1FCR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding HTF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C1FCR_HTF_B_0x0 = 0;
        /** @brief corresponding HTF flag cleared */
    constexpr std::uint32_t GPDMA_C1FCR_HTF_B_0x1 = 1;

    /** @brief data transfer error flag clear */
    using GPDMA_C1FCR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding DTEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C1FCR_DTEF_B_0x0 = 0;
        /** @brief corresponding DTEF flag cleared */
    constexpr std::uint32_t GPDMA_C1FCR_DTEF_B_0x1 = 1;

    /** @brief update link transfer error flag clear */
    using GPDMA_C1FCR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding ULEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C1FCR_ULEF_B_0x0 = 0;
        /** @brief corresponding ULEF flag cleared */
    constexpr std::uint32_t GPDMA_C1FCR_ULEF_B_0x1 = 1;

    /** @brief user setting error flag clear */
    using GPDMA_C1FCR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding USEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C1FCR_USEF_B_0x0 = 0;
        /** @brief corresponding USEF flag cleared */
    constexpr std::uint32_t GPDMA_C1FCR_USEF_B_0x1 = 1;

    /** @brief completed suspension flag clear */
    using GPDMA_C1FCR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding SUSPF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C1FCR_SUSPF_B_0x0 = 0;
        /** @brief corresponding SUSPF flag cleared */
    constexpr std::uint32_t GPDMA_C1FCR_SUSPF_B_0x1 = 1;

    /** @brief trigger overrun flag clear */
    using GPDMA_C1FCR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding TOF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C1FCR_TOF_B_0x0 = 0;
        /** @brief corresponding TOF flag cleared */
    constexpr std::uint32_t GPDMA_C1FCR_TOF_B_0x1 = 1;

    /** @brief GPDMA channel 1 status register */
    using GPDMA_C1SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xE0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief idle flag This idle flag is deasserted by hardware when the channel is enabled (GPDMA_CxCR.EN = 1) with a valid channel configuration (no USEF to be immediately reported). This idle flag is asserted after hard reset or by hardware when the channel is back in idle state (in suspended or disabled state). */
    using GPDMA_C1SR_IDLEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: channel not in idle state (value: 0)
     *          - B_0x1: channel in idle state (value: 1)
     */
        /** @brief channel not in idle state */
    constexpr std::uint32_t GPDMA_C1SR_IDLEF_B_0x0 = 0;
        /** @brief channel in idle state */
    constexpr std::uint32_t GPDMA_C1SR_IDLEF_B_0x1 = 1;

    /** @brief transfer complete flag A transfer complete event is either a block transfer complete, or a LLI transfer complete including the upload of the next LLI if any, or the full linked-list completion, depending on the transfer complete event mode (GPDMA_CxTR2.TCEM[1:0]). */
    using GPDMA_C1SR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no transfer complete event (value: 0)
     *          - B_0x1: a transfer complete event occurred (value: 1)
     */
        /** @brief no transfer complete event */
    constexpr std::uint32_t GPDMA_C1SR_TCF_B_0x0 = 0;
        /** @brief a transfer complete event occurred */
    constexpr std::uint32_t GPDMA_C1SR_TCF_B_0x1 = 1;

    /** @brief half transfer flag A half block transfer occurs when half of the bytes of the source block size (rounded up integer of GPDMA_CxBR1.BNDT[15:0]/2) has been transferred to the destination. */
    using GPDMA_C1SR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no half transfer event (value: 0)
     *          - B_0x1: a half transfer event occurred (value: 1)
     */
        /** @brief no half transfer event */
    constexpr std::uint32_t GPDMA_C1SR_HTF_B_0x0 = 0;
        /** @brief a half transfer event occurred */
    constexpr std::uint32_t GPDMA_C1SR_HTF_B_0x1 = 1;

    /** @brief data transfer error flag */
    using GPDMA_C1SR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no data transfer error event (value: 0)
     *          - B_0x1: a master bus error event occurred on a data transfer (value: 1)
     */
        /** @brief no data transfer error event */
    constexpr std::uint32_t GPDMA_C1SR_DTEF_B_0x0 = 0;
        /** @brief a master bus error event occurred on a data transfer */
    constexpr std::uint32_t GPDMA_C1SR_DTEF_B_0x1 = 1;

    /** @brief update link transfer error flag */
    using GPDMA_C1SR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no update link transfer error event (value: 0)
     *          - B_0x1: a master bus error event occurred while updating a linked-list register from memory (value: 1)
     */
        /** @brief no update link transfer error event */
    constexpr std::uint32_t GPDMA_C1SR_ULEF_B_0x0 = 0;
        /** @brief a master bus error event occurred while updating a linked-list register from memory */
    constexpr std::uint32_t GPDMA_C1SR_ULEF_B_0x1 = 1;

    /** @brief user setting error flag */
    using GPDMA_C1SR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no user setting error event (value: 0)
     *          - B_0x1: a user setting error event occurred (value: 1)
     */
        /** @brief no user setting error event */
    constexpr std::uint32_t GPDMA_C1SR_USEF_B_0x0 = 0;
        /** @brief a user setting error event occurred */
    constexpr std::uint32_t GPDMA_C1SR_USEF_B_0x1 = 1;

    /** @brief completed suspension flag */
    using GPDMA_C1SR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no completed suspension event (value: 0)
     *          - B_0x1: a completed suspension event occurred (value: 1)
     */
        /** @brief no completed suspension event */
    constexpr std::uint32_t GPDMA_C1SR_SUSPF_B_0x0 = 0;
        /** @brief a completed suspension event occurred */
    constexpr std::uint32_t GPDMA_C1SR_SUSPF_B_0x1 = 1;

    /** @brief trigger overrun flag */
    using GPDMA_C1SR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no trigger overrun event (value: 0)
     *          - B_0x1: a trigger overrun event occurred (value: 1)
     */
        /** @brief no trigger overrun event */
    constexpr std::uint32_t GPDMA_C1SR_TOF_B_0x0 = 0;
        /** @brief a trigger overrun event occurred */
    constexpr std::uint32_t GPDMA_C1SR_TOF_B_0x1 = 1;

    /** @brief monitored FIFO level Number of available write beats in the FIFO, in units of the programmed destination data width (see GPDMA_CxTR1.DDW_LOG2[1:0], in units of bytes, half-words, or words). Note: After having suspended an active transfer, the user may need to read FIFOL[7:0], additionally to GPDMA_CxBR1.BDNT[15:0] to know how many data have been transferred to the destination. Before reading, the user may wait for the transfer to be suspended (GPDMA_CxSR.SUSPF = 1). */
    using GPDMA_C1SR_FIFOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 1 control register */
    using GPDMA_C1CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xE4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief enable Writing 1 into the field RESET (bit 1) causes the hardware to de-assert this bit, whatever is written into this bit 0. Else: this bit is deasserted by hardware when there is a transfer error (master bus error or user setting error) or when there is a channel transfer complete (channel ready to be configured, for example if LSM=1 at the end of a single execution of the LLI). Else, this bit can be asserted by software. Writing 0 into this EN bit is ignored. */
    using GPDMA_C1CR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write: ignored, read: channel disabled (value: 0)
     *          - B_0x1: write: enable channel, read: channel enabled (value: 1)
     */
        /** @brief write: ignored, read: channel disabled */
    constexpr std::uint32_t GPDMA_C1CR_EN_B_0x0 = 0;
        /** @brief write: enable channel, read: channel enabled */
    constexpr std::uint32_t GPDMA_C1CR_EN_B_0x1 = 1;

    /** @brief reset This bit is write only. Writing 0 has no impact. Writing 1 implies the reset of the following: the FIFO, the channel internal state, SUSP and EN bits (whatever is written receptively in bit 2 and bit 0). The reset is effective when the channel is in steady state, meaning one of the following: - active channel in suspended state (GPDMA_CxSR.SUSPF = 1 and GPDMA_CxSR.IDLEF = GPDMA_CxCR.EN = 1) - channel in disabled state (GPDMA_CxSR.IDLEF = 1 and GPDMA_CxCR.EN = 0). After writing a RESET, to continue using this channel, the user must explicitly reconfigure the channel including the hardware-modified configuration registers (GPDMA_CxBR1, GPDMA_CxSAR and GPDMA_CxDAR) before enabling again the channel (see the programming sequence in Figure 44). */
    using GPDMA_C1CR_RESET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no channel reset (value: 0)
     *          - B_0x1: channel reset (value: 1)
     */
        /** @brief no channel reset */
    constexpr std::uint32_t GPDMA_C1CR_RESET_B_0x0 = 0;
        /** @brief channel reset */
    constexpr std::uint32_t GPDMA_C1CR_RESET_B_0x1 = 1;

    /** @brief suspend Writing 1 into the field RESET (bit 1) causes the hardware to de-assert this bit, whatever is written into this bit 2. Else: Software must write 1 in order to suspend an active channel (channel with an ongoing GPDMA transfer over its master ports). The software must write 0 in order to resume a suspended channel, following the programming sequence detailed in Figure 43. */
    using GPDMA_C1CR_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write: resume channel, read: channel not suspended (value: 0)
     *          - B_0x1: write: suspend channel, read: channel suspended. (value: 1)
     */
        /** @brief write: resume channel, read: channel not suspended */
    constexpr std::uint32_t GPDMA_C1CR_SUSP_B_0x0 = 0;
        /** @brief write: suspend channel, read: channel suspended. */
    constexpr std::uint32_t GPDMA_C1CR_SUSP_B_0x1 = 1;

    /** @brief transfer complete interrupt enable */
    using GPDMA_C1CR_TCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C1CR_TCIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C1CR_TCIE_B_0x1 = 1;

    /** @brief half transfer complete interrupt enable */
    using GPDMA_C1CR_HTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C1CR_HTIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C1CR_HTIE_B_0x1 = 1;

    /** @brief data transfer error interrupt enable */
    using GPDMA_C1CR_DTEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C1CR_DTEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C1CR_DTEIE_B_0x1 = 1;

    /** @brief update link transfer error interrupt enable */
    using GPDMA_C1CR_ULEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C1CR_ULEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C1CR_ULEIE_B_0x1 = 1;

    /** @brief user setting error interrupt enable */
    using GPDMA_C1CR_USEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C1CR_USEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C1CR_USEIE_B_0x1 = 1;

    /** @brief completed suspension interrupt enable */
    using GPDMA_C1CR_SUSPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C1CR_SUSPIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C1CR_SUSPIE_B_0x1 = 1;

    /** @brief trigger overrun interrupt enable */
    using GPDMA_C1CR_TOIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C1CR_TOIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C1CR_TOIE_B_0x1 = 1;

    /** @brief Link step mode First the (possible 1D/repeated) block transfer is executed as defined by the current internal register file until GPDMA_CxBR1.BNDT[15:0] = 0. Secondly the next linked-list data structure is conditionally uploaded from memory as defined by GPDMA_CxLLR. Then channel execution is completed. Note: This bit must be written when EN=0. This bit is read-only when EN=1. */
    using GPDMA_C1CR_LSM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: channel executed for the full linked-list and completed at the end of the last LLI (GPDMA_CxLLR = 0). The 16 low-significant bits of the link address are null (LA[15:0] = 0) and all the update bits are null (UT1 =UB1 = UT2 = USA = UDA = ULL = 0). Then GPDMA_CxBR1.BNDT[15:0] = 0. (value: 0)
     *          - B_0x1: channel executed once for the current LLI (value: 1)
     */
        /** @brief channel executed for the full linked-list and completed at the end of the last LLI (GPDMA_CxLLR = 0). The 16 low-significant bits of the link address are null (LA[15:0] = 0) and all the update bits are null (UT1 =UB1 = UT2 = USA = UDA = ULL = 0). Then GPDMA_CxBR1.BNDT[15:0] = 0. */
    constexpr std::uint32_t GPDMA_C1CR_LSM_B_0x0 = 0;
        /** @brief channel executed once for the current LLI */
    constexpr std::uint32_t GPDMA_C1CR_LSM_B_0x1 = 1;

    /** @brief linked-list allocated port This bit is used to allocate the master port for the update of the GPDMA linked-list registers from the memory. Note: This bit must be written when EN=0. This bit is read-only when EN=1. */
    using GPDMA_C1CR_LAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C1CR_LAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C1CR_LAP_B_0x1 = 1;

    /** @brief priority level of the channel x GPDMA transfer versus others Note: This bit must be written when EN = 0. This bit is read-only when EN = 1. */
    using GPDMA_C1CR_PRIO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: low priority, low weight (value: 0)
     *          - B_0x1: low priority, mid weight (value: 1)
     *          - B_0x2: low priority, high weight (value: 2)
     *          - B_0x3: high priority (value: 3)
     */
        /** @brief low priority, low weight */
    constexpr std::uint32_t GPDMA_C1CR_PRIO_B_0x0 = 0;
        /** @brief low priority, mid weight */
    constexpr std::uint32_t GPDMA_C1CR_PRIO_B_0x1 = 1;
        /** @brief low priority, high weight */
    constexpr std::uint32_t GPDMA_C1CR_PRIO_B_0x2 = 2;
        /** @brief high priority */
    constexpr std::uint32_t GPDMA_C1CR_PRIO_B_0x3 = 3;

    /** @brief GPDMA channel 1 transfer register 1 */
    using GPDMA_C1TR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x110, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief binary logarithm of the source data width of a burst in bytes Setting a 8-byte data width causes a user setting error to be reported and no transfer is issued. A source block size must be a multiple of the source data width (GPDMA_CxBR1.BNDT[2:0] versus SDW_LOG2[1:0]). Otherwise, a user setting error is reported and no transfer is issued. Note: A source burst transfer must have an aligned address with its data width (start address GPDMA_CxSAR[2:0] versus SDW_LOG2[1:0]). Otherwise, a user setting error is reported and none transfer is issued. */
    using GPDMA_C1TR1_SDW_LOG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: byte (value: 0)
     *          - B_0x1: half-word (2 bytes) (value: 1)
     *          - B_0x2: word (4 bytes) (value: 2)
     *          - B_0x3: user setting error reported and no transfer issued (value: 3)
     */
        /** @brief byte */
    constexpr std::uint32_t GPDMA_C1TR1_SDW_LOG2_B_0x0 = 0;
        /** @brief half-word (2 bytes) */
    constexpr std::uint32_t GPDMA_C1TR1_SDW_LOG2_B_0x1 = 1;
        /** @brief word (4 bytes) */
    constexpr std::uint32_t GPDMA_C1TR1_SDW_LOG2_B_0x2 = 2;
        /** @brief user setting error reported and no transfer issued */
    constexpr std::uint32_t GPDMA_C1TR1_SDW_LOG2_B_0x3 = 3;

    /** @brief source incrementing burst The source address, pointed by GPDMA_CxSAR, is kept constant after a burst beat/single transfer or is incremented by the offset value corresponding to a contiguous data after a burst beat/single transfer. */
    using GPDMA_C1TR1_SINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fixed burst (value: 0)
     *          - B_0x1: contiguously incremented burst (value: 1)
     */
        /** @brief fixed burst */
    constexpr std::uint32_t GPDMA_C1TR1_SINC_B_0x0 = 0;
        /** @brief contiguously incremented burst */
    constexpr std::uint32_t GPDMA_C1TR1_SINC_B_0x1 = 1;

    /** @brief source burst length minus 1, between 0 and 63 The burst length unit is one data named beat within a burst. If SBL_1[5:0] =0 , the burst can be named as single. Each data/beat has a width defined by the destination data width SDW_LOG2[1:0]. Note: If a burst transfer crossed a 1-Kbyte address boundary on a AHB transfer, the GPDMA modifies and shortens the programmed burst into singles or bursts of lower length, to be compliant with the AHB protocol. Note: If a burst transfer is of length greater than the FIFO size of the channel x, the GPDMA modifies and shortens the programmed burst into singles or bursts of lower length, to be compliant with the FIFO size. Transfer performance is lower, with GPDMA re-arbitration between effective and lower singles/bursts, but the data integrity is guaranteed. */
    using GPDMA_C1TR1_SBL_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief padding/alignment mode If DDW_LOG2[1:0] = SDW_LOG2[1:0]: if the data width of a burst destination transfer is equal to the data width of a burst source transfer, these bits are ignored. Else, in the following enumerated values, the condition PAM_1 is when destination data width is higher that source data width, and the condition PAM_2 is when destination data width is higher than source data width. 1x: successive source data are FIFO queued and packed at the destination data width, in a left (LSB) to right (MSB) order (named little endian), before a destination transfer Note: 1x: source data is FIFO queued and unpacked at the destination data width, to be transferred in a left (LSB) to right (MSB) order (named little endian) to the destination */
    using GPDMA_C1TR1_PAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0_PAM_1: source data is transferred as right aligned, padded with 0s up to the destination data width (value: 0)
     *          - B_0x1_PAM_1: source data is transferred as right aligned, sign extended up to the destination data width (value: 1)
     */
        /** @brief source data is transferred as right aligned, padded with 0s up to the destination data width */
    constexpr std::uint32_t GPDMA_C1TR1_PAM_B_0x0_PAM_1 = 0;
        /** @brief source data is transferred as right aligned, sign extended up to the destination data width */
    constexpr std::uint32_t GPDMA_C1TR1_PAM_B_0x1_PAM_1 = 1;

    /** @brief source byte exchange within the unaligned half-word of each source word If the source data width is shorter than a word, this bit is ignored. If the source data width is a word: */
    using GPDMA_C1TR1_SBX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no byte-based exchange within the unaligned half-word of each source word (value: 0)
     *          - B_0x1: the two consecutive bytes within the unaligned half-word of each source word are exchanged. (value: 1)
     */
        /** @brief no byte-based exchange within the unaligned half-word of each source word */
    constexpr std::uint32_t GPDMA_C1TR1_SBX_B_0x0 = 0;
        /** @brief the two consecutive bytes within the unaligned half-word of each source word are exchanged. */
    constexpr std::uint32_t GPDMA_C1TR1_SBX_B_0x1 = 1;

    /** @brief source allocated port This bit is used to allocate the master port for the source transfer Note: This bit must be written when EN = 0. This bit is read-only when EN = 1. */
    using GPDMA_C1TR1_SAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C1TR1_SAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C1TR1_SAP_B_0x1 = 1;

    /** @brief security attribute of the GPDMA transfer from the source If GPDMA_SECCFGR.SECx = 1 and the access is secure: This is a secure register bit. This bit can only be read by a secure software. This bit must be written by a secure software when GPDMA_SECCFGR.SECx =1 . A secure write is ignored when GPDMA_SECCFGR.SECx = 0. When GPDMA_SECCFGR.SECx is deasserted, this SSEC bit is also deasserted by hardware (on a secure reconfiguration of the channel as non-secure), and the GPDMA transfer from the source is non-secure. */
    using GPDMA_C1TR1_SSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPDMA transfer non-secure (value: 0)
     *          - B_0x1: GPDMA transfer secure (value: 1)
     */
        /** @brief GPDMA transfer non-secure */
    constexpr std::uint32_t GPDMA_C1TR1_SSEC_B_0x0 = 0;
        /** @brief GPDMA transfer secure */
    constexpr std::uint32_t GPDMA_C1TR1_SSEC_B_0x1 = 1;

    /** @brief binary logarithm of the destination data width of a burst, in bytes Setting a 8-byte data width causes a user setting error to be reported and none transfer is issued. Note: A destination burst transfer must have an aligned address with its data width (start address GPDMA_CxDAR[2:0] versus DDW_LOG2[1:0]). Otherwise a user setting error is reported and no transfer is issued. */
    using GPDMA_C1TR1_DDW_LOG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: byte (value: 0)
     *          - B_0x1: half-word (2 bytes) (value: 1)
     *          - B_0x2: word (4 bytes) (value: 2)
     *          - B_0x3: user setting error reported and no transfer issued (value: 3)
     */
        /** @brief byte */
    constexpr std::uint32_t GPDMA_C1TR1_DDW_LOG2_B_0x0 = 0;
        /** @brief half-word (2 bytes) */
    constexpr std::uint32_t GPDMA_C1TR1_DDW_LOG2_B_0x1 = 1;
        /** @brief word (4 bytes) */
    constexpr std::uint32_t GPDMA_C1TR1_DDW_LOG2_B_0x2 = 2;
        /** @brief user setting error reported and no transfer issued */
    constexpr std::uint32_t GPDMA_C1TR1_DDW_LOG2_B_0x3 = 3;

    /** @brief destination incrementing burst The destination address, pointed by GPDMA_CxDAR, is kept constant after a burst beat/single transfer, or is incremented by the offset value corresponding to a contiguous data after a burst beat/single transfer. */
    using GPDMA_C1TR1_DINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fixed burst (value: 0)
     *          - B_0x1: contiguously incremented burst (value: 1)
     */
        /** @brief fixed burst */
    constexpr std::uint32_t GPDMA_C1TR1_DINC_B_0x0 = 0;
        /** @brief contiguously incremented burst */
    constexpr std::uint32_t GPDMA_C1TR1_DINC_B_0x1 = 1;

    /** @brief destination burst length minus 1, between 0 and 63 The burst length unit is one data named beat within a burst. If DBL_1[5:0] =0 , the burst can be named as single. Each data/beat has a width defined by the destination data width DDW_LOG2[1:0]. Note: If a burst transfer crossed a 1-Kbyte address boundary on a AHB transfer, the GPDMA modifies and shortens the programmed burst into singles or bursts of lower length, to be compliant with the AHB protocol. Note: If a burst transfer is of length greater than the FIFO size of the channel x, the GPDMA modifies and shortens the programmed burst into singles or bursts of lower length, to be compliant with the FIFO size. Transfer performance is lower, with GPDMA re-arbitration between effective and lower singles/bursts, but the data integrity is guaranteed. */
    using GPDMA_C1TR1_DBL_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination byte exchange If the destination data size is a byte, this bit is ignored. If the destination data size is not a byte: */
    using GPDMA_C1TR1_DBX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no byte-based exchange within half-word (value: 0)
     *          - B_0x1: the two consecutive (post PAM) bytes are exchanged in each destination half-word. (value: 1)
     */
        /** @brief no byte-based exchange within half-word */
    constexpr std::uint32_t GPDMA_C1TR1_DBX_B_0x0 = 0;
        /** @brief the two consecutive (post PAM) bytes are exchanged in each destination half-word. */
    constexpr std::uint32_t GPDMA_C1TR1_DBX_B_0x1 = 1;

    /** @brief destination half-word exchange If the destination data size is shorter than a word, this bit is ignored. If the destination data size is a word: */
    using GPDMA_C1TR1_DHX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no halfword-based exchanged within word (value: 0)
     *          - B_0x1: the two consecutive (post PAM) half-words are exchanged in each destination word. (value: 1)
     */
        /** @brief no halfword-based exchanged within word */
    constexpr std::uint32_t GPDMA_C1TR1_DHX_B_0x0 = 0;
        /** @brief the two consecutive (post PAM) half-words are exchanged in each destination word. */
    constexpr std::uint32_t GPDMA_C1TR1_DHX_B_0x1 = 1;

    /** @brief destination allocated port This bit is used to allocate the master port for the destination transfer Note: This bit must be written when EN = 0. This bit is read-only when EN = 1. */
    using GPDMA_C1TR1_DAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C1TR1_DAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C1TR1_DAP_B_0x1 = 1;

    /** @brief security attribute of the GPDMA transfer to the destination If GPDMA_SECCFGR.SECx = 1 and the access is secure: This is a secure register bit. This bit can only be read by a secure software. This bit must be written by a secure software when GPDMA_SECCFGR.SECx = 1. A secure write is ignored when GPDMA_SECCFGR.SECx = 0. When GPDMA_SECCFGR.SECx is deasserted, this DSEC bit is also deasserted by hardware (on a secure reconfiguration of the channel as non-secure), and the GPDMA transfer to the destination is non-secure. */
    using GPDMA_C1TR1_DSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPDMA transfer non-secure (value: 0)
     *          - B_0x1: GPDMA transfer secure (value: 1)
     */
        /** @brief GPDMA transfer non-secure */
    constexpr std::uint32_t GPDMA_C1TR1_DSEC_B_0x0 = 0;
        /** @brief GPDMA transfer secure */
    constexpr std::uint32_t GPDMA_C1TR1_DSEC_B_0x1 = 1;

    /** @brief GPDMA channel 1 transfer register 2 */
    using GPDMA_C1TR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x114, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA hardware request selection These bits are ignored if channel x is activated (GPDMA_CxCR.EN asserted) with SWREQ = 1 (software request for a memory-to-memory transfer). Else, the selected hardware request is internally taken into account as per Section 16.3.3. The user must not assign a same input hardware request (same REQSEL[5:0] value) to different active GPDMA channels (GPDMA_CxCR.EN = 1 and GPDMA_CxTR2.SWREQ = 0 for these channels). GPDMA is not intended to hardware support the case of simultaneous enabled channels incorrectly configured with a same hardware peripheral request signal, and there is no user setting error reporting. */
    using GPDMA_C1TR2_REQSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief software request This bit is internally taken into account when GPDMA_CxCR.EN is asserted. */
    using GPDMA_C1TR2_SWREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no software request. The selected hardware request REQSEL[5:0] is taken into account. (value: 0)
     *          - B_0x1: software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[5:0] is ignored. (value: 1)
     */
        /** @brief no software request. The selected hardware request REQSEL[5:0] is taken into account. */
    constexpr std::uint32_t GPDMA_C1TR2_SWREQ_B_0x0 = 0;
        /** @brief software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[5:0] is ignored. */
    constexpr std::uint32_t GPDMA_C1TR2_SWREQ_B_0x1 = 1;

    /** @brief destination hardware request This bit is ignored if channel x is activated (GPDMA_CxCR.EN asserted) with SWREQ = 1 (software request for a memory-to-memory transfer). Else: */
    using GPDMA_C1TR2_DREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: selected hardware request driven by a source peripheral (request signal taken into account by the GPDMA transfer scheduler over the source/read port) (value: 0)
     *          - B_0x1: selected hardware request driven by a destination peripheral (request signal taken into account by the GPDMA transfer scheduler over the destination/write port) (value: 1)
     */
        /** @brief selected hardware request driven by a source peripheral (request signal taken into account by the GPDMA transfer scheduler over the source/read port) */
    constexpr std::uint32_t GPDMA_C1TR2_DREQ_B_0x0 = 0;
        /** @brief selected hardware request driven by a destination peripheral (request signal taken into account by the GPDMA transfer scheduler over the destination/write port) */
    constexpr std::uint32_t GPDMA_C1TR2_DREQ_B_0x1 = 1;

    /** @brief Block hardware request If the channel x is activated (GPDMA_CxCR.EN asserted) with SWREQ = 1 (software request for a memory-to-memory transfer), this bit is ignored. Else: */
    using GPDMA_C1TR2_BREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a burst level. (value: 0)
     *          - B_0x1: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see Section 16.3.3). (value: 1)
     */
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a burst level. */
    constexpr std::uint32_t GPDMA_C1TR2_BREQ_B_0x0 = 0;
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see Section 16.3.3). */
    constexpr std::uint32_t GPDMA_C1TR2_BREQ_B_0x1 = 1;

    /** @brief trigger mode These bits define the transfer granularity for its conditioning by the trigger. If the channel x is enabled (GPDMA_CxCR.EN asserted) with TRIGPOL[1:0] = 00 or 11, these TRIGM[1:0] bits are ignored. */
    using GPDMA_C1TR2_TRIGM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: at block level: the first burst read of each block transfer is conditioned by one hit trigger . (value: 0)
     *          - B_0x1: channel x = 0 to 7, same as 0010: at link level: a LLI link transfer is conditioned by one hit trigger. The LLI data transfer (if any) is not conditioned. (value: 1)
     *          - B_0x3: at programmed burst level: If SWREQ = 1, each programmed burst read is conditioned by one hit trigger. If SWREQ = 0, each programmed burst that is requested by the selected peripheral, is conditioned by one hit trigger. (value: 3)
     */
        /** @brief at block level: the first burst read of each block transfer is conditioned by one hit trigger . */
    constexpr std::uint32_t GPDMA_C1TR2_TRIGM_B_0x0 = 0;
        /** @brief channel x = 0 to 7, same as 0010: at link level: a LLI link transfer is conditioned by one hit trigger. The LLI data transfer (if any) is not conditioned. */
    constexpr std::uint32_t GPDMA_C1TR2_TRIGM_B_0x1 = 1;
        /** @brief at programmed burst level: If SWREQ = 1, each programmed burst read is conditioned by one hit trigger. If SWREQ = 0, each programmed burst that is requested by the selected peripheral, is conditioned by one hit trigger. */
    constexpr std::uint32_t GPDMA_C1TR2_TRIGM_B_0x3 = 3;

    /** @brief trigger event input selection These bits select the trigger event input of the GPDMA transfer (as per Section 16.3.5), with an active trigger event if TRIGPOL[1:0] different 00. */
    using GPDMA_C1TR2_TRIGSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief trigger event polarity These bits define the polarity of the selected trigger event input defined by TRIGSEL[4:0]. */
    using GPDMA_C1TR2_TRIGPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no trigger (masked trigger event) (value: 0)
     *          - B_0x1: trigger on the rising edge (value: 1)
     *          - B_0x2: trigger on the falling edge (value: 2)
     *          - B_0x3: same as 00 (value: 3)
     */
        /** @brief no trigger (masked trigger event) */
    constexpr std::uint32_t GPDMA_C1TR2_TRIGPOL_B_0x0 = 0;
        /** @brief trigger on the rising edge */
    constexpr std::uint32_t GPDMA_C1TR2_TRIGPOL_B_0x1 = 1;
        /** @brief trigger on the falling edge */
    constexpr std::uint32_t GPDMA_C1TR2_TRIGPOL_B_0x2 = 2;
        /** @brief same as 00 */
    constexpr std::uint32_t GPDMA_C1TR2_TRIGPOL_B_0x3 = 3;

    /** @brief transfer complete event mode These bits define the transfer granularity for the transfer complete and half transfer complete events generation. Note: If the initial LLIsub0 /subdata transfer is null/void (directly programmed by the internal register file with GPDMA_CxBR1.BNDT[15:0] = 0), then neither the complete transfer event nor the half transfer event is generated. Note: If the initial LLIsub0 /subdata transfer is null/void (directly programmed by the internal register file with GPDMA_CxBR1.BNDT[15:0] = 0), then neither the complete transfer event nor the half transfer event is generated. Note: If the initial LLIsub0 /subdata transfer is null/void (i.e. directly programmed by the internal register file with GPDMA_CxBR1.BNDT[15:0] =0 ), then the half transfer event is not generated, and the transfer complete event is generated when is completed the loading of the LLIsub1/sub. */
    using GPDMA_C1TR2_TCEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: at block level (when GPDMA_CxBR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. (value: 0)
     *          - B_0x1: channel x (0 to 7, same as 00 (value: 1)
     *          - B_0x2: at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer. (value: 2)
     *          - B_0x3: at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address GPDMA_CxLLR.LA[15:2] to zero and clears all the GPDMA_CxLLR update bits (UT1, UT2, UB1, USA, UDA and ULL). If the channel transfer is continuous/infinite, no event is generated. (value: 3)
     */
        /** @brief at block level (when GPDMA_CxBR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. */
    constexpr std::uint32_t GPDMA_C1TR2_TCEM_B_0x0 = 0;
        /** @brief channel x (0 to 7, same as 00 */
    constexpr std::uint32_t GPDMA_C1TR2_TCEM_B_0x1 = 1;
        /** @brief at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer. */
    constexpr std::uint32_t GPDMA_C1TR2_TCEM_B_0x2 = 2;
        /** @brief at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address GPDMA_CxLLR.LA[15:2] to zero and clears all the GPDMA_CxLLR update bits (UT1, UT2, UB1, USA, UDA and ULL). If the channel transfer is continuous/infinite, no event is generated. */
    constexpr std::uint32_t GPDMA_C1TR2_TCEM_B_0x3 = 3;

    /** @brief GPDMA channel 1 block register 1 */
    using GPDMA_C1BR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x118, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief block number of data bytes to transfer from the source Block size transferred from the source. When the channel is enabled, this field becomes read-only and is decremented, indicating the remaining number of data items in the current source block to be transferred. BNDT[15:0] is programmed in number of bytes, maximum source block size is 64 Kbytes -1. Once the last data transfer is completed (BNDT[15:0] = 0): - if GPDMA_CxLLR.UB1 = 1, this field is updated by the LLI in the memory. - if GPDMA_CxLLR.UB1 = 0 and if there is at least one non null Uxx update bit, this field is internally restored to the programmed value. - if all GPDMA_CxLLR.Uxx = 0 and if GPDMA_CxLLR.LA[15:0] = 0, this field is internally restored to the programmed value (infinite/continuous last LLI). - if GPDMA_CxLLR = 0, this field is kept as zero following the last LLI data transfer. Note: A non-null source block size must be a multiple of the source data width (BNDT[2:0] versus GPDMA_CxTR1.SDW_LOG2[1:0]). Else a user setting error is reported and no transfer is issued. Note: When configured in packing mode (GPDMA_CxTR1.PAM[1] = 1 and destination data width different from source data width), a non-null source block size must be a multiple of the destination data width (BNDT[2:0] versus GPDMA_CxTR1.DDW_LOG2[1:0]). Else a user setting error is reported and no transfer is issued. */
    using GPDMA_C1BR1_BNDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 1 source address register */
    using GPDMA_C1SAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x11C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief source address This field is the pointer to the address from which the next data is read. During the channel activity, depending on the source addressing mode (GPDMA_CxTR1.SINC), this field is kept fixed or incremented by the data width (GPDMA_CxTR1.SDW_LOG2[1:0]) after each burst source data, reflecting the next address from which data is read. During the channel activity, this address is updated after each completed source burst, consequently to: the programmed source burst; either in fixed addressing mode or in contiguous-data incremented mode. If contiguously incremented (GPDMA_CxTR1.SINC = 1), then the additional address offset value is the programmed burst size, as defined by GPDMA_CxTR1.SBL_1[5:0] and GPDMA_CxTR1.SDW_LOG2[21:0] the additional source incremented/decremented offset value as programmed by GPDMA_CxBR1.SDEC In linked-list mode, after a LLI data transfer is completed, this register is automatically updated by GPDMA from the memory, provided the LLI is set with GPDMA_CxLLR.USA = 1. Note: A source address must be aligned with the programmed data width of a source burst (SA[2:0] versus GPDMA_CxTR1.SDW_LOG2[1:0]). Else, a user setting error is reported and no transfer is issued. */
    using GPDMA_C1SAR_SA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 1 destination address register */
    using GPDMA_C1DAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x120, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination address This field is the pointer to the address from which the next data is written. During the channel activity, depending on the destination addressing mode (GPDMA_CxTR1.DINC), this field is kept fixed or incremented by the data width (GPDMA_CxTR1.DDW_LOG2[21:0]) after each burst destination data, reflecting the next address from which data is written. During the channel activity, this address is updated after each completed destination burst, consequently to: the programmed destination burst; either in fixed addressing mode or in contiguous-data incremented mode. If contiguously incremented (GPDMA_CxTR1.DINC = 1), then the additional address offset value is the programmed burst size, as defined by GPDMA_CxTR1.DBL_1[5:0] and GPDMA_CxTR1.DDW_LOG2[1:0] the additional destination incremented/decremented offset value as programmed by GPDMA_CxBR1.DDEC. In linked-list mode, after a LLI data transfer is completed, this register is automatically updated by the GPDMA from the memory, provided the LLI is set with GPDMA_CxLLR.UDA = 1. Note: A destination address must be aligned with the programmed data width of a destination burst (DA[2:0] versus GPDMA_CxTR1.DDW_LOG2[1:0]). Else, a user setting error is reported and no transfer is issued. */
    using GPDMA_C1DAR_DA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 1 linked-list address register */
    using GPDMA_C1LLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pointer (16-bit low-significant address) to the next linked-list data structure If UT1 = UT2 = UB1 = USA = UDA = ULL = 0 and if LA[15:20] = 0, the current LLI is the last one. The channel transfer is completed without any update of the linked-list GPDMA register file. Else, this field is the pointer to the memory address offset from which the next linked-list data structure is automatically fetched from, once the data transfer is completed, in order to conditionally update the linked-list GPDMA internal register file (GPDMA_CxCTR1, GPDMA_CxTR2, GPDMA_CxBR1, GPDMA_CxSAR, GPDMA_CxDAR and GPDMA_CxLLR). Note: The user must program the pointer to be 32-bit aligned. The two low-significant bits are write ignored. */
    using GPDMA_C1LLR_LA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxLLR register from memory This bit is used to control the update of GPDMA_CxLLR from the memory during the link transfer. */
    using GPDMA_C1LLR_ULL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxLLR update (value: 0)
     *          - B_0x1: GPDMA_CxLLR update (value: 1)
     */
        /** @brief no GPDMA_CxLLR update */
    constexpr std::uint32_t GPDMA_C1LLR_ULL_B_0x0 = 0;
        /** @brief GPDMA_CxLLR update */
    constexpr std::uint32_t GPDMA_C1LLR_ULL_B_0x1 = 1;

    /** @brief Update GPDMA_CxDAR register from memory This bit is used to control the update of GPDMA_CxDAR from the memory during the link transfer. */
    using GPDMA_C1LLR_UDA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxDAR update (value: 0)
     *          - B_0x1: GPDMA_CxDAR update (value: 1)
     */
        /** @brief no GPDMA_CxDAR update */
    constexpr std::uint32_t GPDMA_C1LLR_UDA_B_0x0 = 0;
        /** @brief GPDMA_CxDAR update */
    constexpr std::uint32_t GPDMA_C1LLR_UDA_B_0x1 = 1;

    /** @brief update GPDMA_CxSAR from memory This bit controls the update of GPDMA_CxSAR from the memory during the link transfer. */
    using GPDMA_C1LLR_USA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxSAR update (value: 0)
     *          - B_0x1: GPDMA_CxSAR update (value: 1)
     */
        /** @brief no GPDMA_CxSAR update */
    constexpr std::uint32_t GPDMA_C1LLR_USA_B_0x0 = 0;
        /** @brief GPDMA_CxSAR update */
    constexpr std::uint32_t GPDMA_C1LLR_USA_B_0x1 = 1;

    /** @brief Update GPDMA_CxBR1 from memory This bit controls the update of GPDMA_CxBR1 from the memory during the link transfer. If UB1 = 0 and if GPDMA_CxLLR different 0, the linked-list is not completed. GPDMA_CxBR1.BNDT[15:0] is then restored to the programmed value after data transfer is completed and before the link transfer. */
    using GPDMA_C1LLR_UB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxBR1 update from memory (GPDMA_CxBR1.BNDT[15:0] restored if any link transfer) (value: 0)
     *          - B_0x1: GPDMA_CxBR1 update (value: 1)
     */
        /** @brief no GPDMA_CxBR1 update from memory (GPDMA_CxBR1.BNDT[15:0] restored if any link transfer) */
    constexpr std::uint32_t GPDMA_C1LLR_UB1_B_0x0 = 0;
        /** @brief GPDMA_CxBR1 update */
    constexpr std::uint32_t GPDMA_C1LLR_UB1_B_0x1 = 1;

    /** @brief Update GPDMA_CxTR2 from memory This bit controls the update of GPDMA_CxTR2 from the memory during the link transfer. */
    using GPDMA_C1LLR_UT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxTR2 update (value: 0)
     *          - B_0x1: GPDMA_CxTR2 update (value: 1)
     */
        /** @brief no GPDMA_CxTR2 update */
    constexpr std::uint32_t GPDMA_C1LLR_UT2_B_0x0 = 0;
        /** @brief GPDMA_CxTR2 update */
    constexpr std::uint32_t GPDMA_C1LLR_UT2_B_0x1 = 1;

    /** @brief Update GPDMA_CxTR1 from memory This bit controls the update of GPDMA_CxTR1 from the memory during the link transfer. */
    using GPDMA_C1LLR_UT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxTR1 update (value: 0)
     *          - B_0x1: GPDMA_CxTR1 update (value: 1)
     */
        /** @brief no GPDMA_CxTR1 update */
    constexpr std::uint32_t GPDMA_C1LLR_UT1_B_0x0 = 0;
        /** @brief GPDMA_CxTR1 update */
    constexpr std::uint32_t GPDMA_C1LLR_UT1_B_0x1 = 1;

    /** @brief GPDMA channel 2 linked-list base address register */
    using GPDMA_C2LBAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x150, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief linked-list base address of GPDMA channel x */
    using GPDMA_C2LBAR_LBA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 2 flag clear register */
    using GPDMA_C2FCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x15C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transfer complete flag clear */
    using GPDMA_C2FCR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding TCF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C2FCR_TCF_B_0x0 = 0;
        /** @brief corresponding TCF flag cleared */
    constexpr std::uint32_t GPDMA_C2FCR_TCF_B_0x1 = 1;

    /** @brief half transfer flag clear */
    using GPDMA_C2FCR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding HTF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C2FCR_HTF_B_0x0 = 0;
        /** @brief corresponding HTF flag cleared */
    constexpr std::uint32_t GPDMA_C2FCR_HTF_B_0x1 = 1;

    /** @brief data transfer error flag clear */
    using GPDMA_C2FCR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding DTEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C2FCR_DTEF_B_0x0 = 0;
        /** @brief corresponding DTEF flag cleared */
    constexpr std::uint32_t GPDMA_C2FCR_DTEF_B_0x1 = 1;

    /** @brief update link transfer error flag clear */
    using GPDMA_C2FCR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding ULEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C2FCR_ULEF_B_0x0 = 0;
        /** @brief corresponding ULEF flag cleared */
    constexpr std::uint32_t GPDMA_C2FCR_ULEF_B_0x1 = 1;

    /** @brief user setting error flag clear */
    using GPDMA_C2FCR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding USEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C2FCR_USEF_B_0x0 = 0;
        /** @brief corresponding USEF flag cleared */
    constexpr std::uint32_t GPDMA_C2FCR_USEF_B_0x1 = 1;

    /** @brief completed suspension flag clear */
    using GPDMA_C2FCR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding SUSPF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C2FCR_SUSPF_B_0x0 = 0;
        /** @brief corresponding SUSPF flag cleared */
    constexpr std::uint32_t GPDMA_C2FCR_SUSPF_B_0x1 = 1;

    /** @brief trigger overrun flag clear */
    using GPDMA_C2FCR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding TOF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C2FCR_TOF_B_0x0 = 0;
        /** @brief corresponding TOF flag cleared */
    constexpr std::uint32_t GPDMA_C2FCR_TOF_B_0x1 = 1;

    /** @brief GPDMA channel 2 status register */
    using GPDMA_C2SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x160, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief idle flag This idle flag is deasserted by hardware when the channel is enabled (GPDMA_CxCR.EN = 1) with a valid channel configuration (no USEF to be immediately reported). This idle flag is asserted after hard reset or by hardware when the channel is back in idle state (in suspended or disabled state). */
    using GPDMA_C2SR_IDLEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: channel not in idle state (value: 0)
     *          - B_0x1: channel in idle state (value: 1)
     */
        /** @brief channel not in idle state */
    constexpr std::uint32_t GPDMA_C2SR_IDLEF_B_0x0 = 0;
        /** @brief channel in idle state */
    constexpr std::uint32_t GPDMA_C2SR_IDLEF_B_0x1 = 1;

    /** @brief transfer complete flag A transfer complete event is either a block transfer complete, or a LLI transfer complete including the upload of the next LLI if any, or the full linked-list completion, depending on the transfer complete event mode (GPDMA_CxTR2.TCEM[1:0]). */
    using GPDMA_C2SR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no transfer complete event (value: 0)
     *          - B_0x1: a transfer complete event occurred (value: 1)
     */
        /** @brief no transfer complete event */
    constexpr std::uint32_t GPDMA_C2SR_TCF_B_0x0 = 0;
        /** @brief a transfer complete event occurred */
    constexpr std::uint32_t GPDMA_C2SR_TCF_B_0x1 = 1;

    /** @brief half transfer flag A half block transfer occurs when half of the bytes of the source block size (rounded up integer of GPDMA_CxBR1.BNDT[15:0]/2) has been transferred to the destination. */
    using GPDMA_C2SR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no half transfer event (value: 0)
     *          - B_0x1: a half transfer event occurred (value: 1)
     */
        /** @brief no half transfer event */
    constexpr std::uint32_t GPDMA_C2SR_HTF_B_0x0 = 0;
        /** @brief a half transfer event occurred */
    constexpr std::uint32_t GPDMA_C2SR_HTF_B_0x1 = 1;

    /** @brief data transfer error flag */
    using GPDMA_C2SR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no data transfer error event (value: 0)
     *          - B_0x1: a master bus error event occurred on a data transfer (value: 1)
     */
        /** @brief no data transfer error event */
    constexpr std::uint32_t GPDMA_C2SR_DTEF_B_0x0 = 0;
        /** @brief a master bus error event occurred on a data transfer */
    constexpr std::uint32_t GPDMA_C2SR_DTEF_B_0x1 = 1;

    /** @brief update link transfer error flag */
    using GPDMA_C2SR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no update link transfer error event (value: 0)
     *          - B_0x1: a master bus error event occurred while updating a linked-list register from memory (value: 1)
     */
        /** @brief no update link transfer error event */
    constexpr std::uint32_t GPDMA_C2SR_ULEF_B_0x0 = 0;
        /** @brief a master bus error event occurred while updating a linked-list register from memory */
    constexpr std::uint32_t GPDMA_C2SR_ULEF_B_0x1 = 1;

    /** @brief user setting error flag */
    using GPDMA_C2SR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no user setting error event (value: 0)
     *          - B_0x1: a user setting error event occurred (value: 1)
     */
        /** @brief no user setting error event */
    constexpr std::uint32_t GPDMA_C2SR_USEF_B_0x0 = 0;
        /** @brief a user setting error event occurred */
    constexpr std::uint32_t GPDMA_C2SR_USEF_B_0x1 = 1;

    /** @brief completed suspension flag */
    using GPDMA_C2SR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no completed suspension event (value: 0)
     *          - B_0x1: a completed suspension event occurred (value: 1)
     */
        /** @brief no completed suspension event */
    constexpr std::uint32_t GPDMA_C2SR_SUSPF_B_0x0 = 0;
        /** @brief a completed suspension event occurred */
    constexpr std::uint32_t GPDMA_C2SR_SUSPF_B_0x1 = 1;

    /** @brief trigger overrun flag */
    using GPDMA_C2SR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no trigger overrun event (value: 0)
     *          - B_0x1: a trigger overrun event occurred (value: 1)
     */
        /** @brief no trigger overrun event */
    constexpr std::uint32_t GPDMA_C2SR_TOF_B_0x0 = 0;
        /** @brief a trigger overrun event occurred */
    constexpr std::uint32_t GPDMA_C2SR_TOF_B_0x1 = 1;

    /** @brief monitored FIFO level Number of available write beats in the FIFO, in units of the programmed destination data width (see GPDMA_CxTR1.DDW_LOG2[1:0], in units of bytes, half-words, or words). Note: After having suspended an active transfer, the user may need to read FIFOL[7:0], additionally to GPDMA_CxBR1.BDNT[15:0] to know how many data have been transferred to the destination. Before reading, the user may wait for the transfer to be suspended (GPDMA_CxSR.SUSPF = 1). */
    using GPDMA_C2SR_FIFOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 2 control register */
    using GPDMA_C2CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x164, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief enable Writing 1 into the field RESET (bit 1) causes the hardware to de-assert this bit, whatever is written into this bit 0. Else: this bit is deasserted by hardware when there is a transfer error (master bus error or user setting error) or when there is a channel transfer complete (channel ready to be configured, for example if LSM=1 at the end of a single execution of the LLI). Else, this bit can be asserted by software. Writing 0 into this EN bit is ignored. */
    using GPDMA_C2CR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write: ignored, read: channel disabled (value: 0)
     *          - B_0x1: write: enable channel, read: channel enabled (value: 1)
     */
        /** @brief write: ignored, read: channel disabled */
    constexpr std::uint32_t GPDMA_C2CR_EN_B_0x0 = 0;
        /** @brief write: enable channel, read: channel enabled */
    constexpr std::uint32_t GPDMA_C2CR_EN_B_0x1 = 1;

    /** @brief reset This bit is write only. Writing 0 has no impact. Writing 1 implies the reset of the following: the FIFO, the channel internal state, SUSP and EN bits (whatever is written receptively in bit 2 and bit 0). The reset is effective when the channel is in steady state, meaning one of the following: - active channel in suspended state (GPDMA_CxSR.SUSPF = 1 and GPDMA_CxSR.IDLEF = GPDMA_CxCR.EN = 1) - channel in disabled state (GPDMA_CxSR.IDLEF = 1 and GPDMA_CxCR.EN = 0). After writing a RESET, to continue using this channel, the user must explicitly reconfigure the channel including the hardware-modified configuration registers (GPDMA_CxBR1, GPDMA_CxSAR and GPDMA_CxDAR) before enabling again the channel (see the programming sequence in Figure 44). */
    using GPDMA_C2CR_RESET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no channel reset (value: 0)
     *          - B_0x1: channel reset (value: 1)
     */
        /** @brief no channel reset */
    constexpr std::uint32_t GPDMA_C2CR_RESET_B_0x0 = 0;
        /** @brief channel reset */
    constexpr std::uint32_t GPDMA_C2CR_RESET_B_0x1 = 1;

    /** @brief suspend Writing 1 into the field RESET (bit 1) causes the hardware to de-assert this bit, whatever is written into this bit 2. Else: Software must write 1 in order to suspend an active channel (channel with an ongoing GPDMA transfer over its master ports). The software must write 0 in order to resume a suspended channel, following the programming sequence detailed in Figure 43. */
    using GPDMA_C2CR_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write: resume channel, read: channel not suspended (value: 0)
     *          - B_0x1: write: suspend channel, read: channel suspended. (value: 1)
     */
        /** @brief write: resume channel, read: channel not suspended */
    constexpr std::uint32_t GPDMA_C2CR_SUSP_B_0x0 = 0;
        /** @brief write: suspend channel, read: channel suspended. */
    constexpr std::uint32_t GPDMA_C2CR_SUSP_B_0x1 = 1;

    /** @brief transfer complete interrupt enable */
    using GPDMA_C2CR_TCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C2CR_TCIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C2CR_TCIE_B_0x1 = 1;

    /** @brief half transfer complete interrupt enable */
    using GPDMA_C2CR_HTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C2CR_HTIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C2CR_HTIE_B_0x1 = 1;

    /** @brief data transfer error interrupt enable */
    using GPDMA_C2CR_DTEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C2CR_DTEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C2CR_DTEIE_B_0x1 = 1;

    /** @brief update link transfer error interrupt enable */
    using GPDMA_C2CR_ULEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C2CR_ULEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C2CR_ULEIE_B_0x1 = 1;

    /** @brief user setting error interrupt enable */
    using GPDMA_C2CR_USEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C2CR_USEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C2CR_USEIE_B_0x1 = 1;

    /** @brief completed suspension interrupt enable */
    using GPDMA_C2CR_SUSPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C2CR_SUSPIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C2CR_SUSPIE_B_0x1 = 1;

    /** @brief trigger overrun interrupt enable */
    using GPDMA_C2CR_TOIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C2CR_TOIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C2CR_TOIE_B_0x1 = 1;

    /** @brief Link step mode First the (possible 1D/repeated) block transfer is executed as defined by the current internal register file until GPDMA_CxBR1.BNDT[15:0] = 0. Secondly the next linked-list data structure is conditionally uploaded from memory as defined by GPDMA_CxLLR. Then channel execution is completed. Note: This bit must be written when EN=0. This bit is read-only when EN=1. */
    using GPDMA_C2CR_LSM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: channel executed for the full linked-list and completed at the end of the last LLI (GPDMA_CxLLR = 0). The 16 low-significant bits of the link address are null (LA[15:0] = 0) and all the update bits are null (UT1 =UB1 = UT2 = USA = UDA = ULL = 0). Then GPDMA_CxBR1.BNDT[15:0] = 0. (value: 0)
     *          - B_0x1: channel executed once for the current LLI (value: 1)
     */
        /** @brief channel executed for the full linked-list and completed at the end of the last LLI (GPDMA_CxLLR = 0). The 16 low-significant bits of the link address are null (LA[15:0] = 0) and all the update bits are null (UT1 =UB1 = UT2 = USA = UDA = ULL = 0). Then GPDMA_CxBR1.BNDT[15:0] = 0. */
    constexpr std::uint32_t GPDMA_C2CR_LSM_B_0x0 = 0;
        /** @brief channel executed once for the current LLI */
    constexpr std::uint32_t GPDMA_C2CR_LSM_B_0x1 = 1;

    /** @brief linked-list allocated port This bit is used to allocate the master port for the update of the GPDMA linked-list registers from the memory. Note: This bit must be written when EN=0. This bit is read-only when EN=1. */
    using GPDMA_C2CR_LAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C2CR_LAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C2CR_LAP_B_0x1 = 1;

    /** @brief priority level of the channel x GPDMA transfer versus others Note: This bit must be written when EN = 0. This bit is read-only when EN = 1. */
    using GPDMA_C2CR_PRIO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: low priority, low weight (value: 0)
     *          - B_0x1: low priority, mid weight (value: 1)
     *          - B_0x2: low priority, high weight (value: 2)
     *          - B_0x3: high priority (value: 3)
     */
        /** @brief low priority, low weight */
    constexpr std::uint32_t GPDMA_C2CR_PRIO_B_0x0 = 0;
        /** @brief low priority, mid weight */
    constexpr std::uint32_t GPDMA_C2CR_PRIO_B_0x1 = 1;
        /** @brief low priority, high weight */
    constexpr std::uint32_t GPDMA_C2CR_PRIO_B_0x2 = 2;
        /** @brief high priority */
    constexpr std::uint32_t GPDMA_C2CR_PRIO_B_0x3 = 3;

    /** @brief GPDMA channel 2 transfer register 1 */
    using GPDMA_C2TR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x190, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief binary logarithm of the source data width of a burst in bytes Setting a 8-byte data width causes a user setting error to be reported and no transfer is issued. A source block size must be a multiple of the source data width (GPDMA_CxBR1.BNDT[2:0] versus SDW_LOG2[1:0]). Otherwise, a user setting error is reported and no transfer is issued. Note: A source burst transfer must have an aligned address with its data width (start address GPDMA_CxSAR[2:0] versus SDW_LOG2[1:0]). Otherwise, a user setting error is reported and none transfer is issued. */
    using GPDMA_C2TR1_SDW_LOG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: byte (value: 0)
     *          - B_0x1: half-word (2 bytes) (value: 1)
     *          - B_0x2: word (4 bytes) (value: 2)
     *          - B_0x3: user setting error reported and no transfer issued (value: 3)
     */
        /** @brief byte */
    constexpr std::uint32_t GPDMA_C2TR1_SDW_LOG2_B_0x0 = 0;
        /** @brief half-word (2 bytes) */
    constexpr std::uint32_t GPDMA_C2TR1_SDW_LOG2_B_0x1 = 1;
        /** @brief word (4 bytes) */
    constexpr std::uint32_t GPDMA_C2TR1_SDW_LOG2_B_0x2 = 2;
        /** @brief user setting error reported and no transfer issued */
    constexpr std::uint32_t GPDMA_C2TR1_SDW_LOG2_B_0x3 = 3;

    /** @brief source incrementing burst The source address, pointed by GPDMA_CxSAR, is kept constant after a burst beat/single transfer or is incremented by the offset value corresponding to a contiguous data after a burst beat/single transfer. */
    using GPDMA_C2TR1_SINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fixed burst (value: 0)
     *          - B_0x1: contiguously incremented burst (value: 1)
     */
        /** @brief fixed burst */
    constexpr std::uint32_t GPDMA_C2TR1_SINC_B_0x0 = 0;
        /** @brief contiguously incremented burst */
    constexpr std::uint32_t GPDMA_C2TR1_SINC_B_0x1 = 1;

    /** @brief source burst length minus 1, between 0 and 63 The burst length unit is one data named beat within a burst. If SBL_1[5:0] =0 , the burst can be named as single. Each data/beat has a width defined by the destination data width SDW_LOG2[1:0]. Note: If a burst transfer crossed a 1-Kbyte address boundary on a AHB transfer, the GPDMA modifies and shortens the programmed burst into singles or bursts of lower length, to be compliant with the AHB protocol. Note: If a burst transfer is of length greater than the FIFO size of the channel x, the GPDMA modifies and shortens the programmed burst into singles or bursts of lower length, to be compliant with the FIFO size. Transfer performance is lower, with GPDMA re-arbitration between effective and lower singles/bursts, but the data integrity is guaranteed. */
    using GPDMA_C2TR1_SBL_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief padding/alignment mode If DDW_LOG2[1:0] = SDW_LOG2[1:0]: if the data width of a burst destination transfer is equal to the data width of a burst source transfer, these bits are ignored. Else, in the following enumerated values, the condition PAM_1 is when destination data width is higher that source data width, and the condition PAM_2 is when destination data width is higher than source data width. 1x: successive source data are FIFO queued and packed at the destination data width, in a left (LSB) to right (MSB) order (named little endian), before a destination transfer Note: 1x: source data is FIFO queued and unpacked at the destination data width, to be transferred in a left (LSB) to right (MSB) order (named little endian) to the destination */
    using GPDMA_C2TR1_PAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0_PAM_1: source data is transferred as right aligned, padded with 0s up to the destination data width (value: 0)
     *          - B_0x1_PAM_1: source data is transferred as right aligned, sign extended up to the destination data width (value: 1)
     */
        /** @brief source data is transferred as right aligned, padded with 0s up to the destination data width */
    constexpr std::uint32_t GPDMA_C2TR1_PAM_B_0x0_PAM_1 = 0;
        /** @brief source data is transferred as right aligned, sign extended up to the destination data width */
    constexpr std::uint32_t GPDMA_C2TR1_PAM_B_0x1_PAM_1 = 1;

    /** @brief source byte exchange within the unaligned half-word of each source word If the source data width is shorter than a word, this bit is ignored. If the source data width is a word: */
    using GPDMA_C2TR1_SBX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no byte-based exchange within the unaligned half-word of each source word (value: 0)
     *          - B_0x1: the two consecutive bytes within the unaligned half-word of each source word are exchanged. (value: 1)
     */
        /** @brief no byte-based exchange within the unaligned half-word of each source word */
    constexpr std::uint32_t GPDMA_C2TR1_SBX_B_0x0 = 0;
        /** @brief the two consecutive bytes within the unaligned half-word of each source word are exchanged. */
    constexpr std::uint32_t GPDMA_C2TR1_SBX_B_0x1 = 1;

    /** @brief source allocated port This bit is used to allocate the master port for the source transfer Note: This bit must be written when EN = 0. This bit is read-only when EN = 1. */
    using GPDMA_C2TR1_SAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C2TR1_SAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C2TR1_SAP_B_0x1 = 1;

    /** @brief security attribute of the GPDMA transfer from the source If GPDMA_SECCFGR.SECx = 1 and the access is secure: This is a secure register bit. This bit can only be read by a secure software. This bit must be written by a secure software when GPDMA_SECCFGR.SECx =1 . A secure write is ignored when GPDMA_SECCFGR.SECx = 0. When GPDMA_SECCFGR.SECx is deasserted, this SSEC bit is also deasserted by hardware (on a secure reconfiguration of the channel as non-secure), and the GPDMA transfer from the source is non-secure. */
    using GPDMA_C2TR1_SSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPDMA transfer non-secure (value: 0)
     *          - B_0x1: GPDMA transfer secure (value: 1)
     */
        /** @brief GPDMA transfer non-secure */
    constexpr std::uint32_t GPDMA_C2TR1_SSEC_B_0x0 = 0;
        /** @brief GPDMA transfer secure */
    constexpr std::uint32_t GPDMA_C2TR1_SSEC_B_0x1 = 1;

    /** @brief binary logarithm of the destination data width of a burst, in bytes Setting a 8-byte data width causes a user setting error to be reported and none transfer is issued. Note: A destination burst transfer must have an aligned address with its data width (start address GPDMA_CxDAR[2:0] versus DDW_LOG2[1:0]). Otherwise a user setting error is reported and no transfer is issued. */
    using GPDMA_C2TR1_DDW_LOG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: byte (value: 0)
     *          - B_0x1: half-word (2 bytes) (value: 1)
     *          - B_0x2: word (4 bytes) (value: 2)
     *          - B_0x3: user setting error reported and no transfer issued (value: 3)
     */
        /** @brief byte */
    constexpr std::uint32_t GPDMA_C2TR1_DDW_LOG2_B_0x0 = 0;
        /** @brief half-word (2 bytes) */
    constexpr std::uint32_t GPDMA_C2TR1_DDW_LOG2_B_0x1 = 1;
        /** @brief word (4 bytes) */
    constexpr std::uint32_t GPDMA_C2TR1_DDW_LOG2_B_0x2 = 2;
        /** @brief user setting error reported and no transfer issued */
    constexpr std::uint32_t GPDMA_C2TR1_DDW_LOG2_B_0x3 = 3;

    /** @brief destination incrementing burst The destination address, pointed by GPDMA_CxDAR, is kept constant after a burst beat/single transfer, or is incremented by the offset value corresponding to a contiguous data after a burst beat/single transfer. */
    using GPDMA_C2TR1_DINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fixed burst (value: 0)
     *          - B_0x1: contiguously incremented burst (value: 1)
     */
        /** @brief fixed burst */
    constexpr std::uint32_t GPDMA_C2TR1_DINC_B_0x0 = 0;
        /** @brief contiguously incremented burst */
    constexpr std::uint32_t GPDMA_C2TR1_DINC_B_0x1 = 1;

    /** @brief destination burst length minus 1, between 0 and 63 The burst length unit is one data named beat within a burst. If DBL_1[5:0] =0 , the burst can be named as single. Each data/beat has a width defined by the destination data width DDW_LOG2[1:0]. Note: If a burst transfer crossed a 1-Kbyte address boundary on a AHB transfer, the GPDMA modifies and shortens the programmed burst into singles or bursts of lower length, to be compliant with the AHB protocol. Note: If a burst transfer is of length greater than the FIFO size of the channel x, the GPDMA modifies and shortens the programmed burst into singles or bursts of lower length, to be compliant with the FIFO size. Transfer performance is lower, with GPDMA re-arbitration between effective and lower singles/bursts, but the data integrity is guaranteed. */
    using GPDMA_C2TR1_DBL_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination byte exchange If the destination data size is a byte, this bit is ignored. If the destination data size is not a byte: */
    using GPDMA_C2TR1_DBX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no byte-based exchange within half-word (value: 0)
     *          - B_0x1: the two consecutive (post PAM) bytes are exchanged in each destination half-word. (value: 1)
     */
        /** @brief no byte-based exchange within half-word */
    constexpr std::uint32_t GPDMA_C2TR1_DBX_B_0x0 = 0;
        /** @brief the two consecutive (post PAM) bytes are exchanged in each destination half-word. */
    constexpr std::uint32_t GPDMA_C2TR1_DBX_B_0x1 = 1;

    /** @brief destination half-word exchange If the destination data size is shorter than a word, this bit is ignored. If the destination data size is a word: */
    using GPDMA_C2TR1_DHX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no halfword-based exchanged within word (value: 0)
     *          - B_0x1: the two consecutive (post PAM) half-words are exchanged in each destination word. (value: 1)
     */
        /** @brief no halfword-based exchanged within word */
    constexpr std::uint32_t GPDMA_C2TR1_DHX_B_0x0 = 0;
        /** @brief the two consecutive (post PAM) half-words are exchanged in each destination word. */
    constexpr std::uint32_t GPDMA_C2TR1_DHX_B_0x1 = 1;

    /** @brief destination allocated port This bit is used to allocate the master port for the destination transfer Note: This bit must be written when EN = 0. This bit is read-only when EN = 1. */
    using GPDMA_C2TR1_DAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C2TR1_DAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C2TR1_DAP_B_0x1 = 1;

    /** @brief security attribute of the GPDMA transfer to the destination If GPDMA_SECCFGR.SECx = 1 and the access is secure: This is a secure register bit. This bit can only be read by a secure software. This bit must be written by a secure software when GPDMA_SECCFGR.SECx = 1. A secure write is ignored when GPDMA_SECCFGR.SECx = 0. When GPDMA_SECCFGR.SECx is deasserted, this DSEC bit is also deasserted by hardware (on a secure reconfiguration of the channel as non-secure), and the GPDMA transfer to the destination is non-secure. */
    using GPDMA_C2TR1_DSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPDMA transfer non-secure (value: 0)
     *          - B_0x1: GPDMA transfer secure (value: 1)
     */
        /** @brief GPDMA transfer non-secure */
    constexpr std::uint32_t GPDMA_C2TR1_DSEC_B_0x0 = 0;
        /** @brief GPDMA transfer secure */
    constexpr std::uint32_t GPDMA_C2TR1_DSEC_B_0x1 = 1;

    /** @brief GPDMA channel 2 transfer register 2 */
    using GPDMA_C2TR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x194, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA hardware request selection These bits are ignored if channel x is activated (GPDMA_CxCR.EN asserted) with SWREQ = 1 (software request for a memory-to-memory transfer). Else, the selected hardware request is internally taken into account as per Section 16.3.3. The user must not assign a same input hardware request (same REQSEL[5:0] value) to different active GPDMA channels (GPDMA_CxCR.EN = 1 and GPDMA_CxTR2.SWREQ = 0 for these channels). GPDMA is not intended to hardware support the case of simultaneous enabled channels incorrectly configured with a same hardware peripheral request signal, and there is no user setting error reporting. */
    using GPDMA_C2TR2_REQSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief software request This bit is internally taken into account when GPDMA_CxCR.EN is asserted. */
    using GPDMA_C2TR2_SWREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no software request. The selected hardware request REQSEL[5:0] is taken into account. (value: 0)
     *          - B_0x1: software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[5:0] is ignored. (value: 1)
     */
        /** @brief no software request. The selected hardware request REQSEL[5:0] is taken into account. */
    constexpr std::uint32_t GPDMA_C2TR2_SWREQ_B_0x0 = 0;
        /** @brief software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[5:0] is ignored. */
    constexpr std::uint32_t GPDMA_C2TR2_SWREQ_B_0x1 = 1;

    /** @brief destination hardware request This bit is ignored if channel x is activated (GPDMA_CxCR.EN asserted) with SWREQ = 1 (software request for a memory-to-memory transfer). Else: */
    using GPDMA_C2TR2_DREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: selected hardware request driven by a source peripheral (request signal taken into account by the GPDMA transfer scheduler over the source/read port) (value: 0)
     *          - B_0x1: selected hardware request driven by a destination peripheral (request signal taken into account by the GPDMA transfer scheduler over the destination/write port) (value: 1)
     */
        /** @brief selected hardware request driven by a source peripheral (request signal taken into account by the GPDMA transfer scheduler over the source/read port) */
    constexpr std::uint32_t GPDMA_C2TR2_DREQ_B_0x0 = 0;
        /** @brief selected hardware request driven by a destination peripheral (request signal taken into account by the GPDMA transfer scheduler over the destination/write port) */
    constexpr std::uint32_t GPDMA_C2TR2_DREQ_B_0x1 = 1;

    /** @brief Block hardware request If the channel x is activated (GPDMA_CxCR.EN asserted) with SWREQ = 1 (software request for a memory-to-memory transfer), this bit is ignored. Else: */
    using GPDMA_C2TR2_BREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a burst level. (value: 0)
     *          - B_0x1: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see Section 16.3.3). (value: 1)
     */
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a burst level. */
    constexpr std::uint32_t GPDMA_C2TR2_BREQ_B_0x0 = 0;
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see Section 16.3.3). */
    constexpr std::uint32_t GPDMA_C2TR2_BREQ_B_0x1 = 1;

    /** @brief trigger mode These bits define the transfer granularity for its conditioning by the trigger. */
    using GPDMA_C2TR2_TRIGM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: at block level: the first burst read of each block transfer is conditioned by one hit trigger . (value: 0)
     *          - B_0x1: channel x = 0 to 7, same as 0010: at link level: a LLI link transfer is conditioned by one hit trigger. The LLI data transfer (if any) is not conditioned. (value: 1)
     *          - B_0x3: at programmed burst level: If SWREQ = 1, each programmed burst read is conditioned by one hit trigger. If SWREQ = 0, each programmed burst that is requested by the selected peripheral, is conditioned by one hit trigger. (value: 3)
     */
        /** @brief at block level: the first burst read of each block transfer is conditioned by one hit trigger . */
    constexpr std::uint32_t GPDMA_C2TR2_TRIGM_B_0x0 = 0;
        /** @brief channel x = 0 to 7, same as 0010: at link level: a LLI link transfer is conditioned by one hit trigger. The LLI data transfer (if any) is not conditioned. */
    constexpr std::uint32_t GPDMA_C2TR2_TRIGM_B_0x1 = 1;
        /** @brief at programmed burst level: If SWREQ = 1, each programmed burst read is conditioned by one hit trigger. If SWREQ = 0, each programmed burst that is requested by the selected peripheral, is conditioned by one hit trigger. */
    constexpr std::uint32_t GPDMA_C2TR2_TRIGM_B_0x3 = 3;

    /** @brief trigger event input selection These bits select the trigger event input of the GPDMA transfer (as per Section 16.3.5), with an active trigger event if TRIGPOL[1:0] different 00. */
    using GPDMA_C2TR2_TRIGSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief trigger event polarity These bits define the polarity of the selected trigger event input defined by TRIGSEL[4:0]. */
    using GPDMA_C2TR2_TRIGPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no trigger (masked trigger event) (value: 0)
     *          - B_0x1: trigger on the rising edge (value: 1)
     *          - B_0x2: trigger on the falling edge (value: 2)
     *          - B_0x3: same as 00 (value: 3)
     */
        /** @brief no trigger (masked trigger event) */
    constexpr std::uint32_t GPDMA_C2TR2_TRIGPOL_B_0x0 = 0;
        /** @brief trigger on the rising edge */
    constexpr std::uint32_t GPDMA_C2TR2_TRIGPOL_B_0x1 = 1;
        /** @brief trigger on the falling edge */
    constexpr std::uint32_t GPDMA_C2TR2_TRIGPOL_B_0x2 = 2;
        /** @brief same as 00 */
    constexpr std::uint32_t GPDMA_C2TR2_TRIGPOL_B_0x3 = 3;

    /** @brief transfer complete event mode These bits define the transfer granularity for the transfer complete and half transfer complete events generation. Note: If the initial LLIsub0 /subdata transfer is null/void (directly programmed by the internal register file with GPDMA_CxBR1.BNDT[15:0] = 0), then neither the complete transfer event nor the half transfer event is generated. Note: If the initial LLIsub0 /subdata transfer is null/void (directly programmed by the internal register file with GPDMA_CxBR1.BNDT[15:0] = 0), then neither the complete transfer event nor the half transfer event is generated. Note: If the initial LLIsub0 /subdata transfer is null/void (i.e. directly programmed by the internal register file with GPDMA_CxBR1.BNDT[15:0] =0 ), then the half transfer event is not generated, and the transfer complete event is generated when is completed the loading of the LLIsub1/sub. */
    using GPDMA_C2TR2_TCEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: at block level (when GPDMA_CxBR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. (value: 0)
     *          - B_0x1: channel x (0 to 7, same as 00 (value: 1)
     *          - B_0x2: at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer. (value: 2)
     *          - B_0x3: at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address GPDMA_CxLLR.LA[15:2] to zero and clears all the GPDMA_CxLLR update bits (UT1, UT2, UB1, USA, UDA and ULL). If the channel transfer is continuous/infinite, no event is generated. (value: 3)
     */
        /** @brief at block level (when GPDMA_CxBR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. */
    constexpr std::uint32_t GPDMA_C2TR2_TCEM_B_0x0 = 0;
        /** @brief channel x (0 to 7, same as 00 */
    constexpr std::uint32_t GPDMA_C2TR2_TCEM_B_0x1 = 1;
        /** @brief at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer. */
    constexpr std::uint32_t GPDMA_C2TR2_TCEM_B_0x2 = 2;
        /** @brief at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address GPDMA_CxLLR.LA[15:2] to zero and clears all the GPDMA_CxLLR update bits (UT1, UT2, UB1, USA, UDA and ULL). If the channel transfer is continuous/infinite, no event is generated. */
    constexpr std::uint32_t GPDMA_C2TR2_TCEM_B_0x3 = 3;

    /** @brief GPDMA channel 2 block register 1 */
    using GPDMA_C2BR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x198, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief block number of data bytes to transfer from the source Block size transferred from the source. When the channel is enabled, this field becomes read-only and is decremented, indicating the remaining number of data items in the current source block to be transferred. BNDT[15:0] is programmed in number of bytes, maximum source block size is 64 Kbytes -1. Once the last data transfer is completed (BNDT[15:0] = 0): - if GPDMA_CxLLR.UB1 = 1, this field is updated by the LLI in the memory. - if GPDMA_CxLLR.UB1 = 0 and if there is at least one non null Uxx update bit, this field is internally restored to the programmed value. - if all GPDMA_CxLLR.Uxx = 0 and if GPDMA_CxLLR.LA[15:0] = 0, this field is internally restored to the programmed value (infinite/continuous last LLI). - if GPDMA_CxLLR = 0, this field is kept as zero following the last LLI data transfer. Note: A non-null source block size must be a multiple of the source data width (BNDT[2:0] versus GPDMA_CxTR1.SDW_LOG2[1:0]). Else a user setting error is reported and no transfer is issued. Note: When configured in packing mode (GPDMA_CxTR1.PAM[1] = 1 and destination data width different from source data width), a non-null source block size must be a multiple of the destination data width (BNDT[2:0] versus GPDMA_CxTR1.DDW_LOG2[1:0]). Else a user setting error is reported and no transfer is issued. */
    using GPDMA_C2BR1_BNDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 2 source address register */
    using GPDMA_C2SAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x19C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief source address This field is the pointer to the address from which the next data is read. During the channel activity, depending on the source addressing mode (GPDMA_CxTR1.SINC), this field is kept fixed or incremented by the data width (GPDMA_CxTR1.SDW_LOG2[1:0]) after each burst source data, reflecting the next address from which data is read. During the channel activity, this address is updated after each completed source burst, consequently to: the programmed source burst; either in fixed addressing mode or in contiguous-data incremented mode. If contiguously incremented (GPDMA_CxTR1.SINC = 1), then the additional address offset value is the programmed burst size, as defined by GPDMA_CxTR1.SBL_1[5:0] and GPDMA_CxTR1.SDW_LOG2[21:0] the additional source incremented/decremented offset value as programmed by GPDMA_CxBR1.SDEC In linked-list mode, after a LLI data transfer is completed, this register is automatically updated by GPDMA from the memory, provided the LLI is set with GPDMA_CxLLR.USA = 1. Note: A source address must be aligned with the programmed data width of a source burst (SA[2:0] versus GPDMA_CxTR1.SDW_LOG2[1:0]). Else, a user setting error is reported and no transfer is issued. */
    using GPDMA_C2SAR_SA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 2 destination address register */
    using GPDMA_C2DAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination address This field is the pointer to the address from which the next data is written. During the channel activity, depending on the destination addressing mode (GPDMA_CxTR1.DINC), this field is kept fixed or incremented by the data width (GPDMA_CxTR1.DDW_LOG2[21:0]) after each burst destination data, reflecting the next address from which data is written. During the channel activity, this address is updated after each completed destination burst, consequently to: the programmed destination burst; either in fixed addressing mode or in contiguous-data incremented mode. If contiguously incremented (GPDMA_CxTR1.DINC = 1), then the additional address offset value is the programmed burst size, as defined by GPDMA_CxTR1.DBL_1[5:0] and GPDMA_CxTR1.DDW_LOG2[1:0] the additional destination incremented/decremented offset value as programmed by GPDMA_CxBR1.DDEC. In linked-list mode, after a LLI data transfer is completed, this register is automatically updated by the GPDMA from the memory, provided the LLI is set with GPDMA_CxLLR.UDA = 1. Note: A destination address must be aligned with the programmed data width of a destination burst (DA[2:0] versus GPDMA_CxTR1.DDW_LOG2[1:0]). Else, a user setting error is reported and no transfer is issued. */
    using GPDMA_C2DAR_DA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 2 linked-list address register */
    using GPDMA_C2LLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1CC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pointer (16-bit low-significant address) to the next linked-list data structure If UT1 = UT2 = UB1 = USA = UDA = ULL = 0 and if LA[15:20] = 0, the current LLI is the last one. The channel transfer is completed without any update of the linked-list GPDMA register file. Else, this field is the pointer to the memory address offset from which the next linked-list data structure is automatically fetched from, once the data transfer is completed, in order to conditionally update the linked-list GPDMA internal register file (GPDMA_CxCTR1, GPDMA_CxTR2, GPDMA_CxBR1, GPDMA_CxSAR, GPDMA_CxDAR and GPDMA_CxLLR). Note: The user must program the pointer to be 32-bit aligned. The two low-significant bits are write ignored. */
    using GPDMA_C2LLR_LA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxLLR register from memory This bit is used to control the update of GPDMA_CxLLR from the memory during the link transfer. */
    using GPDMA_C2LLR_ULL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxLLR update (value: 0)
     *          - B_0x1: GPDMA_CxLLR update (value: 1)
     */
        /** @brief no GPDMA_CxLLR update */
    constexpr std::uint32_t GPDMA_C2LLR_ULL_B_0x0 = 0;
        /** @brief GPDMA_CxLLR update */
    constexpr std::uint32_t GPDMA_C2LLR_ULL_B_0x1 = 1;

    /** @brief Update GPDMA_CxDAR register from memory This bit is used to control the update of GPDMA_CxDAR from the memory during the link transfer. */
    using GPDMA_C2LLR_UDA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxDAR update (value: 0)
     *          - B_0x1: GPDMA_CxDAR update (value: 1)
     */
        /** @brief no GPDMA_CxDAR update */
    constexpr std::uint32_t GPDMA_C2LLR_UDA_B_0x0 = 0;
        /** @brief GPDMA_CxDAR update */
    constexpr std::uint32_t GPDMA_C2LLR_UDA_B_0x1 = 1;

    /** @brief update GPDMA_CxSAR from memory This bit controls the update of GPDMA_CxSAR from the memory during the link transfer. */
    using GPDMA_C2LLR_USA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxSAR update (value: 0)
     *          - B_0x1: GPDMA_CxSAR update (value: 1)
     */
        /** @brief no GPDMA_CxSAR update */
    constexpr std::uint32_t GPDMA_C2LLR_USA_B_0x0 = 0;
        /** @brief GPDMA_CxSAR update */
    constexpr std::uint32_t GPDMA_C2LLR_USA_B_0x1 = 1;

    /** @brief Update GPDMA_CxBR1 from memory This bit controls the update of GPDMA_CxBR1 from the memory during the link transfer. If UB1 = 0 and if GPDMA_CxLLR different 0, the linked-list is not completed. GPDMA_CxBR1.BNDT[15:0] is then restored to the programmed value after data transfer is completed and before the link transfer. */
    using GPDMA_C2LLR_UB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxBR1 update from memory (GPDMA_CxBR1.BNDT[15:0] restored if any link transfer) (value: 0)
     *          - B_0x1: GPDMA_CxBR1 update (value: 1)
     */
        /** @brief no GPDMA_CxBR1 update from memory (GPDMA_CxBR1.BNDT[15:0] restored if any link transfer) */
    constexpr std::uint32_t GPDMA_C2LLR_UB1_B_0x0 = 0;
        /** @brief GPDMA_CxBR1 update */
    constexpr std::uint32_t GPDMA_C2LLR_UB1_B_0x1 = 1;

    /** @brief Update GPDMA_CxTR2 from memory This bit controls the update of GPDMA_CxTR2 from the memory during the link transfer. */
    using GPDMA_C2LLR_UT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxTR2 update (value: 0)
     *          - B_0x1: GPDMA_CxTR2 update (value: 1)
     */
        /** @brief no GPDMA_CxTR2 update */
    constexpr std::uint32_t GPDMA_C2LLR_UT2_B_0x0 = 0;
        /** @brief GPDMA_CxTR2 update */
    constexpr std::uint32_t GPDMA_C2LLR_UT2_B_0x1 = 1;

    /** @brief Update GPDMA_CxTR1 from memory This bit controls the update of GPDMA_CxTR1 from the memory during the link transfer. */
    using GPDMA_C2LLR_UT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxTR1 update (value: 0)
     *          - B_0x1: GPDMA_CxTR1 update (value: 1)
     */
        /** @brief no GPDMA_CxTR1 update */
    constexpr std::uint32_t GPDMA_C2LLR_UT1_B_0x0 = 0;
        /** @brief GPDMA_CxTR1 update */
    constexpr std::uint32_t GPDMA_C2LLR_UT1_B_0x1 = 1;

    /** @brief GPDMA channel 3 linked-list base address register */
    using GPDMA_C3LBAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1D0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief linked-list base address of GPDMA channel x */
    using GPDMA_C3LBAR_LBA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 3 flag clear register */
    using GPDMA_C3FCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1DC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transfer complete flag clear */
    using GPDMA_C3FCR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding TCF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C3FCR_TCF_B_0x0 = 0;
        /** @brief corresponding TCF flag cleared */
    constexpr std::uint32_t GPDMA_C3FCR_TCF_B_0x1 = 1;

    /** @brief half transfer flag clear */
    using GPDMA_C3FCR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding HTF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C3FCR_HTF_B_0x0 = 0;
        /** @brief corresponding HTF flag cleared */
    constexpr std::uint32_t GPDMA_C3FCR_HTF_B_0x1 = 1;

    /** @brief data transfer error flag clear */
    using GPDMA_C3FCR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding DTEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C3FCR_DTEF_B_0x0 = 0;
        /** @brief corresponding DTEF flag cleared */
    constexpr std::uint32_t GPDMA_C3FCR_DTEF_B_0x1 = 1;

    /** @brief update link transfer error flag clear */
    using GPDMA_C3FCR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding ULEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C3FCR_ULEF_B_0x0 = 0;
        /** @brief corresponding ULEF flag cleared */
    constexpr std::uint32_t GPDMA_C3FCR_ULEF_B_0x1 = 1;

    /** @brief user setting error flag clear */
    using GPDMA_C3FCR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding USEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C3FCR_USEF_B_0x0 = 0;
        /** @brief corresponding USEF flag cleared */
    constexpr std::uint32_t GPDMA_C3FCR_USEF_B_0x1 = 1;

    /** @brief completed suspension flag clear */
    using GPDMA_C3FCR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding SUSPF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C3FCR_SUSPF_B_0x0 = 0;
        /** @brief corresponding SUSPF flag cleared */
    constexpr std::uint32_t GPDMA_C3FCR_SUSPF_B_0x1 = 1;

    /** @brief trigger overrun flag clear */
    using GPDMA_C3FCR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding TOF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C3FCR_TOF_B_0x0 = 0;
        /** @brief corresponding TOF flag cleared */
    constexpr std::uint32_t GPDMA_C3FCR_TOF_B_0x1 = 1;

    /** @brief GPDMA channel 3 status register */
    using GPDMA_C3SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1E0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief idle flag This idle flag is deasserted by hardware when the channel is enabled (GPDMA_CxCR.EN = 1) with a valid channel configuration (no USEF to be immediately reported). This idle flag is asserted after hard reset or by hardware when the channel is back in idle state (in suspended or disabled state). */
    using GPDMA_C3SR_IDLEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: channel not in idle state (value: 0)
     *          - B_0x1: channel in idle state (value: 1)
     */
        /** @brief channel not in idle state */
    constexpr std::uint32_t GPDMA_C3SR_IDLEF_B_0x0 = 0;
        /** @brief channel in idle state */
    constexpr std::uint32_t GPDMA_C3SR_IDLEF_B_0x1 = 1;

    /** @brief transfer complete flag A transfer complete event is either a block transfer complete, or a LLI transfer complete including the upload of the next LLI if any, or the full linked-list completion, depending on the transfer complete event mode (GPDMA_CxTR2.TCEM[1:0]). */
    using GPDMA_C3SR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no transfer complete event (value: 0)
     *          - B_0x1: a transfer complete event occurred (value: 1)
     */
        /** @brief no transfer complete event */
    constexpr std::uint32_t GPDMA_C3SR_TCF_B_0x0 = 0;
        /** @brief a transfer complete event occurred */
    constexpr std::uint32_t GPDMA_C3SR_TCF_B_0x1 = 1;

    /** @brief half transfer flag A half block transfer occurs when half of the bytes of the source block size (rounded up integer of GPDMA_CxBR1.BNDT[15:0]/2) has been transferred to the destination. */
    using GPDMA_C3SR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no half transfer event (value: 0)
     *          - B_0x1: a half transfer event occurred (value: 1)
     */
        /** @brief no half transfer event */
    constexpr std::uint32_t GPDMA_C3SR_HTF_B_0x0 = 0;
        /** @brief a half transfer event occurred */
    constexpr std::uint32_t GPDMA_C3SR_HTF_B_0x1 = 1;

    /** @brief data transfer error flag */
    using GPDMA_C3SR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no data transfer error event (value: 0)
     *          - B_0x1: a master bus error event occurred on a data transfer (value: 1)
     */
        /** @brief no data transfer error event */
    constexpr std::uint32_t GPDMA_C3SR_DTEF_B_0x0 = 0;
        /** @brief a master bus error event occurred on a data transfer */
    constexpr std::uint32_t GPDMA_C3SR_DTEF_B_0x1 = 1;

    /** @brief update link transfer error flag */
    using GPDMA_C3SR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no update link transfer error event (value: 0)
     *          - B_0x1: a master bus error event occurred while updating a linked-list register from memory (value: 1)
     */
        /** @brief no update link transfer error event */
    constexpr std::uint32_t GPDMA_C3SR_ULEF_B_0x0 = 0;
        /** @brief a master bus error event occurred while updating a linked-list register from memory */
    constexpr std::uint32_t GPDMA_C3SR_ULEF_B_0x1 = 1;

    /** @brief user setting error flag */
    using GPDMA_C3SR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no user setting error event (value: 0)
     *          - B_0x1: a user setting error event occurred (value: 1)
     */
        /** @brief no user setting error event */
    constexpr std::uint32_t GPDMA_C3SR_USEF_B_0x0 = 0;
        /** @brief a user setting error event occurred */
    constexpr std::uint32_t GPDMA_C3SR_USEF_B_0x1 = 1;

    /** @brief completed suspension flag */
    using GPDMA_C3SR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no completed suspension event (value: 0)
     *          - B_0x1: a completed suspension event occurred (value: 1)
     */
        /** @brief no completed suspension event */
    constexpr std::uint32_t GPDMA_C3SR_SUSPF_B_0x0 = 0;
        /** @brief a completed suspension event occurred */
    constexpr std::uint32_t GPDMA_C3SR_SUSPF_B_0x1 = 1;

    /** @brief trigger overrun flag */
    using GPDMA_C3SR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no trigger overrun event (value: 0)
     *          - B_0x1: a trigger overrun event occurred (value: 1)
     */
        /** @brief no trigger overrun event */
    constexpr std::uint32_t GPDMA_C3SR_TOF_B_0x0 = 0;
        /** @brief a trigger overrun event occurred */
    constexpr std::uint32_t GPDMA_C3SR_TOF_B_0x1 = 1;

    /** @brief monitored FIFO level Number of available write beats in the FIFO, in units of the programmed destination data width (see GPDMA_CxTR1.DDW_LOG2[1:0], in units of bytes, half-words, or words). Note: After having suspended an active transfer, the user may need to read FIFOL[7:0], additionally to GPDMA_CxBR1.BDNT[15:0] to know how many data have been transferred to the destination. Before reading, the user may wait for the transfer to be suspended (GPDMA_CxSR.SUSPF = 1). */
    using GPDMA_C3SR_FIFOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 3 control register */
    using GPDMA_C3CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1E4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief enable Writing 1 into the field RESET (bit 1) causes the hardware to de-assert this bit, whatever is written into this bit 0. Else: this bit is deasserted by hardware when there is a transfer error (master bus error or user setting error) or when there is a channel transfer complete (channel ready to be configured, for example if LSM=1 at the end of a single execution of the LLI). Else, this bit can be asserted by software. Writing 0 into this EN bit is ignored. */
    using GPDMA_C3CR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write: ignored, read: channel disabled (value: 0)
     *          - B_0x1: write: enable channel, read: channel enabled (value: 1)
     */
        /** @brief write: ignored, read: channel disabled */
    constexpr std::uint32_t GPDMA_C3CR_EN_B_0x0 = 0;
        /** @brief write: enable channel, read: channel enabled */
    constexpr std::uint32_t GPDMA_C3CR_EN_B_0x1 = 1;

    /** @brief reset This bit is write only. Writing 0 has no impact. Writing 1 implies the reset of the following: the FIFO, the channel internal state, SUSP and EN bits (whatever is written receptively in bit 2 and bit 0). The reset is effective when the channel is in steady state, meaning one of the following: - active channel in suspended state (GPDMA_CxSR.SUSPF = 1 and GPDMA_CxSR.IDLEF = GPDMA_CxCR.EN = 1) - channel in disabled state (GPDMA_CxSR.IDLEF = 1 and GPDMA_CxCR.EN = 0). After writing a RESET, to continue using this channel, the user must explicitly reconfigure the channel including the hardware-modified configuration registers (GPDMA_CxBR1, GPDMA_CxSAR and GPDMA_CxDAR) before enabling again the channel (see the programming sequence in Figure 44). */
    using GPDMA_C3CR_RESET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no channel reset (value: 0)
     *          - B_0x1: channel reset (value: 1)
     */
        /** @brief no channel reset */
    constexpr std::uint32_t GPDMA_C3CR_RESET_B_0x0 = 0;
        /** @brief channel reset */
    constexpr std::uint32_t GPDMA_C3CR_RESET_B_0x1 = 1;

    /** @brief suspend Writing 1 into the field RESET (bit 1) causes the hardware to de-assert this bit, whatever is written into this bit 2. Else: Software must write 1 in order to suspend an active channel (channel with an ongoing GPDMA transfer over its master ports). The software must write 0 in order to resume a suspended channel, following the programming sequence detailed in Figure 43. */
    using GPDMA_C3CR_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write: resume channel, read: channel not suspended (value: 0)
     *          - B_0x1: write: suspend channel, read: channel suspended. (value: 1)
     */
        /** @brief write: resume channel, read: channel not suspended */
    constexpr std::uint32_t GPDMA_C3CR_SUSP_B_0x0 = 0;
        /** @brief write: suspend channel, read: channel suspended. */
    constexpr std::uint32_t GPDMA_C3CR_SUSP_B_0x1 = 1;

    /** @brief transfer complete interrupt enable */
    using GPDMA_C3CR_TCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C3CR_TCIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C3CR_TCIE_B_0x1 = 1;

    /** @brief half transfer complete interrupt enable */
    using GPDMA_C3CR_HTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C3CR_HTIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C3CR_HTIE_B_0x1 = 1;

    /** @brief data transfer error interrupt enable */
    using GPDMA_C3CR_DTEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C3CR_DTEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C3CR_DTEIE_B_0x1 = 1;

    /** @brief update link transfer error interrupt enable */
    using GPDMA_C3CR_ULEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C3CR_ULEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C3CR_ULEIE_B_0x1 = 1;

    /** @brief user setting error interrupt enable */
    using GPDMA_C3CR_USEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C3CR_USEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C3CR_USEIE_B_0x1 = 1;

    /** @brief completed suspension interrupt enable */
    using GPDMA_C3CR_SUSPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C3CR_SUSPIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C3CR_SUSPIE_B_0x1 = 1;

    /** @brief trigger overrun interrupt enable */
    using GPDMA_C3CR_TOIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C3CR_TOIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C3CR_TOIE_B_0x1 = 1;

    /** @brief Link step mode First the (possible 1D/repeated) block transfer is executed as defined by the current internal register file until GPDMA_CxBR1.BNDT[15:0] = 0. Secondly the next linked-list data structure is conditionally uploaded from memory as defined by GPDMA_CxLLR. Then channel execution is completed. Note: This bit must be written when EN=0. This bit is read-only when EN=1. */
    using GPDMA_C3CR_LSM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: channel executed for the full linked-list and completed at the end of the last LLI (GPDMA_CxLLR = 0). The 16 low-significant bits of the link address are null (LA[15:0] = 0) and all the update bits are null (UT1 =UB1 = UT2 = USA = UDA = ULL = 0). Then GPDMA_CxBR1.BNDT[15:0] = 0. (value: 0)
     *          - B_0x1: channel executed once for the current LLI (value: 1)
     */
        /** @brief channel executed for the full linked-list and completed at the end of the last LLI (GPDMA_CxLLR = 0). The 16 low-significant bits of the link address are null (LA[15:0] = 0) and all the update bits are null (UT1 =UB1 = UT2 = USA = UDA = ULL = 0). Then GPDMA_CxBR1.BNDT[15:0] = 0. */
    constexpr std::uint32_t GPDMA_C3CR_LSM_B_0x0 = 0;
        /** @brief channel executed once for the current LLI */
    constexpr std::uint32_t GPDMA_C3CR_LSM_B_0x1 = 1;

    /** @brief linked-list allocated port This bit is used to allocate the master port for the update of the GPDMA linked-list registers from the memory. Note: This bit must be written when EN=0. This bit is read-only when EN=1. */
    using GPDMA_C3CR_LAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C3CR_LAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C3CR_LAP_B_0x1 = 1;

    /** @brief priority level of the channel x GPDMA transfer versus others Note: This bit must be written when EN = 0. This bit is read-only when EN = 1. */
    using GPDMA_C3CR_PRIO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: low priority, low weight (value: 0)
     *          - B_0x1: low priority, mid weight (value: 1)
     *          - B_0x2: low priority, high weight (value: 2)
     *          - B_0x3: high priority (value: 3)
     */
        /** @brief low priority, low weight */
    constexpr std::uint32_t GPDMA_C3CR_PRIO_B_0x0 = 0;
        /** @brief low priority, mid weight */
    constexpr std::uint32_t GPDMA_C3CR_PRIO_B_0x1 = 1;
        /** @brief low priority, high weight */
    constexpr std::uint32_t GPDMA_C3CR_PRIO_B_0x2 = 2;
        /** @brief high priority */
    constexpr std::uint32_t GPDMA_C3CR_PRIO_B_0x3 = 3;

    /** @brief GPDMA channel 3 transfer register 1 */
    using GPDMA_C3TR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x210, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief binary logarithm of the source data width of a burst in bytes Setting a 8-byte data width causes a user setting error to be reported and no transfer is issued. A source block size must be a multiple of the source data width (GPDMA_CxBR1.BNDT[2:0] versus SDW_LOG2[1:0]). Otherwise, a user setting error is reported and no transfer is issued. Note: A source burst transfer must have an aligned address with its data width (start address GPDMA_CxSAR[2:0] versus SDW_LOG2[1:0]). Otherwise, a user setting error is reported and none transfer is issued. */
    using GPDMA_C3TR1_SDW_LOG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: byte (value: 0)
     *          - B_0x1: half-word (2 bytes) (value: 1)
     *          - B_0x2: word (4 bytes) (value: 2)
     *          - B_0x3: user setting error reported and no transfer issued (value: 3)
     */
        /** @brief byte */
    constexpr std::uint32_t GPDMA_C3TR1_SDW_LOG2_B_0x0 = 0;
        /** @brief half-word (2 bytes) */
    constexpr std::uint32_t GPDMA_C3TR1_SDW_LOG2_B_0x1 = 1;
        /** @brief word (4 bytes) */
    constexpr std::uint32_t GPDMA_C3TR1_SDW_LOG2_B_0x2 = 2;
        /** @brief user setting error reported and no transfer issued */
    constexpr std::uint32_t GPDMA_C3TR1_SDW_LOG2_B_0x3 = 3;

    /** @brief source incrementing burst The source address, pointed by GPDMA_CxSAR, is kept constant after a burst beat/single transfer or is incremented by the offset value corresponding to a contiguous data after a burst beat/single transfer. */
    using GPDMA_C3TR1_SINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fixed burst (value: 0)
     *          - B_0x1: contiguously incremented burst (value: 1)
     */
        /** @brief fixed burst */
    constexpr std::uint32_t GPDMA_C3TR1_SINC_B_0x0 = 0;
        /** @brief contiguously incremented burst */
    constexpr std::uint32_t GPDMA_C3TR1_SINC_B_0x1 = 1;

    /** @brief source burst length minus 1, between 0 and 63 The burst length unit is one data named beat within a burst. If SBL_1[5:0] =0 , the burst can be named as single. Each data/beat has a width defined by the destination data width SDW_LOG2[1:0]. Note: If a burst transfer crossed a 1-Kbyte address boundary on a AHB transfer, the GPDMA modifies and shortens the programmed burst into singles or bursts of lower length, to be compliant with the AHB protocol. Note: If a burst transfer is of length greater than the FIFO size of the channel x, the GPDMA modifies and shortens the programmed burst into singles or bursts of lower length, to be compliant with the FIFO size. Transfer performance is lower, with GPDMA re-arbitration between effective and lower singles/bursts, but the data integrity is guaranteed. */
    using GPDMA_C3TR1_SBL_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief padding/alignment mode If DDW_LOG2[1:0] = SDW_LOG2[1:0]: if the data width of a burst destination transfer is equal to the data width of a burst source transfer, these bits are ignored. Else, in the following enumerated values, the condition PAM_1 is when destination data width is higher that source data width, and the condition PAM_2 is when destination data width is higher than source data width. 1x: successive source data are FIFO queued and packed at the destination data width, in a left (LSB) to right (MSB) order (named little endian), before a destination transfer Note: 1x: source data is FIFO queued and unpacked at the destination data width, to be transferred in a left (LSB) to right (MSB) order (named little endian) to the destination */
    using GPDMA_C3TR1_PAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0_PAM_1: source data is transferred as right aligned, padded with 0s up to the destination data width (value: 0)
     *          - B_0x1_PAM_1: source data is transferred as right aligned, sign extended up to the destination data width (value: 1)
     */
        /** @brief source data is transferred as right aligned, padded with 0s up to the destination data width */
    constexpr std::uint32_t GPDMA_C3TR1_PAM_B_0x0_PAM_1 = 0;
        /** @brief source data is transferred as right aligned, sign extended up to the destination data width */
    constexpr std::uint32_t GPDMA_C3TR1_PAM_B_0x1_PAM_1 = 1;

    /** @brief source byte exchange within the unaligned half-word of each source word If the source data width is shorter than a word, this bit is ignored. If the source data width is a word: */
    using GPDMA_C3TR1_SBX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no byte-based exchange within the unaligned half-word of each source word (value: 0)
     *          - B_0x1: the two consecutive bytes within the unaligned half-word of each source word are exchanged. (value: 1)
     */
        /** @brief no byte-based exchange within the unaligned half-word of each source word */
    constexpr std::uint32_t GPDMA_C3TR1_SBX_B_0x0 = 0;
        /** @brief the two consecutive bytes within the unaligned half-word of each source word are exchanged. */
    constexpr std::uint32_t GPDMA_C3TR1_SBX_B_0x1 = 1;

    /** @brief source allocated port This bit is used to allocate the master port for the source transfer Note: This bit must be written when EN = 0. This bit is read-only when EN = 1. */
    using GPDMA_C3TR1_SAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C3TR1_SAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C3TR1_SAP_B_0x1 = 1;

    /** @brief security attribute of the GPDMA transfer from the source If GPDMA_SECCFGR.SECx = 1 and the access is secure: This is a secure register bit. This bit can only be read by a secure software. This bit must be written by a secure software when GPDMA_SECCFGR.SECx =1 . A secure write is ignored when GPDMA_SECCFGR.SECx = 0. When GPDMA_SECCFGR.SECx is deasserted, this SSEC bit is also deasserted by hardware (on a secure reconfiguration of the channel as non-secure), and the GPDMA transfer from the source is non-secure. */
    using GPDMA_C3TR1_SSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPDMA transfer non-secure (value: 0)
     *          - B_0x1: GPDMA transfer secure (value: 1)
     */
        /** @brief GPDMA transfer non-secure */
    constexpr std::uint32_t GPDMA_C3TR1_SSEC_B_0x0 = 0;
        /** @brief GPDMA transfer secure */
    constexpr std::uint32_t GPDMA_C3TR1_SSEC_B_0x1 = 1;

    /** @brief binary logarithm of the destination data width of a burst, in bytes Setting a 8-byte data width causes a user setting error to be reported and none transfer is issued. Note: A destination burst transfer must have an aligned address with its data width (start address GPDMA_CxDAR[2:0] versus DDW_LOG2[1:0]). Otherwise a user setting error is reported and no transfer is issued. */
    using GPDMA_C3TR1_DDW_LOG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: byte (value: 0)
     *          - B_0x1: half-word (2 bytes) (value: 1)
     *          - B_0x2: word (4 bytes) (value: 2)
     *          - B_0x3: user setting error reported and no transfer issued (value: 3)
     */
        /** @brief byte */
    constexpr std::uint32_t GPDMA_C3TR1_DDW_LOG2_B_0x0 = 0;
        /** @brief half-word (2 bytes) */
    constexpr std::uint32_t GPDMA_C3TR1_DDW_LOG2_B_0x1 = 1;
        /** @brief word (4 bytes) */
    constexpr std::uint32_t GPDMA_C3TR1_DDW_LOG2_B_0x2 = 2;
        /** @brief user setting error reported and no transfer issued */
    constexpr std::uint32_t GPDMA_C3TR1_DDW_LOG2_B_0x3 = 3;

    /** @brief destination incrementing burst The destination address, pointed by GPDMA_CxDAR, is kept constant after a burst beat/single transfer, or is incremented by the offset value corresponding to a contiguous data after a burst beat/single transfer. */
    using GPDMA_C3TR1_DINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fixed burst (value: 0)
     *          - B_0x1: contiguously incremented burst (value: 1)
     */
        /** @brief fixed burst */
    constexpr std::uint32_t GPDMA_C3TR1_DINC_B_0x0 = 0;
        /** @brief contiguously incremented burst */
    constexpr std::uint32_t GPDMA_C3TR1_DINC_B_0x1 = 1;

    /** @brief destination burst length minus 1, between 0 and 63 The burst length unit is one data named beat within a burst. If DBL_1[5:0] =0 , the burst can be named as single. Each data/beat has a width defined by the destination data width DDW_LOG2[1:0]. Note: If a burst transfer crossed a 1-Kbyte address boundary on a AHB transfer, the GPDMA modifies and shortens the programmed burst into singles or bursts of lower length, to be compliant with the AHB protocol. Note: If a burst transfer is of length greater than the FIFO size of the channel x, the GPDMA modifies and shortens the programmed burst into singles or bursts of lower length, to be compliant with the FIFO size. Transfer performance is lower, with GPDMA re-arbitration between effective and lower singles/bursts, but the data integrity is guaranteed. */
    using GPDMA_C3TR1_DBL_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination byte exchange If the destination data size is a byte, this bit is ignored. If the destination data size is not a byte: */
    using GPDMA_C3TR1_DBX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no byte-based exchange within half-word (value: 0)
     *          - B_0x1: the two consecutive (post PAM) bytes are exchanged in each destination half-word. (value: 1)
     */
        /** @brief no byte-based exchange within half-word */
    constexpr std::uint32_t GPDMA_C3TR1_DBX_B_0x0 = 0;
        /** @brief the two consecutive (post PAM) bytes are exchanged in each destination half-word. */
    constexpr std::uint32_t GPDMA_C3TR1_DBX_B_0x1 = 1;

    /** @brief destination half-word exchange If the destination data size is shorter than a word, this bit is ignored. If the destination data size is a word: */
    using GPDMA_C3TR1_DHX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no halfword-based exchanged within word (value: 0)
     *          - B_0x1: the two consecutive (post PAM) half-words are exchanged in each destination word. (value: 1)
     */
        /** @brief no halfword-based exchanged within word */
    constexpr std::uint32_t GPDMA_C3TR1_DHX_B_0x0 = 0;
        /** @brief the two consecutive (post PAM) half-words are exchanged in each destination word. */
    constexpr std::uint32_t GPDMA_C3TR1_DHX_B_0x1 = 1;

    /** @brief destination allocated port This bit is used to allocate the master port for the destination transfer Note: This bit must be written when EN = 0. This bit is read-only when EN = 1. */
    using GPDMA_C3TR1_DAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C3TR1_DAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C3TR1_DAP_B_0x1 = 1;

    /** @brief security attribute of the GPDMA transfer to the destination If GPDMA_SECCFGR.SECx = 1 and the access is secure: This is a secure register bit. This bit can only be read by a secure software. This bit must be written by a secure software when GPDMA_SECCFGR.SECx = 1. A secure write is ignored when GPDMA_SECCFGR.SECx = 0. When GPDMA_SECCFGR.SECx is deasserted, this DSEC bit is also deasserted by hardware (on a secure reconfiguration of the channel as non-secure), and the GPDMA transfer to the destination is non-secure. */
    using GPDMA_C3TR1_DSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPDMA transfer non-secure (value: 0)
     *          - B_0x1: GPDMA transfer secure (value: 1)
     */
        /** @brief GPDMA transfer non-secure */
    constexpr std::uint32_t GPDMA_C3TR1_DSEC_B_0x0 = 0;
        /** @brief GPDMA transfer secure */
    constexpr std::uint32_t GPDMA_C3TR1_DSEC_B_0x1 = 1;

    /** @brief GPDMA channel 3 transfer register 2 */
    using GPDMA_C3TR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x214, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA hardware request selection These bits are ignored if channel x is activated (GPDMA_CxCR.EN asserted) with SWREQ = 1 (software request for a memory-to-memory transfer). Else, the selected hardware request is internally taken into account as per Section 16.3.3. The user must not assign a same input hardware request (same REQSEL[5:0] value) to different active GPDMA channels (GPDMA_CxCR.EN = 1 and GPDMA_CxTR2.SWREQ = 0 for these channels). GPDMA is not intended to hardware support the case of simultaneous enabled channels incorrectly configured with a same hardware peripheral request signal, and there is no user setting error reporting. */
    using GPDMA_C3TR2_REQSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief software request This bit is internally taken into account when GPDMA_CxCR.EN is asserted. */
    using GPDMA_C3TR2_SWREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no software request. The selected hardware request REQSEL[5:0] is taken into account. (value: 0)
     *          - B_0x1: software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[5:0] is ignored. (value: 1)
     */
        /** @brief no software request. The selected hardware request REQSEL[5:0] is taken into account. */
    constexpr std::uint32_t GPDMA_C3TR2_SWREQ_B_0x0 = 0;
        /** @brief software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[5:0] is ignored. */
    constexpr std::uint32_t GPDMA_C3TR2_SWREQ_B_0x1 = 1;

    /** @brief destination hardware request This bit is ignored if channel x is activated (GPDMA_CxCR.EN asserted) with SWREQ = 1 (software request for a memory-to-memory transfer). Else: */
    using GPDMA_C3TR2_DREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: selected hardware request driven by a source peripheral (request signal taken into account by the GPDMA transfer scheduler over the source/read port) (value: 0)
     *          - B_0x1: selected hardware request driven by a destination peripheral (request signal taken into account by the GPDMA transfer scheduler over the destination/write port) (value: 1)
     */
        /** @brief selected hardware request driven by a source peripheral (request signal taken into account by the GPDMA transfer scheduler over the source/read port) */
    constexpr std::uint32_t GPDMA_C3TR2_DREQ_B_0x0 = 0;
        /** @brief selected hardware request driven by a destination peripheral (request signal taken into account by the GPDMA transfer scheduler over the destination/write port) */
    constexpr std::uint32_t GPDMA_C3TR2_DREQ_B_0x1 = 1;

    /** @brief Block hardware request If the channel x is activated (GPDMA_CxCR.EN asserted) with SWREQ = 1 (software request for a memory-to-memory transfer), this bit is ignored. Else: */
    using GPDMA_C3TR2_BREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a burst level. (value: 0)
     *          - B_0x1: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see Section 16.3.3). (value: 1)
     */
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a burst level. */
    constexpr std::uint32_t GPDMA_C3TR2_BREQ_B_0x0 = 0;
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see Section 16.3.3). */
    constexpr std::uint32_t GPDMA_C3TR2_BREQ_B_0x1 = 1;

    /** @brief trigger mode These bits define the transfer granularity for its conditioning by the trigger. */
    using GPDMA_C3TR2_TRIGM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: at block level: the first burst read of each block transfer is conditioned by one hit trigger . (value: 0)
     *          - B_0x1: channel x = 0 to 7, same as 0010: at link level: a LLI link transfer is conditioned by one hit trigger. The LLI data transfer (if any) is not conditioned. (value: 1)
     *          - B_0x3: at programmed burst level: If SWREQ = 1, each programmed burst read is conditioned by one hit trigger. If SWREQ = 0, each programmed burst that is requested by the selected peripheral, is conditioned by one hit trigger. (value: 3)
     */
        /** @brief at block level: the first burst read of each block transfer is conditioned by one hit trigger . */
    constexpr std::uint32_t GPDMA_C3TR2_TRIGM_B_0x0 = 0;
        /** @brief channel x = 0 to 7, same as 0010: at link level: a LLI link transfer is conditioned by one hit trigger. The LLI data transfer (if any) is not conditioned. */
    constexpr std::uint32_t GPDMA_C3TR2_TRIGM_B_0x1 = 1;
        /** @brief at programmed burst level: If SWREQ = 1, each programmed burst read is conditioned by one hit trigger. If SWREQ = 0, each programmed burst that is requested by the selected peripheral, is conditioned by one hit trigger. */
    constexpr std::uint32_t GPDMA_C3TR2_TRIGM_B_0x3 = 3;

    /** @brief trigger event input selection These bits select the trigger event input of the GPDMA transfer (as per Section 16.3.5), with an active trigger event if TRIGPOL[1:0] different 00. */
    using GPDMA_C3TR2_TRIGSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief trigger event polarity These bits define the polarity of the selected trigger event input defined by TRIGSEL[4:0]. */
    using GPDMA_C3TR2_TRIGPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no trigger (masked trigger event) (value: 0)
     *          - B_0x1: trigger on the rising edge (value: 1)
     *          - B_0x2: trigger on the falling edge (value: 2)
     *          - B_0x3: same as 00 (value: 3)
     */
        /** @brief no trigger (masked trigger event) */
    constexpr std::uint32_t GPDMA_C3TR2_TRIGPOL_B_0x0 = 0;
        /** @brief trigger on the rising edge */
    constexpr std::uint32_t GPDMA_C3TR2_TRIGPOL_B_0x1 = 1;
        /** @brief trigger on the falling edge */
    constexpr std::uint32_t GPDMA_C3TR2_TRIGPOL_B_0x2 = 2;
        /** @brief same as 00 */
    constexpr std::uint32_t GPDMA_C3TR2_TRIGPOL_B_0x3 = 3;

    /** @brief transfer complete event mode These bits define the transfer granularity for the transfer complete and half transfer complete events generation. Note: If the initial LLIsub0 /subdata transfer is null/void (directly programmed by the internal register file with GPDMA_CxBR1.BNDT[15:0] = 0), then neither the complete transfer event nor the half transfer event is generated. Note: If the initial LLIsub0 /subdata transfer is null/void (directly programmed by the internal register file with GPDMA_CxBR1.BNDT[15:0] = 0), then neither the complete transfer event nor the half transfer event is generated. Note: If the initial LLIsub0 /subdata transfer is null/void (i.e. directly programmed by the internal register file with GPDMA_CxBR1.BNDT[15:0] =0 ), then the half transfer event is not generated, and the transfer complete event is generated when is completed the loading of the LLIsub1/sub. */
    using GPDMA_C3TR2_TCEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: at block level (when GPDMA_CxBR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. (value: 0)
     *          - B_0x1: channel x (0 to 7, same as 00 (value: 1)
     *          - B_0x2: at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer. (value: 2)
     *          - B_0x3: at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address GPDMA_CxLLR.LA[15:2] to zero and clears all the GPDMA_CxLLR update bits (UT1, UT2, UB1, USA, UDA and ULL). If the channel transfer is continuous/infinite, no event is generated. (value: 3)
     */
        /** @brief at block level (when GPDMA_CxBR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. */
    constexpr std::uint32_t GPDMA_C3TR2_TCEM_B_0x0 = 0;
        /** @brief channel x (0 to 7, same as 00 */
    constexpr std::uint32_t GPDMA_C3TR2_TCEM_B_0x1 = 1;
        /** @brief at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer. */
    constexpr std::uint32_t GPDMA_C3TR2_TCEM_B_0x2 = 2;
        /** @brief at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address GPDMA_CxLLR.LA[15:2] to zero and clears all the GPDMA_CxLLR update bits (UT1, UT2, UB1, USA, UDA and ULL). If the channel transfer is continuous/infinite, no event is generated. */
    constexpr std::uint32_t GPDMA_C3TR2_TCEM_B_0x3 = 3;

    /** @brief GPDMA channel 3 block register 1 */
    using GPDMA_C3BR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x218, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief block number of data bytes to transfer from the source Block size transferred from the source. When the channel is enabled, this field becomes read-only and is decremented, indicating the remaining number of data items in the current source block to be transferred. BNDT[15:0] is programmed in number of bytes, maximum source block size is 64 Kbytes -1. Once the last data transfer is completed (BNDT[15:0] = 0): - if GPDMA_CxLLR.UB1 = 1, this field is updated by the LLI in the memory. - if GPDMA_CxLLR.UB1 = 0 and if there is at least one non null Uxx update bit, this field is internally restored to the programmed value. - if all GPDMA_CxLLR.Uxx = 0 and if GPDMA_CxLLR.LA[15:0] = 0, this field is internally restored to the programmed value (infinite/continuous last LLI). - if GPDMA_CxLLR = 0, this field is kept as zero following the last LLI data transfer. Note: A non-null source block size must be a multiple of the source data width (BNDT[2:0] versus GPDMA_CxTR1.SDW_LOG2[1:0]). Else a user setting error is reported and no transfer is issued. Note: When configured in packing mode (GPDMA_CxTR1.PAM[1] = 1 and destination data width different from source data width), a non-null source block size must be a multiple of the destination data width (BNDT[2:0] versus GPDMA_CxTR1.DDW_LOG2[1:0]). Else a user setting error is reported and no transfer is issued. */
    using GPDMA_C3BR1_BNDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 3 source address register */
    using GPDMA_C3SAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x21C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief source address This field is the pointer to the address from which the next data is read. During the channel activity, depending on the source addressing mode (GPDMA_CxTR1.SINC), this field is kept fixed or incremented by the data width (GPDMA_CxTR1.SDW_LOG2[1:0]) after each burst source data, reflecting the next address from which data is read. During the channel activity, this address is updated after each completed source burst, consequently to: the programmed source burst; either in fixed addressing mode or in contiguous-data incremented mode. If contiguously incremented (GPDMA_CxTR1.SINC = 1), then the additional address offset value is the programmed burst size, as defined by GPDMA_CxTR1.SBL_1[5:0] and GPDMA_CxTR1.SDW_LOG2[21:0] the additional source incremented/decremented offset value as programmed by GPDMA_CxBR1.SDEC In linked-list mode, after a LLI data transfer is completed, this register is automatically updated by GPDMA from the memory, provided the LLI is set with GPDMA_CxLLR.USA = 1. Note: A source address must be aligned with the programmed data width of a source burst (SA[2:0] versus GPDMA_CxTR1.SDW_LOG2[1:0]). Else, a user setting error is reported and no transfer is issued. */
    using GPDMA_C3SAR_SA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 3 destination address register */
    using GPDMA_C3DAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x220, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination address This field is the pointer to the address from which the next data is written. During the channel activity, depending on the destination addressing mode (GPDMA_CxTR1.DINC), this field is kept fixed or incremented by the data width (GPDMA_CxTR1.DDW_LOG2[21:0]) after each burst destination data, reflecting the next address from which data is written. During the channel activity, this address is updated after each completed destination burst, consequently to: the programmed destination burst; either in fixed addressing mode or in contiguous-data incremented mode. If contiguously incremented (GPDMA_CxTR1.DINC = 1), then the additional address offset value is the programmed burst size, as defined by GPDMA_CxTR1.DBL_1[5:0] and GPDMA_CxTR1.DDW_LOG2[1:0] the additional destination incremented/decremented offset value as programmed by GPDMA_CxBR1.DDEC. In linked-list mode, after a LLI data transfer is completed, this register is automatically updated by the GPDMA from the memory, provided the LLI is set with GPDMA_CxLLR.UDA = 1. Note: A destination address must be aligned with the programmed data width of a destination burst (DA[2:0] versus GPDMA_CxTR1.DDW_LOG2[1:0]). Else, a user setting error is reported and no transfer is issued. */
    using GPDMA_C3DAR_DA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 3 linked-list address register */
    using GPDMA_C3LLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pointer (16-bit low-significant address) to the next linked-list data structure If UT1 = UT2 = UB1 = USA = UDA = ULL = 0 and if LA[15:20] = 0, the current LLI is the last one. The channel transfer is completed without any update of the linked-list GPDMA register file. Else, this field is the pointer to the memory address offset from which the next linked-list data structure is automatically fetched from, once the data transfer is completed, in order to conditionally update the linked-list GPDMA internal register file (GPDMA_CxCTR1, GPDMA_CxTR2, GPDMA_CxBR1, GPDMA_CxSAR, GPDMA_CxDAR and GPDMA_CxLLR). Note: The user must program the pointer to be 32-bit aligned. The two low-significant bits are write ignored. */
    using GPDMA_C3LLR_LA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxLLR register from memory This bit is used to control the update of GPDMA_CxLLR from the memory during the link transfer. */
    using GPDMA_C3LLR_ULL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxLLR update (value: 0)
     *          - B_0x1: GPDMA_CxLLR update (value: 1)
     */
        /** @brief no GPDMA_CxLLR update */
    constexpr std::uint32_t GPDMA_C3LLR_ULL_B_0x0 = 0;
        /** @brief GPDMA_CxLLR update */
    constexpr std::uint32_t GPDMA_C3LLR_ULL_B_0x1 = 1;

    /** @brief Update GPDMA_CxDAR register from memory This bit is used to control the update of GPDMA_CxDAR from the memory during the link transfer. */
    using GPDMA_C3LLR_UDA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxDAR update (value: 0)
     *          - B_0x1: GPDMA_CxDAR update (value: 1)
     */
        /** @brief no GPDMA_CxDAR update */
    constexpr std::uint32_t GPDMA_C3LLR_UDA_B_0x0 = 0;
        /** @brief GPDMA_CxDAR update */
    constexpr std::uint32_t GPDMA_C3LLR_UDA_B_0x1 = 1;

    /** @brief update GPDMA_CxSAR from memory This bit controls the update of GPDMA_CxSAR from the memory during the link transfer. */
    using GPDMA_C3LLR_USA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxSAR update (value: 0)
     *          - B_0x1: GPDMA_CxSAR update (value: 1)
     */
        /** @brief no GPDMA_CxSAR update */
    constexpr std::uint32_t GPDMA_C3LLR_USA_B_0x0 = 0;
        /** @brief GPDMA_CxSAR update */
    constexpr std::uint32_t GPDMA_C3LLR_USA_B_0x1 = 1;

    /** @brief Update GPDMA_CxBR1 from memory This bit controls the update of GPDMA_CxBR1 from the memory during the link transfer. If UB1 = 0 and if GPDMA_CxLLR different 0, the linked-list is not completed. GPDMA_CxBR1.BNDT[15:0] is then restored to the programmed value after data transfer is completed and before the link transfer. */
    using GPDMA_C3LLR_UB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxBR1 update from memory (GPDMA_CxBR1.BNDT[15:0] restored if any link transfer) (value: 0)
     *          - B_0x1: GPDMA_CxBR1 update (value: 1)
     */
        /** @brief no GPDMA_CxBR1 update from memory (GPDMA_CxBR1.BNDT[15:0] restored if any link transfer) */
    constexpr std::uint32_t GPDMA_C3LLR_UB1_B_0x0 = 0;
        /** @brief GPDMA_CxBR1 update */
    constexpr std::uint32_t GPDMA_C3LLR_UB1_B_0x1 = 1;

    /** @brief Update GPDMA_CxTR2 from memory This bit controls the update of GPDMA_CxTR2 from the memory during the link transfer. */
    using GPDMA_C3LLR_UT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxTR2 update (value: 0)
     *          - B_0x1: GPDMA_CxTR2 update (value: 1)
     */
        /** @brief no GPDMA_CxTR2 update */
    constexpr std::uint32_t GPDMA_C3LLR_UT2_B_0x0 = 0;
        /** @brief GPDMA_CxTR2 update */
    constexpr std::uint32_t GPDMA_C3LLR_UT2_B_0x1 = 1;

    /** @brief Update GPDMA_CxTR1 from memory This bit controls the update of GPDMA_CxTR1 from the memory during the link transfer. */
    using GPDMA_C3LLR_UT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxTR1 update (value: 0)
     *          - B_0x1: GPDMA_CxTR1 update (value: 1)
     */
        /** @brief no GPDMA_CxTR1 update */
    constexpr std::uint32_t GPDMA_C3LLR_UT1_B_0x0 = 0;
        /** @brief GPDMA_CxTR1 update */
    constexpr std::uint32_t GPDMA_C3LLR_UT1_B_0x1 = 1;

    /** @brief GPDMA channel 4 linked-list base address register */
    using GPDMA_C4LBAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x250, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief linked-list base address of GPDMA channel x */
    using GPDMA_C4LBAR_LBA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 4 flag clear register */
    using GPDMA_C4FCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x25C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transfer complete flag clear */
    using GPDMA_C4FCR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding TCF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C4FCR_TCF_B_0x0 = 0;
        /** @brief corresponding TCF flag cleared */
    constexpr std::uint32_t GPDMA_C4FCR_TCF_B_0x1 = 1;

    /** @brief half transfer flag clear */
    using GPDMA_C4FCR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding HTF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C4FCR_HTF_B_0x0 = 0;
        /** @brief corresponding HTF flag cleared */
    constexpr std::uint32_t GPDMA_C4FCR_HTF_B_0x1 = 1;

    /** @brief data transfer error flag clear */
    using GPDMA_C4FCR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding DTEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C4FCR_DTEF_B_0x0 = 0;
        /** @brief corresponding DTEF flag cleared */
    constexpr std::uint32_t GPDMA_C4FCR_DTEF_B_0x1 = 1;

    /** @brief update link transfer error flag clear */
    using GPDMA_C4FCR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding ULEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C4FCR_ULEF_B_0x0 = 0;
        /** @brief corresponding ULEF flag cleared */
    constexpr std::uint32_t GPDMA_C4FCR_ULEF_B_0x1 = 1;

    /** @brief user setting error flag clear */
    using GPDMA_C4FCR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding USEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C4FCR_USEF_B_0x0 = 0;
        /** @brief corresponding USEF flag cleared */
    constexpr std::uint32_t GPDMA_C4FCR_USEF_B_0x1 = 1;

    /** @brief completed suspension flag clear */
    using GPDMA_C4FCR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding SUSPF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C4FCR_SUSPF_B_0x0 = 0;
        /** @brief corresponding SUSPF flag cleared */
    constexpr std::uint32_t GPDMA_C4FCR_SUSPF_B_0x1 = 1;

    /** @brief trigger overrun flag clear */
    using GPDMA_C4FCR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding TOF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C4FCR_TOF_B_0x0 = 0;
        /** @brief corresponding TOF flag cleared */
    constexpr std::uint32_t GPDMA_C4FCR_TOF_B_0x1 = 1;

    /** @brief GPDMA channel 4 status register */
    using GPDMA_C4SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x260, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief idle flag This idle flag is deasserted by hardware when the channel is enabled (GPDMA_CxCR.EN = 1) with a valid channel configuration (no USEF to be immediately reported). This idle flag is asserted after hard reset or by hardware when the channel is back in idle state (in suspended or disabled state). */
    using GPDMA_C4SR_IDLEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: channel not in idle state (value: 0)
     *          - B_0x1: channel in idle state (value: 1)
     */
        /** @brief channel not in idle state */
    constexpr std::uint32_t GPDMA_C4SR_IDLEF_B_0x0 = 0;
        /** @brief channel in idle state */
    constexpr std::uint32_t GPDMA_C4SR_IDLEF_B_0x1 = 1;

    /** @brief transfer complete flag A transfer complete event is either a block transfer complete, or a LLI transfer complete including the upload of the next LLI if any, or the full linked-list completion, depending on the transfer complete event mode (GPDMA_CxTR2.TCEM[1:0]). */
    using GPDMA_C4SR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no transfer complete event (value: 0)
     *          - B_0x1: a transfer complete event occurred (value: 1)
     */
        /** @brief no transfer complete event */
    constexpr std::uint32_t GPDMA_C4SR_TCF_B_0x0 = 0;
        /** @brief a transfer complete event occurred */
    constexpr std::uint32_t GPDMA_C4SR_TCF_B_0x1 = 1;

    /** @brief half transfer flag A half block transfer occurs when half of the bytes of the source block size (rounded up integer of GPDMA_CxBR1.BNDT[15:0]/2) has been transferred to the destination. */
    using GPDMA_C4SR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no half transfer event (value: 0)
     *          - B_0x1: a half transfer event occurred (value: 1)
     */
        /** @brief no half transfer event */
    constexpr std::uint32_t GPDMA_C4SR_HTF_B_0x0 = 0;
        /** @brief a half transfer event occurred */
    constexpr std::uint32_t GPDMA_C4SR_HTF_B_0x1 = 1;

    /** @brief data transfer error flag */
    using GPDMA_C4SR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no data transfer error event (value: 0)
     *          - B_0x1: a master bus error event occurred on a data transfer (value: 1)
     */
        /** @brief no data transfer error event */
    constexpr std::uint32_t GPDMA_C4SR_DTEF_B_0x0 = 0;
        /** @brief a master bus error event occurred on a data transfer */
    constexpr std::uint32_t GPDMA_C4SR_DTEF_B_0x1 = 1;

    /** @brief update link transfer error flag */
    using GPDMA_C4SR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no update link transfer error event (value: 0)
     *          - B_0x1: a master bus error event occurred while updating a linked-list register from memory (value: 1)
     */
        /** @brief no update link transfer error event */
    constexpr std::uint32_t GPDMA_C4SR_ULEF_B_0x0 = 0;
        /** @brief a master bus error event occurred while updating a linked-list register from memory */
    constexpr std::uint32_t GPDMA_C4SR_ULEF_B_0x1 = 1;

    /** @brief user setting error flag */
    using GPDMA_C4SR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no user setting error event (value: 0)
     *          - B_0x1: a user setting error event occurred (value: 1)
     */
        /** @brief no user setting error event */
    constexpr std::uint32_t GPDMA_C4SR_USEF_B_0x0 = 0;
        /** @brief a user setting error event occurred */
    constexpr std::uint32_t GPDMA_C4SR_USEF_B_0x1 = 1;

    /** @brief completed suspension flag */
    using GPDMA_C4SR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no completed suspension event (value: 0)
     *          - B_0x1: a completed suspension event occurred (value: 1)
     */
        /** @brief no completed suspension event */
    constexpr std::uint32_t GPDMA_C4SR_SUSPF_B_0x0 = 0;
        /** @brief a completed suspension event occurred */
    constexpr std::uint32_t GPDMA_C4SR_SUSPF_B_0x1 = 1;

    /** @brief trigger overrun flag */
    using GPDMA_C4SR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no trigger overrun event (value: 0)
     *          - B_0x1: a trigger overrun event occurred (value: 1)
     */
        /** @brief no trigger overrun event */
    constexpr std::uint32_t GPDMA_C4SR_TOF_B_0x0 = 0;
        /** @brief a trigger overrun event occurred */
    constexpr std::uint32_t GPDMA_C4SR_TOF_B_0x1 = 1;

    /** @brief monitored FIFO level Number of available write beats in the FIFO, in units of the programmed destination data width (see GPDMA_CxTR1.DDW_LOG2[1:0], in units of bytes, half-words, or words). Note: After having suspended an active transfer, the user may need to read FIFOL[7:0], additionally to GPDMA_CxBR1.BDNT[15:0] to know how many data have been transferred to the destination. Before reading, the user may wait for the transfer to be suspended (GPDMA_CxSR.SUSPF = 1). */
    using GPDMA_C4SR_FIFOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 4 control register */
    using GPDMA_C4CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x264, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief enable Writing 1 into the field RESET (bit 1) causes the hardware to de-assert this bit, whatever is written into this bit 0. Else: this bit is deasserted by hardware when there is a transfer error (master bus error or user setting error) or when there is a channel transfer complete (channel ready to be configured, for example if LSM=1 at the end of a single execution of the LLI). Else, this bit can be asserted by software. Writing 0 into this EN bit is ignored. */
    using GPDMA_C4CR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write: ignored, read: channel disabled (value: 0)
     *          - B_0x1: write: enable channel, read: channel enabled (value: 1)
     */
        /** @brief write: ignored, read: channel disabled */
    constexpr std::uint32_t GPDMA_C4CR_EN_B_0x0 = 0;
        /** @brief write: enable channel, read: channel enabled */
    constexpr std::uint32_t GPDMA_C4CR_EN_B_0x1 = 1;

    /** @brief reset This bit is write only. Writing 0 has no impact. Writing 1 implies the reset of the following: the FIFO, the channel internal state, SUSP and EN bits (whatever is written receptively in bit 2 and bit 0). The reset is effective when the channel is in steady state, meaning one of the following: - active channel in suspended state (GPDMA_CxSR.SUSPF = 1 and GPDMA_CxSR.IDLEF = GPDMA_CxCR.EN = 1) - channel in disabled state (GPDMA_CxSR.IDLEF = 1 and GPDMA_CxCR.EN = 0). After writing a RESET, to continue using this channel, the user must explicitly reconfigure the channel including the hardware-modified configuration registers (GPDMA_CxBR1, GPDMA_CxSAR and GPDMA_CxDAR) before enabling again the channel (see the programming sequence in Figure 44). */
    using GPDMA_C4CR_RESET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no channel reset (value: 0)
     *          - B_0x1: channel reset (value: 1)
     */
        /** @brief no channel reset */
    constexpr std::uint32_t GPDMA_C4CR_RESET_B_0x0 = 0;
        /** @brief channel reset */
    constexpr std::uint32_t GPDMA_C4CR_RESET_B_0x1 = 1;

    /** @brief suspend Writing 1 into the field RESET (bit 1) causes the hardware to de-assert this bit, whatever is written into this bit 2. Else: Software must write 1 in order to suspend an active channel (channel with an ongoing GPDMA transfer over its master ports). The software must write 0 in order to resume a suspended channel, following the programming sequence detailed in Figure 43. */
    using GPDMA_C4CR_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write: resume channel, read: channel not suspended (value: 0)
     *          - B_0x1: write: suspend channel, read: channel suspended. (value: 1)
     */
        /** @brief write: resume channel, read: channel not suspended */
    constexpr std::uint32_t GPDMA_C4CR_SUSP_B_0x0 = 0;
        /** @brief write: suspend channel, read: channel suspended. */
    constexpr std::uint32_t GPDMA_C4CR_SUSP_B_0x1 = 1;

    /** @brief transfer complete interrupt enable */
    using GPDMA_C4CR_TCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C4CR_TCIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C4CR_TCIE_B_0x1 = 1;

    /** @brief half transfer complete interrupt enable */
    using GPDMA_C4CR_HTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C4CR_HTIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C4CR_HTIE_B_0x1 = 1;

    /** @brief data transfer error interrupt enable */
    using GPDMA_C4CR_DTEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C4CR_DTEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C4CR_DTEIE_B_0x1 = 1;

    /** @brief update link transfer error interrupt enable */
    using GPDMA_C4CR_ULEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C4CR_ULEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C4CR_ULEIE_B_0x1 = 1;

    /** @brief user setting error interrupt enable */
    using GPDMA_C4CR_USEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C4CR_USEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C4CR_USEIE_B_0x1 = 1;

    /** @brief completed suspension interrupt enable */
    using GPDMA_C4CR_SUSPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C4CR_SUSPIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C4CR_SUSPIE_B_0x1 = 1;

    /** @brief trigger overrun interrupt enable */
    using GPDMA_C4CR_TOIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C4CR_TOIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C4CR_TOIE_B_0x1 = 1;

    /** @brief Link step mode First the (possible 1D/repeated) block transfer is executed as defined by the current internal register file until GPDMA_CxBR1.BNDT[15:0] = 0. Secondly the next linked-list data structure is conditionally uploaded from memory as defined by GPDMA_CxLLR. Then channel execution is completed. Note: This bit must be written when EN=0. This bit is read-only when EN=1. */
    using GPDMA_C4CR_LSM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: channel executed for the full linked-list and completed at the end of the last LLI (GPDMA_CxLLR = 0). The 16 low-significant bits of the link address are null (LA[15:0] = 0) and all the update bits are null (UT1 =UB1 = UT2 = USA = UDA = ULL = 0). Then GPDMA_CxBR1.BNDT[15:0] = 0. (value: 0)
     *          - B_0x1: channel executed once for the current LLI (value: 1)
     */
        /** @brief channel executed for the full linked-list and completed at the end of the last LLI (GPDMA_CxLLR = 0). The 16 low-significant bits of the link address are null (LA[15:0] = 0) and all the update bits are null (UT1 =UB1 = UT2 = USA = UDA = ULL = 0). Then GPDMA_CxBR1.BNDT[15:0] = 0. */
    constexpr std::uint32_t GPDMA_C4CR_LSM_B_0x0 = 0;
        /** @brief channel executed once for the current LLI */
    constexpr std::uint32_t GPDMA_C4CR_LSM_B_0x1 = 1;

    /** @brief linked-list allocated port This bit is used to allocate the master port for the update of the GPDMA linked-list registers from the memory. Note: This bit must be written when EN=0. This bit is read-only when EN=1. */
    using GPDMA_C4CR_LAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C4CR_LAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C4CR_LAP_B_0x1 = 1;

    /** @brief priority level of the channel x GPDMA transfer versus others Note: This bit must be written when EN = 0. This bit is read-only when EN = 1. */
    using GPDMA_C4CR_PRIO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: low priority, low weight (value: 0)
     *          - B_0x1: low priority, mid weight (value: 1)
     *          - B_0x2: low priority, high weight (value: 2)
     *          - B_0x3: high priority (value: 3)
     */
        /** @brief low priority, low weight */
    constexpr std::uint32_t GPDMA_C4CR_PRIO_B_0x0 = 0;
        /** @brief low priority, mid weight */
    constexpr std::uint32_t GPDMA_C4CR_PRIO_B_0x1 = 1;
        /** @brief low priority, high weight */
    constexpr std::uint32_t GPDMA_C4CR_PRIO_B_0x2 = 2;
        /** @brief high priority */
    constexpr std::uint32_t GPDMA_C4CR_PRIO_B_0x3 = 3;

    /** @brief GPDMA channel 4 transfer register 1 */
    using GPDMA_C4TR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x290, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief binary logarithm of the source data width of a burst in bytes Setting a 8-byte data width causes a user setting error to be reported and no transfer is issued. A source block size must be a multiple of the source data width (GPDMA_CxBR1.BNDT[2:0] versus SDW_LOG2[1:0]). Otherwise, a user setting error is reported and no transfer is issued. Note: A source burst transfer must have an aligned address with its data width (start address GPDMA_CxSAR[2:0] versus SDW_LOG2[1:0]). Otherwise, a user setting error is reported and none transfer is issued. */
    using GPDMA_C4TR1_SDW_LOG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: byte (value: 0)
     *          - B_0x1: half-word (2 bytes) (value: 1)
     *          - B_0x2: word (4 bytes) (value: 2)
     *          - B_0x3: user setting error reported and no transfer issued (value: 3)
     */
        /** @brief byte */
    constexpr std::uint32_t GPDMA_C4TR1_SDW_LOG2_B_0x0 = 0;
        /** @brief half-word (2 bytes) */
    constexpr std::uint32_t GPDMA_C4TR1_SDW_LOG2_B_0x1 = 1;
        /** @brief word (4 bytes) */
    constexpr std::uint32_t GPDMA_C4TR1_SDW_LOG2_B_0x2 = 2;
        /** @brief user setting error reported and no transfer issued */
    constexpr std::uint32_t GPDMA_C4TR1_SDW_LOG2_B_0x3 = 3;

    /** @brief source incrementing burst The source address, pointed by GPDMA_CxSAR, is kept constant after a burst beat/single transfer or is incremented by the offset value corresponding to a contiguous data after a burst beat/single transfer. */
    using GPDMA_C4TR1_SINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fixed burst (value: 0)
     *          - B_0x1: contiguously incremented burst (value: 1)
     */
        /** @brief fixed burst */
    constexpr std::uint32_t GPDMA_C4TR1_SINC_B_0x0 = 0;
        /** @brief contiguously incremented burst */
    constexpr std::uint32_t GPDMA_C4TR1_SINC_B_0x1 = 1;

    /** @brief source burst length minus 1, between 0 and 63 The burst length unit is one data named beat within a burst. If SBL_1[5:0] =0 , the burst can be named as single. Each data/beat has a width defined by the destination data width SDW_LOG2[1:0]. Note: If a burst transfer crossed a 1-Kbyte address boundary on a AHB transfer, the GPDMA modifies and shortens the programmed burst into singles or bursts of lower length, to be compliant with the AHB protocol. Note: If a burst transfer is of length greater than the FIFO size of the channel x, the GPDMA modifies and shortens the programmed burst into singles or bursts of lower length, to be compliant with the FIFO size. Transfer performance is lower, with GPDMA re-arbitration between effective and lower singles/bursts, but the data integrity is guaranteed. */
    using GPDMA_C4TR1_SBL_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief padding/alignment mode If DDW_LOG2[1:0] = SDW_LOG2[1:0]: if the data width of a burst destination transfer is equal to the data width of a burst source transfer, these bits are ignored. Else, in the following enumerated values, the condition PAM_1 is when destination data width is higher that source data width, and the condition PAM_2 is when destination data width is higher than source data width. 1x: successive source data are FIFO queued and packed at the destination data width, in a left (LSB) to right (MSB) order (named little endian), before a destination transfer Note: 1x: source data is FIFO queued and unpacked at the destination data width, to be transferred in a left (LSB) to right (MSB) order (named little endian) to the destination */
    using GPDMA_C4TR1_PAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0_PAM_1: source data is transferred as right aligned, padded with 0s up to the destination data width (value: 0)
     *          - B_0x1_PAM_1: source data is transferred as right aligned, sign extended up to the destination data width (value: 1)
     */
        /** @brief source data is transferred as right aligned, padded with 0s up to the destination data width */
    constexpr std::uint32_t GPDMA_C4TR1_PAM_B_0x0_PAM_1 = 0;
        /** @brief source data is transferred as right aligned, sign extended up to the destination data width */
    constexpr std::uint32_t GPDMA_C4TR1_PAM_B_0x1_PAM_1 = 1;

    /** @brief source byte exchange within the unaligned half-word of each source word If the source data width is shorter than a word, this bit is ignored. If the source data width is a word: */
    using GPDMA_C4TR1_SBX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no byte-based exchange within the unaligned half-word of each source word (value: 0)
     *          - B_0x1: the two consecutive bytes within the unaligned half-word of each source word are exchanged. (value: 1)
     */
        /** @brief no byte-based exchange within the unaligned half-word of each source word */
    constexpr std::uint32_t GPDMA_C4TR1_SBX_B_0x0 = 0;
        /** @brief the two consecutive bytes within the unaligned half-word of each source word are exchanged. */
    constexpr std::uint32_t GPDMA_C4TR1_SBX_B_0x1 = 1;

    /** @brief source allocated port This bit is used to allocate the master port for the source transfer Note: This bit must be written when EN = 0. This bit is read-only when EN = 1. */
    using GPDMA_C4TR1_SAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C4TR1_SAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C4TR1_SAP_B_0x1 = 1;

    /** @brief security attribute of the GPDMA transfer from the source If GPDMA_SECCFGR.SECx = 1 and the access is secure: This is a secure register bit. This bit can only be read by a secure software. This bit must be written by a secure software when GPDMA_SECCFGR.SECx =1 . A secure write is ignored when GPDMA_SECCFGR.SECx = 0. When GPDMA_SECCFGR.SECx is deasserted, this SSEC bit is also deasserted by hardware (on a secure reconfiguration of the channel as non-secure), and the GPDMA transfer from the source is non-secure. */
    using GPDMA_C4TR1_SSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPDMA transfer non-secure (value: 0)
     *          - B_0x1: GPDMA transfer secure (value: 1)
     */
        /** @brief GPDMA transfer non-secure */
    constexpr std::uint32_t GPDMA_C4TR1_SSEC_B_0x0 = 0;
        /** @brief GPDMA transfer secure */
    constexpr std::uint32_t GPDMA_C4TR1_SSEC_B_0x1 = 1;

    /** @brief binary logarithm of the destination data width of a burst, in bytes Setting a 8-byte data width causes a user setting error to be reported and none transfer is issued. Note: A destination burst transfer must have an aligned address with its data width (start address GPDMA_CxDAR[2:0] versus DDW_LOG2[1:0]). Otherwise a user setting error is reported and no transfer is issued. */
    using GPDMA_C4TR1_DDW_LOG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: byte (value: 0)
     *          - B_0x1: half-word (2 bytes) (value: 1)
     *          - B_0x2: word (4 bytes) (value: 2)
     *          - B_0x3: user setting error reported and no transfer issued (value: 3)
     */
        /** @brief byte */
    constexpr std::uint32_t GPDMA_C4TR1_DDW_LOG2_B_0x0 = 0;
        /** @brief half-word (2 bytes) */
    constexpr std::uint32_t GPDMA_C4TR1_DDW_LOG2_B_0x1 = 1;
        /** @brief word (4 bytes) */
    constexpr std::uint32_t GPDMA_C4TR1_DDW_LOG2_B_0x2 = 2;
        /** @brief user setting error reported and no transfer issued */
    constexpr std::uint32_t GPDMA_C4TR1_DDW_LOG2_B_0x3 = 3;

    /** @brief destination incrementing burst The destination address, pointed by GPDMA_CxDAR, is kept constant after a burst beat/single transfer, or is incremented by the offset value corresponding to a contiguous data after a burst beat/single transfer. */
    using GPDMA_C4TR1_DINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fixed burst (value: 0)
     *          - B_0x1: contiguously incremented burst (value: 1)
     */
        /** @brief fixed burst */
    constexpr std::uint32_t GPDMA_C4TR1_DINC_B_0x0 = 0;
        /** @brief contiguously incremented burst */
    constexpr std::uint32_t GPDMA_C4TR1_DINC_B_0x1 = 1;

    /** @brief destination burst length minus 1, between 0 and 63 The burst length unit is one data named beat within a burst. If DBL_1[5:0] =0 , the burst can be named as single. Each data/beat has a width defined by the destination data width DDW_LOG2[1:0]. Note: If a burst transfer crossed a 1-Kbyte address boundary on a AHB transfer, the GPDMA modifies and shortens the programmed burst into singles or bursts of lower length, to be compliant with the AHB protocol. Note: If a burst transfer is of length greater than the FIFO size of the channel x, the GPDMA modifies and shortens the programmed burst into singles or bursts of lower length, to be compliant with the FIFO size. Transfer performance is lower, with GPDMA re-arbitration between effective and lower singles/bursts, but the data integrity is guaranteed. */
    using GPDMA_C4TR1_DBL_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination byte exchange If the destination data size is a byte, this bit is ignored. If the destination data size is not a byte: */
    using GPDMA_C4TR1_DBX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no byte-based exchange within half-word (value: 0)
     *          - B_0x1: the two consecutive (post PAM) bytes are exchanged in each destination half-word. (value: 1)
     */
        /** @brief no byte-based exchange within half-word */
    constexpr std::uint32_t GPDMA_C4TR1_DBX_B_0x0 = 0;
        /** @brief the two consecutive (post PAM) bytes are exchanged in each destination half-word. */
    constexpr std::uint32_t GPDMA_C4TR1_DBX_B_0x1 = 1;

    /** @brief destination half-word exchange If the destination data size is shorter than a word, this bit is ignored. If the destination data size is a word: */
    using GPDMA_C4TR1_DHX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no halfword-based exchanged within word (value: 0)
     *          - B_0x1: the two consecutive (post PAM) half-words are exchanged in each destination word. (value: 1)
     */
        /** @brief no halfword-based exchanged within word */
    constexpr std::uint32_t GPDMA_C4TR1_DHX_B_0x0 = 0;
        /** @brief the two consecutive (post PAM) half-words are exchanged in each destination word. */
    constexpr std::uint32_t GPDMA_C4TR1_DHX_B_0x1 = 1;

    /** @brief destination allocated port This bit is used to allocate the master port for the destination transfer Note: This bit must be written when EN = 0. This bit is read-only when EN = 1. */
    using GPDMA_C4TR1_DAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C4TR1_DAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C4TR1_DAP_B_0x1 = 1;

    /** @brief security attribute of the GPDMA transfer to the destination If GPDMA_SECCFGR.SECx = 1 and the access is secure: This is a secure register bit. This bit can only be read by a secure software. This bit must be written by a secure software when GPDMA_SECCFGR.SECx = 1. A secure write is ignored when GPDMA_SECCFGR.SECx = 0. When GPDMA_SECCFGR.SECx is deasserted, this DSEC bit is also deasserted by hardware (on a secure reconfiguration of the channel as non-secure), and the GPDMA transfer to the destination is non-secure. */
    using GPDMA_C4TR1_DSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPDMA transfer non-secure (value: 0)
     *          - B_0x1: GPDMA transfer secure (value: 1)
     */
        /** @brief GPDMA transfer non-secure */
    constexpr std::uint32_t GPDMA_C4TR1_DSEC_B_0x0 = 0;
        /** @brief GPDMA transfer secure */
    constexpr std::uint32_t GPDMA_C4TR1_DSEC_B_0x1 = 1;

    /** @brief GPDMA channel 4 transfer register 2 */
    using GPDMA_C4TR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x294, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA hardware request selection These bits are ignored if channel x is activated (GPDMA_CxCR.EN asserted) with SWREQ = 1 (software request for a memory-to-memory transfer). Else, the selected hardware request is internally taken into account as per Section 16.3.3. The user must not assign a same input hardware request (same REQSEL[5:0] value) to different active GPDMA channels (GPDMA_CxCR.EN = 1 and GPDMA_CxTR2.SWREQ = 0 for these channels). GPDMA is not intended to hardware support the case of simultaneous enabled channels incorrectly configured with a same hardware peripheral request signal, and there is no user setting error reporting. */
    using GPDMA_C4TR2_REQSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief software request This bit is internally taken into account when GPDMA_CxCR.EN is asserted. */
    using GPDMA_C4TR2_SWREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no software request. The selected hardware request REQSEL[5:0] is taken into account. (value: 0)
     *          - B_0x1: software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[5:0] is ignored. (value: 1)
     */
        /** @brief no software request. The selected hardware request REQSEL[5:0] is taken into account. */
    constexpr std::uint32_t GPDMA_C4TR2_SWREQ_B_0x0 = 0;
        /** @brief software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[5:0] is ignored. */
    constexpr std::uint32_t GPDMA_C4TR2_SWREQ_B_0x1 = 1;

    /** @brief destination hardware request This bit is ignored if channel x is activated (GPDMA_CxCR.EN asserted) with SWREQ = 1 (software request for a memory-to-memory transfer). Else: */
    using GPDMA_C4TR2_DREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: selected hardware request driven by a source peripheral (request signal taken into account by the GPDMA transfer scheduler over the source/read port) (value: 0)
     *          - B_0x1: selected hardware request driven by a destination peripheral (request signal taken into account by the GPDMA transfer scheduler over the destination/write port) (value: 1)
     */
        /** @brief selected hardware request driven by a source peripheral (request signal taken into account by the GPDMA transfer scheduler over the source/read port) */
    constexpr std::uint32_t GPDMA_C4TR2_DREQ_B_0x0 = 0;
        /** @brief selected hardware request driven by a destination peripheral (request signal taken into account by the GPDMA transfer scheduler over the destination/write port) */
    constexpr std::uint32_t GPDMA_C4TR2_DREQ_B_0x1 = 1;

    /** @brief Block hardware request If the channel x is activated (GPDMA_CxCR.EN asserted) with SWREQ = 1 (software request for a memory-to-memory transfer), this bit is ignored. Else: */
    using GPDMA_C4TR2_BREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a burst level. (value: 0)
     *          - B_0x1: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see Section 16.3.3). (value: 1)
     */
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a burst level. */
    constexpr std::uint32_t GPDMA_C4TR2_BREQ_B_0x0 = 0;
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see Section 16.3.3). */
    constexpr std::uint32_t GPDMA_C4TR2_BREQ_B_0x1 = 1;

    /** @brief trigger mode These bits define the transfer granularity for its conditioning by the trigger. */
    using GPDMA_C4TR2_TRIGM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: at block level: the first burst read of each block transfer is conditioned by one hit trigger . (value: 0)
     *          - B_0x1: channel x = 0 to 7, same as 0010: at link level: a LLI link transfer is conditioned by one hit trigger. The LLI data transfer (if any) is not conditioned. (value: 1)
     *          - B_0x3: at programmed burst level: If SWREQ = 1, each programmed burst read is conditioned by one hit trigger. If SWREQ = 0, each programmed burst that is requested by the selected peripheral, is conditioned by one hit trigger. (value: 3)
     */
        /** @brief at block level: the first burst read of each block transfer is conditioned by one hit trigger . */
    constexpr std::uint32_t GPDMA_C4TR2_TRIGM_B_0x0 = 0;
        /** @brief channel x = 0 to 7, same as 0010: at link level: a LLI link transfer is conditioned by one hit trigger. The LLI data transfer (if any) is not conditioned. */
    constexpr std::uint32_t GPDMA_C4TR2_TRIGM_B_0x1 = 1;
        /** @brief at programmed burst level: If SWREQ = 1, each programmed burst read is conditioned by one hit trigger. If SWREQ = 0, each programmed burst that is requested by the selected peripheral, is conditioned by one hit trigger. */
    constexpr std::uint32_t GPDMA_C4TR2_TRIGM_B_0x3 = 3;

    /** @brief trigger event input selection These bits select the trigger event input of the GPDMA transfer (as per Section 16.3.5), with an active trigger event if TRIGPOL[1:0] different 00. */
    using GPDMA_C4TR2_TRIGSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief trigger event polarity These bits define the polarity of the selected trigger event input defined by TRIGSEL[4:0]. */
    using GPDMA_C4TR2_TRIGPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no trigger (masked trigger event) (value: 0)
     *          - B_0x1: trigger on the rising edge (value: 1)
     *          - B_0x2: trigger on the falling edge (value: 2)
     *          - B_0x3: same as 00 (value: 3)
     */
        /** @brief no trigger (masked trigger event) */
    constexpr std::uint32_t GPDMA_C4TR2_TRIGPOL_B_0x0 = 0;
        /** @brief trigger on the rising edge */
    constexpr std::uint32_t GPDMA_C4TR2_TRIGPOL_B_0x1 = 1;
        /** @brief trigger on the falling edge */
    constexpr std::uint32_t GPDMA_C4TR2_TRIGPOL_B_0x2 = 2;
        /** @brief same as 00 */
    constexpr std::uint32_t GPDMA_C4TR2_TRIGPOL_B_0x3 = 3;

    /** @brief transfer complete event mode These bits define the transfer granularity for the transfer complete and half transfer complete events generation. Note: If the initial LLIsub0 /subdata transfer is null/void (directly programmed by the internal register file with GPDMA_CxBR1.BNDT[15:0] = 0), then neither the complete transfer event nor the half transfer event is generated. Note: If the initial LLIsub0 /subdata transfer is null/void (directly programmed by the internal register file with GPDMA_CxBR1.BNDT[15:0] = 0), then neither the complete transfer event nor the half transfer event is generated. Note: If the initial LLIsub0 /subdata transfer is null/void (i.e. directly programmed by the internal register file with GPDMA_CxBR1.BNDT[15:0] =0 ), then the half transfer event is not generated, and the transfer complete event is generated when is completed the loading of the LLIsub1/sub. */
    using GPDMA_C4TR2_TCEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: at block level (when GPDMA_CxBR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. (value: 0)
     *          - B_0x1: channel x (0 to 7, same as 00 (value: 1)
     *          - B_0x2: at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer. (value: 2)
     *          - B_0x3: at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address GPDMA_CxLLR.LA[15:2] to zero and clears all the GPDMA_CxLLR update bits (UT1, UT2, UB1, USA, UDA and ULL). If the channel transfer is continuous/infinite, no event is generated. (value: 3)
     */
        /** @brief at block level (when GPDMA_CxBR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. */
    constexpr std::uint32_t GPDMA_C4TR2_TCEM_B_0x0 = 0;
        /** @brief channel x (0 to 7, same as 00 */
    constexpr std::uint32_t GPDMA_C4TR2_TCEM_B_0x1 = 1;
        /** @brief at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer. */
    constexpr std::uint32_t GPDMA_C4TR2_TCEM_B_0x2 = 2;
        /** @brief at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address GPDMA_CxLLR.LA[15:2] to zero and clears all the GPDMA_CxLLR update bits (UT1, UT2, UB1, USA, UDA and ULL). If the channel transfer is continuous/infinite, no event is generated. */
    constexpr std::uint32_t GPDMA_C4TR2_TCEM_B_0x3 = 3;

    /** @brief GPDMA channel 4 block register 1 */
    using GPDMA_C4BR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x298, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief block number of data bytes to transfer from the source Block size transferred from the source. When the channel is enabled, this field becomes read-only and is decremented, indicating the remaining number of data items in the current source block to be transferred. BNDT[15:0] is programmed in number of bytes, maximum source block size is 64 Kbytes -1. Once the last data transfer is completed (BNDT[15:0] = 0): - if GPDMA_CxLLR.UB1 = 1, this field is updated by the LLI in the memory. - if GPDMA_CxLLR.UB1 = 0 and if there is at least one non null Uxx update bit, this field is internally restored to the programmed value. - if all GPDMA_CxLLR.Uxx = 0 and if GPDMA_CxLLR.LA[15:0] = 0, this field is internally restored to the programmed value (infinite/continuous last LLI). - if GPDMA_CxLLR = 0, this field is kept as zero following the last LLI data transfer. Note: A non-null source block size must be a multiple of the source data width (BNDT[2:0] versus GPDMA_CxTR1.SDW_LOG2[1:0]). Else a user setting error is reported and no transfer is issued. Note: When configured in packing mode (GPDMA_CxTR1.PAM[1] = 1 and destination data width different from source data width), a non-null source block size must be a multiple of the destination data width (BNDT[2:0] versus GPDMA_CxTR1.DDW_LOG2[1:0]). Else a user setting error is reported and no transfer is issued. */
    using GPDMA_C4BR1_BNDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 4 source address register */
    using GPDMA_C4SAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x29C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief source address This field is the pointer to the address from which the next data is read. During the channel activity, depending on the source addressing mode (GPDMA_CxTR1.SINC), this field is kept fixed or incremented by the data width (GPDMA_CxTR1.SDW_LOG2[1:0]) after each burst source data, reflecting the next address from which data is read. During the channel activity, this address is updated after each completed source burst, consequently to: the programmed source burst; either in fixed addressing mode or in contiguous-data incremented mode. If contiguously incremented (GPDMA_CxTR1.SINC = 1), then the additional address offset value is the programmed burst size, as defined by GPDMA_CxTR1.SBL_1[5:0] and GPDMA_CxTR1.SDW_LOG2[21:0] the additional source incremented/decremented offset value as programmed by GPDMA_CxBR1.SDEC In linked-list mode, after a LLI data transfer is completed, this register is automatically updated by GPDMA from the memory, provided the LLI is set with GPDMA_CxLLR.USA = 1. Note: A source address must be aligned with the programmed data width of a source burst (SA[2:0] versus GPDMA_CxTR1.SDW_LOG2[1:0]). Else, a user setting error is reported and no transfer is issued. */
    using GPDMA_C4SAR_SA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 4 destination address register */
    using GPDMA_C4DAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination address This field is the pointer to the address from which the next data is written. During the channel activity, depending on the destination addressing mode (GPDMA_CxTR1.DINC), this field is kept fixed or incremented by the data width (GPDMA_CxTR1.DDW_LOG2[21:0]) after each burst destination data, reflecting the next address from which data is written. During the channel activity, this address is updated after each completed destination burst, consequently to: the programmed destination burst; either in fixed addressing mode or in contiguous-data incremented mode. If contiguously incremented (GPDMA_CxTR1.DINC = 1), then the additional address offset value is the programmed burst size, as defined by GPDMA_CxTR1.DBL_1[5:0] and GPDMA_CxTR1.DDW_LOG2[1:0] the additional destination incremented/decremented offset value as programmed by GPDMA_CxBR1.DDEC. In linked-list mode, after a LLI data transfer is completed, this register is automatically updated by the GPDMA from the memory, provided the LLI is set with GPDMA_CxLLR.UDA = 1. Note: A destination address must be aligned with the programmed data width of a destination burst (DA[2:0] versus GPDMA_CxTR1.DDW_LOG2[1:0]). Else, a user setting error is reported and no transfer is issued. */
    using GPDMA_C4DAR_DA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 4 linked-list address register */
    using GPDMA_C4LLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2CC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pointer (16-bit low-significant address) to the next linked-list data structure If UT1 = UT2 = UB1 = USA = UDA = ULL = 0 and if LA[15:20] = 0, the current LLI is the last one. The channel transfer is completed without any update of the linked-list GPDMA register file. Else, this field is the pointer to the memory address offset from which the next linked-list data structure is automatically fetched from, once the data transfer is completed, in order to conditionally update the linked-list GPDMA internal register file (GPDMA_CxCTR1, GPDMA_CxTR2, GPDMA_CxBR1, GPDMA_CxSAR, GPDMA_CxDAR and GPDMA_CxLLR). Note: The user must program the pointer to be 32-bit aligned. The two low-significant bits are write ignored. */
    using GPDMA_C4LLR_LA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxLLR register from memory This bit is used to control the update of GPDMA_CxLLR from the memory during the link transfer. */
    using GPDMA_C4LLR_ULL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxLLR update (value: 0)
     *          - B_0x1: GPDMA_CxLLR update (value: 1)
     */
        /** @brief no GPDMA_CxLLR update */
    constexpr std::uint32_t GPDMA_C4LLR_ULL_B_0x0 = 0;
        /** @brief GPDMA_CxLLR update */
    constexpr std::uint32_t GPDMA_C4LLR_ULL_B_0x1 = 1;

    /** @brief Update GPDMA_CxDAR register from memory This bit is used to control the update of GPDMA_CxDAR from the memory during the link transfer. */
    using GPDMA_C4LLR_UDA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxDAR update (value: 0)
     *          - B_0x1: GPDMA_CxDAR update (value: 1)
     */
        /** @brief no GPDMA_CxDAR update */
    constexpr std::uint32_t GPDMA_C4LLR_UDA_B_0x0 = 0;
        /** @brief GPDMA_CxDAR update */
    constexpr std::uint32_t GPDMA_C4LLR_UDA_B_0x1 = 1;

    /** @brief update GPDMA_CxSAR from memory This bit controls the update of GPDMA_CxSAR from the memory during the link transfer. */
    using GPDMA_C4LLR_USA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxSAR update (value: 0)
     *          - B_0x1: GPDMA_CxSAR update (value: 1)
     */
        /** @brief no GPDMA_CxSAR update */
    constexpr std::uint32_t GPDMA_C4LLR_USA_B_0x0 = 0;
        /** @brief GPDMA_CxSAR update */
    constexpr std::uint32_t GPDMA_C4LLR_USA_B_0x1 = 1;

    /** @brief Update GPDMA_CxBR1 from memory This bit controls the update of GPDMA_CxBR1 from the memory during the link transfer. If UB1 = 0 and if GPDMA_CxLLR different 0, the linked-list is not completed. GPDMA_CxBR1.BNDT[15:0] is then restored to the programmed value after data transfer is completed and before the link transfer. */
    using GPDMA_C4LLR_UB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxBR1 update from memory (GPDMA_CxBR1.BNDT[15:0] restored if any link transfer) (value: 0)
     *          - B_0x1: GPDMA_CxBR1 update (value: 1)
     */
        /** @brief no GPDMA_CxBR1 update from memory (GPDMA_CxBR1.BNDT[15:0] restored if any link transfer) */
    constexpr std::uint32_t GPDMA_C4LLR_UB1_B_0x0 = 0;
        /** @brief GPDMA_CxBR1 update */
    constexpr std::uint32_t GPDMA_C4LLR_UB1_B_0x1 = 1;

    /** @brief Update GPDMA_CxTR2 from memory This bit controls the update of GPDMA_CxTR2 from the memory during the link transfer. */
    using GPDMA_C4LLR_UT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxTR2 update (value: 0)
     *          - B_0x1: GPDMA_CxTR2 update (value: 1)
     */
        /** @brief no GPDMA_CxTR2 update */
    constexpr std::uint32_t GPDMA_C4LLR_UT2_B_0x0 = 0;
        /** @brief GPDMA_CxTR2 update */
    constexpr std::uint32_t GPDMA_C4LLR_UT2_B_0x1 = 1;

    /** @brief Update GPDMA_CxTR1 from memory This bit controls the update of GPDMA_CxTR1 from the memory during the link transfer. */
    using GPDMA_C4LLR_UT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxTR1 update (value: 0)
     *          - B_0x1: GPDMA_CxTR1 update (value: 1)
     */
        /** @brief no GPDMA_CxTR1 update */
    constexpr std::uint32_t GPDMA_C4LLR_UT1_B_0x0 = 0;
        /** @brief GPDMA_CxTR1 update */
    constexpr std::uint32_t GPDMA_C4LLR_UT1_B_0x1 = 1;

    /** @brief GPDMA channel 5 linked-list base address register */
    using GPDMA_C5LBAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2D0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief linked-list base address of GPDMA channel x */
    using GPDMA_C5LBAR_LBA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 5 flag clear register */
    using GPDMA_C5FCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2DC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transfer complete flag clear */
    using GPDMA_C5FCR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding TCF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C5FCR_TCF_B_0x0 = 0;
        /** @brief corresponding TCF flag cleared */
    constexpr std::uint32_t GPDMA_C5FCR_TCF_B_0x1 = 1;

    /** @brief half transfer flag clear */
    using GPDMA_C5FCR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding HTF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C5FCR_HTF_B_0x0 = 0;
        /** @brief corresponding HTF flag cleared */
    constexpr std::uint32_t GPDMA_C5FCR_HTF_B_0x1 = 1;

    /** @brief data transfer error flag clear */
    using GPDMA_C5FCR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding DTEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C5FCR_DTEF_B_0x0 = 0;
        /** @brief corresponding DTEF flag cleared */
    constexpr std::uint32_t GPDMA_C5FCR_DTEF_B_0x1 = 1;

    /** @brief update link transfer error flag clear */
    using GPDMA_C5FCR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding ULEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C5FCR_ULEF_B_0x0 = 0;
        /** @brief corresponding ULEF flag cleared */
    constexpr std::uint32_t GPDMA_C5FCR_ULEF_B_0x1 = 1;

    /** @brief user setting error flag clear */
    using GPDMA_C5FCR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding USEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C5FCR_USEF_B_0x0 = 0;
        /** @brief corresponding USEF flag cleared */
    constexpr std::uint32_t GPDMA_C5FCR_USEF_B_0x1 = 1;

    /** @brief completed suspension flag clear */
    using GPDMA_C5FCR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding SUSPF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C5FCR_SUSPF_B_0x0 = 0;
        /** @brief corresponding SUSPF flag cleared */
    constexpr std::uint32_t GPDMA_C5FCR_SUSPF_B_0x1 = 1;

    /** @brief trigger overrun flag clear */
    using GPDMA_C5FCR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding TOF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C5FCR_TOF_B_0x0 = 0;
        /** @brief corresponding TOF flag cleared */
    constexpr std::uint32_t GPDMA_C5FCR_TOF_B_0x1 = 1;

    /** @brief GPDMA channel 5 status register */
    using GPDMA_C5SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2E0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief idle flag This idle flag is deasserted by hardware when the channel is enabled (GPDMA_CxCR.EN = 1) with a valid channel configuration (no USEF to be immediately reported). This idle flag is asserted after hard reset or by hardware when the channel is back in idle state (in suspended or disabled state). */
    using GPDMA_C5SR_IDLEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: channel not in idle state (value: 0)
     *          - B_0x1: channel in idle state (value: 1)
     */
        /** @brief channel not in idle state */
    constexpr std::uint32_t GPDMA_C5SR_IDLEF_B_0x0 = 0;
        /** @brief channel in idle state */
    constexpr std::uint32_t GPDMA_C5SR_IDLEF_B_0x1 = 1;

    /** @brief transfer complete flag A transfer complete event is either a block transfer complete, or a LLI transfer complete including the upload of the next LLI if any, or the full linked-list completion, depending on the transfer complete event mode (GPDMA_CxTR2.TCEM[1:0]). */
    using GPDMA_C5SR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no transfer complete event (value: 0)
     *          - B_0x1: a transfer complete event occurred (value: 1)
     */
        /** @brief no transfer complete event */
    constexpr std::uint32_t GPDMA_C5SR_TCF_B_0x0 = 0;
        /** @brief a transfer complete event occurred */
    constexpr std::uint32_t GPDMA_C5SR_TCF_B_0x1 = 1;

    /** @brief half transfer flag A half block transfer occurs when half of the bytes of the source block size (rounded up integer of GPDMA_CxBR1.BNDT[15:0]/2) has been transferred to the destination. */
    using GPDMA_C5SR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no half transfer event (value: 0)
     *          - B_0x1: a half transfer event occurred (value: 1)
     */
        /** @brief no half transfer event */
    constexpr std::uint32_t GPDMA_C5SR_HTF_B_0x0 = 0;
        /** @brief a half transfer event occurred */
    constexpr std::uint32_t GPDMA_C5SR_HTF_B_0x1 = 1;

    /** @brief data transfer error flag */
    using GPDMA_C5SR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no data transfer error event (value: 0)
     *          - B_0x1: a master bus error event occurred on a data transfer (value: 1)
     */
        /** @brief no data transfer error event */
    constexpr std::uint32_t GPDMA_C5SR_DTEF_B_0x0 = 0;
        /** @brief a master bus error event occurred on a data transfer */
    constexpr std::uint32_t GPDMA_C5SR_DTEF_B_0x1 = 1;

    /** @brief update link transfer error flag */
    using GPDMA_C5SR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no update link transfer error event (value: 0)
     *          - B_0x1: a master bus error event occurred while updating a linked-list register from memory (value: 1)
     */
        /** @brief no update link transfer error event */
    constexpr std::uint32_t GPDMA_C5SR_ULEF_B_0x0 = 0;
        /** @brief a master bus error event occurred while updating a linked-list register from memory */
    constexpr std::uint32_t GPDMA_C5SR_ULEF_B_0x1 = 1;

    /** @brief user setting error flag */
    using GPDMA_C5SR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no user setting error event (value: 0)
     *          - B_0x1: a user setting error event occurred (value: 1)
     */
        /** @brief no user setting error event */
    constexpr std::uint32_t GPDMA_C5SR_USEF_B_0x0 = 0;
        /** @brief a user setting error event occurred */
    constexpr std::uint32_t GPDMA_C5SR_USEF_B_0x1 = 1;

    /** @brief completed suspension flag */
    using GPDMA_C5SR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no completed suspension event (value: 0)
     *          - B_0x1: a completed suspension event occurred (value: 1)
     */
        /** @brief no completed suspension event */
    constexpr std::uint32_t GPDMA_C5SR_SUSPF_B_0x0 = 0;
        /** @brief a completed suspension event occurred */
    constexpr std::uint32_t GPDMA_C5SR_SUSPF_B_0x1 = 1;

    /** @brief trigger overrun flag */
    using GPDMA_C5SR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no trigger overrun event (value: 0)
     *          - B_0x1: a trigger overrun event occurred (value: 1)
     */
        /** @brief no trigger overrun event */
    constexpr std::uint32_t GPDMA_C5SR_TOF_B_0x0 = 0;
        /** @brief a trigger overrun event occurred */
    constexpr std::uint32_t GPDMA_C5SR_TOF_B_0x1 = 1;

    /** @brief monitored FIFO level Number of available write beats in the FIFO, in units of the programmed destination data width (see GPDMA_CxTR1.DDW_LOG2[1:0], in units of bytes, half-words, or words). Note: After having suspended an active transfer, the user may need to read FIFOL[7:0], additionally to GPDMA_CxBR1.BDNT[15:0] to know how many data have been transferred to the destination. Before reading, the user may wait for the transfer to be suspended (GPDMA_CxSR.SUSPF = 1). */
    using GPDMA_C5SR_FIFOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 5 control register */
    using GPDMA_C5CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2E4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief enable Writing 1 into the field RESET (bit 1) causes the hardware to de-assert this bit, whatever is written into this bit 0. Else: this bit is deasserted by hardware when there is a transfer error (master bus error or user setting error) or when there is a channel transfer complete (channel ready to be configured, for example if LSM=1 at the end of a single execution of the LLI). Else, this bit can be asserted by software. Writing 0 into this EN bit is ignored. */
    using GPDMA_C5CR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write: ignored, read: channel disabled (value: 0)
     *          - B_0x1: write: enable channel, read: channel enabled (value: 1)
     */
        /** @brief write: ignored, read: channel disabled */
    constexpr std::uint32_t GPDMA_C5CR_EN_B_0x0 = 0;
        /** @brief write: enable channel, read: channel enabled */
    constexpr std::uint32_t GPDMA_C5CR_EN_B_0x1 = 1;

    /** @brief reset This bit is write only. Writing 0 has no impact. Writing 1 implies the reset of the following: the FIFO, the channel internal state, SUSP and EN bits (whatever is written receptively in bit 2 and bit 0). The reset is effective when the channel is in steady state, meaning one of the following: - active channel in suspended state (GPDMA_CxSR.SUSPF = 1 and GPDMA_CxSR.IDLEF = GPDMA_CxCR.EN = 1) - channel in disabled state (GPDMA_CxSR.IDLEF = 1 and GPDMA_CxCR.EN = 0). After writing a RESET, to continue using this channel, the user must explicitly reconfigure the channel including the hardware-modified configuration registers (GPDMA_CxBR1, GPDMA_CxSAR and GPDMA_CxDAR) before enabling again the channel (see the programming sequence in Figure 44). */
    using GPDMA_C5CR_RESET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no channel reset (value: 0)
     *          - B_0x1: channel reset (value: 1)
     */
        /** @brief no channel reset */
    constexpr std::uint32_t GPDMA_C5CR_RESET_B_0x0 = 0;
        /** @brief channel reset */
    constexpr std::uint32_t GPDMA_C5CR_RESET_B_0x1 = 1;

    /** @brief suspend Writing 1 into the field RESET (bit 1) causes the hardware to de-assert this bit, whatever is written into this bit 2. Else: Software must write 1 in order to suspend an active channel (channel with an ongoing GPDMA transfer over its master ports). The software must write 0 in order to resume a suspended channel, following the programming sequence detailed in Figure 43. */
    using GPDMA_C5CR_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write: resume channel, read: channel not suspended (value: 0)
     *          - B_0x1: write: suspend channel, read: channel suspended. (value: 1)
     */
        /** @brief write: resume channel, read: channel not suspended */
    constexpr std::uint32_t GPDMA_C5CR_SUSP_B_0x0 = 0;
        /** @brief write: suspend channel, read: channel suspended. */
    constexpr std::uint32_t GPDMA_C5CR_SUSP_B_0x1 = 1;

    /** @brief transfer complete interrupt enable */
    using GPDMA_C5CR_TCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C5CR_TCIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C5CR_TCIE_B_0x1 = 1;

    /** @brief half transfer complete interrupt enable */
    using GPDMA_C5CR_HTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C5CR_HTIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C5CR_HTIE_B_0x1 = 1;

    /** @brief data transfer error interrupt enable */
    using GPDMA_C5CR_DTEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C5CR_DTEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C5CR_DTEIE_B_0x1 = 1;

    /** @brief update link transfer error interrupt enable */
    using GPDMA_C5CR_ULEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C5CR_ULEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C5CR_ULEIE_B_0x1 = 1;

    /** @brief user setting error interrupt enable */
    using GPDMA_C5CR_USEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C5CR_USEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C5CR_USEIE_B_0x1 = 1;

    /** @brief completed suspension interrupt enable */
    using GPDMA_C5CR_SUSPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C5CR_SUSPIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C5CR_SUSPIE_B_0x1 = 1;

    /** @brief trigger overrun interrupt enable */
    using GPDMA_C5CR_TOIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C5CR_TOIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C5CR_TOIE_B_0x1 = 1;

    /** @brief Link step mode First the (possible 1D/repeated) block transfer is executed as defined by the current internal register file until GPDMA_CxBR1.BNDT[15:0] = 0. Secondly the next linked-list data structure is conditionally uploaded from memory as defined by GPDMA_CxLLR. Then channel execution is completed. Note: This bit must be written when EN=0. This bit is read-only when EN=1. */
    using GPDMA_C5CR_LSM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: channel executed for the full linked-list and completed at the end of the last LLI (GPDMA_CxLLR = 0). The 16 low-significant bits of the link address are null (LA[15:0] = 0) and all the update bits are null (UT1 =UB1 = UT2 = USA = UDA = ULL = 0). Then GPDMA_CxBR1.BNDT[15:0] = 0. (value: 0)
     *          - B_0x1: channel executed once for the current LLI (value: 1)
     */
        /** @brief channel executed for the full linked-list and completed at the end of the last LLI (GPDMA_CxLLR = 0). The 16 low-significant bits of the link address are null (LA[15:0] = 0) and all the update bits are null (UT1 =UB1 = UT2 = USA = UDA = ULL = 0). Then GPDMA_CxBR1.BNDT[15:0] = 0. */
    constexpr std::uint32_t GPDMA_C5CR_LSM_B_0x0 = 0;
        /** @brief channel executed once for the current LLI */
    constexpr std::uint32_t GPDMA_C5CR_LSM_B_0x1 = 1;

    /** @brief linked-list allocated port This bit is used to allocate the master port for the update of the GPDMA linked-list registers from the memory. Note: This bit must be written when EN=0. This bit is read-only when EN=1. */
    using GPDMA_C5CR_LAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C5CR_LAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C5CR_LAP_B_0x1 = 1;

    /** @brief priority level of the channel x GPDMA transfer versus others Note: This bit must be written when EN = 0. This bit is read-only when EN = 1. */
    using GPDMA_C5CR_PRIO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: low priority, low weight (value: 0)
     *          - B_0x1: low priority, mid weight (value: 1)
     *          - B_0x2: low priority, high weight (value: 2)
     *          - B_0x3: high priority (value: 3)
     */
        /** @brief low priority, low weight */
    constexpr std::uint32_t GPDMA_C5CR_PRIO_B_0x0 = 0;
        /** @brief low priority, mid weight */
    constexpr std::uint32_t GPDMA_C5CR_PRIO_B_0x1 = 1;
        /** @brief low priority, high weight */
    constexpr std::uint32_t GPDMA_C5CR_PRIO_B_0x2 = 2;
        /** @brief high priority */
    constexpr std::uint32_t GPDMA_C5CR_PRIO_B_0x3 = 3;

    /** @brief GPDMA channel 5 transfer register 1 */
    using GPDMA_C5TR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x310, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief binary logarithm of the source data width of a burst in bytes Setting a 8-byte data width causes a user setting error to be reported and no transfer is issued. A source block size must be a multiple of the source data width (GPDMA_CxBR1.BNDT[2:0] versus SDW_LOG2[1:0]). Otherwise, a user setting error is reported and no transfer is issued. Note: A source burst transfer must have an aligned address with its data width (start address GPDMA_CxSAR[2:0] versus SDW_LOG2[1:0]). Otherwise, a user setting error is reported and none transfer is issued. */
    using GPDMA_C5TR1_SDW_LOG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: byte (value: 0)
     *          - B_0x1: half-word (2 bytes) (value: 1)
     *          - B_0x2: word (4 bytes) (value: 2)
     *          - B_0x3: user setting error reported and no transfer issued (value: 3)
     */
        /** @brief byte */
    constexpr std::uint32_t GPDMA_C5TR1_SDW_LOG2_B_0x0 = 0;
        /** @brief half-word (2 bytes) */
    constexpr std::uint32_t GPDMA_C5TR1_SDW_LOG2_B_0x1 = 1;
        /** @brief word (4 bytes) */
    constexpr std::uint32_t GPDMA_C5TR1_SDW_LOG2_B_0x2 = 2;
        /** @brief user setting error reported and no transfer issued */
    constexpr std::uint32_t GPDMA_C5TR1_SDW_LOG2_B_0x3 = 3;

    /** @brief source incrementing burst The source address, pointed by GPDMA_CxSAR, is kept constant after a burst beat/single transfer or is incremented by the offset value corresponding to a contiguous data after a burst beat/single transfer. */
    using GPDMA_C5TR1_SINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fixed burst (value: 0)
     *          - B_0x1: contiguously incremented burst (value: 1)
     */
        /** @brief fixed burst */
    constexpr std::uint32_t GPDMA_C5TR1_SINC_B_0x0 = 0;
        /** @brief contiguously incremented burst */
    constexpr std::uint32_t GPDMA_C5TR1_SINC_B_0x1 = 1;

    /** @brief source burst length minus 1, between 0 and 63 The burst length unit is one data named beat within a burst. If SBL_1[5:0] =0 , the burst can be named as single. Each data/beat has a width defined by the destination data width SDW_LOG2[1:0]. Note: If a burst transfer crossed a 1-Kbyte address boundary on a AHB transfer, the GPDMA modifies and shortens the programmed burst into singles or bursts of lower length, to be compliant with the AHB protocol. Note: If a burst transfer is of length greater than the FIFO size of the channel x, the GPDMA modifies and shortens the programmed burst into singles or bursts of lower length, to be compliant with the FIFO size. Transfer performance is lower, with GPDMA re-arbitration between effective and lower singles/bursts, but the data integrity is guaranteed. */
    using GPDMA_C5TR1_SBL_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief padding/alignment mode If DDW_LOG2[1:0] = SDW_LOG2[1:0]: if the data width of a burst destination transfer is equal to the data width of a burst source transfer, these bits are ignored. Else, in the following enumerated values, the condition PAM_1 is when destination data width is higher that source data width, and the condition PAM_2 is when destination data width is higher than source data width. 1x: successive source data are FIFO queued and packed at the destination data width, in a left (LSB) to right (MSB) order (named little endian), before a destination transfer Note: 1x: source data is FIFO queued and unpacked at the destination data width, to be transferred in a left (LSB) to right (MSB) order (named little endian) to the destination */
    using GPDMA_C5TR1_PAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0_PAM_1: source data is transferred as right aligned, padded with 0s up to the destination data width (value: 0)
     *          - B_0x1_PAM_1: source data is transferred as right aligned, sign extended up to the destination data width (value: 1)
     */
        /** @brief source data is transferred as right aligned, padded with 0s up to the destination data width */
    constexpr std::uint32_t GPDMA_C5TR1_PAM_B_0x0_PAM_1 = 0;
        /** @brief source data is transferred as right aligned, sign extended up to the destination data width */
    constexpr std::uint32_t GPDMA_C5TR1_PAM_B_0x1_PAM_1 = 1;

    /** @brief source byte exchange within the unaligned half-word of each source word If the source data width is shorter than a word, this bit is ignored. If the source data width is a word: */
    using GPDMA_C5TR1_SBX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no byte-based exchange within the unaligned half-word of each source word (value: 0)
     *          - B_0x1: the two consecutive bytes within the unaligned half-word of each source word are exchanged. (value: 1)
     */
        /** @brief no byte-based exchange within the unaligned half-word of each source word */
    constexpr std::uint32_t GPDMA_C5TR1_SBX_B_0x0 = 0;
        /** @brief the two consecutive bytes within the unaligned half-word of each source word are exchanged. */
    constexpr std::uint32_t GPDMA_C5TR1_SBX_B_0x1 = 1;

    /** @brief source allocated port This bit is used to allocate the master port for the source transfer Note: This bit must be written when EN = 0. This bit is read-only when EN = 1. */
    using GPDMA_C5TR1_SAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C5TR1_SAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C5TR1_SAP_B_0x1 = 1;

    /** @brief security attribute of the GPDMA transfer from the source If GPDMA_SECCFGR.SECx = 1 and the access is secure: This is a secure register bit. This bit can only be read by a secure software. This bit must be written by a secure software when GPDMA_SECCFGR.SECx =1 . A secure write is ignored when GPDMA_SECCFGR.SECx = 0. When GPDMA_SECCFGR.SECx is deasserted, this SSEC bit is also deasserted by hardware (on a secure reconfiguration of the channel as non-secure), and the GPDMA transfer from the source is non-secure. */
    using GPDMA_C5TR1_SSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPDMA transfer non-secure (value: 0)
     *          - B_0x1: GPDMA transfer secure (value: 1)
     */
        /** @brief GPDMA transfer non-secure */
    constexpr std::uint32_t GPDMA_C5TR1_SSEC_B_0x0 = 0;
        /** @brief GPDMA transfer secure */
    constexpr std::uint32_t GPDMA_C5TR1_SSEC_B_0x1 = 1;

    /** @brief binary logarithm of the destination data width of a burst, in bytes Setting a 8-byte data width causes a user setting error to be reported and none transfer is issued. Note: A destination burst transfer must have an aligned address with its data width (start address GPDMA_CxDAR[2:0] versus DDW_LOG2[1:0]). Otherwise a user setting error is reported and no transfer is issued. */
    using GPDMA_C5TR1_DDW_LOG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: byte (value: 0)
     *          - B_0x1: half-word (2 bytes) (value: 1)
     *          - B_0x2: word (4 bytes) (value: 2)
     *          - B_0x3: user setting error reported and no transfer issued (value: 3)
     */
        /** @brief byte */
    constexpr std::uint32_t GPDMA_C5TR1_DDW_LOG2_B_0x0 = 0;
        /** @brief half-word (2 bytes) */
    constexpr std::uint32_t GPDMA_C5TR1_DDW_LOG2_B_0x1 = 1;
        /** @brief word (4 bytes) */
    constexpr std::uint32_t GPDMA_C5TR1_DDW_LOG2_B_0x2 = 2;
        /** @brief user setting error reported and no transfer issued */
    constexpr std::uint32_t GPDMA_C5TR1_DDW_LOG2_B_0x3 = 3;

    /** @brief destination incrementing burst The destination address, pointed by GPDMA_CxDAR, is kept constant after a burst beat/single transfer, or is incremented by the offset value corresponding to a contiguous data after a burst beat/single transfer. */
    using GPDMA_C5TR1_DINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fixed burst (value: 0)
     *          - B_0x1: contiguously incremented burst (value: 1)
     */
        /** @brief fixed burst */
    constexpr std::uint32_t GPDMA_C5TR1_DINC_B_0x0 = 0;
        /** @brief contiguously incremented burst */
    constexpr std::uint32_t GPDMA_C5TR1_DINC_B_0x1 = 1;

    /** @brief destination burst length minus 1, between 0 and 63 The burst length unit is one data named beat within a burst. If DBL_1[5:0] =0 , the burst can be named as single. Each data/beat has a width defined by the destination data width DDW_LOG2[1:0]. Note: If a burst transfer crossed a 1-Kbyte address boundary on a AHB transfer, the GPDMA modifies and shortens the programmed burst into singles or bursts of lower length, to be compliant with the AHB protocol. Note: If a burst transfer is of length greater than the FIFO size of the channel x, the GPDMA modifies and shortens the programmed burst into singles or bursts of lower length, to be compliant with the FIFO size. Transfer performance is lower, with GPDMA re-arbitration between effective and lower singles/bursts, but the data integrity is guaranteed. */
    using GPDMA_C5TR1_DBL_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination byte exchange If the destination data size is a byte, this bit is ignored. If the destination data size is not a byte: */
    using GPDMA_C5TR1_DBX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no byte-based exchange within half-word (value: 0)
     *          - B_0x1: the two consecutive (post PAM) bytes are exchanged in each destination half-word. (value: 1)
     */
        /** @brief no byte-based exchange within half-word */
    constexpr std::uint32_t GPDMA_C5TR1_DBX_B_0x0 = 0;
        /** @brief the two consecutive (post PAM) bytes are exchanged in each destination half-word. */
    constexpr std::uint32_t GPDMA_C5TR1_DBX_B_0x1 = 1;

    /** @brief destination half-word exchange If the destination data size is shorter than a word, this bit is ignored. If the destination data size is a word: */
    using GPDMA_C5TR1_DHX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no halfword-based exchanged within word (value: 0)
     *          - B_0x1: the two consecutive (post PAM) half-words are exchanged in each destination word. (value: 1)
     */
        /** @brief no halfword-based exchanged within word */
    constexpr std::uint32_t GPDMA_C5TR1_DHX_B_0x0 = 0;
        /** @brief the two consecutive (post PAM) half-words are exchanged in each destination word. */
    constexpr std::uint32_t GPDMA_C5TR1_DHX_B_0x1 = 1;

    /** @brief destination allocated port This bit is used to allocate the master port for the destination transfer Note: This bit must be written when EN = 0. This bit is read-only when EN = 1. */
    using GPDMA_C5TR1_DAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C5TR1_DAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C5TR1_DAP_B_0x1 = 1;

    /** @brief security attribute of the GPDMA transfer to the destination If GPDMA_SECCFGR.SECx = 1 and the access is secure: This is a secure register bit. This bit can only be read by a secure software. This bit must be written by a secure software when GPDMA_SECCFGR.SECx = 1. A secure write is ignored when GPDMA_SECCFGR.SECx = 0. When GPDMA_SECCFGR.SECx is deasserted, this DSEC bit is also deasserted by hardware (on a secure reconfiguration of the channel as non-secure), and the GPDMA transfer to the destination is non-secure. */
    using GPDMA_C5TR1_DSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPDMA transfer non-secure (value: 0)
     *          - B_0x1: GPDMA transfer secure (value: 1)
     */
        /** @brief GPDMA transfer non-secure */
    constexpr std::uint32_t GPDMA_C5TR1_DSEC_B_0x0 = 0;
        /** @brief GPDMA transfer secure */
    constexpr std::uint32_t GPDMA_C5TR1_DSEC_B_0x1 = 1;

    /** @brief GPDMA channel 5 transfer register 2 */
    using GPDMA_C5TR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x314, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA hardware request selection These bits are ignored if channel x is activated (GPDMA_CxCR.EN asserted) with SWREQ = 1 (software request for a memory-to-memory transfer). Else, the selected hardware request is internally taken into account as per Section 16.3.3. The user must not assign a same input hardware request (same REQSEL[5:0] value) to different active GPDMA channels (GPDMA_CxCR.EN = 1 and GPDMA_CxTR2.SWREQ = 0 for these channels). GPDMA is not intended to hardware support the case of simultaneous enabled channels incorrectly configured with a same hardware peripheral request signal, and there is no user setting error reporting. */
    using GPDMA_C5TR2_REQSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief software request This bit is internally taken into account when GPDMA_CxCR.EN is asserted. */
    using GPDMA_C5TR2_SWREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no software request. The selected hardware request REQSEL[5:0] is taken into account. (value: 0)
     *          - B_0x1: software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[5:0] is ignored. (value: 1)
     */
        /** @brief no software request. The selected hardware request REQSEL[5:0] is taken into account. */
    constexpr std::uint32_t GPDMA_C5TR2_SWREQ_B_0x0 = 0;
        /** @brief software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[5:0] is ignored. */
    constexpr std::uint32_t GPDMA_C5TR2_SWREQ_B_0x1 = 1;

    /** @brief destination hardware request This bit is ignored if channel x is activated (GPDMA_CxCR.EN asserted) with SWREQ = 1 (software request for a memory-to-memory transfer). Else: */
    using GPDMA_C5TR2_DREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: selected hardware request driven by a source peripheral (request signal taken into account by the GPDMA transfer scheduler over the source/read port) (value: 0)
     *          - B_0x1: selected hardware request driven by a destination peripheral (request signal taken into account by the GPDMA transfer scheduler over the destination/write port) (value: 1)
     */
        /** @brief selected hardware request driven by a source peripheral (request signal taken into account by the GPDMA transfer scheduler over the source/read port) */
    constexpr std::uint32_t GPDMA_C5TR2_DREQ_B_0x0 = 0;
        /** @brief selected hardware request driven by a destination peripheral (request signal taken into account by the GPDMA transfer scheduler over the destination/write port) */
    constexpr std::uint32_t GPDMA_C5TR2_DREQ_B_0x1 = 1;

    /** @brief Block hardware request If the channel x is activated (GPDMA_CxCR.EN asserted) with SWREQ = 1 (software request for a memory-to-memory transfer), this bit is ignored. Else: */
    using GPDMA_C5TR2_BREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a burst level. (value: 0)
     *          - B_0x1: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see Section 16.3.3). (value: 1)
     */
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a burst level. */
    constexpr std::uint32_t GPDMA_C5TR2_BREQ_B_0x0 = 0;
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see Section 16.3.3). */
    constexpr std::uint32_t GPDMA_C5TR2_BREQ_B_0x1 = 1;

    /** @brief trigger mode These bits define the transfer granularity for its conditioning by the trigger. */
    using GPDMA_C5TR2_TRIGM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: at block level: the first burst read of each block transfer is conditioned by one hit trigger . (value: 0)
     *          - B_0x1: channel x = 0 to 7, same as 0010: at link level: a LLI link transfer is conditioned by one hit trigger. The LLI data transfer (if any) is not conditioned. (value: 1)
     *          - B_0x3: at programmed burst level: If SWREQ = 1, each programmed burst read is conditioned by one hit trigger. If SWREQ = 0, each programmed burst that is requested by the selected peripheral, is conditioned by one hit trigger. (value: 3)
     */
        /** @brief at block level: the first burst read of each block transfer is conditioned by one hit trigger . */
    constexpr std::uint32_t GPDMA_C5TR2_TRIGM_B_0x0 = 0;
        /** @brief channel x = 0 to 7, same as 0010: at link level: a LLI link transfer is conditioned by one hit trigger. The LLI data transfer (if any) is not conditioned. */
    constexpr std::uint32_t GPDMA_C5TR2_TRIGM_B_0x1 = 1;
        /** @brief at programmed burst level: If SWREQ = 1, each programmed burst read is conditioned by one hit trigger. If SWREQ = 0, each programmed burst that is requested by the selected peripheral, is conditioned by one hit trigger. */
    constexpr std::uint32_t GPDMA_C5TR2_TRIGM_B_0x3 = 3;

    /** @brief trigger event input selection These bits select the trigger event input of the GPDMA transfer (as per Section 16.3.5), with an active trigger event if TRIGPOL[1:0] different 00. */
    using GPDMA_C5TR2_TRIGSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief trigger event polarity These bits define the polarity of the selected trigger event input defined by TRIGSEL[4:0]. */
    using GPDMA_C5TR2_TRIGPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no trigger (masked trigger event) (value: 0)
     *          - B_0x1: trigger on the rising edge (value: 1)
     *          - B_0x2: trigger on the falling edge (value: 2)
     *          - B_0x3: same as 00 (value: 3)
     */
        /** @brief no trigger (masked trigger event) */
    constexpr std::uint32_t GPDMA_C5TR2_TRIGPOL_B_0x0 = 0;
        /** @brief trigger on the rising edge */
    constexpr std::uint32_t GPDMA_C5TR2_TRIGPOL_B_0x1 = 1;
        /** @brief trigger on the falling edge */
    constexpr std::uint32_t GPDMA_C5TR2_TRIGPOL_B_0x2 = 2;
        /** @brief same as 00 */
    constexpr std::uint32_t GPDMA_C5TR2_TRIGPOL_B_0x3 = 3;

    /** @brief transfer complete event mode These bits define the transfer granularity for the transfer complete and half transfer complete events generation. Note: If the initial LLIsub0 /subdata transfer is null/void (directly programmed by the internal register file with GPDMA_CxBR1.BNDT[15:0] = 0), then neither the complete transfer event nor the half transfer event is generated. Note: If the initial LLIsub0 /subdata transfer is null/void (directly programmed by the internal register file with GPDMA_CxBR1.BNDT[15:0] = 0), then neither the complete transfer event nor the half transfer event is generated. Note: If the initial LLIsub0 /subdata transfer is null/void (i.e. directly programmed by the internal register file with GPDMA_CxBR1.BNDT[15:0] =0 ), then the half transfer event is not generated, and the transfer complete event is generated when is completed the loading of the LLIsub1/sub. */
    using GPDMA_C5TR2_TCEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: at block level (when GPDMA_CxBR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. (value: 0)
     *          - B_0x1: channel x (0 to 7, same as 00 (value: 1)
     *          - B_0x2: at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer. (value: 2)
     *          - B_0x3: at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address GPDMA_CxLLR.LA[15:2] to zero and clears all the GPDMA_CxLLR update bits (UT1, UT2, UB1, USA, UDA and ULL). If the channel transfer is continuous/infinite, no event is generated. (value: 3)
     */
        /** @brief at block level (when GPDMA_CxBR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. */
    constexpr std::uint32_t GPDMA_C5TR2_TCEM_B_0x0 = 0;
        /** @brief channel x (0 to 7, same as 00 */
    constexpr std::uint32_t GPDMA_C5TR2_TCEM_B_0x1 = 1;
        /** @brief at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer. */
    constexpr std::uint32_t GPDMA_C5TR2_TCEM_B_0x2 = 2;
        /** @brief at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address GPDMA_CxLLR.LA[15:2] to zero and clears all the GPDMA_CxLLR update bits (UT1, UT2, UB1, USA, UDA and ULL). If the channel transfer is continuous/infinite, no event is generated. */
    constexpr std::uint32_t GPDMA_C5TR2_TCEM_B_0x3 = 3;

    /** @brief GPDMA channel 5 block register 1 */
    using GPDMA_C5BR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x318, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief block number of data bytes to transfer from the source Block size transferred from the source. When the channel is enabled, this field becomes read-only and is decremented, indicating the remaining number of data items in the current source block to be transferred. BNDT[15:0] is programmed in number of bytes, maximum source block size is 64 Kbytes -1. Once the last data transfer is completed (BNDT[15:0] = 0): - if GPDMA_CxLLR.UB1 = 1, this field is updated by the LLI in the memory. - if GPDMA_CxLLR.UB1 = 0 and if there is at least one non null Uxx update bit, this field is internally restored to the programmed value. - if all GPDMA_CxLLR.Uxx = 0 and if GPDMA_CxLLR.LA[15:0] = 0, this field is internally restored to the programmed value (infinite/continuous last LLI). - if GPDMA_CxLLR = 0, this field is kept as zero following the last LLI data transfer. Note: A non-null source block size must be a multiple of the source data width (BNDT[2:0] versus GPDMA_CxTR1.SDW_LOG2[1:0]). Else a user setting error is reported and no transfer is issued. Note: When configured in packing mode (GPDMA_CxTR1.PAM[1] = 1 and destination data width different from source data width), a non-null source block size must be a multiple of the destination data width (BNDT[2:0] versus GPDMA_CxTR1.DDW_LOG2[1:0]). Else a user setting error is reported and no transfer is issued. */
    using GPDMA_C5BR1_BNDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 5 source address register */
    using GPDMA_C5SAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x31C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief source address This field is the pointer to the address from which the next data is read. During the channel activity, depending on the source addressing mode (GPDMA_CxTR1.SINC), this field is kept fixed or incremented by the data width (GPDMA_CxTR1.SDW_LOG2[1:0]) after each burst source data, reflecting the next address from which data is read. During the channel activity, this address is updated after each completed source burst, consequently to: the programmed source burst; either in fixed addressing mode or in contiguous-data incremented mode. If contiguously incremented (GPDMA_CxTR1.SINC = 1), then the additional address offset value is the programmed burst size, as defined by GPDMA_CxTR1.SBL_1[5:0] and GPDMA_CxTR1.SDW_LOG2[21:0] the additional source incremented/decremented offset value as programmed by GPDMA_CxBR1.SDEC In linked-list mode, after a LLI data transfer is completed, this register is automatically updated by GPDMA from the memory, provided the LLI is set with GPDMA_CxLLR.USA = 1. Note: A source address must be aligned with the programmed data width of a source burst (SA[2:0] versus GPDMA_CxTR1.SDW_LOG2[1:0]). Else, a user setting error is reported and no transfer is issued. */
    using GPDMA_C5SAR_SA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 5 destination address register */
    using GPDMA_C5DAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x320, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination address This field is the pointer to the address from which the next data is written. During the channel activity, depending on the destination addressing mode (GPDMA_CxTR1.DINC), this field is kept fixed or incremented by the data width (GPDMA_CxTR1.DDW_LOG2[21:0]) after each burst destination data, reflecting the next address from which data is written. During the channel activity, this address is updated after each completed destination burst, consequently to: the programmed destination burst; either in fixed addressing mode or in contiguous-data incremented mode. If contiguously incremented (GPDMA_CxTR1.DINC = 1), then the additional address offset value is the programmed burst size, as defined by GPDMA_CxTR1.DBL_1[5:0] and GPDMA_CxTR1.DDW_LOG2[1:0] the additional destination incremented/decremented offset value as programmed by GPDMA_CxBR1.DDEC. In linked-list mode, after a LLI data transfer is completed, this register is automatically updated by the GPDMA from the memory, provided the LLI is set with GPDMA_CxLLR.UDA = 1. Note: A destination address must be aligned with the programmed data width of a destination burst (DA[2:0] versus GPDMA_CxTR1.DDW_LOG2[1:0]). Else, a user setting error is reported and no transfer is issued. */
    using GPDMA_C5DAR_DA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 5 linked-list address register */
    using GPDMA_C5LLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pointer (16-bit low-significant address) to the next linked-list data structure If UT1 = UT2 = UB1 = USA = UDA = ULL = 0 and if LA[15:20] = 0, the current LLI is the last one. The channel transfer is completed without any update of the linked-list GPDMA register file. Else, this field is the pointer to the memory address offset from which the next linked-list data structure is automatically fetched from, once the data transfer is completed, in order to conditionally update the linked-list GPDMA internal register file (GPDMA_CxCTR1, GPDMA_CxTR2, GPDMA_CxBR1, GPDMA_CxSAR, GPDMA_CxDAR and GPDMA_CxLLR). Note: The user must program the pointer to be 32-bit aligned. The two low-significant bits are write ignored. */
    using GPDMA_C5LLR_LA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxLLR register from memory This bit is used to control the update of GPDMA_CxLLR from the memory during the link transfer. */
    using GPDMA_C5LLR_ULL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxLLR update (value: 0)
     *          - B_0x1: GPDMA_CxLLR update (value: 1)
     */
        /** @brief no GPDMA_CxLLR update */
    constexpr std::uint32_t GPDMA_C5LLR_ULL_B_0x0 = 0;
        /** @brief GPDMA_CxLLR update */
    constexpr std::uint32_t GPDMA_C5LLR_ULL_B_0x1 = 1;

    /** @brief Update GPDMA_CxDAR register from memory This bit is used to control the update of GPDMA_CxDAR from the memory during the link transfer. */
    using GPDMA_C5LLR_UDA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxDAR update (value: 0)
     *          - B_0x1: GPDMA_CxDAR update (value: 1)
     */
        /** @brief no GPDMA_CxDAR update */
    constexpr std::uint32_t GPDMA_C5LLR_UDA_B_0x0 = 0;
        /** @brief GPDMA_CxDAR update */
    constexpr std::uint32_t GPDMA_C5LLR_UDA_B_0x1 = 1;

    /** @brief update GPDMA_CxSAR from memory This bit controls the update of GPDMA_CxSAR from the memory during the link transfer. */
    using GPDMA_C5LLR_USA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxSAR update (value: 0)
     *          - B_0x1: GPDMA_CxSAR update (value: 1)
     */
        /** @brief no GPDMA_CxSAR update */
    constexpr std::uint32_t GPDMA_C5LLR_USA_B_0x0 = 0;
        /** @brief GPDMA_CxSAR update */
    constexpr std::uint32_t GPDMA_C5LLR_USA_B_0x1 = 1;

    /** @brief Update GPDMA_CxBR1 from memory This bit controls the update of GPDMA_CxBR1 from the memory during the link transfer. If UB1 = 0 and if GPDMA_CxLLR different 0, the linked-list is not completed. GPDMA_CxBR1.BNDT[15:0] is then restored to the programmed value after data transfer is completed and before the link transfer. */
    using GPDMA_C5LLR_UB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxBR1 update from memory (GPDMA_CxBR1.BNDT[15:0] restored if any link transfer) (value: 0)
     *          - B_0x1: GPDMA_CxBR1 update (value: 1)
     */
        /** @brief no GPDMA_CxBR1 update from memory (GPDMA_CxBR1.BNDT[15:0] restored if any link transfer) */
    constexpr std::uint32_t GPDMA_C5LLR_UB1_B_0x0 = 0;
        /** @brief GPDMA_CxBR1 update */
    constexpr std::uint32_t GPDMA_C5LLR_UB1_B_0x1 = 1;

    /** @brief Update GPDMA_CxTR2 from memory This bit controls the update of GPDMA_CxTR2 from the memory during the link transfer. */
    using GPDMA_C5LLR_UT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxTR2 update (value: 0)
     *          - B_0x1: GPDMA_CxTR2 update (value: 1)
     */
        /** @brief no GPDMA_CxTR2 update */
    constexpr std::uint32_t GPDMA_C5LLR_UT2_B_0x0 = 0;
        /** @brief GPDMA_CxTR2 update */
    constexpr std::uint32_t GPDMA_C5LLR_UT2_B_0x1 = 1;

    /** @brief Update GPDMA_CxTR1 from memory This bit controls the update of GPDMA_CxTR1 from the memory during the link transfer. */
    using GPDMA_C5LLR_UT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxTR1 update (value: 0)
     *          - B_0x1: GPDMA_CxTR1 update (value: 1)
     */
        /** @brief no GPDMA_CxTR1 update */
    constexpr std::uint32_t GPDMA_C5LLR_UT1_B_0x0 = 0;
        /** @brief GPDMA_CxTR1 update */
    constexpr std::uint32_t GPDMA_C5LLR_UT1_B_0x1 = 1;

    /** @brief GPDMA channel 6 linked-list base address register */
    using GPDMA_C6LBAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x350, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief linked-list base address of GPDMA channel x */
    using GPDMA_C6LBAR_LBA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 6 flag clear register */
    using GPDMA_C6FCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x35C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transfer complete flag clear */
    using GPDMA_C6FCR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding TCF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C6FCR_TCF_B_0x0 = 0;
        /** @brief corresponding TCF flag cleared */
    constexpr std::uint32_t GPDMA_C6FCR_TCF_B_0x1 = 1;

    /** @brief half transfer flag clear */
    using GPDMA_C6FCR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding HTF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C6FCR_HTF_B_0x0 = 0;
        /** @brief corresponding HTF flag cleared */
    constexpr std::uint32_t GPDMA_C6FCR_HTF_B_0x1 = 1;

    /** @brief data transfer error flag clear */
    using GPDMA_C6FCR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding DTEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C6FCR_DTEF_B_0x0 = 0;
        /** @brief corresponding DTEF flag cleared */
    constexpr std::uint32_t GPDMA_C6FCR_DTEF_B_0x1 = 1;

    /** @brief update link transfer error flag clear */
    using GPDMA_C6FCR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding ULEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C6FCR_ULEF_B_0x0 = 0;
        /** @brief corresponding ULEF flag cleared */
    constexpr std::uint32_t GPDMA_C6FCR_ULEF_B_0x1 = 1;

    /** @brief user setting error flag clear */
    using GPDMA_C6FCR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding USEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C6FCR_USEF_B_0x0 = 0;
        /** @brief corresponding USEF flag cleared */
    constexpr std::uint32_t GPDMA_C6FCR_USEF_B_0x1 = 1;

    /** @brief completed suspension flag clear */
    using GPDMA_C6FCR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding SUSPF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C6FCR_SUSPF_B_0x0 = 0;
        /** @brief corresponding SUSPF flag cleared */
    constexpr std::uint32_t GPDMA_C6FCR_SUSPF_B_0x1 = 1;

    /** @brief trigger overrun flag clear */
    using GPDMA_C6FCR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding TOF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C6FCR_TOF_B_0x0 = 0;
        /** @brief corresponding TOF flag cleared */
    constexpr std::uint32_t GPDMA_C6FCR_TOF_B_0x1 = 1;

    /** @brief GPDMA channel 6 status register */
    using GPDMA_C6SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x360, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief idle flag This idle flag is deasserted by hardware when the channel is enabled (GPDMA_CxCR.EN = 1) with a valid channel configuration (no USEF to be immediately reported). This idle flag is asserted after hard reset or by hardware when the channel is back in idle state (in suspended or disabled state). */
    using GPDMA_C6SR_IDLEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: channel not in idle state (value: 0)
     *          - B_0x1: channel in idle state (value: 1)
     */
        /** @brief channel not in idle state */
    constexpr std::uint32_t GPDMA_C6SR_IDLEF_B_0x0 = 0;
        /** @brief channel in idle state */
    constexpr std::uint32_t GPDMA_C6SR_IDLEF_B_0x1 = 1;

    /** @brief transfer complete flag A transfer complete event is either a block transfer complete, or a LLI transfer complete including the upload of the next LLI if any, or the full linked-list completion, depending on the transfer complete event mode (GPDMA_CxTR2.TCEM[1:0]). */
    using GPDMA_C6SR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no transfer complete event (value: 0)
     *          - B_0x1: a transfer complete event occurred (value: 1)
     */
        /** @brief no transfer complete event */
    constexpr std::uint32_t GPDMA_C6SR_TCF_B_0x0 = 0;
        /** @brief a transfer complete event occurred */
    constexpr std::uint32_t GPDMA_C6SR_TCF_B_0x1 = 1;

    /** @brief half transfer flag A half block transfer occurs when half of the bytes of the source block size (rounded up integer of GPDMA_CxBR1.BNDT[15:0]/2) has been transferred to the destination. */
    using GPDMA_C6SR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no half transfer event (value: 0)
     *          - B_0x1: a half transfer event occurred (value: 1)
     */
        /** @brief no half transfer event */
    constexpr std::uint32_t GPDMA_C6SR_HTF_B_0x0 = 0;
        /** @brief a half transfer event occurred */
    constexpr std::uint32_t GPDMA_C6SR_HTF_B_0x1 = 1;

    /** @brief data transfer error flag */
    using GPDMA_C6SR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no data transfer error event (value: 0)
     *          - B_0x1: a master bus error event occurred on a data transfer (value: 1)
     */
        /** @brief no data transfer error event */
    constexpr std::uint32_t GPDMA_C6SR_DTEF_B_0x0 = 0;
        /** @brief a master bus error event occurred on a data transfer */
    constexpr std::uint32_t GPDMA_C6SR_DTEF_B_0x1 = 1;

    /** @brief update link transfer error flag */
    using GPDMA_C6SR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no update link transfer error event (value: 0)
     *          - B_0x1: a master bus error event occurred while updating a linked-list register from memory (value: 1)
     */
        /** @brief no update link transfer error event */
    constexpr std::uint32_t GPDMA_C6SR_ULEF_B_0x0 = 0;
        /** @brief a master bus error event occurred while updating a linked-list register from memory */
    constexpr std::uint32_t GPDMA_C6SR_ULEF_B_0x1 = 1;

    /** @brief user setting error flag */
    using GPDMA_C6SR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no user setting error event (value: 0)
     *          - B_0x1: a user setting error event occurred (value: 1)
     */
        /** @brief no user setting error event */
    constexpr std::uint32_t GPDMA_C6SR_USEF_B_0x0 = 0;
        /** @brief a user setting error event occurred */
    constexpr std::uint32_t GPDMA_C6SR_USEF_B_0x1 = 1;

    /** @brief completed suspension flag */
    using GPDMA_C6SR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no completed suspension event (value: 0)
     *          - B_0x1: a completed suspension event occurred (value: 1)
     */
        /** @brief no completed suspension event */
    constexpr std::uint32_t GPDMA_C6SR_SUSPF_B_0x0 = 0;
        /** @brief a completed suspension event occurred */
    constexpr std::uint32_t GPDMA_C6SR_SUSPF_B_0x1 = 1;

    /** @brief trigger overrun flag */
    using GPDMA_C6SR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no trigger overrun event (value: 0)
     *          - B_0x1: a trigger overrun event occurred (value: 1)
     */
        /** @brief no trigger overrun event */
    constexpr std::uint32_t GPDMA_C6SR_TOF_B_0x0 = 0;
        /** @brief a trigger overrun event occurred */
    constexpr std::uint32_t GPDMA_C6SR_TOF_B_0x1 = 1;

    /** @brief monitored FIFO level Number of available write beats in the FIFO, in units of the programmed destination data width (see GPDMA_CxTR1.DDW_LOG2[1:0], in units of bytes, half-words, or words). Note: After having suspended an active transfer, the user may need to read FIFOL[7:0], additionally to GPDMA_CxBR1.BDNT[15:0] to know how many data have been transferred to the destination. Before reading, the user may wait for the transfer to be suspended (GPDMA_CxSR.SUSPF = 1). */
    using GPDMA_C6SR_FIFOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 6 control register */
    using GPDMA_C6CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x364, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief enable Writing 1 into the field RESET (bit 1) causes the hardware to de-assert this bit, whatever is written into this bit 0. Else: this bit is deasserted by hardware when there is a transfer error (master bus error or user setting error) or when there is a channel transfer complete (channel ready to be configured, for example if LSM=1 at the end of a single execution of the LLI). Else, this bit can be asserted by software. Writing 0 into this EN bit is ignored. */
    using GPDMA_C6CR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write: ignored, read: channel disabled (value: 0)
     *          - B_0x1: write: enable channel, read: channel enabled (value: 1)
     */
        /** @brief write: ignored, read: channel disabled */
    constexpr std::uint32_t GPDMA_C6CR_EN_B_0x0 = 0;
        /** @brief write: enable channel, read: channel enabled */
    constexpr std::uint32_t GPDMA_C6CR_EN_B_0x1 = 1;

    /** @brief reset This bit is write only. Writing 0 has no impact. Writing 1 implies the reset of the following: the FIFO, the channel internal state, SUSP and EN bits (whatever is written receptively in bit 2 and bit 0). The reset is effective when the channel is in steady state, meaning one of the following: - active channel in suspended state (GPDMA_CxSR.SUSPF = 1 and GPDMA_CxSR.IDLEF = GPDMA_CxCR.EN = 1) - channel in disabled state (GPDMA_CxSR.IDLEF = 1 and GPDMA_CxCR.EN = 0). After writing a RESET, to continue using this channel, the user must explicitly reconfigure the channel including the hardware-modified configuration registers (GPDMA_CxBR1, GPDMA_CxSAR and GPDMA_CxDAR) before enabling again the channel (see the programming sequence in Figure 44). */
    using GPDMA_C6CR_RESET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no channel reset (value: 0)
     *          - B_0x1: channel reset (value: 1)
     */
        /** @brief no channel reset */
    constexpr std::uint32_t GPDMA_C6CR_RESET_B_0x0 = 0;
        /** @brief channel reset */
    constexpr std::uint32_t GPDMA_C6CR_RESET_B_0x1 = 1;

    /** @brief suspend Writing 1 into the field RESET (bit 1) causes the hardware to de-assert this bit, whatever is written into this bit 2. Else: Software must write 1 in order to suspend an active channel (channel with an ongoing GPDMA transfer over its master ports). The software must write 0 in order to resume a suspended channel, following the programming sequence detailed in Figure 43. */
    using GPDMA_C6CR_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write: resume channel, read: channel not suspended (value: 0)
     *          - B_0x1: write: suspend channel, read: channel suspended. (value: 1)
     */
        /** @brief write: resume channel, read: channel not suspended */
    constexpr std::uint32_t GPDMA_C6CR_SUSP_B_0x0 = 0;
        /** @brief write: suspend channel, read: channel suspended. */
    constexpr std::uint32_t GPDMA_C6CR_SUSP_B_0x1 = 1;

    /** @brief transfer complete interrupt enable */
    using GPDMA_C6CR_TCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C6CR_TCIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C6CR_TCIE_B_0x1 = 1;

    /** @brief half transfer complete interrupt enable */
    using GPDMA_C6CR_HTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C6CR_HTIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C6CR_HTIE_B_0x1 = 1;

    /** @brief data transfer error interrupt enable */
    using GPDMA_C6CR_DTEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C6CR_DTEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C6CR_DTEIE_B_0x1 = 1;

    /** @brief update link transfer error interrupt enable */
    using GPDMA_C6CR_ULEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C6CR_ULEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C6CR_ULEIE_B_0x1 = 1;

    /** @brief user setting error interrupt enable */
    using GPDMA_C6CR_USEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C6CR_USEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C6CR_USEIE_B_0x1 = 1;

    /** @brief completed suspension interrupt enable */
    using GPDMA_C6CR_SUSPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C6CR_SUSPIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C6CR_SUSPIE_B_0x1 = 1;

    /** @brief trigger overrun interrupt enable */
    using GPDMA_C6CR_TOIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C6CR_TOIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C6CR_TOIE_B_0x1 = 1;

    /** @brief Link step mode First the (possible 1D/repeated) block transfer is executed as defined by the current internal register file until GPDMA_CxBR1.BNDT[15:0] = 0. Secondly the next linked-list data structure is conditionally uploaded from memory as defined by GPDMA_CxLLR. Then channel execution is completed. Note: This bit must be written when EN=0. This bit is read-only when EN=1. */
    using GPDMA_C6CR_LSM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: channel executed for the full linked-list and completed at the end of the last LLI (GPDMA_CxLLR = 0). The 16 low-significant bits of the link address are null (LA[15:0] = 0) and all the update bits are null (UT1 =UB1 = UT2 = USA = UDA = ULL = 0). Then GPDMA_CxBR1.BNDT[15:0] = 0. (value: 0)
     *          - B_0x1: channel executed once for the current LLI (value: 1)
     */
        /** @brief channel executed for the full linked-list and completed at the end of the last LLI (GPDMA_CxLLR = 0). The 16 low-significant bits of the link address are null (LA[15:0] = 0) and all the update bits are null (UT1 =UB1 = UT2 = USA = UDA = ULL = 0). Then GPDMA_CxBR1.BNDT[15:0] = 0. */
    constexpr std::uint32_t GPDMA_C6CR_LSM_B_0x0 = 0;
        /** @brief channel executed once for the current LLI */
    constexpr std::uint32_t GPDMA_C6CR_LSM_B_0x1 = 1;

    /** @brief linked-list allocated port This bit is used to allocate the master port for the update of the GPDMA linked-list registers from the memory. Note: This bit must be written when EN=0. This bit is read-only when EN=1. */
    using GPDMA_C6CR_LAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C6CR_LAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C6CR_LAP_B_0x1 = 1;

    /** @brief priority level of the channel x GPDMA transfer versus others Note: This bit must be written when EN = 0. This bit is read-only when EN = 1. */
    using GPDMA_C6CR_PRIO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: low priority, low weight (value: 0)
     *          - B_0x1: low priority, mid weight (value: 1)
     *          - B_0x2: low priority, high weight (value: 2)
     *          - B_0x3: high priority (value: 3)
     */
        /** @brief low priority, low weight */
    constexpr std::uint32_t GPDMA_C6CR_PRIO_B_0x0 = 0;
        /** @brief low priority, mid weight */
    constexpr std::uint32_t GPDMA_C6CR_PRIO_B_0x1 = 1;
        /** @brief low priority, high weight */
    constexpr std::uint32_t GPDMA_C6CR_PRIO_B_0x2 = 2;
        /** @brief high priority */
    constexpr std::uint32_t GPDMA_C6CR_PRIO_B_0x3 = 3;

    /** @brief GPDMA channel 6 transfer register 1 */
    using GPDMA_C6TR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x390, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief binary logarithm of the source data width of a burst in bytes Setting a 8-byte data width causes a user setting error to be reported and no transfer is issued. A source block size must be a multiple of the source data width (GPDMA_CxBR1.BNDT[2:0] versus SDW_LOG2[1:0]). Otherwise, a user setting error is reported and no transfer is issued. Note: A source burst transfer must have an aligned address with its data width (start address GPDMA_CxSAR[2:0] versus SDW_LOG2[1:0]). Otherwise, a user setting error is reported and none transfer is issued. */
    using GPDMA_C6TR1_SDW_LOG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: byte (value: 0)
     *          - B_0x1: half-word (2 bytes) (value: 1)
     *          - B_0x2: word (4 bytes) (value: 2)
     *          - B_0x3: user setting error reported and no transfer issued (value: 3)
     */
        /** @brief byte */
    constexpr std::uint32_t GPDMA_C6TR1_SDW_LOG2_B_0x0 = 0;
        /** @brief half-word (2 bytes) */
    constexpr std::uint32_t GPDMA_C6TR1_SDW_LOG2_B_0x1 = 1;
        /** @brief word (4 bytes) */
    constexpr std::uint32_t GPDMA_C6TR1_SDW_LOG2_B_0x2 = 2;
        /** @brief user setting error reported and no transfer issued */
    constexpr std::uint32_t GPDMA_C6TR1_SDW_LOG2_B_0x3 = 3;

    /** @brief source incrementing burst The source address, pointed by GPDMA_CxSAR, is kept constant after a burst beat/single transfer or is incremented by the offset value corresponding to a contiguous data after a burst beat/single transfer. */
    using GPDMA_C6TR1_SINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fixed burst (value: 0)
     *          - B_0x1: contiguously incremented burst (value: 1)
     */
        /** @brief fixed burst */
    constexpr std::uint32_t GPDMA_C6TR1_SINC_B_0x0 = 0;
        /** @brief contiguously incremented burst */
    constexpr std::uint32_t GPDMA_C6TR1_SINC_B_0x1 = 1;

    /** @brief source burst length minus 1, between 0 and 63 The burst length unit is one data named beat within a burst. If SBL_1[5:0] =0 , the burst can be named as single. Each data/beat has a width defined by the destination data width SDW_LOG2[1:0]. Note: If a burst transfer crossed a 1-Kbyte address boundary on a AHB transfer, the GPDMA modifies and shortens the programmed burst into singles or bursts of lower length, to be compliant with the AHB protocol. Note: If a burst transfer is of length greater than the FIFO size of the channel x, the GPDMA modifies and shortens the programmed burst into singles or bursts of lower length, to be compliant with the FIFO size. Transfer performance is lower, with GPDMA re-arbitration between effective and lower singles/bursts, but the data integrity is guaranteed. */
    using GPDMA_C6TR1_SBL_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief padding/alignment mode If DDW_LOG2[1:0] = SDW_LOG2[1:0]: if the data width of a burst destination transfer is equal to the data width of a burst source transfer, these bits are ignored. Else, in the following enumerated values, the condition PAM_1 is when destination data width is higher that source data width, and the condition PAM_2 is when destination data width is higher than source data width. 1x: successive source data are FIFO queued and packed at the destination data width, in a left (LSB) to right (MSB) order (named little endian), before a destination transfer Note: 1x: source data is FIFO queued and unpacked at the destination data width, to be transferred in a left (LSB) to right (MSB) order (named little endian) to the destination */
    using GPDMA_C6TR1_PAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0_PAM_1: source data is transferred as right aligned, padded with 0s up to the destination data width (value: 0)
     *          - B_0x1_PAM_1: source data is transferred as right aligned, sign extended up to the destination data width (value: 1)
     */
        /** @brief source data is transferred as right aligned, padded with 0s up to the destination data width */
    constexpr std::uint32_t GPDMA_C6TR1_PAM_B_0x0_PAM_1 = 0;
        /** @brief source data is transferred as right aligned, sign extended up to the destination data width */
    constexpr std::uint32_t GPDMA_C6TR1_PAM_B_0x1_PAM_1 = 1;

    /** @brief source byte exchange within the unaligned half-word of each source word If the source data width is shorter than a word, this bit is ignored. If the source data width is a word: */
    using GPDMA_C6TR1_SBX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no byte-based exchange within the unaligned half-word of each source word (value: 0)
     *          - B_0x1: the two consecutive bytes within the unaligned half-word of each source word are exchanged. (value: 1)
     */
        /** @brief no byte-based exchange within the unaligned half-word of each source word */
    constexpr std::uint32_t GPDMA_C6TR1_SBX_B_0x0 = 0;
        /** @brief the two consecutive bytes within the unaligned half-word of each source word are exchanged. */
    constexpr std::uint32_t GPDMA_C6TR1_SBX_B_0x1 = 1;

    /** @brief source allocated port This bit is used to allocate the master port for the source transfer Note: This bit must be written when EN = 0. This bit is read-only when EN = 1. */
    using GPDMA_C6TR1_SAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C6TR1_SAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C6TR1_SAP_B_0x1 = 1;

    /** @brief security attribute of the GPDMA transfer from the source If GPDMA_SECCFGR.SECx = 1 and the access is secure: This is a secure register bit. This bit can only be read by a secure software. This bit must be written by a secure software when GPDMA_SECCFGR.SECx =1 . A secure write is ignored when GPDMA_SECCFGR.SECx = 0. When GPDMA_SECCFGR.SECx is deasserted, this SSEC bit is also deasserted by hardware (on a secure reconfiguration of the channel as non-secure), and the GPDMA transfer from the source is non-secure. */
    using GPDMA_C6TR1_SSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPDMA transfer non-secure (value: 0)
     *          - B_0x1: GPDMA transfer secure (value: 1)
     */
        /** @brief GPDMA transfer non-secure */
    constexpr std::uint32_t GPDMA_C6TR1_SSEC_B_0x0 = 0;
        /** @brief GPDMA transfer secure */
    constexpr std::uint32_t GPDMA_C6TR1_SSEC_B_0x1 = 1;

    /** @brief binary logarithm of the destination data width of a burst, in bytes Setting a 8-byte data width causes a user setting error to be reported and none transfer is issued. Note: A destination burst transfer must have an aligned address with its data width (start address GPDMA_CxDAR[2:0] versus DDW_LOG2[1:0]). Otherwise a user setting error is reported and no transfer is issued. */
    using GPDMA_C6TR1_DDW_LOG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: byte (value: 0)
     *          - B_0x1: half-word (2 bytes) (value: 1)
     *          - B_0x2: word (4 bytes) (value: 2)
     *          - B_0x3: user setting error reported and no transfer issued (value: 3)
     */
        /** @brief byte */
    constexpr std::uint32_t GPDMA_C6TR1_DDW_LOG2_B_0x0 = 0;
        /** @brief half-word (2 bytes) */
    constexpr std::uint32_t GPDMA_C6TR1_DDW_LOG2_B_0x1 = 1;
        /** @brief word (4 bytes) */
    constexpr std::uint32_t GPDMA_C6TR1_DDW_LOG2_B_0x2 = 2;
        /** @brief user setting error reported and no transfer issued */
    constexpr std::uint32_t GPDMA_C6TR1_DDW_LOG2_B_0x3 = 3;

    /** @brief destination incrementing burst The destination address, pointed by GPDMA_CxDAR, is kept constant after a burst beat/single transfer, or is incremented by the offset value corresponding to a contiguous data after a burst beat/single transfer. */
    using GPDMA_C6TR1_DINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fixed burst (value: 0)
     *          - B_0x1: contiguously incremented burst (value: 1)
     */
        /** @brief fixed burst */
    constexpr std::uint32_t GPDMA_C6TR1_DINC_B_0x0 = 0;
        /** @brief contiguously incremented burst */
    constexpr std::uint32_t GPDMA_C6TR1_DINC_B_0x1 = 1;

    /** @brief destination burst length minus 1, between 0 and 63 The burst length unit is one data named beat within a burst. If DBL_1[5:0] =0 , the burst can be named as single. Each data/beat has a width defined by the destination data width DDW_LOG2[1:0]. Note: If a burst transfer crossed a 1-Kbyte address boundary on a AHB transfer, the GPDMA modifies and shortens the programmed burst into singles or bursts of lower length, to be compliant with the AHB protocol. Note: If a burst transfer is of length greater than the FIFO size of the channel x, the GPDMA modifies and shortens the programmed burst into singles or bursts of lower length, to be compliant with the FIFO size. Transfer performance is lower, with GPDMA re-arbitration between effective and lower singles/bursts, but the data integrity is guaranteed. */
    using GPDMA_C6TR1_DBL_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination byte exchange If the destination data size is a byte, this bit is ignored. If the destination data size is not a byte: */
    using GPDMA_C6TR1_DBX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no byte-based exchange within half-word (value: 0)
     *          - B_0x1: the two consecutive (post PAM) bytes are exchanged in each destination half-word. (value: 1)
     */
        /** @brief no byte-based exchange within half-word */
    constexpr std::uint32_t GPDMA_C6TR1_DBX_B_0x0 = 0;
        /** @brief the two consecutive (post PAM) bytes are exchanged in each destination half-word. */
    constexpr std::uint32_t GPDMA_C6TR1_DBX_B_0x1 = 1;

    /** @brief destination half-word exchange If the destination data size is shorter than a word, this bit is ignored. If the destination data size is a word: */
    using GPDMA_C6TR1_DHX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no halfword-based exchanged within word (value: 0)
     *          - B_0x1: the two consecutive (post PAM) half-words are exchanged in each destination word. (value: 1)
     */
        /** @brief no halfword-based exchanged within word */
    constexpr std::uint32_t GPDMA_C6TR1_DHX_B_0x0 = 0;
        /** @brief the two consecutive (post PAM) half-words are exchanged in each destination word. */
    constexpr std::uint32_t GPDMA_C6TR1_DHX_B_0x1 = 1;

    /** @brief destination allocated port This bit is used to allocate the master port for the destination transfer Note: This bit must be written when EN = 0. This bit is read-only when EN = 1. */
    using GPDMA_C6TR1_DAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C6TR1_DAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C6TR1_DAP_B_0x1 = 1;

    /** @brief security attribute of the GPDMA transfer to the destination If GPDMA_SECCFGR.SECx = 1 and the access is secure: This is a secure register bit. This bit can only be read by a secure software. This bit must be written by a secure software when GPDMA_SECCFGR.SECx = 1. A secure write is ignored when GPDMA_SECCFGR.SECx = 0. When GPDMA_SECCFGR.SECx is deasserted, this DSEC bit is also deasserted by hardware (on a secure reconfiguration of the channel as non-secure), and the GPDMA transfer to the destination is non-secure. */
    using GPDMA_C6TR1_DSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPDMA transfer non-secure (value: 0)
     *          - B_0x1: GPDMA transfer secure (value: 1)
     */
        /** @brief GPDMA transfer non-secure */
    constexpr std::uint32_t GPDMA_C6TR1_DSEC_B_0x0 = 0;
        /** @brief GPDMA transfer secure */
    constexpr std::uint32_t GPDMA_C6TR1_DSEC_B_0x1 = 1;

    /** @brief GPDMA channel 6 transfer register 2 */
    using GPDMA_C6TR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x394, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA hardware request selection These bits are ignored if channel x is activated (GPDMA_CxCR.EN asserted) with SWREQ = 1 (software request for a memory-to-memory transfer). Else, the selected hardware request is internally taken into account as per Section 16.3.3. The user must not assign a same input hardware request (same REQSEL[5:0] value) to different active GPDMA channels (GPDMA_CxCR.EN = 1 and GPDMA_CxTR2.SWREQ = 0 for these channels). GPDMA is not intended to hardware support the case of simultaneous enabled channels incorrectly configured with a same hardware peripheral request signal, and there is no user setting error reporting. */
    using GPDMA_C6TR2_REQSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief software request This bit is internally taken into account when GPDMA_CxCR.EN is asserted. */
    using GPDMA_C6TR2_SWREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no software request. The selected hardware request REQSEL[5:0] is taken into account. (value: 0)
     *          - B_0x1: software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[5:0] is ignored. (value: 1)
     */
        /** @brief no software request. The selected hardware request REQSEL[5:0] is taken into account. */
    constexpr std::uint32_t GPDMA_C6TR2_SWREQ_B_0x0 = 0;
        /** @brief software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[5:0] is ignored. */
    constexpr std::uint32_t GPDMA_C6TR2_SWREQ_B_0x1 = 1;

    /** @brief destination hardware request This bit is ignored if channel x is activated (GPDMA_CxCR.EN asserted) with SWREQ = 1 (software request for a memory-to-memory transfer). Else: */
    using GPDMA_C6TR2_DREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: selected hardware request driven by a source peripheral (request signal taken into account by the GPDMA transfer scheduler over the source/read port) (value: 0)
     *          - B_0x1: selected hardware request driven by a destination peripheral (request signal taken into account by the GPDMA transfer scheduler over the destination/write port) (value: 1)
     */
        /** @brief selected hardware request driven by a source peripheral (request signal taken into account by the GPDMA transfer scheduler over the source/read port) */
    constexpr std::uint32_t GPDMA_C6TR2_DREQ_B_0x0 = 0;
        /** @brief selected hardware request driven by a destination peripheral (request signal taken into account by the GPDMA transfer scheduler over the destination/write port) */
    constexpr std::uint32_t GPDMA_C6TR2_DREQ_B_0x1 = 1;

    /** @brief Block hardware request If the channel x is activated (GPDMA_CxCR.EN asserted) with SWREQ = 1 (software request for a memory-to-memory transfer), this bit is ignored. Else: */
    using GPDMA_C6TR2_BREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a burst level. (value: 0)
     *          - B_0x1: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see Section 16.3.3). (value: 1)
     */
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a burst level. */
    constexpr std::uint32_t GPDMA_C6TR2_BREQ_B_0x0 = 0;
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see Section 16.3.3). */
    constexpr std::uint32_t GPDMA_C6TR2_BREQ_B_0x1 = 1;

    /** @brief trigger mode These bits define the transfer granularity for its conditioning by the trigger. */
    using GPDMA_C6TR2_TRIGM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: at block level: the first burst read of each block transfer is conditioned by one hit trigger . (value: 0)
     *          - B_0x1: channel x = 0 to 7, same as 0010: at link level: a LLI link transfer is conditioned by one hit trigger. The LLI data transfer (if any) is not conditioned. (value: 1)
     *          - B_0x3: at programmed burst level: If SWREQ = 1, each programmed burst read is conditioned by one hit trigger. If SWREQ = 0, each programmed burst that is requested by the selected peripheral, is conditioned by one hit trigger. (value: 3)
     */
        /** @brief at block level: the first burst read of each block transfer is conditioned by one hit trigger . */
    constexpr std::uint32_t GPDMA_C6TR2_TRIGM_B_0x0 = 0;
        /** @brief channel x = 0 to 7, same as 0010: at link level: a LLI link transfer is conditioned by one hit trigger. The LLI data transfer (if any) is not conditioned. */
    constexpr std::uint32_t GPDMA_C6TR2_TRIGM_B_0x1 = 1;
        /** @brief at programmed burst level: If SWREQ = 1, each programmed burst read is conditioned by one hit trigger. If SWREQ = 0, each programmed burst that is requested by the selected peripheral, is conditioned by one hit trigger. */
    constexpr std::uint32_t GPDMA_C6TR2_TRIGM_B_0x3 = 3;

    /** @brief trigger event input selection These bits select the trigger event input of the GPDMA transfer (as per Section 16.3.5), with an active trigger event if TRIGPOL[1:0] different 00. */
    using GPDMA_C6TR2_TRIGSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief trigger event polarity These bits define the polarity of the selected trigger event input defined by TRIGSEL[4:0]. */
    using GPDMA_C6TR2_TRIGPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no trigger (masked trigger event) (value: 0)
     *          - B_0x1: trigger on the rising edge (value: 1)
     *          - B_0x2: trigger on the falling edge (value: 2)
     *          - B_0x3: same as 00 (value: 3)
     */
        /** @brief no trigger (masked trigger event) */
    constexpr std::uint32_t GPDMA_C6TR2_TRIGPOL_B_0x0 = 0;
        /** @brief trigger on the rising edge */
    constexpr std::uint32_t GPDMA_C6TR2_TRIGPOL_B_0x1 = 1;
        /** @brief trigger on the falling edge */
    constexpr std::uint32_t GPDMA_C6TR2_TRIGPOL_B_0x2 = 2;
        /** @brief same as 00 */
    constexpr std::uint32_t GPDMA_C6TR2_TRIGPOL_B_0x3 = 3;

    /** @brief transfer complete event mode These bits define the transfer granularity for the transfer complete and half transfer complete events generation. Note: If the initial LLIsub0 /subdata transfer is null/void (directly programmed by the internal register file with GPDMA_CxBR1.BNDT[15:0] = 0), then neither the complete transfer event nor the half transfer event is generated. Note: If the initial LLIsub0 /subdata transfer is null/void (directly programmed by the internal register file with GPDMA_CxBR1.BNDT[15:0] = 0), then neither the complete transfer event nor the half transfer event is generated. Note: If the initial LLIsub0 /subdata transfer is null/void (i.e. directly programmed by the internal register file with GPDMA_CxBR1.BNDT[15:0] =0 ), then the half transfer event is not generated, and the transfer complete event is generated when is completed the loading of the LLIsub1/sub. */
    using GPDMA_C6TR2_TCEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: at block level (when GPDMA_CxBR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. (value: 0)
     *          - B_0x1: channel x (0 to 7, same as 00 (value: 1)
     *          - B_0x2: at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer. (value: 2)
     *          - B_0x3: at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address GPDMA_CxLLR.LA[15:2] to zero and clears all the GPDMA_CxLLR update bits (UT1, UT2, UB1, USA, UDA and ULL). If the channel transfer is continuous/infinite, no event is generated. (value: 3)
     */
        /** @brief at block level (when GPDMA_CxBR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. */
    constexpr std::uint32_t GPDMA_C6TR2_TCEM_B_0x0 = 0;
        /** @brief channel x (0 to 7, same as 00 */
    constexpr std::uint32_t GPDMA_C6TR2_TCEM_B_0x1 = 1;
        /** @brief at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer. */
    constexpr std::uint32_t GPDMA_C6TR2_TCEM_B_0x2 = 2;
        /** @brief at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address GPDMA_CxLLR.LA[15:2] to zero and clears all the GPDMA_CxLLR update bits (UT1, UT2, UB1, USA, UDA and ULL). If the channel transfer is continuous/infinite, no event is generated. */
    constexpr std::uint32_t GPDMA_C6TR2_TCEM_B_0x3 = 3;

    /** @brief GPDMA channel 6 block register 1 */
    using GPDMA_C6BR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x398, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief block number of data bytes to transfer from the source Block size transferred from the source. When the channel is enabled, this field becomes read-only and is decremented, indicating the remaining number of data items in the current source block to be transferred. BNDT[15:0] is programmed in number of bytes, maximum source block size is 64 Kbytes -1. Once the last data transfer is completed (BNDT[15:0] = 0): - if GPDMA_CxLLR.UB1 = 1, this field is updated by the LLI in the memory. - if GPDMA_CxLLR.UB1 = 0 and if there is at least one non null Uxx update bit, this field is internally restored to the programmed value. - if all GPDMA_CxLLR.Uxx = 0 and if GPDMA_CxLLR.LA[15:0] = 0, this field is internally restored to the programmed value (infinite/continuous last LLI). - if GPDMA_CxLLR = 0, this field is kept as zero following the last LLI data transfer. Note: A non-null source block size must be a multiple of the source data width (BNDT[2:0] versus GPDMA_CxTR1.SDW_LOG2[1:0]). Else a user setting error is reported and no transfer is issued. Note: When configured in packing mode (GPDMA_CxTR1.PAM[1] = 1 and destination data width different from source data width), a non-null source block size must be a multiple of the destination data width (BNDT[2:0] versus GPDMA_CxTR1.DDW_LOG2[1:0]). Else a user setting error is reported and no transfer is issued. */
    using GPDMA_C6BR1_BNDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 6 source address register */
    using GPDMA_C6SAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x39C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief source address This field is the pointer to the address from which the next data is read. During the channel activity, depending on the source addressing mode (GPDMA_CxTR1.SINC), this field is kept fixed or incremented by the data width (GPDMA_CxTR1.SDW_LOG2[1:0]) after each burst source data, reflecting the next address from which data is read. During the channel activity, this address is updated after each completed source burst, consequently to: the programmed source burst; either in fixed addressing mode or in contiguous-data incremented mode. If contiguously incremented (GPDMA_CxTR1.SINC = 1), then the additional address offset value is the programmed burst size, as defined by GPDMA_CxTR1.SBL_1[5:0] and GPDMA_CxTR1.SDW_LOG2[21:0] the additional source incremented/decremented offset value as programmed by GPDMA_CxBR1.SDEC In linked-list mode, after a LLI data transfer is completed, this register is automatically updated by GPDMA from the memory, provided the LLI is set with GPDMA_CxLLR.USA = 1. Note: A source address must be aligned with the programmed data width of a source burst (SA[2:0] versus GPDMA_CxTR1.SDW_LOG2[1:0]). Else, a user setting error is reported and no transfer is issued. */
    using GPDMA_C6SAR_SA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 6 destination address register */
    using GPDMA_C6DAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination address This field is the pointer to the address from which the next data is written. During the channel activity, depending on the destination addressing mode (GPDMA_CxTR1.DINC), this field is kept fixed or incremented by the data width (GPDMA_CxTR1.DDW_LOG2[21:0]) after each burst destination data, reflecting the next address from which data is written. During the channel activity, this address is updated after each completed destination burst, consequently to: the programmed destination burst; either in fixed addressing mode or in contiguous-data incremented mode. If contiguously incremented (GPDMA_CxTR1.DINC = 1), then the additional address offset value is the programmed burst size, as defined by GPDMA_CxTR1.DBL_1[5:0] and GPDMA_CxTR1.DDW_LOG2[1:0] the additional destination incremented/decremented offset value as programmed by GPDMA_CxBR1.DDEC. In linked-list mode, after a LLI data transfer is completed, this register is automatically updated by the GPDMA from the memory, provided the LLI is set with GPDMA_CxLLR.UDA = 1. Note: A destination address must be aligned with the programmed data width of a destination burst (DA[2:0] versus GPDMA_CxTR1.DDW_LOG2[1:0]). Else, a user setting error is reported and no transfer is issued. */
    using GPDMA_C6DAR_DA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 6 linked-list address register */
    using GPDMA_C6LLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3CC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pointer (16-bit low-significant address) to the next linked-list data structure If UT1 = UT2 = UB1 = USA = UDA = ULL = 0 and if LA[15:20] = 0, the current LLI is the last one. The channel transfer is completed without any update of the linked-list GPDMA register file. Else, this field is the pointer to the memory address offset from which the next linked-list data structure is automatically fetched from, once the data transfer is completed, in order to conditionally update the linked-list GPDMA internal register file (GPDMA_CxCTR1, GPDMA_CxTR2, GPDMA_CxBR1, GPDMA_CxSAR, GPDMA_CxDAR and GPDMA_CxLLR). Note: The user must program the pointer to be 32-bit aligned. The two low-significant bits are write ignored. */
    using GPDMA_C6LLR_LA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxLLR register from memory This bit is used to control the update of GPDMA_CxLLR from the memory during the link transfer. */
    using GPDMA_C6LLR_ULL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxLLR update (value: 0)
     *          - B_0x1: GPDMA_CxLLR update (value: 1)
     */
        /** @brief no GPDMA_CxLLR update */
    constexpr std::uint32_t GPDMA_C6LLR_ULL_B_0x0 = 0;
        /** @brief GPDMA_CxLLR update */
    constexpr std::uint32_t GPDMA_C6LLR_ULL_B_0x1 = 1;

    /** @brief Update GPDMA_CxDAR register from memory This bit is used to control the update of GPDMA_CxDAR from the memory during the link transfer. */
    using GPDMA_C6LLR_UDA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxDAR update (value: 0)
     *          - B_0x1: GPDMA_CxDAR update (value: 1)
     */
        /** @brief no GPDMA_CxDAR update */
    constexpr std::uint32_t GPDMA_C6LLR_UDA_B_0x0 = 0;
        /** @brief GPDMA_CxDAR update */
    constexpr std::uint32_t GPDMA_C6LLR_UDA_B_0x1 = 1;

    /** @brief update GPDMA_CxSAR from memory This bit controls the update of GPDMA_CxSAR from the memory during the link transfer. */
    using GPDMA_C6LLR_USA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxSAR update (value: 0)
     *          - B_0x1: GPDMA_CxSAR update (value: 1)
     */
        /** @brief no GPDMA_CxSAR update */
    constexpr std::uint32_t GPDMA_C6LLR_USA_B_0x0 = 0;
        /** @brief GPDMA_CxSAR update */
    constexpr std::uint32_t GPDMA_C6LLR_USA_B_0x1 = 1;

    /** @brief Update GPDMA_CxBR1 from memory This bit controls the update of GPDMA_CxBR1 from the memory during the link transfer. If UB1 = 0 and if GPDMA_CxLLR different 0, the linked-list is not completed. GPDMA_CxBR1.BNDT[15:0] is then restored to the programmed value after data transfer is completed and before the link transfer. */
    using GPDMA_C6LLR_UB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxBR1 update from memory (GPDMA_CxBR1.BNDT[15:0] restored if any link transfer) (value: 0)
     *          - B_0x1: GPDMA_CxBR1 update (value: 1)
     */
        /** @brief no GPDMA_CxBR1 update from memory (GPDMA_CxBR1.BNDT[15:0] restored if any link transfer) */
    constexpr std::uint32_t GPDMA_C6LLR_UB1_B_0x0 = 0;
        /** @brief GPDMA_CxBR1 update */
    constexpr std::uint32_t GPDMA_C6LLR_UB1_B_0x1 = 1;

    /** @brief Update GPDMA_CxTR2 from memory This bit controls the update of GPDMA_CxTR2 from the memory during the link transfer. */
    using GPDMA_C6LLR_UT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxTR2 update (value: 0)
     *          - B_0x1: GPDMA_CxTR2 update (value: 1)
     */
        /** @brief no GPDMA_CxTR2 update */
    constexpr std::uint32_t GPDMA_C6LLR_UT2_B_0x0 = 0;
        /** @brief GPDMA_CxTR2 update */
    constexpr std::uint32_t GPDMA_C6LLR_UT2_B_0x1 = 1;

    /** @brief Update GPDMA_CxTR1 from memory This bit controls the update of GPDMA_CxTR1 from the memory during the link transfer. */
    using GPDMA_C6LLR_UT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxTR1 update (value: 0)
     *          - B_0x1: GPDMA_CxTR1 update (value: 1)
     */
        /** @brief no GPDMA_CxTR1 update */
    constexpr std::uint32_t GPDMA_C6LLR_UT1_B_0x0 = 0;
        /** @brief GPDMA_CxTR1 update */
    constexpr std::uint32_t GPDMA_C6LLR_UT1_B_0x1 = 1;

    /** @brief GPDMA channel 7 linked-list base address register */
    using GPDMA_C7LBAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3D0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief linked-list base address of GPDMA channel x */
    using GPDMA_C7LBAR_LBA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 7 flag clear register */
    using GPDMA_C7FCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3DC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transfer complete flag clear */
    using GPDMA_C7FCR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding TCF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C7FCR_TCF_B_0x0 = 0;
        /** @brief corresponding TCF flag cleared */
    constexpr std::uint32_t GPDMA_C7FCR_TCF_B_0x1 = 1;

    /** @brief half transfer flag clear */
    using GPDMA_C7FCR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding HTF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C7FCR_HTF_B_0x0 = 0;
        /** @brief corresponding HTF flag cleared */
    constexpr std::uint32_t GPDMA_C7FCR_HTF_B_0x1 = 1;

    /** @brief data transfer error flag clear */
    using GPDMA_C7FCR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding DTEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C7FCR_DTEF_B_0x0 = 0;
        /** @brief corresponding DTEF flag cleared */
    constexpr std::uint32_t GPDMA_C7FCR_DTEF_B_0x1 = 1;

    /** @brief update link transfer error flag clear */
    using GPDMA_C7FCR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding ULEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C7FCR_ULEF_B_0x0 = 0;
        /** @brief corresponding ULEF flag cleared */
    constexpr std::uint32_t GPDMA_C7FCR_ULEF_B_0x1 = 1;

    /** @brief user setting error flag clear */
    using GPDMA_C7FCR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding USEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C7FCR_USEF_B_0x0 = 0;
        /** @brief corresponding USEF flag cleared */
    constexpr std::uint32_t GPDMA_C7FCR_USEF_B_0x1 = 1;

    /** @brief completed suspension flag clear */
    using GPDMA_C7FCR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding SUSPF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C7FCR_SUSPF_B_0x0 = 0;
        /** @brief corresponding SUSPF flag cleared */
    constexpr std::uint32_t GPDMA_C7FCR_SUSPF_B_0x1 = 1;

    /** @brief trigger overrun flag clear */
    using GPDMA_C7FCR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding TOF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C7FCR_TOF_B_0x0 = 0;
        /** @brief corresponding TOF flag cleared */
    constexpr std::uint32_t GPDMA_C7FCR_TOF_B_0x1 = 1;

    /** @brief GPDMA channel 7 status register */
    using GPDMA_C7SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3E0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief idle flag This idle flag is deasserted by hardware when the channel is enabled (GPDMA_CxCR.EN = 1) with a valid channel configuration (no USEF to be immediately reported). This idle flag is asserted after hard reset or by hardware when the channel is back in idle state (in suspended or disabled state). */
    using GPDMA_C7SR_IDLEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: channel not in idle state (value: 0)
     *          - B_0x1: channel in idle state (value: 1)
     */
        /** @brief channel not in idle state */
    constexpr std::uint32_t GPDMA_C7SR_IDLEF_B_0x0 = 0;
        /** @brief channel in idle state */
    constexpr std::uint32_t GPDMA_C7SR_IDLEF_B_0x1 = 1;

    /** @brief transfer complete flag A transfer complete event is either a block transfer complete, or a LLI transfer complete including the upload of the next LLI if any, or the full linked-list completion, depending on the transfer complete event mode (GPDMA_CxTR2.TCEM[1:0]). */
    using GPDMA_C7SR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no transfer complete event (value: 0)
     *          - B_0x1: a transfer complete event occurred (value: 1)
     */
        /** @brief no transfer complete event */
    constexpr std::uint32_t GPDMA_C7SR_TCF_B_0x0 = 0;
        /** @brief a transfer complete event occurred */
    constexpr std::uint32_t GPDMA_C7SR_TCF_B_0x1 = 1;

    /** @brief half transfer flag A half block transfer occurs when half of the bytes of the source block size (rounded up integer of GPDMA_CxBR1.BNDT[15:0]/2) has been transferred to the destination. */
    using GPDMA_C7SR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no half transfer event (value: 0)
     *          - B_0x1: a half transfer event occurred (value: 1)
     */
        /** @brief no half transfer event */
    constexpr std::uint32_t GPDMA_C7SR_HTF_B_0x0 = 0;
        /** @brief a half transfer event occurred */
    constexpr std::uint32_t GPDMA_C7SR_HTF_B_0x1 = 1;

    /** @brief data transfer error flag */
    using GPDMA_C7SR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no data transfer error event (value: 0)
     *          - B_0x1: a master bus error event occurred on a data transfer (value: 1)
     */
        /** @brief no data transfer error event */
    constexpr std::uint32_t GPDMA_C7SR_DTEF_B_0x0 = 0;
        /** @brief a master bus error event occurred on a data transfer */
    constexpr std::uint32_t GPDMA_C7SR_DTEF_B_0x1 = 1;

    /** @brief update link transfer error flag */
    using GPDMA_C7SR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no update link transfer error event (value: 0)
     *          - B_0x1: a master bus error event occurred while updating a linked-list register from memory (value: 1)
     */
        /** @brief no update link transfer error event */
    constexpr std::uint32_t GPDMA_C7SR_ULEF_B_0x0 = 0;
        /** @brief a master bus error event occurred while updating a linked-list register from memory */
    constexpr std::uint32_t GPDMA_C7SR_ULEF_B_0x1 = 1;

    /** @brief user setting error flag */
    using GPDMA_C7SR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no user setting error event (value: 0)
     *          - B_0x1: a user setting error event occurred (value: 1)
     */
        /** @brief no user setting error event */
    constexpr std::uint32_t GPDMA_C7SR_USEF_B_0x0 = 0;
        /** @brief a user setting error event occurred */
    constexpr std::uint32_t GPDMA_C7SR_USEF_B_0x1 = 1;

    /** @brief completed suspension flag */
    using GPDMA_C7SR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no completed suspension event (value: 0)
     *          - B_0x1: a completed suspension event occurred (value: 1)
     */
        /** @brief no completed suspension event */
    constexpr std::uint32_t GPDMA_C7SR_SUSPF_B_0x0 = 0;
        /** @brief a completed suspension event occurred */
    constexpr std::uint32_t GPDMA_C7SR_SUSPF_B_0x1 = 1;

    /** @brief trigger overrun flag */
    using GPDMA_C7SR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no trigger overrun event (value: 0)
     *          - B_0x1: a trigger overrun event occurred (value: 1)
     */
        /** @brief no trigger overrun event */
    constexpr std::uint32_t GPDMA_C7SR_TOF_B_0x0 = 0;
        /** @brief a trigger overrun event occurred */
    constexpr std::uint32_t GPDMA_C7SR_TOF_B_0x1 = 1;

    /** @brief monitored FIFO level Number of available write beats in the FIFO, in units of the programmed destination data width (see GPDMA_CxTR1.DDW_LOG2[1:0], in units of bytes, half-words, or words). Note: After having suspended an active transfer, the user may need to read FIFOL[7:0], additionally to GPDMA_CxBR1.BDNT[15:0] to know how many data have been transferred to the destination. Before reading, the user may wait for the transfer to be suspended (GPDMA_CxSR.SUSPF = 1). */
    using GPDMA_C7SR_FIFOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 7 control register */
    using GPDMA_C7CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3E4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief enable Writing 1 into the field RESET (bit 1) causes the hardware to de-assert this bit, whatever is written into this bit 0. Else: this bit is deasserted by hardware when there is a transfer error (master bus error or user setting error) or when there is a channel transfer complete (channel ready to be configured, for example if LSM=1 at the end of a single execution of the LLI). Else, this bit can be asserted by software. Writing 0 into this EN bit is ignored. */
    using GPDMA_C7CR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write: ignored, read: channel disabled (value: 0)
     *          - B_0x1: write: enable channel, read: channel enabled (value: 1)
     */
        /** @brief write: ignored, read: channel disabled */
    constexpr std::uint32_t GPDMA_C7CR_EN_B_0x0 = 0;
        /** @brief write: enable channel, read: channel enabled */
    constexpr std::uint32_t GPDMA_C7CR_EN_B_0x1 = 1;

    /** @brief reset This bit is write only. Writing 0 has no impact. Writing 1 implies the reset of the following: the FIFO, the channel internal state, SUSP and EN bits (whatever is written receptively in bit 2 and bit 0). The reset is effective when the channel is in steady state, meaning one of the following: - active channel in suspended state (GPDMA_CxSR.SUSPF = 1 and GPDMA_CxSR.IDLEF = GPDMA_CxCR.EN = 1) - channel in disabled state (GPDMA_CxSR.IDLEF = 1 and GPDMA_CxCR.EN = 0). After writing a RESET, to continue using this channel, the user must explicitly reconfigure the channel including the hardware-modified configuration registers (GPDMA_CxBR1, GPDMA_CxSAR and GPDMA_CxDAR) before enabling again the channel (see the programming sequence in Figure 44). */
    using GPDMA_C7CR_RESET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no channel reset (value: 0)
     *          - B_0x1: channel reset (value: 1)
     */
        /** @brief no channel reset */
    constexpr std::uint32_t GPDMA_C7CR_RESET_B_0x0 = 0;
        /** @brief channel reset */
    constexpr std::uint32_t GPDMA_C7CR_RESET_B_0x1 = 1;

    /** @brief suspend Writing 1 into the field RESET (bit 1) causes the hardware to de-assert this bit, whatever is written into this bit 2. Else: Software must write 1 in order to suspend an active channel (channel with an ongoing GPDMA transfer over its master ports). The software must write 0 in order to resume a suspended channel, following the programming sequence detailed in Figure 43. */
    using GPDMA_C7CR_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write: resume channel, read: channel not suspended (value: 0)
     *          - B_0x1: write: suspend channel, read: channel suspended. (value: 1)
     */
        /** @brief write: resume channel, read: channel not suspended */
    constexpr std::uint32_t GPDMA_C7CR_SUSP_B_0x0 = 0;
        /** @brief write: suspend channel, read: channel suspended. */
    constexpr std::uint32_t GPDMA_C7CR_SUSP_B_0x1 = 1;

    /** @brief transfer complete interrupt enable */
    using GPDMA_C7CR_TCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C7CR_TCIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C7CR_TCIE_B_0x1 = 1;

    /** @brief half transfer complete interrupt enable */
    using GPDMA_C7CR_HTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C7CR_HTIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C7CR_HTIE_B_0x1 = 1;

    /** @brief data transfer error interrupt enable */
    using GPDMA_C7CR_DTEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C7CR_DTEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C7CR_DTEIE_B_0x1 = 1;

    /** @brief update link transfer error interrupt enable */
    using GPDMA_C7CR_ULEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C7CR_ULEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C7CR_ULEIE_B_0x1 = 1;

    /** @brief user setting error interrupt enable */
    using GPDMA_C7CR_USEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C7CR_USEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C7CR_USEIE_B_0x1 = 1;

    /** @brief completed suspension interrupt enable */
    using GPDMA_C7CR_SUSPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C7CR_SUSPIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C7CR_SUSPIE_B_0x1 = 1;

    /** @brief trigger overrun interrupt enable */
    using GPDMA_C7CR_TOIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C7CR_TOIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C7CR_TOIE_B_0x1 = 1;

    /** @brief Link step mode First the (possible 1D/repeated) block transfer is executed as defined by the current internal register file until GPDMA_CxBR1.BNDT[15:0] = 0. Secondly the next linked-list data structure is conditionally uploaded from memory as defined by GPDMA_CxLLR. Then channel execution is completed. Note: This bit must be written when EN=0. This bit is read-only when EN=1. */
    using GPDMA_C7CR_LSM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: channel executed for the full linked-list and completed at the end of the last LLI (GPDMA_CxLLR = 0). The 16 low-significant bits of the link address are null (LA[15:0] = 0) and all the update bits are null (UT1 =UB1 = UT2 = USA = UDA = ULL = 0). Then GPDMA_CxBR1.BNDT[15:0] = 0. (value: 0)
     *          - B_0x1: channel executed once for the current LLI (value: 1)
     */
        /** @brief channel executed for the full linked-list and completed at the end of the last LLI (GPDMA_CxLLR = 0). The 16 low-significant bits of the link address are null (LA[15:0] = 0) and all the update bits are null (UT1 =UB1 = UT2 = USA = UDA = ULL = 0). Then GPDMA_CxBR1.BNDT[15:0] = 0. */
    constexpr std::uint32_t GPDMA_C7CR_LSM_B_0x0 = 0;
        /** @brief channel executed once for the current LLI */
    constexpr std::uint32_t GPDMA_C7CR_LSM_B_0x1 = 1;

    /** @brief linked-list allocated port This bit is used to allocate the master port for the update of the GPDMA linked-list registers from the memory. Note: This bit must be written when EN=0. This bit is read-only when EN=1. */
    using GPDMA_C7CR_LAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C7CR_LAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C7CR_LAP_B_0x1 = 1;

    /** @brief priority level of the channel x GPDMA transfer versus others Note: This bit must be written when EN = 0. This bit is read-only when EN = 1. */
    using GPDMA_C7CR_PRIO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: low priority, low weight (value: 0)
     *          - B_0x1: low priority, mid weight (value: 1)
     *          - B_0x2: low priority, high weight (value: 2)
     *          - B_0x3: high priority (value: 3)
     */
        /** @brief low priority, low weight */
    constexpr std::uint32_t GPDMA_C7CR_PRIO_B_0x0 = 0;
        /** @brief low priority, mid weight */
    constexpr std::uint32_t GPDMA_C7CR_PRIO_B_0x1 = 1;
        /** @brief low priority, high weight */
    constexpr std::uint32_t GPDMA_C7CR_PRIO_B_0x2 = 2;
        /** @brief high priority */
    constexpr std::uint32_t GPDMA_C7CR_PRIO_B_0x3 = 3;

    /** @brief GPDMA channel 7 transfer register 1 */
    using GPDMA_C7TR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x410, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief binary logarithm of the source data width of a burst in bytes Setting a 8-byte data width causes a user setting error to be reported and no transfer is issued. A source block size must be a multiple of the source data width (GPDMA_CxBR1.BNDT[2:0] versus SDW_LOG2[1:0]). Otherwise, a user setting error is reported and no transfer is issued. Note: A source burst transfer must have an aligned address with its data width (start address GPDMA_CxSAR[2:0] versus SDW_LOG2[1:0]). Otherwise, a user setting error is reported and none transfer is issued. */
    using GPDMA_C7TR1_SDW_LOG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: byte (value: 0)
     *          - B_0x1: half-word (2 bytes) (value: 1)
     *          - B_0x2: word (4 bytes) (value: 2)
     *          - B_0x3: user setting error reported and no transfer issued (value: 3)
     */
        /** @brief byte */
    constexpr std::uint32_t GPDMA_C7TR1_SDW_LOG2_B_0x0 = 0;
        /** @brief half-word (2 bytes) */
    constexpr std::uint32_t GPDMA_C7TR1_SDW_LOG2_B_0x1 = 1;
        /** @brief word (4 bytes) */
    constexpr std::uint32_t GPDMA_C7TR1_SDW_LOG2_B_0x2 = 2;
        /** @brief user setting error reported and no transfer issued */
    constexpr std::uint32_t GPDMA_C7TR1_SDW_LOG2_B_0x3 = 3;

    /** @brief source incrementing burst The source address, pointed by GPDMA_CxSAR, is kept constant after a burst beat/single transfer or is incremented by the offset value corresponding to a contiguous data after a burst beat/single transfer. */
    using GPDMA_C7TR1_SINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fixed burst (value: 0)
     *          - B_0x1: contiguously incremented burst (value: 1)
     */
        /** @brief fixed burst */
    constexpr std::uint32_t GPDMA_C7TR1_SINC_B_0x0 = 0;
        /** @brief contiguously incremented burst */
    constexpr std::uint32_t GPDMA_C7TR1_SINC_B_0x1 = 1;

    /** @brief source burst length minus 1, between 0 and 63 The burst length unit is one data named beat within a burst. If SBL_1[5:0] =0 , the burst can be named as single. Each data/beat has a width defined by the destination data width SDW_LOG2[1:0]. Note: If a burst transfer crossed a 1-Kbyte address boundary on a AHB transfer, the GPDMA modifies and shortens the programmed burst into singles or bursts of lower length, to be compliant with the AHB protocol. Note: If a burst transfer is of length greater than the FIFO size of the channel x, the GPDMA modifies and shortens the programmed burst into singles or bursts of lower length, to be compliant with the FIFO size. Transfer performance is lower, with GPDMA re-arbitration between effective and lower singles/bursts, but the data integrity is guaranteed. */
    using GPDMA_C7TR1_SBL_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief padding/alignment mode If DDW_LOG2[1:0] = SDW_LOG2[1:0]: if the data width of a burst destination transfer is equal to the data width of a burst source transfer, these bits are ignored. Else, in the following enumerated values, the condition PAM_1 is when destination data width is higher that source data width, and the condition PAM_2 is when destination data width is higher than source data width. 1x: successive source data are FIFO queued and packed at the destination data width, in a left (LSB) to right (MSB) order (named little endian), before a destination transfer Note: 1x: source data is FIFO queued and unpacked at the destination data width, to be transferred in a left (LSB) to right (MSB) order (named little endian) to the destination */
    using GPDMA_C7TR1_PAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0_PAM_1: source data is transferred as right aligned, padded with 0s up to the destination data width (value: 0)
     *          - B_0x1_PAM_1: source data is transferred as right aligned, sign extended up to the destination data width (value: 1)
     */
        /** @brief source data is transferred as right aligned, padded with 0s up to the destination data width */
    constexpr std::uint32_t GPDMA_C7TR1_PAM_B_0x0_PAM_1 = 0;
        /** @brief source data is transferred as right aligned, sign extended up to the destination data width */
    constexpr std::uint32_t GPDMA_C7TR1_PAM_B_0x1_PAM_1 = 1;

    /** @brief source byte exchange within the unaligned half-word of each source word If the source data width is shorter than a word, this bit is ignored. If the source data width is a word: */
    using GPDMA_C7TR1_SBX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no byte-based exchange within the unaligned half-word of each source word (value: 0)
     *          - B_0x1: the two consecutive bytes within the unaligned half-word of each source word are exchanged. (value: 1)
     */
        /** @brief no byte-based exchange within the unaligned half-word of each source word */
    constexpr std::uint32_t GPDMA_C7TR1_SBX_B_0x0 = 0;
        /** @brief the two consecutive bytes within the unaligned half-word of each source word are exchanged. */
    constexpr std::uint32_t GPDMA_C7TR1_SBX_B_0x1 = 1;

    /** @brief source allocated port This bit is used to allocate the master port for the source transfer Note: This bit must be written when EN = 0. This bit is read-only when EN = 1. */
    using GPDMA_C7TR1_SAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C7TR1_SAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C7TR1_SAP_B_0x1 = 1;

    /** @brief security attribute of the GPDMA transfer from the source If GPDMA_SECCFGR.SECx = 1 and the access is secure: This is a secure register bit. This bit can only be read by a secure software. This bit must be written by a secure software when GPDMA_SECCFGR.SECx =1 . A secure write is ignored when GPDMA_SECCFGR.SECx = 0. When GPDMA_SECCFGR.SECx is deasserted, this SSEC bit is also deasserted by hardware (on a secure reconfiguration of the channel as non-secure), and the GPDMA transfer from the source is non-secure. */
    using GPDMA_C7TR1_SSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPDMA transfer non-secure (value: 0)
     *          - B_0x1: GPDMA transfer secure (value: 1)
     */
        /** @brief GPDMA transfer non-secure */
    constexpr std::uint32_t GPDMA_C7TR1_SSEC_B_0x0 = 0;
        /** @brief GPDMA transfer secure */
    constexpr std::uint32_t GPDMA_C7TR1_SSEC_B_0x1 = 1;

    /** @brief binary logarithm of the destination data width of a burst, in bytes Setting a 8-byte data width causes a user setting error to be reported and none transfer is issued. Note: A destination burst transfer must have an aligned address with its data width (start address GPDMA_CxDAR[2:0] versus DDW_LOG2[1:0]). Otherwise a user setting error is reported and no transfer is issued. */
    using GPDMA_C7TR1_DDW_LOG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: byte (value: 0)
     *          - B_0x1: half-word (2 bytes) (value: 1)
     *          - B_0x2: word (4 bytes) (value: 2)
     *          - B_0x3: user setting error reported and no transfer issued (value: 3)
     */
        /** @brief byte */
    constexpr std::uint32_t GPDMA_C7TR1_DDW_LOG2_B_0x0 = 0;
        /** @brief half-word (2 bytes) */
    constexpr std::uint32_t GPDMA_C7TR1_DDW_LOG2_B_0x1 = 1;
        /** @brief word (4 bytes) */
    constexpr std::uint32_t GPDMA_C7TR1_DDW_LOG2_B_0x2 = 2;
        /** @brief user setting error reported and no transfer issued */
    constexpr std::uint32_t GPDMA_C7TR1_DDW_LOG2_B_0x3 = 3;

    /** @brief destination incrementing burst The destination address, pointed by GPDMA_CxDAR, is kept constant after a burst beat/single transfer, or is incremented by the offset value corresponding to a contiguous data after a burst beat/single transfer. */
    using GPDMA_C7TR1_DINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fixed burst (value: 0)
     *          - B_0x1: contiguously incremented burst (value: 1)
     */
        /** @brief fixed burst */
    constexpr std::uint32_t GPDMA_C7TR1_DINC_B_0x0 = 0;
        /** @brief contiguously incremented burst */
    constexpr std::uint32_t GPDMA_C7TR1_DINC_B_0x1 = 1;

    /** @brief destination burst length minus 1, between 0 and 63 The burst length unit is one data named beat within a burst. If DBL_1[5:0] =0 , the burst can be named as single. Each data/beat has a width defined by the destination data width DDW_LOG2[1:0]. Note: If a burst transfer crossed a 1-Kbyte address boundary on a AHB transfer, the GPDMA modifies and shortens the programmed burst into singles or bursts of lower length, to be compliant with the AHB protocol. Note: If a burst transfer is of length greater than the FIFO size of the channel x, the GPDMA modifies and shortens the programmed burst into singles or bursts of lower length, to be compliant with the FIFO size. Transfer performance is lower, with GPDMA re-arbitration between effective and lower singles/bursts, but the data integrity is guaranteed. */
    using GPDMA_C7TR1_DBL_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination byte exchange If the destination data size is a byte, this bit is ignored. If the destination data size is not a byte: */
    using GPDMA_C7TR1_DBX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no byte-based exchange within half-word (value: 0)
     *          - B_0x1: the two consecutive (post PAM) bytes are exchanged in each destination half-word. (value: 1)
     */
        /** @brief no byte-based exchange within half-word */
    constexpr std::uint32_t GPDMA_C7TR1_DBX_B_0x0 = 0;
        /** @brief the two consecutive (post PAM) bytes are exchanged in each destination half-word. */
    constexpr std::uint32_t GPDMA_C7TR1_DBX_B_0x1 = 1;

    /** @brief destination half-word exchange If the destination data size is shorter than a word, this bit is ignored. If the destination data size is a word: */
    using GPDMA_C7TR1_DHX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no halfword-based exchanged within word (value: 0)
     *          - B_0x1: the two consecutive (post PAM) half-words are exchanged in each destination word. (value: 1)
     */
        /** @brief no halfword-based exchanged within word */
    constexpr std::uint32_t GPDMA_C7TR1_DHX_B_0x0 = 0;
        /** @brief the two consecutive (post PAM) half-words are exchanged in each destination word. */
    constexpr std::uint32_t GPDMA_C7TR1_DHX_B_0x1 = 1;

    /** @brief destination allocated port This bit is used to allocate the master port for the destination transfer Note: This bit must be written when EN = 0. This bit is read-only when EN = 1. */
    using GPDMA_C7TR1_DAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C7TR1_DAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C7TR1_DAP_B_0x1 = 1;

    /** @brief security attribute of the GPDMA transfer to the destination If GPDMA_SECCFGR.SECx = 1 and the access is secure: This is a secure register bit. This bit can only be read by a secure software. This bit must be written by a secure software when GPDMA_SECCFGR.SECx = 1. A secure write is ignored when GPDMA_SECCFGR.SECx = 0. When GPDMA_SECCFGR.SECx is deasserted, this DSEC bit is also deasserted by hardware (on a secure reconfiguration of the channel as non-secure), and the GPDMA transfer to the destination is non-secure. */
    using GPDMA_C7TR1_DSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPDMA transfer non-secure (value: 0)
     *          - B_0x1: GPDMA transfer secure (value: 1)
     */
        /** @brief GPDMA transfer non-secure */
    constexpr std::uint32_t GPDMA_C7TR1_DSEC_B_0x0 = 0;
        /** @brief GPDMA transfer secure */
    constexpr std::uint32_t GPDMA_C7TR1_DSEC_B_0x1 = 1;

    /** @brief GPDMA channel 7 transfer register 2 */
    using GPDMA_C7TR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x414, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA hardware request selection These bits are ignored if channel x is activated (GPDMA_CxCR.EN asserted) with SWREQ = 1 (software request for a memory-to-memory transfer). Else, the selected hardware request is internally taken into account as per Section 16.3.3. The user must not assign a same input hardware request (same REQSEL[5:0] value) to different active GPDMA channels (GPDMA_CxCR.EN = 1 and GPDMA_CxTR2.SWREQ = 0 for these channels). GPDMA is not intended to hardware support the case of simultaneous enabled channels incorrectly configured with a same hardware peripheral request signal, and there is no user setting error reporting. */
    using GPDMA_C7TR2_REQSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief software request This bit is internally taken into account when GPDMA_CxCR.EN is asserted. */
    using GPDMA_C7TR2_SWREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no software request. The selected hardware request REQSEL[5:0] is taken into account. (value: 0)
     *          - B_0x1: software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[5:0] is ignored. (value: 1)
     */
        /** @brief no software request. The selected hardware request REQSEL[5:0] is taken into account. */
    constexpr std::uint32_t GPDMA_C7TR2_SWREQ_B_0x0 = 0;
        /** @brief software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[5:0] is ignored. */
    constexpr std::uint32_t GPDMA_C7TR2_SWREQ_B_0x1 = 1;

    /** @brief destination hardware request This bit is ignored if channel x is activated (GPDMA_CxCR.EN asserted) with SWREQ = 1 (software request for a memory-to-memory transfer). Else: */
    using GPDMA_C7TR2_DREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: selected hardware request driven by a source peripheral (request signal taken into account by the GPDMA transfer scheduler over the source/read port) (value: 0)
     *          - B_0x1: selected hardware request driven by a destination peripheral (request signal taken into account by the GPDMA transfer scheduler over the destination/write port) (value: 1)
     */
        /** @brief selected hardware request driven by a source peripheral (request signal taken into account by the GPDMA transfer scheduler over the source/read port) */
    constexpr std::uint32_t GPDMA_C7TR2_DREQ_B_0x0 = 0;
        /** @brief selected hardware request driven by a destination peripheral (request signal taken into account by the GPDMA transfer scheduler over the destination/write port) */
    constexpr std::uint32_t GPDMA_C7TR2_DREQ_B_0x1 = 1;

    /** @brief Block hardware request If the channel x is activated (GPDMA_CxCR.EN asserted) with SWREQ = 1 (software request for a memory-to-memory transfer), this bit is ignored. Else: */
    using GPDMA_C7TR2_BREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a burst level. (value: 0)
     *          - B_0x1: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see Section 16.3.3). (value: 1)
     */
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a burst level. */
    constexpr std::uint32_t GPDMA_C7TR2_BREQ_B_0x0 = 0;
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see Section 16.3.3). */
    constexpr std::uint32_t GPDMA_C7TR2_BREQ_B_0x1 = 1;

    /** @brief trigger mode These bits define the transfer granularity for its conditioning by the trigger. */
    using GPDMA_C7TR2_TRIGM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: at block level: the first burst read of each block transfer is conditioned by one hit trigger . (value: 0)
     *          - B_0x1: channel x = 0 to 7, same as 0010: at link level: a LLI link transfer is conditioned by one hit trigger. The LLI data transfer (if any) is not conditioned. (value: 1)
     *          - B_0x3: at programmed burst level: If SWREQ = 1, each programmed burst read is conditioned by one hit trigger. If SWREQ = 0, each programmed burst that is requested by the selected peripheral, is conditioned by one hit trigger. (value: 3)
     */
        /** @brief at block level: the first burst read of each block transfer is conditioned by one hit trigger . */
    constexpr std::uint32_t GPDMA_C7TR2_TRIGM_B_0x0 = 0;
        /** @brief channel x = 0 to 7, same as 0010: at link level: a LLI link transfer is conditioned by one hit trigger. The LLI data transfer (if any) is not conditioned. */
    constexpr std::uint32_t GPDMA_C7TR2_TRIGM_B_0x1 = 1;
        /** @brief at programmed burst level: If SWREQ = 1, each programmed burst read is conditioned by one hit trigger. If SWREQ = 0, each programmed burst that is requested by the selected peripheral, is conditioned by one hit trigger. */
    constexpr std::uint32_t GPDMA_C7TR2_TRIGM_B_0x3 = 3;

    /** @brief trigger event input selection These bits select the trigger event input of the GPDMA transfer (as per Section 16.3.5), with an active trigger event if TRIGPOL[1:0] different 00. */
    using GPDMA_C7TR2_TRIGSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief trigger event polarity These bits define the polarity of the selected trigger event input defined by TRIGSEL[4:0]. */
    using GPDMA_C7TR2_TRIGPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no trigger (masked trigger event) (value: 0)
     *          - B_0x1: trigger on the rising edge (value: 1)
     *          - B_0x2: trigger on the falling edge (value: 2)
     *          - B_0x3: same as 00 (value: 3)
     */
        /** @brief no trigger (masked trigger event) */
    constexpr std::uint32_t GPDMA_C7TR2_TRIGPOL_B_0x0 = 0;
        /** @brief trigger on the rising edge */
    constexpr std::uint32_t GPDMA_C7TR2_TRIGPOL_B_0x1 = 1;
        /** @brief trigger on the falling edge */
    constexpr std::uint32_t GPDMA_C7TR2_TRIGPOL_B_0x2 = 2;
        /** @brief same as 00 */
    constexpr std::uint32_t GPDMA_C7TR2_TRIGPOL_B_0x3 = 3;

    /** @brief transfer complete event mode These bits define the transfer granularity for the transfer complete and half transfer complete events generation. Note: If the initial LLIsub0 /subdata transfer is null/void (directly programmed by the internal register file with GPDMA_CxBR1.BNDT[15:0] = 0), then neither the complete transfer event nor the half transfer event is generated. Note: If the initial LLIsub0 /subdata transfer is null/void (directly programmed by the internal register file with GPDMA_CxBR1.BNDT[15:0] = 0), then neither the complete transfer event nor the half transfer event is generated. Note: If the initial LLIsub0 /subdata transfer is null/void (i.e. directly programmed by the internal register file with GPDMA_CxBR1.BNDT[15:0] =0 ), then the half transfer event is not generated, and the transfer complete event is generated when is completed the loading of the LLIsub1/sub. */
    using GPDMA_C7TR2_TCEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: at block level (when GPDMA_CxBR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. (value: 0)
     *          - B_0x1: channel x (0 to 7, same as 00 (value: 1)
     *          - B_0x2: at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer. (value: 2)
     *          - B_0x3: at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address GPDMA_CxLLR.LA[15:2] to zero and clears all the GPDMA_CxLLR update bits (UT1, UT2, UB1, USA, UDA and ULL). If the channel transfer is continuous/infinite, no event is generated. (value: 3)
     */
        /** @brief at block level (when GPDMA_CxBR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. */
    constexpr std::uint32_t GPDMA_C7TR2_TCEM_B_0x0 = 0;
        /** @brief channel x (0 to 7, same as 00 */
    constexpr std::uint32_t GPDMA_C7TR2_TCEM_B_0x1 = 1;
        /** @brief at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer. */
    constexpr std::uint32_t GPDMA_C7TR2_TCEM_B_0x2 = 2;
        /** @brief at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address GPDMA_CxLLR.LA[15:2] to zero and clears all the GPDMA_CxLLR update bits (UT1, UT2, UB1, USA, UDA and ULL). If the channel transfer is continuous/infinite, no event is generated. */
    constexpr std::uint32_t GPDMA_C7TR2_TCEM_B_0x3 = 3;

    /** @brief GPDMA channel 7 block register 1 */
    using GPDMA_C7BR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x418, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief block number of data bytes to transfer from the source Block size transferred from the source. When the channel is enabled, this field becomes read-only and is decremented, indicating the remaining number of data items in the current source block to be transferred. BNDT[15:0] is programmed in number of bytes, maximum source block size is 64 Kbytes -1. Once the last data transfer is completed (BNDT[15:0] = 0): - if GPDMA_CxLLR.UB1 = 1, this field is updated by the LLI in the memory. - if GPDMA_CxLLR.UB1 = 0 and if there is at least one non null Uxx update bit, this field is internally restored to the programmed value. - if all GPDMA_CxLLR.Uxx = 0 and if GPDMA_CxLLR.LA[15:0] = 0, this field is internally restored to the programmed value (infinite/continuous last LLI). - if GPDMA_CxLLR = 0, this field is kept as zero following the last LLI data transfer. Note: A non-null source block size must be a multiple of the source data width (BNDT[2:0] versus GPDMA_CxTR1.SDW_LOG2[1:0]). Else a user setting error is reported and no transfer is issued. Note: When configured in packing mode (GPDMA_CxTR1.PAM[1] = 1 and destination data width different from source data width), a non-null source block size must be a multiple of the destination data width (BNDT[2:0] versus GPDMA_CxTR1.DDW_LOG2[1:0]). Else a user setting error is reported and no transfer is issued. */
    using GPDMA_C7BR1_BNDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 7 source address register */
    using GPDMA_C7SAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x41C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief source address This field is the pointer to the address from which the next data is read. During the channel activity, depending on the source addressing mode (GPDMA_CxTR1.SINC), this field is kept fixed or incremented by the data width (GPDMA_CxTR1.SDW_LOG2[1:0]) after each burst source data, reflecting the next address from which data is read. During the channel activity, this address is updated after each completed source burst, consequently to: the programmed source burst; either in fixed addressing mode or in contiguous-data incremented mode. If contiguously incremented (GPDMA_CxTR1.SINC = 1), then the additional address offset value is the programmed burst size, as defined by GPDMA_CxTR1.SBL_1[5:0] and GPDMA_CxTR1.SDW_LOG2[21:0] the additional source incremented/decremented offset value as programmed by GPDMA_CxBR1.SDEC In linked-list mode, after a LLI data transfer is completed, this register is automatically updated by GPDMA from the memory, provided the LLI is set with GPDMA_CxLLR.USA = 1. Note: A source address must be aligned with the programmed data width of a source burst (SA[2:0] versus GPDMA_CxTR1.SDW_LOG2[1:0]). Else, a user setting error is reported and no transfer is issued. */
    using GPDMA_C7SAR_SA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 7 destination address register */
    using GPDMA_C7DAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x420, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination address This field is the pointer to the address from which the next data is written. During the channel activity, depending on the destination addressing mode (GPDMA_CxTR1.DINC), this field is kept fixed or incremented by the data width (GPDMA_CxTR1.DDW_LOG2[21:0]) after each burst destination data, reflecting the next address from which data is written. During the channel activity, this address is updated after each completed destination burst, consequently to: the programmed destination burst; either in fixed addressing mode or in contiguous-data incremented mode. If contiguously incremented (GPDMA_CxTR1.DINC = 1), then the additional address offset value is the programmed burst size, as defined by GPDMA_CxTR1.DBL_1[5:0] and GPDMA_CxTR1.DDW_LOG2[1:0] the additional destination incremented/decremented offset value as programmed by GPDMA_CxBR1.DDEC. In linked-list mode, after a LLI data transfer is completed, this register is automatically updated by the GPDMA from the memory, provided the LLI is set with GPDMA_CxLLR.UDA = 1. Note: A destination address must be aligned with the programmed data width of a destination burst (DA[2:0] versus GPDMA_CxTR1.DDW_LOG2[1:0]). Else, a user setting error is reported and no transfer is issued. */
    using GPDMA_C7DAR_DA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 7 linked-list address register */
    using GPDMA_C7LLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pointer (16-bit low-significant address) to the next linked-list data structure If UT1 = UT2 = UB1 = USA = UDA = ULL = 0 and if LA[15:20] = 0, the current LLI is the last one. The channel transfer is completed without any update of the linked-list GPDMA register file. Else, this field is the pointer to the memory address offset from which the next linked-list data structure is automatically fetched from, once the data transfer is completed, in order to conditionally update the linked-list GPDMA internal register file (GPDMA_CxCTR1, GPDMA_CxTR2, GPDMA_CxBR1, GPDMA_CxSAR, GPDMA_CxDAR and GPDMA_CxLLR). Note: The user must program the pointer to be 32-bit aligned. The two low-significant bits are write ignored. */
    using GPDMA_C7LLR_LA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxLLR register from memory This bit is used to control the update of GPDMA_CxLLR from the memory during the link transfer. */
    using GPDMA_C7LLR_ULL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxLLR update (value: 0)
     *          - B_0x1: GPDMA_CxLLR update (value: 1)
     */
        /** @brief no GPDMA_CxLLR update */
    constexpr std::uint32_t GPDMA_C7LLR_ULL_B_0x0 = 0;
        /** @brief GPDMA_CxLLR update */
    constexpr std::uint32_t GPDMA_C7LLR_ULL_B_0x1 = 1;

    /** @brief Update GPDMA_CxDAR register from memory This bit is used to control the update of GPDMA_CxDAR from the memory during the link transfer. */
    using GPDMA_C7LLR_UDA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxDAR update (value: 0)
     *          - B_0x1: GPDMA_CxDAR update (value: 1)
     */
        /** @brief no GPDMA_CxDAR update */
    constexpr std::uint32_t GPDMA_C7LLR_UDA_B_0x0 = 0;
        /** @brief GPDMA_CxDAR update */
    constexpr std::uint32_t GPDMA_C7LLR_UDA_B_0x1 = 1;

    /** @brief update GPDMA_CxSAR from memory This bit controls the update of GPDMA_CxSAR from the memory during the link transfer. */
    using GPDMA_C7LLR_USA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxSAR update (value: 0)
     *          - B_0x1: GPDMA_CxSAR update (value: 1)
     */
        /** @brief no GPDMA_CxSAR update */
    constexpr std::uint32_t GPDMA_C7LLR_USA_B_0x0 = 0;
        /** @brief GPDMA_CxSAR update */
    constexpr std::uint32_t GPDMA_C7LLR_USA_B_0x1 = 1;

    /** @brief Update GPDMA_CxBR1 from memory This bit controls the update of GPDMA_CxBR1 from the memory during the link transfer. If UB1 = 0 and if GPDMA_CxLLR different 0, the linked-list is not completed. GPDMA_CxBR1.BNDT[15:0] is then restored to the programmed value after data transfer is completed and before the link transfer. */
    using GPDMA_C7LLR_UB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxBR1 update from memory (GPDMA_CxBR1.BNDT[15:0] restored if any link transfer) (value: 0)
     *          - B_0x1: GPDMA_CxBR1 update (value: 1)
     */
        /** @brief no GPDMA_CxBR1 update from memory (GPDMA_CxBR1.BNDT[15:0] restored if any link transfer) */
    constexpr std::uint32_t GPDMA_C7LLR_UB1_B_0x0 = 0;
        /** @brief GPDMA_CxBR1 update */
    constexpr std::uint32_t GPDMA_C7LLR_UB1_B_0x1 = 1;

    /** @brief Update GPDMA_CxTR2 from memory This bit controls the update of GPDMA_CxTR2 from the memory during the link transfer. */
    using GPDMA_C7LLR_UT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxTR2 update (value: 0)
     *          - B_0x1: GPDMA_CxTR2 update (value: 1)
     */
        /** @brief no GPDMA_CxTR2 update */
    constexpr std::uint32_t GPDMA_C7LLR_UT2_B_0x0 = 0;
        /** @brief GPDMA_CxTR2 update */
    constexpr std::uint32_t GPDMA_C7LLR_UT2_B_0x1 = 1;

    /** @brief Update GPDMA_CxTR1 from memory This bit controls the update of GPDMA_CxTR1 from the memory during the link transfer. */
    using GPDMA_C7LLR_UT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxTR1 update (value: 0)
     *          - B_0x1: GPDMA_CxTR1 update (value: 1)
     */
        /** @brief no GPDMA_CxTR1 update */
    constexpr std::uint32_t GPDMA_C7LLR_UT1_B_0x0 = 0;
        /** @brief GPDMA_CxTR1 update */
    constexpr std::uint32_t GPDMA_C7LLR_UT1_B_0x1 = 1;

}

#endif
