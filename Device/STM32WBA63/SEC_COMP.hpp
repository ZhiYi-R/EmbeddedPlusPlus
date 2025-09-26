/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32WBA63_SEC_COMP_HPP
#define EMBEDDED_PP_STM32WBA63_SEC_COMP_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief COMP address block description */
namespace STM32WBA63::SEC_COMP {

    /** @brief COMP1 control and status register */
    using COMP1_CSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief COMP1 enable */
    using COMP1_CSR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: COMP1 disabled (value: 0)
     *          - B_0x1: COMP1 enabled (value: 1)
     */
        /** @brief COMP1 disabled */
    constexpr std::uint32_t COMP1_CSR_EN_B_0x0 = 0;
        /** @brief COMP1 enabled */
    constexpr std::uint32_t COMP1_CSR_EN_B_0x1 = 1;

    /** @brief COMP1 signal selector for inverting input INM */
    using COMP1_CSR_INMSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief COMP1 signal selector for noninverting input */
    using COMP1_CSR_INPSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief COMP1 noninverting input selector for window mode */
    using COMP1_CSR_WINMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Signal selected with INPSEL[1:0] (value: 0)
     *          - B_0x1: COMP2_INP signal of COMP2 (required for window mode, see Figure103) (value: 1)
     */
        /** @brief Signal selected with INPSEL[1:0] */
    constexpr std::uint32_t COMP1_CSR_WINMODE_B_0x0 = 0;
        /** @brief COMP2_INP signal of COMP2 (required for window mode, see Figure103) */
    constexpr std::uint32_t COMP1_CSR_WINMODE_B_0x1 = 1;

    /** @brief COMP1 output selector */
    using COMP1_CSR_WINOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: COMP1_VALUE (value: 0)
     *          - B_0x1: COMP1_VALUE XOR COMP2_VALUE (required for window mode, see Figure103) (value: 1)
     */
        /** @brief COMP1_VALUE */
    constexpr std::uint32_t COMP1_CSR_WINOUT_B_0x0 = 0;
        /** @brief COMP1_VALUE XOR COMP2_VALUE (required for window mode, see Figure103) */
    constexpr std::uint32_t COMP1_CSR_WINOUT_B_0x1 = 1;

    /** @brief COMP1 polarity selector */
    using COMP1_CSR_POLARITY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Noninverted (value: 0)
     *          - B_0x1: Inverted (value: 1)
     */
        /** @brief Noninverted */
    constexpr std::uint32_t COMP1_CSR_POLARITY_B_0x0 = 0;
        /** @brief Inverted */
    constexpr std::uint32_t COMP1_CSR_POLARITY_B_0x1 = 1;

    /** @brief COMP1 hysteresis selector */
    using COMP1_CSR_HYST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: None (value: 0)
     *          - B_0x1: Low hysteresis (value: 1)
     *          - B_0x2: Medium hysteresis (value: 2)
     *          - B_0x3: High hysteresis (value: 3)
     */
        /** @brief None */
    constexpr std::uint32_t COMP1_CSR_HYST_B_0x0 = 0;
        /** @brief Low hysteresis */
    constexpr std::uint32_t COMP1_CSR_HYST_B_0x1 = 1;
        /** @brief Medium hysteresis */
    constexpr std::uint32_t COMP1_CSR_HYST_B_0x2 = 2;
        /** @brief High hysteresis */
    constexpr std::uint32_t COMP1_CSR_HYST_B_0x3 = 3;

    /** @brief COMP1 power mode selector */
    using COMP1_CSR_PWRMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: High speed (value: 0)
     *          - B_0x1: Intermediate speed and power (value: 1)
     *          - B_0x2: Medium speed and power (value: 2)
     *          - B_0x3: Ultra-low-power (value: 3)
     */
        /** @brief High speed */
    constexpr std::uint32_t COMP1_CSR_PWRMODE_B_0x0 = 0;
        /** @brief Intermediate speed and power */
    constexpr std::uint32_t COMP1_CSR_PWRMODE_B_0x1 = 1;
        /** @brief Medium speed and power */
    constexpr std::uint32_t COMP1_CSR_PWRMODE_B_0x2 = 2;
        /** @brief Ultra-low-power */
    constexpr std::uint32_t COMP1_CSR_PWRMODE_B_0x3 = 3;

    /** @brief COMP1 blanking source selector */
    using COMP1_CSR_BLANKSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: None (no blanking) (value: 0)
     */
        /** @brief None (no blanking) */
    constexpr std::uint32_t COMP1_CSR_BLANKSEL_B_0x0 = 0;

    /** @brief COMP1 output status */
    using COMP1_CSR_VALUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief COMP1_CSR register lock */
    using COMP1_CSR_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: COMP1_CSR read/write bits can be written by software. (value: 0)
     *          - B_0x1: COMP1_CSR bits can be read but not written by software. (value: 1)
     */
        /** @brief COMP1_CSR read/write bits can be written by software. */
    constexpr std::uint32_t COMP1_CSR_LOCK_B_0x0 = 0;
        /** @brief COMP1_CSR bits can be read but not written by software. */
    constexpr std::uint32_t COMP1_CSR_LOCK_B_0x1 = 1;

    /** @brief COMP2 control and status register */
    using COMP2_CSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief COMP2 enable */
    using COMP2_CSR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: COMP2 disabled (value: 0)
     *          - B_0x1: COMP2 enabled (value: 1)
     */
        /** @brief COMP2 disabled */
    constexpr std::uint32_t COMP2_CSR_EN_B_0x0 = 0;
        /** @brief COMP2 enabled */
    constexpr std::uint32_t COMP2_CSR_EN_B_0x1 = 1;

    /** @brief COMP2 signal selector for inverting input INM */
    using COMP2_CSR_INMSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief COMP2 signal selector for noninverting input */
    using COMP2_CSR_INPSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief COMP2 noninverting input selector for window mode */
    using COMP2_CSR_WINMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Signal selected with INPSEL[1:0] (value: 0)
     *          - B_0x1: COMP1_INP signal of COMP1 (required for window mode, see Figure103) (value: 1)
     */
        /** @brief Signal selected with INPSEL[1:0] */
    constexpr std::uint32_t COMP2_CSR_WINMODE_B_0x0 = 0;
        /** @brief COMP1_INP signal of COMP1 (required for window mode, see Figure103) */
    constexpr std::uint32_t COMP2_CSR_WINMODE_B_0x1 = 1;

    /** @brief COMP2 output selector */
    using COMP2_CSR_WINOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: COMP2_VALUE (value: 0)
     *          - B_0x1: COMP1_VALUE XOR COMP2_VALUE (required for window mode, see Figure103) (value: 1)
     */
        /** @brief COMP2_VALUE */
    constexpr std::uint32_t COMP2_CSR_WINOUT_B_0x0 = 0;
        /** @brief COMP1_VALUE XOR COMP2_VALUE (required for window mode, see Figure103) */
    constexpr std::uint32_t COMP2_CSR_WINOUT_B_0x1 = 1;

    /** @brief COMP2 polarity selector */
    using COMP2_CSR_POLARITY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Noninverted (value: 0)
     *          - B_0x1: Inverted (value: 1)
     */
        /** @brief Noninverted */
    constexpr std::uint32_t COMP2_CSR_POLARITY_B_0x0 = 0;
        /** @brief Inverted */
    constexpr std::uint32_t COMP2_CSR_POLARITY_B_0x1 = 1;

    /** @brief COMP2 hysteresis selector */
    using COMP2_CSR_HYST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: None (value: 0)
     *          - B_0x1: Low hysteresis (value: 1)
     *          - B_0x2: Medium hysteresis (value: 2)
     *          - B_0x3: High hysteresis (value: 3)
     */
        /** @brief None */
    constexpr std::uint32_t COMP2_CSR_HYST_B_0x0 = 0;
        /** @brief Low hysteresis */
    constexpr std::uint32_t COMP2_CSR_HYST_B_0x1 = 1;
        /** @brief Medium hysteresis */
    constexpr std::uint32_t COMP2_CSR_HYST_B_0x2 = 2;
        /** @brief High hysteresis */
    constexpr std::uint32_t COMP2_CSR_HYST_B_0x3 = 3;

    /** @brief COMP2 power mode selector */
    using COMP2_CSR_PWRMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: High speed (value: 0)
     *          - B_0x1: Intermediate speed and power (value: 1)
     *          - B_0x2: Medium speed and power (value: 2)
     *          - B_0x3: Ultra-low-power (value: 3)
     */
        /** @brief High speed */
    constexpr std::uint32_t COMP2_CSR_PWRMODE_B_0x0 = 0;
        /** @brief Intermediate speed and power */
    constexpr std::uint32_t COMP2_CSR_PWRMODE_B_0x1 = 1;
        /** @brief Medium speed and power */
    constexpr std::uint32_t COMP2_CSR_PWRMODE_B_0x2 = 2;
        /** @brief Ultra-low-power */
    constexpr std::uint32_t COMP2_CSR_PWRMODE_B_0x3 = 3;

    /** @brief COMP2 blanking source selector */
    using COMP2_CSR_BLANKSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: None (no blanking) (value: 0)
     */
        /** @brief None (no blanking) */
    constexpr std::uint32_t COMP2_CSR_BLANKSEL_B_0x0 = 0;

    /** @brief COMP2 output status */
    using COMP2_CSR_VALUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief COMP2_CSR register lock */
    using COMP2_CSR_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: COMP2_CSR read/write bits can be written by software. (value: 0)
     *          - B_0x1: COMP2_CSR bits can be read but not written by software. (value: 1)
     */
        /** @brief COMP2_CSR read/write bits can be written by software. */
    constexpr std::uint32_t COMP2_CSR_LOCK_B_0x0 = 0;
        /** @brief COMP2_CSR bits can be read but not written by software. */
    constexpr std::uint32_t COMP2_CSR_LOCK_B_0x1 = 1;

}

#endif
