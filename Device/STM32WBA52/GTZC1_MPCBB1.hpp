/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32WBA52_GTZC1_MPCBB1_HPP
#define EMBEDDED_PP_STM32WBA52_GTZC1_MPCBB1_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief GTZC1_MPCBB1 address block description */
namespace STM32WBA52::GTZC1_MPCBB1 {

    /** @brief MPCBB control register */
    using GTZC1_MPCBB_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief lock the control register of the MPCBB until next reset; This bit is cleared by default and once set, it can not be reset until system reset. */
    using GTZC1_MPCBB_CR_GLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: control register not locked (value: 0)
     *          - B_0x1: control register locked (value: 1)
     */
        /** @brief control register not locked */
    constexpr std::uint32_t GTZC1_MPCBB_CR_GLOCK_B_0x0 = 0;
        /** @brief control register locked */
    constexpr std::uint32_t GTZC1_MPCBB_CR_GLOCK_B_0x1 = 1;

    /** @brief SRAM clocks security state; This bit is used to define the internal SRAM clocks control in RCC as secure or not. */
    using GTZC1_MPCBB_CR_INVSECSTATE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM clock is secured if a secure area exists in the MPCBB. It is non secure if there is no secure area. (value: 0)
     *          - B_0x1: SRAM clock is non-secure even if a secure area exists in the MPCBB, and secure even if no secure block is set in the MPCBB. (value: 1)
     */
        /** @brief SRAM clock is secured if a secure area exists in the MPCBB. It is non secure if there is no secure area. */
    constexpr std::uint32_t GTZC1_MPCBB_CR_INVSECSTATE_B_0x0 = 0;
        /** @brief SRAM clock is non-secure even if a secure area exists in the MPCBB, and secure even if no secure block is set in the MPCBB. */
    constexpr std::uint32_t GTZC1_MPCBB_CR_INVSECSTATE_B_0x1 = 1;

    /** @brief secure read/write illegal access disable; This bit disables the detection of an illegal access when a secure read/write transaction access a non-secure blocks of the block-based SRAM (secure fetch on non-secure block is always considered illegal). */
    using GTZC1_MPCBB_CR_SRWILADIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: enabled, secure read/write acces not allowed on non-secure SRAM block (value: 0)
     *          - B_0x1: disabled, secure read/write access allowed on non-secure SRAM block (value: 1)
     */
        /** @brief enabled, secure read/write acces not allowed on non-secure SRAM block */
    constexpr std::uint32_t GTZC1_MPCBB_CR_SRWILADIS_B_0x0 = 0;
        /** @brief disabled, secure read/write access allowed on non-secure SRAM block */
    constexpr std::uint32_t GTZC1_MPCBB_CR_SRWILADIS_B_0x1 = 1;

    /** @brief GTZC1 SRAMz MPCBB configuration lock register */
    using GTZC1_MPCBB_CFGLOCK = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security/privilege configuration lock super-block; This bit is set by software and can be cleared only by system reset.; note that bit [3:2] are reserved on sales type STM32WBA5xEx for MPCBB1. */
    using GTZC1_MPCBB_CFGLOCK_SPLCK0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GTZC1_MPCBB_SECCFGRn and GTZC1_MPCBB_PRIVCFGRn can be written. (value: 0)
     *          - B_0x1: Writes to GTZC1_MPCBB_SECCFGRn and GTZC1_MPCBB_PRIVCFGRn are ignored (value: 1)
     */
        /** @brief GTZC1_MPCBB_SECCFGRn and GTZC1_MPCBB_PRIVCFGRn can be written. */
    constexpr std::uint32_t GTZC1_MPCBB_CFGLOCK_SPLCK0_B_0x0 = 0;
        /** @brief Writes to GTZC1_MPCBB_SECCFGRn and GTZC1_MPCBB_PRIVCFGRn are ignored */
    constexpr std::uint32_t GTZC1_MPCBB_CFGLOCK_SPLCK0_B_0x1 = 1;

    /** @brief Security/privilege configuration lock super-block; This bit is set by software and can be cleared only by system reset.; note that bit [3:2] are reserved on sales type STM32WBA5xEx for MPCBB1. */
    using GTZC1_MPCBB_CFGLOCK_SPLCK1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GTZC1_MPCBB_SECCFGRn and GTZC1_MPCBB_PRIVCFGRn can be written. (value: 0)
     *          - B_0x1: Writes to GTZC1_MPCBB_SECCFGRn and GTZC1_MPCBB_PRIVCFGRn are ignored (value: 1)
     */
        /** @brief GTZC1_MPCBB_SECCFGRn and GTZC1_MPCBB_PRIVCFGRn can be written. */
    constexpr std::uint32_t GTZC1_MPCBB_CFGLOCK_SPLCK1_B_0x0 = 0;
        /** @brief Writes to GTZC1_MPCBB_SECCFGRn and GTZC1_MPCBB_PRIVCFGRn are ignored */
    constexpr std::uint32_t GTZC1_MPCBB_CFGLOCK_SPLCK1_B_0x1 = 1;

    /** @brief Security/privilege configuration lock super-block; This bit is set by software and can be cleared only by system reset.; note that bit [3:2] are reserved on sales type STM32WBA5xEx for MPCBB1. */
    using GTZC1_MPCBB_CFGLOCK_SPLCK2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GTZC1_MPCBB_SECCFGRn and GTZC1_MPCBB_PRIVCFGRn can be written. (value: 0)
     *          - B_0x1: Writes to GTZC1_MPCBB_SECCFGRn and GTZC1_MPCBB_PRIVCFGRn are ignored (value: 1)
     */
        /** @brief GTZC1_MPCBB_SECCFGRn and GTZC1_MPCBB_PRIVCFGRn can be written. */
    constexpr std::uint32_t GTZC1_MPCBB_CFGLOCK_SPLCK2_B_0x0 = 0;
        /** @brief Writes to GTZC1_MPCBB_SECCFGRn and GTZC1_MPCBB_PRIVCFGRn are ignored */
    constexpr std::uint32_t GTZC1_MPCBB_CFGLOCK_SPLCK2_B_0x1 = 1;

    /** @brief Security/privilege configuration lock super-block; This bit is set by software and can be cleared only by system reset.; note that bit [3:2] are reserved on sales type STM32WBA5xEx for MPCBB1. */
    using GTZC1_MPCBB_CFGLOCK_SPLCK3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GTZC1_MPCBB_SECCFGRn and GTZC1_MPCBB_PRIVCFGRn can be written. (value: 0)
     *          - B_0x1: Writes to GTZC1_MPCBB_SECCFGRn and GTZC1_MPCBB_PRIVCFGRn are ignored (value: 1)
     */
        /** @brief GTZC1_MPCBB_SECCFGRn and GTZC1_MPCBB_PRIVCFGRn can be written. */
    constexpr std::uint32_t GTZC1_MPCBB_CFGLOCK_SPLCK3_B_0x0 = 0;
        /** @brief Writes to GTZC1_MPCBB_SECCFGRn and GTZC1_MPCBB_PRIVCFGRn are ignored */
    constexpr std::uint32_t GTZC1_MPCBB_CFGLOCK_SPLCK3_B_0x1 = 1;

    /** @brief GTZC1 MPCBB security configuration for super-block 0 register */
    using GTZC1_MPCBB_SECCFGR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x100, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR0_SEC0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC0_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC0_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR0_SEC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC1_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC1_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR0_SEC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC2_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC2_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR0_SEC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC3_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC3_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR0_SEC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC4_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC4_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR0_SEC5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC5_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC5_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR0_SEC6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC6_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC6_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR0_SEC7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC7_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC7_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR0_SEC8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC8_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC8_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR0_SEC9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC9_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC9_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR0_SEC10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC10_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC10_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR0_SEC11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC11_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC11_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR0_SEC12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC12_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC12_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR0_SEC13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC13_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC13_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR0_SEC14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC14_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC14_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR0_SEC15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC15_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC15_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR0_SEC16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC16_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC16_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR0_SEC17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC17_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC17_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR0_SEC18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC18_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC18_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR0_SEC19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC19_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC19_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR0_SEC20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC20_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC20_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR0_SEC21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC21_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC21_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR0_SEC22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC22_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC22_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR0_SEC23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC23_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC23_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR0_SEC24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC24_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC24_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR0_SEC25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC25_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC25_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR0_SEC26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC26_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC26_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR0_SEC27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC27_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC27_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR0_SEC28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC28_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC28_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR0_SEC29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC29_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC29_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR0_SEC30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC30_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC30_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR0_SEC31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC31_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR0_SEC31_B_0x1 = 1;

    /** @brief GTZC1 MPCBB security configuration for super-block 1 register */
    using GTZC1_MPCBB_SECCFGR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x104, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR1_SEC0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR1_SEC0_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR1_SEC0_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR1_SEC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR1_SEC1_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR1_SEC1_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR1_SEC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR1_SEC2_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR1_SEC2_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR1_SEC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR1_SEC3_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR1_SEC3_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR1_SEC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR1_SEC4_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR1_SEC4_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR1_SEC5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR1_SEC5_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR1_SEC5_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR1_SEC6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR1_SEC6_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR1_SEC6_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR1_SEC7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR1_SEC7_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR1_SEC7_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR1_SEC8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR1_SEC8_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR1_SEC8_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR1_SEC9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR1_SEC9_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR1_SEC9_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR1_SEC10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR1_SEC10_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR1_SEC10_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR1_SEC11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR1_SEC11_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR1_SEC11_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR1_SEC12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR1_SEC12_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR1_SEC12_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR1_SEC13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR1_SEC13_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR1_SEC13_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR1_SEC14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR1_SEC14_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR1_SEC14_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR1_SEC15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR1_SEC15_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR1_SEC15_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR1_SEC16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR1_SEC16_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR1_SEC16_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR1_SEC17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR1_SEC17_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR1_SEC17_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR1_SEC18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR1_SEC18_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR1_SEC18_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR1_SEC19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR1_SEC19_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR1_SEC19_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR1_SEC20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR1_SEC20_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR1_SEC20_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR1_SEC21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR1_SEC21_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR1_SEC21_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR1_SEC22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR1_SEC22_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR1_SEC22_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR1_SEC23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR1_SEC23_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR1_SEC23_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR1_SEC24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR1_SEC24_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR1_SEC24_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR1_SEC25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR1_SEC25_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR1_SEC25_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR1_SEC26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR1_SEC26_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR1_SEC26_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR1_SEC27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR1_SEC27_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR1_SEC27_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR1_SEC28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR1_SEC28_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR1_SEC28_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR1_SEC29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR1_SEC29_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR1_SEC29_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR1_SEC30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR1_SEC30_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR1_SEC30_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR1_SEC31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR1_SEC31_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR1_SEC31_B_0x1 = 1;

    /** @brief GTZC1 MPCBB security configuration for super-block 2 register */
    using GTZC1_MPCBB_SECCFGR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x108, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR2_SEC0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR2_SEC0_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR2_SEC0_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR2_SEC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR2_SEC1_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR2_SEC1_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR2_SEC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR2_SEC2_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR2_SEC2_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR2_SEC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR2_SEC3_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR2_SEC3_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR2_SEC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR2_SEC4_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR2_SEC4_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR2_SEC5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR2_SEC5_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR2_SEC5_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR2_SEC6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR2_SEC6_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR2_SEC6_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR2_SEC7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR2_SEC7_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR2_SEC7_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR2_SEC8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR2_SEC8_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR2_SEC8_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR2_SEC9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR2_SEC9_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR2_SEC9_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR2_SEC10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR2_SEC10_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR2_SEC10_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR2_SEC11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR2_SEC11_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR2_SEC11_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR2_SEC12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR2_SEC12_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR2_SEC12_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR2_SEC13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR2_SEC13_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR2_SEC13_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR2_SEC14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR2_SEC14_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR2_SEC14_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR2_SEC15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR2_SEC15_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR2_SEC15_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR2_SEC16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR2_SEC16_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR2_SEC16_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR2_SEC17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR2_SEC17_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR2_SEC17_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR2_SEC18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR2_SEC18_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR2_SEC18_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR2_SEC19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR2_SEC19_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR2_SEC19_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR2_SEC20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR2_SEC20_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR2_SEC20_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR2_SEC21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR2_SEC21_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR2_SEC21_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR2_SEC22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR2_SEC22_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR2_SEC22_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR2_SEC23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR2_SEC23_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR2_SEC23_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR2_SEC24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR2_SEC24_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR2_SEC24_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR2_SEC25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR2_SEC25_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR2_SEC25_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR2_SEC26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR2_SEC26_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR2_SEC26_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR2_SEC27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR2_SEC27_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR2_SEC27_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR2_SEC28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR2_SEC28_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR2_SEC28_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR2_SEC29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR2_SEC29_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR2_SEC29_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR2_SEC30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR2_SEC30_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR2_SEC30_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR2_SEC31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR2_SEC31_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR2_SEC31_B_0x1 = 1;

    /** @brief GTZC1 MPCBB security configuration for super-block 3 register */
    using GTZC1_MPCBB_SECCFGR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR3_SEC0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR3_SEC0_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR3_SEC0_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR3_SEC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR3_SEC1_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR3_SEC1_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR3_SEC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR3_SEC2_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR3_SEC2_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR3_SEC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR3_SEC3_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR3_SEC3_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR3_SEC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR3_SEC4_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR3_SEC4_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR3_SEC5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR3_SEC5_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR3_SEC5_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR3_SEC6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR3_SEC6_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR3_SEC6_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR3_SEC7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR3_SEC7_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR3_SEC7_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR3_SEC8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR3_SEC8_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR3_SEC8_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR3_SEC9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR3_SEC9_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR3_SEC9_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR3_SEC10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR3_SEC10_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR3_SEC10_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR3_SEC11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR3_SEC11_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR3_SEC11_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR3_SEC12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR3_SEC12_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR3_SEC12_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR3_SEC13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR3_SEC13_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR3_SEC13_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR3_SEC14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR3_SEC14_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR3_SEC14_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR3_SEC15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR3_SEC15_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR3_SEC15_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR3_SEC16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR3_SEC16_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR3_SEC16_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR3_SEC17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR3_SEC17_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR3_SEC17_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR3_SEC18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR3_SEC18_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR3_SEC18_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR3_SEC19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR3_SEC19_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR3_SEC19_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR3_SEC20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR3_SEC20_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR3_SEC20_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR3_SEC21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR3_SEC21_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR3_SEC21_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR3_SEC22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR3_SEC22_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR3_SEC22_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR3_SEC23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR3_SEC23_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR3_SEC23_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR3_SEC24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR3_SEC24_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR3_SEC24_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR3_SEC25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR3_SEC25_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR3_SEC25_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR3_SEC26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR3_SEC26_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR3_SEC26_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR3_SEC27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR3_SEC27_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR3_SEC27_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR3_SEC28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR3_SEC28_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR3_SEC28_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR3_SEC29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR3_SEC29_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR3_SEC29_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR3_SEC30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR3_SEC30_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR3_SEC30_B_0x1 = 1;

    /** @brief Security configuration for block y (y = 0 to 31) in super block n Unprivileged write to this bit is ignored if PRIVy bit is set in GTZC1_MPCBB_PRIVCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_SECCFGR3_SEC31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. (value: 0)
     *          - B_0x1: Secure access only to block y, belonging to super-block n. (value: 1)
     */
        /** @brief Non-secure access only to block y, belonging to super-block n. Secure access is also allowed if the SRWILADIS bit is set in GTZC1_MPCBB_CR. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR3_SEC31_B_0x0 = 0;
        /** @brief Secure access only to block y, belonging to super-block n. */
    constexpr std::uint32_t GTZC1_MPCBB_SECCFGR3_SEC31_B_0x1 = 1;

    /** @brief GTZC1 MPCBB privileged configuration for super-block 0	register */
    using GTZC1_MPCBB_PRIVCFGR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x200, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR0_PRIV0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV0_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV0_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR0_PRIV1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV1_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV1_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR0_PRIV2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV2_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV2_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR0_PRIV3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV3_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV3_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR0_PRIV4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV4_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV4_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR0_PRIV5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV5_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV5_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR0_PRIV6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV6_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV6_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR0_PRIV7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV7_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV7_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR0_PRIV8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV8_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV8_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR0_PRIV9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV9_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV9_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR0_PRIV10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV10_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV10_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR0_PRIV11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV11_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV11_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR0_PRIV12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV12_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV12_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR0_PRIV13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV13_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV13_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR0_PRIV14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV14_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV14_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR0_PRIV15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV15_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV15_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR0_PRIV16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV16_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV16_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR0_PRIV17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV17_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV17_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR0_PRIV18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV18_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV18_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR0_PRIV19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV19_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV19_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR0_PRIV20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV20_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV20_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR0_PRIV21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV21_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV21_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR0_PRIV22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV22_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV22_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR0_PRIV23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV23_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV23_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR0_PRIV24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV24_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV24_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR0_PRIV25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV25_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV25_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR0_PRIV26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV26_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV26_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR0_PRIV27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV27_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV27_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR0_PRIV28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV28_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV28_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR0_PRIV29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV29_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV29_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR0_PRIV30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV30_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV30_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR0_PRIV31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV31_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR0_PRIV31_B_0x1 = 1;

    /** @brief GTZC1 MPCBB privileged configuration for super-block 1	register */
    using GTZC1_MPCBB_PRIVCFGR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x204, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR1_PRIV0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR1_PRIV0_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR1_PRIV0_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR1_PRIV1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR1_PRIV1_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR1_PRIV1_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR1_PRIV2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR1_PRIV2_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR1_PRIV2_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR1_PRIV3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR1_PRIV3_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR1_PRIV3_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR1_PRIV4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR1_PRIV4_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR1_PRIV4_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR1_PRIV5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR1_PRIV5_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR1_PRIV5_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR1_PRIV6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR1_PRIV6_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR1_PRIV6_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR1_PRIV7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR1_PRIV7_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR1_PRIV7_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR1_PRIV8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR1_PRIV8_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR1_PRIV8_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR1_PRIV9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR1_PRIV9_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR1_PRIV9_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR1_PRIV10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR1_PRIV10_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR1_PRIV10_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR1_PRIV11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR1_PRIV11_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR1_PRIV11_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR1_PRIV12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR1_PRIV12_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR1_PRIV12_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR1_PRIV13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR1_PRIV13_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR1_PRIV13_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR1_PRIV14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR1_PRIV14_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR1_PRIV14_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR1_PRIV15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR1_PRIV15_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR1_PRIV15_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR1_PRIV16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR1_PRIV16_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR1_PRIV16_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR1_PRIV17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR1_PRIV17_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR1_PRIV17_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR1_PRIV18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR1_PRIV18_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR1_PRIV18_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR1_PRIV19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR1_PRIV19_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR1_PRIV19_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR1_PRIV20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR1_PRIV20_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR1_PRIV20_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR1_PRIV21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR1_PRIV21_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR1_PRIV21_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR1_PRIV22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR1_PRIV22_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR1_PRIV22_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR1_PRIV23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR1_PRIV23_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR1_PRIV23_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR1_PRIV24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR1_PRIV24_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR1_PRIV24_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR1_PRIV25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR1_PRIV25_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR1_PRIV25_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR1_PRIV26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR1_PRIV26_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR1_PRIV26_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR1_PRIV27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR1_PRIV27_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR1_PRIV27_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR1_PRIV28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR1_PRIV28_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR1_PRIV28_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR1_PRIV29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR1_PRIV29_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR1_PRIV29_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR1_PRIV30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR1_PRIV30_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR1_PRIV30_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR1_PRIV31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR1_PRIV31_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR1_PRIV31_B_0x1 = 1;

    /** @brief GTZC1 MPCBB privileged configuration for super-block 2	register */
    using GTZC1_MPCBB_PRIVCFGR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x208, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR2_PRIV0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR2_PRIV0_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR2_PRIV0_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR2_PRIV1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR2_PRIV1_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR2_PRIV1_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR2_PRIV2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR2_PRIV2_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR2_PRIV2_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR2_PRIV3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR2_PRIV3_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR2_PRIV3_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR2_PRIV4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR2_PRIV4_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR2_PRIV4_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR2_PRIV5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR2_PRIV5_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR2_PRIV5_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR2_PRIV6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR2_PRIV6_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR2_PRIV6_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR2_PRIV7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR2_PRIV7_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR2_PRIV7_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR2_PRIV8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR2_PRIV8_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR2_PRIV8_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR2_PRIV9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR2_PRIV9_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR2_PRIV9_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR2_PRIV10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR2_PRIV10_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR2_PRIV10_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR2_PRIV11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR2_PRIV11_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR2_PRIV11_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR2_PRIV12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR2_PRIV12_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR2_PRIV12_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR2_PRIV13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR2_PRIV13_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR2_PRIV13_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR2_PRIV14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR2_PRIV14_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR2_PRIV14_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR2_PRIV15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR2_PRIV15_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR2_PRIV15_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR2_PRIV16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR2_PRIV16_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR2_PRIV16_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR2_PRIV17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR2_PRIV17_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR2_PRIV17_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR2_PRIV18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR2_PRIV18_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR2_PRIV18_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR2_PRIV19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR2_PRIV19_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR2_PRIV19_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR2_PRIV20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR2_PRIV20_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR2_PRIV20_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR2_PRIV21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR2_PRIV21_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR2_PRIV21_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR2_PRIV22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR2_PRIV22_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR2_PRIV22_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR2_PRIV23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR2_PRIV23_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR2_PRIV23_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR2_PRIV24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR2_PRIV24_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR2_PRIV24_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR2_PRIV25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR2_PRIV25_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR2_PRIV25_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR2_PRIV26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR2_PRIV26_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR2_PRIV26_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR2_PRIV27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR2_PRIV27_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR2_PRIV27_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR2_PRIV28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR2_PRIV28_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR2_PRIV28_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR2_PRIV29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR2_PRIV29_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR2_PRIV29_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR2_PRIV30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR2_PRIV30_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR2_PRIV30_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR2_PRIV31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR2_PRIV31_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR2_PRIV31_B_0x1 = 1;

    /** @brief GTZC1 MPCBB privileged configuration for super-block 3	register */
    using GTZC1_MPCBB_PRIVCFGR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR3_PRIV0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR3_PRIV0_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR3_PRIV0_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR3_PRIV1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR3_PRIV1_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR3_PRIV1_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR3_PRIV2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR3_PRIV2_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR3_PRIV2_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR3_PRIV3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR3_PRIV3_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR3_PRIV3_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR3_PRIV4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR3_PRIV4_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR3_PRIV4_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR3_PRIV5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR3_PRIV5_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR3_PRIV5_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR3_PRIV6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR3_PRIV6_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR3_PRIV6_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR3_PRIV7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR3_PRIV7_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR3_PRIV7_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR3_PRIV8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR3_PRIV8_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR3_PRIV8_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR3_PRIV9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR3_PRIV9_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR3_PRIV9_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR3_PRIV10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR3_PRIV10_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR3_PRIV10_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR3_PRIV11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR3_PRIV11_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR3_PRIV11_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR3_PRIV12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR3_PRIV12_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR3_PRIV12_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR3_PRIV13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR3_PRIV13_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR3_PRIV13_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR3_PRIV14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR3_PRIV14_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR3_PRIV14_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR3_PRIV15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR3_PRIV15_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR3_PRIV15_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR3_PRIV16 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR3_PRIV16_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR3_PRIV16_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR3_PRIV17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR3_PRIV17_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR3_PRIV17_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR3_PRIV18 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR3_PRIV18_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR3_PRIV18_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR3_PRIV19 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR3_PRIV19_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR3_PRIV19_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR3_PRIV20 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR3_PRIV20_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR3_PRIV20_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR3_PRIV21 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR3_PRIV21_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR3_PRIV21_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR3_PRIV22 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR3_PRIV22_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR3_PRIV22_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR3_PRIV23 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR3_PRIV23_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR3_PRIV23_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR3_PRIV24 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR3_PRIV24_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR3_PRIV24_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR3_PRIV25 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR3_PRIV25_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR3_PRIV25_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR3_PRIV26 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR3_PRIV26_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR3_PRIV26_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR3_PRIV27 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR3_PRIV27_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR3_PRIV27_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR3_PRIV28 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR3_PRIV28_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR3_PRIV28_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR3_PRIV29 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR3_PRIV29_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR3_PRIV29_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR3_PRIV30 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR3_PRIV30_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR3_PRIV30_B_0x1 = 1;

    /** @brief Privileged configuration for block y (y = 0 to 31), belonging to super-block n. Non-secure write to this bit is ignored if SECy bit is set in GTZC1_MPCBB_SECCFGRn. Writes are ignored if SPLCKn bit is set in GTZC1_MPCBB_CFGLOCK. */
    using GTZC1_MPCBB_PRIVCFGR3_PRIV31 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged access to block y, belonging to super-block n (value: 0)
     *          - B_0x1: Only privileged access to block y, belonging to super-block n (value: 1)
     */
        /** @brief Privileged and unprivileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR3_PRIV31_B_0x0 = 0;
        /** @brief Only privileged access to block y, belonging to super-block n */
    constexpr std::uint32_t GTZC1_MPCBB_PRIVCFGR3_PRIV31_B_0x1 = 1;

}

#endif
