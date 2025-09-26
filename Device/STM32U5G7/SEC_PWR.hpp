/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32U5G7_SEC_PWR_HPP
#define EMBEDDED_PP_STM32U5G7_SEC_PWR_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Power control */
namespace STM32U5G7::SEC_PWR {

    /** @brief PWR control register 1 */
    using PWR_CR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Low-power mode selection */
    using PWR_CR1_LPMS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Stop 0 mode (value: 0)
     *          - B_0x1: Stop 1 mode (value: 1)
     *          - B_0x2: Stop 2 mode (value: 2)
     *          - B_0x3: Stop 3 mode (value: 3)
     */
        /** @brief Stop 0 mode */
    constexpr std::uint32_t PWR_CR1_LPMS_B_0x0 = 0;
        /** @brief Stop 1 mode */
    constexpr std::uint32_t PWR_CR1_LPMS_B_0x1 = 1;
        /** @brief Stop 2 mode */
    constexpr std::uint32_t PWR_CR1_LPMS_B_0x2 = 2;
        /** @brief Stop 3 mode */
    constexpr std::uint32_t PWR_CR1_LPMS_B_0x3 = 3;

    /** @brief SRAM2 page 1 retention in Stop 3 and Standby modes */
    using PWR_CR1_RRSB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM2 page1 content not retained in Stop 3 and Standby modes (value: 0)
     *          - B_0x1: SRAM2 page1 content retained in Stop 3 and Standby modes (value: 1)
     */
        /** @brief SRAM2 page1 content not retained in Stop 3 and Standby modes */
    constexpr std::uint32_t PWR_CR1_RRSB1_B_0x0 = 0;
        /** @brief SRAM2 page1 content retained in Stop 3 and Standby modes */
    constexpr std::uint32_t PWR_CR1_RRSB1_B_0x1 = 1;

    /** @brief SRAM2 page 2 retention in Stop 3 and Standby modes */
    using PWR_CR1_RRSB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM2 page2 content not retained in Stop3 and Standby modes (value: 0)
     *          - B_0x1: SRAM2 page2 content retained in Stop 3 and Standby modes (value: 1)
     */
        /** @brief SRAM2 page2 content not retained in Stop3 and Standby modes */
    constexpr std::uint32_t PWR_CR1_RRSB2_B_0x0 = 0;
        /** @brief SRAM2 page2 content retained in Stop 3 and Standby modes */
    constexpr std::uint32_t PWR_CR1_RRSB2_B_0x1 = 1;

    /** @brief BOR ultra-low power mode */
    using PWR_CR1_ULPMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BOR operating in continuous (normal) mode in Stop 1, Stop 2, Stop 3 and Standby modes and when the regulator is in range 4 (Run, Sleep or Stop 0 mode) (value: 0)
     *          - B_0x1: BOR operating in discontinuous (ultra-low power) mode in Stop 1, Stop 2, Stop 3 and Standby modes, and when the regulator is in range 4 (Run, Sleep or Stop 0 mode) (value: 1)
     */
        /** @brief BOR operating in continuous (normal) mode in Stop 1, Stop 2, Stop 3 and Standby modes and when the regulator is in range 4 (Run, Sleep or Stop 0 mode) */
    constexpr std::uint32_t PWR_CR1_ULPMEN_B_0x0 = 0;
        /** @brief BOR operating in discontinuous (ultra-low power) mode in Stop 1, Stop 2, Stop 3 and Standby modes, and when the regulator is in range 4 (Run, Sleep or Stop 0 mode) */
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

    /** @brief SRAM5 power down */
    using PWR_CR1_SRAM5PD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM5 powered on (value: 0)
     *          - B_0x1: SRAM5 powered off (value: 1)
     */
        /** @brief SRAM5 powered on */
    constexpr std::uint32_t PWR_CR1_SRAM5PD_B_0x0 = 0;
        /** @brief SRAM5 powered off */
    constexpr std::uint32_t PWR_CR1_SRAM5PD_B_0x1 = 1;

    /** @brief PWR control register 2 */
    using PWR_CR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SRAM1 page 1 (64 Kbytes) power-down in Stop modes (Stop 0, 1, 2, 3) */
    using PWR_CR2_SRAM1PDS1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM1 page 1 content retained in Stop modes (value: 0)
     *          - B_0x1: SRAM1 page 1 content lost in Stop modes (value: 1)
     */
        /** @brief SRAM1 page 1 content retained in Stop modes */
    constexpr std::uint32_t PWR_CR2_SRAM1PDS1_B_0x0 = 0;
        /** @brief SRAM1 page 1 content lost in Stop modes */
    constexpr std::uint32_t PWR_CR2_SRAM1PDS1_B_0x1 = 1;

    /** @brief SRAM1 page 2 (64 Kbytes) power-down in Stop modes (Stop 0, 1, 2, 3) */
    using PWR_CR2_SRAM1PDS2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM1 page 2 content retained in Stop modes (value: 0)
     *          - B_0x1: SRAM1 page 2 content lost in Stop modes (value: 1)
     */
        /** @brief SRAM1 page 2 content retained in Stop modes */
    constexpr std::uint32_t PWR_CR2_SRAM1PDS2_B_0x0 = 0;
        /** @brief SRAM1 page 2 content lost in Stop modes */
    constexpr std::uint32_t PWR_CR2_SRAM1PDS2_B_0x1 = 1;

    /** @brief SRAM1 page 3 (64 Kbytes) power-down in Stop modes (Stop 0, 1, 2, 3) */
    using PWR_CR2_SRAM1PDS3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM1 page 3 content retained in Stop modes (value: 0)
     *          - B_0x1: SRAM1 page 3 content lost in Stop modes (value: 1)
     */
        /** @brief SRAM1 page 3 content retained in Stop modes */
    constexpr std::uint32_t PWR_CR2_SRAM1PDS3_B_0x0 = 0;
        /** @brief SRAM1 page 3 content lost in Stop modes */
    constexpr std::uint32_t PWR_CR2_SRAM1PDS3_B_0x1 = 1;

    /** @brief SRAM2 page 1 (8 Kbytes) power-down in Stop modes (Stop 0, 1, 2) */
    using PWR_CR2_SRAM2PDS1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM2 page 1 content retained in Stop modes (value: 0)
     *          - B_0x1: SRAM2 page 1 content lost in Stop modes (value: 1)
     */
        /** @brief SRAM2 page 1 content retained in Stop modes */
    constexpr std::uint32_t PWR_CR2_SRAM2PDS1_B_0x0 = 0;
        /** @brief SRAM2 page 1 content lost in Stop modes */
    constexpr std::uint32_t PWR_CR2_SRAM2PDS1_B_0x1 = 1;

    /** @brief SRAM2 page 2 (56 Kbytes) power-down in Stop modes (Stop 0, 1, 2) */
    using PWR_CR2_SRAM2PDS2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM2 page 2 content retained in Stop modes (value: 0)
     *          - B_0x1: SRAM2 page 2 content lost in Stop modes (value: 1)
     */
        /** @brief SRAM2 page 2 content retained in Stop modes */
    constexpr std::uint32_t PWR_CR2_SRAM2PDS2_B_0x0 = 0;
        /** @brief SRAM2 page 2 content lost in Stop modes */
    constexpr std::uint32_t PWR_CR2_SRAM2PDS2_B_0x1 = 1;

    /** @brief SRAM4 power-down in Stop modes (Stop 0, 1, 2, 3) */
    using PWR_CR2_SRAM4PDS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM4 content retained in Stop modes (value: 0)
     *          - B_0x1: SRAM4 content lost in Stop modes (value: 1)
     */
        /** @brief SRAM4 content retained in Stop modes */
    constexpr std::uint32_t PWR_CR2_SRAM4PDS_B_0x0 = 0;
        /** @brief SRAM4 content lost in Stop modes */
    constexpr std::uint32_t PWR_CR2_SRAM4PDS_B_0x1 = 1;

    /** @brief DCACHE2 SRAM power-down in Stop modes (Stop 0, 1, 2, 3) */
    using PWR_CR2_DC2RAMPDS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DCACHE2 SRAM content retained in Stop modes (value: 0)
     *          - B_0x1: DCACHE2 SRAM content lost in Stop modes (value: 1)
     */
        /** @brief DCACHE2 SRAM content retained in Stop modes */
    constexpr std::uint32_t PWR_CR2_DC2RAMPDS_B_0x0 = 0;
        /** @brief DCACHE2 SRAM content lost in Stop modes */
    constexpr std::uint32_t PWR_CR2_DC2RAMPDS_B_0x1 = 1;

    /** @brief ICACHE SRAM power-down in Stop modes (Stop 0, 1, 2, 3) */
    using PWR_CR2_ICRAMPDS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ICACHE SRAM content retained in Stop modes (value: 0)
     *          - B_0x1: ICACHE SRAM content lost in Stop modes (value: 1)
     */
        /** @brief ICACHE SRAM content retained in Stop modes */
    constexpr std::uint32_t PWR_CR2_ICRAMPDS_B_0x0 = 0;
        /** @brief ICACHE SRAM content lost in Stop modes */
    constexpr std::uint32_t PWR_CR2_ICRAMPDS_B_0x1 = 1;

    /** @brief DCACHE1 SRAM power-down in Stop modes (Stop 0, 1, 2, 3) */
    using PWR_CR2_DC1RAMPDS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DCACHE1 SRAM content retained in Stop modes (value: 0)
     *          - B_0x1: DCACHE1 SRAM content lost in Stop modes (value: 1)
     */
        /** @brief DCACHE1 SRAM content retained in Stop modes */
    constexpr std::uint32_t PWR_CR2_DC1RAMPDS_B_0x0 = 0;
        /** @brief DCACHE1 SRAM content lost in Stop modes */
    constexpr std::uint32_t PWR_CR2_DC1RAMPDS_B_0x1 = 1;

    /** @brief DMA2D SRAM power-down in Stop modes (Stop 0, 1, 2, 3) */
    using PWR_CR2_DMA2DRAMPDS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DMA2D SRAM content retained in Stop modes (value: 0)
     *          - B_0x1: DMA2D SRAM content lost in Stop modes (value: 1)
     */
        /** @brief DMA2D SRAM content retained in Stop modes */
    constexpr std::uint32_t PWR_CR2_DMA2DRAMPDS_B_0x0 = 0;
        /** @brief DMA2D SRAM content lost in Stop modes */
    constexpr std::uint32_t PWR_CR2_DMA2DRAMPDS_B_0x1 = 1;

    /** @brief FMAC, FDCAN and USB peripherals SRAM power-down in Stop modes (Stop0,1,2,3) */
    using PWR_CR2_PRAMPDS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FMAC, FDCAN and USB peripherals SRAM content retained in Stop modes (value: 0)
     *          - B_0x1: FMAC, FDCAN and USB peripherals SRAM content lost in Stop modes (value: 1)
     */
        /** @brief FMAC, FDCAN and USB peripherals SRAM content retained in Stop modes */
    constexpr std::uint32_t PWR_CR2_PRAMPDS_B_0x0 = 0;
        /** @brief FMAC, FDCAN and USB peripherals SRAM content lost in Stop modes */
    constexpr std::uint32_t PWR_CR2_PRAMPDS_B_0x1 = 1;

    /** @brief PKA32 SRAM power-down in Stop modes (Stop 0, 1, 2, 3) */
    using PWR_CR2_PKARAMPDS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PKA SRAM content retained in Stop modes (value: 0)
     *          - B_0x1: PKA SRAM content lost in Stop modes (value: 1)
     */
        /** @brief PKA SRAM content retained in Stop modes */
    constexpr std::uint32_t PWR_CR2_PKARAMPDS_B_0x0 = 0;
        /** @brief PKA SRAM content lost in Stop modes */
    constexpr std::uint32_t PWR_CR2_PKARAMPDS_B_0x1 = 1;

    /** @brief SRAM4 fast wakeup from Stop 0, Stop 1 and Stop 2 modes */
    using PWR_CR2_SRAM4FWU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM4 enters low-power mode in Stop 0, 1 and 2 modes (source biasing for lower-power consumption). (value: 0)
     *          - B_0x1: SRAM4 remains in normal mode in Stop 0, 1 and 2 modes (higher consumption but no SRAM4 wakeup time). (value: 1)
     */
        /** @brief SRAM4 enters low-power mode in Stop 0, 1 and 2 modes (source biasing for lower-power consumption). */
    constexpr std::uint32_t PWR_CR2_SRAM4FWU_B_0x0 = 0;
        /** @brief SRAM4 remains in normal mode in Stop 0, 1 and 2 modes (higher consumption but no SRAM4 wakeup time). */
    constexpr std::uint32_t PWR_CR2_SRAM4FWU_B_0x1 = 1;

    /** @brief Flash memory fast wakeup from Stop 0 and Stop 1 modes */
    using PWR_CR2_FLASHFWU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Flash memory enters low-power mode in Stop 0 and Stop 1 modes (lower-power consumption). (value: 0)
     *          - B_0x1: Flash memory remains in normal mode in Stop 0 and Stop 1 modes (faster wakeup time). (value: 1)
     */
        /** @brief Flash memory enters low-power mode in Stop 0 and Stop 1 modes (lower-power consumption). */
    constexpr std::uint32_t PWR_CR2_FLASHFWU_B_0x0 = 0;
        /** @brief Flash memory remains in normal mode in Stop 0 and Stop 1 modes (faster wakeup time). */
    constexpr std::uint32_t PWR_CR2_FLASHFWU_B_0x1 = 1;

    /** @brief SRAM3 page 1 (64 Kbytes) power-down in Stop modes (Stop 0, 1, 2, 3) */
    using PWR_CR2_SRAM3PDS1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM3 page 1 content retained in Stop modes (value: 0)
     *          - B_0x1: SRAM3 page 1 content lost in Stop modes (value: 1)
     */
        /** @brief SRAM3 page 1 content retained in Stop modes */
    constexpr std::uint32_t PWR_CR2_SRAM3PDS1_B_0x0 = 0;
        /** @brief SRAM3 page 1 content lost in Stop modes */
    constexpr std::uint32_t PWR_CR2_SRAM3PDS1_B_0x1 = 1;

    /** @brief SRAM3 page 2 (64 Kbytes) power-down in Stop modes (Stop 0, 1, 2, 3) */
    using PWR_CR2_SRAM3PDS2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM3 page 2 content retained in Stop modes (value: 0)
     *          - B_0x1: SRAM3 page 2 content lost in Stop modes (value: 1)
     */
        /** @brief SRAM3 page 2 content retained in Stop modes */
    constexpr std::uint32_t PWR_CR2_SRAM3PDS2_B_0x0 = 0;
        /** @brief SRAM3 page 2 content lost in Stop modes */
    constexpr std::uint32_t PWR_CR2_SRAM3PDS2_B_0x1 = 1;

    /** @brief SRAM3 page 3 (64 Kbytes) power-down in Stop modes (Stop 0, 1, 2, 3) */
    using PWR_CR2_SRAM3PDS3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM3 page 3 content retained in Stop modes (value: 0)
     *          - B_0x1: SRAM3 page 3 content lost in Stop modes (value: 1)
     */
        /** @brief SRAM3 page 3 content retained in Stop modes */
    constexpr std::uint32_t PWR_CR2_SRAM3PDS3_B_0x0 = 0;
        /** @brief SRAM3 page 3 content lost in Stop modes */
    constexpr std::uint32_t PWR_CR2_SRAM3PDS3_B_0x1 = 1;

    /** @brief SRAM3 page 4 (64 Kbytes) power-down in Stop modes (Stop 0, 1, 2, 3) */
    using PWR_CR2_SRAM3PDS4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM3 page 4 content retained in Stop modes (value: 0)
     *          - B_0x1: SRAM3 page 4 content lost in Stop modes (value: 1)
     */
        /** @brief SRAM3 page 4 content retained in Stop modes */
    constexpr std::uint32_t PWR_CR2_SRAM3PDS4_B_0x0 = 0;
        /** @brief SRAM3 page 4 content lost in Stop modes */
    constexpr std::uint32_t PWR_CR2_SRAM3PDS4_B_0x1 = 1;

    /** @brief SRAM3 page 5 (64 Kbytes) power-down in Stop modes (Stop 0, 1, 2, 3) */
    using PWR_CR2_SRAM3PDS5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM3 page 5 content retained in Stop modes (value: 0)
     *          - B_0x1: SRAM3 page 5 content lost in Stop modes (value: 1)
     */
        /** @brief SRAM3 page 5 content retained in Stop modes */
    constexpr std::uint32_t PWR_CR2_SRAM3PDS5_B_0x0 = 0;
        /** @brief SRAM3 page 5 content lost in Stop modes */
    constexpr std::uint32_t PWR_CR2_SRAM3PDS5_B_0x1 = 1;

    /** @brief SRAM3 page 6 (64 Kbytes) power-down in Stop modes (Stop 0, 1, 2, 3) */
    using PWR_CR2_SRAM3PDS6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM3 page 6 content retained in Stop modes (value: 0)
     *          - B_0x1: SRAM3 page 6 content lost in Stop modes (value: 1)
     */
        /** @brief SRAM3 page 6 content retained in Stop modes */
    constexpr std::uint32_t PWR_CR2_SRAM3PDS6_B_0x0 = 0;
        /** @brief SRAM3 page 6 content lost in Stop modes */
    constexpr std::uint32_t PWR_CR2_SRAM3PDS6_B_0x1 = 1;

    /** @brief SRAM3 page 7 (64 Kbytes) power-down in Stop modes (Stop 0, 1, 2, 3) */
    using PWR_CR2_SRAM3PDS7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM3 page 7 content retained in Stop modes (value: 0)
     *          - B_0x1: SRAM3 page 7 content lost in Stop modes (value: 1)
     */
        /** @brief SRAM3 page 7 content retained in Stop modes */
    constexpr std::uint32_t PWR_CR2_SRAM3PDS7_B_0x0 = 0;
        /** @brief SRAM3 page 7 content lost in Stop modes */
    constexpr std::uint32_t PWR_CR2_SRAM3PDS7_B_0x1 = 1;

    /** @brief SRAM3 page 8 (64 Kbytes) power-down in Stop modes (Stop 0, 1, 2, 3) */
    using PWR_CR2_SRAM3PDS8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SRAM3 page 8 content retained in Stop modes (value: 0)
     *          - B_0x1: SRAM3 page 8 content lost in Stop modes (value: 1)
     */
        /** @brief SRAM3 page 8 content retained in Stop modes */
    constexpr std::uint32_t PWR_CR2_SRAM3PDS8_B_0x0 = 0;
        /** @brief SRAM3 page 8 content lost in Stop modes */
    constexpr std::uint32_t PWR_CR2_SRAM3PDS8_B_0x1 = 1;

    /** @brief Graphic peripherals (LTDC, GFXMMU) SRAM power-down in Stop modes (Stop0,1, 2, 3) */
    using PWR_CR2_GPRAMPDS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Graphic peripherals SRAM content retained in Stop modes (value: 0)
     *          - B_0x1: Graphic peripherals SRAM content lost in Stop modes (value: 1)
     */
        /** @brief Graphic peripherals SRAM content retained in Stop modes */
    constexpr std::uint32_t PWR_CR2_GPRAMPDS_B_0x0 = 0;
        /** @brief Graphic peripherals SRAM content lost in Stop modes */
    constexpr std::uint32_t PWR_CR2_GPRAMPDS_B_0x1 = 1;

    /** @brief DSI SRAM power-down in Stop modes (Stop 0, 1) */
    using PWR_CR2_DSIRAMPDS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DSI SRAM content retained in Stop 0 and Stop 1 modes (value: 0)
     *          - B_0x1: DSI SRAM content lost in Stop 0 and Stop 1 modes (value: 1)
     */
        /** @brief DSI SRAM content retained in Stop 0 and Stop 1 modes */
    constexpr std::uint32_t PWR_CR2_DSIRAMPDS_B_0x0 = 0;
        /** @brief DSI SRAM content lost in Stop 0 and Stop 1 modes */
    constexpr std::uint32_t PWR_CR2_DSIRAMPDS_B_0x1 = 1;

    /** @brief SmartRun domain in Run mode */
    using PWR_CR2_SRDRUN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SmartRun domain AHB3 and APB3 clocks disabled by default in Stop 0,1, 2 modes (value: 0)
     *          - B_0x1: SmartRun domain AHB3 and APB3 clocks kept enabled in Stop 0,1, 2 modes (value: 1)
     */
        /** @brief SmartRun domain AHB3 and APB3 clocks disabled by default in Stop 0,1, 2 modes */
    constexpr std::uint32_t PWR_CR2_SRDRUN_B_0x0 = 0;
        /** @brief SmartRun domain AHB3 and APB3 clocks kept enabled in Stop 0,1, 2 modes */
    constexpr std::uint32_t PWR_CR2_SRDRUN_B_0x1 = 1;

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
    /** @brief USB EPOD booster ready */
    using PWR_VOSR_USBBOOSTRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USB power booster not ready (value: 0)
     *          - B_0x1: USB power booster ready (value: 1)
     */
        /** @brief USB power booster not ready */
    constexpr std::uint32_t PWR_VOSR_USBBOOSTRDY_B_0x0 = 0;
        /** @brief USB power booster ready */
    constexpr std::uint32_t PWR_VOSR_USBBOOSTRDY_B_0x1 = 1;

    /** @brief EPOD booster ready */
    using PWR_VOSR_BOOSTRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Power booster not ready (value: 0)
     *          - B_0x1: Power booster ready (value: 1)
     */
        /** @brief Power booster not ready */
    constexpr std::uint32_t PWR_VOSR_BOOSTRDY_B_0x0 = 0;
        /** @brief Power booster ready */
    constexpr std::uint32_t PWR_VOSR_BOOSTRDY_B_0x1 = 1;

    /** @brief Ready bit for VCORE voltage scaling output selection */
    using PWR_VOSR_VOSRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Not ready, voltage level less than VOS selected level (value: 0)
     *          - B_0x1: Ready, voltage level greater or equal VOS selected level (value: 1)
     */
        /** @brief Not ready, voltage level less than VOS selected level */
    constexpr std::uint32_t PWR_VOSR_VOSRDY_B_0x0 = 0;
        /** @brief Ready, voltage level greater or equal VOS selected level */
    constexpr std::uint32_t PWR_VOSR_VOSRDY_B_0x1 = 1;

    /** @brief Voltage scaling range selection */
    using PWR_VOSR_VOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Range 4 (lowest power) (value: 0)
     *          - B_0x1: Range 3 (value: 1)
     *          - B_0x2: Range 2 (value: 2)
     *          - B_0x3: Range 1 (highest frequency). This value cannot be written when VCOREMEN = 1 in TAMP_OR register. (value: 3)
     */
        /** @brief Range 4 (lowest power) */
    constexpr std::uint32_t PWR_VOSR_VOS_B_0x0 = 0;
        /** @brief Range 3 */
    constexpr std::uint32_t PWR_VOSR_VOS_B_0x1 = 1;
        /** @brief Range 2 */
    constexpr std::uint32_t PWR_VOSR_VOS_B_0x2 = 2;
        /** @brief Range 1 (highest frequency). This value cannot be written when VCOREMEN = 1 in TAMP_OR register. */
    constexpr std::uint32_t PWR_VOSR_VOS_B_0x3 = 3;

    /** @brief EPOD booster enable */
    using PWR_VOSR_BOOSTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Booster disabled (value: 0)
     *          - B_0x1: Booster enabled (value: 1)
     */
        /** @brief Booster disabled */
    constexpr std::uint32_t PWR_VOSR_BOOSTEN_B_0x0 = 0;
        /** @brief Booster enabled */
    constexpr std::uint32_t PWR_VOSR_BOOSTEN_B_0x1 = 1;

    /** @brief USB power enable */
    using PWR_VOSR_USBPWREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USB power disabled (value: 0)
     *          - B_0x1: USB power enabled (value: 1)
     */
        /** @brief USB power disabled */
    constexpr std::uint32_t PWR_VOSR_USBPWREN_B_0x0 = 0;
        /** @brief USB power enabled */
    constexpr std::uint32_t PWR_VOSR_USBPWREN_B_0x1 = 1;

    /** @brief USB EPOD booster enable */
    using PWR_VOSR_USBBOOSTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USB booster disabled (value: 0)
     *          - B_0x1: USB booster enabled (value: 1)
     */
        /** @brief USB booster disabled */
    constexpr std::uint32_t PWR_VOSR_USBBOOSTEN_B_0x0 = 0;
        /** @brief USB booster enabled */
    constexpr std::uint32_t PWR_VOSR_USBBOOSTEN_B_0x1 = 1;

    /** @brief PWR supply voltage monitoring control register */
    using PWR_SVMCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Power voltage detector enable */
    using PWR_SVMCR_PVDE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Power voltage detector disabled (value: 0)
     *          - B_0x1: Power voltage detector enabled (value: 1)
     */
        /** @brief Power voltage detector disabled */
    constexpr std::uint32_t PWR_SVMCR_PVDE_B_0x0 = 0;
        /** @brief Power voltage detector enabled */
    constexpr std::uint32_t PWR_SVMCR_PVDE_B_0x1 = 1;

    /** @brief Power voltage detector level selection */
    using PWR_SVMCR_PVDLS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VPVD0 around 2.0 V (value: 0)
     *          - B_0x1: VPVD1 around 2.2 V (value: 1)
     *          - B_0x2: VPVD2 around 2.4 V (value: 2)
     *          - B_0x3: VPVD3 around 2.5 V (value: 3)
     *          - B_0x4: VPVD4 around 2.6 V (value: 4)
     *          - B_0x5: VPVD5 around 2.8 V (value: 5)
     *          - B_0x6: VPVD6 around 2.9 V (value: 6)
     *          - B_0x7: External input analog voltage PVD_IN (compared internally to VREFINT) (value: 7)
     */
        /** @brief VPVD0 around 2.0 V */
    constexpr std::uint32_t PWR_SVMCR_PVDLS_B_0x0 = 0;
        /** @brief VPVD1 around 2.2 V */
    constexpr std::uint32_t PWR_SVMCR_PVDLS_B_0x1 = 1;
        /** @brief VPVD2 around 2.4 V */
    constexpr std::uint32_t PWR_SVMCR_PVDLS_B_0x2 = 2;
        /** @brief VPVD3 around 2.5 V */
    constexpr std::uint32_t PWR_SVMCR_PVDLS_B_0x3 = 3;
        /** @brief VPVD4 around 2.6 V */
    constexpr std::uint32_t PWR_SVMCR_PVDLS_B_0x4 = 4;
        /** @brief VPVD5 around 2.8 V */
    constexpr std::uint32_t PWR_SVMCR_PVDLS_B_0x5 = 5;
        /** @brief VPVD6 around 2.9 V */
    constexpr std::uint32_t PWR_SVMCR_PVDLS_B_0x6 = 6;
        /** @brief External input analog voltage PVD_IN (compared internally to VREFINT) */
    constexpr std::uint32_t PWR_SVMCR_PVDLS_B_0x7 = 7;

    /** @brief VDDUSB independent USB voltage monitor enable */
    using PWR_SVMCR_UVMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VDDUSB voltage monitor disabled (value: 0)
     *          - B_0x1: VDDUSB voltage monitor enabled (value: 1)
     */
        /** @brief VDDUSB voltage monitor disabled */
    constexpr std::uint32_t PWR_SVMCR_UVMEN_B_0x0 = 0;
        /** @brief VDDUSB voltage monitor enabled */
    constexpr std::uint32_t PWR_SVMCR_UVMEN_B_0x1 = 1;

    /** @brief VDDIO2 independent I/Os voltage monitor enable */
    using PWR_SVMCR_IO2VMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VDDIO2 voltage monitor disabled (value: 0)
     *          - B_0x1: VDDIO2 voltage monitor enabled (value: 1)
     */
        /** @brief VDDIO2 voltage monitor disabled */
    constexpr std::uint32_t PWR_SVMCR_IO2VMEN_B_0x0 = 0;
        /** @brief VDDIO2 voltage monitor enabled */
    constexpr std::uint32_t PWR_SVMCR_IO2VMEN_B_0x1 = 1;

    /** @brief VDDA independent analog supply voltage monitor 1 enable (1.6V threshold) */
    using PWR_SVMCR_AVM1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VDDA voltage monitor 1 disabled (value: 0)
     *          - B_0x1: VDDA voltage monitor 1 enabled (value: 1)
     */
        /** @brief VDDA voltage monitor 1 disabled */
    constexpr std::uint32_t PWR_SVMCR_AVM1EN_B_0x0 = 0;
        /** @brief VDDA voltage monitor 1 enabled */
    constexpr std::uint32_t PWR_SVMCR_AVM1EN_B_0x1 = 1;

    /** @brief VDDA independent analog supply voltage monitor 2 enable (1.8V threshold) */
    using PWR_SVMCR_AVM2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VDDA voltage monitor 2 disabled (value: 0)
     *          - B_0x1: VDDA voltage monitor 2 enabled (value: 1)
     */
        /** @brief VDDA voltage monitor 2 disabled */
    constexpr std::uint32_t PWR_SVMCR_AVM2EN_B_0x0 = 0;
        /** @brief VDDA voltage monitor 2 enabled */
    constexpr std::uint32_t PWR_SVMCR_AVM2EN_B_0x1 = 1;

    /** @brief VDDUSB independent USB supply valid */
    using PWR_SVMCR_USV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VDDUSB not present: logical and electrical isolation is applied to ignore this supply. (value: 0)
     *          - B_0x1: VDDUSB valid (value: 1)
     */
        /** @brief VDDUSB not present: logical and electrical isolation is applied to ignore this supply. */
    constexpr std::uint32_t PWR_SVMCR_USV_B_0x0 = 0;
        /** @brief VDDUSB valid */
    constexpr std::uint32_t PWR_SVMCR_USV_B_0x1 = 1;

    /** @brief VDDIO2 independent I/Os supply valid */
    using PWR_SVMCR_IO2SV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VDDIO2 not present: logical and electrical isolation is applied to ignore this supply. (value: 0)
     *          - B_0x1: VDDIO2 valid (value: 1)
     */
        /** @brief VDDIO2 not present: logical and electrical isolation is applied to ignore this supply. */
    constexpr std::uint32_t PWR_SVMCR_IO2SV_B_0x0 = 0;
        /** @brief VDDIO2 valid */
    constexpr std::uint32_t PWR_SVMCR_IO2SV_B_0x1 = 1;

    /** @brief VDDA independent analog supply valid */
    using PWR_SVMCR_ASV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VDDA not present: logical and electrical isolation is applied to ignore this supply. (value: 0)
     *          - B_0x1: VDDA valid (value: 1)
     */
        /** @brief VDDA not present: logical and electrical isolation is applied to ignore this supply. */
    constexpr std::uint32_t PWR_SVMCR_ASV_B_0x0 = 0;
        /** @brief VDDA valid */
    constexpr std::uint32_t PWR_SVMCR_ASV_B_0x1 = 1;

    /** @brief PWR wakeup control register 1 */
    using PWR_WUCR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wakeup pin WKUP1 enable */
    using PWR_WUCR1_WUPEN1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wakeup pin WKUP1 disabled (value: 0)
     *          - B_0x1: Wakeup pin WKUP1 enabled (value: 1)
     */
        /** @brief Wakeup pin WKUP1 disabled */
    constexpr std::uint32_t PWR_WUCR1_WUPEN1_B_0x0 = 0;
        /** @brief Wakeup pin WKUP1 enabled */
    constexpr std::uint32_t PWR_WUCR1_WUPEN1_B_0x1 = 1;

    /** @brief Wakeup pin WKUP2 enable */
    using PWR_WUCR1_WUPEN2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wakeup pin WKUP2 disabled (value: 0)
     *          - B_0x1: Wakeup pin WKUP2 enabled (value: 1)
     */
        /** @brief Wakeup pin WKUP2 disabled */
    constexpr std::uint32_t PWR_WUCR1_WUPEN2_B_0x0 = 0;
        /** @brief Wakeup pin WKUP2 enabled */
    constexpr std::uint32_t PWR_WUCR1_WUPEN2_B_0x1 = 1;

    /** @brief Wakeup pin WKUP3 enable */
    using PWR_WUCR1_WUPEN3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wakeup pin WKUP3 disabled (value: 0)
     *          - B_0x1: Wakeup pin WKUP3 enabled (value: 1)
     */
        /** @brief Wakeup pin WKUP3 disabled */
    constexpr std::uint32_t PWR_WUCR1_WUPEN3_B_0x0 = 0;
        /** @brief Wakeup pin WKUP3 enabled */
    constexpr std::uint32_t PWR_WUCR1_WUPEN3_B_0x1 = 1;

    /** @brief Wakeup pin WKUP4 enable */
    using PWR_WUCR1_WUPEN4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wakeup pin WKUP4 disabled (value: 0)
     *          - B_0x1: Wakeup pin WKUP4 enabled (value: 1)
     */
        /** @brief Wakeup pin WKUP4 disabled */
    constexpr std::uint32_t PWR_WUCR1_WUPEN4_B_0x0 = 0;
        /** @brief Wakeup pin WKUP4 enabled */
    constexpr std::uint32_t PWR_WUCR1_WUPEN4_B_0x1 = 1;

    /** @brief Wakeup pin WKUP5 enable */
    using PWR_WUCR1_WUPEN5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wakeup pin WKUP5 disabled (value: 0)
     *          - B_0x1: Wakeup pin WKUP5 enabled (value: 1)
     */
        /** @brief Wakeup pin WKUP5 disabled */
    constexpr std::uint32_t PWR_WUCR1_WUPEN5_B_0x0 = 0;
        /** @brief Wakeup pin WKUP5 enabled */
    constexpr std::uint32_t PWR_WUCR1_WUPEN5_B_0x1 = 1;

    /** @brief Wakeup pin WKUP6 enable */
    using PWR_WUCR1_WUPEN6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wakeup pin WKUP6 disabled (value: 0)
     *          - B_0x1: Wakeup pin WKUP6 enabled (value: 1)
     */
        /** @brief Wakeup pin WKUP6 disabled */
    constexpr std::uint32_t PWR_WUCR1_WUPEN6_B_0x0 = 0;
        /** @brief Wakeup pin WKUP6 enabled */
    constexpr std::uint32_t PWR_WUCR1_WUPEN6_B_0x1 = 1;

    /** @brief Wakeup pin WKUP7 enable */
    using PWR_WUCR1_WUPEN7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wakeup pin WKUP7 disabled (value: 0)
     *          - B_0x1: Wakeup pin WKUP7 enabled (value: 1)
     */
        /** @brief Wakeup pin WKUP7 disabled */
    constexpr std::uint32_t PWR_WUCR1_WUPEN7_B_0x0 = 0;
        /** @brief Wakeup pin WKUP7 enabled */
    constexpr std::uint32_t PWR_WUCR1_WUPEN7_B_0x1 = 1;

    /** @brief Wakeup pin WKUP8 enable */
    using PWR_WUCR1_WUPEN8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wakeup pin WKUP8 disabled (value: 0)
     *          - B_0x1: Wakeup pin WKUP8 enabled (value: 1)
     */
        /** @brief Wakeup pin WKUP8 disabled */
    constexpr std::uint32_t PWR_WUCR1_WUPEN8_B_0x0 = 0;
        /** @brief Wakeup pin WKUP8 enabled */
    constexpr std::uint32_t PWR_WUCR1_WUPEN8_B_0x1 = 1;

    /** @brief PWR wakeup control register 2 */
    using PWR_WUCR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wakeup pin WKUP1 polarity. */
    using PWR_WUCR2_WUPP1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Detection on high level (rising edge) (value: 0)
     *          - B_0x1: Detection on low level (falling edge) (value: 1)
     */
        /** @brief Detection on high level (rising edge) */
    constexpr std::uint32_t PWR_WUCR2_WUPP1_B_0x0 = 0;
        /** @brief Detection on low level (falling edge) */
    constexpr std::uint32_t PWR_WUCR2_WUPP1_B_0x1 = 1;

    /** @brief Wakeup pin WKUP2 polarity */
    using PWR_WUCR2_WUPP2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Detection on high level (rising edge) (value: 0)
     *          - B_0x1: Detection on low level (falling edge) (value: 1)
     */
        /** @brief Detection on high level (rising edge) */
    constexpr std::uint32_t PWR_WUCR2_WUPP2_B_0x0 = 0;
        /** @brief Detection on low level (falling edge) */
    constexpr std::uint32_t PWR_WUCR2_WUPP2_B_0x1 = 1;

    /** @brief Wakeup pin WKUP3 polarity */
    using PWR_WUCR2_WUPP3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Detection on high level (rising edge) (value: 0)
     *          - B_0x1: Detection on low level (falling edge) (value: 1)
     */
        /** @brief Detection on high level (rising edge) */
    constexpr std::uint32_t PWR_WUCR2_WUPP3_B_0x0 = 0;
        /** @brief Detection on low level (falling edge) */
    constexpr std::uint32_t PWR_WUCR2_WUPP3_B_0x1 = 1;

    /** @brief Wakeup pin WKUP4 polarity */
    using PWR_WUCR2_WUPP4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Detection on high level (rising edge) (value: 0)
     *          - B_0x1: Detection on low level (falling edge) (value: 1)
     */
        /** @brief Detection on high level (rising edge) */
    constexpr std::uint32_t PWR_WUCR2_WUPP4_B_0x0 = 0;
        /** @brief Detection on low level (falling edge) */
    constexpr std::uint32_t PWR_WUCR2_WUPP4_B_0x1 = 1;

    /** @brief Wakeup pin WKUP5 polarity */
    using PWR_WUCR2_WUPP5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Detection on high level (rising edge) (value: 0)
     *          - B_0x1: Detection on low level (falling edge) (value: 1)
     */
        /** @brief Detection on high level (rising edge) */
    constexpr std::uint32_t PWR_WUCR2_WUPP5_B_0x0 = 0;
        /** @brief Detection on low level (falling edge) */
    constexpr std::uint32_t PWR_WUCR2_WUPP5_B_0x1 = 1;

    /** @brief Wakeup pin WKUP6 polarity */
    using PWR_WUCR2_WUPP6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Detection on high level (rising edge) (value: 0)
     *          - B_0x1: Detection on low level (falling edge) (value: 1)
     */
        /** @brief Detection on high level (rising edge) */
    constexpr std::uint32_t PWR_WUCR2_WUPP6_B_0x0 = 0;
        /** @brief Detection on low level (falling edge) */
    constexpr std::uint32_t PWR_WUCR2_WUPP6_B_0x1 = 1;

    /** @brief Wakeup pin WKUP7 polarity */
    using PWR_WUCR2_WUPP7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Detection on high level (rising edge) (value: 0)
     *          - B_0x1: Detection on low level (falling edge) (value: 1)
     */
        /** @brief Detection on high level (rising edge) */
    constexpr std::uint32_t PWR_WUCR2_WUPP7_B_0x0 = 0;
        /** @brief Detection on low level (falling edge) */
    constexpr std::uint32_t PWR_WUCR2_WUPP7_B_0x1 = 1;

    /** @brief Wakeup pin WKUP8 polarity */
    using PWR_WUCR2_WUPP8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Detection on high level (rising edge) (value: 0)
     *          - B_0x1: Detection on low level (falling edge) (value: 1)
     */
        /** @brief Detection on high level (rising edge) */
    constexpr std::uint32_t PWR_WUCR2_WUPP8_B_0x0 = 0;
        /** @brief Detection on low level (falling edge) */
    constexpr std::uint32_t PWR_WUCR2_WUPP8_B_0x1 = 1;

    /** @brief PWR wakeup control register 3 */
    using PWR_WUCR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wakeup pin WKUP1 selection */
    using PWR_WUCR3_WUSEL1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: WKUP0_0 (value: 0)
     *          - B_0x1: WKUP0_1 (value: 1)
     *          - B_0x2: WKUP0_2 (value: 2)
     *          - B_0x3: WKUP0_3 (value: 3)
     */
        /** @brief WKUP0_0 */
    constexpr std::uint32_t PWR_WUCR3_WUSEL1_B_0x0 = 0;
        /** @brief WKUP0_1 */
    constexpr std::uint32_t PWR_WUCR3_WUSEL1_B_0x1 = 1;
        /** @brief WKUP0_2 */
    constexpr std::uint32_t PWR_WUCR3_WUSEL1_B_0x2 = 2;
        /** @brief WKUP0_3 */
    constexpr std::uint32_t PWR_WUCR3_WUSEL1_B_0x3 = 3;

    /** @brief Wakeup pin WKUP2 selection */
    using PWR_WUCR3_WUSEL2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: WKUP2_0 (value: 0)
     *          - B_0x1: WKUP2_1 (value: 1)
     *          - B_0x2: WKUP2_2 (value: 2)
     *          - B_0x3: WKUP2_3 (value: 3)
     */
        /** @brief WKUP2_0 */
    constexpr std::uint32_t PWR_WUCR3_WUSEL2_B_0x0 = 0;
        /** @brief WKUP2_1 */
    constexpr std::uint32_t PWR_WUCR3_WUSEL2_B_0x1 = 1;
        /** @brief WKUP2_2 */
    constexpr std::uint32_t PWR_WUCR3_WUSEL2_B_0x2 = 2;
        /** @brief WKUP2_3 */
    constexpr std::uint32_t PWR_WUCR3_WUSEL2_B_0x3 = 3;

    /** @brief Wakeup pin WKUP3 selection */
    using PWR_WUCR3_WUSEL3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: WKUP3_0 (value: 0)
     *          - B_0x1: WKUP3_1 (value: 1)
     *          - B_0x2: WKUP3_2 (value: 2)
     *          - B_0x3: WKUP3_3 (value: 3)
     */
        /** @brief WKUP3_0 */
    constexpr std::uint32_t PWR_WUCR3_WUSEL3_B_0x0 = 0;
        /** @brief WKUP3_1 */
    constexpr std::uint32_t PWR_WUCR3_WUSEL3_B_0x1 = 1;
        /** @brief WKUP3_2 */
    constexpr std::uint32_t PWR_WUCR3_WUSEL3_B_0x2 = 2;
        /** @brief WKUP3_3 */
    constexpr std::uint32_t PWR_WUCR3_WUSEL3_B_0x3 = 3;

    /** @brief Wakeup pin WKUP4 selection */
    using PWR_WUCR3_WUSEL4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: WKUP4_0 (value: 0)
     *          - B_0x1: WKUP4_1 (value: 1)
     *          - B_0x2: WKUP4_2 (value: 2)
     *          - B_0x3: WKUP4_3 (value: 3)
     */
        /** @brief WKUP4_0 */
    constexpr std::uint32_t PWR_WUCR3_WUSEL4_B_0x0 = 0;
        /** @brief WKUP4_1 */
    constexpr std::uint32_t PWR_WUCR3_WUSEL4_B_0x1 = 1;
        /** @brief WKUP4_2 */
    constexpr std::uint32_t PWR_WUCR3_WUSEL4_B_0x2 = 2;
        /** @brief WKUP4_3 */
    constexpr std::uint32_t PWR_WUCR3_WUSEL4_B_0x3 = 3;

    /** @brief Wakeup pin WKUP5 selection */
    using PWR_WUCR3_WUSEL5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: WKUP5_0 (value: 0)
     *          - B_0x1: WKUP5_1 (value: 1)
     *          - B_0x2: WKUP5_2 (value: 2)
     *          - B_0x3: WKUP5_3 (value: 3)
     */
        /** @brief WKUP5_0 */
    constexpr std::uint32_t PWR_WUCR3_WUSEL5_B_0x0 = 0;
        /** @brief WKUP5_1 */
    constexpr std::uint32_t PWR_WUCR3_WUSEL5_B_0x1 = 1;
        /** @brief WKUP5_2 */
    constexpr std::uint32_t PWR_WUCR3_WUSEL5_B_0x2 = 2;
        /** @brief WKUP5_3 */
    constexpr std::uint32_t PWR_WUCR3_WUSEL5_B_0x3 = 3;

    /** @brief Wakeup pin WKUP6 selection */
    using PWR_WUCR3_WUSEL6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: WKUP6_0 (value: 0)
     *          - B_0x1: WKUP6_1 (value: 1)
     *          - B_0x2: WKUP6_2 (value: 2)
     *          - B_0x3: WKUP6_3 (value: 3)
     */
        /** @brief WKUP6_0 */
    constexpr std::uint32_t PWR_WUCR3_WUSEL6_B_0x0 = 0;
        /** @brief WKUP6_1 */
    constexpr std::uint32_t PWR_WUCR3_WUSEL6_B_0x1 = 1;
        /** @brief WKUP6_2 */
    constexpr std::uint32_t PWR_WUCR3_WUSEL6_B_0x2 = 2;
        /** @brief WKUP6_3 */
    constexpr std::uint32_t PWR_WUCR3_WUSEL6_B_0x3 = 3;

    /** @brief Wakeup pin WKUP7 selection */
    using PWR_WUCR3_WUSEL7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: WKUP7_0 (value: 0)
     *          - B_0x1: WKUP7_1 (value: 1)
     *          - B_0x2: WKUP7_2 (value: 2)
     *          - B_0x3: WKUP7_3 (value: 3)
     */
        /** @brief WKUP7_0 */
    constexpr std::uint32_t PWR_WUCR3_WUSEL7_B_0x0 = 0;
        /** @brief WKUP7_1 */
    constexpr std::uint32_t PWR_WUCR3_WUSEL7_B_0x1 = 1;
        /** @brief WKUP7_2 */
    constexpr std::uint32_t PWR_WUCR3_WUSEL7_B_0x2 = 2;
        /** @brief WKUP7_3 */
    constexpr std::uint32_t PWR_WUCR3_WUSEL7_B_0x3 = 3;

    /** @brief Wakeup pin WKUP8 selection */
    using PWR_WUCR3_WUSEL8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: WKUP8_0 (value: 0)
     *          - B_0x1: WKUP8_1 (value: 1)
     *          - B_0x2: WKUP8_2 (value: 2)
     *          - B_0x3: WKUP8_3 (value: 3)
     */
        /** @brief WKUP8_0 */
    constexpr std::uint32_t PWR_WUCR3_WUSEL8_B_0x0 = 0;
        /** @brief WKUP8_1 */
    constexpr std::uint32_t PWR_WUCR3_WUSEL8_B_0x1 = 1;
        /** @brief WKUP8_2 */
    constexpr std::uint32_t PWR_WUCR3_WUSEL8_B_0x2 = 2;
        /** @brief WKUP8_3 */
    constexpr std::uint32_t PWR_WUCR3_WUSEL8_B_0x3 = 3;

    /** @brief PWR Backup domain control register 1 */
    using PWR_BDCR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Backup RAM retention in Standby and VBAT modes */
    using PWR_BDCR1_BREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Backup RAM content lost in Standby and VBAT modes (value: 0)
     *          - B_0x1: Backup RAM content preserved in Standby and VBAT modes (value: 1)
     */
        /** @brief Backup RAM content lost in Standby and VBAT modes */
    constexpr std::uint32_t PWR_BDCR1_BREN_B_0x0 = 0;
        /** @brief Backup RAM content preserved in Standby and VBAT modes */
    constexpr std::uint32_t PWR_BDCR1_BREN_B_0x1 = 1;

    /** @brief Backup domain voltage and temperature monitoring enable */
    using PWR_BDCR1_MONEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Backup domain voltage and temperature monitoring disabled (value: 0)
     *          - B_0x1: Backup domain voltage and temperature monitoring enabled (value: 1)
     */
        /** @brief Backup domain voltage and temperature monitoring disabled */
    constexpr std::uint32_t PWR_BDCR1_MONEN_B_0x0 = 0;
        /** @brief Backup domain voltage and temperature monitoring enabled */
    constexpr std::uint32_t PWR_BDCR1_MONEN_B_0x1 = 1;

    /** @brief PWR Backup domain control register 2 */
    using PWR_BDCR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VBAT charging enable */
    using PWR_BDCR2_VBE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VBAT battery charging disabled (value: 0)
     *          - B_0x1: VBAT battery charging enabled (value: 1)
     */
        /** @brief VBAT battery charging disabled */
    constexpr std::uint32_t PWR_BDCR2_VBE_B_0x0 = 0;
        /** @brief VBAT battery charging enabled */
    constexpr std::uint32_t PWR_BDCR2_VBE_B_0x1 = 1;

    /** @brief VBAT charging resistor selection */
    using PWR_BDCR2_VBRS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Charge VBAT through a 5 kohm resistor (value: 0)
     *          - B_0x1: Charge VBAT through a 1.5 kohm resistor (value: 1)
     */
        /** @brief Charge VBAT through a 5 kohm resistor */
    constexpr std::uint32_t PWR_BDCR2_VBRS_B_0x0 = 0;
        /** @brief Charge VBAT through a 1.5 kohm resistor */
    constexpr std::uint32_t PWR_BDCR2_VBRS_B_0x1 = 1;

    /** @brief PWR disable Backup domain register */
    using PWR_DBPR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Disable Backup domain write protection */
    using PWR_DBPR_DBP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write access to Backup domain disabled (value: 0)
     *          - B_0x1: Write access to Backup domain enabled (value: 1)
     */
        /** @brief Write access to Backup domain disabled */
    constexpr std::uint32_t PWR_DBPR_DBP_B_0x0 = 0;
        /** @brief Write access to Backup domain enabled */
    constexpr std::uint32_t PWR_DBPR_DBP_B_0x1 = 1;

    /** @brief PWR USB Type-C and Power Delivery register */
    using PWR_UCPDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief UCPD dead battery disable */
    using PWR_UCPDR_UCPD_DBDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UCPD dead battery pull-down behavior enabled on UCPDx_CC1 and UCPDx_CC2 pins (value: 0)
     *          - B_0x1: UCPD dead battery pull-down behavior disabled on UCPDx_CC1 and UCPDx_CC2 pins (value: 1)
     */
        /** @brief UCPD dead battery pull-down behavior enabled on UCPDx_CC1 and UCPDx_CC2 pins */
    constexpr std::uint32_t PWR_UCPDR_UCPD_DBDIS_B_0x0 = 0;
        /** @brief UCPD dead battery pull-down behavior disabled on UCPDx_CC1 and UCPDx_CC2 pins */
    constexpr std::uint32_t PWR_UCPDR_UCPD_DBDIS_B_0x1 = 1;

    /** @brief UCPD Standby mode */
    using PWR_UCPDR_UCPD_STBY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PWR security configuration register */
    using PWR_SECCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WUP1 secure protection */
    using PWR_SECCFGR_WUP1SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bits related to the WKUP1 pin in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3 and PWR_WUSCR can be read and written with secure or non-secure access. (value: 0)
     *          - B_0x1: Bits related to the WKUP1 pin in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3 and PWR_WUSCR can be read and written only with secure access. (value: 1)
     */
        /** @brief Bits related to the WKUP1 pin in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3 and PWR_WUSCR can be read and written with secure or non-secure access. */
    constexpr std::uint32_t PWR_SECCFGR_WUP1SEC_B_0x0 = 0;
        /** @brief Bits related to the WKUP1 pin in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3 and PWR_WUSCR can be read and written only with secure access. */
    constexpr std::uint32_t PWR_SECCFGR_WUP1SEC_B_0x1 = 1;

    /** @brief WUP2 secure protection */
    using PWR_SECCFGR_WUP2SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bits related to the WKUP2 pin in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3 and PWR_WUSCR can be read and written with secure or non-secure access. (value: 0)
     *          - B_0x1: Bits related to the WKUP2 pin in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3 and PWR_WUSCR can be read and written only with secure access. (value: 1)
     */
        /** @brief Bits related to the WKUP2 pin in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3 and PWR_WUSCR can be read and written with secure or non-secure access. */
    constexpr std::uint32_t PWR_SECCFGR_WUP2SEC_B_0x0 = 0;
        /** @brief Bits related to the WKUP2 pin in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3 and PWR_WUSCR can be read and written only with secure access. */
    constexpr std::uint32_t PWR_SECCFGR_WUP2SEC_B_0x1 = 1;

    /** @brief WUP3 secure protection */
    using PWR_SECCFGR_WUP3SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bits related to the WKUP3 pin in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3 and PWR_WUSCR can be read and written with secure or non-secure access. (value: 0)
     *          - B_0x1: Bits related to the WKUP3 pin in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3 and PWR_WUSCR can be read and written only with secure access. (value: 1)
     */
        /** @brief Bits related to the WKUP3 pin in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3 and PWR_WUSCR can be read and written with secure or non-secure access. */
    constexpr std::uint32_t PWR_SECCFGR_WUP3SEC_B_0x0 = 0;
        /** @brief Bits related to the WKUP3 pin in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3 and PWR_WUSCR can be read and written only with secure access. */
    constexpr std::uint32_t PWR_SECCFGR_WUP3SEC_B_0x1 = 1;

    /** @brief WUP4 secure protection */
    using PWR_SECCFGR_WUP4SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bits related to the WKUP4 pin in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3 and PWR_WUSCR can be read and written with secure or non-secure access. (value: 0)
     *          - B_0x1: Bits related to the WKUP4 pin in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3 and PWR_WUSCR can be read and written only with secure access. (value: 1)
     */
        /** @brief Bits related to the WKUP4 pin in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3 and PWR_WUSCR can be read and written with secure or non-secure access. */
    constexpr std::uint32_t PWR_SECCFGR_WUP4SEC_B_0x0 = 0;
        /** @brief Bits related to the WKUP4 pin in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3 and PWR_WUSCR can be read and written only with secure access. */
    constexpr std::uint32_t PWR_SECCFGR_WUP4SEC_B_0x1 = 1;

    /** @brief WUP5 secure protection */
    using PWR_SECCFGR_WUP5SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bits related to the WKUP5 pin in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3 and PWR_WUSCR can be read and written with secure or non-secure access. (value: 0)
     *          - B_0x1: Bits related to the WKUP5 pin in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3 and PWR_WUSCR can be read and written only with secure access. (value: 1)
     */
        /** @brief Bits related to the WKUP5 pin in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3 and PWR_WUSCR can be read and written with secure or non-secure access. */
    constexpr std::uint32_t PWR_SECCFGR_WUP5SEC_B_0x0 = 0;
        /** @brief Bits related to the WKUP5 pin in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3 and PWR_WUSCR can be read and written only with secure access. */
    constexpr std::uint32_t PWR_SECCFGR_WUP5SEC_B_0x1 = 1;

    /** @brief WUP6 secure protection */
    using PWR_SECCFGR_WUP6SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bits related to the WKUP6 pin in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3 and PWR_WUSCR can be read and written with secure or non-secure access. (value: 0)
     *          - B_0x1: Bits related to the WKUP6 pin in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3 and PWR_WUSCR can be read and written only with secure access. (value: 1)
     */
        /** @brief Bits related to the WKUP6 pin in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3 and PWR_WUSCR can be read and written with secure or non-secure access. */
    constexpr std::uint32_t PWR_SECCFGR_WUP6SEC_B_0x0 = 0;
        /** @brief Bits related to the WKUP6 pin in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3 and PWR_WUSCR can be read and written only with secure access. */
    constexpr std::uint32_t PWR_SECCFGR_WUP6SEC_B_0x1 = 1;

    /** @brief WUP7 secure protection */
    using PWR_SECCFGR_WUP7SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bits related to the WKUP7 pin in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3 and PWR_WUSCR can be read and written with secure or non-secure access. (value: 0)
     *          - B_0x1: Bits related to the WKUP7 pin in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3 and PWR_WUSCR can be read and written only with secure access. (value: 1)
     */
        /** @brief Bits related to the WKUP7 pin in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3 and PWR_WUSCR can be read and written with secure or non-secure access. */
    constexpr std::uint32_t PWR_SECCFGR_WUP7SEC_B_0x0 = 0;
        /** @brief Bits related to the WKUP7 pin in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3 and PWR_WUSCR can be read and written only with secure access. */
    constexpr std::uint32_t PWR_SECCFGR_WUP7SEC_B_0x1 = 1;

    /** @brief WUP8 secure protection */
    using PWR_SECCFGR_WUP8SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bits related to the WKUP8 pin in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3 and PWR_WUSCR can be read and written with secure or non-secure access. (value: 0)
     *          - B_0x1: Bits related to the WKUP8 pin in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3 and PWR_WUSCR can be read and written only with secure access. (value: 1)
     */
        /** @brief Bits related to the WKUP8 pin in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3 and PWR_WUSCR can be read and written with secure or non-secure access. */
    constexpr std::uint32_t PWR_SECCFGR_WUP8SEC_B_0x0 = 0;
        /** @brief Bits related to the WKUP8 pin in PWR_WUCR1, PWR_WUCR2, PWR_WUCR3 and PWR_WUSCR can be read and written only with secure access. */
    constexpr std::uint32_t PWR_SECCFGR_WUP8SEC_B_0x1 = 1;

    /** @brief Low-power modes secure protection */
    using PWR_SECCFGR_LPMSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PWR_CR1, PWR_CR2 and CSSF in the PWR_SR can be read and written with secure or non-secure access. (value: 0)
     *          - B_0x1: PWR_CR1, PWR_CR2, and CSSF in the PWR_SR can be read and written only with secure access. (value: 1)
     */
        /** @brief PWR_CR1, PWR_CR2 and CSSF in the PWR_SR can be read and written with secure or non-secure access. */
    constexpr std::uint32_t PWR_SECCFGR_LPMSEC_B_0x0 = 0;
        /** @brief PWR_CR1, PWR_CR2, and CSSF in the PWR_SR can be read and written only with secure access. */
    constexpr std::uint32_t PWR_SECCFGR_LPMSEC_B_0x1 = 1;

    /** @brief Voltage detection and monitoring secure protection */
    using PWR_SECCFGR_VDMSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PWR_SVMCR and PWR_CR3 can be read and written with secure or non-secure access. (value: 0)
     *          - B_0x1: PWR_SVMCR and PWR_CR3 can be read and written only with secure access. (value: 1)
     */
        /** @brief PWR_SVMCR and PWR_CR3 can be read and written with secure or non-secure access. */
    constexpr std::uint32_t PWR_SECCFGR_VDMSEC_B_0x0 = 0;
        /** @brief PWR_SVMCR and PWR_CR3 can be read and written only with secure access. */
    constexpr std::uint32_t PWR_SECCFGR_VDMSEC_B_0x1 = 1;

    /** @brief Backup domain secure protection */
    using PWR_SECCFGR_VBSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PWR_BDCR1, PWR_BDCR2 and PWR_DBPR can be read and written with secure or non-secure access. (value: 0)
     *          - B_0x1: PWR_BDCR1, PWR_BDCR2 and PWR_DBPR can be read and written only with secure access. (value: 1)
     */
        /** @brief PWR_BDCR1, PWR_BDCR2 and PWR_DBPR can be read and written with secure or non-secure access. */
    constexpr std::uint32_t PWR_SECCFGR_VBSEC_B_0x0 = 0;
        /** @brief PWR_BDCR1, PWR_BDCR2 and PWR_DBPR can be read and written only with secure access. */
    constexpr std::uint32_t PWR_SECCFGR_VBSEC_B_0x1 = 1;

    /** @brief Pull-up/pull-down secure protection */
    using PWR_SECCFGR_APCSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PWR_APCR can be read and written with secure or non-secure access. (value: 0)
     *          - B_0x1: PWR_APCR can be read and written only with secure access. (value: 1)
     */
        /** @brief PWR_APCR can be read and written with secure or non-secure access. */
    constexpr std::uint32_t PWR_SECCFGR_APCSEC_B_0x0 = 0;
        /** @brief PWR_APCR can be read and written only with secure access. */
    constexpr std::uint32_t PWR_SECCFGR_APCSEC_B_0x1 = 1;

    /** @brief PWR privilege control register */
    using PWR_PRIVCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PWR secure functions privilege configuration */
    using PWR_PRIVCFGR_SPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Read and write to PWR secure functions can be done by privileged or unprivileged access. (value: 0)
     *          - B_0x1: Read and write to PWR secure functions can be done by privileged access only. (value: 1)
     */
        /** @brief Read and write to PWR secure functions can be done by privileged or unprivileged access. */
    constexpr std::uint32_t PWR_PRIVCFGR_SPRIV_B_0x0 = 0;
        /** @brief Read and write to PWR secure functions can be done by privileged access only. */
    constexpr std::uint32_t PWR_PRIVCFGR_SPRIV_B_0x1 = 1;

    /** @brief PWR non-secure functions privilege configuration */
    using PWR_PRIVCFGR_NSPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Read and write to PWR non-secure functions can be done by privileged or unprivileged access. (value: 0)
     *          - B_0x1: Read and write to PWR non-secure functions can be done by privileged access only. (value: 1)
     */
        /** @brief Read and write to PWR non-secure functions can be done by privileged or unprivileged access. */
    constexpr std::uint32_t PWR_PRIVCFGR_NSPRIV_B_0x0 = 0;
        /** @brief Read and write to PWR non-secure functions can be done by privileged access only. */
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

    /** @brief VDD voltage detector output */
    using PWR_SVMSR_PVDO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VDD is equal or above the PVD threshold selected by PVDLS[2:0]. (value: 0)
     *          - B_0x1: VDD is below the PVD threshold selected by PVDLS[2:0]. (value: 1)
     */
        /** @brief VDD is equal or above the PVD threshold selected by PVDLS[2:0]. */
    constexpr std::uint32_t PWR_SVMSR_PVDO_B_0x0 = 0;
        /** @brief VDD is below the PVD threshold selected by PVDLS[2:0]. */
    constexpr std::uint32_t PWR_SVMSR_PVDO_B_0x1 = 1;

    /** @brief Voltage level ready for currently used VOS */
    using PWR_SVMSR_ACTVOSRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VCORE is above or below the current voltage scaling provided by ACTVOS[1:0]. (value: 0)
     *          - B_0x1: VCORE is equal to the current voltage scaling provided by ACTVOS[1:0] (value: 1)
     */
        /** @brief VCORE is above or below the current voltage scaling provided by ACTVOS[1:0]. */
    constexpr std::uint32_t PWR_SVMSR_ACTVOSRDY_B_0x0 = 0;
        /** @brief VCORE is equal to the current voltage scaling provided by ACTVOS[1:0] */
    constexpr std::uint32_t PWR_SVMSR_ACTVOSRDY_B_0x1 = 1;

    /** @brief VOS currently applied to VCORE */
    using PWR_SVMSR_ACTVOS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Range 4 (lowest power) (value: 0)
     *          - B_0x1: Range 3 (value: 1)
     *          - B_0x2: Range 2 (value: 2)
     *          - B_0x3: Range 1 (highest frequency) (value: 3)
     */
        /** @brief Range 4 (lowest power) */
    constexpr std::uint32_t PWR_SVMSR_ACTVOS_B_0x0 = 0;
        /** @brief Range 3 */
    constexpr std::uint32_t PWR_SVMSR_ACTVOS_B_0x1 = 1;
        /** @brief Range 2 */
    constexpr std::uint32_t PWR_SVMSR_ACTVOS_B_0x2 = 2;
        /** @brief Range 1 (highest frequency) */
    constexpr std::uint32_t PWR_SVMSR_ACTVOS_B_0x3 = 3;

    /** @brief VDDUSB ready */
    using PWR_SVMSR_VDDUSBRDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VDDUSB is below the threshold of the VDDUSB voltage monitor. (value: 0)
     *          - B_0x1: VDDUSB is equal or above the threshold of the VDDUSB voltage monitor. (value: 1)
     */
        /** @brief VDDUSB is below the threshold of the VDDUSB voltage monitor. */
    constexpr std::uint32_t PWR_SVMSR_VDDUSBRDY_B_0x0 = 0;
        /** @brief VDDUSB is equal or above the threshold of the VDDUSB voltage monitor. */
    constexpr std::uint32_t PWR_SVMSR_VDDUSBRDY_B_0x1 = 1;

    /** @brief VDDIO2 ready */
    using PWR_SVMSR_VDDIO2RDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VDDIO2 is below the threshold of the VDDIO2 voltage monitor. (value: 0)
     *          - B_0x1: VDDIO2 is equal or above the threshold of the VDDIO2 voltage monitor. (value: 1)
     */
        /** @brief VDDIO2 is below the threshold of the VDDIO2 voltage monitor. */
    constexpr std::uint32_t PWR_SVMSR_VDDIO2RDY_B_0x0 = 0;
        /** @brief VDDIO2 is equal or above the threshold of the VDDIO2 voltage monitor. */
    constexpr std::uint32_t PWR_SVMSR_VDDIO2RDY_B_0x1 = 1;

    /** @brief VDDA ready versus 1.6V voltage monitor */
    using PWR_SVMSR_VDDA1RDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VDDA is below the threshold of the VDDA voltage monitor 1 (around 1.6 V). (value: 0)
     *          - B_0x1: VDDA is equal or above the threshold of the VDDA voltage monitor 1 (around 1.6 V). (value: 1)
     */
        /** @brief VDDA is below the threshold of the VDDA voltage monitor 1 (around 1.6 V). */
    constexpr std::uint32_t PWR_SVMSR_VDDA1RDY_B_0x0 = 0;
        /** @brief VDDA is equal or above the threshold of the VDDA voltage monitor 1 (around 1.6 V). */
    constexpr std::uint32_t PWR_SVMSR_VDDA1RDY_B_0x1 = 1;

    /** @brief VDDA ready versus 1.8V voltage monitor */
    using PWR_SVMSR_VDDA2RDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VDDA is below the threshold of the VDDA voltage monitor 2 (around 1.8 V). (value: 0)
     *          - B_0x1: VDDA is equal or above the threshold of the VDDA voltage monitor 2 (around 1.8 V). (value: 1)
     */
        /** @brief VDDA is below the threshold of the VDDA voltage monitor 2 (around 1.8 V). */
    constexpr std::uint32_t PWR_SVMSR_VDDA2RDY_B_0x0 = 0;
        /** @brief VDDA is equal or above the threshold of the VDDA voltage monitor 2 (around 1.8 V). */
    constexpr std::uint32_t PWR_SVMSR_VDDA2RDY_B_0x1 = 1;

    /** @brief PWR Backup domain status register */
    using PWR_BDSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Backup domain voltage level monitoring versus high threshold */
    using PWR_BDSR_VBATH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Backup domain voltage level less than high threshold (value: 0)
     *          - B_0x1: Backup domain voltage level greater or equal high threshold (value: 1)
     */
        /** @brief Backup domain voltage level less than high threshold */
    constexpr std::uint32_t PWR_BDSR_VBATH_B_0x0 = 0;
        /** @brief Backup domain voltage level greater or equal high threshold */
    constexpr std::uint32_t PWR_BDSR_VBATH_B_0x1 = 1;

    /** @brief Temperature level monitoring versus low threshold */
    using PWR_BDSR_TEMPL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Temperature > low threshold (value: 0)
     *          - B_0x1: Temperature less than or equal to low threshold (value: 1)
     */
        /** @brief Temperature > low threshold */
    constexpr std::uint32_t PWR_BDSR_TEMPL_B_0x0 = 0;
        /** @brief Temperature less than or equal to low threshold */
    constexpr std::uint32_t PWR_BDSR_TEMPL_B_0x1 = 1;

    /** @brief Temperature level monitoring versus high threshold */
    using PWR_BDSR_TEMPH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Temperature less than high threshold (value: 0)
     *          - B_0x1: Temperature greater or equal high threshold (value: 1)
     */
        /** @brief Temperature less than high threshold */
    constexpr std::uint32_t PWR_BDSR_TEMPH_B_0x0 = 0;
        /** @brief Temperature greater or equal high threshold */
    constexpr std::uint32_t PWR_BDSR_TEMPH_B_0x1 = 1;

    /** @brief PWR wakeup status register */
    using PWR_WUSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wakeup flag 1 */
    using PWR_WUSR_WUF1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wakeup flag 2 */
    using PWR_WUSR_WUF2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wakeup flag 3 */
    using PWR_WUSR_WUF3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wakeup flag 4 */
    using PWR_WUSR_WUF4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wakeup flag 5 */
    using PWR_WUSR_WUF5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wakeup flag 6 */
    using PWR_WUSR_WUF6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wakeup flag 7 */
    using PWR_WUSR_WUF7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wakeup flag 8 */
    using PWR_WUSR_WUF8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PWR wakeup status clear register */
    using PWR_WUSCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wakeup flag 1 */
    using PWR_WUSCR_CWUF1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wakeup flag 2 */
    using PWR_WUSCR_CWUF2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wakeup flag 3 */
    using PWR_WUSCR_CWUF3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wakeup flag 4 */
    using PWR_WUSCR_CWUF4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wakeup flag 5 */
    using PWR_WUSCR_CWUF5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wakeup flag 6 */
    using PWR_WUSCR_CWUF6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wakeup flag 7 */
    using PWR_WUSCR_CWUF7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wakeup flag 8 */
    using PWR_WUSCR_CWUF8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PWR apply pull configuration register */
    using PWR_APCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Apply pull-up and pull-down configuration */
    using PWR_APCR_APC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PWR port A pull-up control register */
    using PWR_PUCRA = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU0 field */
    using PWR_PUCRA_PU0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU1 field */
    using PWR_PUCRA_PU1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU2 field */
    using PWR_PUCRA_PU2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU3 field */
    using PWR_PUCRA_PU3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU4 field */
    using PWR_PUCRA_PU4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU5 field */
    using PWR_PUCRA_PU5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU6 field */
    using PWR_PUCRA_PU6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU7 field */
    using PWR_PUCRA_PU7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU8 field */
    using PWR_PUCRA_PU8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU9 field */
    using PWR_PUCRA_PU9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU10 field */
    using PWR_PUCRA_PU10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU11 field */
    using PWR_PUCRA_PU11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU12 field */
    using PWR_PUCRA_PU12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU13 field */
    using PWR_PUCRA_PU13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-up bit 15 */
    using PWR_PUCRA_PU15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PWR port A pull-down control register */
    using PWR_PDCRA = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD0 field */
    using PWR_PDCRA_PD0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD1 field */
    using PWR_PDCRA_PD1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD2 field */
    using PWR_PDCRA_PD2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD3 field */
    using PWR_PDCRA_PD3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD4 field */
    using PWR_PDCRA_PD4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD5 field */
    using PWR_PDCRA_PD5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD6 field */
    using PWR_PDCRA_PD6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD7 field */
    using PWR_PDCRA_PD7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD8 field */
    using PWR_PDCRA_PD8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD9 field */
    using PWR_PDCRA_PD9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD10 field */
    using PWR_PDCRA_PD10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD11 field */
    using PWR_PDCRA_PD11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD12 field */
    using PWR_PDCRA_PD12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Port A pull-down bit 14 */
    using PWR_PDCRA_PD14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PWR port B pull-up control register */
    using PWR_PUCRB = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x58, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU0 field */
    using PWR_PUCRB_PU0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU1 field */
    using PWR_PUCRB_PU1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU2 field */
    using PWR_PUCRB_PU2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU3 field */
    using PWR_PUCRB_PU3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU4 field */
    using PWR_PUCRB_PU4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU5 field */
    using PWR_PUCRB_PU5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU6 field */
    using PWR_PUCRB_PU6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU7 field */
    using PWR_PUCRB_PU7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU8 field */
    using PWR_PUCRB_PU8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU9 field */
    using PWR_PUCRB_PU9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU10 field */
    using PWR_PUCRB_PU10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU11 field */
    using PWR_PUCRB_PU11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU12 field */
    using PWR_PUCRB_PU12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU13 field */
    using PWR_PUCRB_PU13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU14 field */
    using PWR_PUCRB_PU14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU15 field */
    using PWR_PUCRB_PU15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PWR port B pull-down control register */
    using PWR_PDCRB = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD0 field */
    using PWR_PDCRB_PD0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD1 field */
    using PWR_PDCRB_PD1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD2 field */
    using PWR_PDCRB_PD2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD3 field */
    using PWR_PDCRB_PD3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD5 field */
    using PWR_PDCRB_PD5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD6 field */
    using PWR_PDCRB_PD6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD7 field */
    using PWR_PDCRB_PD7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD8 field */
    using PWR_PDCRB_PD8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD9 field */
    using PWR_PDCRB_PD9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD10 field */
    using PWR_PDCRB_PD10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD11 field */
    using PWR_PDCRB_PD11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD12 field */
    using PWR_PDCRB_PD12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD13 field */
    using PWR_PDCRB_PD13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD14 field */
    using PWR_PDCRB_PD14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD15 field */
    using PWR_PDCRB_PD15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Power port C pull up control register */
    using PWR_PUCRC = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU0 */
    using PWR_PUCRC_PU0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU1 */
    using PWR_PUCRC_PU1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU2 */
    using PWR_PUCRC_PU2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU3 */
    using PWR_PUCRC_PU3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU4 */
    using PWR_PUCRC_PU4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU5 */
    using PWR_PUCRC_PU5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU6 */
    using PWR_PUCRC_PU6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU7 */
    using PWR_PUCRC_PU7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU8 */
    using PWR_PUCRC_PU8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU9 */
    using PWR_PUCRC_PU9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU10 */
    using PWR_PUCRC_PU10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU11 */
    using PWR_PUCRC_PU11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU12 */
    using PWR_PUCRC_PU12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU13 */
    using PWR_PUCRC_PU13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU14 */
    using PWR_PUCRC_PU14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU15 */
    using PWR_PUCRC_PU15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PWR port C pull-down control register */
    using PWR_PDCRC = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x64, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD0 field */
    using PWR_PDCRC_PD0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD1 field */
    using PWR_PDCRC_PD1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD2 field */
    using PWR_PDCRC_PD2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD3 field */
    using PWR_PDCRC_PD3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD4 field */
    using PWR_PDCRC_PD4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD5 field */
    using PWR_PDCRC_PD5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD6 field */
    using PWR_PDCRC_PD6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD7 field */
    using PWR_PDCRC_PD7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD8 field */
    using PWR_PDCRC_PD8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD9 field */
    using PWR_PDCRC_PD9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD10 field */
    using PWR_PDCRC_PD10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD11 field */
    using PWR_PDCRC_PD11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD12 field */
    using PWR_PDCRC_PD12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD13 field */
    using PWR_PDCRC_PD13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD14 field */
    using PWR_PDCRC_PD14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD15 field */
    using PWR_PDCRC_PD15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PWR port D pull-up control register */
    using PWR_PUCRD = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x68, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU0 field */
    using PWR_PUCRD_PU0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU1 field */
    using PWR_PUCRD_PU1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU2 field */
    using PWR_PUCRD_PU2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU3 field */
    using PWR_PUCRD_PU3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU4 field */
    using PWR_PUCRD_PU4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU5 field */
    using PWR_PUCRD_PU5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU6 field */
    using PWR_PUCRD_PU6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU7 field */
    using PWR_PUCRD_PU7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU8 field */
    using PWR_PUCRD_PU8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU9 field */
    using PWR_PUCRD_PU9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU10 field */
    using PWR_PUCRD_PU10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU11 field */
    using PWR_PUCRD_PU11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU12 field */
    using PWR_PUCRD_PU12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU13 field */
    using PWR_PUCRD_PU13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU14 field */
    using PWR_PUCRD_PU14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU15 field */
    using PWR_PUCRD_PU15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PWR port D pull-down control register */
    using PWR_PDCRD = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD0 field */
    using PWR_PDCRD_PD0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD1 field */
    using PWR_PDCRD_PD1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD2 field */
    using PWR_PDCRD_PD2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD3 field */
    using PWR_PDCRD_PD3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD4 field */
    using PWR_PDCRD_PD4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD5 field */
    using PWR_PDCRD_PD5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD6 field */
    using PWR_PDCRD_PD6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD7 field */
    using PWR_PDCRD_PD7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD8 field */
    using PWR_PDCRD_PD8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD9 field */
    using PWR_PDCRD_PD9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD10 field */
    using PWR_PDCRD_PD10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD11 field */
    using PWR_PDCRD_PD11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD12 field */
    using PWR_PDCRD_PD12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD13 field */
    using PWR_PDCRD_PD13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD14 field */
    using PWR_PDCRD_PD14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD15 field */
    using PWR_PDCRD_PD15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PWR port E pull-up control register */
    using PWR_PUCRE = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x70, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU0 field */
    using PWR_PUCRE_PU0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU1 field */
    using PWR_PUCRE_PU1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU2 field */
    using PWR_PUCRE_PU2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU3 field */
    using PWR_PUCRE_PU3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU4 field */
    using PWR_PUCRE_PU4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU5 field */
    using PWR_PUCRE_PU5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU6 field */
    using PWR_PUCRE_PU6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU7 field */
    using PWR_PUCRE_PU7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU8 field */
    using PWR_PUCRE_PU8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU9 field */
    using PWR_PUCRE_PU9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU10 field */
    using PWR_PUCRE_PU10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU11 field */
    using PWR_PUCRE_PU11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU12 field */
    using PWR_PUCRE_PU12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU13 field */
    using PWR_PUCRE_PU13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU14 field */
    using PWR_PUCRE_PU14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU15 field */
    using PWR_PUCRE_PU15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PWR port E pull-down control register */
    using PWR_PDCRE = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x74, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD0 field */
    using PWR_PDCRE_PD0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD1 field */
    using PWR_PDCRE_PD1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD2 field */
    using PWR_PDCRE_PD2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD3 field */
    using PWR_PDCRE_PD3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD4 field */
    using PWR_PDCRE_PD4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD5 field */
    using PWR_PDCRE_PD5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD6 field */
    using PWR_PDCRE_PD6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD7 field */
    using PWR_PDCRE_PD7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD8 field */
    using PWR_PDCRE_PD8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD9 field */
    using PWR_PDCRE_PD9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD10 field */
    using PWR_PDCRE_PD10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD11 field */
    using PWR_PDCRE_PD11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD12 field */
    using PWR_PDCRE_PD12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD13 field */
    using PWR_PDCRE_PD13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD14 field */
    using PWR_PDCRE_PD14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD15 field */
    using PWR_PDCRE_PD15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PWR port F pull-up control register */
    using PWR_PUCRF = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x78, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU0 field */
    using PWR_PUCRF_PU0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU1 field */
    using PWR_PUCRF_PU1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU2 field */
    using PWR_PUCRF_PU2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU3 field */
    using PWR_PUCRF_PU3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU4 field */
    using PWR_PUCRF_PU4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU5 field */
    using PWR_PUCRF_PU5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU6 field */
    using PWR_PUCRF_PU6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU7 field */
    using PWR_PUCRF_PU7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU8 field */
    using PWR_PUCRF_PU8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU9 field */
    using PWR_PUCRF_PU9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU10 field */
    using PWR_PUCRF_PU10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU11 field */
    using PWR_PUCRF_PU11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU12 field */
    using PWR_PUCRF_PU12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU13 field */
    using PWR_PUCRF_PU13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU14 field */
    using PWR_PUCRF_PU14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU15 field */
    using PWR_PUCRF_PU15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PWR port F pull-down control register */
    using PWR_PDCRF = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD0 field */
    using PWR_PDCRF_PD0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD1 field */
    using PWR_PDCRF_PD1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD2 field */
    using PWR_PDCRF_PD2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD3 field */
    using PWR_PDCRF_PD3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD4 field */
    using PWR_PDCRF_PD4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD5 field */
    using PWR_PDCRF_PD5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD6 field */
    using PWR_PDCRF_PD6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD7 field */
    using PWR_PDCRF_PD7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD8 field */
    using PWR_PDCRF_PD8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD9 field */
    using PWR_PDCRF_PD9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD10 field */
    using PWR_PDCRF_PD10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD11 field */
    using PWR_PDCRF_PD11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD12 field */
    using PWR_PDCRF_PD12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD13 field */
    using PWR_PDCRF_PD13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD14 field */
    using PWR_PDCRF_PD14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD15 field */
    using PWR_PDCRF_PD15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PWR port G pull-up control register */
    using PWR_PUCRG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x80, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU0 field */
    using PWR_PUCRG_PU0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU1 field */
    using PWR_PUCRG_PU1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU2 field */
    using PWR_PUCRG_PU2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU3 field */
    using PWR_PUCRG_PU3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU4 field */
    using PWR_PUCRG_PU4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU5 field */
    using PWR_PUCRG_PU5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU6 field */
    using PWR_PUCRG_PU6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU7 field */
    using PWR_PUCRG_PU7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU8 field */
    using PWR_PUCRG_PU8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU9 field */
    using PWR_PUCRG_PU9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU10 field */
    using PWR_PUCRG_PU10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU11 field */
    using PWR_PUCRG_PU11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU12 field */
    using PWR_PUCRG_PU12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU13 field */
    using PWR_PUCRG_PU13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU14 field */
    using PWR_PUCRG_PU14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU15 field */
    using PWR_PUCRG_PU15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PWR port G pull-down control register */
    using PWR_PDCRG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x84, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD0 field */
    using PWR_PDCRG_PD0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD1 field */
    using PWR_PDCRG_PD1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD2 field */
    using PWR_PDCRG_PD2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD3 field */
    using PWR_PDCRG_PD3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD4 field */
    using PWR_PDCRG_PD4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD5 field */
    using PWR_PDCRG_PD5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD6 field */
    using PWR_PDCRG_PD6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD7 field */
    using PWR_PDCRG_PD7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD8 field */
    using PWR_PDCRG_PD8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD9 field */
    using PWR_PDCRG_PD9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD10 field */
    using PWR_PDCRG_PD10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD11 field */
    using PWR_PDCRG_PD11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD12 field */
    using PWR_PDCRG_PD12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD13 field */
    using PWR_PDCRG_PD13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD14 field */
    using PWR_PDCRG_PD14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD15 field */
    using PWR_PDCRG_PD15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PWR port H pull-up control register */
    using PWR_PUCRH = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x88, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU0 field */
    using PWR_PUCRH_PU0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU1 field */
    using PWR_PUCRH_PU1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU2 field */
    using PWR_PUCRH_PU2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU3 field */
    using PWR_PUCRH_PU3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU4 field */
    using PWR_PUCRH_PU4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU5 field */
    using PWR_PUCRH_PU5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU6 field */
    using PWR_PUCRH_PU6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU7 field */
    using PWR_PUCRH_PU7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU8 field */
    using PWR_PUCRH_PU8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU9 field */
    using PWR_PUCRH_PU9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU10 field */
    using PWR_PUCRH_PU10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU11 field */
    using PWR_PUCRH_PU11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU12 field */
    using PWR_PUCRH_PU12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU13 field */
    using PWR_PUCRH_PU13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU14 field */
    using PWR_PUCRH_PU14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU15 field */
    using PWR_PUCRH_PU15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PWR port H pull-down control register */
    using PWR_PDCRH = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD0 field */
    using PWR_PDCRH_PD0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD1 field */
    using PWR_PDCRH_PD1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD2 field */
    using PWR_PDCRH_PD2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD3 field */
    using PWR_PDCRH_PD3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD4 field */
    using PWR_PDCRH_PD4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD5 field */
    using PWR_PDCRH_PD5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD6 field */
    using PWR_PDCRH_PD6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD7 field */
    using PWR_PDCRH_PD7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD8 field */
    using PWR_PDCRH_PD8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD9 field */
    using PWR_PDCRH_PD9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD10 field */
    using PWR_PDCRH_PD10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD11 field */
    using PWR_PDCRH_PD11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD12 field */
    using PWR_PDCRH_PD12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD13 field */
    using PWR_PDCRH_PD13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD14 field */
    using PWR_PDCRH_PD14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD15 field */
    using PWR_PDCRH_PD15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PWR port I pull-up control register */
    using PWR_PUCRI = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x90, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU0 field */
    using PWR_PUCRI_PU0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU1 field */
    using PWR_PUCRI_PU1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU2 field */
    using PWR_PUCRI_PU2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU3 field */
    using PWR_PUCRI_PU3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU4 field */
    using PWR_PUCRI_PU4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU5 field */
    using PWR_PUCRI_PU5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU6 field */
    using PWR_PUCRI_PU6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU7 field */
    using PWR_PUCRI_PU7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU8 field */
    using PWR_PUCRI_PU8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU9 field */
    using PWR_PUCRI_PU9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU10 field */
    using PWR_PUCRI_PU10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU11 field */
    using PWR_PUCRI_PU11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU12 field */
    using PWR_PUCRI_PU12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU13 field */
    using PWR_PUCRI_PU13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU14 field */
    using PWR_PUCRI_PU14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU15 field */
    using PWR_PUCRI_PU15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PWR port I pull-down control register */
    using PWR_PDCRI = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x94, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD0 field */
    using PWR_PDCRI_PD0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD1 field */
    using PWR_PDCRI_PD1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD2 field */
    using PWR_PDCRI_PD2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD3 field */
    using PWR_PDCRI_PD3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD4 field */
    using PWR_PDCRI_PD4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD5 field */
    using PWR_PDCRI_PD5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD6 field */
    using PWR_PDCRI_PD6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD7 field */
    using PWR_PDCRI_PD7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD8 field */
    using PWR_PDCRI_PD8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD9 field */
    using PWR_PDCRI_PD9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD10 field */
    using PWR_PDCRI_PD10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD11 field */
    using PWR_PDCRI_PD11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD12 field */
    using PWR_PDCRI_PD12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD13 field */
    using PWR_PDCRI_PD13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD14 field */
    using PWR_PDCRI_PD14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD15 field */
    using PWR_PDCRI_PD15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PWR port J pull-up control register */
    using PWR_PUCRJ = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x98, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU0 field */
    using PWR_PUCRJ_PU0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU1 field */
    using PWR_PUCRJ_PU1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU2 field */
    using PWR_PUCRJ_PU2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU3 field */
    using PWR_PUCRJ_PU3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU4 field */
    using PWR_PUCRJ_PU4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU5 field */
    using PWR_PUCRJ_PU5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU6 field */
    using PWR_PUCRJ_PU6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU7 field */
    using PWR_PUCRJ_PU7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU8 field */
    using PWR_PUCRJ_PU8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU9 field */
    using PWR_PUCRJ_PU9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU10 field */
    using PWR_PUCRJ_PU10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PU11 field */
    using PWR_PUCRJ_PU11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PWR port J pull-down control register */
    using PWR_PDCRJ = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD0 field */
    using PWR_PDCRJ_PD0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD1 field */
    using PWR_PDCRJ_PD1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD2 field */
    using PWR_PDCRJ_PD2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD3 field */
    using PWR_PDCRJ_PD3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD4 field */
    using PWR_PDCRJ_PD4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD5 field */
    using PWR_PDCRJ_PD5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD6 field */
    using PWR_PDCRJ_PD6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD7 field */
    using PWR_PDCRJ_PD7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD8 field */
    using PWR_PDCRJ_PD8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD9 field */
    using PWR_PDCRJ_PD9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD10 field */
    using PWR_PDCRJ_PD10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PD11 field */
    using PWR_PDCRJ_PD11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PWR control register 4 */
    using PWR_CR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SRAM1PDS4 field */
    using PWR_CR4_SRAM1PDS4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SRAM1PDS5 field */
    using PWR_CR4_SRAM1PDS5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SRAM1PDS6 field */
    using PWR_CR4_SRAM1PDS6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SRAM1PDS7 field */
    using PWR_CR4_SRAM1PDS7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SRAM1PDS8 field */
    using PWR_CR4_SRAM1PDS8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SRAM1PDS9 field */
    using PWR_CR4_SRAM1PDS9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SRAM1PDS10 field */
    using PWR_CR4_SRAM1PDS10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SRAM1PDS11 field */
    using PWR_CR4_SRAM1PDS11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SRAM1PDS12 field */
    using PWR_CR4_SRAM1PDS12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SRAM3PDS9 field */
    using PWR_CR4_SRAM3PDS9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SRAM3PDS10 field */
    using PWR_CR4_SRAM3PDS10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SRAM3PDS11 field */
    using PWR_CR4_SRAM3PDS11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SRAM3PDS12 field */
    using PWR_CR4_SRAM3PDS12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SRAM3PDS13 field */
    using PWR_CR4_SRAM3PDS13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SRAM5PDS1 field */
    using PWR_CR4_SRAM5PDS1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SRAM5PDS2 field */
    using PWR_CR4_SRAM5PDS2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SRAM5PDS3 field */
    using PWR_CR4_SRAM5PDS3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SRAM5PDS4 field */
    using PWR_CR4_SRAM5PDS4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SRAM5PDS5 field */
    using PWR_CR4_SRAM5PDS5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SRAM5PDS6 field */
    using PWR_CR4_SRAM5PDS6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SRAM5PDS7 field */
    using PWR_CR4_SRAM5PDS7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SRAM5PDS8 field */
    using PWR_CR4_SRAM5PDS8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SRAM5PDS9 field */
    using PWR_CR4_SRAM5PDS9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SRAM5PDS10 field */
    using PWR_CR4_SRAM5PDS10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SRAM5PDS11 field */
    using PWR_CR4_SRAM5PDS11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SRAM5PDS12 field */
    using PWR_CR4_SRAM5PDS12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SRAM5PDS13 field */
    using PWR_CR4_SRAM5PDS13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
