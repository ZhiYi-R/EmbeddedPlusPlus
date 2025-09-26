/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32N645_DLYBSD_HPP
#define EMBEDDED_PP_STM32N645_DLYBSD_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief DLYBSD address block description */
namespace STM32N645::DLYBSD {

    /** @brief Delay block SDMMC DLL configuration */
    using DLYBSD_CFG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DLL enable */
    using DLYBSD_CFG_SDMMC_DLL_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief selection of RX delay */
    using DLYBSD_CFG_SDMMC_RX_TAP_SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DLL configuration */
    using DLYBSD_CFG_SDMMC_DLL_BYP_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Lock mode (value: 0)
     *          - B_0x1: Pure delay (value: 1)
     */
        /** @brief Lock mode */
    constexpr std::uint32_t DLYBSD_CFG_SDMMC_DLL_BYP_EN_B_0x0 = 0;
        /** @brief Pure delay */
    constexpr std::uint32_t DLYBSD_CFG_SDMMC_DLL_BYP_EN_B_0x1 = 1;

    /** @brief Bypass command */
    using DLYBSD_CFG_SDMMC_DLL_BYP_CMD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Antiglitch logic enabled when 1 */
    using DLYBSD_CFG_SDMMC_DLL_ANTIGLITCH_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Delay block SDMMC DLL status */
    using DLYBSD_STATUS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SDMMC DLL lock */
    using DLYBSD_STATUS_SDMMC_DLL_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SDMMC RX delay selection acknowledge */
    using DLYBSD_STATUS_SDMMC_RX_TAP_SEL_ACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
