/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_CORTEX_M4_ID_HPP
#define EMBEDDED_PP_CORTEX_M4_ID_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief ID registers */
namespace Cortex_M4::ID {

    /** @brief CPUID */
    using CPUID = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Implementer */
    using CPUID_Implementer = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Variant */
    using CPUID_Variant = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Constant */
    using CPUID_Constant = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Partno */
    using CPUID_Partno = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Revision */
    using CPUID_Revision = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ID_PFR0 */
    using ID_PFR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief State1 */
    using ID_PFR0_State1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Thumb_Thumb2: No description (value: 3)
     */
        /** @brief Thumb_Thumb2 value */
    constexpr std::uint32_t ID_PFR0_State1_Thumb_Thumb2 = 3;

    /** @brief ID_PFR1 */
    using ID_PFR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief M_Profile */
    using ID_PFR1_M_Profile = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Two_stack: No description (value: 2)
     */
        /** @brief Two_stack value */
    constexpr std::uint32_t ID_PFR1_M_Profile_Two_stack = 2;

    /** @brief ID_DFR0 */
    using ID_DFR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief M_Profile */
    using ID_DFR0_M_Profile = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Not_supported: No description (value: 0)
     *          - Supported: No description (value: 1)
     */
        /** @brief Not_supported value */
    constexpr std::uint32_t ID_DFR0_M_Profile_Not_supported = 0;
        /** @brief Supported value */
    constexpr std::uint32_t ID_DFR0_M_Profile_Supported = 1;

    /** @brief ID_AFR0 */
    using ID_AFR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ID_MMFR0 */
    using ID_MMFR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Auxiliary_registers */
    using ID_MMFR0_Auxiliary_registers = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Not_supported: No description (value: 0)
     *          - Supported: No description (value: 1)
     */
        /** @brief Not_supported value */
    constexpr std::uint32_t ID_MMFR0_Auxiliary_registers_Not_supported = 0;
        /** @brief Supported value */
    constexpr std::uint32_t ID_MMFR0_Auxiliary_registers_Supported = 1;

    /** @brief Shareability_levels */
    using ID_MMFR0_Shareability_levels = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - One_level: No description (value: 0)
     */
        /** @brief One_level value */
    constexpr std::uint32_t ID_MMFR0_Shareability_levels_One_level = 0;

    /** @brief Outermost_shareability */
    using ID_MMFR0_Outermost_shareability = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Non_cacheable: No description (value: 0)
     *          - Ignored: No description (value: 15)
     */
        /** @brief Non_cacheable value */
    constexpr std::uint32_t ID_MMFR0_Outermost_shareability_Non_cacheable = 0;
        /** @brief Ignored value */
    constexpr std::uint32_t ID_MMFR0_Outermost_shareability_Ignored = 15;

    /** @brief PMSA */
    using ID_MMFR0_PMSA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Not_supported: No description (value: 0)
     *          - PMSAv7: No description (value: 3)
     */
        /** @brief Not_supported value */
    constexpr std::uint32_t ID_MMFR0_PMSA_Not_supported = 0;
        /** @brief PMSAv7 value */
    constexpr std::uint32_t ID_MMFR0_PMSA_PMSAv7 = 3;

    /** @brief ID_MMFR1 */
    using ID_MMFR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ID_MMFR2 */
    using ID_MMFR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x58, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WFI */
    using ID_MMFR2_WFI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Not_supported: No description (value: 0)
     *          - Supported: No description (value: 1)
     */
        /** @brief Not_supported value */
    constexpr std::uint32_t ID_MMFR2_WFI_Not_supported = 0;
        /** @brief Supported value */
    constexpr std::uint32_t ID_MMFR2_WFI_Supported = 1;

    /** @brief ID_MMFR3 */
    using ID_MMFR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ID_ISAR0 */
    using ID_ISAR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Divide_instrs */
    using ID_ISAR0_Divide_instrs = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Not_supported: No description (value: 0)
     *          - Supported: No description (value: 1)
     */
        /** @brief Not_supported value */
    constexpr std::uint32_t ID_ISAR0_Divide_instrs_Not_supported = 0;
        /** @brief Supported value */
    constexpr std::uint32_t ID_ISAR0_Divide_instrs_Supported = 1;

    /** @brief Debug_instrs */
    using ID_ISAR0_Debug_instrs = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Not_supported: No description (value: 0)
     *          - Supported: No description (value: 1)
     */
        /** @brief Not_supported value */
    constexpr std::uint32_t ID_ISAR0_Debug_instrs_Not_supported = 0;
        /** @brief Supported value */
    constexpr std::uint32_t ID_ISAR0_Debug_instrs_Supported = 1;

    /** @brief Coproc_instrs */
    using ID_ISAR0_Coproc_instrs = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - None: No description (value: 0)
     *          - Generic: No description (value: 1)
     *          - Generic2: No description (value: 2)
     *          - MCRR_MRRC: No description (value: 3)
     *          - MCRR2_MRRC2: No description (value: 4)
     */
        /** @brief None value */
    constexpr std::uint32_t ID_ISAR0_Coproc_instrs_None = 0;
        /** @brief Generic value */
    constexpr std::uint32_t ID_ISAR0_Coproc_instrs_Generic = 1;
        /** @brief Generic2 value */
    constexpr std::uint32_t ID_ISAR0_Coproc_instrs_Generic2 = 2;
        /** @brief MCRR_MRRC value */
    constexpr std::uint32_t ID_ISAR0_Coproc_instrs_MCRR_MRRC = 3;
        /** @brief MCRR2_MRRC2 value */
    constexpr std::uint32_t ID_ISAR0_Coproc_instrs_MCRR2_MRRC2 = 4;

    /** @brief CmpBranch_instrs */
    using ID_ISAR0_CmpBranch_instrs = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Not_supported: No description (value: 0)
     *          - Supported: No description (value: 1)
     */
        /** @brief Not_supported value */
    constexpr std::uint32_t ID_ISAR0_CmpBranch_instrs_Not_supported = 0;
        /** @brief Supported value */
    constexpr std::uint32_t ID_ISAR0_CmpBranch_instrs_Supported = 1;

    /** @brief Bitfield_instrs */
    using ID_ISAR0_Bitfield_instrs = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Not_supported: No description (value: 0)
     *          - Supported: No description (value: 1)
     */
        /** @brief Not_supported value */
    constexpr std::uint32_t ID_ISAR0_Bitfield_instrs_Not_supported = 0;
        /** @brief Supported value */
    constexpr std::uint32_t ID_ISAR0_Bitfield_instrs_Supported = 1;

    /** @brief BitCount_instrs */
    using ID_ISAR0_BitCount_instrs = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Not_supported: No description (value: 0)
     *          - Supported: No description (value: 1)
     */
        /** @brief Not_supported value */
    constexpr std::uint32_t ID_ISAR0_BitCount_instrs_Not_supported = 0;
        /** @brief Supported value */
    constexpr std::uint32_t ID_ISAR0_BitCount_instrs_Supported = 1;

    /** @brief ID_ISAR1 */
    using ID_ISAR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x64, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interwork_instrs */
    using ID_ISAR1_Interwork_instrs = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - None: No description (value: 0)
     *          - BX: No description (value: 1)
     *          - BX_BLX2: No description (value: 2)
     */
        /** @brief None value */
    constexpr std::uint32_t ID_ISAR1_Interwork_instrs_None = 0;
        /** @brief BX value */
    constexpr std::uint32_t ID_ISAR1_Interwork_instrs_BX = 1;
        /** @brief BX_BLX2 value */
    constexpr std::uint32_t ID_ISAR1_Interwork_instrs_BX_BLX2 = 2;

    /** @brief Immediate_instrs */
    using ID_ISAR1_Immediate_instrs = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Not_supported: No description (value: 0)
     *          - Supported: No description (value: 1)
     */
        /** @brief Not_supported value */
    constexpr std::uint32_t ID_ISAR1_Immediate_instrs_Not_supported = 0;
        /** @brief Supported value */
    constexpr std::uint32_t ID_ISAR1_Immediate_instrs_Supported = 1;

    /** @brief IfThen_instrs */
    using ID_ISAR1_IfThen_instrs = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Not_supported: No description (value: 0)
     *          - Supported: No description (value: 1)
     */
        /** @brief Not_supported value */
    constexpr std::uint32_t ID_ISAR1_IfThen_instrs_Not_supported = 0;
        /** @brief Supported value */
    constexpr std::uint32_t ID_ISAR1_IfThen_instrs_Supported = 1;

    /** @brief Extend_instrs */
    using ID_ISAR1_Extend_instrs = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ID_ISAR2 */
    using ID_ISAR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x68, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reversal_instrs */
    using ID_ISAR2_Reversal_instrs = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MultU_instrs */
    using ID_ISAR2_MultU_instrs = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MultS_instrs */
    using ID_ISAR2_MultS_instrs = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Mult_instrs */
    using ID_ISAR2_Mult_instrs = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MultiAccessInt_instrs */
    using ID_ISAR2_MultiAccessInt_instrs = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MultiAccessInt_instrs */
    using ID_ISAR2_MultiAccessInt_instrs = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LoadStore_instrs */
    using ID_ISAR2_LoadStore_instrs = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ID_ISAR3 */
    using ID_ISAR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TrueNOP_instrs */
    using ID_ISAR3_TrueNOP_instrs = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Not_supported: No description (value: 0)
     *          - Supported: No description (value: 1)
     */
        /** @brief Not_supported value */
    constexpr std::uint32_t ID_ISAR3_TrueNOP_instrs_Not_supported = 0;
        /** @brief Supported value */
    constexpr std::uint32_t ID_ISAR3_TrueNOP_instrs_Supported = 1;

    /** @brief ThumbCopy_instrs */
    using ID_ISAR3_ThumbCopy_instrs = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Not_supported: No description (value: 0)
     *          - Supported: No description (value: 1)
     */
        /** @brief Not_supported value */
    constexpr std::uint32_t ID_ISAR3_ThumbCopy_instrs_Not_supported = 0;
        /** @brief Supported value */
    constexpr std::uint32_t ID_ISAR3_ThumbCopy_instrs_Supported = 1;

    /** @brief TabBranch_instrs */
    using ID_ISAR3_TabBranch_instrs = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Not_supported: No description (value: 0)
     *          - Supported: No description (value: 1)
     */
        /** @brief Not_supported value */
    constexpr std::uint32_t ID_ISAR3_TabBranch_instrs_Not_supported = 0;
        /** @brief Supported value */
    constexpr std::uint32_t ID_ISAR3_TabBranch_instrs_Supported = 1;

    /** @brief SynchPrim_instrs */
    using ID_ISAR3_SynchPrim_instrs = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SVC_instrs */
    using ID_ISAR3_SVC_instrs = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Not_supported: No description (value: 0)
     *          - Supported: No description (value: 1)
     */
        /** @brief Not_supported value */
    constexpr std::uint32_t ID_ISAR3_SVC_instrs_Not_supported = 0;
        /** @brief Supported value */
    constexpr std::uint32_t ID_ISAR3_SVC_instrs_Supported = 1;

    /** @brief SIMD_instrs */
    using ID_ISAR3_SIMD_instrs = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Saturate_instrs */
    using ID_ISAR3_Saturate_instrs = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Not_supported: No description (value: 0)
     *          - Supported: No description (value: 1)
     */
        /** @brief Not_supported value */
    constexpr std::uint32_t ID_ISAR3_Saturate_instrs_Not_supported = 0;
        /** @brief Supported value */
    constexpr std::uint32_t ID_ISAR3_Saturate_instrs_Supported = 1;

    /** @brief ID_ISAR4 */
    using ID_ISAR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x70, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PSR_M_instrs */
    using ID_ISAR4_PSR_M_instrs = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Not_supported: No description (value: 0)
     *          - Supported: No description (value: 1)
     */
        /** @brief Not_supported value */
    constexpr std::uint32_t ID_ISAR4_PSR_M_instrs_Not_supported = 0;
        /** @brief Supported value */
    constexpr std::uint32_t ID_ISAR4_PSR_M_instrs_Supported = 1;

    /** @brief SynchPrim_instrs_frac */
    using ID_ISAR4_SynchPrim_instrs_frac = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Barrier_instrs */
    using ID_ISAR4_Barrier_instrs = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Not_supported: No description (value: 0)
     *          - Supported: No description (value: 1)
     */
        /** @brief Not_supported value */
    constexpr std::uint32_t ID_ISAR4_Barrier_instrs_Not_supported = 0;
        /** @brief Supported value */
    constexpr std::uint32_t ID_ISAR4_Barrier_instrs_Supported = 1;

    /** @brief Writeback_instrs */
    using ID_ISAR4_Writeback_instrs = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Basic: No description (value: 0)
     *          - Full: No description (value: 1)
     */
        /** @brief Basic value */
    constexpr std::uint32_t ID_ISAR4_Writeback_instrs_Basic = 0;
        /** @brief Full value */
    constexpr std::uint32_t ID_ISAR4_Writeback_instrs_Full = 1;

    /** @brief WithShifts_instrs */
    using ID_ISAR4_WithShifts_instrs = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Unpriv_instrs */
    using ID_ISAR4_Unpriv_instrs = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
