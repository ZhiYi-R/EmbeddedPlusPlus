/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32U3B5_PWR_HPP
#define EMBEDDED_PP_STM32U3B5_PWR_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief PWR register block */
namespace STM32U3B5::PWR {

    /** @brief PWR_CR1 register */
    using PWR_CR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Low-power mode selection */
    using PWR_CR1_LPMS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Stop 0 mode (value: 0)
     *          - B_0x1: Stop 1 mode (value: 1)
     *          - B_0x2: Stop 2 mode (value: 2)
     *          - B_0x3: Stop 3 mode (value: 3)
     *          - B_0x4: Standby mode (value: 4)
     *          - B_0x5: Standby mode (value: 5)
     *          - B_0x6: Shutdown mode (value: 6)
     *          - B_0x7: Shutdown mode (value: 7)
     */
        /** @brief Stop 0 mode */
    constexpr std::uint32_t PWR_CR1_LPMS_B_0x0 = 0;
        /** @brief Stop 1 mode */
    constexpr std::uint32_t PWR_CR1_LPMS_B_0x1 = 1;
        /** @brief Stop 2 mode */
    constexpr std::uint32_t PWR_CR1_LPMS_B_0x2 = 2;
        /** @brief Stop 3 mode */
    constexpr std::uint32_t PWR_CR1_LPMS_B_0x3 = 3;
        /** @brief Standby mode */
    constexpr std::uint32_t PWR_CR1_LPMS_B_0x4 = 4;
        /** @brief Standby mode */
    constexpr std::uint32_t PWR_CR1_LPMS_B_0x5 = 5;
        /** @brief Shutdown mode */
    constexpr std::uint32_t PWR_CR1_LPMS_B_0x6 = 6;
        /** @brief Shutdown mode */
    constexpr std::uint32_t PWR_CR1_LPMS_B_0x7 = 7;

    /** @brief SRAM2 page 1 retention in Standby mode */
    using PWR_CR1_RRSB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM2 page1 content not retained in Standby mode (value: 0)
     *          - B_0x1: SRAM2 page1 content retained in Standby mode (value: 1)
     */
        /** @brief SRAM2 page1 content not retained in Standby mode */
    constexpr std::uint32_t PWR_CR1_RRSB1_B_0x0 = 0;
        /** @brief SRAM2 page1 content retained in Standby mode */
    constexpr std::uint32_t PWR_CR1_RRSB1_B_0x1 = 1;

    /** @brief SRAM2 page 2 retention in Standby mode */
    using PWR_CR1_RRSB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM2 page2 content not retained in Standby mode (value: 0)
     *          - B_0x1: SRAM2 page2 content retained in Standby mode (value: 1)
     */
        /** @brief SRAM2 page2 content not retained in Standby mode */
    constexpr std::uint32_t PWR_CR1_RRSB2_B_0x0 = 0;
        /** @brief SRAM2 page2 content retained in Standby mode */
    constexpr std::uint32_t PWR_CR1_RRSB2_B_0x1 = 1;

    /** @brief SRAM2 page 3 retention in Standby mode */
    using PWR_CR1_RRSB3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM2 page3 content not retained in Standby mode (value: 0)
     *          - B_0x1: SRAM2 page3 content retained in Standby mode (value: 1)
     */
        /** @brief SRAM2 page3 content not retained in Standby mode */
    constexpr std::uint32_t PWR_CR1_RRSB3_B_0x0 = 0;
        /** @brief SRAM2 page3 content retained in Standby mode */
    constexpr std::uint32_t PWR_CR1_RRSB3_B_0x1 = 1;

    /** @brief BOR0 ultra-low power mode */
    using PWR_CR1_ULPMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BOR level 0 operating in continuous (normal) mode in Standby mode (value: 0)
     *          - B_0x1: BOR level 0 operating in discontinuous (ultra-low power) mode in Standby mode (value: 1)
     */
        /** @brief BOR level 0 operating in continuous (normal) mode in Standby mode */
    constexpr std::uint32_t PWR_CR1_ULPMEN_B_0x0 = 0;
        /** @brief BOR level 0 operating in discontinuous (ultra-low power) mode in Standby mode */
    constexpr std::uint32_t PWR_CR1_ULPMEN_B_0x1 = 1;

    /** @brief SRAM1 power down */
    using PWR_CR1_SRAM1PD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM1 powered on (value: 0)
     *          - B_0x1: SRAM1 powered off (value: 1)
     */
        /** @brief SRAM1 powered on */
    constexpr std::uint32_t PWR_CR1_SRAM1PD_B_0x0 = 0;
        /** @brief SRAM1 powered off */
    constexpr std::uint32_t PWR_CR1_SRAM1PD_B_0x1 = 1;

    /** @brief SRAM2 power down */
    using PWR_CR1_SRAM2PD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM2 powered on (value: 0)
     *          - B_0x1: SRAM2 powered off (value: 1)
     */
        /** @brief SRAM2 powered on */
    constexpr std::uint32_t PWR_CR1_SRAM2PD_B_0x0 = 0;
        /** @brief SRAM2 powered off */
    constexpr std::uint32_t PWR_CR1_SRAM2PD_B_0x1 = 1;

    /** @brief SRAM3 power down */
    using PWR_CR1_SRAM3PD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM3 powered on (value: 0)
     *          - B_0x1: SRAM3 powered off (value: 1)
     */
        /** @brief SRAM3 powered on */
    constexpr std::uint32_t PWR_CR1_SRAM3PD_B_0x0 = 0;
        /** @brief SRAM3 powered off */
    constexpr std::uint32_t PWR_CR1_SRAM3PD_B_0x1 = 1;

    /** @brief SRAM4 power down */
    using PWR_CR1_SRAM4PD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM4 powered on (value: 0)
     *          - B_0x1: SRAM4 powered off (value: 1)
     */
        /** @brief SRAM4 powered on */
    constexpr std::uint32_t PWR_CR1_SRAM4PD_B_0x0 = 0;
        /** @brief SRAM4 powered off */
    constexpr std::uint32_t PWR_CR1_SRAM4PD_B_0x1 = 1;

    /** @brief PWR control register 2 */
    using PWR_CR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SRAM1 page i power-down in Stop1, Stop2, and Stop3 modes (i=7to1) */
    using PWR_CR2_SRAM1PDS1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM1 page i content retained in Stop modes (value: 0)
     *          - B_0x1: SRAM1 page i content lost in Stop modes (value: 1)
     */
        /** @brief SRAM1 page i content retained in Stop modes */
    constexpr std::uint32_t PWR_CR2_SRAM1PDS1_B_0x0 = 0;
        /** @brief SRAM1 page i content lost in Stop modes */
    constexpr std::uint32_t PWR_CR2_SRAM1PDS1_B_0x1 = 1;

    /** @brief SRAM1 page i power-down in Stop1, Stop2, and Stop3 modes (i=7to1) */
    using PWR_CR2_SRAM1PDS2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM1 page i content retained in Stop modes (value: 0)
     *          - B_0x1: SRAM1 page i content lost in Stop modes (value: 1)
     */
        /** @brief SRAM1 page i content retained in Stop modes */
    constexpr std::uint32_t PWR_CR2_SRAM1PDS2_B_0x0 = 0;
        /** @brief SRAM1 page i content lost in Stop modes */
    constexpr std::uint32_t PWR_CR2_SRAM1PDS2_B_0x1 = 1;

    /** @brief SRAM1 page i power-down in Stop1, Stop2, and Stop3 modes (i=7to1) */
    using PWR_CR2_SRAM1PDS3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM1 page i content retained in Stop modes (value: 0)
     *          - B_0x1: SRAM1 page i content lost in Stop modes (value: 1)
     */
        /** @brief SRAM1 page i content retained in Stop modes */
    constexpr std::uint32_t PWR_CR2_SRAM1PDS3_B_0x0 = 0;
        /** @brief SRAM1 page i content lost in Stop modes */
    constexpr std::uint32_t PWR_CR2_SRAM1PDS3_B_0x1 = 1;

    /** @brief SRAM1 page i power-down in Stop1, Stop2, and Stop3 modes (i=7to1) */
    using PWR_CR2_SRAM1PDS4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM1 page i content retained in Stop modes (value: 0)
     *          - B_0x1: SRAM1 page i content lost in Stop modes (value: 1)
     */
        /** @brief SRAM1 page i content retained in Stop modes */
    constexpr std::uint32_t PWR_CR2_SRAM1PDS4_B_0x0 = 0;
        /** @brief SRAM1 page i content lost in Stop modes */
    constexpr std::uint32_t PWR_CR2_SRAM1PDS4_B_0x1 = 1;

    /** @brief SRAM1 page i power-down in Stop1, Stop2, and Stop3 modes (i=7to1) */
    using PWR_CR2_SRAM1PDS5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM1 page i content retained in Stop modes (value: 0)
     *          - B_0x1: SRAM1 page i content lost in Stop modes (value: 1)
     */
        /** @brief SRAM1 page i content retained in Stop modes */
    constexpr std::uint32_t PWR_CR2_SRAM1PDS5_B_0x0 = 0;
        /** @brief SRAM1 page i content lost in Stop modes */
    constexpr std::uint32_t PWR_CR2_SRAM1PDS5_B_0x1 = 1;

    /** @brief SRAM1 page i power-down in Stop1, Stop2, and Stop3 modes (i=7to1) */
    using PWR_CR2_SRAM1PDS6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM1 page i content retained in Stop modes (value: 0)
     *          - B_0x1: SRAM1 page i content lost in Stop modes (value: 1)
     */
        /** @brief SRAM1 page i content retained in Stop modes */
    constexpr std::uint32_t PWR_CR2_SRAM1PDS6_B_0x0 = 0;
        /** @brief SRAM1 page i content lost in Stop modes */
    constexpr std::uint32_t PWR_CR2_SRAM1PDS6_B_0x1 = 1;

    /** @brief SRAM1 page i power-down in Stop1, Stop2, and Stop3 modes (i=7to1) */
    using PWR_CR2_SRAM1PDS7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM1 page i content retained in Stop modes (value: 0)
     *          - B_0x1: SRAM1 page i content lost in Stop modes (value: 1)
     */
        /** @brief SRAM1 page i content retained in Stop modes */
    constexpr std::uint32_t PWR_CR2_SRAM1PDS7_B_0x0 = 0;
        /** @brief SRAM1 page i content lost in Stop modes */
    constexpr std::uint32_t PWR_CR2_SRAM1PDS7_B_0x1 = 1;

    /** @brief SRAM3 page i power-down in Stop1, Stop2, and Stop3 modes */
    using PWR_CR2_SRAM3PDS1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM3 page i content retained in Stop modes (value: 0)
     *          - B_0x1: SRAM3 page i content lost in Stop modes (value: 1)
     */
        /** @brief SRAM3 page i content retained in Stop modes */
    constexpr std::uint32_t PWR_CR2_SRAM3PDS1_B_0x0 = 0;
        /** @brief SRAM3 page i content lost in Stop modes */
    constexpr std::uint32_t PWR_CR2_SRAM3PDS1_B_0x1 = 1;

    /** @brief SRAM3 page i power-down in Stop1, Stop2, and Stop3 modes */
    using PWR_CR2_SRAM3PDS2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM3 page i content retained in Stop modes (value: 0)
     *          - B_0x1: SRAM3 page i content lost in Stop modes (value: 1)
     */
        /** @brief SRAM3 page i content retained in Stop modes */
    constexpr std::uint32_t PWR_CR2_SRAM3PDS2_B_0x0 = 0;
        /** @brief SRAM3 page i content lost in Stop modes */
    constexpr std::uint32_t PWR_CR2_SRAM3PDS2_B_0x1 = 1;

    /** @brief SRAM3 page i power-down in Stop1, Stop2, and Stop3 modes */
    using PWR_CR2_SRAM3PDS3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM3 page i content retained in Stop modes (value: 0)
     *          - B_0x1: SRAM3 page i content lost in Stop modes (value: 1)
     */
        /** @brief SRAM3 page i content retained in Stop modes */
    constexpr std::uint32_t PWR_CR2_SRAM3PDS3_B_0x0 = 0;
        /** @brief SRAM3 page i content lost in Stop modes */
    constexpr std::uint32_t PWR_CR2_SRAM3PDS3_B_0x1 = 1;

    /** @brief SRAM3 page i power-down in Stop1, Stop2, and Stop3 modes */
    using PWR_CR2_SRAM3PDS4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM3 page i content retained in Stop modes (value: 0)
     *          - B_0x1: SRAM3 page i content lost in Stop modes (value: 1)
     */
        /** @brief SRAM3 page i content retained in Stop modes */
    constexpr std::uint32_t PWR_CR2_SRAM3PDS4_B_0x0 = 0;
        /** @brief SRAM3 page i content lost in Stop modes */
    constexpr std::uint32_t PWR_CR2_SRAM3PDS4_B_0x1 = 1;

    /** @brief SRAM3 page i power-down in Stop1, Stop2, and Stop3 modes */
    using PWR_CR2_SRAM3PDS5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM3 page i content retained in Stop modes (value: 0)
     *          - B_0x1: SRAM3 page i content lost in Stop modes (value: 1)
     */
        /** @brief SRAM3 page i content retained in Stop modes */
    constexpr std::uint32_t PWR_CR2_SRAM3PDS5_B_0x0 = 0;
        /** @brief SRAM3 page i content lost in Stop modes */
    constexpr std::uint32_t PWR_CR2_SRAM3PDS5_B_0x1 = 1;

    /** @brief SRAM2 page 1 (32 Kbytes) power-down in Stop1, Stop2, and Stop3 modes */
    using PWR_CR2_SRAM2PDS1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM2 page 1 content retained in Stop modes (value: 0)
     *          - B_0x1: SRAM2 page 1 content lost in Stop modes (value: 1)
     */
        /** @brief SRAM2 page 1 content retained in Stop modes */
    constexpr std::uint32_t PWR_CR2_SRAM2PDS1_B_0x0 = 0;
        /** @brief SRAM2 page 1 content lost in Stop modes */
    constexpr std::uint32_t PWR_CR2_SRAM2PDS1_B_0x1 = 1;

    /** @brief SRAM2 page 2 (24 Kbytes) power-down in Stop1, Stop2, and Stop3 modes */
    using PWR_CR2_SRAM2PDS2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM2 page 2 content retained in Stop modes (value: 0)
     *          - B_0x1: SRAM2 page 2 content lost in Stop modes (value: 1)
     */
        /** @brief SRAM2 page 2 content retained in Stop modes */
    constexpr std::uint32_t PWR_CR2_SRAM2PDS2_B_0x0 = 0;
        /** @brief SRAM2 page 2 content lost in Stop modes */
    constexpr std::uint32_t PWR_CR2_SRAM2PDS2_B_0x1 = 1;

    /** @brief SRAM2 page 3 (8 Kbytes) power-down in Stop1, Stop2, and Stop3 modes */
    using PWR_CR2_SRAM2PDS3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM2 page 3 content retained in Stop modes (value: 0)
     *          - B_0x1: SRAM2 page 3 content lost in Stop modes (value: 1)
     */
        /** @brief SRAM2 page 3 content retained in Stop modes */
    constexpr std::uint32_t PWR_CR2_SRAM2PDS3_B_0x0 = 0;
        /** @brief SRAM2 page 3 content lost in Stop modes */
    constexpr std::uint32_t PWR_CR2_SRAM2PDS3_B_0x1 = 1;

    /** @brief SRAM4 power-down in Stop1, Stop2, and Stop3 modes */
    using PWR_CR2_SRAM4PDS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM4 content retained in Stop modes (value: 0)
     *          - B_0x1: SRAM4 content lost in Stop modes (value: 1)
     */
        /** @brief SRAM4 content retained in Stop modes */
    constexpr std::uint32_t PWR_CR2_SRAM4PDS_B_0x0 = 0;
        /** @brief SRAM4 content lost in Stop modes */
    constexpr std::uint32_t PWR_CR2_SRAM4PDS_B_0x1 = 1;

    /** @brief ICACHE SRAM power-down in Stop1, Stop2, and Stop3 modes */
    using PWR_CR2_ICRAMPDS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ICACHE SRAM content retained in Stop modes (value: 0)
     *          - B_0x1: ICACHE SRAM content lost in Stop modes (value: 1)
     */
        /** @brief ICACHE SRAM content retained in Stop modes */
    constexpr std::uint32_t PWR_CR2_ICRAMPDS_B_0x0 = 0;
        /** @brief ICACHE SRAM content lost in Stop modes */
    constexpr std::uint32_t PWR_CR2_ICRAMPDS_B_0x1 = 1;

    /** @brief FDCAN and USB SRAM power-down in Stop1, Stop2, and Stop3 modes */
    using PWR_CR2_PRAMPDS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FDCAN and USB SRAM content retained in Stop modes (value: 0)
     *          - B_0x1: FDCAN and USB SRAM content lost in Stop modes (value: 1)
     */
        /** @brief FDCAN and USB SRAM content retained in Stop modes */
    constexpr std::uint32_t PWR_CR2_PRAMPDS_B_0x0 = 0;
        /** @brief FDCAN and USB SRAM content lost in Stop modes */
    constexpr std::uint32_t PWR_CR2_PRAMPDS_B_0x1 = 1;

    /** @brief PKA SRAM power-down in Stop1, Stop2, and Stop3 modes */
    using PWR_CR2_PKARAMPDS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PKA SRAM content retained in Stop modes (value: 0)
     *          - B_0x1: PKA SRAM content lost in Stop modes (value: 1)
     */
        /** @brief PKA SRAM content retained in Stop modes */
    constexpr std::uint32_t PWR_CR2_PKARAMPDS_B_0x0 = 0;
        /** @brief PKA SRAM content lost in Stop modes */
    constexpr std::uint32_t PWR_CR2_PKARAMPDS_B_0x1 = 1;

    /** @brief SRAM fast wake-up from Stop 0 and Stop 1 modes */
    using PWR_CR2_SRAMFWU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAMs enter low-power mode in Stop 0 and Stop 1 modes (source biasing for lower-power consumption). (value: 0)
     *          - B_0x1: SRAMs remain in normal mode in Stop 0 and Stop 1 modes (higher consumption but no SRAM wake-up time). (value: 1)
     */
        /** @brief SRAMs enter low-power mode in Stop 0 and Stop 1 modes (source biasing for lower-power consumption). */
    constexpr std::uint32_t PWR_CR2_SRAMFWU_B_0x0 = 0;
        /** @brief SRAMs remain in normal mode in Stop 0 and Stop 1 modes (higher consumption but no SRAM wake-up time). */
    constexpr std::uint32_t PWR_CR2_SRAMFWU_B_0x1 = 1;

    /** @brief Flash memory fast wake-up from Stop 0 and Stop 1 modes */
    using PWR_CR2_FLASHFWU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Flash memory enters low-power mode in Stop 0 and Stop 1 modes (lower-power consumption). (value: 0)
     *          - B_0x1: Flash memory remains in normal mode in Stop 0 and Stop 1 modes (faster wake-up time). (value: 1)
     */
        /** @brief Flash memory enters low-power mode in Stop 0 and Stop 1 modes (lower-power consumption). */
    constexpr std::uint32_t PWR_CR2_FLASHFWU_B_0x0 = 0;
        /** @brief Flash memory remains in normal mode in Stop 0 and Stop 1 modes (faster wake-up time). */
    constexpr std::uint32_t PWR_CR2_FLASHFWU_B_0x1 = 1;

    /** @brief PWR control register 3 */
    using PWR_CR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regulator selection */
    using PWR_CR3_REGSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LDO selected (value: 0)
     *          - B_0x1: SMPS selected (value: 1)
     */
        /** @brief LDO selected */
    constexpr std::uint32_t PWR_CR3_REGSEL_B_0x0 = 0;
        /** @brief SMPS selected */
    constexpr std::uint32_t PWR_CR3_REGSEL_B_0x1 = 1;

    /** @brief Fast soft start */
    using PWR_CR3_FSTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LDO/SMPS fast startup disabled (limited inrush current) (value: 0)
     *          - B_0x1: LDO/SMPS fast startup enabled (value: 1)
     */
        /** @brief LDO/SMPS fast startup disabled (limited inrush current) */
    constexpr std::uint32_t PWR_CR3_FSTEN_B_0x0 = 0;
        /** @brief LDO/SMPS fast startup enabled */
    constexpr std::uint32_t PWR_CR3_FSTEN_B_0x1 = 1;

    /** @brief PWR voltage scaling register */
    using PWR_VOSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Voltage scaling range 1 selection */
    using PWR_VOSR_R1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Voltage scaling range 1 disabled (value: 0)
     *          - B_0x1: Voltage scaling range 1 enabled (value: 1)
     */
        /** @brief Voltage scaling range 1 disabled */
    constexpr std::uint32_t PWR_VOSR_R1EN_B_0x0 = 0;
        /** @brief Voltage scaling range 1 enabled */
    constexpr std::uint32_t PWR_VOSR_R1EN_B_0x1 = 1;

    /** @brief Voltage scaling range 2 selection */
    using PWR_VOSR_R2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Voltage scaling range 2 disabled (value: 0)
     *          - B_0x1: Voltage scaling range 2 enabled (value: 1)
     */
        /** @brief Voltage scaling range 2 disabled */
    constexpr std::uint32_t PWR_VOSR_R2EN_B_0x0 = 0;
        /** @brief Voltage scaling range 2 enabled */
    constexpr std::uint32_t PWR_VOSR_R2EN_B_0x1 = 1;

    /** @brief EPOD booster enable */
    using PWR_VOSR_BOOSTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Booster disabled (value: 0)
     *          - B_0x1: Booster enabled (value: 1)
     */
        /** @brief Booster disabled */
    constexpr std::uint32_t PWR_VOSR_BOOSTEN_B_0x0 = 0;
        /** @brief Booster enabled */
    constexpr std::uint32_t PWR_VOSR_BOOSTEN_B_0x1 = 1;

    /** @brief Ready bit for Vless thansub>COREless than/sub> voltage range 1 selection */
    using PWR_VOSR_R1RDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Range 1 not ready: voltage level less than VOS range 1 level (value: 0)
     *          - B_0x1: Range 1 ready: voltage level greater or equal VOS range 1 level (value: 1)
     */
        /** @brief Range 1 not ready: voltage level less than VOS range 1 level */
    constexpr std::uint32_t PWR_VOSR_R1RDY_B_0x0 = 0;
        /** @brief Range 1 ready: voltage level greater or equal VOS range 1 level */
    constexpr std::uint32_t PWR_VOSR_R1RDY_B_0x1 = 1;

    /** @brief Ready bit for Vless thansub>COREless than/sub> voltage range 2 selection */
    using PWR_VOSR_R2RDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Range 2 not ready: voltage level less than VOS range 2 level (value: 0)
     *          - B_0x1: Range 2 ready: voltage level greater or equal VOS range 2 level (value: 1)
     */
        /** @brief Range 2 not ready: voltage level less than VOS range 2 level */
    constexpr std::uint32_t PWR_VOSR_R2RDY_B_0x0 = 0;
        /** @brief Range 2 ready: voltage level greater or equal VOS range 2 level */
    constexpr std::uint32_t PWR_VOSR_R2RDY_B_0x1 = 1;

    /** @brief EPOD booster ready */
    using PWR_VOSR_BOOSTRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Power booster not ready (value: 0)
     *          - B_0x1: Power booster ready (value: 1)
     */
        /** @brief Power booster not ready */
    constexpr std::uint32_t PWR_VOSR_BOOSTRDY_B_0x0 = 0;
        /** @brief Power booster ready */
    constexpr std::uint32_t PWR_VOSR_BOOSTRDY_B_0x1 = 1;

    /** @brief PWR supply voltage monitoring control register */
    using PWR_SVMCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Programmable voltage detector enable */
    using PWR_SVMCR_PVDE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PVD disabled (value: 0)
     *          - B_0x1: PVD enabled (value: 1)
     */
        /** @brief PVD disabled */
    constexpr std::uint32_t PWR_SVMCR_PVDE_B_0x0 = 0;
        /** @brief PVD enabled */
    constexpr std::uint32_t PWR_SVMCR_PVDE_B_0x1 = 1;

    /** @brief Programmable voltage detector (PVD) level selection */
    using PWR_SVMCR_PVDLS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Vless thansub>PVD0less than/sub> around 2. (value: 0)
     *          - B_0x1: Vless thansub>PVD1less than/sub> around 2. (value: 1)
     *          - B_0x2: Vless thansub>PVD2less than/sub> around 2. (value: 2)
     *          - B_0x3: Vless thansub>PVD3less than/sub> around 2. (value: 3)
     *          - B_0x4: Vless thansub>PVD4less than/sub> around 2. (value: 4)
     *          - B_0x5: Vless thansub>PVD5less than/sub> around 2. (value: 5)
     *          - B_0x6: Vless thansub>PVD6less than/sub> around 2. (value: 6)
     *          - B_0x7: External input analog voltage PVD_IN (compared internally to VREFINT) (value: 7)
     */
        /** @brief Vless thansub>PVD0less than/sub> around 2. */
    constexpr std::uint32_t PWR_SVMCR_PVDLS_B_0x0 = 0;
        /** @brief Vless thansub>PVD1less than/sub> around 2. */
    constexpr std::uint32_t PWR_SVMCR_PVDLS_B_0x1 = 1;
        /** @brief Vless thansub>PVD2less than/sub> around 2. */
    constexpr std::uint32_t PWR_SVMCR_PVDLS_B_0x2 = 2;
        /** @brief Vless thansub>PVD3less than/sub> around 2. */
    constexpr std::uint32_t PWR_SVMCR_PVDLS_B_0x3 = 3;
        /** @brief Vless thansub>PVD4less than/sub> around 2. */
    constexpr std::uint32_t PWR_SVMCR_PVDLS_B_0x4 = 4;
        /** @brief Vless thansub>PVD5less than/sub> around 2. */
    constexpr std::uint32_t PWR_SVMCR_PVDLS_B_0x5 = 5;
        /** @brief Vless thansub>PVD6less than/sub> around 2. */
    constexpr std::uint32_t PWR_SVMCR_PVDLS_B_0x6 = 6;
        /** @brief External input analog voltage PVD_IN (compared internally to VREFINT) */
    constexpr std::uint32_t PWR_SVMCR_PVDLS_B_0x7 = 7;

    /** @brief Vless thansub>DDUSBless than/sub>independent USB voltage monitor enable */
    using PWR_SVMCR_UVMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Vless thansub>DDUSBless than/sub> voltage monitor disabled (value: 0)
     *          - B_0x1: Vless thansub>DDUSBless than/sub> voltage monitor enabled (value: 1)
     */
        /** @brief Vless thansub>DDUSBless than/sub> voltage monitor disabled */
    constexpr std::uint32_t PWR_SVMCR_UVMEN_B_0x0 = 0;
        /** @brief Vless thansub>DDUSBless than/sub> voltage monitor enabled */
    constexpr std::uint32_t PWR_SVMCR_UVMEN_B_0x1 = 1;

    /** @brief Vless thansub>DDIO2less than/sub> independent I/O voltage monitor enable */
    using PWR_SVMCR_IO2VMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Vless thansub>DDIO2less than/sub> voltage monitor disabled (value: 0)
     *          - B_0x1: Vless thansub>DDIO2less than/sub> voltage monitor enabled (value: 1)
     */
        /** @brief Vless thansub>DDIO2less than/sub> voltage monitor disabled */
    constexpr std::uint32_t PWR_SVMCR_IO2VMEN_B_0x0 = 0;
        /** @brief Vless thansub>DDIO2less than/sub> voltage monitor enabled */
    constexpr std::uint32_t PWR_SVMCR_IO2VMEN_B_0x1 = 1;

    /** @brief Vless thansub>DDAless than/sub> independent analog supply voltage monitor 1 enable (1. */
    using PWR_SVMCR_AVM1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Vless thansub>DDAless than/sub> voltage monitor 1 disabled (value: 0)
     *          - B_0x1: Vless thansub>DDAless than/sub> voltage monitor 1 enabled (value: 1)
     */
        /** @brief Vless thansub>DDAless than/sub> voltage monitor 1 disabled */
    constexpr std::uint32_t PWR_SVMCR_AVM1EN_B_0x0 = 0;
        /** @brief Vless thansub>DDAless than/sub> voltage monitor 1 enabled */
    constexpr std::uint32_t PWR_SVMCR_AVM1EN_B_0x1 = 1;

    /** @brief Vless thansub>DDAless than/sub> independent analog supply voltage monitor 2 enable (1. */
    using PWR_SVMCR_AVM2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Vless thansub>DDAless than/sub> voltage monitor 2 disabled (value: 0)
     *          - B_0x1: Vless thansub>DDAless than/sub> voltage monitor 2 enabled (value: 1)
     */
        /** @brief Vless thansub>DDAless than/sub> voltage monitor 2 disabled */
    constexpr std::uint32_t PWR_SVMCR_AVM2EN_B_0x0 = 0;
        /** @brief Vless thansub>DDAless than/sub> voltage monitor 2 enabled */
    constexpr std::uint32_t PWR_SVMCR_AVM2EN_B_0x1 = 1;

    /** @brief Vless thansub>DDUSBless than/sub> independent USB supply valid */
    using PWR_SVMCR_USV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Vless thansub>DDUSBless than/sub> not present: logical and electrical isolation is applied to ignore this supply. (value: 0)
     *          - B_0x1: Vless thansub>DDUSBless than/sub> valid (value: 1)
     */
        /** @brief Vless thansub>DDUSBless than/sub> not present: logical and electrical isolation is applied to ignore this supply. */
    constexpr std::uint32_t PWR_SVMCR_USV_B_0x0 = 0;
        /** @brief Vless thansub>DDUSBless than/sub> valid */
    constexpr std::uint32_t PWR_SVMCR_USV_B_0x1 = 1;

    /** @brief Vless thansub>DDIO2less than/sub> independent I/O supply valid */
    using PWR_SVMCR_IO2SV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Vless thansub>DDIO2less than/sub> not present: logical and electrical isolation is applied to ignore this supply. (value: 0)
     *          - B_0x1: Vless thansub>DDIO2less than/sub> valid (value: 1)
     */
        /** @brief Vless thansub>DDIO2less than/sub> not present: logical and electrical isolation is applied to ignore this supply. */
    constexpr std::uint32_t PWR_SVMCR_IO2SV_B_0x0 = 0;
        /** @brief Vless thansub>DDIO2less than/sub> valid */
    constexpr std::uint32_t PWR_SVMCR_IO2SV_B_0x1 = 1;

    /** @brief Vless thansub>DDAless than/sub> independent analog supply valid */
    using PWR_SVMCR_ASV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Vless thansub>DDAless than/sub> not present: logical and electrical isolation is applied to ignore this supply. (value: 0)
     *          - B_0x1: Vless thansub>DDAless than/sub> valid (value: 1)
     */
        /** @brief Vless thansub>DDAless than/sub> not present: logical and electrical isolation is applied to ignore this supply. */
    constexpr std::uint32_t PWR_SVMCR_ASV_B_0x0 = 0;
        /** @brief Vless thansub>DDAless than/sub> valid */
    constexpr std::uint32_t PWR_SVMCR_ASV_B_0x1 = 1;

    /** @brief PWR wake-up control register 1 */
    using PWR_WUCR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up line WKUPi enable */
    using PWR_WUCR1_WUPEN1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up line WKUPi disabled (value: 0)
     *          - B_0x1: Wake-up line WKUPi enabled (value: 1)
     */
        /** @brief Wake-up line WKUPi disabled */
    constexpr std::uint32_t PWR_WUCR1_WUPEN1_B_0x0 = 0;
        /** @brief Wake-up line WKUPi enabled */
    constexpr std::uint32_t PWR_WUCR1_WUPEN1_B_0x1 = 1;

    /** @brief Wake-up line WKUPi enable */
    using PWR_WUCR1_WUPEN2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up line WKUPi disabled (value: 0)
     *          - B_0x1: Wake-up line WKUPi enabled (value: 1)
     */
        /** @brief Wake-up line WKUPi disabled */
    constexpr std::uint32_t PWR_WUCR1_WUPEN2_B_0x0 = 0;
        /** @brief Wake-up line WKUPi enabled */
    constexpr std::uint32_t PWR_WUCR1_WUPEN2_B_0x1 = 1;

    /** @brief Wake-up line WKUPi enable */
    using PWR_WUCR1_WUPEN3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up line WKUPi disabled (value: 0)
     *          - B_0x1: Wake-up line WKUPi enabled (value: 1)
     */
        /** @brief Wake-up line WKUPi disabled */
    constexpr std::uint32_t PWR_WUCR1_WUPEN3_B_0x0 = 0;
        /** @brief Wake-up line WKUPi enabled */
    constexpr std::uint32_t PWR_WUCR1_WUPEN3_B_0x1 = 1;

    /** @brief Wake-up line WKUPi enable */
    using PWR_WUCR1_WUPEN4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up line WKUPi disabled (value: 0)
     *          - B_0x1: Wake-up line WKUPi enabled (value: 1)
     */
        /** @brief Wake-up line WKUPi disabled */
    constexpr std::uint32_t PWR_WUCR1_WUPEN4_B_0x0 = 0;
        /** @brief Wake-up line WKUPi enabled */
    constexpr std::uint32_t PWR_WUCR1_WUPEN4_B_0x1 = 1;

    /** @brief Wake-up line WKUPi enable */
    using PWR_WUCR1_WUPEN5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up line WKUPi disabled (value: 0)
     *          - B_0x1: Wake-up line WKUPi enabled (value: 1)
     */
        /** @brief Wake-up line WKUPi disabled */
    constexpr std::uint32_t PWR_WUCR1_WUPEN5_B_0x0 = 0;
        /** @brief Wake-up line WKUPi enabled */
    constexpr std::uint32_t PWR_WUCR1_WUPEN5_B_0x1 = 1;

    /** @brief Wake-up line WKUPi enable */
    using PWR_WUCR1_WUPEN6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up line WKUPi disabled (value: 0)
     *          - B_0x1: Wake-up line WKUPi enabled (value: 1)
     */
        /** @brief Wake-up line WKUPi disabled */
    constexpr std::uint32_t PWR_WUCR1_WUPEN6_B_0x0 = 0;
        /** @brief Wake-up line WKUPi enabled */
    constexpr std::uint32_t PWR_WUCR1_WUPEN6_B_0x1 = 1;

    /** @brief Wake-up line WKUPi enable */
    using PWR_WUCR1_WUPEN7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up line WKUPi disabled (value: 0)
     *          - B_0x1: Wake-up line WKUPi enabled (value: 1)
     */
        /** @brief Wake-up line WKUPi disabled */
    constexpr std::uint32_t PWR_WUCR1_WUPEN7_B_0x0 = 0;
        /** @brief Wake-up line WKUPi enabled */
    constexpr std::uint32_t PWR_WUCR1_WUPEN7_B_0x1 = 1;

    /** @brief Wake-up line WKUPi enable */
    using PWR_WUCR1_WUPEN8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up line WKUPi disabled (value: 0)
     *          - B_0x1: Wake-up line WKUPi enabled (value: 1)
     */
        /** @brief Wake-up line WKUPi disabled */
    constexpr std::uint32_t PWR_WUCR1_WUPEN8_B_0x0 = 0;
        /** @brief Wake-up line WKUPi enabled */
    constexpr std::uint32_t PWR_WUCR1_WUPEN8_B_0x1 = 1;

    /** @brief Wake-up line WKUPi enable */
    using PWR_WUCR1_WUPEN9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up line WKUPi disabled (value: 0)
     *          - B_0x1: Wake-up line WKUPi enabled (value: 1)
     */
        /** @brief Wake-up line WKUPi disabled */
    constexpr std::uint32_t PWR_WUCR1_WUPEN9_B_0x0 = 0;
        /** @brief Wake-up line WKUPi enabled */
    constexpr std::uint32_t PWR_WUCR1_WUPEN9_B_0x1 = 1;

    /** @brief Wake-up line WKUPi enable */
    using PWR_WUCR1_WUPEN10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wake-up line WKUPi disabled (value: 0)
     *          - B_0x1: Wake-up line WKUPi enabled (value: 1)
     */
        /** @brief Wake-up line WKUPi disabled */
    constexpr std::uint32_t PWR_WUCR1_WUPEN10_B_0x0 = 0;
        /** @brief Wake-up line WKUPi enabled */
    constexpr std::uint32_t PWR_WUCR1_WUPEN10_B_0x1 = 1;

    /** @brief PWR wake-up control register 2 */
    using PWR_WUCR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up line WKUP8 polarity */
    using PWR_WUCR2_WUPP1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Detection on high level (rising edge) (value: 0)
     *          - B_0x1: Detection on low level (falling edge) (value: 1)
     */
        /** @brief Detection on high level (rising edge) */
    constexpr std::uint32_t PWR_WUCR2_WUPP1_B_0x0 = 0;
        /** @brief Detection on low level (falling edge) */
    constexpr std::uint32_t PWR_WUCR2_WUPP1_B_0x1 = 1;

    /** @brief Wake-up line WKUP8 polarity */
    using PWR_WUCR2_WUPP2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Detection on high level (rising edge) (value: 0)
     *          - B_0x1: Detection on low level (falling edge) (value: 1)
     */
        /** @brief Detection on high level (rising edge) */
    constexpr std::uint32_t PWR_WUCR2_WUPP2_B_0x0 = 0;
        /** @brief Detection on low level (falling edge) */
    constexpr std::uint32_t PWR_WUCR2_WUPP2_B_0x1 = 1;

    /** @brief Wake-up line WKUP8 polarity */
    using PWR_WUCR2_WUPP3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Detection on high level (rising edge) (value: 0)
     *          - B_0x1: Detection on low level (falling edge) (value: 1)
     */
        /** @brief Detection on high level (rising edge) */
    constexpr std::uint32_t PWR_WUCR2_WUPP3_B_0x0 = 0;
        /** @brief Detection on low level (falling edge) */
    constexpr std::uint32_t PWR_WUCR2_WUPP3_B_0x1 = 1;

    /** @brief Wake-up line WKUP8 polarity */
    using PWR_WUCR2_WUPP4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Detection on high level (rising edge) (value: 0)
     *          - B_0x1: Detection on low level (falling edge) (value: 1)
     */
        /** @brief Detection on high level (rising edge) */
    constexpr std::uint32_t PWR_WUCR2_WUPP4_B_0x0 = 0;
        /** @brief Detection on low level (falling edge) */
    constexpr std::uint32_t PWR_WUCR2_WUPP4_B_0x1 = 1;

    /** @brief Wake-up line WKUP8 polarity */
    using PWR_WUCR2_WUPP5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Detection on high level (rising edge) (value: 0)
     *          - B_0x1: Detection on low level (falling edge) (value: 1)
     */
        /** @brief Detection on high level (rising edge) */
    constexpr std::uint32_t PWR_WUCR2_WUPP5_B_0x0 = 0;
        /** @brief Detection on low level (falling edge) */
    constexpr std::uint32_t PWR_WUCR2_WUPP5_B_0x1 = 1;

    /** @brief Wake-up line WKUP8 polarity */
    using PWR_WUCR2_WUPP6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Detection on high level (rising edge) (value: 0)
     *          - B_0x1: Detection on low level (falling edge) (value: 1)
     */
        /** @brief Detection on high level (rising edge) */
    constexpr std::uint32_t PWR_WUCR2_WUPP6_B_0x0 = 0;
        /** @brief Detection on low level (falling edge) */
    constexpr std::uint32_t PWR_WUCR2_WUPP6_B_0x1 = 1;

    /** @brief Wake-up line WKUP8 polarity */
    using PWR_WUCR2_WUPP7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Detection on high level (rising edge) (value: 0)
     *          - B_0x1: Detection on low level (falling edge) (value: 1)
     */
        /** @brief Detection on high level (rising edge) */
    constexpr std::uint32_t PWR_WUCR2_WUPP7_B_0x0 = 0;
        /** @brief Detection on low level (falling edge) */
    constexpr std::uint32_t PWR_WUCR2_WUPP7_B_0x1 = 1;

    /** @brief Wake-up line WKUP8 polarity */
    using PWR_WUCR2_WUPP8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Detection on high level (rising edge) (value: 0)
     *          - B_0x1: Detection on low level (falling edge) (value: 1)
     */
        /** @brief Detection on high level (rising edge) */
    constexpr std::uint32_t PWR_WUCR2_WUPP8_B_0x0 = 0;
        /** @brief Detection on low level (falling edge) */
    constexpr std::uint32_t PWR_WUCR2_WUPP8_B_0x1 = 1;

    /** @brief PWR wake-up control register 3 */
    using PWR_WUCR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up line WKUPi selection */
    using PWR_WUCR3_WUSEL1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: WKUPi_0 (value: 0)
     *          - B_0x1: WKUPi_1 (value: 1)
     *          - B_0x2: WKUPi_2 (value: 2)
     *          - B_0x3: WKUPi_3 (value: 3)
     */
        /** @brief WKUPi_0 */
    constexpr std::uint32_t PWR_WUCR3_WUSEL1_B_0x0 = 0;
        /** @brief WKUPi_1 */
    constexpr std::uint32_t PWR_WUCR3_WUSEL1_B_0x1 = 1;
        /** @brief WKUPi_2 */
    constexpr std::uint32_t PWR_WUCR3_WUSEL1_B_0x2 = 2;
        /** @brief WKUPi_3 */
    constexpr std::uint32_t PWR_WUCR3_WUSEL1_B_0x3 = 3;

    /** @brief Wake-up line WKUPi selection */
    using PWR_WUCR3_WUSEL2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: WKUPi_0 (value: 0)
     *          - B_0x1: WKUPi_1 (value: 1)
     *          - B_0x2: WKUPi_2 (value: 2)
     *          - B_0x3: WKUPi_3 (value: 3)
     */
        /** @brief WKUPi_0 */
    constexpr std::uint32_t PWR_WUCR3_WUSEL2_B_0x0 = 0;
        /** @brief WKUPi_1 */
    constexpr std::uint32_t PWR_WUCR3_WUSEL2_B_0x1 = 1;
        /** @brief WKUPi_2 */
    constexpr std::uint32_t PWR_WUCR3_WUSEL2_B_0x2 = 2;
        /** @brief WKUPi_3 */
    constexpr std::uint32_t PWR_WUCR3_WUSEL2_B_0x3 = 3;

    /** @brief Wake-up line WKUPi selection */
    using PWR_WUCR3_WUSEL3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: WKUPi_0 (value: 0)
     *          - B_0x1: WKUPi_1 (value: 1)
     *          - B_0x2: WKUPi_2 (value: 2)
     *          - B_0x3: WKUPi_3 (value: 3)
     */
        /** @brief WKUPi_0 */
    constexpr std::uint32_t PWR_WUCR3_WUSEL3_B_0x0 = 0;
        /** @brief WKUPi_1 */
    constexpr std::uint32_t PWR_WUCR3_WUSEL3_B_0x1 = 1;
        /** @brief WKUPi_2 */
    constexpr std::uint32_t PWR_WUCR3_WUSEL3_B_0x2 = 2;
        /** @brief WKUPi_3 */
    constexpr std::uint32_t PWR_WUCR3_WUSEL3_B_0x3 = 3;

    /** @brief Wake-up line WKUPi selection */
    using PWR_WUCR3_WUSEL4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: WKUPi_0 (value: 0)
     *          - B_0x1: WKUPi_1 (value: 1)
     *          - B_0x2: WKUPi_2 (value: 2)
     *          - B_0x3: WKUPi_3 (value: 3)
     */
        /** @brief WKUPi_0 */
    constexpr std::uint32_t PWR_WUCR3_WUSEL4_B_0x0 = 0;
        /** @brief WKUPi_1 */
    constexpr std::uint32_t PWR_WUCR3_WUSEL4_B_0x1 = 1;
        /** @brief WKUPi_2 */
    constexpr std::uint32_t PWR_WUCR3_WUSEL4_B_0x2 = 2;
        /** @brief WKUPi_3 */
    constexpr std::uint32_t PWR_WUCR3_WUSEL4_B_0x3 = 3;

    /** @brief Wake-up line WKUPi selection */
    using PWR_WUCR3_WUSEL5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: WKUPi_0 (value: 0)
     *          - B_0x1: WKUPi_1 (value: 1)
     *          - B_0x2: WKUPi_2 (value: 2)
     *          - B_0x3: WKUPi_3 (value: 3)
     */
        /** @brief WKUPi_0 */
    constexpr std::uint32_t PWR_WUCR3_WUSEL5_B_0x0 = 0;
        /** @brief WKUPi_1 */
    constexpr std::uint32_t PWR_WUCR3_WUSEL5_B_0x1 = 1;
        /** @brief WKUPi_2 */
    constexpr std::uint32_t PWR_WUCR3_WUSEL5_B_0x2 = 2;
        /** @brief WKUPi_3 */
    constexpr std::uint32_t PWR_WUCR3_WUSEL5_B_0x3 = 3;

    /** @brief Wake-up line WKUPi selection */
    using PWR_WUCR3_WUSEL6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: WKUPi_0 (value: 0)
     *          - B_0x1: WKUPi_1 (value: 1)
     *          - B_0x2: WKUPi_2 (value: 2)
     *          - B_0x3: WKUPi_3 (value: 3)
     */
        /** @brief WKUPi_0 */
    constexpr std::uint32_t PWR_WUCR3_WUSEL6_B_0x0 = 0;
        /** @brief WKUPi_1 */
    constexpr std::uint32_t PWR_WUCR3_WUSEL6_B_0x1 = 1;
        /** @brief WKUPi_2 */
    constexpr std::uint32_t PWR_WUCR3_WUSEL6_B_0x2 = 2;
        /** @brief WKUPi_3 */
    constexpr std::uint32_t PWR_WUCR3_WUSEL6_B_0x3 = 3;

    /** @brief Wake-up line WKUPi selection */
    using PWR_WUCR3_WUSEL7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: WKUPi_0 (value: 0)
     *          - B_0x1: WKUPi_1 (value: 1)
     *          - B_0x2: WKUPi_2 (value: 2)
     *          - B_0x3: WKUPi_3 (value: 3)
     */
        /** @brief WKUPi_0 */
    constexpr std::uint32_t PWR_WUCR3_WUSEL7_B_0x0 = 0;
        /** @brief WKUPi_1 */
    constexpr std::uint32_t PWR_WUCR3_WUSEL7_B_0x1 = 1;
        /** @brief WKUPi_2 */
    constexpr std::uint32_t PWR_WUCR3_WUSEL7_B_0x2 = 2;
        /** @brief WKUPi_3 */
    constexpr std::uint32_t PWR_WUCR3_WUSEL7_B_0x3 = 3;

    /** @brief Wake-up line WKUPi selection */
    using PWR_WUCR3_WUSEL8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: WKUPi_0 (value: 0)
     *          - B_0x1: WKUPi_1 (value: 1)
     *          - B_0x2: WKUPi_2 (value: 2)
     *          - B_0x3: WKUPi_3 (value: 3)
     */
        /** @brief WKUPi_0 */
    constexpr std::uint32_t PWR_WUCR3_WUSEL8_B_0x0 = 0;
        /** @brief WKUPi_1 */
    constexpr std::uint32_t PWR_WUCR3_WUSEL8_B_0x1 = 1;
        /** @brief WKUPi_2 */
    constexpr std::uint32_t PWR_WUCR3_WUSEL8_B_0x2 = 2;
        /** @brief WKUPi_3 */
    constexpr std::uint32_t PWR_WUCR3_WUSEL8_B_0x3 = 3;

    /** @brief PWR backup domain control register */
    using PWR_BDCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Vless thansub>BATless than/sub> charging enable */
    using PWR_BDCR_VBE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Vless thansub>BATless than/sub> battery charging disabled (value: 0)
     *          - B_0x1: Vless thansub>BATless than/sub> battery charging enabled (value: 1)
     */
        /** @brief Vless thansub>BATless than/sub> battery charging disabled */
    constexpr std::uint32_t PWR_BDCR_VBE_B_0x0 = 0;
        /** @brief Vless thansub>BATless than/sub> battery charging enabled */
    constexpr std::uint32_t PWR_BDCR_VBE_B_0x1 = 1;

    /** @brief Vless thansub>BATless than/sub> charging resistor selection */
    using PWR_BDCR_VBRS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Vless thansub>BATless than/sub> charged through a 5 kohm resistor (value: 0)
     *          - B_0x1: Vless thansub>BATless than/sub> charged through a 1. (value: 1)
     */
        /** @brief Vless thansub>BATless than/sub> charged through a 5 kohm resistor */
    constexpr std::uint32_t PWR_BDCR_VBRS_B_0x0 = 0;
        /** @brief Vless thansub>BATless than/sub> charged through a 1. */
    constexpr std::uint32_t PWR_BDCR_VBRS_B_0x1 = 1;

    /** @brief PWR disable backup domain register */
    using PWR_DBPR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Disable backup domain write protection */
    using PWR_DBPR_DBP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write access to backup domain disabled (value: 0)
     *          - B_0x1: Write access to backup domain enabled (value: 1)
     */
        /** @brief Write access to backup domain disabled */
    constexpr std::uint32_t PWR_DBPR_DBP_B_0x0 = 0;
        /** @brief Write access to backup domain enabled */
    constexpr std::uint32_t PWR_DBPR_DBP_B_0x1 = 1;

    /** @brief PWR security configuration register */
    using PWR_SECCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WUPi secure protection */
    using PWR_SECCFGR_WUP1SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bits related to the WKUPi line in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3, and PWR_WUSCR can be read and written with secure or nonsecure access. (value: 0)
     *          - B_0x1: Bits related to the WKUPi line in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3, and PWR_WUSCR can be read and written only with secure access. (value: 1)
     */
        /** @brief Bits related to the WKUPi line in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3, and PWR_WUSCR can be read and written with secure or nonsecure access. */
    constexpr std::uint32_t PWR_SECCFGR_WUP1SEC_B_0x0 = 0;
        /** @brief Bits related to the WKUPi line in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3, and PWR_WUSCR can be read and written only with secure access. */
    constexpr std::uint32_t PWR_SECCFGR_WUP1SEC_B_0x1 = 1;

    /** @brief WUPi secure protection */
    using PWR_SECCFGR_WUP2SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bits related to the WKUPi line in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3, and PWR_WUSCR can be read and written with secure or nonsecure access. (value: 0)
     *          - B_0x1: Bits related to the WKUPi line in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3, and PWR_WUSCR can be read and written only with secure access. (value: 1)
     */
        /** @brief Bits related to the WKUPi line in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3, and PWR_WUSCR can be read and written with secure or nonsecure access. */
    constexpr std::uint32_t PWR_SECCFGR_WUP2SEC_B_0x0 = 0;
        /** @brief Bits related to the WKUPi line in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3, and PWR_WUSCR can be read and written only with secure access. */
    constexpr std::uint32_t PWR_SECCFGR_WUP2SEC_B_0x1 = 1;

    /** @brief WUPi secure protection */
    using PWR_SECCFGR_WUP3SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bits related to the WKUPi line in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3, and PWR_WUSCR can be read and written with secure or nonsecure access. (value: 0)
     *          - B_0x1: Bits related to the WKUPi line in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3, and PWR_WUSCR can be read and written only with secure access. (value: 1)
     */
        /** @brief Bits related to the WKUPi line in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3, and PWR_WUSCR can be read and written with secure or nonsecure access. */
    constexpr std::uint32_t PWR_SECCFGR_WUP3SEC_B_0x0 = 0;
        /** @brief Bits related to the WKUPi line in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3, and PWR_WUSCR can be read and written only with secure access. */
    constexpr std::uint32_t PWR_SECCFGR_WUP3SEC_B_0x1 = 1;

    /** @brief WUPi secure protection */
    using PWR_SECCFGR_WUP4SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bits related to the WKUPi line in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3, and PWR_WUSCR can be read and written with secure or nonsecure access. (value: 0)
     *          - B_0x1: Bits related to the WKUPi line in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3, and PWR_WUSCR can be read and written only with secure access. (value: 1)
     */
        /** @brief Bits related to the WKUPi line in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3, and PWR_WUSCR can be read and written with secure or nonsecure access. */
    constexpr std::uint32_t PWR_SECCFGR_WUP4SEC_B_0x0 = 0;
        /** @brief Bits related to the WKUPi line in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3, and PWR_WUSCR can be read and written only with secure access. */
    constexpr std::uint32_t PWR_SECCFGR_WUP4SEC_B_0x1 = 1;

    /** @brief WUPi secure protection */
    using PWR_SECCFGR_WUP5SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bits related to the WKUPi line in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3, and PWR_WUSCR can be read and written with secure or nonsecure access. (value: 0)
     *          - B_0x1: Bits related to the WKUPi line in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3, and PWR_WUSCR can be read and written only with secure access. (value: 1)
     */
        /** @brief Bits related to the WKUPi line in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3, and PWR_WUSCR can be read and written with secure or nonsecure access. */
    constexpr std::uint32_t PWR_SECCFGR_WUP5SEC_B_0x0 = 0;
        /** @brief Bits related to the WKUPi line in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3, and PWR_WUSCR can be read and written only with secure access. */
    constexpr std::uint32_t PWR_SECCFGR_WUP5SEC_B_0x1 = 1;

    /** @brief WUPi secure protection */
    using PWR_SECCFGR_WUP6SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bits related to the WKUPi line in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3, and PWR_WUSCR can be read and written with secure or nonsecure access. (value: 0)
     *          - B_0x1: Bits related to the WKUPi line in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3, and PWR_WUSCR can be read and written only with secure access. (value: 1)
     */
        /** @brief Bits related to the WKUPi line in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3, and PWR_WUSCR can be read and written with secure or nonsecure access. */
    constexpr std::uint32_t PWR_SECCFGR_WUP6SEC_B_0x0 = 0;
        /** @brief Bits related to the WKUPi line in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3, and PWR_WUSCR can be read and written only with secure access. */
    constexpr std::uint32_t PWR_SECCFGR_WUP6SEC_B_0x1 = 1;

    /** @brief WUPi secure protection */
    using PWR_SECCFGR_WUP7SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bits related to the WKUPi line in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3, and PWR_WUSCR can be read and written with secure or nonsecure access. (value: 0)
     *          - B_0x1: Bits related to the WKUPi line in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3, and PWR_WUSCR can be read and written only with secure access. (value: 1)
     */
        /** @brief Bits related to the WKUPi line in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3, and PWR_WUSCR can be read and written with secure or nonsecure access. */
    constexpr std::uint32_t PWR_SECCFGR_WUP7SEC_B_0x0 = 0;
        /** @brief Bits related to the WKUPi line in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3, and PWR_WUSCR can be read and written only with secure access. */
    constexpr std::uint32_t PWR_SECCFGR_WUP7SEC_B_0x1 = 1;

    /** @brief WUPi secure protection */
    using PWR_SECCFGR_WUP8SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bits related to the WKUPi line in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3, and PWR_WUSCR can be read and written with secure or nonsecure access. (value: 0)
     *          - B_0x1: Bits related to the WKUPi line in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3, and PWR_WUSCR can be read and written only with secure access. (value: 1)
     */
        /** @brief Bits related to the WKUPi line in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3, and PWR_WUSCR can be read and written with secure or nonsecure access. */
    constexpr std::uint32_t PWR_SECCFGR_WUP8SEC_B_0x0 = 0;
        /** @brief Bits related to the WKUPi line in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3, and PWR_WUSCR can be read and written only with secure access. */
    constexpr std::uint32_t PWR_SECCFGR_WUP8SEC_B_0x1 = 1;

    /** @brief WUPi secure protection */
    using PWR_SECCFGR_WUP9SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bits related to the WKUPi line in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3, and PWR_WUSCR can be read and written with secure or nonsecure access. (value: 0)
     *          - B_0x1: Bits related to the WKUPi line in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3, and PWR_WUSCR can be read and written only with secure access. (value: 1)
     */
        /** @brief Bits related to the WKUPi line in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3, and PWR_WUSCR can be read and written with secure or nonsecure access. */
    constexpr std::uint32_t PWR_SECCFGR_WUP9SEC_B_0x0 = 0;
        /** @brief Bits related to the WKUPi line in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3, and PWR_WUSCR can be read and written only with secure access. */
    constexpr std::uint32_t PWR_SECCFGR_WUP9SEC_B_0x1 = 1;

    /** @brief WUPi secure protection */
    using PWR_SECCFGR_WUP10SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bits related to the WKUPi line in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3, and PWR_WUSCR can be read and written with secure or nonsecure access. (value: 0)
     *          - B_0x1: Bits related to the WKUPi line in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3, and PWR_WUSCR can be read and written only with secure access. (value: 1)
     */
        /** @brief Bits related to the WKUPi line in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3, and PWR_WUSCR can be read and written with secure or nonsecure access. */
    constexpr std::uint32_t PWR_SECCFGR_WUP10SEC_B_0x0 = 0;
        /** @brief Bits related to the WKUPi line in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3, and PWR_WUSCR can be read and written only with secure access. */
    constexpr std::uint32_t PWR_SECCFGR_WUP10SEC_B_0x1 = 1;

    /** @brief Low-power mode secure protection */
    using PWR_SECCFGR_LPMSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PWR_CR1, PWR_CR2, and CSSF bit in the PWR_SR can be read and written with secure or nonsecure access. (value: 0)
     *          - B_0x1: PWR_CR1, PWR_CR2, and CSSF bit in the PWR_SR can be read and written only with secure access. (value: 1)
     */
        /** @brief PWR_CR1, PWR_CR2, and CSSF bit in the PWR_SR can be read and written with secure or nonsecure access. */
    constexpr std::uint32_t PWR_SECCFGR_LPMSEC_B_0x0 = 0;
        /** @brief PWR_CR1, PWR_CR2, and CSSF bit in the PWR_SR can be read and written only with secure access. */
    constexpr std::uint32_t PWR_SECCFGR_LPMSEC_B_0x1 = 1;

    /** @brief Voltage detection and monitoring secure protection */
    using PWR_SECCFGR_VDMSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PWR_SVMCR and PWR_CR3 can be read and written with secure or nonsecure access. (value: 0)
     *          - B_0x1: PWR_SVMCR and PWR_CR3 can be read and written only with secure access. (value: 1)
     */
        /** @brief PWR_SVMCR and PWR_CR3 can be read and written with secure or nonsecure access. */
    constexpr std::uint32_t PWR_SECCFGR_VDMSEC_B_0x0 = 0;
        /** @brief PWR_SVMCR and PWR_CR3 can be read and written only with secure access. */
    constexpr std::uint32_t PWR_SECCFGR_VDMSEC_B_0x1 = 1;

    /** @brief Backup domain secure protection */
    using PWR_SECCFGR_VBSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PWR_BDCR and PWR_DBPR can be read and written with secure or nonsecure access. (value: 0)
     *          - B_0x1: PWR_BDCR and PWR_DBPR can be read and written only with secure access. (value: 1)
     */
        /** @brief PWR_BDCR and PWR_DBPR can be read and written with secure or nonsecure access. */
    constexpr std::uint32_t PWR_SECCFGR_VBSEC_B_0x0 = 0;
        /** @brief PWR_BDCR and PWR_DBPR can be read and written only with secure access. */
    constexpr std::uint32_t PWR_SECCFGR_VBSEC_B_0x1 = 1;

    /** @brief Pull-up/pull-down secure protection */
    using PWR_SECCFGR_APCSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PWR_APCR can be read and written with secure or nonsecure access. (value: 0)
     *          - B_0x1: PWR_APCR can be read and written only with secure access. (value: 1)
     */
        /** @brief PWR_APCR can be read and written with secure or nonsecure access. */
    constexpr std::uint32_t PWR_SECCFGR_APCSEC_B_0x0 = 0;
        /** @brief PWR_APCR can be read and written only with secure access. */
    constexpr std::uint32_t PWR_SECCFGR_APCSEC_B_0x1 = 1;

    /** @brief PWR privilege control register */
    using PWR_PRIVCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PWR secure function privilege configuration */
    using PWR_PRIVCFGR_SPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Read and write to PWR secure functions can be done by privileged or unprivileged access. (value: 0)
     *          - B_0x1: Read and write to PWR secure functions can be done by privileged access only. (value: 1)
     */
        /** @brief Read and write to PWR secure functions can be done by privileged or unprivileged access. */
    constexpr std::uint32_t PWR_PRIVCFGR_SPRIV_B_0x0 = 0;
        /** @brief Read and write to PWR secure functions can be done by privileged access only. */
    constexpr std::uint32_t PWR_PRIVCFGR_SPRIV_B_0x1 = 1;

    /** @brief PWR nonsecure function privilege configuration */
    using PWR_PRIVCFGR_NSPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Read and write to PWR nonsecure functions can be done by privileged or unprivileged access. (value: 0)
     *          - B_0x1: Read and write to PWR nonsecure functions can be done by privileged access only. (value: 1)
     */
        /** @brief Read and write to PWR nonsecure functions can be done by privileged or unprivileged access. */
    constexpr std::uint32_t PWR_PRIVCFGR_NSPRIV_B_0x0 = 0;
        /** @brief Read and write to PWR nonsecure functions can be done by privileged access only. */
    constexpr std::uint32_t PWR_PRIVCFGR_NSPRIV_B_0x1 = 1;

    /** @brief PWR status register */
    using PWR_SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear Stop and Standby flags */
    using PWR_SR_CSSF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Stop flag */
    using PWR_SR_STOPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The device did not enter any Stop mode. (value: 0)
     *          - B_0x1: The device entered a Stop mode. (value: 1)
     */
        /** @brief The device did not enter any Stop mode. */
    constexpr std::uint32_t PWR_SR_STOPF_B_0x0 = 0;
        /** @brief The device entered a Stop mode. */
    constexpr std::uint32_t PWR_SR_STOPF_B_0x1 = 1;

    /** @brief Standby flag */
    using PWR_SR_SBF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The device did not enter Standby mode. (value: 0)
     *          - B_0x1: The device entered Standby mode. (value: 1)
     */
        /** @brief The device did not enter Standby mode. */
    constexpr std::uint32_t PWR_SR_SBF_B_0x0 = 0;
        /** @brief The device entered Standby mode. */
    constexpr std::uint32_t PWR_SR_SBF_B_0x1 = 1;

    /** @brief PWR supply voltage monitoring status register */
    using PWR_SVMSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regulator selection */
    using PWR_SVMSR_REGS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LDO selected (value: 0)
     *          - B_0x1: SMPS selected (value: 1)
     */
        /** @brief LDO selected */
    constexpr std::uint32_t PWR_SVMSR_REGS_B_0x0 = 0;
        /** @brief SMPS selected */
    constexpr std::uint32_t PWR_SVMSR_REGS_B_0x1 = 1;

    /** @brief Programmable voltage detector output */
    using PWR_SVMSR_PVDO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Vless thansub>DDless than/sub> is equal or above the PVD threshold selected by PVDLS[2:0]. (value: 0)
     *          - B_0x1: Vless thansub>DDless than/sub> is below the PVD threshold selected by PVDLS[2:0]. (value: 1)
     */
        /** @brief Vless thansub>DDless than/sub> is equal or above the PVD threshold selected by PVDLS[2:0]. */
    constexpr std::uint32_t PWR_SVMSR_PVDO_B_0x0 = 0;
        /** @brief Vless thansub>DDless than/sub> is below the PVD threshold selected by PVDLS[2:0]. */
    constexpr std::uint32_t PWR_SVMSR_PVDO_B_0x1 = 1;

    /** @brief Vless thansub>DDUSBless than/sub> ready */
    using PWR_SVMSR_VDDUSBRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Vless thansub>DDUSBless than/sub> is below the threshold of the Vless thansub>DDUSBless than/sub> voltage monitor. (value: 0)
     *          - B_0x1: Vless thansub>DDUSBless than/sub> is equal or above the threshold of the Vless thansub>DDUSBless than/sub> voltage monitor. (value: 1)
     */
        /** @brief Vless thansub>DDUSBless than/sub> is below the threshold of the Vless thansub>DDUSBless than/sub> voltage monitor. */
    constexpr std::uint32_t PWR_SVMSR_VDDUSBRDY_B_0x0 = 0;
        /** @brief Vless thansub>DDUSBless than/sub> is equal or above the threshold of the Vless thansub>DDUSBless than/sub> voltage monitor. */
    constexpr std::uint32_t PWR_SVMSR_VDDUSBRDY_B_0x1 = 1;

    /** @brief Vless thansub>DDIO2 less than/sub>ready */
    using PWR_SVMSR_VDDIO2RDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Vless thansub>DDIO2less than/sub> is below the threshold of the Vless thansub>DDIO2less than/sub> voltage monitor. (value: 0)
     *          - B_0x1: Vless thansub>DDIO2less than/sub> is equal or above the threshold of the Vless thansub>DDIO2less than/sub> voltage monitor. (value: 1)
     */
        /** @brief Vless thansub>DDIO2less than/sub> is below the threshold of the Vless thansub>DDIO2less than/sub> voltage monitor. */
    constexpr std::uint32_t PWR_SVMSR_VDDIO2RDY_B_0x0 = 0;
        /** @brief Vless thansub>DDIO2less than/sub> is equal or above the threshold of the Vless thansub>DDIO2less than/sub> voltage monitor. */
    constexpr std::uint32_t PWR_SVMSR_VDDIO2RDY_B_0x1 = 1;

    /** @brief Vless thansub>DDAless than/sub> ready versus 1. */
    using PWR_SVMSR_VDDA1RDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Vless thansub>DDAless than/sub> is below the threshold of the Vless thansub>DDAless than/sub> voltage monitor 1 (around 1. (value: 0)
     *          - B_0x1: Vless thansub>DDAless than/sub> is equal or above the threshold of the Vless thansub>DDAless than/sub> voltage monitor 1 (around 1. (value: 1)
     */
        /** @brief Vless thansub>DDAless than/sub> is below the threshold of the Vless thansub>DDAless than/sub> voltage monitor 1 (around 1. */
    constexpr std::uint32_t PWR_SVMSR_VDDA1RDY_B_0x0 = 0;
        /** @brief Vless thansub>DDAless than/sub> is equal or above the threshold of the Vless thansub>DDAless than/sub> voltage monitor 1 (around 1. */
    constexpr std::uint32_t PWR_SVMSR_VDDA1RDY_B_0x1 = 1;

    /** @brief Vless thansub>DDAless than/sub> ready versus 1. */
    using PWR_SVMSR_VDDA2RDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Vless thansub>DDAless than/sub> is below the threshold of the Vless thansub>DDAless than/sub> voltage monitor 2 (around 1. (value: 0)
     *          - B_0x1: Vless thansub>DDAless than/sub> is equal or above the threshold of the Vless thansub>DDAless than/sub> voltage monitor 2 (around 1. (value: 1)
     */
        /** @brief Vless thansub>DDAless than/sub> is below the threshold of the Vless thansub>DDAless than/sub> voltage monitor 2 (around 1. */
    constexpr std::uint32_t PWR_SVMSR_VDDA2RDY_B_0x0 = 0;
        /** @brief Vless thansub>DDAless than/sub> is equal or above the threshold of the Vless thansub>DDAless than/sub> voltage monitor 2 (around 1. */
    constexpr std::uint32_t PWR_SVMSR_VDDA2RDY_B_0x1 = 1;

    /** @brief PWR wake-up status register */
    using PWR_WUSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up flag i */
    using PWR_WUSR_WUF1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up flag i */
    using PWR_WUSR_WUF2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up flag i */
    using PWR_WUSR_WUF3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up flag i */
    using PWR_WUSR_WUF4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up flag i */
    using PWR_WUSR_WUF5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up flag i */
    using PWR_WUSR_WUF6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up flag i */
    using PWR_WUSR_WUF7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up flag i */
    using PWR_WUSR_WUF8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up flag i */
    using PWR_WUSR_WUF9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up flag i */
    using PWR_WUSR_WUF10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PWR wake-up status clear register */
    using PWR_WUSCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up flag i clear */
    using PWR_WUSCR_CWUF1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up flag i clear */
    using PWR_WUSCR_CWUF2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up flag i clear */
    using PWR_WUSCR_CWUF3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up flag i clear */
    using PWR_WUSCR_CWUF4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up flag i clear */
    using PWR_WUSCR_CWUF5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up flag i clear */
    using PWR_WUSCR_CWUF6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up flag i clear */
    using PWR_WUSCR_CWUF7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up flag i clear */
    using PWR_WUSCR_CWUF8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up flag i clear */
    using PWR_WUSCR_CWUF9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up flag i clear */
    using PWR_WUSCR_CWUF10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PWR apply pull configuration register */
    using PWR_APCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Apply pull-up and pull-down configuration */
    using PWR_APCR_APC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PWR port A pull-up control register */
    using PWR_PUCRA = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-up bit y */
    using PWR_PUCRA_PU0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-up bit y */
    using PWR_PUCRA_PU1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-up bit y */
    using PWR_PUCRA_PU2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-up bit y */
    using PWR_PUCRA_PU3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-up bit y */
    using PWR_PUCRA_PU4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-up bit y */
    using PWR_PUCRA_PU5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-up bit y */
    using PWR_PUCRA_PU6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-up bit y */
    using PWR_PUCRA_PU7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-up bit y */
    using PWR_PUCRA_PU8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-up bit y */
    using PWR_PUCRA_PU9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-up bit y */
    using PWR_PUCRA_PU10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-up bit y */
    using PWR_PUCRA_PU11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-up bit y */
    using PWR_PUCRA_PU12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-up bit y */
    using PWR_PUCRA_PU13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-up bit 15 */
    using PWR_PUCRA_PU15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PWR port A pull-down control register */
    using PWR_PDCRA = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-down bit y */
    using PWR_PDCRA_PD0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-down bit y */
    using PWR_PDCRA_PD1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-down bit y */
    using PWR_PDCRA_PD2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-down bit y */
    using PWR_PDCRA_PD3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-down bit y */
    using PWR_PDCRA_PD4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-down bit y */
    using PWR_PDCRA_PD5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-down bit y */
    using PWR_PDCRA_PD6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-down bit y */
    using PWR_PDCRA_PD7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-down bit y */
    using PWR_PDCRA_PD8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-down bit y */
    using PWR_PDCRA_PD9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-down bit y */
    using PWR_PDCRA_PD10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-down bit y */
    using PWR_PDCRA_PD11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-down bit y */
    using PWR_PDCRA_PD12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-down bit 14 */
    using PWR_PDCRA_PD14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PWR port B pull-down control register */
    using PWR_PDCRB = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-down bit y */
    using PWR_PDCRB_PD0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-down bit y */
    using PWR_PDCRB_PD1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-down bit y */
    using PWR_PDCRB_PD2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-down bit y */
    using PWR_PDCRB_PD3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-down bit y */
    using PWR_PDCRB_PD5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-down bit y */
    using PWR_PDCRB_PD6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-down bit y */
    using PWR_PDCRB_PD7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-down bit y */
    using PWR_PDCRB_PD8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-down bit y */
    using PWR_PDCRB_PD9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-down bit y */
    using PWR_PDCRB_PD10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-down bit y */
    using PWR_PDCRB_PD11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-down bit y */
    using PWR_PDCRB_PD12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-down bit y */
    using PWR_PDCRB_PD13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-down bit y */
    using PWR_PDCRB_PD14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pull-down bit y */
    using PWR_PDCRB_PD15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PWR port G pull-up control register */
    using PWR_PUCRG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x80, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G pull-up bit y */
    using PWR_PUCRG_PU0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G pull-up bit y */
    using PWR_PUCRG_PU1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G pull-up bit y */
    using PWR_PUCRG_PU2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G pull-up bit y */
    using PWR_PUCRG_PU3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G pull-up bit y */
    using PWR_PUCRG_PU4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G pull-up bit y */
    using PWR_PUCRG_PU5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G pull-up bit y */
    using PWR_PUCRG_PU6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G pull-up bit y */
    using PWR_PUCRG_PU7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G pull-up bit y */
    using PWR_PUCRG_PU8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G pull-up bit y */
    using PWR_PUCRG_PU9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G pull-up bit y */
    using PWR_PUCRG_PU10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G pull-up bit y */
    using PWR_PUCRG_PU11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G pull-up bit y */
    using PWR_PUCRG_PU12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G pull-up bit y */
    using PWR_PUCRG_PU13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G pull-up bit y */
    using PWR_PUCRG_PU14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G pull-up bit y */
    using PWR_PUCRG_PU15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PWR port G pull-down control register */
    using PWR_PDCRG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x84, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G pull-down bit y */
    using PWR_PDCRG_PD0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G pull-down bit y */
    using PWR_PDCRG_PD1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G pull-down bit y */
    using PWR_PDCRG_PD2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G pull-down bit y */
    using PWR_PDCRG_PD3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G pull-down bit y */
    using PWR_PDCRG_PD4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G pull-down bit y */
    using PWR_PDCRG_PD5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G pull-down bit y */
    using PWR_PDCRG_PD6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G pull-down bit y */
    using PWR_PDCRG_PD7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G pull-down bit y */
    using PWR_PDCRG_PD8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G pull-down bit y */
    using PWR_PDCRG_PD9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G pull-down bit y */
    using PWR_PDCRG_PD10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G pull-down bit y */
    using PWR_PDCRG_PD11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G pull-down bit y */
    using PWR_PDCRG_PD12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G pull-down bit y */
    using PWR_PDCRG_PD13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G pull-down bit y */
    using PWR_PDCRG_PD14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G pull-down bit y */
    using PWR_PDCRG_PD15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PWR port H pull-up control register */
    using PWR_PUCRH = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x88, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port H pull-up bit y */
    using PWR_PUCRH_PU0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port H pull-up bit y */
    using PWR_PUCRH_PU1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port H pull-up bit 3 */
    using PWR_PUCRH_PU3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PWR port H pull-down control register */
    using PWR_PDCRH = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port H pull-down bit y */
    using PWR_PDCRH_PD0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port H pull-down bit y */
    using PWR_PDCRH_PD1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port H pull-down bit 3 */
    using PWR_PDCRH_PD3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PWR I3C pull-up control register 1 */
    using PWR_I3CPUCR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pin 1 I3C pull-up */
    using PWR_I3CPUCR1_PA1_I3CPU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pin y I3C pull-up */
    using PWR_I3CPUCR1_PA6_I3CPU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pin y I3C pull-up */
    using PWR_I3CPUCR1_PA7_I3CPU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pin 2 I3C pull-up */
    using PWR_I3CPUCR1_PB2_I3CPU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pin 6 I3C pull-up */
    using PWR_I3CPUCR1_PB6_I3CPU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pin y I3C pull-up */
    using PWR_I3CPUCR1_PB8_I3CPU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pin y I3C pull-up */
    using PWR_I3CPUCR1_PB9_I3CPU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pin y I3C pull-up */
    using PWR_I3CPUCR1_PB10_I3CPU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pin x I3C pull-up */
    using PWR_I3CPUCR1_PB12_I3CPU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pin x I3C pull-up */
    using PWR_I3CPUCR1_PB13_I3CPU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pin x I3C pull-up */
    using PWR_I3CPUCR1_PB14_I3CPU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port B pin 7 I3C pull-up */
    using PWR_I3CPUCR1_PB7_I3CPU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PWR I3C pull-up control register 2 */
    using PWR_I3CPUCR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pin 1 I3C pull-up */
    using PWR_I3CPUCR2_PC0_I3CPU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port C pin 1 I3C pull-up */
    using PWR_I3CPUCR2_PC1_I3CPU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pin y I3C pull-up */
    using PWR_I3CPUCR2_PD12_I3CPU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port D pin y I3C pull-up */
    using PWR_I3CPUCR2_PD13_I3CPU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G pin y I3C pull-up */
    using PWR_I3CPUCR2_PG7_I3CPU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G pin y I3C pull-up */
    using PWR_I3CPUCR2_PG8_I3CPU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G pin x I3C pull-up */
    using PWR_I3CPUCR2_PG13_I3CPU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port G pin x I3C pull-up */
    using PWR_I3CPUCR2_PG14_I3CPU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port H pin 3 I3C pull-up */
    using PWR_I3CPUCR2_PH3_I3CPU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
