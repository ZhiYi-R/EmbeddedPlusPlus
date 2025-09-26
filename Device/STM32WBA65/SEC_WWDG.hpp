/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32WBA65_SEC_WWDG_HPP
#define EMBEDDED_PP_STM32WBA65_SEC_WWDG_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief WWDG address block description */
namespace STM32WBA65::SEC_WWDG {

    /** @brief WWDG control register */
    using WWDG_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 7-bit counter (MSB to LSB) */
    using WWDG_CR_T = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Activation bit */
    using WWDG_CR_WDGA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Watchdog disabled (value: 0)
     *          - B_0x1: Watchdog enabled (value: 1)
     */
        /** @brief Watchdog disabled */
    constexpr std::uint32_t WWDG_CR_WDGA_B_0x0 = 0;
        /** @brief Watchdog enabled */
    constexpr std::uint32_t WWDG_CR_WDGA_B_0x1 = 1;

    /** @brief WWDG configuration register */
    using WWDG_CFR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 7-bit window value */
    using WWDG_CFR_W = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Early wake-up interrupt enable */
    using WWDG_CFR_EWI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timer base */
    using WWDG_CFR_WDGTB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CK counter clock (PCLK div 4096) div 1 (value: 0)
     *          - B_0x1: CK counter clock (PCLK div 4096) div 2 (value: 1)
     *          - B_0x2: CK counter clock (PCLK div 4096) div 4 (value: 2)
     *          - B_0x3: CK counter clock (PCLK div 4096) div 8 (value: 3)
     *          - B_0x4: CK counter clock (PCLK div 4096) div 16 (value: 4)
     *          - B_0x5: CK counter clock (PCLK div 4096) div 32 (value: 5)
     *          - B_0x6: CK counter clock (PCLK div 4096) div 64 (value: 6)
     *          - B_0x7: CK counter clock (PCLK div 4096) div 128 (value: 7)
     */
        /** @brief CK counter clock (PCLK div 4096) div 1 */
    constexpr std::uint32_t WWDG_CFR_WDGTB_B_0x0 = 0;
        /** @brief CK counter clock (PCLK div 4096) div 2 */
    constexpr std::uint32_t WWDG_CFR_WDGTB_B_0x1 = 1;
        /** @brief CK counter clock (PCLK div 4096) div 4 */
    constexpr std::uint32_t WWDG_CFR_WDGTB_B_0x2 = 2;
        /** @brief CK counter clock (PCLK div 4096) div 8 */
    constexpr std::uint32_t WWDG_CFR_WDGTB_B_0x3 = 3;
        /** @brief CK counter clock (PCLK div 4096) div 16 */
    constexpr std::uint32_t WWDG_CFR_WDGTB_B_0x4 = 4;
        /** @brief CK counter clock (PCLK div 4096) div 32 */
    constexpr std::uint32_t WWDG_CFR_WDGTB_B_0x5 = 5;
        /** @brief CK counter clock (PCLK div 4096) div 64 */
    constexpr std::uint32_t WWDG_CFR_WDGTB_B_0x6 = 6;
        /** @brief CK counter clock (PCLK div 4096) div 128 */
    constexpr std::uint32_t WWDG_CFR_WDGTB_B_0x7 = 7;

    /** @brief WWDG status register */
    using WWDG_SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Early wake-up interrupt flag */
    using WWDG_SR_EWIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
