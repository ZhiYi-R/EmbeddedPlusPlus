/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_CORTEX_M33_MPU_HPP
#define EMBEDDED_PP_CORTEX_M33_MPU_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Memory protection Unit Control Registers */
namespace Cortex_M33::MPU {

    /** @brief MPU Type Register S */
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
    /** @brief IREGION */
    using MPU_TYPE_NS_IREGION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MPU Control Register S */
    using MPU_CTRL = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIVDEFENA */
    using MPU_CTRL_PRIVDEFENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HFNMIENA */
    using MPU_CTRL_HFNMIENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable */
    using MPU_CTRL_ENABLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MPU Control Register NS */
    using MPU_CTRL_NS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20004, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIVDEFENA */
    using MPU_CTRL_NS_PRIVDEFENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief HFNMIENA */
    using MPU_CTRL_NS_HFNMIENA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable */
    using MPU_CTRL_NS_ENABLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MPU Region Number Register S */
    using MPU_RNR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief REGION */
    using MPU_RNR_REGION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MPU Region Number Register NS */
    using MPU_RNR_NS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20008, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief REGION */
    using MPU_RNR_NS_REGION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MPU_RBAR_A0_S */
    using MPU_RBAR_A0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BASE */
    using MPU_RBAR_A0_BASE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 27, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SH */
    using MPU_RBAR_A0_SH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AP_2_1 */
    using MPU_RBAR_A0_AP_2_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XN */
    using MPU_RBAR_A0_XN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MPU_RBAR_A1_S */
    using MPU_RBAR_A1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BASE */
    using MPU_RBAR_A1_BASE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 27, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SH */
    using MPU_RBAR_A1_SH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AP_2_1 */
    using MPU_RBAR_A1_AP_2_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XN */
    using MPU_RBAR_A1_XN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MPU_RBAR_A2_S */
    using MPU_RBAR_A2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BASE */
    using MPU_RBAR_A2_BASE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 27, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SH */
    using MPU_RBAR_A2_SH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AP_2_1 */
    using MPU_RBAR_A2_AP_2_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XN */
    using MPU_RBAR_A2_XN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MPU_RBAR_A3_S */
    using MPU_RBAR_A3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BASE */
    using MPU_RBAR_A3_BASE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 27, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SH */
    using MPU_RBAR_A3_SH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AP_2_1 */
    using MPU_RBAR_A3_AP_2_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XN */
    using MPU_RBAR_A3_XN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MPU_RBAR_A0_NS */
    using MPU_RBAR_A0_NS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2000C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BASE */
    using MPU_RBAR_A0_NS_BASE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 27, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SH */
    using MPU_RBAR_A0_NS_SH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AP_2_1 */
    using MPU_RBAR_A0_NS_AP_2_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XN */
    using MPU_RBAR_A0_NS_XN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MPU_RBAR_A1_NS */
    using MPU_RBAR_A1_NS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2000C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BASE */
    using MPU_RBAR_A1_NS_BASE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 27, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SH */
    using MPU_RBAR_A1_NS_SH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AP_2_1 */
    using MPU_RBAR_A1_NS_AP_2_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XN */
    using MPU_RBAR_A1_NS_XN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MPU_RBAR_A2_NS */
    using MPU_RBAR_A2_NS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2000C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BASE */
    using MPU_RBAR_A2_NS_BASE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 27, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SH */
    using MPU_RBAR_A2_NS_SH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AP_2_1 */
    using MPU_RBAR_A2_NS_AP_2_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XN */
    using MPU_RBAR_A2_NS_XN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MPU_RBAR_A3_NS */
    using MPU_RBAR_A3_NS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2000C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BASE */
    using MPU_RBAR_A3_NS_BASE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 27, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SH */
    using MPU_RBAR_A3_NS_SH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AP_2_1 */
    using MPU_RBAR_A3_NS_AP_2_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XN */
    using MPU_RBAR_A3_NS_XN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MPU_MAIR0_S */
    using MPU_MAIR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Attr0 */
    using MPU_MAIR0_Attr0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Attr1 */
    using MPU_MAIR0_Attr1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Attr2 */
    using MPU_MAIR0_Attr2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Attr3 */
    using MPU_MAIR0_Attr3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MPU_MAIR0_NS */
    using MPU_MAIR0_NS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20030, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Attr0 */
    using MPU_MAIR0_NS_Attr0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Attr1 */
    using MPU_MAIR0_NS_Attr1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Attr2 */
    using MPU_MAIR0_NS_Attr2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Attr3 */
    using MPU_MAIR0_NS_Attr3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MPU_MAIR1_S */
    using MPU_MAIR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Attr0 */
    using MPU_MAIR1_Attr0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Attr1 */
    using MPU_MAIR1_Attr1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Attr2 */
    using MPU_MAIR1_Attr2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Attr3 */
    using MPU_MAIR1_Attr3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MPU_MAIR1_NS */
    using MPU_MAIR1_NS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20034, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Attr0 */
    using MPU_MAIR1_NS_Attr0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Attr1 */
    using MPU_MAIR1_NS_Attr1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Attr2 */
    using MPU_MAIR1_NS_Attr2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Attr3 */
    using MPU_MAIR1_NS_Attr3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
