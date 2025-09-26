/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_CORTEX_M3_MPU_HPP
#define EMBEDDED_PP_CORTEX_M3_MPU_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Memory Protection Unit */
namespace Cortex_M3::MPU {

    /** @brief MPU Type Register */
    using MPU_TYPE = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEPARATE */
    using MPU_TYPE_SEPARATE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Uniform: No description (value: 0)
     *          - Separate: No description (value: 1)
     */
        /** @brief Uniform value */
    constexpr std::uint32_t MPU_TYPE_SEPARATE_Uniform = 0;
        /** @brief Separate value */
    constexpr std::uint32_t MPU_TYPE_SEPARATE_Separate = 1;

    /** @brief DREGION */
    using MPU_TYPE_DREGION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IREGION */
    using MPU_TYPE_IREGION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MPU Control Register */
    using MPU_CTRL = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ENABLE */
    using MPU_CTRL_ENABLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Disabled: No description (value: 0)
     *          - Enabled: No description (value: 1)
     */
        /** @brief Disabled value */
    constexpr std::uint32_t MPU_CTRL_ENABLE_Disabled = 0;
        /** @brief Enabled value */
    constexpr std::uint32_t MPU_CTRL_ENABLE_Enabled = 1;

    /** @brief HFNMIENA */
    using MPU_CTRL_HFNMIENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Disabled: No description (value: 0)
     *          - Enabled: No description (value: 1)
     */
        /** @brief Disabled value */
    constexpr std::uint32_t MPU_CTRL_HFNMIENA_Disabled = 0;
        /** @brief Enabled value */
    constexpr std::uint32_t MPU_CTRL_HFNMIENA_Enabled = 1;

    /** @brief PRIVDEFENA */
    using MPU_CTRL_PRIVDEFENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Disabled: No description (value: 0)
     *          - Enabled: No description (value: 1)
     */
        /** @brief Disabled value */
    constexpr std::uint32_t MPU_CTRL_PRIVDEFENA_Disabled = 0;
        /** @brief Enabled value */
    constexpr std::uint32_t MPU_CTRL_PRIVDEFENA_Enabled = 1;

    /** @brief MPU Region Number Register */
    using MPU_RNR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief REGION */
    using MPU_RNR_REGION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MPU Region Base Address Register */
    using MPU_RBAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief REGION */
    using MPU_RBAR_REGION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VALID */
    using MPU_RBAR_VALID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Not_valid: No description (value: 0)
     *          - Valid: No description (value: 1)
     */
        /** @brief Not_valid value */
    constexpr std::uint32_t MPU_RBAR_VALID_Not_valid = 0;
        /** @brief Valid value */
    constexpr std::uint32_t MPU_RBAR_VALID_Valid = 1;

    /** @brief ADDR */
    using MPU_RBAR_ADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 27, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MPU Region Attribute and Size Register */
    using MPU_RASR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ENABLE */
    using MPU_RASR_ENABLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Disabled: No description (value: 0)
     *          - Enabled: No description (value: 1)
     */
        /** @brief Disabled value */
    constexpr std::uint32_t MPU_RASR_ENABLE_Disabled = 0;
        /** @brief Enabled value */
    constexpr std::uint32_t MPU_RASR_ENABLE_Enabled = 1;

    /** @brief SIZE */
    using MPU_RASR_SIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SRD */
    using MPU_RASR_SRD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief B */
    using MPU_RASR_B = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief C */
    using MPU_RASR_C = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief S */
    using MPU_RASR_S = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TEX */
    using MPU_RASR_TEX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AP */
    using MPU_RASR_AP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Any_access_generates_a_permission_fault: No description (value: 0)
     *          - Privileged_access_only: No description (value: 1)
     *          - Any_unprivileged_write_generates_a_permission_fault: No description (value: 2)
     *          - Full_access: No description (value: 3)
     *          - Reserved: No description (value: 4)
     *          - Privileged_read_only: No description (value: 5)
     *          - Privileged_and_unprivileged_read_only: No description (value: 6)
     *          - Privileged_and_unprivileged_read_only: No description (value: 7)
     */
        /** @brief Any_access_generates_a_permission_fault value */
    constexpr std::uint32_t MPU_RASR_AP_Any_access_generates_a_permission_fault = 0;
        /** @brief Privileged_access_only value */
    constexpr std::uint32_t MPU_RASR_AP_Privileged_access_only = 1;
        /** @brief Any_unprivileged_write_generates_a_permission_fault value */
    constexpr std::uint32_t MPU_RASR_AP_Any_unprivileged_write_generates_a_permission_fault = 2;
        /** @brief Full_access value */
    constexpr std::uint32_t MPU_RASR_AP_Full_access = 3;
        /** @brief Reserved value */
    constexpr std::uint32_t MPU_RASR_AP_Reserved = 4;
        /** @brief Privileged_read_only value */
    constexpr std::uint32_t MPU_RASR_AP_Privileged_read_only = 5;
        /** @brief Privileged_and_unprivileged_read_only value */
    constexpr std::uint32_t MPU_RASR_AP_Privileged_and_unprivileged_read_only = 6;
        /** @brief Privileged_and_unprivileged_read_only value */
    constexpr std::uint32_t MPU_RASR_AP_Privileged_and_unprivileged_read_only = 7;

    /** @brief XN */
    using MPU_RASR_XN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Execution_Permitted: No description (value: 0)
     *          - Execution_Not_Permitted: No description (value: 1)
     */
        /** @brief Execution_Permitted value */
    constexpr std::uint32_t MPU_RASR_XN_Execution_Permitted = 0;
        /** @brief Execution_Not_Permitted value */
    constexpr std::uint32_t MPU_RASR_XN_Execution_Not_Permitted = 1;

    /** @brief MPU Alias 1 Region Base Address register */
    using MPU_RBAR_A1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief REGION */
    using MPU_RBAR_A1_REGION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VALID */
    using MPU_RBAR_A1_VALID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Not_valid: No description (value: 0)
     *          - Valid: No description (value: 1)
     */
        /** @brief Not_valid value */
    constexpr std::uint32_t MPU_RBAR_A1_VALID_Not_valid = 0;
        /** @brief Valid value */
    constexpr std::uint32_t MPU_RBAR_A1_VALID_Valid = 1;

    /** @brief ADDR */
    using MPU_RBAR_A1_ADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 27, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MPU Alias 1 Region Attribute and Size register */
    using MPU_RASR_A1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ENABLE */
    using MPU_RASR_A1_ENABLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Disabled: No description (value: 0)
     *          - Enabled: No description (value: 1)
     */
        /** @brief Disabled value */
    constexpr std::uint32_t MPU_RASR_A1_ENABLE_Disabled = 0;
        /** @brief Enabled value */
    constexpr std::uint32_t MPU_RASR_A1_ENABLE_Enabled = 1;

    /** @brief SIZE */
    using MPU_RASR_A1_SIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SRD */
    using MPU_RASR_A1_SRD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief B */
    using MPU_RASR_A1_B = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief C */
    using MPU_RASR_A1_C = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief S */
    using MPU_RASR_A1_S = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TEX */
    using MPU_RASR_A1_TEX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AP */
    using MPU_RASR_A1_AP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Any_access_generates_a_permission_fault: No description (value: 0)
     *          - Privileged_access_only: No description (value: 1)
     *          - Any_unprivileged_write_generates_a_permission_fault: No description (value: 2)
     *          - Full_access: No description (value: 3)
     *          - Reserved: No description (value: 4)
     *          - Privileged_read_only: No description (value: 5)
     *          - Privileged_and_unprivileged_read_only: No description (value: 6)
     *          - Privileged_and_unprivileged_read_only: No description (value: 7)
     */
        /** @brief Any_access_generates_a_permission_fault value */
    constexpr std::uint32_t MPU_RASR_A1_AP_Any_access_generates_a_permission_fault = 0;
        /** @brief Privileged_access_only value */
    constexpr std::uint32_t MPU_RASR_A1_AP_Privileged_access_only = 1;
        /** @brief Any_unprivileged_write_generates_a_permission_fault value */
    constexpr std::uint32_t MPU_RASR_A1_AP_Any_unprivileged_write_generates_a_permission_fault = 2;
        /** @brief Full_access value */
    constexpr std::uint32_t MPU_RASR_A1_AP_Full_access = 3;
        /** @brief Reserved value */
    constexpr std::uint32_t MPU_RASR_A1_AP_Reserved = 4;
        /** @brief Privileged_read_only value */
    constexpr std::uint32_t MPU_RASR_A1_AP_Privileged_read_only = 5;
        /** @brief Privileged_and_unprivileged_read_only value */
    constexpr std::uint32_t MPU_RASR_A1_AP_Privileged_and_unprivileged_read_only = 6;
        /** @brief Privileged_and_unprivileged_read_only value */
    constexpr std::uint32_t MPU_RASR_A1_AP_Privileged_and_unprivileged_read_only = 7;

    /** @brief XN */
    using MPU_RASR_A1_XN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Execution_Permitted: No description (value: 0)
     *          - Execution_Not_Permitted: No description (value: 1)
     */
        /** @brief Execution_Permitted value */
    constexpr std::uint32_t MPU_RASR_A1_XN_Execution_Permitted = 0;
        /** @brief Execution_Not_Permitted value */
    constexpr std::uint32_t MPU_RASR_A1_XN_Execution_Not_Permitted = 1;

    /** @brief MPU Alias 2 Region Base Address register */
    using MPU_RBAR_A2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief REGION */
    using MPU_RBAR_A2_REGION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VALID */
    using MPU_RBAR_A2_VALID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Not_valid: No description (value: 0)
     *          - Valid: No description (value: 1)
     */
        /** @brief Not_valid value */
    constexpr std::uint32_t MPU_RBAR_A2_VALID_Not_valid = 0;
        /** @brief Valid value */
    constexpr std::uint32_t MPU_RBAR_A2_VALID_Valid = 1;

    /** @brief ADDR */
    using MPU_RBAR_A2_ADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 27, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MPU Alias 2 Region Attribute and Size register */
    using MPU_RASR_A2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ENABLE */
    using MPU_RASR_A2_ENABLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Disabled: No description (value: 0)
     *          - Enabled: No description (value: 1)
     */
        /** @brief Disabled value */
    constexpr std::uint32_t MPU_RASR_A2_ENABLE_Disabled = 0;
        /** @brief Enabled value */
    constexpr std::uint32_t MPU_RASR_A2_ENABLE_Enabled = 1;

    /** @brief SIZE */
    using MPU_RASR_A2_SIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SRD */
    using MPU_RASR_A2_SRD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief B */
    using MPU_RASR_A2_B = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief C */
    using MPU_RASR_A2_C = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief S */
    using MPU_RASR_A2_S = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TEX */
    using MPU_RASR_A2_TEX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AP */
    using MPU_RASR_A2_AP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Any_access_generates_a_permission_fault: No description (value: 0)
     *          - Privileged_access_only: No description (value: 1)
     *          - Any_unprivileged_write_generates_a_permission_fault: No description (value: 2)
     *          - Full_access: No description (value: 3)
     *          - Reserved: No description (value: 4)
     *          - Privileged_read_only: No description (value: 5)
     *          - Privileged_and_unprivileged_read_only: No description (value: 6)
     *          - Privileged_and_unprivileged_read_only: No description (value: 7)
     */
        /** @brief Any_access_generates_a_permission_fault value */
    constexpr std::uint32_t MPU_RASR_A2_AP_Any_access_generates_a_permission_fault = 0;
        /** @brief Privileged_access_only value */
    constexpr std::uint32_t MPU_RASR_A2_AP_Privileged_access_only = 1;
        /** @brief Any_unprivileged_write_generates_a_permission_fault value */
    constexpr std::uint32_t MPU_RASR_A2_AP_Any_unprivileged_write_generates_a_permission_fault = 2;
        /** @brief Full_access value */
    constexpr std::uint32_t MPU_RASR_A2_AP_Full_access = 3;
        /** @brief Reserved value */
    constexpr std::uint32_t MPU_RASR_A2_AP_Reserved = 4;
        /** @brief Privileged_read_only value */
    constexpr std::uint32_t MPU_RASR_A2_AP_Privileged_read_only = 5;
        /** @brief Privileged_and_unprivileged_read_only value */
    constexpr std::uint32_t MPU_RASR_A2_AP_Privileged_and_unprivileged_read_only = 6;
        /** @brief Privileged_and_unprivileged_read_only value */
    constexpr std::uint32_t MPU_RASR_A2_AP_Privileged_and_unprivileged_read_only = 7;

    /** @brief XN */
    using MPU_RASR_A2_XN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Execution_Permitted: No description (value: 0)
     *          - Execution_Not_Permitted: No description (value: 1)
     */
        /** @brief Execution_Permitted value */
    constexpr std::uint32_t MPU_RASR_A2_XN_Execution_Permitted = 0;
        /** @brief Execution_Not_Permitted value */
    constexpr std::uint32_t MPU_RASR_A2_XN_Execution_Not_Permitted = 1;

    /** @brief MPU Alias 3 Region Base Address register */
    using MPU_RBAR_A3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief REGION */
    using MPU_RBAR_A3_REGION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VALID */
    using MPU_RBAR_A3_VALID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Not_valid: No description (value: 0)
     *          - Valid: No description (value: 1)
     */
        /** @brief Not_valid value */
    constexpr std::uint32_t MPU_RBAR_A3_VALID_Not_valid = 0;
        /** @brief Valid value */
    constexpr std::uint32_t MPU_RBAR_A3_VALID_Valid = 1;

    /** @brief ADDR */
    using MPU_RBAR_A3_ADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 27, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MPU Alias 3 Region Attribute and Size register */
    using MPU_RASR_A3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ENABLE */
    using MPU_RASR_A3_ENABLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Disabled: No description (value: 0)
     *          - Enabled: No description (value: 1)
     */
        /** @brief Disabled value */
    constexpr std::uint32_t MPU_RASR_A3_ENABLE_Disabled = 0;
        /** @brief Enabled value */
    constexpr std::uint32_t MPU_RASR_A3_ENABLE_Enabled = 1;

    /** @brief SIZE */
    using MPU_RASR_A3_SIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SRD */
    using MPU_RASR_A3_SRD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief B */
    using MPU_RASR_A3_B = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief C */
    using MPU_RASR_A3_C = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief S */
    using MPU_RASR_A3_S = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TEX */
    using MPU_RASR_A3_TEX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AP */
    using MPU_RASR_A3_AP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Any_access_generates_a_permission_fault: No description (value: 0)
     *          - Privileged_access_only: No description (value: 1)
     *          - Any_unprivileged_write_generates_a_permission_fault: No description (value: 2)
     *          - Full_access: No description (value: 3)
     *          - Reserved: No description (value: 4)
     *          - Privileged_read_only: No description (value: 5)
     *          - Privileged_and_unprivileged_read_only: No description (value: 6)
     *          - Privileged_and_unprivileged_read_only: No description (value: 7)
     */
        /** @brief Any_access_generates_a_permission_fault value */
    constexpr std::uint32_t MPU_RASR_A3_AP_Any_access_generates_a_permission_fault = 0;
        /** @brief Privileged_access_only value */
    constexpr std::uint32_t MPU_RASR_A3_AP_Privileged_access_only = 1;
        /** @brief Any_unprivileged_write_generates_a_permission_fault value */
    constexpr std::uint32_t MPU_RASR_A3_AP_Any_unprivileged_write_generates_a_permission_fault = 2;
        /** @brief Full_access value */
    constexpr std::uint32_t MPU_RASR_A3_AP_Full_access = 3;
        /** @brief Reserved value */
    constexpr std::uint32_t MPU_RASR_A3_AP_Reserved = 4;
        /** @brief Privileged_read_only value */
    constexpr std::uint32_t MPU_RASR_A3_AP_Privileged_read_only = 5;
        /** @brief Privileged_and_unprivileged_read_only value */
    constexpr std::uint32_t MPU_RASR_A3_AP_Privileged_and_unprivileged_read_only = 6;
        /** @brief Privileged_and_unprivileged_read_only value */
    constexpr std::uint32_t MPU_RASR_A3_AP_Privileged_and_unprivileged_read_only = 7;

    /** @brief XN */
    using MPU_RASR_A3_XN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Execution_Permitted: No description (value: 0)
     *          - Execution_Not_Permitted: No description (value: 1)
     */
        /** @brief Execution_Permitted value */
    constexpr std::uint32_t MPU_RASR_A3_XN_Execution_Permitted = 0;
        /** @brief Execution_Not_Permitted value */
    constexpr std::uint32_t MPU_RASR_A3_XN_Execution_Not_Permitted = 1;

}

#endif
