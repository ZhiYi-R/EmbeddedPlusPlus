/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32WBA62_IWDG_HPP
#define EMBEDDED_PP_STM32WBA62_IWDG_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief IWDG address block description */
namespace STM32WBA62::IWDG {

    /** @brief IWDG key register */
    using IWDG_KR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Key value (write only, read 0x0000) */
    using IWDG_KR_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IWDG prescaler register */
    using IWDG_PR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Prescaler divider */
    using IWDG_PR_PR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: divider / 4 (value: 0)
     *          - B_0x1: divider / 8 (value: 1)
     *          - B_0x2: divider / 16 (value: 2)
     *          - B_0x3: divider / 32 (value: 3)
     *          - B_0x4: divider / 64 (value: 4)
     *          - B_0x5: divider / 128 (value: 5)
     *          - B_0x6: divider / 256 (value: 6)
     *          - B_0x7: divider / 512 (value: 7)
     */
        /** @brief divider / 4 */
    constexpr std::uint32_t IWDG_PR_PR_B_0x0 = 0;
        /** @brief divider / 8 */
    constexpr std::uint32_t IWDG_PR_PR_B_0x1 = 1;
        /** @brief divider / 16 */
    constexpr std::uint32_t IWDG_PR_PR_B_0x2 = 2;
        /** @brief divider / 32 */
    constexpr std::uint32_t IWDG_PR_PR_B_0x3 = 3;
        /** @brief divider / 64 */
    constexpr std::uint32_t IWDG_PR_PR_B_0x4 = 4;
        /** @brief divider / 128 */
    constexpr std::uint32_t IWDG_PR_PR_B_0x5 = 5;
        /** @brief divider / 256 */
    constexpr std::uint32_t IWDG_PR_PR_B_0x6 = 6;
        /** @brief divider / 512 */
    constexpr std::uint32_t IWDG_PR_PR_B_0x7 = 7;

    /** @brief IWDG reload register */
    using IWDG_RLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Watchdog counter reload value */
    using IWDG_RLR_RL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IWDG status register */
    using IWDG_SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Watchdog prescaler value update */
    using IWDG_SR_PVU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Watchdog counter reload value update */
    using IWDG_SR_RVU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Watchdog counter window value update */
    using IWDG_SR_WVU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Watchdog interrupt comparator value update */
    using IWDG_SR_EWU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Watchdog enable status bit */
    using IWDG_SR_ONF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The IWDG is not activated (value: 0)
     *          - B_0x1: The IWDG is activated and needs to be refreshed regularly by the application (value: 1)
     */
        /** @brief The IWDG is not activated */
    constexpr std::uint32_t IWDG_SR_ONF_B_0x0 = 0;
        /** @brief The IWDG is activated and needs to be refreshed regularly by the application */
    constexpr std::uint32_t IWDG_SR_ONF_B_0x1 = 1;

    /** @brief Watchdog early interrupt flag */
    using IWDG_SR_EWIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IWDG window register */
    using IWDG_WINR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Watchdog counter window value */
    using IWDG_WINR_WIN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IWDG early wake-up interrupt register */
    using IWDG_EWCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Watchdog counter window value */
    using IWDG_EWCR_EWIT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Watchdog early interrupt acknowledge */
    using IWDG_EWCR_EWIC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Watchdog early interrupt enable */
    using IWDG_EWCR_EWIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The early interrupt interface is disabled. (value: 0)
     *          - B_0x1: The early interrupt interface is enabled. (value: 1)
     */
        /** @brief The early interrupt interface is disabled. */
    constexpr std::uint32_t IWDG_EWCR_EWIE_B_0x0 = 0;
        /** @brief The early interrupt interface is enabled. */
    constexpr std::uint32_t IWDG_EWCR_EWIE_B_0x1 = 1;

}

#endif
