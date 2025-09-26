/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32G061_IWDG_HPP
#define EMBEDDED_PP_STM32G061_IWDG_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Independent watchdog */
namespace STM32G061::IWDG {

    /** @brief Key register */
    using IWDG_KR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Key value (write only, read 0x0000) */
    using IWDG_KR_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Prescaler register */
    using IWDG_PR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Prescaler divider These bits are write access protected see . They are written by software to select the prescaler divider feeding the counter clock. PVU bit of the must be reset in order to be able to change the prescaler divider. Note: Reading this register returns the prescaler value from the VDD voltage domain. This value may not be up to date/valid if a write operation to this register is ongoing. For this reason the value read from this register is valid only when the PVU bit in the status register (IWDG_SR) is reset. */
    using IWDG_PR_PR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: divider /4 (value: 0)
     *          - B_0x1: divider /8 (value: 1)
     *          - B_0x2: divider /16 (value: 2)
     *          - B_0x3: divider /32 (value: 3)
     *          - B_0x4: divider /64 (value: 4)
     *          - B_0x5: divider /128 (value: 5)
     *          - B_0x6: divider /256 (value: 6)
     *          - B_0x7: divider /256 (value: 7)
     */
        /** @brief divider /4 */
    constexpr std::uint32_t IWDG_PR_PR_B_0x0 = 0;
        /** @brief divider /8 */
    constexpr std::uint32_t IWDG_PR_PR_B_0x1 = 1;
        /** @brief divider /16 */
    constexpr std::uint32_t IWDG_PR_PR_B_0x2 = 2;
        /** @brief divider /32 */
    constexpr std::uint32_t IWDG_PR_PR_B_0x3 = 3;
        /** @brief divider /64 */
    constexpr std::uint32_t IWDG_PR_PR_B_0x4 = 4;
        /** @brief divider /128 */
    constexpr std::uint32_t IWDG_PR_PR_B_0x5 = 5;
        /** @brief divider /256 */
    constexpr std::uint32_t IWDG_PR_PR_B_0x6 = 6;
        /** @brief divider /256 */
    constexpr std::uint32_t IWDG_PR_PR_B_0x7 = 7;

    /** @brief Reload register */
    using IWDG_RLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Watchdog counter reload value */
    using IWDG_RLR_RL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Status register */
    using IWDG_SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Watchdog prescaler value update This bit is set by hardware to indicate that an update of the prescaler value is ongoing. It is reset by hardware when the prescaler update operation is completed in the VDD voltage domain (takes up to five LSI cycles). Prescaler value can be updated only when PVU bit is reset. */
    using IWDG_SR_PVU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Watchdog counter reload value update This bit is set by hardware to indicate that an update of the reload value is ongoing. It is reset by hardware when the reload value update operation is completed in the VDD voltage domain (takes up to five LSI cycles). Reload value can be updated only when RVU bit is reset. */
    using IWDG_SR_RVU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Watchdog counter window value update This bit is set by hardware to indicate that an update of the window value is ongoing. It is reset by hardware when the reload value update operation is completed in the VDD voltage domain (takes up to five LSI cycles). Window value can be updated only when WVU bit is reset. */
    using IWDG_SR_WVU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Window register */
    using IWDG_WINR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Watchdog counter window value */
    using IWDG_WINR_WIN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
