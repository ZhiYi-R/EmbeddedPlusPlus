/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_CORTEX_M0PLUS_MPU_HPP
#define EMBEDDED_PP_CORTEX_M0PLUS_MPU_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Memory Protection Unit registers */
namespace Cortex_M0PLUS::MPU {

    /** @brief MPU Type Register */
    using MPU_TYPE = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IREGION */
    using MPU_TYPE_IREGION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DREGION */
    using MPU_TYPE_DREGION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEPARATE */
    using MPU_TYPE_SEPARATE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MPU Control Register */
    using MPU_CTRL = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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

    /** @brief MPU Region Number Register */
    using MPU_RNR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief REGION */
    using MPU_RNR_REGION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MPU Region Base Address Register */
    using MPU_RBAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADDR */
    using MPU_RBAR_ADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VALID */
    using MPU_RBAR_VALID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief REGION */
    using MPU_RBAR_REGION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MPU Region Attribute and Size Register */
    using MPU_RASR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XN */
    using MPU_RASR_XN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Execution_permitted: No description (value: 0)
     *          - Execution_not_permitted: No description (value: 1)
     */
        /** @brief Execution_permitted value */
    constexpr std::uint32_t MPU_RASR_XN_Execution_permitted = 0;
        /** @brief Execution_not_permitted value */
    constexpr std::uint32_t MPU_RASR_XN_Execution_not_permitted = 1;

    /** @brief AP */
    using MPU_RASR_AP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - No_access: No description (value: 0)
     *          - Privileged_RW: No description (value: 1)
     *          - Privileged_RW_Unprivileged_RO: No description (value: 2)
     *          - Full_access: No description (value: 3)
     *          - Privileged_RO: No description (value: 5)
     *          - Privileged_RO_Unprivileged_RO: No description (value: 6)
     *          - Privileged_RO_Unprivileged_RO: No description (value: 7)
     */
        /** @brief No_access value */
    constexpr std::uint32_t MPU_RASR_AP_No_access = 0;
        /** @brief Privileged_RW value */
    constexpr std::uint32_t MPU_RASR_AP_Privileged_RW = 1;
        /** @brief Privileged_RW_Unprivileged_RO value */
    constexpr std::uint32_t MPU_RASR_AP_Privileged_RW_Unprivileged_RO = 2;
        /** @brief Full_access value */
    constexpr std::uint32_t MPU_RASR_AP_Full_access = 3;
        /** @brief Privileged_RO value */
    constexpr std::uint32_t MPU_RASR_AP_Privileged_RO = 5;
        /** @brief Privileged_RO_Unprivileged_RO value */
    constexpr std::uint32_t MPU_RASR_AP_Privileged_RO_Unprivileged_RO = 6;
        /** @brief Privileged_RO_Unprivileged_RO value */
    constexpr std::uint32_t MPU_RASR_AP_Privileged_RO_Unprivileged_RO = 7;

    /** @brief Shareable memory attribute */
    using MPU_RASR_S = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief memory attribute */
    using MPU_RASR_C = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief memory attribute */
    using MPU_RASR_B = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SRD */
    using MPU_RASR_SRD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SIZE */
    using MPU_RASR_SIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Reserved_: No description (value: 1)
     *          - Reserved__: No description (value: 2)
     *          - Reserved___: No description (value: 3)
     *          - Reserved____: No description (value: 4)
     *          - Reserved_____: No description (value: 5)
     *          - Reserved______: No description (value: 6)
     *          - _256B: No description (value: 7)
     *          - _512B: No description (value: 8)
     *          - _1KB: No description (value: 9)
     *          - _2KB: No description (value: 10)
     *          - _4KB: No description (value: 11)
     *          - _8KB: No description (value: 12)
     *          - _16KB: No description (value: 13)
     *          - _32KB: No description (value: 14)
     *          - _64KB: No description (value: 15)
     *          - _128KB: No description (value: 16)
     *          - _256KB: No description (value: 17)
     *          - _512KB: No description (value: 18)
     *          - _1MB: No description (value: 19)
     *          - _2MB: No description (value: 20)
     *          - _4MB: No description (value: 21)
     *          - _8MB: No description (value: 22)
     *          - _16MB: No description (value: 23)
     *          - _32MB: No description (value: 24)
     *          - _64MB: No description (value: 25)
     *          - _128MB: No description (value: 26)
     *          - _256MB: No description (value: 27)
     *          - _512MB: No description (value: 28)
     *          - _1GB: No description (value: 29)
     *          - _2GB: No description (value: 30)
     *          - _4GB: No description (value: 31)
     */
        /** @brief Reserved_ value */
    constexpr std::uint32_t MPU_RASR_SIZE_Reserved_ = 1;
        /** @brief Reserved__ value */
    constexpr std::uint32_t MPU_RASR_SIZE_Reserved__ = 2;
        /** @brief Reserved___ value */
    constexpr std::uint32_t MPU_RASR_SIZE_Reserved___ = 3;
        /** @brief Reserved____ value */
    constexpr std::uint32_t MPU_RASR_SIZE_Reserved____ = 4;
        /** @brief Reserved_____ value */
    constexpr std::uint32_t MPU_RASR_SIZE_Reserved_____ = 5;
        /** @brief Reserved______ value */
    constexpr std::uint32_t MPU_RASR_SIZE_Reserved______ = 6;
        /** @brief _256B value */
    constexpr std::uint32_t MPU_RASR_SIZE__256B = 7;
        /** @brief _512B value */
    constexpr std::uint32_t MPU_RASR_SIZE__512B = 8;
        /** @brief _1KB value */
    constexpr std::uint32_t MPU_RASR_SIZE__1KB = 9;
        /** @brief _2KB value */
    constexpr std::uint32_t MPU_RASR_SIZE__2KB = 10;
        /** @brief _4KB value */
    constexpr std::uint32_t MPU_RASR_SIZE__4KB = 11;
        /** @brief _8KB value */
    constexpr std::uint32_t MPU_RASR_SIZE__8KB = 12;
        /** @brief _16KB value */
    constexpr std::uint32_t MPU_RASR_SIZE__16KB = 13;
        /** @brief _32KB value */
    constexpr std::uint32_t MPU_RASR_SIZE__32KB = 14;
        /** @brief _64KB value */
    constexpr std::uint32_t MPU_RASR_SIZE__64KB = 15;
        /** @brief _128KB value */
    constexpr std::uint32_t MPU_RASR_SIZE__128KB = 16;
        /** @brief _256KB value */
    constexpr std::uint32_t MPU_RASR_SIZE__256KB = 17;
        /** @brief _512KB value */
    constexpr std::uint32_t MPU_RASR_SIZE__512KB = 18;
        /** @brief _1MB value */
    constexpr std::uint32_t MPU_RASR_SIZE__1MB = 19;
        /** @brief _2MB value */
    constexpr std::uint32_t MPU_RASR_SIZE__2MB = 20;
        /** @brief _4MB value */
    constexpr std::uint32_t MPU_RASR_SIZE__4MB = 21;
        /** @brief _8MB value */
    constexpr std::uint32_t MPU_RASR_SIZE__8MB = 22;
        /** @brief _16MB value */
    constexpr std::uint32_t MPU_RASR_SIZE__16MB = 23;
        /** @brief _32MB value */
    constexpr std::uint32_t MPU_RASR_SIZE__32MB = 24;
        /** @brief _64MB value */
    constexpr std::uint32_t MPU_RASR_SIZE__64MB = 25;
        /** @brief _128MB value */
    constexpr std::uint32_t MPU_RASR_SIZE__128MB = 26;
        /** @brief _256MB value */
    constexpr std::uint32_t MPU_RASR_SIZE__256MB = 27;
        /** @brief _512MB value */
    constexpr std::uint32_t MPU_RASR_SIZE__512MB = 28;
        /** @brief _1GB value */
    constexpr std::uint32_t MPU_RASR_SIZE__1GB = 29;
        /** @brief _2GB value */
    constexpr std::uint32_t MPU_RASR_SIZE__2GB = 30;
        /** @brief _4GB value */
    constexpr std::uint32_t MPU_RASR_SIZE__4GB = 31;

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

}

#endif
