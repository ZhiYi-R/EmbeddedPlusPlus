/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32L462_COMP_HPP
#define EMBEDDED_PP_STM32L462_COMP_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Comparator */
namespace STM32L462::COMP {

    /** @brief Comparator 1 control and status register */
    using COMP1_CSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Comparator 1 enable bit */
    using COMP1_CSR_COMP1_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Power Mode of the comparator 1 */
    using COMP1_CSR_COMP1_PWRMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Comparator 1 Input Minus connection configuration bit */
    using COMP1_CSR_COMP1_INMSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Comparator1 input plus selection bit */
    using COMP1_CSR_COMP1_INPSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Comparator 1 polarity selection bit */
    using COMP1_CSR_COMP1_POLARITY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Comparator 1 hysteresis selection bits */
    using COMP1_CSR_COMP1_HYST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Comparator 1 blanking source selection bits */
    using COMP1_CSR_COMP1_BLANKING = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Scaler bridge enable */
    using COMP1_CSR_COMP1_BRGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Voltage scaler enable bit */
    using COMP1_CSR_COMP1_SCALEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief comparator 1 input minus extended selection bits */
    using COMP1_CSR_COMP1_INMESEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Comparator 1 output status bit */
    using COMP1_CSR_COMP1_VALUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief COMP1_CSR register lock bit */
    using COMP1_CSR_COMP1_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Comparator 2 control and status register */
    using COMP2_CSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Comparator 2 enable bit */
    using COMP2_CSR_COMP2_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Power Mode of the comparator 2 */
    using COMP2_CSR_COMP2_PWRMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Comparator 2 Input Minus connection configuration bit */
    using COMP2_CSR_COMP2_INMSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Comparator 2 Input Plus connection configuration bit */
    using COMP2_CSR_COMP2_INPSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Windows mode selection bit */
    using COMP2_CSR_COMP2_WINMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Comparator 2 polarity selection bit */
    using COMP2_CSR_COMP2_POLARITY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Comparator 2 hysteresis selection bits */
    using COMP2_CSR_COMP2_HYST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Comparator 2 blanking source selection bits */
    using COMP2_CSR_COMP2_BLANKING = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Scaler bridge enable */
    using COMP2_CSR_COMP2_BRGEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Voltage scaler enable bit */
    using COMP2_CSR_COMP2_SCALEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief comparator 2 input minus extended selection bits */
    using COMP2_CSR_COMP2_INMESEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Comparator 2 output status bit */
    using COMP2_CSR_COMP2_VALUE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief COMP2_CSR register lock bit */
    using COMP2_CSR_COMP2_LOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
