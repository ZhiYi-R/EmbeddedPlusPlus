/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_CORTEX_M7_NVIC_HPP
#define EMBEDDED_PP_CORTEX_M7_NVIC_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Nested Vectored Interrupt Controller registers */
namespace Cortex_M7::NVIC {

    /** @brief Interrupt Controller Type Register */
    using ICTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief INTLINESNUM */
    using ICTR_INTLINESNUM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Set-Enable Register */
    using NVIC_ISER0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xFC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SETENA */
    using NVIC_ISER0_SETENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Set-Enable Register */
    using NVIC_ISER1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x100, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SETENA */
    using NVIC_ISER1_SETENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Set-Enable Register */
    using NVIC_ISER2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x104, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SETENA */
    using NVIC_ISER2_SETENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Set-Enable Register */
    using NVIC_ISER3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x108, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SETENA */
    using NVIC_ISER3_SETENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Set-Enable Register */
    using NVIC_ISER4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SETENA */
    using NVIC_ISER4_SETENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Set-Enable Register */
    using NVIC_ISER5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x110, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SETENA */
    using NVIC_ISER5_SETENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Set-Enable Register */
    using NVIC_ISER6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x114, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SETENA */
    using NVIC_ISER6_SETENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Set-Enable Register */
    using NVIC_ISER7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x118, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SETENA */
    using NVIC_ISER7_SETENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Clear-Enable Register */
    using NVIC_ICER0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x17C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CLRENA */
    using NVIC_ICER0_CLRENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Clear-Enable Register */
    using NVIC_ICER1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x180, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CLRENA */
    using NVIC_ICER1_CLRENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Clear-Enable Register */
    using NVIC_ICER2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x184, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CLRENA */
    using NVIC_ICER2_CLRENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Clear-Enable Register */
    using NVIC_ICER3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x188, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CLRENA */
    using NVIC_ICER3_CLRENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Clear-Enable Register */
    using NVIC_ICER4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CLRENA */
    using NVIC_ICER4_CLRENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Clear-Enable Register */
    using NVIC_ICER5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x190, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CLRENA */
    using NVIC_ICER5_CLRENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Clear-Enable Register */
    using NVIC_ICER6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x194, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CLRENA */
    using NVIC_ICER6_CLRENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Clear-Enable Register */
    using NVIC_ICER7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x198, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CLRENA */
    using NVIC_ICER7_CLRENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Set-Pending Register */
    using NVIC_ISPR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1FC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SETPEND */
    using NVIC_ISPR0_SETPEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Set-Pending Register */
    using NVIC_ISPR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x200, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SETPEND */
    using NVIC_ISPR1_SETPEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Set-Pending Register */
    using NVIC_ISPR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x204, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SETPEND */
    using NVIC_ISPR2_SETPEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Set-Pending Register */
    using NVIC_ISPR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x208, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SETPEND */
    using NVIC_ISPR3_SETPEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Set-Pending Register */
    using NVIC_ISPR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SETPEND */
    using NVIC_ISPR4_SETPEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Set-Pending Register */
    using NVIC_ISPR5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x210, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SETPEND */
    using NVIC_ISPR5_SETPEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Set-Pending Register */
    using NVIC_ISPR6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x214, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SETPEND */
    using NVIC_ISPR6_SETPEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Set-Pending Register */
    using NVIC_ISPR7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x218, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SETPEND */
    using NVIC_ISPR7_SETPEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Clear-Pending Register */
    using NVIC_ICPR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x27C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CLRPEND */
    using NVIC_ICPR0_CLRPEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Clear-Pending Register */
    using NVIC_ICPR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x280, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CLRPEND */
    using NVIC_ICPR1_CLRPEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Clear-Pending Register */
    using NVIC_ICPR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x284, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CLRPEND */
    using NVIC_ICPR2_CLRPEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Clear-Pending Register */
    using NVIC_ICPR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x288, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CLRPEND */
    using NVIC_ICPR3_CLRPEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Clear-Pending Register */
    using NVIC_ICPR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CLRPEND */
    using NVIC_ICPR4_CLRPEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Clear-Pending Register */
    using NVIC_ICPR5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x290, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CLRPEND */
    using NVIC_ICPR5_CLRPEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Clear-Pending Register */
    using NVIC_ICPR6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x294, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CLRPEND */
    using NVIC_ICPR6_CLRPEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Clear-Pending Register */
    using NVIC_ICPR7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x298, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CLRPEND */
    using NVIC_ICPR7_CLRPEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Active Bit Register */
    using NVIC_IABR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2FC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACTIVE */
    using NVIC_IABR0_ACTIVE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Active Bit Register */
    using NVIC_IABR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x300, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACTIVE */
    using NVIC_IABR1_ACTIVE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Active Bit Register */
    using NVIC_IABR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x304, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACTIVE */
    using NVIC_IABR2_ACTIVE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Active Bit Register */
    using NVIC_IABR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x308, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACTIVE */
    using NVIC_IABR3_ACTIVE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Active Bit Register */
    using NVIC_IABR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACTIVE */
    using NVIC_IABR4_ACTIVE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Active Bit Register */
    using NVIC_IABR5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x310, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACTIVE */
    using NVIC_IABR5_ACTIVE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Active Bit Register */
    using NVIC_IABR6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x314, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACTIVE */
    using NVIC_IABR6_ACTIVE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Active Bit Register */
    using NVIC_IABR7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x318, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACTIVE */
    using NVIC_IABR7_ACTIVE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR0 */
    using NVIC_IPR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3FC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR0_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR0_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR0_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR0_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR1 */
    using NVIC_IPR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x400, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR1_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR1_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR1_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR1_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR2 */
    using NVIC_IPR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x404, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR2_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR2_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR2_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR2_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR3 */
    using NVIC_IPR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x408, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR3_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR3_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR3_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR3_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR4 */
    using NVIC_IPR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR4_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR4_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR4_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR4_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR5 */
    using NVIC_IPR5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x410, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR5_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR5_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR5_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR5_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR6 */
    using NVIC_IPR6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x414, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR6_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR6_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR6_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR6_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR7 */
    using NVIC_IPR7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x418, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR7_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR7_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR7_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR7_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR8 */
    using NVIC_IPR8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x41C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR8_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR8_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR8_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR8_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR9 */
    using NVIC_IPR9 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x420, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR9_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR9_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR9_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR9_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR10 */
    using NVIC_IPR10 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x424, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR10_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR10_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR10_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR10_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR11 */
    using NVIC_IPR11 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x428, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR11_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR11_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR11_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR11_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR12 */
    using NVIC_IPR12 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x42C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR12_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR12_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR12_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR12_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR13 */
    using NVIC_IPR13 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x430, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR13_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR13_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR13_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR13_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR14 */
    using NVIC_IPR14 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x434, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR14_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR14_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR14_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR14_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR15 */
    using NVIC_IPR15 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x438, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR15_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR15_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR15_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR15_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR16 */
    using NVIC_IPR16 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x43C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR16_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR16_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR16_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR16_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR17 */
    using NVIC_IPR17 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x440, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR17_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR17_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR17_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR17_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR18 */
    using NVIC_IPR18 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x444, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR18_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR18_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR18_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR18_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR19 */
    using NVIC_IPR19 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x448, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR19_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR19_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR19_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR19_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR20 */
    using NVIC_IPR20 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR20_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR20_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR20_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR20_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR21 */
    using NVIC_IPR21 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x450, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR21_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR21_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR21_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR21_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR22 */
    using NVIC_IPR22 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x454, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR22_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR22_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR22_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR22_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR23 */
    using NVIC_IPR23 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x458, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR23_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR23_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR23_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR23_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR24 */
    using NVIC_IPR24 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x45C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR24_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR24_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR24_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR24_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR25 */
    using NVIC_IPR25 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x460, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR25_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR25_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR25_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR25_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR26 */
    using NVIC_IPR26 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x464, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR26_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR26_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR26_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR26_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR27 */
    using NVIC_IPR27 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x468, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR27_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR27_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR27_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR27_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR28 */
    using NVIC_IPR28 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x46C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR28_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR28_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR28_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR28_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR29 */
    using NVIC_IPR29 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x470, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR29_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR29_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR29_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR29_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR30 */
    using NVIC_IPR30 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x474, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR30_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR30_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR30_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR30_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR31 */
    using NVIC_IPR31 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x478, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR31_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR31_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR31_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR31_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR32 */
    using NVIC_IPR32 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x47C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR32_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR32_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR32_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR32_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR33 */
    using NVIC_IPR33 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x480, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR33_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR33_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR33_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR33_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR34 */
    using NVIC_IPR34 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x484, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR34_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR34_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR34_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR34_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR35 */
    using NVIC_IPR35 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x488, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR35_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR35_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR35_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR35_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR36 */
    using NVIC_IPR36 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR36_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR36_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR36_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR36_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR37 */
    using NVIC_IPR37 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x490, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR37_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR37_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR37_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR37_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR38 */
    using NVIC_IPR38 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x494, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR38_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR38_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR38_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR38_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR39 */
    using NVIC_IPR39 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x498, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR39_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR39_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR39_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR39_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR40 */
    using NVIC_IPR40 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x49C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR40_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR40_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR40_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR40_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR41 */
    using NVIC_IPR41 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR41_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR41_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR41_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR41_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR42 */
    using NVIC_IPR42 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4A4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR42_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR42_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR42_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR42_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR43 */
    using NVIC_IPR43 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4A8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR43_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR43_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR43_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR43_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR44 */
    using NVIC_IPR44 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4AC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR44_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR44_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR44_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR44_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR45 */
    using NVIC_IPR45 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4B0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR45_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR45_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR45_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR45_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR46 */
    using NVIC_IPR46 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4B4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR46_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR46_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR46_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR46_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR47 */
    using NVIC_IPR47 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4B8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR47_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR47_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR47_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR47_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR48 */
    using NVIC_IPR48 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4BC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR48_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR48_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR48_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR48_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR49 */
    using NVIC_IPR49 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4C0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR49_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR49_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR49_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR49_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR50 */
    using NVIC_IPR50 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4C4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR50_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR50_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR50_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR50_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR51 */
    using NVIC_IPR51 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4C8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR51_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR51_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR51_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR51_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR52 */
    using NVIC_IPR52 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4CC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR52_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR52_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR52_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR52_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR53 */
    using NVIC_IPR53 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4D0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR53_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR53_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR53_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR53_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR54 */
    using NVIC_IPR54 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4D4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR54_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR54_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR54_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR54_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR55 */
    using NVIC_IPR55 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4D8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR55_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR55_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR55_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR55_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR56 */
    using NVIC_IPR56 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4DC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR56_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR56_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR56_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR56_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR57 */
    using NVIC_IPR57 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4E0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR57_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR57_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR57_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR57_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR58 */
    using NVIC_IPR58 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4E4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR58_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR58_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR58_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR58_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR59 */
    using NVIC_IPR59 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4E8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR59_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR59_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR59_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR59_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
