/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_CORTEX_M55_NVIC_HPP
#define EMBEDDED_PP_CORTEX_M55_NVIC_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Nested Vectored Interrupt Controller registers */
namespace Cortex_M55::NVIC {

    /** @brief Interrupt Set-Enable Register */
    using NVIC_ISER0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SETENA */
    using NVIC_ISER0_SETENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Set-Enable Register */
    using NVIC_ISER1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SETENA */
    using NVIC_ISER1_SETENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Set-Enable Register */
    using NVIC_ISER2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SETENA */
    using NVIC_ISER2_SETENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Set-Enable Register */
    using NVIC_ISER3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SETENA */
    using NVIC_ISER3_SETENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Set-Enable Register */
    using NVIC_ISER4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SETENA */
    using NVIC_ISER4_SETENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Set-Enable Register */
    using NVIC_ISER5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SETENA */
    using NVIC_ISER5_SETENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Set-Enable Register */
    using NVIC_ISER6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SETENA */
    using NVIC_ISER6_SETENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Set-Enable Register */
    using NVIC_ISER7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SETENA */
    using NVIC_ISER7_SETENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Set-Enable Register */
    using NVIC_ISER8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SETENA */
    using NVIC_ISER8_SETENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Set-Enable Register */
    using NVIC_ISER9 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SETENA */
    using NVIC_ISER9_SETENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Set-Enable Register */
    using NVIC_ISER10 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SETENA */
    using NVIC_ISER10_SETENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Set-Enable Register */
    using NVIC_ISER11 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SETENA */
    using NVIC_ISER11_SETENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Set-Enable Register */
    using NVIC_ISER12 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SETENA */
    using NVIC_ISER12_SETENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Set-Enable Register */
    using NVIC_ISER13 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SETENA */
    using NVIC_ISER13_SETENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Set-Enable Register */
    using NVIC_ISER14 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SETENA */
    using NVIC_ISER14_SETENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Set-Enable Register */
    using NVIC_ISER15 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SETENA */
    using NVIC_ISER15_SETENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Clear-Enable Register */
    using NVIC_ICER0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x80, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CLRENA */
    using NVIC_ICER0_CLRENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Clear-Enable Register */
    using NVIC_ICER1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x84, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CLRENA */
    using NVIC_ICER1_CLRENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Clear-Enable Register */
    using NVIC_ICER2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x88, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CLRENA */
    using NVIC_ICER2_CLRENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Clear-Enable Register */
    using NVIC_ICER3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CLRENA */
    using NVIC_ICER3_CLRENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Clear-Enable Register */
    using NVIC_ICER4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x90, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CLRENA */
    using NVIC_ICER4_CLRENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Clear-Enable Register */
    using NVIC_ICER5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x94, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CLRENA */
    using NVIC_ICER5_CLRENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Clear-Enable Register */
    using NVIC_ICER6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x98, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CLRENA */
    using NVIC_ICER6_CLRENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Clear-Enable Register */
    using NVIC_ICER7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CLRENA */
    using NVIC_ICER7_CLRENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Clear-Enable Register */
    using NVIC_ICER8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CLRENA */
    using NVIC_ICER8_CLRENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Clear-Enable Register */
    using NVIC_ICER9 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CLRENA */
    using NVIC_ICER9_CLRENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Clear-Enable Register */
    using NVIC_ICER10 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CLRENA */
    using NVIC_ICER10_CLRENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Clear-Enable Register */
    using NVIC_ICER11 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xAC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CLRENA */
    using NVIC_ICER11_CLRENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Clear-Enable Register */
    using NVIC_ICER12 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CLRENA */
    using NVIC_ICER12_CLRENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Clear-Enable Register */
    using NVIC_ICER13 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CLRENA */
    using NVIC_ICER13_CLRENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Clear-Enable Register */
    using NVIC_ICER14 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CLRENA */
    using NVIC_ICER14_CLRENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Clear-Enable Register */
    using NVIC_ICER15 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CLRENA */
    using NVIC_ICER15_CLRENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Set-Pending Register */
    using NVIC_ISPR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x100, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SETPEND */
    using NVIC_ISPR0_SETPEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Set-Pending Register */
    using NVIC_ISPR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x104, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SETPEND */
    using NVIC_ISPR1_SETPEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Set-Pending Register */
    using NVIC_ISPR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x108, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SETPEND */
    using NVIC_ISPR2_SETPEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Set-Pending Register */
    using NVIC_ISPR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SETPEND */
    using NVIC_ISPR3_SETPEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Set-Pending Register */
    using NVIC_ISPR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x110, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SETPEND */
    using NVIC_ISPR4_SETPEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Set-Pending Register */
    using NVIC_ISPR5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x114, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SETPEND */
    using NVIC_ISPR5_SETPEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Set-Pending Register */
    using NVIC_ISPR6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x118, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SETPEND */
    using NVIC_ISPR6_SETPEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Set-Pending Register */
    using NVIC_ISPR7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x11C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SETPEND */
    using NVIC_ISPR7_SETPEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Set-Pending Register */
    using NVIC_ISPR8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x120, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SETPEND */
    using NVIC_ISPR8_SETPEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Set-Pending Register */
    using NVIC_ISPR9 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x124, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SETPEND */
    using NVIC_ISPR9_SETPEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Set-Pending Register */
    using NVIC_ISPR10 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x128, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SETPEND */
    using NVIC_ISPR10_SETPEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Set-Pending Register */
    using NVIC_ISPR11 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x12C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SETPEND */
    using NVIC_ISPR11_SETPEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Set-Pending Register */
    using NVIC_ISPR12 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x130, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SETPEND */
    using NVIC_ISPR12_SETPEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Set-Pending Register */
    using NVIC_ISPR13 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x134, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SETPEND */
    using NVIC_ISPR13_SETPEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Set-Pending Register */
    using NVIC_ISPR14 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x138, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SETPEND */
    using NVIC_ISPR14_SETPEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Set-Pending Register */
    using NVIC_ISPR15 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x13C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SETPEND */
    using NVIC_ISPR15_SETPEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Clear-Pending Register */
    using NVIC_ICPR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x180, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CLRPEND */
    using NVIC_ICPR0_CLRPEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Clear-Pending Register */
    using NVIC_ICPR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x184, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CLRPEND */
    using NVIC_ICPR1_CLRPEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Clear-Pending Register */
    using NVIC_ICPR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x188, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CLRPEND */
    using NVIC_ICPR2_CLRPEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Clear-Pending Register */
    using NVIC_ICPR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CLRPEND */
    using NVIC_ICPR3_CLRPEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Clear-Pending Register */
    using NVIC_ICPR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x190, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CLRPEND */
    using NVIC_ICPR4_CLRPEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Clear-Pending Register */
    using NVIC_ICPR5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x194, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CLRPEND */
    using NVIC_ICPR5_CLRPEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Clear-Pending Register */
    using NVIC_ICPR6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x198, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CLRPEND */
    using NVIC_ICPR6_CLRPEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Clear-Pending Register */
    using NVIC_ICPR7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x19C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CLRPEND */
    using NVIC_ICPR7_CLRPEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Clear-Pending Register */
    using NVIC_ICPR8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CLRPEND */
    using NVIC_ICPR8_CLRPEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Clear-Pending Register */
    using NVIC_ICPR9 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1A4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CLRPEND */
    using NVIC_ICPR9_CLRPEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Clear-Pending Register */
    using NVIC_ICPR10 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1A8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CLRPEND */
    using NVIC_ICPR10_CLRPEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Clear-Pending Register */
    using NVIC_ICPR11 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1AC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CLRPEND */
    using NVIC_ICPR11_CLRPEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Clear-Pending Register */
    using NVIC_ICPR12 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1B0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CLRPEND */
    using NVIC_ICPR12_CLRPEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Clear-Pending Register */
    using NVIC_ICPR13 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1B4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CLRPEND */
    using NVIC_ICPR13_CLRPEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Clear-Pending Register */
    using NVIC_ICPR14 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1B8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CLRPEND */
    using NVIC_ICPR14_CLRPEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Clear-Pending Register */
    using NVIC_ICPR15 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1BC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CLRPEND */
    using NVIC_ICPR15_CLRPEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Active Bit Register */
    using NVIC_IABR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x200, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACTIVE */
    using NVIC_IABR0_ACTIVE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Active Bit Register */
    using NVIC_IABR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x204, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACTIVE */
    using NVIC_IABR1_ACTIVE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Active Bit Register */
    using NVIC_IABR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x208, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACTIVE */
    using NVIC_IABR2_ACTIVE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Active Bit Register */
    using NVIC_IABR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACTIVE */
    using NVIC_IABR3_ACTIVE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Active Bit Register */
    using NVIC_IABR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x210, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACTIVE */
    using NVIC_IABR4_ACTIVE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Active Bit Register */
    using NVIC_IABR5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x214, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACTIVE */
    using NVIC_IABR5_ACTIVE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Active Bit Register */
    using NVIC_IABR6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x218, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACTIVE */
    using NVIC_IABR6_ACTIVE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Active Bit Register */
    using NVIC_IABR7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x21C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACTIVE */
    using NVIC_IABR7_ACTIVE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Active Bit Register */
    using NVIC_IABR8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x220, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACTIVE */
    using NVIC_IABR8_ACTIVE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Active Bit Register */
    using NVIC_IABR9 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x224, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACTIVE */
    using NVIC_IABR9_ACTIVE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Active Bit Register */
    using NVIC_IABR10 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x228, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACTIVE */
    using NVIC_IABR10_ACTIVE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Active Bit Register */
    using NVIC_IABR11 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x22C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACTIVE */
    using NVIC_IABR11_ACTIVE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Active Bit Register */
    using NVIC_IABR12 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x230, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACTIVE */
    using NVIC_IABR12_ACTIVE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Active Bit Register */
    using NVIC_IABR13 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x234, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACTIVE */
    using NVIC_IABR13_ACTIVE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Active Bit Register */
    using NVIC_IABR14 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x238, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACTIVE */
    using NVIC_IABR14_ACTIVE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Active Bit Register */
    using NVIC_IABR15 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x23C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ACTIVE */
    using NVIC_IABR15_ACTIVE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Target Non-secure Registers */
    using ITNS0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x280, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ITNS */
    using ITNS0_ITNS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Target Non-secure Registers */
    using ITNS1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x284, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ITNS */
    using ITNS1_ITNS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Target Non-secure Registers */
    using ITNS2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x288, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ITNS */
    using ITNS2_ITNS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Target Non-secure Registers */
    using ITNS3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ITNS */
    using ITNS3_ITNS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Target Non-secure Registers */
    using ITNS4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x290, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ITNS */
    using ITNS4_ITNS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Target Non-secure Registers */
    using ITNS5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x294, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ITNS */
    using ITNS5_ITNS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Target Non-secure Registers */
    using ITNS6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x298, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ITNS */
    using ITNS6_ITNS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Target Non-secure Registers */
    using ITNS7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x29C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ITNS */
    using ITNS7_ITNS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Target Non-secure Registers */
    using ITNS8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ITNS */
    using ITNS8_ITNS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Target Non-secure Registers */
    using ITNS9 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2A4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ITNS */
    using ITNS9_ITNS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Target Non-secure Registers */
    using ITNS10 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2A8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ITNS */
    using ITNS10_ITNS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Target Non-secure Registers */
    using ITNS11 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2AC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ITNS */
    using ITNS11_ITNS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Target Non-secure Registers */
    using ITNS12 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2B0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ITNS */
    using ITNS12_ITNS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Target Non-secure Registers */
    using ITNS13 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2B4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ITNS */
    using ITNS13_ITNS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Target Non-secure Registers */
    using ITNS14 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2B8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ITNS */
    using ITNS14_ITNS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interrupt Target Non-secure Registers */
    using ITNS15 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2BC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ITNS */
    using ITNS15_ITNS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR0 */
    using NVIC_IPR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x300, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR0_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR0_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR0_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR0_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR1 */
    using NVIC_IPR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x304, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR1_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR1_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR1_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR1_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR2 */
    using NVIC_IPR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x308, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR2_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR2_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR2_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR2_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR3 */
    using NVIC_IPR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR3_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR3_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR3_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR3_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR4 */
    using NVIC_IPR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x310, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR4_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR4_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR4_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR4_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR5 */
    using NVIC_IPR5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x314, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR5_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR5_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR5_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR5_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR6 */
    using NVIC_IPR6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x318, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR6_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR6_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR6_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR6_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR7 */
    using NVIC_IPR7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x31C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR7_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR7_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR7_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR7_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR8 */
    using NVIC_IPR8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x320, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR8_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR8_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR8_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR8_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR9 */
    using NVIC_IPR9 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x324, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR9_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR9_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR9_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR9_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR10 */
    using NVIC_IPR10 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x328, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR10_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR10_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR10_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR10_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR11 */
    using NVIC_IPR11 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x32C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR11_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR11_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR11_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR11_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR12 */
    using NVIC_IPR12 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x330, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR12_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR12_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR12_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR12_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR13 */
    using NVIC_IPR13 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x334, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR13_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR13_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR13_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR13_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR14 */
    using NVIC_IPR14 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x338, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR14_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR14_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR14_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR14_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR15 */
    using NVIC_IPR15 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x33C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR15_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR15_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR15_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR15_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR16 */
    using NVIC_IPR16 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x340, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR16_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR16_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR16_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR16_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR17 */
    using NVIC_IPR17 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x344, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR17_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR17_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR17_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR17_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR18 */
    using NVIC_IPR18 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x348, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR18_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR18_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR18_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR18_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR19 */
    using NVIC_IPR19 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR19_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR19_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR19_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR19_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR20 */
    using NVIC_IPR20 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x350, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR20_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR20_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR20_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR20_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR21 */
    using NVIC_IPR21 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x354, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR21_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR21_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR21_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR21_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR22 */
    using NVIC_IPR22 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x358, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR22_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR22_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR22_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR22_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR23 */
    using NVIC_IPR23 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x35C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR23_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR23_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR23_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR23_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR24 */
    using NVIC_IPR24 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x360, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR24_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR24_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR24_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR24_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR25 */
    using NVIC_IPR25 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x364, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR25_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR25_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR25_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR25_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR26 */
    using NVIC_IPR26 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x368, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR26_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR26_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR26_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR26_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR27 */
    using NVIC_IPR27 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x36C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR27_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR27_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR27_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR27_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR28 */
    using NVIC_IPR28 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x370, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR28_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR28_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR28_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR28_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR29 */
    using NVIC_IPR29 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x374, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR29_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR29_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR29_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR29_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR30 */
    using NVIC_IPR30 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x378, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR30_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR30_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR30_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR30_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR31 */
    using NVIC_IPR31 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x37C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR31_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR31_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR31_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR31_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR32 */
    using NVIC_IPR32 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x380, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR32_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR32_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR32_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR32_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR33 */
    using NVIC_IPR33 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x384, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR33_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR33_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR33_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR33_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR34 */
    using NVIC_IPR34 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x388, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR34_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR34_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR34_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR34_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR35 */
    using NVIC_IPR35 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR35_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR35_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR35_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR35_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR36 */
    using NVIC_IPR36 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x390, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR36_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR36_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR36_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR36_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR37 */
    using NVIC_IPR37 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x394, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR37_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR37_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR37_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR37_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR38 */
    using NVIC_IPR38 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x398, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR38_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR38_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR38_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR38_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR39 */
    using NVIC_IPR39 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x39C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR39_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR39_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR39_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR39_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR40 */
    using NVIC_IPR40 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR40_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR40_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR40_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR40_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR41 */
    using NVIC_IPR41 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3A4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR41_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR41_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR41_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR41_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR42 */
    using NVIC_IPR42 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3A8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR42_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR42_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR42_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR42_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR43 */
    using NVIC_IPR43 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3AC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR43_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR43_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR43_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR43_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR44 */
    using NVIC_IPR44 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3B0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR44_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR44_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR44_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR44_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR45 */
    using NVIC_IPR45 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3B4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR45_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR45_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR45_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR45_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR46 */
    using NVIC_IPR46 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3B8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR46_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR46_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR46_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR46_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR47 */
    using NVIC_IPR47 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3BC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR47_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR47_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR47_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR47_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR48 */
    using NVIC_IPR48 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR48_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR48_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR48_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR48_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR49 */
    using NVIC_IPR49 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR49_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR49_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR49_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR49_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR50 */
    using NVIC_IPR50 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR50_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR50_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR50_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR50_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR51 */
    using NVIC_IPR51 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3CC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR51_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR51_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR51_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR51_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR52 */
    using NVIC_IPR52 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3D0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR52_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR52_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR52_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR52_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR53 */
    using NVIC_IPR53 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3D4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR53_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR53_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR53_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR53_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR54 */
    using NVIC_IPR54 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3D8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR54_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR54_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR54_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR54_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR55 */
    using NVIC_IPR55 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3DC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR55_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR55_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR55_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR55_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR56 */
    using NVIC_IPR56 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3E0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR56_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR56_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR56_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR56_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR57 */
    using NVIC_IPR57 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3E4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR57_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR57_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR57_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR57_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR58 */
    using NVIC_IPR58 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3E8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR58_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR58_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR58_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR58_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR59 */
    using NVIC_IPR59 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3EC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR59_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR59_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR59_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR59_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR60 */
    using NVIC_IPR60 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3F0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR60_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR60_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR60_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR60_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR61 */
    using NVIC_IPR61 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3F4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR61_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR61_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR61_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR61_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR62 */
    using NVIC_IPR62 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3F8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR62_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR62_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR62_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR62_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR63 */
    using NVIC_IPR63 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3FC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR63_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR63_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR63_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR63_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR64 */
    using NVIC_IPR64 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x400, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR64_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR64_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR64_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR64_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR65 */
    using NVIC_IPR65 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x404, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR65_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR65_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR65_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR65_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR66 */
    using NVIC_IPR66 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x408, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR66_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR66_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR66_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR66_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR67 */
    using NVIC_IPR67 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR67_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR67_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR67_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR67_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR68 */
    using NVIC_IPR68 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x410, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR68_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR68_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR68_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR68_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR69 */
    using NVIC_IPR69 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x414, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR69_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR69_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR69_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR69_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR70 */
    using NVIC_IPR70 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x418, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR70_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR70_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR70_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR70_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR71 */
    using NVIC_IPR71 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x41C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR71_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR71_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR71_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR71_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR72 */
    using NVIC_IPR72 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x420, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR72_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR72_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR72_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR72_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR73 */
    using NVIC_IPR73 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x424, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR73_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR73_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR73_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR73_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR74 */
    using NVIC_IPR74 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x428, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR74_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR74_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR74_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR74_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR75 */
    using NVIC_IPR75 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x42C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR75_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR75_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR75_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR75_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR76 */
    using NVIC_IPR76 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x430, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR76_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR76_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR76_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR76_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR77 */
    using NVIC_IPR77 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x434, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR77_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR77_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR77_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR77_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR78 */
    using NVIC_IPR78 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x438, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR78_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR78_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR78_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR78_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR79 */
    using NVIC_IPR79 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x43C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR79_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR79_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR79_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR79_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR80 */
    using NVIC_IPR80 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x440, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR80_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR80_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR80_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR80_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR81 */
    using NVIC_IPR81 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x444, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR81_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR81_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR81_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR81_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR82 */
    using NVIC_IPR82 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x448, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR82_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR82_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR82_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR82_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR83 */
    using NVIC_IPR83 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR83_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR83_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR83_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR83_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR84 */
    using NVIC_IPR84 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x450, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR84_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR84_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR84_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR84_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR85 */
    using NVIC_IPR85 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x454, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR85_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR85_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR85_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR85_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR86 */
    using NVIC_IPR86 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x458, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR86_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR86_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR86_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR86_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR87 */
    using NVIC_IPR87 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x45C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR87_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR87_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR87_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR87_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR88 */
    using NVIC_IPR88 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x460, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR88_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR88_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR88_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR88_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR89 */
    using NVIC_IPR89 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x464, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR89_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR89_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR89_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR89_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR90 */
    using NVIC_IPR90 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x468, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR90_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR90_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR90_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR90_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR91 */
    using NVIC_IPR91 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x46C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR91_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR91_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR91_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR91_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR92 */
    using NVIC_IPR92 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x470, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR92_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR92_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR92_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR92_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR93 */
    using NVIC_IPR93 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x474, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR93_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR93_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR93_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR93_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR94 */
    using NVIC_IPR94 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x478, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR94_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR94_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR94_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR94_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR95 */
    using NVIC_IPR95 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x47C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR95_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR95_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR95_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR95_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR96 */
    using NVIC_IPR96 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x480, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR96_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR96_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR96_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR96_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR97 */
    using NVIC_IPR97 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x484, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR97_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR97_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR97_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR97_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR98 */
    using NVIC_IPR98 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x488, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR98_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR98_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR98_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR98_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR99 */
    using NVIC_IPR99 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR99_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR99_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR99_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR99_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR100 */
    using NVIC_IPR100 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x490, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR100_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR100_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR100_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR100_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR101 */
    using NVIC_IPR101 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x494, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR101_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR101_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR101_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR101_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR102 */
    using NVIC_IPR102 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x498, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR102_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR102_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR102_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR102_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR103 */
    using NVIC_IPR103 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x49C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR103_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR103_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR103_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR103_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR104 */
    using NVIC_IPR104 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR104_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR104_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR104_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR104_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR105 */
    using NVIC_IPR105 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4A4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR105_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR105_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR105_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR105_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR106 */
    using NVIC_IPR106 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4A8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR106_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR106_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR106_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR106_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR107 */
    using NVIC_IPR107 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4AC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR107_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR107_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR107_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR107_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR108 */
    using NVIC_IPR108 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4B0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR108_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR108_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR108_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR108_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR109 */
    using NVIC_IPR109 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4B4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR109_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR109_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR109_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR109_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR110 */
    using NVIC_IPR110 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4B8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR110_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR110_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR110_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR110_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR111 */
    using NVIC_IPR111 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4BC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR111_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR111_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR111_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR111_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR112 */
    using NVIC_IPR112 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4C0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR112_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR112_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR112_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR112_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR113 */
    using NVIC_IPR113 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4C4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR113_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR113_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR113_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR113_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR114 */
    using NVIC_IPR114 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4C8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR114_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR114_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR114_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR114_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR115 */
    using NVIC_IPR115 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4CC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR115_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR115_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR115_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR115_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR116 */
    using NVIC_IPR116 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4D0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR116_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR116_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR116_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR116_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR117 */
    using NVIC_IPR117 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4D4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR117_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR117_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR117_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR117_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR118 */
    using NVIC_IPR118 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4D8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR118_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR118_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR118_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR118_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NVIC_IPR119 */
    using NVIC_IPR119 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4DC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N3 */
    using NVIC_IPR119_PRI_N3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N2 */
    using NVIC_IPR119_PRI_N2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N1 */
    using NVIC_IPR119_PRI_N1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRI_N0 */
    using NVIC_IPR119_PRI_N0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STIR */
    using STIR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xE00, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief INTID */
    using STIR_INTID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
