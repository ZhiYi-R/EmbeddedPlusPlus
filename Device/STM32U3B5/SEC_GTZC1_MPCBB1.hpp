/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32U3B5_SEC_GTZC1_MPCBB1_HPP
#define EMBEDDED_PP_STM32U3B5_SEC_GTZC1_MPCBB1_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief GTZC1_MPCBB1 address block description */
namespace STM32U3B5::SEC_GTZC1_MPCBB1 {

    /** @brief GTZC1 SRAM1 MPCBB control register */
    using GTZC1_MPCBB1_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Lock the control register of the MPCBB until next reset */
    using GTZC1_MPCBB1_CR_GLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control register not locked (value: 0)
     *          - B_0x1: Control register locked (value: 1)
     */
        /** @brief Control register not locked */
    constexpr std::uint32_t GTZC1_MPCBB1_CR_GLOCK_B_0x0 = 0;
        /** @brief Control register locked */
    constexpr std::uint32_t GTZC1_MPCBB1_CR_GLOCK_B_0x1 = 1;

    /** @brief SRAM1 clock security state */
    using GTZC1_MPCBB1_CR_INVSECSTATE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM clocks are secure if a secure area exists in the MPCBB, and nonsecure if there is no secure area. (value: 0)
     *          - B_0x1: SRAM clocks are nonsecure even if a secure area exists in the MPCBB, and secure even if no secure block is set in the MPCBB. (value: 1)
     */
        /** @brief SRAM clocks are secure if a secure area exists in the MPCBB, and nonsecure if there is no secure area. */
    constexpr std::uint32_t GTZC1_MPCBB1_CR_INVSECSTATE_B_0x0 = 0;
        /** @brief SRAM clocks are nonsecure even if a secure area exists in the MPCBB, and secure even if no secure block is set in the MPCBB. */
    constexpr std::uint32_t GTZC1_MPCBB1_CR_INVSECSTATE_B_0x1 = 1;

    /** @brief Secure read/write illegal access disable */
    using GTZC1_MPCBB1_CR_SRWILADIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Enabled, secure read/write access not allowed on nonsecure SRAM block (value: 0)
     *          - B_0x1: Disabled, secure read/write access allowed on nonsecure SRAM block (value: 1)
     */
        /** @brief Enabled, secure read/write access not allowed on nonsecure SRAM block */
    constexpr std::uint32_t GTZC1_MPCBB1_CR_SRWILADIS_B_0x0 = 0;
        /** @brief Disabled, secure read/write access allowed on nonsecure SRAM block */
    constexpr std::uint32_t GTZC1_MPCBB1_CR_SRWILADIS_B_0x1 = 1;

    /** @brief GTZC1 SRAM1 MPCBB configuration lock register 1 */
    using GTZC1_MPCBB1_CFGLOCKR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security/privilege configuration lock for super-block i */
    using GTZC1_MPCBB1_CFGLOCKR1_SPLCK0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GTZC1_MPCBB1_SECCFGRi and GTZC1_MPCBB1_PRIVCFGRi can be written. (value: 0)
     *          - B_0x1: Writes to GTZC1_MPCBB1_SECCFGRi and GTZC1_MPCBB1_PRIVCFGRi are ignored. (value: 1)
     */
        /** @brief GTZC1_MPCBB1_SECCFGRi and GTZC1_MPCBB1_PRIVCFGRi can be written. */
    constexpr std::uint32_t GTZC1_MPCBB1_CFGLOCKR1_SPLCK0_B_0x0 = 0;
        /** @brief Writes to GTZC1_MPCBB1_SECCFGRi and GTZC1_MPCBB1_PRIVCFGRi are ignored. */
    constexpr std::uint32_t GTZC1_MPCBB1_CFGLOCKR1_SPLCK0_B_0x1 = 1;

    /** @brief Security/privilege configuration lock for super-block i */
    using GTZC1_MPCBB1_CFGLOCKR1_SPLCK1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GTZC1_MPCBB1_SECCFGRi and GTZC1_MPCBB1_PRIVCFGRi can be written. (value: 0)
     *          - B_0x1: Writes to GTZC1_MPCBB1_SECCFGRi and GTZC1_MPCBB1_PRIVCFGRi are ignored. (value: 1)
     */
        /** @brief GTZC1_MPCBB1_SECCFGRi and GTZC1_MPCBB1_PRIVCFGRi can be written. */
    constexpr std::uint32_t GTZC1_MPCBB1_CFGLOCKR1_SPLCK1_B_0x0 = 0;
        /** @brief Writes to GTZC1_MPCBB1_SECCFGRi and GTZC1_MPCBB1_PRIVCFGRi are ignored. */
    constexpr std::uint32_t GTZC1_MPCBB1_CFGLOCKR1_SPLCK1_B_0x1 = 1;

    /** @brief Security/privilege configuration lock for super-block i */
    using GTZC1_MPCBB1_CFGLOCKR1_SPLCK2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GTZC1_MPCBB1_SECCFGRi and GTZC1_MPCBB1_PRIVCFGRi can be written. (value: 0)
     *          - B_0x1: Writes to GTZC1_MPCBB1_SECCFGRi and GTZC1_MPCBB1_PRIVCFGRi are ignored. (value: 1)
     */
        /** @brief GTZC1_MPCBB1_SECCFGRi and GTZC1_MPCBB1_PRIVCFGRi can be written. */
    constexpr std::uint32_t GTZC1_MPCBB1_CFGLOCKR1_SPLCK2_B_0x0 = 0;
        /** @brief Writes to GTZC1_MPCBB1_SECCFGRi and GTZC1_MPCBB1_PRIVCFGRi are ignored. */
    constexpr std::uint32_t GTZC1_MPCBB1_CFGLOCKR1_SPLCK2_B_0x1 = 1;

    /** @brief Security/privilege configuration lock for super-block i */
    using GTZC1_MPCBB1_CFGLOCKR1_SPLCK3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GTZC1_MPCBB1_SECCFGRi and GTZC1_MPCBB1_PRIVCFGRi can be written. (value: 0)
     *          - B_0x1: Writes to GTZC1_MPCBB1_SECCFGRi and GTZC1_MPCBB1_PRIVCFGRi are ignored. (value: 1)
     */
        /** @brief GTZC1_MPCBB1_SECCFGRi and GTZC1_MPCBB1_PRIVCFGRi can be written. */
    constexpr std::uint32_t GTZC1_MPCBB1_CFGLOCKR1_SPLCK3_B_0x0 = 0;
        /** @brief Writes to GTZC1_MPCBB1_SECCFGRi and GTZC1_MPCBB1_PRIVCFGRi are ignored. */
    constexpr std::uint32_t GTZC1_MPCBB1_CFGLOCKR1_SPLCK3_B_0x1 = 1;

    /** @brief Security/privilege configuration lock for super-block i */
    using GTZC1_MPCBB1_CFGLOCKR1_SPLCK4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GTZC1_MPCBB1_SECCFGRi and GTZC1_MPCBB1_PRIVCFGRi can be written. (value: 0)
     *          - B_0x1: Writes to GTZC1_MPCBB1_SECCFGRi and GTZC1_MPCBB1_PRIVCFGRi are ignored. (value: 1)
     */
        /** @brief GTZC1_MPCBB1_SECCFGRi and GTZC1_MPCBB1_PRIVCFGRi can be written. */
    constexpr std::uint32_t GTZC1_MPCBB1_CFGLOCKR1_SPLCK4_B_0x0 = 0;
        /** @brief Writes to GTZC1_MPCBB1_SECCFGRi and GTZC1_MPCBB1_PRIVCFGRi are ignored. */
    constexpr std::uint32_t GTZC1_MPCBB1_CFGLOCKR1_SPLCK4_B_0x1 = 1;

    /** @brief Security/privilege configuration lock for super-block i */
    using GTZC1_MPCBB1_CFGLOCKR1_SPLCK5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GTZC1_MPCBB1_SECCFGRi and GTZC1_MPCBB1_PRIVCFGRi can be written. (value: 0)
     *          - B_0x1: Writes to GTZC1_MPCBB1_SECCFGRi and GTZC1_MPCBB1_PRIVCFGRi are ignored. (value: 1)
     */
        /** @brief GTZC1_MPCBB1_SECCFGRi and GTZC1_MPCBB1_PRIVCFGRi can be written. */
    constexpr std::uint32_t GTZC1_MPCBB1_CFGLOCKR1_SPLCK5_B_0x0 = 0;
        /** @brief Writes to GTZC1_MPCBB1_SECCFGRi and GTZC1_MPCBB1_PRIVCFGRi are ignored. */
    constexpr std::uint32_t GTZC1_MPCBB1_CFGLOCKR1_SPLCK5_B_0x1 = 1;

    /** @brief Security/privilege configuration lock for super-block i */
    using GTZC1_MPCBB1_CFGLOCKR1_SPLCK6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GTZC1_MPCBB1_SECCFGRi and GTZC1_MPCBB1_PRIVCFGRi can be written. (value: 0)
     *          - B_0x1: Writes to GTZC1_MPCBB1_SECCFGRi and GTZC1_MPCBB1_PRIVCFGRi are ignored. (value: 1)
     */
        /** @brief GTZC1_MPCBB1_SECCFGRi and GTZC1_MPCBB1_PRIVCFGRi can be written. */
    constexpr std::uint32_t GTZC1_MPCBB1_CFGLOCKR1_SPLCK6_B_0x0 = 0;
        /** @brief Writes to GTZC1_MPCBB1_SECCFGRi and GTZC1_MPCBB1_PRIVCFGRi are ignored. */
    constexpr std::uint32_t GTZC1_MPCBB1_CFGLOCKR1_SPLCK6_B_0x1 = 1;

    /** @brief Security/privilege configuration lock for super-block i */
    using GTZC1_MPCBB1_CFGLOCKR1_SPLCK7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GTZC1_MPCBB1_SECCFGRi and GTZC1_MPCBB1_PRIVCFGRi can be written. (value: 0)
     *          - B_0x1: Writes to GTZC1_MPCBB1_SECCFGRi and GTZC1_MPCBB1_PRIVCFGRi are ignored. (value: 1)
     */
        /** @brief GTZC1_MPCBB1_SECCFGRi and GTZC1_MPCBB1_PRIVCFGRi can be written. */
    constexpr std::uint32_t GTZC1_MPCBB1_CFGLOCKR1_SPLCK7_B_0x0 = 0;
        /** @brief Writes to GTZC1_MPCBB1_SECCFGRi and GTZC1_MPCBB1_PRIVCFGRi are ignored. */
    constexpr std::uint32_t GTZC1_MPCBB1_CFGLOCKR1_SPLCK7_B_0x1 = 1;

    /** @brief Security/privilege configuration lock for super-block i */
    using GTZC1_MPCBB1_CFGLOCKR1_SPLCK8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GTZC1_MPCBB1_SECCFGRi and GTZC1_MPCBB1_PRIVCFGRi can be written. (value: 0)
     *          - B_0x1: Writes to GTZC1_MPCBB1_SECCFGRi and GTZC1_MPCBB1_PRIVCFGRi are ignored. (value: 1)
     */
        /** @brief GTZC1_MPCBB1_SECCFGRi and GTZC1_MPCBB1_PRIVCFGRi can be written. */
    constexpr std::uint32_t GTZC1_MPCBB1_CFGLOCKR1_SPLCK8_B_0x0 = 0;
        /** @brief Writes to GTZC1_MPCBB1_SECCFGRi and GTZC1_MPCBB1_PRIVCFGRi are ignored. */
    constexpr std::uint32_t GTZC1_MPCBB1_CFGLOCKR1_SPLCK8_B_0x1 = 1;

    /** @brief Security/privilege configuration lock for super-block i */
    using GTZC1_MPCBB1_CFGLOCKR1_SPLCK9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GTZC1_MPCBB1_SECCFGRi and GTZC1_MPCBB1_PRIVCFGRi can be written. (value: 0)
     *          - B_0x1: Writes to GTZC1_MPCBB1_SECCFGRi and GTZC1_MPCBB1_PRIVCFGRi are ignored. (value: 1)
     */
        /** @brief GTZC1_MPCBB1_SECCFGRi and GTZC1_MPCBB1_PRIVCFGRi can be written. */
    constexpr std::uint32_t GTZC1_MPCBB1_CFGLOCKR1_SPLCK9_B_0x0 = 0;
        /** @brief Writes to GTZC1_MPCBB1_SECCFGRi and GTZC1_MPCBB1_PRIVCFGRi are ignored. */
    constexpr std::uint32_t GTZC1_MPCBB1_CFGLOCKR1_SPLCK9_B_0x1 = 1;

    /** @brief Security/privilege configuration lock for super-block i */
    using GTZC1_MPCBB1_CFGLOCKR1_SPLCK10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GTZC1_MPCBB1_SECCFGRi and GTZC1_MPCBB1_PRIVCFGRi can be written. (value: 0)
     *          - B_0x1: Writes to GTZC1_MPCBB1_SECCFGRi and GTZC1_MPCBB1_PRIVCFGRi are ignored. (value: 1)
     */
        /** @brief GTZC1_MPCBB1_SECCFGRi and GTZC1_MPCBB1_PRIVCFGRi can be written. */
    constexpr std::uint32_t GTZC1_MPCBB1_CFGLOCKR1_SPLCK10_B_0x0 = 0;
        /** @brief Writes to GTZC1_MPCBB1_SECCFGRi and GTZC1_MPCBB1_PRIVCFGRi are ignored. */
    constexpr std::uint32_t GTZC1_MPCBB1_CFGLOCKR1_SPLCK10_B_0x1 = 1;

    /** @brief Security/privilege configuration lock for super-block i */
    using GTZC1_MPCBB1_CFGLOCKR1_SPLCK11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GTZC1_MPCBB1_SECCFGRi and GTZC1_MPCBB1_PRIVCFGRi can be written. (value: 0)
     *          - B_0x1: Writes to GTZC1_MPCBB1_SECCFGRi and GTZC1_MPCBB1_PRIVCFGRi are ignored. (value: 1)
     */
        /** @brief GTZC1_MPCBB1_SECCFGRi and GTZC1_MPCBB1_PRIVCFGRi can be written. */
    constexpr std::uint32_t GTZC1_MPCBB1_CFGLOCKR1_SPLCK11_B_0x0 = 0;
        /** @brief Writes to GTZC1_MPCBB1_SECCFGRi and GTZC1_MPCBB1_PRIVCFGRi are ignored. */
    constexpr std::uint32_t GTZC1_MPCBB1_CFGLOCKR1_SPLCK11_B_0x1 = 1;

    /** @brief GTZC1 SRAM1 MPCBB security configuration for super-block 0	register */
    using GTZC1_MPCBB1_SECCFGR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x100, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR0_SEC0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR0_SEC0_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR0_SEC0_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR0_SEC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR0_SEC1_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR0_SEC1_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR0_SEC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR0_SEC2_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR0_SEC2_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR0_SEC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR0_SEC3_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR0_SEC3_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR0_SEC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR0_SEC4_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR0_SEC4_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR0_SEC5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR0_SEC5_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR0_SEC5_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR0_SEC6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR0_SEC6_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR0_SEC6_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR0_SEC7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR0_SEC7_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR0_SEC7_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR0_SEC8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR0_SEC8_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR0_SEC8_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR0_SEC9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR0_SEC9_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR0_SEC9_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR0_SEC10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR0_SEC10_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR0_SEC10_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR0_SEC11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR0_SEC11_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR0_SEC11_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR0_SEC12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR0_SEC12_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR0_SEC12_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR0_SEC13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR0_SEC13_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR0_SEC13_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR0_SEC14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR0_SEC14_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR0_SEC14_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR0_SEC15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR0_SEC15_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR0_SEC15_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR0_SEC16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR0_SEC16_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR0_SEC16_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR0_SEC17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR0_SEC17_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR0_SEC17_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR0_SEC18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR0_SEC18_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR0_SEC18_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR0_SEC19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR0_SEC19_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR0_SEC19_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR0_SEC20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR0_SEC20_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR0_SEC20_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR0_SEC21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR0_SEC21_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR0_SEC21_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR0_SEC22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR0_SEC22_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR0_SEC22_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR0_SEC23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR0_SEC23_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR0_SEC23_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR0_SEC24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR0_SEC24_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR0_SEC24_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR0_SEC25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR0_SEC25_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR0_SEC25_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR0_SEC26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR0_SEC26_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR0_SEC26_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR0_SEC27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR0_SEC27_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR0_SEC27_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR0_SEC28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR0_SEC28_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR0_SEC28_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR0_SEC29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR0_SEC29_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR0_SEC29_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR0_SEC30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR0_SEC30_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR0_SEC30_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR0_SEC31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR0_SEC31_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR0_SEC31_B_0x1 = 1;

    /** @brief GTZC1 SRAM1 MPCBB security configuration for super-block 1	register */
    using GTZC1_MPCBB1_SECCFGR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x104, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR1_SEC0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR1_SEC0_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR1_SEC0_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR1_SEC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR1_SEC1_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR1_SEC1_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR1_SEC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR1_SEC2_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR1_SEC2_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR1_SEC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR1_SEC3_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR1_SEC3_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR1_SEC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR1_SEC4_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR1_SEC4_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR1_SEC5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR1_SEC5_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR1_SEC5_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR1_SEC6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR1_SEC6_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR1_SEC6_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR1_SEC7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR1_SEC7_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR1_SEC7_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR1_SEC8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR1_SEC8_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR1_SEC8_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR1_SEC9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR1_SEC9_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR1_SEC9_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR1_SEC10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR1_SEC10_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR1_SEC10_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR1_SEC11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR1_SEC11_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR1_SEC11_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR1_SEC12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR1_SEC12_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR1_SEC12_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR1_SEC13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR1_SEC13_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR1_SEC13_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR1_SEC14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR1_SEC14_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR1_SEC14_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR1_SEC15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR1_SEC15_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR1_SEC15_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR1_SEC16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR1_SEC16_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR1_SEC16_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR1_SEC17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR1_SEC17_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR1_SEC17_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR1_SEC18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR1_SEC18_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR1_SEC18_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR1_SEC19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR1_SEC19_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR1_SEC19_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR1_SEC20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR1_SEC20_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR1_SEC20_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR1_SEC21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR1_SEC21_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR1_SEC21_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR1_SEC22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR1_SEC22_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR1_SEC22_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR1_SEC23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR1_SEC23_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR1_SEC23_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR1_SEC24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR1_SEC24_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR1_SEC24_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR1_SEC25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR1_SEC25_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR1_SEC25_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR1_SEC26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR1_SEC26_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR1_SEC26_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR1_SEC27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR1_SEC27_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR1_SEC27_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR1_SEC28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR1_SEC28_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR1_SEC28_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR1_SEC29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR1_SEC29_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR1_SEC29_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR1_SEC30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR1_SEC30_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR1_SEC30_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR1_SEC31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR1_SEC31_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR1_SEC31_B_0x1 = 1;

    /** @brief GTZC1 SRAM1 MPCBB security configuration for super-block 2	register */
    using GTZC1_MPCBB1_SECCFGR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x108, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR2_SEC0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR2_SEC0_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR2_SEC0_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR2_SEC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR2_SEC1_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR2_SEC1_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR2_SEC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR2_SEC2_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR2_SEC2_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR2_SEC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR2_SEC3_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR2_SEC3_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR2_SEC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR2_SEC4_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR2_SEC4_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR2_SEC5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR2_SEC5_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR2_SEC5_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR2_SEC6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR2_SEC6_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR2_SEC6_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR2_SEC7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR2_SEC7_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR2_SEC7_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR2_SEC8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR2_SEC8_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR2_SEC8_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR2_SEC9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR2_SEC9_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR2_SEC9_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR2_SEC10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR2_SEC10_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR2_SEC10_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR2_SEC11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR2_SEC11_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR2_SEC11_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR2_SEC12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR2_SEC12_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR2_SEC12_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR2_SEC13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR2_SEC13_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR2_SEC13_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR2_SEC14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR2_SEC14_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR2_SEC14_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR2_SEC15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR2_SEC15_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR2_SEC15_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR2_SEC16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR2_SEC16_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR2_SEC16_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR2_SEC17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR2_SEC17_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR2_SEC17_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR2_SEC18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR2_SEC18_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR2_SEC18_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR2_SEC19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR2_SEC19_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR2_SEC19_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR2_SEC20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR2_SEC20_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR2_SEC20_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR2_SEC21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR2_SEC21_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR2_SEC21_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR2_SEC22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR2_SEC22_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR2_SEC22_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR2_SEC23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR2_SEC23_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR2_SEC23_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR2_SEC24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR2_SEC24_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR2_SEC24_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR2_SEC25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR2_SEC25_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR2_SEC25_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR2_SEC26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR2_SEC26_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR2_SEC26_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR2_SEC27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR2_SEC27_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR2_SEC27_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR2_SEC28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR2_SEC28_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR2_SEC28_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR2_SEC29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR2_SEC29_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR2_SEC29_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR2_SEC30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR2_SEC30_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR2_SEC30_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR2_SEC31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR2_SEC31_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR2_SEC31_B_0x1 = 1;

    /** @brief GTZC1 SRAM1 MPCBB security configuration for super-block 3	register */
    using GTZC1_MPCBB1_SECCFGR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR3_SEC0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR3_SEC0_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR3_SEC0_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR3_SEC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR3_SEC1_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR3_SEC1_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR3_SEC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR3_SEC2_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR3_SEC2_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR3_SEC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR3_SEC3_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR3_SEC3_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR3_SEC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR3_SEC4_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR3_SEC4_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR3_SEC5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR3_SEC5_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR3_SEC5_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR3_SEC6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR3_SEC6_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR3_SEC6_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR3_SEC7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR3_SEC7_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR3_SEC7_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR3_SEC8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR3_SEC8_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR3_SEC8_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR3_SEC9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR3_SEC9_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR3_SEC9_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR3_SEC10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR3_SEC10_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR3_SEC10_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR3_SEC11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR3_SEC11_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR3_SEC11_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR3_SEC12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR3_SEC12_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR3_SEC12_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR3_SEC13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR3_SEC13_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR3_SEC13_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR3_SEC14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR3_SEC14_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR3_SEC14_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR3_SEC15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR3_SEC15_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR3_SEC15_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR3_SEC16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR3_SEC16_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR3_SEC16_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR3_SEC17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR3_SEC17_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR3_SEC17_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR3_SEC18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR3_SEC18_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR3_SEC18_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR3_SEC19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR3_SEC19_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR3_SEC19_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR3_SEC20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR3_SEC20_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR3_SEC20_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR3_SEC21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR3_SEC21_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR3_SEC21_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR3_SEC22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR3_SEC22_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR3_SEC22_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR3_SEC23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR3_SEC23_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR3_SEC23_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR3_SEC24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR3_SEC24_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR3_SEC24_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR3_SEC25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR3_SEC25_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR3_SEC25_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR3_SEC26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR3_SEC26_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR3_SEC26_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR3_SEC27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR3_SEC27_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR3_SEC27_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR3_SEC28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR3_SEC28_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR3_SEC28_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR3_SEC29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR3_SEC29_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR3_SEC29_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR3_SEC30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR3_SEC30_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR3_SEC30_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR3_SEC31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR3_SEC31_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR3_SEC31_B_0x1 = 1;

    /** @brief GTZC1 SRAM1 MPCBB security configuration for super-block 4	register */
    using GTZC1_MPCBB1_SECCFGR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x110, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR4_SEC0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR4_SEC0_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR4_SEC0_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR4_SEC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR4_SEC1_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR4_SEC1_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR4_SEC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR4_SEC2_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR4_SEC2_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR4_SEC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR4_SEC3_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR4_SEC3_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR4_SEC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR4_SEC4_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR4_SEC4_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR4_SEC5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR4_SEC5_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR4_SEC5_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR4_SEC6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR4_SEC6_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR4_SEC6_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR4_SEC7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR4_SEC7_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR4_SEC7_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR4_SEC8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR4_SEC8_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR4_SEC8_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR4_SEC9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR4_SEC9_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR4_SEC9_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR4_SEC10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR4_SEC10_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR4_SEC10_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR4_SEC11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR4_SEC11_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR4_SEC11_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR4_SEC12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR4_SEC12_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR4_SEC12_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR4_SEC13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR4_SEC13_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR4_SEC13_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR4_SEC14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR4_SEC14_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR4_SEC14_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR4_SEC15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR4_SEC15_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR4_SEC15_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR4_SEC16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR4_SEC16_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR4_SEC16_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR4_SEC17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR4_SEC17_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR4_SEC17_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR4_SEC18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR4_SEC18_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR4_SEC18_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR4_SEC19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR4_SEC19_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR4_SEC19_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR4_SEC20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR4_SEC20_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR4_SEC20_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR4_SEC21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR4_SEC21_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR4_SEC21_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR4_SEC22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR4_SEC22_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR4_SEC22_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR4_SEC23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR4_SEC23_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR4_SEC23_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR4_SEC24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR4_SEC24_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR4_SEC24_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR4_SEC25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR4_SEC25_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR4_SEC25_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR4_SEC26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR4_SEC26_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR4_SEC26_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR4_SEC27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR4_SEC27_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR4_SEC27_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR4_SEC28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR4_SEC28_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR4_SEC28_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR4_SEC29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR4_SEC29_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR4_SEC29_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR4_SEC30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR4_SEC30_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR4_SEC30_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR4_SEC31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR4_SEC31_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR4_SEC31_B_0x1 = 1;

    /** @brief GTZC1 SRAM1 MPCBB security configuration for super-block 5	register */
    using GTZC1_MPCBB1_SECCFGR5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x114, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR5_SEC0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR5_SEC0_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR5_SEC0_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR5_SEC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR5_SEC1_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR5_SEC1_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR5_SEC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR5_SEC2_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR5_SEC2_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR5_SEC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR5_SEC3_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR5_SEC3_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR5_SEC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR5_SEC4_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR5_SEC4_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR5_SEC5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR5_SEC5_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR5_SEC5_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR5_SEC6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR5_SEC6_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR5_SEC6_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR5_SEC7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR5_SEC7_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR5_SEC7_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR5_SEC8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR5_SEC8_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR5_SEC8_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR5_SEC9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR5_SEC9_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR5_SEC9_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR5_SEC10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR5_SEC10_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR5_SEC10_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR5_SEC11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR5_SEC11_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR5_SEC11_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR5_SEC12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR5_SEC12_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR5_SEC12_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR5_SEC13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR5_SEC13_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR5_SEC13_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR5_SEC14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR5_SEC14_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR5_SEC14_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR5_SEC15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR5_SEC15_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR5_SEC15_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR5_SEC16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR5_SEC16_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR5_SEC16_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR5_SEC17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR5_SEC17_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR5_SEC17_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR5_SEC18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR5_SEC18_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR5_SEC18_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR5_SEC19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR5_SEC19_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR5_SEC19_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR5_SEC20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR5_SEC20_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR5_SEC20_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR5_SEC21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR5_SEC21_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR5_SEC21_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR5_SEC22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR5_SEC22_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR5_SEC22_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR5_SEC23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR5_SEC23_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR5_SEC23_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR5_SEC24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR5_SEC24_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR5_SEC24_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR5_SEC25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR5_SEC25_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR5_SEC25_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR5_SEC26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR5_SEC26_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR5_SEC26_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR5_SEC27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR5_SEC27_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR5_SEC27_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR5_SEC28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR5_SEC28_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR5_SEC28_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR5_SEC29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR5_SEC29_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR5_SEC29_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR5_SEC30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR5_SEC30_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR5_SEC30_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR5_SEC31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR5_SEC31_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR5_SEC31_B_0x1 = 1;

    /** @brief GTZC1 SRAM1 MPCBB security configuration for super-block 6	register */
    using GTZC1_MPCBB1_SECCFGR6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x118, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR6_SEC0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR6_SEC0_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR6_SEC0_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR6_SEC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR6_SEC1_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR6_SEC1_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR6_SEC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR6_SEC2_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR6_SEC2_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR6_SEC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR6_SEC3_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR6_SEC3_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR6_SEC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR6_SEC4_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR6_SEC4_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR6_SEC5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR6_SEC5_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR6_SEC5_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR6_SEC6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR6_SEC6_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR6_SEC6_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR6_SEC7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR6_SEC7_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR6_SEC7_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR6_SEC8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR6_SEC8_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR6_SEC8_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR6_SEC9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR6_SEC9_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR6_SEC9_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR6_SEC10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR6_SEC10_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR6_SEC10_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR6_SEC11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR6_SEC11_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR6_SEC11_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR6_SEC12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR6_SEC12_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR6_SEC12_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR6_SEC13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR6_SEC13_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR6_SEC13_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR6_SEC14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR6_SEC14_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR6_SEC14_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR6_SEC15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR6_SEC15_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR6_SEC15_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR6_SEC16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR6_SEC16_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR6_SEC16_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR6_SEC17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR6_SEC17_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR6_SEC17_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR6_SEC18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR6_SEC18_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR6_SEC18_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR6_SEC19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR6_SEC19_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR6_SEC19_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR6_SEC20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR6_SEC20_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR6_SEC20_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR6_SEC21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR6_SEC21_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR6_SEC21_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR6_SEC22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR6_SEC22_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR6_SEC22_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR6_SEC23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR6_SEC23_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR6_SEC23_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR6_SEC24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR6_SEC24_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR6_SEC24_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR6_SEC25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR6_SEC25_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR6_SEC25_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR6_SEC26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR6_SEC26_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR6_SEC26_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR6_SEC27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR6_SEC27_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR6_SEC27_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR6_SEC28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR6_SEC28_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR6_SEC28_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR6_SEC29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR6_SEC29_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR6_SEC29_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR6_SEC30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR6_SEC30_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR6_SEC30_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR6_SEC31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR6_SEC31_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR6_SEC31_B_0x1 = 1;

    /** @brief GTZC1 SRAM1 MPCBB security configuration for super-block 7	register */
    using GTZC1_MPCBB1_SECCFGR7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x11C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR7_SEC0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR7_SEC0_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR7_SEC0_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR7_SEC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR7_SEC1_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR7_SEC1_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR7_SEC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR7_SEC2_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR7_SEC2_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR7_SEC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR7_SEC3_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR7_SEC3_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR7_SEC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR7_SEC4_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR7_SEC4_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR7_SEC5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR7_SEC5_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR7_SEC5_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR7_SEC6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR7_SEC6_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR7_SEC6_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR7_SEC7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR7_SEC7_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR7_SEC7_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR7_SEC8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR7_SEC8_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR7_SEC8_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR7_SEC9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR7_SEC9_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR7_SEC9_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR7_SEC10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR7_SEC10_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR7_SEC10_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR7_SEC11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR7_SEC11_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR7_SEC11_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR7_SEC12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR7_SEC12_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR7_SEC12_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR7_SEC13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR7_SEC13_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR7_SEC13_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR7_SEC14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR7_SEC14_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR7_SEC14_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR7_SEC15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR7_SEC15_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR7_SEC15_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR7_SEC16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR7_SEC16_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR7_SEC16_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR7_SEC17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR7_SEC17_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR7_SEC17_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR7_SEC18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR7_SEC18_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR7_SEC18_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR7_SEC19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR7_SEC19_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR7_SEC19_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR7_SEC20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR7_SEC20_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR7_SEC20_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR7_SEC21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR7_SEC21_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR7_SEC21_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR7_SEC22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR7_SEC22_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR7_SEC22_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR7_SEC23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR7_SEC23_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR7_SEC23_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR7_SEC24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR7_SEC24_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR7_SEC24_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR7_SEC25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR7_SEC25_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR7_SEC25_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR7_SEC26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR7_SEC26_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR7_SEC26_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR7_SEC27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR7_SEC27_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR7_SEC27_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR7_SEC28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR7_SEC28_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR7_SEC28_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR7_SEC29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR7_SEC29_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR7_SEC29_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR7_SEC30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR7_SEC30_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR7_SEC30_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR7_SEC31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR7_SEC31_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR7_SEC31_B_0x1 = 1;

    /** @brief GTZC1 SRAM1 MPCBB security configuration for super-block 8	register */
    using GTZC1_MPCBB1_SECCFGR8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x120, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR8_SEC0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR8_SEC0_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR8_SEC0_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR8_SEC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR8_SEC1_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR8_SEC1_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR8_SEC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR8_SEC2_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR8_SEC2_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR8_SEC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR8_SEC3_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR8_SEC3_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR8_SEC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR8_SEC4_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR8_SEC4_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR8_SEC5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR8_SEC5_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR8_SEC5_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR8_SEC6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR8_SEC6_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR8_SEC6_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR8_SEC7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR8_SEC7_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR8_SEC7_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR8_SEC8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR8_SEC8_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR8_SEC8_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR8_SEC9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR8_SEC9_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR8_SEC9_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR8_SEC10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR8_SEC10_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR8_SEC10_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR8_SEC11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR8_SEC11_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR8_SEC11_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR8_SEC12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR8_SEC12_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR8_SEC12_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR8_SEC13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR8_SEC13_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR8_SEC13_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR8_SEC14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR8_SEC14_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR8_SEC14_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR8_SEC15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR8_SEC15_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR8_SEC15_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR8_SEC16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR8_SEC16_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR8_SEC16_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR8_SEC17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR8_SEC17_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR8_SEC17_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR8_SEC18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR8_SEC18_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR8_SEC18_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR8_SEC19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR8_SEC19_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR8_SEC19_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR8_SEC20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR8_SEC20_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR8_SEC20_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR8_SEC21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR8_SEC21_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR8_SEC21_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR8_SEC22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR8_SEC22_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR8_SEC22_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR8_SEC23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR8_SEC23_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR8_SEC23_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR8_SEC24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR8_SEC24_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR8_SEC24_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR8_SEC25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR8_SEC25_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR8_SEC25_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR8_SEC26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR8_SEC26_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR8_SEC26_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR8_SEC27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR8_SEC27_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR8_SEC27_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR8_SEC28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR8_SEC28_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR8_SEC28_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR8_SEC29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR8_SEC29_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR8_SEC29_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR8_SEC30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR8_SEC30_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR8_SEC30_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR8_SEC31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR8_SEC31_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR8_SEC31_B_0x1 = 1;

    /** @brief GTZC1 SRAM1 MPCBB security configuration for super-block 9	register */
    using GTZC1_MPCBB1_SECCFGR9 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x124, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR9_SEC0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR9_SEC0_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR9_SEC0_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR9_SEC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR9_SEC1_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR9_SEC1_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR9_SEC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR9_SEC2_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR9_SEC2_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR9_SEC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR9_SEC3_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR9_SEC3_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR9_SEC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR9_SEC4_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR9_SEC4_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR9_SEC5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR9_SEC5_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR9_SEC5_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR9_SEC6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR9_SEC6_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR9_SEC6_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR9_SEC7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR9_SEC7_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR9_SEC7_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR9_SEC8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR9_SEC8_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR9_SEC8_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR9_SEC9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR9_SEC9_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR9_SEC9_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR9_SEC10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR9_SEC10_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR9_SEC10_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR9_SEC11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR9_SEC11_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR9_SEC11_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR9_SEC12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR9_SEC12_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR9_SEC12_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR9_SEC13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR9_SEC13_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR9_SEC13_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR9_SEC14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR9_SEC14_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR9_SEC14_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR9_SEC15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR9_SEC15_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR9_SEC15_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR9_SEC16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR9_SEC16_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR9_SEC16_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR9_SEC17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR9_SEC17_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR9_SEC17_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR9_SEC18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR9_SEC18_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR9_SEC18_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR9_SEC19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR9_SEC19_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR9_SEC19_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR9_SEC20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR9_SEC20_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR9_SEC20_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR9_SEC21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR9_SEC21_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR9_SEC21_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR9_SEC22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR9_SEC22_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR9_SEC22_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR9_SEC23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR9_SEC23_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR9_SEC23_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR9_SEC24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR9_SEC24_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR9_SEC24_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR9_SEC25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR9_SEC25_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR9_SEC25_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR9_SEC26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR9_SEC26_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR9_SEC26_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR9_SEC27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR9_SEC27_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR9_SEC27_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR9_SEC28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR9_SEC28_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR9_SEC28_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR9_SEC29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR9_SEC29_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR9_SEC29_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR9_SEC30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR9_SEC30_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR9_SEC30_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR9_SEC31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR9_SEC31_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR9_SEC31_B_0x1 = 1;

    /** @brief GTZC1 SRAM1 MPCBB security configuration for super-block 10	register */
    using GTZC1_MPCBB1_SECCFGR10 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x128, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR10_SEC0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR10_SEC0_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR10_SEC0_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR10_SEC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR10_SEC1_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR10_SEC1_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR10_SEC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR10_SEC2_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR10_SEC2_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR10_SEC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR10_SEC3_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR10_SEC3_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR10_SEC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR10_SEC4_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR10_SEC4_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR10_SEC5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR10_SEC5_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR10_SEC5_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR10_SEC6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR10_SEC6_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR10_SEC6_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR10_SEC7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR10_SEC7_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR10_SEC7_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR10_SEC8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR10_SEC8_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR10_SEC8_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR10_SEC9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR10_SEC9_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR10_SEC9_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR10_SEC10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR10_SEC10_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR10_SEC10_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR10_SEC11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR10_SEC11_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR10_SEC11_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR10_SEC12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR10_SEC12_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR10_SEC12_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR10_SEC13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR10_SEC13_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR10_SEC13_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR10_SEC14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR10_SEC14_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR10_SEC14_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR10_SEC15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR10_SEC15_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR10_SEC15_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR10_SEC16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR10_SEC16_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR10_SEC16_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR10_SEC17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR10_SEC17_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR10_SEC17_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR10_SEC18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR10_SEC18_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR10_SEC18_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR10_SEC19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR10_SEC19_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR10_SEC19_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR10_SEC20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR10_SEC20_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR10_SEC20_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR10_SEC21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR10_SEC21_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR10_SEC21_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR10_SEC22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR10_SEC22_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR10_SEC22_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR10_SEC23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR10_SEC23_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR10_SEC23_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR10_SEC24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR10_SEC24_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR10_SEC24_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR10_SEC25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR10_SEC25_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR10_SEC25_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR10_SEC26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR10_SEC26_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR10_SEC26_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR10_SEC27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR10_SEC27_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR10_SEC27_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR10_SEC28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR10_SEC28_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR10_SEC28_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR10_SEC29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR10_SEC29_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR10_SEC29_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR10_SEC30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR10_SEC30_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR10_SEC30_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR10_SEC31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR10_SEC31_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR10_SEC31_B_0x1 = 1;

    /** @brief GTZC1 SRAM1 MPCBB security configuration for super-block 11	register */
    using GTZC1_MPCBB1_SECCFGR11 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x12C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR11_SEC0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR11_SEC0_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR11_SEC0_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR11_SEC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR11_SEC1_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR11_SEC1_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR11_SEC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR11_SEC2_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR11_SEC2_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR11_SEC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR11_SEC3_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR11_SEC3_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR11_SEC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR11_SEC4_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR11_SEC4_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR11_SEC5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR11_SEC5_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR11_SEC5_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR11_SEC6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR11_SEC6_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR11_SEC6_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR11_SEC7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR11_SEC7_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR11_SEC7_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR11_SEC8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR11_SEC8_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR11_SEC8_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR11_SEC9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR11_SEC9_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR11_SEC9_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR11_SEC10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR11_SEC10_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR11_SEC10_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR11_SEC11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR11_SEC11_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR11_SEC11_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR11_SEC12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR11_SEC12_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR11_SEC12_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR11_SEC13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR11_SEC13_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR11_SEC13_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR11_SEC14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR11_SEC14_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR11_SEC14_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR11_SEC15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR11_SEC15_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR11_SEC15_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR11_SEC16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR11_SEC16_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR11_SEC16_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR11_SEC17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR11_SEC17_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR11_SEC17_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR11_SEC18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR11_SEC18_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR11_SEC18_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR11_SEC19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR11_SEC19_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR11_SEC19_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR11_SEC20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR11_SEC20_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR11_SEC20_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR11_SEC21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR11_SEC21_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR11_SEC21_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR11_SEC22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR11_SEC22_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR11_SEC22_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR11_SEC23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR11_SEC23_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR11_SEC23_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR11_SEC24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR11_SEC24_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR11_SEC24_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR11_SEC25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR11_SEC25_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR11_SEC25_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR11_SEC26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR11_SEC26_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR11_SEC26_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR11_SEC27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR11_SEC27_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR11_SEC27_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR11_SEC28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR11_SEC28_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR11_SEC28_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR11_SEC29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR11_SEC29_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR11_SEC29_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR11_SEC30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR11_SEC30_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR11_SEC30_B_0x1 = 1;

    /** @brief Security configuration for block i */
    using GTZC1_MPCBB1_SECCFGR11_SEC31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block i, belonging to super-block x. (value: 0)
     *          - B_0x1: Secure access only to block i, belonging to super-block x. (value: 1)
     */
        /** @brief Nonsecure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR11_SEC31_B_0x0 = 0;
        /** @brief Secure access only to block i, belonging to super-block x. */
    constexpr std::uint32_t GTZC1_MPCBB1_SECCFGR11_SEC31_B_0x1 = 1;

    /** @brief GTZC1 SRAM1 MPCBB privileged configuration for super-block 0	register */
    using GTZC1_MPCBB1_PRIVCFGR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x200, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR0_PRIV0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR0_PRIV0_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR0_PRIV0_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR0_PRIV1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR0_PRIV1_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR0_PRIV1_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR0_PRIV2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR0_PRIV2_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR0_PRIV2_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR0_PRIV3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR0_PRIV3_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR0_PRIV3_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR0_PRIV4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR0_PRIV4_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR0_PRIV4_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR0_PRIV5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR0_PRIV5_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR0_PRIV5_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR0_PRIV6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR0_PRIV6_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR0_PRIV6_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR0_PRIV7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR0_PRIV7_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR0_PRIV7_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR0_PRIV8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR0_PRIV8_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR0_PRIV8_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR0_PRIV9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR0_PRIV9_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR0_PRIV9_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR0_PRIV10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR0_PRIV10_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR0_PRIV10_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR0_PRIV11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR0_PRIV11_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR0_PRIV11_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR0_PRIV12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR0_PRIV12_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR0_PRIV12_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR0_PRIV13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR0_PRIV13_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR0_PRIV13_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR0_PRIV14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR0_PRIV14_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR0_PRIV14_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR0_PRIV15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR0_PRIV15_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR0_PRIV15_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR0_PRIV16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR0_PRIV16_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR0_PRIV16_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR0_PRIV17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR0_PRIV17_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR0_PRIV17_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR0_PRIV18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR0_PRIV18_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR0_PRIV18_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR0_PRIV19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR0_PRIV19_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR0_PRIV19_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR0_PRIV20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR0_PRIV20_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR0_PRIV20_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR0_PRIV21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR0_PRIV21_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR0_PRIV21_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR0_PRIV22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR0_PRIV22_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR0_PRIV22_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR0_PRIV23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR0_PRIV23_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR0_PRIV23_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR0_PRIV24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR0_PRIV24_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR0_PRIV24_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR0_PRIV25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR0_PRIV25_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR0_PRIV25_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR0_PRIV26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR0_PRIV26_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR0_PRIV26_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR0_PRIV27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR0_PRIV27_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR0_PRIV27_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR0_PRIV28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR0_PRIV28_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR0_PRIV28_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR0_PRIV29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR0_PRIV29_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR0_PRIV29_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR0_PRIV30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR0_PRIV30_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR0_PRIV30_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR0_PRIV31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR0_PRIV31_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR0_PRIV31_B_0x1 = 1;

    /** @brief GTZC1 SRAM1 MPCBB privileged configuration for super-block 1	register */
    using GTZC1_MPCBB1_PRIVCFGR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x204, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR1_PRIV0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR1_PRIV0_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR1_PRIV0_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR1_PRIV1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR1_PRIV1_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR1_PRIV1_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR1_PRIV2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR1_PRIV2_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR1_PRIV2_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR1_PRIV3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR1_PRIV3_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR1_PRIV3_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR1_PRIV4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR1_PRIV4_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR1_PRIV4_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR1_PRIV5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR1_PRIV5_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR1_PRIV5_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR1_PRIV6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR1_PRIV6_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR1_PRIV6_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR1_PRIV7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR1_PRIV7_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR1_PRIV7_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR1_PRIV8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR1_PRIV8_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR1_PRIV8_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR1_PRIV9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR1_PRIV9_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR1_PRIV9_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR1_PRIV10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR1_PRIV10_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR1_PRIV10_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR1_PRIV11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR1_PRIV11_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR1_PRIV11_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR1_PRIV12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR1_PRIV12_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR1_PRIV12_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR1_PRIV13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR1_PRIV13_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR1_PRIV13_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR1_PRIV14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR1_PRIV14_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR1_PRIV14_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR1_PRIV15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR1_PRIV15_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR1_PRIV15_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR1_PRIV16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR1_PRIV16_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR1_PRIV16_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR1_PRIV17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR1_PRIV17_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR1_PRIV17_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR1_PRIV18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR1_PRIV18_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR1_PRIV18_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR1_PRIV19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR1_PRIV19_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR1_PRIV19_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR1_PRIV20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR1_PRIV20_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR1_PRIV20_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR1_PRIV21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR1_PRIV21_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR1_PRIV21_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR1_PRIV22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR1_PRIV22_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR1_PRIV22_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR1_PRIV23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR1_PRIV23_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR1_PRIV23_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR1_PRIV24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR1_PRIV24_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR1_PRIV24_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR1_PRIV25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR1_PRIV25_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR1_PRIV25_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR1_PRIV26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR1_PRIV26_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR1_PRIV26_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR1_PRIV27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR1_PRIV27_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR1_PRIV27_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR1_PRIV28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR1_PRIV28_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR1_PRIV28_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR1_PRIV29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR1_PRIV29_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR1_PRIV29_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR1_PRIV30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR1_PRIV30_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR1_PRIV30_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR1_PRIV31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR1_PRIV31_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR1_PRIV31_B_0x1 = 1;

    /** @brief GTZC1 SRAM1 MPCBB privileged configuration for super-block 2	register */
    using GTZC1_MPCBB1_PRIVCFGR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x208, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR2_PRIV0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR2_PRIV0_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR2_PRIV0_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR2_PRIV1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR2_PRIV1_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR2_PRIV1_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR2_PRIV2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR2_PRIV2_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR2_PRIV2_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR2_PRIV3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR2_PRIV3_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR2_PRIV3_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR2_PRIV4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR2_PRIV4_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR2_PRIV4_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR2_PRIV5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR2_PRIV5_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR2_PRIV5_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR2_PRIV6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR2_PRIV6_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR2_PRIV6_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR2_PRIV7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR2_PRIV7_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR2_PRIV7_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR2_PRIV8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR2_PRIV8_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR2_PRIV8_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR2_PRIV9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR2_PRIV9_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR2_PRIV9_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR2_PRIV10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR2_PRIV10_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR2_PRIV10_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR2_PRIV11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR2_PRIV11_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR2_PRIV11_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR2_PRIV12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR2_PRIV12_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR2_PRIV12_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR2_PRIV13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR2_PRIV13_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR2_PRIV13_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR2_PRIV14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR2_PRIV14_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR2_PRIV14_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR2_PRIV15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR2_PRIV15_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR2_PRIV15_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR2_PRIV16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR2_PRIV16_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR2_PRIV16_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR2_PRIV17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR2_PRIV17_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR2_PRIV17_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR2_PRIV18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR2_PRIV18_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR2_PRIV18_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR2_PRIV19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR2_PRIV19_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR2_PRIV19_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR2_PRIV20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR2_PRIV20_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR2_PRIV20_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR2_PRIV21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR2_PRIV21_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR2_PRIV21_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR2_PRIV22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR2_PRIV22_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR2_PRIV22_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR2_PRIV23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR2_PRIV23_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR2_PRIV23_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR2_PRIV24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR2_PRIV24_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR2_PRIV24_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR2_PRIV25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR2_PRIV25_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR2_PRIV25_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR2_PRIV26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR2_PRIV26_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR2_PRIV26_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR2_PRIV27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR2_PRIV27_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR2_PRIV27_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR2_PRIV28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR2_PRIV28_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR2_PRIV28_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR2_PRIV29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR2_PRIV29_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR2_PRIV29_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR2_PRIV30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR2_PRIV30_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR2_PRIV30_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR2_PRIV31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR2_PRIV31_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR2_PRIV31_B_0x1 = 1;

    /** @brief GTZC1 SRAM1 MPCBB privileged configuration for super-block 3	register */
    using GTZC1_MPCBB1_PRIVCFGR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR3_PRIV0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR3_PRIV0_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR3_PRIV0_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR3_PRIV1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR3_PRIV1_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR3_PRIV1_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR3_PRIV2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR3_PRIV2_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR3_PRIV2_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR3_PRIV3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR3_PRIV3_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR3_PRIV3_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR3_PRIV4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR3_PRIV4_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR3_PRIV4_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR3_PRIV5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR3_PRIV5_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR3_PRIV5_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR3_PRIV6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR3_PRIV6_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR3_PRIV6_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR3_PRIV7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR3_PRIV7_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR3_PRIV7_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR3_PRIV8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR3_PRIV8_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR3_PRIV8_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR3_PRIV9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR3_PRIV9_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR3_PRIV9_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR3_PRIV10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR3_PRIV10_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR3_PRIV10_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR3_PRIV11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR3_PRIV11_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR3_PRIV11_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR3_PRIV12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR3_PRIV12_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR3_PRIV12_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR3_PRIV13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR3_PRIV13_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR3_PRIV13_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR3_PRIV14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR3_PRIV14_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR3_PRIV14_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR3_PRIV15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR3_PRIV15_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR3_PRIV15_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR3_PRIV16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR3_PRIV16_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR3_PRIV16_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR3_PRIV17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR3_PRIV17_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR3_PRIV17_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR3_PRIV18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR3_PRIV18_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR3_PRIV18_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR3_PRIV19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR3_PRIV19_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR3_PRIV19_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR3_PRIV20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR3_PRIV20_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR3_PRIV20_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR3_PRIV21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR3_PRIV21_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR3_PRIV21_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR3_PRIV22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR3_PRIV22_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR3_PRIV22_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR3_PRIV23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR3_PRIV23_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR3_PRIV23_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR3_PRIV24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR3_PRIV24_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR3_PRIV24_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR3_PRIV25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR3_PRIV25_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR3_PRIV25_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR3_PRIV26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR3_PRIV26_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR3_PRIV26_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR3_PRIV27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR3_PRIV27_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR3_PRIV27_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR3_PRIV28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR3_PRIV28_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR3_PRIV28_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR3_PRIV29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR3_PRIV29_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR3_PRIV29_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR3_PRIV30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR3_PRIV30_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR3_PRIV30_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR3_PRIV31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR3_PRIV31_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR3_PRIV31_B_0x1 = 1;

    /** @brief GTZC1 SRAM1 MPCBB privileged configuration for super-block 4	register */
    using GTZC1_MPCBB1_PRIVCFGR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x210, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR4_PRIV0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR4_PRIV0_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR4_PRIV0_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR4_PRIV1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR4_PRIV1_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR4_PRIV1_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR4_PRIV2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR4_PRIV2_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR4_PRIV2_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR4_PRIV3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR4_PRIV3_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR4_PRIV3_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR4_PRIV4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR4_PRIV4_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR4_PRIV4_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR4_PRIV5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR4_PRIV5_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR4_PRIV5_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR4_PRIV6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR4_PRIV6_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR4_PRIV6_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR4_PRIV7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR4_PRIV7_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR4_PRIV7_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR4_PRIV8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR4_PRIV8_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR4_PRIV8_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR4_PRIV9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR4_PRIV9_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR4_PRIV9_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR4_PRIV10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR4_PRIV10_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR4_PRIV10_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR4_PRIV11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR4_PRIV11_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR4_PRIV11_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR4_PRIV12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR4_PRIV12_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR4_PRIV12_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR4_PRIV13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR4_PRIV13_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR4_PRIV13_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR4_PRIV14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR4_PRIV14_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR4_PRIV14_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR4_PRIV15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR4_PRIV15_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR4_PRIV15_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR4_PRIV16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR4_PRIV16_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR4_PRIV16_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR4_PRIV17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR4_PRIV17_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR4_PRIV17_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR4_PRIV18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR4_PRIV18_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR4_PRIV18_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR4_PRIV19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR4_PRIV19_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR4_PRIV19_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR4_PRIV20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR4_PRIV20_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR4_PRIV20_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR4_PRIV21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR4_PRIV21_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR4_PRIV21_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR4_PRIV22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR4_PRIV22_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR4_PRIV22_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR4_PRIV23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR4_PRIV23_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR4_PRIV23_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR4_PRIV24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR4_PRIV24_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR4_PRIV24_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR4_PRIV25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR4_PRIV25_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR4_PRIV25_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR4_PRIV26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR4_PRIV26_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR4_PRIV26_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR4_PRIV27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR4_PRIV27_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR4_PRIV27_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR4_PRIV28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR4_PRIV28_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR4_PRIV28_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR4_PRIV29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR4_PRIV29_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR4_PRIV29_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR4_PRIV30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR4_PRIV30_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR4_PRIV30_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR4_PRIV31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR4_PRIV31_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR4_PRIV31_B_0x1 = 1;

    /** @brief GTZC1 SRAM1 MPCBB privileged configuration for super-block 5	register */
    using GTZC1_MPCBB1_PRIVCFGR5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x214, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR5_PRIV0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR5_PRIV0_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR5_PRIV0_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR5_PRIV1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR5_PRIV1_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR5_PRIV1_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR5_PRIV2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR5_PRIV2_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR5_PRIV2_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR5_PRIV3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR5_PRIV3_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR5_PRIV3_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR5_PRIV4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR5_PRIV4_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR5_PRIV4_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR5_PRIV5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR5_PRIV5_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR5_PRIV5_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR5_PRIV6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR5_PRIV6_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR5_PRIV6_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR5_PRIV7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR5_PRIV7_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR5_PRIV7_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR5_PRIV8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR5_PRIV8_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR5_PRIV8_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR5_PRIV9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR5_PRIV9_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR5_PRIV9_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR5_PRIV10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR5_PRIV10_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR5_PRIV10_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR5_PRIV11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR5_PRIV11_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR5_PRIV11_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR5_PRIV12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR5_PRIV12_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR5_PRIV12_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR5_PRIV13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR5_PRIV13_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR5_PRIV13_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR5_PRIV14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR5_PRIV14_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR5_PRIV14_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR5_PRIV15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR5_PRIV15_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR5_PRIV15_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR5_PRIV16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR5_PRIV16_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR5_PRIV16_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR5_PRIV17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR5_PRIV17_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR5_PRIV17_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR5_PRIV18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR5_PRIV18_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR5_PRIV18_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR5_PRIV19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR5_PRIV19_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR5_PRIV19_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR5_PRIV20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR5_PRIV20_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR5_PRIV20_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR5_PRIV21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR5_PRIV21_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR5_PRIV21_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR5_PRIV22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR5_PRIV22_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR5_PRIV22_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR5_PRIV23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR5_PRIV23_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR5_PRIV23_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR5_PRIV24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR5_PRIV24_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR5_PRIV24_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR5_PRIV25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR5_PRIV25_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR5_PRIV25_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR5_PRIV26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR5_PRIV26_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR5_PRIV26_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR5_PRIV27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR5_PRIV27_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR5_PRIV27_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR5_PRIV28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR5_PRIV28_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR5_PRIV28_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR5_PRIV29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR5_PRIV29_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR5_PRIV29_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR5_PRIV30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR5_PRIV30_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR5_PRIV30_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR5_PRIV31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR5_PRIV31_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR5_PRIV31_B_0x1 = 1;

    /** @brief GTZC1 SRAM1 MPCBB privileged configuration for super-block 6	register */
    using GTZC1_MPCBB1_PRIVCFGR6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x218, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR6_PRIV0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR6_PRIV0_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR6_PRIV0_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR6_PRIV1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR6_PRIV1_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR6_PRIV1_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR6_PRIV2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR6_PRIV2_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR6_PRIV2_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR6_PRIV3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR6_PRIV3_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR6_PRIV3_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR6_PRIV4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR6_PRIV4_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR6_PRIV4_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR6_PRIV5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR6_PRIV5_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR6_PRIV5_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR6_PRIV6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR6_PRIV6_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR6_PRIV6_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR6_PRIV7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR6_PRIV7_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR6_PRIV7_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR6_PRIV8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR6_PRIV8_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR6_PRIV8_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR6_PRIV9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR6_PRIV9_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR6_PRIV9_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR6_PRIV10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR6_PRIV10_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR6_PRIV10_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR6_PRIV11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR6_PRIV11_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR6_PRIV11_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR6_PRIV12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR6_PRIV12_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR6_PRIV12_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR6_PRIV13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR6_PRIV13_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR6_PRIV13_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR6_PRIV14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR6_PRIV14_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR6_PRIV14_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR6_PRIV15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR6_PRIV15_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR6_PRIV15_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR6_PRIV16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR6_PRIV16_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR6_PRIV16_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR6_PRIV17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR6_PRIV17_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR6_PRIV17_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR6_PRIV18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR6_PRIV18_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR6_PRIV18_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR6_PRIV19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR6_PRIV19_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR6_PRIV19_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR6_PRIV20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR6_PRIV20_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR6_PRIV20_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR6_PRIV21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR6_PRIV21_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR6_PRIV21_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR6_PRIV22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR6_PRIV22_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR6_PRIV22_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR6_PRIV23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR6_PRIV23_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR6_PRIV23_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR6_PRIV24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR6_PRIV24_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR6_PRIV24_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR6_PRIV25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR6_PRIV25_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR6_PRIV25_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR6_PRIV26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR6_PRIV26_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR6_PRIV26_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR6_PRIV27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR6_PRIV27_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR6_PRIV27_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR6_PRIV28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR6_PRIV28_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR6_PRIV28_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR6_PRIV29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR6_PRIV29_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR6_PRIV29_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR6_PRIV30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR6_PRIV30_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR6_PRIV30_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR6_PRIV31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR6_PRIV31_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR6_PRIV31_B_0x1 = 1;

    /** @brief GTZC1 SRAM1 MPCBB privileged configuration for super-block 7	register */
    using GTZC1_MPCBB1_PRIVCFGR7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x21C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR7_PRIV0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR7_PRIV0_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR7_PRIV0_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR7_PRIV1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR7_PRIV1_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR7_PRIV1_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR7_PRIV2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR7_PRIV2_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR7_PRIV2_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR7_PRIV3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR7_PRIV3_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR7_PRIV3_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR7_PRIV4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR7_PRIV4_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR7_PRIV4_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR7_PRIV5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR7_PRIV5_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR7_PRIV5_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR7_PRIV6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR7_PRIV6_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR7_PRIV6_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR7_PRIV7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR7_PRIV7_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR7_PRIV7_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR7_PRIV8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR7_PRIV8_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR7_PRIV8_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR7_PRIV9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR7_PRIV9_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR7_PRIV9_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR7_PRIV10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR7_PRIV10_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR7_PRIV10_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR7_PRIV11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR7_PRIV11_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR7_PRIV11_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR7_PRIV12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR7_PRIV12_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR7_PRIV12_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR7_PRIV13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR7_PRIV13_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR7_PRIV13_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR7_PRIV14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR7_PRIV14_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR7_PRIV14_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR7_PRIV15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR7_PRIV15_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR7_PRIV15_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR7_PRIV16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR7_PRIV16_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR7_PRIV16_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR7_PRIV17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR7_PRIV17_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR7_PRIV17_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR7_PRIV18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR7_PRIV18_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR7_PRIV18_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR7_PRIV19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR7_PRIV19_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR7_PRIV19_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR7_PRIV20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR7_PRIV20_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR7_PRIV20_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR7_PRIV21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR7_PRIV21_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR7_PRIV21_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR7_PRIV22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR7_PRIV22_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR7_PRIV22_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR7_PRIV23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR7_PRIV23_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR7_PRIV23_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR7_PRIV24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR7_PRIV24_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR7_PRIV24_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR7_PRIV25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR7_PRIV25_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR7_PRIV25_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR7_PRIV26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR7_PRIV26_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR7_PRIV26_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR7_PRIV27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR7_PRIV27_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR7_PRIV27_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR7_PRIV28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR7_PRIV28_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR7_PRIV28_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR7_PRIV29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR7_PRIV29_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR7_PRIV29_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR7_PRIV30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR7_PRIV30_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR7_PRIV30_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR7_PRIV31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR7_PRIV31_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR7_PRIV31_B_0x1 = 1;

    /** @brief GTZC1 SRAM1 MPCBB privileged configuration for super-block 8	register */
    using GTZC1_MPCBB1_PRIVCFGR8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x220, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR8_PRIV0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR8_PRIV0_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR8_PRIV0_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR8_PRIV1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR8_PRIV1_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR8_PRIV1_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR8_PRIV2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR8_PRIV2_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR8_PRIV2_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR8_PRIV3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR8_PRIV3_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR8_PRIV3_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR8_PRIV4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR8_PRIV4_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR8_PRIV4_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR8_PRIV5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR8_PRIV5_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR8_PRIV5_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR8_PRIV6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR8_PRIV6_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR8_PRIV6_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR8_PRIV7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR8_PRIV7_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR8_PRIV7_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR8_PRIV8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR8_PRIV8_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR8_PRIV8_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR8_PRIV9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR8_PRIV9_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR8_PRIV9_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR8_PRIV10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR8_PRIV10_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR8_PRIV10_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR8_PRIV11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR8_PRIV11_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR8_PRIV11_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR8_PRIV12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR8_PRIV12_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR8_PRIV12_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR8_PRIV13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR8_PRIV13_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR8_PRIV13_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR8_PRIV14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR8_PRIV14_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR8_PRIV14_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR8_PRIV15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR8_PRIV15_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR8_PRIV15_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR8_PRIV16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR8_PRIV16_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR8_PRIV16_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR8_PRIV17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR8_PRIV17_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR8_PRIV17_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR8_PRIV18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR8_PRIV18_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR8_PRIV18_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR8_PRIV19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR8_PRIV19_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR8_PRIV19_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR8_PRIV20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR8_PRIV20_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR8_PRIV20_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR8_PRIV21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR8_PRIV21_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR8_PRIV21_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR8_PRIV22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR8_PRIV22_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR8_PRIV22_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR8_PRIV23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR8_PRIV23_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR8_PRIV23_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR8_PRIV24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR8_PRIV24_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR8_PRIV24_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR8_PRIV25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR8_PRIV25_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR8_PRIV25_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR8_PRIV26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR8_PRIV26_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR8_PRIV26_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR8_PRIV27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR8_PRIV27_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR8_PRIV27_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR8_PRIV28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR8_PRIV28_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR8_PRIV28_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR8_PRIV29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR8_PRIV29_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR8_PRIV29_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR8_PRIV30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR8_PRIV30_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR8_PRIV30_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR8_PRIV31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR8_PRIV31_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR8_PRIV31_B_0x1 = 1;

    /** @brief GTZC1 SRAM1 MPCBB privileged configuration for super-block 9	register */
    using GTZC1_MPCBB1_PRIVCFGR9 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x224, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR9_PRIV0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR9_PRIV0_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR9_PRIV0_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR9_PRIV1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR9_PRIV1_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR9_PRIV1_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR9_PRIV2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR9_PRIV2_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR9_PRIV2_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR9_PRIV3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR9_PRIV3_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR9_PRIV3_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR9_PRIV4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR9_PRIV4_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR9_PRIV4_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR9_PRIV5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR9_PRIV5_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR9_PRIV5_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR9_PRIV6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR9_PRIV6_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR9_PRIV6_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR9_PRIV7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR9_PRIV7_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR9_PRIV7_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR9_PRIV8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR9_PRIV8_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR9_PRIV8_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR9_PRIV9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR9_PRIV9_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR9_PRIV9_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR9_PRIV10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR9_PRIV10_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR9_PRIV10_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR9_PRIV11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR9_PRIV11_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR9_PRIV11_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR9_PRIV12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR9_PRIV12_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR9_PRIV12_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR9_PRIV13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR9_PRIV13_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR9_PRIV13_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR9_PRIV14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR9_PRIV14_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR9_PRIV14_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR9_PRIV15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR9_PRIV15_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR9_PRIV15_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR9_PRIV16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR9_PRIV16_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR9_PRIV16_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR9_PRIV17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR9_PRIV17_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR9_PRIV17_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR9_PRIV18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR9_PRIV18_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR9_PRIV18_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR9_PRIV19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR9_PRIV19_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR9_PRIV19_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR9_PRIV20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR9_PRIV20_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR9_PRIV20_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR9_PRIV21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR9_PRIV21_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR9_PRIV21_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR9_PRIV22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR9_PRIV22_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR9_PRIV22_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR9_PRIV23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR9_PRIV23_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR9_PRIV23_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR9_PRIV24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR9_PRIV24_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR9_PRIV24_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR9_PRIV25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR9_PRIV25_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR9_PRIV25_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR9_PRIV26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR9_PRIV26_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR9_PRIV26_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR9_PRIV27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR9_PRIV27_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR9_PRIV27_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR9_PRIV28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR9_PRIV28_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR9_PRIV28_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR9_PRIV29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR9_PRIV29_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR9_PRIV29_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR9_PRIV30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR9_PRIV30_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR9_PRIV30_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR9_PRIV31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR9_PRIV31_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR9_PRIV31_B_0x1 = 1;

    /** @brief GTZC1 SRAM1 MPCBB privileged configuration for super-block 10	register */
    using GTZC1_MPCBB1_PRIVCFGR10 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x228, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR10_PRIV0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR10_PRIV0_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR10_PRIV0_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR10_PRIV1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR10_PRIV1_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR10_PRIV1_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR10_PRIV2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR10_PRIV2_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR10_PRIV2_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR10_PRIV3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR10_PRIV3_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR10_PRIV3_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR10_PRIV4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR10_PRIV4_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR10_PRIV4_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR10_PRIV5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR10_PRIV5_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR10_PRIV5_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR10_PRIV6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR10_PRIV6_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR10_PRIV6_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR10_PRIV7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR10_PRIV7_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR10_PRIV7_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR10_PRIV8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR10_PRIV8_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR10_PRIV8_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR10_PRIV9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR10_PRIV9_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR10_PRIV9_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR10_PRIV10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR10_PRIV10_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR10_PRIV10_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR10_PRIV11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR10_PRIV11_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR10_PRIV11_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR10_PRIV12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR10_PRIV12_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR10_PRIV12_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR10_PRIV13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR10_PRIV13_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR10_PRIV13_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR10_PRIV14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR10_PRIV14_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR10_PRIV14_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR10_PRIV15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR10_PRIV15_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR10_PRIV15_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR10_PRIV16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR10_PRIV16_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR10_PRIV16_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR10_PRIV17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR10_PRIV17_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR10_PRIV17_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR10_PRIV18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR10_PRIV18_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR10_PRIV18_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR10_PRIV19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR10_PRIV19_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR10_PRIV19_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR10_PRIV20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR10_PRIV20_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR10_PRIV20_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR10_PRIV21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR10_PRIV21_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR10_PRIV21_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR10_PRIV22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR10_PRIV22_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR10_PRIV22_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR10_PRIV23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR10_PRIV23_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR10_PRIV23_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR10_PRIV24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR10_PRIV24_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR10_PRIV24_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR10_PRIV25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR10_PRIV25_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR10_PRIV25_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR10_PRIV26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR10_PRIV26_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR10_PRIV26_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR10_PRIV27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR10_PRIV27_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR10_PRIV27_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR10_PRIV28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR10_PRIV28_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR10_PRIV28_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR10_PRIV29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR10_PRIV29_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR10_PRIV29_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR10_PRIV30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR10_PRIV30_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR10_PRIV30_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR10_PRIV31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR10_PRIV31_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR10_PRIV31_B_0x1 = 1;

    /** @brief GTZC1 SRAM1 MPCBB privileged configuration for super-block 11	register */
    using GTZC1_MPCBB1_PRIVCFGR11 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x22C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR11_PRIV0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR11_PRIV0_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR11_PRIV0_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR11_PRIV1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR11_PRIV1_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR11_PRIV1_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR11_PRIV2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR11_PRIV2_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR11_PRIV2_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR11_PRIV3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR11_PRIV3_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR11_PRIV3_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR11_PRIV4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR11_PRIV4_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR11_PRIV4_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR11_PRIV5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR11_PRIV5_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR11_PRIV5_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR11_PRIV6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR11_PRIV6_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR11_PRIV6_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR11_PRIV7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR11_PRIV7_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR11_PRIV7_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR11_PRIV8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR11_PRIV8_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR11_PRIV8_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR11_PRIV9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR11_PRIV9_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR11_PRIV9_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR11_PRIV10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR11_PRIV10_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR11_PRIV10_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR11_PRIV11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR11_PRIV11_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR11_PRIV11_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR11_PRIV12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR11_PRIV12_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR11_PRIV12_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR11_PRIV13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR11_PRIV13_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR11_PRIV13_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR11_PRIV14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR11_PRIV14_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR11_PRIV14_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR11_PRIV15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR11_PRIV15_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR11_PRIV15_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR11_PRIV16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR11_PRIV16_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR11_PRIV16_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR11_PRIV17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR11_PRIV17_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR11_PRIV17_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR11_PRIV18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR11_PRIV18_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR11_PRIV18_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR11_PRIV19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR11_PRIV19_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR11_PRIV19_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR11_PRIV20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR11_PRIV20_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR11_PRIV20_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR11_PRIV21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR11_PRIV21_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR11_PRIV21_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR11_PRIV22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR11_PRIV22_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR11_PRIV22_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR11_PRIV23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR11_PRIV23_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR11_PRIV23_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR11_PRIV24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR11_PRIV24_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR11_PRIV24_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR11_PRIV25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR11_PRIV25_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR11_PRIV25_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR11_PRIV26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR11_PRIV26_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR11_PRIV26_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR11_PRIV27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR11_PRIV27_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR11_PRIV27_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR11_PRIV28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR11_PRIV28_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR11_PRIV28_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR11_PRIV29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR11_PRIV29_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR11_PRIV29_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR11_PRIV30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR11_PRIV30_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR11_PRIV30_B_0x1 = 1;

    /** @brief Privileged configuration for block i, belonging to super-block x */
    using GTZC1_MPCBB1_PRIVCFGR11_PRIV31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block i, belonging to super-block x (value: 0)
     *          - B_0x1: Only privileged access to block i, belonging to super-block x (value: 1)
     */
        /** @brief Privileged and unprivileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR11_PRIV31_B_0x0 = 0;
        /** @brief Only privileged access to block i, belonging to super-block x */
    constexpr std::uint32_t GTZC1_MPCBB1_PRIVCFGR11_PRIV31_B_0x1 = 1;

}

#endif
