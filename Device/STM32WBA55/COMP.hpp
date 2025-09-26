/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32WBA55_COMP_HPP
#define EMBEDDED_PP_STM32WBA55_COMP_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Comparator */
namespace STM32WBA55::COMP {

    /** @brief COMP1 control and status register */
    using COMP1_CSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief COMP1 enable */
    using COMP1_CSR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief COMP1 signal selector for inverting input INM Controlled by software (if not locked), selects the signal for the inverting input COMP1_INM */
    using COMP1_CSR_INMSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief COMP1 signal selector for inverting input INM Controlled by software (if not locked), selects the signal for the inverting input COMP1_INM */
    using COMP1_CSR_INPSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief COMP1 noninverting input selector for window mode Controlled by software (if not locked), selects the signal for the COMP1_INP input of the COMP1. */
    using COMP1_CSR_WINMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief COMP1 output selector Controlled by software (if not locked), selects the COMP1 output. */
    using COMP1_CSR_WINOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief COMP1 polarity selector Controlled by software (if not locked), selects the COMP1 output polarity */
    using COMP1_CSR_POLARITY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief COMP1 hysteresis selector Controlled by software (if not locked), selects the COMP1 hysteresis. */
    using COMP1_CSR_HYST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief COMP1 power mode selector Controlled by software (if not locked), selects the power consumption and, as a consequence, the speed of the COMP1. */
    using COMP1_CSR_PWRMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief COMP1 blanking source selector. */
    using COMP1_CSR_BLANKSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief COMP1 output status. */
    using COMP1_CSR_VALUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief COMP1_CSR register lock. */
    using COMP1_CSR_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief COMP2 control and status register */
    using COMP2_CSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief COMP1 enable */
    using COMP2_CSR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief COMP1 signal selector for inverting input INM Controlled by software (if not locked), selects the signal for the inverting input COMP1_INM */
    using COMP2_CSR_INMSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief COMP1 signal selector for inverting input INM Controlled by software (if not locked), selects the signal for the inverting input COMP1_INM */
    using COMP2_CSR_INPSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief COMP1 noninverting input selector for window mode Controlled by software (if not locked), selects the signal for the COMP1_INP input of the COMP1. */
    using COMP2_CSR_WINMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief COMP1 output selector Controlled by software (if not locked), selects the COMP1 output. */
    using COMP2_CSR_WINOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief COMP1 polarity selector Controlled by software (if not locked), selects the COMP1 output polarity */
    using COMP2_CSR_POLARITY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief COMP1 hysteresis selector Controlled by software (if not locked), selects the COMP1 hysteresis. */
    using COMP2_CSR_HYST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief COMP1 power mode selector Controlled by software (if not locked), selects the power consumption and, as a consequence, the speed of the COMP1. */
    using COMP2_CSR_PWRMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief COMP1 blanking source selector. */
    using COMP2_CSR_BLANKSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief COMP1 output status. */
    using COMP2_CSR_VALUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief COMP1_CSR register lock. */
    using COMP2_CSR_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
