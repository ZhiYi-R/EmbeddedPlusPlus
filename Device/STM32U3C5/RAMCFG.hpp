/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32U3C5_RAMCFG_HPP
#define EMBEDDED_PP_STM32U3C5_RAMCFG_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief RAMCFG register block */
namespace STM32U3C5::RAMCFG {

    /** @brief RAMCFG memory 1 interrupt status register */
    using RAMCFG_M1ISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Parity error detected */
    using RAMCFG_M1ISR_PED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No Parity error detected (value: 0)
     *          - B_0x1: Parity error detected (value: 1)
     */
        /** @brief No Parity error detected */
    constexpr std::uint32_t RAMCFG_M1ISR_PED_B_0x0 = 0;
        /** @brief Parity error detected */
    constexpr std::uint32_t RAMCFG_M1ISR_PED_B_0x1 = 1;

    /** @brief SRAM busy with erase operation */
    using RAMCFG_M1ISR_SRAMBUSY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No erase operation ongoing (value: 0)
     *          - B_0x1: Erase operation ongoing (value: 1)
     */
        /** @brief No erase operation ongoing */
    constexpr std::uint32_t RAMCFG_M1ISR_SRAMBUSY_B_0x0 = 0;
        /** @brief Erase operation ongoing */
    constexpr std::uint32_t RAMCFG_M1ISR_SRAMBUSY_B_0x1 = 1;

    /** @brief RAMCFG memory 1 erase key register */
    using RAMCFG_M1ERKEYR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Erase write protection key */
    using RAMCFG_M1ERKEYR_ERASEKEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RAMCFG memory 2 interrupt enable register */
    using RAMCFG_M2IER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Parity error interrupt enable */
    using RAMCFG_M2IER_PEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Parity error interrupt disabled (value: 0)
     *          - B_0x1: Parity error interrupt enabled (value: 1)
     */
        /** @brief Parity error interrupt disabled */
    constexpr std::uint32_t RAMCFG_M2IER_PEIE_B_0x0 = 0;
        /** @brief Parity error interrupt enabled */
    constexpr std::uint32_t RAMCFG_M2IER_PEIE_B_0x1 = 1;

    /** @brief Parity error NMI */
    using RAMCFG_M2IER_PENMI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: NMI not generated in case of Parity error (value: 0)
     *          - B_0x1: NMI generated in case of Parity error (value: 1)
     */
        /** @brief NMI not generated in case of Parity error */
    constexpr std::uint32_t RAMCFG_M2IER_PENMI_B_0x0 = 0;
        /** @brief NMI generated in case of Parity error */
    constexpr std::uint32_t RAMCFG_M2IER_PENMI_B_0x1 = 1;

    /** @brief RAMCFG memory 2 interrupt status register */
    using RAMCFG_M2ISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Parity error detected */
    using RAMCFG_M2ISR_PED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No Parity error detected (value: 0)
     *          - B_0x1: Parity error detected (value: 1)
     */
        /** @brief No Parity error detected */
    constexpr std::uint32_t RAMCFG_M2ISR_PED_B_0x0 = 0;
        /** @brief Parity error detected */
    constexpr std::uint32_t RAMCFG_M2ISR_PED_B_0x1 = 1;

    /** @brief SRAM busy with erase operation */
    using RAMCFG_M2ISR_SRAMBUSY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No erase operation ongoing (value: 0)
     *          - B_0x1: Erase operation ongoing (value: 1)
     */
        /** @brief No erase operation ongoing */
    constexpr std::uint32_t RAMCFG_M2ISR_SRAMBUSY_B_0x0 = 0;
        /** @brief Erase operation ongoing */
    constexpr std::uint32_t RAMCFG_M2ISR_SRAMBUSY_B_0x1 = 1;

    /** @brief RAMCFG memory 2 parity error address register */
    using RAMCFG_M2PEAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Parity error address */
    using RAMCFG_M2PEAR_PEA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RAMCFG memory 2 interrupt clear register */
    using RAMCFG_M2ICR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear parity error detected */
    using RAMCFG_M2ICR_CPED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RAMCFG memory 2 write protection register 1 */
    using RAMCFG_M2WPR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x58, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SRAM2 1-Kbyte page y write protection */
    using RAMCFG_M2WPR1_P0WP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write protection of SRAM2 1-Kbyte page y is disabled. (value: 0)
     *          - B_0x1: Write protection of SRAM2 1-Kbyte page y is enabled. (value: 1)
     */
        /** @brief Write protection of SRAM2 1-Kbyte page y is disabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P0WP_B_0x0 = 0;
        /** @brief Write protection of SRAM2 1-Kbyte page y is enabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P0WP_B_0x1 = 1;

    /** @brief SRAM2 1-Kbyte page y write protection */
    using RAMCFG_M2WPR1_P1WP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write protection of SRAM2 1-Kbyte page y is disabled. (value: 0)
     *          - B_0x1: Write protection of SRAM2 1-Kbyte page y is enabled. (value: 1)
     */
        /** @brief Write protection of SRAM2 1-Kbyte page y is disabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P1WP_B_0x0 = 0;
        /** @brief Write protection of SRAM2 1-Kbyte page y is enabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P1WP_B_0x1 = 1;

    /** @brief SRAM2 1-Kbyte page y write protection */
    using RAMCFG_M2WPR1_P2WP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write protection of SRAM2 1-Kbyte page y is disabled. (value: 0)
     *          - B_0x1: Write protection of SRAM2 1-Kbyte page y is enabled. (value: 1)
     */
        /** @brief Write protection of SRAM2 1-Kbyte page y is disabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P2WP_B_0x0 = 0;
        /** @brief Write protection of SRAM2 1-Kbyte page y is enabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P2WP_B_0x1 = 1;

    /** @brief SRAM2 1-Kbyte page y write protection */
    using RAMCFG_M2WPR1_P3WP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write protection of SRAM2 1-Kbyte page y is disabled. (value: 0)
     *          - B_0x1: Write protection of SRAM2 1-Kbyte page y is enabled. (value: 1)
     */
        /** @brief Write protection of SRAM2 1-Kbyte page y is disabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P3WP_B_0x0 = 0;
        /** @brief Write protection of SRAM2 1-Kbyte page y is enabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P3WP_B_0x1 = 1;

    /** @brief SRAM2 1-Kbyte page y write protection */
    using RAMCFG_M2WPR1_P4WP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write protection of SRAM2 1-Kbyte page y is disabled. (value: 0)
     *          - B_0x1: Write protection of SRAM2 1-Kbyte page y is enabled. (value: 1)
     */
        /** @brief Write protection of SRAM2 1-Kbyte page y is disabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P4WP_B_0x0 = 0;
        /** @brief Write protection of SRAM2 1-Kbyte page y is enabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P4WP_B_0x1 = 1;

    /** @brief SRAM2 1-Kbyte page y write protection */
    using RAMCFG_M2WPR1_P5WP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write protection of SRAM2 1-Kbyte page y is disabled. (value: 0)
     *          - B_0x1: Write protection of SRAM2 1-Kbyte page y is enabled. (value: 1)
     */
        /** @brief Write protection of SRAM2 1-Kbyte page y is disabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P5WP_B_0x0 = 0;
        /** @brief Write protection of SRAM2 1-Kbyte page y is enabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P5WP_B_0x1 = 1;

    /** @brief SRAM2 1-Kbyte page y write protection */
    using RAMCFG_M2WPR1_P6WP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write protection of SRAM2 1-Kbyte page y is disabled. (value: 0)
     *          - B_0x1: Write protection of SRAM2 1-Kbyte page y is enabled. (value: 1)
     */
        /** @brief Write protection of SRAM2 1-Kbyte page y is disabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P6WP_B_0x0 = 0;
        /** @brief Write protection of SRAM2 1-Kbyte page y is enabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P6WP_B_0x1 = 1;

    /** @brief SRAM2 1-Kbyte page y write protection */
    using RAMCFG_M2WPR1_P7WP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write protection of SRAM2 1-Kbyte page y is disabled. (value: 0)
     *          - B_0x1: Write protection of SRAM2 1-Kbyte page y is enabled. (value: 1)
     */
        /** @brief Write protection of SRAM2 1-Kbyte page y is disabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P7WP_B_0x0 = 0;
        /** @brief Write protection of SRAM2 1-Kbyte page y is enabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P7WP_B_0x1 = 1;

    /** @brief SRAM2 1-Kbyte page y write protection */
    using RAMCFG_M2WPR1_P8WP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write protection of SRAM2 1-Kbyte page y is disabled. (value: 0)
     *          - B_0x1: Write protection of SRAM2 1-Kbyte page y is enabled. (value: 1)
     */
        /** @brief Write protection of SRAM2 1-Kbyte page y is disabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P8WP_B_0x0 = 0;
        /** @brief Write protection of SRAM2 1-Kbyte page y is enabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P8WP_B_0x1 = 1;

    /** @brief SRAM2 1-Kbyte page y write protection */
    using RAMCFG_M2WPR1_P9WP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write protection of SRAM2 1-Kbyte page y is disabled. (value: 0)
     *          - B_0x1: Write protection of SRAM2 1-Kbyte page y is enabled. (value: 1)
     */
        /** @brief Write protection of SRAM2 1-Kbyte page y is disabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P9WP_B_0x0 = 0;
        /** @brief Write protection of SRAM2 1-Kbyte page y is enabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P9WP_B_0x1 = 1;

    /** @brief SRAM2 1-Kbyte page y write protection */
    using RAMCFG_M2WPR1_P10WP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write protection of SRAM2 1-Kbyte page y is disabled. (value: 0)
     *          - B_0x1: Write protection of SRAM2 1-Kbyte page y is enabled. (value: 1)
     */
        /** @brief Write protection of SRAM2 1-Kbyte page y is disabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P10WP_B_0x0 = 0;
        /** @brief Write protection of SRAM2 1-Kbyte page y is enabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P10WP_B_0x1 = 1;

    /** @brief SRAM2 1-Kbyte page y write protection */
    using RAMCFG_M2WPR1_P11WP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write protection of SRAM2 1-Kbyte page y is disabled. (value: 0)
     *          - B_0x1: Write protection of SRAM2 1-Kbyte page y is enabled. (value: 1)
     */
        /** @brief Write protection of SRAM2 1-Kbyte page y is disabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P11WP_B_0x0 = 0;
        /** @brief Write protection of SRAM2 1-Kbyte page y is enabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P11WP_B_0x1 = 1;

    /** @brief SRAM2 1-Kbyte page y write protection */
    using RAMCFG_M2WPR1_P12WP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write protection of SRAM2 1-Kbyte page y is disabled. (value: 0)
     *          - B_0x1: Write protection of SRAM2 1-Kbyte page y is enabled. (value: 1)
     */
        /** @brief Write protection of SRAM2 1-Kbyte page y is disabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P12WP_B_0x0 = 0;
        /** @brief Write protection of SRAM2 1-Kbyte page y is enabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P12WP_B_0x1 = 1;

    /** @brief SRAM2 1-Kbyte page y write protection */
    using RAMCFG_M2WPR1_P13WP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write protection of SRAM2 1-Kbyte page y is disabled. (value: 0)
     *          - B_0x1: Write protection of SRAM2 1-Kbyte page y is enabled. (value: 1)
     */
        /** @brief Write protection of SRAM2 1-Kbyte page y is disabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P13WP_B_0x0 = 0;
        /** @brief Write protection of SRAM2 1-Kbyte page y is enabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P13WP_B_0x1 = 1;

    /** @brief SRAM2 1-Kbyte page y write protection */
    using RAMCFG_M2WPR1_P14WP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write protection of SRAM2 1-Kbyte page y is disabled. (value: 0)
     *          - B_0x1: Write protection of SRAM2 1-Kbyte page y is enabled. (value: 1)
     */
        /** @brief Write protection of SRAM2 1-Kbyte page y is disabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P14WP_B_0x0 = 0;
        /** @brief Write protection of SRAM2 1-Kbyte page y is enabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P14WP_B_0x1 = 1;

    /** @brief SRAM2 1-Kbyte page y write protection */
    using RAMCFG_M2WPR1_P15WP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write protection of SRAM2 1-Kbyte page y is disabled. (value: 0)
     *          - B_0x1: Write protection of SRAM2 1-Kbyte page y is enabled. (value: 1)
     */
        /** @brief Write protection of SRAM2 1-Kbyte page y is disabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P15WP_B_0x0 = 0;
        /** @brief Write protection of SRAM2 1-Kbyte page y is enabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P15WP_B_0x1 = 1;

    /** @brief SRAM2 1-Kbyte page y write protection */
    using RAMCFG_M2WPR1_P16WP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write protection of SRAM2 1-Kbyte page y is disabled. (value: 0)
     *          - B_0x1: Write protection of SRAM2 1-Kbyte page y is enabled. (value: 1)
     */
        /** @brief Write protection of SRAM2 1-Kbyte page y is disabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P16WP_B_0x0 = 0;
        /** @brief Write protection of SRAM2 1-Kbyte page y is enabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P16WP_B_0x1 = 1;

    /** @brief SRAM2 1-Kbyte page y write protection */
    using RAMCFG_M2WPR1_P17WP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write protection of SRAM2 1-Kbyte page y is disabled. (value: 0)
     *          - B_0x1: Write protection of SRAM2 1-Kbyte page y is enabled. (value: 1)
     */
        /** @brief Write protection of SRAM2 1-Kbyte page y is disabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P17WP_B_0x0 = 0;
        /** @brief Write protection of SRAM2 1-Kbyte page y is enabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P17WP_B_0x1 = 1;

    /** @brief SRAM2 1-Kbyte page y write protection */
    using RAMCFG_M2WPR1_P18WP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write protection of SRAM2 1-Kbyte page y is disabled. (value: 0)
     *          - B_0x1: Write protection of SRAM2 1-Kbyte page y is enabled. (value: 1)
     */
        /** @brief Write protection of SRAM2 1-Kbyte page y is disabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P18WP_B_0x0 = 0;
        /** @brief Write protection of SRAM2 1-Kbyte page y is enabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P18WP_B_0x1 = 1;

    /** @brief SRAM2 1-Kbyte page y write protection */
    using RAMCFG_M2WPR1_P19WP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write protection of SRAM2 1-Kbyte page y is disabled. (value: 0)
     *          - B_0x1: Write protection of SRAM2 1-Kbyte page y is enabled. (value: 1)
     */
        /** @brief Write protection of SRAM2 1-Kbyte page y is disabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P19WP_B_0x0 = 0;
        /** @brief Write protection of SRAM2 1-Kbyte page y is enabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P19WP_B_0x1 = 1;

    /** @brief SRAM2 1-Kbyte page y write protection */
    using RAMCFG_M2WPR1_P20WP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write protection of SRAM2 1-Kbyte page y is disabled. (value: 0)
     *          - B_0x1: Write protection of SRAM2 1-Kbyte page y is enabled. (value: 1)
     */
        /** @brief Write protection of SRAM2 1-Kbyte page y is disabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P20WP_B_0x0 = 0;
        /** @brief Write protection of SRAM2 1-Kbyte page y is enabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P20WP_B_0x1 = 1;

    /** @brief SRAM2 1-Kbyte page y write protection */
    using RAMCFG_M2WPR1_P21WP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write protection of SRAM2 1-Kbyte page y is disabled. (value: 0)
     *          - B_0x1: Write protection of SRAM2 1-Kbyte page y is enabled. (value: 1)
     */
        /** @brief Write protection of SRAM2 1-Kbyte page y is disabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P21WP_B_0x0 = 0;
        /** @brief Write protection of SRAM2 1-Kbyte page y is enabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P21WP_B_0x1 = 1;

    /** @brief SRAM2 1-Kbyte page y write protection */
    using RAMCFG_M2WPR1_P22WP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write protection of SRAM2 1-Kbyte page y is disabled. (value: 0)
     *          - B_0x1: Write protection of SRAM2 1-Kbyte page y is enabled. (value: 1)
     */
        /** @brief Write protection of SRAM2 1-Kbyte page y is disabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P22WP_B_0x0 = 0;
        /** @brief Write protection of SRAM2 1-Kbyte page y is enabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P22WP_B_0x1 = 1;

    /** @brief SRAM2 1-Kbyte page y write protection */
    using RAMCFG_M2WPR1_P23WP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write protection of SRAM2 1-Kbyte page y is disabled. (value: 0)
     *          - B_0x1: Write protection of SRAM2 1-Kbyte page y is enabled. (value: 1)
     */
        /** @brief Write protection of SRAM2 1-Kbyte page y is disabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P23WP_B_0x0 = 0;
        /** @brief Write protection of SRAM2 1-Kbyte page y is enabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P23WP_B_0x1 = 1;

    /** @brief SRAM2 1-Kbyte page y write protection */
    using RAMCFG_M2WPR1_P24WP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write protection of SRAM2 1-Kbyte page y is disabled. (value: 0)
     *          - B_0x1: Write protection of SRAM2 1-Kbyte page y is enabled. (value: 1)
     */
        /** @brief Write protection of SRAM2 1-Kbyte page y is disabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P24WP_B_0x0 = 0;
        /** @brief Write protection of SRAM2 1-Kbyte page y is enabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P24WP_B_0x1 = 1;

    /** @brief SRAM2 1-Kbyte page y write protection */
    using RAMCFG_M2WPR1_P25WP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write protection of SRAM2 1-Kbyte page y is disabled. (value: 0)
     *          - B_0x1: Write protection of SRAM2 1-Kbyte page y is enabled. (value: 1)
     */
        /** @brief Write protection of SRAM2 1-Kbyte page y is disabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P25WP_B_0x0 = 0;
        /** @brief Write protection of SRAM2 1-Kbyte page y is enabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P25WP_B_0x1 = 1;

    /** @brief SRAM2 1-Kbyte page y write protection */
    using RAMCFG_M2WPR1_P26WP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write protection of SRAM2 1-Kbyte page y is disabled. (value: 0)
     *          - B_0x1: Write protection of SRAM2 1-Kbyte page y is enabled. (value: 1)
     */
        /** @brief Write protection of SRAM2 1-Kbyte page y is disabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P26WP_B_0x0 = 0;
        /** @brief Write protection of SRAM2 1-Kbyte page y is enabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P26WP_B_0x1 = 1;

    /** @brief SRAM2 1-Kbyte page y write protection */
    using RAMCFG_M2WPR1_P27WP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write protection of SRAM2 1-Kbyte page y is disabled. (value: 0)
     *          - B_0x1: Write protection of SRAM2 1-Kbyte page y is enabled. (value: 1)
     */
        /** @brief Write protection of SRAM2 1-Kbyte page y is disabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P27WP_B_0x0 = 0;
        /** @brief Write protection of SRAM2 1-Kbyte page y is enabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P27WP_B_0x1 = 1;

    /** @brief SRAM2 1-Kbyte page y write protection */
    using RAMCFG_M2WPR1_P28WP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write protection of SRAM2 1-Kbyte page y is disabled. (value: 0)
     *          - B_0x1: Write protection of SRAM2 1-Kbyte page y is enabled. (value: 1)
     */
        /** @brief Write protection of SRAM2 1-Kbyte page y is disabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P28WP_B_0x0 = 0;
        /** @brief Write protection of SRAM2 1-Kbyte page y is enabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P28WP_B_0x1 = 1;

    /** @brief SRAM2 1-Kbyte page y write protection */
    using RAMCFG_M2WPR1_P29WP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write protection of SRAM2 1-Kbyte page y is disabled. (value: 0)
     *          - B_0x1: Write protection of SRAM2 1-Kbyte page y is enabled. (value: 1)
     */
        /** @brief Write protection of SRAM2 1-Kbyte page y is disabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P29WP_B_0x0 = 0;
        /** @brief Write protection of SRAM2 1-Kbyte page y is enabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P29WP_B_0x1 = 1;

    /** @brief SRAM2 1-Kbyte page y write protection */
    using RAMCFG_M2WPR1_P30WP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write protection of SRAM2 1-Kbyte page y is disabled. (value: 0)
     *          - B_0x1: Write protection of SRAM2 1-Kbyte page y is enabled. (value: 1)
     */
        /** @brief Write protection of SRAM2 1-Kbyte page y is disabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P30WP_B_0x0 = 0;
        /** @brief Write protection of SRAM2 1-Kbyte page y is enabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P30WP_B_0x1 = 1;

    /** @brief SRAM2 1-Kbyte page y write protection */
    using RAMCFG_M2WPR1_P31WP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write protection of SRAM2 1-Kbyte page y is disabled. (value: 0)
     *          - B_0x1: Write protection of SRAM2 1-Kbyte page y is enabled. (value: 1)
     */
        /** @brief Write protection of SRAM2 1-Kbyte page y is disabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P31WP_B_0x0 = 0;
        /** @brief Write protection of SRAM2 1-Kbyte page y is enabled. */
    constexpr std::uint32_t RAMCFG_M2WPR1_P31WP_B_0x1 = 1;

    /** @brief RAMCFG memory 2 write protection register 2 */
    using RAMCFG_M2WPR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SRAM2 1-Kbyte page y write protection */
    using RAMCFG_M2WPR2_P32WP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write protection of SRAM2 1-Kbyte page y is disabled. (value: 0)
     *          - B_0x1: Write protection of SRAM2 1-Kbyte page y is enabled. (value: 1)
     */
        /** @brief Write protection of SRAM2 1-Kbyte page y is disabled. */
    constexpr std::uint32_t RAMCFG_M2WPR2_P32WP_B_0x0 = 0;
        /** @brief Write protection of SRAM2 1-Kbyte page y is enabled. */
    constexpr std::uint32_t RAMCFG_M2WPR2_P32WP_B_0x1 = 1;

    /** @brief SRAM2 1-Kbyte page y write protection */
    using RAMCFG_M2WPR2_P33WP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write protection of SRAM2 1-Kbyte page y is disabled. (value: 0)
     *          - B_0x1: Write protection of SRAM2 1-Kbyte page y is enabled. (value: 1)
     */
        /** @brief Write protection of SRAM2 1-Kbyte page y is disabled. */
    constexpr std::uint32_t RAMCFG_M2WPR2_P33WP_B_0x0 = 0;
        /** @brief Write protection of SRAM2 1-Kbyte page y is enabled. */
    constexpr std::uint32_t RAMCFG_M2WPR2_P33WP_B_0x1 = 1;

    /** @brief SRAM2 1-Kbyte page y write protection */
    using RAMCFG_M2WPR2_P34WP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write protection of SRAM2 1-Kbyte page y is disabled. (value: 0)
     *          - B_0x1: Write protection of SRAM2 1-Kbyte page y is enabled. (value: 1)
     */
        /** @brief Write protection of SRAM2 1-Kbyte page y is disabled. */
    constexpr std::uint32_t RAMCFG_M2WPR2_P34WP_B_0x0 = 0;
        /** @brief Write protection of SRAM2 1-Kbyte page y is enabled. */
    constexpr std::uint32_t RAMCFG_M2WPR2_P34WP_B_0x1 = 1;

    /** @brief SRAM2 1-Kbyte page y write protection */
    using RAMCFG_M2WPR2_P35WP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write protection of SRAM2 1-Kbyte page y is disabled. (value: 0)
     *          - B_0x1: Write protection of SRAM2 1-Kbyte page y is enabled. (value: 1)
     */
        /** @brief Write protection of SRAM2 1-Kbyte page y is disabled. */
    constexpr std::uint32_t RAMCFG_M2WPR2_P35WP_B_0x0 = 0;
        /** @brief Write protection of SRAM2 1-Kbyte page y is enabled. */
    constexpr std::uint32_t RAMCFG_M2WPR2_P35WP_B_0x1 = 1;

    /** @brief SRAM2 1-Kbyte page y write protection */
    using RAMCFG_M2WPR2_P36WP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write protection of SRAM2 1-Kbyte page y is disabled. (value: 0)
     *          - B_0x1: Write protection of SRAM2 1-Kbyte page y is enabled. (value: 1)
     */
        /** @brief Write protection of SRAM2 1-Kbyte page y is disabled. */
    constexpr std::uint32_t RAMCFG_M2WPR2_P36WP_B_0x0 = 0;
        /** @brief Write protection of SRAM2 1-Kbyte page y is enabled. */
    constexpr std::uint32_t RAMCFG_M2WPR2_P36WP_B_0x1 = 1;

    /** @brief SRAM2 1-Kbyte page y write protection */
    using RAMCFG_M2WPR2_P37WP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write protection of SRAM2 1-Kbyte page y is disabled. (value: 0)
     *          - B_0x1: Write protection of SRAM2 1-Kbyte page y is enabled. (value: 1)
     */
        /** @brief Write protection of SRAM2 1-Kbyte page y is disabled. */
    constexpr std::uint32_t RAMCFG_M2WPR2_P37WP_B_0x0 = 0;
        /** @brief Write protection of SRAM2 1-Kbyte page y is enabled. */
    constexpr std::uint32_t RAMCFG_M2WPR2_P37WP_B_0x1 = 1;

    /** @brief SRAM2 1-Kbyte page y write protection */
    using RAMCFG_M2WPR2_P38WP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write protection of SRAM2 1-Kbyte page y is disabled. (value: 0)
     *          - B_0x1: Write protection of SRAM2 1-Kbyte page y is enabled. (value: 1)
     */
        /** @brief Write protection of SRAM2 1-Kbyte page y is disabled. */
    constexpr std::uint32_t RAMCFG_M2WPR2_P38WP_B_0x0 = 0;
        /** @brief Write protection of SRAM2 1-Kbyte page y is enabled. */
    constexpr std::uint32_t RAMCFG_M2WPR2_P38WP_B_0x1 = 1;

    /** @brief SRAM2 1-Kbyte page y write protection */
    using RAMCFG_M2WPR2_P39WP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write protection of SRAM2 1-Kbyte page y is disabled. (value: 0)
     *          - B_0x1: Write protection of SRAM2 1-Kbyte page y is enabled. (value: 1)
     */
        /** @brief Write protection of SRAM2 1-Kbyte page y is disabled. */
    constexpr std::uint32_t RAMCFG_M2WPR2_P39WP_B_0x0 = 0;
        /** @brief Write protection of SRAM2 1-Kbyte page y is enabled. */
    constexpr std::uint32_t RAMCFG_M2WPR2_P39WP_B_0x1 = 1;

    /** @brief SRAM2 1-Kbyte page y write protection */
    using RAMCFG_M2WPR2_P40WP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write protection of SRAM2 1-Kbyte page y is disabled. (value: 0)
     *          - B_0x1: Write protection of SRAM2 1-Kbyte page y is enabled. (value: 1)
     */
        /** @brief Write protection of SRAM2 1-Kbyte page y is disabled. */
    constexpr std::uint32_t RAMCFG_M2WPR2_P40WP_B_0x0 = 0;
        /** @brief Write protection of SRAM2 1-Kbyte page y is enabled. */
    constexpr std::uint32_t RAMCFG_M2WPR2_P40WP_B_0x1 = 1;

    /** @brief SRAM2 1-Kbyte page y write protection */
    using RAMCFG_M2WPR2_P41WP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write protection of SRAM2 1-Kbyte page y is disabled. (value: 0)
     *          - B_0x1: Write protection of SRAM2 1-Kbyte page y is enabled. (value: 1)
     */
        /** @brief Write protection of SRAM2 1-Kbyte page y is disabled. */
    constexpr std::uint32_t RAMCFG_M2WPR2_P41WP_B_0x0 = 0;
        /** @brief Write protection of SRAM2 1-Kbyte page y is enabled. */
    constexpr std::uint32_t RAMCFG_M2WPR2_P41WP_B_0x1 = 1;

    /** @brief SRAM2 1-Kbyte page y write protection */
    using RAMCFG_M2WPR2_P42WP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write protection of SRAM2 1-Kbyte page y is disabled. (value: 0)
     *          - B_0x1: Write protection of SRAM2 1-Kbyte page y is enabled. (value: 1)
     */
        /** @brief Write protection of SRAM2 1-Kbyte page y is disabled. */
    constexpr std::uint32_t RAMCFG_M2WPR2_P42WP_B_0x0 = 0;
        /** @brief Write protection of SRAM2 1-Kbyte page y is enabled. */
    constexpr std::uint32_t RAMCFG_M2WPR2_P42WP_B_0x1 = 1;

    /** @brief SRAM2 1-Kbyte page y write protection */
    using RAMCFG_M2WPR2_P43WP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write protection of SRAM2 1-Kbyte page y is disabled. (value: 0)
     *          - B_0x1: Write protection of SRAM2 1-Kbyte page y is enabled. (value: 1)
     */
        /** @brief Write protection of SRAM2 1-Kbyte page y is disabled. */
    constexpr std::uint32_t RAMCFG_M2WPR2_P43WP_B_0x0 = 0;
        /** @brief Write protection of SRAM2 1-Kbyte page y is enabled. */
    constexpr std::uint32_t RAMCFG_M2WPR2_P43WP_B_0x1 = 1;

    /** @brief SRAM2 1-Kbyte page y write protection */
    using RAMCFG_M2WPR2_P44WP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write protection of SRAM2 1-Kbyte page y is disabled. (value: 0)
     *          - B_0x1: Write protection of SRAM2 1-Kbyte page y is enabled. (value: 1)
     */
        /** @brief Write protection of SRAM2 1-Kbyte page y is disabled. */
    constexpr std::uint32_t RAMCFG_M2WPR2_P44WP_B_0x0 = 0;
        /** @brief Write protection of SRAM2 1-Kbyte page y is enabled. */
    constexpr std::uint32_t RAMCFG_M2WPR2_P44WP_B_0x1 = 1;

    /** @brief SRAM2 1-Kbyte page y write protection */
    using RAMCFG_M2WPR2_P45WP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write protection of SRAM2 1-Kbyte page y is disabled. (value: 0)
     *          - B_0x1: Write protection of SRAM2 1-Kbyte page y is enabled. (value: 1)
     */
        /** @brief Write protection of SRAM2 1-Kbyte page y is disabled. */
    constexpr std::uint32_t RAMCFG_M2WPR2_P45WP_B_0x0 = 0;
        /** @brief Write protection of SRAM2 1-Kbyte page y is enabled. */
    constexpr std::uint32_t RAMCFG_M2WPR2_P45WP_B_0x1 = 1;

    /** @brief SRAM2 1-Kbyte page y write protection */
    using RAMCFG_M2WPR2_P46WP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write protection of SRAM2 1-Kbyte page y is disabled. (value: 0)
     *          - B_0x1: Write protection of SRAM2 1-Kbyte page y is enabled. (value: 1)
     */
        /** @brief Write protection of SRAM2 1-Kbyte page y is disabled. */
    constexpr std::uint32_t RAMCFG_M2WPR2_P46WP_B_0x0 = 0;
        /** @brief Write protection of SRAM2 1-Kbyte page y is enabled. */
    constexpr std::uint32_t RAMCFG_M2WPR2_P46WP_B_0x1 = 1;

    /** @brief SRAM2 1-Kbyte page y write protection */
    using RAMCFG_M2WPR2_P47WP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write protection of SRAM2 1-Kbyte page y is disabled. (value: 0)
     *          - B_0x1: Write protection of SRAM2 1-Kbyte page y is enabled. (value: 1)
     */
        /** @brief Write protection of SRAM2 1-Kbyte page y is disabled. */
    constexpr std::uint32_t RAMCFG_M2WPR2_P47WP_B_0x0 = 0;
        /** @brief Write protection of SRAM2 1-Kbyte page y is enabled. */
    constexpr std::uint32_t RAMCFG_M2WPR2_P47WP_B_0x1 = 1;

    /** @brief SRAM2 1-Kbyte page y write protection */
    using RAMCFG_M2WPR2_P48WP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write protection of SRAM2 1-Kbyte page y is disabled. (value: 0)
     *          - B_0x1: Write protection of SRAM2 1-Kbyte page y is enabled. (value: 1)
     */
        /** @brief Write protection of SRAM2 1-Kbyte page y is disabled. */
    constexpr std::uint32_t RAMCFG_M2WPR2_P48WP_B_0x0 = 0;
        /** @brief Write protection of SRAM2 1-Kbyte page y is enabled. */
    constexpr std::uint32_t RAMCFG_M2WPR2_P48WP_B_0x1 = 1;

    /** @brief SRAM2 1-Kbyte page y write protection */
    using RAMCFG_M2WPR2_P49WP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write protection of SRAM2 1-Kbyte page y is disabled. (value: 0)
     *          - B_0x1: Write protection of SRAM2 1-Kbyte page y is enabled. (value: 1)
     */
        /** @brief Write protection of SRAM2 1-Kbyte page y is disabled. */
    constexpr std::uint32_t RAMCFG_M2WPR2_P49WP_B_0x0 = 0;
        /** @brief Write protection of SRAM2 1-Kbyte page y is enabled. */
    constexpr std::uint32_t RAMCFG_M2WPR2_P49WP_B_0x1 = 1;

    /** @brief SRAM2 1-Kbyte page y write protection */
    using RAMCFG_M2WPR2_P50WP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write protection of SRAM2 1-Kbyte page y is disabled. (value: 0)
     *          - B_0x1: Write protection of SRAM2 1-Kbyte page y is enabled. (value: 1)
     */
        /** @brief Write protection of SRAM2 1-Kbyte page y is disabled. */
    constexpr std::uint32_t RAMCFG_M2WPR2_P50WP_B_0x0 = 0;
        /** @brief Write protection of SRAM2 1-Kbyte page y is enabled. */
    constexpr std::uint32_t RAMCFG_M2WPR2_P50WP_B_0x1 = 1;

    /** @brief SRAM2 1-Kbyte page y write protection */
    using RAMCFG_M2WPR2_P51WP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write protection of SRAM2 1-Kbyte page y is disabled. (value: 0)
     *          - B_0x1: Write protection of SRAM2 1-Kbyte page y is enabled. (value: 1)
     */
        /** @brief Write protection of SRAM2 1-Kbyte page y is disabled. */
    constexpr std::uint32_t RAMCFG_M2WPR2_P51WP_B_0x0 = 0;
        /** @brief Write protection of SRAM2 1-Kbyte page y is enabled. */
    constexpr std::uint32_t RAMCFG_M2WPR2_P51WP_B_0x1 = 1;

    /** @brief SRAM2 1-Kbyte page y write protection */
    using RAMCFG_M2WPR2_P52WP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write protection of SRAM2 1-Kbyte page y is disabled. (value: 0)
     *          - B_0x1: Write protection of SRAM2 1-Kbyte page y is enabled. (value: 1)
     */
        /** @brief Write protection of SRAM2 1-Kbyte page y is disabled. */
    constexpr std::uint32_t RAMCFG_M2WPR2_P52WP_B_0x0 = 0;
        /** @brief Write protection of SRAM2 1-Kbyte page y is enabled. */
    constexpr std::uint32_t RAMCFG_M2WPR2_P52WP_B_0x1 = 1;

    /** @brief SRAM2 1-Kbyte page y write protection */
    using RAMCFG_M2WPR2_P53WP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write protection of SRAM2 1-Kbyte page y is disabled. (value: 0)
     *          - B_0x1: Write protection of SRAM2 1-Kbyte page y is enabled. (value: 1)
     */
        /** @brief Write protection of SRAM2 1-Kbyte page y is disabled. */
    constexpr std::uint32_t RAMCFG_M2WPR2_P53WP_B_0x0 = 0;
        /** @brief Write protection of SRAM2 1-Kbyte page y is enabled. */
    constexpr std::uint32_t RAMCFG_M2WPR2_P53WP_B_0x1 = 1;

    /** @brief SRAM2 1-Kbyte page y write protection */
    using RAMCFG_M2WPR2_P54WP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write protection of SRAM2 1-Kbyte page y is disabled. (value: 0)
     *          - B_0x1: Write protection of SRAM2 1-Kbyte page y is enabled. (value: 1)
     */
        /** @brief Write protection of SRAM2 1-Kbyte page y is disabled. */
    constexpr std::uint32_t RAMCFG_M2WPR2_P54WP_B_0x0 = 0;
        /** @brief Write protection of SRAM2 1-Kbyte page y is enabled. */
    constexpr std::uint32_t RAMCFG_M2WPR2_P54WP_B_0x1 = 1;

    /** @brief SRAM2 1-Kbyte page y write protection */
    using RAMCFG_M2WPR2_P55WP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write protection of SRAM2 1-Kbyte page y is disabled. (value: 0)
     *          - B_0x1: Write protection of SRAM2 1-Kbyte page y is enabled. (value: 1)
     */
        /** @brief Write protection of SRAM2 1-Kbyte page y is disabled. */
    constexpr std::uint32_t RAMCFG_M2WPR2_P55WP_B_0x0 = 0;
        /** @brief Write protection of SRAM2 1-Kbyte page y is enabled. */
    constexpr std::uint32_t RAMCFG_M2WPR2_P55WP_B_0x1 = 1;

    /** @brief SRAM2 1-Kbyte page y write protection */
    using RAMCFG_M2WPR2_P56WP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write protection of SRAM2 1-Kbyte page y is disabled. (value: 0)
     *          - B_0x1: Write protection of SRAM2 1-Kbyte page y is enabled. (value: 1)
     */
        /** @brief Write protection of SRAM2 1-Kbyte page y is disabled. */
    constexpr std::uint32_t RAMCFG_M2WPR2_P56WP_B_0x0 = 0;
        /** @brief Write protection of SRAM2 1-Kbyte page y is enabled. */
    constexpr std::uint32_t RAMCFG_M2WPR2_P56WP_B_0x1 = 1;

    /** @brief SRAM2 1-Kbyte page y write protection */
    using RAMCFG_M2WPR2_P57WP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write protection of SRAM2 1-Kbyte page y is disabled. (value: 0)
     *          - B_0x1: Write protection of SRAM2 1-Kbyte page y is enabled. (value: 1)
     */
        /** @brief Write protection of SRAM2 1-Kbyte page y is disabled. */
    constexpr std::uint32_t RAMCFG_M2WPR2_P57WP_B_0x0 = 0;
        /** @brief Write protection of SRAM2 1-Kbyte page y is enabled. */
    constexpr std::uint32_t RAMCFG_M2WPR2_P57WP_B_0x1 = 1;

    /** @brief SRAM2 1-Kbyte page y write protection */
    using RAMCFG_M2WPR2_P58WP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write protection of SRAM2 1-Kbyte page y is disabled. (value: 0)
     *          - B_0x1: Write protection of SRAM2 1-Kbyte page y is enabled. (value: 1)
     */
        /** @brief Write protection of SRAM2 1-Kbyte page y is disabled. */
    constexpr std::uint32_t RAMCFG_M2WPR2_P58WP_B_0x0 = 0;
        /** @brief Write protection of SRAM2 1-Kbyte page y is enabled. */
    constexpr std::uint32_t RAMCFG_M2WPR2_P58WP_B_0x1 = 1;

    /** @brief SRAM2 1-Kbyte page y write protection */
    using RAMCFG_M2WPR2_P59WP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write protection of SRAM2 1-Kbyte page y is disabled. (value: 0)
     *          - B_0x1: Write protection of SRAM2 1-Kbyte page y is enabled. (value: 1)
     */
        /** @brief Write protection of SRAM2 1-Kbyte page y is disabled. */
    constexpr std::uint32_t RAMCFG_M2WPR2_P59WP_B_0x0 = 0;
        /** @brief Write protection of SRAM2 1-Kbyte page y is enabled. */
    constexpr std::uint32_t RAMCFG_M2WPR2_P59WP_B_0x1 = 1;

    /** @brief SRAM2 1-Kbyte page y write protection */
    using RAMCFG_M2WPR2_P60WP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write protection of SRAM2 1-Kbyte page y is disabled. (value: 0)
     *          - B_0x1: Write protection of SRAM2 1-Kbyte page y is enabled. (value: 1)
     */
        /** @brief Write protection of SRAM2 1-Kbyte page y is disabled. */
    constexpr std::uint32_t RAMCFG_M2WPR2_P60WP_B_0x0 = 0;
        /** @brief Write protection of SRAM2 1-Kbyte page y is enabled. */
    constexpr std::uint32_t RAMCFG_M2WPR2_P60WP_B_0x1 = 1;

    /** @brief SRAM2 1-Kbyte page y write protection */
    using RAMCFG_M2WPR2_P61WP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write protection of SRAM2 1-Kbyte page y is disabled. (value: 0)
     *          - B_0x1: Write protection of SRAM2 1-Kbyte page y is enabled. (value: 1)
     */
        /** @brief Write protection of SRAM2 1-Kbyte page y is disabled. */
    constexpr std::uint32_t RAMCFG_M2WPR2_P61WP_B_0x0 = 0;
        /** @brief Write protection of SRAM2 1-Kbyte page y is enabled. */
    constexpr std::uint32_t RAMCFG_M2WPR2_P61WP_B_0x1 = 1;

    /** @brief SRAM2 1-Kbyte page y write protection */
    using RAMCFG_M2WPR2_P62WP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write protection of SRAM2 1-Kbyte page y is disabled. (value: 0)
     *          - B_0x1: Write protection of SRAM2 1-Kbyte page y is enabled. (value: 1)
     */
        /** @brief Write protection of SRAM2 1-Kbyte page y is disabled. */
    constexpr std::uint32_t RAMCFG_M2WPR2_P62WP_B_0x0 = 0;
        /** @brief Write protection of SRAM2 1-Kbyte page y is enabled. */
    constexpr std::uint32_t RAMCFG_M2WPR2_P62WP_B_0x1 = 1;

    /** @brief SRAM2 1-Kbyte page y write protection */
    using RAMCFG_M2WPR2_P63WP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write protection of SRAM2 1-Kbyte page y is disabled. (value: 0)
     *          - B_0x1: Write protection of SRAM2 1-Kbyte page y is enabled. (value: 1)
     */
        /** @brief Write protection of SRAM2 1-Kbyte page y is disabled. */
    constexpr std::uint32_t RAMCFG_M2WPR2_P63WP_B_0x0 = 0;
        /** @brief Write protection of SRAM2 1-Kbyte page y is enabled. */
    constexpr std::uint32_t RAMCFG_M2WPR2_P63WP_B_0x1 = 1;

    /** @brief RAMCFG memory 2 parity key register */
    using RAMCFG_M2PARKEYR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x64, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Parity write protection key */
    using RAMCFG_M2PARKEYR_PARKEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RAMCFG memory 2 erase key register */
    using RAMCFG_M2ERKEYR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x68, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Erase write protection key */
    using RAMCFG_M2ERKEYR_ERASEKEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RAMCFG memory 3 interrupt enable register */
    using RAMCFG_M3IER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x84, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Parity error interrupt enable */
    using RAMCFG_M3IER_PEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Parity error interrupt disabled (value: 0)
     *          - B_0x1: Parity error interrupt enabled (value: 1)
     */
        /** @brief Parity error interrupt disabled */
    constexpr std::uint32_t RAMCFG_M3IER_PEIE_B_0x0 = 0;
        /** @brief Parity error interrupt enabled */
    constexpr std::uint32_t RAMCFG_M3IER_PEIE_B_0x1 = 1;

    /** @brief Parity error NMI */
    using RAMCFG_M3IER_PENMI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: NMI not generated in case of Parity error (value: 0)
     *          - B_0x1: NMI generated in case of Parity error (value: 1)
     */
        /** @brief NMI not generated in case of Parity error */
    constexpr std::uint32_t RAMCFG_M3IER_PENMI_B_0x0 = 0;
        /** @brief NMI generated in case of Parity error */
    constexpr std::uint32_t RAMCFG_M3IER_PENMI_B_0x1 = 1;

    /** @brief RAMCFG memory 3 interrupt status register */
    using RAMCFG_M3ISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x88, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Parity error detected */
    using RAMCFG_M3ISR_PED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No Parity error detected (value: 0)
     *          - B_0x1: Parity error detected (value: 1)
     */
        /** @brief No Parity error detected */
    constexpr std::uint32_t RAMCFG_M3ISR_PED_B_0x0 = 0;
        /** @brief Parity error detected */
    constexpr std::uint32_t RAMCFG_M3ISR_PED_B_0x1 = 1;

    /** @brief SRAM busy with erase operation */
    using RAMCFG_M3ISR_SRAMBUSY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No erase operation ongoing (value: 0)
     *          - B_0x1: Erase operation ongoing (value: 1)
     */
        /** @brief No erase operation ongoing */
    constexpr std::uint32_t RAMCFG_M3ISR_SRAMBUSY_B_0x0 = 0;
        /** @brief Erase operation ongoing */
    constexpr std::uint32_t RAMCFG_M3ISR_SRAMBUSY_B_0x1 = 1;

    /** @brief RAMCFG memory 3 parity error address register */
    using RAMCFG_M3PEAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x90, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Parity error address */
    using RAMCFG_M3PEAR_PEA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RAMCFG memory 3 interrupt clear register */
    using RAMCFG_M3ICR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x94, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear parity error detected */
    using RAMCFG_M3ICR_CPED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RAMCFG memory 3 parity key register */
    using RAMCFG_M3PARKEYR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Parity write protection key */
    using RAMCFG_M3PARKEYR_PARKEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RAMCFG memory 3 erase key register */
    using RAMCFG_M3ERKEYR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Erase write protection key */
    using RAMCFG_M3ERKEYR_ERASEKEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
