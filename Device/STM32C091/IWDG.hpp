/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32C091_IWDG_HPP
#define EMBEDDED_PP_STM32C091_IWDG_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief IWDG address block description */
namespace STM32C091::IWDG {

    /** @brief IWDG key register */
    using IWDG_KR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Key value (write only, read 0x0000) These bits must be written by software at regular intervals with the key value 0xAAAA, otherwise the watchdog generates a reset when the counter reaches 0. Writing the key value 0x5555 to enable access to the IWDG_PR, IWDG_RLR and IWDG_WINR registers (see Section 22.3.4: Register access protection) Writing the key value 0xCCCC starts the watchdog (except if the hardware watchdog option is selected) */
    using IWDG_KR_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IWDG prescaler register */
    using IWDG_PR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Prescaler divider These bits are write access protected see Section 22.3.4: Register access protection. They are written by software to select the prescaler divider feeding the counter clock. PVU bit of the IWDG status register (IWDG_SR) must be reset in order to be able to change the prescaler divider. Note: Reading this register returns the prescaler value from the V<sub>DD</sub> voltage domain. This value may not be up to date/valid if a write operation to this register is ongoing. For this reason the value read from this register is valid only when the PVU bit in the IWDG status register (IWDG_SR) is reset. */
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

    /** @brief IWDG reload register */
    using IWDG_RLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Watchdog counter reload value These bits are write access protected see Register access protection. They are written by software to define the value to be loaded in the watchdog counter each time the value 0xAAAA is written in the IWDG key register (IWDG_KR). The watchdog counter counts down from this value. The timeout period is a function of this value and the clock prescaler. Refer to the datasheet for the timeout information. The RVU bit in the IWDG status register (IWDG_SR) must be reset to be able to change the reload value. Note: Reading this register returns the reload value from the V<sub>DD</sub> voltage domain. This value may not be up to date/valid if a write operation to this register is ongoing on it. For this reason the value read from this register is valid only when the RVU bit in the IWDG status register (IWDG_SR) is reset. */
    using IWDG_RLR_RL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IWDG status register */
    using IWDG_SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Watchdog prescaler value update This bit is set by hardware to indicate that an update of the prescaler value is ongoing. It is reset by hardware when the prescaler update operation is completed in the V<sub>DD</sub> voltage domain (takes up to five LSI cycles). Prescaler value can be updated only when PVU bit is reset. */
    using IWDG_SR_PVU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Watchdog counter reload value update This bit is set by hardware to indicate that an update of the reload value is ongoing. It is reset by hardware when the reload value update operation is completed in the V<sub>DD</sub> voltage domain (takes up to five LSI cycles). Reload value can be updated only when RVU bit is reset. */
    using IWDG_SR_RVU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Watchdog counter window value update This bit is set by hardware to indicate that an update of the window value is ongoing. It is reset by hardware when the reload value update operation is completed in the V<sub>DD</sub> voltage domain (takes up to five LSI cycles). Window value can be updated only when WVU bit is reset. */
    using IWDG_SR_WVU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IWDG window register */
    using IWDG_WINR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Watchdog counter window value These bits are write access protected, see Section 22.3.4, they contain the high limit of the window value to be compared with the downcounter. To prevent a reset, the downcounter must be reloaded when its value is lower than the window register value and greater than 0x0 The WVU bit in the IWDG status register (IWDG_SR) must be reset in order to be able to change the reload value. Note: Reading this register returns the reload value from the V<sub>DD</sub> voltage domain. This value may not be valid if a write operation to this register is ongoing. For this reason the value read from this register is valid only when the WVU bit in the IWDG status register (IWDG_SR) is reset. */
    using IWDG_WINR_WIN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
