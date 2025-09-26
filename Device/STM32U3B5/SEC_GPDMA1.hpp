/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32U3B5_SEC_GPDMA1_HPP
#define EMBEDDED_PP_STM32U3B5_SEC_GPDMA1_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief GPDMA1 */
namespace STM32U3B5::SEC_GPDMA1 {

    /** @brief GPDMA secure configuration register */
    using GPDMA_SECCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief None 0: non-secure 1: secure */
    using GPDMA_SECCFGR_SEC0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GPDMA_SECCFGR_SEC0_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GPDMA_SECCFGR_SEC0_B_0x1 = 1;

    /** @brief None 0: non-secure 1: secure */
    using GPDMA_SECCFGR_SEC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GPDMA_SECCFGR_SEC1_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GPDMA_SECCFGR_SEC1_B_0x1 = 1;

    /** @brief None 0: non-secure 1: secure */
    using GPDMA_SECCFGR_SEC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GPDMA_SECCFGR_SEC2_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GPDMA_SECCFGR_SEC2_B_0x1 = 1;

    /** @brief None 0: non-secure 1: secure */
    using GPDMA_SECCFGR_SEC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GPDMA_SECCFGR_SEC3_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GPDMA_SECCFGR_SEC3_B_0x1 = 1;

    /** @brief None 0: non-secure 1: secure */
    using GPDMA_SECCFGR_SEC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GPDMA_SECCFGR_SEC4_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GPDMA_SECCFGR_SEC4_B_0x1 = 1;

    /** @brief None 0: non-secure 1: secure */
    using GPDMA_SECCFGR_SEC5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GPDMA_SECCFGR_SEC5_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GPDMA_SECCFGR_SEC5_B_0x1 = 1;

    /** @brief None 0: non-secure 1: secure */
    using GPDMA_SECCFGR_SEC6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GPDMA_SECCFGR_SEC6_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GPDMA_SECCFGR_SEC6_B_0x1 = 1;

    /** @brief None 0: non-secure 1: secure */
    using GPDMA_SECCFGR_SEC7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GPDMA_SECCFGR_SEC7_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GPDMA_SECCFGR_SEC7_B_0x1 = 1;

    /** @brief None 0: non-secure 1: secure */
    using GPDMA_SECCFGR_SEC8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GPDMA_SECCFGR_SEC8_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GPDMA_SECCFGR_SEC8_B_0x1 = 1;

    /** @brief None 0: non-secure 1: secure */
    using GPDMA_SECCFGR_SEC9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GPDMA_SECCFGR_SEC9_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GPDMA_SECCFGR_SEC9_B_0x1 = 1;

    /** @brief None 0: non-secure 1: secure */
    using GPDMA_SECCFGR_SEC10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GPDMA_SECCFGR_SEC10_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GPDMA_SECCFGR_SEC10_B_0x1 = 1;

    /** @brief None 0: non-secure 1: secure */
    using GPDMA_SECCFGR_SEC11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: non-secure (value: 0)
     *          - B_0x1: secure (value: 1)
     */
        /** @brief non-secure */
    constexpr std::uint32_t GPDMA_SECCFGR_SEC11_B_0x0 = 0;
        /** @brief secure */
    constexpr std::uint32_t GPDMA_SECCFGR_SEC11_B_0x1 = 1;

    /** @brief GPDMA privileged configuration register */
    using GPDMA_PRIVCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief None 0: unprivileged 1: privileged */
    using GPDMA_PRIVCFGR_PRIV0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GPDMA_PRIVCFGR_PRIV0_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GPDMA_PRIVCFGR_PRIV0_B_0x1 = 1;

    /** @brief None 0: unprivileged 1: privileged */
    using GPDMA_PRIVCFGR_PRIV1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GPDMA_PRIVCFGR_PRIV1_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GPDMA_PRIVCFGR_PRIV1_B_0x1 = 1;

    /** @brief None 0: unprivileged 1: privileged */
    using GPDMA_PRIVCFGR_PRIV2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GPDMA_PRIVCFGR_PRIV2_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GPDMA_PRIVCFGR_PRIV2_B_0x1 = 1;

    /** @brief None 0: unprivileged 1: privileged */
    using GPDMA_PRIVCFGR_PRIV3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GPDMA_PRIVCFGR_PRIV3_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GPDMA_PRIVCFGR_PRIV3_B_0x1 = 1;

    /** @brief None 0: unprivileged 1: privileged */
    using GPDMA_PRIVCFGR_PRIV4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GPDMA_PRIVCFGR_PRIV4_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GPDMA_PRIVCFGR_PRIV4_B_0x1 = 1;

    /** @brief None 0: unprivileged 1: privileged */
    using GPDMA_PRIVCFGR_PRIV5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GPDMA_PRIVCFGR_PRIV5_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GPDMA_PRIVCFGR_PRIV5_B_0x1 = 1;

    /** @brief None 0: unprivileged 1: privileged */
    using GPDMA_PRIVCFGR_PRIV6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GPDMA_PRIVCFGR_PRIV6_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GPDMA_PRIVCFGR_PRIV6_B_0x1 = 1;

    /** @brief None 0: unprivileged 1: privileged */
    using GPDMA_PRIVCFGR_PRIV7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GPDMA_PRIVCFGR_PRIV7_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GPDMA_PRIVCFGR_PRIV7_B_0x1 = 1;

    /** @brief None 0: unprivileged 1: privileged */
    using GPDMA_PRIVCFGR_PRIV8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GPDMA_PRIVCFGR_PRIV8_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GPDMA_PRIVCFGR_PRIV8_B_0x1 = 1;

    /** @brief None 0: unprivileged 1: privileged */
    using GPDMA_PRIVCFGR_PRIV9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GPDMA_PRIVCFGR_PRIV9_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GPDMA_PRIVCFGR_PRIV9_B_0x1 = 1;

    /** @brief None 0: unprivileged 1: privileged */
    using GPDMA_PRIVCFGR_PRIV10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GPDMA_PRIVCFGR_PRIV10_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GPDMA_PRIVCFGR_PRIV10_B_0x1 = 1;

    /** @brief None 0: unprivileged 1: privileged */
    using GPDMA_PRIVCFGR_PRIV11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: unprivileged (value: 0)
     *          - B_0x1: privileged (value: 1)
     */
        /** @brief unprivileged */
    constexpr std::uint32_t GPDMA_PRIVCFGR_PRIV11_B_0x0 = 0;
        /** @brief privileged */
    constexpr std::uint32_t GPDMA_PRIVCFGR_PRIV11_B_0x1 = 1;

    /** @brief GPDMA configuration lock register */
    using GPDMA_RCFGLOCKR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This bit is cleared after reset and, once set, it cannot be reset until a global GPDMA reset. 0: secure privilege configuration of the channel 0 is writable. 1: secure privilege configuration of the channel 0 is not writable. Note: If TZEN = 0, this register can be written by a privileged access with any secure/non-secure attribute. */
    using GPDMA_RCFGLOCKR_LOCK0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: secure privilege configuration of the channel 0 is writable. (value: 0)
     *          - B_0x1: secure privilege configuration of the channel 0 is not writable. (value: 1)
     */
        /** @brief secure privilege configuration of the channel 0 is writable. */
    constexpr std::uint32_t GPDMA_RCFGLOCKR_LOCK0_B_0x0 = 0;
        /** @brief secure privilege configuration of the channel 0 is not writable. */
    constexpr std::uint32_t GPDMA_RCFGLOCKR_LOCK0_B_0x1 = 1;

    /** @brief This bit is cleared after reset and, once set, it cannot be reset until a global GPDMA reset. 0: secure privilege configuration of the channel 1 is writable. 1: secure privilege configuration of the channel 1 is not writable. Note: If TZEN = 0, this register can be written by a privileged access with any secure/non-secure attribute. */
    using GPDMA_RCFGLOCKR_LOCK1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: secure privilege configuration of the channel 1 is writable. (value: 0)
     *          - B_0x1: secure privilege configuration of the channel 1 is not writable. (value: 1)
     */
        /** @brief secure privilege configuration of the channel 1 is writable. */
    constexpr std::uint32_t GPDMA_RCFGLOCKR_LOCK1_B_0x0 = 0;
        /** @brief secure privilege configuration of the channel 1 is not writable. */
    constexpr std::uint32_t GPDMA_RCFGLOCKR_LOCK1_B_0x1 = 1;

    /** @brief This bit is cleared after reset and, once set, it cannot be reset until a global GPDMA reset. 0: secure privilege configuration of the channel 2 is writable. 1: secure privilege configuration of the channel 2 is not writable. Note: If TZEN = 0, this register can be written by a privileged access with any secure/non-secure attribute. */
    using GPDMA_RCFGLOCKR_LOCK2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: secure privilege configuration of the channel 2 is writable. (value: 0)
     *          - B_0x1: secure privilege configuration of the channel 2 is not writable. (value: 1)
     */
        /** @brief secure privilege configuration of the channel 2 is writable. */
    constexpr std::uint32_t GPDMA_RCFGLOCKR_LOCK2_B_0x0 = 0;
        /** @brief secure privilege configuration of the channel 2 is not writable. */
    constexpr std::uint32_t GPDMA_RCFGLOCKR_LOCK2_B_0x1 = 1;

    /** @brief This bit is cleared after reset and, once set, it cannot be reset until a global GPDMA reset. 0: secure privilege configuration of the channel 3 is writable. 1: secure privilege configuration of the channel 3 is not writable. Note: If TZEN = 0, this register can be written by a privileged access with any secure/non-secure attribute. */
    using GPDMA_RCFGLOCKR_LOCK3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: secure privilege configuration of the channel 3 is writable. (value: 0)
     *          - B_0x1: secure privilege configuration of the channel 3 is not writable. (value: 1)
     */
        /** @brief secure privilege configuration of the channel 3 is writable. */
    constexpr std::uint32_t GPDMA_RCFGLOCKR_LOCK3_B_0x0 = 0;
        /** @brief secure privilege configuration of the channel 3 is not writable. */
    constexpr std::uint32_t GPDMA_RCFGLOCKR_LOCK3_B_0x1 = 1;

    /** @brief This bit is cleared after reset and, once set, it cannot be reset until a global GPDMA reset. 0: secure privilege configuration of the channel 4 is writable. 1: secure privilege configuration of the channel 4 is not writable. Note: If TZEN = 0, this register can be written by a privileged access with any secure/non-secure attribute. */
    using GPDMA_RCFGLOCKR_LOCK4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: secure privilege configuration of the channel 4 is writable. (value: 0)
     *          - B_0x1: secure privilege configuration of the channel 4 is not writable. (value: 1)
     */
        /** @brief secure privilege configuration of the channel 4 is writable. */
    constexpr std::uint32_t GPDMA_RCFGLOCKR_LOCK4_B_0x0 = 0;
        /** @brief secure privilege configuration of the channel 4 is not writable. */
    constexpr std::uint32_t GPDMA_RCFGLOCKR_LOCK4_B_0x1 = 1;

    /** @brief This bit is cleared after reset and, once set, it cannot be reset until a global GPDMA reset. 0: secure privilege configuration of the channel 5 is writable. 1: secure privilege configuration of the channel 5 is not writable. Note: If TZEN = 0, this register can be written by a privileged access with any secure/non-secure attribute. */
    using GPDMA_RCFGLOCKR_LOCK5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: secure privilege configuration of the channel 5 is writable. (value: 0)
     *          - B_0x1: secure privilege configuration of the channel 5 is not writable. (value: 1)
     */
        /** @brief secure privilege configuration of the channel 5 is writable. */
    constexpr std::uint32_t GPDMA_RCFGLOCKR_LOCK5_B_0x0 = 0;
        /** @brief secure privilege configuration of the channel 5 is not writable. */
    constexpr std::uint32_t GPDMA_RCFGLOCKR_LOCK5_B_0x1 = 1;

    /** @brief This bit is cleared after reset and, once set, it cannot be reset until a global GPDMA reset. 0: secure privilege configuration of the channel 6 is writable. 1: secure privilege configuration of the channel 6 is not writable. Note: If TZEN = 0, this register can be written by a privileged access with any secure/non-secure attribute. */
    using GPDMA_RCFGLOCKR_LOCK6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: secure privilege configuration of the channel 6 is writable. (value: 0)
     *          - B_0x1: secure privilege configuration of the channel 6 is not writable. (value: 1)
     */
        /** @brief secure privilege configuration of the channel 6 is writable. */
    constexpr std::uint32_t GPDMA_RCFGLOCKR_LOCK6_B_0x0 = 0;
        /** @brief secure privilege configuration of the channel 6 is not writable. */
    constexpr std::uint32_t GPDMA_RCFGLOCKR_LOCK6_B_0x1 = 1;

    /** @brief This bit is cleared after reset and, once set, it cannot be reset until a global GPDMA reset. 0: secure privilege configuration of the channel 7 is writable. 1: secure privilege configuration of the channel 7 is not writable. Note: If TZEN = 0, this register can be written by a privileged access with any secure/non-secure attribute. */
    using GPDMA_RCFGLOCKR_LOCK7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: secure privilege configuration of the channel 7 is writable. (value: 0)
     *          - B_0x1: secure privilege configuration of the channel 7 is not writable. (value: 1)
     */
        /** @brief secure privilege configuration of the channel 7 is writable. */
    constexpr std::uint32_t GPDMA_RCFGLOCKR_LOCK7_B_0x0 = 0;
        /** @brief secure privilege configuration of the channel 7 is not writable. */
    constexpr std::uint32_t GPDMA_RCFGLOCKR_LOCK7_B_0x1 = 1;

    /** @brief This bit is cleared after reset and, once set, it cannot be reset until a global GPDMA reset. 0: secure privilege configuration of the channel 8 is writable. 1: secure privilege configuration of the channel 8 is not writable. Note: If TZEN = 0, this register can be written by a privileged access with any secure/non-secure attribute. */
    using GPDMA_RCFGLOCKR_LOCK8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: secure privilege configuration of the channel 8 is writable. (value: 0)
     *          - B_0x1: secure privilege configuration of the channel 8 is not writable. (value: 1)
     */
        /** @brief secure privilege configuration of the channel 8 is writable. */
    constexpr std::uint32_t GPDMA_RCFGLOCKR_LOCK8_B_0x0 = 0;
        /** @brief secure privilege configuration of the channel 8 is not writable. */
    constexpr std::uint32_t GPDMA_RCFGLOCKR_LOCK8_B_0x1 = 1;

    /** @brief This bit is cleared after reset and, once set, it cannot be reset until a global GPDMA reset. 0: secure privilege configuration of the channel 9 is writable. 1: secure privilege configuration of the channel 9 is not writable. Note: If TZEN = 0, this register can be written by a privileged access with any secure/non-secure attribute. */
    using GPDMA_RCFGLOCKR_LOCK9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: secure privilege configuration of the channel 9 is writable. (value: 0)
     *          - B_0x1: secure privilege configuration of the channel 9 is not writable. (value: 1)
     */
        /** @brief secure privilege configuration of the channel 9 is writable. */
    constexpr std::uint32_t GPDMA_RCFGLOCKR_LOCK9_B_0x0 = 0;
        /** @brief secure privilege configuration of the channel 9 is not writable. */
    constexpr std::uint32_t GPDMA_RCFGLOCKR_LOCK9_B_0x1 = 1;

    /** @brief This bit is cleared after reset and, once set, it cannot be reset until a global GPDMA reset. 0: secure privilege configuration of the channel 10 is writable. 1: secure privilege configuration of the channel 10 is not writable. Note: If TZEN = 0, this register can be written by a privileged access with any secure/non-secure attribute. */
    using GPDMA_RCFGLOCKR_LOCK10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: secure privilege configuration of the channel 10 is writable. (value: 0)
     *          - B_0x1: secure privilege configuration of the channel 10 is not writable. (value: 1)
     */
        /** @brief secure privilege configuration of the channel 10 is writable. */
    constexpr std::uint32_t GPDMA_RCFGLOCKR_LOCK10_B_0x0 = 0;
        /** @brief secure privilege configuration of the channel 10 is not writable. */
    constexpr std::uint32_t GPDMA_RCFGLOCKR_LOCK10_B_0x1 = 1;

    /** @brief This bit is cleared after reset and, once set, it cannot be reset until a global GPDMA reset. 0: secure privilege configuration of the channel 11 is writable. 1: secure privilege configuration of the channel 11 is not writable. Note: If TZEN = 0, this register can be written by a privileged access with any secure/non-secure attribute. */
    using GPDMA_RCFGLOCKR_LOCK11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: secure privilege configuration of the channel 11 is writable. (value: 0)
     *          - B_0x1: secure privilege configuration of the channel 11 is not writable. (value: 1)
     */
        /** @brief secure privilege configuration of the channel 11 is writable. */
    constexpr std::uint32_t GPDMA_RCFGLOCKR_LOCK11_B_0x0 = 0;
        /** @brief secure privilege configuration of the channel 11 is not writable. */
    constexpr std::uint32_t GPDMA_RCFGLOCKR_LOCK11_B_0x1 = 1;

    /** @brief GPDMA non-secure masked interrupt status register */
    using GPDMA_MISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief None 0: no interrupt occurred on channel 0 1: an interrupt occurred on channel 0 */
    using GPDMA_MISR_MIS0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt occurred on channel 0 (value: 0)
     *          - B_0x1: an interrupt occurred on channel 0 (value: 1)
     */
        /** @brief no interrupt occurred on channel 0 */
    constexpr std::uint32_t GPDMA_MISR_MIS0_B_0x0 = 0;
        /** @brief an interrupt occurred on channel 0 */
    constexpr std::uint32_t GPDMA_MISR_MIS0_B_0x1 = 1;

    /** @brief None 0: no interrupt occurred on channel 1 1: an interrupt occurred on channel 1 */
    using GPDMA_MISR_MIS1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt occurred on channel 1 (value: 0)
     *          - B_0x1: an interrupt occurred on channel 1 (value: 1)
     */
        /** @brief no interrupt occurred on channel 1 */
    constexpr std::uint32_t GPDMA_MISR_MIS1_B_0x0 = 0;
        /** @brief an interrupt occurred on channel 1 */
    constexpr std::uint32_t GPDMA_MISR_MIS1_B_0x1 = 1;

    /** @brief None 0: no interrupt occurred on channel 2 1: an interrupt occurred on channel 2 */
    using GPDMA_MISR_MIS2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt occurred on channel 2 (value: 0)
     *          - B_0x1: an interrupt occurred on channel 2 (value: 1)
     */
        /** @brief no interrupt occurred on channel 2 */
    constexpr std::uint32_t GPDMA_MISR_MIS2_B_0x0 = 0;
        /** @brief an interrupt occurred on channel 2 */
    constexpr std::uint32_t GPDMA_MISR_MIS2_B_0x1 = 1;

    /** @brief None 0: no interrupt occurred on channel 3 1: an interrupt occurred on channel 3 */
    using GPDMA_MISR_MIS3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt occurred on channel 3 (value: 0)
     *          - B_0x1: an interrupt occurred on channel 3 (value: 1)
     */
        /** @brief no interrupt occurred on channel 3 */
    constexpr std::uint32_t GPDMA_MISR_MIS3_B_0x0 = 0;
        /** @brief an interrupt occurred on channel 3 */
    constexpr std::uint32_t GPDMA_MISR_MIS3_B_0x1 = 1;

    /** @brief None 0: no interrupt occurred on channel 4 1: an interrupt occurred on channel 4 */
    using GPDMA_MISR_MIS4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt occurred on channel 4 (value: 0)
     *          - B_0x1: an interrupt occurred on channel 4 (value: 1)
     */
        /** @brief no interrupt occurred on channel 4 */
    constexpr std::uint32_t GPDMA_MISR_MIS4_B_0x0 = 0;
        /** @brief an interrupt occurred on channel 4 */
    constexpr std::uint32_t GPDMA_MISR_MIS4_B_0x1 = 1;

    /** @brief None 0: no interrupt occurred on channel 5 1: an interrupt occurred on channel 5 */
    using GPDMA_MISR_MIS5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt occurred on channel 5 (value: 0)
     *          - B_0x1: an interrupt occurred on channel 5 (value: 1)
     */
        /** @brief no interrupt occurred on channel 5 */
    constexpr std::uint32_t GPDMA_MISR_MIS5_B_0x0 = 0;
        /** @brief an interrupt occurred on channel 5 */
    constexpr std::uint32_t GPDMA_MISR_MIS5_B_0x1 = 1;

    /** @brief None 0: no interrupt occurred on channel 6 1: an interrupt occurred on channel 6 */
    using GPDMA_MISR_MIS6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt occurred on channel 6 (value: 0)
     *          - B_0x1: an interrupt occurred on channel 6 (value: 1)
     */
        /** @brief no interrupt occurred on channel 6 */
    constexpr std::uint32_t GPDMA_MISR_MIS6_B_0x0 = 0;
        /** @brief an interrupt occurred on channel 6 */
    constexpr std::uint32_t GPDMA_MISR_MIS6_B_0x1 = 1;

    /** @brief None 0: no interrupt occurred on channel 7 1: an interrupt occurred on channel 7 */
    using GPDMA_MISR_MIS7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt occurred on channel 7 (value: 0)
     *          - B_0x1: an interrupt occurred on channel 7 (value: 1)
     */
        /** @brief no interrupt occurred on channel 7 */
    constexpr std::uint32_t GPDMA_MISR_MIS7_B_0x0 = 0;
        /** @brief an interrupt occurred on channel 7 */
    constexpr std::uint32_t GPDMA_MISR_MIS7_B_0x1 = 1;

    /** @brief None 0: no interrupt occurred on channel 8 1: an interrupt occurred on channel 8 */
    using GPDMA_MISR_MIS8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt occurred on channel 8 (value: 0)
     *          - B_0x1: an interrupt occurred on channel 8 (value: 1)
     */
        /** @brief no interrupt occurred on channel 8 */
    constexpr std::uint32_t GPDMA_MISR_MIS8_B_0x0 = 0;
        /** @brief an interrupt occurred on channel 8 */
    constexpr std::uint32_t GPDMA_MISR_MIS8_B_0x1 = 1;

    /** @brief None 0: no interrupt occurred on channel 9 1: an interrupt occurred on channel 9 */
    using GPDMA_MISR_MIS9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt occurred on channel 9 (value: 0)
     *          - B_0x1: an interrupt occurred on channel 9 (value: 1)
     */
        /** @brief no interrupt occurred on channel 9 */
    constexpr std::uint32_t GPDMA_MISR_MIS9_B_0x0 = 0;
        /** @brief an interrupt occurred on channel 9 */
    constexpr std::uint32_t GPDMA_MISR_MIS9_B_0x1 = 1;

    /** @brief None 0: no interrupt occurred on channel 10 1: an interrupt occurred on channel 10 */
    using GPDMA_MISR_MIS10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt occurred on channel 10 (value: 0)
     *          - B_0x1: an interrupt occurred on channel 10 (value: 1)
     */
        /** @brief no interrupt occurred on channel 10 */
    constexpr std::uint32_t GPDMA_MISR_MIS10_B_0x0 = 0;
        /** @brief an interrupt occurred on channel 10 */
    constexpr std::uint32_t GPDMA_MISR_MIS10_B_0x1 = 1;

    /** @brief None 0: no interrupt occurred on channel 11 1: an interrupt occurred on channel 11 */
    using GPDMA_MISR_MIS11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt occurred on channel 11 (value: 0)
     *          - B_0x1: an interrupt occurred on channel 11 (value: 1)
     */
        /** @brief no interrupt occurred on channel 11 */
    constexpr std::uint32_t GPDMA_MISR_MIS11_B_0x0 = 0;
        /** @brief an interrupt occurred on channel 11 */
    constexpr std::uint32_t GPDMA_MISR_MIS11_B_0x1 = 1;

    /** @brief GPDMA secure masked interrupt status register */
    using GPDMA_SMISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief None 0: no interrupt occurred on the secure channel 0 1: an interrupt occurred on the secure channel 0 */
    using GPDMA_SMISR_MIS0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt occurred on the secure channel 0 (value: 0)
     *          - B_0x1: an interrupt occurred on the secure channel 0 (value: 1)
     */
        /** @brief no interrupt occurred on the secure channel 0 */
    constexpr std::uint32_t GPDMA_SMISR_MIS0_B_0x0 = 0;
        /** @brief an interrupt occurred on the secure channel 0 */
    constexpr std::uint32_t GPDMA_SMISR_MIS0_B_0x1 = 1;

    /** @brief None 0: no interrupt occurred on the secure channel 1 1: an interrupt occurred on the secure channel 1 */
    using GPDMA_SMISR_MIS1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt occurred on the secure channel 1 (value: 0)
     *          - B_0x1: an interrupt occurred on the secure channel 1 (value: 1)
     */
        /** @brief no interrupt occurred on the secure channel 1 */
    constexpr std::uint32_t GPDMA_SMISR_MIS1_B_0x0 = 0;
        /** @brief an interrupt occurred on the secure channel 1 */
    constexpr std::uint32_t GPDMA_SMISR_MIS1_B_0x1 = 1;

    /** @brief None 0: no interrupt occurred on the secure channel 2 1: an interrupt occurred on the secure channel 2 */
    using GPDMA_SMISR_MIS2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt occurred on the secure channel 2 (value: 0)
     *          - B_0x1: an interrupt occurred on the secure channel 2 (value: 1)
     */
        /** @brief no interrupt occurred on the secure channel 2 */
    constexpr std::uint32_t GPDMA_SMISR_MIS2_B_0x0 = 0;
        /** @brief an interrupt occurred on the secure channel 2 */
    constexpr std::uint32_t GPDMA_SMISR_MIS2_B_0x1 = 1;

    /** @brief None 0: no interrupt occurred on the secure channel 3 1: an interrupt occurred on the secure channel 3 */
    using GPDMA_SMISR_MIS3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt occurred on the secure channel 3 (value: 0)
     *          - B_0x1: an interrupt occurred on the secure channel 3 (value: 1)
     */
        /** @brief no interrupt occurred on the secure channel 3 */
    constexpr std::uint32_t GPDMA_SMISR_MIS3_B_0x0 = 0;
        /** @brief an interrupt occurred on the secure channel 3 */
    constexpr std::uint32_t GPDMA_SMISR_MIS3_B_0x1 = 1;

    /** @brief None 0: no interrupt occurred on the secure channel 4 1: an interrupt occurred on the secure channel 4 */
    using GPDMA_SMISR_MIS4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt occurred on the secure channel 4 (value: 0)
     *          - B_0x1: an interrupt occurred on the secure channel 4 (value: 1)
     */
        /** @brief no interrupt occurred on the secure channel 4 */
    constexpr std::uint32_t GPDMA_SMISR_MIS4_B_0x0 = 0;
        /** @brief an interrupt occurred on the secure channel 4 */
    constexpr std::uint32_t GPDMA_SMISR_MIS4_B_0x1 = 1;

    /** @brief None 0: no interrupt occurred on the secure channel 5 1: an interrupt occurred on the secure channel 5 */
    using GPDMA_SMISR_MIS5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt occurred on the secure channel 5 (value: 0)
     *          - B_0x1: an interrupt occurred on the secure channel 5 (value: 1)
     */
        /** @brief no interrupt occurred on the secure channel 5 */
    constexpr std::uint32_t GPDMA_SMISR_MIS5_B_0x0 = 0;
        /** @brief an interrupt occurred on the secure channel 5 */
    constexpr std::uint32_t GPDMA_SMISR_MIS5_B_0x1 = 1;

    /** @brief None 0: no interrupt occurred on the secure channel 6 1: an interrupt occurred on the secure channel 6 */
    using GPDMA_SMISR_MIS6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt occurred on the secure channel 6 (value: 0)
     *          - B_0x1: an interrupt occurred on the secure channel 6 (value: 1)
     */
        /** @brief no interrupt occurred on the secure channel 6 */
    constexpr std::uint32_t GPDMA_SMISR_MIS6_B_0x0 = 0;
        /** @brief an interrupt occurred on the secure channel 6 */
    constexpr std::uint32_t GPDMA_SMISR_MIS6_B_0x1 = 1;

    /** @brief None 0: no interrupt occurred on the secure channel 7 1: an interrupt occurred on the secure channel 7 */
    using GPDMA_SMISR_MIS7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt occurred on the secure channel 7 (value: 0)
     *          - B_0x1: an interrupt occurred on the secure channel 7 (value: 1)
     */
        /** @brief no interrupt occurred on the secure channel 7 */
    constexpr std::uint32_t GPDMA_SMISR_MIS7_B_0x0 = 0;
        /** @brief an interrupt occurred on the secure channel 7 */
    constexpr std::uint32_t GPDMA_SMISR_MIS7_B_0x1 = 1;

    /** @brief None 0: no interrupt occurred on the secure channel 8 1: an interrupt occurred on the secure channel 8 */
    using GPDMA_SMISR_MIS8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt occurred on the secure channel 8 (value: 0)
     *          - B_0x1: an interrupt occurred on the secure channel 8 (value: 1)
     */
        /** @brief no interrupt occurred on the secure channel 8 */
    constexpr std::uint32_t GPDMA_SMISR_MIS8_B_0x0 = 0;
        /** @brief an interrupt occurred on the secure channel 8 */
    constexpr std::uint32_t GPDMA_SMISR_MIS8_B_0x1 = 1;

    /** @brief None 0: no interrupt occurred on the secure channel 9 1: an interrupt occurred on the secure channel 9 */
    using GPDMA_SMISR_MIS9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt occurred on the secure channel 9 (value: 0)
     *          - B_0x1: an interrupt occurred on the secure channel 9 (value: 1)
     */
        /** @brief no interrupt occurred on the secure channel 9 */
    constexpr std::uint32_t GPDMA_SMISR_MIS9_B_0x0 = 0;
        /** @brief an interrupt occurred on the secure channel 9 */
    constexpr std::uint32_t GPDMA_SMISR_MIS9_B_0x1 = 1;

    /** @brief None 0: no interrupt occurred on the secure channel 10 1: an interrupt occurred on the secure channel 10 */
    using GPDMA_SMISR_MIS10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt occurred on the secure channel 10 (value: 0)
     *          - B_0x1: an interrupt occurred on the secure channel 10 (value: 1)
     */
        /** @brief no interrupt occurred on the secure channel 10 */
    constexpr std::uint32_t GPDMA_SMISR_MIS10_B_0x0 = 0;
        /** @brief an interrupt occurred on the secure channel 10 */
    constexpr std::uint32_t GPDMA_SMISR_MIS10_B_0x1 = 1;

    /** @brief None 0: no interrupt occurred on the secure channel 11 1: an interrupt occurred on the secure channel 11 */
    using GPDMA_SMISR_MIS11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt occurred on the secure channel 11 (value: 0)
     *          - B_0x1: an interrupt occurred on the secure channel 11 (value: 1)
     */
        /** @brief no interrupt occurred on the secure channel 11 */
    constexpr std::uint32_t GPDMA_SMISR_MIS11_B_0x0 = 0;
        /** @brief an interrupt occurred on the secure channel 11 */
    constexpr std::uint32_t GPDMA_SMISR_MIS11_B_0x1 = 1;

    /** @brief GPDMA channel 0 linked-list base address register */
    using GPDMA_C0LBAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief None */
    using GPDMA_C0LBAR_LBA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 0 flag clear register */
    using GPDMA_C0FCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief None 0: no effect 1: corresponding TCF flag cleared */
    using GPDMA_C0FCR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding TCF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C0FCR_TCF_B_0x0 = 0;
        /** @brief corresponding TCF flag cleared */
    constexpr std::uint32_t GPDMA_C0FCR_TCF_B_0x1 = 1;

    /** @brief None 0: no effect 1: corresponding HTF flag cleared */
    using GPDMA_C0FCR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding HTF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C0FCR_HTF_B_0x0 = 0;
        /** @brief corresponding HTF flag cleared */
    constexpr std::uint32_t GPDMA_C0FCR_HTF_B_0x1 = 1;

    /** @brief None 0: no effect 1: corresponding DTEF flag cleared */
    using GPDMA_C0FCR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding DTEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C0FCR_DTEF_B_0x0 = 0;
        /** @brief corresponding DTEF flag cleared */
    constexpr std::uint32_t GPDMA_C0FCR_DTEF_B_0x1 = 1;

    /** @brief None 0: no effect 1: corresponding ULEF flag cleared */
    using GPDMA_C0FCR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding ULEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C0FCR_ULEF_B_0x0 = 0;
        /** @brief corresponding ULEF flag cleared */
    constexpr std::uint32_t GPDMA_C0FCR_ULEF_B_0x1 = 1;

    /** @brief None 0: no effect 1: corresponding USEF flag cleared */
    using GPDMA_C0FCR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding USEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C0FCR_USEF_B_0x0 = 0;
        /** @brief corresponding USEF flag cleared */
    constexpr std::uint32_t GPDMA_C0FCR_USEF_B_0x1 = 1;

    /** @brief None 0: no effect 1: corresponding SUSPF flag cleared */
    using GPDMA_C0FCR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding SUSPF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C0FCR_SUSPF_B_0x0 = 0;
        /** @brief corresponding SUSPF flag cleared */
    constexpr std::uint32_t GPDMA_C0FCR_SUSPF_B_0x1 = 1;

    /** @brief None 0: no effect 1: corresponding TOF flag cleared */
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
    /** @brief This idle flag is deasserted by hardware when the channel is enabled (GPDMA_C0CR.EN = 1) with a valid channel configuration (no USEF to be immediately reported). This idle flag is asserted after hard reset or by hardware when the channel is back in idle state (in suspended or disabled state). 0: channel not in idle state 1: channel in idle state */
    using GPDMA_C0SR_IDLEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: channel not in idle state (value: 0)
     *          - B_0x1: channel in idle state (value: 1)
     */
        /** @brief channel not in idle state */
    constexpr std::uint32_t GPDMA_C0SR_IDLEF_B_0x0 = 0;
        /** @brief channel in idle state */
    constexpr std::uint32_t GPDMA_C0SR_IDLEF_B_0x1 = 1;

    /** @brief A transfer complete event is either a block transfer complete, a 2D/repeated block transfer complete, or a LLI transfer complete including the upload of the next LLI if any, or the full linked-list completion, depending on the transfer complete event mode (GPDMA_C0TR2.TCEM[1:0]). 0: no transfer complete event 1: a transfer complete event occurred */
    using GPDMA_C0SR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no transfer complete event (value: 0)
     *          - B_0x1: a transfer complete event occurred (value: 1)
     */
        /** @brief no transfer complete event */
    constexpr std::uint32_t GPDMA_C0SR_TCF_B_0x0 = 0;
        /** @brief a transfer complete event occurred */
    constexpr std::uint32_t GPDMA_C0SR_TCF_B_0x1 = 1;

    /** @brief A half transfer event is either a half block transfer or a half 2D/repeated block transfer, depending on the transfer complete event mode (GPDMA_C0TR2.TCEM[1:0]). A half block transfer occurs when half of the bytes of the source block size (rounded up integer of GPDMA_C0BR1.BNDT[15:0]/2) has been transferred to the destination. A half 2D/repeated block transfer occurs when half of the repeated blocks (rounded up integer of (GPDMA_C0BR1.BRC[10:0]+1)/2)) has been transferred to the destination. 0: no half transfer event 1: a half transfer event occurred */
    using GPDMA_C0SR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no half transfer event (value: 0)
     *          - B_0x1: a half transfer event occurred (value: 1)
     */
        /** @brief no half transfer event */
    constexpr std::uint32_t GPDMA_C0SR_HTF_B_0x0 = 0;
        /** @brief a half transfer event occurred */
    constexpr std::uint32_t GPDMA_C0SR_HTF_B_0x1 = 1;

    /** @brief None 0: no data transfer error event 1: a master bus error event occurred on a data transfer */
    using GPDMA_C0SR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no data transfer error event (value: 0)
     *          - B_0x1: a master bus error event occurred on a data transfer (value: 1)
     */
        /** @brief no data transfer error event */
    constexpr std::uint32_t GPDMA_C0SR_DTEF_B_0x0 = 0;
        /** @brief a master bus error event occurred on a data transfer */
    constexpr std::uint32_t GPDMA_C0SR_DTEF_B_0x1 = 1;

    /** @brief None 0: no update link transfer error event 1: a master bus error event occurred while updating a linked-list register from memory */
    using GPDMA_C0SR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no update link transfer error event (value: 0)
     *          - B_0x1: a master bus error event occurred while updating a linked-list register from memory (value: 1)
     */
        /** @brief no update link transfer error event */
    constexpr std::uint32_t GPDMA_C0SR_ULEF_B_0x0 = 0;
        /** @brief a master bus error event occurred while updating a linked-list register from memory */
    constexpr std::uint32_t GPDMA_C0SR_ULEF_B_0x1 = 1;

    /** @brief None 0: no user setting error event 1: a user setting error event occurred */
    using GPDMA_C0SR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no user setting error event (value: 0)
     *          - B_0x1: a user setting error event occurred (value: 1)
     */
        /** @brief no user setting error event */
    constexpr std::uint32_t GPDMA_C0SR_USEF_B_0x0 = 0;
        /** @brief a user setting error event occurred */
    constexpr std::uint32_t GPDMA_C0SR_USEF_B_0x1 = 1;

    /** @brief None 0: no completed suspension event 1: a completed suspension event occurred */
    using GPDMA_C0SR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no completed suspension event (value: 0)
     *          - B_0x1: a completed suspension event occurred (value: 1)
     */
        /** @brief no completed suspension event */
    constexpr std::uint32_t GPDMA_C0SR_SUSPF_B_0x0 = 0;
        /** @brief a completed suspension event occurred */
    constexpr std::uint32_t GPDMA_C0SR_SUSPF_B_0x1 = 1;

    /** @brief None 0: no trigger overrun event 1: a trigger overrun event occurred */
    using GPDMA_C0SR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no trigger overrun event (value: 0)
     *          - B_0x1: a trigger overrun event occurred (value: 1)
     */
        /** @brief no trigger overrun event */
    constexpr std::uint32_t GPDMA_C0SR_TOF_B_0x0 = 0;
        /** @brief a trigger overrun event occurred */
    constexpr std::uint32_t GPDMA_C0SR_TOF_B_0x1 = 1;

    /** @brief Number of available write beats in the FIFO, in units of the programmed destination data width (see GPDMA_C0TR1.DDW_LOG2[1:0], in units of bytes, half-words, or words). Note: After having suspended an active transfer, the user may need to read FIFOL[7:0], additionally to GPDMA_C0BR1.BDNT[15:0] and GPDMA_C0BR1.BRC[10:0], to know how many data have been transferred to the destination. Before reading, the user may wait for the transfer to be suspended (GPDMA_C0SR.SUSPF = 1). */
    using GPDMA_C0SR_FIFOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 0 control register */
    using GPDMA_C0CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x64, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Writing 1 into the field RESET (bit 1) causes the hardware to de-assert this bit, whatever is written into this bit 0. Else: this bit is deasserted by hardware when there is a transfer error (master bus error or user setting error) or when there is a channel transfer complete (channel ready to be configured, for example if LSM = 1 at the end of a single execution of the LLI). Else, this bit can be asserted by software. Writing 0 into this EN bit is ignored. 0: write: ignored, read: channel disabled 1: write: enable channel, read: channel enabled */
    using GPDMA_C0CR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write: ignored, read: channel disabled (value: 0)
     *          - B_0x1: write: enable channel, read: channel enabled (value: 1)
     */
        /** @brief write: ignored, read: channel disabled */
    constexpr std::uint32_t GPDMA_C0CR_EN_B_0x0 = 0;
        /** @brief write: enable channel, read: channel enabled */
    constexpr std::uint32_t GPDMA_C0CR_EN_B_0x1 = 1;

    /** @brief This bit is write only. Writing 0 has no impact. Writing 1 implies the reset of the following: the FIFO, the channel internal state, SUSP and EN bits (whatever is written receptively in bit 2 and bit 0). The reset is effective when the channel is in steady state, meaning one of the following: - active channel in suspended state (GPDMA_C0SR.SUSPF = 1 and GPDMA_C0SR.IDLEF=GPDMA_C0CR.EN = 1) - channel in disabled state (GPDMA_C0SR.IDLEF = 1 and GPDMA_C0CR.EN = 0). After writing a RESET, to continue using this channel, the user must explicitly reconfigure the channel including the hardware-modified configuration registers (GPDMA_C0BR1, GPDMA_CxSAR and GPDMA_CxDAR) before enabling again the channel (see the programming sequence in less than xe6 [GPDMA_abort_restart/ID00-1465]/>). 0: no channel reset 1: channel reset */
    using GPDMA_C0CR_RESET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no channel reset (value: 0)
     *          - B_0x1: channel reset (value: 1)
     */
        /** @brief no channel reset */
    constexpr std::uint32_t GPDMA_C0CR_RESET_B_0x0 = 0;
        /** @brief channel reset */
    constexpr std::uint32_t GPDMA_C0CR_RESET_B_0x1 = 1;

    /** @brief Writing 1 into the field RESET (bit 1) causes the hardware to de-assert this bit, whatever is written into this bit 2. Else: Software must write 1 in order to suspend an active channel (channel with an ongoing GPDMA transfer over its master ports). The software must write 0 in order to resume a suspended channel, following the programming sequence detailed in less than xe5 [GPDMA_channel_suspend_and_resume/ID00-1456]/>. 0: write: resume channel, read: channel not suspended 1: write: suspend channel, read: channel suspended. */
    using GPDMA_C0CR_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write: resume channel, read: channel not suspended (value: 0)
     *          - B_0x1: write: suspend channel, read: channel suspended. (value: 1)
     */
        /** @brief write: resume channel, read: channel not suspended */
    constexpr std::uint32_t GPDMA_C0CR_SUSP_B_0x0 = 0;
        /** @brief write: suspend channel, read: channel suspended. */
    constexpr std::uint32_t GPDMA_C0CR_SUSP_B_0x1 = 1;

    /** @brief None 0: interrupt disabled 1: interrupt enabled */
    using GPDMA_C0CR_TCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C0CR_TCIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C0CR_TCIE_B_0x1 = 1;

    /** @brief None 0: interrupt disabled 1: interrupt enabled */
    using GPDMA_C0CR_HTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C0CR_HTIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C0CR_HTIE_B_0x1 = 1;

    /** @brief None 0: interrupt disabled 1: interrupt enabled */
    using GPDMA_C0CR_DTEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C0CR_DTEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C0CR_DTEIE_B_0x1 = 1;

    /** @brief None 0: interrupt disabled 1: interrupt enabled */
    using GPDMA_C0CR_ULEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C0CR_ULEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C0CR_ULEIE_B_0x1 = 1;

    /** @brief None 0: interrupt disabled 1: interrupt enabled */
    using GPDMA_C0CR_USEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C0CR_USEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C0CR_USEIE_B_0x1 = 1;

    /** @brief None 0: interrupt disabled 1: interrupt enabled */
    using GPDMA_C0CR_SUSPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C0CR_SUSPIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C0CR_SUSPIE_B_0x1 = 1;

    /** @brief None 0: interrupt disabled 1: interrupt enabled */
    using GPDMA_C0CR_TOIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C0CR_TOIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C0CR_TOIE_B_0x1 = 1;

    /** @brief First the (possible 1D/repeated) block transfer is executed as defined by the current internal register file until GPDMA_C0BR1.BNDT[15:0] = 0 and GPDMA_C0BR1.BRC[10:0] = 0. Secondly the next linked-list data structure is conditionally uploaded from memory as defined by GPDMA_C0LLR. Then channel execution is completed. 0: channel executed for the full linked-list and completed at the end of the last LLI (GPDMA_C0LLR = 0). The 16 low-significant bits of the link address are null (LA[15:0] = 0) and all the update bits are null (UT1 = UB1 = UT2 = USA = UDA = ULL = 0 and UT3 = UB2 = 0). Then GPDMA_C0BR1.BNDT[15:0] = 0 and GPDMA_C0BR1.BRC[10:0] = 0. 1: channel executed once for the current LLI Note: This bit must be written when EN = 0. This bit is read-only when EN = 1. */
    using GPDMA_C0CR_LSM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: channel executed for the full linked-list and completed at the end of the last LLI (GPDMA_C0LLR = 0). The 16 low-significant bits of the link address are null (LA[15:0] = 0) and all the update bits are null (UT1 = UB1 = UT2 = USA = UDA = ULL = 0 and UT3 = UB2 = 0). Then GPDMA_C0BR1.BNDT[15:0] = 0 and GPDMA_C0BR1.BRC[10:0] = 0. (value: 0)
     *          - B_0x1: channel executed once for the current LLI (value: 1)
     */
        /** @brief channel executed for the full linked-list and completed at the end of the last LLI (GPDMA_C0LLR = 0). The 16 low-significant bits of the link address are null (LA[15:0] = 0) and all the update bits are null (UT1 = UB1 = UT2 = USA = UDA = ULL = 0 and UT3 = UB2 = 0). Then GPDMA_C0BR1.BNDT[15:0] = 0 and GPDMA_C0BR1.BRC[10:0] = 0. */
    constexpr std::uint32_t GPDMA_C0CR_LSM_B_0x0 = 0;
        /** @brief channel executed once for the current LLI */
    constexpr std::uint32_t GPDMA_C0CR_LSM_B_0x1 = 1;

    /** @brief This bit is used to allocate the master port for the update of the GPDMA linked-list registers from the memory. 0: port 0 (AHB) allocated 1: port 1 (AHB) allocated Note: This bit must be written when EN = 0. This bit is read-only when EN = 1. */
    using GPDMA_C0CR_LAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C0CR_LAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C0CR_LAP_B_0x1 = 1;

    /** @brief None 00: low priority, low weight 01: low priority, mid weight 10: low priority, high weight 11: high priority Note: This bit must be written when EN = 0. This bit is read-only when EN = 1. */
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
    /** @brief None 00: byte 01: half-word (2 bytes) 10: word (4 bytes) 11: user setting error reported and no transfer issued Note: Setting a 8-byte data width causes a user setting error to be reported and no transfer is issued. +: A source block size must be a multiple of the source data width (GPDMA_C0BR1.BNDT[2:0] versus SDW_LOG2[1:0]). Otherwise, a user setting error is reported and no transfer is issued. +: A source burst transfer must have an aligned address with its data width (start address GPDMA_CxSAR[2:0] versus SDW_LOG2[1:0]). Otherwise, a user setting error is reported and none transfer is issued. */
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

    /** @brief The source address, pointed by GPDMA_CxSAR, is kept constant after a burst beat/single transfer or is incremented by the offset value corresponding to a contiguous data after a burst beat/single transfer. 0: fixed burst 1: contiguously incremented burst */
    using GPDMA_C0TR1_SINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fixed burst (value: 0)
     *          - B_0x1: contiguously incremented burst (value: 1)
     */
        /** @brief fixed burst */
    constexpr std::uint32_t GPDMA_C0TR1_SINC_B_0x0 = 0;
        /** @brief contiguously incremented burst */
    constexpr std::uint32_t GPDMA_C0TR1_SINC_B_0x1 = 1;

    /** @brief The burst length unit is one data named beat within a burst. If SBL_1[5:0] = 0, the burst can be named as single. Each data/beat has a width defined by the destination data width SDW_LOG2[1:0]. Note: If a burst transfer crossed a 1-Kbyte address boundary on a AHB transfer, the GPDMA modifies and shortens the programmed burst into singles or bursts of lower length, to be compliant with the AHB protocol. +: If a burst transfer is of length greater than the FIFO size of the channel 0, the GPDMA modifies and shortens the programmed burst into singles or bursts of lower length, to be compliant with the FIFO size. Transfer performance is lower, with GPDMA re-arbitration between effective and lower singles/bursts, but the data integrity is guaranteed. */
    using GPDMA_C0TR1_SBL_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief If DDW_LOG2[1:0] = SDW_LOG2[1:0]: if the data width of a burst destination transfer is equal to the data width of a burst source transfer, these bits are ignored. */
    using GPDMA_C0TR1_PAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0_COND1: COND1 is [PAM_1] source data is transferred as right aligned, padded with 0s up to the destination data width (value: 0)
     *          - B_0x1_COND1: COND1 is [PAM_1] source data is transferred as right aligned, sign extended up to the destination data width (value: 1)
     *          - B_0x2_COND1: COND1 is [PAM_1] successive source data are FIFO queued and packed at the destination data width, in a left (LSB) to right (MSB) order (named little endian), before a destination transfer (value: 2)
     *          - B_0x3_COND1: COND1 is [PAM_1] successive source data are FIFO queued and packed at the destination data width, in a left (LSB) to right (MSB) order (named little endian), before a destination transfer (value: 3)
     */
        /** @brief COND1 is [PAM_1] source data is transferred as right aligned, padded with 0s up to the destination data width */
    constexpr std::uint32_t GPDMA_C0TR1_PAM_B_0x0_COND1 = 0;
        /** @brief COND1 is [PAM_1] source data is transferred as right aligned, sign extended up to the destination data width */
    constexpr std::uint32_t GPDMA_C0TR1_PAM_B_0x1_COND1 = 1;
        /** @brief COND1 is [PAM_1] successive source data are FIFO queued and packed at the destination data width, in a left (LSB) to right (MSB) order (named little endian), before a destination transfer */
    constexpr std::uint32_t GPDMA_C0TR1_PAM_B_0x2_COND1 = 2;
        /** @brief COND1 is [PAM_1] successive source data are FIFO queued and packed at the destination data width, in a left (LSB) to right (MSB) order (named little endian), before a destination transfer */
    constexpr std::uint32_t GPDMA_C0TR1_PAM_B_0x3_COND1 = 3;

    /** @brief If the source data width is shorter than a word, this bit is ignored. If the source data width is a word: 0: no byte-based exchange within the unaligned half-word of each source word 1: the two consecutive bytes within the unaligned half-word of each source word are exchanged. */
    using GPDMA_C0TR1_SBx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no byte-based exchange within the unaligned half-word of each source word (value: 0)
     *          - B_0x1: the two consecutive bytes within the unaligned half-word of each source word are exchanged. (value: 1)
     */
        /** @brief no byte-based exchange within the unaligned half-word of each source word */
    constexpr std::uint32_t GPDMA_C0TR1_SBx_B_0x0 = 0;
        /** @brief the two consecutive bytes within the unaligned half-word of each source word are exchanged. */
    constexpr std::uint32_t GPDMA_C0TR1_SBx_B_0x1 = 1;

    /** @brief This bit is used to allocate the master port for the source transfer 0: port 0 (AHB) allocated 1: port 1 (AHB) allocated Note: This bit must be written when EN = 0. This bit is read-only when EN = 1. */
    using GPDMA_C0TR1_SAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C0TR1_SAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C0TR1_SAP_B_0x1 = 1;

    /** @brief If GPDMA_SECCFGR.SEC0 = 1 and the access is secure: This is a secure register bit. This bit can only be read by a secure software. This bit must be written by a secure software when GPDMA_SECCFGR.SEC0 = 1. A secure write is ignored when GPDMA_SECCFGR.SEC0 = 0. When GPDMA_SECCFGR.SEC0 is deasserted, this SSEC bit is also deasserted by hardware (on a secure reconfiguration of the channel as non-secure), and the GPDMA transfer from the source is non-secure. 0: GPDMA transfer non-secure 1: GPDMA transfer secure */
    using GPDMA_C0TR1_SSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPDMA transfer non-secure (value: 0)
     *          - B_0x1: GPDMA transfer secure (value: 1)
     */
        /** @brief GPDMA transfer non-secure */
    constexpr std::uint32_t GPDMA_C0TR1_SSEC_B_0x0 = 0;
        /** @brief GPDMA transfer secure */
    constexpr std::uint32_t GPDMA_C0TR1_SSEC_B_0x1 = 1;

    /** @brief None 00: byte 01: half-word (2 bytes) 10: word (4 bytes) 11: user setting error reported and no transfer issued Note: Setting a 8-byte data width causes a user setting error to be reported and none transfer is issued. +: A destination burst transfer must have an aligned address with its data width (start address GPDMA_CxDAR[2:0] and address offset GPDMA_CxTR3.DAO[2:0], versus DDW_LOG2[1:0]). Otherwise a user setting error is reported and no transfer is issued. */
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

    /** @brief The destination address, pointed by GPDMA_CxDAR, is kept constant after a burst beat/single transfer, or is incremented by the offset value corresponding to a contiguous data after a burst beat/single transfer. 0: fixed burst 1: contiguously incremented burst */
    using GPDMA_C0TR1_DINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fixed burst (value: 0)
     *          - B_0x1: contiguously incremented burst (value: 1)
     */
        /** @brief fixed burst */
    constexpr std::uint32_t GPDMA_C0TR1_DINC_B_0x0 = 0;
        /** @brief contiguously incremented burst */
    constexpr std::uint32_t GPDMA_C0TR1_DINC_B_0x1 = 1;

    /** @brief The burst length unit is one data named beat within a burst. If DBL_1[5:0] = 0, the burst can be named as single. Each data/beat has a width defined by the destination data width DDW_LOG2[1:0]. Note: If a burst transfer crossed a 1-Kbyte address boundary on a AHB transfer, the GPDMA modifies and shortens the programmed burst into singles or bursts of lower length, to be compliant with the AHB protocol. +: If a burst transfer is of length greater than the FIFO size of the channel 0, the GPDMA modifies and shortens the programmed burst into singles or bursts of lower length, to be compliant with the FIFO size. Transfer performance is lower, with GPDMA re-arbitration between effective and lower singles/bursts, but the data integrity is guaranteed. */
    using GPDMA_C0TR1_DBL_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief If the destination data size is a byte, this bit is ignored. If the destination data size is not a byte: 0: no byte-based exchange within half-word 1: the two consecutive (post PAM) bytes are exchanged in each destination half-word. */
    using GPDMA_C0TR1_DBx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no byte-based exchange within half-word (value: 0)
     *          - B_0x1: the two consecutive (post PAM) bytes are exchanged in each destination half-word. (value: 1)
     */
        /** @brief no byte-based exchange within half-word */
    constexpr std::uint32_t GPDMA_C0TR1_DBx_B_0x0 = 0;
        /** @brief the two consecutive (post PAM) bytes are exchanged in each destination half-word. */
    constexpr std::uint32_t GPDMA_C0TR1_DBx_B_0x1 = 1;

    /** @brief If the destination data size is shorter than a word, this bit is ignored. If the destination data size is a word: 0: no halfword-based exchanged within word 1: the two consecutive (post PAM) half-words are exchanged in each destination word. */
    using GPDMA_C0TR1_DHx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no halfword-based exchanged within word (value: 0)
     *          - B_0x1: the two consecutive (post PAM) half-words are exchanged in each destination word. (value: 1)
     */
        /** @brief no halfword-based exchanged within word */
    constexpr std::uint32_t GPDMA_C0TR1_DHx_B_0x0 = 0;
        /** @brief the two consecutive (post PAM) half-words are exchanged in each destination word. */
    constexpr std::uint32_t GPDMA_C0TR1_DHx_B_0x1 = 1;

    /** @brief This bit is used to allocate the master port for the destination transfer 0: port 0 (AHB) allocated 1: port 1 (AHB) allocated Note: This bit must be written when EN = 0. This bit is read-only when EN = 1. */
    using GPDMA_C0TR1_DAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C0TR1_DAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C0TR1_DAP_B_0x1 = 1;

    /** @brief If GPDMA_SECCFGR.SEC0 = 1 and the access is secure: This is a secure register bit. This bit can only be read by a secure software. This bit must be written by a secure software when GPDMA_SECCFGR.SEC0 = 1. A secure write is ignored when GPDMA_SECCFGR.SEC0 = 0. When GPDMA_SECCFGR.SEC0 is deasserted, this DSEC bit is also deasserted by hardware (on a secure reconfiguration of the channel as non-secure), and the GPDMA transfer to the destination is non-secure. 0: GPDMA transfer non-secure 1: GPDMA transfer secure */
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
    /** @brief These bits are ignored if channel 0 is activated (GPDMA_C0CR.EN asserted) with SWREQ=1 (software request for a memory-to-memory transfer). Else, the selected hardware request is internally taken into account as per less than xe4 [GPDMA_requests]/>. The user must not assign a same input hardware request (same REQSEL[6:0] value) to different active GPDMA channels (GPDMA_C0CR.EN = 1 and GPDMA_C0TR2.SWREQ = 0 for these channels). GPDMA is not intended to hardware support the case of simultaneous enabled channels incorrectly configured with a same hardware peripheral request signal, and there is no user setting error reporting. */
    using GPDMA_C0TR2_REQSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This bit is internally taken into account when GPDMA_C0CR.EN is asserted. 0: no software request. The selected hardware request REQSEL[6:0] is taken into account. 1: software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[6:0] is ignored. */
    using GPDMA_C0TR2_SWREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no software request. The selected hardware request REQSEL[6:0] is taken into account. (value: 0)
     *          - B_0x1: software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[6:0] is ignored. (value: 1)
     */
        /** @brief no software request. The selected hardware request REQSEL[6:0] is taken into account. */
    constexpr std::uint32_t GPDMA_C0TR2_SWREQ_B_0x0 = 0;
        /** @brief software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[6:0] is ignored. */
    constexpr std::uint32_t GPDMA_C0TR2_SWREQ_B_0x1 = 1;

    /** @brief This bit is ignored if channel 0 is activated (GPDMA_C0CR.EN asserted) with SWREQ = 1 (software request for a memory-to-memory transfer). Else: 0: selected hardware request driven by a source peripheral (request signal taken into account by the GPDMA transfer scheduler over the source/read port) 1: selected hardware request driven by a destination peripheral (request signal taken into account by the GPDMA transfer scheduler over the destination/write port) Note: If the channel 0 is activated (GPDMA_C0CR.EN is asserted) with SWREQ = 0 and PFREQ = 1 (peripheral hardware request with peripheral flow-control mode), any software assertion to this DREQ bit is ignored: in peripheral flow-control mode, only a peripheral-to-memory transfer is supported. */
    using GPDMA_C0TR2_DREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: selected hardware request driven by a source peripheral (request signal taken into account by the GPDMA transfer scheduler over the source/read port) (value: 0)
     *          - B_0x1: selected hardware request driven by a destination peripheral (request signal taken into account by the GPDMA transfer scheduler over the destination/write port) (value: 1)
     */
        /** @brief selected hardware request driven by a source peripheral (request signal taken into account by the GPDMA transfer scheduler over the source/read port) */
    constexpr std::uint32_t GPDMA_C0TR2_DREQ_B_0x0 = 0;
        /** @brief selected hardware request driven by a destination peripheral (request signal taken into account by the GPDMA transfer scheduler over the destination/write port) */
    constexpr std::uint32_t GPDMA_C0TR2_DREQ_B_0x1 = 1;

    /** @brief If the channel 0 is activated (GPDMA_C0CR.EN asserted) with SWREQ = 1 (software request for a memory-to-memory transfer), this bit is ignored. Else: 0: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a burst level. 1: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see less than xe4 [GPDMA_requests]/>). */
    using GPDMA_C0TR2_BREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a burst level. (value: 0)
     *          - B_0x1: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see less than xe4 [GPDMA_requests]/>). (value: 1)
     */
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a burst level. */
    constexpr std::uint32_t GPDMA_C0TR2_BREQ_B_0x0 = 0;
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see less than xe4 [GPDMA_requests]/>). */
    constexpr std::uint32_t GPDMA_C0TR2_BREQ_B_0x1 = 1;

    /** @brief Caution: If a given channel 0 is not implemented with this feature, this bit is reserved and PFREQ is not present (see less than xe1 [GPDMA_channels]/> for the list of the implemented channels with this feature). */
    using GPDMA_C0TR2_PFREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol in GPDMA control mode. The GPDMA is programmed with GPDMA_C0TR1.BNDT[15:0] and this is internally used by the hardware for the block transfer completion. (value: 0)
     *          - B_0x1: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol in peripheral control mode. The GPDMA block transfer can be early completed by the peripheral itself (see less than xe2 [GPDMA_channels_peripheral]/> for more details). (value: 1)
     */
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol in GPDMA control mode. The GPDMA is programmed with GPDMA_C0TR1.BNDT[15:0] and this is internally used by the hardware for the block transfer completion. */
    constexpr std::uint32_t GPDMA_C0TR2_PFREQ_B_0x0 = 0;
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol in peripheral control mode. The GPDMA block transfer can be early completed by the peripheral itself (see less than xe2 [GPDMA_channels_peripheral]/> for more details). */
    constexpr std::uint32_t GPDMA_C0TR2_PFREQ_B_0x1 = 1;

    /** @brief These bits define the transfer granularity for its conditioning by the trigger. If the channel 0 is enabled (GPDMA_C0CR.EN asserted) with TRIGPOL[1:0] = 00 or 11, these TRIGM[1:0] bits are ignored. Else, a GPDMA transfer is conditioned by at least one trigger hit: 00: at block level: the first burst read of each block transfer is conditioned by one hit trigger (channel 0 = 12 to 15, for each block if a 2D/repeated block is configured with GPDMA_C0BR1.BRC[10:0] is not equal to 0). 10: at link level: a LLI link transfer is conditioned by one hit trigger. The LLI data transfer (if any) is not conditioned. 11: at programmed burst level: If SWREQ = 1, each programmed burst read is conditioned by one hit trigger. If SWREQ = 0, each programmed burst that is requested by the selected peripheral, is conditioned by one hit trigger. - If the peripheral is programmed as a source (DREQ = 0) of the LLI data transfer, each programmed burst read is conditioned. - If the peripheral is programmed as a destination (DREQ = 1) of the LLI data transfer, each programmed burst write is conditioned. The first memory burst read of a (possibly 2D/repeated) block, also named as the first ready FIFO-based source burst, is gated by the occurrence of both the hardware request and the first trigger hit.01: channel 0 = 0 to , same as 00; channel 0 , at 2D/repeated block level. The first burst read of a 2D/repeated block transfer is conditioned by one hit trigger. The GPDMA monitoring of a trigger for channel 0 is started when the channel is enabled/loaded with a new active trigger configuration: rising or falling edge on a selected trigger (TRIGPOL[1:0] = 01 or respectively TRIGPOL[1:0]=10). The monitoring of this trigger is kept active during the triggered and uncompleted (data or link) transfer; and if a new trigger is detected then, this hit is internally memorized to grant the next transfer, as long as the defined rising or falling edge is not modified, and the TRIGSEL[5:0] is not modified, and the channel is enabled. Transferring a next LLIn+1 that updates the GPDMA_C0TR2 with a new value for any of TRIGSEL[5:0] or TRIGPOL[1:0], resets the monitoring, trashing the memorized hit of the formerly defined LLIn trigger. After a first new trigger hitn+1 is memorized, if another second trigger hitn+2 is detected and if the hitn triggered transfer is still not completed, hitn+2 is lost and not memorized.memorized. A trigger overrun flag is reported (GPDMA_C0SR.TOF=1), and an interrupt is generated if enabled (GPDMA_C0CR.TOIE = 1). The channel is not automatically disabled by hardware due to a trigger overrun. Note: When the source block size is not a multiple of the source burst size and is a multiple of the source data width, then the last programmed source burst is not completed and is internally shorten to match the block size. In this case, if TRIGM[1:0] = 11 and (SWREQ = 1 or (SWREQ = 0 and DREQ = 0)), the shortened burst transfer (by singles or/and by bursts of lower length) is conditioned once by the trigger. +: When the programmed destination burst is internally shortened by singles or/and by bursts of lower length (versus FIFO size, versus block size, 1-Kbyte boundary address crossing): if the trigger is conditioning the programmed destination burst (if TRIGM[1:0] = 11 and SWREQ = 0 and DREQ = 1), this shortened destination burst transfer is conditioned once by the trigger. */
    using GPDMA_C0TR2_TRIGM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief These bits select the trigger event input of the GPDMA transfer (as per less than xe3 [GPDMA_triggers]/>), with anactive trigger event if TRIGPOL[1:0] is not equal to 00. */
    using GPDMA_C0TR2_TRIGSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief These bits define the polarity of the selected trigger event input defined by TRIGSEL[5:0]. 00: no trigger (masked trigger event) 01: trigger on the rising edge 10: trigger on the falling edge 11: same as 00 */
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

    /** @brief These bits define the transfer granularity for the transfer complete and half transfer complete events generation. 00: at block level (when GPDMA_C0BR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. 01: channel 0 (0 to ), same as 00, channel 0 , at 2D/repeated block level (when GPDMA_C0BR1.BRC[10:0] = 0 and GPDMA_C0BR1.BNDT[15:0] = 0). The complete (and the half) transfer event is generated at the end (respectively half of the end) of the 2D/repeated block. 10: at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer. The LLI data transfer is a block transfer or a 2D/repeated block transfer for channel 0 , if any data transfer. 11: at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address GPDMA_C0LLR.LA[15:2] to zero and clears all the GPDMA_C0LLR update bits (UT1, UT2, UB1, USA, UDA and ULL, plus UT3 and UB2). If the channel transfer is continuous/infinite, no event is generated. Note: If the initial LLI0 data transfer is null/void (directly programmed by the internal register file with GPDMA_C0BR1.BNDT[15:0] = 0), then neither the complete transfer event nor the half transfer event is generated. +: If the initial LLI0 data transfer is null/void (directly programmed by the internal register file with GPDMA_C0BR1.BNDT[15:0] = 0), then neither the complete transfer event nor the half transfer event is generated. +: If the initial LLI0 data transfer is null/void (directly programmed by the internal register file with GPDMA_C0BR1.BNDT[15:0] = 0), then the half transfer event is not generated, and the transfer complete event is generated when is completed the loading of the LLI1. */
    using GPDMA_C0TR2_TCEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: at block level (when GPDMA_C0BR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. (value: 0)
     *          - B_0x1: channel 0 (0 to ), same as 00, channel 0 , at 2D/repeated block level (when GPDMA_C0BR1.BRC[10:0] = 0 and GPDMA_C0BR1.BNDT[15:0] = 0). The complete (and the half) transfer event is generated at the end (respectively half of the end) of the 2D/repeated block. (value: 1)
     *          - B_0x2: at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer. The LLI data transfer is a block transfer or a 2D/repeated block transfer for channel 0 , if any data transfer. (value: 2)
     *          - B_0x3: at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address GPDMA_C0LLR.LA[15:2] to zero and clears all the GPDMA_C0LLR update bits (UT1, UT2, UB1, USA, UDA and ULL, plus UT3 and UB2). If the channel transfer is continuous/infinite, no event is generated. (value: 3)
     */
        /** @brief at block level (when GPDMA_C0BR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. */
    constexpr std::uint32_t GPDMA_C0TR2_TCEM_B_0x0 = 0;
        /** @brief channel 0 (0 to ), same as 00, channel 0 , at 2D/repeated block level (when GPDMA_C0BR1.BRC[10:0] = 0 and GPDMA_C0BR1.BNDT[15:0] = 0). The complete (and the half) transfer event is generated at the end (respectively half of the end) of the 2D/repeated block. */
    constexpr std::uint32_t GPDMA_C0TR2_TCEM_B_0x1 = 1;
        /** @brief at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer. The LLI data transfer is a block transfer or a 2D/repeated block transfer for channel 0 , if any data transfer. */
    constexpr std::uint32_t GPDMA_C0TR2_TCEM_B_0x2 = 2;
        /** @brief at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address GPDMA_C0LLR.LA[15:2] to zero and clears all the GPDMA_C0LLR update bits (UT1, UT2, UB1, USA, UDA and ULL, plus UT3 and UB2). If the channel transfer is continuous/infinite, no event is generated. */
    constexpr std::uint32_t GPDMA_C0TR2_TCEM_B_0x3 = 3;

    /** @brief GPDMA channel 0 block register 1 */
    using GPDMA_C0BR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x98, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Block size transferred from the source. When the channel is enabled, this field becomes read-only and is decremented, indicating the remaining number of data items in the current source block to be transferred. BNDT[15:0] is programmed in number of bytes, maximum source block size is 64 Kbytes -1. Once the last data transfer is completed (BNDT[15:0] = 0): - if GPDMA_C0LLR.UB1 = 1, this field is updated by the LLI in the memory. - if GPDMA_C0LLR.UB1 = 0 and if there is at least one not null Uxx update bit, this field is internally restored to the programmed value. - if all GPDMA_C0LLR.Uxx = 0 and if GPDMA_C0LLR.LA[15:0] is not equal to 0, this field is internally restored to the programmed value (infinite/continuous last LLI). - if GPDMA_C0LLR = 0, this field is kept as zero following the last LLI data transfer. Note: A non-null source block size must be a multiple of the source data width (BNDT[2:0] versus GPDMA_C0TR1.SDW_LOG2[1:0]). Else a user setting error is reported and no transfer is issued. +: When configured in packing mode (GPDMA_C0TR1.PAM[1] = 1 and destination data width different from source data width), a non-null source block size must be a multiple of the destination data width (BNDT[2:0] versus GPDMA_C0TR1.DDW_LOG2[1:0]). Else a user setting error is reported and no transfer is issued. */
    using GPDMA_C0BR1_BNDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 0 source address register */
    using GPDMA_C0SAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This field is the pointer to the address from which the next data is read. During the channel activity, depending on the source addressing mode (GPDMA_C0TR1.SINC), this field is kept fixed or incremented by the data width (GPDMA_C0TR1.SDW_LOG2[1:0]) after each burst source data, reflecting the next address from which data is read. During the channel activity, this address is updated after each completed source burst, consequently to: - the programmed source burst; either in fixed addressing mode or in contiguous-data incremented mode. If contiguously incremented (GPDMA_C0TR1.SINC = 1), then the additional address offset value is the programmed burst size, as defined by GPDMA_C0TR1.SBL_1[5:0] and GPDMA_C0TR1.SDW_LOG2[21:0] - the additional source incremented/decremented offset value as programmed by GPDMA_C0BR1.SDEC and GPDMA_CxTR3.SAO[12:0]. - once/if completed source block transfer, for a channel 0 with 2D addressing capability (x = 12 to 15). additional block repeat source incremented/decremented offset value as programmed by GPDMA_C0BR1.BRSDEC and GPDMA_CxBR2.BRSAO[15:0] In linked-list mode, after a LLI data transfer is completed, this register is automatically updated by GPDMA from the memory, provided the LLI is set with GPDMA_C0LLR.USA = 1. Note: A source address must be aligned with the programmed data width of a source burst (SA[2:0] versus GPDMA_C0TR1.SDW_LOG2[1:0]). Else, a user setting error is reported and no transfer is issued. +: When the source block size is not a multiple of the source burst size and is a multiple of the source data width, the last programmed source burst is not completed and is internally shorten to match the block size. In this case, the additional GPDMA_CxTR3.SAO[12:0] is not applied. */
    using GPDMA_C0SAR_SA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 0 destination address register */
    using GPDMA_C0DAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This field is the pointer to the address from which the next data is written. During the channel activity, depending on the destination addressing mode (GPDMA_C0TR1.DINC), this field is kept fixed or incremented by the data width (GPDMA_C0TR1.DDW_LOG2[21:0]) after each burst destination data, reflecting the next address from which data is written. During the channel activity, this address is updated after each completed destination burst, consequently to: - the programmed destination burst; either in fixed addressing mode or in contiguous-data incremented mode. If contiguously incremented (GPDMA_C0TR1.DINC = 1), then the additional address offset value is the programmed burst size, as defined by GPDMA_C0TR1.DBL_1[5:0] and GPDMA_C0TR1.DDW_LOG2[1:0] - the additional destination incremented/decremented offset value as programmed by GPDMA_C0BR1.DDEC and GPDMA_CxTR3.DAO[12:0]. - once/if completed destination block transfer, for a channel 0 with 2D addressing capability (x=12to15), the additional block repeat destination incremented/decremented offset value as programmed by GPDMA_C0BR1.BRDDEC and GPDMA_CxBR2.BRDAO[15:0] In linked-list mode, after a LLI data transfer is completed, this register is automatically updated by the GPDMA from the memory, provided the LLI is set with GPDMA_C0LLR.UDA = 1. Note: A destination address must be aligned with the programmed data width of a destination burst (DA[2:0] versus GPDMA_C0TR1.DDW_LOG2[1:0]). Else, a user setting error is reported and no transfer is issued. */
    using GPDMA_C0DAR_DA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 0 linked-list address register */
    using GPDMA_C0LLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xCC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief If UT1 = UT2 = UB1 = USA = UDA = ULL = 0 and if LA[15:20] = 0, the current LLI is the last one. The channel transfer is completed without any update of the linked-list GPDMA register file. Else, this field is the pointer to the memory address offset from which the next linked-list data structure is automatically fetched from, once the data transfer is completed, in order to conditionally update the linked-list GPDMA internal register file (GPDMA_C0TR1, GPDMA_C0TR2, GPDMA_C0BR1, GPDMA_CxSAR, GPDMA_CxDAR and GPDMA_C0LLR). Note: The user must program the pointer to be 32-bit aligned. The two low-significant bits are write ignored. */
    using GPDMA_C0LLR_LA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This bit is used to control the update of GPDMA_C0LLR from the memory during the link transfer. 0: no GPDMA_C0LLR update 1: GPDMA_C0LLR update */
    using GPDMA_C0LLR_ULL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_C0LLR update (value: 0)
     *          - B_0x1: GPDMA_C0LLR update (value: 1)
     */
        /** @brief no GPDMA_C0LLR update */
    constexpr std::uint32_t GPDMA_C0LLR_ULL_B_0x0 = 0;
        /** @brief GPDMA_C0LLR update */
    constexpr std::uint32_t GPDMA_C0LLR_ULL_B_0x1 = 1;

    /** @brief This bit is used to control the update of GPDMA_CxDAR from the memory during the link transfer. 0: no GPDMA_CxDAR update 1: GPDMA_CxDAR update */
    using GPDMA_C0LLR_UDA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxDAR update (value: 0)
     *          - B_0x1: GPDMA_CxDAR update (value: 1)
     */
        /** @brief no GPDMA_CxDAR update */
    constexpr std::uint32_t GPDMA_C0LLR_UDA_B_0x0 = 0;
        /** @brief GPDMA_CxDAR update */
    constexpr std::uint32_t GPDMA_C0LLR_UDA_B_0x1 = 1;

    /** @brief This bit controls the update of GPDMA_CxSAR from the memory during the link transfer. 0: no GPDMA_CxSAR update 1: GPDMA_CxSAR update */
    using GPDMA_C0LLR_USA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxSAR update (value: 0)
     *          - B_0x1: GPDMA_CxSAR update (value: 1)
     */
        /** @brief no GPDMA_CxSAR update */
    constexpr std::uint32_t GPDMA_C0LLR_USA_B_0x0 = 0;
        /** @brief GPDMA_CxSAR update */
    constexpr std::uint32_t GPDMA_C0LLR_USA_B_0x1 = 1;

    /** @brief This bit controls the update of GPDMA_C0BR1 from the memory during the link transfer. If UB1 = 0 and if GPDMA_C0LLR is not equal to 0, the linked-list is not completed. GPDMA_C0BR1.BNDT[15:0] is then restored to the programmed value after data transfer is completed and before the link transfer. 0: no GPDMA_C0BR1 update from memory (GPDMA_C0BR1.BNDT[15:0] restored if any link transfer) 1: GPDMA_C0BR1 update */
    using GPDMA_C0LLR_UB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_C0BR1 update from memory (GPDMA_C0BR1.BNDT[15:0] restored if any link transfer) (value: 0)
     *          - B_0x1: GPDMA_C0BR1 update (value: 1)
     */
        /** @brief no GPDMA_C0BR1 update from memory (GPDMA_C0BR1.BNDT[15:0] restored if any link transfer) */
    constexpr std::uint32_t GPDMA_C0LLR_UB1_B_0x0 = 0;
        /** @brief GPDMA_C0BR1 update */
    constexpr std::uint32_t GPDMA_C0LLR_UB1_B_0x1 = 1;

    /** @brief This bit controls the update of GPDMA_C0TR2 from the memory during the link transfer. 0: no GPDMA_C0TR2 update 1: GPDMA_C0TR2 update */
    using GPDMA_C0LLR_UT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_C0TR2 update (value: 0)
     *          - B_0x1: GPDMA_C0TR2 update (value: 1)
     */
        /** @brief no GPDMA_C0TR2 update */
    constexpr std::uint32_t GPDMA_C0LLR_UT2_B_0x0 = 0;
        /** @brief GPDMA_C0TR2 update */
    constexpr std::uint32_t GPDMA_C0LLR_UT2_B_0x1 = 1;

    /** @brief This bit controls the update of GPDMA_C0TR1 from the memory during the link transfer. 0: no GPDMA_C0TR1 update 1: GPDMA_C0TR1 update */
    using GPDMA_C0LLR_UT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_C0TR1 update (value: 0)
     *          - B_0x1: GPDMA_C0TR1 update (value: 1)
     */
        /** @brief no GPDMA_C0TR1 update */
    constexpr std::uint32_t GPDMA_C0LLR_UT1_B_0x0 = 0;
        /** @brief GPDMA_C0TR1 update */
    constexpr std::uint32_t GPDMA_C0LLR_UT1_B_0x1 = 1;

    /** @brief GPDMA channel 1 linked-list base address register */
    using GPDMA_C1LBAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief None */
    using GPDMA_C1LBAR_LBA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 1 flag clear register */
    using GPDMA_C1FCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xDC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief None 0: no effect 1: corresponding TCF flag cleared */
    using GPDMA_C1FCR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding TCF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C1FCR_TCF_B_0x0 = 0;
        /** @brief corresponding TCF flag cleared */
    constexpr std::uint32_t GPDMA_C1FCR_TCF_B_0x1 = 1;

    /** @brief None 0: no effect 1: corresponding HTF flag cleared */
    using GPDMA_C1FCR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding HTF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C1FCR_HTF_B_0x0 = 0;
        /** @brief corresponding HTF flag cleared */
    constexpr std::uint32_t GPDMA_C1FCR_HTF_B_0x1 = 1;

    /** @brief None 0: no effect 1: corresponding DTEF flag cleared */
    using GPDMA_C1FCR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding DTEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C1FCR_DTEF_B_0x0 = 0;
        /** @brief corresponding DTEF flag cleared */
    constexpr std::uint32_t GPDMA_C1FCR_DTEF_B_0x1 = 1;

    /** @brief None 0: no effect 1: corresponding ULEF flag cleared */
    using GPDMA_C1FCR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding ULEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C1FCR_ULEF_B_0x0 = 0;
        /** @brief corresponding ULEF flag cleared */
    constexpr std::uint32_t GPDMA_C1FCR_ULEF_B_0x1 = 1;

    /** @brief None 0: no effect 1: corresponding USEF flag cleared */
    using GPDMA_C1FCR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding USEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C1FCR_USEF_B_0x0 = 0;
        /** @brief corresponding USEF flag cleared */
    constexpr std::uint32_t GPDMA_C1FCR_USEF_B_0x1 = 1;

    /** @brief None 0: no effect 1: corresponding SUSPF flag cleared */
    using GPDMA_C1FCR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding SUSPF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C1FCR_SUSPF_B_0x0 = 0;
        /** @brief corresponding SUSPF flag cleared */
    constexpr std::uint32_t GPDMA_C1FCR_SUSPF_B_0x1 = 1;

    /** @brief None 0: no effect 1: corresponding TOF flag cleared */
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
    /** @brief This idle flag is deasserted by hardware when the channel is enabled (GPDMA_C1CR.EN = 1) with a valid channel configuration (no USEF to be immediately reported). This idle flag is asserted after hard reset or by hardware when the channel is back in idle state (in suspended or disabled state). 0: channel not in idle state 1: channel in idle state */
    using GPDMA_C1SR_IDLEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: channel not in idle state (value: 0)
     *          - B_0x1: channel in idle state (value: 1)
     */
        /** @brief channel not in idle state */
    constexpr std::uint32_t GPDMA_C1SR_IDLEF_B_0x0 = 0;
        /** @brief channel in idle state */
    constexpr std::uint32_t GPDMA_C1SR_IDLEF_B_0x1 = 1;

    /** @brief A transfer complete event is either a block transfer complete, a 2D/repeated block transfer complete, or a LLI transfer complete including the upload of the next LLI if any, or the full linked-list completion, depending on the transfer complete event mode (GPDMA_C1TR2.TCEM[1:0]). 0: no transfer complete event 1: a transfer complete event occurred */
    using GPDMA_C1SR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no transfer complete event (value: 0)
     *          - B_0x1: a transfer complete event occurred (value: 1)
     */
        /** @brief no transfer complete event */
    constexpr std::uint32_t GPDMA_C1SR_TCF_B_0x0 = 0;
        /** @brief a transfer complete event occurred */
    constexpr std::uint32_t GPDMA_C1SR_TCF_B_0x1 = 1;

    /** @brief A half transfer event is either a half block transfer or a half 2D/repeated block transfer, depending on the transfer complete event mode (GPDMA_C1TR2.TCEM[1:0]). A half block transfer occurs when half of the bytes of the source block size (rounded up integer of GPDMA_C1BR1.BNDT[15:0]/2) has been transferred to the destination. A half 2D/repeated block transfer occurs when half of the repeated blocks (rounded up integer of (GPDMA_C1BR1.BRC[10:0]+1)/2)) has been transferred to the destination. 0: no half transfer event 1: a half transfer event occurred */
    using GPDMA_C1SR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no half transfer event (value: 0)
     *          - B_0x1: a half transfer event occurred (value: 1)
     */
        /** @brief no half transfer event */
    constexpr std::uint32_t GPDMA_C1SR_HTF_B_0x0 = 0;
        /** @brief a half transfer event occurred */
    constexpr std::uint32_t GPDMA_C1SR_HTF_B_0x1 = 1;

    /** @brief None 0: no data transfer error event 1: a master bus error event occurred on a data transfer */
    using GPDMA_C1SR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no data transfer error event (value: 0)
     *          - B_0x1: a master bus error event occurred on a data transfer (value: 1)
     */
        /** @brief no data transfer error event */
    constexpr std::uint32_t GPDMA_C1SR_DTEF_B_0x0 = 0;
        /** @brief a master bus error event occurred on a data transfer */
    constexpr std::uint32_t GPDMA_C1SR_DTEF_B_0x1 = 1;

    /** @brief None 0: no update link transfer error event 1: a master bus error event occurred while updating a linked-list register from memory */
    using GPDMA_C1SR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no update link transfer error event (value: 0)
     *          - B_0x1: a master bus error event occurred while updating a linked-list register from memory (value: 1)
     */
        /** @brief no update link transfer error event */
    constexpr std::uint32_t GPDMA_C1SR_ULEF_B_0x0 = 0;
        /** @brief a master bus error event occurred while updating a linked-list register from memory */
    constexpr std::uint32_t GPDMA_C1SR_ULEF_B_0x1 = 1;

    /** @brief None 0: no user setting error event 1: a user setting error event occurred */
    using GPDMA_C1SR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no user setting error event (value: 0)
     *          - B_0x1: a user setting error event occurred (value: 1)
     */
        /** @brief no user setting error event */
    constexpr std::uint32_t GPDMA_C1SR_USEF_B_0x0 = 0;
        /** @brief a user setting error event occurred */
    constexpr std::uint32_t GPDMA_C1SR_USEF_B_0x1 = 1;

    /** @brief None 0: no completed suspension event 1: a completed suspension event occurred */
    using GPDMA_C1SR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no completed suspension event (value: 0)
     *          - B_0x1: a completed suspension event occurred (value: 1)
     */
        /** @brief no completed suspension event */
    constexpr std::uint32_t GPDMA_C1SR_SUSPF_B_0x0 = 0;
        /** @brief a completed suspension event occurred */
    constexpr std::uint32_t GPDMA_C1SR_SUSPF_B_0x1 = 1;

    /** @brief None 0: no trigger overrun event 1: a trigger overrun event occurred */
    using GPDMA_C1SR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no trigger overrun event (value: 0)
     *          - B_0x1: a trigger overrun event occurred (value: 1)
     */
        /** @brief no trigger overrun event */
    constexpr std::uint32_t GPDMA_C1SR_TOF_B_0x0 = 0;
        /** @brief a trigger overrun event occurred */
    constexpr std::uint32_t GPDMA_C1SR_TOF_B_0x1 = 1;

    /** @brief Number of available write beats in the FIFO, in units of the programmed destination data width (see GPDMA_C1TR1.DDW_LOG2[1:0], in units of bytes, half-words, or words). Note: After having suspended an active transfer, the user may need to read FIFOL[7:0], additionally to GPDMA_C1BR1.BDNT[15:0] and GPDMA_C1BR1.BRC[10:0], to know how many data have been transferred to the destination. Before reading, the user may wait for the transfer to be suspended (GPDMA_C1SR.SUSPF = 1). */
    using GPDMA_C1SR_FIFOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 1 control register */
    using GPDMA_C1CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xE4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Writing 1 into the field RESET (bit 1) causes the hardware to de-assert this bit, whatever is written into this bit 0. Else: this bit is deasserted by hardware when there is a transfer error (master bus error or user setting error) or when there is a channel transfer complete (channel ready to be configured, for example if LSM = 1 at the end of a single execution of the LLI). Else, this bit can be asserted by software. Writing 0 into this EN bit is ignored. 0: write: ignored, read: channel disabled 1: write: enable channel, read: channel enabled */
    using GPDMA_C1CR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write: ignored, read: channel disabled (value: 0)
     *          - B_0x1: write: enable channel, read: channel enabled (value: 1)
     */
        /** @brief write: ignored, read: channel disabled */
    constexpr std::uint32_t GPDMA_C1CR_EN_B_0x0 = 0;
        /** @brief write: enable channel, read: channel enabled */
    constexpr std::uint32_t GPDMA_C1CR_EN_B_0x1 = 1;

    /** @brief This bit is write only. Writing 0 has no impact. Writing 1 implies the reset of the following: the FIFO, the channel internal state, SUSP and EN bits (whatever is written receptively in bit 2 and bit 0). The reset is effective when the channel is in steady state, meaning one of the following: - active channel in suspended state (GPDMA_C1SR.SUSPF = 1 and GPDMA_C1SR.IDLEF=GPDMA_C1CR.EN = 1) - channel in disabled state (GPDMA_C1SR.IDLEF = 1 and GPDMA_C1CR.EN = 0). After writing a RESET, to continue using this channel, the user must explicitly reconfigure the channel including the hardware-modified configuration registers (GPDMA_C1BR1, GPDMA_CxSAR and GPDMA_CxDAR) before enabling again the channel (see the programming sequence in less than xe6 [GPDMA_abort_restart/ID00-1465]/>). 0: no channel reset 1: channel reset */
    using GPDMA_C1CR_RESET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no channel reset (value: 0)
     *          - B_0x1: channel reset (value: 1)
     */
        /** @brief no channel reset */
    constexpr std::uint32_t GPDMA_C1CR_RESET_B_0x0 = 0;
        /** @brief channel reset */
    constexpr std::uint32_t GPDMA_C1CR_RESET_B_0x1 = 1;

    /** @brief Writing 1 into the field RESET (bit 1) causes the hardware to de-assert this bit, whatever is written into this bit 2. Else: Software must write 1 in order to suspend an active channel (channel with an ongoing GPDMA transfer over its master ports). The software must write 0 in order to resume a suspended channel, following the programming sequence detailed in less than xe5 [GPDMA_channel_suspend_and_resume/ID00-1456]/>. 0: write: resume channel, read: channel not suspended 1: write: suspend channel, read: channel suspended. */
    using GPDMA_C1CR_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write: resume channel, read: channel not suspended (value: 0)
     *          - B_0x1: write: suspend channel, read: channel suspended. (value: 1)
     */
        /** @brief write: resume channel, read: channel not suspended */
    constexpr std::uint32_t GPDMA_C1CR_SUSP_B_0x0 = 0;
        /** @brief write: suspend channel, read: channel suspended. */
    constexpr std::uint32_t GPDMA_C1CR_SUSP_B_0x1 = 1;

    /** @brief None 0: interrupt disabled 1: interrupt enabled */
    using GPDMA_C1CR_TCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C1CR_TCIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C1CR_TCIE_B_0x1 = 1;

    /** @brief None 0: interrupt disabled 1: interrupt enabled */
    using GPDMA_C1CR_HTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C1CR_HTIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C1CR_HTIE_B_0x1 = 1;

    /** @brief None 0: interrupt disabled 1: interrupt enabled */
    using GPDMA_C1CR_DTEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C1CR_DTEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C1CR_DTEIE_B_0x1 = 1;

    /** @brief None 0: interrupt disabled 1: interrupt enabled */
    using GPDMA_C1CR_ULEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C1CR_ULEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C1CR_ULEIE_B_0x1 = 1;

    /** @brief None 0: interrupt disabled 1: interrupt enabled */
    using GPDMA_C1CR_USEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C1CR_USEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C1CR_USEIE_B_0x1 = 1;

    /** @brief None 0: interrupt disabled 1: interrupt enabled */
    using GPDMA_C1CR_SUSPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C1CR_SUSPIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C1CR_SUSPIE_B_0x1 = 1;

    /** @brief None 0: interrupt disabled 1: interrupt enabled */
    using GPDMA_C1CR_TOIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C1CR_TOIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C1CR_TOIE_B_0x1 = 1;

    /** @brief First the (possible 1D/repeated) block transfer is executed as defined by the current internal register file until GPDMA_C1BR1.BNDT[15:0] = 0 and GPDMA_C1BR1.BRC[10:0] = 0. Secondly the next linked-list data structure is conditionally uploaded from memory as defined by GPDMA_C1LLR. Then channel execution is completed. 0: channel executed for the full linked-list and completed at the end of the last LLI (GPDMA_C1LLR = 0). The 16 low-significant bits of the link address are null (LA[15:0] = 0) and all the update bits are null (UT1 = UB1 = UT2 = USA = UDA = ULL = 0 and UT3 = UB2 = 0). Then GPDMA_C1BR1.BNDT[15:0] = 0 and GPDMA_C1BR1.BRC[10:0] = 0. 1: channel executed once for the current LLI Note: This bit must be written when EN = 0. This bit is read-only when EN = 1. */
    using GPDMA_C1CR_LSM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: channel executed for the full linked-list and completed at the end of the last LLI (GPDMA_C1LLR = 0). The 16 low-significant bits of the link address are null (LA[15:0] = 0) and all the update bits are null (UT1 = UB1 = UT2 = USA = UDA = ULL = 0 and UT3 = UB2 = 0). Then GPDMA_C1BR1.BNDT[15:0] = 0 and GPDMA_C1BR1.BRC[10:0] = 0. (value: 0)
     *          - B_0x1: channel executed once for the current LLI (value: 1)
     */
        /** @brief channel executed for the full linked-list and completed at the end of the last LLI (GPDMA_C1LLR = 0). The 16 low-significant bits of the link address are null (LA[15:0] = 0) and all the update bits are null (UT1 = UB1 = UT2 = USA = UDA = ULL = 0 and UT3 = UB2 = 0). Then GPDMA_C1BR1.BNDT[15:0] = 0 and GPDMA_C1BR1.BRC[10:0] = 0. */
    constexpr std::uint32_t GPDMA_C1CR_LSM_B_0x0 = 0;
        /** @brief channel executed once for the current LLI */
    constexpr std::uint32_t GPDMA_C1CR_LSM_B_0x1 = 1;

    /** @brief This bit is used to allocate the master port for the update of the GPDMA linked-list registers from the memory. 0: port 0 (AHB) allocated 1: port 1 (AHB) allocated Note: This bit must be written when EN = 0. This bit is read-only when EN = 1. */
    using GPDMA_C1CR_LAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C1CR_LAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C1CR_LAP_B_0x1 = 1;

    /** @brief None 00: low priority, low weight 01: low priority, mid weight 10: low priority, high weight 11: high priority Note: This bit must be written when EN = 0. This bit is read-only when EN = 1. */
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
    /** @brief None 00: byte 01: half-word (2 bytes) 10: word (4 bytes) 11: user setting error reported and no transfer issued Note: Setting a 8-byte data width causes a user setting error to be reported and no transfer is issued. +: A source block size must be a multiple of the source data width (GPDMA_C1BR1.BNDT[2:0] versus SDW_LOG2[1:0]). Otherwise, a user setting error is reported and no transfer is issued. +: A source burst transfer must have an aligned address with its data width (start address GPDMA_CxSAR[2:0] versus SDW_LOG2[1:0]). Otherwise, a user setting error is reported and none transfer is issued. */
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

    /** @brief The source address, pointed by GPDMA_CxSAR, is kept constant after a burst beat/single transfer or is incremented by the offset value corresponding to a contiguous data after a burst beat/single transfer. 0: fixed burst 1: contiguously incremented burst */
    using GPDMA_C1TR1_SINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fixed burst (value: 0)
     *          - B_0x1: contiguously incremented burst (value: 1)
     */
        /** @brief fixed burst */
    constexpr std::uint32_t GPDMA_C1TR1_SINC_B_0x0 = 0;
        /** @brief contiguously incremented burst */
    constexpr std::uint32_t GPDMA_C1TR1_SINC_B_0x1 = 1;

    /** @brief The burst length unit is one data named beat within a burst. If SBL_1[5:0] = 0, the burst can be named as single. Each data/beat has a width defined by the destination data width SDW_LOG2[1:0]. Note: If a burst transfer crossed a 1-Kbyte address boundary on a AHB transfer, the GPDMA modifies and shortens the programmed burst into singles or bursts of lower length, to be compliant with the AHB protocol. +: If a burst transfer is of length greater than the FIFO size of the channel 1, the GPDMA modifies and shortens the programmed burst into singles or bursts of lower length, to be compliant with the FIFO size. Transfer performance is lower, with GPDMA re-arbitration between effective and lower singles/bursts, but the data integrity is guaranteed. */
    using GPDMA_C1TR1_SBL_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief If DDW_LOG2[1:0] = SDW_LOG2[1:0]: if the data width of a burst destination transfer is equal to the data width of a burst source transfer, these bits are ignored. */
    using GPDMA_C1TR1_PAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0_COND1: COND1 is [PAM_1] source data is transferred as right aligned, padded with 0s up to the destination data width (value: 0)
     *          - B_0x1_COND1: COND1 is [PAM_1] source data is transferred as right aligned, sign extended up to the destination data width (value: 1)
     *          - B_0x2_COND1: COND1 is [PAM_1] successive source data are FIFO queued and packed at the destination data width, in a left (LSB) to right (MSB) order (named little endian), before a destination transfer (value: 2)
     *          - B_0x3_COND1: COND1 is [PAM_1] successive source data are FIFO queued and packed at the destination data width, in a left (LSB) to right (MSB) order (named little endian), before a destination transfer (value: 3)
     */
        /** @brief COND1 is [PAM_1] source data is transferred as right aligned, padded with 0s up to the destination data width */
    constexpr std::uint32_t GPDMA_C1TR1_PAM_B_0x0_COND1 = 0;
        /** @brief COND1 is [PAM_1] source data is transferred as right aligned, sign extended up to the destination data width */
    constexpr std::uint32_t GPDMA_C1TR1_PAM_B_0x1_COND1 = 1;
        /** @brief COND1 is [PAM_1] successive source data are FIFO queued and packed at the destination data width, in a left (LSB) to right (MSB) order (named little endian), before a destination transfer */
    constexpr std::uint32_t GPDMA_C1TR1_PAM_B_0x2_COND1 = 2;
        /** @brief COND1 is [PAM_1] successive source data are FIFO queued and packed at the destination data width, in a left (LSB) to right (MSB) order (named little endian), before a destination transfer */
    constexpr std::uint32_t GPDMA_C1TR1_PAM_B_0x3_COND1 = 3;

    /** @brief If the source data width is shorter than a word, this bit is ignored. If the source data width is a word: 0: no byte-based exchange within the unaligned half-word of each source word 1: the two consecutive bytes within the unaligned half-word of each source word are exchanged. */
    using GPDMA_C1TR1_SBx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no byte-based exchange within the unaligned half-word of each source word (value: 0)
     *          - B_0x1: the two consecutive bytes within the unaligned half-word of each source word are exchanged. (value: 1)
     */
        /** @brief no byte-based exchange within the unaligned half-word of each source word */
    constexpr std::uint32_t GPDMA_C1TR1_SBx_B_0x0 = 0;
        /** @brief the two consecutive bytes within the unaligned half-word of each source word are exchanged. */
    constexpr std::uint32_t GPDMA_C1TR1_SBx_B_0x1 = 1;

    /** @brief This bit is used to allocate the master port for the source transfer 0: port 0 (AHB) allocated 1: port 1 (AHB) allocated Note: This bit must be written when EN = 0. This bit is read-only when EN = 1. */
    using GPDMA_C1TR1_SAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C1TR1_SAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C1TR1_SAP_B_0x1 = 1;

    /** @brief If GPDMA_SECCFGR.SEC1 = 1 and the access is secure: This is a secure register bit. This bit can only be read by a secure software. This bit must be written by a secure software when GPDMA_SECCFGR.SEC1 = 1. A secure write is ignored when GPDMA_SECCFGR.SEC1 = 0. When GPDMA_SECCFGR.SEC1 is deasserted, this SSEC bit is also deasserted by hardware (on a secure reconfiguration of the channel as non-secure), and the GPDMA transfer from the source is non-secure. 0: GPDMA transfer non-secure 1: GPDMA transfer secure */
    using GPDMA_C1TR1_SSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPDMA transfer non-secure (value: 0)
     *          - B_0x1: GPDMA transfer secure (value: 1)
     */
        /** @brief GPDMA transfer non-secure */
    constexpr std::uint32_t GPDMA_C1TR1_SSEC_B_0x0 = 0;
        /** @brief GPDMA transfer secure */
    constexpr std::uint32_t GPDMA_C1TR1_SSEC_B_0x1 = 1;

    /** @brief None 00: byte 01: half-word (2 bytes) 10: word (4 bytes) 11: user setting error reported and no transfer issued Note: Setting a 8-byte data width causes a user setting error to be reported and none transfer is issued. +: A destination burst transfer must have an aligned address with its data width (start address GPDMA_CxDAR[2:0] and address offset GPDMA_CxTR3.DAO[2:0], versus DDW_LOG2[1:0]). Otherwise a user setting error is reported and no transfer is issued. */
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

    /** @brief The destination address, pointed by GPDMA_CxDAR, is kept constant after a burst beat/single transfer, or is incremented by the offset value corresponding to a contiguous data after a burst beat/single transfer. 0: fixed burst 1: contiguously incremented burst */
    using GPDMA_C1TR1_DINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fixed burst (value: 0)
     *          - B_0x1: contiguously incremented burst (value: 1)
     */
        /** @brief fixed burst */
    constexpr std::uint32_t GPDMA_C1TR1_DINC_B_0x0 = 0;
        /** @brief contiguously incremented burst */
    constexpr std::uint32_t GPDMA_C1TR1_DINC_B_0x1 = 1;

    /** @brief The burst length unit is one data named beat within a burst. If DBL_1[5:0] = 0, the burst can be named as single. Each data/beat has a width defined by the destination data width DDW_LOG2[1:0]. Note: If a burst transfer crossed a 1-Kbyte address boundary on a AHB transfer, the GPDMA modifies and shortens the programmed burst into singles or bursts of lower length, to be compliant with the AHB protocol. +: If a burst transfer is of length greater than the FIFO size of the channel 1, the GPDMA modifies and shortens the programmed burst into singles or bursts of lower length, to be compliant with the FIFO size. Transfer performance is lower, with GPDMA re-arbitration between effective and lower singles/bursts, but the data integrity is guaranteed. */
    using GPDMA_C1TR1_DBL_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief If the destination data size is a byte, this bit is ignored. If the destination data size is not a byte: 0: no byte-based exchange within half-word 1: the two consecutive (post PAM) bytes are exchanged in each destination half-word. */
    using GPDMA_C1TR1_DBx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no byte-based exchange within half-word (value: 0)
     *          - B_0x1: the two consecutive (post PAM) bytes are exchanged in each destination half-word. (value: 1)
     */
        /** @brief no byte-based exchange within half-word */
    constexpr std::uint32_t GPDMA_C1TR1_DBx_B_0x0 = 0;
        /** @brief the two consecutive (post PAM) bytes are exchanged in each destination half-word. */
    constexpr std::uint32_t GPDMA_C1TR1_DBx_B_0x1 = 1;

    /** @brief If the destination data size is shorter than a word, this bit is ignored. If the destination data size is a word: 0: no halfword-based exchanged within word 1: the two consecutive (post PAM) half-words are exchanged in each destination word. */
    using GPDMA_C1TR1_DHx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no halfword-based exchanged within word (value: 0)
     *          - B_0x1: the two consecutive (post PAM) half-words are exchanged in each destination word. (value: 1)
     */
        /** @brief no halfword-based exchanged within word */
    constexpr std::uint32_t GPDMA_C1TR1_DHx_B_0x0 = 0;
        /** @brief the two consecutive (post PAM) half-words are exchanged in each destination word. */
    constexpr std::uint32_t GPDMA_C1TR1_DHx_B_0x1 = 1;

    /** @brief This bit is used to allocate the master port for the destination transfer 0: port 0 (AHB) allocated 1: port 1 (AHB) allocated Note: This bit must be written when EN = 0. This bit is read-only when EN = 1. */
    using GPDMA_C1TR1_DAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C1TR1_DAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C1TR1_DAP_B_0x1 = 1;

    /** @brief If GPDMA_SECCFGR.SEC1 = 1 and the access is secure: This is a secure register bit. This bit can only be read by a secure software. This bit must be written by a secure software when GPDMA_SECCFGR.SEC1 = 1. A secure write is ignored when GPDMA_SECCFGR.SEC1 = 0. When GPDMA_SECCFGR.SEC1 is deasserted, this DSEC bit is also deasserted by hardware (on a secure reconfiguration of the channel as non-secure), and the GPDMA transfer to the destination is non-secure. 0: GPDMA transfer non-secure 1: GPDMA transfer secure */
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
    /** @brief These bits are ignored if channel 1 is activated (GPDMA_C1CR.EN asserted) with SWREQ=1 (software request for a memory-to-memory transfer). Else, the selected hardware request is internally taken into account as per less than xe4 [GPDMA_requests]/>. The user must not assign a same input hardware request (same REQSEL[6:0] value) to different active GPDMA channels (GPDMA_C1CR.EN = 1 and GPDMA_C1TR2.SWREQ = 0 for these channels). GPDMA is not intended to hardware support the case of simultaneous enabled channels incorrectly configured with a same hardware peripheral request signal, and there is no user setting error reporting. */
    using GPDMA_C1TR2_REQSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This bit is internally taken into account when GPDMA_C1CR.EN is asserted. 0: no software request. The selected hardware request REQSEL[6:0] is taken into account. 1: software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[6:0] is ignored. */
    using GPDMA_C1TR2_SWREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no software request. The selected hardware request REQSEL[6:0] is taken into account. (value: 0)
     *          - B_0x1: software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[6:0] is ignored. (value: 1)
     */
        /** @brief no software request. The selected hardware request REQSEL[6:0] is taken into account. */
    constexpr std::uint32_t GPDMA_C1TR2_SWREQ_B_0x0 = 0;
        /** @brief software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[6:0] is ignored. */
    constexpr std::uint32_t GPDMA_C1TR2_SWREQ_B_0x1 = 1;

    /** @brief This bit is ignored if channel 1 is activated (GPDMA_C1CR.EN asserted) with SWREQ = 1 (software request for a memory-to-memory transfer). Else: 0: selected hardware request driven by a source peripheral (request signal taken into account by the GPDMA transfer scheduler over the source/read port) 1: selected hardware request driven by a destination peripheral (request signal taken into account by the GPDMA transfer scheduler over the destination/write port) Note: If the channel 1 is activated (GPDMA_C1CR.EN is asserted) with SWREQ = 0 and PFREQ = 1 (peripheral hardware request with peripheral flow-control mode), any software assertion to this DREQ bit is ignored: in peripheral flow-control mode, only a peripheral-to-memory transfer is supported. */
    using GPDMA_C1TR2_DREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: selected hardware request driven by a source peripheral (request signal taken into account by the GPDMA transfer scheduler over the source/read port) (value: 0)
     *          - B_0x1: selected hardware request driven by a destination peripheral (request signal taken into account by the GPDMA transfer scheduler over the destination/write port) (value: 1)
     */
        /** @brief selected hardware request driven by a source peripheral (request signal taken into account by the GPDMA transfer scheduler over the source/read port) */
    constexpr std::uint32_t GPDMA_C1TR2_DREQ_B_0x0 = 0;
        /** @brief selected hardware request driven by a destination peripheral (request signal taken into account by the GPDMA transfer scheduler over the destination/write port) */
    constexpr std::uint32_t GPDMA_C1TR2_DREQ_B_0x1 = 1;

    /** @brief If the channel 1 is activated (GPDMA_C1CR.EN asserted) with SWREQ = 1 (software request for a memory-to-memory transfer), this bit is ignored. Else: 0: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a burst level. 1: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see less than xe4 [GPDMA_requests]/>). */
    using GPDMA_C1TR2_BREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a burst level. (value: 0)
     *          - B_0x1: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see less than xe4 [GPDMA_requests]/>). (value: 1)
     */
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a burst level. */
    constexpr std::uint32_t GPDMA_C1TR2_BREQ_B_0x0 = 0;
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see less than xe4 [GPDMA_requests]/>). */
    constexpr std::uint32_t GPDMA_C1TR2_BREQ_B_0x1 = 1;

    /** @brief Caution: If a given channel 1 is not implemented with this feature, this bit is reserved and PFREQ is not present (see less than xe1 [GPDMA_channels]/> for the list of the implemented channels with this feature). */
    using GPDMA_C1TR2_PFREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol in GPDMA control mode. The GPDMA is programmed with GPDMA_C1TR1.BNDT[15:0] and this is internally used by the hardware for the block transfer completion. (value: 0)
     *          - B_0x1: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol in peripheral control mode. The GPDMA block transfer can be early completed by the peripheral itself (see less than xe2 [GPDMA_channels_peripheral]/> for more details). (value: 1)
     */
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol in GPDMA control mode. The GPDMA is programmed with GPDMA_C1TR1.BNDT[15:0] and this is internally used by the hardware for the block transfer completion. */
    constexpr std::uint32_t GPDMA_C1TR2_PFREQ_B_0x0 = 0;
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol in peripheral control mode. The GPDMA block transfer can be early completed by the peripheral itself (see less than xe2 [GPDMA_channels_peripheral]/> for more details). */
    constexpr std::uint32_t GPDMA_C1TR2_PFREQ_B_0x1 = 1;

    /** @brief These bits define the transfer granularity for its conditioning by the trigger. If the channel 1 is enabled (GPDMA_C1CR.EN asserted) with TRIGPOL[1:0] = 00 or 11, these TRIGM[1:0] bits are ignored. Else, a GPDMA transfer is conditioned by at least one trigger hit: 00: at block level: the first burst read of each block transfer is conditioned by one hit trigger (channel 1 = 12 to 15, for each block if a 2D/repeated block is configured with GPDMA_C1BR1.BRC[10:0] is not equal to 0). 10: at link level: a LLI link transfer is conditioned by one hit trigger. The LLI data transfer (if any) is not conditioned. 11: at programmed burst level: If SWREQ = 1, each programmed burst read is conditioned by one hit trigger. If SWREQ = 0, each programmed burst that is requested by the selected peripheral, is conditioned by one hit trigger. - If the peripheral is programmed as a source (DREQ = 0) of the LLI data transfer, each programmed burst read is conditioned. - If the peripheral is programmed as a destination (DREQ = 1) of the LLI data transfer, each programmed burst write is conditioned. The first memory burst read of a (possibly 2D/repeated) block, also named as the first ready FIFO-based source burst, is gated by the occurrence of both the hardware request and the first trigger hit.01: channel 1 = 0 to , same as 00; channel 1 , at 2D/repeated block level. The first burst read of a 2D/repeated block transfer is conditioned by one hit trigger. The GPDMA monitoring of a trigger for channel 1 is started when the channel is enabled/loaded with a new active trigger configuration: rising or falling edge on a selected trigger (TRIGPOL[1:0] = 01 or respectively TRIGPOL[1:0]=10). The monitoring of this trigger is kept active during the triggered and uncompleted (data or link) transfer; and if a new trigger is detected then, this hit is internally memorized to grant the next transfer, as long as the defined rising or falling edge is not modified, and the TRIGSEL[5:0] is not modified, and the channel is enabled. Transferring a next LLIn+1 that updates the GPDMA_C1TR2 with a new value for any of TRIGSEL[5:0] or TRIGPOL[1:0], resets the monitoring, trashing the memorized hit of the formerly defined LLIn trigger. After a first new trigger hitn+1 is memorized, if another second trigger hitn+2 is detected and if the hitn triggered transfer is still not completed, hitn+2 is lost and not memorized.memorized. A trigger overrun flag is reported (GPDMA_C1SR.TOF=1), and an interrupt is generated if enabled (GPDMA_C1CR.TOIE = 1). The channel is not automatically disabled by hardware due to a trigger overrun. Note: When the source block size is not a multiple of the source burst size and is a multiple of the source data width, then the last programmed source burst is not completed and is internally shorten to match the block size. In this case, if TRIGM[1:0] = 11 and (SWREQ = 1 or (SWREQ = 0 and DREQ = 0)), the shortened burst transfer (by singles or/and by bursts of lower length) is conditioned once by the trigger. +: When the programmed destination burst is internally shortened by singles or/and by bursts of lower length (versus FIFO size, versus block size, 1-Kbyte boundary address crossing): if the trigger is conditioning the programmed destination burst (if TRIGM[1:0] = 11 and SWREQ = 0 and DREQ = 1), this shortened destination burst transfer is conditioned once by the trigger. */
    using GPDMA_C1TR2_TRIGM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief These bits select the trigger event input of the GPDMA transfer (as per less than xe3 [GPDMA_triggers]/>), with anactive trigger event if TRIGPOL[1:0] is not equal to 00. */
    using GPDMA_C1TR2_TRIGSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief These bits define the polarity of the selected trigger event input defined by TRIGSEL[5:0]. 00: no trigger (masked trigger event) 01: trigger on the rising edge 10: trigger on the falling edge 11: same as 00 */
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

    /** @brief These bits define the transfer granularity for the transfer complete and half transfer complete events generation. 00: at block level (when GPDMA_C1BR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. 01: channel 1 (0 to ), same as 00, channel 1 , at 2D/repeated block level (when GPDMA_C1BR1.BRC[10:0] = 0 and GPDMA_C1BR1.BNDT[15:0] = 0). The complete (and the half) transfer event is generated at the end (respectively half of the end) of the 2D/repeated block. 10: at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer. The LLI data transfer is a block transfer or a 2D/repeated block transfer for channel 1 , if any data transfer. 11: at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address GPDMA_C1LLR.LA[15:2] to zero and clears all the GPDMA_C1LLR update bits (UT1, UT2, UB1, USA, UDA and ULL, plus UT3 and UB2). If the channel transfer is continuous/infinite, no event is generated. Note: If the initial LLI0 data transfer is null/void (directly programmed by the internal register file with GPDMA_C1BR1.BNDT[15:0] = 0), then neither the complete transfer event nor the half transfer event is generated. +: If the initial LLI0 data transfer is null/void (directly programmed by the internal register file with GPDMA_C1BR1.BNDT[15:0] = 0), then neither the complete transfer event nor the half transfer event is generated. +: If the initial LLI0 data transfer is null/void (directly programmed by the internal register file with GPDMA_C1BR1.BNDT[15:0] = 0), then the half transfer event is not generated, and the transfer complete event is generated when is completed the loading of the LLI1. */
    using GPDMA_C1TR2_TCEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: at block level (when GPDMA_C1BR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. (value: 0)
     *          - B_0x1: channel 1 (0 to ), same as 00, channel 1 , at 2D/repeated block level (when GPDMA_C1BR1.BRC[10:0] = 0 and GPDMA_C1BR1.BNDT[15:0] = 0). The complete (and the half) transfer event is generated at the end (respectively half of the end) of the 2D/repeated block. (value: 1)
     *          - B_0x2: at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer. The LLI data transfer is a block transfer or a 2D/repeated block transfer for channel 1 , if any data transfer. (value: 2)
     *          - B_0x3: at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address GPDMA_C1LLR.LA[15:2] to zero and clears all the GPDMA_C1LLR update bits (UT1, UT2, UB1, USA, UDA and ULL, plus UT3 and UB2). If the channel transfer is continuous/infinite, no event is generated. (value: 3)
     */
        /** @brief at block level (when GPDMA_C1BR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. */
    constexpr std::uint32_t GPDMA_C1TR2_TCEM_B_0x0 = 0;
        /** @brief channel 1 (0 to ), same as 00, channel 1 , at 2D/repeated block level (when GPDMA_C1BR1.BRC[10:0] = 0 and GPDMA_C1BR1.BNDT[15:0] = 0). The complete (and the half) transfer event is generated at the end (respectively half of the end) of the 2D/repeated block. */
    constexpr std::uint32_t GPDMA_C1TR2_TCEM_B_0x1 = 1;
        /** @brief at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer. The LLI data transfer is a block transfer or a 2D/repeated block transfer for channel 1 , if any data transfer. */
    constexpr std::uint32_t GPDMA_C1TR2_TCEM_B_0x2 = 2;
        /** @brief at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address GPDMA_C1LLR.LA[15:2] to zero and clears all the GPDMA_C1LLR update bits (UT1, UT2, UB1, USA, UDA and ULL, plus UT3 and UB2). If the channel transfer is continuous/infinite, no event is generated. */
    constexpr std::uint32_t GPDMA_C1TR2_TCEM_B_0x3 = 3;

    /** @brief GPDMA channel 1 block register 1 */
    using GPDMA_C1BR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x118, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Block size transferred from the source. When the channel is enabled, this field becomes read-only and is decremented, indicating the remaining number of data items in the current source block to be transferred. BNDT[15:0] is programmed in number of bytes, maximum source block size is 64 Kbytes -1. Once the last data transfer is completed (BNDT[15:0] = 0): - if GPDMA_C1LLR.UB1 = 1, this field is updated by the LLI in the memory. - if GPDMA_C1LLR.UB1 = 0 and if there is at least one not null Uxx update bit, this field is internally restored to the programmed value. - if all GPDMA_C1LLR.Uxx = 0 and if GPDMA_C1LLR.LA[15:0] is not equal to 0, this field is internally restored to the programmed value (infinite/continuous last LLI). - if GPDMA_C1LLR = 0, this field is kept as zero following the last LLI data transfer. Note: A non-null source block size must be a multiple of the source data width (BNDT[2:0] versus GPDMA_C1TR1.SDW_LOG2[1:0]). Else a user setting error is reported and no transfer is issued. +: When configured in packing mode (GPDMA_C1TR1.PAM[1] = 1 and destination data width different from source data width), a non-null source block size must be a multiple of the destination data width (BNDT[2:0] versus GPDMA_C1TR1.DDW_LOG2[1:0]). Else a user setting error is reported and no transfer is issued. */
    using GPDMA_C1BR1_BNDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 1 source address register */
    using GPDMA_C1SAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x11C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This field is the pointer to the address from which the next data is read. During the channel activity, depending on the source addressing mode (GPDMA_C1TR1.SINC), this field is kept fixed or incremented by the data width (GPDMA_C1TR1.SDW_LOG2[1:0]) after each burst source data, reflecting the next address from which data is read. During the channel activity, this address is updated after each completed source burst, consequently to: - the programmed source burst; either in fixed addressing mode or in contiguous-data incremented mode. If contiguously incremented (GPDMA_C1TR1.SINC = 1), then the additional address offset value is the programmed burst size, as defined by GPDMA_C1TR1.SBL_1[5:0] and GPDMA_C1TR1.SDW_LOG2[21:0] - the additional source incremented/decremented offset value as programmed by GPDMA_C1BR1.SDEC and GPDMA_CxTR3.SAO[12:0]. - once/if completed source block transfer, for a channel 1 with 2D addressing capability (x = 12 to 15). additional block repeat source incremented/decremented offset value as programmed by GPDMA_C1BR1.BRSDEC and GPDMA_CxBR2.BRSAO[15:0] In linked-list mode, after a LLI data transfer is completed, this register is automatically updated by GPDMA from the memory, provided the LLI is set with GPDMA_C1LLR.USA = 1. Note: A source address must be aligned with the programmed data width of a source burst (SA[2:0] versus GPDMA_C1TR1.SDW_LOG2[1:0]). Else, a user setting error is reported and no transfer is issued. +: When the source block size is not a multiple of the source burst size and is a multiple of the source data width, the last programmed source burst is not completed and is internally shorten to match the block size. In this case, the additional GPDMA_CxTR3.SAO[12:0] is not applied. */
    using GPDMA_C1SAR_SA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 1 destination address register */
    using GPDMA_C1DAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x120, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This field is the pointer to the address from which the next data is written. During the channel activity, depending on the destination addressing mode (GPDMA_C1TR1.DINC), this field is kept fixed or incremented by the data width (GPDMA_C1TR1.DDW_LOG2[21:0]) after each burst destination data, reflecting the next address from which data is written. During the channel activity, this address is updated after each completed destination burst, consequently to: - the programmed destination burst; either in fixed addressing mode or in contiguous-data incremented mode. If contiguously incremented (GPDMA_C1TR1.DINC = 1), then the additional address offset value is the programmed burst size, as defined by GPDMA_C1TR1.DBL_1[5:0] and GPDMA_C1TR1.DDW_LOG2[1:0] - the additional destination incremented/decremented offset value as programmed by GPDMA_C1BR1.DDEC and GPDMA_CxTR3.DAO[12:0]. - once/if completed destination block transfer, for a channel 1 with 2D addressing capability (x=12to15), the additional block repeat destination incremented/decremented offset value as programmed by GPDMA_C1BR1.BRDDEC and GPDMA_CxBR2.BRDAO[15:0] In linked-list mode, after a LLI data transfer is completed, this register is automatically updated by the GPDMA from the memory, provided the LLI is set with GPDMA_C1LLR.UDA = 1. Note: A destination address must be aligned with the programmed data width of a destination burst (DA[2:0] versus GPDMA_C1TR1.DDW_LOG2[1:0]). Else, a user setting error is reported and no transfer is issued. */
    using GPDMA_C1DAR_DA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 1 linked-list address register */
    using GPDMA_C1LLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief If UT1 = UT2 = UB1 = USA = UDA = ULL = 0 and if LA[15:20] = 0, the current LLI is the last one. The channel transfer is completed without any update of the linked-list GPDMA register file. Else, this field is the pointer to the memory address offset from which the next linked-list data structure is automatically fetched from, once the data transfer is completed, in order to conditionally update the linked-list GPDMA internal register file (GPDMA_C1TR1, GPDMA_C1TR2, GPDMA_C1BR1, GPDMA_CxSAR, GPDMA_CxDAR and GPDMA_C1LLR). Note: The user must program the pointer to be 32-bit aligned. The two low-significant bits are write ignored. */
    using GPDMA_C1LLR_LA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This bit is used to control the update of GPDMA_C1LLR from the memory during the link transfer. 0: no GPDMA_C1LLR update 1: GPDMA_C1LLR update */
    using GPDMA_C1LLR_ULL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_C1LLR update (value: 0)
     *          - B_0x1: GPDMA_C1LLR update (value: 1)
     */
        /** @brief no GPDMA_C1LLR update */
    constexpr std::uint32_t GPDMA_C1LLR_ULL_B_0x0 = 0;
        /** @brief GPDMA_C1LLR update */
    constexpr std::uint32_t GPDMA_C1LLR_ULL_B_0x1 = 1;

    /** @brief This bit is used to control the update of GPDMA_CxDAR from the memory during the link transfer. 0: no GPDMA_CxDAR update 1: GPDMA_CxDAR update */
    using GPDMA_C1LLR_UDA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxDAR update (value: 0)
     *          - B_0x1: GPDMA_CxDAR update (value: 1)
     */
        /** @brief no GPDMA_CxDAR update */
    constexpr std::uint32_t GPDMA_C1LLR_UDA_B_0x0 = 0;
        /** @brief GPDMA_CxDAR update */
    constexpr std::uint32_t GPDMA_C1LLR_UDA_B_0x1 = 1;

    /** @brief This bit controls the update of GPDMA_CxSAR from the memory during the link transfer. 0: no GPDMA_CxSAR update 1: GPDMA_CxSAR update */
    using GPDMA_C1LLR_USA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxSAR update (value: 0)
     *          - B_0x1: GPDMA_CxSAR update (value: 1)
     */
        /** @brief no GPDMA_CxSAR update */
    constexpr std::uint32_t GPDMA_C1LLR_USA_B_0x0 = 0;
        /** @brief GPDMA_CxSAR update */
    constexpr std::uint32_t GPDMA_C1LLR_USA_B_0x1 = 1;

    /** @brief This bit controls the update of GPDMA_C1BR1 from the memory during the link transfer. If UB1 = 0 and if GPDMA_C1LLR is not equal to 0, the linked-list is not completed. GPDMA_C1BR1.BNDT[15:0] is then restored to the programmed value after data transfer is completed and before the link transfer. 0: no GPDMA_C1BR1 update from memory (GPDMA_C1BR1.BNDT[15:0] restored if any link transfer) 1: GPDMA_C1BR1 update */
    using GPDMA_C1LLR_UB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_C1BR1 update from memory (GPDMA_C1BR1.BNDT[15:0] restored if any link transfer) (value: 0)
     *          - B_0x1: GPDMA_C1BR1 update (value: 1)
     */
        /** @brief no GPDMA_C1BR1 update from memory (GPDMA_C1BR1.BNDT[15:0] restored if any link transfer) */
    constexpr std::uint32_t GPDMA_C1LLR_UB1_B_0x0 = 0;
        /** @brief GPDMA_C1BR1 update */
    constexpr std::uint32_t GPDMA_C1LLR_UB1_B_0x1 = 1;

    /** @brief This bit controls the update of GPDMA_C1TR2 from the memory during the link transfer. 0: no GPDMA_C1TR2 update 1: GPDMA_C1TR2 update */
    using GPDMA_C1LLR_UT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_C1TR2 update (value: 0)
     *          - B_0x1: GPDMA_C1TR2 update (value: 1)
     */
        /** @brief no GPDMA_C1TR2 update */
    constexpr std::uint32_t GPDMA_C1LLR_UT2_B_0x0 = 0;
        /** @brief GPDMA_C1TR2 update */
    constexpr std::uint32_t GPDMA_C1LLR_UT2_B_0x1 = 1;

    /** @brief This bit controls the update of GPDMA_C1TR1 from the memory during the link transfer. 0: no GPDMA_C1TR1 update 1: GPDMA_C1TR1 update */
    using GPDMA_C1LLR_UT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_C1TR1 update (value: 0)
     *          - B_0x1: GPDMA_C1TR1 update (value: 1)
     */
        /** @brief no GPDMA_C1TR1 update */
    constexpr std::uint32_t GPDMA_C1LLR_UT1_B_0x0 = 0;
        /** @brief GPDMA_C1TR1 update */
    constexpr std::uint32_t GPDMA_C1LLR_UT1_B_0x1 = 1;

    /** @brief GPDMA channel 2 linked-list base address register */
    using GPDMA_C2LBAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x150, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief None */
    using GPDMA_C2LBAR_LBA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 2 flag clear register */
    using GPDMA_C2FCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x15C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief None 0: no effect 1: corresponding TCF flag cleared */
    using GPDMA_C2FCR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding TCF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C2FCR_TCF_B_0x0 = 0;
        /** @brief corresponding TCF flag cleared */
    constexpr std::uint32_t GPDMA_C2FCR_TCF_B_0x1 = 1;

    /** @brief None 0: no effect 1: corresponding HTF flag cleared */
    using GPDMA_C2FCR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding HTF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C2FCR_HTF_B_0x0 = 0;
        /** @brief corresponding HTF flag cleared */
    constexpr std::uint32_t GPDMA_C2FCR_HTF_B_0x1 = 1;

    /** @brief None 0: no effect 1: corresponding DTEF flag cleared */
    using GPDMA_C2FCR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding DTEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C2FCR_DTEF_B_0x0 = 0;
        /** @brief corresponding DTEF flag cleared */
    constexpr std::uint32_t GPDMA_C2FCR_DTEF_B_0x1 = 1;

    /** @brief None 0: no effect 1: corresponding ULEF flag cleared */
    using GPDMA_C2FCR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding ULEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C2FCR_ULEF_B_0x0 = 0;
        /** @brief corresponding ULEF flag cleared */
    constexpr std::uint32_t GPDMA_C2FCR_ULEF_B_0x1 = 1;

    /** @brief None 0: no effect 1: corresponding USEF flag cleared */
    using GPDMA_C2FCR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding USEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C2FCR_USEF_B_0x0 = 0;
        /** @brief corresponding USEF flag cleared */
    constexpr std::uint32_t GPDMA_C2FCR_USEF_B_0x1 = 1;

    /** @brief None 0: no effect 1: corresponding SUSPF flag cleared */
    using GPDMA_C2FCR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding SUSPF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C2FCR_SUSPF_B_0x0 = 0;
        /** @brief corresponding SUSPF flag cleared */
    constexpr std::uint32_t GPDMA_C2FCR_SUSPF_B_0x1 = 1;

    /** @brief None 0: no effect 1: corresponding TOF flag cleared */
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
    /** @brief This idle flag is deasserted by hardware when the channel is enabled (GPDMA_C2CR.EN = 1) with a valid channel configuration (no USEF to be immediately reported). This idle flag is asserted after hard reset or by hardware when the channel is back in idle state (in suspended or disabled state). 0: channel not in idle state 1: channel in idle state */
    using GPDMA_C2SR_IDLEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: channel not in idle state (value: 0)
     *          - B_0x1: channel in idle state (value: 1)
     */
        /** @brief channel not in idle state */
    constexpr std::uint32_t GPDMA_C2SR_IDLEF_B_0x0 = 0;
        /** @brief channel in idle state */
    constexpr std::uint32_t GPDMA_C2SR_IDLEF_B_0x1 = 1;

    /** @brief A transfer complete event is either a block transfer complete, a 2D/repeated block transfer complete, or a LLI transfer complete including the upload of the next LLI if any, or the full linked-list completion, depending on the transfer complete event mode (GPDMA_C2TR2.TCEM[1:0]). 0: no transfer complete event 1: a transfer complete event occurred */
    using GPDMA_C2SR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no transfer complete event (value: 0)
     *          - B_0x1: a transfer complete event occurred (value: 1)
     */
        /** @brief no transfer complete event */
    constexpr std::uint32_t GPDMA_C2SR_TCF_B_0x0 = 0;
        /** @brief a transfer complete event occurred */
    constexpr std::uint32_t GPDMA_C2SR_TCF_B_0x1 = 1;

    /** @brief A half transfer event is either a half block transfer or a half 2D/repeated block transfer, depending on the transfer complete event mode (GPDMA_C2TR2.TCEM[1:0]). A half block transfer occurs when half of the bytes of the source block size (rounded up integer of GPDMA_C2BR1.BNDT[15:0]/2) has been transferred to the destination. A half 2D/repeated block transfer occurs when half of the repeated blocks (rounded up integer of (GPDMA_C2BR1.BRC[10:0]+1)/2)) has been transferred to the destination. 0: no half transfer event 1: a half transfer event occurred */
    using GPDMA_C2SR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no half transfer event (value: 0)
     *          - B_0x1: a half transfer event occurred (value: 1)
     */
        /** @brief no half transfer event */
    constexpr std::uint32_t GPDMA_C2SR_HTF_B_0x0 = 0;
        /** @brief a half transfer event occurred */
    constexpr std::uint32_t GPDMA_C2SR_HTF_B_0x1 = 1;

    /** @brief None 0: no data transfer error event 1: a master bus error event occurred on a data transfer */
    using GPDMA_C2SR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no data transfer error event (value: 0)
     *          - B_0x1: a master bus error event occurred on a data transfer (value: 1)
     */
        /** @brief no data transfer error event */
    constexpr std::uint32_t GPDMA_C2SR_DTEF_B_0x0 = 0;
        /** @brief a master bus error event occurred on a data transfer */
    constexpr std::uint32_t GPDMA_C2SR_DTEF_B_0x1 = 1;

    /** @brief None 0: no update link transfer error event 1: a master bus error event occurred while updating a linked-list register from memory */
    using GPDMA_C2SR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no update link transfer error event (value: 0)
     *          - B_0x1: a master bus error event occurred while updating a linked-list register from memory (value: 1)
     */
        /** @brief no update link transfer error event */
    constexpr std::uint32_t GPDMA_C2SR_ULEF_B_0x0 = 0;
        /** @brief a master bus error event occurred while updating a linked-list register from memory */
    constexpr std::uint32_t GPDMA_C2SR_ULEF_B_0x1 = 1;

    /** @brief None 0: no user setting error event 1: a user setting error event occurred */
    using GPDMA_C2SR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no user setting error event (value: 0)
     *          - B_0x1: a user setting error event occurred (value: 1)
     */
        /** @brief no user setting error event */
    constexpr std::uint32_t GPDMA_C2SR_USEF_B_0x0 = 0;
        /** @brief a user setting error event occurred */
    constexpr std::uint32_t GPDMA_C2SR_USEF_B_0x1 = 1;

    /** @brief None 0: no completed suspension event 1: a completed suspension event occurred */
    using GPDMA_C2SR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no completed suspension event (value: 0)
     *          - B_0x1: a completed suspension event occurred (value: 1)
     */
        /** @brief no completed suspension event */
    constexpr std::uint32_t GPDMA_C2SR_SUSPF_B_0x0 = 0;
        /** @brief a completed suspension event occurred */
    constexpr std::uint32_t GPDMA_C2SR_SUSPF_B_0x1 = 1;

    /** @brief None 0: no trigger overrun event 1: a trigger overrun event occurred */
    using GPDMA_C2SR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no trigger overrun event (value: 0)
     *          - B_0x1: a trigger overrun event occurred (value: 1)
     */
        /** @brief no trigger overrun event */
    constexpr std::uint32_t GPDMA_C2SR_TOF_B_0x0 = 0;
        /** @brief a trigger overrun event occurred */
    constexpr std::uint32_t GPDMA_C2SR_TOF_B_0x1 = 1;

    /** @brief Number of available write beats in the FIFO, in units of the programmed destination data width (see GPDMA_C2TR1.DDW_LOG2[1:0], in units of bytes, half-words, or words). Note: After having suspended an active transfer, the user may need to read FIFOL[7:0], additionally to GPDMA_C2BR1.BDNT[15:0] and GPDMA_C2BR1.BRC[10:0], to know how many data have been transferred to the destination. Before reading, the user may wait for the transfer to be suspended (GPDMA_C2SR.SUSPF = 1). */
    using GPDMA_C2SR_FIFOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 2 control register */
    using GPDMA_C2CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x164, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Writing 1 into the field RESET (bit 1) causes the hardware to de-assert this bit, whatever is written into this bit 0. Else: this bit is deasserted by hardware when there is a transfer error (master bus error or user setting error) or when there is a channel transfer complete (channel ready to be configured, for example if LSM = 1 at the end of a single execution of the LLI). Else, this bit can be asserted by software. Writing 0 into this EN bit is ignored. 0: write: ignored, read: channel disabled 1: write: enable channel, read: channel enabled */
    using GPDMA_C2CR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write: ignored, read: channel disabled (value: 0)
     *          - B_0x1: write: enable channel, read: channel enabled (value: 1)
     */
        /** @brief write: ignored, read: channel disabled */
    constexpr std::uint32_t GPDMA_C2CR_EN_B_0x0 = 0;
        /** @brief write: enable channel, read: channel enabled */
    constexpr std::uint32_t GPDMA_C2CR_EN_B_0x1 = 1;

    /** @brief This bit is write only. Writing 0 has no impact. Writing 1 implies the reset of the following: the FIFO, the channel internal state, SUSP and EN bits (whatever is written receptively in bit 2 and bit 0). The reset is effective when the channel is in steady state, meaning one of the following: - active channel in suspended state (GPDMA_C2SR.SUSPF = 1 and GPDMA_C2SR.IDLEF=GPDMA_C2CR.EN = 1) - channel in disabled state (GPDMA_C2SR.IDLEF = 1 and GPDMA_C2CR.EN = 0). After writing a RESET, to continue using this channel, the user must explicitly reconfigure the channel including the hardware-modified configuration registers (GPDMA_C2BR1, GPDMA_CxSAR and GPDMA_CxDAR) before enabling again the channel (see the programming sequence in less than xe6 [GPDMA_abort_restart/ID00-1465]/>). 0: no channel reset 1: channel reset */
    using GPDMA_C2CR_RESET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no channel reset (value: 0)
     *          - B_0x1: channel reset (value: 1)
     */
        /** @brief no channel reset */
    constexpr std::uint32_t GPDMA_C2CR_RESET_B_0x0 = 0;
        /** @brief channel reset */
    constexpr std::uint32_t GPDMA_C2CR_RESET_B_0x1 = 1;

    /** @brief Writing 1 into the field RESET (bit 1) causes the hardware to de-assert this bit, whatever is written into this bit 2. Else: Software must write 1 in order to suspend an active channel (channel with an ongoing GPDMA transfer over its master ports). The software must write 0 in order to resume a suspended channel, following the programming sequence detailed in less than xe5 [GPDMA_channel_suspend_and_resume/ID00-1456]/>. 0: write: resume channel, read: channel not suspended 1: write: suspend channel, read: channel suspended. */
    using GPDMA_C2CR_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write: resume channel, read: channel not suspended (value: 0)
     *          - B_0x1: write: suspend channel, read: channel suspended. (value: 1)
     */
        /** @brief write: resume channel, read: channel not suspended */
    constexpr std::uint32_t GPDMA_C2CR_SUSP_B_0x0 = 0;
        /** @brief write: suspend channel, read: channel suspended. */
    constexpr std::uint32_t GPDMA_C2CR_SUSP_B_0x1 = 1;

    /** @brief None 0: interrupt disabled 1: interrupt enabled */
    using GPDMA_C2CR_TCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C2CR_TCIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C2CR_TCIE_B_0x1 = 1;

    /** @brief None 0: interrupt disabled 1: interrupt enabled */
    using GPDMA_C2CR_HTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C2CR_HTIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C2CR_HTIE_B_0x1 = 1;

    /** @brief None 0: interrupt disabled 1: interrupt enabled */
    using GPDMA_C2CR_DTEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C2CR_DTEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C2CR_DTEIE_B_0x1 = 1;

    /** @brief None 0: interrupt disabled 1: interrupt enabled */
    using GPDMA_C2CR_ULEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C2CR_ULEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C2CR_ULEIE_B_0x1 = 1;

    /** @brief None 0: interrupt disabled 1: interrupt enabled */
    using GPDMA_C2CR_USEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C2CR_USEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C2CR_USEIE_B_0x1 = 1;

    /** @brief None 0: interrupt disabled 1: interrupt enabled */
    using GPDMA_C2CR_SUSPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C2CR_SUSPIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C2CR_SUSPIE_B_0x1 = 1;

    /** @brief None 0: interrupt disabled 1: interrupt enabled */
    using GPDMA_C2CR_TOIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C2CR_TOIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C2CR_TOIE_B_0x1 = 1;

    /** @brief First the (possible 1D/repeated) block transfer is executed as defined by the current internal register file until GPDMA_C2BR1.BNDT[15:0] = 0 and GPDMA_C2BR1.BRC[10:0] = 0. Secondly the next linked-list data structure is conditionally uploaded from memory as defined by GPDMA_C2LLR. Then channel execution is completed. 0: channel executed for the full linked-list and completed at the end of the last LLI (GPDMA_C2LLR = 0). The 16 low-significant bits of the link address are null (LA[15:0] = 0) and all the update bits are null (UT1 = UB1 = UT2 = USA = UDA = ULL = 0 and UT3 = UB2 = 0). Then GPDMA_C2BR1.BNDT[15:0] = 0 and GPDMA_C2BR1.BRC[10:0] = 0. 1: channel executed once for the current LLI Note: This bit must be written when EN = 0. This bit is read-only when EN = 1. */
    using GPDMA_C2CR_LSM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: channel executed for the full linked-list and completed at the end of the last LLI (GPDMA_C2LLR = 0). The 16 low-significant bits of the link address are null (LA[15:0] = 0) and all the update bits are null (UT1 = UB1 = UT2 = USA = UDA = ULL = 0 and UT3 = UB2 = 0). Then GPDMA_C2BR1.BNDT[15:0] = 0 and GPDMA_C2BR1.BRC[10:0] = 0. (value: 0)
     *          - B_0x1: channel executed once for the current LLI (value: 1)
     */
        /** @brief channel executed for the full linked-list and completed at the end of the last LLI (GPDMA_C2LLR = 0). The 16 low-significant bits of the link address are null (LA[15:0] = 0) and all the update bits are null (UT1 = UB1 = UT2 = USA = UDA = ULL = 0 and UT3 = UB2 = 0). Then GPDMA_C2BR1.BNDT[15:0] = 0 and GPDMA_C2BR1.BRC[10:0] = 0. */
    constexpr std::uint32_t GPDMA_C2CR_LSM_B_0x0 = 0;
        /** @brief channel executed once for the current LLI */
    constexpr std::uint32_t GPDMA_C2CR_LSM_B_0x1 = 1;

    /** @brief This bit is used to allocate the master port for the update of the GPDMA linked-list registers from the memory. 0: port 0 (AHB) allocated 1: port 1 (AHB) allocated Note: This bit must be written when EN = 0. This bit is read-only when EN = 1. */
    using GPDMA_C2CR_LAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C2CR_LAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C2CR_LAP_B_0x1 = 1;

    /** @brief None 00: low priority, low weight 01: low priority, mid weight 10: low priority, high weight 11: high priority Note: This bit must be written when EN = 0. This bit is read-only when EN = 1. */
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
    /** @brief None 00: byte 01: half-word (2 bytes) 10: word (4 bytes) 11: user setting error reported and no transfer issued Note: Setting a 8-byte data width causes a user setting error to be reported and no transfer is issued. +: A source block size must be a multiple of the source data width (GPDMA_C2BR1.BNDT[2:0] versus SDW_LOG2[1:0]). Otherwise, a user setting error is reported and no transfer is issued. +: A source burst transfer must have an aligned address with its data width (start address GPDMA_CxSAR[2:0] versus SDW_LOG2[1:0]). Otherwise, a user setting error is reported and none transfer is issued. */
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

    /** @brief The source address, pointed by GPDMA_CxSAR, is kept constant after a burst beat/single transfer or is incremented by the offset value corresponding to a contiguous data after a burst beat/single transfer. 0: fixed burst 1: contiguously incremented burst */
    using GPDMA_C2TR1_SINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fixed burst (value: 0)
     *          - B_0x1: contiguously incremented burst (value: 1)
     */
        /** @brief fixed burst */
    constexpr std::uint32_t GPDMA_C2TR1_SINC_B_0x0 = 0;
        /** @brief contiguously incremented burst */
    constexpr std::uint32_t GPDMA_C2TR1_SINC_B_0x1 = 1;

    /** @brief The burst length unit is one data named beat within a burst. If SBL_1[5:0] = 0, the burst can be named as single. Each data/beat has a width defined by the destination data width SDW_LOG2[1:0]. Note: If a burst transfer crossed a 1-Kbyte address boundary on a AHB transfer, the GPDMA modifies and shortens the programmed burst into singles or bursts of lower length, to be compliant with the AHB protocol. +: If a burst transfer is of length greater than the FIFO size of the channel 2, the GPDMA modifies and shortens the programmed burst into singles or bursts of lower length, to be compliant with the FIFO size. Transfer performance is lower, with GPDMA re-arbitration between effective and lower singles/bursts, but the data integrity is guaranteed. */
    using GPDMA_C2TR1_SBL_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief If DDW_LOG2[1:0] = SDW_LOG2[1:0]: if the data width of a burst destination transfer is equal to the data width of a burst source transfer, these bits are ignored. */
    using GPDMA_C2TR1_PAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0_COND1: COND1 is [PAM_1] source data is transferred as right aligned, padded with 0s up to the destination data width (value: 0)
     *          - B_0x1_COND1: COND1 is [PAM_1] source data is transferred as right aligned, sign extended up to the destination data width (value: 1)
     *          - B_0x2_COND1: COND1 is [PAM_1] successive source data are FIFO queued and packed at the destination data width, in a left (LSB) to right (MSB) order (named little endian), before a destination transfer (value: 2)
     *          - B_0x3_COND1: COND1 is [PAM_1] successive source data are FIFO queued and packed at the destination data width, in a left (LSB) to right (MSB) order (named little endian), before a destination transfer (value: 3)
     */
        /** @brief COND1 is [PAM_1] source data is transferred as right aligned, padded with 0s up to the destination data width */
    constexpr std::uint32_t GPDMA_C2TR1_PAM_B_0x0_COND1 = 0;
        /** @brief COND1 is [PAM_1] source data is transferred as right aligned, sign extended up to the destination data width */
    constexpr std::uint32_t GPDMA_C2TR1_PAM_B_0x1_COND1 = 1;
        /** @brief COND1 is [PAM_1] successive source data are FIFO queued and packed at the destination data width, in a left (LSB) to right (MSB) order (named little endian), before a destination transfer */
    constexpr std::uint32_t GPDMA_C2TR1_PAM_B_0x2_COND1 = 2;
        /** @brief COND1 is [PAM_1] successive source data are FIFO queued and packed at the destination data width, in a left (LSB) to right (MSB) order (named little endian), before a destination transfer */
    constexpr std::uint32_t GPDMA_C2TR1_PAM_B_0x3_COND1 = 3;

    /** @brief If the source data width is shorter than a word, this bit is ignored. If the source data width is a word: 0: no byte-based exchange within the unaligned half-word of each source word 1: the two consecutive bytes within the unaligned half-word of each source word are exchanged. */
    using GPDMA_C2TR1_SBx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no byte-based exchange within the unaligned half-word of each source word (value: 0)
     *          - B_0x1: the two consecutive bytes within the unaligned half-word of each source word are exchanged. (value: 1)
     */
        /** @brief no byte-based exchange within the unaligned half-word of each source word */
    constexpr std::uint32_t GPDMA_C2TR1_SBx_B_0x0 = 0;
        /** @brief the two consecutive bytes within the unaligned half-word of each source word are exchanged. */
    constexpr std::uint32_t GPDMA_C2TR1_SBx_B_0x1 = 1;

    /** @brief This bit is used to allocate the master port for the source transfer 0: port 0 (AHB) allocated 1: port 1 (AHB) allocated Note: This bit must be written when EN = 0. This bit is read-only when EN = 1. */
    using GPDMA_C2TR1_SAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C2TR1_SAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C2TR1_SAP_B_0x1 = 1;

    /** @brief If GPDMA_SECCFGR.SEC2 = 1 and the access is secure: This is a secure register bit. This bit can only be read by a secure software. This bit must be written by a secure software when GPDMA_SECCFGR.SEC2 = 1. A secure write is ignored when GPDMA_SECCFGR.SEC2 = 0. When GPDMA_SECCFGR.SEC2 is deasserted, this SSEC bit is also deasserted by hardware (on a secure reconfiguration of the channel as non-secure), and the GPDMA transfer from the source is non-secure. 0: GPDMA transfer non-secure 1: GPDMA transfer secure */
    using GPDMA_C2TR1_SSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPDMA transfer non-secure (value: 0)
     *          - B_0x1: GPDMA transfer secure (value: 1)
     */
        /** @brief GPDMA transfer non-secure */
    constexpr std::uint32_t GPDMA_C2TR1_SSEC_B_0x0 = 0;
        /** @brief GPDMA transfer secure */
    constexpr std::uint32_t GPDMA_C2TR1_SSEC_B_0x1 = 1;

    /** @brief None 00: byte 01: half-word (2 bytes) 10: word (4 bytes) 11: user setting error reported and no transfer issued Note: Setting a 8-byte data width causes a user setting error to be reported and none transfer is issued. +: A destination burst transfer must have an aligned address with its data width (start address GPDMA_CxDAR[2:0] and address offset GPDMA_CxTR3.DAO[2:0], versus DDW_LOG2[1:0]). Otherwise a user setting error is reported and no transfer is issued. */
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

    /** @brief The destination address, pointed by GPDMA_CxDAR, is kept constant after a burst beat/single transfer, or is incremented by the offset value corresponding to a contiguous data after a burst beat/single transfer. 0: fixed burst 1: contiguously incremented burst */
    using GPDMA_C2TR1_DINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fixed burst (value: 0)
     *          - B_0x1: contiguously incremented burst (value: 1)
     */
        /** @brief fixed burst */
    constexpr std::uint32_t GPDMA_C2TR1_DINC_B_0x0 = 0;
        /** @brief contiguously incremented burst */
    constexpr std::uint32_t GPDMA_C2TR1_DINC_B_0x1 = 1;

    /** @brief The burst length unit is one data named beat within a burst. If DBL_1[5:0] = 0, the burst can be named as single. Each data/beat has a width defined by the destination data width DDW_LOG2[1:0]. Note: If a burst transfer crossed a 1-Kbyte address boundary on a AHB transfer, the GPDMA modifies and shortens the programmed burst into singles or bursts of lower length, to be compliant with the AHB protocol. +: If a burst transfer is of length greater than the FIFO size of the channel 2, the GPDMA modifies and shortens the programmed burst into singles or bursts of lower length, to be compliant with the FIFO size. Transfer performance is lower, with GPDMA re-arbitration between effective and lower singles/bursts, but the data integrity is guaranteed. */
    using GPDMA_C2TR1_DBL_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief If the destination data size is a byte, this bit is ignored. If the destination data size is not a byte: 0: no byte-based exchange within half-word 1: the two consecutive (post PAM) bytes are exchanged in each destination half-word. */
    using GPDMA_C2TR1_DBx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no byte-based exchange within half-word (value: 0)
     *          - B_0x1: the two consecutive (post PAM) bytes are exchanged in each destination half-word. (value: 1)
     */
        /** @brief no byte-based exchange within half-word */
    constexpr std::uint32_t GPDMA_C2TR1_DBx_B_0x0 = 0;
        /** @brief the two consecutive (post PAM) bytes are exchanged in each destination half-word. */
    constexpr std::uint32_t GPDMA_C2TR1_DBx_B_0x1 = 1;

    /** @brief If the destination data size is shorter than a word, this bit is ignored. If the destination data size is a word: 0: no halfword-based exchanged within word 1: the two consecutive (post PAM) half-words are exchanged in each destination word. */
    using GPDMA_C2TR1_DHx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no halfword-based exchanged within word (value: 0)
     *          - B_0x1: the two consecutive (post PAM) half-words are exchanged in each destination word. (value: 1)
     */
        /** @brief no halfword-based exchanged within word */
    constexpr std::uint32_t GPDMA_C2TR1_DHx_B_0x0 = 0;
        /** @brief the two consecutive (post PAM) half-words are exchanged in each destination word. */
    constexpr std::uint32_t GPDMA_C2TR1_DHx_B_0x1 = 1;

    /** @brief This bit is used to allocate the master port for the destination transfer 0: port 0 (AHB) allocated 1: port 1 (AHB) allocated Note: This bit must be written when EN = 0. This bit is read-only when EN = 1. */
    using GPDMA_C2TR1_DAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C2TR1_DAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C2TR1_DAP_B_0x1 = 1;

    /** @brief If GPDMA_SECCFGR.SEC2 = 1 and the access is secure: This is a secure register bit. This bit can only be read by a secure software. This bit must be written by a secure software when GPDMA_SECCFGR.SEC2 = 1. A secure write is ignored when GPDMA_SECCFGR.SEC2 = 0. When GPDMA_SECCFGR.SEC2 is deasserted, this DSEC bit is also deasserted by hardware (on a secure reconfiguration of the channel as non-secure), and the GPDMA transfer to the destination is non-secure. 0: GPDMA transfer non-secure 1: GPDMA transfer secure */
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
    /** @brief These bits are ignored if channel 2 is activated (GPDMA_C2CR.EN asserted) with SWREQ=1 (software request for a memory-to-memory transfer). Else, the selected hardware request is internally taken into account as per less than xe4 [GPDMA_requests]/>. The user must not assign a same input hardware request (same REQSEL[6:0] value) to different active GPDMA channels (GPDMA_C2CR.EN = 1 and GPDMA_C2TR2.SWREQ = 0 for these channels). GPDMA is not intended to hardware support the case of simultaneous enabled channels incorrectly configured with a same hardware peripheral request signal, and there is no user setting error reporting. */
    using GPDMA_C2TR2_REQSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This bit is internally taken into account when GPDMA_C2CR.EN is asserted. 0: no software request. The selected hardware request REQSEL[6:0] is taken into account. 1: software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[6:0] is ignored. */
    using GPDMA_C2TR2_SWREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no software request. The selected hardware request REQSEL[6:0] is taken into account. (value: 0)
     *          - B_0x1: software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[6:0] is ignored. (value: 1)
     */
        /** @brief no software request. The selected hardware request REQSEL[6:0] is taken into account. */
    constexpr std::uint32_t GPDMA_C2TR2_SWREQ_B_0x0 = 0;
        /** @brief software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[6:0] is ignored. */
    constexpr std::uint32_t GPDMA_C2TR2_SWREQ_B_0x1 = 1;

    /** @brief This bit is ignored if channel 2 is activated (GPDMA_C2CR.EN asserted) with SWREQ = 1 (software request for a memory-to-memory transfer). Else: 0: selected hardware request driven by a source peripheral (request signal taken into account by the GPDMA transfer scheduler over the source/read port) 1: selected hardware request driven by a destination peripheral (request signal taken into account by the GPDMA transfer scheduler over the destination/write port) Note: If the channel 2 is activated (GPDMA_C2CR.EN is asserted) with SWREQ = 0 and PFREQ = 1 (peripheral hardware request with peripheral flow-control mode), any software assertion to this DREQ bit is ignored: in peripheral flow-control mode, only a peripheral-to-memory transfer is supported. */
    using GPDMA_C2TR2_DREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: selected hardware request driven by a source peripheral (request signal taken into account by the GPDMA transfer scheduler over the source/read port) (value: 0)
     *          - B_0x1: selected hardware request driven by a destination peripheral (request signal taken into account by the GPDMA transfer scheduler over the destination/write port) (value: 1)
     */
        /** @brief selected hardware request driven by a source peripheral (request signal taken into account by the GPDMA transfer scheduler over the source/read port) */
    constexpr std::uint32_t GPDMA_C2TR2_DREQ_B_0x0 = 0;
        /** @brief selected hardware request driven by a destination peripheral (request signal taken into account by the GPDMA transfer scheduler over the destination/write port) */
    constexpr std::uint32_t GPDMA_C2TR2_DREQ_B_0x1 = 1;

    /** @brief If the channel 2 is activated (GPDMA_C2CR.EN asserted) with SWREQ = 1 (software request for a memory-to-memory transfer), this bit is ignored. Else: 0: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a burst level. 1: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see less than xe4 [GPDMA_requests]/>). */
    using GPDMA_C2TR2_BREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a burst level. (value: 0)
     *          - B_0x1: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see less than xe4 [GPDMA_requests]/>). (value: 1)
     */
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a burst level. */
    constexpr std::uint32_t GPDMA_C2TR2_BREQ_B_0x0 = 0;
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see less than xe4 [GPDMA_requests]/>). */
    constexpr std::uint32_t GPDMA_C2TR2_BREQ_B_0x1 = 1;

    /** @brief Caution: If a given channel 2 is not implemented with this feature, this bit is reserved and PFREQ is not present (see less than xe1 [GPDMA_channels]/> for the list of the implemented channels with this feature). */
    using GPDMA_C2TR2_PFREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol in GPDMA control mode. The GPDMA is programmed with GPDMA_C2TR1.BNDT[15:0] and this is internally used by the hardware for the block transfer completion. (value: 0)
     *          - B_0x1: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol in peripheral control mode. The GPDMA block transfer can be early completed by the peripheral itself (see less than xe2 [GPDMA_channels_peripheral]/> for more details). (value: 1)
     */
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol in GPDMA control mode. The GPDMA is programmed with GPDMA_C2TR1.BNDT[15:0] and this is internally used by the hardware for the block transfer completion. */
    constexpr std::uint32_t GPDMA_C2TR2_PFREQ_B_0x0 = 0;
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol in peripheral control mode. The GPDMA block transfer can be early completed by the peripheral itself (see less than xe2 [GPDMA_channels_peripheral]/> for more details). */
    constexpr std::uint32_t GPDMA_C2TR2_PFREQ_B_0x1 = 1;

    /** @brief These bits define the transfer granularity for its conditioning by the trigger. If the channel 2 is enabled (GPDMA_C2CR.EN asserted) with TRIGPOL[1:0] = 00 or 11, these TRIGM[1:0] bits are ignored. Else, a GPDMA transfer is conditioned by at least one trigger hit: 00: at block level: the first burst read of each block transfer is conditioned by one hit trigger (channel 2 = 12 to 15, for each block if a 2D/repeated block is configured with GPDMA_C2BR1.BRC[10:0] is not equal to 0). 10: at link level: a LLI link transfer is conditioned by one hit trigger. The LLI data transfer (if any) is not conditioned. 11: at programmed burst level: If SWREQ = 1, each programmed burst read is conditioned by one hit trigger. If SWREQ = 0, each programmed burst that is requested by the selected peripheral, is conditioned by one hit trigger. - If the peripheral is programmed as a source (DREQ = 0) of the LLI data transfer, each programmed burst read is conditioned. - If the peripheral is programmed as a destination (DREQ = 1) of the LLI data transfer, each programmed burst write is conditioned. The first memory burst read of a (possibly 2D/repeated) block, also named as the first ready FIFO-based source burst, is gated by the occurrence of both the hardware request and the first trigger hit.01: channel 2 = 0 to , same as 00; channel 2 , at 2D/repeated block level. The first burst read of a 2D/repeated block transfer is conditioned by one hit trigger. The GPDMA monitoring of a trigger for channel 2 is started when the channel is enabled/loaded with a new active trigger configuration: rising or falling edge on a selected trigger (TRIGPOL[1:0] = 01 or respectively TRIGPOL[1:0]=10). The monitoring of this trigger is kept active during the triggered and uncompleted (data or link) transfer; and if a new trigger is detected then, this hit is internally memorized to grant the next transfer, as long as the defined rising or falling edge is not modified, and the TRIGSEL[5:0] is not modified, and the channel is enabled. Transferring a next LLIn+1 that updates the GPDMA_C2TR2 with a new value for any of TRIGSEL[5:0] or TRIGPOL[1:0], resets the monitoring, trashing the memorized hit of the formerly defined LLIn trigger. After a first new trigger hitn+1 is memorized, if another second trigger hitn+2 is detected and if the hitn triggered transfer is still not completed, hitn+2 is lost and not memorized.memorized. A trigger overrun flag is reported (GPDMA_C2SR.TOF=1), and an interrupt is generated if enabled (GPDMA_C2CR.TOIE = 1). The channel is not automatically disabled by hardware due to a trigger overrun. Note: When the source block size is not a multiple of the source burst size and is a multiple of the source data width, then the last programmed source burst is not completed and is internally shorten to match the block size. In this case, if TRIGM[1:0] = 11 and (SWREQ = 1 or (SWREQ = 0 and DREQ = 0)), the shortened burst transfer (by singles or/and by bursts of lower length) is conditioned once by the trigger. +: When the programmed destination burst is internally shortened by singles or/and by bursts of lower length (versus FIFO size, versus block size, 1-Kbyte boundary address crossing): if the trigger is conditioning the programmed destination burst (if TRIGM[1:0] = 11 and SWREQ = 0 and DREQ = 1), this shortened destination burst transfer is conditioned once by the trigger. */
    using GPDMA_C2TR2_TRIGM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief These bits select the trigger event input of the GPDMA transfer (as per less than xe3 [GPDMA_triggers]/>), with anactive trigger event if TRIGPOL[1:0] is not equal to 00. */
    using GPDMA_C2TR2_TRIGSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief These bits define the polarity of the selected trigger event input defined by TRIGSEL[5:0]. 00: no trigger (masked trigger event) 01: trigger on the rising edge 10: trigger on the falling edge 11: same as 00 */
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

    /** @brief These bits define the transfer granularity for the transfer complete and half transfer complete events generation. 00: at block level (when GPDMA_C2BR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. 01: channel 2 (0 to ), same as 00, channel 2 , at 2D/repeated block level (when GPDMA_C2BR1.BRC[10:0] = 0 and GPDMA_C2BR1.BNDT[15:0] = 0). The complete (and the half) transfer event is generated at the end (respectively half of the end) of the 2D/repeated block. 10: at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer. The LLI data transfer is a block transfer or a 2D/repeated block transfer for channel 2 , if any data transfer. 11: at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address GPDMA_C2LLR.LA[15:2] to zero and clears all the GPDMA_C2LLR update bits (UT1, UT2, UB1, USA, UDA and ULL, plus UT3 and UB2). If the channel transfer is continuous/infinite, no event is generated. Note: If the initial LLI0 data transfer is null/void (directly programmed by the internal register file with GPDMA_C2BR1.BNDT[15:0] = 0), then neither the complete transfer event nor the half transfer event is generated. +: If the initial LLI0 data transfer is null/void (directly programmed by the internal register file with GPDMA_C2BR1.BNDT[15:0] = 0), then neither the complete transfer event nor the half transfer event is generated. +: If the initial LLI0 data transfer is null/void (directly programmed by the internal register file with GPDMA_C2BR1.BNDT[15:0] = 0), then the half transfer event is not generated, and the transfer complete event is generated when is completed the loading of the LLI1. */
    using GPDMA_C2TR2_TCEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: at block level (when GPDMA_C2BR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. (value: 0)
     *          - B_0x1: channel 2 (0 to ), same as 00, channel 2 , at 2D/repeated block level (when GPDMA_C2BR1.BRC[10:0] = 0 and GPDMA_C2BR1.BNDT[15:0] = 0). The complete (and the half) transfer event is generated at the end (respectively half of the end) of the 2D/repeated block. (value: 1)
     *          - B_0x2: at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer. The LLI data transfer is a block transfer or a 2D/repeated block transfer for channel 2 , if any data transfer. (value: 2)
     *          - B_0x3: at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address GPDMA_C2LLR.LA[15:2] to zero and clears all the GPDMA_C2LLR update bits (UT1, UT2, UB1, USA, UDA and ULL, plus UT3 and UB2). If the channel transfer is continuous/infinite, no event is generated. (value: 3)
     */
        /** @brief at block level (when GPDMA_C2BR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. */
    constexpr std::uint32_t GPDMA_C2TR2_TCEM_B_0x0 = 0;
        /** @brief channel 2 (0 to ), same as 00, channel 2 , at 2D/repeated block level (when GPDMA_C2BR1.BRC[10:0] = 0 and GPDMA_C2BR1.BNDT[15:0] = 0). The complete (and the half) transfer event is generated at the end (respectively half of the end) of the 2D/repeated block. */
    constexpr std::uint32_t GPDMA_C2TR2_TCEM_B_0x1 = 1;
        /** @brief at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer. The LLI data transfer is a block transfer or a 2D/repeated block transfer for channel 2 , if any data transfer. */
    constexpr std::uint32_t GPDMA_C2TR2_TCEM_B_0x2 = 2;
        /** @brief at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address GPDMA_C2LLR.LA[15:2] to zero and clears all the GPDMA_C2LLR update bits (UT1, UT2, UB1, USA, UDA and ULL, plus UT3 and UB2). If the channel transfer is continuous/infinite, no event is generated. */
    constexpr std::uint32_t GPDMA_C2TR2_TCEM_B_0x3 = 3;

    /** @brief GPDMA channel 2 block register 1 */
    using GPDMA_C2BR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x198, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Block size transferred from the source. When the channel is enabled, this field becomes read-only and is decremented, indicating the remaining number of data items in the current source block to be transferred. BNDT[15:0] is programmed in number of bytes, maximum source block size is 64 Kbytes -1. Once the last data transfer is completed (BNDT[15:0] = 0): - if GPDMA_C2LLR.UB1 = 1, this field is updated by the LLI in the memory. - if GPDMA_C2LLR.UB1 = 0 and if there is at least one not null Uxx update bit, this field is internally restored to the programmed value. - if all GPDMA_C2LLR.Uxx = 0 and if GPDMA_C2LLR.LA[15:0] is not equal to 0, this field is internally restored to the programmed value (infinite/continuous last LLI). - if GPDMA_C2LLR = 0, this field is kept as zero following the last LLI data transfer. Note: A non-null source block size must be a multiple of the source data width (BNDT[2:0] versus GPDMA_C2TR1.SDW_LOG2[1:0]). Else a user setting error is reported and no transfer is issued. +: When configured in packing mode (GPDMA_C2TR1.PAM[1] = 1 and destination data width different from source data width), a non-null source block size must be a multiple of the destination data width (BNDT[2:0] versus GPDMA_C2TR1.DDW_LOG2[1:0]). Else a user setting error is reported and no transfer is issued. */
    using GPDMA_C2BR1_BNDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 2 source address register */
    using GPDMA_C2SAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x19C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This field is the pointer to the address from which the next data is read. During the channel activity, depending on the source addressing mode (GPDMA_C2TR1.SINC), this field is kept fixed or incremented by the data width (GPDMA_C2TR1.SDW_LOG2[1:0]) after each burst source data, reflecting the next address from which data is read. During the channel activity, this address is updated after each completed source burst, consequently to: - the programmed source burst; either in fixed addressing mode or in contiguous-data incremented mode. If contiguously incremented (GPDMA_C2TR1.SINC = 1), then the additional address offset value is the programmed burst size, as defined by GPDMA_C2TR1.SBL_1[5:0] and GPDMA_C2TR1.SDW_LOG2[21:0] - the additional source incremented/decremented offset value as programmed by GPDMA_C2BR1.SDEC and GPDMA_CxTR3.SAO[12:0]. - once/if completed source block transfer, for a channel 2 with 2D addressing capability (x = 12 to 15). additional block repeat source incremented/decremented offset value as programmed by GPDMA_C2BR1.BRSDEC and GPDMA_CxBR2.BRSAO[15:0] In linked-list mode, after a LLI data transfer is completed, this register is automatically updated by GPDMA from the memory, provided the LLI is set with GPDMA_C2LLR.USA = 1. Note: A source address must be aligned with the programmed data width of a source burst (SA[2:0] versus GPDMA_C2TR1.SDW_LOG2[1:0]). Else, a user setting error is reported and no transfer is issued. +: When the source block size is not a multiple of the source burst size and is a multiple of the source data width, the last programmed source burst is not completed and is internally shorten to match the block size. In this case, the additional GPDMA_CxTR3.SAO[12:0] is not applied. */
    using GPDMA_C2SAR_SA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 2 destination address register */
    using GPDMA_C2DAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This field is the pointer to the address from which the next data is written. During the channel activity, depending on the destination addressing mode (GPDMA_C2TR1.DINC), this field is kept fixed or incremented by the data width (GPDMA_C2TR1.DDW_LOG2[21:0]) after each burst destination data, reflecting the next address from which data is written. During the channel activity, this address is updated after each completed destination burst, consequently to: - the programmed destination burst; either in fixed addressing mode or in contiguous-data incremented mode. If contiguously incremented (GPDMA_C2TR1.DINC = 1), then the additional address offset value is the programmed burst size, as defined by GPDMA_C2TR1.DBL_1[5:0] and GPDMA_C2TR1.DDW_LOG2[1:0] - the additional destination incremented/decremented offset value as programmed by GPDMA_C2BR1.DDEC and GPDMA_CxTR3.DAO[12:0]. - once/if completed destination block transfer, for a channel 2 with 2D addressing capability (x=12to15), the additional block repeat destination incremented/decremented offset value as programmed by GPDMA_C2BR1.BRDDEC and GPDMA_CxBR2.BRDAO[15:0] In linked-list mode, after a LLI data transfer is completed, this register is automatically updated by the GPDMA from the memory, provided the LLI is set with GPDMA_C2LLR.UDA = 1. Note: A destination address must be aligned with the programmed data width of a destination burst (DA[2:0] versus GPDMA_C2TR1.DDW_LOG2[1:0]). Else, a user setting error is reported and no transfer is issued. */
    using GPDMA_C2DAR_DA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 2 linked-list address register */
    using GPDMA_C2LLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1CC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief If UT1 = UT2 = UB1 = USA = UDA = ULL = 0 and if LA[15:20] = 0, the current LLI is the last one. The channel transfer is completed without any update of the linked-list GPDMA register file. Else, this field is the pointer to the memory address offset from which the next linked-list data structure is automatically fetched from, once the data transfer is completed, in order to conditionally update the linked-list GPDMA internal register file (GPDMA_C2TR1, GPDMA_C2TR2, GPDMA_C2BR1, GPDMA_CxSAR, GPDMA_CxDAR and GPDMA_C2LLR). Note: The user must program the pointer to be 32-bit aligned. The two low-significant bits are write ignored. */
    using GPDMA_C2LLR_LA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This bit is used to control the update of GPDMA_C2LLR from the memory during the link transfer. 0: no GPDMA_C2LLR update 1: GPDMA_C2LLR update */
    using GPDMA_C2LLR_ULL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_C2LLR update (value: 0)
     *          - B_0x1: GPDMA_C2LLR update (value: 1)
     */
        /** @brief no GPDMA_C2LLR update */
    constexpr std::uint32_t GPDMA_C2LLR_ULL_B_0x0 = 0;
        /** @brief GPDMA_C2LLR update */
    constexpr std::uint32_t GPDMA_C2LLR_ULL_B_0x1 = 1;

    /** @brief This bit is used to control the update of GPDMA_CxDAR from the memory during the link transfer. 0: no GPDMA_CxDAR update 1: GPDMA_CxDAR update */
    using GPDMA_C2LLR_UDA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxDAR update (value: 0)
     *          - B_0x1: GPDMA_CxDAR update (value: 1)
     */
        /** @brief no GPDMA_CxDAR update */
    constexpr std::uint32_t GPDMA_C2LLR_UDA_B_0x0 = 0;
        /** @brief GPDMA_CxDAR update */
    constexpr std::uint32_t GPDMA_C2LLR_UDA_B_0x1 = 1;

    /** @brief This bit controls the update of GPDMA_CxSAR from the memory during the link transfer. 0: no GPDMA_CxSAR update 1: GPDMA_CxSAR update */
    using GPDMA_C2LLR_USA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxSAR update (value: 0)
     *          - B_0x1: GPDMA_CxSAR update (value: 1)
     */
        /** @brief no GPDMA_CxSAR update */
    constexpr std::uint32_t GPDMA_C2LLR_USA_B_0x0 = 0;
        /** @brief GPDMA_CxSAR update */
    constexpr std::uint32_t GPDMA_C2LLR_USA_B_0x1 = 1;

    /** @brief This bit controls the update of GPDMA_C2BR1 from the memory during the link transfer. If UB1 = 0 and if GPDMA_C2LLR is not equal to 0, the linked-list is not completed. GPDMA_C2BR1.BNDT[15:0] is then restored to the programmed value after data transfer is completed and before the link transfer. 0: no GPDMA_C2BR1 update from memory (GPDMA_C2BR1.BNDT[15:0] restored if any link transfer) 1: GPDMA_C2BR1 update */
    using GPDMA_C2LLR_UB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_C2BR1 update from memory (GPDMA_C2BR1.BNDT[15:0] restored if any link transfer) (value: 0)
     *          - B_0x1: GPDMA_C2BR1 update (value: 1)
     */
        /** @brief no GPDMA_C2BR1 update from memory (GPDMA_C2BR1.BNDT[15:0] restored if any link transfer) */
    constexpr std::uint32_t GPDMA_C2LLR_UB1_B_0x0 = 0;
        /** @brief GPDMA_C2BR1 update */
    constexpr std::uint32_t GPDMA_C2LLR_UB1_B_0x1 = 1;

    /** @brief This bit controls the update of GPDMA_C2TR2 from the memory during the link transfer. 0: no GPDMA_C2TR2 update 1: GPDMA_C2TR2 update */
    using GPDMA_C2LLR_UT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_C2TR2 update (value: 0)
     *          - B_0x1: GPDMA_C2TR2 update (value: 1)
     */
        /** @brief no GPDMA_C2TR2 update */
    constexpr std::uint32_t GPDMA_C2LLR_UT2_B_0x0 = 0;
        /** @brief GPDMA_C2TR2 update */
    constexpr std::uint32_t GPDMA_C2LLR_UT2_B_0x1 = 1;

    /** @brief This bit controls the update of GPDMA_C2TR1 from the memory during the link transfer. 0: no GPDMA_C2TR1 update 1: GPDMA_C2TR1 update */
    using GPDMA_C2LLR_UT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_C2TR1 update (value: 0)
     *          - B_0x1: GPDMA_C2TR1 update (value: 1)
     */
        /** @brief no GPDMA_C2TR1 update */
    constexpr std::uint32_t GPDMA_C2LLR_UT1_B_0x0 = 0;
        /** @brief GPDMA_C2TR1 update */
    constexpr std::uint32_t GPDMA_C2LLR_UT1_B_0x1 = 1;

    /** @brief GPDMA channel 3 linked-list base address register */
    using GPDMA_C3LBAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1D0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief None */
    using GPDMA_C3LBAR_LBA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 3 flag clear register */
    using GPDMA_C3FCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1DC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief None 0: no effect 1: corresponding TCF flag cleared */
    using GPDMA_C3FCR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding TCF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C3FCR_TCF_B_0x0 = 0;
        /** @brief corresponding TCF flag cleared */
    constexpr std::uint32_t GPDMA_C3FCR_TCF_B_0x1 = 1;

    /** @brief None 0: no effect 1: corresponding HTF flag cleared */
    using GPDMA_C3FCR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding HTF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C3FCR_HTF_B_0x0 = 0;
        /** @brief corresponding HTF flag cleared */
    constexpr std::uint32_t GPDMA_C3FCR_HTF_B_0x1 = 1;

    /** @brief None 0: no effect 1: corresponding DTEF flag cleared */
    using GPDMA_C3FCR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding DTEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C3FCR_DTEF_B_0x0 = 0;
        /** @brief corresponding DTEF flag cleared */
    constexpr std::uint32_t GPDMA_C3FCR_DTEF_B_0x1 = 1;

    /** @brief None 0: no effect 1: corresponding ULEF flag cleared */
    using GPDMA_C3FCR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding ULEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C3FCR_ULEF_B_0x0 = 0;
        /** @brief corresponding ULEF flag cleared */
    constexpr std::uint32_t GPDMA_C3FCR_ULEF_B_0x1 = 1;

    /** @brief None 0: no effect 1: corresponding USEF flag cleared */
    using GPDMA_C3FCR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding USEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C3FCR_USEF_B_0x0 = 0;
        /** @brief corresponding USEF flag cleared */
    constexpr std::uint32_t GPDMA_C3FCR_USEF_B_0x1 = 1;

    /** @brief None 0: no effect 1: corresponding SUSPF flag cleared */
    using GPDMA_C3FCR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding SUSPF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C3FCR_SUSPF_B_0x0 = 0;
        /** @brief corresponding SUSPF flag cleared */
    constexpr std::uint32_t GPDMA_C3FCR_SUSPF_B_0x1 = 1;

    /** @brief None 0: no effect 1: corresponding TOF flag cleared */
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
    /** @brief This idle flag is deasserted by hardware when the channel is enabled (GPDMA_C3CR.EN = 1) with a valid channel configuration (no USEF to be immediately reported). This idle flag is asserted after hard reset or by hardware when the channel is back in idle state (in suspended or disabled state). 0: channel not in idle state 1: channel in idle state */
    using GPDMA_C3SR_IDLEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: channel not in idle state (value: 0)
     *          - B_0x1: channel in idle state (value: 1)
     */
        /** @brief channel not in idle state */
    constexpr std::uint32_t GPDMA_C3SR_IDLEF_B_0x0 = 0;
        /** @brief channel in idle state */
    constexpr std::uint32_t GPDMA_C3SR_IDLEF_B_0x1 = 1;

    /** @brief A transfer complete event is either a block transfer complete, a 2D/repeated block transfer complete, or a LLI transfer complete including the upload of the next LLI if any, or the full linked-list completion, depending on the transfer complete event mode (GPDMA_C3TR2.TCEM[1:0]). 0: no transfer complete event 1: a transfer complete event occurred */
    using GPDMA_C3SR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no transfer complete event (value: 0)
     *          - B_0x1: a transfer complete event occurred (value: 1)
     */
        /** @brief no transfer complete event */
    constexpr std::uint32_t GPDMA_C3SR_TCF_B_0x0 = 0;
        /** @brief a transfer complete event occurred */
    constexpr std::uint32_t GPDMA_C3SR_TCF_B_0x1 = 1;

    /** @brief A half transfer event is either a half block transfer or a half 2D/repeated block transfer, depending on the transfer complete event mode (GPDMA_C3TR2.TCEM[1:0]). A half block transfer occurs when half of the bytes of the source block size (rounded up integer of GPDMA_C3BR1.BNDT[15:0]/2) has been transferred to the destination. A half 2D/repeated block transfer occurs when half of the repeated blocks (rounded up integer of (GPDMA_C3BR1.BRC[10:0]+1)/2)) has been transferred to the destination. 0: no half transfer event 1: a half transfer event occurred */
    using GPDMA_C3SR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no half transfer event (value: 0)
     *          - B_0x1: a half transfer event occurred (value: 1)
     */
        /** @brief no half transfer event */
    constexpr std::uint32_t GPDMA_C3SR_HTF_B_0x0 = 0;
        /** @brief a half transfer event occurred */
    constexpr std::uint32_t GPDMA_C3SR_HTF_B_0x1 = 1;

    /** @brief None 0: no data transfer error event 1: a master bus error event occurred on a data transfer */
    using GPDMA_C3SR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no data transfer error event (value: 0)
     *          - B_0x1: a master bus error event occurred on a data transfer (value: 1)
     */
        /** @brief no data transfer error event */
    constexpr std::uint32_t GPDMA_C3SR_DTEF_B_0x0 = 0;
        /** @brief a master bus error event occurred on a data transfer */
    constexpr std::uint32_t GPDMA_C3SR_DTEF_B_0x1 = 1;

    /** @brief None 0: no update link transfer error event 1: a master bus error event occurred while updating a linked-list register from memory */
    using GPDMA_C3SR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no update link transfer error event (value: 0)
     *          - B_0x1: a master bus error event occurred while updating a linked-list register from memory (value: 1)
     */
        /** @brief no update link transfer error event */
    constexpr std::uint32_t GPDMA_C3SR_ULEF_B_0x0 = 0;
        /** @brief a master bus error event occurred while updating a linked-list register from memory */
    constexpr std::uint32_t GPDMA_C3SR_ULEF_B_0x1 = 1;

    /** @brief None 0: no user setting error event 1: a user setting error event occurred */
    using GPDMA_C3SR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no user setting error event (value: 0)
     *          - B_0x1: a user setting error event occurred (value: 1)
     */
        /** @brief no user setting error event */
    constexpr std::uint32_t GPDMA_C3SR_USEF_B_0x0 = 0;
        /** @brief a user setting error event occurred */
    constexpr std::uint32_t GPDMA_C3SR_USEF_B_0x1 = 1;

    /** @brief None 0: no completed suspension event 1: a completed suspension event occurred */
    using GPDMA_C3SR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no completed suspension event (value: 0)
     *          - B_0x1: a completed suspension event occurred (value: 1)
     */
        /** @brief no completed suspension event */
    constexpr std::uint32_t GPDMA_C3SR_SUSPF_B_0x0 = 0;
        /** @brief a completed suspension event occurred */
    constexpr std::uint32_t GPDMA_C3SR_SUSPF_B_0x1 = 1;

    /** @brief None 0: no trigger overrun event 1: a trigger overrun event occurred */
    using GPDMA_C3SR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no trigger overrun event (value: 0)
     *          - B_0x1: a trigger overrun event occurred (value: 1)
     */
        /** @brief no trigger overrun event */
    constexpr std::uint32_t GPDMA_C3SR_TOF_B_0x0 = 0;
        /** @brief a trigger overrun event occurred */
    constexpr std::uint32_t GPDMA_C3SR_TOF_B_0x1 = 1;

    /** @brief Number of available write beats in the FIFO, in units of the programmed destination data width (see GPDMA_C3TR1.DDW_LOG2[1:0], in units of bytes, half-words, or words). Note: After having suspended an active transfer, the user may need to read FIFOL[7:0], additionally to GPDMA_C3BR1.BDNT[15:0] and GPDMA_C3BR1.BRC[10:0], to know how many data have been transferred to the destination. Before reading, the user may wait for the transfer to be suspended (GPDMA_C3SR.SUSPF = 1). */
    using GPDMA_C3SR_FIFOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 3 control register */
    using GPDMA_C3CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1E4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Writing 1 into the field RESET (bit 1) causes the hardware to de-assert this bit, whatever is written into this bit 0. Else: this bit is deasserted by hardware when there is a transfer error (master bus error or user setting error) or when there is a channel transfer complete (channel ready to be configured, for example if LSM = 1 at the end of a single execution of the LLI). Else, this bit can be asserted by software. Writing 0 into this EN bit is ignored. 0: write: ignored, read: channel disabled 1: write: enable channel, read: channel enabled */
    using GPDMA_C3CR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write: ignored, read: channel disabled (value: 0)
     *          - B_0x1: write: enable channel, read: channel enabled (value: 1)
     */
        /** @brief write: ignored, read: channel disabled */
    constexpr std::uint32_t GPDMA_C3CR_EN_B_0x0 = 0;
        /** @brief write: enable channel, read: channel enabled */
    constexpr std::uint32_t GPDMA_C3CR_EN_B_0x1 = 1;

    /** @brief This bit is write only. Writing 0 has no impact. Writing 1 implies the reset of the following: the FIFO, the channel internal state, SUSP and EN bits (whatever is written receptively in bit 2 and bit 0). The reset is effective when the channel is in steady state, meaning one of the following: - active channel in suspended state (GPDMA_C3SR.SUSPF = 1 and GPDMA_C3SR.IDLEF=GPDMA_C3CR.EN = 1) - channel in disabled state (GPDMA_C3SR.IDLEF = 1 and GPDMA_C3CR.EN = 0). After writing a RESET, to continue using this channel, the user must explicitly reconfigure the channel including the hardware-modified configuration registers (GPDMA_C3BR1, GPDMA_CxSAR and GPDMA_CxDAR) before enabling again the channel (see the programming sequence in less than xe6 [GPDMA_abort_restart/ID00-1465]/>). 0: no channel reset 1: channel reset */
    using GPDMA_C3CR_RESET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no channel reset (value: 0)
     *          - B_0x1: channel reset (value: 1)
     */
        /** @brief no channel reset */
    constexpr std::uint32_t GPDMA_C3CR_RESET_B_0x0 = 0;
        /** @brief channel reset */
    constexpr std::uint32_t GPDMA_C3CR_RESET_B_0x1 = 1;

    /** @brief Writing 1 into the field RESET (bit 1) causes the hardware to de-assert this bit, whatever is written into this bit 2. Else: Software must write 1 in order to suspend an active channel (channel with an ongoing GPDMA transfer over its master ports). The software must write 0 in order to resume a suspended channel, following the programming sequence detailed in less than xe5 [GPDMA_channel_suspend_and_resume/ID00-1456]/>. 0: write: resume channel, read: channel not suspended 1: write: suspend channel, read: channel suspended. */
    using GPDMA_C3CR_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write: resume channel, read: channel not suspended (value: 0)
     *          - B_0x1: write: suspend channel, read: channel suspended. (value: 1)
     */
        /** @brief write: resume channel, read: channel not suspended */
    constexpr std::uint32_t GPDMA_C3CR_SUSP_B_0x0 = 0;
        /** @brief write: suspend channel, read: channel suspended. */
    constexpr std::uint32_t GPDMA_C3CR_SUSP_B_0x1 = 1;

    /** @brief None 0: interrupt disabled 1: interrupt enabled */
    using GPDMA_C3CR_TCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C3CR_TCIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C3CR_TCIE_B_0x1 = 1;

    /** @brief None 0: interrupt disabled 1: interrupt enabled */
    using GPDMA_C3CR_HTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C3CR_HTIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C3CR_HTIE_B_0x1 = 1;

    /** @brief None 0: interrupt disabled 1: interrupt enabled */
    using GPDMA_C3CR_DTEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C3CR_DTEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C3CR_DTEIE_B_0x1 = 1;

    /** @brief None 0: interrupt disabled 1: interrupt enabled */
    using GPDMA_C3CR_ULEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C3CR_ULEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C3CR_ULEIE_B_0x1 = 1;

    /** @brief None 0: interrupt disabled 1: interrupt enabled */
    using GPDMA_C3CR_USEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C3CR_USEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C3CR_USEIE_B_0x1 = 1;

    /** @brief None 0: interrupt disabled 1: interrupt enabled */
    using GPDMA_C3CR_SUSPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C3CR_SUSPIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C3CR_SUSPIE_B_0x1 = 1;

    /** @brief None 0: interrupt disabled 1: interrupt enabled */
    using GPDMA_C3CR_TOIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C3CR_TOIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C3CR_TOIE_B_0x1 = 1;

    /** @brief First the (possible 1D/repeated) block transfer is executed as defined by the current internal register file until GPDMA_C3BR1.BNDT[15:0] = 0 and GPDMA_C3BR1.BRC[10:0] = 0. Secondly the next linked-list data structure is conditionally uploaded from memory as defined by GPDMA_C3LLR. Then channel execution is completed. 0: channel executed for the full linked-list and completed at the end of the last LLI (GPDMA_C3LLR = 0). The 16 low-significant bits of the link address are null (LA[15:0] = 0) and all the update bits are null (UT1 = UB1 = UT2 = USA = UDA = ULL = 0 and UT3 = UB2 = 0). Then GPDMA_C3BR1.BNDT[15:0] = 0 and GPDMA_C3BR1.BRC[10:0] = 0. 1: channel executed once for the current LLI Note: This bit must be written when EN = 0. This bit is read-only when EN = 1. */
    using GPDMA_C3CR_LSM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: channel executed for the full linked-list and completed at the end of the last LLI (GPDMA_C3LLR = 0). The 16 low-significant bits of the link address are null (LA[15:0] = 0) and all the update bits are null (UT1 = UB1 = UT2 = USA = UDA = ULL = 0 and UT3 = UB2 = 0). Then GPDMA_C3BR1.BNDT[15:0] = 0 and GPDMA_C3BR1.BRC[10:0] = 0. (value: 0)
     *          - B_0x1: channel executed once for the current LLI (value: 1)
     */
        /** @brief channel executed for the full linked-list and completed at the end of the last LLI (GPDMA_C3LLR = 0). The 16 low-significant bits of the link address are null (LA[15:0] = 0) and all the update bits are null (UT1 = UB1 = UT2 = USA = UDA = ULL = 0 and UT3 = UB2 = 0). Then GPDMA_C3BR1.BNDT[15:0] = 0 and GPDMA_C3BR1.BRC[10:0] = 0. */
    constexpr std::uint32_t GPDMA_C3CR_LSM_B_0x0 = 0;
        /** @brief channel executed once for the current LLI */
    constexpr std::uint32_t GPDMA_C3CR_LSM_B_0x1 = 1;

    /** @brief This bit is used to allocate the master port for the update of the GPDMA linked-list registers from the memory. 0: port 0 (AHB) allocated 1: port 1 (AHB) allocated Note: This bit must be written when EN = 0. This bit is read-only when EN = 1. */
    using GPDMA_C3CR_LAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C3CR_LAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C3CR_LAP_B_0x1 = 1;

    /** @brief None 00: low priority, low weight 01: low priority, mid weight 10: low priority, high weight 11: high priority Note: This bit must be written when EN = 0. This bit is read-only when EN = 1. */
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
    /** @brief None 00: byte 01: half-word (2 bytes) 10: word (4 bytes) 11: user setting error reported and no transfer issued Note: Setting a 8-byte data width causes a user setting error to be reported and no transfer is issued. +: A source block size must be a multiple of the source data width (GPDMA_C3BR1.BNDT[2:0] versus SDW_LOG2[1:0]). Otherwise, a user setting error is reported and no transfer is issued. +: A source burst transfer must have an aligned address with its data width (start address GPDMA_CxSAR[2:0] versus SDW_LOG2[1:0]). Otherwise, a user setting error is reported and none transfer is issued. */
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

    /** @brief The source address, pointed by GPDMA_CxSAR, is kept constant after a burst beat/single transfer or is incremented by the offset value corresponding to a contiguous data after a burst beat/single transfer. 0: fixed burst 1: contiguously incremented burst */
    using GPDMA_C3TR1_SINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fixed burst (value: 0)
     *          - B_0x1: contiguously incremented burst (value: 1)
     */
        /** @brief fixed burst */
    constexpr std::uint32_t GPDMA_C3TR1_SINC_B_0x0 = 0;
        /** @brief contiguously incremented burst */
    constexpr std::uint32_t GPDMA_C3TR1_SINC_B_0x1 = 1;

    /** @brief The burst length unit is one data named beat within a burst. If SBL_1[5:0] = 0, the burst can be named as single. Each data/beat has a width defined by the destination data width SDW_LOG2[1:0]. Note: If a burst transfer crossed a 1-Kbyte address boundary on a AHB transfer, the GPDMA modifies and shortens the programmed burst into singles or bursts of lower length, to be compliant with the AHB protocol. +: If a burst transfer is of length greater than the FIFO size of the channel 3, the GPDMA modifies and shortens the programmed burst into singles or bursts of lower length, to be compliant with the FIFO size. Transfer performance is lower, with GPDMA re-arbitration between effective and lower singles/bursts, but the data integrity is guaranteed. */
    using GPDMA_C3TR1_SBL_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief If DDW_LOG2[1:0] = SDW_LOG2[1:0]: if the data width of a burst destination transfer is equal to the data width of a burst source transfer, these bits are ignored. */
    using GPDMA_C3TR1_PAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0_COND1: COND1 is [PAM_1] source data is transferred as right aligned, padded with 0s up to the destination data width (value: 0)
     *          - B_0x1_COND1: COND1 is [PAM_1] source data is transferred as right aligned, sign extended up to the destination data width (value: 1)
     *          - B_0x2_COND1: COND1 is [PAM_1] successive source data are FIFO queued and packed at the destination data width, in a left (LSB) to right (MSB) order (named little endian), before a destination transfer (value: 2)
     *          - B_0x3_COND1: COND1 is [PAM_1] successive source data are FIFO queued and packed at the destination data width, in a left (LSB) to right (MSB) order (named little endian), before a destination transfer (value: 3)
     */
        /** @brief COND1 is [PAM_1] source data is transferred as right aligned, padded with 0s up to the destination data width */
    constexpr std::uint32_t GPDMA_C3TR1_PAM_B_0x0_COND1 = 0;
        /** @brief COND1 is [PAM_1] source data is transferred as right aligned, sign extended up to the destination data width */
    constexpr std::uint32_t GPDMA_C3TR1_PAM_B_0x1_COND1 = 1;
        /** @brief COND1 is [PAM_1] successive source data are FIFO queued and packed at the destination data width, in a left (LSB) to right (MSB) order (named little endian), before a destination transfer */
    constexpr std::uint32_t GPDMA_C3TR1_PAM_B_0x2_COND1 = 2;
        /** @brief COND1 is [PAM_1] successive source data are FIFO queued and packed at the destination data width, in a left (LSB) to right (MSB) order (named little endian), before a destination transfer */
    constexpr std::uint32_t GPDMA_C3TR1_PAM_B_0x3_COND1 = 3;

    /** @brief If the source data width is shorter than a word, this bit is ignored. If the source data width is a word: 0: no byte-based exchange within the unaligned half-word of each source word 1: the two consecutive bytes within the unaligned half-word of each source word are exchanged. */
    using GPDMA_C3TR1_SBx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no byte-based exchange within the unaligned half-word of each source word (value: 0)
     *          - B_0x1: the two consecutive bytes within the unaligned half-word of each source word are exchanged. (value: 1)
     */
        /** @brief no byte-based exchange within the unaligned half-word of each source word */
    constexpr std::uint32_t GPDMA_C3TR1_SBx_B_0x0 = 0;
        /** @brief the two consecutive bytes within the unaligned half-word of each source word are exchanged. */
    constexpr std::uint32_t GPDMA_C3TR1_SBx_B_0x1 = 1;

    /** @brief This bit is used to allocate the master port for the source transfer 0: port 0 (AHB) allocated 1: port 1 (AHB) allocated Note: This bit must be written when EN = 0. This bit is read-only when EN = 1. */
    using GPDMA_C3TR1_SAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C3TR1_SAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C3TR1_SAP_B_0x1 = 1;

    /** @brief If GPDMA_SECCFGR.SEC3 = 1 and the access is secure: This is a secure register bit. This bit can only be read by a secure software. This bit must be written by a secure software when GPDMA_SECCFGR.SEC3 = 1. A secure write is ignored when GPDMA_SECCFGR.SEC3 = 0. When GPDMA_SECCFGR.SEC3 is deasserted, this SSEC bit is also deasserted by hardware (on a secure reconfiguration of the channel as non-secure), and the GPDMA transfer from the source is non-secure. 0: GPDMA transfer non-secure 1: GPDMA transfer secure */
    using GPDMA_C3TR1_SSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPDMA transfer non-secure (value: 0)
     *          - B_0x1: GPDMA transfer secure (value: 1)
     */
        /** @brief GPDMA transfer non-secure */
    constexpr std::uint32_t GPDMA_C3TR1_SSEC_B_0x0 = 0;
        /** @brief GPDMA transfer secure */
    constexpr std::uint32_t GPDMA_C3TR1_SSEC_B_0x1 = 1;

    /** @brief None 00: byte 01: half-word (2 bytes) 10: word (4 bytes) 11: user setting error reported and no transfer issued Note: Setting a 8-byte data width causes a user setting error to be reported and none transfer is issued. +: A destination burst transfer must have an aligned address with its data width (start address GPDMA_CxDAR[2:0] and address offset GPDMA_CxTR3.DAO[2:0], versus DDW_LOG2[1:0]). Otherwise a user setting error is reported and no transfer is issued. */
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

    /** @brief The destination address, pointed by GPDMA_CxDAR, is kept constant after a burst beat/single transfer, or is incremented by the offset value corresponding to a contiguous data after a burst beat/single transfer. 0: fixed burst 1: contiguously incremented burst */
    using GPDMA_C3TR1_DINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fixed burst (value: 0)
     *          - B_0x1: contiguously incremented burst (value: 1)
     */
        /** @brief fixed burst */
    constexpr std::uint32_t GPDMA_C3TR1_DINC_B_0x0 = 0;
        /** @brief contiguously incremented burst */
    constexpr std::uint32_t GPDMA_C3TR1_DINC_B_0x1 = 1;

    /** @brief The burst length unit is one data named beat within a burst. If DBL_1[5:0] = 0, the burst can be named as single. Each data/beat has a width defined by the destination data width DDW_LOG2[1:0]. Note: If a burst transfer crossed a 1-Kbyte address boundary on a AHB transfer, the GPDMA modifies and shortens the programmed burst into singles or bursts of lower length, to be compliant with the AHB protocol. +: If a burst transfer is of length greater than the FIFO size of the channel 3, the GPDMA modifies and shortens the programmed burst into singles or bursts of lower length, to be compliant with the FIFO size. Transfer performance is lower, with GPDMA re-arbitration between effective and lower singles/bursts, but the data integrity is guaranteed. */
    using GPDMA_C3TR1_DBL_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief If the destination data size is a byte, this bit is ignored. If the destination data size is not a byte: 0: no byte-based exchange within half-word 1: the two consecutive (post PAM) bytes are exchanged in each destination half-word. */
    using GPDMA_C3TR1_DBx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no byte-based exchange within half-word (value: 0)
     *          - B_0x1: the two consecutive (post PAM) bytes are exchanged in each destination half-word. (value: 1)
     */
        /** @brief no byte-based exchange within half-word */
    constexpr std::uint32_t GPDMA_C3TR1_DBx_B_0x0 = 0;
        /** @brief the two consecutive (post PAM) bytes are exchanged in each destination half-word. */
    constexpr std::uint32_t GPDMA_C3TR1_DBx_B_0x1 = 1;

    /** @brief If the destination data size is shorter than a word, this bit is ignored. If the destination data size is a word: 0: no halfword-based exchanged within word 1: the two consecutive (post PAM) half-words are exchanged in each destination word. */
    using GPDMA_C3TR1_DHx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no halfword-based exchanged within word (value: 0)
     *          - B_0x1: the two consecutive (post PAM) half-words are exchanged in each destination word. (value: 1)
     */
        /** @brief no halfword-based exchanged within word */
    constexpr std::uint32_t GPDMA_C3TR1_DHx_B_0x0 = 0;
        /** @brief the two consecutive (post PAM) half-words are exchanged in each destination word. */
    constexpr std::uint32_t GPDMA_C3TR1_DHx_B_0x1 = 1;

    /** @brief This bit is used to allocate the master port for the destination transfer 0: port 0 (AHB) allocated 1: port 1 (AHB) allocated Note: This bit must be written when EN = 0. This bit is read-only when EN = 1. */
    using GPDMA_C3TR1_DAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C3TR1_DAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C3TR1_DAP_B_0x1 = 1;

    /** @brief If GPDMA_SECCFGR.SEC3 = 1 and the access is secure: This is a secure register bit. This bit can only be read by a secure software. This bit must be written by a secure software when GPDMA_SECCFGR.SEC3 = 1. A secure write is ignored when GPDMA_SECCFGR.SEC3 = 0. When GPDMA_SECCFGR.SEC3 is deasserted, this DSEC bit is also deasserted by hardware (on a secure reconfiguration of the channel as non-secure), and the GPDMA transfer to the destination is non-secure. 0: GPDMA transfer non-secure 1: GPDMA transfer secure */
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
    /** @brief These bits are ignored if channel 3 is activated (GPDMA_C3CR.EN asserted) with SWREQ=1 (software request for a memory-to-memory transfer). Else, the selected hardware request is internally taken into account as per less than xe4 [GPDMA_requests]/>. The user must not assign a same input hardware request (same REQSEL[6:0] value) to different active GPDMA channels (GPDMA_C3CR.EN = 1 and GPDMA_C3TR2.SWREQ = 0 for these channels). GPDMA is not intended to hardware support the case of simultaneous enabled channels incorrectly configured with a same hardware peripheral request signal, and there is no user setting error reporting. */
    using GPDMA_C3TR2_REQSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This bit is internally taken into account when GPDMA_C3CR.EN is asserted. 0: no software request. The selected hardware request REQSEL[6:0] is taken into account. 1: software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[6:0] is ignored. */
    using GPDMA_C3TR2_SWREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no software request. The selected hardware request REQSEL[6:0] is taken into account. (value: 0)
     *          - B_0x1: software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[6:0] is ignored. (value: 1)
     */
        /** @brief no software request. The selected hardware request REQSEL[6:0] is taken into account. */
    constexpr std::uint32_t GPDMA_C3TR2_SWREQ_B_0x0 = 0;
        /** @brief software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[6:0] is ignored. */
    constexpr std::uint32_t GPDMA_C3TR2_SWREQ_B_0x1 = 1;

    /** @brief This bit is ignored if channel 3 is activated (GPDMA_C3CR.EN asserted) with SWREQ = 1 (software request for a memory-to-memory transfer). Else: 0: selected hardware request driven by a source peripheral (request signal taken into account by the GPDMA transfer scheduler over the source/read port) 1: selected hardware request driven by a destination peripheral (request signal taken into account by the GPDMA transfer scheduler over the destination/write port) Note: If the channel 3 is activated (GPDMA_C3CR.EN is asserted) with SWREQ = 0 and PFREQ = 1 (peripheral hardware request with peripheral flow-control mode), any software assertion to this DREQ bit is ignored: in peripheral flow-control mode, only a peripheral-to-memory transfer is supported. */
    using GPDMA_C3TR2_DREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: selected hardware request driven by a source peripheral (request signal taken into account by the GPDMA transfer scheduler over the source/read port) (value: 0)
     *          - B_0x1: selected hardware request driven by a destination peripheral (request signal taken into account by the GPDMA transfer scheduler over the destination/write port) (value: 1)
     */
        /** @brief selected hardware request driven by a source peripheral (request signal taken into account by the GPDMA transfer scheduler over the source/read port) */
    constexpr std::uint32_t GPDMA_C3TR2_DREQ_B_0x0 = 0;
        /** @brief selected hardware request driven by a destination peripheral (request signal taken into account by the GPDMA transfer scheduler over the destination/write port) */
    constexpr std::uint32_t GPDMA_C3TR2_DREQ_B_0x1 = 1;

    /** @brief If the channel 3 is activated (GPDMA_C3CR.EN asserted) with SWREQ = 1 (software request for a memory-to-memory transfer), this bit is ignored. Else: 0: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a burst level. 1: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see less than xe4 [GPDMA_requests]/>). */
    using GPDMA_C3TR2_BREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a burst level. (value: 0)
     *          - B_0x1: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see less than xe4 [GPDMA_requests]/>). (value: 1)
     */
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a burst level. */
    constexpr std::uint32_t GPDMA_C3TR2_BREQ_B_0x0 = 0;
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see less than xe4 [GPDMA_requests]/>). */
    constexpr std::uint32_t GPDMA_C3TR2_BREQ_B_0x1 = 1;

    /** @brief Caution: If a given channel 3 is not implemented with this feature, this bit is reserved and PFREQ is not present (see less than xe1 [GPDMA_channels]/> for the list of the implemented channels with this feature). */
    using GPDMA_C3TR2_PFREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol in GPDMA control mode. The GPDMA is programmed with GPDMA_C3TR1.BNDT[15:0] and this is internally used by the hardware for the block transfer completion. (value: 0)
     *          - B_0x1: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol in peripheral control mode. The GPDMA block transfer can be early completed by the peripheral itself (see less than xe2 [GPDMA_channels_peripheral]/> for more details). (value: 1)
     */
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol in GPDMA control mode. The GPDMA is programmed with GPDMA_C3TR1.BNDT[15:0] and this is internally used by the hardware for the block transfer completion. */
    constexpr std::uint32_t GPDMA_C3TR2_PFREQ_B_0x0 = 0;
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol in peripheral control mode. The GPDMA block transfer can be early completed by the peripheral itself (see less than xe2 [GPDMA_channels_peripheral]/> for more details). */
    constexpr std::uint32_t GPDMA_C3TR2_PFREQ_B_0x1 = 1;

    /** @brief These bits define the transfer granularity for its conditioning by the trigger. If the channel 3 is enabled (GPDMA_C3CR.EN asserted) with TRIGPOL[1:0] = 00 or 11, these TRIGM[1:0] bits are ignored. Else, a GPDMA transfer is conditioned by at least one trigger hit: 00: at block level: the first burst read of each block transfer is conditioned by one hit trigger (channel 3 = 12 to 15, for each block if a 2D/repeated block is configured with GPDMA_C3BR1.BRC[10:0] is not equal to 0). 10: at link level: a LLI link transfer is conditioned by one hit trigger. The LLI data transfer (if any) is not conditioned. 11: at programmed burst level: If SWREQ = 1, each programmed burst read is conditioned by one hit trigger. If SWREQ = 0, each programmed burst that is requested by the selected peripheral, is conditioned by one hit trigger. - If the peripheral is programmed as a source (DREQ = 0) of the LLI data transfer, each programmed burst read is conditioned. - If the peripheral is programmed as a destination (DREQ = 1) of the LLI data transfer, each programmed burst write is conditioned. The first memory burst read of a (possibly 2D/repeated) block, also named as the first ready FIFO-based source burst, is gated by the occurrence of both the hardware request and the first trigger hit.01: channel 3 = 0 to , same as 00; channel 3 , at 2D/repeated block level. The first burst read of a 2D/repeated block transfer is conditioned by one hit trigger. The GPDMA monitoring of a trigger for channel 3 is started when the channel is enabled/loaded with a new active trigger configuration: rising or falling edge on a selected trigger (TRIGPOL[1:0] = 01 or respectively TRIGPOL[1:0]=10). The monitoring of this trigger is kept active during the triggered and uncompleted (data or link) transfer; and if a new trigger is detected then, this hit is internally memorized to grant the next transfer, as long as the defined rising or falling edge is not modified, and the TRIGSEL[5:0] is not modified, and the channel is enabled. Transferring a next LLIn+1 that updates the GPDMA_C3TR2 with a new value for any of TRIGSEL[5:0] or TRIGPOL[1:0], resets the monitoring, trashing the memorized hit of the formerly defined LLIn trigger. After a first new trigger hitn+1 is memorized, if another second trigger hitn+2 is detected and if the hitn triggered transfer is still not completed, hitn+2 is lost and not memorized.memorized. A trigger overrun flag is reported (GPDMA_C3SR.TOF=1), and an interrupt is generated if enabled (GPDMA_C3CR.TOIE = 1). The channel is not automatically disabled by hardware due to a trigger overrun. Note: When the source block size is not a multiple of the source burst size and is a multiple of the source data width, then the last programmed source burst is not completed and is internally shorten to match the block size. In this case, if TRIGM[1:0] = 11 and (SWREQ = 1 or (SWREQ = 0 and DREQ = 0)), the shortened burst transfer (by singles or/and by bursts of lower length) is conditioned once by the trigger. +: When the programmed destination burst is internally shortened by singles or/and by bursts of lower length (versus FIFO size, versus block size, 1-Kbyte boundary address crossing): if the trigger is conditioning the programmed destination burst (if TRIGM[1:0] = 11 and SWREQ = 0 and DREQ = 1), this shortened destination burst transfer is conditioned once by the trigger. */
    using GPDMA_C3TR2_TRIGM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief These bits select the trigger event input of the GPDMA transfer (as per less than xe3 [GPDMA_triggers]/>), with anactive trigger event if TRIGPOL[1:0] is not equal to 00. */
    using GPDMA_C3TR2_TRIGSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief These bits define the polarity of the selected trigger event input defined by TRIGSEL[5:0]. 00: no trigger (masked trigger event) 01: trigger on the rising edge 10: trigger on the falling edge 11: same as 00 */
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

    /** @brief These bits define the transfer granularity for the transfer complete and half transfer complete events generation. 00: at block level (when GPDMA_C3BR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. 01: channel 3 (0 to ), same as 00, channel 3 , at 2D/repeated block level (when GPDMA_C3BR1.BRC[10:0] = 0 and GPDMA_C3BR1.BNDT[15:0] = 0). The complete (and the half) transfer event is generated at the end (respectively half of the end) of the 2D/repeated block. 10: at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer. The LLI data transfer is a block transfer or a 2D/repeated block transfer for channel 3 , if any data transfer. 11: at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address GPDMA_C3LLR.LA[15:2] to zero and clears all the GPDMA_C3LLR update bits (UT1, UT2, UB1, USA, UDA and ULL, plus UT3 and UB2). If the channel transfer is continuous/infinite, no event is generated. Note: If the initial LLI0 data transfer is null/void (directly programmed by the internal register file with GPDMA_C3BR1.BNDT[15:0] = 0), then neither the complete transfer event nor the half transfer event is generated. +: If the initial LLI0 data transfer is null/void (directly programmed by the internal register file with GPDMA_C3BR1.BNDT[15:0] = 0), then neither the complete transfer event nor the half transfer event is generated. +: If the initial LLI0 data transfer is null/void (directly programmed by the internal register file with GPDMA_C3BR1.BNDT[15:0] = 0), then the half transfer event is not generated, and the transfer complete event is generated when is completed the loading of the LLI1. */
    using GPDMA_C3TR2_TCEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: at block level (when GPDMA_C3BR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. (value: 0)
     *          - B_0x1: channel 3 (0 to ), same as 00, channel 3 , at 2D/repeated block level (when GPDMA_C3BR1.BRC[10:0] = 0 and GPDMA_C3BR1.BNDT[15:0] = 0). The complete (and the half) transfer event is generated at the end (respectively half of the end) of the 2D/repeated block. (value: 1)
     *          - B_0x2: at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer. The LLI data transfer is a block transfer or a 2D/repeated block transfer for channel 3 , if any data transfer. (value: 2)
     *          - B_0x3: at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address GPDMA_C3LLR.LA[15:2] to zero and clears all the GPDMA_C3LLR update bits (UT1, UT2, UB1, USA, UDA and ULL, plus UT3 and UB2). If the channel transfer is continuous/infinite, no event is generated. (value: 3)
     */
        /** @brief at block level (when GPDMA_C3BR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. */
    constexpr std::uint32_t GPDMA_C3TR2_TCEM_B_0x0 = 0;
        /** @brief channel 3 (0 to ), same as 00, channel 3 , at 2D/repeated block level (when GPDMA_C3BR1.BRC[10:0] = 0 and GPDMA_C3BR1.BNDT[15:0] = 0). The complete (and the half) transfer event is generated at the end (respectively half of the end) of the 2D/repeated block. */
    constexpr std::uint32_t GPDMA_C3TR2_TCEM_B_0x1 = 1;
        /** @brief at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer. The LLI data transfer is a block transfer or a 2D/repeated block transfer for channel 3 , if any data transfer. */
    constexpr std::uint32_t GPDMA_C3TR2_TCEM_B_0x2 = 2;
        /** @brief at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address GPDMA_C3LLR.LA[15:2] to zero and clears all the GPDMA_C3LLR update bits (UT1, UT2, UB1, USA, UDA and ULL, plus UT3 and UB2). If the channel transfer is continuous/infinite, no event is generated. */
    constexpr std::uint32_t GPDMA_C3TR2_TCEM_B_0x3 = 3;

    /** @brief GPDMA channel 3 block register 1 */
    using GPDMA_C3BR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x218, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Block size transferred from the source. When the channel is enabled, this field becomes read-only and is decremented, indicating the remaining number of data items in the current source block to be transferred. BNDT[15:0] is programmed in number of bytes, maximum source block size is 64 Kbytes -1. Once the last data transfer is completed (BNDT[15:0] = 0): - if GPDMA_C3LLR.UB1 = 1, this field is updated by the LLI in the memory. - if GPDMA_C3LLR.UB1 = 0 and if there is at least one not null Uxx update bit, this field is internally restored to the programmed value. - if all GPDMA_C3LLR.Uxx = 0 and if GPDMA_C3LLR.LA[15:0] is not equal to 0, this field is internally restored to the programmed value (infinite/continuous last LLI). - if GPDMA_C3LLR = 0, this field is kept as zero following the last LLI data transfer. Note: A non-null source block size must be a multiple of the source data width (BNDT[2:0] versus GPDMA_C3TR1.SDW_LOG2[1:0]). Else a user setting error is reported and no transfer is issued. +: When configured in packing mode (GPDMA_C3TR1.PAM[1] = 1 and destination data width different from source data width), a non-null source block size must be a multiple of the destination data width (BNDT[2:0] versus GPDMA_C3TR1.DDW_LOG2[1:0]). Else a user setting error is reported and no transfer is issued. */
    using GPDMA_C3BR1_BNDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 3 source address register */
    using GPDMA_C3SAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x21C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This field is the pointer to the address from which the next data is read. During the channel activity, depending on the source addressing mode (GPDMA_C3TR1.SINC), this field is kept fixed or incremented by the data width (GPDMA_C3TR1.SDW_LOG2[1:0]) after each burst source data, reflecting the next address from which data is read. During the channel activity, this address is updated after each completed source burst, consequently to: - the programmed source burst; either in fixed addressing mode or in contiguous-data incremented mode. If contiguously incremented (GPDMA_C3TR1.SINC = 1), then the additional address offset value is the programmed burst size, as defined by GPDMA_C3TR1.SBL_1[5:0] and GPDMA_C3TR1.SDW_LOG2[21:0] - the additional source incremented/decremented offset value as programmed by GPDMA_C3BR1.SDEC and GPDMA_CxTR3.SAO[12:0]. - once/if completed source block transfer, for a channel 3 with 2D addressing capability (x = 12 to 15). additional block repeat source incremented/decremented offset value as programmed by GPDMA_C3BR1.BRSDEC and GPDMA_CxBR2.BRSAO[15:0] In linked-list mode, after a LLI data transfer is completed, this register is automatically updated by GPDMA from the memory, provided the LLI is set with GPDMA_C3LLR.USA = 1. Note: A source address must be aligned with the programmed data width of a source burst (SA[2:0] versus GPDMA_C3TR1.SDW_LOG2[1:0]). Else, a user setting error is reported and no transfer is issued. +: When the source block size is not a multiple of the source burst size and is a multiple of the source data width, the last programmed source burst is not completed and is internally shorten to match the block size. In this case, the additional GPDMA_CxTR3.SAO[12:0] is not applied. */
    using GPDMA_C3SAR_SA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 3 destination address register */
    using GPDMA_C3DAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x220, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This field is the pointer to the address from which the next data is written. During the channel activity, depending on the destination addressing mode (GPDMA_C3TR1.DINC), this field is kept fixed or incremented by the data width (GPDMA_C3TR1.DDW_LOG2[21:0]) after each burst destination data, reflecting the next address from which data is written. During the channel activity, this address is updated after each completed destination burst, consequently to: - the programmed destination burst; either in fixed addressing mode or in contiguous-data incremented mode. If contiguously incremented (GPDMA_C3TR1.DINC = 1), then the additional address offset value is the programmed burst size, as defined by GPDMA_C3TR1.DBL_1[5:0] and GPDMA_C3TR1.DDW_LOG2[1:0] - the additional destination incremented/decremented offset value as programmed by GPDMA_C3BR1.DDEC and GPDMA_CxTR3.DAO[12:0]. - once/if completed destination block transfer, for a channel 3 with 2D addressing capability (x=12to15), the additional block repeat destination incremented/decremented offset value as programmed by GPDMA_C3BR1.BRDDEC and GPDMA_CxBR2.BRDAO[15:0] In linked-list mode, after a LLI data transfer is completed, this register is automatically updated by the GPDMA from the memory, provided the LLI is set with GPDMA_C3LLR.UDA = 1. Note: A destination address must be aligned with the programmed data width of a destination burst (DA[2:0] versus GPDMA_C3TR1.DDW_LOG2[1:0]). Else, a user setting error is reported and no transfer is issued. */
    using GPDMA_C3DAR_DA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 3 linked-list address register */
    using GPDMA_C3LLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief If UT1 = UT2 = UB1 = USA = UDA = ULL = 0 and if LA[15:20] = 0, the current LLI is the last one. The channel transfer is completed without any update of the linked-list GPDMA register file. Else, this field is the pointer to the memory address offset from which the next linked-list data structure is automatically fetched from, once the data transfer is completed, in order to conditionally update the linked-list GPDMA internal register file (GPDMA_C3TR1, GPDMA_C3TR2, GPDMA_C3BR1, GPDMA_CxSAR, GPDMA_CxDAR and GPDMA_C3LLR). Note: The user must program the pointer to be 32-bit aligned. The two low-significant bits are write ignored. */
    using GPDMA_C3LLR_LA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This bit is used to control the update of GPDMA_C3LLR from the memory during the link transfer. 0: no GPDMA_C3LLR update 1: GPDMA_C3LLR update */
    using GPDMA_C3LLR_ULL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_C3LLR update (value: 0)
     *          - B_0x1: GPDMA_C3LLR update (value: 1)
     */
        /** @brief no GPDMA_C3LLR update */
    constexpr std::uint32_t GPDMA_C3LLR_ULL_B_0x0 = 0;
        /** @brief GPDMA_C3LLR update */
    constexpr std::uint32_t GPDMA_C3LLR_ULL_B_0x1 = 1;

    /** @brief This bit is used to control the update of GPDMA_CxDAR from the memory during the link transfer. 0: no GPDMA_CxDAR update 1: GPDMA_CxDAR update */
    using GPDMA_C3LLR_UDA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxDAR update (value: 0)
     *          - B_0x1: GPDMA_CxDAR update (value: 1)
     */
        /** @brief no GPDMA_CxDAR update */
    constexpr std::uint32_t GPDMA_C3LLR_UDA_B_0x0 = 0;
        /** @brief GPDMA_CxDAR update */
    constexpr std::uint32_t GPDMA_C3LLR_UDA_B_0x1 = 1;

    /** @brief This bit controls the update of GPDMA_CxSAR from the memory during the link transfer. 0: no GPDMA_CxSAR update 1: GPDMA_CxSAR update */
    using GPDMA_C3LLR_USA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxSAR update (value: 0)
     *          - B_0x1: GPDMA_CxSAR update (value: 1)
     */
        /** @brief no GPDMA_CxSAR update */
    constexpr std::uint32_t GPDMA_C3LLR_USA_B_0x0 = 0;
        /** @brief GPDMA_CxSAR update */
    constexpr std::uint32_t GPDMA_C3LLR_USA_B_0x1 = 1;

    /** @brief This bit controls the update of GPDMA_C3BR1 from the memory during the link transfer. If UB1 = 0 and if GPDMA_C3LLR is not equal to 0, the linked-list is not completed. GPDMA_C3BR1.BNDT[15:0] is then restored to the programmed value after data transfer is completed and before the link transfer. 0: no GPDMA_C3BR1 update from memory (GPDMA_C3BR1.BNDT[15:0] restored if any link transfer) 1: GPDMA_C3BR1 update */
    using GPDMA_C3LLR_UB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_C3BR1 update from memory (GPDMA_C3BR1.BNDT[15:0] restored if any link transfer) (value: 0)
     *          - B_0x1: GPDMA_C3BR1 update (value: 1)
     */
        /** @brief no GPDMA_C3BR1 update from memory (GPDMA_C3BR1.BNDT[15:0] restored if any link transfer) */
    constexpr std::uint32_t GPDMA_C3LLR_UB1_B_0x0 = 0;
        /** @brief GPDMA_C3BR1 update */
    constexpr std::uint32_t GPDMA_C3LLR_UB1_B_0x1 = 1;

    /** @brief This bit controls the update of GPDMA_C3TR2 from the memory during the link transfer. 0: no GPDMA_C3TR2 update 1: GPDMA_C3TR2 update */
    using GPDMA_C3LLR_UT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_C3TR2 update (value: 0)
     *          - B_0x1: GPDMA_C3TR2 update (value: 1)
     */
        /** @brief no GPDMA_C3TR2 update */
    constexpr std::uint32_t GPDMA_C3LLR_UT2_B_0x0 = 0;
        /** @brief GPDMA_C3TR2 update */
    constexpr std::uint32_t GPDMA_C3LLR_UT2_B_0x1 = 1;

    /** @brief This bit controls the update of GPDMA_C3TR1 from the memory during the link transfer. 0: no GPDMA_C3TR1 update 1: GPDMA_C3TR1 update */
    using GPDMA_C3LLR_UT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_C3TR1 update (value: 0)
     *          - B_0x1: GPDMA_C3TR1 update (value: 1)
     */
        /** @brief no GPDMA_C3TR1 update */
    constexpr std::uint32_t GPDMA_C3LLR_UT1_B_0x0 = 0;
        /** @brief GPDMA_C3TR1 update */
    constexpr std::uint32_t GPDMA_C3LLR_UT1_B_0x1 = 1;

    /** @brief GPDMA channel 4 linked-list base address register */
    using GPDMA_C4LBAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x250, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief None */
    using GPDMA_C4LBAR_LBA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 4 flag clear register */
    using GPDMA_C4FCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x25C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief None 0: no effect 1: corresponding TCF flag cleared */
    using GPDMA_C4FCR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding TCF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C4FCR_TCF_B_0x0 = 0;
        /** @brief corresponding TCF flag cleared */
    constexpr std::uint32_t GPDMA_C4FCR_TCF_B_0x1 = 1;

    /** @brief None 0: no effect 1: corresponding HTF flag cleared */
    using GPDMA_C4FCR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding HTF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C4FCR_HTF_B_0x0 = 0;
        /** @brief corresponding HTF flag cleared */
    constexpr std::uint32_t GPDMA_C4FCR_HTF_B_0x1 = 1;

    /** @brief None 0: no effect 1: corresponding DTEF flag cleared */
    using GPDMA_C4FCR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding DTEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C4FCR_DTEF_B_0x0 = 0;
        /** @brief corresponding DTEF flag cleared */
    constexpr std::uint32_t GPDMA_C4FCR_DTEF_B_0x1 = 1;

    /** @brief None 0: no effect 1: corresponding ULEF flag cleared */
    using GPDMA_C4FCR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding ULEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C4FCR_ULEF_B_0x0 = 0;
        /** @brief corresponding ULEF flag cleared */
    constexpr std::uint32_t GPDMA_C4FCR_ULEF_B_0x1 = 1;

    /** @brief None 0: no effect 1: corresponding USEF flag cleared */
    using GPDMA_C4FCR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding USEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C4FCR_USEF_B_0x0 = 0;
        /** @brief corresponding USEF flag cleared */
    constexpr std::uint32_t GPDMA_C4FCR_USEF_B_0x1 = 1;

    /** @brief None 0: no effect 1: corresponding SUSPF flag cleared */
    using GPDMA_C4FCR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding SUSPF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C4FCR_SUSPF_B_0x0 = 0;
        /** @brief corresponding SUSPF flag cleared */
    constexpr std::uint32_t GPDMA_C4FCR_SUSPF_B_0x1 = 1;

    /** @brief None 0: no effect 1: corresponding TOF flag cleared */
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
    /** @brief This idle flag is deasserted by hardware when the channel is enabled (GPDMA_C4CR.EN = 1) with a valid channel configuration (no USEF to be immediately reported). This idle flag is asserted after hard reset or by hardware when the channel is back in idle state (in suspended or disabled state). 0: channel not in idle state 1: channel in idle state */
    using GPDMA_C4SR_IDLEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: channel not in idle state (value: 0)
     *          - B_0x1: channel in idle state (value: 1)
     */
        /** @brief channel not in idle state */
    constexpr std::uint32_t GPDMA_C4SR_IDLEF_B_0x0 = 0;
        /** @brief channel in idle state */
    constexpr std::uint32_t GPDMA_C4SR_IDLEF_B_0x1 = 1;

    /** @brief A transfer complete event is either a block transfer complete, a 2D/repeated block transfer complete, or a LLI transfer complete including the upload of the next LLI if any, or the full linked-list completion, depending on the transfer complete event mode (GPDMA_C4TR2.TCEM[1:0]). 0: no transfer complete event 1: a transfer complete event occurred */
    using GPDMA_C4SR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no transfer complete event (value: 0)
     *          - B_0x1: a transfer complete event occurred (value: 1)
     */
        /** @brief no transfer complete event */
    constexpr std::uint32_t GPDMA_C4SR_TCF_B_0x0 = 0;
        /** @brief a transfer complete event occurred */
    constexpr std::uint32_t GPDMA_C4SR_TCF_B_0x1 = 1;

    /** @brief A half transfer event is either a half block transfer or a half 2D/repeated block transfer, depending on the transfer complete event mode (GPDMA_C4TR2.TCEM[1:0]). A half block transfer occurs when half of the bytes of the source block size (rounded up integer of GPDMA_C4BR1.BNDT[15:0]/2) has been transferred to the destination. A half 2D/repeated block transfer occurs when half of the repeated blocks (rounded up integer of (GPDMA_C4BR1.BRC[10:0]+1)/2)) has been transferred to the destination. 0: no half transfer event 1: a half transfer event occurred */
    using GPDMA_C4SR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no half transfer event (value: 0)
     *          - B_0x1: a half transfer event occurred (value: 1)
     */
        /** @brief no half transfer event */
    constexpr std::uint32_t GPDMA_C4SR_HTF_B_0x0 = 0;
        /** @brief a half transfer event occurred */
    constexpr std::uint32_t GPDMA_C4SR_HTF_B_0x1 = 1;

    /** @brief None 0: no data transfer error event 1: a master bus error event occurred on a data transfer */
    using GPDMA_C4SR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no data transfer error event (value: 0)
     *          - B_0x1: a master bus error event occurred on a data transfer (value: 1)
     */
        /** @brief no data transfer error event */
    constexpr std::uint32_t GPDMA_C4SR_DTEF_B_0x0 = 0;
        /** @brief a master bus error event occurred on a data transfer */
    constexpr std::uint32_t GPDMA_C4SR_DTEF_B_0x1 = 1;

    /** @brief None 0: no update link transfer error event 1: a master bus error event occurred while updating a linked-list register from memory */
    using GPDMA_C4SR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no update link transfer error event (value: 0)
     *          - B_0x1: a master bus error event occurred while updating a linked-list register from memory (value: 1)
     */
        /** @brief no update link transfer error event */
    constexpr std::uint32_t GPDMA_C4SR_ULEF_B_0x0 = 0;
        /** @brief a master bus error event occurred while updating a linked-list register from memory */
    constexpr std::uint32_t GPDMA_C4SR_ULEF_B_0x1 = 1;

    /** @brief None 0: no user setting error event 1: a user setting error event occurred */
    using GPDMA_C4SR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no user setting error event (value: 0)
     *          - B_0x1: a user setting error event occurred (value: 1)
     */
        /** @brief no user setting error event */
    constexpr std::uint32_t GPDMA_C4SR_USEF_B_0x0 = 0;
        /** @brief a user setting error event occurred */
    constexpr std::uint32_t GPDMA_C4SR_USEF_B_0x1 = 1;

    /** @brief None 0: no completed suspension event 1: a completed suspension event occurred */
    using GPDMA_C4SR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no completed suspension event (value: 0)
     *          - B_0x1: a completed suspension event occurred (value: 1)
     */
        /** @brief no completed suspension event */
    constexpr std::uint32_t GPDMA_C4SR_SUSPF_B_0x0 = 0;
        /** @brief a completed suspension event occurred */
    constexpr std::uint32_t GPDMA_C4SR_SUSPF_B_0x1 = 1;

    /** @brief None 0: no trigger overrun event 1: a trigger overrun event occurred */
    using GPDMA_C4SR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no trigger overrun event (value: 0)
     *          - B_0x1: a trigger overrun event occurred (value: 1)
     */
        /** @brief no trigger overrun event */
    constexpr std::uint32_t GPDMA_C4SR_TOF_B_0x0 = 0;
        /** @brief a trigger overrun event occurred */
    constexpr std::uint32_t GPDMA_C4SR_TOF_B_0x1 = 1;

    /** @brief Number of available write beats in the FIFO, in units of the programmed destination data width (see GPDMA_C4TR1.DDW_LOG2[1:0], in units of bytes, half-words, or words). Note: After having suspended an active transfer, the user may need to read FIFOL[7:0], additionally to GPDMA_C4BR1.BDNT[15:0] and GPDMA_C4BR1.BRC[10:0], to know how many data have been transferred to the destination. Before reading, the user may wait for the transfer to be suspended (GPDMA_C4SR.SUSPF = 1). */
    using GPDMA_C4SR_FIFOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 4 control register */
    using GPDMA_C4CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x264, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Writing 1 into the field RESET (bit 1) causes the hardware to de-assert this bit, whatever is written into this bit 0. Else: this bit is deasserted by hardware when there is a transfer error (master bus error or user setting error) or when there is a channel transfer complete (channel ready to be configured, for example if LSM = 1 at the end of a single execution of the LLI). Else, this bit can be asserted by software. Writing 0 into this EN bit is ignored. 0: write: ignored, read: channel disabled 1: write: enable channel, read: channel enabled */
    using GPDMA_C4CR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write: ignored, read: channel disabled (value: 0)
     *          - B_0x1: write: enable channel, read: channel enabled (value: 1)
     */
        /** @brief write: ignored, read: channel disabled */
    constexpr std::uint32_t GPDMA_C4CR_EN_B_0x0 = 0;
        /** @brief write: enable channel, read: channel enabled */
    constexpr std::uint32_t GPDMA_C4CR_EN_B_0x1 = 1;

    /** @brief This bit is write only. Writing 0 has no impact. Writing 1 implies the reset of the following: the FIFO, the channel internal state, SUSP and EN bits (whatever is written receptively in bit 2 and bit 0). The reset is effective when the channel is in steady state, meaning one of the following: - active channel in suspended state (GPDMA_C4SR.SUSPF = 1 and GPDMA_C4SR.IDLEF=GPDMA_C4CR.EN = 1) - channel in disabled state (GPDMA_C4SR.IDLEF = 1 and GPDMA_C4CR.EN = 0). After writing a RESET, to continue using this channel, the user must explicitly reconfigure the channel including the hardware-modified configuration registers (GPDMA_C4BR1, GPDMA_CxSAR and GPDMA_CxDAR) before enabling again the channel (see the programming sequence in less than xe6 [GPDMA_abort_restart/ID00-1465]/>). 0: no channel reset 1: channel reset */
    using GPDMA_C4CR_RESET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no channel reset (value: 0)
     *          - B_0x1: channel reset (value: 1)
     */
        /** @brief no channel reset */
    constexpr std::uint32_t GPDMA_C4CR_RESET_B_0x0 = 0;
        /** @brief channel reset */
    constexpr std::uint32_t GPDMA_C4CR_RESET_B_0x1 = 1;

    /** @brief Writing 1 into the field RESET (bit 1) causes the hardware to de-assert this bit, whatever is written into this bit 2. Else: Software must write 1 in order to suspend an active channel (channel with an ongoing GPDMA transfer over its master ports). The software must write 0 in order to resume a suspended channel, following the programming sequence detailed in less than xe5 [GPDMA_channel_suspend_and_resume/ID00-1456]/>. 0: write: resume channel, read: channel not suspended 1: write: suspend channel, read: channel suspended. */
    using GPDMA_C4CR_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write: resume channel, read: channel not suspended (value: 0)
     *          - B_0x1: write: suspend channel, read: channel suspended. (value: 1)
     */
        /** @brief write: resume channel, read: channel not suspended */
    constexpr std::uint32_t GPDMA_C4CR_SUSP_B_0x0 = 0;
        /** @brief write: suspend channel, read: channel suspended. */
    constexpr std::uint32_t GPDMA_C4CR_SUSP_B_0x1 = 1;

    /** @brief None 0: interrupt disabled 1: interrupt enabled */
    using GPDMA_C4CR_TCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C4CR_TCIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C4CR_TCIE_B_0x1 = 1;

    /** @brief None 0: interrupt disabled 1: interrupt enabled */
    using GPDMA_C4CR_HTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C4CR_HTIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C4CR_HTIE_B_0x1 = 1;

    /** @brief None 0: interrupt disabled 1: interrupt enabled */
    using GPDMA_C4CR_DTEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C4CR_DTEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C4CR_DTEIE_B_0x1 = 1;

    /** @brief None 0: interrupt disabled 1: interrupt enabled */
    using GPDMA_C4CR_ULEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C4CR_ULEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C4CR_ULEIE_B_0x1 = 1;

    /** @brief None 0: interrupt disabled 1: interrupt enabled */
    using GPDMA_C4CR_USEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C4CR_USEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C4CR_USEIE_B_0x1 = 1;

    /** @brief None 0: interrupt disabled 1: interrupt enabled */
    using GPDMA_C4CR_SUSPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C4CR_SUSPIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C4CR_SUSPIE_B_0x1 = 1;

    /** @brief None 0: interrupt disabled 1: interrupt enabled */
    using GPDMA_C4CR_TOIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C4CR_TOIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C4CR_TOIE_B_0x1 = 1;

    /** @brief First the (possible 1D/repeated) block transfer is executed as defined by the current internal register file until GPDMA_C4BR1.BNDT[15:0] = 0 and GPDMA_C4BR1.BRC[10:0] = 0. Secondly the next linked-list data structure is conditionally uploaded from memory as defined by GPDMA_C4LLR. Then channel execution is completed. 0: channel executed for the full linked-list and completed at the end of the last LLI (GPDMA_C4LLR = 0). The 16 low-significant bits of the link address are null (LA[15:0] = 0) and all the update bits are null (UT1 = UB1 = UT2 = USA = UDA = ULL = 0 and UT3 = UB2 = 0). Then GPDMA_C4BR1.BNDT[15:0] = 0 and GPDMA_C4BR1.BRC[10:0] = 0. 1: channel executed once for the current LLI Note: This bit must be written when EN = 0. This bit is read-only when EN = 1. */
    using GPDMA_C4CR_LSM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: channel executed for the full linked-list and completed at the end of the last LLI (GPDMA_C4LLR = 0). The 16 low-significant bits of the link address are null (LA[15:0] = 0) and all the update bits are null (UT1 = UB1 = UT2 = USA = UDA = ULL = 0 and UT3 = UB2 = 0). Then GPDMA_C4BR1.BNDT[15:0] = 0 and GPDMA_C4BR1.BRC[10:0] = 0. (value: 0)
     *          - B_0x1: channel executed once for the current LLI (value: 1)
     */
        /** @brief channel executed for the full linked-list and completed at the end of the last LLI (GPDMA_C4LLR = 0). The 16 low-significant bits of the link address are null (LA[15:0] = 0) and all the update bits are null (UT1 = UB1 = UT2 = USA = UDA = ULL = 0 and UT3 = UB2 = 0). Then GPDMA_C4BR1.BNDT[15:0] = 0 and GPDMA_C4BR1.BRC[10:0] = 0. */
    constexpr std::uint32_t GPDMA_C4CR_LSM_B_0x0 = 0;
        /** @brief channel executed once for the current LLI */
    constexpr std::uint32_t GPDMA_C4CR_LSM_B_0x1 = 1;

    /** @brief This bit is used to allocate the master port for the update of the GPDMA linked-list registers from the memory. 0: port 0 (AHB) allocated 1: port 1 (AHB) allocated Note: This bit must be written when EN = 0. This bit is read-only when EN = 1. */
    using GPDMA_C4CR_LAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C4CR_LAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C4CR_LAP_B_0x1 = 1;

    /** @brief None 00: low priority, low weight 01: low priority, mid weight 10: low priority, high weight 11: high priority Note: This bit must be written when EN = 0. This bit is read-only when EN = 1. */
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
    /** @brief None 00: byte 01: half-word (2 bytes) 10: word (4 bytes) 11: user setting error reported and no transfer issued Note: Setting a 8-byte data width causes a user setting error to be reported and no transfer is issued. +: A source block size must be a multiple of the source data width (GPDMA_C4BR1.BNDT[2:0] versus SDW_LOG2[1:0]). Otherwise, a user setting error is reported and no transfer is issued. +: A source burst transfer must have an aligned address with its data width (start address GPDMA_CxSAR[2:0] versus SDW_LOG2[1:0]). Otherwise, a user setting error is reported and none transfer is issued. */
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

    /** @brief The source address, pointed by GPDMA_CxSAR, is kept constant after a burst beat/single transfer or is incremented by the offset value corresponding to a contiguous data after a burst beat/single transfer. 0: fixed burst 1: contiguously incremented burst */
    using GPDMA_C4TR1_SINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fixed burst (value: 0)
     *          - B_0x1: contiguously incremented burst (value: 1)
     */
        /** @brief fixed burst */
    constexpr std::uint32_t GPDMA_C4TR1_SINC_B_0x0 = 0;
        /** @brief contiguously incremented burst */
    constexpr std::uint32_t GPDMA_C4TR1_SINC_B_0x1 = 1;

    /** @brief The burst length unit is one data named beat within a burst. If SBL_1[5:0] = 0, the burst can be named as single. Each data/beat has a width defined by the destination data width SDW_LOG2[1:0]. Note: If a burst transfer crossed a 1-Kbyte address boundary on a AHB transfer, the GPDMA modifies and shortens the programmed burst into singles or bursts of lower length, to be compliant with the AHB protocol. +: If a burst transfer is of length greater than the FIFO size of the channel 4, the GPDMA modifies and shortens the programmed burst into singles or bursts of lower length, to be compliant with the FIFO size. Transfer performance is lower, with GPDMA re-arbitration between effective and lower singles/bursts, but the data integrity is guaranteed. */
    using GPDMA_C4TR1_SBL_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief If DDW_LOG2[1:0] = SDW_LOG2[1:0]: if the data width of a burst destination transfer is equal to the data width of a burst source transfer, these bits are ignored.. */
    using GPDMA_C4TR1_PAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0_COND1: COND1 is [PAM_1] source data is transferred as right aligned, padded with 0s up to the destination data width (value: 0)
     *          - B_0x1_COND1: COND1 is [PAM_1] source data is transferred as right aligned, sign extended up to the destination data width (value: 1)
     *          - B_0x2_COND1: COND1 is [PAM_1] successive source data are FIFO queued and packed at the destination data width, in a left (LSB) to right (MSB) order (named little endian), before a destination transfer (value: 2)
     *          - B_0x3_COND1: COND1 is [PAM_1] successive source data are FIFO queued and packed at the destination data width, in a left (LSB) to right (MSB) order (named little endian), before a destination transfer (value: 3)
     */
        /** @brief COND1 is [PAM_1] source data is transferred as right aligned, padded with 0s up to the destination data width */
    constexpr std::uint32_t GPDMA_C4TR1_PAM_B_0x0_COND1 = 0;
        /** @brief COND1 is [PAM_1] source data is transferred as right aligned, sign extended up to the destination data width */
    constexpr std::uint32_t GPDMA_C4TR1_PAM_B_0x1_COND1 = 1;
        /** @brief COND1 is [PAM_1] successive source data are FIFO queued and packed at the destination data width, in a left (LSB) to right (MSB) order (named little endian), before a destination transfer */
    constexpr std::uint32_t GPDMA_C4TR1_PAM_B_0x2_COND1 = 2;
        /** @brief COND1 is [PAM_1] successive source data are FIFO queued and packed at the destination data width, in a left (LSB) to right (MSB) order (named little endian), before a destination transfer */
    constexpr std::uint32_t GPDMA_C4TR1_PAM_B_0x3_COND1 = 3;

    /** @brief If the source data width is shorter than a word, this bit is ignored. If the source data width is a word: 0: no byte-based exchange within the unaligned half-word of each source word 1: the two consecutive bytes within the unaligned half-word of each source word are exchanged. */
    using GPDMA_C4TR1_SBx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no byte-based exchange within the unaligned half-word of each source word (value: 0)
     *          - B_0x1: the two consecutive bytes within the unaligned half-word of each source word are exchanged. (value: 1)
     */
        /** @brief no byte-based exchange within the unaligned half-word of each source word */
    constexpr std::uint32_t GPDMA_C4TR1_SBx_B_0x0 = 0;
        /** @brief the two consecutive bytes within the unaligned half-word of each source word are exchanged. */
    constexpr std::uint32_t GPDMA_C4TR1_SBx_B_0x1 = 1;

    /** @brief This bit is used to allocate the master port for the source transfer 0: port 0 (AHB) allocated 1: port 1 (AHB) allocated Note: This bit must be written when EN = 0. This bit is read-only when EN = 1. */
    using GPDMA_C4TR1_SAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C4TR1_SAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C4TR1_SAP_B_0x1 = 1;

    /** @brief If GPDMA_SECCFGR.SEC4 = 1 and the access is secure: This is a secure register bit. This bit can only be read by a secure software. This bit must be written by a secure software when GPDMA_SECCFGR.SEC4 = 1. A secure write is ignored when GPDMA_SECCFGR.SEC4 = 0. When GPDMA_SECCFGR.SEC4 is deasserted, this SSEC bit is also deasserted by hardware (on a secure reconfiguration of the channel as non-secure), and the GPDMA transfer from the source is non-secure. 0: GPDMA transfer non-secure 1: GPDMA transfer secure */
    using GPDMA_C4TR1_SSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPDMA transfer non-secure (value: 0)
     *          - B_0x1: GPDMA transfer secure (value: 1)
     */
        /** @brief GPDMA transfer non-secure */
    constexpr std::uint32_t GPDMA_C4TR1_SSEC_B_0x0 = 0;
        /** @brief GPDMA transfer secure */
    constexpr std::uint32_t GPDMA_C4TR1_SSEC_B_0x1 = 1;

    /** @brief None 00: byte 01: half-word (2 bytes) 10: word (4 bytes) 11: user setting error reported and no transfer issued Note: Setting a 8-byte data width causes a user setting error to be reported and none transfer is issued. +: A destination burst transfer must have an aligned address with its data width (start address GPDMA_CxDAR[2:0] and address offset GPDMA_CxTR3.DAO[2:0], versus DDW_LOG2[1:0]). Otherwise a user setting error is reported and no transfer is issued. */
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

    /** @brief The destination address, pointed by GPDMA_CxDAR, is kept constant after a burst beat/single transfer, or is incremented by the offset value corresponding to a contiguous data after a burst beat/single transfer. 0: fixed burst 1: contiguously incremented burst */
    using GPDMA_C4TR1_DINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fixed burst (value: 0)
     *          - B_0x1: contiguously incremented burst (value: 1)
     */
        /** @brief fixed burst */
    constexpr std::uint32_t GPDMA_C4TR1_DINC_B_0x0 = 0;
        /** @brief contiguously incremented burst */
    constexpr std::uint32_t GPDMA_C4TR1_DINC_B_0x1 = 1;

    /** @brief The burst length unit is one data named beat within a burst. If DBL_1[5:0] = 0, the burst can be named as single. Each data/beat has a width defined by the destination data width DDW_LOG2[1:0]. Note: If a burst transfer crossed a 1-Kbyte address boundary on a AHB transfer, the GPDMA modifies and shortens the programmed burst into singles or bursts of lower length, to be compliant with the AHB protocol. +: If a burst transfer is of length greater than the FIFO size of the channel 4, the GPDMA modifies and shortens the programmed burst into singles or bursts of lower length, to be compliant with the FIFO size. Transfer performance is lower, with GPDMA re-arbitration between effective and lower singles/bursts, but the data integrity is guaranteed. */
    using GPDMA_C4TR1_DBL_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief If the destination data size is a byte, this bit is ignored. If the destination data size is not a byte: 0: no byte-based exchange within half-word 1: the two consecutive (post PAM) bytes are exchanged in each destination half-word. */
    using GPDMA_C4TR1_DBx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no byte-based exchange within half-word (value: 0)
     *          - B_0x1: the two consecutive (post PAM) bytes are exchanged in each destination half-word. (value: 1)
     */
        /** @brief no byte-based exchange within half-word */
    constexpr std::uint32_t GPDMA_C4TR1_DBx_B_0x0 = 0;
        /** @brief the two consecutive (post PAM) bytes are exchanged in each destination half-word. */
    constexpr std::uint32_t GPDMA_C4TR1_DBx_B_0x1 = 1;

    /** @brief If the destination data size is shorter than a word, this bit is ignored. If the destination data size is a word: 0: no halfword-based exchanged within word 1: the two consecutive (post PAM) half-words are exchanged in each destination word. */
    using GPDMA_C4TR1_DHx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no halfword-based exchanged within word (value: 0)
     *          - B_0x1: the two consecutive (post PAM) half-words are exchanged in each destination word. (value: 1)
     */
        /** @brief no halfword-based exchanged within word */
    constexpr std::uint32_t GPDMA_C4TR1_DHx_B_0x0 = 0;
        /** @brief the two consecutive (post PAM) half-words are exchanged in each destination word. */
    constexpr std::uint32_t GPDMA_C4TR1_DHx_B_0x1 = 1;

    /** @brief This bit is used to allocate the master port for the destination transfer 0: port 0 (AHB) allocated 1: port 1 (AHB) allocated Note: This bit must be written when EN = 0. This bit is read-only when EN = 1. */
    using GPDMA_C4TR1_DAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C4TR1_DAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C4TR1_DAP_B_0x1 = 1;

    /** @brief If GPDMA_SECCFGR.SEC4 = 1 and the access is secure: This is a secure register bit. This bit can only be read by a secure software. This bit must be written by a secure software when GPDMA_SECCFGR.SEC4 = 1. A secure write is ignored when GPDMA_SECCFGR.SEC4 = 0. When GPDMA_SECCFGR.SEC4 is deasserted, this DSEC bit is also deasserted by hardware (on a secure reconfiguration of the channel as non-secure), and the GPDMA transfer to the destination is non-secure. 0: GPDMA transfer non-secure 1: GPDMA transfer secure */
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
    /** @brief These bits are ignored if channel 4 is activated (GPDMA_C4CR.EN asserted) with SWREQ=1 (software request for a memory-to-memory transfer). Else, the selected hardware request is internally taken into account as per less than xe4 [GPDMA_requests]/>. The user must not assign a same input hardware request (same REQSEL[6:0] value) to different active GPDMA channels (GPDMA_C4CR.EN = 1 and GPDMA_C4TR2.SWREQ = 0 for these channels). GPDMA is not intended to hardware support the case of simultaneous enabled channels incorrectly configured with a same hardware peripheral request signal, and there is no user setting error reporting. */
    using GPDMA_C4TR2_REQSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This bit is internally taken into account when GPDMA_C4CR.EN is asserted. 0: no software request. The selected hardware request REQSEL[6:0] is taken into account. 1: software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[6:0] is ignored. */
    using GPDMA_C4TR2_SWREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no software request. The selected hardware request REQSEL[6:0] is taken into account. (value: 0)
     *          - B_0x1: software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[6:0] is ignored. (value: 1)
     */
        /** @brief no software request. The selected hardware request REQSEL[6:0] is taken into account. */
    constexpr std::uint32_t GPDMA_C4TR2_SWREQ_B_0x0 = 0;
        /** @brief software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[6:0] is ignored. */
    constexpr std::uint32_t GPDMA_C4TR2_SWREQ_B_0x1 = 1;

    /** @brief This bit is ignored if channel 4 is activated (GPDMA_C4CR.EN asserted) with SWREQ = 1 (software request for a memory-to-memory transfer). Else: 0: selected hardware request driven by a source peripheral (request signal taken into account by the GPDMA transfer scheduler over the source/read port) 1: selected hardware request driven by a destination peripheral (request signal taken into account by the GPDMA transfer scheduler over the destination/write port) Note: If the channel 4 is activated (GPDMA_C4CR.EN is asserted) with SWREQ = 0 and PFREQ = 1 (peripheral hardware request with peripheral flow-control mode), any software assertion to this DREQ bit is ignored: in peripheral flow-control mode, only a peripheral-to-memory transfer is supported. */
    using GPDMA_C4TR2_DREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: selected hardware request driven by a source peripheral (request signal taken into account by the GPDMA transfer scheduler over the source/read port) (value: 0)
     *          - B_0x1: selected hardware request driven by a destination peripheral (request signal taken into account by the GPDMA transfer scheduler over the destination/write port) (value: 1)
     */
        /** @brief selected hardware request driven by a source peripheral (request signal taken into account by the GPDMA transfer scheduler over the source/read port) */
    constexpr std::uint32_t GPDMA_C4TR2_DREQ_B_0x0 = 0;
        /** @brief selected hardware request driven by a destination peripheral (request signal taken into account by the GPDMA transfer scheduler over the destination/write port) */
    constexpr std::uint32_t GPDMA_C4TR2_DREQ_B_0x1 = 1;

    /** @brief If the channel 4 is activated (GPDMA_C4CR.EN asserted) with SWREQ = 1 (software request for a memory-to-memory transfer), this bit is ignored. Else: 0: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a burst level. 1: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see less than xe4 [GPDMA_requests]/>). */
    using GPDMA_C4TR2_BREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a burst level. (value: 0)
     *          - B_0x1: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see less than xe4 [GPDMA_requests]/>). (value: 1)
     */
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a burst level. */
    constexpr std::uint32_t GPDMA_C4TR2_BREQ_B_0x0 = 0;
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see less than xe4 [GPDMA_requests]/>). */
    constexpr std::uint32_t GPDMA_C4TR2_BREQ_B_0x1 = 1;

    /** @brief Caution: If a given channel 4 is not implemented with this feature, this bit is reserved and PFREQ is not present (see less than xe1 [GPDMA_channels]/> for the list of the implemented channels with this feature). */
    using GPDMA_C4TR2_PFREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol in GPDMA control mode. The GPDMA is programmed with GPDMA_C4TR1.BNDT[15:0] and this is internally used by the hardware for the block transfer completion. (value: 0)
     *          - B_0x1: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol in peripheral control mode. The GPDMA block transfer can be early completed by the peripheral itself (see less than xe2 [GPDMA_channels_peripheral]/> for more details). (value: 1)
     */
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol in GPDMA control mode. The GPDMA is programmed with GPDMA_C4TR1.BNDT[15:0] and this is internally used by the hardware for the block transfer completion. */
    constexpr std::uint32_t GPDMA_C4TR2_PFREQ_B_0x0 = 0;
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol in peripheral control mode. The GPDMA block transfer can be early completed by the peripheral itself (see less than xe2 [GPDMA_channels_peripheral]/> for more details). */
    constexpr std::uint32_t GPDMA_C4TR2_PFREQ_B_0x1 = 1;

    /** @brief These bits define the transfer granularity for its conditioning by the trigger. If the channel 4 is enabled (GPDMA_C4CR.EN asserted) with TRIGPOL[1:0] = 00 or 11, these TRIGM[1:0] bits are ignored. Else, a GPDMA transfer is conditioned by at least one trigger hit: 00: at block level: the first burst read of each block transfer is conditioned by one hit trigger (channel 4 = 12 to 15, for each block if a 2D/repeated block is configured with GPDMA_C4BR1.BRC[10:0] is not equal to 0). 10: at link level: a LLI link transfer is conditioned by one hit trigger. The LLI data transfer (if any) is not conditioned. 11: at programmed burst level: If SWREQ = 1, each programmed burst read is conditioned by one hit trigger. If SWREQ = 0, each programmed burst that is requested by the selected peripheral, is conditioned by one hit trigger. - If the peripheral is programmed as a source (DREQ = 0) of the LLI data transfer, each programmed burst read is conditioned. - If the peripheral is programmed as a destination (DREQ = 1) of the LLI data transfer, each programmed burst write is conditioned. The first memory burst read of a (possibly 2D/repeated) block, also named as the first ready FIFO-based source burst, is gated by the occurrence of both the hardware request and the first trigger hit.01: channel 4 = 0 to , same as 00; channel 4 , at 2D/repeated block level. The first burst read of a 2D/repeated block transfer is conditioned by one hit trigger. The GPDMA monitoring of a trigger for channel 4 is started when the channel is enabled/loaded with a new active trigger configuration: rising or falling edge on a selected trigger (TRIGPOL[1:0] = 01 or respectively TRIGPOL[1:0]=10). The monitoring of this trigger is kept active during the triggered and uncompleted (data or link) transfer; and if a new trigger is detected then, this hit is internally memorized to grant the next transfer, as long as the defined rising or falling edge is not modified, and the TRIGSEL[5:0] is not modified, and the channel is enabled. Transferring a next LLIn+1 that updates the GPDMA_C4TR2 with a new value for any of TRIGSEL[5:0] or TRIGPOL[1:0], resets the monitoring, trashing the memorized hit of the formerly defined LLIn trigger. After a first new trigger hitn+1 is memorized, if another second trigger hitn+2 is detected and if the hitn triggered transfer is still not completed, hitn+2 is lost and not memorized.memorized. A trigger overrun flag is reported (GPDMA_C4SR.TOF=1), and an interrupt is generated if enabled (GPDMA_C4CR.TOIE = 1). The channel is not automatically disabled by hardware due to a trigger overrun. Note: When the source block size is not a multiple of the source burst size and is a multiple of the source data width, then the last programmed source burst is not completed and is internally shorten to match the block size. In this case, if TRIGM[1:0] = 11 and (SWREQ = 1 or (SWREQ = 0 and DREQ = 0)), the shortened burst transfer (by singles or/and by bursts of lower length) is conditioned once by the trigger. +: When the programmed destination burst is internally shortened by singles or/and by bursts of lower length (versus FIFO size, versus block size, 1-Kbyte boundary address crossing): if the trigger is conditioning the programmed destination burst (if TRIGM[1:0] = 11 and SWREQ = 0 and DREQ = 1), this shortened destination burst transfer is conditioned once by the trigger. */
    using GPDMA_C4TR2_TRIGM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief These bits select the trigger event input of the GPDMA transfer (as per less than xe3 [GPDMA_triggers]/>), with anactive trigger event if TRIGPOL[1:0] is not equal to 00. */
    using GPDMA_C4TR2_TRIGSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief These bits define the polarity of the selected trigger event input defined by TRIGSEL[5:0]. 00: no trigger (masked trigger event) 01: trigger on the rising edge 10: trigger on the falling edge 11: same as 00 */
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

    /** @brief These bits define the transfer granularity for the transfer complete and half transfer complete events generation. 00: at block level (when GPDMA_C4BR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. 01: channel 4 (0 to ), same as 00, channel 4 , at 2D/repeated block level (when GPDMA_C4BR1.BRC[10:0] = 0 and GPDMA_C4BR1.BNDT[15:0] = 0). The complete (and the half) transfer event is generated at the end (respectively half of the end) of the 2D/repeated block. 10: at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer. The LLI data transfer is a block transfer or a 2D/repeated block transfer for channel 4 , if any data transfer. 11: at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address GPDMA_C4LLR.LA[15:2] to zero and clears all the GPDMA_C4LLR update bits (UT1, UT2, UB1, USA, UDA and ULL, plus UT3 and UB2). If the channel transfer is continuous/infinite, no event is generated. Note: If the initial LLI0 data transfer is null/void (directly programmed by the internal register file with GPDMA_C4BR1.BNDT[15:0] = 0), then neither the complete transfer event nor the half transfer event is generated. +: If the initial LLI0 data transfer is null/void (directly programmed by the internal register file with GPDMA_C4BR1.BNDT[15:0] = 0), then neither the complete transfer event nor the half transfer event is generated. +: If the initial LLI0 data transfer is null/void (directly programmed by the internal register file with GPDMA_C4BR1.BNDT[15:0] = 0), then the half transfer event is not generated, and the transfer complete event is generated when is completed the loading of the LLI1. */
    using GPDMA_C4TR2_TCEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: at block level (when GPDMA_C4BR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. (value: 0)
     *          - B_0x1: channel 4 (0 to ), same as 00, channel 4 , at 2D/repeated block level (when GPDMA_C4BR1.BRC[10:0] = 0 and GPDMA_C4BR1.BNDT[15:0] = 0). The complete (and the half) transfer event is generated at the end (respectively half of the end) of the 2D/repeated block. (value: 1)
     *          - B_0x2: at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer. The LLI data transfer is a block transfer or a 2D/repeated block transfer for channel 4 , if any data transfer. (value: 2)
     *          - B_0x3: at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address GPDMA_C4LLR.LA[15:2] to zero and clears all the GPDMA_C4LLR update bits (UT1, UT2, UB1, USA, UDA and ULL, plus UT3 and UB2). If the channel transfer is continuous/infinite, no event is generated. (value: 3)
     */
        /** @brief at block level (when GPDMA_C4BR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. */
    constexpr std::uint32_t GPDMA_C4TR2_TCEM_B_0x0 = 0;
        /** @brief channel 4 (0 to ), same as 00, channel 4 , at 2D/repeated block level (when GPDMA_C4BR1.BRC[10:0] = 0 and GPDMA_C4BR1.BNDT[15:0] = 0). The complete (and the half) transfer event is generated at the end (respectively half of the end) of the 2D/repeated block. */
    constexpr std::uint32_t GPDMA_C4TR2_TCEM_B_0x1 = 1;
        /** @brief at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer. The LLI data transfer is a block transfer or a 2D/repeated block transfer for channel 4 , if any data transfer. */
    constexpr std::uint32_t GPDMA_C4TR2_TCEM_B_0x2 = 2;
        /** @brief at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address GPDMA_C4LLR.LA[15:2] to zero and clears all the GPDMA_C4LLR update bits (UT1, UT2, UB1, USA, UDA and ULL, plus UT3 and UB2). If the channel transfer is continuous/infinite, no event is generated. */
    constexpr std::uint32_t GPDMA_C4TR2_TCEM_B_0x3 = 3;

    /** @brief GPDMA channel 4 block register 1 */
    using GPDMA_C4BR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x298, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Block size transferred from the source. When the channel is enabled, this field becomes read-only and is decremented, indicating the remaining number of data items in the current source block to be transferred. BNDT[15:0] is programmed in number of bytes, maximum source block size is 64 Kbytes -1. Once the last data transfer is completed (BNDT[15:0] = 0): - if GPDMA_C4LLR.UB1 = 1, this field is updated by the LLI in the memory. - if GPDMA_C4LLR.UB1 = 0 and if there is at least one not null Uxx update bit, this field is internally restored to the programmed value. - if all GPDMA_C4LLR.Uxx = 0 and if GPDMA_C4LLR.LA[15:0] is not equal to 0, this field is internally restored to the programmed value (infinite/continuous last LLI). - if GPDMA_C4LLR = 0, this field is kept as zero following the last LLI data transfer. Note: A non-null source block size must be a multiple of the source data width (BNDT[2:0] versus GPDMA_C4TR1.SDW_LOG2[1:0]). Else a user setting error is reported and no transfer is issued. +: When configured in packing mode (GPDMA_C4TR1.PAM[1] = 1 and destination data width different from source data width), a non-null source block size must be a multiple of the destination data width (BNDT[2:0] versus GPDMA_C4TR1.DDW_LOG2[1:0]). Else a user setting error is reported and no transfer is issued. */
    using GPDMA_C4BR1_BNDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 4 source address register */
    using GPDMA_C4SAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x29C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This field is the pointer to the address from which the next data is read. During the channel activity, depending on the source addressing mode (GPDMA_C4TR1.SINC), this field is kept fixed or incremented by the data width (GPDMA_C4TR1.SDW_LOG2[1:0]) after each burst source data, reflecting the next address from which data is read. During the channel activity, this address is updated after each completed source burst, consequently to: - the programmed source burst; either in fixed addressing mode or in contiguous-data incremented mode. If contiguously incremented (GPDMA_C4TR1.SINC = 1), then the additional address offset value is the programmed burst size, as defined by GPDMA_C4TR1.SBL_1[5:0] and GPDMA_C4TR1.SDW_LOG2[21:0] - the additional source incremented/decremented offset value as programmed by GPDMA_C4BR1.SDEC and GPDMA_CxTR3.SAO[12:0]. - once/if completed source block transfer, for a channel 4 with 2D addressing capability (x = 12 to 15). additional block repeat source incremented/decremented offset value as programmed by GPDMA_C4BR1.BRSDEC and GPDMA_CxBR2.BRSAO[15:0] In linked-list mode, after a LLI data transfer is completed, this register is automatically updated by GPDMA from the memory, provided the LLI is set with GPDMA_C4LLR.USA = 1. Note: A source address must be aligned with the programmed data width of a source burst (SA[2:0] versus GPDMA_C4TR1.SDW_LOG2[1:0]). Else, a user setting error is reported and no transfer is issued. +: When the source block size is not a multiple of the source burst size and is a multiple of the source data width, the last programmed source burst is not completed and is internally shorten to match the block size. In this case, the additional GPDMA_CxTR3.SAO[12:0] is not applied. */
    using GPDMA_C4SAR_SA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 4 destination address register */
    using GPDMA_C4DAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This field is the pointer to the address from which the next data is written. During the channel activity, depending on the destination addressing mode (GPDMA_C4TR1.DINC), this field is kept fixed or incremented by the data width (GPDMA_C4TR1.DDW_LOG2[21:0]) after each burst destination data, reflecting the next address from which data is written. During the channel activity, this address is updated after each completed destination burst, consequently to: - the programmed destination burst; either in fixed addressing mode or in contiguous-data incremented mode. If contiguously incremented (GPDMA_C4TR1.DINC = 1), then the additional address offset value is the programmed burst size, as defined by GPDMA_C4TR1.DBL_1[5:0] and GPDMA_C4TR1.DDW_LOG2[1:0] - the additional destination incremented/decremented offset value as programmed by GPDMA_C4BR1.DDEC and GPDMA_CxTR3.DAO[12:0]. - once/if completed destination block transfer, for a channel 4 with 2D addressing capability (x=12to15), the additional block repeat destination incremented/decremented offset value as programmed by GPDMA_C4BR1.BRDDEC and GPDMA_CxBR2.BRDAO[15:0] In linked-list mode, after a LLI data transfer is completed, this register is automatically updated by the GPDMA from the memory, provided the LLI is set with GPDMA_C4LLR.UDA = 1. Note: A destination address must be aligned with the programmed data width of a destination burst (DA[2:0] versus GPDMA_C4TR1.DDW_LOG2[1:0]). Else, a user setting error is reported and no transfer is issued. */
    using GPDMA_C4DAR_DA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 4 linked-list address register */
    using GPDMA_C4LLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2CC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief If UT1 = UT2 = UB1 = USA = UDA = ULL = 0 and if LA[15:20] = 0, the current LLI is the last one. The channel transfer is completed without any update of the linked-list GPDMA register file. Else, this field is the pointer to the memory address offset from which the next linked-list data structure is automatically fetched from, once the data transfer is completed, in order to conditionally update the linked-list GPDMA internal register file (GPDMA_C4TR1, GPDMA_C4TR2, GPDMA_C4BR1, GPDMA_CxSAR, GPDMA_CxDAR and GPDMA_C4LLR). Note: The user must program the pointer to be 32-bit aligned. The two low-significant bits are write ignored. */
    using GPDMA_C4LLR_LA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This bit is used to control the update of GPDMA_C4LLR from the memory during the link transfer. 0: no GPDMA_C4LLR update 1: GPDMA_C4LLR update */
    using GPDMA_C4LLR_ULL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_C4LLR update (value: 0)
     *          - B_0x1: GPDMA_C4LLR update (value: 1)
     */
        /** @brief no GPDMA_C4LLR update */
    constexpr std::uint32_t GPDMA_C4LLR_ULL_B_0x0 = 0;
        /** @brief GPDMA_C4LLR update */
    constexpr std::uint32_t GPDMA_C4LLR_ULL_B_0x1 = 1;

    /** @brief This bit is used to control the update of GPDMA_CxDAR from the memory during the link transfer. 0: no GPDMA_CxDAR update 1: GPDMA_CxDAR update */
    using GPDMA_C4LLR_UDA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxDAR update (value: 0)
     *          - B_0x1: GPDMA_CxDAR update (value: 1)
     */
        /** @brief no GPDMA_CxDAR update */
    constexpr std::uint32_t GPDMA_C4LLR_UDA_B_0x0 = 0;
        /** @brief GPDMA_CxDAR update */
    constexpr std::uint32_t GPDMA_C4LLR_UDA_B_0x1 = 1;

    /** @brief This bit controls the update of GPDMA_CxSAR from the memory during the link transfer. 0: no GPDMA_CxSAR update 1: GPDMA_CxSAR update */
    using GPDMA_C4LLR_USA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxSAR update (value: 0)
     *          - B_0x1: GPDMA_CxSAR update (value: 1)
     */
        /** @brief no GPDMA_CxSAR update */
    constexpr std::uint32_t GPDMA_C4LLR_USA_B_0x0 = 0;
        /** @brief GPDMA_CxSAR update */
    constexpr std::uint32_t GPDMA_C4LLR_USA_B_0x1 = 1;

    /** @brief This bit controls the update of GPDMA_C4BR1 from the memory during the link transfer. If UB1 = 0 and if GPDMA_C4LLR is not equal to 0, the linked-list is not completed. GPDMA_C4BR1.BNDT[15:0] is then restored to the programmed value after data transfer is completed and before the link transfer. 0: no GPDMA_C4BR1 update from memory (GPDMA_C4BR1.BNDT[15:0] restored if any link transfer) 1: GPDMA_C4BR1 update */
    using GPDMA_C4LLR_UB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_C4BR1 update from memory (GPDMA_C4BR1.BNDT[15:0] restored if any link transfer) (value: 0)
     *          - B_0x1: GPDMA_C4BR1 update (value: 1)
     */
        /** @brief no GPDMA_C4BR1 update from memory (GPDMA_C4BR1.BNDT[15:0] restored if any link transfer) */
    constexpr std::uint32_t GPDMA_C4LLR_UB1_B_0x0 = 0;
        /** @brief GPDMA_C4BR1 update */
    constexpr std::uint32_t GPDMA_C4LLR_UB1_B_0x1 = 1;

    /** @brief This bit controls the update of GPDMA_C4TR2 from the memory during the link transfer. 0: no GPDMA_C4TR2 update 1: GPDMA_C4TR2 update */
    using GPDMA_C4LLR_UT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_C4TR2 update (value: 0)
     *          - B_0x1: GPDMA_C4TR2 update (value: 1)
     */
        /** @brief no GPDMA_C4TR2 update */
    constexpr std::uint32_t GPDMA_C4LLR_UT2_B_0x0 = 0;
        /** @brief GPDMA_C4TR2 update */
    constexpr std::uint32_t GPDMA_C4LLR_UT2_B_0x1 = 1;

    /** @brief This bit controls the update of GPDMA_C4TR1 from the memory during the link transfer. 0: no GPDMA_C4TR1 update 1: GPDMA_C4TR1 update */
    using GPDMA_C4LLR_UT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_C4TR1 update (value: 0)
     *          - B_0x1: GPDMA_C4TR1 update (value: 1)
     */
        /** @brief no GPDMA_C4TR1 update */
    constexpr std::uint32_t GPDMA_C4LLR_UT1_B_0x0 = 0;
        /** @brief GPDMA_C4TR1 update */
    constexpr std::uint32_t GPDMA_C4LLR_UT1_B_0x1 = 1;

    /** @brief GPDMA channel 5 linked-list base address register */
    using GPDMA_C5LBAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2D0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief None */
    using GPDMA_C5LBAR_LBA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 5 flag clear register */
    using GPDMA_C5FCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2DC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief None 0: no effect 1: corresponding TCF flag cleared */
    using GPDMA_C5FCR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding TCF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C5FCR_TCF_B_0x0 = 0;
        /** @brief corresponding TCF flag cleared */
    constexpr std::uint32_t GPDMA_C5FCR_TCF_B_0x1 = 1;

    /** @brief None 0: no effect 1: corresponding HTF flag cleared */
    using GPDMA_C5FCR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding HTF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C5FCR_HTF_B_0x0 = 0;
        /** @brief corresponding HTF flag cleared */
    constexpr std::uint32_t GPDMA_C5FCR_HTF_B_0x1 = 1;

    /** @brief None 0: no effect 1: corresponding DTEF flag cleared */
    using GPDMA_C5FCR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding DTEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C5FCR_DTEF_B_0x0 = 0;
        /** @brief corresponding DTEF flag cleared */
    constexpr std::uint32_t GPDMA_C5FCR_DTEF_B_0x1 = 1;

    /** @brief None 0: no effect 1: corresponding ULEF flag cleared */
    using GPDMA_C5FCR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding ULEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C5FCR_ULEF_B_0x0 = 0;
        /** @brief corresponding ULEF flag cleared */
    constexpr std::uint32_t GPDMA_C5FCR_ULEF_B_0x1 = 1;

    /** @brief None 0: no effect 1: corresponding USEF flag cleared */
    using GPDMA_C5FCR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding USEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C5FCR_USEF_B_0x0 = 0;
        /** @brief corresponding USEF flag cleared */
    constexpr std::uint32_t GPDMA_C5FCR_USEF_B_0x1 = 1;

    /** @brief None 0: no effect 1: corresponding SUSPF flag cleared */
    using GPDMA_C5FCR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding SUSPF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C5FCR_SUSPF_B_0x0 = 0;
        /** @brief corresponding SUSPF flag cleared */
    constexpr std::uint32_t GPDMA_C5FCR_SUSPF_B_0x1 = 1;

    /** @brief None 0: no effect 1: corresponding TOF flag cleared */
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
    /** @brief This idle flag is deasserted by hardware when the channel is enabled (GPDMA_C5CR.EN = 1) with a valid channel configuration (no USEF to be immediately reported). This idle flag is asserted after hard reset or by hardware when the channel is back in idle state (in suspended or disabled state). 0: channel not in idle state 1: channel in idle state */
    using GPDMA_C5SR_IDLEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: channel not in idle state (value: 0)
     *          - B_0x1: channel in idle state (value: 1)
     */
        /** @brief channel not in idle state */
    constexpr std::uint32_t GPDMA_C5SR_IDLEF_B_0x0 = 0;
        /** @brief channel in idle state */
    constexpr std::uint32_t GPDMA_C5SR_IDLEF_B_0x1 = 1;

    /** @brief A transfer complete event is either a block transfer complete, a 2D/repeated block transfer complete, or a LLI transfer complete including the upload of the next LLI if any, or the full linked-list completion, depending on the transfer complete event mode (GPDMA_C5TR2.TCEM[1:0]). 0: no transfer complete event 1: a transfer complete event occurred */
    using GPDMA_C5SR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no transfer complete event (value: 0)
     *          - B_0x1: a transfer complete event occurred (value: 1)
     */
        /** @brief no transfer complete event */
    constexpr std::uint32_t GPDMA_C5SR_TCF_B_0x0 = 0;
        /** @brief a transfer complete event occurred */
    constexpr std::uint32_t GPDMA_C5SR_TCF_B_0x1 = 1;

    /** @brief A half transfer event is either a half block transfer or a half 2D/repeated block transfer, depending on the transfer complete event mode (GPDMA_C5TR2.TCEM[1:0]). A half block transfer occurs when half of the bytes of the source block size (rounded up integer of GPDMA_C5BR1.BNDT[15:0]/2) has been transferred to the destination. A half 2D/repeated block transfer occurs when half of the repeated blocks (rounded up integer of (GPDMA_C5BR1.BRC[10:0]+1)/2)) has been transferred to the destination. 0: no half transfer event 1: a half transfer event occurred */
    using GPDMA_C5SR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no half transfer event (value: 0)
     *          - B_0x1: a half transfer event occurred (value: 1)
     */
        /** @brief no half transfer event */
    constexpr std::uint32_t GPDMA_C5SR_HTF_B_0x0 = 0;
        /** @brief a half transfer event occurred */
    constexpr std::uint32_t GPDMA_C5SR_HTF_B_0x1 = 1;

    /** @brief None 0: no data transfer error event 1: a master bus error event occurred on a data transfer */
    using GPDMA_C5SR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no data transfer error event (value: 0)
     *          - B_0x1: a master bus error event occurred on a data transfer (value: 1)
     */
        /** @brief no data transfer error event */
    constexpr std::uint32_t GPDMA_C5SR_DTEF_B_0x0 = 0;
        /** @brief a master bus error event occurred on a data transfer */
    constexpr std::uint32_t GPDMA_C5SR_DTEF_B_0x1 = 1;

    /** @brief None 0: no update link transfer error event 1: a master bus error event occurred while updating a linked-list register from memory */
    using GPDMA_C5SR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no update link transfer error event (value: 0)
     *          - B_0x1: a master bus error event occurred while updating a linked-list register from memory (value: 1)
     */
        /** @brief no update link transfer error event */
    constexpr std::uint32_t GPDMA_C5SR_ULEF_B_0x0 = 0;
        /** @brief a master bus error event occurred while updating a linked-list register from memory */
    constexpr std::uint32_t GPDMA_C5SR_ULEF_B_0x1 = 1;

    /** @brief None 0: no user setting error event 1: a user setting error event occurred */
    using GPDMA_C5SR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no user setting error event (value: 0)
     *          - B_0x1: a user setting error event occurred (value: 1)
     */
        /** @brief no user setting error event */
    constexpr std::uint32_t GPDMA_C5SR_USEF_B_0x0 = 0;
        /** @brief a user setting error event occurred */
    constexpr std::uint32_t GPDMA_C5SR_USEF_B_0x1 = 1;

    /** @brief None 0: no completed suspension event 1: a completed suspension event occurred */
    using GPDMA_C5SR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no completed suspension event (value: 0)
     *          - B_0x1: a completed suspension event occurred (value: 1)
     */
        /** @brief no completed suspension event */
    constexpr std::uint32_t GPDMA_C5SR_SUSPF_B_0x0 = 0;
        /** @brief a completed suspension event occurred */
    constexpr std::uint32_t GPDMA_C5SR_SUSPF_B_0x1 = 1;

    /** @brief None 0: no trigger overrun event 1: a trigger overrun event occurred */
    using GPDMA_C5SR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no trigger overrun event (value: 0)
     *          - B_0x1: a trigger overrun event occurred (value: 1)
     */
        /** @brief no trigger overrun event */
    constexpr std::uint32_t GPDMA_C5SR_TOF_B_0x0 = 0;
        /** @brief a trigger overrun event occurred */
    constexpr std::uint32_t GPDMA_C5SR_TOF_B_0x1 = 1;

    /** @brief Number of available write beats in the FIFO, in units of the programmed destination data width (see GPDMA_C5TR1.DDW_LOG2[1:0], in units of bytes, half-words, or words). Note: After having suspended an active transfer, the user may need to read FIFOL[7:0], additionally to GPDMA_C5BR1.BDNT[15:0] and GPDMA_C5BR1.BRC[10:0], to know how many data have been transferred to the destination. Before reading, the user may wait for the transfer to be suspended (GPDMA_C5SR.SUSPF = 1). */
    using GPDMA_C5SR_FIFOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 5 control register */
    using GPDMA_C5CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2E4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Writing 1 into the field RESET (bit 1) causes the hardware to de-assert this bit, whatever is written into this bit 0. Else: this bit is deasserted by hardware when there is a transfer error (master bus error or user setting error) or when there is a channel transfer complete (channel ready to be configured, for example if LSM = 1 at the end of a single execution of the LLI). Else, this bit can be asserted by software. Writing 0 into this EN bit is ignored. 0: write: ignored, read: channel disabled 1: write: enable channel, read: channel enabled */
    using GPDMA_C5CR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write: ignored, read: channel disabled (value: 0)
     *          - B_0x1: write: enable channel, read: channel enabled (value: 1)
     */
        /** @brief write: ignored, read: channel disabled */
    constexpr std::uint32_t GPDMA_C5CR_EN_B_0x0 = 0;
        /** @brief write: enable channel, read: channel enabled */
    constexpr std::uint32_t GPDMA_C5CR_EN_B_0x1 = 1;

    /** @brief This bit is write only. Writing 0 has no impact. Writing 1 implies the reset of the following: the FIFO, the channel internal state, SUSP and EN bits (whatever is written receptively in bit 2 and bit 0). The reset is effective when the channel is in steady state, meaning one of the following: - active channel in suspended state (GPDMA_C5SR.SUSPF = 1 and GPDMA_C5SR.IDLEF=GPDMA_C5CR.EN = 1) - channel in disabled state (GPDMA_C5SR.IDLEF = 1 and GPDMA_C5CR.EN = 0). After writing a RESET, to continue using this channel, the user must explicitly reconfigure the channel including the hardware-modified configuration registers (GPDMA_C5BR1, GPDMA_CxSAR and GPDMA_CxDAR) before enabling again the channel (see the programming sequence in less than xe6 [GPDMA_abort_restart/ID00-1465]/>). 0: no channel reset 1: channel reset */
    using GPDMA_C5CR_RESET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no channel reset (value: 0)
     *          - B_0x1: channel reset (value: 1)
     */
        /** @brief no channel reset */
    constexpr std::uint32_t GPDMA_C5CR_RESET_B_0x0 = 0;
        /** @brief channel reset */
    constexpr std::uint32_t GPDMA_C5CR_RESET_B_0x1 = 1;

    /** @brief Writing 1 into the field RESET (bit 1) causes the hardware to de-assert this bit, whatever is written into this bit 2. Else: Software must write 1 in order to suspend an active channel (channel with an ongoing GPDMA transfer over its master ports). The software must write 0 in order to resume a suspended channel, following the programming sequence detailed in less than xe5 [GPDMA_channel_suspend_and_resume/ID00-1456]/>. 0: write: resume channel, read: channel not suspended 1: write: suspend channel, read: channel suspended. */
    using GPDMA_C5CR_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write: resume channel, read: channel not suspended (value: 0)
     *          - B_0x1: write: suspend channel, read: channel suspended. (value: 1)
     */
        /** @brief write: resume channel, read: channel not suspended */
    constexpr std::uint32_t GPDMA_C5CR_SUSP_B_0x0 = 0;
        /** @brief write: suspend channel, read: channel suspended. */
    constexpr std::uint32_t GPDMA_C5CR_SUSP_B_0x1 = 1;

    /** @brief None 0: interrupt disabled 1: interrupt enabled */
    using GPDMA_C5CR_TCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C5CR_TCIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C5CR_TCIE_B_0x1 = 1;

    /** @brief None 0: interrupt disabled 1: interrupt enabled */
    using GPDMA_C5CR_HTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C5CR_HTIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C5CR_HTIE_B_0x1 = 1;

    /** @brief None 0: interrupt disabled 1: interrupt enabled */
    using GPDMA_C5CR_DTEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C5CR_DTEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C5CR_DTEIE_B_0x1 = 1;

    /** @brief None 0: interrupt disabled 1: interrupt enabled */
    using GPDMA_C5CR_ULEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C5CR_ULEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C5CR_ULEIE_B_0x1 = 1;

    /** @brief None 0: interrupt disabled 1: interrupt enabled */
    using GPDMA_C5CR_USEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C5CR_USEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C5CR_USEIE_B_0x1 = 1;

    /** @brief None 0: interrupt disabled 1: interrupt enabled */
    using GPDMA_C5CR_SUSPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C5CR_SUSPIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C5CR_SUSPIE_B_0x1 = 1;

    /** @brief None 0: interrupt disabled 1: interrupt enabled */
    using GPDMA_C5CR_TOIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C5CR_TOIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C5CR_TOIE_B_0x1 = 1;

    /** @brief First the (possible 1D/repeated) block transfer is executed as defined by the current internal register file until GPDMA_C5BR1.BNDT[15:0] = 0 and GPDMA_C5BR1.BRC[10:0] = 0. Secondly the next linked-list data structure is conditionally uploaded from memory as defined by GPDMA_C5LLR. Then channel execution is completed. 0: channel executed for the full linked-list and completed at the end of the last LLI (GPDMA_C5LLR = 0). The 16 low-significant bits of the link address are null (LA[15:0] = 0) and all the update bits are null (UT1 = UB1 = UT2 = USA = UDA = ULL = 0 and UT3 = UB2 = 0). Then GPDMA_C5BR1.BNDT[15:0] = 0 and GPDMA_C5BR1.BRC[10:0] = 0. 1: channel executed once for the current LLI Note: This bit must be written when EN = 0. This bit is read-only when EN = 1. */
    using GPDMA_C5CR_LSM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: channel executed for the full linked-list and completed at the end of the last LLI (GPDMA_C5LLR = 0). The 16 low-significant bits of the link address are null (LA[15:0] = 0) and all the update bits are null (UT1 = UB1 = UT2 = USA = UDA = ULL = 0 and UT3 = UB2 = 0). Then GPDMA_C5BR1.BNDT[15:0] = 0 and GPDMA_C5BR1.BRC[10:0] = 0. (value: 0)
     *          - B_0x1: channel executed once for the current LLI (value: 1)
     */
        /** @brief channel executed for the full linked-list and completed at the end of the last LLI (GPDMA_C5LLR = 0). The 16 low-significant bits of the link address are null (LA[15:0] = 0) and all the update bits are null (UT1 = UB1 = UT2 = USA = UDA = ULL = 0 and UT3 = UB2 = 0). Then GPDMA_C5BR1.BNDT[15:0] = 0 and GPDMA_C5BR1.BRC[10:0] = 0. */
    constexpr std::uint32_t GPDMA_C5CR_LSM_B_0x0 = 0;
        /** @brief channel executed once for the current LLI */
    constexpr std::uint32_t GPDMA_C5CR_LSM_B_0x1 = 1;

    /** @brief This bit is used to allocate the master port for the update of the GPDMA linked-list registers from the memory. 0: port 0 (AHB) allocated 1: port 1 (AHB) allocated Note: This bit must be written when EN = 0. This bit is read-only when EN = 1. */
    using GPDMA_C5CR_LAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C5CR_LAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C5CR_LAP_B_0x1 = 1;

    /** @brief None 00: low priority, low weight 01: low priority, mid weight 10: low priority, high weight 11: high priority Note: This bit must be written when EN = 0. This bit is read-only when EN = 1. */
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
    /** @brief None 00: byte 01: half-word (2 bytes) 10: word (4 bytes) 11: user setting error reported and no transfer issued Note: Setting a 8-byte data width causes a user setting error to be reported and no transfer is issued. +: A source block size must be a multiple of the source data width (GPDMA_C5BR1.BNDT[2:0] versus SDW_LOG2[1:0]). Otherwise, a user setting error is reported and no transfer is issued. +: A source burst transfer must have an aligned address with its data width (start address GPDMA_CxSAR[2:0] versus SDW_LOG2[1:0]). Otherwise, a user setting error is reported and none transfer is issued. */
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

    /** @brief The source address, pointed by GPDMA_CxSAR, is kept constant after a burst beat/single transfer or is incremented by the offset value corresponding to a contiguous data after a burst beat/single transfer. 0: fixed burst 1: contiguously incremented burst */
    using GPDMA_C5TR1_SINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fixed burst (value: 0)
     *          - B_0x1: contiguously incremented burst (value: 1)
     */
        /** @brief fixed burst */
    constexpr std::uint32_t GPDMA_C5TR1_SINC_B_0x0 = 0;
        /** @brief contiguously incremented burst */
    constexpr std::uint32_t GPDMA_C5TR1_SINC_B_0x1 = 1;

    /** @brief The burst length unit is one data named beat within a burst. If SBL_1[5:0] = 0, the burst can be named as single. Each data/beat has a width defined by the destination data width SDW_LOG2[1:0]. Note: If a burst transfer crossed a 1-Kbyte address boundary on a AHB transfer, the GPDMA modifies and shortens the programmed burst into singles or bursts of lower length, to be compliant with the AHB protocol. +: If a burst transfer is of length greater than the FIFO size of the channel 5, the GPDMA modifies and shortens the programmed burst into singles or bursts of lower length, to be compliant with the FIFO size. Transfer performance is lower, with GPDMA re-arbitration between effective and lower singles/bursts, but the data integrity is guaranteed. */
    using GPDMA_C5TR1_SBL_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief If DDW_LOG2[1:0] = SDW_LOG2[1:0]: if the data width of a burst destination transfer is equal to the data width of a burst source transfer, these bits are ignored. */
    using GPDMA_C5TR1_PAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0_COND1: COND1 is [PAM_1] source data is transferred as right aligned, padded with 0s up to the destination data width (value: 0)
     *          - B_0x1_COND1: COND1 is [PAM_1] source data is transferred as right aligned, sign extended up to the destination data width (value: 1)
     *          - B_0x2_COND1: COND1 is [PAM_1] successive source data are FIFO queued and packed at the destination data width, in a left (LSB) to right (MSB) order (named little endian), before a destination transfer (value: 2)
     *          - B_0x3_COND1: COND1 is [PAM_1] successive source data are FIFO queued and packed at the destination data width, in a left (LSB) to right (MSB) order (named little endian), before a destination transfer (value: 3)
     */
        /** @brief COND1 is [PAM_1] source data is transferred as right aligned, padded with 0s up to the destination data width */
    constexpr std::uint32_t GPDMA_C5TR1_PAM_B_0x0_COND1 = 0;
        /** @brief COND1 is [PAM_1] source data is transferred as right aligned, sign extended up to the destination data width */
    constexpr std::uint32_t GPDMA_C5TR1_PAM_B_0x1_COND1 = 1;
        /** @brief COND1 is [PAM_1] successive source data are FIFO queued and packed at the destination data width, in a left (LSB) to right (MSB) order (named little endian), before a destination transfer */
    constexpr std::uint32_t GPDMA_C5TR1_PAM_B_0x2_COND1 = 2;
        /** @brief COND1 is [PAM_1] successive source data are FIFO queued and packed at the destination data width, in a left (LSB) to right (MSB) order (named little endian), before a destination transfer */
    constexpr std::uint32_t GPDMA_C5TR1_PAM_B_0x3_COND1 = 3;

    /** @brief If the source data width is shorter than a word, this bit is ignored. If the source data width is a word: 0: no byte-based exchange within the unaligned half-word of each source word 1: the two consecutive bytes within the unaligned half-word of each source word are exchanged. */
    using GPDMA_C5TR1_SBx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no byte-based exchange within the unaligned half-word of each source word (value: 0)
     *          - B_0x1: the two consecutive bytes within the unaligned half-word of each source word are exchanged. (value: 1)
     */
        /** @brief no byte-based exchange within the unaligned half-word of each source word */
    constexpr std::uint32_t GPDMA_C5TR1_SBx_B_0x0 = 0;
        /** @brief the two consecutive bytes within the unaligned half-word of each source word are exchanged. */
    constexpr std::uint32_t GPDMA_C5TR1_SBx_B_0x1 = 1;

    /** @brief This bit is used to allocate the master port for the source transfer 0: port 0 (AHB) allocated 1: port 1 (AHB) allocated Note: This bit must be written when EN = 0. This bit is read-only when EN = 1. */
    using GPDMA_C5TR1_SAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C5TR1_SAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C5TR1_SAP_B_0x1 = 1;

    /** @brief If GPDMA_SECCFGR.SEC5 = 1 and the access is secure: This is a secure register bit. This bit can only be read by a secure software. This bit must be written by a secure software when GPDMA_SECCFGR.SEC5 = 1. A secure write is ignored when GPDMA_SECCFGR.SEC5 = 0. When GPDMA_SECCFGR.SEC5 is deasserted, this SSEC bit is also deasserted by hardware (on a secure reconfiguration of the channel as non-secure), and the GPDMA transfer from the source is non-secure. 0: GPDMA transfer non-secure 1: GPDMA transfer secure */
    using GPDMA_C5TR1_SSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPDMA transfer non-secure (value: 0)
     *          - B_0x1: GPDMA transfer secure (value: 1)
     */
        /** @brief GPDMA transfer non-secure */
    constexpr std::uint32_t GPDMA_C5TR1_SSEC_B_0x0 = 0;
        /** @brief GPDMA transfer secure */
    constexpr std::uint32_t GPDMA_C5TR1_SSEC_B_0x1 = 1;

    /** @brief None 00: byte 01: half-word (2 bytes) 10: word (4 bytes) 11: user setting error reported and no transfer issued Note: Setting a 8-byte data width causes a user setting error to be reported and none transfer is issued. +: A destination burst transfer must have an aligned address with its data width (start address GPDMA_CxDAR[2:0] and address offset GPDMA_CxTR3.DAO[2:0], versus DDW_LOG2[1:0]). Otherwise a user setting error is reported and no transfer is issued. */
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

    /** @brief The destination address, pointed by GPDMA_CxDAR, is kept constant after a burst beat/single transfer, or is incremented by the offset value corresponding to a contiguous data after a burst beat/single transfer. 0: fixed burst 1: contiguously incremented burst */
    using GPDMA_C5TR1_DINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fixed burst (value: 0)
     *          - B_0x1: contiguously incremented burst (value: 1)
     */
        /** @brief fixed burst */
    constexpr std::uint32_t GPDMA_C5TR1_DINC_B_0x0 = 0;
        /** @brief contiguously incremented burst */
    constexpr std::uint32_t GPDMA_C5TR1_DINC_B_0x1 = 1;

    /** @brief The burst length unit is one data named beat within a burst. If DBL_1[5:0] = 0, the burst can be named as single. Each data/beat has a width defined by the destination data width DDW_LOG2[1:0]. Note: If a burst transfer crossed a 1-Kbyte address boundary on a AHB transfer, the GPDMA modifies and shortens the programmed burst into singles or bursts of lower length, to be compliant with the AHB protocol. +: If a burst transfer is of length greater than the FIFO size of the channel 5, the GPDMA modifies and shortens the programmed burst into singles or bursts of lower length, to be compliant with the FIFO size. Transfer performance is lower, with GPDMA re-arbitration between effective and lower singles/bursts, but the data integrity is guaranteed. */
    using GPDMA_C5TR1_DBL_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief If the destination data size is a byte, this bit is ignored. If the destination data size is not a byte: 0: no byte-based exchange within half-word 1: the two consecutive (post PAM) bytes are exchanged in each destination half-word. */
    using GPDMA_C5TR1_DBx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no byte-based exchange within half-word (value: 0)
     *          - B_0x1: the two consecutive (post PAM) bytes are exchanged in each destination half-word. (value: 1)
     */
        /** @brief no byte-based exchange within half-word */
    constexpr std::uint32_t GPDMA_C5TR1_DBx_B_0x0 = 0;
        /** @brief the two consecutive (post PAM) bytes are exchanged in each destination half-word. */
    constexpr std::uint32_t GPDMA_C5TR1_DBx_B_0x1 = 1;

    /** @brief If the destination data size is shorter than a word, this bit is ignored. If the destination data size is a word: 0: no halfword-based exchanged within word 1: the two consecutive (post PAM) half-words are exchanged in each destination word. */
    using GPDMA_C5TR1_DHx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no halfword-based exchanged within word (value: 0)
     *          - B_0x1: the two consecutive (post PAM) half-words are exchanged in each destination word. (value: 1)
     */
        /** @brief no halfword-based exchanged within word */
    constexpr std::uint32_t GPDMA_C5TR1_DHx_B_0x0 = 0;
        /** @brief the two consecutive (post PAM) half-words are exchanged in each destination word. */
    constexpr std::uint32_t GPDMA_C5TR1_DHx_B_0x1 = 1;

    /** @brief This bit is used to allocate the master port for the destination transfer 0: port 0 (AHB) allocated 1: port 1 (AHB) allocated Note: This bit must be written when EN = 0. This bit is read-only when EN = 1. */
    using GPDMA_C5TR1_DAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C5TR1_DAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C5TR1_DAP_B_0x1 = 1;

    /** @brief If GPDMA_SECCFGR.SEC5 = 1 and the access is secure: This is a secure register bit. This bit can only be read by a secure software. This bit must be written by a secure software when GPDMA_SECCFGR.SEC5 = 1. A secure write is ignored when GPDMA_SECCFGR.SEC5 = 0. When GPDMA_SECCFGR.SEC5 is deasserted, this DSEC bit is also deasserted by hardware (on a secure reconfiguration of the channel as non-secure), and the GPDMA transfer to the destination is non-secure. 0: GPDMA transfer non-secure 1: GPDMA transfer secure */
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
    /** @brief These bits are ignored if channel 5 is activated (GPDMA_C5CR.EN asserted) with SWREQ=1 (software request for a memory-to-memory transfer). Else, the selected hardware request is internally taken into account as per less than xe4 [GPDMA_requests]/>. The user must not assign a same input hardware request (same REQSEL[6:0] value) to different active GPDMA channels (GPDMA_C5CR.EN = 1 and GPDMA_C5TR2.SWREQ = 0 for these channels). GPDMA is not intended to hardware support the case of simultaneous enabled channels incorrectly configured with a same hardware peripheral request signal, and there is no user setting error reporting. */
    using GPDMA_C5TR2_REQSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This bit is internally taken into account when GPDMA_C5CR.EN is asserted. 0: no software request. The selected hardware request REQSEL[6:0] is taken into account. 1: software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[6:0] is ignored. */
    using GPDMA_C5TR2_SWREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no software request. The selected hardware request REQSEL[6:0] is taken into account. (value: 0)
     *          - B_0x1: software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[6:0] is ignored. (value: 1)
     */
        /** @brief no software request. The selected hardware request REQSEL[6:0] is taken into account. */
    constexpr std::uint32_t GPDMA_C5TR2_SWREQ_B_0x0 = 0;
        /** @brief software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[6:0] is ignored. */
    constexpr std::uint32_t GPDMA_C5TR2_SWREQ_B_0x1 = 1;

    /** @brief This bit is ignored if channel 5 is activated (GPDMA_C5CR.EN asserted) with SWREQ = 1 (software request for a memory-to-memory transfer). Else: 0: selected hardware request driven by a source peripheral (request signal taken into account by the GPDMA transfer scheduler over the source/read port) 1: selected hardware request driven by a destination peripheral (request signal taken into account by the GPDMA transfer scheduler over the destination/write port) Note: If the channel 5 is activated (GPDMA_C5CR.EN is asserted) with SWREQ = 0 and PFREQ = 1 (peripheral hardware request with peripheral flow-control mode), any software assertion to this DREQ bit is ignored: in peripheral flow-control mode, only a peripheral-to-memory transfer is supported. */
    using GPDMA_C5TR2_DREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: selected hardware request driven by a source peripheral (request signal taken into account by the GPDMA transfer scheduler over the source/read port) (value: 0)
     *          - B_0x1: selected hardware request driven by a destination peripheral (request signal taken into account by the GPDMA transfer scheduler over the destination/write port) (value: 1)
     */
        /** @brief selected hardware request driven by a source peripheral (request signal taken into account by the GPDMA transfer scheduler over the source/read port) */
    constexpr std::uint32_t GPDMA_C5TR2_DREQ_B_0x0 = 0;
        /** @brief selected hardware request driven by a destination peripheral (request signal taken into account by the GPDMA transfer scheduler over the destination/write port) */
    constexpr std::uint32_t GPDMA_C5TR2_DREQ_B_0x1 = 1;

    /** @brief If the channel 5 is activated (GPDMA_C5CR.EN asserted) with SWREQ = 1 (software request for a memory-to-memory transfer), this bit is ignored. Else: 0: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a burst level. 1: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see less than xe4 [GPDMA_requests]/>). */
    using GPDMA_C5TR2_BREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a burst level. (value: 0)
     *          - B_0x1: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see less than xe4 [GPDMA_requests]/>). (value: 1)
     */
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a burst level. */
    constexpr std::uint32_t GPDMA_C5TR2_BREQ_B_0x0 = 0;
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see less than xe4 [GPDMA_requests]/>). */
    constexpr std::uint32_t GPDMA_C5TR2_BREQ_B_0x1 = 1;

    /** @brief Caution: If a given channel 5 is not implemented with this feature, this bit is reserved and PFREQ is not present (see less than xe1 [GPDMA_channels]/> for the list of the implemented channels with this feature). */
    using GPDMA_C5TR2_PFREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol in GPDMA control mode. The GPDMA is programmed with GPDMA_C5TR1.BNDT[15:0] and this is internally used by the hardware for the block transfer completion. (value: 0)
     *          - B_0x1: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol in peripheral control mode. The GPDMA block transfer can be early completed by the peripheral itself (see less than xe2 [GPDMA_channels_peripheral]/> for more details). (value: 1)
     */
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol in GPDMA control mode. The GPDMA is programmed with GPDMA_C5TR1.BNDT[15:0] and this is internally used by the hardware for the block transfer completion. */
    constexpr std::uint32_t GPDMA_C5TR2_PFREQ_B_0x0 = 0;
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol in peripheral control mode. The GPDMA block transfer can be early completed by the peripheral itself (see less than xe2 [GPDMA_channels_peripheral]/> for more details). */
    constexpr std::uint32_t GPDMA_C5TR2_PFREQ_B_0x1 = 1;

    /** @brief These bits define the transfer granularity for its conditioning by the trigger. If the channel 5 is enabled (GPDMA_C5CR.EN asserted) with TRIGPOL[1:0] = 00 or 11, these TRIGM[1:0] bits are ignored. Else, a GPDMA transfer is conditioned by at least one trigger hit: 00: at block level: the first burst read of each block transfer is conditioned by one hit trigger (channel 5 = 12 to 15, for each block if a 2D/repeated block is configured with GPDMA_C5BR1.BRC[10:0] is not equal to 0). 10: at link level: a LLI link transfer is conditioned by one hit trigger. The LLI data transfer (if any) is not conditioned. 11: at programmed burst level: If SWREQ = 1, each programmed burst read is conditioned by one hit trigger. If SWREQ = 0, each programmed burst that is requested by the selected peripheral, is conditioned by one hit trigger. - If the peripheral is programmed as a source (DREQ = 0) of the LLI data transfer, each programmed burst read is conditioned. - If the peripheral is programmed as a destination (DREQ = 1) of the LLI data transfer, each programmed burst write is conditioned. The first memory burst read of a (possibly 2D/repeated) block, also named as the first ready FIFO-based source burst, is gated by the occurrence of both the hardware request and the first trigger hit.01: channel 5 = 0 to , same as 00; channel 5 , at 2D/repeated block level. The first burst read of a 2D/repeated block transfer is conditioned by one hit trigger. The GPDMA monitoring of a trigger for channel 5 is started when the channel is enabled/loaded with a new active trigger configuration: rising or falling edge on a selected trigger (TRIGPOL[1:0] = 01 or respectively TRIGPOL[1:0]=10). The monitoring of this trigger is kept active during the triggered and uncompleted (data or link) transfer; and if a new trigger is detected then, this hit is internally memorized to grant the next transfer, as long as the defined rising or falling edge is not modified, and the TRIGSEL[5:0] is not modified, and the channel is enabled. Transferring a next LLIn+1 that updates the GPDMA_C5TR2 with a new value for any of TRIGSEL[5:0] or TRIGPOL[1:0], resets the monitoring, trashing the memorized hit of the formerly defined LLIn trigger. After a first new trigger hitn+1 is memorized, if another second trigger hitn+2 is detected and if the hitn triggered transfer is still not completed, hitn+2 is lost and not memorized.memorized. A trigger overrun flag is reported (GPDMA_C5SR.TOF=1), and an interrupt is generated if enabled (GPDMA_C5CR.TOIE = 1). The channel is not automatically disabled by hardware due to a trigger overrun. Note: When the source block size is not a multiple of the source burst size and is a multiple of the source data width, then the last programmed source burst is not completed and is internally shorten to match the block size. In this case, if TRIGM[1:0] = 11 and (SWREQ = 1 or (SWREQ = 0 and DREQ = 0)), the shortened burst transfer (by singles or/and by bursts of lower length) is conditioned once by the trigger. +: When the programmed destination burst is internally shortened by singles or/and by bursts of lower length (versus FIFO size, versus block size, 1-Kbyte boundary address crossing): if the trigger is conditioning the programmed destination burst (if TRIGM[1:0] = 11 and SWREQ = 0 and DREQ = 1), this shortened destination burst transfer is conditioned once by the trigger. */
    using GPDMA_C5TR2_TRIGM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief These bits select the trigger event input of the GPDMA transfer (as per less than xe3 [GPDMA_triggers]/>), with anactive trigger event if TRIGPOL[1:0] is not equal to 00. */
    using GPDMA_C5TR2_TRIGSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief These bits define the polarity of the selected trigger event input defined by TRIGSEL[5:0]. 00: no trigger (masked trigger event) 01: trigger on the rising edge 10: trigger on the falling edge 11: same as 00 */
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

    /** @brief These bits define the transfer granularity for the transfer complete and half transfer complete events generation. 00: at block level (when GPDMA_C5BR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. 01: channel 5 (0 to ), same as 00, channel 5 , at 2D/repeated block level (when GPDMA_C5BR1.BRC[10:0] = 0 and GPDMA_C5BR1.BNDT[15:0] = 0). The complete (and the half) transfer event is generated at the end (respectively half of the end) of the 2D/repeated block. 10: at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer. The LLI data transfer is a block transfer or a 2D/repeated block transfer for channel 5 , if any data transfer. 11: at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address GPDMA_C5LLR.LA[15:2] to zero and clears all the GPDMA_C5LLR update bits (UT1, UT2, UB1, USA, UDA and ULL, plus UT3 and UB2). If the channel transfer is continuous/infinite, no event is generated. Note: If the initial LLI0 data transfer is null/void (directly programmed by the internal register file with GPDMA_C5BR1.BNDT[15:0] = 0), then neither the complete transfer event nor the half transfer event is generated. +: If the initial LLI0 data transfer is null/void (directly programmed by the internal register file with GPDMA_C5BR1.BNDT[15:0] = 0), then neither the complete transfer event nor the half transfer event is generated. +: If the initial LLI0 data transfer is null/void (directly programmed by the internal register file with GPDMA_C5BR1.BNDT[15:0] = 0), then the half transfer event is not generated, and the transfer complete event is generated when is completed the loading of the LLI1. */
    using GPDMA_C5TR2_TCEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: at block level (when GPDMA_C5BR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. (value: 0)
     *          - B_0x1: channel 5 (0 to ), same as 00, channel 5 , at 2D/repeated block level (when GPDMA_C5BR1.BRC[10:0] = 0 and GPDMA_C5BR1.BNDT[15:0] = 0). The complete (and the half) transfer event is generated at the end (respectively half of the end) of the 2D/repeated block. (value: 1)
     *          - B_0x2: at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer. The LLI data transfer is a block transfer or a 2D/repeated block transfer for channel 5 , if any data transfer. (value: 2)
     *          - B_0x3: at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address GPDMA_C5LLR.LA[15:2] to zero and clears all the GPDMA_C5LLR update bits (UT1, UT2, UB1, USA, UDA and ULL, plus UT3 and UB2). If the channel transfer is continuous/infinite, no event is generated. (value: 3)
     */
        /** @brief at block level (when GPDMA_C5BR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. */
    constexpr std::uint32_t GPDMA_C5TR2_TCEM_B_0x0 = 0;
        /** @brief channel 5 (0 to ), same as 00, channel 5 , at 2D/repeated block level (when GPDMA_C5BR1.BRC[10:0] = 0 and GPDMA_C5BR1.BNDT[15:0] = 0). The complete (and the half) transfer event is generated at the end (respectively half of the end) of the 2D/repeated block. */
    constexpr std::uint32_t GPDMA_C5TR2_TCEM_B_0x1 = 1;
        /** @brief at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer. The LLI data transfer is a block transfer or a 2D/repeated block transfer for channel 5 , if any data transfer. */
    constexpr std::uint32_t GPDMA_C5TR2_TCEM_B_0x2 = 2;
        /** @brief at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address GPDMA_C5LLR.LA[15:2] to zero and clears all the GPDMA_C5LLR update bits (UT1, UT2, UB1, USA, UDA and ULL, plus UT3 and UB2). If the channel transfer is continuous/infinite, no event is generated. */
    constexpr std::uint32_t GPDMA_C5TR2_TCEM_B_0x3 = 3;

    /** @brief GPDMA channel 5 block register 1 */
    using GPDMA_C5BR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x318, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Block size transferred from the source. When the channel is enabled, this field becomes read-only and is decremented, indicating the remaining number of data items in the current source block to be transferred. BNDT[15:0] is programmed in number of bytes, maximum source block size is 64 Kbytes -1. Once the last data transfer is completed (BNDT[15:0] = 0): - if GPDMA_C5LLR.UB1 = 1, this field is updated by the LLI in the memory. - if GPDMA_C5LLR.UB1 = 0 and if there is at least one not null Uxx update bit, this field is internally restored to the programmed value. - if all GPDMA_C5LLR.Uxx = 0 and if GPDMA_C5LLR.LA[15:0] is not equal to 0, this field is internally restored to the programmed value (infinite/continuous last LLI). - if GPDMA_C5LLR = 0, this field is kept as zero following the last LLI data transfer. Note: A non-null source block size must be a multiple of the source data width (BNDT[2:0] versus GPDMA_C5TR1.SDW_LOG2[1:0]). Else a user setting error is reported and no transfer is issued. +: When configured in packing mode (GPDMA_C5TR1.PAM[1] = 1 and destination data width different from source data width), a non-null source block size must be a multiple of the destination data width (BNDT[2:0] versus GPDMA_C5TR1.DDW_LOG2[1:0]). Else a user setting error is reported and no transfer is issued. */
    using GPDMA_C5BR1_BNDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 5 source address register */
    using GPDMA_C5SAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x31C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This field is the pointer to the address from which the next data is read. During the channel activity, depending on the source addressing mode (GPDMA_C5TR1.SINC), this field is kept fixed or incremented by the data width (GPDMA_C5TR1.SDW_LOG2[1:0]) after each burst source data, reflecting the next address from which data is read. During the channel activity, this address is updated after each completed source burst, consequently to: - the programmed source burst; either in fixed addressing mode or in contiguous-data incremented mode. If contiguously incremented (GPDMA_C5TR1.SINC = 1), then the additional address offset value is the programmed burst size, as defined by GPDMA_C5TR1.SBL_1[5:0] and GPDMA_C5TR1.SDW_LOG2[21:0] - the additional source incremented/decremented offset value as programmed by GPDMA_C5BR1.SDEC and GPDMA_CxTR3.SAO[12:0]. - once/if completed source block transfer, for a channel 5 with 2D addressing capability (x = 12 to 15). additional block repeat source incremented/decremented offset value as programmed by GPDMA_C5BR1.BRSDEC and GPDMA_CxBR2.BRSAO[15:0] In linked-list mode, after a LLI data transfer is completed, this register is automatically updated by GPDMA from the memory, provided the LLI is set with GPDMA_C5LLR.USA = 1. Note: A source address must be aligned with the programmed data width of a source burst (SA[2:0] versus GPDMA_C5TR1.SDW_LOG2[1:0]). Else, a user setting error is reported and no transfer is issued. +: When the source block size is not a multiple of the source burst size and is a multiple of the source data width, the last programmed source burst is not completed and is internally shorten to match the block size. In this case, the additional GPDMA_CxTR3.SAO[12:0] is not applied. */
    using GPDMA_C5SAR_SA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 5 destination address register */
    using GPDMA_C5DAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x320, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This field is the pointer to the address from which the next data is written. During the channel activity, depending on the destination addressing mode (GPDMA_C5TR1.DINC), this field is kept fixed or incremented by the data width (GPDMA_C5TR1.DDW_LOG2[21:0]) after each burst destination data, reflecting the next address from which data is written. During the channel activity, this address is updated after each completed destination burst, consequently to: - the programmed destination burst; either in fixed addressing mode or in contiguous-data incremented mode. If contiguously incremented (GPDMA_C5TR1.DINC = 1), then the additional address offset value is the programmed burst size, as defined by GPDMA_C5TR1.DBL_1[5:0] and GPDMA_C5TR1.DDW_LOG2[1:0] - the additional destination incremented/decremented offset value as programmed by GPDMA_C5BR1.DDEC and GPDMA_CxTR3.DAO[12:0]. - once/if completed destination block transfer, for a channel 5 with 2D addressing capability (x=12to15), the additional block repeat destination incremented/decremented offset value as programmed by GPDMA_C5BR1.BRDDEC and GPDMA_CxBR2.BRDAO[15:0] In linked-list mode, after a LLI data transfer is completed, this register is automatically updated by the GPDMA from the memory, provided the LLI is set with GPDMA_C5LLR.UDA = 1. Note: A destination address must be aligned with the programmed data width of a destination burst (DA[2:0] versus GPDMA_C5TR1.DDW_LOG2[1:0]). Else, a user setting error is reported and no transfer is issued. */
    using GPDMA_C5DAR_DA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 5 linked-list address register */
    using GPDMA_C5LLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief If UT1 = UT2 = UB1 = USA = UDA = ULL = 0 and if LA[15:20] = 0, the current LLI is the last one. The channel transfer is completed without any update of the linked-list GPDMA register file. Else, this field is the pointer to the memory address offset from which the next linked-list data structure is automatically fetched from, once the data transfer is completed, in order to conditionally update the linked-list GPDMA internal register file (GPDMA_C5TR1, GPDMA_C5TR2, GPDMA_C5BR1, GPDMA_CxSAR, GPDMA_CxDAR and GPDMA_C5LLR). Note: The user must program the pointer to be 32-bit aligned. The two low-significant bits are write ignored. */
    using GPDMA_C5LLR_LA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This bit is used to control the update of GPDMA_C5LLR from the memory during the link transfer. 0: no GPDMA_C5LLR update 1: GPDMA_C5LLR update */
    using GPDMA_C5LLR_ULL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_C5LLR update (value: 0)
     *          - B_0x1: GPDMA_C5LLR update (value: 1)
     */
        /** @brief no GPDMA_C5LLR update */
    constexpr std::uint32_t GPDMA_C5LLR_ULL_B_0x0 = 0;
        /** @brief GPDMA_C5LLR update */
    constexpr std::uint32_t GPDMA_C5LLR_ULL_B_0x1 = 1;

    /** @brief This bit is used to control the update of GPDMA_CxDAR from the memory during the link transfer. 0: no GPDMA_CxDAR update 1: GPDMA_CxDAR update */
    using GPDMA_C5LLR_UDA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxDAR update (value: 0)
     *          - B_0x1: GPDMA_CxDAR update (value: 1)
     */
        /** @brief no GPDMA_CxDAR update */
    constexpr std::uint32_t GPDMA_C5LLR_UDA_B_0x0 = 0;
        /** @brief GPDMA_CxDAR update */
    constexpr std::uint32_t GPDMA_C5LLR_UDA_B_0x1 = 1;

    /** @brief This bit controls the update of GPDMA_CxSAR from the memory during the link transfer. 0: no GPDMA_CxSAR update 1: GPDMA_CxSAR update */
    using GPDMA_C5LLR_USA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxSAR update (value: 0)
     *          - B_0x1: GPDMA_CxSAR update (value: 1)
     */
        /** @brief no GPDMA_CxSAR update */
    constexpr std::uint32_t GPDMA_C5LLR_USA_B_0x0 = 0;
        /** @brief GPDMA_CxSAR update */
    constexpr std::uint32_t GPDMA_C5LLR_USA_B_0x1 = 1;

    /** @brief This bit controls the update of GPDMA_C5BR1 from the memory during the link transfer. If UB1 = 0 and if GPDMA_C5LLR is not equal to 0, the linked-list is not completed. GPDMA_C5BR1.BNDT[15:0] is then restored to the programmed value after data transfer is completed and before the link transfer. 0: no GPDMA_C5BR1 update from memory (GPDMA_C5BR1.BNDT[15:0] restored if any link transfer) 1: GPDMA_C5BR1 update */
    using GPDMA_C5LLR_UB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_C5BR1 update from memory (GPDMA_C5BR1.BNDT[15:0] restored if any link transfer) (value: 0)
     *          - B_0x1: GPDMA_C5BR1 update (value: 1)
     */
        /** @brief no GPDMA_C5BR1 update from memory (GPDMA_C5BR1.BNDT[15:0] restored if any link transfer) */
    constexpr std::uint32_t GPDMA_C5LLR_UB1_B_0x0 = 0;
        /** @brief GPDMA_C5BR1 update */
    constexpr std::uint32_t GPDMA_C5LLR_UB1_B_0x1 = 1;

    /** @brief This bit controls the update of GPDMA_C5TR2 from the memory during the link transfer. 0: no GPDMA_C5TR2 update 1: GPDMA_C5TR2 update */
    using GPDMA_C5LLR_UT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_C5TR2 update (value: 0)
     *          - B_0x1: GPDMA_C5TR2 update (value: 1)
     */
        /** @brief no GPDMA_C5TR2 update */
    constexpr std::uint32_t GPDMA_C5LLR_UT2_B_0x0 = 0;
        /** @brief GPDMA_C5TR2 update */
    constexpr std::uint32_t GPDMA_C5LLR_UT2_B_0x1 = 1;

    /** @brief This bit controls the update of GPDMA_C5TR1 from the memory during the link transfer. 0: no GPDMA_C5TR1 update 1: GPDMA_C5TR1 update */
    using GPDMA_C5LLR_UT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_C5TR1 update (value: 0)
     *          - B_0x1: GPDMA_C5TR1 update (value: 1)
     */
        /** @brief no GPDMA_C5TR1 update */
    constexpr std::uint32_t GPDMA_C5LLR_UT1_B_0x0 = 0;
        /** @brief GPDMA_C5TR1 update */
    constexpr std::uint32_t GPDMA_C5LLR_UT1_B_0x1 = 1;

    /** @brief GPDMA channel 6 linked-list base address register */
    using GPDMA_C6LBAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x350, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief None */
    using GPDMA_C6LBAR_LBA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 6 flag clear register */
    using GPDMA_C6FCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x35C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief None 0: no effect 1: corresponding TCF flag cleared */
    using GPDMA_C6FCR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding TCF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C6FCR_TCF_B_0x0 = 0;
        /** @brief corresponding TCF flag cleared */
    constexpr std::uint32_t GPDMA_C6FCR_TCF_B_0x1 = 1;

    /** @brief None 0: no effect 1: corresponding HTF flag cleared */
    using GPDMA_C6FCR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding HTF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C6FCR_HTF_B_0x0 = 0;
        /** @brief corresponding HTF flag cleared */
    constexpr std::uint32_t GPDMA_C6FCR_HTF_B_0x1 = 1;

    /** @brief None 0: no effect 1: corresponding DTEF flag cleared */
    using GPDMA_C6FCR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding DTEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C6FCR_DTEF_B_0x0 = 0;
        /** @brief corresponding DTEF flag cleared */
    constexpr std::uint32_t GPDMA_C6FCR_DTEF_B_0x1 = 1;

    /** @brief None 0: no effect 1: corresponding ULEF flag cleared */
    using GPDMA_C6FCR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding ULEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C6FCR_ULEF_B_0x0 = 0;
        /** @brief corresponding ULEF flag cleared */
    constexpr std::uint32_t GPDMA_C6FCR_ULEF_B_0x1 = 1;

    /** @brief None 0: no effect 1: corresponding USEF flag cleared */
    using GPDMA_C6FCR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding USEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C6FCR_USEF_B_0x0 = 0;
        /** @brief corresponding USEF flag cleared */
    constexpr std::uint32_t GPDMA_C6FCR_USEF_B_0x1 = 1;

    /** @brief None 0: no effect 1: corresponding SUSPF flag cleared */
    using GPDMA_C6FCR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding SUSPF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C6FCR_SUSPF_B_0x0 = 0;
        /** @brief corresponding SUSPF flag cleared */
    constexpr std::uint32_t GPDMA_C6FCR_SUSPF_B_0x1 = 1;

    /** @brief None 0: no effect 1: corresponding TOF flag cleared */
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
    /** @brief This idle flag is deasserted by hardware when the channel is enabled (GPDMA_C6CR.EN = 1) with a valid channel configuration (no USEF to be immediately reported). This idle flag is asserted after hard reset or by hardware when the channel is back in idle state (in suspended or disabled state). 0: channel not in idle state 1: channel in idle state */
    using GPDMA_C6SR_IDLEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: channel not in idle state (value: 0)
     *          - B_0x1: channel in idle state (value: 1)
     */
        /** @brief channel not in idle state */
    constexpr std::uint32_t GPDMA_C6SR_IDLEF_B_0x0 = 0;
        /** @brief channel in idle state */
    constexpr std::uint32_t GPDMA_C6SR_IDLEF_B_0x1 = 1;

    /** @brief A transfer complete event is either a block transfer complete, a 2D/repeated block transfer complete, or a LLI transfer complete including the upload of the next LLI if any, or the full linked-list completion, depending on the transfer complete event mode (GPDMA_C6TR2.TCEM[1:0]). 0: no transfer complete event 1: a transfer complete event occurred */
    using GPDMA_C6SR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no transfer complete event (value: 0)
     *          - B_0x1: a transfer complete event occurred (value: 1)
     */
        /** @brief no transfer complete event */
    constexpr std::uint32_t GPDMA_C6SR_TCF_B_0x0 = 0;
        /** @brief a transfer complete event occurred */
    constexpr std::uint32_t GPDMA_C6SR_TCF_B_0x1 = 1;

    /** @brief A half transfer event is either a half block transfer or a half 2D/repeated block transfer, depending on the transfer complete event mode (GPDMA_C6TR2.TCEM[1:0]). A half block transfer occurs when half of the bytes of the source block size (rounded up integer of GPDMA_C6BR1.BNDT[15:0]/2) has been transferred to the destination. A half 2D/repeated block transfer occurs when half of the repeated blocks (rounded up integer of (GPDMA_C6BR1.BRC[10:0]+1)/2)) has been transferred to the destination. 0: no half transfer event 1: a half transfer event occurred */
    using GPDMA_C6SR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no half transfer event (value: 0)
     *          - B_0x1: a half transfer event occurred (value: 1)
     */
        /** @brief no half transfer event */
    constexpr std::uint32_t GPDMA_C6SR_HTF_B_0x0 = 0;
        /** @brief a half transfer event occurred */
    constexpr std::uint32_t GPDMA_C6SR_HTF_B_0x1 = 1;

    /** @brief None 0: no data transfer error event 1: a master bus error event occurred on a data transfer */
    using GPDMA_C6SR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no data transfer error event (value: 0)
     *          - B_0x1: a master bus error event occurred on a data transfer (value: 1)
     */
        /** @brief no data transfer error event */
    constexpr std::uint32_t GPDMA_C6SR_DTEF_B_0x0 = 0;
        /** @brief a master bus error event occurred on a data transfer */
    constexpr std::uint32_t GPDMA_C6SR_DTEF_B_0x1 = 1;

    /** @brief None 0: no update link transfer error event 1: a master bus error event occurred while updating a linked-list register from memory */
    using GPDMA_C6SR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no update link transfer error event (value: 0)
     *          - B_0x1: a master bus error event occurred while updating a linked-list register from memory (value: 1)
     */
        /** @brief no update link transfer error event */
    constexpr std::uint32_t GPDMA_C6SR_ULEF_B_0x0 = 0;
        /** @brief a master bus error event occurred while updating a linked-list register from memory */
    constexpr std::uint32_t GPDMA_C6SR_ULEF_B_0x1 = 1;

    /** @brief None 0: no user setting error event 1: a user setting error event occurred */
    using GPDMA_C6SR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no user setting error event (value: 0)
     *          - B_0x1: a user setting error event occurred (value: 1)
     */
        /** @brief no user setting error event */
    constexpr std::uint32_t GPDMA_C6SR_USEF_B_0x0 = 0;
        /** @brief a user setting error event occurred */
    constexpr std::uint32_t GPDMA_C6SR_USEF_B_0x1 = 1;

    /** @brief None 0: no completed suspension event 1: a completed suspension event occurred */
    using GPDMA_C6SR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no completed suspension event (value: 0)
     *          - B_0x1: a completed suspension event occurred (value: 1)
     */
        /** @brief no completed suspension event */
    constexpr std::uint32_t GPDMA_C6SR_SUSPF_B_0x0 = 0;
        /** @brief a completed suspension event occurred */
    constexpr std::uint32_t GPDMA_C6SR_SUSPF_B_0x1 = 1;

    /** @brief None 0: no trigger overrun event 1: a trigger overrun event occurred */
    using GPDMA_C6SR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no trigger overrun event (value: 0)
     *          - B_0x1: a trigger overrun event occurred (value: 1)
     */
        /** @brief no trigger overrun event */
    constexpr std::uint32_t GPDMA_C6SR_TOF_B_0x0 = 0;
        /** @brief a trigger overrun event occurred */
    constexpr std::uint32_t GPDMA_C6SR_TOF_B_0x1 = 1;

    /** @brief Number of available write beats in the FIFO, in units of the programmed destination data width (see GPDMA_C6TR1.DDW_LOG2[1:0], in units of bytes, half-words, or words). Note: After having suspended an active transfer, the user may need to read FIFOL[7:0], additionally to GPDMA_C6BR1.BDNT[15:0] and GPDMA_C6BR1.BRC[10:0], to know how many data have been transferred to the destination. Before reading, the user may wait for the transfer to be suspended (GPDMA_C6SR.SUSPF = 1). */
    using GPDMA_C6SR_FIFOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 6 control register */
    using GPDMA_C6CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x364, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Writing 1 into the field RESET (bit 1) causes the hardware to de-assert this bit, whatever is written into this bit 0. Else: this bit is deasserted by hardware when there is a transfer error (master bus error or user setting error) or when there is a channel transfer complete (channel ready to be configured, for example if LSM = 1 at the end of a single execution of the LLI). Else, this bit can be asserted by software. Writing 0 into this EN bit is ignored. 0: write: ignored, read: channel disabled 1: write: enable channel, read: channel enabled */
    using GPDMA_C6CR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write: ignored, read: channel disabled (value: 0)
     *          - B_0x1: write: enable channel, read: channel enabled (value: 1)
     */
        /** @brief write: ignored, read: channel disabled */
    constexpr std::uint32_t GPDMA_C6CR_EN_B_0x0 = 0;
        /** @brief write: enable channel, read: channel enabled */
    constexpr std::uint32_t GPDMA_C6CR_EN_B_0x1 = 1;

    /** @brief This bit is write only. Writing 0 has no impact. Writing 1 implies the reset of the following: the FIFO, the channel internal state, SUSP and EN bits (whatever is written receptively in bit 2 and bit 0). The reset is effective when the channel is in steady state, meaning one of the following: - active channel in suspended state (GPDMA_C6SR.SUSPF = 1 and GPDMA_C6SR.IDLEF=GPDMA_C6CR.EN = 1) - channel in disabled state (GPDMA_C6SR.IDLEF = 1 and GPDMA_C6CR.EN = 0). After writing a RESET, to continue using this channel, the user must explicitly reconfigure the channel including the hardware-modified configuration registers (GPDMA_C6BR1, GPDMA_CxSAR and GPDMA_CxDAR) before enabling again the channel (see the programming sequence in less than xe6 [GPDMA_abort_restart/ID00-1465]/>). 0: no channel reset 1: channel reset */
    using GPDMA_C6CR_RESET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no channel reset (value: 0)
     *          - B_0x1: channel reset (value: 1)
     */
        /** @brief no channel reset */
    constexpr std::uint32_t GPDMA_C6CR_RESET_B_0x0 = 0;
        /** @brief channel reset */
    constexpr std::uint32_t GPDMA_C6CR_RESET_B_0x1 = 1;

    /** @brief Writing 1 into the field RESET (bit 1) causes the hardware to de-assert this bit, whatever is written into this bit 2. Else: Software must write 1 in order to suspend an active channel (channel with an ongoing GPDMA transfer over its master ports). The software must write 0 in order to resume a suspended channel, following the programming sequence detailed in less than xe5 [GPDMA_channel_suspend_and_resume/ID00-1456]/>. 0: write: resume channel, read: channel not suspended 1: write: suspend channel, read: channel suspended. */
    using GPDMA_C6CR_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write: resume channel, read: channel not suspended (value: 0)
     *          - B_0x1: write: suspend channel, read: channel suspended. (value: 1)
     */
        /** @brief write: resume channel, read: channel not suspended */
    constexpr std::uint32_t GPDMA_C6CR_SUSP_B_0x0 = 0;
        /** @brief write: suspend channel, read: channel suspended. */
    constexpr std::uint32_t GPDMA_C6CR_SUSP_B_0x1 = 1;

    /** @brief None 0: interrupt disabled 1: interrupt enabled */
    using GPDMA_C6CR_TCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C6CR_TCIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C6CR_TCIE_B_0x1 = 1;

    /** @brief None 0: interrupt disabled 1: interrupt enabled */
    using GPDMA_C6CR_HTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C6CR_HTIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C6CR_HTIE_B_0x1 = 1;

    /** @brief None 0: interrupt disabled 1: interrupt enabled */
    using GPDMA_C6CR_DTEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C6CR_DTEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C6CR_DTEIE_B_0x1 = 1;

    /** @brief None 0: interrupt disabled 1: interrupt enabled */
    using GPDMA_C6CR_ULEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C6CR_ULEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C6CR_ULEIE_B_0x1 = 1;

    /** @brief None 0: interrupt disabled 1: interrupt enabled */
    using GPDMA_C6CR_USEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C6CR_USEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C6CR_USEIE_B_0x1 = 1;

    /** @brief None 0: interrupt disabled 1: interrupt enabled */
    using GPDMA_C6CR_SUSPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C6CR_SUSPIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C6CR_SUSPIE_B_0x1 = 1;

    /** @brief None 0: interrupt disabled 1: interrupt enabled */
    using GPDMA_C6CR_TOIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C6CR_TOIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C6CR_TOIE_B_0x1 = 1;

    /** @brief First the (possible 1D/repeated) block transfer is executed as defined by the current internal register file until GPDMA_C6BR1.BNDT[15:0] = 0 and GPDMA_C6BR1.BRC[10:0] = 0. Secondly the next linked-list data structure is conditionally uploaded from memory as defined by GPDMA_C6LLR. Then channel execution is completed. 0: channel executed for the full linked-list and completed at the end of the last LLI (GPDMA_C6LLR = 0). The 16 low-significant bits of the link address are null (LA[15:0] = 0) and all the update bits are null (UT1 = UB1 = UT2 = USA = UDA = ULL = 0 and UT3 = UB2 = 0). Then GPDMA_C6BR1.BNDT[15:0] = 0 and GPDMA_C6BR1.BRC[10:0] = 0. 1: channel executed once for the current LLI Note: This bit must be written when EN = 0. This bit is read-only when EN = 1. */
    using GPDMA_C6CR_LSM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: channel executed for the full linked-list and completed at the end of the last LLI (GPDMA_C6LLR = 0). The 16 low-significant bits of the link address are null (LA[15:0] = 0) and all the update bits are null (UT1 = UB1 = UT2 = USA = UDA = ULL = 0 and UT3 = UB2 = 0). Then GPDMA_C6BR1.BNDT[15:0] = 0 and GPDMA_C6BR1.BRC[10:0] = 0. (value: 0)
     *          - B_0x1: channel executed once for the current LLI (value: 1)
     */
        /** @brief channel executed for the full linked-list and completed at the end of the last LLI (GPDMA_C6LLR = 0). The 16 low-significant bits of the link address are null (LA[15:0] = 0) and all the update bits are null (UT1 = UB1 = UT2 = USA = UDA = ULL = 0 and UT3 = UB2 = 0). Then GPDMA_C6BR1.BNDT[15:0] = 0 and GPDMA_C6BR1.BRC[10:0] = 0. */
    constexpr std::uint32_t GPDMA_C6CR_LSM_B_0x0 = 0;
        /** @brief channel executed once for the current LLI */
    constexpr std::uint32_t GPDMA_C6CR_LSM_B_0x1 = 1;

    /** @brief This bit is used to allocate the master port for the update of the GPDMA linked-list registers from the memory. 0: port 0 (AHB) allocated 1: port 1 (AHB) allocated Note: This bit must be written when EN = 0. This bit is read-only when EN = 1. */
    using GPDMA_C6CR_LAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C6CR_LAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C6CR_LAP_B_0x1 = 1;

    /** @brief None 00: low priority, low weight 01: low priority, mid weight 10: low priority, high weight 11: high priority Note: This bit must be written when EN = 0. This bit is read-only when EN = 1. */
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
    /** @brief None 00: byte 01: half-word (2 bytes) 10: word (4 bytes) 11: user setting error reported and no transfer issued Note: Setting a 8-byte data width causes a user setting error to be reported and no transfer is issued. +: A source block size must be a multiple of the source data width (GPDMA_C6BR1.BNDT[2:0] versus SDW_LOG2[1:0]). Otherwise, a user setting error is reported and no transfer is issued. +: A source burst transfer must have an aligned address with its data width (start address GPDMA_CxSAR[2:0] versus SDW_LOG2[1:0]). Otherwise, a user setting error is reported and none transfer is issued. */
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

    /** @brief The source address, pointed by GPDMA_CxSAR, is kept constant after a burst beat/single transfer or is incremented by the offset value corresponding to a contiguous data after a burst beat/single transfer. 0: fixed burst 1: contiguously incremented burst */
    using GPDMA_C6TR1_SINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fixed burst (value: 0)
     *          - B_0x1: contiguously incremented burst (value: 1)
     */
        /** @brief fixed burst */
    constexpr std::uint32_t GPDMA_C6TR1_SINC_B_0x0 = 0;
        /** @brief contiguously incremented burst */
    constexpr std::uint32_t GPDMA_C6TR1_SINC_B_0x1 = 1;

    /** @brief The burst length unit is one data named beat within a burst. If SBL_1[5:0] = 0, the burst can be named as single. Each data/beat has a width defined by the destination data width SDW_LOG2[1:0]. Note: If a burst transfer crossed a 1-Kbyte address boundary on a AHB transfer, the GPDMA modifies and shortens the programmed burst into singles or bursts of lower length, to be compliant with the AHB protocol. +: If a burst transfer is of length greater than the FIFO size of the channel 6, the GPDMA modifies and shortens the programmed burst into singles or bursts of lower length, to be compliant with the FIFO size. Transfer performance is lower, with GPDMA re-arbitration between effective and lower singles/bursts, but the data integrity is guaranteed. */
    using GPDMA_C6TR1_SBL_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief If DDW_LOG2[1:0] = SDW_LOG2[1:0]: if the data width of a burst destination transfer is equal to the data width of a burst source transfer, these bits are ignored. */
    using GPDMA_C6TR1_PAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0_COND1: COND1 is [PAM_1] source data is transferred as right aligned, padded with 0s up to the destination data width (value: 0)
     *          - B_0x1_COND1: COND1 is [PAM_1] source data is transferred as right aligned, sign extended up to the destination data width (value: 1)
     *          - B_0x2_COND1: COND1 is [PAM_1] successive source data are FIFO queued and packed at the destination data width, in a left (LSB) to right (MSB) order (named little endian), before a destination transfer (value: 2)
     *          - B_0x3_COND1: COND1 is [PAM_1] successive source data are FIFO queued and packed at the destination data width, in a left (LSB) to right (MSB) order (named little endian), before a destination transfer (value: 3)
     */
        /** @brief COND1 is [PAM_1] source data is transferred as right aligned, padded with 0s up to the destination data width */
    constexpr std::uint32_t GPDMA_C6TR1_PAM_B_0x0_COND1 = 0;
        /** @brief COND1 is [PAM_1] source data is transferred as right aligned, sign extended up to the destination data width */
    constexpr std::uint32_t GPDMA_C6TR1_PAM_B_0x1_COND1 = 1;
        /** @brief COND1 is [PAM_1] successive source data are FIFO queued and packed at the destination data width, in a left (LSB) to right (MSB) order (named little endian), before a destination transfer */
    constexpr std::uint32_t GPDMA_C6TR1_PAM_B_0x2_COND1 = 2;
        /** @brief COND1 is [PAM_1] successive source data are FIFO queued and packed at the destination data width, in a left (LSB) to right (MSB) order (named little endian), before a destination transfer */
    constexpr std::uint32_t GPDMA_C6TR1_PAM_B_0x3_COND1 = 3;

    /** @brief If the source data width is shorter than a word, this bit is ignored. If the source data width is a word: 0: no byte-based exchange within the unaligned half-word of each source word 1: the two consecutive bytes within the unaligned half-word of each source word are exchanged. */
    using GPDMA_C6TR1_SBx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no byte-based exchange within the unaligned half-word of each source word (value: 0)
     *          - B_0x1: the two consecutive bytes within the unaligned half-word of each source word are exchanged. (value: 1)
     */
        /** @brief no byte-based exchange within the unaligned half-word of each source word */
    constexpr std::uint32_t GPDMA_C6TR1_SBx_B_0x0 = 0;
        /** @brief the two consecutive bytes within the unaligned half-word of each source word are exchanged. */
    constexpr std::uint32_t GPDMA_C6TR1_SBx_B_0x1 = 1;

    /** @brief This bit is used to allocate the master port for the source transfer 0: port 0 (AHB) allocated 1: port 1 (AHB) allocated Note: This bit must be written when EN = 0. This bit is read-only when EN = 1. */
    using GPDMA_C6TR1_SAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C6TR1_SAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C6TR1_SAP_B_0x1 = 1;

    /** @brief If GPDMA_SECCFGR.SEC6 = 1 and the access is secure: This is a secure register bit. This bit can only be read by a secure software. This bit must be written by a secure software when GPDMA_SECCFGR.SEC6 = 1. A secure write is ignored when GPDMA_SECCFGR.SEC6 = 0. When GPDMA_SECCFGR.SEC6 is deasserted, this SSEC bit is also deasserted by hardware (on a secure reconfiguration of the channel as non-secure), and the GPDMA transfer from the source is non-secure. 0: GPDMA transfer non-secure 1: GPDMA transfer secure */
    using GPDMA_C6TR1_SSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPDMA transfer non-secure (value: 0)
     *          - B_0x1: GPDMA transfer secure (value: 1)
     */
        /** @brief GPDMA transfer non-secure */
    constexpr std::uint32_t GPDMA_C6TR1_SSEC_B_0x0 = 0;
        /** @brief GPDMA transfer secure */
    constexpr std::uint32_t GPDMA_C6TR1_SSEC_B_0x1 = 1;

    /** @brief None 00: byte 01: half-word (2 bytes) 10: word (4 bytes) 11: user setting error reported and no transfer issued Note: Setting a 8-byte data width causes a user setting error to be reported and none transfer is issued. +: A destination burst transfer must have an aligned address with its data width (start address GPDMA_CxDAR[2:0] and address offset GPDMA_CxTR3.DAO[2:0], versus DDW_LOG2[1:0]). Otherwise a user setting error is reported and no transfer is issued. */
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

    /** @brief The destination address, pointed by GPDMA_CxDAR, is kept constant after a burst beat/single transfer, or is incremented by the offset value corresponding to a contiguous data after a burst beat/single transfer. 0: fixed burst 1: contiguously incremented burst */
    using GPDMA_C6TR1_DINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fixed burst (value: 0)
     *          - B_0x1: contiguously incremented burst (value: 1)
     */
        /** @brief fixed burst */
    constexpr std::uint32_t GPDMA_C6TR1_DINC_B_0x0 = 0;
        /** @brief contiguously incremented burst */
    constexpr std::uint32_t GPDMA_C6TR1_DINC_B_0x1 = 1;

    /** @brief The burst length unit is one data named beat within a burst. If DBL_1[5:0] = 0, the burst can be named as single. Each data/beat has a width defined by the destination data width DDW_LOG2[1:0]. Note: If a burst transfer crossed a 1-Kbyte address boundary on a AHB transfer, the GPDMA modifies and shortens the programmed burst into singles or bursts of lower length, to be compliant with the AHB protocol. +: If a burst transfer is of length greater than the FIFO size of the channel 6, the GPDMA modifies and shortens the programmed burst into singles or bursts of lower length, to be compliant with the FIFO size. Transfer performance is lower, with GPDMA re-arbitration between effective and lower singles/bursts, but the data integrity is guaranteed. */
    using GPDMA_C6TR1_DBL_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief If the destination data size is a byte, this bit is ignored. If the destination data size is not a byte: 0: no byte-based exchange within half-word 1: the two consecutive (post PAM) bytes are exchanged in each destination half-word. */
    using GPDMA_C6TR1_DBx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no byte-based exchange within half-word (value: 0)
     *          - B_0x1: the two consecutive (post PAM) bytes are exchanged in each destination half-word. (value: 1)
     */
        /** @brief no byte-based exchange within half-word */
    constexpr std::uint32_t GPDMA_C6TR1_DBx_B_0x0 = 0;
        /** @brief the two consecutive (post PAM) bytes are exchanged in each destination half-word. */
    constexpr std::uint32_t GPDMA_C6TR1_DBx_B_0x1 = 1;

    /** @brief If the destination data size is shorter than a word, this bit is ignored. If the destination data size is a word: 0: no halfword-based exchanged within word 1: the two consecutive (post PAM) half-words are exchanged in each destination word. */
    using GPDMA_C6TR1_DHx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no halfword-based exchanged within word (value: 0)
     *          - B_0x1: the two consecutive (post PAM) half-words are exchanged in each destination word. (value: 1)
     */
        /** @brief no halfword-based exchanged within word */
    constexpr std::uint32_t GPDMA_C6TR1_DHx_B_0x0 = 0;
        /** @brief the two consecutive (post PAM) half-words are exchanged in each destination word. */
    constexpr std::uint32_t GPDMA_C6TR1_DHx_B_0x1 = 1;

    /** @brief This bit is used to allocate the master port for the destination transfer 0: port 0 (AHB) allocated 1: port 1 (AHB) allocated Note: This bit must be written when EN = 0. This bit is read-only when EN = 1. */
    using GPDMA_C6TR1_DAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C6TR1_DAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C6TR1_DAP_B_0x1 = 1;

    /** @brief If GPDMA_SECCFGR.SEC6 = 1 and the access is secure: This is a secure register bit. This bit can only be read by a secure software. This bit must be written by a secure software when GPDMA_SECCFGR.SEC6 = 1. A secure write is ignored when GPDMA_SECCFGR.SEC6 = 0. When GPDMA_SECCFGR.SEC6 is deasserted, this DSEC bit is also deasserted by hardware (on a secure reconfiguration of the channel as non-secure), and the GPDMA transfer to the destination is non-secure. 0: GPDMA transfer non-secure 1: GPDMA transfer secure */
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
    /** @brief These bits are ignored if channel 6 is activated (GPDMA_C6CR.EN asserted) with SWREQ=1 (software request for a memory-to-memory transfer). Else, the selected hardware request is internally taken into account as per less than xe4 [GPDMA_requests]/>. The user must not assign a same input hardware request (same REQSEL[6:0] value) to different active GPDMA channels (GPDMA_C6CR.EN = 1 and GPDMA_C6TR2.SWREQ = 0 for these channels). GPDMA is not intended to hardware support the case of simultaneous enabled channels incorrectly configured with a same hardware peripheral request signal, and there is no user setting error reporting. */
    using GPDMA_C6TR2_REQSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This bit is internally taken into account when GPDMA_C6CR.EN is asserted. 0: no software request. The selected hardware request REQSEL[6:0] is taken into account. 1: software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[6:0] is ignored. */
    using GPDMA_C6TR2_SWREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no software request. The selected hardware request REQSEL[6:0] is taken into account. (value: 0)
     *          - B_0x1: software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[6:0] is ignored. (value: 1)
     */
        /** @brief no software request. The selected hardware request REQSEL[6:0] is taken into account. */
    constexpr std::uint32_t GPDMA_C6TR2_SWREQ_B_0x0 = 0;
        /** @brief software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[6:0] is ignored. */
    constexpr std::uint32_t GPDMA_C6TR2_SWREQ_B_0x1 = 1;

    /** @brief This bit is ignored if channel 6 is activated (GPDMA_C6CR.EN asserted) with SWREQ = 1 (software request for a memory-to-memory transfer). Else: 0: selected hardware request driven by a source peripheral (request signal taken into account by the GPDMA transfer scheduler over the source/read port) 1: selected hardware request driven by a destination peripheral (request signal taken into account by the GPDMA transfer scheduler over the destination/write port) Note: If the channel 6 is activated (GPDMA_C6CR.EN is asserted) with SWREQ = 0 and PFREQ = 1 (peripheral hardware request with peripheral flow-control mode), any software assertion to this DREQ bit is ignored: in peripheral flow-control mode, only a peripheral-to-memory transfer is supported. */
    using GPDMA_C6TR2_DREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: selected hardware request driven by a source peripheral (request signal taken into account by the GPDMA transfer scheduler over the source/read port) (value: 0)
     *          - B_0x1: selected hardware request driven by a destination peripheral (request signal taken into account by the GPDMA transfer scheduler over the destination/write port) (value: 1)
     */
        /** @brief selected hardware request driven by a source peripheral (request signal taken into account by the GPDMA transfer scheduler over the source/read port) */
    constexpr std::uint32_t GPDMA_C6TR2_DREQ_B_0x0 = 0;
        /** @brief selected hardware request driven by a destination peripheral (request signal taken into account by the GPDMA transfer scheduler over the destination/write port) */
    constexpr std::uint32_t GPDMA_C6TR2_DREQ_B_0x1 = 1;

    /** @brief If the channel 6 is activated (GPDMA_C6CR.EN asserted) with SWREQ = 1 (software request for a memory-to-memory transfer), this bit is ignored. Else: 0: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a burst level. 1: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see less than xe4 [GPDMA_requests]/>). */
    using GPDMA_C6TR2_BREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a burst level. (value: 0)
     *          - B_0x1: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see less than xe4 [GPDMA_requests]/>). (value: 1)
     */
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a burst level. */
    constexpr std::uint32_t GPDMA_C6TR2_BREQ_B_0x0 = 0;
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see less than xe4 [GPDMA_requests]/>). */
    constexpr std::uint32_t GPDMA_C6TR2_BREQ_B_0x1 = 1;

    /** @brief Caution: If a given channel 6 is not implemented with this feature, this bit is reserved and PFREQ is not present (see less than xe1 [GPDMA_channels]/> for the list of the implemented channels with this feature). */
    using GPDMA_C6TR2_PFREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol in GPDMA control mode. The GPDMA is programmed with GPDMA_C6TR1.BNDT[15:0] and this is internally used by the hardware for the block transfer completion. (value: 0)
     *          - B_0x1: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol in peripheral control mode. The GPDMA block transfer can be early completed by the peripheral itself (see less than xe2 [GPDMA_channels_peripheral]/> for more details). (value: 1)
     */
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol in GPDMA control mode. The GPDMA is programmed with GPDMA_C6TR1.BNDT[15:0] and this is internally used by the hardware for the block transfer completion. */
    constexpr std::uint32_t GPDMA_C6TR2_PFREQ_B_0x0 = 0;
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol in peripheral control mode. The GPDMA block transfer can be early completed by the peripheral itself (see less than xe2 [GPDMA_channels_peripheral]/> for more details). */
    constexpr std::uint32_t GPDMA_C6TR2_PFREQ_B_0x1 = 1;

    /** @brief These bits define the transfer granularity for its conditioning by the trigger. If the channel 6 is enabled (GPDMA_C6CR.EN asserted) with TRIGPOL[1:0] = 00 or 11, these TRIGM[1:0] bits are ignored. Else, a GPDMA transfer is conditioned by at least one trigger hit: 00: at block level: the first burst read of each block transfer is conditioned by one hit trigger (channel 6 = 12 to 15, for each block if a 2D/repeated block is configured with GPDMA_C6BR1.BRC[10:0] is not equal to 0). 10: at link level: a LLI link transfer is conditioned by one hit trigger. The LLI data transfer (if any) is not conditioned. 11: at programmed burst level: If SWREQ = 1, each programmed burst read is conditioned by one hit trigger. If SWREQ = 0, each programmed burst that is requested by the selected peripheral, is conditioned by one hit trigger. - If the peripheral is programmed as a source (DREQ = 0) of the LLI data transfer, each programmed burst read is conditioned. - If the peripheral is programmed as a destination (DREQ = 1) of the LLI data transfer, each programmed burst write is conditioned. The first memory burst read of a (possibly 2D/repeated) block, also named as the first ready FIFO-based source burst, is gated by the occurrence of both the hardware request and the first trigger hit.01: channel 6 = 0 to , same as 00; channel 6 , at 2D/repeated block level. The first burst read of a 2D/repeated block transfer is conditioned by one hit trigger. The GPDMA monitoring of a trigger for channel 6 is started when the channel is enabled/loaded with a new active trigger configuration: rising or falling edge on a selected trigger (TRIGPOL[1:0] = 01 or respectively TRIGPOL[1:0]=10). The monitoring of this trigger is kept active during the triggered and uncompleted (data or link) transfer; and if a new trigger is detected then, this hit is internally memorized to grant the next transfer, as long as the defined rising or falling edge is not modified, and the TRIGSEL[5:0] is not modified, and the channel is enabled. Transferring a next LLIn+1 that updates the GPDMA_C6TR2 with a new value for any of TRIGSEL[5:0] or TRIGPOL[1:0], resets the monitoring, trashing the memorized hit of the formerly defined LLIn trigger. After a first new trigger hitn+1 is memorized, if another second trigger hitn+2 is detected and if the hitn triggered transfer is still not completed, hitn+2 is lost and not memorized.memorized. A trigger overrun flag is reported (GPDMA_C6SR.TOF=1), and an interrupt is generated if enabled (GPDMA_C6CR.TOIE = 1). The channel is not automatically disabled by hardware due to a trigger overrun. Note: When the source block size is not a multiple of the source burst size and is a multiple of the source data width, then the last programmed source burst is not completed and is internally shorten to match the block size. In this case, if TRIGM[1:0] = 11 and (SWREQ = 1 or (SWREQ = 0 and DREQ = 0)), the shortened burst transfer (by singles or/and by bursts of lower length) is conditioned once by the trigger. +: When the programmed destination burst is internally shortened by singles or/and by bursts of lower length (versus FIFO size, versus block size, 1-Kbyte boundary address crossing): if the trigger is conditioning the programmed destination burst (if TRIGM[1:0] = 11 and SWREQ = 0 and DREQ = 1), this shortened destination burst transfer is conditioned once by the trigger. */
    using GPDMA_C6TR2_TRIGM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief These bits select the trigger event input of the GPDMA transfer (as per less than xe3 [GPDMA_triggers]/>), with anactive trigger event if TRIGPOL[1:0] is not equal to 00. */
    using GPDMA_C6TR2_TRIGSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief These bits define the polarity of the selected trigger event input defined by TRIGSEL[5:0]. 00: no trigger (masked trigger event) 01: trigger on the rising edge 10: trigger on the falling edge 11: same as 00 */
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

    /** @brief These bits define the transfer granularity for the transfer complete and half transfer complete events generation. 00: at block level (when GPDMA_C6BR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. 01: channel 6 (0 to ), same as 00, channel 6 , at 2D/repeated block level (when GPDMA_C6BR1.BRC[10:0] = 0 and GPDMA_C6BR1.BNDT[15:0] = 0). The complete (and the half) transfer event is generated at the end (respectively half of the end) of the 2D/repeated block. 10: at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer. The LLI data transfer is a block transfer or a 2D/repeated block transfer for channel 6 , if any data transfer. 11: at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address GPDMA_C6LLR.LA[15:2] to zero and clears all the GPDMA_C6LLR update bits (UT1, UT2, UB1, USA, UDA and ULL, plus UT3 and UB2). If the channel transfer is continuous/infinite, no event is generated. Note: If the initial LLI0 data transfer is null/void (directly programmed by the internal register file with GPDMA_C6BR1.BNDT[15:0] = 0), then neither the complete transfer event nor the half transfer event is generated. +: If the initial LLI0 data transfer is null/void (directly programmed by the internal register file with GPDMA_C6BR1.BNDT[15:0] = 0), then neither the complete transfer event nor the half transfer event is generated. +: If the initial LLI0 data transfer is null/void (directly programmed by the internal register file with GPDMA_C6BR1.BNDT[15:0] = 0), then the half transfer event is not generated, and the transfer complete event is generated when is completed the loading of the LLI1. */
    using GPDMA_C6TR2_TCEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: at block level (when GPDMA_C6BR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. (value: 0)
     *          - B_0x1: channel 6 (0 to ), same as 00, channel 6 , at 2D/repeated block level (when GPDMA_C6BR1.BRC[10:0] = 0 and GPDMA_C6BR1.BNDT[15:0] = 0). The complete (and the half) transfer event is generated at the end (respectively half of the end) of the 2D/repeated block. (value: 1)
     *          - B_0x2: at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer. The LLI data transfer is a block transfer or a 2D/repeated block transfer for channel 6 , if any data transfer. (value: 2)
     *          - B_0x3: at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address GPDMA_C6LLR.LA[15:2] to zero and clears all the GPDMA_C6LLR update bits (UT1, UT2, UB1, USA, UDA and ULL, plus UT3 and UB2). If the channel transfer is continuous/infinite, no event is generated. (value: 3)
     */
        /** @brief at block level (when GPDMA_C6BR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. */
    constexpr std::uint32_t GPDMA_C6TR2_TCEM_B_0x0 = 0;
        /** @brief channel 6 (0 to ), same as 00, channel 6 , at 2D/repeated block level (when GPDMA_C6BR1.BRC[10:0] = 0 and GPDMA_C6BR1.BNDT[15:0] = 0). The complete (and the half) transfer event is generated at the end (respectively half of the end) of the 2D/repeated block. */
    constexpr std::uint32_t GPDMA_C6TR2_TCEM_B_0x1 = 1;
        /** @brief at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer. The LLI data transfer is a block transfer or a 2D/repeated block transfer for channel 6 , if any data transfer. */
    constexpr std::uint32_t GPDMA_C6TR2_TCEM_B_0x2 = 2;
        /** @brief at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address GPDMA_C6LLR.LA[15:2] to zero and clears all the GPDMA_C6LLR update bits (UT1, UT2, UB1, USA, UDA and ULL, plus UT3 and UB2). If the channel transfer is continuous/infinite, no event is generated. */
    constexpr std::uint32_t GPDMA_C6TR2_TCEM_B_0x3 = 3;

    /** @brief GPDMA channel 6 block register 1 */
    using GPDMA_C6BR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x398, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Block size transferred from the source. When the channel is enabled, this field becomes read-only and is decremented, indicating the remaining number of data items in the current source block to be transferred. BNDT[15:0] is programmed in number of bytes, maximum source block size is 64 Kbytes -1. Once the last data transfer is completed (BNDT[15:0] = 0): - if GPDMA_C6LLR.UB1 = 1, this field is updated by the LLI in the memory. - if GPDMA_C6LLR.UB1 = 0 and if there is at least one not null Uxx update bit, this field is internally restored to the programmed value. - if all GPDMA_C6LLR.Uxx = 0 and if GPDMA_C6LLR.LA[15:0] is not equal to 0, this field is internally restored to the programmed value (infinite/continuous last LLI). - if GPDMA_C6LLR = 0, this field is kept as zero following the last LLI data transfer. Note: A non-null source block size must be a multiple of the source data width (BNDT[2:0] versus GPDMA_C6TR1.SDW_LOG2[1:0]). Else a user setting error is reported and no transfer is issued. +: When configured in packing mode (GPDMA_C6TR1.PAM[1] = 1 and destination data width different from source data width), a non-null source block size must be a multiple of the destination data width (BNDT[2:0] versus GPDMA_C6TR1.DDW_LOG2[1:0]). Else a user setting error is reported and no transfer is issued. */
    using GPDMA_C6BR1_BNDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 6 source address register */
    using GPDMA_C6SAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x39C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This field is the pointer to the address from which the next data is read. During the channel activity, depending on the source addressing mode (GPDMA_C6TR1.SINC), this field is kept fixed or incremented by the data width (GPDMA_C6TR1.SDW_LOG2[1:0]) after each burst source data, reflecting the next address from which data is read. During the channel activity, this address is updated after each completed source burst, consequently to: - the programmed source burst; either in fixed addressing mode or in contiguous-data incremented mode. If contiguously incremented (GPDMA_C6TR1.SINC = 1), then the additional address offset value is the programmed burst size, as defined by GPDMA_C6TR1.SBL_1[5:0] and GPDMA_C6TR1.SDW_LOG2[21:0] - the additional source incremented/decremented offset value as programmed by GPDMA_C6BR1.SDEC and GPDMA_CxTR3.SAO[12:0]. - once/if completed source block transfer, for a channel 6 with 2D addressing capability (x = 12 to 15). additional block repeat source incremented/decremented offset value as programmed by GPDMA_C6BR1.BRSDEC and GPDMA_CxBR2.BRSAO[15:0] In linked-list mode, after a LLI data transfer is completed, this register is automatically updated by GPDMA from the memory, provided the LLI is set with GPDMA_C6LLR.USA = 1. Note: A source address must be aligned with the programmed data width of a source burst (SA[2:0] versus GPDMA_C6TR1.SDW_LOG2[1:0]). Else, a user setting error is reported and no transfer is issued. +: When the source block size is not a multiple of the source burst size and is a multiple of the source data width, the last programmed source burst is not completed and is internally shorten to match the block size. In this case, the additional GPDMA_CxTR3.SAO[12:0] is not applied. */
    using GPDMA_C6SAR_SA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 6 destination address register */
    using GPDMA_C6DAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This field is the pointer to the address from which the next data is written. During the channel activity, depending on the destination addressing mode (GPDMA_C6TR1.DINC), this field is kept fixed or incremented by the data width (GPDMA_C6TR1.DDW_LOG2[21:0]) after each burst destination data, reflecting the next address from which data is written. During the channel activity, this address is updated after each completed destination burst, consequently to: - the programmed destination burst; either in fixed addressing mode or in contiguous-data incremented mode. If contiguously incremented (GPDMA_C6TR1.DINC = 1), then the additional address offset value is the programmed burst size, as defined by GPDMA_C6TR1.DBL_1[5:0] and GPDMA_C6TR1.DDW_LOG2[1:0] - the additional destination incremented/decremented offset value as programmed by GPDMA_C6BR1.DDEC and GPDMA_CxTR3.DAO[12:0]. - once/if completed destination block transfer, for a channel 6 with 2D addressing capability (x=12to15), the additional block repeat destination incremented/decremented offset value as programmed by GPDMA_C6BR1.BRDDEC and GPDMA_CxBR2.BRDAO[15:0] In linked-list mode, after a LLI data transfer is completed, this register is automatically updated by the GPDMA from the memory, provided the LLI is set with GPDMA_C6LLR.UDA = 1. Note: A destination address must be aligned with the programmed data width of a destination burst (DA[2:0] versus GPDMA_C6TR1.DDW_LOG2[1:0]). Else, a user setting error is reported and no transfer is issued. */
    using GPDMA_C6DAR_DA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 6 linked-list address register */
    using GPDMA_C6LLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3CC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief If UT1 = UT2 = UB1 = USA = UDA = ULL = 0 and if LA[15:20] = 0, the current LLI is the last one. The channel transfer is completed without any update of the linked-list GPDMA register file. Else, this field is the pointer to the memory address offset from which the next linked-list data structure is automatically fetched from, once the data transfer is completed, in order to conditionally update the linked-list GPDMA internal register file (GPDMA_C6TR1, GPDMA_C6TR2, GPDMA_C6BR1, GPDMA_CxSAR, GPDMA_CxDAR and GPDMA_C6LLR). Note: The user must program the pointer to be 32-bit aligned. The two low-significant bits are write ignored. */
    using GPDMA_C6LLR_LA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This bit is used to control the update of GPDMA_C6LLR from the memory during the link transfer. 0: no GPDMA_C6LLR update 1: GPDMA_C6LLR update */
    using GPDMA_C6LLR_ULL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_C6LLR update (value: 0)
     *          - B_0x1: GPDMA_C6LLR update (value: 1)
     */
        /** @brief no GPDMA_C6LLR update */
    constexpr std::uint32_t GPDMA_C6LLR_ULL_B_0x0 = 0;
        /** @brief GPDMA_C6LLR update */
    constexpr std::uint32_t GPDMA_C6LLR_ULL_B_0x1 = 1;

    /** @brief This bit is used to control the update of GPDMA_CxDAR from the memory during the link transfer. 0: no GPDMA_CxDAR update 1: GPDMA_CxDAR update */
    using GPDMA_C6LLR_UDA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxDAR update (value: 0)
     *          - B_0x1: GPDMA_CxDAR update (value: 1)
     */
        /** @brief no GPDMA_CxDAR update */
    constexpr std::uint32_t GPDMA_C6LLR_UDA_B_0x0 = 0;
        /** @brief GPDMA_CxDAR update */
    constexpr std::uint32_t GPDMA_C6LLR_UDA_B_0x1 = 1;

    /** @brief This bit controls the update of GPDMA_CxSAR from the memory during the link transfer. 0: no GPDMA_CxSAR update 1: GPDMA_CxSAR update */
    using GPDMA_C6LLR_USA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxSAR update (value: 0)
     *          - B_0x1: GPDMA_CxSAR update (value: 1)
     */
        /** @brief no GPDMA_CxSAR update */
    constexpr std::uint32_t GPDMA_C6LLR_USA_B_0x0 = 0;
        /** @brief GPDMA_CxSAR update */
    constexpr std::uint32_t GPDMA_C6LLR_USA_B_0x1 = 1;

    /** @brief This bit controls the update of GPDMA_C6BR1 from the memory during the link transfer. If UB1 = 0 and if GPDMA_C6LLR is not equal to 0, the linked-list is not completed. GPDMA_C6BR1.BNDT[15:0] is then restored to the programmed value after data transfer is completed and before the link transfer. 0: no GPDMA_C6BR1 update from memory (GPDMA_C6BR1.BNDT[15:0] restored if any link transfer) 1: GPDMA_C6BR1 update */
    using GPDMA_C6LLR_UB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_C6BR1 update from memory (GPDMA_C6BR1.BNDT[15:0] restored if any link transfer) (value: 0)
     *          - B_0x1: GPDMA_C6BR1 update (value: 1)
     */
        /** @brief no GPDMA_C6BR1 update from memory (GPDMA_C6BR1.BNDT[15:0] restored if any link transfer) */
    constexpr std::uint32_t GPDMA_C6LLR_UB1_B_0x0 = 0;
        /** @brief GPDMA_C6BR1 update */
    constexpr std::uint32_t GPDMA_C6LLR_UB1_B_0x1 = 1;

    /** @brief This bit controls the update of GPDMA_C6TR2 from the memory during the link transfer. 0: no GPDMA_C6TR2 update 1: GPDMA_C6TR2 update */
    using GPDMA_C6LLR_UT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_C6TR2 update (value: 0)
     *          - B_0x1: GPDMA_C6TR2 update (value: 1)
     */
        /** @brief no GPDMA_C6TR2 update */
    constexpr std::uint32_t GPDMA_C6LLR_UT2_B_0x0 = 0;
        /** @brief GPDMA_C6TR2 update */
    constexpr std::uint32_t GPDMA_C6LLR_UT2_B_0x1 = 1;

    /** @brief This bit controls the update of GPDMA_C6TR1 from the memory during the link transfer. 0: no GPDMA_C6TR1 update 1: GPDMA_C6TR1 update */
    using GPDMA_C6LLR_UT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_C6TR1 update (value: 0)
     *          - B_0x1: GPDMA_C6TR1 update (value: 1)
     */
        /** @brief no GPDMA_C6TR1 update */
    constexpr std::uint32_t GPDMA_C6LLR_UT1_B_0x0 = 0;
        /** @brief GPDMA_C6TR1 update */
    constexpr std::uint32_t GPDMA_C6LLR_UT1_B_0x1 = 1;

    /** @brief GPDMA channel 7 linked-list base address register */
    using GPDMA_C7LBAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3D0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief None */
    using GPDMA_C7LBAR_LBA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 7 flag clear register */
    using GPDMA_C7FCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3DC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief None 0: no effect 1: corresponding TCF flag cleared */
    using GPDMA_C7FCR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding TCF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C7FCR_TCF_B_0x0 = 0;
        /** @brief corresponding TCF flag cleared */
    constexpr std::uint32_t GPDMA_C7FCR_TCF_B_0x1 = 1;

    /** @brief None 0: no effect 1: corresponding HTF flag cleared */
    using GPDMA_C7FCR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding HTF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C7FCR_HTF_B_0x0 = 0;
        /** @brief corresponding HTF flag cleared */
    constexpr std::uint32_t GPDMA_C7FCR_HTF_B_0x1 = 1;

    /** @brief None 0: no effect 1: corresponding DTEF flag cleared */
    using GPDMA_C7FCR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding DTEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C7FCR_DTEF_B_0x0 = 0;
        /** @brief corresponding DTEF flag cleared */
    constexpr std::uint32_t GPDMA_C7FCR_DTEF_B_0x1 = 1;

    /** @brief None 0: no effect 1: corresponding ULEF flag cleared */
    using GPDMA_C7FCR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding ULEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C7FCR_ULEF_B_0x0 = 0;
        /** @brief corresponding ULEF flag cleared */
    constexpr std::uint32_t GPDMA_C7FCR_ULEF_B_0x1 = 1;

    /** @brief None 0: no effect 1: corresponding USEF flag cleared */
    using GPDMA_C7FCR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding USEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C7FCR_USEF_B_0x0 = 0;
        /** @brief corresponding USEF flag cleared */
    constexpr std::uint32_t GPDMA_C7FCR_USEF_B_0x1 = 1;

    /** @brief None 0: no effect 1: corresponding SUSPF flag cleared */
    using GPDMA_C7FCR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding SUSPF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C7FCR_SUSPF_B_0x0 = 0;
        /** @brief corresponding SUSPF flag cleared */
    constexpr std::uint32_t GPDMA_C7FCR_SUSPF_B_0x1 = 1;

    /** @brief None 0: no effect 1: corresponding TOF flag cleared */
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
    /** @brief This idle flag is deasserted by hardware when the channel is enabled (GPDMA_C7CR.EN = 1) with a valid channel configuration (no USEF to be immediately reported). This idle flag is asserted after hard reset or by hardware when the channel is back in idle state (in suspended or disabled state). 0: channel not in idle state 1: channel in idle state */
    using GPDMA_C7SR_IDLEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: channel not in idle state (value: 0)
     *          - B_0x1: channel in idle state (value: 1)
     */
        /** @brief channel not in idle state */
    constexpr std::uint32_t GPDMA_C7SR_IDLEF_B_0x0 = 0;
        /** @brief channel in idle state */
    constexpr std::uint32_t GPDMA_C7SR_IDLEF_B_0x1 = 1;

    /** @brief A transfer complete event is either a block transfer complete, a 2D/repeated block transfer complete, or a LLI transfer complete including the upload of the next LLI if any, or the full linked-list completion, depending on the transfer complete event mode (GPDMA_C7TR2.TCEM[1:0]). 0: no transfer complete event 1: a transfer complete event occurred */
    using GPDMA_C7SR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no transfer complete event (value: 0)
     *          - B_0x1: a transfer complete event occurred (value: 1)
     */
        /** @brief no transfer complete event */
    constexpr std::uint32_t GPDMA_C7SR_TCF_B_0x0 = 0;
        /** @brief a transfer complete event occurred */
    constexpr std::uint32_t GPDMA_C7SR_TCF_B_0x1 = 1;

    /** @brief A half transfer event is either a half block transfer or a half 2D/repeated block transfer, depending on the transfer complete event mode (GPDMA_C7TR2.TCEM[1:0]). A half block transfer occurs when half of the bytes of the source block size (rounded up integer of GPDMA_C7BR1.BNDT[15:0]/2) has been transferred to the destination. A half 2D/repeated block transfer occurs when half of the repeated blocks (rounded up integer of (GPDMA_C7BR1.BRC[10:0]+1)/2)) has been transferred to the destination. 0: no half transfer event 1: a half transfer event occurred */
    using GPDMA_C7SR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no half transfer event (value: 0)
     *          - B_0x1: a half transfer event occurred (value: 1)
     */
        /** @brief no half transfer event */
    constexpr std::uint32_t GPDMA_C7SR_HTF_B_0x0 = 0;
        /** @brief a half transfer event occurred */
    constexpr std::uint32_t GPDMA_C7SR_HTF_B_0x1 = 1;

    /** @brief None 0: no data transfer error event 1: a master bus error event occurred on a data transfer */
    using GPDMA_C7SR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no data transfer error event (value: 0)
     *          - B_0x1: a master bus error event occurred on a data transfer (value: 1)
     */
        /** @brief no data transfer error event */
    constexpr std::uint32_t GPDMA_C7SR_DTEF_B_0x0 = 0;
        /** @brief a master bus error event occurred on a data transfer */
    constexpr std::uint32_t GPDMA_C7SR_DTEF_B_0x1 = 1;

    /** @brief None 0: no update link transfer error event 1: a master bus error event occurred while updating a linked-list register from memory */
    using GPDMA_C7SR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no update link transfer error event (value: 0)
     *          - B_0x1: a master bus error event occurred while updating a linked-list register from memory (value: 1)
     */
        /** @brief no update link transfer error event */
    constexpr std::uint32_t GPDMA_C7SR_ULEF_B_0x0 = 0;
        /** @brief a master bus error event occurred while updating a linked-list register from memory */
    constexpr std::uint32_t GPDMA_C7SR_ULEF_B_0x1 = 1;

    /** @brief None 0: no user setting error event 1: a user setting error event occurred */
    using GPDMA_C7SR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no user setting error event (value: 0)
     *          - B_0x1: a user setting error event occurred (value: 1)
     */
        /** @brief no user setting error event */
    constexpr std::uint32_t GPDMA_C7SR_USEF_B_0x0 = 0;
        /** @brief a user setting error event occurred */
    constexpr std::uint32_t GPDMA_C7SR_USEF_B_0x1 = 1;

    /** @brief None 0: no completed suspension event 1: a completed suspension event occurred */
    using GPDMA_C7SR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no completed suspension event (value: 0)
     *          - B_0x1: a completed suspension event occurred (value: 1)
     */
        /** @brief no completed suspension event */
    constexpr std::uint32_t GPDMA_C7SR_SUSPF_B_0x0 = 0;
        /** @brief a completed suspension event occurred */
    constexpr std::uint32_t GPDMA_C7SR_SUSPF_B_0x1 = 1;

    /** @brief None 0: no trigger overrun event 1: a trigger overrun event occurred */
    using GPDMA_C7SR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no trigger overrun event (value: 0)
     *          - B_0x1: a trigger overrun event occurred (value: 1)
     */
        /** @brief no trigger overrun event */
    constexpr std::uint32_t GPDMA_C7SR_TOF_B_0x0 = 0;
        /** @brief a trigger overrun event occurred */
    constexpr std::uint32_t GPDMA_C7SR_TOF_B_0x1 = 1;

    /** @brief Number of available write beats in the FIFO, in units of the programmed destination data width (see GPDMA_C7TR1.DDW_LOG2[1:0], in units of bytes, half-words, or words). Note: After having suspended an active transfer, the user may need to read FIFOL[7:0], additionally to GPDMA_C7BR1.BDNT[15:0] and GPDMA_C7BR1.BRC[10:0], to know how many data have been transferred to the destination. Before reading, the user may wait for the transfer to be suspended (GPDMA_C7SR.SUSPF = 1). */
    using GPDMA_C7SR_FIFOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 7 control register */
    using GPDMA_C7CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3E4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Writing 1 into the field RESET (bit 1) causes the hardware to de-assert this bit, whatever is written into this bit 0. Else: this bit is deasserted by hardware when there is a transfer error (master bus error or user setting error) or when there is a channel transfer complete (channel ready to be configured, for example if LSM = 1 at the end of a single execution of the LLI). Else, this bit can be asserted by software. Writing 0 into this EN bit is ignored. 0: write: ignored, read: channel disabled 1: write: enable channel, read: channel enabled */
    using GPDMA_C7CR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write: ignored, read: channel disabled (value: 0)
     *          - B_0x1: write: enable channel, read: channel enabled (value: 1)
     */
        /** @brief write: ignored, read: channel disabled */
    constexpr std::uint32_t GPDMA_C7CR_EN_B_0x0 = 0;
        /** @brief write: enable channel, read: channel enabled */
    constexpr std::uint32_t GPDMA_C7CR_EN_B_0x1 = 1;

    /** @brief This bit is write only. Writing 0 has no impact. Writing 1 implies the reset of the following: the FIFO, the channel internal state, SUSP and EN bits (whatever is written receptively in bit 2 and bit 0). The reset is effective when the channel is in steady state, meaning one of the following: - active channel in suspended state (GPDMA_C7SR.SUSPF = 1 and GPDMA_C7SR.IDLEF=GPDMA_C7CR.EN = 1) - channel in disabled state (GPDMA_C7SR.IDLEF = 1 and GPDMA_C7CR.EN = 0). After writing a RESET, to continue using this channel, the user must explicitly reconfigure the channel including the hardware-modified configuration registers (GPDMA_C7BR1, GPDMA_CxSAR and GPDMA_CxDAR) before enabling again the channel (see the programming sequence in less than xe6 [GPDMA_abort_restart/ID00-1465]/>). 0: no channel reset 1: channel reset */
    using GPDMA_C7CR_RESET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no channel reset (value: 0)
     *          - B_0x1: channel reset (value: 1)
     */
        /** @brief no channel reset */
    constexpr std::uint32_t GPDMA_C7CR_RESET_B_0x0 = 0;
        /** @brief channel reset */
    constexpr std::uint32_t GPDMA_C7CR_RESET_B_0x1 = 1;

    /** @brief Writing 1 into the field RESET (bit 1) causes the hardware to de-assert this bit, whatever is written into this bit 2. Else: Software must write 1 in order to suspend an active channel (channel with an ongoing GPDMA transfer over its master ports). The software must write 0 in order to resume a suspended channel, following the programming sequence detailed in less than xe5 [GPDMA_channel_suspend_and_resume/ID00-1456]/>. 0: write: resume channel, read: channel not suspended 1: write: suspend channel, read: channel suspended. */
    using GPDMA_C7CR_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write: resume channel, read: channel not suspended (value: 0)
     *          - B_0x1: write: suspend channel, read: channel suspended. (value: 1)
     */
        /** @brief write: resume channel, read: channel not suspended */
    constexpr std::uint32_t GPDMA_C7CR_SUSP_B_0x0 = 0;
        /** @brief write: suspend channel, read: channel suspended. */
    constexpr std::uint32_t GPDMA_C7CR_SUSP_B_0x1 = 1;

    /** @brief None 0: interrupt disabled 1: interrupt enabled */
    using GPDMA_C7CR_TCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C7CR_TCIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C7CR_TCIE_B_0x1 = 1;

    /** @brief None 0: interrupt disabled 1: interrupt enabled */
    using GPDMA_C7CR_HTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C7CR_HTIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C7CR_HTIE_B_0x1 = 1;

    /** @brief None 0: interrupt disabled 1: interrupt enabled */
    using GPDMA_C7CR_DTEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C7CR_DTEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C7CR_DTEIE_B_0x1 = 1;

    /** @brief None 0: interrupt disabled 1: interrupt enabled */
    using GPDMA_C7CR_ULEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C7CR_ULEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C7CR_ULEIE_B_0x1 = 1;

    /** @brief None 0: interrupt disabled 1: interrupt enabled */
    using GPDMA_C7CR_USEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C7CR_USEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C7CR_USEIE_B_0x1 = 1;

    /** @brief None 0: interrupt disabled 1: interrupt enabled */
    using GPDMA_C7CR_SUSPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C7CR_SUSPIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C7CR_SUSPIE_B_0x1 = 1;

    /** @brief None 0: interrupt disabled 1: interrupt enabled */
    using GPDMA_C7CR_TOIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C7CR_TOIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C7CR_TOIE_B_0x1 = 1;

    /** @brief First the (possible 1D/repeated) block transfer is executed as defined by the current internal register file until GPDMA_C7BR1.BNDT[15:0] = 0 and GPDMA_C7BR1.BRC[10:0] = 0. Secondly the next linked-list data structure is conditionally uploaded from memory as defined by GPDMA_C7LLR. Then channel execution is completed. 0: channel executed for the full linked-list and completed at the end of the last LLI (GPDMA_C7LLR = 0). The 16 low-significant bits of the link address are null (LA[15:0] = 0) and all the update bits are null (UT1 = UB1 = UT2 = USA = UDA = ULL = 0 and UT3 = UB2 = 0). Then GPDMA_C7BR1.BNDT[15:0] = 0 and GPDMA_C7BR1.BRC[10:0] = 0. 1: channel executed once for the current LLI Note: This bit must be written when EN = 0. This bit is read-only when EN = 1. */
    using GPDMA_C7CR_LSM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: channel executed for the full linked-list and completed at the end of the last LLI (GPDMA_C7LLR = 0). The 16 low-significant bits of the link address are null (LA[15:0] = 0) and all the update bits are null (UT1 = UB1 = UT2 = USA = UDA = ULL = 0 and UT3 = UB2 = 0). Then GPDMA_C7BR1.BNDT[15:0] = 0 and GPDMA_C7BR1.BRC[10:0] = 0. (value: 0)
     *          - B_0x1: channel executed once for the current LLI (value: 1)
     */
        /** @brief channel executed for the full linked-list and completed at the end of the last LLI (GPDMA_C7LLR = 0). The 16 low-significant bits of the link address are null (LA[15:0] = 0) and all the update bits are null (UT1 = UB1 = UT2 = USA = UDA = ULL = 0 and UT3 = UB2 = 0). Then GPDMA_C7BR1.BNDT[15:0] = 0 and GPDMA_C7BR1.BRC[10:0] = 0. */
    constexpr std::uint32_t GPDMA_C7CR_LSM_B_0x0 = 0;
        /** @brief channel executed once for the current LLI */
    constexpr std::uint32_t GPDMA_C7CR_LSM_B_0x1 = 1;

    /** @brief This bit is used to allocate the master port for the update of the GPDMA linked-list registers from the memory. 0: port 0 (AHB) allocated 1: port 1 (AHB) allocated Note: This bit must be written when EN = 0. This bit is read-only when EN = 1. */
    using GPDMA_C7CR_LAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C7CR_LAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C7CR_LAP_B_0x1 = 1;

    /** @brief None 00: low priority, low weight 01: low priority, mid weight 10: low priority, high weight 11: high priority Note: This bit must be written when EN = 0. This bit is read-only when EN = 1. */
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
    /** @brief None 00: byte 01: half-word (2 bytes) 10: word (4 bytes) 11: user setting error reported and no transfer issued Note: Setting a 8-byte data width causes a user setting error to be reported and no transfer is issued. +: A source block size must be a multiple of the source data width (GPDMA_C7BR1.BNDT[2:0] versus SDW_LOG2[1:0]). Otherwise, a user setting error is reported and no transfer is issued. +: A source burst transfer must have an aligned address with its data width (start address GPDMA_CxSAR[2:0] versus SDW_LOG2[1:0]). Otherwise, a user setting error is reported and none transfer is issued. */
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

    /** @brief The source address, pointed by GPDMA_CxSAR, is kept constant after a burst beat/single transfer or is incremented by the offset value corresponding to a contiguous data after a burst beat/single transfer. 0: fixed burst 1: contiguously incremented burst */
    using GPDMA_C7TR1_SINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fixed burst (value: 0)
     *          - B_0x1: contiguously incremented burst (value: 1)
     */
        /** @brief fixed burst */
    constexpr std::uint32_t GPDMA_C7TR1_SINC_B_0x0 = 0;
        /** @brief contiguously incremented burst */
    constexpr std::uint32_t GPDMA_C7TR1_SINC_B_0x1 = 1;

    /** @brief The burst length unit is one data named beat within a burst. If SBL_1[5:0] = 0, the burst can be named as single. Each data/beat has a width defined by the destination data width SDW_LOG2[1:0]. Note: If a burst transfer crossed a 1-Kbyte address boundary on a AHB transfer, the GPDMA modifies and shortens the programmed burst into singles or bursts of lower length, to be compliant with the AHB protocol. +: If a burst transfer is of length greater than the FIFO size of the channel 7, the GPDMA modifies and shortens the programmed burst into singles or bursts of lower length, to be compliant with the FIFO size. Transfer performance is lower, with GPDMA re-arbitration between effective and lower singles/bursts, but the data integrity is guaranteed. */
    using GPDMA_C7TR1_SBL_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief If DDW_LOG2[1:0] = SDW_LOG2[1:0]: if the data width of a burst destination transfer is equal to the data width of a burst source transfer, these bits are ignored. */
    using GPDMA_C7TR1_PAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0_COND1: COND1 is [PAM_1] source data is transferred as right aligned, padded with 0s up to the destination data width (value: 0)
     *          - B_0x1_COND1: COND1 is [PAM_1] source data is transferred as right aligned, sign extended up to the destination data width (value: 1)
     *          - B_0x2_COND1: COND1 is [PAM_1] successive source data are FIFO queued and packed at the destination data width, in a left (LSB) to right (MSB) order (named little endian), before a destination transfer (value: 2)
     *          - B_0x3_COND1: COND1 is [PAM_1] successive source data are FIFO queued and packed at the destination data width, in a left (LSB) to right (MSB) order (named little endian), before a destination transfer (value: 3)
     */
        /** @brief COND1 is [PAM_1] source data is transferred as right aligned, padded with 0s up to the destination data width */
    constexpr std::uint32_t GPDMA_C7TR1_PAM_B_0x0_COND1 = 0;
        /** @brief COND1 is [PAM_1] source data is transferred as right aligned, sign extended up to the destination data width */
    constexpr std::uint32_t GPDMA_C7TR1_PAM_B_0x1_COND1 = 1;
        /** @brief COND1 is [PAM_1] successive source data are FIFO queued and packed at the destination data width, in a left (LSB) to right (MSB) order (named little endian), before a destination transfer */
    constexpr std::uint32_t GPDMA_C7TR1_PAM_B_0x2_COND1 = 2;
        /** @brief COND1 is [PAM_1] successive source data are FIFO queued and packed at the destination data width, in a left (LSB) to right (MSB) order (named little endian), before a destination transfer */
    constexpr std::uint32_t GPDMA_C7TR1_PAM_B_0x3_COND1 = 3;

    /** @brief If the source data width is shorter than a word, this bit is ignored. If the source data width is a word: 0: no byte-based exchange within the unaligned half-word of each source word 1: the two consecutive bytes within the unaligned half-word of each source word are exchanged. */
    using GPDMA_C7TR1_SBx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no byte-based exchange within the unaligned half-word of each source word (value: 0)
     *          - B_0x1: the two consecutive bytes within the unaligned half-word of each source word are exchanged. (value: 1)
     */
        /** @brief no byte-based exchange within the unaligned half-word of each source word */
    constexpr std::uint32_t GPDMA_C7TR1_SBx_B_0x0 = 0;
        /** @brief the two consecutive bytes within the unaligned half-word of each source word are exchanged. */
    constexpr std::uint32_t GPDMA_C7TR1_SBx_B_0x1 = 1;

    /** @brief This bit is used to allocate the master port for the source transfer 0: port 0 (AHB) allocated 1: port 1 (AHB) allocated Note: This bit must be written when EN = 0. This bit is read-only when EN = 1. */
    using GPDMA_C7TR1_SAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C7TR1_SAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C7TR1_SAP_B_0x1 = 1;

    /** @brief If GPDMA_SECCFGR.SEC7 = 1 and the access is secure: This is a secure register bit. This bit can only be read by a secure software. This bit must be written by a secure software when GPDMA_SECCFGR.SEC7 = 1. A secure write is ignored when GPDMA_SECCFGR.SEC7 = 0. When GPDMA_SECCFGR.SEC7 is deasserted, this SSEC bit is also deasserted by hardware (on a secure reconfiguration of the channel as non-secure), and the GPDMA transfer from the source is non-secure. 0: GPDMA transfer non-secure 1: GPDMA transfer secure */
    using GPDMA_C7TR1_SSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPDMA transfer non-secure (value: 0)
     *          - B_0x1: GPDMA transfer secure (value: 1)
     */
        /** @brief GPDMA transfer non-secure */
    constexpr std::uint32_t GPDMA_C7TR1_SSEC_B_0x0 = 0;
        /** @brief GPDMA transfer secure */
    constexpr std::uint32_t GPDMA_C7TR1_SSEC_B_0x1 = 1;

    /** @brief None 00: byte 01: half-word (2 bytes) 10: word (4 bytes) 11: user setting error reported and no transfer issued Note: Setting a 8-byte data width causes a user setting error to be reported and none transfer is issued. +: A destination burst transfer must have an aligned address with its data width (start address GPDMA_CxDAR[2:0] and address offset GPDMA_CxTR3.DAO[2:0], versus DDW_LOG2[1:0]). Otherwise a user setting error is reported and no transfer is issued. */
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

    /** @brief The destination address, pointed by GPDMA_CxDAR, is kept constant after a burst beat/single transfer, or is incremented by the offset value corresponding to a contiguous data after a burst beat/single transfer. 0: fixed burst 1: contiguously incremented burst */
    using GPDMA_C7TR1_DINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fixed burst (value: 0)
     *          - B_0x1: contiguously incremented burst (value: 1)
     */
        /** @brief fixed burst */
    constexpr std::uint32_t GPDMA_C7TR1_DINC_B_0x0 = 0;
        /** @brief contiguously incremented burst */
    constexpr std::uint32_t GPDMA_C7TR1_DINC_B_0x1 = 1;

    /** @brief The burst length unit is one data named beat within a burst. If DBL_1[5:0] = 0, the burst can be named as single. Each data/beat has a width defined by the destination data width DDW_LOG2[1:0]. Note: If a burst transfer crossed a 1-Kbyte address boundary on a AHB transfer, the GPDMA modifies and shortens the programmed burst into singles or bursts of lower length, to be compliant with the AHB protocol. +: If a burst transfer is of length greater than the FIFO size of the channel 7, the GPDMA modifies and shortens the programmed burst into singles or bursts of lower length, to be compliant with the FIFO size. Transfer performance is lower, with GPDMA re-arbitration between effective and lower singles/bursts, but the data integrity is guaranteed. */
    using GPDMA_C7TR1_DBL_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief If the destination data size is a byte, this bit is ignored. If the destination data size is not a byte: 0: no byte-based exchange within half-word 1: the two consecutive (post PAM) bytes are exchanged in each destination half-word. */
    using GPDMA_C7TR1_DBx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no byte-based exchange within half-word (value: 0)
     *          - B_0x1: the two consecutive (post PAM) bytes are exchanged in each destination half-word. (value: 1)
     */
        /** @brief no byte-based exchange within half-word */
    constexpr std::uint32_t GPDMA_C7TR1_DBx_B_0x0 = 0;
        /** @brief the two consecutive (post PAM) bytes are exchanged in each destination half-word. */
    constexpr std::uint32_t GPDMA_C7TR1_DBx_B_0x1 = 1;

    /** @brief If the destination data size is shorter than a word, this bit is ignored. If the destination data size is a word: 0: no halfword-based exchanged within word 1: the two consecutive (post PAM) half-words are exchanged in each destination word. */
    using GPDMA_C7TR1_DHx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no halfword-based exchanged within word (value: 0)
     *          - B_0x1: the two consecutive (post PAM) half-words are exchanged in each destination word. (value: 1)
     */
        /** @brief no halfword-based exchanged within word */
    constexpr std::uint32_t GPDMA_C7TR1_DHx_B_0x0 = 0;
        /** @brief the two consecutive (post PAM) half-words are exchanged in each destination word. */
    constexpr std::uint32_t GPDMA_C7TR1_DHx_B_0x1 = 1;

    /** @brief This bit is used to allocate the master port for the destination transfer 0: port 0 (AHB) allocated 1: port 1 (AHB) allocated Note: This bit must be written when EN = 0. This bit is read-only when EN = 1. */
    using GPDMA_C7TR1_DAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C7TR1_DAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C7TR1_DAP_B_0x1 = 1;

    /** @brief If GPDMA_SECCFGR.SEC7 = 1 and the access is secure: This is a secure register bit. This bit can only be read by a secure software. This bit must be written by a secure software when GPDMA_SECCFGR.SEC7 = 1. A secure write is ignored when GPDMA_SECCFGR.SEC7 = 0. When GPDMA_SECCFGR.SEC7 is deasserted, this DSEC bit is also deasserted by hardware (on a secure reconfiguration of the channel as non-secure), and the GPDMA transfer to the destination is non-secure. 0: GPDMA transfer non-secure 1: GPDMA transfer secure */
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
    /** @brief These bits are ignored if channel 7 is activated (GPDMA_C7CR.EN asserted) with SWREQ=1 (software request for a memory-to-memory transfer). Else, the selected hardware request is internally taken into account as per less than xe4 [GPDMA_requests]/>. The user must not assign a same input hardware request (same REQSEL[6:0] value) to different active GPDMA channels (GPDMA_C7CR.EN = 1 and GPDMA_C7TR2.SWREQ = 0 for these channels). GPDMA is not intended to hardware support the case of simultaneous enabled channels incorrectly configured with a same hardware peripheral request signal, and there is no user setting error reporting. */
    using GPDMA_C7TR2_REQSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This bit is internally taken into account when GPDMA_C7CR.EN is asserted. 0: no software request. The selected hardware request REQSEL[6:0] is taken into account. 1: software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[6:0] is ignored. */
    using GPDMA_C7TR2_SWREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no software request. The selected hardware request REQSEL[6:0] is taken into account. (value: 0)
     *          - B_0x1: software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[6:0] is ignored. (value: 1)
     */
        /** @brief no software request. The selected hardware request REQSEL[6:0] is taken into account. */
    constexpr std::uint32_t GPDMA_C7TR2_SWREQ_B_0x0 = 0;
        /** @brief software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[6:0] is ignored. */
    constexpr std::uint32_t GPDMA_C7TR2_SWREQ_B_0x1 = 1;

    /** @brief This bit is ignored if channel 7 is activated (GPDMA_C7CR.EN asserted) with SWREQ = 1 (software request for a memory-to-memory transfer). Else: 0: selected hardware request driven by a source peripheral (request signal taken into account by the GPDMA transfer scheduler over the source/read port) 1: selected hardware request driven by a destination peripheral (request signal taken into account by the GPDMA transfer scheduler over the destination/write port) Note: If the channel 7 is activated (GPDMA_C7CR.EN is asserted) with SWREQ = 0 and PFREQ = 1 (peripheral hardware request with peripheral flow-control mode), any software assertion to this DREQ bit is ignored: in peripheral flow-control mode, only a peripheral-to-memory transfer is supported. */
    using GPDMA_C7TR2_DREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: selected hardware request driven by a source peripheral (request signal taken into account by the GPDMA transfer scheduler over the source/read port) (value: 0)
     *          - B_0x1: selected hardware request driven by a destination peripheral (request signal taken into account by the GPDMA transfer scheduler over the destination/write port) (value: 1)
     */
        /** @brief selected hardware request driven by a source peripheral (request signal taken into account by the GPDMA transfer scheduler over the source/read port) */
    constexpr std::uint32_t GPDMA_C7TR2_DREQ_B_0x0 = 0;
        /** @brief selected hardware request driven by a destination peripheral (request signal taken into account by the GPDMA transfer scheduler over the destination/write port) */
    constexpr std::uint32_t GPDMA_C7TR2_DREQ_B_0x1 = 1;

    /** @brief If the channel 7 is activated (GPDMA_C7CR.EN asserted) with SWREQ = 1 (software request for a memory-to-memory transfer), this bit is ignored. Else: 0: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a burst level. 1: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see less than xe4 [GPDMA_requests]/>). */
    using GPDMA_C7TR2_BREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a burst level. (value: 0)
     *          - B_0x1: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see less than xe4 [GPDMA_requests]/>). (value: 1)
     */
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a burst level. */
    constexpr std::uint32_t GPDMA_C7TR2_BREQ_B_0x0 = 0;
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see less than xe4 [GPDMA_requests]/>). */
    constexpr std::uint32_t GPDMA_C7TR2_BREQ_B_0x1 = 1;

    /** @brief Caution: If a given channel 7 is not implemented with this feature, this bit is reserved and PFREQ is not present (see less than xe1 [GPDMA_channels]/> for the list of the implemented channels with this feature). */
    using GPDMA_C7TR2_PFREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol in GPDMA control mode. The GPDMA is programmed with GPDMA_C7TR1.BNDT[15:0] and this is internally used by the hardware for the block transfer completion. (value: 0)
     *          - B_0x1: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol in peripheral control mode. The GPDMA block transfer can be early completed by the peripheral itself (see less than xe2 [GPDMA_channels_peripheral]/> for more details). (value: 1)
     */
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol in GPDMA control mode. The GPDMA is programmed with GPDMA_C7TR1.BNDT[15:0] and this is internally used by the hardware for the block transfer completion. */
    constexpr std::uint32_t GPDMA_C7TR2_PFREQ_B_0x0 = 0;
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol in peripheral control mode. The GPDMA block transfer can be early completed by the peripheral itself (see less than xe2 [GPDMA_channels_peripheral]/> for more details). */
    constexpr std::uint32_t GPDMA_C7TR2_PFREQ_B_0x1 = 1;

    /** @brief These bits define the transfer granularity for its conditioning by the trigger. If the channel 7 is enabled (GPDMA_C7CR.EN asserted) with TRIGPOL[1:0] = 00 or 11, these TRIGM[1:0] bits are ignored. Else, a GPDMA transfer is conditioned by at least one trigger hit: 00: at block level: the first burst read of each block transfer is conditioned by one hit trigger (channel 7 = 12 to 15, for each block if a 2D/repeated block is configured with GPDMA_C7BR1.BRC[10:0] is not equal to 0). 10: at link level: a LLI link transfer is conditioned by one hit trigger. The LLI data transfer (if any) is not conditioned. 11: at programmed burst level: If SWREQ = 1, each programmed burst read is conditioned by one hit trigger. If SWREQ = 0, each programmed burst that is requested by the selected peripheral, is conditioned by one hit trigger. - If the peripheral is programmed as a source (DREQ = 0) of the LLI data transfer, each programmed burst read is conditioned. - If the peripheral is programmed as a destination (DREQ = 1) of the LLI data transfer, each programmed burst write is conditioned. The first memory burst read of a (possibly 2D/repeated) block, also named as the first ready FIFO-based source burst, is gated by the occurrence of both the hardware request and the first trigger hit.01: channel 7 = 0 to , same as 00; channel 7 , at 2D/repeated block level. The first burst read of a 2D/repeated block transfer is conditioned by one hit trigger. The GPDMA monitoring of a trigger for channel 7 is started when the channel is enabled/loaded with a new active trigger configuration: rising or falling edge on a selected trigger (TRIGPOL[1:0] = 01 or respectively TRIGPOL[1:0]=10). The monitoring of this trigger is kept active during the triggered and uncompleted (data or link) transfer; and if a new trigger is detected then, this hit is internally memorized to grant the next transfer, as long as the defined rising or falling edge is not modified, and the TRIGSEL[5:0] is not modified, and the channel is enabled. Transferring a next LLIn+1 that updates the GPDMA_C7TR2 with a new value for any of TRIGSEL[5:0] or TRIGPOL[1:0], resets the monitoring, trashing the memorized hit of the formerly defined LLIn trigger. After a first new trigger hitn+1 is memorized, if another second trigger hitn+2 is detected and if the hitn triggered transfer is still not completed, hitn+2 is lost and not memorized.memorized. A trigger overrun flag is reported (GPDMA_C7SR.TOF=1), and an interrupt is generated if enabled (GPDMA_C7CR.TOIE = 1). The channel is not automatically disabled by hardware due to a trigger overrun. Note: When the source block size is not a multiple of the source burst size and is a multiple of the source data width, then the last programmed source burst is not completed and is internally shorten to match the block size. In this case, if TRIGM[1:0] = 11 and (SWREQ = 1 or (SWREQ = 0 and DREQ = 0)), the shortened burst transfer (by singles or/and by bursts of lower length) is conditioned once by the trigger. +: When the programmed destination burst is internally shortened by singles or/and by bursts of lower length (versus FIFO size, versus block size, 1-Kbyte boundary address crossing): if the trigger is conditioning the programmed destination burst (if TRIGM[1:0] = 11 and SWREQ = 0 and DREQ = 1), this shortened destination burst transfer is conditioned once by the trigger. */
    using GPDMA_C7TR2_TRIGM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief These bits select the trigger event input of the GPDMA transfer (as per less than xe3 [GPDMA_triggers]/>), with anactive trigger event if TRIGPOL[1:0] is not equal to 00. */
    using GPDMA_C7TR2_TRIGSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief These bits define the polarity of the selected trigger event input defined by TRIGSEL[5:0]. 00: no trigger (masked trigger event) 01: trigger on the rising edge 10: trigger on the falling edge 11: same as 00 */
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

    /** @brief These bits define the transfer granularity for the transfer complete and half transfer complete events generation. 00: at block level (when GPDMA_C7BR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. 01: channel 7 (0 to ), same as 00, channel 7 , at 2D/repeated block level (when GPDMA_C7BR1.BRC[10:0] = 0 and GPDMA_C7BR1.BNDT[15:0] = 0). The complete (and the half) transfer event is generated at the end (respectively half of the end) of the 2D/repeated block. 10: at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer. The LLI data transfer is a block transfer or a 2D/repeated block transfer for channel 7 , if any data transfer. 11: at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address GPDMA_C7LLR.LA[15:2] to zero and clears all the GPDMA_C7LLR update bits (UT1, UT2, UB1, USA, UDA and ULL, plus UT3 and UB2). If the channel transfer is continuous/infinite, no event is generated. Note: If the initial LLI0 data transfer is null/void (directly programmed by the internal register file with GPDMA_C7BR1.BNDT[15:0] = 0), then neither the complete transfer event nor the half transfer event is generated. +: If the initial LLI0 data transfer is null/void (directly programmed by the internal register file with GPDMA_C7BR1.BNDT[15:0] = 0), then neither the complete transfer event nor the half transfer event is generated. +: If the initial LLI0 data transfer is null/void (directly programmed by the internal register file with GPDMA_C7BR1.BNDT[15:0] = 0), then the half transfer event is not generated, and the transfer complete event is generated when is completed the loading of the LLI1. */
    using GPDMA_C7TR2_TCEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: at block level (when GPDMA_C7BR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. (value: 0)
     *          - B_0x1: channel 7 (0 to ), same as 00, channel 7 , at 2D/repeated block level (when GPDMA_C7BR1.BRC[10:0] = 0 and GPDMA_C7BR1.BNDT[15:0] = 0). The complete (and the half) transfer event is generated at the end (respectively half of the end) of the 2D/repeated block. (value: 1)
     *          - B_0x2: at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer. The LLI data transfer is a block transfer or a 2D/repeated block transfer for channel 7 , if any data transfer. (value: 2)
     *          - B_0x3: at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address GPDMA_C7LLR.LA[15:2] to zero and clears all the GPDMA_C7LLR update bits (UT1, UT2, UB1, USA, UDA and ULL, plus UT3 and UB2). If the channel transfer is continuous/infinite, no event is generated. (value: 3)
     */
        /** @brief at block level (when GPDMA_C7BR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. */
    constexpr std::uint32_t GPDMA_C7TR2_TCEM_B_0x0 = 0;
        /** @brief channel 7 (0 to ), same as 00, channel 7 , at 2D/repeated block level (when GPDMA_C7BR1.BRC[10:0] = 0 and GPDMA_C7BR1.BNDT[15:0] = 0). The complete (and the half) transfer event is generated at the end (respectively half of the end) of the 2D/repeated block. */
    constexpr std::uint32_t GPDMA_C7TR2_TCEM_B_0x1 = 1;
        /** @brief at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer. The LLI data transfer is a block transfer or a 2D/repeated block transfer for channel 7 , if any data transfer. */
    constexpr std::uint32_t GPDMA_C7TR2_TCEM_B_0x2 = 2;
        /** @brief at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address GPDMA_C7LLR.LA[15:2] to zero and clears all the GPDMA_C7LLR update bits (UT1, UT2, UB1, USA, UDA and ULL, plus UT3 and UB2). If the channel transfer is continuous/infinite, no event is generated. */
    constexpr std::uint32_t GPDMA_C7TR2_TCEM_B_0x3 = 3;

    /** @brief GPDMA channel 7 block register 1 */
    using GPDMA_C7BR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x418, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Block size transferred from the source. When the channel is enabled, this field becomes read-only and is decremented, indicating the remaining number of data items in the current source block to be transferred. BNDT[15:0] is programmed in number of bytes, maximum source block size is 64 Kbytes -1. Once the last data transfer is completed (BNDT[15:0] = 0): - if GPDMA_C7LLR.UB1 = 1, this field is updated by the LLI in the memory. - if GPDMA_C7LLR.UB1 = 0 and if there is at least one not null Uxx update bit, this field is internally restored to the programmed value. - if all GPDMA_C7LLR.Uxx = 0 and if GPDMA_C7LLR.LA[15:0] is not equal to 0, this field is internally restored to the programmed value (infinite/continuous last LLI). - if GPDMA_C7LLR = 0, this field is kept as zero following the last LLI data transfer. Note: A non-null source block size must be a multiple of the source data width (BNDT[2:0] versus GPDMA_C7TR1.SDW_LOG2[1:0]). Else a user setting error is reported and no transfer is issued. +: When configured in packing mode (GPDMA_C7TR1.PAM[1] = 1 and destination data width different from source data width), a non-null source block size must be a multiple of the destination data width (BNDT[2:0] versus GPDMA_C7TR1.DDW_LOG2[1:0]). Else a user setting error is reported and no transfer is issued. */
    using GPDMA_C7BR1_BNDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 7 source address register */
    using GPDMA_C7SAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x41C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This field is the pointer to the address from which the next data is read. During the channel activity, depending on the source addressing mode (GPDMA_C7TR1.SINC), this field is kept fixed or incremented by the data width (GPDMA_C7TR1.SDW_LOG2[1:0]) after each burst source data, reflecting the next address from which data is read. During the channel activity, this address is updated after each completed source burst, consequently to: - the programmed source burst; either in fixed addressing mode or in contiguous-data incremented mode. If contiguously incremented (GPDMA_C7TR1.SINC = 1), then the additional address offset value is the programmed burst size, as defined by GPDMA_C7TR1.SBL_1[5:0] and GPDMA_C7TR1.SDW_LOG2[21:0] - the additional source incremented/decremented offset value as programmed by GPDMA_C7BR1.SDEC and GPDMA_CxTR3.SAO[12:0]. - once/if completed source block transfer, for a channel 7 with 2D addressing capability (x = 12 to 15). additional block repeat source incremented/decremented offset value as programmed by GPDMA_C7BR1.BRSDEC and GPDMA_CxBR2.BRSAO[15:0] In linked-list mode, after a LLI data transfer is completed, this register is automatically updated by GPDMA from the memory, provided the LLI is set with GPDMA_C7LLR.USA = 1. Note: A source address must be aligned with the programmed data width of a source burst (SA[2:0] versus GPDMA_C7TR1.SDW_LOG2[1:0]). Else, a user setting error is reported and no transfer is issued. +: When the source block size is not a multiple of the source burst size and is a multiple of the source data width, the last programmed source burst is not completed and is internally shorten to match the block size. In this case, the additional GPDMA_CxTR3.SAO[12:0] is not applied. */
    using GPDMA_C7SAR_SA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 7 destination address register */
    using GPDMA_C7DAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x420, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This field is the pointer to the address from which the next data is written. During the channel activity, depending on the destination addressing mode (GPDMA_C7TR1.DINC), this field is kept fixed or incremented by the data width (GPDMA_C7TR1.DDW_LOG2[21:0]) after each burst destination data, reflecting the next address from which data is written. During the channel activity, this address is updated after each completed destination burst, consequently to: - the programmed destination burst; either in fixed addressing mode or in contiguous-data incremented mode. If contiguously incremented (GPDMA_C7TR1.DINC = 1), then the additional address offset value is the programmed burst size, as defined by GPDMA_C7TR1.DBL_1[5:0] and GPDMA_C7TR1.DDW_LOG2[1:0] - the additional destination incremented/decremented offset value as programmed by GPDMA_C7BR1.DDEC and GPDMA_CxTR3.DAO[12:0]. - once/if completed destination block transfer, for a channel 7 with 2D addressing capability (x=12to15), the additional block repeat destination incremented/decremented offset value as programmed by GPDMA_C7BR1.BRDDEC and GPDMA_CxBR2.BRDAO[15:0] In linked-list mode, after a LLI data transfer is completed, this register is automatically updated by the GPDMA from the memory, provided the LLI is set with GPDMA_C7LLR.UDA = 1. Note: A destination address must be aligned with the programmed data width of a destination burst (DA[2:0] versus GPDMA_C7TR1.DDW_LOG2[1:0]). Else, a user setting error is reported and no transfer is issued. */
    using GPDMA_C7DAR_DA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 7 linked-list address register */
    using GPDMA_C7LLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief If UT1 = UT2 = UB1 = USA = UDA = ULL = 0 and if LA[15:20] = 0, the current LLI is the last one. The channel transfer is completed without any update of the linked-list GPDMA register file. Else, this field is the pointer to the memory address offset from which the next linked-list data structure is automatically fetched from, once the data transfer is completed, in order to conditionally update the linked-list GPDMA internal register file (GPDMA_C7TR1, GPDMA_C7TR2, GPDMA_C7BR1, GPDMA_CxSAR, GPDMA_CxDAR and GPDMA_C7LLR). Note: The user must program the pointer to be 32-bit aligned. The two low-significant bits are write ignored. */
    using GPDMA_C7LLR_LA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This bit is used to control the update of GPDMA_C7LLR from the memory during the link transfer. 0: no GPDMA_C7LLR update 1: GPDMA_C7LLR update */
    using GPDMA_C7LLR_ULL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_C7LLR update (value: 0)
     *          - B_0x1: GPDMA_C7LLR update (value: 1)
     */
        /** @brief no GPDMA_C7LLR update */
    constexpr std::uint32_t GPDMA_C7LLR_ULL_B_0x0 = 0;
        /** @brief GPDMA_C7LLR update */
    constexpr std::uint32_t GPDMA_C7LLR_ULL_B_0x1 = 1;

    /** @brief This bit is used to control the update of GPDMA_CxDAR from the memory during the link transfer. 0: no GPDMA_CxDAR update 1: GPDMA_CxDAR update */
    using GPDMA_C7LLR_UDA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxDAR update (value: 0)
     *          - B_0x1: GPDMA_CxDAR update (value: 1)
     */
        /** @brief no GPDMA_CxDAR update */
    constexpr std::uint32_t GPDMA_C7LLR_UDA_B_0x0 = 0;
        /** @brief GPDMA_CxDAR update */
    constexpr std::uint32_t GPDMA_C7LLR_UDA_B_0x1 = 1;

    /** @brief This bit controls the update of GPDMA_CxSAR from the memory during the link transfer. 0: no GPDMA_CxSAR update 1: GPDMA_CxSAR update */
    using GPDMA_C7LLR_USA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxSAR update (value: 0)
     *          - B_0x1: GPDMA_CxSAR update (value: 1)
     */
        /** @brief no GPDMA_CxSAR update */
    constexpr std::uint32_t GPDMA_C7LLR_USA_B_0x0 = 0;
        /** @brief GPDMA_CxSAR update */
    constexpr std::uint32_t GPDMA_C7LLR_USA_B_0x1 = 1;

    /** @brief This bit controls the update of GPDMA_C7BR1 from the memory during the link transfer. If UB1 = 0 and if GPDMA_C7LLR is not equal to 0, the linked-list is not completed. GPDMA_C7BR1.BNDT[15:0] is then restored to the programmed value after data transfer is completed and before the link transfer. 0: no GPDMA_C7BR1 update from memory (GPDMA_C7BR1.BNDT[15:0] restored if any link transfer) 1: GPDMA_C7BR1 update */
    using GPDMA_C7LLR_UB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_C7BR1 update from memory (GPDMA_C7BR1.BNDT[15:0] restored if any link transfer) (value: 0)
     *          - B_0x1: GPDMA_C7BR1 update (value: 1)
     */
        /** @brief no GPDMA_C7BR1 update from memory (GPDMA_C7BR1.BNDT[15:0] restored if any link transfer) */
    constexpr std::uint32_t GPDMA_C7LLR_UB1_B_0x0 = 0;
        /** @brief GPDMA_C7BR1 update */
    constexpr std::uint32_t GPDMA_C7LLR_UB1_B_0x1 = 1;

    /** @brief This bit controls the update of GPDMA_C7TR2 from the memory during the link transfer. 0: no GPDMA_C7TR2 update 1: GPDMA_C7TR2 update */
    using GPDMA_C7LLR_UT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_C7TR2 update (value: 0)
     *          - B_0x1: GPDMA_C7TR2 update (value: 1)
     */
        /** @brief no GPDMA_C7TR2 update */
    constexpr std::uint32_t GPDMA_C7LLR_UT2_B_0x0 = 0;
        /** @brief GPDMA_C7TR2 update */
    constexpr std::uint32_t GPDMA_C7LLR_UT2_B_0x1 = 1;

    /** @brief This bit controls the update of GPDMA_C7TR1 from the memory during the link transfer. 0: no GPDMA_C7TR1 update 1: GPDMA_C7TR1 update */
    using GPDMA_C7LLR_UT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_C7TR1 update (value: 0)
     *          - B_0x1: GPDMA_C7TR1 update (value: 1)
     */
        /** @brief no GPDMA_C7TR1 update */
    constexpr std::uint32_t GPDMA_C7LLR_UT1_B_0x0 = 0;
        /** @brief GPDMA_C7TR1 update */
    constexpr std::uint32_t GPDMA_C7LLR_UT1_B_0x1 = 1;

    /** @brief GPDMA channel 8 linked-list base address register */
    using GPDMA_C8LBAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x450, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief None */
    using GPDMA_C8LBAR_LBA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 8 flag clear register */
    using GPDMA_C8FCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x45C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief None 0: no effect 1: corresponding TCF flag cleared */
    using GPDMA_C8FCR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding TCF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C8FCR_TCF_B_0x0 = 0;
        /** @brief corresponding TCF flag cleared */
    constexpr std::uint32_t GPDMA_C8FCR_TCF_B_0x1 = 1;

    /** @brief None 0: no effect 1: corresponding HTF flag cleared */
    using GPDMA_C8FCR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding HTF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C8FCR_HTF_B_0x0 = 0;
        /** @brief corresponding HTF flag cleared */
    constexpr std::uint32_t GPDMA_C8FCR_HTF_B_0x1 = 1;

    /** @brief None 0: no effect 1: corresponding DTEF flag cleared */
    using GPDMA_C8FCR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding DTEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C8FCR_DTEF_B_0x0 = 0;
        /** @brief corresponding DTEF flag cleared */
    constexpr std::uint32_t GPDMA_C8FCR_DTEF_B_0x1 = 1;

    /** @brief None 0: no effect 1: corresponding ULEF flag cleared */
    using GPDMA_C8FCR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding ULEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C8FCR_ULEF_B_0x0 = 0;
        /** @brief corresponding ULEF flag cleared */
    constexpr std::uint32_t GPDMA_C8FCR_ULEF_B_0x1 = 1;

    /** @brief None 0: no effect 1: corresponding USEF flag cleared */
    using GPDMA_C8FCR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding USEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C8FCR_USEF_B_0x0 = 0;
        /** @brief corresponding USEF flag cleared */
    constexpr std::uint32_t GPDMA_C8FCR_USEF_B_0x1 = 1;

    /** @brief None 0: no effect 1: corresponding SUSPF flag cleared */
    using GPDMA_C8FCR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding SUSPF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C8FCR_SUSPF_B_0x0 = 0;
        /** @brief corresponding SUSPF flag cleared */
    constexpr std::uint32_t GPDMA_C8FCR_SUSPF_B_0x1 = 1;

    /** @brief None 0: no effect 1: corresponding TOF flag cleared */
    using GPDMA_C8FCR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding TOF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C8FCR_TOF_B_0x0 = 0;
        /** @brief corresponding TOF flag cleared */
    constexpr std::uint32_t GPDMA_C8FCR_TOF_B_0x1 = 1;

    /** @brief GPDMA channel 8 status register */
    using GPDMA_C8SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x460, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This idle flag is deasserted by hardware when the channel is enabled (GPDMA_C8CR.EN = 1) with a valid channel configuration (no USEF to be immediately reported). This idle flag is asserted after hard reset or by hardware when the channel is back in idle state (in suspended or disabled state). 0: channel not in idle state 1: channel in idle state */
    using GPDMA_C8SR_IDLEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: channel not in idle state (value: 0)
     *          - B_0x1: channel in idle state (value: 1)
     */
        /** @brief channel not in idle state */
    constexpr std::uint32_t GPDMA_C8SR_IDLEF_B_0x0 = 0;
        /** @brief channel in idle state */
    constexpr std::uint32_t GPDMA_C8SR_IDLEF_B_0x1 = 1;

    /** @brief A transfer complete event is either a block transfer complete, a 2D/repeated block transfer complete, or a LLI transfer complete including the upload of the next LLI if any, or the full linked-list completion, depending on the transfer complete event mode (GPDMA_C8TR2.TCEM[1:0]). 0: no transfer complete event 1: a transfer complete event occurred */
    using GPDMA_C8SR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no transfer complete event (value: 0)
     *          - B_0x1: a transfer complete event occurred (value: 1)
     */
        /** @brief no transfer complete event */
    constexpr std::uint32_t GPDMA_C8SR_TCF_B_0x0 = 0;
        /** @brief a transfer complete event occurred */
    constexpr std::uint32_t GPDMA_C8SR_TCF_B_0x1 = 1;

    /** @brief A half transfer event is either a half block transfer or a half 2D/repeated block transfer, depending on the transfer complete event mode (GPDMA_C8TR2.TCEM[1:0]). A half block transfer occurs when half of the bytes of the source block size (rounded up integer of GPDMA_C8BR1.BNDT[15:0]/2) has been transferred to the destination. A half 2D/repeated block transfer occurs when half of the repeated blocks (rounded up integer of (GPDMA_C8BR1.BRC[10:0]+1)/2)) has been transferred to the destination. 0: no half transfer event 1: a half transfer event occurred */
    using GPDMA_C8SR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no half transfer event (value: 0)
     *          - B_0x1: a half transfer event occurred (value: 1)
     */
        /** @brief no half transfer event */
    constexpr std::uint32_t GPDMA_C8SR_HTF_B_0x0 = 0;
        /** @brief a half transfer event occurred */
    constexpr std::uint32_t GPDMA_C8SR_HTF_B_0x1 = 1;

    /** @brief None 0: no data transfer error event 1: a master bus error event occurred on a data transfer */
    using GPDMA_C8SR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no data transfer error event (value: 0)
     *          - B_0x1: a master bus error event occurred on a data transfer (value: 1)
     */
        /** @brief no data transfer error event */
    constexpr std::uint32_t GPDMA_C8SR_DTEF_B_0x0 = 0;
        /** @brief a master bus error event occurred on a data transfer */
    constexpr std::uint32_t GPDMA_C8SR_DTEF_B_0x1 = 1;

    /** @brief None 0: no update link transfer error event 1: a master bus error event occurred while updating a linked-list register from memory */
    using GPDMA_C8SR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no update link transfer error event (value: 0)
     *          - B_0x1: a master bus error event occurred while updating a linked-list register from memory (value: 1)
     */
        /** @brief no update link transfer error event */
    constexpr std::uint32_t GPDMA_C8SR_ULEF_B_0x0 = 0;
        /** @brief a master bus error event occurred while updating a linked-list register from memory */
    constexpr std::uint32_t GPDMA_C8SR_ULEF_B_0x1 = 1;

    /** @brief None 0: no user setting error event 1: a user setting error event occurred */
    using GPDMA_C8SR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no user setting error event (value: 0)
     *          - B_0x1: a user setting error event occurred (value: 1)
     */
        /** @brief no user setting error event */
    constexpr std::uint32_t GPDMA_C8SR_USEF_B_0x0 = 0;
        /** @brief a user setting error event occurred */
    constexpr std::uint32_t GPDMA_C8SR_USEF_B_0x1 = 1;

    /** @brief None 0: no completed suspension event 1: a completed suspension event occurred */
    using GPDMA_C8SR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no completed suspension event (value: 0)
     *          - B_0x1: a completed suspension event occurred (value: 1)
     */
        /** @brief no completed suspension event */
    constexpr std::uint32_t GPDMA_C8SR_SUSPF_B_0x0 = 0;
        /** @brief a completed suspension event occurred */
    constexpr std::uint32_t GPDMA_C8SR_SUSPF_B_0x1 = 1;

    /** @brief None 0: no trigger overrun event 1: a trigger overrun event occurred */
    using GPDMA_C8SR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no trigger overrun event (value: 0)
     *          - B_0x1: a trigger overrun event occurred (value: 1)
     */
        /** @brief no trigger overrun event */
    constexpr std::uint32_t GPDMA_C8SR_TOF_B_0x0 = 0;
        /** @brief a trigger overrun event occurred */
    constexpr std::uint32_t GPDMA_C8SR_TOF_B_0x1 = 1;

    /** @brief Number of available write beats in the FIFO, in units of the programmed destination data width (see GPDMA_C8TR1.DDW_LOG2[1:0], in units of bytes, half-words, or words). Note: After having suspended an active transfer, the user may need to read FIFOL[7:0], additionally to GPDMA_C8BR1.BDNT[15:0] and GPDMA_C8BR1.BRC[10:0], to know how many data have been transferred to the destination. Before reading, the user may wait for the transfer to be suspended (GPDMA_C8SR.SUSPF = 1). */
    using GPDMA_C8SR_FIFOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 8 control register */
    using GPDMA_C8CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x464, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Writing 1 into the field RESET (bit 1) causes the hardware to de-assert this bit, whatever is written into this bit 0. Else: this bit is deasserted by hardware when there is a transfer error (master bus error or user setting error) or when there is a channel transfer complete (channel ready to be configured, for example if LSM = 1 at the end of a single execution of the LLI). Else, this bit can be asserted by software. Writing 0 into this EN bit is ignored. 0: write: ignored, read: channel disabled 1: write: enable channel, read: channel enabled */
    using GPDMA_C8CR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write: ignored, read: channel disabled (value: 0)
     *          - B_0x1: write: enable channel, read: channel enabled (value: 1)
     */
        /** @brief write: ignored, read: channel disabled */
    constexpr std::uint32_t GPDMA_C8CR_EN_B_0x0 = 0;
        /** @brief write: enable channel, read: channel enabled */
    constexpr std::uint32_t GPDMA_C8CR_EN_B_0x1 = 1;

    /** @brief This bit is write only. Writing 0 has no impact. Writing 1 implies the reset of the following: the FIFO, the channel internal state, SUSP and EN bits (whatever is written receptively in bit 2 and bit 0). The reset is effective when the channel is in steady state, meaning one of the following: - active channel in suspended state (GPDMA_C8SR.SUSPF = 1 and GPDMA_C8SR.IDLEF=GPDMA_C8CR.EN = 1) - channel in disabled state (GPDMA_C8SR.IDLEF = 1 and GPDMA_C8CR.EN = 0). After writing a RESET, to continue using this channel, the user must explicitly reconfigure the channel including the hardware-modified configuration registers (GPDMA_C8BR1, GPDMA_CxSAR and GPDMA_CxDAR) before enabling again the channel (see the programming sequence in less than xe6 [GPDMA_abort_restart/ID00-1465]/>). 0: no channel reset 1: channel reset */
    using GPDMA_C8CR_RESET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no channel reset (value: 0)
     *          - B_0x1: channel reset (value: 1)
     */
        /** @brief no channel reset */
    constexpr std::uint32_t GPDMA_C8CR_RESET_B_0x0 = 0;
        /** @brief channel reset */
    constexpr std::uint32_t GPDMA_C8CR_RESET_B_0x1 = 1;

    /** @brief Writing 1 into the field RESET (bit 1) causes the hardware to de-assert this bit, whatever is written into this bit 2. Else: Software must write 1 in order to suspend an active channel (channel with an ongoing GPDMA transfer over its master ports). The software must write 0 in order to resume a suspended channel, following the programming sequence detailed in less than xe5 [GPDMA_channel_suspend_and_resume/ID00-1456]/>. 0: write: resume channel, read: channel not suspended 1: write: suspend channel, read: channel suspended. */
    using GPDMA_C8CR_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write: resume channel, read: channel not suspended (value: 0)
     *          - B_0x1: write: suspend channel, read: channel suspended. (value: 1)
     */
        /** @brief write: resume channel, read: channel not suspended */
    constexpr std::uint32_t GPDMA_C8CR_SUSP_B_0x0 = 0;
        /** @brief write: suspend channel, read: channel suspended. */
    constexpr std::uint32_t GPDMA_C8CR_SUSP_B_0x1 = 1;

    /** @brief None 0: interrupt disabled 1: interrupt enabled */
    using GPDMA_C8CR_TCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C8CR_TCIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C8CR_TCIE_B_0x1 = 1;

    /** @brief None 0: interrupt disabled 1: interrupt enabled */
    using GPDMA_C8CR_HTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C8CR_HTIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C8CR_HTIE_B_0x1 = 1;

    /** @brief None 0: interrupt disabled 1: interrupt enabled */
    using GPDMA_C8CR_DTEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C8CR_DTEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C8CR_DTEIE_B_0x1 = 1;

    /** @brief None 0: interrupt disabled 1: interrupt enabled */
    using GPDMA_C8CR_ULEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C8CR_ULEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C8CR_ULEIE_B_0x1 = 1;

    /** @brief None 0: interrupt disabled 1: interrupt enabled */
    using GPDMA_C8CR_USEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C8CR_USEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C8CR_USEIE_B_0x1 = 1;

    /** @brief None 0: interrupt disabled 1: interrupt enabled */
    using GPDMA_C8CR_SUSPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C8CR_SUSPIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C8CR_SUSPIE_B_0x1 = 1;

    /** @brief None 0: interrupt disabled 1: interrupt enabled */
    using GPDMA_C8CR_TOIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C8CR_TOIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C8CR_TOIE_B_0x1 = 1;

    /** @brief First the (possible 1D/repeated) block transfer is executed as defined by the current internal register file until GPDMA_C8BR1.BNDT[15:0] = 0 and GPDMA_C8BR1.BRC[10:0] = 0. Secondly the next linked-list data structure is conditionally uploaded from memory as defined by GPDMA_C8LLR. Then channel execution is completed. 0: channel executed for the full linked-list and completed at the end of the last LLI (GPDMA_C8LLR = 0). The 16 low-significant bits of the link address are null (LA[15:0] = 0) and all the update bits are null (UT1 = UB1 = UT2 = USA = UDA = ULL = 0 and UT3 = UB2 = 0). Then GPDMA_C8BR1.BNDT[15:0] = 0 and GPDMA_C8BR1.BRC[10:0] = 0. 1: channel executed once for the current LLI Note: This bit must be written when EN = 0. This bit is read-only when EN = 1. */
    using GPDMA_C8CR_LSM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: channel executed for the full linked-list and completed at the end of the last LLI (GPDMA_C8LLR = 0). The 16 low-significant bits of the link address are null (LA[15:0] = 0) and all the update bits are null (UT1 = UB1 = UT2 = USA = UDA = ULL = 0 and UT3 = UB2 = 0). Then GPDMA_C8BR1.BNDT[15:0] = 0 and GPDMA_C8BR1.BRC[10:0] = 0. (value: 0)
     *          - B_0x1: channel executed once for the current LLI (value: 1)
     */
        /** @brief channel executed for the full linked-list and completed at the end of the last LLI (GPDMA_C8LLR = 0). The 16 low-significant bits of the link address are null (LA[15:0] = 0) and all the update bits are null (UT1 = UB1 = UT2 = USA = UDA = ULL = 0 and UT3 = UB2 = 0). Then GPDMA_C8BR1.BNDT[15:0] = 0 and GPDMA_C8BR1.BRC[10:0] = 0. */
    constexpr std::uint32_t GPDMA_C8CR_LSM_B_0x0 = 0;
        /** @brief channel executed once for the current LLI */
    constexpr std::uint32_t GPDMA_C8CR_LSM_B_0x1 = 1;

    /** @brief This bit is used to allocate the master port for the update of the GPDMA linked-list registers from the memory. 0: port 0 (AHB) allocated 1: port 1 (AHB) allocated Note: This bit must be written when EN = 0. This bit is read-only when EN = 1. */
    using GPDMA_C8CR_LAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C8CR_LAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C8CR_LAP_B_0x1 = 1;

    /** @brief None 00: low priority, low weight 01: low priority, mid weight 10: low priority, high weight 11: high priority Note: This bit must be written when EN = 0. This bit is read-only when EN = 1. */
    using GPDMA_C8CR_PRIO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: low priority, low weight (value: 0)
     *          - B_0x1: low priority, mid weight (value: 1)
     *          - B_0x2: low priority, high weight (value: 2)
     *          - B_0x3: high priority (value: 3)
     */
        /** @brief low priority, low weight */
    constexpr std::uint32_t GPDMA_C8CR_PRIO_B_0x0 = 0;
        /** @brief low priority, mid weight */
    constexpr std::uint32_t GPDMA_C8CR_PRIO_B_0x1 = 1;
        /** @brief low priority, high weight */
    constexpr std::uint32_t GPDMA_C8CR_PRIO_B_0x2 = 2;
        /** @brief high priority */
    constexpr std::uint32_t GPDMA_C8CR_PRIO_B_0x3 = 3;

    /** @brief GPDMA channel 8 transfer register 1 */
    using GPDMA_C8TR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x490, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief None 00: byte 01: half-word (2 bytes) 10: word (4 bytes) 11: user setting error reported and no transfer issued Note: Setting a 8-byte data width causes a user setting error to be reported and no transfer is issued. +: A source block size must be a multiple of the source data width (GPDMA_C8BR1.BNDT[2:0] versus SDW_LOG2[1:0]). Otherwise, a user setting error is reported and no transfer is issued. +: A source burst transfer must have an aligned address with its data width (start address GPDMA_CxSAR[2:0] versus SDW_LOG2[1:0]). Otherwise, a user setting error is reported and none transfer is issued. */
    using GPDMA_C8TR1_SDW_LOG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: byte (value: 0)
     *          - B_0x1: half-word (2 bytes) (value: 1)
     *          - B_0x2: word (4 bytes) (value: 2)
     *          - B_0x3: user setting error reported and no transfer issued (value: 3)
     */
        /** @brief byte */
    constexpr std::uint32_t GPDMA_C8TR1_SDW_LOG2_B_0x0 = 0;
        /** @brief half-word (2 bytes) */
    constexpr std::uint32_t GPDMA_C8TR1_SDW_LOG2_B_0x1 = 1;
        /** @brief word (4 bytes) */
    constexpr std::uint32_t GPDMA_C8TR1_SDW_LOG2_B_0x2 = 2;
        /** @brief user setting error reported and no transfer issued */
    constexpr std::uint32_t GPDMA_C8TR1_SDW_LOG2_B_0x3 = 3;

    /** @brief The source address, pointed by GPDMA_CxSAR, is kept constant after a burst beat/single transfer or is incremented by the offset value corresponding to a contiguous data after a burst beat/single transfer. 0: fixed burst 1: contiguously incremented burst */
    using GPDMA_C8TR1_SINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fixed burst (value: 0)
     *          - B_0x1: contiguously incremented burst (value: 1)
     */
        /** @brief fixed burst */
    constexpr std::uint32_t GPDMA_C8TR1_SINC_B_0x0 = 0;
        /** @brief contiguously incremented burst */
    constexpr std::uint32_t GPDMA_C8TR1_SINC_B_0x1 = 1;

    /** @brief The burst length unit is one data named beat within a burst. If SBL_1[5:0] = 0, the burst can be named as single. Each data/beat has a width defined by the destination data width SDW_LOG2[1:0]. Note: If a burst transfer crossed a 1-Kbyte address boundary on a AHB transfer, the GPDMA modifies and shortens the programmed burst into singles or bursts of lower length, to be compliant with the AHB protocol. +: If a burst transfer is of length greater than the FIFO size of the channel 8, the GPDMA modifies and shortens the programmed burst into singles or bursts of lower length, to be compliant with the FIFO size. Transfer performance is lower, with GPDMA re-arbitration between effective and lower singles/bursts, but the data integrity is guaranteed. */
    using GPDMA_C8TR1_SBL_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief If DDW_LOG2[1:0] = SDW_LOG2[1:0]: if the data width of a burst destination transfer is equal to the data width of a burst source transfer, these bits are ignored. */
    using GPDMA_C8TR1_PAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0_COND1: COND1 is [PAM_1] source data is transferred as right aligned, padded with 0s up to the destination data width (value: 0)
     *          - B_0x1_COND1: COND1 is [PAM_1] source data is transferred as right aligned, sign extended up to the destination data width (value: 1)
     *          - B_0x2_COND1: COND1 is [PAM_1] successive source data are FIFO queued and packed at the destination data width, in a left (LSB) to right (MSB) order (named little endian), before a destination transfer (value: 2)
     *          - B_0x3_COND1: COND1 is [PAM_1] successive source data are FIFO queued and packed at the destination data width, in a left (LSB) to right (MSB) order (named little endian), before a destination transfer (value: 3)
     */
        /** @brief COND1 is [PAM_1] source data is transferred as right aligned, padded with 0s up to the destination data width */
    constexpr std::uint32_t GPDMA_C8TR1_PAM_B_0x0_COND1 = 0;
        /** @brief COND1 is [PAM_1] source data is transferred as right aligned, sign extended up to the destination data width */
    constexpr std::uint32_t GPDMA_C8TR1_PAM_B_0x1_COND1 = 1;
        /** @brief COND1 is [PAM_1] successive source data are FIFO queued and packed at the destination data width, in a left (LSB) to right (MSB) order (named little endian), before a destination transfer */
    constexpr std::uint32_t GPDMA_C8TR1_PAM_B_0x2_COND1 = 2;
        /** @brief COND1 is [PAM_1] successive source data are FIFO queued and packed at the destination data width, in a left (LSB) to right (MSB) order (named little endian), before a destination transfer */
    constexpr std::uint32_t GPDMA_C8TR1_PAM_B_0x3_COND1 = 3;

    /** @brief If the source data width is shorter than a word, this bit is ignored. If the source data width is a word: 0: no byte-based exchange within the unaligned half-word of each source word 1: the two consecutive bytes within the unaligned half-word of each source word are exchanged. */
    using GPDMA_C8TR1_SBx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no byte-based exchange within the unaligned half-word of each source word (value: 0)
     *          - B_0x1: the two consecutive bytes within the unaligned half-word of each source word are exchanged. (value: 1)
     */
        /** @brief no byte-based exchange within the unaligned half-word of each source word */
    constexpr std::uint32_t GPDMA_C8TR1_SBx_B_0x0 = 0;
        /** @brief the two consecutive bytes within the unaligned half-word of each source word are exchanged. */
    constexpr std::uint32_t GPDMA_C8TR1_SBx_B_0x1 = 1;

    /** @brief This bit is used to allocate the master port for the source transfer 0: port 0 (AHB) allocated 1: port 1 (AHB) allocated Note: This bit must be written when EN = 0. This bit is read-only when EN = 1. */
    using GPDMA_C8TR1_SAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C8TR1_SAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C8TR1_SAP_B_0x1 = 1;

    /** @brief If GPDMA_SECCFGR.SEC8 = 1 and the access is secure: This is a secure register bit. This bit can only be read by a secure software. This bit must be written by a secure software when GPDMA_SECCFGR.SEC8 = 1. A secure write is ignored when GPDMA_SECCFGR.SEC8 = 0. When GPDMA_SECCFGR.SEC8 is deasserted, this SSEC bit is also deasserted by hardware (on a secure reconfiguration of the channel as non-secure), and the GPDMA transfer from the source is non-secure. 0: GPDMA transfer non-secure 1: GPDMA transfer secure */
    using GPDMA_C8TR1_SSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPDMA transfer non-secure (value: 0)
     *          - B_0x1: GPDMA transfer secure (value: 1)
     */
        /** @brief GPDMA transfer non-secure */
    constexpr std::uint32_t GPDMA_C8TR1_SSEC_B_0x0 = 0;
        /** @brief GPDMA transfer secure */
    constexpr std::uint32_t GPDMA_C8TR1_SSEC_B_0x1 = 1;

    /** @brief None 00: byte 01: half-word (2 bytes) 10: word (4 bytes) 11: user setting error reported and no transfer issued Note: Setting a 8-byte data width causes a user setting error to be reported and none transfer is issued. +: A destination burst transfer must have an aligned address with its data width (start address GPDMA_CxDAR[2:0] and address offset GPDMA_CxTR3.DAO[2:0], versus DDW_LOG2[1:0]). Otherwise a user setting error is reported and no transfer is issued. */
    using GPDMA_C8TR1_DDW_LOG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: byte (value: 0)
     *          - B_0x1: half-word (2 bytes) (value: 1)
     *          - B_0x2: word (4 bytes) (value: 2)
     *          - B_0x3: user setting error reported and no transfer issued (value: 3)
     */
        /** @brief byte */
    constexpr std::uint32_t GPDMA_C8TR1_DDW_LOG2_B_0x0 = 0;
        /** @brief half-word (2 bytes) */
    constexpr std::uint32_t GPDMA_C8TR1_DDW_LOG2_B_0x1 = 1;
        /** @brief word (4 bytes) */
    constexpr std::uint32_t GPDMA_C8TR1_DDW_LOG2_B_0x2 = 2;
        /** @brief user setting error reported and no transfer issued */
    constexpr std::uint32_t GPDMA_C8TR1_DDW_LOG2_B_0x3 = 3;

    /** @brief The destination address, pointed by GPDMA_CxDAR, is kept constant after a burst beat/single transfer, or is incremented by the offset value corresponding to a contiguous data after a burst beat/single transfer. 0: fixed burst 1: contiguously incremented burst */
    using GPDMA_C8TR1_DINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fixed burst (value: 0)
     *          - B_0x1: contiguously incremented burst (value: 1)
     */
        /** @brief fixed burst */
    constexpr std::uint32_t GPDMA_C8TR1_DINC_B_0x0 = 0;
        /** @brief contiguously incremented burst */
    constexpr std::uint32_t GPDMA_C8TR1_DINC_B_0x1 = 1;

    /** @brief The burst length unit is one data named beat within a burst. If DBL_1[5:0] = 0, the burst can be named as single. Each data/beat has a width defined by the destination data width DDW_LOG2[1:0]. Note: If a burst transfer crossed a 1-Kbyte address boundary on a AHB transfer, the GPDMA modifies and shortens the programmed burst into singles or bursts of lower length, to be compliant with the AHB protocol. +: If a burst transfer is of length greater than the FIFO size of the channel 8, the GPDMA modifies and shortens the programmed burst into singles or bursts of lower length, to be compliant with the FIFO size. Transfer performance is lower, with GPDMA re-arbitration between effective and lower singles/bursts, but the data integrity is guaranteed. */
    using GPDMA_C8TR1_DBL_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief If the destination data size is a byte, this bit is ignored. If the destination data size is not a byte: 0: no byte-based exchange within half-word 1: the two consecutive (post PAM) bytes are exchanged in each destination half-word. */
    using GPDMA_C8TR1_DBx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no byte-based exchange within half-word (value: 0)
     *          - B_0x1: the two consecutive (post PAM) bytes are exchanged in each destination half-word. (value: 1)
     */
        /** @brief no byte-based exchange within half-word */
    constexpr std::uint32_t GPDMA_C8TR1_DBx_B_0x0 = 0;
        /** @brief the two consecutive (post PAM) bytes are exchanged in each destination half-word. */
    constexpr std::uint32_t GPDMA_C8TR1_DBx_B_0x1 = 1;

    /** @brief If the destination data size is shorter than a word, this bit is ignored. If the destination data size is a word: 0: no halfword-based exchanged within word 1: the two consecutive (post PAM) half-words are exchanged in each destination word. */
    using GPDMA_C8TR1_DHx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no halfword-based exchanged within word (value: 0)
     *          - B_0x1: the two consecutive (post PAM) half-words are exchanged in each destination word. (value: 1)
     */
        /** @brief no halfword-based exchanged within word */
    constexpr std::uint32_t GPDMA_C8TR1_DHx_B_0x0 = 0;
        /** @brief the two consecutive (post PAM) half-words are exchanged in each destination word. */
    constexpr std::uint32_t GPDMA_C8TR1_DHx_B_0x1 = 1;

    /** @brief This bit is used to allocate the master port for the destination transfer 0: port 0 (AHB) allocated 1: port 1 (AHB) allocated Note: This bit must be written when EN = 0. This bit is read-only when EN = 1. */
    using GPDMA_C8TR1_DAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C8TR1_DAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C8TR1_DAP_B_0x1 = 1;

    /** @brief If GPDMA_SECCFGR.SEC8 = 1 and the access is secure: This is a secure register bit. This bit can only be read by a secure software. This bit must be written by a secure software when GPDMA_SECCFGR.SEC8 = 1. A secure write is ignored when GPDMA_SECCFGR.SEC8 = 0. When GPDMA_SECCFGR.SEC8 is deasserted, this DSEC bit is also deasserted by hardware (on a secure reconfiguration of the channel as non-secure), and the GPDMA transfer to the destination is non-secure. 0: GPDMA transfer non-secure 1: GPDMA transfer secure */
    using GPDMA_C8TR1_DSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPDMA transfer non-secure (value: 0)
     *          - B_0x1: GPDMA transfer secure (value: 1)
     */
        /** @brief GPDMA transfer non-secure */
    constexpr std::uint32_t GPDMA_C8TR1_DSEC_B_0x0 = 0;
        /** @brief GPDMA transfer secure */
    constexpr std::uint32_t GPDMA_C8TR1_DSEC_B_0x1 = 1;

    /** @brief GPDMA channel 8 transfer register 2 */
    using GPDMA_C8TR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x494, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief These bits are ignored if channel 8 is activated (GPDMA_C8CR.EN asserted) with SWREQ=1 (software request for a memory-to-memory transfer). Else, the selected hardware request is internally taken into account as per less than xe4 [GPDMA_requests]/>. The user must not assign a same input hardware request (same REQSEL[6:0] value) to different active GPDMA channels (GPDMA_C8CR.EN = 1 and GPDMA_C8TR2.SWREQ = 0 for these channels). GPDMA is not intended to hardware support the case of simultaneous enabled channels incorrectly configured with a same hardware peripheral request signal, and there is no user setting error reporting. */
    using GPDMA_C8TR2_REQSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This bit is internally taken into account when GPDMA_C8CR.EN is asserted. 0: no software request. The selected hardware request REQSEL[6:0] is taken into account. 1: software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[6:0] is ignored. */
    using GPDMA_C8TR2_SWREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no software request. The selected hardware request REQSEL[6:0] is taken into account. (value: 0)
     *          - B_0x1: software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[6:0] is ignored. (value: 1)
     */
        /** @brief no software request. The selected hardware request REQSEL[6:0] is taken into account. */
    constexpr std::uint32_t GPDMA_C8TR2_SWREQ_B_0x0 = 0;
        /** @brief software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[6:0] is ignored. */
    constexpr std::uint32_t GPDMA_C8TR2_SWREQ_B_0x1 = 1;

    /** @brief This bit is ignored if channel 8 is activated (GPDMA_C8CR.EN asserted) with SWREQ = 1 (software request for a memory-to-memory transfer). Else: 0: selected hardware request driven by a source peripheral (request signal taken into account by the GPDMA transfer scheduler over the source/read port) 1: selected hardware request driven by a destination peripheral (request signal taken into account by the GPDMA transfer scheduler over the destination/write port) Note: If the channel 8 is activated (GPDMA_C8CR.EN is asserted) with SWREQ = 0 and PFREQ = 1 (peripheral hardware request with peripheral flow-control mode), any software assertion to this DREQ bit is ignored: in peripheral flow-control mode, only a peripheral-to-memory transfer is supported. */
    using GPDMA_C8TR2_DREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: selected hardware request driven by a source peripheral (request signal taken into account by the GPDMA transfer scheduler over the source/read port) (value: 0)
     *          - B_0x1: selected hardware request driven by a destination peripheral (request signal taken into account by the GPDMA transfer scheduler over the destination/write port) (value: 1)
     */
        /** @brief selected hardware request driven by a source peripheral (request signal taken into account by the GPDMA transfer scheduler over the source/read port) */
    constexpr std::uint32_t GPDMA_C8TR2_DREQ_B_0x0 = 0;
        /** @brief selected hardware request driven by a destination peripheral (request signal taken into account by the GPDMA transfer scheduler over the destination/write port) */
    constexpr std::uint32_t GPDMA_C8TR2_DREQ_B_0x1 = 1;

    /** @brief If the channel 8 is activated (GPDMA_C8CR.EN asserted) with SWREQ = 1 (software request for a memory-to-memory transfer), this bit is ignored. Else: 0: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a burst level. 1: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see less than xe4 [GPDMA_requests]/>). */
    using GPDMA_C8TR2_BREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a burst level. (value: 0)
     *          - B_0x1: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see less than xe4 [GPDMA_requests]/>). (value: 1)
     */
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a burst level. */
    constexpr std::uint32_t GPDMA_C8TR2_BREQ_B_0x0 = 0;
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see less than xe4 [GPDMA_requests]/>). */
    constexpr std::uint32_t GPDMA_C8TR2_BREQ_B_0x1 = 1;

    /** @brief Caution: If a given channel 8 is not implemented with this feature, this bit is reserved and PFREQ is not present (see less than xe1 [GPDMA_channels]/> for the list of the implemented channels with this feature). */
    using GPDMA_C8TR2_PFREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol in GPDMA control mode. The GPDMA is programmed with GPDMA_C8TR1.BNDT[15:0] and this is internally used by the hardware for the block transfer completion. (value: 0)
     *          - B_0x1: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol in peripheral control mode. The GPDMA block transfer can be early completed by the peripheral itself (see less than xe2 [GPDMA_channels_peripheral]/> for more details). (value: 1)
     */
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol in GPDMA control mode. The GPDMA is programmed with GPDMA_C8TR1.BNDT[15:0] and this is internally used by the hardware for the block transfer completion. */
    constexpr std::uint32_t GPDMA_C8TR2_PFREQ_B_0x0 = 0;
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol in peripheral control mode. The GPDMA block transfer can be early completed by the peripheral itself (see less than xe2 [GPDMA_channels_peripheral]/> for more details). */
    constexpr std::uint32_t GPDMA_C8TR2_PFREQ_B_0x1 = 1;

    /** @brief These bits define the transfer granularity for its conditioning by the trigger. If the channel 8 is enabled (GPDMA_C8CR.EN asserted) with TRIGPOL[1:0] = 00 or 11, these TRIGM[1:0] bits are ignored. Else, a GPDMA transfer is conditioned by at least one trigger hit: 00: at block level: the first burst read of each block transfer is conditioned by one hit trigger (channel 8 = 12 to 15, for each block if a 2D/repeated block is configured with GPDMA_C8BR1.BRC[10:0] is not equal to 0). 10: at link level: a LLI link transfer is conditioned by one hit trigger. The LLI data transfer (if any) is not conditioned. 11: at programmed burst level: If SWREQ = 1, each programmed burst read is conditioned by one hit trigger. If SWREQ = 0, each programmed burst that is requested by the selected peripheral, is conditioned by one hit trigger. - If the peripheral is programmed as a source (DREQ = 0) of the LLI data transfer, each programmed burst read is conditioned. - If the peripheral is programmed as a destination (DREQ = 1) of the LLI data transfer, each programmed burst write is conditioned. The first memory burst read of a (possibly 2D/repeated) block, also named as the first ready FIFO-based source burst, is gated by the occurrence of both the hardware request and the first trigger hit.01: channel 8 = 0 to , same as 00; channel 8 , at 2D/repeated block level. The first burst read of a 2D/repeated block transfer is conditioned by one hit trigger. The GPDMA monitoring of a trigger for channel 8 is started when the channel is enabled/loaded with a new active trigger configuration: rising or falling edge on a selected trigger (TRIGPOL[1:0] = 01 or respectively TRIGPOL[1:0]=10). The monitoring of this trigger is kept active during the triggered and uncompleted (data or link) transfer; and if a new trigger is detected then, this hit is internally memorized to grant the next transfer, as long as the defined rising or falling edge is not modified, and the TRIGSEL[5:0] is not modified, and the channel is enabled. Transferring a next LLIn+1 that updates the GPDMA_C8TR2 with a new value for any of TRIGSEL[5:0] or TRIGPOL[1:0], resets the monitoring, trashing the memorized hit of the formerly defined LLIn trigger. After a first new trigger hitn+1 is memorized, if another second trigger hitn+2 is detected and if the hitn triggered transfer is still not completed, hitn+2 is lost and not memorized.memorized. A trigger overrun flag is reported (GPDMA_C8SR.TOF=1), and an interrupt is generated if enabled (GPDMA_C8CR.TOIE = 1). The channel is not automatically disabled by hardware due to a trigger overrun. Note: When the source block size is not a multiple of the source burst size and is a multiple of the source data width, then the last programmed source burst is not completed and is internally shorten to match the block size. In this case, if TRIGM[1:0] = 11 and (SWREQ = 1 or (SWREQ = 0 and DREQ = 0)), the shortened burst transfer (by singles or/and by bursts of lower length) is conditioned once by the trigger. +: When the programmed destination burst is internally shortened by singles or/and by bursts of lower length (versus FIFO size, versus block size, 1-Kbyte boundary address crossing): if the trigger is conditioning the programmed destination burst (if TRIGM[1:0] = 11 and SWREQ = 0 and DREQ = 1), this shortened destination burst transfer is conditioned once by the trigger. */
    using GPDMA_C8TR2_TRIGM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief These bits select the trigger event input of the GPDMA transfer (as per less than xe3 [GPDMA_triggers]/>), with anactive trigger event if TRIGPOL[1:0] is not equal to 00. */
    using GPDMA_C8TR2_TRIGSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief These bits define the polarity of the selected trigger event input defined by TRIGSEL[5:0]. 00: no trigger (masked trigger event) 01: trigger on the rising edge 10: trigger on the falling edge 11: same as 00 */
    using GPDMA_C8TR2_TRIGPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no trigger (masked trigger event) (value: 0)
     *          - B_0x1: trigger on the rising edge (value: 1)
     *          - B_0x2: trigger on the falling edge (value: 2)
     *          - B_0x3: same as 00 (value: 3)
     */
        /** @brief no trigger (masked trigger event) */
    constexpr std::uint32_t GPDMA_C8TR2_TRIGPOL_B_0x0 = 0;
        /** @brief trigger on the rising edge */
    constexpr std::uint32_t GPDMA_C8TR2_TRIGPOL_B_0x1 = 1;
        /** @brief trigger on the falling edge */
    constexpr std::uint32_t GPDMA_C8TR2_TRIGPOL_B_0x2 = 2;
        /** @brief same as 00 */
    constexpr std::uint32_t GPDMA_C8TR2_TRIGPOL_B_0x3 = 3;

    /** @brief These bits define the transfer granularity for the transfer complete and half transfer complete events generation. 00: at block level (when GPDMA_C8BR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. 01: channel 8 (0 to ), same as 00, channel 8 , at 2D/repeated block level (when GPDMA_C8BR1.BRC[10:0] = 0 and GPDMA_C8BR1.BNDT[15:0] = 0). The complete (and the half) transfer event is generated at the end (respectively half of the end) of the 2D/repeated block. 10: at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer. The LLI data transfer is a block transfer or a 2D/repeated block transfer for channel 8 , if any data transfer. 11: at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address GPDMA_C8LLR.LA[15:2] to zero and clears all the GPDMA_C8LLR update bits (UT1, UT2, UB1, USA, UDA and ULL, plus UT3 and UB2). If the channel transfer is continuous/infinite, no event is generated. Note: If the initial LLI0 data transfer is null/void (directly programmed by the internal register file with GPDMA_C8BR1.BNDT[15:0] = 0), then neither the complete transfer event nor the half transfer event is generated. +: If the initial LLI0 data transfer is null/void (directly programmed by the internal register file with GPDMA_C8BR1.BNDT[15:0] = 0), then neither the complete transfer event nor the half transfer event is generated. +: If the initial LLI0 data transfer is null/void (directly programmed by the internal register file with GPDMA_C8BR1.BNDT[15:0] = 0), then the half transfer event is not generated, and the transfer complete event is generated when is completed the loading of the LLI1. */
    using GPDMA_C8TR2_TCEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: at block level (when GPDMA_C8BR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. (value: 0)
     *          - B_0x1: channel 8 (0 to ), same as 00, channel 8 , at 2D/repeated block level (when GPDMA_C8BR1.BRC[10:0] = 0 and GPDMA_C8BR1.BNDT[15:0] = 0). The complete (and the half) transfer event is generated at the end (respectively half of the end) of the 2D/repeated block. (value: 1)
     *          - B_0x2: at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer. The LLI data transfer is a block transfer or a 2D/repeated block transfer for channel 8 , if any data transfer. (value: 2)
     *          - B_0x3: at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address GPDMA_C8LLR.LA[15:2] to zero and clears all the GPDMA_C8LLR update bits (UT1, UT2, UB1, USA, UDA and ULL, plus UT3 and UB2). If the channel transfer is continuous/infinite, no event is generated. (value: 3)
     */
        /** @brief at block level (when GPDMA_C8BR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. */
    constexpr std::uint32_t GPDMA_C8TR2_TCEM_B_0x0 = 0;
        /** @brief channel 8 (0 to ), same as 00, channel 8 , at 2D/repeated block level (when GPDMA_C8BR1.BRC[10:0] = 0 and GPDMA_C8BR1.BNDT[15:0] = 0). The complete (and the half) transfer event is generated at the end (respectively half of the end) of the 2D/repeated block. */
    constexpr std::uint32_t GPDMA_C8TR2_TCEM_B_0x1 = 1;
        /** @brief at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer. The LLI data transfer is a block transfer or a 2D/repeated block transfer for channel 8 , if any data transfer. */
    constexpr std::uint32_t GPDMA_C8TR2_TCEM_B_0x2 = 2;
        /** @brief at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address GPDMA_C8LLR.LA[15:2] to zero and clears all the GPDMA_C8LLR update bits (UT1, UT2, UB1, USA, UDA and ULL, plus UT3 and UB2). If the channel transfer is continuous/infinite, no event is generated. */
    constexpr std::uint32_t GPDMA_C8TR2_TCEM_B_0x3 = 3;

    /** @brief GPDMA channel 8 block register 1 */
    using GPDMA_C8BR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x498, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Block size transferred from the source. When the channel is enabled, this field becomes read-only and is decremented, indicating the remaining number of data items in the current source block to be transferred. BNDT[15:0] is programmed in number of bytes, maximum source block size is 64 Kbytes -1. Once the last data transfer is completed (BNDT[15:0] = 0): - if GPDMA_C8LLR.UB1 = 1, this field is updated by the LLI in the memory. - if GPDMA_C8LLR.UB1 = 0 and if there is at least one not null Uxx update bit, this field is internally restored to the programmed value. - if all GPDMA_C8LLR.Uxx = 0 and if GPDMA_C8LLR.LA[15:0] is not equal to 0, this field is internally restored to the programmed value (infinite/continuous last LLI). - if GPDMA_C8LLR = 0, this field is kept as zero following the last LLI data transfer. Note: A non-null source block size must be a multiple of the source data width (BNDT[2:0] versus GPDMA_C8TR1.SDW_LOG2[1:0]). Else a user setting error is reported and no transfer is issued. +: When configured in packing mode (GPDMA_C8TR1.PAM[1] = 1 and destination data width different from source data width), a non-null source block size must be a multiple of the destination data width (BNDT[2:0] versus GPDMA_C8TR1.DDW_LOG2[1:0]). Else a user setting error is reported and no transfer is issued. */
    using GPDMA_C8BR1_BNDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 10 block register 1 */
    using GPDMA_C10BR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x498, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Block size transferred from the source. When the channel is enabled, this field becomes read-only and is decremented, indicating the remaining number of data items in the current source block to be transferred. BNDT[15:0] is programmed in number of bytes, maximum source block size is 64 Kbytes -1. Once the last data transfer is completed (BNDT[15:0] = 0): - if GPDMA_C10LLR.UB1 = 1, this field is updated by the LLI in the memory. - if GPDMA_C10LLR.UB1 = 0 and if there is at least one not null Uxx update bit, this field is internally restored to the programmed value. - if all GPDMA_C10LLR.Uxx = 0 and if GPDMA_C10LLR.LA[15:0] is not equal to 0, this field is internally restored to the programmed value (infinite/continuous last LLI). - if GPDMA_C10LLR = 0, this field is kept as zero following the last LLI data transfer. Note: A non-null source block size must be a multiple of the source data width (BNDT[2:0] versus GPDMA_C10TR1.SDW_LOG2[1:0]). Else a user setting error is reported and no transfer is issued. +: When configured in packing mode (GPDMA_C10TR1.PAM[1] = 1 and destination data width different from source data width), a non-null source block size must be a multiple of the destination data width (BNDT[2:0] versus GPDMA_C{x}TR1.DDW_LOG2[1:0]). Else a user setting error is reported and no transfer is issued. */
    using GPDMA_C10BR1_BNDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This field contains the number of repetitions of the current block (0 to 2047). When the channel is enabled, this field becomes read-only. After decrements, this field indicates the remaining number of blocks, excluding the current one. This counter is hardware decremented for each completed block transfer. Once the last block transfer is completed (BRC[10:0] = BNDT[15:0] = 0): - If GPDMA_C10LLR.UB1 = 1, all GPDMA_C10BR1 fields are updated by the next LLI in the memory. - If GPDMA_C10LLR.UB1 = 0 and if there is at least one not null Uxx update bit, this field is internally restored to the programmed value. - if all GPDMA_C10LLR.Uxx = 0 and if GPDMA_C10LLR.LA[15:0] is not equal to 0, this field is internally restored to the programmed value (infinite/continuous last LLI). - if GPDMA_C10LL R = 0, this field is kept as zero following the last LLI and data transfer. */
    using GPDMA_C10BR1_BRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief None 0: At the end of a programmed burst transfer from the source, the GPDMA_C10SAR register is updated by adding the programmed offset GPDMA_C10TR3.SAO to the current GPDMA_C10SAR value (current source address) 1: At the end of a programmed burst transfer from the source, the GPDMA_C10SAR register is updated by subtracting the programmed offset GPDMA_C10TR3.SAO to the current GPDMA_C10SAR value (current source address) */
    using GPDMA_C10BR1_SDEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: At the end of a programmed burst transfer from the source, the GPDMA_C10SAR register is updated by adding the programmed offset GPDMA_C10TR3.SAO to the current GPDMA_C10SAR value (current source address) (value: 0)
     *          - B_0x1: At the end of a programmed burst transfer from the source, the GPDMA_C10SAR register is updated by subtracting the programmed offset GPDMA_C10TR3.SAO to the current GPDMA_C10SAR value (current source address) (value: 1)
     */
        /** @brief At the end of a programmed burst transfer from the source, the GPDMA_C10SAR register is updated by adding the programmed offset GPDMA_C10TR3.SAO to the current GPDMA_C10SAR value (current source address) */
    constexpr std::uint32_t GPDMA_C10BR1_SDEC_B_0x0 = 0;
        /** @brief At the end of a programmed burst transfer from the source, the GPDMA_C10SAR register is updated by subtracting the programmed offset GPDMA_C10TR3.SAO to the current GPDMA_C10SAR value (current source address) */
    constexpr std::uint32_t GPDMA_C10BR1_SDEC_B_0x1 = 1;

    /** @brief None 0: At the end of a programmed burst transfer to the destination, the GPDMA_C10DAR register is updated by adding the programmed offset GPDMA_C10TR3.DAO to the current GPDMA_C10DAR value (current destination address) 1: At the end of a programmed burst transfer to the destination, the GPDMA_C10DAR register is updated by subtracting the programmed offset GPDMA_C10TR3.DAO to the current GPDMA_C10DAR value (current destination address) */
    using GPDMA_C10BR1_DDEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: At the end of a programmed burst transfer to the destination, the GPDMA_C10DAR register is updated by adding the programmed offset GPDMA_C10TR3.DAO to the current GPDMA_C10DAR value (current destination address) (value: 0)
     *          - B_0x1: At the end of a programmed burst transfer to the destination, the GPDMA_C10DAR register is updated by subtracting the programmed offset GPDMA_C10TR3.DAO to the current GPDMA_C10DAR value (current destination address) (value: 1)
     */
        /** @brief At the end of a programmed burst transfer to the destination, the GPDMA_C10DAR register is updated by adding the programmed offset GPDMA_C10TR3.DAO to the current GPDMA_C10DAR value (current destination address) */
    constexpr std::uint32_t GPDMA_C10BR1_DDEC_B_0x0 = 0;
        /** @brief At the end of a programmed burst transfer to the destination, the GPDMA_C10DAR register is updated by subtracting the programmed offset GPDMA_C10TR3.DAO to the current GPDMA_C10DAR value (current destination address) */
    constexpr std::uint32_t GPDMA_C10BR1_DDEC_B_0x1 = 1;

    /** @brief None 0: at the end of a block transfer, the GPDMA_C10SAR register is updated by adding the programmed offset GPDMA_C10BR2.BRSAO to the current GPDMA_C10SAR value (current source address) 1: at the end of a block transfer, the GPDMA_C10SAR register is updated by subtracting the programmed offset GPDMA_C10BR2.BRSAO from the current GPDMA_C10SAR value (current source address) Note: On top of this increment/decrement (depending on BRSDEC), GPDMA_C10SAR is in the same time also updated by the increment/decrement (depending on SDEC) of the GPDMA_C10TR3.SAO value, as it is done after any programmed burst transfer. */
    using GPDMA_C10BR1_BRSDEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: at the end of a block transfer, the GPDMA_C10SAR register is updated by adding the programmed offset GPDMA_C10BR2.BRSAO to the current GPDMA_C10SAR value (current source address) (value: 0)
     *          - B_0x1: at the end of a block transfer, the GPDMA_C10SAR register is updated by subtracting the programmed offset GPDMA_C10BR2.BRSAO from the current GPDMA_C10SAR value (current source address) (value: 1)
     */
        /** @brief at the end of a block transfer, the GPDMA_C10SAR register is updated by adding the programmed offset GPDMA_C10BR2.BRSAO to the current GPDMA_C10SAR value (current source address) */
    constexpr std::uint32_t GPDMA_C10BR1_BRSDEC_B_0x0 = 0;
        /** @brief at the end of a block transfer, the GPDMA_C10SAR register is updated by subtracting the programmed offset GPDMA_C10BR2.BRSAO from the current GPDMA_C10SAR value (current source address) */
    constexpr std::uint32_t GPDMA_C10BR1_BRSDEC_B_0x1 = 1;

    /** @brief None 0: at the end of a block transfer, the GPDMA_C10DAR register is updated by adding the programmed offset GPDMA_C10BR2.BRDAO to the current GPDMA_C10DAR value (current destination address) 1: at the end of a block transfer, the GPDMA_C10DAR register is updated by subtracting the programmed offset GPDMA_C10BR2.BRDAO from the current GPDMA_C10DAR value (current destination address) Note: On top of this increment/decrement (depending on BRDDEC), GPDMA_C10DAR is in the same time also updated by the increment/decrement (depending on DDEC) of the GPDMA_C10TR3.DAO value, as it is usually done at the end of each programmed bursttransfer. */
    using GPDMA_C10BR1_BRDDEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: at the end of a block transfer, the GPDMA_C10DAR register is updated by adding the programmed offset GPDMA_C10BR2.BRDAO to the current GPDMA_C10DAR value (current destination address) (value: 0)
     *          - B_0x1: at the end of a block transfer, the GPDMA_C10DAR register is updated by subtracting the programmed offset GPDMA_C10BR2.BRDAO from the current GPDMA_C10DAR value (current destination address) (value: 1)
     */
        /** @brief at the end of a block transfer, the GPDMA_C10DAR register is updated by adding the programmed offset GPDMA_C10BR2.BRDAO to the current GPDMA_C10DAR value (current destination address) */
    constexpr std::uint32_t GPDMA_C10BR1_BRDDEC_B_0x0 = 0;
        /** @brief at the end of a block transfer, the GPDMA_C10DAR register is updated by subtracting the programmed offset GPDMA_C10BR2.BRDAO from the current GPDMA_C10DAR value (current destination address) */
    constexpr std::uint32_t GPDMA_C10BR1_BRDDEC_B_0x1 = 1;

    /** @brief GPDMA channel 8 source address register */
    using GPDMA_C8SAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x49C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This field is the pointer to the address from which the next data is read. During the channel activity, depending on the source addressing mode (GPDMA_C8TR1.SINC), this field is kept fixed or incremented by the data width (GPDMA_C8TR1.SDW_LOG2[1:0]) after each burst source data, reflecting the next address from which data is read. During the channel activity, this address is updated after each completed source burst, consequently to: - the programmed source burst; either in fixed addressing mode or in contiguous-data incremented mode. If contiguously incremented (GPDMA_C8TR1.SINC = 1), then the additional address offset value is the programmed burst size, as defined by GPDMA_C8TR1.SBL_1[5:0] and GPDMA_C8TR1.SDW_LOG2[21:0] - the additional source incremented/decremented offset value as programmed by GPDMA_C8BR1.SDEC and GPDMA_CxTR3.SAO[12:0]. - once/if completed source block transfer, for a channel 8 with 2D addressing capability (x = 12 to 15). additional block repeat source incremented/decremented offset value as programmed by GPDMA_C8BR1.BRSDEC and GPDMA_CxBR2.BRSAO[15:0] In linked-list mode, after a LLI data transfer is completed, this register is automatically updated by GPDMA from the memory, provided the LLI is set with GPDMA_C8LLR.USA = 1. Note: A source address must be aligned with the programmed data width of a source burst (SA[2:0] versus GPDMA_C8TR1.SDW_LOG2[1:0]). Else, a user setting error is reported and no transfer is issued. +: When the source block size is not a multiple of the source burst size and is a multiple of the source data width, the last programmed source burst is not completed and is internally shorten to match the block size. In this case, the additional GPDMA_CxTR3.SAO[12:0] is not applied. */
    using GPDMA_C8SAR_SA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 8 destination address register */
    using GPDMA_C8DAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This field is the pointer to the address from which the next data is written. During the channel activity, depending on the destination addressing mode (GPDMA_C8TR1.DINC), this field is kept fixed or incremented by the data width (GPDMA_C8TR1.DDW_LOG2[21:0]) after each burst destination data, reflecting the next address from which data is written. During the channel activity, this address is updated after each completed destination burst, consequently to: - the programmed destination burst; either in fixed addressing mode or in contiguous-data incremented mode. If contiguously incremented (GPDMA_C8TR1.DINC = 1), then the additional address offset value is the programmed burst size, as defined by GPDMA_C8TR1.DBL_1[5:0] and GPDMA_C8TR1.DDW_LOG2[1:0] - the additional destination incremented/decremented offset value as programmed by GPDMA_C8BR1.DDEC and GPDMA_CxTR3.DAO[12:0]. - once/if completed destination block transfer, for a channel 8 with 2D addressing capability (x=12to15), the additional block repeat destination incremented/decremented offset value as programmed by GPDMA_C8BR1.BRDDEC and GPDMA_CxBR2.BRDAO[15:0] In linked-list mode, after a LLI data transfer is completed, this register is automatically updated by the GPDMA from the memory, provided the LLI is set with GPDMA_C8LLR.UDA = 1. Note: A destination address must be aligned with the programmed data width of a destination burst (DA[2:0] versus GPDMA_C8TR1.DDW_LOG2[1:0]). Else, a user setting error is reported and no transfer is issued. */
    using GPDMA_C8DAR_DA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 10 transfer register 3 */
    using GPDMA_C10TR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4A4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The source address, pointed by GPDMA_CxSAR, is incremented or decremented (depending on GPDMA_C10BR1.SDEC) by this offset SAO[12:0] for each programmed source burst. This offset is not including and is added to the programmed burst size when the completed burst is addressed in incremented mode (GPDMA_C10TR1.SINC = 1). Note: A source address offset must be aligned with the programmed data width of a source burst (SAO[2:0] versus GPDMA_C10TR1.SDW_LOG2[1:0]). Else a user setting error is reported and none transfer is issued. +: When the source block size is not a multiple of the destination burst size and is a multiple of the source data width, then the last programmed source burst is not completed and is internally shorten to match the block size. In this case, the additional GPDMA_CxTR3.SAO[12:0] is not applied. */
    using GPDMA_C10TR3_SAO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 13, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The destination address, pointed by GPDMA_CxDAR, is incremented or decremented (depending on GPDMA_C10BR1.DDEC) by this offset DAO[12:0] for each programmed destination burst. This offset is not including and is added to the programmed burst size when the completed burst is addressed in incremented mode (GPDMA_C10TR1.DINC = 1). Note: A destination address offset must be aligned with the programmed data width of a destination burst (DAO[2:0] versus GPDMA_C10TR1.DDW_LOG2[1:0]). Else, a user setting error is reported and no transfer is issued. */
    using GPDMA_C10TR3_DAO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 13, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 10 block register 2 */
    using GPDMA_C10BR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4A8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief For a channel with 2D addressing capability, this field is used to update (by addition or subtraction depending on GPDMA_C10BR1.BRSDEC) the current source address (GPDMA_CxSAR) at the end of a block transfer. Note: A block repeated source address offset must be aligned with the programmed data width of a source burst (BRSAO[2:0] versus GPDMA_C10TR1.SDW_LOG2[1:0]). Else a user setting error is reported and no transfer is issued. +: BRSAO[15:0] must be set to 0 in peripheral flow-control mode (ifGPDMA_C10TR2.PFREQ = 1). */
    using GPDMA_C10BR2_BRSAO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief For a channel with 2D addressing capability, this field is used to update (by addition or subtraction depending on GPDMA_C10BR1.BRDDEC) the current destination address (GPDMA_CxDAR) at the end of a block transfer. Note: A block repeated destination address offset must be aligned with the programmed data width of a destination burst (BRDAO[2:0] versus GPDMA_C10TR1.DDW_LOG2[1:0]). Else a user setting error is reported and no transfer is issued. +: BRDAO[15:0] must be set to 0 in peripheral flow-control mode (ifGPDMA_C10TR2.PFREQ = 1). */
    using GPDMA_C10BR2_BRDAO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 8 linked-list address register */
    using GPDMA_C8LLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4CC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief If UT1 = UT2 = UB1 = USA = UDA = ULL = 0 and if LA[15:20] = 0, the current LLI is the last one. The channel transfer is completed without any update of the linked-list GPDMA register file. Else, this field is the pointer to the memory address offset from which the next linked-list data structure is automatically fetched from, once the data transfer is completed, in order to conditionally update the linked-list GPDMA internal register file (GPDMA_C8TR1, GPDMA_C8TR2, GPDMA_C8BR1, GPDMA_CxSAR, GPDMA_CxDAR and GPDMA_C8LLR). Note: The user must program the pointer to be 32-bit aligned. The two low-significant bits are write ignored. */
    using GPDMA_C8LLR_LA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This bit is used to control the update of GPDMA_C8LLR from the memory during the link transfer. 0: no GPDMA_C8LLR update 1: GPDMA_C8LLR update */
    using GPDMA_C8LLR_ULL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_C8LLR update (value: 0)
     *          - B_0x1: GPDMA_C8LLR update (value: 1)
     */
        /** @brief no GPDMA_C8LLR update */
    constexpr std::uint32_t GPDMA_C8LLR_ULL_B_0x0 = 0;
        /** @brief GPDMA_C8LLR update */
    constexpr std::uint32_t GPDMA_C8LLR_ULL_B_0x1 = 1;

    /** @brief This bit is used to control the update of GPDMA_CxDAR from the memory during the link transfer. 0: no GPDMA_CxDAR update 1: GPDMA_CxDAR update */
    using GPDMA_C8LLR_UDA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxDAR update (value: 0)
     *          - B_0x1: GPDMA_CxDAR update (value: 1)
     */
        /** @brief no GPDMA_CxDAR update */
    constexpr std::uint32_t GPDMA_C8LLR_UDA_B_0x0 = 0;
        /** @brief GPDMA_CxDAR update */
    constexpr std::uint32_t GPDMA_C8LLR_UDA_B_0x1 = 1;

    /** @brief This bit controls the update of GPDMA_CxSAR from the memory during the link transfer. 0: no GPDMA_CxSAR update 1: GPDMA_CxSAR update */
    using GPDMA_C8LLR_USA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxSAR update (value: 0)
     *          - B_0x1: GPDMA_CxSAR update (value: 1)
     */
        /** @brief no GPDMA_CxSAR update */
    constexpr std::uint32_t GPDMA_C8LLR_USA_B_0x0 = 0;
        /** @brief GPDMA_CxSAR update */
    constexpr std::uint32_t GPDMA_C8LLR_USA_B_0x1 = 1;

    /** @brief This bit controls the update of GPDMA_C8BR1 from the memory during the link transfer. If UB1 = 0 and if GPDMA_C8LLR is not equal to 0, the linked-list is not completed. GPDMA_C8BR1.BNDT[15:0] is then restored to the programmed value after data transfer is completed and before the link transfer. 0: no GPDMA_C8BR1 update from memory (GPDMA_C8BR1.BNDT[15:0] restored if any link transfer) 1: GPDMA_C8BR1 update */
    using GPDMA_C8LLR_UB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_C8BR1 update from memory (GPDMA_C8BR1.BNDT[15:0] restored if any link transfer) (value: 0)
     *          - B_0x1: GPDMA_C8BR1 update (value: 1)
     */
        /** @brief no GPDMA_C8BR1 update from memory (GPDMA_C8BR1.BNDT[15:0] restored if any link transfer) */
    constexpr std::uint32_t GPDMA_C8LLR_UB1_B_0x0 = 0;
        /** @brief GPDMA_C8BR1 update */
    constexpr std::uint32_t GPDMA_C8LLR_UB1_B_0x1 = 1;

    /** @brief This bit controls the update of GPDMA_C8TR2 from the memory during the link transfer. 0: no GPDMA_C8TR2 update 1: GPDMA_C8TR2 update */
    using GPDMA_C8LLR_UT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_C8TR2 update (value: 0)
     *          - B_0x1: GPDMA_C8TR2 update (value: 1)
     */
        /** @brief no GPDMA_C8TR2 update */
    constexpr std::uint32_t GPDMA_C8LLR_UT2_B_0x0 = 0;
        /** @brief GPDMA_C8TR2 update */
    constexpr std::uint32_t GPDMA_C8LLR_UT2_B_0x1 = 1;

    /** @brief This bit controls the update of GPDMA_C8TR1 from the memory during the link transfer. 0: no GPDMA_C8TR1 update 1: GPDMA_C8TR1 update */
    using GPDMA_C8LLR_UT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_C8TR1 update (value: 0)
     *          - B_0x1: GPDMA_C8TR1 update (value: 1)
     */
        /** @brief no GPDMA_C8TR1 update */
    constexpr std::uint32_t GPDMA_C8LLR_UT1_B_0x0 = 0;
        /** @brief GPDMA_C8TR1 update */
    constexpr std::uint32_t GPDMA_C8LLR_UT1_B_0x1 = 1;

    /** @brief GPDMA channel 10 linked-list address register */
    using GPDMA_C10LLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4CC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief If UT1 = UT2 = UB1 = USA = UDA = ULL = 0 and if LA[15:20] = 0, the current LLI is the last one. The channel transfer is completed without any update of the linked-list GPDMA register file. Else, this field is the pointer to the memory address offset from which the next linked-list data structure is automatically fetched from, once the data transfer is completed, in order to conditionally update the linked-list GPDMA internal register file (GPDMA_C10TR1, GPDMA_C10TR2, GPDMA_C10BR1, GPDMA_CxSAR, GPDMA_CxDAR and GPDMA_C10LLR). Note: The user must program the pointer to be 32-bit aligned. The two low-significant bits are write ignored. */
    using GPDMA_C10LLR_LA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This bit is used to control the update of GPDMA_C10LLR from the memory during the link transfer. 0: no GPDMA_C10LLR update 1: GPDMA_C10LLR update */
    using GPDMA_C10LLR_ULL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_C10LLR update (value: 0)
     *          - B_0x1: GPDMA_C10LLR update (value: 1)
     */
        /** @brief no GPDMA_C10LLR update */
    constexpr std::uint32_t GPDMA_C10LLR_ULL_B_0x0 = 0;
        /** @brief GPDMA_C10LLR update */
    constexpr std::uint32_t GPDMA_C10LLR_ULL_B_0x1 = 1;

    /** @brief This bit controls the update of GPDMA_CxBR2 from the memory during the link transfer. 0: no GPDMA_CxBR2 update 1: GPDMA_CxBR2 update */
    using GPDMA_C10LLR_UB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxBR2 update (value: 0)
     *          - B_0x1: GPDMA_CxBR2 update (value: 1)
     */
        /** @brief no GPDMA_CxBR2 update */
    constexpr std::uint32_t GPDMA_C10LLR_UB2_B_0x0 = 0;
        /** @brief GPDMA_CxBR2 update */
    constexpr std::uint32_t GPDMA_C10LLR_UB2_B_0x1 = 1;

    /** @brief This bit controls the update of GPDMA_CxTR3 from the memory during the link transfer. 0: no GPDMA_CxTR3 update 1: GPDMA_CxTR3 update */
    using GPDMA_C10LLR_UT3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxTR3 update (value: 0)
     *          - B_0x1: GPDMA_CxTR3 update (value: 1)
     */
        /** @brief no GPDMA_CxTR3 update */
    constexpr std::uint32_t GPDMA_C10LLR_UT3_B_0x0 = 0;
        /** @brief GPDMA_CxTR3 update */
    constexpr std::uint32_t GPDMA_C10LLR_UT3_B_0x1 = 1;

    /** @brief This bit is used to control the update of GPDMA_CxDAR from the memory during the link transfer. 0: no GPDMA_CxDAR update 1: GPDMA_CxDAR update */
    using GPDMA_C10LLR_UDA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxDAR update (value: 0)
     *          - B_0x1: GPDMA_CxDAR update (value: 1)
     */
        /** @brief no GPDMA_CxDAR update */
    constexpr std::uint32_t GPDMA_C10LLR_UDA_B_0x0 = 0;
        /** @brief GPDMA_CxDAR update */
    constexpr std::uint32_t GPDMA_C10LLR_UDA_B_0x1 = 1;

    /** @brief This bit controls the update of GPDMA_CxSAR from the memory during the link transfer. 0: no GPDMA_CxSAR update 1: GPDMA_CxSAR update */
    using GPDMA_C10LLR_USA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxSAR update (value: 0)
     *          - B_0x1: GPDMA_CxSAR update (value: 1)
     */
        /** @brief no GPDMA_CxSAR update */
    constexpr std::uint32_t GPDMA_C10LLR_USA_B_0x0 = 0;
        /** @brief GPDMA_CxSAR update */
    constexpr std::uint32_t GPDMA_C10LLR_USA_B_0x1 = 1;

    /** @brief This bit controls the update of GPDMA_C10BR1 from the memory during the link transfer. If UB1 = 0 and if GPDMA_C10LLR is not equal to 0, the linked-list is not completed. GPDMA_C10BR1.BNDT[15:0] is then restored to the programmed value after data transfer is completed and before the link transfer. 0: no GPDMA_C10BR1 update from memory (GPDMA_C10BR1.BNDT[15:0] restored if any link transfer) 1: GPDMA_C10BR1 update */
    using GPDMA_C10LLR_UB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_C10BR1 update from memory (GPDMA_C10BR1.BNDT[15:0] restored if any link transfer) (value: 0)
     *          - B_0x1: GPDMA_C10BR1 update (value: 1)
     */
        /** @brief no GPDMA_C10BR1 update from memory (GPDMA_C10BR1.BNDT[15:0] restored if any link transfer) */
    constexpr std::uint32_t GPDMA_C10LLR_UB1_B_0x0 = 0;
        /** @brief GPDMA_C10BR1 update */
    constexpr std::uint32_t GPDMA_C10LLR_UB1_B_0x1 = 1;

    /** @brief This bit controls the update of GPDMA_C10TR2 from the memory during the link transfer. 0: no GPDMA_C10TR2 update 1: GPDMA_C10TR2 update */
    using GPDMA_C10LLR_UT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_C10TR2 update (value: 0)
     *          - B_0x1: GPDMA_C10TR2 update (value: 1)
     */
        /** @brief no GPDMA_C10TR2 update */
    constexpr std::uint32_t GPDMA_C10LLR_UT2_B_0x0 = 0;
        /** @brief GPDMA_C10TR2 update */
    constexpr std::uint32_t GPDMA_C10LLR_UT2_B_0x1 = 1;

    /** @brief This bit controls the update of GPDMA_C10TR1 from the memory during the link transfer. 0: no GPDMA_C10TR1 update 1: GPDMA_C10TR1 update */
    using GPDMA_C10LLR_UT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_C10TR1 update (value: 0)
     *          - B_0x1: GPDMA_C10TR1 update (value: 1)
     */
        /** @brief no GPDMA_C10TR1 update */
    constexpr std::uint32_t GPDMA_C10LLR_UT1_B_0x0 = 0;
        /** @brief GPDMA_C10TR1 update */
    constexpr std::uint32_t GPDMA_C10LLR_UT1_B_0x1 = 1;

    /** @brief GPDMA channel 9 linked-list base address register */
    using GPDMA_C9LBAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4D0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief None */
    using GPDMA_C9LBAR_LBA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 9 flag clear register */
    using GPDMA_C9FCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4DC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief None 0: no effect 1: corresponding TCF flag cleared */
    using GPDMA_C9FCR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding TCF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C9FCR_TCF_B_0x0 = 0;
        /** @brief corresponding TCF flag cleared */
    constexpr std::uint32_t GPDMA_C9FCR_TCF_B_0x1 = 1;

    /** @brief None 0: no effect 1: corresponding HTF flag cleared */
    using GPDMA_C9FCR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding HTF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C9FCR_HTF_B_0x0 = 0;
        /** @brief corresponding HTF flag cleared */
    constexpr std::uint32_t GPDMA_C9FCR_HTF_B_0x1 = 1;

    /** @brief None 0: no effect 1: corresponding DTEF flag cleared */
    using GPDMA_C9FCR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding DTEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C9FCR_DTEF_B_0x0 = 0;
        /** @brief corresponding DTEF flag cleared */
    constexpr std::uint32_t GPDMA_C9FCR_DTEF_B_0x1 = 1;

    /** @brief None 0: no effect 1: corresponding ULEF flag cleared */
    using GPDMA_C9FCR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding ULEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C9FCR_ULEF_B_0x0 = 0;
        /** @brief corresponding ULEF flag cleared */
    constexpr std::uint32_t GPDMA_C9FCR_ULEF_B_0x1 = 1;

    /** @brief None 0: no effect 1: corresponding USEF flag cleared */
    using GPDMA_C9FCR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding USEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C9FCR_USEF_B_0x0 = 0;
        /** @brief corresponding USEF flag cleared */
    constexpr std::uint32_t GPDMA_C9FCR_USEF_B_0x1 = 1;

    /** @brief None 0: no effect 1: corresponding SUSPF flag cleared */
    using GPDMA_C9FCR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding SUSPF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C9FCR_SUSPF_B_0x0 = 0;
        /** @brief corresponding SUSPF flag cleared */
    constexpr std::uint32_t GPDMA_C9FCR_SUSPF_B_0x1 = 1;

    /** @brief None 0: no effect 1: corresponding TOF flag cleared */
    using GPDMA_C9FCR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding TOF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C9FCR_TOF_B_0x0 = 0;
        /** @brief corresponding TOF flag cleared */
    constexpr std::uint32_t GPDMA_C9FCR_TOF_B_0x1 = 1;

    /** @brief GPDMA channel 9 status register */
    using GPDMA_C9SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4E0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This idle flag is deasserted by hardware when the channel is enabled (GPDMA_C9CR.EN = 1) with a valid channel configuration (no USEF to be immediately reported). This idle flag is asserted after hard reset or by hardware when the channel is back in idle state (in suspended or disabled state). 0: channel not in idle state 1: channel in idle state */
    using GPDMA_C9SR_IDLEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: channel not in idle state (value: 0)
     *          - B_0x1: channel in idle state (value: 1)
     */
        /** @brief channel not in idle state */
    constexpr std::uint32_t GPDMA_C9SR_IDLEF_B_0x0 = 0;
        /** @brief channel in idle state */
    constexpr std::uint32_t GPDMA_C9SR_IDLEF_B_0x1 = 1;

    /** @brief A transfer complete event is either a block transfer complete, a 2D/repeated block transfer complete, or a LLI transfer complete including the upload of the next LLI if any, or the full linked-list completion, depending on the transfer complete event mode (GPDMA_C9TR2.TCEM[1:0]). 0: no transfer complete event 1: a transfer complete event occurred */
    using GPDMA_C9SR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no transfer complete event (value: 0)
     *          - B_0x1: a transfer complete event occurred (value: 1)
     */
        /** @brief no transfer complete event */
    constexpr std::uint32_t GPDMA_C9SR_TCF_B_0x0 = 0;
        /** @brief a transfer complete event occurred */
    constexpr std::uint32_t GPDMA_C9SR_TCF_B_0x1 = 1;

    /** @brief A half transfer event is either a half block transfer or a half 2D/repeated block transfer, depending on the transfer complete event mode (GPDMA_C9TR2.TCEM[1:0]). A half block transfer occurs when half of the bytes of the source block size (rounded up integer of GPDMA_C9BR1.BNDT[15:0]/2) has been transferred to the destination. A half 2D/repeated block transfer occurs when half of the repeated blocks (rounded up integer of (GPDMA_C9BR1.BRC[10:0]+1)/2)) has been transferred to the destination. 0: no half transfer event 1: a half transfer event occurred */
    using GPDMA_C9SR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no half transfer event (value: 0)
     *          - B_0x1: a half transfer event occurred (value: 1)
     */
        /** @brief no half transfer event */
    constexpr std::uint32_t GPDMA_C9SR_HTF_B_0x0 = 0;
        /** @brief a half transfer event occurred */
    constexpr std::uint32_t GPDMA_C9SR_HTF_B_0x1 = 1;

    /** @brief None 0: no data transfer error event 1: a master bus error event occurred on a data transfer */
    using GPDMA_C9SR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no data transfer error event (value: 0)
     *          - B_0x1: a master bus error event occurred on a data transfer (value: 1)
     */
        /** @brief no data transfer error event */
    constexpr std::uint32_t GPDMA_C9SR_DTEF_B_0x0 = 0;
        /** @brief a master bus error event occurred on a data transfer */
    constexpr std::uint32_t GPDMA_C9SR_DTEF_B_0x1 = 1;

    /** @brief None 0: no update link transfer error event 1: a master bus error event occurred while updating a linked-list register from memory */
    using GPDMA_C9SR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no update link transfer error event (value: 0)
     *          - B_0x1: a master bus error event occurred while updating a linked-list register from memory (value: 1)
     */
        /** @brief no update link transfer error event */
    constexpr std::uint32_t GPDMA_C9SR_ULEF_B_0x0 = 0;
        /** @brief a master bus error event occurred while updating a linked-list register from memory */
    constexpr std::uint32_t GPDMA_C9SR_ULEF_B_0x1 = 1;

    /** @brief None 0: no user setting error event 1: a user setting error event occurred */
    using GPDMA_C9SR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no user setting error event (value: 0)
     *          - B_0x1: a user setting error event occurred (value: 1)
     */
        /** @brief no user setting error event */
    constexpr std::uint32_t GPDMA_C9SR_USEF_B_0x0 = 0;
        /** @brief a user setting error event occurred */
    constexpr std::uint32_t GPDMA_C9SR_USEF_B_0x1 = 1;

    /** @brief None 0: no completed suspension event 1: a completed suspension event occurred */
    using GPDMA_C9SR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no completed suspension event (value: 0)
     *          - B_0x1: a completed suspension event occurred (value: 1)
     */
        /** @brief no completed suspension event */
    constexpr std::uint32_t GPDMA_C9SR_SUSPF_B_0x0 = 0;
        /** @brief a completed suspension event occurred */
    constexpr std::uint32_t GPDMA_C9SR_SUSPF_B_0x1 = 1;

    /** @brief None 0: no trigger overrun event 1: a trigger overrun event occurred */
    using GPDMA_C9SR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no trigger overrun event (value: 0)
     *          - B_0x1: a trigger overrun event occurred (value: 1)
     */
        /** @brief no trigger overrun event */
    constexpr std::uint32_t GPDMA_C9SR_TOF_B_0x0 = 0;
        /** @brief a trigger overrun event occurred */
    constexpr std::uint32_t GPDMA_C9SR_TOF_B_0x1 = 1;

    /** @brief Number of available write beats in the FIFO, in units of the programmed destination data width (see GPDMA_C9TR1.DDW_LOG2[1:0], in units of bytes, half-words, or words). Note: After having suspended an active transfer, the user may need to read FIFOL[7:0], additionally to GPDMA_C9BR1.BDNT[15:0] and GPDMA_C9BR1.BRC[10:0], to know how many data have been transferred to the destination. Before reading, the user may wait for the transfer to be suspended (GPDMA_C9SR.SUSPF = 1). */
    using GPDMA_C9SR_FIFOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 9 control register */
    using GPDMA_C9CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4E4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Writing 1 into the field RESET (bit 1) causes the hardware to de-assert this bit, whatever is written into this bit 0. Else: this bit is deasserted by hardware when there is a transfer error (master bus error or user setting error) or when there is a channel transfer complete (channel ready to be configured, for example if LSM = 1 at the end of a single execution of the LLI). Else, this bit can be asserted by software. Writing 0 into this EN bit is ignored. 0: write: ignored, read: channel disabled 1: write: enable channel, read: channel enabled */
    using GPDMA_C9CR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write: ignored, read: channel disabled (value: 0)
     *          - B_0x1: write: enable channel, read: channel enabled (value: 1)
     */
        /** @brief write: ignored, read: channel disabled */
    constexpr std::uint32_t GPDMA_C9CR_EN_B_0x0 = 0;
        /** @brief write: enable channel, read: channel enabled */
    constexpr std::uint32_t GPDMA_C9CR_EN_B_0x1 = 1;

    /** @brief This bit is write only. Writing 0 has no impact. Writing 1 implies the reset of the following: the FIFO, the channel internal state, SUSP and EN bits (whatever is written receptively in bit 2 and bit 0). The reset is effective when the channel is in steady state, meaning one of the following: - active channel in suspended state (GPDMA_C9SR.SUSPF = 1 and GPDMA_C9SR.IDLEF=GPDMA_C9CR.EN = 1) - channel in disabled state (GPDMA_C9SR.IDLEF = 1 and GPDMA_C9CR.EN = 0). After writing a RESET, to continue using this channel, the user must explicitly reconfigure the channel including the hardware-modified configuration registers (GPDMA_C9BR1, GPDMA_CxSAR and GPDMA_CxDAR) before enabling again the channel (see the programming sequence in less than xe6 [GPDMA_abort_restart/ID00-1465]/>). 0: no channel reset 1: channel reset */
    using GPDMA_C9CR_RESET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no channel reset (value: 0)
     *          - B_0x1: channel reset (value: 1)
     */
        /** @brief no channel reset */
    constexpr std::uint32_t GPDMA_C9CR_RESET_B_0x0 = 0;
        /** @brief channel reset */
    constexpr std::uint32_t GPDMA_C9CR_RESET_B_0x1 = 1;

    /** @brief Writing 1 into the field RESET (bit 1) causes the hardware to de-assert this bit, whatever is written into this bit 2. Else: Software must write 1 in order to suspend an active channel (channel with an ongoing GPDMA transfer over its master ports). The software must write 0 in order to resume a suspended channel, following the programming sequence detailed in less than xe5 [GPDMA_channel_suspend_and_resume/ID00-1456]/>. 0: write: resume channel, read: channel not suspended 1: write: suspend channel, read: channel suspended. */
    using GPDMA_C9CR_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write: resume channel, read: channel not suspended (value: 0)
     *          - B_0x1: write: suspend channel, read: channel suspended. (value: 1)
     */
        /** @brief write: resume channel, read: channel not suspended */
    constexpr std::uint32_t GPDMA_C9CR_SUSP_B_0x0 = 0;
        /** @brief write: suspend channel, read: channel suspended. */
    constexpr std::uint32_t GPDMA_C9CR_SUSP_B_0x1 = 1;

    /** @brief None 0: interrupt disabled 1: interrupt enabled */
    using GPDMA_C9CR_TCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C9CR_TCIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C9CR_TCIE_B_0x1 = 1;

    /** @brief None 0: interrupt disabled 1: interrupt enabled */
    using GPDMA_C9CR_HTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C9CR_HTIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C9CR_HTIE_B_0x1 = 1;

    /** @brief None 0: interrupt disabled 1: interrupt enabled */
    using GPDMA_C9CR_DTEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C9CR_DTEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C9CR_DTEIE_B_0x1 = 1;

    /** @brief None 0: interrupt disabled 1: interrupt enabled */
    using GPDMA_C9CR_ULEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C9CR_ULEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C9CR_ULEIE_B_0x1 = 1;

    /** @brief None 0: interrupt disabled 1: interrupt enabled */
    using GPDMA_C9CR_USEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C9CR_USEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C9CR_USEIE_B_0x1 = 1;

    /** @brief None 0: interrupt disabled 1: interrupt enabled */
    using GPDMA_C9CR_SUSPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C9CR_SUSPIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C9CR_SUSPIE_B_0x1 = 1;

    /** @brief None 0: interrupt disabled 1: interrupt enabled */
    using GPDMA_C9CR_TOIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C9CR_TOIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C9CR_TOIE_B_0x1 = 1;

    /** @brief First the (possible 1D/repeated) block transfer is executed as defined by the current internal register file until GPDMA_C9BR1.BNDT[15:0] = 0 and GPDMA_C9BR1.BRC[10:0] = 0. Secondly the next linked-list data structure is conditionally uploaded from memory as defined by GPDMA_C9LLR. Then channel execution is completed. 0: channel executed for the full linked-list and completed at the end of the last LLI (GPDMA_C9LLR = 0). The 16 low-significant bits of the link address are null (LA[15:0] = 0) and all the update bits are null (UT1 = UB1 = UT2 = USA = UDA = ULL = 0 and UT3 = UB2 = 0). Then GPDMA_C9BR1.BNDT[15:0] = 0 and GPDMA_C9BR1.BRC[10:0] = 0. 1: channel executed once for the current LLI Note: This bit must be written when EN = 0. This bit is read-only when EN = 1. */
    using GPDMA_C9CR_LSM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: channel executed for the full linked-list and completed at the end of the last LLI (GPDMA_C9LLR = 0). The 16 low-significant bits of the link address are null (LA[15:0] = 0) and all the update bits are null (UT1 = UB1 = UT2 = USA = UDA = ULL = 0 and UT3 = UB2 = 0). Then GPDMA_C9BR1.BNDT[15:0] = 0 and GPDMA_C9BR1.BRC[10:0] = 0. (value: 0)
     *          - B_0x1: channel executed once for the current LLI (value: 1)
     */
        /** @brief channel executed for the full linked-list and completed at the end of the last LLI (GPDMA_C9LLR = 0). The 16 low-significant bits of the link address are null (LA[15:0] = 0) and all the update bits are null (UT1 = UB1 = UT2 = USA = UDA = ULL = 0 and UT3 = UB2 = 0). Then GPDMA_C9BR1.BNDT[15:0] = 0 and GPDMA_C9BR1.BRC[10:0] = 0. */
    constexpr std::uint32_t GPDMA_C9CR_LSM_B_0x0 = 0;
        /** @brief channel executed once for the current LLI */
    constexpr std::uint32_t GPDMA_C9CR_LSM_B_0x1 = 1;

    /** @brief This bit is used to allocate the master port for the update of the GPDMA linked-list registers from the memory. 0: port 0 (AHB) allocated 1: port 1 (AHB) allocated Note: This bit must be written when EN = 0. This bit is read-only when EN = 1. */
    using GPDMA_C9CR_LAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C9CR_LAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C9CR_LAP_B_0x1 = 1;

    /** @brief None 00: low priority, low weight 01: low priority, mid weight 10: low priority, high weight 11: high priority Note: This bit must be written when EN = 0. This bit is read-only when EN = 1. */
    using GPDMA_C9CR_PRIO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: low priority, low weight (value: 0)
     *          - B_0x1: low priority, mid weight (value: 1)
     *          - B_0x2: low priority, high weight (value: 2)
     *          - B_0x3: high priority (value: 3)
     */
        /** @brief low priority, low weight */
    constexpr std::uint32_t GPDMA_C9CR_PRIO_B_0x0 = 0;
        /** @brief low priority, mid weight */
    constexpr std::uint32_t GPDMA_C9CR_PRIO_B_0x1 = 1;
        /** @brief low priority, high weight */
    constexpr std::uint32_t GPDMA_C9CR_PRIO_B_0x2 = 2;
        /** @brief high priority */
    constexpr std::uint32_t GPDMA_C9CR_PRIO_B_0x3 = 3;

    /** @brief GPDMA channel 9 transfer register 1 */
    using GPDMA_C9TR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x510, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief None 00: byte 01: half-word (2 bytes) 10: word (4 bytes) 11: user setting error reported and no transfer issued Note: Setting a 8-byte data width causes a user setting error to be reported and no transfer is issued. +: A source block size must be a multiple of the source data width (GPDMA_C9BR1.BNDT[2:0] versus SDW_LOG2[1:0]). Otherwise, a user setting error is reported and no transfer is issued. +: A source burst transfer must have an aligned address with its data width (start address GPDMA_CxSAR[2:0] versus SDW_LOG2[1:0]). Otherwise, a user setting error is reported and none transfer is issued. */
    using GPDMA_C9TR1_SDW_LOG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: byte (value: 0)
     *          - B_0x1: half-word (2 bytes) (value: 1)
     *          - B_0x2: word (4 bytes) (value: 2)
     *          - B_0x3: user setting error reported and no transfer issued (value: 3)
     */
        /** @brief byte */
    constexpr std::uint32_t GPDMA_C9TR1_SDW_LOG2_B_0x0 = 0;
        /** @brief half-word (2 bytes) */
    constexpr std::uint32_t GPDMA_C9TR1_SDW_LOG2_B_0x1 = 1;
        /** @brief word (4 bytes) */
    constexpr std::uint32_t GPDMA_C9TR1_SDW_LOG2_B_0x2 = 2;
        /** @brief user setting error reported and no transfer issued */
    constexpr std::uint32_t GPDMA_C9TR1_SDW_LOG2_B_0x3 = 3;

    /** @brief The source address, pointed by GPDMA_CxSAR, is kept constant after a burst beat/single transfer or is incremented by the offset value corresponding to a contiguous data after a burst beat/single transfer. 0: fixed burst 1: contiguously incremented burst */
    using GPDMA_C9TR1_SINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fixed burst (value: 0)
     *          - B_0x1: contiguously incremented burst (value: 1)
     */
        /** @brief fixed burst */
    constexpr std::uint32_t GPDMA_C9TR1_SINC_B_0x0 = 0;
        /** @brief contiguously incremented burst */
    constexpr std::uint32_t GPDMA_C9TR1_SINC_B_0x1 = 1;

    /** @brief The burst length unit is one data named beat within a burst. If SBL_1[5:0] = 0, the burst can be named as single. Each data/beat has a width defined by the destination data width SDW_LOG2[1:0]. Note: If a burst transfer crossed a 1-Kbyte address boundary on a AHB transfer, the GPDMA modifies and shortens the programmed burst into singles or bursts of lower length, to be compliant with the AHB protocol. +: If a burst transfer is of length greater than the FIFO size of the channel 9, the GPDMA modifies and shortens the programmed burst into singles or bursts of lower length, to be compliant with the FIFO size. Transfer performance is lower, with GPDMA re-arbitration between effective and lower singles/bursts, but the data integrity is guaranteed. */
    using GPDMA_C9TR1_SBL_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief If DDW_LOG2[1:0] = SDW_LOG2[1:0]: if the data width of a burst destination transfer is equal to the data width of a burst source transfer, these bits are ignored. */
    using GPDMA_C9TR1_PAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0_COND1: COND1 is [PAM_1] source data is transferred as right aligned, padded with 0s up to the destination data width (value: 0)
     *          - B_0x1_COND1: COND1 is [PAM_1] source data is transferred as right aligned, sign extended up to the destination data width (value: 1)
     *          - B_0x2_COND1: COND1 is [PAM_1] successive source data are FIFO queued and packed at the destination data width, in a left (LSB) to right (MSB) order (named little endian), before a destination transfer (value: 2)
     *          - B_0x3_COND1: COND1 is [PAM_1] successive source data are FIFO queued and packed at the destination data width, in a left (LSB) to right (MSB) order (named little endian), before a destination transfer (value: 3)
     */
        /** @brief COND1 is [PAM_1] source data is transferred as right aligned, padded with 0s up to the destination data width */
    constexpr std::uint32_t GPDMA_C9TR1_PAM_B_0x0_COND1 = 0;
        /** @brief COND1 is [PAM_1] source data is transferred as right aligned, sign extended up to the destination data width */
    constexpr std::uint32_t GPDMA_C9TR1_PAM_B_0x1_COND1 = 1;
        /** @brief COND1 is [PAM_1] successive source data are FIFO queued and packed at the destination data width, in a left (LSB) to right (MSB) order (named little endian), before a destination transfer */
    constexpr std::uint32_t GPDMA_C9TR1_PAM_B_0x2_COND1 = 2;
        /** @brief COND1 is [PAM_1] successive source data are FIFO queued and packed at the destination data width, in a left (LSB) to right (MSB) order (named little endian), before a destination transfer */
    constexpr std::uint32_t GPDMA_C9TR1_PAM_B_0x3_COND1 = 3;

    /** @brief If the source data width is shorter than a word, this bit is ignored. If the source data width is a word: 0: no byte-based exchange within the unaligned half-word of each source word 1: the two consecutive bytes within the unaligned half-word of each source word are exchanged. */
    using GPDMA_C9TR1_SBx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no byte-based exchange within the unaligned half-word of each source word (value: 0)
     *          - B_0x1: the two consecutive bytes within the unaligned half-word of each source word are exchanged. (value: 1)
     */
        /** @brief no byte-based exchange within the unaligned half-word of each source word */
    constexpr std::uint32_t GPDMA_C9TR1_SBx_B_0x0 = 0;
        /** @brief the two consecutive bytes within the unaligned half-word of each source word are exchanged. */
    constexpr std::uint32_t GPDMA_C9TR1_SBx_B_0x1 = 1;

    /** @brief This bit is used to allocate the master port for the source transfer 0: port 0 (AHB) allocated 1: port 1 (AHB) allocated Note: This bit must be written when EN = 0. This bit is read-only when EN = 1. */
    using GPDMA_C9TR1_SAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C9TR1_SAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C9TR1_SAP_B_0x1 = 1;

    /** @brief If GPDMA_SECCFGR.SEC9 = 1 and the access is secure: This is a secure register bit. This bit can only be read by a secure software. This bit must be written by a secure software when GPDMA_SECCFGR.SEC9 = 1. A secure write is ignored when GPDMA_SECCFGR.SEC9 = 0. When GPDMA_SECCFGR.SEC9 is deasserted, this SSEC bit is also deasserted by hardware (on a secure reconfiguration of the channel as non-secure), and the GPDMA transfer from the source is non-secure. 0: GPDMA transfer non-secure 1: GPDMA transfer secure */
    using GPDMA_C9TR1_SSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPDMA transfer non-secure (value: 0)
     *          - B_0x1: GPDMA transfer secure (value: 1)
     */
        /** @brief GPDMA transfer non-secure */
    constexpr std::uint32_t GPDMA_C9TR1_SSEC_B_0x0 = 0;
        /** @brief GPDMA transfer secure */
    constexpr std::uint32_t GPDMA_C9TR1_SSEC_B_0x1 = 1;

    /** @brief None 00: byte 01: half-word (2 bytes) 10: word (4 bytes) 11: user setting error reported and no transfer issued Note: Setting a 8-byte data width causes a user setting error to be reported and none transfer is issued. +: A destination burst transfer must have an aligned address with its data width (start address GPDMA_CxDAR[2:0] and address offset GPDMA_CxTR3.DAO[2:0], versus DDW_LOG2[1:0]). Otherwise a user setting error is reported and no transfer is issued. */
    using GPDMA_C9TR1_DDW_LOG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: byte (value: 0)
     *          - B_0x1: half-word (2 bytes) (value: 1)
     *          - B_0x2: word (4 bytes) (value: 2)
     *          - B_0x3: user setting error reported and no transfer issued (value: 3)
     */
        /** @brief byte */
    constexpr std::uint32_t GPDMA_C9TR1_DDW_LOG2_B_0x0 = 0;
        /** @brief half-word (2 bytes) */
    constexpr std::uint32_t GPDMA_C9TR1_DDW_LOG2_B_0x1 = 1;
        /** @brief word (4 bytes) */
    constexpr std::uint32_t GPDMA_C9TR1_DDW_LOG2_B_0x2 = 2;
        /** @brief user setting error reported and no transfer issued */
    constexpr std::uint32_t GPDMA_C9TR1_DDW_LOG2_B_0x3 = 3;

    /** @brief The destination address, pointed by GPDMA_CxDAR, is kept constant after a burst beat/single transfer, or is incremented by the offset value corresponding to a contiguous data after a burst beat/single transfer. 0: fixed burst 1: contiguously incremented burst */
    using GPDMA_C9TR1_DINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fixed burst (value: 0)
     *          - B_0x1: contiguously incremented burst (value: 1)
     */
        /** @brief fixed burst */
    constexpr std::uint32_t GPDMA_C9TR1_DINC_B_0x0 = 0;
        /** @brief contiguously incremented burst */
    constexpr std::uint32_t GPDMA_C9TR1_DINC_B_0x1 = 1;

    /** @brief The burst length unit is one data named beat within a burst. If DBL_1[5:0] = 0, the burst can be named as single. Each data/beat has a width defined by the destination data width DDW_LOG2[1:0]. Note: If a burst transfer crossed a 1-Kbyte address boundary on a AHB transfer, the GPDMA modifies and shortens the programmed burst into singles or bursts of lower length, to be compliant with the AHB protocol. +: If a burst transfer is of length greater than the FIFO size of the channel 9, the GPDMA modifies and shortens the programmed burst into singles or bursts of lower length, to be compliant with the FIFO size. Transfer performance is lower, with GPDMA re-arbitration between effective and lower singles/bursts, but the data integrity is guaranteed. */
    using GPDMA_C9TR1_DBL_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief If the destination data size is a byte, this bit is ignored. If the destination data size is not a byte: 0: no byte-based exchange within half-word 1: the two consecutive (post PAM) bytes are exchanged in each destination half-word. */
    using GPDMA_C9TR1_DBx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no byte-based exchange within half-word (value: 0)
     *          - B_0x1: the two consecutive (post PAM) bytes are exchanged in each destination half-word. (value: 1)
     */
        /** @brief no byte-based exchange within half-word */
    constexpr std::uint32_t GPDMA_C9TR1_DBx_B_0x0 = 0;
        /** @brief the two consecutive (post PAM) bytes are exchanged in each destination half-word. */
    constexpr std::uint32_t GPDMA_C9TR1_DBx_B_0x1 = 1;

    /** @brief If the destination data size is shorter than a word, this bit is ignored. If the destination data size is a word: 0: no halfword-based exchanged within word 1: the two consecutive (post PAM) half-words are exchanged in each destination word. */
    using GPDMA_C9TR1_DHx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no halfword-based exchanged within word (value: 0)
     *          - B_0x1: the two consecutive (post PAM) half-words are exchanged in each destination word. (value: 1)
     */
        /** @brief no halfword-based exchanged within word */
    constexpr std::uint32_t GPDMA_C9TR1_DHx_B_0x0 = 0;
        /** @brief the two consecutive (post PAM) half-words are exchanged in each destination word. */
    constexpr std::uint32_t GPDMA_C9TR1_DHx_B_0x1 = 1;

    /** @brief This bit is used to allocate the master port for the destination transfer 0: port 0 (AHB) allocated 1: port 1 (AHB) allocated Note: This bit must be written when EN = 0. This bit is read-only when EN = 1. */
    using GPDMA_C9TR1_DAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C9TR1_DAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C9TR1_DAP_B_0x1 = 1;

    /** @brief If GPDMA_SECCFGR.SEC9 = 1 and the access is secure: This is a secure register bit. This bit can only be read by a secure software. This bit must be written by a secure software when GPDMA_SECCFGR.SEC9 = 1. A secure write is ignored when GPDMA_SECCFGR.SEC9 = 0. When GPDMA_SECCFGR.SEC9 is deasserted, this DSEC bit is also deasserted by hardware (on a secure reconfiguration of the channel as non-secure), and the GPDMA transfer to the destination is non-secure. 0: GPDMA transfer non-secure 1: GPDMA transfer secure */
    using GPDMA_C9TR1_DSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPDMA transfer non-secure (value: 0)
     *          - B_0x1: GPDMA transfer secure (value: 1)
     */
        /** @brief GPDMA transfer non-secure */
    constexpr std::uint32_t GPDMA_C9TR1_DSEC_B_0x0 = 0;
        /** @brief GPDMA transfer secure */
    constexpr std::uint32_t GPDMA_C9TR1_DSEC_B_0x1 = 1;

    /** @brief GPDMA channel 9 transfer register 2 */
    using GPDMA_C9TR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x514, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief These bits are ignored if channel 9 is activated (GPDMA_C9CR.EN asserted) with SWREQ=1 (software request for a memory-to-memory transfer). Else, the selected hardware request is internally taken into account as per less than xe4 [GPDMA_requests]/>. The user must not assign a same input hardware request (same REQSEL[6:0] value) to different active GPDMA channels (GPDMA_C9CR.EN = 1 and GPDMA_C9TR2.SWREQ = 0 for these channels). GPDMA is not intended to hardware support the case of simultaneous enabled channels incorrectly configured with a same hardware peripheral request signal, and there is no user setting error reporting. */
    using GPDMA_C9TR2_REQSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This bit is internally taken into account when GPDMA_C9CR.EN is asserted. 0: no software request. The selected hardware request REQSEL[6:0] is taken into account. 1: software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[6:0] is ignored. */
    using GPDMA_C9TR2_SWREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no software request. The selected hardware request REQSEL[6:0] is taken into account. (value: 0)
     *          - B_0x1: software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[6:0] is ignored. (value: 1)
     */
        /** @brief no software request. The selected hardware request REQSEL[6:0] is taken into account. */
    constexpr std::uint32_t GPDMA_C9TR2_SWREQ_B_0x0 = 0;
        /** @brief software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[6:0] is ignored. */
    constexpr std::uint32_t GPDMA_C9TR2_SWREQ_B_0x1 = 1;

    /** @brief This bit is ignored if channel 9 is activated (GPDMA_C9CR.EN asserted) with SWREQ = 1 (software request for a memory-to-memory transfer). Else: 0: selected hardware request driven by a source peripheral (request signal taken into account by the GPDMA transfer scheduler over the source/read port) 1: selected hardware request driven by a destination peripheral (request signal taken into account by the GPDMA transfer scheduler over the destination/write port) Note: If the channel 9 is activated (GPDMA_C9CR.EN is asserted) with SWREQ = 0 and PFREQ = 1 (peripheral hardware request with peripheral flow-control mode), any software assertion to this DREQ bit is ignored: in peripheral flow-control mode, only a peripheral-to-memory transfer is supported. */
    using GPDMA_C9TR2_DREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: selected hardware request driven by a source peripheral (request signal taken into account by the GPDMA transfer scheduler over the source/read port) (value: 0)
     *          - B_0x1: selected hardware request driven by a destination peripheral (request signal taken into account by the GPDMA transfer scheduler over the destination/write port) (value: 1)
     */
        /** @brief selected hardware request driven by a source peripheral (request signal taken into account by the GPDMA transfer scheduler over the source/read port) */
    constexpr std::uint32_t GPDMA_C9TR2_DREQ_B_0x0 = 0;
        /** @brief selected hardware request driven by a destination peripheral (request signal taken into account by the GPDMA transfer scheduler over the destination/write port) */
    constexpr std::uint32_t GPDMA_C9TR2_DREQ_B_0x1 = 1;

    /** @brief If the channel 9 is activated (GPDMA_C9CR.EN asserted) with SWREQ = 1 (software request for a memory-to-memory transfer), this bit is ignored. Else: 0: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a burst level. 1: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see less than xe4 [GPDMA_requests]/>). */
    using GPDMA_C9TR2_BREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a burst level. (value: 0)
     *          - B_0x1: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see less than xe4 [GPDMA_requests]/>). (value: 1)
     */
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a burst level. */
    constexpr std::uint32_t GPDMA_C9TR2_BREQ_B_0x0 = 0;
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see less than xe4 [GPDMA_requests]/>). */
    constexpr std::uint32_t GPDMA_C9TR2_BREQ_B_0x1 = 1;

    /** @brief Caution: If a given channel 9 is not implemented with this feature, this bit is reserved and PFREQ is not present (see less than xe1 [GPDMA_channels]/> for the list of the implemented channels with this feature). */
    using GPDMA_C9TR2_PFREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol in GPDMA control mode. The GPDMA is programmed with GPDMA_C9TR1.BNDT[15:0] and this is internally used by the hardware for the block transfer completion. (value: 0)
     *          - B_0x1: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol in peripheral control mode. The GPDMA block transfer can be early completed by the peripheral itself (see less than xe2 [GPDMA_channels_peripheral]/> for more details). (value: 1)
     */
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol in GPDMA control mode. The GPDMA is programmed with GPDMA_C9TR1.BNDT[15:0] and this is internally used by the hardware for the block transfer completion. */
    constexpr std::uint32_t GPDMA_C9TR2_PFREQ_B_0x0 = 0;
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol in peripheral control mode. The GPDMA block transfer can be early completed by the peripheral itself (see less than xe2 [GPDMA_channels_peripheral]/> for more details). */
    constexpr std::uint32_t GPDMA_C9TR2_PFREQ_B_0x1 = 1;

    /** @brief These bits define the transfer granularity for its conditioning by the trigger. If the channel 9 is enabled (GPDMA_C9CR.EN asserted) with TRIGPOL[1:0] = 00 or 11, these TRIGM[1:0] bits are ignored. Else, a GPDMA transfer is conditioned by at least one trigger hit: 00: at block level: the first burst read of each block transfer is conditioned by one hit trigger (channel 9 = 12 to 15, for each block if a 2D/repeated block is configured with GPDMA_C9BR1.BRC[10:0] is not equal to 0). 10: at link level: a LLI link transfer is conditioned by one hit trigger. The LLI data transfer (if any) is not conditioned. 11: at programmed burst level: If SWREQ = 1, each programmed burst read is conditioned by one hit trigger. If SWREQ = 0, each programmed burst that is requested by the selected peripheral, is conditioned by one hit trigger. - If the peripheral is programmed as a source (DREQ = 0) of the LLI data transfer, each programmed burst read is conditioned. - If the peripheral is programmed as a destination (DREQ = 1) of the LLI data transfer, each programmed burst write is conditioned. The first memory burst read of a (possibly 2D/repeated) block, also named as the first ready FIFO-based source burst, is gated by the occurrence of both the hardware request and the first trigger hit.01: channel 9 = 0 to , same as 00; channel 9 , at 2D/repeated block level. The first burst read of a 2D/repeated block transfer is conditioned by one hit trigger. The GPDMA monitoring of a trigger for channel 9 is started when the channel is enabled/loaded with a new active trigger configuration: rising or falling edge on a selected trigger (TRIGPOL[1:0] = 01 or respectively TRIGPOL[1:0]=10). The monitoring of this trigger is kept active during the triggered and uncompleted (data or link) transfer; and if a new trigger is detected then, this hit is internally memorized to grant the next transfer, as long as the defined rising or falling edge is not modified, and the TRIGSEL[5:0] is not modified, and the channel is enabled. Transferring a next LLIn+1 that updates the GPDMA_C9TR2 with a new value for any of TRIGSEL[5:0] or TRIGPOL[1:0], resets the monitoring, trashing the memorized hit of the formerly defined LLIn trigger. After a first new trigger hitn+1 is memorized, if another second trigger hitn+2 is detected and if the hitn triggered transfer is still not completed, hitn+2 is lost and not memorized.memorized. A trigger overrun flag is reported (GPDMA_C9SR.TOF=1), and an interrupt is generated if enabled (GPDMA_C9CR.TOIE = 1). The channel is not automatically disabled by hardware due to a trigger overrun. Note: When the source block size is not a multiple of the source burst size and is a multiple of the source data width, then the last programmed source burst is not completed and is internally shorten to match the block size. In this case, if TRIGM[1:0] = 11 and (SWREQ = 1 or (SWREQ = 0 and DREQ = 0)), the shortened burst transfer (by singles or/and by bursts of lower length) is conditioned once by the trigger. +: When the programmed destination burst is internally shortened by singles or/and by bursts of lower length (versus FIFO size, versus block size, 1-Kbyte boundary address crossing): if the trigger is conditioning the programmed destination burst (if TRIGM[1:0] = 11 and SWREQ = 0 and DREQ = 1), this shortened destination burst transfer is conditioned once by the trigger. */
    using GPDMA_C9TR2_TRIGM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief These bits select the trigger event input of the GPDMA transfer (as per less than xe3 [GPDMA_triggers]/>), with anactive trigger event if TRIGPOL[1:0] is not equal to 00. */
    using GPDMA_C9TR2_TRIGSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief These bits define the polarity of the selected trigger event input defined by TRIGSEL[5:0]. 00: no trigger (masked trigger event) 01: trigger on the rising edge 10: trigger on the falling edge 11: same as 00 */
    using GPDMA_C9TR2_TRIGPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no trigger (masked trigger event) (value: 0)
     *          - B_0x1: trigger on the rising edge (value: 1)
     *          - B_0x2: trigger on the falling edge (value: 2)
     *          - B_0x3: same as 00 (value: 3)
     */
        /** @brief no trigger (masked trigger event) */
    constexpr std::uint32_t GPDMA_C9TR2_TRIGPOL_B_0x0 = 0;
        /** @brief trigger on the rising edge */
    constexpr std::uint32_t GPDMA_C9TR2_TRIGPOL_B_0x1 = 1;
        /** @brief trigger on the falling edge */
    constexpr std::uint32_t GPDMA_C9TR2_TRIGPOL_B_0x2 = 2;
        /** @brief same as 00 */
    constexpr std::uint32_t GPDMA_C9TR2_TRIGPOL_B_0x3 = 3;

    /** @brief These bits define the transfer granularity for the transfer complete and half transfer complete events generation. 00: at block level (when GPDMA_C9BR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. 01: channel 9 (0 to ), same as 00, channel 9 , at 2D/repeated block level (when GPDMA_C9BR1.BRC[10:0] = 0 and GPDMA_C9BR1.BNDT[15:0] = 0). The complete (and the half) transfer event is generated at the end (respectively half of the end) of the 2D/repeated block. 10: at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer. The LLI data transfer is a block transfer or a 2D/repeated block transfer for channel 9 , if any data transfer. 11: at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address GPDMA_C9LLR.LA[15:2] to zero and clears all the GPDMA_C9LLR update bits (UT1, UT2, UB1, USA, UDA and ULL, plus UT3 and UB2). If the channel transfer is continuous/infinite, no event is generated. Note: If the initial LLI0 data transfer is null/void (directly programmed by the internal register file with GPDMA_C9BR1.BNDT[15:0] = 0), then neither the complete transfer event nor the half transfer event is generated. +: If the initial LLI0 data transfer is null/void (directly programmed by the internal register file with GPDMA_C9BR1.BNDT[15:0] = 0), then neither the complete transfer event nor the half transfer event is generated. +: If the initial LLI0 data transfer is null/void (directly programmed by the internal register file with GPDMA_C9BR1.BNDT[15:0] = 0), then the half transfer event is not generated, and the transfer complete event is generated when is completed the loading of the LLI1. */
    using GPDMA_C9TR2_TCEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: at block level (when GPDMA_C9BR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. (value: 0)
     *          - B_0x1: channel 9 (0 to ), same as 00, channel 9 , at 2D/repeated block level (when GPDMA_C9BR1.BRC[10:0] = 0 and GPDMA_C9BR1.BNDT[15:0] = 0). The complete (and the half) transfer event is generated at the end (respectively half of the end) of the 2D/repeated block. (value: 1)
     *          - B_0x2: at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer. The LLI data transfer is a block transfer or a 2D/repeated block transfer for channel 9 , if any data transfer. (value: 2)
     *          - B_0x3: at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address GPDMA_C9LLR.LA[15:2] to zero and clears all the GPDMA_C9LLR update bits (UT1, UT2, UB1, USA, UDA and ULL, plus UT3 and UB2). If the channel transfer is continuous/infinite, no event is generated. (value: 3)
     */
        /** @brief at block level (when GPDMA_C9BR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. */
    constexpr std::uint32_t GPDMA_C9TR2_TCEM_B_0x0 = 0;
        /** @brief channel 9 (0 to ), same as 00, channel 9 , at 2D/repeated block level (when GPDMA_C9BR1.BRC[10:0] = 0 and GPDMA_C9BR1.BNDT[15:0] = 0). The complete (and the half) transfer event is generated at the end (respectively half of the end) of the 2D/repeated block. */
    constexpr std::uint32_t GPDMA_C9TR2_TCEM_B_0x1 = 1;
        /** @brief at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer. The LLI data transfer is a block transfer or a 2D/repeated block transfer for channel 9 , if any data transfer. */
    constexpr std::uint32_t GPDMA_C9TR2_TCEM_B_0x2 = 2;
        /** @brief at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address GPDMA_C9LLR.LA[15:2] to zero and clears all the GPDMA_C9LLR update bits (UT1, UT2, UB1, USA, UDA and ULL, plus UT3 and UB2). If the channel transfer is continuous/infinite, no event is generated. */
    constexpr std::uint32_t GPDMA_C9TR2_TCEM_B_0x3 = 3;

    /** @brief GPDMA channel 9 block register 1 */
    using GPDMA_C9BR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x518, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Block size transferred from the source. When the channel is enabled, this field becomes read-only and is decremented, indicating the remaining number of data items in the current source block to be transferred. BNDT[15:0] is programmed in number of bytes, maximum source block size is 64 Kbytes -1. Once the last data transfer is completed (BNDT[15:0] = 0): - if GPDMA_C9LLR.UB1 = 1, this field is updated by the LLI in the memory. - if GPDMA_C9LLR.UB1 = 0 and if there is at least one not null Uxx update bit, this field is internally restored to the programmed value. - if all GPDMA_C9LLR.Uxx = 0 and if GPDMA_C9LLR.LA[15:0] is not equal to 0, this field is internally restored to the programmed value (infinite/continuous last LLI). - if GPDMA_C9LLR = 0, this field is kept as zero following the last LLI data transfer. Note: A non-null source block size must be a multiple of the source data width (BNDT[2:0] versus GPDMA_C9TR1.SDW_LOG2[1:0]). Else a user setting error is reported and no transfer is issued. +: When configured in packing mode (GPDMA_C9TR1.PAM[1] = 1 and destination data width different from source data width), a non-null source block size must be a multiple of the destination data width (BNDT[2:0] versus GPDMA_C9TR1.DDW_LOG2[1:0]). Else a user setting error is reported and no transfer is issued. */
    using GPDMA_C9BR1_BNDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 11 block register 1 */
    using GPDMA_C11BR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x518, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Block size transferred from the source. When the channel is enabled, this field becomes read-only and is decremented, indicating the remaining number of data items in the current source block to be transferred. BNDT[15:0] is programmed in number of bytes, maximum source block size is 64 Kbytes -1. Once the last data transfer is completed (BNDT[15:0] = 0): - if GPDMA_C11LLR.UB1 = 1, this field is updated by the LLI in the memory. - if GPDMA_C11LLR.UB1 = 0 and if there is at least one not null Uxx update bit, this field is internally restored to the programmed value. - if all GPDMA_C11LLR.Uxx = 0 and if GPDMA_C11LLR.LA[15:0] is not equal to 0, this field is internally restored to the programmed value (infinite/continuous last LLI). - if GPDMA_C11LLR = 0, this field is kept as zero following the last LLI data transfer. Note: A non-null source block size must be a multiple of the source data width (BNDT[2:0] versus GPDMA_C11TR1.SDW_LOG2[1:0]). Else a user setting error is reported and no transfer is issued. +: When configured in packing mode (GPDMA_C11TR1.PAM[1] = 1 and destination data width different from source data width), a non-null source block size must be a multiple of the destination data width (BNDT[2:0] versus GPDMA_C{x}TR1.DDW_LOG2[1:0]). Else a user setting error is reported and no transfer is issued. */
    using GPDMA_C11BR1_BNDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This field contains the number of repetitions of the current block (0 to 2047). When the channel is enabled, this field becomes read-only. After decrements, this field indicates the remaining number of blocks, excluding the current one. This counter is hardware decremented for each completed block transfer. Once the last block transfer is completed (BRC[10:0] = BNDT[15:0] = 0): - If GPDMA_C11LLR.UB1 = 1, all GPDMA_C11BR1 fields are updated by the next LLI in the memory. - If GPDMA_C11LLR.UB1 = 0 and if there is at least one not null Uxx update bit, this field is internally restored to the programmed value. - if all GPDMA_C11LLR.Uxx = 0 and if GPDMA_C11LLR.LA[15:0] is not equal to 0, this field is internally restored to the programmed value (infinite/continuous last LLI). - if GPDMA_C11LL R = 0, this field is kept as zero following the last LLI and data transfer. */
    using GPDMA_C11BR1_BRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief None 0: At the end of a programmed burst transfer from the source, the GPDMA_C11SAR register is updated by adding the programmed offset GPDMA_C11TR3.SAO to the current GPDMA_C11SAR value (current source address) 1: At the end of a programmed burst transfer from the source, the GPDMA_C11SAR register is updated by subtracting the programmed offset GPDMA_C11TR3.SAO to the current GPDMA_C11SAR value (current source address) */
    using GPDMA_C11BR1_SDEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: At the end of a programmed burst transfer from the source, the GPDMA_C11SAR register is updated by adding the programmed offset GPDMA_C11TR3.SAO to the current GPDMA_C11SAR value (current source address) (value: 0)
     *          - B_0x1: At the end of a programmed burst transfer from the source, the GPDMA_C11SAR register is updated by subtracting the programmed offset GPDMA_C11TR3.SAO to the current GPDMA_C11SAR value (current source address) (value: 1)
     */
        /** @brief At the end of a programmed burst transfer from the source, the GPDMA_C11SAR register is updated by adding the programmed offset GPDMA_C11TR3.SAO to the current GPDMA_C11SAR value (current source address) */
    constexpr std::uint32_t GPDMA_C11BR1_SDEC_B_0x0 = 0;
        /** @brief At the end of a programmed burst transfer from the source, the GPDMA_C11SAR register is updated by subtracting the programmed offset GPDMA_C11TR3.SAO to the current GPDMA_C11SAR value (current source address) */
    constexpr std::uint32_t GPDMA_C11BR1_SDEC_B_0x1 = 1;

    /** @brief None 0: At the end of a programmed burst transfer to the destination, the GPDMA_C11DAR register is updated by adding the programmed offset GPDMA_C11TR3.DAO to the current GPDMA_C11DAR value (current destination address) 1: At the end of a programmed burst transfer to the destination, the GPDMA_C11DAR register is updated by subtracting the programmed offset GPDMA_C11TR3.DAO to the current GPDMA_C11DAR value (current destination address) */
    using GPDMA_C11BR1_DDEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: At the end of a programmed burst transfer to the destination, the GPDMA_C11DAR register is updated by adding the programmed offset GPDMA_C11TR3.DAO to the current GPDMA_C11DAR value (current destination address) (value: 0)
     *          - B_0x1: At the end of a programmed burst transfer to the destination, the GPDMA_C11DAR register is updated by subtracting the programmed offset GPDMA_C11TR3.DAO to the current GPDMA_C11DAR value (current destination address) (value: 1)
     */
        /** @brief At the end of a programmed burst transfer to the destination, the GPDMA_C11DAR register is updated by adding the programmed offset GPDMA_C11TR3.DAO to the current GPDMA_C11DAR value (current destination address) */
    constexpr std::uint32_t GPDMA_C11BR1_DDEC_B_0x0 = 0;
        /** @brief At the end of a programmed burst transfer to the destination, the GPDMA_C11DAR register is updated by subtracting the programmed offset GPDMA_C11TR3.DAO to the current GPDMA_C11DAR value (current destination address) */
    constexpr std::uint32_t GPDMA_C11BR1_DDEC_B_0x1 = 1;

    /** @brief None 0: at the end of a block transfer, the GPDMA_C11SAR register is updated by adding the programmed offset GPDMA_C11BR2.BRSAO to the current GPDMA_C11SAR value (current source address) 1: at the end of a block transfer, the GPDMA_C11SAR register is updated by subtracting the programmed offset GPDMA_C11BR2.BRSAO from the current GPDMA_C11SAR value (current source address) Note: On top of this increment/decrement (depending on BRSDEC), GPDMA_C11SAR is in the same time also updated by the increment/decrement (depending on SDEC) of the GPDMA_C11TR3.SAO value, as it is done after any programmed burst transfer. */
    using GPDMA_C11BR1_BRSDEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: at the end of a block transfer, the GPDMA_C11SAR register is updated by adding the programmed offset GPDMA_C11BR2.BRSAO to the current GPDMA_C11SAR value (current source address) (value: 0)
     *          - B_0x1: at the end of a block transfer, the GPDMA_C11SAR register is updated by subtracting the programmed offset GPDMA_C11BR2.BRSAO from the current GPDMA_C11SAR value (current source address) (value: 1)
     */
        /** @brief at the end of a block transfer, the GPDMA_C11SAR register is updated by adding the programmed offset GPDMA_C11BR2.BRSAO to the current GPDMA_C11SAR value (current source address) */
    constexpr std::uint32_t GPDMA_C11BR1_BRSDEC_B_0x0 = 0;
        /** @brief at the end of a block transfer, the GPDMA_C11SAR register is updated by subtracting the programmed offset GPDMA_C11BR2.BRSAO from the current GPDMA_C11SAR value (current source address) */
    constexpr std::uint32_t GPDMA_C11BR1_BRSDEC_B_0x1 = 1;

    /** @brief None 0: at the end of a block transfer, the GPDMA_C11DAR register is updated by adding the programmed offset GPDMA_C11BR2.BRDAO to the current GPDMA_C11DAR value (current destination address) 1: at the end of a block transfer, the GPDMA_C11DAR register is updated by subtracting the programmed offset GPDMA_C11BR2.BRDAO from the current GPDMA_C11DAR value (current destination address) Note: On top of this increment/decrement (depending on BRDDEC), GPDMA_C11DAR is in the same time also updated by the increment/decrement (depending on DDEC) of the GPDMA_C11TR3.DAO value, as it is usually done at the end of each programmed bursttransfer. */
    using GPDMA_C11BR1_BRDDEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: at the end of a block transfer, the GPDMA_C11DAR register is updated by adding the programmed offset GPDMA_C11BR2.BRDAO to the current GPDMA_C11DAR value (current destination address) (value: 0)
     *          - B_0x1: at the end of a block transfer, the GPDMA_C11DAR register is updated by subtracting the programmed offset GPDMA_C11BR2.BRDAO from the current GPDMA_C11DAR value (current destination address) (value: 1)
     */
        /** @brief at the end of a block transfer, the GPDMA_C11DAR register is updated by adding the programmed offset GPDMA_C11BR2.BRDAO to the current GPDMA_C11DAR value (current destination address) */
    constexpr std::uint32_t GPDMA_C11BR1_BRDDEC_B_0x0 = 0;
        /** @brief at the end of a block transfer, the GPDMA_C11DAR register is updated by subtracting the programmed offset GPDMA_C11BR2.BRDAO from the current GPDMA_C11DAR value (current destination address) */
    constexpr std::uint32_t GPDMA_C11BR1_BRDDEC_B_0x1 = 1;

    /** @brief GPDMA channel 9 source address register */
    using GPDMA_C9SAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x51C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This field is the pointer to the address from which the next data is read. During the channel activity, depending on the source addressing mode (GPDMA_C9TR1.SINC), this field is kept fixed or incremented by the data width (GPDMA_C9TR1.SDW_LOG2[1:0]) after each burst source data, reflecting the next address from which data is read. During the channel activity, this address is updated after each completed source burst, consequently to: - the programmed source burst; either in fixed addressing mode or in contiguous-data incremented mode. If contiguously incremented (GPDMA_C9TR1.SINC = 1), then the additional address offset value is the programmed burst size, as defined by GPDMA_C9TR1.SBL_1[5:0] and GPDMA_C9TR1.SDW_LOG2[21:0] - the additional source incremented/decremented offset value as programmed by GPDMA_C9BR1.SDEC and GPDMA_CxTR3.SAO[12:0]. - once/if completed source block transfer, for a channel 9 with 2D addressing capability (x = 12 to 15). additional block repeat source incremented/decremented offset value as programmed by GPDMA_C9BR1.BRSDEC and GPDMA_CxBR2.BRSAO[15:0] In linked-list mode, after a LLI data transfer is completed, this register is automatically updated by GPDMA from the memory, provided the LLI is set with GPDMA_C9LLR.USA = 1. Note: A source address must be aligned with the programmed data width of a source burst (SA[2:0] versus GPDMA_C9TR1.SDW_LOG2[1:0]). Else, a user setting error is reported and no transfer is issued. +: When the source block size is not a multiple of the source burst size and is a multiple of the source data width, the last programmed source burst is not completed and is internally shorten to match the block size. In this case, the additional GPDMA_CxTR3.SAO[12:0] is not applied. */
    using GPDMA_C9SAR_SA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 9 destination address register */
    using GPDMA_C9DAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x520, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This field is the pointer to the address from which the next data is written. During the channel activity, depending on the destination addressing mode (GPDMA_C9TR1.DINC), this field is kept fixed or incremented by the data width (GPDMA_C9TR1.DDW_LOG2[21:0]) after each burst destination data, reflecting the next address from which data is written. During the channel activity, this address is updated after each completed destination burst, consequently to: - the programmed destination burst; either in fixed addressing mode or in contiguous-data incremented mode. If contiguously incremented (GPDMA_C9TR1.DINC = 1), then the additional address offset value is the programmed burst size, as defined by GPDMA_C9TR1.DBL_1[5:0] and GPDMA_C9TR1.DDW_LOG2[1:0] - the additional destination incremented/decremented offset value as programmed by GPDMA_C9BR1.DDEC and GPDMA_CxTR3.DAO[12:0]. - once/if completed destination block transfer, for a channel 9 with 2D addressing capability (x=12to15), the additional block repeat destination incremented/decremented offset value as programmed by GPDMA_C9BR1.BRDDEC and GPDMA_CxBR2.BRDAO[15:0] In linked-list mode, after a LLI data transfer is completed, this register is automatically updated by the GPDMA from the memory, provided the LLI is set with GPDMA_C9LLR.UDA = 1. Note: A destination address must be aligned with the programmed data width of a destination burst (DA[2:0] versus GPDMA_C9TR1.DDW_LOG2[1:0]). Else, a user setting error is reported and no transfer is issued. */
    using GPDMA_C9DAR_DA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 11 transfer register 3 */
    using GPDMA_C11TR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x524, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The source address, pointed by GPDMA_CxSAR, is incremented or decremented (depending on GPDMA_C11BR1.SDEC) by this offset SAO[12:0] for each programmed source burst. This offset is not including and is added to the programmed burst size when the completed burst is addressed in incremented mode (GPDMA_C11TR1.SINC = 1). Note: A source address offset must be aligned with the programmed data width of a source burst (SAO[2:0] versus GPDMA_C11TR1.SDW_LOG2[1:0]). Else a user setting error is reported and none transfer is issued. +: When the source block size is not a multiple of the destination burst size and is a multiple of the source data width, then the last programmed source burst is not completed and is internally shorten to match the block size. In this case, the additional GPDMA_CxTR3.SAO[12:0] is not applied. */
    using GPDMA_C11TR3_SAO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 13, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief The destination address, pointed by GPDMA_CxDAR, is incremented or decremented (depending on GPDMA_C11BR1.DDEC) by this offset DAO[12:0] for each programmed destination burst. This offset is not including and is added to the programmed burst size when the completed burst is addressed in incremented mode (GPDMA_C11TR1.DINC = 1). Note: A destination address offset must be aligned with the programmed data width of a destination burst (DAO[2:0] versus GPDMA_C11TR1.DDW_LOG2[1:0]). Else, a user setting error is reported and no transfer is issued. */
    using GPDMA_C11TR3_DAO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 13, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 11 block register 2 */
    using GPDMA_C11BR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x528, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief For a channel with 2D addressing capability, this field is used to update (by addition or subtraction depending on GPDMA_C11BR1.BRSDEC) the current source address (GPDMA_CxSAR) at the end of a block transfer. Note: A block repeated source address offset must be aligned with the programmed data width of a source burst (BRSAO[2:0] versus GPDMA_C11TR1.SDW_LOG2[1:0]). Else a user setting error is reported and no transfer is issued. +: BRSAO[15:0] must be set to 0 in peripheral flow-control mode (ifGPDMA_C11TR2.PFREQ = 1). */
    using GPDMA_C11BR2_BRSAO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief For a channel with 2D addressing capability, this field is used to update (by addition or subtraction depending on GPDMA_C11BR1.BRDDEC) the current destination address (GPDMA_CxDAR) at the end of a block transfer. Note: A block repeated destination address offset must be aligned with the programmed data width of a destination burst (BRDAO[2:0] versus GPDMA_C11TR1.DDW_LOG2[1:0]). Else a user setting error is reported and no transfer is issued. +: BRDAO[15:0] must be set to 0 in peripheral flow-control mode (ifGPDMA_C11TR2.PFREQ = 1). */
    using GPDMA_C11BR2_BRDAO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 9 linked-list address register */
    using GPDMA_C9LLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief If UT1 = UT2 = UB1 = USA = UDA = ULL = 0 and if LA[15:20] = 0, the current LLI is the last one. The channel transfer is completed without any update of the linked-list GPDMA register file. Else, this field is the pointer to the memory address offset from which the next linked-list data structure is automatically fetched from, once the data transfer is completed, in order to conditionally update the linked-list GPDMA internal register file (GPDMA_C9TR1, GPDMA_C9TR2, GPDMA_C9BR1, GPDMA_CxSAR, GPDMA_CxDAR and GPDMA_C9LLR). Note: The user must program the pointer to be 32-bit aligned. The two low-significant bits are write ignored. */
    using GPDMA_C9LLR_LA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This bit is used to control the update of GPDMA_C9LLR from the memory during the link transfer. 0: no GPDMA_C9LLR update 1: GPDMA_C9LLR update */
    using GPDMA_C9LLR_ULL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_C9LLR update (value: 0)
     *          - B_0x1: GPDMA_C9LLR update (value: 1)
     */
        /** @brief no GPDMA_C9LLR update */
    constexpr std::uint32_t GPDMA_C9LLR_ULL_B_0x0 = 0;
        /** @brief GPDMA_C9LLR update */
    constexpr std::uint32_t GPDMA_C9LLR_ULL_B_0x1 = 1;

    /** @brief This bit is used to control the update of GPDMA_CxDAR from the memory during the link transfer. 0: no GPDMA_CxDAR update 1: GPDMA_CxDAR update */
    using GPDMA_C9LLR_UDA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxDAR update (value: 0)
     *          - B_0x1: GPDMA_CxDAR update (value: 1)
     */
        /** @brief no GPDMA_CxDAR update */
    constexpr std::uint32_t GPDMA_C9LLR_UDA_B_0x0 = 0;
        /** @brief GPDMA_CxDAR update */
    constexpr std::uint32_t GPDMA_C9LLR_UDA_B_0x1 = 1;

    /** @brief This bit controls the update of GPDMA_CxSAR from the memory during the link transfer. 0: no GPDMA_CxSAR update 1: GPDMA_CxSAR update */
    using GPDMA_C9LLR_USA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxSAR update (value: 0)
     *          - B_0x1: GPDMA_CxSAR update (value: 1)
     */
        /** @brief no GPDMA_CxSAR update */
    constexpr std::uint32_t GPDMA_C9LLR_USA_B_0x0 = 0;
        /** @brief GPDMA_CxSAR update */
    constexpr std::uint32_t GPDMA_C9LLR_USA_B_0x1 = 1;

    /** @brief This bit controls the update of GPDMA_C9BR1 from the memory during the link transfer. If UB1 = 0 and if GPDMA_C9LLR is not equal to 0, the linked-list is not completed. GPDMA_C9BR1.BNDT[15:0] is then restored to the programmed value after data transfer is completed and before the link transfer. 0: no GPDMA_C9BR1 update from memory (GPDMA_C9BR1.BNDT[15:0] restored if any link transfer) 1: GPDMA_C9BR1 update */
    using GPDMA_C9LLR_UB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_C9BR1 update from memory (GPDMA_C9BR1.BNDT[15:0] restored if any link transfer) (value: 0)
     *          - B_0x1: GPDMA_C9BR1 update (value: 1)
     */
        /** @brief no GPDMA_C9BR1 update from memory (GPDMA_C9BR1.BNDT[15:0] restored if any link transfer) */
    constexpr std::uint32_t GPDMA_C9LLR_UB1_B_0x0 = 0;
        /** @brief GPDMA_C9BR1 update */
    constexpr std::uint32_t GPDMA_C9LLR_UB1_B_0x1 = 1;

    /** @brief This bit controls the update of GPDMA_C9TR2 from the memory during the link transfer. 0: no GPDMA_C9TR2 update 1: GPDMA_C9TR2 update */
    using GPDMA_C9LLR_UT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_C9TR2 update (value: 0)
     *          - B_0x1: GPDMA_C9TR2 update (value: 1)
     */
        /** @brief no GPDMA_C9TR2 update */
    constexpr std::uint32_t GPDMA_C9LLR_UT2_B_0x0 = 0;
        /** @brief GPDMA_C9TR2 update */
    constexpr std::uint32_t GPDMA_C9LLR_UT2_B_0x1 = 1;

    /** @brief This bit controls the update of GPDMA_C9TR1 from the memory during the link transfer. 0: no GPDMA_C9TR1 update 1: GPDMA_C9TR1 update */
    using GPDMA_C9LLR_UT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_C9TR1 update (value: 0)
     *          - B_0x1: GPDMA_C9TR1 update (value: 1)
     */
        /** @brief no GPDMA_C9TR1 update */
    constexpr std::uint32_t GPDMA_C9LLR_UT1_B_0x0 = 0;
        /** @brief GPDMA_C9TR1 update */
    constexpr std::uint32_t GPDMA_C9LLR_UT1_B_0x1 = 1;

    /** @brief GPDMA channel 11 linked-list address register */
    using GPDMA_C11LLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief If UT1 = UT2 = UB1 = USA = UDA = ULL = 0 and if LA[15:20] = 0, the current LLI is the last one. The channel transfer is completed without any update of the linked-list GPDMA register file. Else, this field is the pointer to the memory address offset from which the next linked-list data structure is automatically fetched from, once the data transfer is completed, in order to conditionally update the linked-list GPDMA internal register file (GPDMA_C11TR1, GPDMA_C11TR2, GPDMA_C11BR1, GPDMA_CxSAR, GPDMA_CxDAR and GPDMA_C11LLR). Note: The user must program the pointer to be 32-bit aligned. The two low-significant bits are write ignored. */
    using GPDMA_C11LLR_LA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This bit is used to control the update of GPDMA_C11LLR from the memory during the link transfer. 0: no GPDMA_C11LLR update 1: GPDMA_C11LLR update */
    using GPDMA_C11LLR_ULL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_C11LLR update (value: 0)
     *          - B_0x1: GPDMA_C11LLR update (value: 1)
     */
        /** @brief no GPDMA_C11LLR update */
    constexpr std::uint32_t GPDMA_C11LLR_ULL_B_0x0 = 0;
        /** @brief GPDMA_C11LLR update */
    constexpr std::uint32_t GPDMA_C11LLR_ULL_B_0x1 = 1;

    /** @brief This bit controls the update of GPDMA_CxBR2 from the memory during the link transfer. 0: no GPDMA_CxBR2 update 1: GPDMA_CxBR2 update */
    using GPDMA_C11LLR_UB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxBR2 update (value: 0)
     *          - B_0x1: GPDMA_CxBR2 update (value: 1)
     */
        /** @brief no GPDMA_CxBR2 update */
    constexpr std::uint32_t GPDMA_C11LLR_UB2_B_0x0 = 0;
        /** @brief GPDMA_CxBR2 update */
    constexpr std::uint32_t GPDMA_C11LLR_UB2_B_0x1 = 1;

    /** @brief This bit controls the update of GPDMA_CxTR3 from the memory during the link transfer. 0: no GPDMA_CxTR3 update 1: GPDMA_CxTR3 update */
    using GPDMA_C11LLR_UT3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxTR3 update (value: 0)
     *          - B_0x1: GPDMA_CxTR3 update (value: 1)
     */
        /** @brief no GPDMA_CxTR3 update */
    constexpr std::uint32_t GPDMA_C11LLR_UT3_B_0x0 = 0;
        /** @brief GPDMA_CxTR3 update */
    constexpr std::uint32_t GPDMA_C11LLR_UT3_B_0x1 = 1;

    /** @brief This bit is used to control the update of GPDMA_CxDAR from the memory during the link transfer. 0: no GPDMA_CxDAR update 1: GPDMA_CxDAR update */
    using GPDMA_C11LLR_UDA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxDAR update (value: 0)
     *          - B_0x1: GPDMA_CxDAR update (value: 1)
     */
        /** @brief no GPDMA_CxDAR update */
    constexpr std::uint32_t GPDMA_C11LLR_UDA_B_0x0 = 0;
        /** @brief GPDMA_CxDAR update */
    constexpr std::uint32_t GPDMA_C11LLR_UDA_B_0x1 = 1;

    /** @brief This bit controls the update of GPDMA_CxSAR from the memory during the link transfer. 0: no GPDMA_CxSAR update 1: GPDMA_CxSAR update */
    using GPDMA_C11LLR_USA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxSAR update (value: 0)
     *          - B_0x1: GPDMA_CxSAR update (value: 1)
     */
        /** @brief no GPDMA_CxSAR update */
    constexpr std::uint32_t GPDMA_C11LLR_USA_B_0x0 = 0;
        /** @brief GPDMA_CxSAR update */
    constexpr std::uint32_t GPDMA_C11LLR_USA_B_0x1 = 1;

    /** @brief This bit controls the update of GPDMA_C11BR1 from the memory during the link transfer. If UB1 = 0 and if GPDMA_C11LLR is not equal to 0, the linked-list is not completed. GPDMA_C11BR1.BNDT[15:0] is then restored to the programmed value after data transfer is completed and before the link transfer. 0: no GPDMA_C11BR1 update from memory (GPDMA_C11BR1.BNDT[15:0] restored if any link transfer) 1: GPDMA_C11BR1 update */
    using GPDMA_C11LLR_UB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_C11BR1 update from memory (GPDMA_C11BR1.BNDT[15:0] restored if any link transfer) (value: 0)
     *          - B_0x1: GPDMA_C11BR1 update (value: 1)
     */
        /** @brief no GPDMA_C11BR1 update from memory (GPDMA_C11BR1.BNDT[15:0] restored if any link transfer) */
    constexpr std::uint32_t GPDMA_C11LLR_UB1_B_0x0 = 0;
        /** @brief GPDMA_C11BR1 update */
    constexpr std::uint32_t GPDMA_C11LLR_UB1_B_0x1 = 1;

    /** @brief This bit controls the update of GPDMA_C11TR2 from the memory during the link transfer. 0: no GPDMA_C11TR2 update 1: GPDMA_C11TR2 update */
    using GPDMA_C11LLR_UT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_C11TR2 update (value: 0)
     *          - B_0x1: GPDMA_C11TR2 update (value: 1)
     */
        /** @brief no GPDMA_C11TR2 update */
    constexpr std::uint32_t GPDMA_C11LLR_UT2_B_0x0 = 0;
        /** @brief GPDMA_C11TR2 update */
    constexpr std::uint32_t GPDMA_C11LLR_UT2_B_0x1 = 1;

    /** @brief This bit controls the update of GPDMA_C11TR1 from the memory during the link transfer. 0: no GPDMA_C11TR1 update 1: GPDMA_C11TR1 update */
    using GPDMA_C11LLR_UT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_C11TR1 update (value: 0)
     *          - B_0x1: GPDMA_C11TR1 update (value: 1)
     */
        /** @brief no GPDMA_C11TR1 update */
    constexpr std::uint32_t GPDMA_C11LLR_UT1_B_0x0 = 0;
        /** @brief GPDMA_C11TR1 update */
    constexpr std::uint32_t GPDMA_C11LLR_UT1_B_0x1 = 1;

    /** @brief GPDMA channel 10 linked-list base address register */
    using GPDMA_C10LBAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x550, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief None */
    using GPDMA_C10LBAR_LBA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 10 flag clear register */
    using GPDMA_C10FCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x55C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief None 0: no effect 1: corresponding TCF flag cleared */
    using GPDMA_C10FCR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding TCF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C10FCR_TCF_B_0x0 = 0;
        /** @brief corresponding TCF flag cleared */
    constexpr std::uint32_t GPDMA_C10FCR_TCF_B_0x1 = 1;

    /** @brief None 0: no effect 1: corresponding HTF flag cleared */
    using GPDMA_C10FCR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding HTF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C10FCR_HTF_B_0x0 = 0;
        /** @brief corresponding HTF flag cleared */
    constexpr std::uint32_t GPDMA_C10FCR_HTF_B_0x1 = 1;

    /** @brief None 0: no effect 1: corresponding DTEF flag cleared */
    using GPDMA_C10FCR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding DTEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C10FCR_DTEF_B_0x0 = 0;
        /** @brief corresponding DTEF flag cleared */
    constexpr std::uint32_t GPDMA_C10FCR_DTEF_B_0x1 = 1;

    /** @brief None 0: no effect 1: corresponding ULEF flag cleared */
    using GPDMA_C10FCR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding ULEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C10FCR_ULEF_B_0x0 = 0;
        /** @brief corresponding ULEF flag cleared */
    constexpr std::uint32_t GPDMA_C10FCR_ULEF_B_0x1 = 1;

    /** @brief None 0: no effect 1: corresponding USEF flag cleared */
    using GPDMA_C10FCR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding USEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C10FCR_USEF_B_0x0 = 0;
        /** @brief corresponding USEF flag cleared */
    constexpr std::uint32_t GPDMA_C10FCR_USEF_B_0x1 = 1;

    /** @brief None 0: no effect 1: corresponding SUSPF flag cleared */
    using GPDMA_C10FCR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding SUSPF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C10FCR_SUSPF_B_0x0 = 0;
        /** @brief corresponding SUSPF flag cleared */
    constexpr std::uint32_t GPDMA_C10FCR_SUSPF_B_0x1 = 1;

    /** @brief None 0: no effect 1: corresponding TOF flag cleared */
    using GPDMA_C10FCR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding TOF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C10FCR_TOF_B_0x0 = 0;
        /** @brief corresponding TOF flag cleared */
    constexpr std::uint32_t GPDMA_C10FCR_TOF_B_0x1 = 1;

    /** @brief GPDMA channel 10 status register */
    using GPDMA_C10SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x560, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This idle flag is deasserted by hardware when the channel is enabled (GPDMA_C10CR.EN = 1) with a valid channel configuration (no USEF to be immediately reported). This idle flag is asserted after hard reset or by hardware when the channel is back in idle state (in suspended or disabled state). 0: channel not in idle state 1: channel in idle state */
    using GPDMA_C10SR_IDLEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: channel not in idle state (value: 0)
     *          - B_0x1: channel in idle state (value: 1)
     */
        /** @brief channel not in idle state */
    constexpr std::uint32_t GPDMA_C10SR_IDLEF_B_0x0 = 0;
        /** @brief channel in idle state */
    constexpr std::uint32_t GPDMA_C10SR_IDLEF_B_0x1 = 1;

    /** @brief A transfer complete event is either a block transfer complete, a 2D/repeated block transfer complete, or a LLI transfer complete including the upload of the next LLI if any, or the full linked-list completion, depending on the transfer complete event mode (GPDMA_C10TR2.TCEM[1:0]). 0: no transfer complete event 1: a transfer complete event occurred */
    using GPDMA_C10SR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no transfer complete event (value: 0)
     *          - B_0x1: a transfer complete event occurred (value: 1)
     */
        /** @brief no transfer complete event */
    constexpr std::uint32_t GPDMA_C10SR_TCF_B_0x0 = 0;
        /** @brief a transfer complete event occurred */
    constexpr std::uint32_t GPDMA_C10SR_TCF_B_0x1 = 1;

    /** @brief A half transfer event is either a half block transfer or a half 2D/repeated block transfer, depending on the transfer complete event mode (GPDMA_C10TR2.TCEM[1:0]). A half block transfer occurs when half of the bytes of the source block size (rounded up integer of GPDMA_C10BR1.BNDT[15:0]/2) has been transferred to the destination. A half 2D/repeated block transfer occurs when half of the repeated blocks (rounded up integer of (GPDMA_C10BR1.BRC[10:0]+1)/2)) has been transferred to the destination. 0: no half transfer event 1: a half transfer event occurred */
    using GPDMA_C10SR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no half transfer event (value: 0)
     *          - B_0x1: a half transfer event occurred (value: 1)
     */
        /** @brief no half transfer event */
    constexpr std::uint32_t GPDMA_C10SR_HTF_B_0x0 = 0;
        /** @brief a half transfer event occurred */
    constexpr std::uint32_t GPDMA_C10SR_HTF_B_0x1 = 1;

    /** @brief None 0: no data transfer error event 1: a master bus error event occurred on a data transfer */
    using GPDMA_C10SR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no data transfer error event (value: 0)
     *          - B_0x1: a master bus error event occurred on a data transfer (value: 1)
     */
        /** @brief no data transfer error event */
    constexpr std::uint32_t GPDMA_C10SR_DTEF_B_0x0 = 0;
        /** @brief a master bus error event occurred on a data transfer */
    constexpr std::uint32_t GPDMA_C10SR_DTEF_B_0x1 = 1;

    /** @brief None 0: no update link transfer error event 1: a master bus error event occurred while updating a linked-list register from memory */
    using GPDMA_C10SR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no update link transfer error event (value: 0)
     *          - B_0x1: a master bus error event occurred while updating a linked-list register from memory (value: 1)
     */
        /** @brief no update link transfer error event */
    constexpr std::uint32_t GPDMA_C10SR_ULEF_B_0x0 = 0;
        /** @brief a master bus error event occurred while updating a linked-list register from memory */
    constexpr std::uint32_t GPDMA_C10SR_ULEF_B_0x1 = 1;

    /** @brief None 0: no user setting error event 1: a user setting error event occurred */
    using GPDMA_C10SR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no user setting error event (value: 0)
     *          - B_0x1: a user setting error event occurred (value: 1)
     */
        /** @brief no user setting error event */
    constexpr std::uint32_t GPDMA_C10SR_USEF_B_0x0 = 0;
        /** @brief a user setting error event occurred */
    constexpr std::uint32_t GPDMA_C10SR_USEF_B_0x1 = 1;

    /** @brief None 0: no completed suspension event 1: a completed suspension event occurred */
    using GPDMA_C10SR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no completed suspension event (value: 0)
     *          - B_0x1: a completed suspension event occurred (value: 1)
     */
        /** @brief no completed suspension event */
    constexpr std::uint32_t GPDMA_C10SR_SUSPF_B_0x0 = 0;
        /** @brief a completed suspension event occurred */
    constexpr std::uint32_t GPDMA_C10SR_SUSPF_B_0x1 = 1;

    /** @brief None 0: no trigger overrun event 1: a trigger overrun event occurred */
    using GPDMA_C10SR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no trigger overrun event (value: 0)
     *          - B_0x1: a trigger overrun event occurred (value: 1)
     */
        /** @brief no trigger overrun event */
    constexpr std::uint32_t GPDMA_C10SR_TOF_B_0x0 = 0;
        /** @brief a trigger overrun event occurred */
    constexpr std::uint32_t GPDMA_C10SR_TOF_B_0x1 = 1;

    /** @brief Number of available write beats in the FIFO, in units of the programmed destination data width (see GPDMA_C10TR1.DDW_LOG2[1:0], in units of bytes, half-words, or words). Note: After having suspended an active transfer, the user may need to read FIFOL[7:0], additionally to GPDMA_C10BR1.BDNT[15:0] and GPDMA_C10BR1.BRC[10:0], to know how many data have been transferred to the destination. Before reading, the user may wait for the transfer to be suspended (GPDMA_C10SR.SUSPF = 1). */
    using GPDMA_C10SR_FIFOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 10 control register */
    using GPDMA_C10CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x564, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Writing 1 into the field RESET (bit 1) causes the hardware to de-assert this bit, whatever is written into this bit 0. Else: this bit is deasserted by hardware when there is a transfer error (master bus error or user setting error) or when there is a channel transfer complete (channel ready to be configured, for example if LSM = 1 at the end of a single execution of the LLI). Else, this bit can be asserted by software. Writing 0 into this EN bit is ignored. 0: write: ignored, read: channel disabled 1: write: enable channel, read: channel enabled */
    using GPDMA_C10CR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write: ignored, read: channel disabled (value: 0)
     *          - B_0x1: write: enable channel, read: channel enabled (value: 1)
     */
        /** @brief write: ignored, read: channel disabled */
    constexpr std::uint32_t GPDMA_C10CR_EN_B_0x0 = 0;
        /** @brief write: enable channel, read: channel enabled */
    constexpr std::uint32_t GPDMA_C10CR_EN_B_0x1 = 1;

    /** @brief This bit is write only. Writing 0 has no impact. Writing 1 implies the reset of the following: the FIFO, the channel internal state, SUSP and EN bits (whatever is written receptively in bit 2 and bit 0). The reset is effective when the channel is in steady state, meaning one of the following: - active channel in suspended state (GPDMA_C10SR.SUSPF = 1 and GPDMA_C10SR.IDLEF=GPDMA_C10CR.EN = 1) - channel in disabled state (GPDMA_C10SR.IDLEF = 1 and GPDMA_C10CR.EN = 0). After writing a RESET, to continue using this channel, the user must explicitly reconfigure the channel including the hardware-modified configuration registers (GPDMA_C10BR1, GPDMA_CxSAR and GPDMA_CxDAR) before enabling again the channel (see the programming sequence in less than xe6 [GPDMA_abort_restart/ID00-1465]/>). 0: no channel reset 1: channel reset */
    using GPDMA_C10CR_RESET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no channel reset (value: 0)
     *          - B_0x1: channel reset (value: 1)
     */
        /** @brief no channel reset */
    constexpr std::uint32_t GPDMA_C10CR_RESET_B_0x0 = 0;
        /** @brief channel reset */
    constexpr std::uint32_t GPDMA_C10CR_RESET_B_0x1 = 1;

    /** @brief Writing 1 into the field RESET (bit 1) causes the hardware to de-assert this bit, whatever is written into this bit 2. Else: Software must write 1 in order to suspend an active channel (channel with an ongoing GPDMA transfer over its master ports). The software must write 0 in order to resume a suspended channel, following the programming sequence detailed in less than xe5 [GPDMA_channel_suspend_and_resume/ID00-1456]/>. 0: write: resume channel, read: channel not suspended 1: write: suspend channel, read: channel suspended. */
    using GPDMA_C10CR_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write: resume channel, read: channel not suspended (value: 0)
     *          - B_0x1: write: suspend channel, read: channel suspended. (value: 1)
     */
        /** @brief write: resume channel, read: channel not suspended */
    constexpr std::uint32_t GPDMA_C10CR_SUSP_B_0x0 = 0;
        /** @brief write: suspend channel, read: channel suspended. */
    constexpr std::uint32_t GPDMA_C10CR_SUSP_B_0x1 = 1;

    /** @brief None 0: interrupt disabled 1: interrupt enabled */
    using GPDMA_C10CR_TCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C10CR_TCIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C10CR_TCIE_B_0x1 = 1;

    /** @brief None 0: interrupt disabled 1: interrupt enabled */
    using GPDMA_C10CR_HTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C10CR_HTIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C10CR_HTIE_B_0x1 = 1;

    /** @brief None 0: interrupt disabled 1: interrupt enabled */
    using GPDMA_C10CR_DTEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C10CR_DTEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C10CR_DTEIE_B_0x1 = 1;

    /** @brief None 0: interrupt disabled 1: interrupt enabled */
    using GPDMA_C10CR_ULEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C10CR_ULEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C10CR_ULEIE_B_0x1 = 1;

    /** @brief None 0: interrupt disabled 1: interrupt enabled */
    using GPDMA_C10CR_USEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C10CR_USEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C10CR_USEIE_B_0x1 = 1;

    /** @brief None 0: interrupt disabled 1: interrupt enabled */
    using GPDMA_C10CR_SUSPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C10CR_SUSPIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C10CR_SUSPIE_B_0x1 = 1;

    /** @brief None 0: interrupt disabled 1: interrupt enabled */
    using GPDMA_C10CR_TOIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C10CR_TOIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C10CR_TOIE_B_0x1 = 1;

    /** @brief First the (possible 1D/repeated) block transfer is executed as defined by the current internal register file until GPDMA_C10BR1.BNDT[15:0] = 0 and GPDMA_C10BR1.BRC[10:0] = 0. Secondly the next linked-list data structure is conditionally uploaded from memory as defined by GPDMA_C10LLR. Then channel execution is completed. 0: channel executed for the full linked-list and completed at the end of the last LLI (GPDMA_C10LLR = 0). The 16 low-significant bits of the link address are null (LA[15:0] = 0) and all the update bits are null (UT1 = UB1 = UT2 = USA = UDA = ULL = 0 and UT3 = UB2 = 0). Then GPDMA_C10BR1.BNDT[15:0] = 0 and GPDMA_C10BR1.BRC[10:0] = 0. 1: channel executed once for the current LLI Note: This bit must be written when EN = 0. This bit is read-only when EN = 1. */
    using GPDMA_C10CR_LSM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: channel executed for the full linked-list and completed at the end of the last LLI (GPDMA_C10LLR = 0). The 16 low-significant bits of the link address are null (LA[15:0] = 0) and all the update bits are null (UT1 = UB1 = UT2 = USA = UDA = ULL = 0 and UT3 = UB2 = 0). Then GPDMA_C10BR1.BNDT[15:0] = 0 and GPDMA_C10BR1.BRC[10:0] = 0. (value: 0)
     *          - B_0x1: channel executed once for the current LLI (value: 1)
     */
        /** @brief channel executed for the full linked-list and completed at the end of the last LLI (GPDMA_C10LLR = 0). The 16 low-significant bits of the link address are null (LA[15:0] = 0) and all the update bits are null (UT1 = UB1 = UT2 = USA = UDA = ULL = 0 and UT3 = UB2 = 0). Then GPDMA_C10BR1.BNDT[15:0] = 0 and GPDMA_C10BR1.BRC[10:0] = 0. */
    constexpr std::uint32_t GPDMA_C10CR_LSM_B_0x0 = 0;
        /** @brief channel executed once for the current LLI */
    constexpr std::uint32_t GPDMA_C10CR_LSM_B_0x1 = 1;

    /** @brief This bit is used to allocate the master port for the update of the GPDMA linked-list registers from the memory. 0: port 0 (AHB) allocated 1: port 1 (AHB) allocated Note: This bit must be written when EN = 0. This bit is read-only when EN = 1. */
    using GPDMA_C10CR_LAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C10CR_LAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C10CR_LAP_B_0x1 = 1;

    /** @brief None 00: low priority, low weight 01: low priority, mid weight 10: low priority, high weight 11: high priority Note: This bit must be written when EN = 0. This bit is read-only when EN = 1. */
    using GPDMA_C10CR_PRIO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: low priority, low weight (value: 0)
     *          - B_0x1: low priority, mid weight (value: 1)
     *          - B_0x2: low priority, high weight (value: 2)
     *          - B_0x3: high priority (value: 3)
     */
        /** @brief low priority, low weight */
    constexpr std::uint32_t GPDMA_C10CR_PRIO_B_0x0 = 0;
        /** @brief low priority, mid weight */
    constexpr std::uint32_t GPDMA_C10CR_PRIO_B_0x1 = 1;
        /** @brief low priority, high weight */
    constexpr std::uint32_t GPDMA_C10CR_PRIO_B_0x2 = 2;
        /** @brief high priority */
    constexpr std::uint32_t GPDMA_C10CR_PRIO_B_0x3 = 3;

    /** @brief GPDMA channel 10 transfer register 1 */
    using GPDMA_C10TR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x590, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief None 00: byte 01: half-word (2 bytes) 10: word (4 bytes) 11: user setting error reported and no transfer issued Note: Setting a 8-byte data width causes a user setting error to be reported and no transfer is issued. +: A source block size must be a multiple of the source data width (GPDMA_C10BR1.BNDT[2:0] versus SDW_LOG2[1:0]). Otherwise, a user setting error is reported and no transfer is issued. +: A source burst transfer must have an aligned address with its data width (start address GPDMA_CxSAR[2:0] versus SDW_LOG2[1:0]). Otherwise, a user setting error is reported and none transfer is issued. */
    using GPDMA_C10TR1_SDW_LOG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: byte (value: 0)
     *          - B_0x1: half-word (2 bytes) (value: 1)
     *          - B_0x2: word (4 bytes) (value: 2)
     *          - B_0x3: user setting error reported and no transfer issued (value: 3)
     */
        /** @brief byte */
    constexpr std::uint32_t GPDMA_C10TR1_SDW_LOG2_B_0x0 = 0;
        /** @brief half-word (2 bytes) */
    constexpr std::uint32_t GPDMA_C10TR1_SDW_LOG2_B_0x1 = 1;
        /** @brief word (4 bytes) */
    constexpr std::uint32_t GPDMA_C10TR1_SDW_LOG2_B_0x2 = 2;
        /** @brief user setting error reported and no transfer issued */
    constexpr std::uint32_t GPDMA_C10TR1_SDW_LOG2_B_0x3 = 3;

    /** @brief The source address, pointed by GPDMA_CxSAR, is kept constant after a burst beat/single transfer or is incremented by the offset value corresponding to a contiguous data after a burst beat/single transfer. 0: fixed burst 1: contiguously incremented burst */
    using GPDMA_C10TR1_SINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fixed burst (value: 0)
     *          - B_0x1: contiguously incremented burst (value: 1)
     */
        /** @brief fixed burst */
    constexpr std::uint32_t GPDMA_C10TR1_SINC_B_0x0 = 0;
        /** @brief contiguously incremented burst */
    constexpr std::uint32_t GPDMA_C10TR1_SINC_B_0x1 = 1;

    /** @brief The burst length unit is one data named beat within a burst. If SBL_1[5:0] = 0, the burst can be named as single. Each data/beat has a width defined by the destination data width SDW_LOG2[1:0]. Note: If a burst transfer crossed a 1-Kbyte address boundary on a AHB transfer, the GPDMA modifies and shortens the programmed burst into singles or bursts of lower length, to be compliant with the AHB protocol. +: If a burst transfer is of length greater than the FIFO size of the channel 10, the GPDMA modifies and shortens the programmed burst into singles or bursts of lower length, to be compliant with the FIFO size. Transfer performance is lower, with GPDMA re-arbitration between effective and lower singles/bursts, but the data integrity is guaranteed. */
    using GPDMA_C10TR1_SBL_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief If DDW_LOG2[1:0] = SDW_LOG2[1:0]: if the data width of a burst destination transfer is equal to the data width of a burst source transfer, these bits are ignored. */
    using GPDMA_C10TR1_PAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0_COND1: COND1 is [PAM_1] source data is transferred as right aligned, padded with 0s up to the destination data width (value: 0)
     *          - B_0x1_COND1: COND1 is [PAM_1] source data is transferred as right aligned, sign extended up to the destination data width (value: 1)
     *          - B_0x2_COND1: COND1 is [PAM_1] successive source data are FIFO queued and packed at the destination data width, in a left (LSB) to right (MSB) order (named little endian), before a destination transfer (value: 2)
     *          - B_0x3_COND1: COND1 is [PAM_1] successive source data are FIFO queued and packed at the destination data width, in a left (LSB) to right (MSB) order (named little endian), before a destination transfer (value: 3)
     */
        /** @brief COND1 is [PAM_1] source data is transferred as right aligned, padded with 0s up to the destination data width */
    constexpr std::uint32_t GPDMA_C10TR1_PAM_B_0x0_COND1 = 0;
        /** @brief COND1 is [PAM_1] source data is transferred as right aligned, sign extended up to the destination data width */
    constexpr std::uint32_t GPDMA_C10TR1_PAM_B_0x1_COND1 = 1;
        /** @brief COND1 is [PAM_1] successive source data are FIFO queued and packed at the destination data width, in a left (LSB) to right (MSB) order (named little endian), before a destination transfer */
    constexpr std::uint32_t GPDMA_C10TR1_PAM_B_0x2_COND1 = 2;
        /** @brief COND1 is [PAM_1] successive source data are FIFO queued and packed at the destination data width, in a left (LSB) to right (MSB) order (named little endian), before a destination transfer */
    constexpr std::uint32_t GPDMA_C10TR1_PAM_B_0x3_COND1 = 3;

    /** @brief If the source data width is shorter than a word, this bit is ignored. If the source data width is a word: 0: no byte-based exchange within the unaligned half-word of each source word 1: the two consecutive bytes within the unaligned half-word of each source word are exchanged. */
    using GPDMA_C10TR1_SBx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no byte-based exchange within the unaligned half-word of each source word (value: 0)
     *          - B_0x1: the two consecutive bytes within the unaligned half-word of each source word are exchanged. (value: 1)
     */
        /** @brief no byte-based exchange within the unaligned half-word of each source word */
    constexpr std::uint32_t GPDMA_C10TR1_SBx_B_0x0 = 0;
        /** @brief the two consecutive bytes within the unaligned half-word of each source word are exchanged. */
    constexpr std::uint32_t GPDMA_C10TR1_SBx_B_0x1 = 1;

    /** @brief This bit is used to allocate the master port for the source transfer 0: port 0 (AHB) allocated 1: port 1 (AHB) allocated Note: This bit must be written when EN = 0. This bit is read-only when EN = 1. */
    using GPDMA_C10TR1_SAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C10TR1_SAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C10TR1_SAP_B_0x1 = 1;

    /** @brief If GPDMA_SECCFGR.SEC10 = 1 and the access is secure: This is a secure register bit. This bit can only be read by a secure software. This bit must be written by a secure software when GPDMA_SECCFGR.SEC10 = 1. A secure write is ignored when GPDMA_SECCFGR.SEC10 = 0. When GPDMA_SECCFGR.SEC10 is deasserted, this SSEC bit is also deasserted by hardware (on a secure reconfiguration of the channel as non-secure), and the GPDMA transfer from the source is non-secure. 0: GPDMA transfer non-secure 1: GPDMA transfer secure */
    using GPDMA_C10TR1_SSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPDMA transfer non-secure (value: 0)
     *          - B_0x1: GPDMA transfer secure (value: 1)
     */
        /** @brief GPDMA transfer non-secure */
    constexpr std::uint32_t GPDMA_C10TR1_SSEC_B_0x0 = 0;
        /** @brief GPDMA transfer secure */
    constexpr std::uint32_t GPDMA_C10TR1_SSEC_B_0x1 = 1;

    /** @brief None 00: byte 01: half-word (2 bytes) 10: word (4 bytes) 11: user setting error reported and no transfer issued Note: Setting a 8-byte data width causes a user setting error to be reported and none transfer is issued. +: A destination burst transfer must have an aligned address with its data width (start address GPDMA_CxDAR[2:0] and address offset GPDMA_CxTR3.DAO[2:0], versus DDW_LOG2[1:0]). Otherwise a user setting error is reported and no transfer is issued. */
    using GPDMA_C10TR1_DDW_LOG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: byte (value: 0)
     *          - B_0x1: half-word (2 bytes) (value: 1)
     *          - B_0x2: word (4 bytes) (value: 2)
     *          - B_0x3: user setting error reported and no transfer issued (value: 3)
     */
        /** @brief byte */
    constexpr std::uint32_t GPDMA_C10TR1_DDW_LOG2_B_0x0 = 0;
        /** @brief half-word (2 bytes) */
    constexpr std::uint32_t GPDMA_C10TR1_DDW_LOG2_B_0x1 = 1;
        /** @brief word (4 bytes) */
    constexpr std::uint32_t GPDMA_C10TR1_DDW_LOG2_B_0x2 = 2;
        /** @brief user setting error reported and no transfer issued */
    constexpr std::uint32_t GPDMA_C10TR1_DDW_LOG2_B_0x3 = 3;

    /** @brief The destination address, pointed by GPDMA_CxDAR, is kept constant after a burst beat/single transfer, or is incremented by the offset value corresponding to a contiguous data after a burst beat/single transfer. 0: fixed burst 1: contiguously incremented burst */
    using GPDMA_C10TR1_DINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fixed burst (value: 0)
     *          - B_0x1: contiguously incremented burst (value: 1)
     */
        /** @brief fixed burst */
    constexpr std::uint32_t GPDMA_C10TR1_DINC_B_0x0 = 0;
        /** @brief contiguously incremented burst */
    constexpr std::uint32_t GPDMA_C10TR1_DINC_B_0x1 = 1;

    /** @brief The burst length unit is one data named beat within a burst. If DBL_1[5:0] = 0, the burst can be named as single. Each data/beat has a width defined by the destination data width DDW_LOG2[1:0]. Note: If a burst transfer crossed a 1-Kbyte address boundary on a AHB transfer, the GPDMA modifies and shortens the programmed burst into singles or bursts of lower length, to be compliant with the AHB protocol. +: If a burst transfer is of length greater than the FIFO size of the channel 10, the GPDMA modifies and shortens the programmed burst into singles or bursts of lower length, to be compliant with the FIFO size. Transfer performance is lower, with GPDMA re-arbitration between effective and lower singles/bursts, but the data integrity is guaranteed. */
    using GPDMA_C10TR1_DBL_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief If the destination data size is a byte, this bit is ignored. If the destination data size is not a byte: 0: no byte-based exchange within half-word 1: the two consecutive (post PAM) bytes are exchanged in each destination half-word. */
    using GPDMA_C10TR1_DBx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no byte-based exchange within half-word (value: 0)
     *          - B_0x1: the two consecutive (post PAM) bytes are exchanged in each destination half-word. (value: 1)
     */
        /** @brief no byte-based exchange within half-word */
    constexpr std::uint32_t GPDMA_C10TR1_DBx_B_0x0 = 0;
        /** @brief the two consecutive (post PAM) bytes are exchanged in each destination half-word. */
    constexpr std::uint32_t GPDMA_C10TR1_DBx_B_0x1 = 1;

    /** @brief If the destination data size is shorter than a word, this bit is ignored. If the destination data size is a word: 0: no halfword-based exchanged within word 1: the two consecutive (post PAM) half-words are exchanged in each destination word. */
    using GPDMA_C10TR1_DHx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no halfword-based exchanged within word (value: 0)
     *          - B_0x1: the two consecutive (post PAM) half-words are exchanged in each destination word. (value: 1)
     */
        /** @brief no halfword-based exchanged within word */
    constexpr std::uint32_t GPDMA_C10TR1_DHx_B_0x0 = 0;
        /** @brief the two consecutive (post PAM) half-words are exchanged in each destination word. */
    constexpr std::uint32_t GPDMA_C10TR1_DHx_B_0x1 = 1;

    /** @brief This bit is used to allocate the master port for the destination transfer 0: port 0 (AHB) allocated 1: port 1 (AHB) allocated Note: This bit must be written when EN = 0. This bit is read-only when EN = 1. */
    using GPDMA_C10TR1_DAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C10TR1_DAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C10TR1_DAP_B_0x1 = 1;

    /** @brief If GPDMA_SECCFGR.SEC10 = 1 and the access is secure: This is a secure register bit. This bit can only be read by a secure software. This bit must be written by a secure software when GPDMA_SECCFGR.SEC10 = 1. A secure write is ignored when GPDMA_SECCFGR.SEC10 = 0. When GPDMA_SECCFGR.SEC10 is deasserted, this DSEC bit is also deasserted by hardware (on a secure reconfiguration of the channel as non-secure), and the GPDMA transfer to the destination is non-secure. 0: GPDMA transfer non-secure 1: GPDMA transfer secure */
    using GPDMA_C10TR1_DSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPDMA transfer non-secure (value: 0)
     *          - B_0x1: GPDMA transfer secure (value: 1)
     */
        /** @brief GPDMA transfer non-secure */
    constexpr std::uint32_t GPDMA_C10TR1_DSEC_B_0x0 = 0;
        /** @brief GPDMA transfer secure */
    constexpr std::uint32_t GPDMA_C10TR1_DSEC_B_0x1 = 1;

    /** @brief GPDMA channel 10 transfer register 2 */
    using GPDMA_C10TR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x594, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief These bits are ignored if channel 10 is activated (GPDMA_C10CR.EN asserted) with SWREQ=1 (software request for a memory-to-memory transfer). Else, the selected hardware request is internally taken into account as per less than xe4 [GPDMA_requests]/>. The user must not assign a same input hardware request (same REQSEL[6:0] value) to different active GPDMA channels (GPDMA_C10CR.EN = 1 and GPDMA_C10TR2.SWREQ = 0 for these channels). GPDMA is not intended to hardware support the case of simultaneous enabled channels incorrectly configured with a same hardware peripheral request signal, and there is no user setting error reporting. */
    using GPDMA_C10TR2_REQSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This bit is internally taken into account when GPDMA_C10CR.EN is asserted. 0: no software request. The selected hardware request REQSEL[6:0] is taken into account. 1: software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[6:0] is ignored. */
    using GPDMA_C10TR2_SWREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no software request. The selected hardware request REQSEL[6:0] is taken into account. (value: 0)
     *          - B_0x1: software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[6:0] is ignored. (value: 1)
     */
        /** @brief no software request. The selected hardware request REQSEL[6:0] is taken into account. */
    constexpr std::uint32_t GPDMA_C10TR2_SWREQ_B_0x0 = 0;
        /** @brief software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[6:0] is ignored. */
    constexpr std::uint32_t GPDMA_C10TR2_SWREQ_B_0x1 = 1;

    /** @brief This bit is ignored if channel 10 is activated (GPDMA_C10CR.EN asserted) with SWREQ = 1 (software request for a memory-to-memory transfer). Else: 0: selected hardware request driven by a source peripheral (request signal taken into account by the GPDMA transfer scheduler over the source/read port) 1: selected hardware request driven by a destination peripheral (request signal taken into account by the GPDMA transfer scheduler over the destination/write port) Note: If the channel 10 is activated (GPDMA_C10CR.EN is asserted) with SWREQ = 0 and PFREQ = 1 (peripheral hardware request with peripheral flow-control mode), any software assertion to this DREQ bit is ignored: in peripheral flow-control mode, only a peripheral-to-memory transfer is supported. */
    using GPDMA_C10TR2_DREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: selected hardware request driven by a source peripheral (request signal taken into account by the GPDMA transfer scheduler over the source/read port) (value: 0)
     *          - B_0x1: selected hardware request driven by a destination peripheral (request signal taken into account by the GPDMA transfer scheduler over the destination/write port) (value: 1)
     */
        /** @brief selected hardware request driven by a source peripheral (request signal taken into account by the GPDMA transfer scheduler over the source/read port) */
    constexpr std::uint32_t GPDMA_C10TR2_DREQ_B_0x0 = 0;
        /** @brief selected hardware request driven by a destination peripheral (request signal taken into account by the GPDMA transfer scheduler over the destination/write port) */
    constexpr std::uint32_t GPDMA_C10TR2_DREQ_B_0x1 = 1;

    /** @brief If the channel 10 is activated (GPDMA_C10CR.EN asserted) with SWREQ = 1 (software request for a memory-to-memory transfer), this bit is ignored. Else: 0: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a burst level. 1: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see less than xe4 [GPDMA_requests]/>). */
    using GPDMA_C10TR2_BREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a burst level. (value: 0)
     *          - B_0x1: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see less than xe4 [GPDMA_requests]/>). (value: 1)
     */
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a burst level. */
    constexpr std::uint32_t GPDMA_C10TR2_BREQ_B_0x0 = 0;
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see less than xe4 [GPDMA_requests]/>). */
    constexpr std::uint32_t GPDMA_C10TR2_BREQ_B_0x1 = 1;

    /** @brief Caution: If a given channel 10 is not implemented with this feature, this bit is reserved and PFREQ is not present (see less than xe1 [GPDMA_channels]/> for the list of the implemented channels with this feature). */
    using GPDMA_C10TR2_PFREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol in GPDMA control mode. The GPDMA is programmed with GPDMA_C10TR1.BNDT[15:0] and this is internally used by the hardware for the block transfer completion. (value: 0)
     *          - B_0x1: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol in peripheral control mode. The GPDMA block transfer can be early completed by the peripheral itself (see less than xe2 [GPDMA_channels_peripheral]/> for more details). (value: 1)
     */
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol in GPDMA control mode. The GPDMA is programmed with GPDMA_C10TR1.BNDT[15:0] and this is internally used by the hardware for the block transfer completion. */
    constexpr std::uint32_t GPDMA_C10TR2_PFREQ_B_0x0 = 0;
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol in peripheral control mode. The GPDMA block transfer can be early completed by the peripheral itself (see less than xe2 [GPDMA_channels_peripheral]/> for more details). */
    constexpr std::uint32_t GPDMA_C10TR2_PFREQ_B_0x1 = 1;

    /** @brief These bits define the transfer granularity for its conditioning by the trigger. If the channel 10 is enabled (GPDMA_C10CR.EN asserted) with TRIGPOL[1:0] = 00 or 11, these TRIGM[1:0] bits are ignored. Else, a GPDMA transfer is conditioned by at least one trigger hit: 00: at block level: the first burst read of each block transfer is conditioned by one hit trigger (channel 10 = 12 to 15, for each block if a 2D/repeated block is configured with GPDMA_C10BR1.BRC[10:0] is not equal to 0). 10: at link level: a LLI link transfer is conditioned by one hit trigger. The LLI data transfer (if any) is not conditioned. 11: at programmed burst level: If SWREQ = 1, each programmed burst read is conditioned by one hit trigger. If SWREQ = 0, each programmed burst that is requested by the selected peripheral, is conditioned by one hit trigger. - If the peripheral is programmed as a source (DREQ = 0) of the LLI data transfer, each programmed burst read is conditioned. - If the peripheral is programmed as a destination (DREQ = 1) of the LLI data transfer, each programmed burst write is conditioned. The first memory burst read of a (possibly 2D/repeated) block, also named as the first ready FIFO-based source burst, is gated by the occurrence of both the hardware request and the first trigger hit.01: channel 10 = 0 to , same as 00; channel 10 , at 2D/repeated block level. The first burst read of a 2D/repeated block transfer is conditioned by one hit trigger. The GPDMA monitoring of a trigger for channel 10 is started when the channel is enabled/loaded with a new active trigger configuration: rising or falling edge on a selected trigger (TRIGPOL[1:0] = 01 or respectively TRIGPOL[1:0]=10). The monitoring of this trigger is kept active during the triggered and uncompleted (data or link) transfer; and if a new trigger is detected then, this hit is internally memorized to grant the next transfer, as long as the defined rising or falling edge is not modified, and the TRIGSEL[5:0] is not modified, and the channel is enabled. Transferring a next LLIn+1 that updates the GPDMA_C10TR2 with a new value for any of TRIGSEL[5:0] or TRIGPOL[1:0], resets the monitoring, trashing the memorized hit of the formerly defined LLIn trigger. After a first new trigger hitn+1 is memorized, if another second trigger hitn+2 is detected and if the hitn triggered transfer is still not completed, hitn+2 is lost and not memorized.memorized. A trigger overrun flag is reported (GPDMA_C10SR.TOF=1), and an interrupt is generated if enabled (GPDMA_C10CR.TOIE = 1). The channel is not automatically disabled by hardware due to a trigger overrun. Note: When the source block size is not a multiple of the source burst size and is a multiple of the source data width, then the last programmed source burst is not completed and is internally shorten to match the block size. In this case, if TRIGM[1:0] = 11 and (SWREQ = 1 or (SWREQ = 0 and DREQ = 0)), the shortened burst transfer (by singles or/and by bursts of lower length) is conditioned once by the trigger. +: When the programmed destination burst is internally shortened by singles or/and by bursts of lower length (versus FIFO size, versus block size, 1-Kbyte boundary address crossing): if the trigger is conditioning the programmed destination burst (if TRIGM[1:0] = 11 and SWREQ = 0 and DREQ = 1), this shortened destination burst transfer is conditioned once by the trigger. */
    using GPDMA_C10TR2_TRIGM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief These bits select the trigger event input of the GPDMA transfer (as per less than xe3 [GPDMA_triggers]/>), with anactive trigger event if TRIGPOL[1:0] is not equal to 00. */
    using GPDMA_C10TR2_TRIGSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief These bits define the polarity of the selected trigger event input defined by TRIGSEL[5:0]. 00: no trigger (masked trigger event) 01: trigger on the rising edge 10: trigger on the falling edge 11: same as 00 */
    using GPDMA_C10TR2_TRIGPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no trigger (masked trigger event) (value: 0)
     *          - B_0x1: trigger on the rising edge (value: 1)
     *          - B_0x2: trigger on the falling edge (value: 2)
     *          - B_0x3: same as 00 (value: 3)
     */
        /** @brief no trigger (masked trigger event) */
    constexpr std::uint32_t GPDMA_C10TR2_TRIGPOL_B_0x0 = 0;
        /** @brief trigger on the rising edge */
    constexpr std::uint32_t GPDMA_C10TR2_TRIGPOL_B_0x1 = 1;
        /** @brief trigger on the falling edge */
    constexpr std::uint32_t GPDMA_C10TR2_TRIGPOL_B_0x2 = 2;
        /** @brief same as 00 */
    constexpr std::uint32_t GPDMA_C10TR2_TRIGPOL_B_0x3 = 3;

    /** @brief These bits define the transfer granularity for the transfer complete and half transfer complete events generation. 00: at block level (when GPDMA_C10BR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. 01: channel 10 (0 to ), same as 00, channel 10 , at 2D/repeated block level (when GPDMA_C10BR1.BRC[10:0] = 0 and GPDMA_C10BR1.BNDT[15:0] = 0). The complete (and the half) transfer event is generated at the end (respectively half of the end) of the 2D/repeated block. 10: at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer. The LLI data transfer is a block transfer or a 2D/repeated block transfer for channel 10 , if any data transfer. 11: at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address GPDMA_C10LLR.LA[15:2] to zero and clears all the GPDMA_C10LLR update bits (UT1, UT2, UB1, USA, UDA and ULL, plus UT3 and UB2). If the channel transfer is continuous/infinite, no event is generated. Note: If the initial LLI0 data transfer is null/void (directly programmed by the internal register file with GPDMA_C10BR1.BNDT[15:0] = 0), then neither the complete transfer event nor the half transfer event is generated. +: If the initial LLI0 data transfer is null/void (directly programmed by the internal register file with GPDMA_C10BR1.BNDT[15:0] = 0), then neither the complete transfer event nor the half transfer event is generated. +: If the initial LLI0 data transfer is null/void (directly programmed by the internal register file with GPDMA_C10BR1.BNDT[15:0] = 0), then the half transfer event is not generated, and the transfer complete event is generated when is completed the loading of the LLI1. */
    using GPDMA_C10TR2_TCEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: at block level (when GPDMA_C10BR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. (value: 0)
     *          - B_0x1: channel 10 (0 to ), same as 00, channel 10 , at 2D/repeated block level (when GPDMA_C10BR1.BRC[10:0] = 0 and GPDMA_C10BR1.BNDT[15:0] = 0). The complete (and the half) transfer event is generated at the end (respectively half of the end) of the 2D/repeated block. (value: 1)
     *          - B_0x2: at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer. The LLI data transfer is a block transfer or a 2D/repeated block transfer for channel 10 , if any data transfer. (value: 2)
     *          - B_0x3: at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address GPDMA_C10LLR.LA[15:2] to zero and clears all the GPDMA_C10LLR update bits (UT1, UT2, UB1, USA, UDA and ULL, plus UT3 and UB2). If the channel transfer is continuous/infinite, no event is generated. (value: 3)
     */
        /** @brief at block level (when GPDMA_C10BR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. */
    constexpr std::uint32_t GPDMA_C10TR2_TCEM_B_0x0 = 0;
        /** @brief channel 10 (0 to ), same as 00, channel 10 , at 2D/repeated block level (when GPDMA_C10BR1.BRC[10:0] = 0 and GPDMA_C10BR1.BNDT[15:0] = 0). The complete (and the half) transfer event is generated at the end (respectively half of the end) of the 2D/repeated block. */
    constexpr std::uint32_t GPDMA_C10TR2_TCEM_B_0x1 = 1;
        /** @brief at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer. The LLI data transfer is a block transfer or a 2D/repeated block transfer for channel 10 , if any data transfer. */
    constexpr std::uint32_t GPDMA_C10TR2_TCEM_B_0x2 = 2;
        /** @brief at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address GPDMA_C10LLR.LA[15:2] to zero and clears all the GPDMA_C10LLR update bits (UT1, UT2, UB1, USA, UDA and ULL, plus UT3 and UB2). If the channel transfer is continuous/infinite, no event is generated. */
    constexpr std::uint32_t GPDMA_C10TR2_TCEM_B_0x3 = 3;

    /** @brief GPDMA channel 10 source address register */
    using GPDMA_C10SAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x59C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This field is the pointer to the address from which the next data is read. During the channel activity, depending on the source addressing mode (GPDMA_C10TR1.SINC), this field is kept fixed or incremented by the data width (GPDMA_C10TR1.SDW_LOG2[1:0]) after each burst source data, reflecting the next address from which data is read. During the channel activity, this address is updated after each completed source burst, consequently to: - the programmed source burst; either in fixed addressing mode or in contiguous-data incremented mode. If contiguously incremented (GPDMA_C10TR1.SINC = 1), then the additional address offset value is the programmed burst size, as defined by GPDMA_C10TR1.SBL_1[5:0] and GPDMA_C10TR1.SDW_LOG2[21:0] - the additional source incremented/decremented offset value as programmed by GPDMA_C10BR1.SDEC and GPDMA_CxTR3.SAO[12:0]. - once/if completed source block transfer, for a channel 10 with 2D addressing capability (x = 12 to 15). additional block repeat source incremented/decremented offset value as programmed by GPDMA_C10BR1.BRSDEC and GPDMA_CxBR2.BRSAO[15:0] In linked-list mode, after a LLI data transfer is completed, this register is automatically updated by GPDMA from the memory, provided the LLI is set with GPDMA_C10LLR.USA = 1. Note: A source address must be aligned with the programmed data width of a source burst (SA[2:0] versus GPDMA_C10TR1.SDW_LOG2[1:0]). Else, a user setting error is reported and no transfer is issued. +: When the source block size is not a multiple of the source burst size and is a multiple of the source data width, the last programmed source burst is not completed and is internally shorten to match the block size. In this case, the additional GPDMA_CxTR3.SAO[12:0] is not applied. */
    using GPDMA_C10SAR_SA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 10 destination address register */
    using GPDMA_C10DAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This field is the pointer to the address from which the next data is written. During the channel activity, depending on the destination addressing mode (GPDMA_C10TR1.DINC), this field is kept fixed or incremented by the data width (GPDMA_C10TR1.DDW_LOG2[21:0]) after each burst destination data, reflecting the next address from which data is written. During the channel activity, this address is updated after each completed destination burst, consequently to: - the programmed destination burst; either in fixed addressing mode or in contiguous-data incremented mode. If contiguously incremented (GPDMA_C10TR1.DINC = 1), then the additional address offset value is the programmed burst size, as defined by GPDMA_C10TR1.DBL_1[5:0] and GPDMA_C10TR1.DDW_LOG2[1:0] - the additional destination incremented/decremented offset value as programmed by GPDMA_C10BR1.DDEC and GPDMA_CxTR3.DAO[12:0]. - once/if completed destination block transfer, for a channel 10 with 2D addressing capability (x=12to15), the additional block repeat destination incremented/decremented offset value as programmed by GPDMA_C10BR1.BRDDEC and GPDMA_CxBR2.BRDAO[15:0] In linked-list mode, after a LLI data transfer is completed, this register is automatically updated by the GPDMA from the memory, provided the LLI is set with GPDMA_C10LLR.UDA = 1. Note: A destination address must be aligned with the programmed data width of a destination burst (DA[2:0] versus GPDMA_C10TR1.DDW_LOG2[1:0]). Else, a user setting error is reported and no transfer is issued. */
    using GPDMA_C10DAR_DA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 11 linked-list base address register */
    using GPDMA_C11LBAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5D0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief None */
    using GPDMA_C11LBAR_LBA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 11 flag clear register */
    using GPDMA_C11FCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5DC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief None 0: no effect 1: corresponding TCF flag cleared */
    using GPDMA_C11FCR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding TCF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C11FCR_TCF_B_0x0 = 0;
        /** @brief corresponding TCF flag cleared */
    constexpr std::uint32_t GPDMA_C11FCR_TCF_B_0x1 = 1;

    /** @brief None 0: no effect 1: corresponding HTF flag cleared */
    using GPDMA_C11FCR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding HTF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C11FCR_HTF_B_0x0 = 0;
        /** @brief corresponding HTF flag cleared */
    constexpr std::uint32_t GPDMA_C11FCR_HTF_B_0x1 = 1;

    /** @brief None 0: no effect 1: corresponding DTEF flag cleared */
    using GPDMA_C11FCR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding DTEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C11FCR_DTEF_B_0x0 = 0;
        /** @brief corresponding DTEF flag cleared */
    constexpr std::uint32_t GPDMA_C11FCR_DTEF_B_0x1 = 1;

    /** @brief None 0: no effect 1: corresponding ULEF flag cleared */
    using GPDMA_C11FCR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding ULEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C11FCR_ULEF_B_0x0 = 0;
        /** @brief corresponding ULEF flag cleared */
    constexpr std::uint32_t GPDMA_C11FCR_ULEF_B_0x1 = 1;

    /** @brief None 0: no effect 1: corresponding USEF flag cleared */
    using GPDMA_C11FCR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding USEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C11FCR_USEF_B_0x0 = 0;
        /** @brief corresponding USEF flag cleared */
    constexpr std::uint32_t GPDMA_C11FCR_USEF_B_0x1 = 1;

    /** @brief None 0: no effect 1: corresponding SUSPF flag cleared */
    using GPDMA_C11FCR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding SUSPF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C11FCR_SUSPF_B_0x0 = 0;
        /** @brief corresponding SUSPF flag cleared */
    constexpr std::uint32_t GPDMA_C11FCR_SUSPF_B_0x1 = 1;

    /** @brief None 0: no effect 1: corresponding TOF flag cleared */
    using GPDMA_C11FCR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding TOF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C11FCR_TOF_B_0x0 = 0;
        /** @brief corresponding TOF flag cleared */
    constexpr std::uint32_t GPDMA_C11FCR_TOF_B_0x1 = 1;

    /** @brief GPDMA channel 11 status register */
    using GPDMA_C11SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5E0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This idle flag is deasserted by hardware when the channel is enabled (GPDMA_C11CR.EN = 1) with a valid channel configuration (no USEF to be immediately reported). This idle flag is asserted after hard reset or by hardware when the channel is back in idle state (in suspended or disabled state). 0: channel not in idle state 1: channel in idle state */
    using GPDMA_C11SR_IDLEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: channel not in idle state (value: 0)
     *          - B_0x1: channel in idle state (value: 1)
     */
        /** @brief channel not in idle state */
    constexpr std::uint32_t GPDMA_C11SR_IDLEF_B_0x0 = 0;
        /** @brief channel in idle state */
    constexpr std::uint32_t GPDMA_C11SR_IDLEF_B_0x1 = 1;

    /** @brief A transfer complete event is either a block transfer complete, a 2D/repeated block transfer complete, or a LLI transfer complete including the upload of the next LLI if any, or the full linked-list completion, depending on the transfer complete event mode (GPDMA_C11TR2.TCEM[1:0]). 0: no transfer complete event 1: a transfer complete event occurred */
    using GPDMA_C11SR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no transfer complete event (value: 0)
     *          - B_0x1: a transfer complete event occurred (value: 1)
     */
        /** @brief no transfer complete event */
    constexpr std::uint32_t GPDMA_C11SR_TCF_B_0x0 = 0;
        /** @brief a transfer complete event occurred */
    constexpr std::uint32_t GPDMA_C11SR_TCF_B_0x1 = 1;

    /** @brief A half transfer event is either a half block transfer or a half 2D/repeated block transfer, depending on the transfer complete event mode (GPDMA_C11TR2.TCEM[1:0]). A half block transfer occurs when half of the bytes of the source block size (rounded up integer of GPDMA_C11BR1.BNDT[15:0]/2) has been transferred to the destination. A half 2D/repeated block transfer occurs when half of the repeated blocks (rounded up integer of (GPDMA_C11BR1.BRC[10:0]+1)/2)) has been transferred to the destination. 0: no half transfer event 1: a half transfer event occurred */
    using GPDMA_C11SR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no half transfer event (value: 0)
     *          - B_0x1: a half transfer event occurred (value: 1)
     */
        /** @brief no half transfer event */
    constexpr std::uint32_t GPDMA_C11SR_HTF_B_0x0 = 0;
        /** @brief a half transfer event occurred */
    constexpr std::uint32_t GPDMA_C11SR_HTF_B_0x1 = 1;

    /** @brief None 0: no data transfer error event 1: a master bus error event occurred on a data transfer */
    using GPDMA_C11SR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no data transfer error event (value: 0)
     *          - B_0x1: a master bus error event occurred on a data transfer (value: 1)
     */
        /** @brief no data transfer error event */
    constexpr std::uint32_t GPDMA_C11SR_DTEF_B_0x0 = 0;
        /** @brief a master bus error event occurred on a data transfer */
    constexpr std::uint32_t GPDMA_C11SR_DTEF_B_0x1 = 1;

    /** @brief None 0: no update link transfer error event 1: a master bus error event occurred while updating a linked-list register from memory */
    using GPDMA_C11SR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no update link transfer error event (value: 0)
     *          - B_0x1: a master bus error event occurred while updating a linked-list register from memory (value: 1)
     */
        /** @brief no update link transfer error event */
    constexpr std::uint32_t GPDMA_C11SR_ULEF_B_0x0 = 0;
        /** @brief a master bus error event occurred while updating a linked-list register from memory */
    constexpr std::uint32_t GPDMA_C11SR_ULEF_B_0x1 = 1;

    /** @brief None 0: no user setting error event 1: a user setting error event occurred */
    using GPDMA_C11SR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no user setting error event (value: 0)
     *          - B_0x1: a user setting error event occurred (value: 1)
     */
        /** @brief no user setting error event */
    constexpr std::uint32_t GPDMA_C11SR_USEF_B_0x0 = 0;
        /** @brief a user setting error event occurred */
    constexpr std::uint32_t GPDMA_C11SR_USEF_B_0x1 = 1;

    /** @brief None 0: no completed suspension event 1: a completed suspension event occurred */
    using GPDMA_C11SR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no completed suspension event (value: 0)
     *          - B_0x1: a completed suspension event occurred (value: 1)
     */
        /** @brief no completed suspension event */
    constexpr std::uint32_t GPDMA_C11SR_SUSPF_B_0x0 = 0;
        /** @brief a completed suspension event occurred */
    constexpr std::uint32_t GPDMA_C11SR_SUSPF_B_0x1 = 1;

    /** @brief None 0: no trigger overrun event 1: a trigger overrun event occurred */
    using GPDMA_C11SR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no trigger overrun event (value: 0)
     *          - B_0x1: a trigger overrun event occurred (value: 1)
     */
        /** @brief no trigger overrun event */
    constexpr std::uint32_t GPDMA_C11SR_TOF_B_0x0 = 0;
        /** @brief a trigger overrun event occurred */
    constexpr std::uint32_t GPDMA_C11SR_TOF_B_0x1 = 1;

    /** @brief Number of available write beats in the FIFO, in units of the programmed destination data width (see GPDMA_C11TR1.DDW_LOG2[1:0], in units of bytes, half-words, or words). Note: After having suspended an active transfer, the user may need to read FIFOL[7:0], additionally to GPDMA_C11BR1.BDNT[15:0] and GPDMA_C11BR1.BRC[10:0], to know how many data have been transferred to the destination. Before reading, the user may wait for the transfer to be suspended (GPDMA_C11SR.SUSPF = 1). */
    using GPDMA_C11SR_FIFOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 11 control register */
    using GPDMA_C11CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5E4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Writing 1 into the field RESET (bit 1) causes the hardware to de-assert this bit, whatever is written into this bit 0. Else: this bit is deasserted by hardware when there is a transfer error (master bus error or user setting error) or when there is a channel transfer complete (channel ready to be configured, for example if LSM = 1 at the end of a single execution of the LLI). Else, this bit can be asserted by software. Writing 0 into this EN bit is ignored. 0: write: ignored, read: channel disabled 1: write: enable channel, read: channel enabled */
    using GPDMA_C11CR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write: ignored, read: channel disabled (value: 0)
     *          - B_0x1: write: enable channel, read: channel enabled (value: 1)
     */
        /** @brief write: ignored, read: channel disabled */
    constexpr std::uint32_t GPDMA_C11CR_EN_B_0x0 = 0;
        /** @brief write: enable channel, read: channel enabled */
    constexpr std::uint32_t GPDMA_C11CR_EN_B_0x1 = 1;

    /** @brief This bit is write only. Writing 0 has no impact. Writing 1 implies the reset of the following: the FIFO, the channel internal state, SUSP and EN bits (whatever is written receptively in bit 2 and bit 0). The reset is effective when the channel is in steady state, meaning one of the following: - active channel in suspended state (GPDMA_C11SR.SUSPF = 1 and GPDMA_C11SR.IDLEF=GPDMA_C11CR.EN = 1) - channel in disabled state (GPDMA_C11SR.IDLEF = 1 and GPDMA_C11CR.EN = 0). After writing a RESET, to continue using this channel, the user must explicitly reconfigure the channel including the hardware-modified configuration registers (GPDMA_C11BR1, GPDMA_CxSAR and GPDMA_CxDAR) before enabling again the channel (see the programming sequence in less than xe6 [GPDMA_abort_restart/ID00-1465]/>). 0: no channel reset 1: channel reset */
    using GPDMA_C11CR_RESET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no channel reset (value: 0)
     *          - B_0x1: channel reset (value: 1)
     */
        /** @brief no channel reset */
    constexpr std::uint32_t GPDMA_C11CR_RESET_B_0x0 = 0;
        /** @brief channel reset */
    constexpr std::uint32_t GPDMA_C11CR_RESET_B_0x1 = 1;

    /** @brief Writing 1 into the field RESET (bit 1) causes the hardware to de-assert this bit, whatever is written into this bit 2. Else: Software must write 1 in order to suspend an active channel (channel with an ongoing GPDMA transfer over its master ports). The software must write 0 in order to resume a suspended channel, following the programming sequence detailed in less than xe5 [GPDMA_channel_suspend_and_resume/ID00-1456]/>. 0: write: resume channel, read: channel not suspended 1: write: suspend channel, read: channel suspended. */
    using GPDMA_C11CR_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write: resume channel, read: channel not suspended (value: 0)
     *          - B_0x1: write: suspend channel, read: channel suspended. (value: 1)
     */
        /** @brief write: resume channel, read: channel not suspended */
    constexpr std::uint32_t GPDMA_C11CR_SUSP_B_0x0 = 0;
        /** @brief write: suspend channel, read: channel suspended. */
    constexpr std::uint32_t GPDMA_C11CR_SUSP_B_0x1 = 1;

    /** @brief None 0: interrupt disabled 1: interrupt enabled */
    using GPDMA_C11CR_TCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C11CR_TCIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C11CR_TCIE_B_0x1 = 1;

    /** @brief None 0: interrupt disabled 1: interrupt enabled */
    using GPDMA_C11CR_HTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C11CR_HTIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C11CR_HTIE_B_0x1 = 1;

    /** @brief None 0: interrupt disabled 1: interrupt enabled */
    using GPDMA_C11CR_DTEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C11CR_DTEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C11CR_DTEIE_B_0x1 = 1;

    /** @brief None 0: interrupt disabled 1: interrupt enabled */
    using GPDMA_C11CR_ULEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C11CR_ULEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C11CR_ULEIE_B_0x1 = 1;

    /** @brief None 0: interrupt disabled 1: interrupt enabled */
    using GPDMA_C11CR_USEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C11CR_USEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C11CR_USEIE_B_0x1 = 1;

    /** @brief None 0: interrupt disabled 1: interrupt enabled */
    using GPDMA_C11CR_SUSPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C11CR_SUSPIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C11CR_SUSPIE_B_0x1 = 1;

    /** @brief None 0: interrupt disabled 1: interrupt enabled */
    using GPDMA_C11CR_TOIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C11CR_TOIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C11CR_TOIE_B_0x1 = 1;

    /** @brief First the (possible 1D/repeated) block transfer is executed as defined by the current internal register file until GPDMA_C11BR1.BNDT[15:0] = 0 and GPDMA_C11BR1.BRC[10:0] = 0. Secondly the next linked-list data structure is conditionally uploaded from memory as defined by GPDMA_C11LLR. Then channel execution is completed. 0: channel executed for the full linked-list and completed at the end of the last LLI (GPDMA_C11LLR = 0). The 16 low-significant bits of the link address are null (LA[15:0] = 0) and all the update bits are null (UT1 = UB1 = UT2 = USA = UDA = ULL = 0 and UT3 = UB2 = 0). Then GPDMA_C11BR1.BNDT[15:0] = 0 and GPDMA_C11BR1.BRC[10:0] = 0. 1: channel executed once for the current LLI Note: This bit must be written when EN = 0. This bit is read-only when EN = 1. */
    using GPDMA_C11CR_LSM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: channel executed for the full linked-list and completed at the end of the last LLI (GPDMA_C11LLR = 0). The 16 low-significant bits of the link address are null (LA[15:0] = 0) and all the update bits are null (UT1 = UB1 = UT2 = USA = UDA = ULL = 0 and UT3 = UB2 = 0). Then GPDMA_C11BR1.BNDT[15:0] = 0 and GPDMA_C11BR1.BRC[10:0] = 0. (value: 0)
     *          - B_0x1: channel executed once for the current LLI (value: 1)
     */
        /** @brief channel executed for the full linked-list and completed at the end of the last LLI (GPDMA_C11LLR = 0). The 16 low-significant bits of the link address are null (LA[15:0] = 0) and all the update bits are null (UT1 = UB1 = UT2 = USA = UDA = ULL = 0 and UT3 = UB2 = 0). Then GPDMA_C11BR1.BNDT[15:0] = 0 and GPDMA_C11BR1.BRC[10:0] = 0. */
    constexpr std::uint32_t GPDMA_C11CR_LSM_B_0x0 = 0;
        /** @brief channel executed once for the current LLI */
    constexpr std::uint32_t GPDMA_C11CR_LSM_B_0x1 = 1;

    /** @brief This bit is used to allocate the master port for the update of the GPDMA linked-list registers from the memory. 0: port 0 (AHB) allocated 1: port 1 (AHB) allocated Note: This bit must be written when EN = 0. This bit is read-only when EN = 1. */
    using GPDMA_C11CR_LAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C11CR_LAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C11CR_LAP_B_0x1 = 1;

    /** @brief None 00: low priority, low weight 01: low priority, mid weight 10: low priority, high weight 11: high priority Note: This bit must be written when EN = 0. This bit is read-only when EN = 1. */
    using GPDMA_C11CR_PRIO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: low priority, low weight (value: 0)
     *          - B_0x1: low priority, mid weight (value: 1)
     *          - B_0x2: low priority, high weight (value: 2)
     *          - B_0x3: high priority (value: 3)
     */
        /** @brief low priority, low weight */
    constexpr std::uint32_t GPDMA_C11CR_PRIO_B_0x0 = 0;
        /** @brief low priority, mid weight */
    constexpr std::uint32_t GPDMA_C11CR_PRIO_B_0x1 = 1;
        /** @brief low priority, high weight */
    constexpr std::uint32_t GPDMA_C11CR_PRIO_B_0x2 = 2;
        /** @brief high priority */
    constexpr std::uint32_t GPDMA_C11CR_PRIO_B_0x3 = 3;

    /** @brief GPDMA channel 11 transfer register 1 */
    using GPDMA_C11TR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x610, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief None 00: byte 01: half-word (2 bytes) 10: word (4 bytes) 11: user setting error reported and no transfer issued Note: Setting a 8-byte data width causes a user setting error to be reported and no transfer is issued. +: A source block size must be a multiple of the source data width (GPDMA_C11BR1.BNDT[2:0] versus SDW_LOG2[1:0]). Otherwise, a user setting error is reported and no transfer is issued. +: A source burst transfer must have an aligned address with its data width (start address GPDMA_CxSAR[2:0] versus SDW_LOG2[1:0]). Otherwise, a user setting error is reported and none transfer is issued. */
    using GPDMA_C11TR1_SDW_LOG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: byte (value: 0)
     *          - B_0x1: half-word (2 bytes) (value: 1)
     *          - B_0x2: word (4 bytes) (value: 2)
     *          - B_0x3: user setting error reported and no transfer issued (value: 3)
     */
        /** @brief byte */
    constexpr std::uint32_t GPDMA_C11TR1_SDW_LOG2_B_0x0 = 0;
        /** @brief half-word (2 bytes) */
    constexpr std::uint32_t GPDMA_C11TR1_SDW_LOG2_B_0x1 = 1;
        /** @brief word (4 bytes) */
    constexpr std::uint32_t GPDMA_C11TR1_SDW_LOG2_B_0x2 = 2;
        /** @brief user setting error reported and no transfer issued */
    constexpr std::uint32_t GPDMA_C11TR1_SDW_LOG2_B_0x3 = 3;

    /** @brief The source address, pointed by GPDMA_CxSAR, is kept constant after a burst beat/single transfer or is incremented by the offset value corresponding to a contiguous data after a burst beat/single transfer. 0: fixed burst 1: contiguously incremented burst */
    using GPDMA_C11TR1_SINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fixed burst (value: 0)
     *          - B_0x1: contiguously incremented burst (value: 1)
     */
        /** @brief fixed burst */
    constexpr std::uint32_t GPDMA_C11TR1_SINC_B_0x0 = 0;
        /** @brief contiguously incremented burst */
    constexpr std::uint32_t GPDMA_C11TR1_SINC_B_0x1 = 1;

    /** @brief The burst length unit is one data named beat within a burst. If SBL_1[5:0] = 0, the burst can be named as single. Each data/beat has a width defined by the destination data width SDW_LOG2[1:0]. Note: If a burst transfer crossed a 1-Kbyte address boundary on a AHB transfer, the GPDMA modifies and shortens the programmed burst into singles or bursts of lower length, to be compliant with the AHB protocol. +: If a burst transfer is of length greater than the FIFO size of the channel 11, the GPDMA modifies and shortens the programmed burst into singles or bursts of lower length, to be compliant with the FIFO size. Transfer performance is lower, with GPDMA re-arbitration between effective and lower singles/bursts, but the data integrity is guaranteed. */
    using GPDMA_C11TR1_SBL_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief If DDW_LOG2[1:0] = SDW_LOG2[1:0]: if the data width of a burst destination transfer is equal to the data width of a burst source transfer, these bits are ignored. */
    using GPDMA_C11TR1_PAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0_COND1: COND1 is [PAM_1] source data is transferred as right aligned, padded with 0s up to the destination data width (value: 0)
     *          - B_0x1_COND1: COND1 is [PAM_1] source data is transferred as right aligned, sign extended up to the destination data width (value: 1)
     *          - B_0x2_COND1: COND1 is [PAM_1] successive source data are FIFO queued and packed at the destination data width, in a left (LSB) to right (MSB) order (named little endian), before a destination transfer (value: 2)
     *          - B_0x3_COND1: COND1 is [PAM_1] successive source data are FIFO queued and packed at the destination data width, in a left (LSB) to right (MSB) order (named little endian), before a destination transfer (value: 3)
     */
        /** @brief COND1 is [PAM_1] source data is transferred as right aligned, padded with 0s up to the destination data width */
    constexpr std::uint32_t GPDMA_C11TR1_PAM_B_0x0_COND1 = 0;
        /** @brief COND1 is [PAM_1] source data is transferred as right aligned, sign extended up to the destination data width */
    constexpr std::uint32_t GPDMA_C11TR1_PAM_B_0x1_COND1 = 1;
        /** @brief COND1 is [PAM_1] successive source data are FIFO queued and packed at the destination data width, in a left (LSB) to right (MSB) order (named little endian), before a destination transfer */
    constexpr std::uint32_t GPDMA_C11TR1_PAM_B_0x2_COND1 = 2;
        /** @brief COND1 is [PAM_1] successive source data are FIFO queued and packed at the destination data width, in a left (LSB) to right (MSB) order (named little endian), before a destination transfer */
    constexpr std::uint32_t GPDMA_C11TR1_PAM_B_0x3_COND1 = 3;

    /** @brief If the source data width is shorter than a word, this bit is ignored. If the source data width is a word: 0: no byte-based exchange within the unaligned half-word of each source word 1: the two consecutive bytes within the unaligned half-word of each source word are exchanged. */
    using GPDMA_C11TR1_SBx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no byte-based exchange within the unaligned half-word of each source word (value: 0)
     *          - B_0x1: the two consecutive bytes within the unaligned half-word of each source word are exchanged. (value: 1)
     */
        /** @brief no byte-based exchange within the unaligned half-word of each source word */
    constexpr std::uint32_t GPDMA_C11TR1_SBx_B_0x0 = 0;
        /** @brief the two consecutive bytes within the unaligned half-word of each source word are exchanged. */
    constexpr std::uint32_t GPDMA_C11TR1_SBx_B_0x1 = 1;

    /** @brief This bit is used to allocate the master port for the source transfer 0: port 0 (AHB) allocated 1: port 1 (AHB) allocated Note: This bit must be written when EN = 0. This bit is read-only when EN = 1. */
    using GPDMA_C11TR1_SAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C11TR1_SAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C11TR1_SAP_B_0x1 = 1;

    /** @brief If GPDMA_SECCFGR.SEC11 = 1 and the access is secure: This is a secure register bit. This bit can only be read by a secure software. This bit must be written by a secure software when GPDMA_SECCFGR.SEC11 = 1. A secure write is ignored when GPDMA_SECCFGR.SEC11 = 0. When GPDMA_SECCFGR.SEC11 is deasserted, this SSEC bit is also deasserted by hardware (on a secure reconfiguration of the channel as non-secure), and the GPDMA transfer from the source is non-secure. 0: GPDMA transfer non-secure 1: GPDMA transfer secure */
    using GPDMA_C11TR1_SSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPDMA transfer non-secure (value: 0)
     *          - B_0x1: GPDMA transfer secure (value: 1)
     */
        /** @brief GPDMA transfer non-secure */
    constexpr std::uint32_t GPDMA_C11TR1_SSEC_B_0x0 = 0;
        /** @brief GPDMA transfer secure */
    constexpr std::uint32_t GPDMA_C11TR1_SSEC_B_0x1 = 1;

    /** @brief None 00: byte 01: half-word (2 bytes) 10: word (4 bytes) 11: user setting error reported and no transfer issued Note: Setting a 8-byte data width causes a user setting error to be reported and none transfer is issued. +: A destination burst transfer must have an aligned address with its data width (start address GPDMA_CxDAR[2:0] and address offset GPDMA_CxTR3.DAO[2:0], versus DDW_LOG2[1:0]). Otherwise a user setting error is reported and no transfer is issued. */
    using GPDMA_C11TR1_DDW_LOG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: byte (value: 0)
     *          - B_0x1: half-word (2 bytes) (value: 1)
     *          - B_0x2: word (4 bytes) (value: 2)
     *          - B_0x3: user setting error reported and no transfer issued (value: 3)
     */
        /** @brief byte */
    constexpr std::uint32_t GPDMA_C11TR1_DDW_LOG2_B_0x0 = 0;
        /** @brief half-word (2 bytes) */
    constexpr std::uint32_t GPDMA_C11TR1_DDW_LOG2_B_0x1 = 1;
        /** @brief word (4 bytes) */
    constexpr std::uint32_t GPDMA_C11TR1_DDW_LOG2_B_0x2 = 2;
        /** @brief user setting error reported and no transfer issued */
    constexpr std::uint32_t GPDMA_C11TR1_DDW_LOG2_B_0x3 = 3;

    /** @brief The destination address, pointed by GPDMA_CxDAR, is kept constant after a burst beat/single transfer, or is incremented by the offset value corresponding to a contiguous data after a burst beat/single transfer. 0: fixed burst 1: contiguously incremented burst */
    using GPDMA_C11TR1_DINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fixed burst (value: 0)
     *          - B_0x1: contiguously incremented burst (value: 1)
     */
        /** @brief fixed burst */
    constexpr std::uint32_t GPDMA_C11TR1_DINC_B_0x0 = 0;
        /** @brief contiguously incremented burst */
    constexpr std::uint32_t GPDMA_C11TR1_DINC_B_0x1 = 1;

    /** @brief The burst length unit is one data named beat within a burst. If DBL_1[5:0] = 0, the burst can be named as single. Each data/beat has a width defined by the destination data width DDW_LOG2[1:0]. Note: If a burst transfer crossed a 1-Kbyte address boundary on a AHB transfer, the GPDMA modifies and shortens the programmed burst into singles or bursts of lower length, to be compliant with the AHB protocol. +: If a burst transfer is of length greater than the FIFO size of the channel 11, the GPDMA modifies and shortens the programmed burst into singles or bursts of lower length, to be compliant with the FIFO size. Transfer performance is lower, with GPDMA re-arbitration between effective and lower singles/bursts, but the data integrity is guaranteed. */
    using GPDMA_C11TR1_DBL_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief If the destination data size is a byte, this bit is ignored. If the destination data size is not a byte: 0: no byte-based exchange within half-word 1: the two consecutive (post PAM) bytes are exchanged in each destination half-word. */
    using GPDMA_C11TR1_DBx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no byte-based exchange within half-word (value: 0)
     *          - B_0x1: the two consecutive (post PAM) bytes are exchanged in each destination half-word. (value: 1)
     */
        /** @brief no byte-based exchange within half-word */
    constexpr std::uint32_t GPDMA_C11TR1_DBx_B_0x0 = 0;
        /** @brief the two consecutive (post PAM) bytes are exchanged in each destination half-word. */
    constexpr std::uint32_t GPDMA_C11TR1_DBx_B_0x1 = 1;

    /** @brief If the destination data size is shorter than a word, this bit is ignored. If the destination data size is a word: 0: no halfword-based exchanged within word 1: the two consecutive (post PAM) half-words are exchanged in each destination word. */
    using GPDMA_C11TR1_DHx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no halfword-based exchanged within word (value: 0)
     *          - B_0x1: the two consecutive (post PAM) half-words are exchanged in each destination word. (value: 1)
     */
        /** @brief no halfword-based exchanged within word */
    constexpr std::uint32_t GPDMA_C11TR1_DHx_B_0x0 = 0;
        /** @brief the two consecutive (post PAM) half-words are exchanged in each destination word. */
    constexpr std::uint32_t GPDMA_C11TR1_DHx_B_0x1 = 1;

    /** @brief This bit is used to allocate the master port for the destination transfer 0: port 0 (AHB) allocated 1: port 1 (AHB) allocated Note: This bit must be written when EN = 0. This bit is read-only when EN = 1. */
    using GPDMA_C11TR1_DAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C11TR1_DAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C11TR1_DAP_B_0x1 = 1;

    /** @brief If GPDMA_SECCFGR.SEC11 = 1 and the access is secure: This is a secure register bit. This bit can only be read by a secure software. This bit must be written by a secure software when GPDMA_SECCFGR.SEC11 = 1. A secure write is ignored when GPDMA_SECCFGR.SEC11 = 0. When GPDMA_SECCFGR.SEC11 is deasserted, this DSEC bit is also deasserted by hardware (on a secure reconfiguration of the channel as non-secure), and the GPDMA transfer to the destination is non-secure. 0: GPDMA transfer non-secure 1: GPDMA transfer secure */
    using GPDMA_C11TR1_DSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPDMA transfer non-secure (value: 0)
     *          - B_0x1: GPDMA transfer secure (value: 1)
     */
        /** @brief GPDMA transfer non-secure */
    constexpr std::uint32_t GPDMA_C11TR1_DSEC_B_0x0 = 0;
        /** @brief GPDMA transfer secure */
    constexpr std::uint32_t GPDMA_C11TR1_DSEC_B_0x1 = 1;

    /** @brief GPDMA channel 11 transfer register 2 */
    using GPDMA_C11TR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x614, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief These bits are ignored if channel 11 is activated (GPDMA_C11CR.EN asserted) with SWREQ=1 (software request for a memory-to-memory transfer). Else, the selected hardware request is internally taken into account as per less than xe4 [GPDMA_requests]/>. The user must not assign a same input hardware request (same REQSEL[6:0] value) to different active GPDMA channels (GPDMA_C11CR.EN = 1 and GPDMA_C11TR2.SWREQ = 0 for these channels). GPDMA is not intended to hardware support the case of simultaneous enabled channels incorrectly configured with a same hardware peripheral request signal, and there is no user setting error reporting. */
    using GPDMA_C11TR2_REQSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This bit is internally taken into account when GPDMA_C11CR.EN is asserted. 0: no software request. The selected hardware request REQSEL[6:0] is taken into account. 1: software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[6:0] is ignored. */
    using GPDMA_C11TR2_SWREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no software request. The selected hardware request REQSEL[6:0] is taken into account. (value: 0)
     *          - B_0x1: software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[6:0] is ignored. (value: 1)
     */
        /** @brief no software request. The selected hardware request REQSEL[6:0] is taken into account. */
    constexpr std::uint32_t GPDMA_C11TR2_SWREQ_B_0x0 = 0;
        /** @brief software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[6:0] is ignored. */
    constexpr std::uint32_t GPDMA_C11TR2_SWREQ_B_0x1 = 1;

    /** @brief This bit is ignored if channel 11 is activated (GPDMA_C11CR.EN asserted) with SWREQ = 1 (software request for a memory-to-memory transfer). Else: 0: selected hardware request driven by a source peripheral (request signal taken into account by the GPDMA transfer scheduler over the source/read port) 1: selected hardware request driven by a destination peripheral (request signal taken into account by the GPDMA transfer scheduler over the destination/write port) Note: If the channel 11 is activated (GPDMA_C11CR.EN is asserted) with SWREQ = 0 and PFREQ = 1 (peripheral hardware request with peripheral flow-control mode), any software assertion to this DREQ bit is ignored: in peripheral flow-control mode, only a peripheral-to-memory transfer is supported. */
    using GPDMA_C11TR2_DREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: selected hardware request driven by a source peripheral (request signal taken into account by the GPDMA transfer scheduler over the source/read port) (value: 0)
     *          - B_0x1: selected hardware request driven by a destination peripheral (request signal taken into account by the GPDMA transfer scheduler over the destination/write port) (value: 1)
     */
        /** @brief selected hardware request driven by a source peripheral (request signal taken into account by the GPDMA transfer scheduler over the source/read port) */
    constexpr std::uint32_t GPDMA_C11TR2_DREQ_B_0x0 = 0;
        /** @brief selected hardware request driven by a destination peripheral (request signal taken into account by the GPDMA transfer scheduler over the destination/write port) */
    constexpr std::uint32_t GPDMA_C11TR2_DREQ_B_0x1 = 1;

    /** @brief If the channel 11 is activated (GPDMA_C11CR.EN asserted) with SWREQ = 1 (software request for a memory-to-memory transfer), this bit is ignored. Else: 0: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a burst level. 1: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see less than xe4 [GPDMA_requests]/>). */
    using GPDMA_C11TR2_BREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a burst level. (value: 0)
     *          - B_0x1: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see less than xe4 [GPDMA_requests]/>). (value: 1)
     */
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a burst level. */
    constexpr std::uint32_t GPDMA_C11TR2_BREQ_B_0x0 = 0;
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see less than xe4 [GPDMA_requests]/>). */
    constexpr std::uint32_t GPDMA_C11TR2_BREQ_B_0x1 = 1;

    /** @brief Caution: If a given channel 11 is not implemented with this feature, this bit is reserved and PFREQ is not present (see less than xe1 [GPDMA_channels]/> for the list of the implemented channels with this feature). */
    using GPDMA_C11TR2_PFREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol in GPDMA control mode. The GPDMA is programmed with GPDMA_C11TR1.BNDT[15:0] and this is internally used by the hardware for the block transfer completion. (value: 0)
     *          - B_0x1: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol in peripheral control mode. The GPDMA block transfer can be early completed by the peripheral itself (see less than xe2 [GPDMA_channels_peripheral]/> for more details). (value: 1)
     */
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol in GPDMA control mode. The GPDMA is programmed with GPDMA_C11TR1.BNDT[15:0] and this is internally used by the hardware for the block transfer completion. */
    constexpr std::uint32_t GPDMA_C11TR2_PFREQ_B_0x0 = 0;
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol in peripheral control mode. The GPDMA block transfer can be early completed by the peripheral itself (see less than xe2 [GPDMA_channels_peripheral]/> for more details). */
    constexpr std::uint32_t GPDMA_C11TR2_PFREQ_B_0x1 = 1;

    /** @brief These bits define the transfer granularity for its conditioning by the trigger. If the channel 11 is enabled (GPDMA_C11CR.EN asserted) with TRIGPOL[1:0] = 00 or 11, these TRIGM[1:0] bits are ignored. Else, a GPDMA transfer is conditioned by at least one trigger hit: 00: at block level: the first burst read of each block transfer is conditioned by one hit trigger (channel 11 = 12 to 15, for each block if a 2D/repeated block is configured with GPDMA_C11BR1.BRC[10:0] is not equal to 0). 10: at link level: a LLI link transfer is conditioned by one hit trigger. The LLI data transfer (if any) is not conditioned. 11: at programmed burst level: If SWREQ = 1, each programmed burst read is conditioned by one hit trigger. If SWREQ = 0, each programmed burst that is requested by the selected peripheral, is conditioned by one hit trigger. - If the peripheral is programmed as a source (DREQ = 0) of the LLI data transfer, each programmed burst read is conditioned. - If the peripheral is programmed as a destination (DREQ = 1) of the LLI data transfer, each programmed burst write is conditioned. The first memory burst read of a (possibly 2D/repeated) block, also named as the first ready FIFO-based source burst, is gated by the occurrence of both the hardware request and the first trigger hit.01: channel 11 = 0 to , same as 00; channel 11 , at 2D/repeated block level. The first burst read of a 2D/repeated block transfer is conditioned by one hit trigger. The GPDMA monitoring of a trigger for channel 11 is started when the channel is enabled/loaded with a new active trigger configuration: rising or falling edge on a selected trigger (TRIGPOL[1:0] = 01 or respectively TRIGPOL[1:0]=10). The monitoring of this trigger is kept active during the triggered and uncompleted (data or link) transfer; and if a new trigger is detected then, this hit is internally memorized to grant the next transfer, as long as the defined rising or falling edge is not modified, and the TRIGSEL[5:0] is not modified, and the channel is enabled. Transferring a next LLIn+1 that updates the GPDMA_C11TR2 with a new value for any of TRIGSEL[5:0] or TRIGPOL[1:0], resets the monitoring, trashing the memorized hit of the formerly defined LLIn trigger. After a first new trigger hitn+1 is memorized, if another second trigger hitn+2 is detected and if the hitn triggered transfer is still not completed, hitn+2 is lost and not memorized.memorized. A trigger overrun flag is reported (GPDMA_C11SR.TOF=1), and an interrupt is generated if enabled (GPDMA_C11CR.TOIE = 1). The channel is not automatically disabled by hardware due to a trigger overrun. Note: When the source block size is not a multiple of the source burst size and is a multiple of the source data width, then the last programmed source burst is not completed and is internally shorten to match the block size. In this case, if TRIGM[1:0] = 11 and (SWREQ = 1 or (SWREQ = 0 and DREQ = 0)), the shortened burst transfer (by singles or/and by bursts of lower length) is conditioned once by the trigger. +: When the programmed destination burst is internally shortened by singles or/and by bursts of lower length (versus FIFO size, versus block size, 1-Kbyte boundary address crossing): if the trigger is conditioning the programmed destination burst (if TRIGM[1:0] = 11 and SWREQ = 0 and DREQ = 1), this shortened destination burst transfer is conditioned once by the trigger. */
    using GPDMA_C11TR2_TRIGM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief These bits select the trigger event input of the GPDMA transfer (as per less than xe3 [GPDMA_triggers]/>), with anactive trigger event if TRIGPOL[1:0] is not equal to 00. */
    using GPDMA_C11TR2_TRIGSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief These bits define the polarity of the selected trigger event input defined by TRIGSEL[5:0]. 00: no trigger (masked trigger event) 01: trigger on the rising edge 10: trigger on the falling edge 11: same as 00 */
    using GPDMA_C11TR2_TRIGPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no trigger (masked trigger event) (value: 0)
     *          - B_0x1: trigger on the rising edge (value: 1)
     *          - B_0x2: trigger on the falling edge (value: 2)
     *          - B_0x3: same as 00 (value: 3)
     */
        /** @brief no trigger (masked trigger event) */
    constexpr std::uint32_t GPDMA_C11TR2_TRIGPOL_B_0x0 = 0;
        /** @brief trigger on the rising edge */
    constexpr std::uint32_t GPDMA_C11TR2_TRIGPOL_B_0x1 = 1;
        /** @brief trigger on the falling edge */
    constexpr std::uint32_t GPDMA_C11TR2_TRIGPOL_B_0x2 = 2;
        /** @brief same as 00 */
    constexpr std::uint32_t GPDMA_C11TR2_TRIGPOL_B_0x3 = 3;

    /** @brief These bits define the transfer granularity for the transfer complete and half transfer complete events generation. 00: at block level (when GPDMA_C11BR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. 01: channel 11 (0 to ), same as 00, channel 11 , at 2D/repeated block level (when GPDMA_C11BR1.BRC[10:0] = 0 and GPDMA_C11BR1.BNDT[15:0] = 0). The complete (and the half) transfer event is generated at the end (respectively half of the end) of the 2D/repeated block. 10: at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer. The LLI data transfer is a block transfer or a 2D/repeated block transfer for channel 11 , if any data transfer. 11: at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address GPDMA_C11LLR.LA[15:2] to zero and clears all the GPDMA_C11LLR update bits (UT1, UT2, UB1, USA, UDA and ULL, plus UT3 and UB2). If the channel transfer is continuous/infinite, no event is generated. Note: If the initial LLI0 data transfer is null/void (directly programmed by the internal register file with GPDMA_C11BR1.BNDT[15:0] = 0), then neither the complete transfer event nor the half transfer event is generated. +: If the initial LLI0 data transfer is null/void (directly programmed by the internal register file with GPDMA_C11BR1.BNDT[15:0] = 0), then neither the complete transfer event nor the half transfer event is generated. +: If the initial LLI0 data transfer is null/void (directly programmed by the internal register file with GPDMA_C11BR1.BNDT[15:0] = 0), then the half transfer event is not generated, and the transfer complete event is generated when is completed the loading of the LLI1. */
    using GPDMA_C11TR2_TCEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: at block level (when GPDMA_C11BR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. (value: 0)
     *          - B_0x1: channel 11 (0 to ), same as 00, channel 11 , at 2D/repeated block level (when GPDMA_C11BR1.BRC[10:0] = 0 and GPDMA_C11BR1.BNDT[15:0] = 0). The complete (and the half) transfer event is generated at the end (respectively half of the end) of the 2D/repeated block. (value: 1)
     *          - B_0x2: at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer. The LLI data transfer is a block transfer or a 2D/repeated block transfer for channel 11 , if any data transfer. (value: 2)
     *          - B_0x3: at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address GPDMA_C11LLR.LA[15:2] to zero and clears all the GPDMA_C11LLR update bits (UT1, UT2, UB1, USA, UDA and ULL, plus UT3 and UB2). If the channel transfer is continuous/infinite, no event is generated. (value: 3)
     */
        /** @brief at block level (when GPDMA_C11BR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. */
    constexpr std::uint32_t GPDMA_C11TR2_TCEM_B_0x0 = 0;
        /** @brief channel 11 (0 to ), same as 00, channel 11 , at 2D/repeated block level (when GPDMA_C11BR1.BRC[10:0] = 0 and GPDMA_C11BR1.BNDT[15:0] = 0). The complete (and the half) transfer event is generated at the end (respectively half of the end) of the 2D/repeated block. */
    constexpr std::uint32_t GPDMA_C11TR2_TCEM_B_0x1 = 1;
        /** @brief at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer. The LLI data transfer is a block transfer or a 2D/repeated block transfer for channel 11 , if any data transfer. */
    constexpr std::uint32_t GPDMA_C11TR2_TCEM_B_0x2 = 2;
        /** @brief at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address GPDMA_C11LLR.LA[15:2] to zero and clears all the GPDMA_C11LLR update bits (UT1, UT2, UB1, USA, UDA and ULL, plus UT3 and UB2). If the channel transfer is continuous/infinite, no event is generated. */
    constexpr std::uint32_t GPDMA_C11TR2_TCEM_B_0x3 = 3;

    /** @brief GPDMA channel 11 source address register */
    using GPDMA_C11SAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x61C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This field is the pointer to the address from which the next data is read. During the channel activity, depending on the source addressing mode (GPDMA_C11TR1.SINC), this field is kept fixed or incremented by the data width (GPDMA_C11TR1.SDW_LOG2[1:0]) after each burst source data, reflecting the next address from which data is read. During the channel activity, this address is updated after each completed source burst, consequently to: - the programmed source burst; either in fixed addressing mode or in contiguous-data incremented mode. If contiguously incremented (GPDMA_C11TR1.SINC = 1), then the additional address offset value is the programmed burst size, as defined by GPDMA_C11TR1.SBL_1[5:0] and GPDMA_C11TR1.SDW_LOG2[21:0] - the additional source incremented/decremented offset value as programmed by GPDMA_C11BR1.SDEC and GPDMA_CxTR3.SAO[12:0]. - once/if completed source block transfer, for a channel 11 with 2D addressing capability (x = 12 to 15). additional block repeat source incremented/decremented offset value as programmed by GPDMA_C11BR1.BRSDEC and GPDMA_CxBR2.BRSAO[15:0] In linked-list mode, after a LLI data transfer is completed, this register is automatically updated by GPDMA from the memory, provided the LLI is set with GPDMA_C11LLR.USA = 1. Note: A source address must be aligned with the programmed data width of a source burst (SA[2:0] versus GPDMA_C11TR1.SDW_LOG2[1:0]). Else, a user setting error is reported and no transfer is issued. +: When the source block size is not a multiple of the source burst size and is a multiple of the source data width, the last programmed source burst is not completed and is internally shorten to match the block size. In this case, the additional GPDMA_CxTR3.SAO[12:0] is not applied. */
    using GPDMA_C11SAR_SA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 11 destination address register */
    using GPDMA_C11DAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x620, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief This field is the pointer to the address from which the next data is written. During the channel activity, depending on the destination addressing mode (GPDMA_C11TR1.DINC), this field is kept fixed or incremented by the data width (GPDMA_C11TR1.DDW_LOG2[21:0]) after each burst destination data, reflecting the next address from which data is written. During the channel activity, this address is updated after each completed destination burst, consequently to: - the programmed destination burst; either in fixed addressing mode or in contiguous-data incremented mode. If contiguously incremented (GPDMA_C11TR1.DINC = 1), then the additional address offset value is the programmed burst size, as defined by GPDMA_C11TR1.DBL_1[5:0] and GPDMA_C11TR1.DDW_LOG2[1:0] - the additional destination incremented/decremented offset value as programmed by GPDMA_C11BR1.DDEC and GPDMA_CxTR3.DAO[12:0]. - once/if completed destination block transfer, for a channel 11 with 2D addressing capability (x=12to15), the additional block repeat destination incremented/decremented offset value as programmed by GPDMA_C11BR1.BRDDEC and GPDMA_CxBR2.BRDAO[15:0] In linked-list mode, after a LLI data transfer is completed, this register is automatically updated by the GPDMA from the memory, provided the LLI is set with GPDMA_C11LLR.UDA = 1. Note: A destination address must be aligned with the programmed data width of a destination burst (DA[2:0] versus GPDMA_C11TR1.DDW_LOG2[1:0]). Else, a user setting error is reported and no transfer is issued. */
    using GPDMA_C11DAR_DA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
