/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32U5XX_SEC_OPAMP_HPP
#define EMBEDDED_PP_STM32U5XX_SEC_OPAMP_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Operational amplifiers */
namespace STM32U5xx::SEC_OPAMP {

    /** @brief OPAMP1 control/status register */
    using OPAMP1_CSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Operational amplifier Enable */
    using OPAMP1_CSR_OPAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OPALPM */
    using OPAMP1_CSR_OPALPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OPAMODE */
    using OPAMP1_CSR_OPAMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USERTRIM */
    using OPAMP1_CSR_PGA_GAIN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VM_SEL */
    using OPAMP1_CSR_VM_SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VP_SEL */
    using OPAMP1_CSR_VP_SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CALON */
    using OPAMP1_CSR_CALON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CALSEL */
    using OPAMP1_CSR_CALSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USERTRIM */
    using OPAMP1_CSR_USERTRIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CALOUT */
    using OPAMP1_CSR_CALOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OPAHSM */
    using OPAMP1_CSR_OPAHSM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief offset trimming register in normal mode */
    using OPAMP1_OTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TRIMOFFSETN */
    using OPAMP1_OTR_TRIMOFFSETN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TRIMOFFSETP */
    using OPAMP1_OTR_TRIMOFFSETP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief offset trimming register in low-power mode */
    using OPAMP1_LPOTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TRIMLPOFFSETN */
    using OPAMP1_LPOTR_TRIMLPOFFSETN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TRIMLPOFFSETP */
    using OPAMP1_LPOTR_TRIMLPOFFSETP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief control/status register */
    using OPAMP2_CRS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OPAEN */
    using OPAMP2_CRS_OPAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OPALPM */
    using OPAMP2_CRS_OPALPM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OPAMODE */
    using OPAMP2_CRS_OPAMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PGA_GAIN */
    using OPAMP2_CRS_PGA_GAIN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VM_SEL */
    using OPAMP2_CRS_VM_SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VP_SEL */
    using OPAMP2_CRS_VP_SEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CALON */
    using OPAMP2_CRS_CALON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CALSEL */
    using OPAMP2_CRS_CALSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USERTRIM */
    using OPAMP2_CRS_USERTRIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CALOUT */
    using OPAMP2_CRS_CALOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OPAHSM */
    using OPAMP2_CRS_OPAHSM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief offset trimming register in normal mode */
    using OPAMP2_OTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TRIMOFFSETN */
    using OPAMP2_OTR_TRIMOFFSETN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TRIMOFFSETP */
    using OPAMP2_OTR_TRIMOFFSETP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief offset trimming register in low-power mode */
    using OPAMP2_LPOTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TRIMLPOFFSETN */
    using OPAMP2_LPOTR_TRIMLPOFFSETN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TRIMLPOFFSETP */
    using OPAMP2_LPOTR_TRIMLPOFFSETP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
