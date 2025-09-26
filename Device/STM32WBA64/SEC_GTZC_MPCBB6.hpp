/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32WBA64_SEC_GTZC_MPCBB6_HPP
#define EMBEDDED_PP_STM32WBA64_SEC_GTZC_MPCBB6_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief GTZC_MPCBB6 address block description */
namespace STM32WBA64::SEC_GTZC_MPCBB6 {

    /** @brief GTZC1 MPCBB control register */
    using GTZC1_MPCBB_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Lock the control register of the MPCBB until next reset */
    using GTZC1_MPCBB_CR_GLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Control register not locked (value: 0)
     *          - B_0x1: Control register locked (value: 1)
     */
        /** @brief Control register not locked */
    constexpr std::uint32_t GTZC1_MPCBB_CR_GLOCK_B_0x0 = 0;
        /** @brief Control register locked */
    constexpr std::uint32_t GTZC1_MPCBB_CR_GLOCK_B_0x1 = 1;

    /** @brief SRAM clocks security state */
    using GTZC1_MPCBB_CR_INVSECSTATE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM clock is secured if a secure area exists in the MPCBB. (value: 0)
     *          - B_0x1: SRAM clock is Nonsecure even if a secure area exists in the MPCBB, and secure even if no secure block is set in the MPCBB. (value: 1)
     */
        /** @brief SRAM clock is secured if a secure area exists in the MPCBB. */
    constexpr std::uint32_t GTZC1_MPCBB_CR_INVSECSTATE_B_0x0 = 0;
        /** @brief SRAM clock is Nonsecure even if a secure area exists in the MPCBB, and secure even if no secure block is set in the MPCBB. */
    constexpr std::uint32_t GTZC1_MPCBB_CR_INVSECSTATE_B_0x1 = 1;

    /** @brief secure read/write illegal access disable */
    using GTZC1_MPCBB_CR_SRWILADIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: enabled, secure read/write acces not allowed on Nonsecure SRAM block (value: 0)
     *          - B_0x1: disabled, secure read/write access allowed on Nonsecure SRAM block (value: 1)
     */
        /** @brief enabled, secure read/write acces not allowed on Nonsecure SRAM block */
    constexpr std::uint32_t GTZC1_MPCBB_CR_SRWILADIS_B_0x0 = 0;
        /** @brief disabled, secure read/write access allowed on Nonsecure SRAM block */
    constexpr std::uint32_t GTZC1_MPCBB_CR_SRWILADIS_B_0x1 = 1;

    /** @brief GTZC1 MPCBB configuration lock register */
    using GTZC1_MPCBB_CFGLOCK = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security/privilege configuration lock superblock */
    using GTZC1_MPCBB_CFGLOCK_SPLCK0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GTZC1_MPCBB_SECCFGRn and GTZC1_MPCBB_PRIVCFGRn can be written. (value: 0)
     *          - B_0x1: Writes to GTZC1_MPCBB_SECCFGRn and GTZC1_MPCBB_PRIVCFGRn are ignored (value: 1)
     */
        /** @brief GTZC1_MPCBB_SECCFGRn and GTZC1_MPCBB_PRIVCFGRn can be written. */
    constexpr std::uint32_t GTZC1_MPCBB_CFGLOCK_SPLCK0_B_0x0 = 0;
        /** @brief Writes to GTZC1_MPCBB_SECCFGRn and GTZC1_MPCBB_PRIVCFGRn are ignored */
    constexpr std::uint32_t GTZC1_MPCBB_CFGLOCK_SPLCK0_B_0x1 = 1;

    /** @brief GTZC1 MPCBB security configuration for superblock 0 register */
    using GTZC1_MPCBB_SECCFGR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x100, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security configuration for block y (y = 0 to 31) in super block n */
    using GTZC1_MPCBB_SECCFGR0_SEC0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block y, belonging to super-block n. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Nonsecure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC0_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC0_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n */
    using GTZC1_MPCBB_SECCFGR0_SEC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block y, belonging to super-block n. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Nonsecure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC1_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC1_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n */
    using GTZC1_MPCBB_SECCFGR0_SEC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block y, belonging to super-block n. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Nonsecure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC2_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC2_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n */
    using GTZC1_MPCBB_SECCFGR0_SEC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block y, belonging to super-block n. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Nonsecure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC3_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC3_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n */
    using GTZC1_MPCBB_SECCFGR0_SEC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block y, belonging to super-block n. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Nonsecure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC4_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC4_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n */
    using GTZC1_MPCBB_SECCFGR0_SEC5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block y, belonging to super-block n. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Nonsecure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC5_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC5_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n */
    using GTZC1_MPCBB_SECCFGR0_SEC6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block y, belonging to super-block n. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Nonsecure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC6_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC6_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n */
    using GTZC1_MPCBB_SECCFGR0_SEC7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block y, belonging to super-block n. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Nonsecure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC7_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC7_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n */
    using GTZC1_MPCBB_SECCFGR0_SEC8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block y, belonging to super-block n. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Nonsecure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC8_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC8_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n */
    using GTZC1_MPCBB_SECCFGR0_SEC9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block y, belonging to super-block n. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Nonsecure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC9_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC9_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n */
    using GTZC1_MPCBB_SECCFGR0_SEC10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block y, belonging to super-block n. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Nonsecure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC10_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC10_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n */
    using GTZC1_MPCBB_SECCFGR0_SEC11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block y, belonging to super-block n. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Nonsecure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC11_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC11_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n */
    using GTZC1_MPCBB_SECCFGR0_SEC12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block y, belonging to super-block n. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Nonsecure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC12_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC12_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n */
    using GTZC1_MPCBB_SECCFGR0_SEC13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block y, belonging to super-block n. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Nonsecure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC13_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC13_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n */
    using GTZC1_MPCBB_SECCFGR0_SEC14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block y, belonging to super-block n. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Nonsecure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC14_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC14_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n */
    using GTZC1_MPCBB_SECCFGR0_SEC15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block y, belonging to super-block n. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Nonsecure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC15_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC15_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n */
    using GTZC1_MPCBB_SECCFGR0_SEC16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block y, belonging to super-block n. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Nonsecure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC16_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC16_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n */
    using GTZC1_MPCBB_SECCFGR0_SEC17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block y, belonging to super-block n. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Nonsecure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC17_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC17_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n */
    using GTZC1_MPCBB_SECCFGR0_SEC18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block y, belonging to super-block n. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Nonsecure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC18_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC18_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n */
    using GTZC1_MPCBB_SECCFGR0_SEC19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block y, belonging to super-block n. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Nonsecure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC19_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC19_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n */
    using GTZC1_MPCBB_SECCFGR0_SEC20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block y, belonging to super-block n. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Nonsecure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC20_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC20_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n */
    using GTZC1_MPCBB_SECCFGR0_SEC21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block y, belonging to super-block n. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Nonsecure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC21_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC21_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n */
    using GTZC1_MPCBB_SECCFGR0_SEC22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block y, belonging to super-block n. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Nonsecure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC22_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC22_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n */
    using GTZC1_MPCBB_SECCFGR0_SEC23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block y, belonging to super-block n. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Nonsecure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC23_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC23_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n */
    using GTZC1_MPCBB_SECCFGR0_SEC24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block y, belonging to super-block n. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Nonsecure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC24_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC24_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n */
    using GTZC1_MPCBB_SECCFGR0_SEC25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block y, belonging to super-block n. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Nonsecure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC25_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC25_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n */
    using GTZC1_MPCBB_SECCFGR0_SEC26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block y, belonging to super-block n. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Nonsecure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC26_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC26_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n */
    using GTZC1_MPCBB_SECCFGR0_SEC27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block y, belonging to super-block n. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Nonsecure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC27_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC27_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n */
    using GTZC1_MPCBB_SECCFGR0_SEC28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block y, belonging to super-block n. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Nonsecure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC28_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC28_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n */
    using GTZC1_MPCBB_SECCFGR0_SEC29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block y, belonging to super-block n. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Nonsecure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC29_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC29_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n */
    using GTZC1_MPCBB_SECCFGR0_SEC30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block y, belonging to super-block n. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Nonsecure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC30_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC30_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n */
    using GTZC1_MPCBB_SECCFGR0_SEC31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Nonsecure access only to block y, belonging to super-block n. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Nonsecure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC31_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC31_B_0x1 = 1;

    /** @brief GTZC1 MPCBB privileged configuration for superblock 0	register */
    using GTZC1_MPCBB_PRIVCFGR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x200, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. */
    using GTZC1_MPCBB_PRIVCFGR0_PRIV0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV0_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV0_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. */
    using GTZC1_MPCBB_PRIVCFGR0_PRIV1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV1_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV1_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. */
    using GTZC1_MPCBB_PRIVCFGR0_PRIV2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV2_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV2_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. */
    using GTZC1_MPCBB_PRIVCFGR0_PRIV3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV3_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV3_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. */
    using GTZC1_MPCBB_PRIVCFGR0_PRIV4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV4_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV4_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. */
    using GTZC1_MPCBB_PRIVCFGR0_PRIV5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV5_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV5_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. */
    using GTZC1_MPCBB_PRIVCFGR0_PRIV6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV6_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV6_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. */
    using GTZC1_MPCBB_PRIVCFGR0_PRIV7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV7_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV7_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. */
    using GTZC1_MPCBB_PRIVCFGR0_PRIV8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV8_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV8_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. */
    using GTZC1_MPCBB_PRIVCFGR0_PRIV9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV9_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV9_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. */
    using GTZC1_MPCBB_PRIVCFGR0_PRIV10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV10_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV10_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. */
    using GTZC1_MPCBB_PRIVCFGR0_PRIV11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV11_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV11_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. */
    using GTZC1_MPCBB_PRIVCFGR0_PRIV12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV12_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV12_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. */
    using GTZC1_MPCBB_PRIVCFGR0_PRIV13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV13_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV13_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. */
    using GTZC1_MPCBB_PRIVCFGR0_PRIV14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV14_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV14_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. */
    using GTZC1_MPCBB_PRIVCFGR0_PRIV15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV15_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV15_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. */
    using GTZC1_MPCBB_PRIVCFGR0_PRIV16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV16_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV16_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. */
    using GTZC1_MPCBB_PRIVCFGR0_PRIV17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV17_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV17_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. */
    using GTZC1_MPCBB_PRIVCFGR0_PRIV18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV18_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV18_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. */
    using GTZC1_MPCBB_PRIVCFGR0_PRIV19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV19_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV19_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. */
    using GTZC1_MPCBB_PRIVCFGR0_PRIV20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV20_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV20_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. */
    using GTZC1_MPCBB_PRIVCFGR0_PRIV21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV21_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV21_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. */
    using GTZC1_MPCBB_PRIVCFGR0_PRIV22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV22_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV22_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. */
    using GTZC1_MPCBB_PRIVCFGR0_PRIV23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV23_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV23_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. */
    using GTZC1_MPCBB_PRIVCFGR0_PRIV24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV24_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV24_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. */
    using GTZC1_MPCBB_PRIVCFGR0_PRIV25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV25_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV25_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. */
    using GTZC1_MPCBB_PRIVCFGR0_PRIV26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV26_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV26_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. */
    using GTZC1_MPCBB_PRIVCFGR0_PRIV27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV27_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV27_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. */
    using GTZC1_MPCBB_PRIVCFGR0_PRIV28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV28_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV28_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. */
    using GTZC1_MPCBB_PRIVCFGR0_PRIV29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV29_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV29_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. */
    using GTZC1_MPCBB_PRIVCFGR0_PRIV30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV30_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV30_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. */
    using GTZC1_MPCBB_PRIVCFGR0_PRIV31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV31_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV31_B_0x1 = 1;

}

#endif
