/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_CORTEX_M55_MPU_HPP
#define EMBEDDED_PP_CORTEX_M55_MPU_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Memory protection Unit Control Registers */
namespace Cortex_M55::MPU {

    /** @brief MPU Type Register NS */
    using MPU_TYPE_NS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20000, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEPARATE */
    using MPU_TYPE_NS_SEPARATE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Uniform: No description (value: 0)
     *          - Separate: No description (value: 1)
     */
        /** @brief Uniform value */
    constexpr std::uint32_t MPU_TYPE_NS_SEPARATE_Uniform = 0;
        /** @brief Separate value */
    constexpr std::uint32_t MPU_TYPE_NS_SEPARATE_Separate = 1;

    /** @brief DREGION */
    using MPU_TYPE_NS_DREGION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MPU Control Register NS */
    using MPU_CTRL_NS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20004, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIVDEFENA */
    using MPU_CTRL_NS_PRIVDEFENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HFNMIENA */
    using MPU_CTRL_NS_HFNMIENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable */
    using MPU_CTRL_NS_ENABLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MPU Region Number Register NS */
    using MPU_RNR_NS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20008, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief REGION */
    using MPU_RNR_NS_REGION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MPU Region Base Address Register NS */
    using MPU_RBAR_NS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2000C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BASE */
    using MPU_RBAR_NS_BASE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 27, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SH */
    using MPU_RBAR_NS_SH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AP_2_1 */
    using MPU_RBAR_NS_AP_2_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XN */
    using MPU_RBAR_NS_XN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MPU Region Base Address Register NS */
    using MPU_RBAR_A1_NS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20014, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BASE */
    using MPU_RBAR_A1_NS_BASE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 27, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SH */
    using MPU_RBAR_A1_NS_SH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AP_2_1 */
    using MPU_RBAR_A1_NS_AP_2_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XN */
    using MPU_RBAR_A1_NS_XN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MPU Region Base Address Register NS */
    using MPU_RBAR_A2_NS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2001C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BASE */
    using MPU_RBAR_A2_NS_BASE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 27, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SH */
    using MPU_RBAR_A2_NS_SH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AP_2_1 */
    using MPU_RBAR_A2_NS_AP_2_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XN */
    using MPU_RBAR_A2_NS_XN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MPU Region Base Address Register NS */
    using MPU_RBAR_A3_NS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20024, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BASE */
    using MPU_RBAR_A3_NS_BASE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 27, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SH */
    using MPU_RBAR_A3_NS_SH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AP_2_1 */
    using MPU_RBAR_A3_NS_AP_2_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XN */
    using MPU_RBAR_A3_NS_XN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MPU Region Limit Address Register NS */
    using MPU_RLAR_NS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20010, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LIMIT */
    using MPU_RLAR_NS_LIMIT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 27, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AttrIndx */
    using MPU_RLAR_NS_AttrIndx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EN */
    using MPU_RLAR_NS_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MPU Region Limit Address Register NS */
    using MPU_RLAR_A1_NS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20018, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LIMIT */
    using MPU_RLAR_A1_NS_LIMIT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 27, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AttrIndx */
    using MPU_RLAR_A1_NS_AttrIndx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EN */
    using MPU_RLAR_A1_NS_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MPU Region Limit Address Register NS */
    using MPU_RLAR_A2_NS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20020, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LIMIT */
    using MPU_RLAR_A2_NS_LIMIT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 27, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AttrIndx */
    using MPU_RLAR_A2_NS_AttrIndx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EN */
    using MPU_RLAR_A2_NS_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MPU Region Limit Address Register NS */
    using MPU_RLAR_A3_NS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20028, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LIMIT */
    using MPU_RLAR_A3_NS_LIMIT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 27, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AttrIndx */
    using MPU_RLAR_A3_NS_AttrIndx = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EN */
    using MPU_RLAR_A3_NS_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MPU Memory Attribute Indirection Register 0 NS */
    using MPU_MAIR0_NS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20030, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Attr0 */
    using MPU_MAIR0_NS_Attr0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Attr1 */
    using MPU_MAIR0_NS_Attr1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Attr2 */
    using MPU_MAIR0_NS_Attr2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Attr3 */
    using MPU_MAIR0_NS_Attr3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MPU Memory Attribute Indirection Register 1 NS */
    using MPU_MAIR1_NS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20034, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Attr4 */
    using MPU_MAIR1_NS_Attr4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Attr5 */
    using MPU_MAIR1_NS_Attr5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Attr6 */
    using MPU_MAIR1_NS_Attr6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Attr7 */
    using MPU_MAIR1_NS_Attr7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
