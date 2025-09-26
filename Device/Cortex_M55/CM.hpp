/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_CORTEX_M55_CM_HPP
#define EMBEDDED_PP_CORTEX_M55_CM_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Cache Maintenance Operations */
namespace Cortex_M55::CM {

    /** @brief ICIALLU */
    using ICIALLU = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Ignored */
    using ICIALLU_Ignored = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ICIALLU_NS */
    using ICIALLU_NS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20000, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Ignored */
    using ICIALLU_NS_Ignored = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ICIMVAU */
    using ICIMVAU = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Address */
    using ICIMVAU_ADDRESS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ICIMVAU_NS */
    using ICIMVAU_NS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20008, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Address */
    using ICIMVAU_NS_ADDRESS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCIMVAC */
    using DCIMVAC = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Address */
    using DCIMVAC_ADDRESS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCIMVAC_NC */
    using DCIMVAC_NC = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2000C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Address */
    using DCIMVAC_NC_ADDRESS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCISW */
    using DCISW = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SetWay */
    using DCISW_SetWay = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Level */
    using DCISW_Level = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCISW_NS */
    using DCISW_NS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20010, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SetWay */
    using DCISW_NS_SetWay = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Level */
    using DCISW_NS_Level = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCCMVAU */
    using DCCMVAU = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Address */
    using DCCMVAU_ADDRESS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCCMVAU_NS */
    using DCCMVAU_NS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20014, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Address */
    using DCCMVAU_NS_ADDRESS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCCMVAC */
    using DCCMVAC = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Address */
    using DCCMVAC_ADDRESS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCCMVAC_NS */
    using DCCMVAC_NS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20018, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Address */
    using DCCMVAC_NS_ADDRESS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCCSW */
    using DCCSW = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SetWay */
    using DCCSW_SetWay = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Level */
    using DCCSW_Level = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCCSW_NS */
    using DCCSW_NS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2001C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SetWay */
    using DCCSW_NS_SetWay = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Level */
    using DCCSW_NS_Level = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCCIMVAC */
    using DCCIMVAC = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Address */
    using DCCIMVAC_ADDRESS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCCIMVAC_NS */
    using DCCIMVAC_NS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20020, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Address */
    using DCCIMVAC_NS_ADDRESS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCCISW */
    using DCCISW = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SetWay */
    using DCCISW_SetWay = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Level */
    using DCCISW_Level = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DCCISW_NS */
    using DCCISW_NS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20024, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SetWay */
    using DCCISW_NS_SetWay = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Level */
    using DCCISW_NS_Level = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BPIALL */
    using BPIALL = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Ignored */
    using BPIALL_Ignored = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BPIALL_NS200 */
    using BPIALL_NS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20028, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Ignored */
    using BPIALL_NS_Ignored = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
