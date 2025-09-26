/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_CORTEX_M55_DIB_HPP
#define EMBEDDED_PP_CORTEX_M55_DIB_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Identification Registers */
namespace Cortex_M55::DIB {

    /** @brief DLAR_S */
    using DLAR_S = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief KEY */
    using DLAR_S_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DLAR_NS */
    using DLAR_NS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20000, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief KEY */
    using DLAR_NS_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DLSR_S */
    using DLSR_S = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief nTT */
    using DLSR_S_nTT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SLK */
    using DLSR_S_SLK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SLI */
    using DLSR_S_SLI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DLSR_NS */
    using DLSR_NS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20004, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief nTT */
    using DLSR_NS_nTT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SLK */
    using DLSR_NS_SLK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SLI */
    using DLSR_NS_SLI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAUTHSTATUS_S */
    using DAUTHSTATUS_S = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SNID */
    using DAUTHSTATUS_S_SNID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SID */
    using DAUTHSTATUS_S_SID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NSNID */
    using DAUTHSTATUS_S_NSNID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NSID */
    using DAUTHSTATUS_S_NSID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAUTHSTATUS_NS */
    using DAUTHSTATUS_NS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20008, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SNID */
    using DAUTHSTATUS_NS_SNID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SID */
    using DAUTHSTATUS_NS_SID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NSNID */
    using DAUTHSTATUS_NS_NSNID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NSID */
    using DAUTHSTATUS_NS_NSID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DDEVARCH_S */
    using DDEVARCH_S = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Architect */
    using DDEVARCH_S_ARCHITECT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRESENT */
    using DDEVARCH_S_PRESENT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Revision */
    using DDEVARCH_S_REVISION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ARCHVER */
    using DDEVARCH_S_ARCHVER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ARCHPART */
    using DDEVARCH_S_ARCHPART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DDEVARCH_NS */
    using DDEVARCH_NS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2000C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Architect */
    using DDEVARCH_NS_ARCHITECT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRESENT */
    using DDEVARCH_NS_PRESENT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Revision */
    using DDEVARCH_NS_REVISION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ARCHVER */
    using DDEVARCH_NS_ARCHVER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ARCHPART */
    using DDEVARCH_NS_ARCHPART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DDEVTYPE_S */
    using DDEVTYPE_S = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sub-type */
    using DDEVTYPE_S_SUB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MAJOR */
    using DDEVTYPE_S_MAJOR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DDEVTYPE_NS */
    using DDEVTYPE_NS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2001C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sub-type */
    using DDEVTYPE_NS_SUB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MAJOR */
    using DDEVTYPE_NS_MAJOR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DPIDR4_S */
    using DPIDR4_S = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 4KB count */
    using DPIDR4_S_SIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DES_2 */
    using DPIDR4_S_DES_2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DPIDR4_NS */
    using DPIDR4_NS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20020, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 4KB count */
    using DPIDR4_NS_SIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DES_2 */
    using DPIDR4_NS_DES_2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DPIDR0_S */
    using DPIDR0_S = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PART_0 */
    using DPIDR0_S_PART_0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DPIDR0_NS */
    using DPIDR0_NS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20030, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PART_0 */
    using DPIDR0_NS_PART_0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DPIDR1_S */
    using DPIDR1_S = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DES_0 */
    using DPIDR1_S_DES_0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PART_1 */
    using DPIDR1_S_PART_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DPIDR1_NS */
    using DPIDR1_NS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20034, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DES_0 */
    using DPIDR1_NS_DES_0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PART_1 */
    using DPIDR1_NS_PART_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DPIDR2_S */
    using DPIDR2_S = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief REVISION */
    using DPIDR2_S_REVISION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JEDEC */
    using DPIDR2_S_JEDEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DES_1 */
    using DPIDR2_S_DES_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DPIDR2_NS */
    using DPIDR2_NS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20038, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief REVISION */
    using DPIDR2_NS_REVISION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JEDEC */
    using DPIDR2_NS_JEDEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DES_1 */
    using DPIDR2_NS_DES_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DPIDR3_S */
    using DPIDR3_S = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RevAnd */
    using DPIDR3_S_REVAND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CMOD */
    using DPIDR3_S_CMOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DPIDR3_NS */
    using DPIDR3_NS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2003C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RevAnd */
    using DPIDR3_NS_REVAND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CMOD */
    using DPIDR3_NS_CMOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCIDR0_S */
    using DCIDR0_S = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRMBL_0 */
    using DCIDR0_S_PRMBL_0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCIDR0_NS */
    using DCIDR0_NS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20040, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRMBL_0 */
    using DCIDR0_NS_PRMBL_0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCIDR1_S */
    using DCIDR1_S = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CLASS */
    using DCIDR1_S_CLASS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRMBL_1 */
    using DCIDR1_S_PRMBL_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCIDR1_NS */
    using DCIDR1_NS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20044, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CLASS */
    using DCIDR1_NS_CLASS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRMBL_1 */
    using DCIDR1_NS_PRMBL_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCIDR2_S */
    using DCIDR2_S = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRMBL_2 */
    using DCIDR2_S_PRMBL_2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCIDR2_NS */
    using DCIDR2_NS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20048, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRMBL_2 */
    using DCIDR2_NS_PRMBL_2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCIDR3_S */
    using DCIDR3_S = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRMBL_3 */
    using DCIDR3_S_PRMBL_3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCIDR3_NS */
    using DCIDR3_NS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2004C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRMBL_3 */
    using DCIDR3_NS_PRMBL_3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
