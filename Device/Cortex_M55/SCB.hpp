/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_CORTEX_M55_SCB_HPP
#define EMBEDDED_PP_CORTEX_M55_SCB_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief System Control Block */
namespace Cortex_M55::SCB {

    /** @brief CPUID */
    using CPUID = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Implementer */
    using CPUID_Implementer = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Variant */
    using CPUID_Variant = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Architecture */
    using CPUID_Architecture = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PartNo */
    using CPUID_PartNo = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Revision */
    using CPUID_Revision = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPUID_NS */
    using CPUID_NS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20000, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Implementer */
    using CPUID_NS_Implementer = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Variant */
    using CPUID_NS_Variant = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Architecture */
    using CPUID_NS_Architecture = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PartNo */
    using CPUID_NS_PartNo = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Revision */
    using CPUID_NS_Revision = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ICSR */
    using ICSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PENDNMISET */
    using ICSR_PENDNMISET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PENDNMICLR */
    using ICSR_PENDNMICLR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PENDSVSET */
    using ICSR_PENDSVSET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PENDSVCLR */
    using ICSR_PENDSVCLR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PENDSTSET */
    using ICSR_PENDSTSET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PENDSTCLR */
    using ICSR_PENDSTCLR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STTNS */
    using ICSR_STTNS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ISRPREEMPT */
    using ICSR_ISRPREEMPT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ISRPENDING */
    using ICSR_ISRPENDING = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VECTPENDING */
    using ICSR_VECTPENDING = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RETTOBASE */
    using ICSR_RETTOBASE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VECTACTIVE */
    using ICSR_VECTACTIVE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ICSR_NS */
    using ICSR_NS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20004, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PENDNMISET */
    using ICSR_NS_PENDNMISET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PENDNMICLR */
    using ICSR_NS_PENDNMICLR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PENDSVSET */
    using ICSR_NS_PENDSVSET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PENDSVCLR */
    using ICSR_NS_PENDSVCLR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PENDSTSET */
    using ICSR_NS_PENDSTSET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PENDSTCLR */
    using ICSR_NS_PENDSTCLR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STTNS */
    using ICSR_NS_STTNS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ISRPREEMPT */
    using ICSR_NS_ISRPREEMPT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ISRPENDING */
    using ICSR_NS_ISRPENDING = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VECTPENDING */
    using ICSR_NS_VECTPENDING = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RETTOBASE */
    using ICSR_NS_RETTOBASE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VECTACTIVE */
    using ICSR_NS_VECTACTIVE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VTOR */
    using VTOR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TBLOFF */
    using VTOR_TBLOFF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 25, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VTOR_NS */
    using VTOR_NS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20008, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TBLOFF */
    using VTOR_NS_TBLOFF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 25, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AIRCR */
    using AIRCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VECTKEY */
    using AIRCR_VECTKEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ENDIANNESS */
    using AIRCR_ENDIANNESS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIS */
    using AIRCR_PRIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BFHFNMINS */
    using AIRCR_BFHFNMINS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIGROUP */
    using AIRCR_PRIGROUP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IESB */
    using AIRCR_IESB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DIT */
    using AIRCR_DIT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSRESETREQS */
    using AIRCR_SYSRESETREQS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSRESETREQ */
    using AIRCR_SYSRESETREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VECTCLRACTIVE */
    using AIRCR_VECTCLRACTIVE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AIRCR_NS2000 */
    using AIRCR_NS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2000C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VECTKEY */
    using AIRCR_NS_VECTKEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ENDIANNESS */
    using AIRCR_NS_ENDIANNESS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIS */
    using AIRCR_NS_PRIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BFHFNMINS */
    using AIRCR_NS_BFHFNMINS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIGROUP */
    using AIRCR_NS_PRIGROUP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IESB */
    using AIRCR_NS_IESB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DIT */
    using AIRCR_NS_DIT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSRESETREQS */
    using AIRCR_NS_SYSRESETREQS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSRESETREQ */
    using AIRCR_NS_SYSRESETREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VECTCLRACTIVE */
    using AIRCR_NS_VECTCLRACTIVE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SCR */
    using SCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEVONPEND */
    using SCR_SEVONPEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SLEEPDEEPS */
    using SCR_SLEEPDEEPS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SLEEPDEEP */
    using SCR_SLEEPDEEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SLEEPONEXIT */
    using SCR_SLEEPONEXIT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SCR_NS */
    using SCR_NS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20010, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEVONPEND */
    using SCR_NS_SEVONPEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SLEEPDEEPS */
    using SCR_NS_SLEEPDEEPS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SLEEPDEEP */
    using SCR_NS_SLEEPDEEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SLEEPONEXIT */
    using SCR_NS_SLEEPONEXIT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CCR */
    using CCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TRD */
    using CCR_TRD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LOB */
    using CCR_LOB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BP */
    using CCR_BP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IC */
    using CCR_IC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DC */
    using CCR_DC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STKOFHFNMIGN */
    using CCR_STKOFHFNMIGN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BFHFNMIGN */
    using CCR_BFHFNMIGN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DIV_0_TRP */
    using CCR_DIV_0_TRP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UNALIGN_TRP */
    using CCR_UNALIGN_TRP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USERSETMPEND */
    using CCR_USERSETMPEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CCR_NS */
    using CCR_NS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20014, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TRD */
    using CCR_NS_TRD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LOB */
    using CCR_NS_LOB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BP */
    using CCR_NS_BP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IC */
    using CCR_NS_IC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DC */
    using CCR_NS_DC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STKOFHFNMIGN */
    using CCR_NS_STKOFHFNMIGN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BFHFNMIGN */
    using CCR_NS_BFHFNMIGN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DIV_0_TRP */
    using CCR_NS_DIV_0_TRP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UNALIGN_TRP */
    using CCR_NS_UNALIGN_TRP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USERSETMPEND */
    using CCR_NS_USERSETMPEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SHPR1 */
    using SHPR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_7 */
    using SHPR1_PRI_7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_6 */
    using SHPR1_PRI_6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_5 */
    using SHPR1_PRI_5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_4 */
    using SHPR1_PRI_4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SHPR1_NS */
    using SHPR1_NS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20018, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_7 */
    using SHPR1_NS_PRI_7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_6 */
    using SHPR1_NS_PRI_6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_5 */
    using SHPR1_NS_PRI_5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_4 */
    using SHPR1_NS_PRI_4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SHPR2 */
    using SHPR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_11 */
    using SHPR2_PRI_11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_10 field */
    using SHPR2_PRI_10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_9 field */
    using SHPR2_PRI_9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_8 field */
    using SHPR2_PRI_8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SHPR2_NS */
    using SHPR2_NS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2001C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_11 */
    using SHPR2_NS_PRI_11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_10 field */
    using SHPR2_NS_PRI_10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_9 field */
    using SHPR2_NS_PRI_9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_8 field */
    using SHPR2_NS_PRI_8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SHPR3 */
    using SHPR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_15 */
    using SHPR3_PRI_15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_14 */
    using SHPR3_PRI_14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_13 field */
    using SHPR3_PRI_13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_12 */
    using SHPR3_PRI_12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SHPR3_NS */
    using SHPR3_NS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20020, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_15 */
    using SHPR3_NS_PRI_15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_14 */
    using SHPR3_NS_PRI_14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_13 field */
    using SHPR3_NS_PRI_13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_12 */
    using SHPR3_NS_PRI_12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SHCSR */
    using SHCSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HARDFAULTPENDED */
    using SHCSR_HARDFAULTPENDED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SECUREFAULTPENDED */
    using SHCSR_SECUREFAULTPENDED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SECUREFAULTENA */
    using SHCSR_SECUREFAULTENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USGFAULTENA */
    using SHCSR_USGFAULTENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BUSFAULTENA */
    using SHCSR_BUSFAULTENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MEMFAULTENA */
    using SHCSR_MEMFAULTENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SVCALLPENDED */
    using SHCSR_SVCALLPENDED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BUSFAULTPENDED */
    using SHCSR_BUSFAULTPENDED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MEMFAULTPENDED */
    using SHCSR_MEMFAULTPENDED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USGFAULTPENDED */
    using SHCSR_USGFAULTPENDED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSTICKACT */
    using SHCSR_SYSTICKACT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PENDSVACT */
    using SHCSR_PENDSVACT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MONITORACT */
    using SHCSR_MONITORACT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SVCALLACT */
    using SHCSR_SVCALLACT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NMIACT */
    using SHCSR_NMIACT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SECUREFAULTACT */
    using SHCSR_SECUREFAULTACT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USGFAULTACT */
    using SHCSR_USGFAULTACT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HARDFAULTACT */
    using SHCSR_HARDFAULTACT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BUSFAULTACT */
    using SHCSR_BUSFAULTACT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MEMFAULTACT */
    using SHCSR_MEMFAULTACT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SHCSR_NS */
    using SHCSR_NS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20024, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HARDFAULTPENDED */
    using SHCSR_NS_HARDFAULTPENDED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SECUREFAULTPENDED */
    using SHCSR_NS_SECUREFAULTPENDED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SECUREFAULTENA */
    using SHCSR_NS_SECUREFAULTENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USGFAULTENA */
    using SHCSR_NS_USGFAULTENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BUSFAULTENA */
    using SHCSR_NS_BUSFAULTENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MEMFAULTENA */
    using SHCSR_NS_MEMFAULTENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SVCALLPENDED */
    using SHCSR_NS_SVCALLPENDED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BUSFAULTPENDED */
    using SHCSR_NS_BUSFAULTPENDED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MEMFAULTPENDED */
    using SHCSR_NS_MEMFAULTPENDED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USGFAULTPENDED */
    using SHCSR_NS_USGFAULTPENDED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SYSTICKACT */
    using SHCSR_NS_SYSTICKACT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PENDSVACT */
    using SHCSR_NS_PENDSVACT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MONITORACT */
    using SHCSR_NS_MONITORACT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SVCALLACT */
    using SHCSR_NS_SVCALLACT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NMIACT */
    using SHCSR_NS_NMIACT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SECUREFAULTACT */
    using SHCSR_NS_SECUREFAULTACT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USGFAULTACT */
    using SHCSR_NS_USGFAULTACT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HARDFAULTACT */
    using SHCSR_NS_HARDFAULTACT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BUSFAULTACT */
    using SHCSR_NS_BUSFAULTACT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MEMFAULTACT */
    using SHCSR_NS_MEMFAULTACT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CFSR */
    using CFSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UFSR */
    using CFSR_UFSR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BFSR */
    using CFSR_BFSR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMFSR */
    using CFSR_MMFSR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CFSR_NS */
    using CFSR_NS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20028, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UFSR */
    using CFSR_NS_UFSR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BFSR */
    using CFSR_NS_BFSR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMFSR */
    using CFSR_NS_MMFSR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMFSR */
    using MMFSR = ::EmbeddedPP::LowLevel::Register<std::uint8_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMARVALID */
    using MMFSR_MMARVALID = ::EmbeddedPP::LowLevel::BitField<std::uint8_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MLSPERR */
    using MMFSR_MLSPERR = ::EmbeddedPP::LowLevel::BitField<std::uint8_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MSTKERR */
    using MMFSR_MSTKERR = ::EmbeddedPP::LowLevel::BitField<std::uint8_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MUNSTKERR */
    using MMFSR_MUNSTKERR = ::EmbeddedPP::LowLevel::BitField<std::uint8_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DACCVIOL */
    using MMFSR_DACCVIOL = ::EmbeddedPP::LowLevel::BitField<std::uint8_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IACCVIOL */
    using MMFSR_IACCVIOL = ::EmbeddedPP::LowLevel::BitField<std::uint8_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMFSR_NS */
    using MMFSR_NS = ::EmbeddedPP::LowLevel::Register<std::uint8_t, 0x20028, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMARVALID */
    using MMFSR_NS_MMARVALID = ::EmbeddedPP::LowLevel::BitField<std::uint8_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MLSPERR */
    using MMFSR_NS_MLSPERR = ::EmbeddedPP::LowLevel::BitField<std::uint8_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MSTKERR */
    using MMFSR_NS_MSTKERR = ::EmbeddedPP::LowLevel::BitField<std::uint8_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MUNSTKERR */
    using MMFSR_NS_MUNSTKERR = ::EmbeddedPP::LowLevel::BitField<std::uint8_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DACCVIOL */
    using MMFSR_NS_DACCVIOL = ::EmbeddedPP::LowLevel::BitField<std::uint8_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IACCVIOL */
    using MMFSR_NS_IACCVIOL = ::EmbeddedPP::LowLevel::BitField<std::uint8_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BFSR */
    using BFSR = ::EmbeddedPP::LowLevel::Register<std::uint8_t, 0x29, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BFARVALID */
    using BFSR_BFARVALID = ::EmbeddedPP::LowLevel::BitField<std::uint8_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSPERR */
    using BFSR_LSPERR = ::EmbeddedPP::LowLevel::BitField<std::uint8_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STKERR */
    using BFSR_STKERR = ::EmbeddedPP::LowLevel::BitField<std::uint8_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UNSTKERR */
    using BFSR_UNSTKERR = ::EmbeddedPP::LowLevel::BitField<std::uint8_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IMPRECISERR */
    using BFSR_IMPRECISERR = ::EmbeddedPP::LowLevel::BitField<std::uint8_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRECISERR */
    using BFSR_PRECISERR = ::EmbeddedPP::LowLevel::BitField<std::uint8_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IBUSERR */
    using BFSR_IBUSERR = ::EmbeddedPP::LowLevel::BitField<std::uint8_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BFSR_NS */
    using BFSR_NS = ::EmbeddedPP::LowLevel::Register<std::uint8_t, 0x20029, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BFARVALID */
    using BFSR_NS_BFARVALID = ::EmbeddedPP::LowLevel::BitField<std::uint8_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LSPERR */
    using BFSR_NS_LSPERR = ::EmbeddedPP::LowLevel::BitField<std::uint8_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STKERR */
    using BFSR_NS_STKERR = ::EmbeddedPP::LowLevel::BitField<std::uint8_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UNSTKERR */
    using BFSR_NS_UNSTKERR = ::EmbeddedPP::LowLevel::BitField<std::uint8_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IMPRECISERR */
    using BFSR_NS_IMPRECISERR = ::EmbeddedPP::LowLevel::BitField<std::uint8_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRECISERR */
    using BFSR_NS_PRECISERR = ::EmbeddedPP::LowLevel::BitField<std::uint8_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IBUSERR */
    using BFSR_NS_IBUSERR = ::EmbeddedPP::LowLevel::BitField<std::uint8_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UFSR */
    using UFSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2A, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DIVBYZERO */
    using UFSR_DIVBYZERO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UNALIGNED */
    using UFSR_UNALIGNED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STKOF */
    using UFSR_STKOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NOCP */
    using UFSR_NOCP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief INVPC */
    using UFSR_INVPC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief INVSTATE */
    using UFSR_INVSTATE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UNDEFINSTR */
    using UFSR_UNDEFINSTR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UFSR_NS */
    using UFSR_NS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2002A, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DIVBYZERO */
    using UFSR_NS_DIVBYZERO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UNALIGNED */
    using UFSR_NS_UNALIGNED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STKOF */
    using UFSR_NS_STKOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NOCP */
    using UFSR_NS_NOCP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief INVPC */
    using UFSR_NS_INVPC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief INVSTATE */
    using UFSR_NS_INVSTATE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UNDEFINSTR */
    using UFSR_NS_UNDEFINSTR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HFSR */
    using HFSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DEBUGEVT */
    using HFSR_DEBUGEVT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FORCED */
    using HFSR_FORCED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VECTTBL */
    using HFSR_VECTTBL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HFSR_NS */
    using HFSR_NS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2002C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DEBUGEVT */
    using HFSR_NS_DEBUGEVT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FORCED */
    using HFSR_NS_FORCED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VECTTBL */
    using HFSR_NS_VECTTBL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMFAR */
    using MMFAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADDRESS */
    using MMFAR_ADDRESS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MMFAR_NS */
    using MMFAR_NS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20034, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADDRESS */
    using MMFAR_NS_ADDRESS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BFAR */
    using BFAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADDRESS */
    using BFAR_ADDRESS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BFAR_NS */
    using BFAR_NS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20038, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADDRESS */
    using BFAR_NS_ADDRESS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AFSR */
    using AFSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IMPLEMENTATION_DEFINED */
    using AFSR_IMPLEMENTATION_DEFINED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AFSR_NS */
    using AFSR_NS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2003C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IMPLEMENTATION_DEFINED */
    using AFSR_NS_IMPLEMENTATION_DEFINED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ID_PFR0 */
    using ID_PFR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RAS one */
    using ID_PFR0_RAS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief State one */
    using ID_PFR0_State1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief State two */
    using ID_PFR0_State0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ID_PFR0_NS */
    using ID_PFR0_NS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20040, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RAS one */
    using ID_PFR0_NS_RAS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief State one */
    using ID_PFR0_NS_State1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief State two */
    using ID_PFR0_NS_State0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ID_PFR1 */
    using ID_PFR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MProgMod */
    using ID_PFR1_MProgMod = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security */
    using ID_PFR1_Security = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ID_PFR1_NS */
    using ID_PFR1_NS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20044, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MProgMod */
    using ID_PFR1_NS_MProgMod = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Security */
    using ID_PFR1_NS_Security = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ID_DFR0 */
    using ID_DFR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MProfDbg */
    using ID_DFR0_MProfDbg = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UDE */
    using ID_DFR0_UDE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ID_DFR0_NS */
    using ID_DFR0_NS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20048, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MProfDbg */
    using ID_DFR0_NS_MProfDbg = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UDE */
    using ID_DFR0_NS_UDE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ID_AFR0 */
    using ID_AFR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IMPDEF0 */
    using ID_AFR0_IMPDEF0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IMPDEF1 */
    using ID_AFR0_IMPDEF1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IMPDEF2 */
    using ID_AFR0_IMPDEF2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IMPDEF3 */
    using ID_AFR0_IMPDEF3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ID_AFR0_NS */
    using ID_AFR0_NS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2004C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IMPDEF0 */
    using ID_AFR0_NS_IMPDEF0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IMPDEF1 */
    using ID_AFR0_NS_IMPDEF1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IMPDEF2 */
    using ID_AFR0_NS_IMPDEF2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IMPDEF3 */
    using ID_AFR0_NS_IMPDEF3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ID_MMFR0 */
    using ID_MMFR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AuxReg */
    using ID_MMFR0_AuxReg = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TCM */
    using ID_MMFR0_TCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ShareLvl */
    using ID_MMFR0_ShareLvl = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OuterShr */
    using ID_MMFR0_OuterShr = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PMSA */
    using ID_MMFR0_PMSA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ID_MMFR0_NS */
    using ID_MMFR0_NS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20050, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AuxReg */
    using ID_MMFR0_NS_AuxReg = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TCM */
    using ID_MMFR0_NS_TCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ShareLvl */
    using ID_MMFR0_NS_ShareLvl = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OuterShr */
    using ID_MMFR0_NS_OuterShr = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PMSA */
    using ID_MMFR0_NS_PMSA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ID_MMFR1 */
    using ID_MMFR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ID_MMFR1_NS */
    using ID_MMFR1_NS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20054, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ID_MMFR2 */
    using ID_MMFR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x58, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WFI stall */
    using ID_MMFR2_WFIStall = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ID_MMFR2_NS */
    using ID_MMFR2_NS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20058, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WFI stall */
    using ID_MMFR2_NS_WFIStall = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ID_MMFR3 */
    using ID_MMFR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BPMaint */
    using ID_MMFR3_BPMaint = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CMaintSW */
    using ID_MMFR3_CMaintSW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CMaintVA */
    using ID_MMFR3_CMaintVA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ID_MMFR3_NS */
    using ID_MMFR3_NS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2005C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BPMaint */
    using ID_MMFR3_NS_BPMaint = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CMaintSW */
    using ID_MMFR3_NS_CMaintSW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CMaintVA */
    using ID_MMFR3_NS_CMaintVA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ID_ISAR0 */
    using ID_ISAR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Divide */
    using ID_ISAR0_Divide = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Debug */
    using ID_ISAR0_Debug = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Coproc */
    using ID_ISAR0_Coproc = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CmpBranch */
    using ID_ISAR0_CmpBranch = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bit field */
    using ID_ISAR0_BitField = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bit count */
    using ID_ISAR0_BitCount = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ID_ISAR0_NS */
    using ID_ISAR0_NS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20060, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Divide */
    using ID_ISAR0_NS_Divide = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Debug */
    using ID_ISAR0_NS_Debug = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Coproc */
    using ID_ISAR0_NS_Coproc = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CmpBranch */
    using ID_ISAR0_NS_CmpBranch = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bit field */
    using ID_ISAR0_NS_BitField = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bit count */
    using ID_ISAR0_NS_BitCount = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ID_ISAR1 */
    using ID_ISAR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x64, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interwork */
    using ID_ISAR1_Interwork = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Immediate */
    using ID_ISAR1_Immediate = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief If-Then */
    using ID_ISAR1_IfThen = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extend */
    using ID_ISAR1_Extend = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ID_ISAR1_NS */
    using ID_ISAR1_NS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20064, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interwork */
    using ID_ISAR1_NS_Interwork = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Immediate */
    using ID_ISAR1_NS_Immediate = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief If-Then */
    using ID_ISAR1_NS_IfThen = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extend */
    using ID_ISAR1_NS_Extend = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ID_ISAR2 */
    using ID_ISAR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x68, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reversal */
    using ID_ISAR2_Reversal = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MultU */
    using ID_ISAR2_MultU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MultS */
    using ID_ISAR2_MultS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Mult */
    using ID_ISAR2_Mult = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MultiAccessInt */
    using ID_ISAR2_MultiAccessInt = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MemHint */
    using ID_ISAR2_MemHint = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LoadStore */
    using ID_ISAR2_LoadStore = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ID_ISAR2_NS */
    using ID_ISAR2_NS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20068, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reversal */
    using ID_ISAR2_NS_Reversal = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MultU */
    using ID_ISAR2_NS_MultU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MultS */
    using ID_ISAR2_NS_MultS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Mult */
    using ID_ISAR2_NS_Mult = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MultiAccessInt */
    using ID_ISAR2_NS_MultiAccessInt = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MemHint */
    using ID_ISAR2_NS_MemHint = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LoadStore */
    using ID_ISAR2_NS_LoadStore = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ID_ISAR3 */
    using ID_ISAR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TrueNOP */
    using ID_ISAR3_TrueNOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief T32 copy */
    using ID_ISAR3_T32Copy = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TabBranch */
    using ID_ISAR3_TabBranch = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SynchPrim */
    using ID_ISAR3_SynchPrim = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SVC */
    using ID_ISAR3_SVC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SIMD */
    using ID_ISAR3_SIMD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Saturate */
    using ID_ISAR3_Saturate = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ID_ISAR3_NS */
    using ID_ISAR3_NS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2006C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TrueNOP */
    using ID_ISAR3_NS_TrueNOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief T32 copy */
    using ID_ISAR3_NS_T32Copy = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TabBranch */
    using ID_ISAR3_NS_TabBranch = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SynchPrim */
    using ID_ISAR3_NS_SynchPrim = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SVC */
    using ID_ISAR3_NS_SVC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SIMD */
    using ID_ISAR3_NS_SIMD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Saturate */
    using ID_ISAR3_NS_Saturate = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ID_ISAR4 */
    using ID_ISAR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x70, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PSR_M */
    using ID_ISAR4_PSR_M = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SyncPrim_frac */
    using ID_ISAR4_SyncPrim_frac = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Barrier */
    using ID_ISAR4_Barrier = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Writeback */
    using ID_ISAR4_Writeback = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WithShifts */
    using ID_ISAR4_WithShifts = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Unpriv */
    using ID_ISAR4_Unpriv = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ID_ISAR4_NS */
    using ID_ISAR4_NS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20070, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PSR_M */
    using ID_ISAR4_NS_PSR_M = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SyncPrim_frac */
    using ID_ISAR4_NS_SyncPrim_frac = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Barrier */
    using ID_ISAR4_NS_Barrier = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Writeback */
    using ID_ISAR4_NS_Writeback = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WithShifts */
    using ID_ISAR4_NS_WithShifts = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Unpriv */
    using ID_ISAR4_NS_Unpriv = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ID_ISAR5 */
    using ID_ISAR5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x74, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PACBTI */
    using ID_ISAR5_PACBTI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ID_ISAR5_NS */
    using ID_ISAR5_NS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20074, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PACBTI */
    using ID_ISAR5_NS_PACBTI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CLIDR */
    using CLIDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x78, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Ctype1 */
    using CLIDR_Ctype1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Ctype2 */
    using CLIDR_Ctype2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Ctype3 */
    using CLIDR_Ctype3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Ctype4 */
    using CLIDR_Ctype4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Ctype5 */
    using CLIDR_Ctype5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Ctype6 */
    using CLIDR_Ctype6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Ctype7 */
    using CLIDR_Ctype7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LoUIS */
    using CLIDR_LoUIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LoC */
    using CLIDR_LoC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LoUU */
    using CLIDR_LoUU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ICB */
    using CLIDR_ICB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CLIDR_NS */
    using CLIDR_NS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20078, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Ctype1 */
    using CLIDR_NS_Ctype1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Ctype2 */
    using CLIDR_NS_Ctype2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Ctype3 */
    using CLIDR_NS_Ctype3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Ctype4 */
    using CLIDR_NS_Ctype4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Ctype5 */
    using CLIDR_NS_Ctype5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Ctype6 */
    using CLIDR_NS_Ctype6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Ctype7 */
    using CLIDR_NS_Ctype7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LoUIS */
    using CLIDR_NS_LoUIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LoC */
    using CLIDR_NS_LoC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LoUU */
    using CLIDR_NS_LoUU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ICB */
    using CLIDR_NS_ICB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CTR */
    using CTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IminLine */
    using CTR_IminLine = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DminLine */
    using CTR_DminLine = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ERG */
    using CTR_ERG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CWG */
    using CTR_CWG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Format */
    using CTR_Format = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CTR_NS */
    using CTR_NS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2007C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IminLine */
    using CTR_NS_IminLine = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DminLine */
    using CTR_NS_DminLine = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ERG */
    using CTR_NS_ERG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CWG */
    using CTR_NS_CWG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Format */
    using CTR_NS_Format = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CCSIDR */
    using CCSIDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x80, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WT */
    using CCSIDR_WT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Writeback */
    using CCSIDR_WB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RA */
    using CCSIDR_RA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WA */
    using CCSIDR_WA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NumSets */
    using CCSIDR_NumSets = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 15, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Associativity */
    using CCSIDR_Associativity = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Line size */
    using CCSIDR_LineSize = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CCSIDR_NS */
    using CCSIDR_NS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20080, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WT */
    using CCSIDR_NS_WT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Writeback */
    using CCSIDR_NS_WB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RA */
    using CCSIDR_NS_RA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WA */
    using CCSIDR_NS_WA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NumSets */
    using CCSIDR_NS_NumSets = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 15, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Associativity */
    using CCSIDR_NS_Associativity = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Line size */
    using CCSIDR_NS_LineSize = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CSSELR */
    using CSSELR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x84, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CP11 */
    using CSSELR_CP11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CP10 */
    using CSSELR_CP10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CP7 */
    using CSSELR_CP7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CP6 */
    using CSSELR_CP6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CP5 */
    using CSSELR_CP5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CP4 */
    using CSSELR_CP4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CP3 */
    using CSSELR_CP3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CP2 */
    using CSSELR_CP2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CP1 */
    using CSSELR_CP1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CP0 */
    using CSSELR_CP0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CSSELR_NS */
    using CSSELR_NS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20084, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CP11 */
    using CSSELR_NS_CP11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CP10 */
    using CSSELR_NS_CP10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CP7 */
    using CSSELR_NS_CP7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CP6 */
    using CSSELR_NS_CP6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CP5 */
    using CSSELR_NS_CP5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CP4 */
    using CSSELR_NS_CP4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CP3 */
    using CSSELR_NS_CP3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CP2 */
    using CSSELR_NS_CP2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CP1 */
    using CSSELR_NS_CP1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CP0 */
    using CSSELR_NS_CP0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPACR */
    using CPACR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x88, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CP0 */
    using CPACR_CP0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CP1 */
    using CPACR_CP1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CP2 */
    using CPACR_CP2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CP3 */
    using CPACR_CP3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CP4 */
    using CPACR_CP4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CP5 */
    using CPACR_CP5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CP6 */
    using CPACR_CP6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CP7 */
    using CPACR_CP7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CP10 */
    using CPACR_CP10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CP11 */
    using CPACR_CP11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CPACR_NS */
    using CPACR_NS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20088, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CP0 */
    using CPACR_NS_CP0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CP1 */
    using CPACR_NS_CP1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CP2 */
    using CPACR_NS_CP2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CP3 */
    using CPACR_NS_CP3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CP4 */
    using CPACR_NS_CP4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CP5 */
    using CPACR_NS_CP5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CP6 */
    using CPACR_NS_CP6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CP7 */
    using CPACR_NS_CP7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CP10 */
    using CPACR_NS_CP10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CP11 */
    using CPACR_NS_CP11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NSACR */
    using NSACR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CP0 */
    using NSACR_CP0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CP1 */
    using NSACR_CP1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CP2 */
    using NSACR_CP2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CP3 */
    using NSACR_CP3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CP4 */
    using NSACR_CP4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CP5 */
    using NSACR_CP5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CP6 */
    using NSACR_CP6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CP7 */
    using NSACR_CP7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CP10 */
    using NSACR_CP10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CP11 */
    using NSACR_CP11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NSACR_NS */
    using NSACR_NS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2008C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CP0 */
    using NSACR_NS_CP0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CP1 */
    using NSACR_NS_CP1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CP2 */
    using NSACR_NS_CP2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CP3 */
    using NSACR_NS_CP3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CP4 */
    using NSACR_NS_CP4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CP5 */
    using NSACR_NS_CP5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CP6 */
    using NSACR_NS_CP6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CP7 */
    using NSACR_NS_CP7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CP10 */
    using NSACR_NS_CP10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CP11 */
    using NSACR_NS_CP11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
