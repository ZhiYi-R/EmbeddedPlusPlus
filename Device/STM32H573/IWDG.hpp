/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32H573_IWDG_HPP
#define EMBEDDED_PP_STM32H573_IWDG_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Independent watchdog */
namespace STM32H573::IWDG {

    /** @brief IWDG key register */
    using IWDG_KR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Key value (write only, read 0x0000) These bits must be written by software at regular intervals with the key value 0xAAAA, otherwise the watchdog generates a reset when the counter reaches 0. Writing the key value 0x5555 to enable access to the IWDG_PR, IWDG_RLR and IWDG_WINR registers (see ) Writing the key value 0xCCCC starts the watchdog (except if the hardware watchdog option is selected) */
    using IWDG_KR_KEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IWDG prescaler register */
    using IWDG_PR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Prescaler divider These bits are write access protected see . They are written by software to select the prescaler divider feeding the counter clock. PVU bit of the must be reset in order to be able to change the prescaler divider. Others: divider / 1024 Note: Reading this register returns the prescaler value from the VDD voltage domain. This value may not be up to date/valid if a write operation to this register is ongoing. For this reason the value read from this register is valid only when the PVU bit in the status register (IWDG_SR) is reset. */
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
    /** @brief Watchdog counter reload value These bits are write access protected see . They are written by software to define the value to be loaded in the watchdog counter each time the value 0xAAAA is written in the . The watchdog counter counts down from this value. The timeout period is a function of this value and the prescaler.clock. It is not recommended to set RL[11:0] to a value lower than 2. The RVU bit in the must be reset to be able to change the reload value. Note: Reading this register returns the reload value from the VDD voltage domain. This value may not be up to date/valid if a write operation to this register is ongoing on it. For this reason the value read from this register is valid only when the RVU bit in the status register (IWDG_SR) is reset. */
    using IWDG_RLR_RL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IWDG status register */
    using IWDG_SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Watchdog prescaler value update This bit is set by hardware to indicate that an update of the prescaler value is ongoing. It is reset by hardware when the prescaler update operation is completed in the VDD voltage domain (takes up to three periods of the IWDG kernel clock iwdg_ker_ck). The prescaler value can be updated only when PVU bit is reset. */
    using IWDG_SR_PVU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Watchdog counter reload value update This bit is set by hardware to indicate that an update of the reload value is ongoing. It is reset by hardware when the reload value update operation is completed in the VDD voltage domain (takes up to three periods of the IWDG kernel clock iwdg_ker_ck). The reload value can be updated only when RVU bit is reset. */
    using IWDG_SR_RVU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Watchdog counter window value update This bit is set by hardware to indicate that an update of the window value is ongoing. It is reset by hardware when the reload value update operation is completed in the VDD voltage domain (takes up to three periods of the IWDG kernel clock iwdg_ker_ck). The window value can be updated only when WVU bit is reset. This bit is generated only if generic 'window' = 1 */
    using IWDG_SR_WVU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Watchdog interrupt comparator value update This bit is set by hardware to indicate that an update of the interrupt comparator value (EWIT[11:0]) or an update of the EWIE is ongoing. It is reset by hardware when the update operation is completed in the VDD voltage domain (takes up to three periods of the IWDG kernel clock iwdg_ker_ck). The EWIT[11:0] and EWIE fields can be updated only when EWU bit is reset. */
    using IWDG_SR_EWU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Watchdog early interrupt flag This bit is set to '1' by hardware in order to indicate that an early interrupt is pending. This bit must be cleared by the software by writing the bit EWIC of IWDG_EWCR register to '1'. */
    using IWDG_SR_EWIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IWDG window register */
    using IWDG_WINR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Watchdog counter window value These bits are write access protected, see , they contain the high limit of the window value to be compared with the downcounter. To prevent a reset, the IWDCNT downcounter must be reloaded when its value is lower than WIN[11:0]+1 and greater than 1. The WVU bit in the must be reset to be able to change the reload value. Note: Reading this register returns the reload value from the VDD voltage domain. This value may not be valid if a write operation to this register is ongoing. For this reason the value read from this register is valid only when the WVU bit in the (IWDG_SR) is reset. */
    using IWDG_WINR_WIN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IWDG early wakeup interrupt register */
    using IWDG_EWCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Watchdog counter window value These bits are write access protected (see ). They are written by software to define at which position of the IWDCNT down-counter the early wakeup interrupt must be generated. The early interrupt is generated when the IWDCNT is lower or equal to EWIT[11:0] 1. EWIT[11:0] must be bigger than 1. An interrupt is generated only if EWIE = 1. The EWU bit in the must be reset to be able to change the reload value. Note: Reading this register returns the Early wakeup comparator value and the Interrupt enable bit from the VDD voltage domain. This value may not be up to date/valid if a write operation to this register is ongoing, hence the value read from this register is valid only when the EWU bit in the is reset. */
    using IWDG_EWCR_EWIT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Watchdog early interrupt acknowledge The software must write a 1 into this bit in order to acknowledge the early wakeup interrupt and to clear the EWIF flag. Writing 0 has not effect, reading this flag returns a 0. */
    using IWDG_EWCR_EWIC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Watchdog early interrupt enable Set and reset by software. The EWU bit in the must be reset to be able to change the value of this bit. */
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
