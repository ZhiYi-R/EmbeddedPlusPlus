/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_CORTEX_M7_IMPDEF_HPP
#define EMBEDDED_PP_CORTEX_M7_IMPDEF_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Implementation defined registers */
namespace Cortex_M7::ImpDef {

    /** @brief ITCMCR */
    using ITCMCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SZ */
    using ITCMCR_SZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - No_TCM: No description (value: 0)
     *          - _4KB: No description (value: 3)
     *          - _8KB: No description (value: 4)
     *          - _16KB: No description (value: 5)
     *          - _32KB: No description (value: 6)
     *          - _64KB: No description (value: 7)
     *          - _256KB: No description (value: 8)
     *          - _512KB: No description (value: 10)
     *          - _1MB: No description (value: 11)
     *          - _2MB: No description (value: 12)
     *          - _4MB: No description (value: 13)
     *          - _8MB: No description (value: 14)
     *          - _16MB: No description (value: 15)
     */
        /** @brief No_TCM value */
    constexpr std::uint32_t ITCMCR_SZ_No_TCM = 0;
        /** @brief _4KB value */
    constexpr std::uint32_t ITCMCR_SZ__4KB = 3;
        /** @brief _8KB value */
    constexpr std::uint32_t ITCMCR_SZ__8KB = 4;
        /** @brief _16KB value */
    constexpr std::uint32_t ITCMCR_SZ__16KB = 5;
        /** @brief _32KB value */
    constexpr std::uint32_t ITCMCR_SZ__32KB = 6;
        /** @brief _64KB value */
    constexpr std::uint32_t ITCMCR_SZ__64KB = 7;
        /** @brief _256KB value */
    constexpr std::uint32_t ITCMCR_SZ__256KB = 8;
        /** @brief _512KB value */
    constexpr std::uint32_t ITCMCR_SZ__512KB = 10;
        /** @brief _1MB value */
    constexpr std::uint32_t ITCMCR_SZ__1MB = 11;
        /** @brief _2MB value */
    constexpr std::uint32_t ITCMCR_SZ__2MB = 12;
        /** @brief _4MB value */
    constexpr std::uint32_t ITCMCR_SZ__4MB = 13;
        /** @brief _8MB value */
    constexpr std::uint32_t ITCMCR_SZ__8MB = 14;
        /** @brief _16MB value */
    constexpr std::uint32_t ITCMCR_SZ__16MB = 15;

    /** @brief RETEN */
    using ITCMCR_RETEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Disabled: No description (value: 0)
     *          - Enabled: No description (value: 1)
     */
        /** @brief Disabled value */
    constexpr std::uint32_t ITCMCR_RETEN_Disabled = 0;
        /** @brief Enabled value */
    constexpr std::uint32_t ITCMCR_RETEN_Enabled = 1;

    /** @brief RMW */
    using ITCMCR_RMW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Disabled: No description (value: 0)
     *          - Enabled: No description (value: 1)
     */
        /** @brief Disabled value */
    constexpr std::uint32_t ITCMCR_RMW_Disabled = 0;
        /** @brief Enabled value */
    constexpr std::uint32_t ITCMCR_RMW_Enabled = 1;

    /** @brief EN */
    using ITCMCR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Disabled: No description (value: 0)
     *          - Enabled: No description (value: 1)
     */
        /** @brief Disabled value */
    constexpr std::uint32_t ITCMCR_EN_Disabled = 0;
        /** @brief Enabled value */
    constexpr std::uint32_t ITCMCR_EN_Enabled = 1;

    /** @brief DTCMCR */
    using DTCMCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TCM_Size */
    using DTCMCR_TCM_Size = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - No_TCM: No description (value: 0)
     *          - _4KB: No description (value: 3)
     *          - _8KB: No description (value: 4)
     *          - _16KB: No description (value: 5)
     *          - _32KB: No description (value: 6)
     *          - _64KB: No description (value: 7)
     *          - _256KB: No description (value: 8)
     *          - _512KB: No description (value: 10)
     *          - _1MB: No description (value: 11)
     *          - _2MB: No description (value: 12)
     *          - _4MB: No description (value: 13)
     *          - _8MB: No description (value: 14)
     *          - _16MB: No description (value: 15)
     */
        /** @brief No_TCM value */
    constexpr std::uint32_t DTCMCR_TCM_Size_No_TCM = 0;
        /** @brief _4KB value */
    constexpr std::uint32_t DTCMCR_TCM_Size__4KB = 3;
        /** @brief _8KB value */
    constexpr std::uint32_t DTCMCR_TCM_Size__8KB = 4;
        /** @brief _16KB value */
    constexpr std::uint32_t DTCMCR_TCM_Size__16KB = 5;
        /** @brief _32KB value */
    constexpr std::uint32_t DTCMCR_TCM_Size__32KB = 6;
        /** @brief _64KB value */
    constexpr std::uint32_t DTCMCR_TCM_Size__64KB = 7;
        /** @brief _256KB value */
    constexpr std::uint32_t DTCMCR_TCM_Size__256KB = 8;
        /** @brief _512KB value */
    constexpr std::uint32_t DTCMCR_TCM_Size__512KB = 10;
        /** @brief _1MB value */
    constexpr std::uint32_t DTCMCR_TCM_Size__1MB = 11;
        /** @brief _2MB value */
    constexpr std::uint32_t DTCMCR_TCM_Size__2MB = 12;
        /** @brief _4MB value */
    constexpr std::uint32_t DTCMCR_TCM_Size__4MB = 13;
        /** @brief _8MB value */
    constexpr std::uint32_t DTCMCR_TCM_Size__8MB = 14;
        /** @brief _16MB value */
    constexpr std::uint32_t DTCMCR_TCM_Size__16MB = 15;

    /** @brief RETEN */
    using DTCMCR_RETEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Disabled: No description (value: 0)
     *          - Enabled: No description (value: 1)
     */
        /** @brief Disabled value */
    constexpr std::uint32_t DTCMCR_RETEN_Disabled = 0;
        /** @brief Enabled value */
    constexpr std::uint32_t DTCMCR_RETEN_Enabled = 1;

    /** @brief RMW */
    using DTCMCR_RMW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Disabled: No description (value: 0)
     *          - Enabled: No description (value: 1)
     */
        /** @brief Disabled value */
    constexpr std::uint32_t DTCMCR_RMW_Disabled = 0;
        /** @brief Enabled value */
    constexpr std::uint32_t DTCMCR_RMW_Enabled = 1;

    /** @brief EN */
    using DTCMCR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Disabled: No description (value: 0)
     *          - Enabled: No description (value: 1)
     */
        /** @brief Disabled value */
    constexpr std::uint32_t DTCMCR_EN_Disabled = 0;
        /** @brief Enabled value */
    constexpr std::uint32_t DTCMCR_EN_Enabled = 1;

    /** @brief AHBPCR */
    using AHBPCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SZ */
    using AHBPCR_SZ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - _64MB: No description (value: 1)
     *          - _128MB: No description (value: 2)
     *          - _256MB: No description (value: 3)
     *          - _512MB: No description (value: 4)
     */
        /** @brief _64MB value */
    constexpr std::uint32_t AHBPCR_SZ__64MB = 1;
        /** @brief _128MB value */
    constexpr std::uint32_t AHBPCR_SZ__128MB = 2;
        /** @brief _256MB value */
    constexpr std::uint32_t AHBPCR_SZ__256MB = 3;
        /** @brief _512MB value */
    constexpr std::uint32_t AHBPCR_SZ__512MB = 4;

    /** @brief EN */
    using AHBPCR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Disabled: No description (value: 0)
     *          - Enabled: No description (value: 1)
     */
        /** @brief Disabled value */
    constexpr std::uint32_t AHBPCR_EN_Disabled = 0;
        /** @brief Enabled value */
    constexpr std::uint32_t AHBPCR_EN_Enabled = 1;

    /** @brief CACR */
    using CACR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WT */
    using CACR_WT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Disabled: No description (value: 0)
     *          - Enabled: No description (value: 1)
     */
        /** @brief Disabled value */
    constexpr std::uint32_t CACR_WT_Disabled = 0;
        /** @brief Enabled value */
    constexpr std::uint32_t CACR_WT_Enabled = 1;

    /** @brief ECC */
    using CACR_ECC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Enabled: No description (value: 0)
     *          - Disabled: No description (value: 1)
     */
        /** @brief Enabled value */
    constexpr std::uint32_t CACR_ECC_Enabled = 0;
        /** @brief Disabled value */
    constexpr std::uint32_t CACR_ECC_Disabled = 1;

    /** @brief SIWT */
    using CACR_SIWT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Disabled: No description (value: 0)
     *          - Enabled: No description (value: 1)
     */
        /** @brief Disabled value */
    constexpr std::uint32_t CACR_SIWT_Disabled = 0;
        /** @brief Enabled value */
    constexpr std::uint32_t CACR_SIWT_Enabled = 1;

    /** @brief AHBSCR */
    using AHBSCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief INITCOUNT */
    using AHBSCR_INITCOUNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TPRI */
    using AHBSCR_TPRI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CTL */
    using AHBSCR_CTL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ABFSR */
    using ABFSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EPPB */
    using ABFSR_EPPB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Disabled: No description (value: 0)
     *          - Enabled: No description (value: 1)
     */
        /** @brief Disabled value */
    constexpr std::uint32_t ABFSR_EPPB_Disabled = 0;
        /** @brief Enabled value */
    constexpr std::uint32_t ABFSR_EPPB_Enabled = 1;

    /** @brief AXIM */
    using ABFSR_AXIM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Disabled: No description (value: 0)
     *          - Enabled: No description (value: 1)
     */
        /** @brief Disabled value */
    constexpr std::uint32_t ABFSR_AXIM_Disabled = 0;
        /** @brief Enabled value */
    constexpr std::uint32_t ABFSR_AXIM_Enabled = 1;

    /** @brief AHBP */
    using ABFSR_AHBP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Disabled: No description (value: 0)
     *          - Enabled: No description (value: 1)
     */
        /** @brief Disabled value */
    constexpr std::uint32_t ABFSR_AHBP_Disabled = 0;
        /** @brief Enabled value */
    constexpr std::uint32_t ABFSR_AHBP_Enabled = 1;

    /** @brief DTCM */
    using ABFSR_DTCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Disabled: No description (value: 0)
     *          - Enabled: No description (value: 1)
     */
        /** @brief Disabled value */
    constexpr std::uint32_t ABFSR_DTCM_Disabled = 0;
        /** @brief Enabled value */
    constexpr std::uint32_t ABFSR_DTCM_Enabled = 1;

    /** @brief ITCM */
    using ABFSR_ITCM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - Disabled: No description (value: 0)
     *          - Enabled: No description (value: 1)
     */
        /** @brief Disabled value */
    constexpr std::uint32_t ABFSR_ITCM_Disabled = 0;
        /** @brief Enabled value */
    constexpr std::uint32_t ABFSR_ITCM_Enabled = 1;

}

#endif
