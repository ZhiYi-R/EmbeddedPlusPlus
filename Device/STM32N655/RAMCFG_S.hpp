/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32N655_RAMCFG_S_HPP
#define EMBEDDED_PP_STM32N655_RAMCFG_S_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief SRAM configuration controller */
namespace STM32N655::RAMCFG_S {

    /** @brief RAMCFG AXISRAM1 control register */
    using RAMCFG_AXISRAM1CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SRAM erase. */
    using RAMCFG_AXISRAM1CR_SRAMER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No erase operation ongoing (value: 0)
     *          - B_0x1: Erase operation ongoing (value: 1)
     */
        /** @brief No erase operation ongoing */
    constexpr std::uint32_t RAMCFG_AXISRAM1CR_SRAMER_B_0x0 = 0;
        /** @brief Erase operation ongoing */
    constexpr std::uint32_t RAMCFG_AXISRAM1CR_SRAMER_B_0x1 = 1;

    /** @brief RAMCFG AXISRAM1 interrupt status register */
    using RAMCFG_AXISRAM1ISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SRAM busy with erase operation */
    using RAMCFG_AXISRAM1ISR_SRAMBUSY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No erase operation ongoing (value: 0)
     *          - B_0x1: Erase operation ongoing (value: 1)
     */
        /** @brief No erase operation ongoing */
    constexpr std::uint32_t RAMCFG_AXISRAM1ISR_SRAMBUSY_B_0x0 = 0;
        /** @brief Erase operation ongoing */
    constexpr std::uint32_t RAMCFG_AXISRAM1ISR_SRAMBUSY_B_0x1 = 1;

    /** @brief RAMCFG AXISRAM1 erase key register */
    using RAMCFG_AXISRAM1ERKEYR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Erase write protection key */
    using RAMCFG_AXISRAM1ERKEYR_ERASEKEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RAMCFG AXISRAM2 control register */
    using RAMCFG_AXISRAM2CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x80, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SRAM erase */
    using RAMCFG_AXISRAM2CR_SRAMER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No erase operation ongoing (value: 0)
     *          - B_0x1: Erase operation ongoing (value: 1)
     */
        /** @brief No erase operation ongoing */
    constexpr std::uint32_t RAMCFG_AXISRAM2CR_SRAMER_B_0x0 = 0;
        /** @brief Erase operation ongoing */
    constexpr std::uint32_t RAMCFG_AXISRAM2CR_SRAMER_B_0x1 = 1;

    /** @brief Shutdown AXISRAMx */
    using RAMCFG_AXISRAM2CR_SRAMSD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AXISRAMx memory is powered. (value: 0)
     *          - B_0x1: AXISRAMx memory is in shutdown, and its content is not retained. (value: 1)
     */
        /** @brief AXISRAMx memory is powered. */
    constexpr std::uint32_t RAMCFG_AXISRAM2CR_SRAMSD_B_0x0 = 0;
        /** @brief AXISRAMx memory is in shutdown, and its content is not retained. */
    constexpr std::uint32_t RAMCFG_AXISRAM2CR_SRAMSD_B_0x1 = 1;

    /** @brief RAMCFG AXISRAM2 interrupt status register */
    using RAMCFG_AXISRAM2ISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x88, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SRAM busy with erase operation */
    using RAMCFG_AXISRAM2ISR_SRAMBUSY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No erase operation ongoing (value: 0)
     *          - B_0x1: Erase operation ongoing (value: 1)
     */
        /** @brief No erase operation ongoing */
    constexpr std::uint32_t RAMCFG_AXISRAM2ISR_SRAMBUSY_B_0x0 = 0;
        /** @brief Erase operation ongoing */
    constexpr std::uint32_t RAMCFG_AXISRAM2ISR_SRAMBUSY_B_0x1 = 1;

    /** @brief RAMCFG AXISRAM2 erase key register */
    using RAMCFG_AXISRAM2ERKEYR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Erase write protection key */
    using RAMCFG_AXISRAM2ERKEYR_ERASEKEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RAMCFG AXISRAM3 control register */
    using RAMCFG_AXISRAM3CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x100, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SRAM erase */
    using RAMCFG_AXISRAM3CR_SRAMER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No erase operation ongoing (value: 0)
     *          - B_0x1: Erase operation ongoing (value: 1)
     */
        /** @brief No erase operation ongoing */
    constexpr std::uint32_t RAMCFG_AXISRAM3CR_SRAMER_B_0x0 = 0;
        /** @brief Erase operation ongoing */
    constexpr std::uint32_t RAMCFG_AXISRAM3CR_SRAMER_B_0x1 = 1;

    /** @brief Shutdown AXISRAMx */
    using RAMCFG_AXISRAM3CR_SRAMSD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AXISRAMx memory is powered. (value: 0)
     *          - B_0x1: AXISRAMx memory is in shutdown, and its content is not retained. (value: 1)
     */
        /** @brief AXISRAMx memory is powered. */
    constexpr std::uint32_t RAMCFG_AXISRAM3CR_SRAMSD_B_0x0 = 0;
        /** @brief AXISRAMx memory is in shutdown, and its content is not retained. */
    constexpr std::uint32_t RAMCFG_AXISRAM3CR_SRAMSD_B_0x1 = 1;

    /** @brief RAMCFG AXISRAM3 interrupt status register */
    using RAMCFG_AXISRAM3ISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x108, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SRAM busy with erase operation */
    using RAMCFG_AXISRAM3ISR_SRAMBUSY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No erase operation ongoing (value: 0)
     *          - B_0x1: Erase operation ongoing (value: 1)
     */
        /** @brief No erase operation ongoing */
    constexpr std::uint32_t RAMCFG_AXISRAM3ISR_SRAMBUSY_B_0x0 = 0;
        /** @brief Erase operation ongoing */
    constexpr std::uint32_t RAMCFG_AXISRAM3ISR_SRAMBUSY_B_0x1 = 1;

    /** @brief RAMCFG AXISRAM3 erase key register */
    using RAMCFG_AXISRAM3ERKEYR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x128, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Erase write protection key */
    using RAMCFG_AXISRAM3ERKEYR_ERASEKEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RAMCFG AXISRAM4 control register */
    using RAMCFG_AXISRAM4CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x180, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SRAM erase */
    using RAMCFG_AXISRAM4CR_SRAMER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No erase operation ongoing (value: 0)
     *          - B_0x1: Erase operation ongoing (value: 1)
     */
        /** @brief No erase operation ongoing */
    constexpr std::uint32_t RAMCFG_AXISRAM4CR_SRAMER_B_0x0 = 0;
        /** @brief Erase operation ongoing */
    constexpr std::uint32_t RAMCFG_AXISRAM4CR_SRAMER_B_0x1 = 1;

    /** @brief Shutdown AXISRAMx */
    using RAMCFG_AXISRAM4CR_SRAMSD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AXISRAMx memory is powered. (value: 0)
     *          - B_0x1: AXISRAMx memory is in shutdown, and its content is not retained. (value: 1)
     */
        /** @brief AXISRAMx memory is powered. */
    constexpr std::uint32_t RAMCFG_AXISRAM4CR_SRAMSD_B_0x0 = 0;
        /** @brief AXISRAMx memory is in shutdown, and its content is not retained. */
    constexpr std::uint32_t RAMCFG_AXISRAM4CR_SRAMSD_B_0x1 = 1;

    /** @brief RAMCFG AXISRAM4 interrupt status register */
    using RAMCFG_AXISRAM4ISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x188, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SRAM busy with erase operation */
    using RAMCFG_AXISRAM4ISR_SRAMBUSY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No erase operation ongoing (value: 0)
     *          - B_0x1: Erase operation ongoing (value: 1)
     */
        /** @brief No erase operation ongoing */
    constexpr std::uint32_t RAMCFG_AXISRAM4ISR_SRAMBUSY_B_0x0 = 0;
        /** @brief Erase operation ongoing */
    constexpr std::uint32_t RAMCFG_AXISRAM4ISR_SRAMBUSY_B_0x1 = 1;

    /** @brief RAMCFG AXISRAM4 erase key register */
    using RAMCFG_AXISRAM4ERKEYR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1A8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Erase write protection key */
    using RAMCFG_AXISRAM4ERKEYR_ERASEKEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RAMCFG AXISRAM5 control register */
    using RAMCFG_AXISRAM5CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x200, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SRAM erase */
    using RAMCFG_AXISRAM5CR_SRAMER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No erase operation ongoing (value: 0)
     *          - B_0x1: Erase operation ongoing (value: 1)
     */
        /** @brief No erase operation ongoing */
    constexpr std::uint32_t RAMCFG_AXISRAM5CR_SRAMER_B_0x0 = 0;
        /** @brief Erase operation ongoing */
    constexpr std::uint32_t RAMCFG_AXISRAM5CR_SRAMER_B_0x1 = 1;

    /** @brief Shutdown AXISRAMx */
    using RAMCFG_AXISRAM5CR_SRAMSD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AXISRAMx memory is powered. (value: 0)
     *          - B_0x1: AXISRAMx memory is in shutdown, and its content is not retained. (value: 1)
     */
        /** @brief AXISRAMx memory is powered. */
    constexpr std::uint32_t RAMCFG_AXISRAM5CR_SRAMSD_B_0x0 = 0;
        /** @brief AXISRAMx memory is in shutdown, and its content is not retained. */
    constexpr std::uint32_t RAMCFG_AXISRAM5CR_SRAMSD_B_0x1 = 1;

    /** @brief RAMCFG AXISRAM5 interrupt status register */
    using RAMCFG_AXISRAM5ISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x208, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SRAM busy with erase operation */
    using RAMCFG_AXISRAM5ISR_SRAMBUSY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No erase operation ongoing (value: 0)
     *          - B_0x1: Erase operation ongoing (value: 1)
     */
        /** @brief No erase operation ongoing */
    constexpr std::uint32_t RAMCFG_AXISRAM5ISR_SRAMBUSY_B_0x0 = 0;
        /** @brief Erase operation ongoing */
    constexpr std::uint32_t RAMCFG_AXISRAM5ISR_SRAMBUSY_B_0x1 = 1;

    /** @brief RAMCFG AXISRAM5 erase key register */
    using RAMCFG_AXISRAM5ERKEYR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x228, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Erase write protection key */
    using RAMCFG_AXISRAM5ERKEYR_ERASEKEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RAMCFG AXISRAM6 control register */
    using RAMCFG_AXISRAM6CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x280, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SRAM erase */
    using RAMCFG_AXISRAM6CR_SRAMER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No erase operation ongoing (value: 0)
     *          - B_0x1: Erase operation ongoing (value: 1)
     */
        /** @brief No erase operation ongoing */
    constexpr std::uint32_t RAMCFG_AXISRAM6CR_SRAMER_B_0x0 = 0;
        /** @brief Erase operation ongoing */
    constexpr std::uint32_t RAMCFG_AXISRAM6CR_SRAMER_B_0x1 = 1;

    /** @brief Shutdown AXISRAMx */
    using RAMCFG_AXISRAM6CR_SRAMSD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AXISRAMx memory is powered. (value: 0)
     *          - B_0x1: AXISRAMx memory is in shutdown, and its content is not retained. (value: 1)
     */
        /** @brief AXISRAMx memory is powered. */
    constexpr std::uint32_t RAMCFG_AXISRAM6CR_SRAMSD_B_0x0 = 0;
        /** @brief AXISRAMx memory is in shutdown, and its content is not retained. */
    constexpr std::uint32_t RAMCFG_AXISRAM6CR_SRAMSD_B_0x1 = 1;

    /** @brief RAMCFG AXISRAM6 interrupt status register */
    using RAMCFG_AXISRAM6ISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x288, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SRAM busy with erase operation */
    using RAMCFG_AXISRAM6ISR_SRAMBUSY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No erase operation ongoing (value: 0)
     *          - B_0x1: Erase operation ongoing (value: 1)
     */
        /** @brief No erase operation ongoing */
    constexpr std::uint32_t RAMCFG_AXISRAM6ISR_SRAMBUSY_B_0x0 = 0;
        /** @brief Erase operation ongoing */
    constexpr std::uint32_t RAMCFG_AXISRAM6ISR_SRAMBUSY_B_0x1 = 1;

    /** @brief RAMCFG AXISRAM6 erase key register */
    using RAMCFG_AXISRAM6ERKEYR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2A8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Erase write protection key */
    using RAMCFG_AXISRAM6ERKEYR_ERASEKEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RAMCFG AHBSRAM1 control register */
    using RAMCFG_AHBSRAM1CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x300, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SRAM erase */
    using RAMCFG_AHBSRAM1CR_SRAMER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No erase operation ongoing (value: 0)
     *          - B_0x1: Erase operation ongoing (value: 1)
     */
        /** @brief No erase operation ongoing */
    constexpr std::uint32_t RAMCFG_AHBSRAM1CR_SRAMER_B_0x0 = 0;
        /** @brief Erase operation ongoing */
    constexpr std::uint32_t RAMCFG_AHBSRAM1CR_SRAMER_B_0x1 = 1;

    /** @brief RAMCFG AHBSRAM1 interrupt status register */
    using RAMCFG_AHBSRAM1ISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x308, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SRAM busy with erase operation */
    using RAMCFG_AHBSRAM1ISR_SRAMBUSY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No erase operation ongoing (value: 0)
     *          - B_0x1: Erase operation ongoing (value: 1)
     */
        /** @brief No erase operation ongoing */
    constexpr std::uint32_t RAMCFG_AHBSRAM1ISR_SRAMBUSY_B_0x0 = 0;
        /** @brief Erase operation ongoing */
    constexpr std::uint32_t RAMCFG_AHBSRAM1ISR_SRAMBUSY_B_0x1 = 1;

    /** @brief RAMCFG AHBSRAM1 erase key register */
    using RAMCFG_AHBSRAM1ERKEYR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x328, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Erase write protection key */
    using RAMCFG_AHBSRAM1ERKEYR_ERASEKEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RAMCFG AHBSRAM2 control register */
    using RAMCFG_AHBSRAM2CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x380, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SRAM erase */
    using RAMCFG_AHBSRAM2CR_SRAMER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No erase operation ongoing (value: 0)
     *          - B_0x1: Erase operation ongoing (value: 1)
     */
        /** @brief No erase operation ongoing */
    constexpr std::uint32_t RAMCFG_AHBSRAM2CR_SRAMER_B_0x0 = 0;
        /** @brief Erase operation ongoing */
    constexpr std::uint32_t RAMCFG_AHBSRAM2CR_SRAMER_B_0x1 = 1;

    /** @brief RAMCFG AHBSRAM2 interrupt status register */
    using RAMCFG_AHBSRAM2ISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x388, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SRAM busy with erase operation */
    using RAMCFG_AHBSRAM2ISR_SRAMBUSY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No erase operation ongoing (value: 0)
     *          - B_0x1: Erase operation ongoing (value: 1)
     */
        /** @brief No erase operation ongoing */
    constexpr std::uint32_t RAMCFG_AHBSRAM2ISR_SRAMBUSY_B_0x0 = 0;
        /** @brief Erase operation ongoing */
    constexpr std::uint32_t RAMCFG_AHBSRAM2ISR_SRAMBUSY_B_0x1 = 1;

    /** @brief RAMCFG AHBSRAM2 erase key register */
    using RAMCFG_AHBSRAM2ERKEYR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3A8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Erase write protection key */
    using RAMCFG_AHBSRAM2ERKEYR_ERASEKEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RAMCFG VENCRAM control register */
    using RAMCFG_VENCRAMCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x400, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SRAM erase */
    using RAMCFG_VENCRAMCR_SRAMER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No erase operation ongoing (value: 0)
     *          - B_0x1: Erase operation ongoing (value: 1)
     */
        /** @brief No erase operation ongoing */
    constexpr std::uint32_t RAMCFG_VENCRAMCR_SRAMER_B_0x0 = 0;
        /** @brief Erase operation ongoing */
    constexpr std::uint32_t RAMCFG_VENCRAMCR_SRAMER_B_0x1 = 1;

    /** @brief RAMCFG VENCRAM interrupt status register */
    using RAMCFG_VENCRAMISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x408, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SRAM busy with erase operation */
    using RAMCFG_VENCRAMISR_SRAMBUSY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No erase operation ongoing (value: 0)
     *          - B_0x1: Erase operation ongoing (value: 1)
     */
        /** @brief No erase operation ongoing */
    constexpr std::uint32_t RAMCFG_VENCRAMISR_SRAMBUSY_B_0x0 = 0;
        /** @brief Erase operation ongoing */
    constexpr std::uint32_t RAMCFG_VENCRAMISR_SRAMBUSY_B_0x1 = 1;

    /** @brief RAMCFG VENCRAM erase key register */
    using RAMCFG_VENCRAMERKEYR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x428, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Erase write protection key */
    using RAMCFG_VENCRAMERKEYR_ERASEKEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RAMCFG BKPSRAM control register */
    using RAMCFG_BKPSRAMCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x480, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC enable */
    using RAMCFG_BKPSRAMCR_ECCE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ECC disabled (value: 0)
     *          - B_0x1: ECC enabled (value: 1)
     */
        /** @brief ECC disabled */
    constexpr std::uint32_t RAMCFG_BKPSRAMCR_ECCE_B_0x0 = 0;
        /** @brief ECC enabled */
    constexpr std::uint32_t RAMCFG_BKPSRAMCR_ECCE_B_0x1 = 1;

    /** @brief Address latch enable */
    using RAMCFG_BKPSRAMCR_ALE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Failing address not stored in RAMCFG_BKPSRAMESEAR or _BKPSRAMEDEAR (value: 0)
     *          - B_0x1: Failing address stored in RAMCFG_BKPSRAMESEAR or _BKPSRAMEDEAR (value: 1)
     */
        /** @brief Failing address not stored in RAMCFG_BKPSRAMESEAR or _BKPSRAMEDEAR */
    constexpr std::uint32_t RAMCFG_BKPSRAMCR_ALE_B_0x0 = 0;
        /** @brief Failing address stored in RAMCFG_BKPSRAMESEAR or _BKPSRAMEDEAR */
    constexpr std::uint32_t RAMCFG_BKPSRAMCR_ALE_B_0x1 = 1;

    /** @brief SRAM erase */
    using RAMCFG_BKPSRAMCR_SRAMER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No erase operation ongoing (value: 0)
     *          - B_0x1: Erase operation ongoing (value: 1)
     */
        /** @brief No erase operation ongoing */
    constexpr std::uint32_t RAMCFG_BKPSRAMCR_SRAMER_B_0x0 = 0;
        /** @brief Erase operation ongoing */
    constexpr std::uint32_t RAMCFG_BKPSRAMCR_SRAMER_B_0x1 = 1;

    /** @brief RAMCFG BKPSRAM interrupt enable register */
    using RAMCFG_BKPSRAMIER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x484, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC single error interrupt enable */
    using RAMCFG_BKPSRAMIER_SEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Single error interrupt disabled (value: 0)
     *          - B_0x1: Single error interrupt enabled (value: 1)
     */
        /** @brief Single error interrupt disabled */
    constexpr std::uint32_t RAMCFG_BKPSRAMIER_SEIE_B_0x0 = 0;
        /** @brief Single error interrupt enabled */
    constexpr std::uint32_t RAMCFG_BKPSRAMIER_SEIE_B_0x1 = 1;

    /** @brief ECC double error interrupt enable */
    using RAMCFG_BKPSRAMIER_DEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Double error interrupt disabled (value: 0)
     *          - B_0x1: Double error interrupt enabled (value: 1)
     */
        /** @brief Double error interrupt disabled */
    constexpr std::uint32_t RAMCFG_BKPSRAMIER_DEIE_B_0x0 = 0;
        /** @brief Double error interrupt enabled */
    constexpr std::uint32_t RAMCFG_BKPSRAMIER_DEIE_B_0x1 = 1;

    /** @brief RAMCFG BKPSRAM interrupt status register */
    using RAMCFG_BKPSRAMISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x488, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC single error detected */
    using RAMCFG_BKPSRAMISR_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No single error detected (value: 0)
     *          - B_0x1: Single error detected and corrected (value: 1)
     */
        /** @brief No single error detected */
    constexpr std::uint32_t RAMCFG_BKPSRAMISR_SEC_B_0x0 = 0;
        /** @brief Single error detected and corrected */
    constexpr std::uint32_t RAMCFG_BKPSRAMISR_SEC_B_0x1 = 1;

    /** @brief ECC double-error interrupt enable */
    using RAMCFG_BKPSRAMISR_DED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No double error (value: 0)
     *          - B_0x1: Double error detected (value: 1)
     */
        /** @brief No double error */
    constexpr std::uint32_t RAMCFG_BKPSRAMISR_DED_B_0x0 = 0;
        /** @brief Double error detected */
    constexpr std::uint32_t RAMCFG_BKPSRAMISR_DED_B_0x1 = 1;

    /** @brief SRAM busy with erase operation */
    using RAMCFG_BKPSRAMISR_SRAMBUSY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No erase operation ongoing (value: 0)
     *          - B_0x1: Erase operation ongoing (value: 1)
     */
        /** @brief No erase operation ongoing */
    constexpr std::uint32_t RAMCFG_BKPSRAMISR_SRAMBUSY_B_0x0 = 0;
        /** @brief Erase operation ongoing */
    constexpr std::uint32_t RAMCFG_BKPSRAMISR_SRAMBUSY_B_0x1 = 1;

    /** @brief RAMCFG BKPSRAM single error address register */
    using RAMCFG_BKPSRAMESEAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC single error address */
    using RAMCFG_BKPSRAMESEAR_ESEA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RAMCFG BKPSRAM double error address register */
    using RAMCFG_BKPSRAMEDEAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x490, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC double error address */
    using RAMCFG_BKPSRAMEDEAR_EDEA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RAMCFG BKPSRAM interrupt clear register */
    using RAMCFG_BKPSRAMICR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x494, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear ECC single-error interrupt */
    using RAMCFG_BKPSRAMICR_CSED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear ECC double-error interrupt */
    using RAMCFG_BKPSRAMICR_CDED = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RAMCFG BKPSRAM ECC key register */
    using RAMCFG_BKPSRAMECCKEYR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4A4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC write protection key */
    using RAMCFG_BKPSRAMECCKEYR_ECCKEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RAMCFG BKPSRAM erase key register */
    using RAMCFG_BKPSRAMERKEYR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4A8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Erase write protection key */
    using RAMCFG_BKPSRAMERKEYR_ERASEKEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RAMCFG FLEXRAM control register */
    using RAMCFG_FLEXRAMCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x500, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SRAM erase */
    using RAMCFG_FLEXRAMCR_SRAMER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No erase operation ongoing (value: 0)
     *          - B_0x1: Erase operation ongoing (value: 1)
     */
        /** @brief No erase operation ongoing */
    constexpr std::uint32_t RAMCFG_FLEXRAMCR_SRAMER_B_0x0 = 0;
        /** @brief Erase operation ongoing */
    constexpr std::uint32_t RAMCFG_FLEXRAMCR_SRAMER_B_0x1 = 1;

    /** @brief SRAM hardware erase disable */
    using RAMCFG_FLEXRAMCR_SRAMHWERDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Erase operation done after a system reset (value: 0)
     *          - B_0x1: No erase operation done after a system reset, only for the retention part of the FLEXMEM when it is used as AXI RAM (value: 1)
     */
        /** @brief Erase operation done after a system reset */
    constexpr std::uint32_t RAMCFG_FLEXRAMCR_SRAMHWERDIS_B_0x0 = 0;
        /** @brief No erase operation done after a system reset, only for the retention part of the FLEXMEM when it is used as AXI RAM */
    constexpr std::uint32_t RAMCFG_FLEXRAMCR_SRAMHWERDIS_B_0x1 = 1;

    /** @brief Configuration of the FLEXMEM I-TCM extension */
    using RAMCFG_FLEXRAMCR_ITCMCFG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FLEXMEM I-TCM extension entirely allocated as AXI RAM (value: 0)
     *          - B_0x1: First 64 Kbytes (and corresponding ECC) allocated as I-TCM, remaining part allocated as AXI RAM (value: 1)
     *          - B_0x2: FLEXMEM I-TCM extension entirely allocated as AXI RAM (value: 2)
     */
        /** @brief FLEXMEM I-TCM extension entirely allocated as AXI RAM */
    constexpr std::uint32_t RAMCFG_FLEXRAMCR_ITCMCFG_B_0x0 = 0;
        /** @brief First 64 Kbytes (and corresponding ECC) allocated as I-TCM, remaining part allocated as AXI RAM */
    constexpr std::uint32_t RAMCFG_FLEXRAMCR_ITCMCFG_B_0x1 = 1;
        /** @brief FLEXMEM I-TCM extension entirely allocated as AXI RAM */
    constexpr std::uint32_t RAMCFG_FLEXRAMCR_ITCMCFG_B_0x2 = 2;

    /** @brief Configuration of the FLEXMEM D-TCM extension */
    using RAMCFG_FLEXRAMCR_DTCMCFG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FLEXMEM D-TCM extension allocated as AXI RAM (value: 0)
     *          - B_0x1: FLEXMEM D-TCM extension allocated as DTCM (value: 1)
     */
        /** @brief FLEXMEM D-TCM extension allocated as AXI RAM */
    constexpr std::uint32_t RAMCFG_FLEXRAMCR_DTCMCFG_B_0x0 = 0;
        /** @brief FLEXMEM D-TCM extension allocated as DTCM */
    constexpr std::uint32_t RAMCFG_FLEXRAMCR_DTCMCFG_B_0x1 = 1;

    /** @brief RAMCFG FLEXRAM interrupt status register */
    using RAMCFG_FLEXRAMISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x508, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SRAM busy with erase operation */
    using RAMCFG_FLEXRAMISR_SRAMBUSY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No erase operation ongoing (value: 0)
     *          - B_0x1: Erase operation ongoing (value: 1)
     */
        /** @brief No erase operation ongoing */
    constexpr std::uint32_t RAMCFG_FLEXRAMISR_SRAMBUSY_B_0x0 = 0;
        /** @brief Erase operation ongoing */
    constexpr std::uint32_t RAMCFG_FLEXRAMISR_SRAMBUSY_B_0x1 = 1;

    /** @brief RAMCFG FLEXRAM erase key register */
    using RAMCFG_FLEXRAMERKEYR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x528, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Erase write protection key */
    using RAMCFG_FLEXRAMERKEYR_ERASEKEY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
