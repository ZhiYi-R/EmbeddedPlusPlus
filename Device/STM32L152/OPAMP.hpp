/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32L152_OPAMP_HPP
#define EMBEDDED_PP_STM32L152_OPAMP_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Operational amplifiers */
namespace STM32L152::OPAMP {

    /** @brief control/status register */
    using CSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OPAMP3 calibration output */
    using CSR_OPA3CALOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OPAMP2 calibration output */
    using CSR_OPA2CALOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OPAMP1 calibration output */
    using CSR_OPA1CALOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Power range selection */
    using CSR_AOP_RANGE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Switch 7 for OPAMP2 enable */
    using CSR_S7SEL2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Switch SanA enable for OPAMP3 */
    using CSR_ANAWSEL3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Switch SanA enable for OPAMP2 */
    using CSR_ANAWSEL2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Switch SanA enable for OPAMP1 */
    using CSR_ANAWSEL1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OPAMP3 low power mode */
    using CSR_OPA3LPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OPAMP3 offset calibration for N differential pair */
    using CSR_OPA3CAL_H = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OPAMP3 offset Calibration for P differential pair */
    using CSR_OPA3CAL_L = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Switch 6 for OPAMP3 enable */
    using CSR_S6SEL3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Switch 5 for OPAMP3 enable */
    using CSR_S5SEL3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Switch 4 for OPAMP3 enable */
    using CSR_S4SEL3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Switch 3 for OPAMP3 Enable */
    using CSR_S3SEL3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OPAMP3 power down */
    using CSR_OPA3PD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OPAMP2 low power mode */
    using CSR_OPA2LPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OPAMP2 offset calibration for N differential pair */
    using CSR_OPA2CAL_H = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OPAMP2 offset Calibration for P differential pair */
    using CSR_OPA2CAL_L = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Switch 6 for OPAMP2 enable */
    using CSR_S6SEL2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Switch 5 for OPAMP2 enable */
    using CSR_S5SEL2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Switch 4 for OPAMP2 enable */
    using CSR_S4SEL2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Switch 3 for OPAMP2 enable */
    using CSR_S3SEL2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OPAMP2 power down */
    using CSR_OPA2PD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OPAMP1 low power mode */
    using CSR_OPA1LPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OPAMP1 offset calibration for N differential pair */
    using CSR_OPA1CAL_H = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OPAMP1 offset calibration for P differential pair */
    using CSR_OPA1CAL_L = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Switch 6 for OPAMP1 enable */
    using CSR_S6SEL1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Switch 5 for OPAMP1 enable */
    using CSR_S5SEL1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Switch 4 for OPAMP1 enable */
    using CSR_S4SEL1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Switch 3 for OPAMP1 enable */
    using CSR_S3SEL1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OPAMP1 power down */
    using CSR_OPA1PD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief offset trimming register for normal mode */
    using OTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Select user or factory trimming value */
    using OTR_OT_USER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OPAMP3, 10-bit offset trim value for normal mode */
    using OTR_AO3_OPT_OFFSET_TRIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OPAMP2, 10-bit offset trim value for normal mode */
    using OTR_AO2_OPT_OFFSET_TRIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OPAMP1, 10-bit offset trim value for normal mode */
    using OTR_AO1_OPT_OFFSET_TRIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OPAMP offset trimming register for low power mode */
    using LPOTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OPAMP3, 10-bit offset trim value for low power mode */
    using LPOTR_AO3_OPT_OFFSET_TRIM_LP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OPAMP2, 10-bit offset trim value for low power mode */
    using LPOTR_AO2_OPT_OFFSET_TRIM_LP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OPAMP1, 10-bit offset trim value for low power mode */
    using LPOTR_AO1_OPT_OFFSET_TRIM_LP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
