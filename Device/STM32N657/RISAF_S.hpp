/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32N657_RISAF_S_HPP
#define EMBEDDED_PP_STM32N657_RISAF_S_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Resource isolation slave unit for address space protection */
namespace STM32N657::RISAF_S {

    /** @brief RISAF configuration register */
    using RISAF_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief global lock */
    using RISAF_CR_GLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RISAF registers are writable. (value: 0)
     *          - B_0x1: All writes to RISAF registers are ignored, except RISAF_IACR, RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR (z = A to B). (value: 1)
     */
        /** @brief RISAF registers are writable. */
    constexpr std::uint32_t RISAF_CR_GLOCK_B_0x0 = 0;
        /** @brief All writes to RISAF registers are ignored, except RISAF_IACR, RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR (z = A to B). */
    constexpr std::uint32_t RISAF_CR_GLOCK_B_0x1 = 1;

    /** @brief RISAF illegal access status register */
    using RISAF_IASR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief configuration access error flag */
    using RISAF_IASR_CAEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief illegal access error flag */
    using RISAF_IASR_IAEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF illegal access clear register */
    using RISAF_IACR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief configuration access error flag */
    using RISAF_IACR_CAEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief illegal access error flag */
    using RISAF_IACR_IAEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF illegal access error status register */
    using RISAF_IAESR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief illegal access compartment ID */
    using RISAF_IAESR_IACID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief illegal access privileged */
    using RISAF_IAESR_IAPRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access was unprivileged. (value: 0)
     *          - B_0x1: Illegal access was privileged. (value: 1)
     */
        /** @brief Illegal access was unprivileged. */
    constexpr std::uint32_t RISAF_IAESR_IAPRIV_B_0x0 = 0;
        /** @brief Illegal access was privileged. */
    constexpr std::uint32_t RISAF_IAESR_IAPRIV_B_0x1 = 1;

    /** @brief illegal access security */
    using RISAF_IAESR_IASEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access was non-secure. (value: 0)
     *          - B_0x1: Illegal access was secure. (value: 1)
     */
        /** @brief Illegal access was non-secure. */
    constexpr std::uint32_t RISAF_IAESR_IASEC_B_0x0 = 0;
        /** @brief Illegal access was secure. */
    constexpr std::uint32_t RISAF_IAESR_IASEC_B_0x1 = 1;

    /** @brief illegal access read/write */
    using RISAF_IAESR_IANRW = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Illegal access was a data read or an instruction fetch. (value: 0)
     *          - B_0x1: Illegal access was a data write. (value: 1)
     */
        /** @brief Illegal access was a data read or an instruction fetch. */
    constexpr std::uint32_t RISAF_IAESR_IANRW_B_0x0 = 0;
        /** @brief Illegal access was a data write. */
    constexpr std::uint32_t RISAF_IAESR_IANRW_B_0x1 = 1;

    /** @brief RISAF illegal address register */
    using RISAF_IADDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief illegal address */
    using RISAF_IADDR_IADD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 1 configuration register */
    using RISAF_REG1_CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief base region enable */
    using RISAF_REG1_CFGR_BREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Base region x is disabled. Access control of primary region 0 (secure, privileged) applies to any access between region x start and end addresses. Associated subregions are also disabled. (value: 0)
     *          - B_0x1: Base region x is enabled. Access controls defined in region x apply to any access between region x start and end addresses. (value: 1)
     */
        /** @brief Base region x is disabled. Access control of primary region 0 (secure, privileged) applies to any access between region x start and end addresses. Associated subregions are also disabled. */
    constexpr std::uint32_t RISAF_REG1_CFGR_BREN_B_0x0 = 0;
        /** @brief Base region x is enabled. Access controls defined in region x apply to any access between region x start and end addresses. */
    constexpr std::uint32_t RISAF_REG1_CFGR_BREN_B_0x1 = 1;

    /** @brief secure region */
    using RISAF_REG1_CFGR_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Only non-secure requests can access region x. SEC value in RISAF_REGx_zCFGR is internally treated as zeroed by RISAF (only non-secure requests to subregions). (value: 0)
     *          - B_0x1: Only secure requests can access region x, and optional subregions can be defined as secure or non-secure. (value: 1)
     */
        /** @brief Only non-secure requests can access region x. SEC value in RISAF_REGx_zCFGR is internally treated as zeroed by RISAF (only non-secure requests to subregions). */
    constexpr std::uint32_t RISAF_REG1_CFGR_SEC_B_0x0 = 0;
        /** @brief Only secure requests can access region x, and optional subregions can be defined as secure or non-secure. */
    constexpr std::uint32_t RISAF_REG1_CFGR_SEC_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG1_CFGR_PRIVC0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG1_CFGR_PRIVC0_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG1_CFGR_PRIVC0_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG1_CFGR_PRIVC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG1_CFGR_PRIVC1_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG1_CFGR_PRIVC1_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG1_CFGR_PRIVC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG1_CFGR_PRIVC2_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG1_CFGR_PRIVC2_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG1_CFGR_PRIVC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG1_CFGR_PRIVC3_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG1_CFGR_PRIVC3_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG1_CFGR_PRIVC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG1_CFGR_PRIVC4_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG1_CFGR_PRIVC4_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG1_CFGR_PRIVC5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG1_CFGR_PRIVC5_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG1_CFGR_PRIVC5_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG1_CFGR_PRIVC6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG1_CFGR_PRIVC6_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG1_CFGR_PRIVC6_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG1_CFGR_PRIVC7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG1_CFGR_PRIVC7_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG1_CFGR_PRIVC7_B_0x1 = 1;

    /** @brief RISAF region 1 start-address register */
    using RISAF_REG1_STARTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Base region address start */
    using RISAF_REG1_STARTR_BADDSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 1 end-address register */
    using RISAF_REG1_ENDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Base region address end */
    using RISAF_REG1_ENDR_BADDEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 1 CID configuration register */
    using RISAF_REG1_CIDCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief read enable for compartment y */
    using RISAF_REG1_CIDCFGR_RDENC0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG1_CIDCFGR_RDENC0_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG1_CIDCFGR_RDENC0_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG1_CIDCFGR_RDENC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG1_CIDCFGR_RDENC1_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG1_CIDCFGR_RDENC1_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG1_CIDCFGR_RDENC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG1_CIDCFGR_RDENC2_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG1_CIDCFGR_RDENC2_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG1_CIDCFGR_RDENC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG1_CIDCFGR_RDENC3_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG1_CIDCFGR_RDENC3_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG1_CIDCFGR_RDENC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG1_CIDCFGR_RDENC4_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG1_CIDCFGR_RDENC4_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG1_CIDCFGR_RDENC5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG1_CIDCFGR_RDENC5_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG1_CIDCFGR_RDENC5_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG1_CIDCFGR_RDENC6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG1_CIDCFGR_RDENC6_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG1_CIDCFGR_RDENC6_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG1_CIDCFGR_RDENC7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG1_CIDCFGR_RDENC7_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG1_CIDCFGR_RDENC7_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG1_CIDCFGR_WRENC0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG1_CIDCFGR_WRENC0_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG1_CIDCFGR_WRENC0_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG1_CIDCFGR_WRENC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG1_CIDCFGR_WRENC1_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG1_CIDCFGR_WRENC1_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG1_CIDCFGR_WRENC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG1_CIDCFGR_WRENC2_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG1_CIDCFGR_WRENC2_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG1_CIDCFGR_WRENC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG1_CIDCFGR_WRENC3_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG1_CIDCFGR_WRENC3_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG1_CIDCFGR_WRENC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG1_CIDCFGR_WRENC4_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG1_CIDCFGR_WRENC4_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG1_CIDCFGR_WRENC5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG1_CIDCFGR_WRENC5_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG1_CIDCFGR_WRENC5_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG1_CIDCFGR_WRENC6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG1_CIDCFGR_WRENC6_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG1_CIDCFGR_WRENC6_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG1_CIDCFGR_WRENC7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG1_CIDCFGR_WRENC7_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG1_CIDCFGR_WRENC7_B_0x1 = 1;

    /** @brief RISAF region 2 configuration register */
    using RISAF_REG2_CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x80, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief base region enable */
    using RISAF_REG2_CFGR_BREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Base region x is disabled. Access control of primary region 0 (secure, privileged) applies to any access between region x start and end addresses. Associated subregions are also disabled. (value: 0)
     *          - B_0x1: Base region x is enabled. Access controls defined in region x apply to any access between region x start and end addresses. (value: 1)
     */
        /** @brief Base region x is disabled. Access control of primary region 0 (secure, privileged) applies to any access between region x start and end addresses. Associated subregions are also disabled. */
    constexpr std::uint32_t RISAF_REG2_CFGR_BREN_B_0x0 = 0;
        /** @brief Base region x is enabled. Access controls defined in region x apply to any access between region x start and end addresses. */
    constexpr std::uint32_t RISAF_REG2_CFGR_BREN_B_0x1 = 1;

    /** @brief secure region */
    using RISAF_REG2_CFGR_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Only non-secure requests can access region x. SEC value in RISAF_REGx_zCFGR is internally treated as zeroed by RISAF (only non-secure requests to subregions). (value: 0)
     *          - B_0x1: Only secure requests can access region x, and optional subregions can be defined as secure or non-secure. (value: 1)
     */
        /** @brief Only non-secure requests can access region x. SEC value in RISAF_REGx_zCFGR is internally treated as zeroed by RISAF (only non-secure requests to subregions). */
    constexpr std::uint32_t RISAF_REG2_CFGR_SEC_B_0x0 = 0;
        /** @brief Only secure requests can access region x, and optional subregions can be defined as secure or non-secure. */
    constexpr std::uint32_t RISAF_REG2_CFGR_SEC_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG2_CFGR_PRIVC0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG2_CFGR_PRIVC0_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG2_CFGR_PRIVC0_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG2_CFGR_PRIVC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG2_CFGR_PRIVC1_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG2_CFGR_PRIVC1_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG2_CFGR_PRIVC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG2_CFGR_PRIVC2_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG2_CFGR_PRIVC2_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG2_CFGR_PRIVC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG2_CFGR_PRIVC3_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG2_CFGR_PRIVC3_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG2_CFGR_PRIVC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG2_CFGR_PRIVC4_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG2_CFGR_PRIVC4_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG2_CFGR_PRIVC5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG2_CFGR_PRIVC5_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG2_CFGR_PRIVC5_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG2_CFGR_PRIVC6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG2_CFGR_PRIVC6_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG2_CFGR_PRIVC6_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG2_CFGR_PRIVC7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG2_CFGR_PRIVC7_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG2_CFGR_PRIVC7_B_0x1 = 1;

    /** @brief RISAF region 2 start-address register */
    using RISAF_REG2_STARTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x84, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Base region address start */
    using RISAF_REG2_STARTR_BADDSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 2 end-address register */
    using RISAF_REG2_ENDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x88, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Base region address end */
    using RISAF_REG2_ENDR_BADDEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 2 CID configuration register */
    using RISAF_REG2_CIDCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief read enable for compartment y */
    using RISAF_REG2_CIDCFGR_RDENC0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG2_CIDCFGR_RDENC0_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG2_CIDCFGR_RDENC0_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG2_CIDCFGR_RDENC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG2_CIDCFGR_RDENC1_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG2_CIDCFGR_RDENC1_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG2_CIDCFGR_RDENC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG2_CIDCFGR_RDENC2_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG2_CIDCFGR_RDENC2_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG2_CIDCFGR_RDENC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG2_CIDCFGR_RDENC3_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG2_CIDCFGR_RDENC3_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG2_CIDCFGR_RDENC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG2_CIDCFGR_RDENC4_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG2_CIDCFGR_RDENC4_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG2_CIDCFGR_RDENC5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG2_CIDCFGR_RDENC5_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG2_CIDCFGR_RDENC5_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG2_CIDCFGR_RDENC6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG2_CIDCFGR_RDENC6_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG2_CIDCFGR_RDENC6_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG2_CIDCFGR_RDENC7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG2_CIDCFGR_RDENC7_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG2_CIDCFGR_RDENC7_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG2_CIDCFGR_WRENC0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG2_CIDCFGR_WRENC0_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG2_CIDCFGR_WRENC0_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG2_CIDCFGR_WRENC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG2_CIDCFGR_WRENC1_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG2_CIDCFGR_WRENC1_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG2_CIDCFGR_WRENC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG2_CIDCFGR_WRENC2_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG2_CIDCFGR_WRENC2_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG2_CIDCFGR_WRENC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG2_CIDCFGR_WRENC3_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG2_CIDCFGR_WRENC3_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG2_CIDCFGR_WRENC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG2_CIDCFGR_WRENC4_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG2_CIDCFGR_WRENC4_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG2_CIDCFGR_WRENC5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG2_CIDCFGR_WRENC5_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG2_CIDCFGR_WRENC5_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG2_CIDCFGR_WRENC6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG2_CIDCFGR_WRENC6_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG2_CIDCFGR_WRENC6_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG2_CIDCFGR_WRENC7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG2_CIDCFGR_WRENC7_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG2_CIDCFGR_WRENC7_B_0x1 = 1;

    /** @brief RISAF region 3 configuration register */
    using RISAF_REG3_CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief base region enable */
    using RISAF_REG3_CFGR_BREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Base region x is disabled. Access control of primary region 0 (secure, privileged) applies to any access between region x start and end addresses. Associated subregions are also disabled. (value: 0)
     *          - B_0x1: Base region x is enabled. Access controls defined in region x apply to any access between region x start and end addresses. (value: 1)
     */
        /** @brief Base region x is disabled. Access control of primary region 0 (secure, privileged) applies to any access between region x start and end addresses. Associated subregions are also disabled. */
    constexpr std::uint32_t RISAF_REG3_CFGR_BREN_B_0x0 = 0;
        /** @brief Base region x is enabled. Access controls defined in region x apply to any access between region x start and end addresses. */
    constexpr std::uint32_t RISAF_REG3_CFGR_BREN_B_0x1 = 1;

    /** @brief secure region */
    using RISAF_REG3_CFGR_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Only non-secure requests can access region x. SEC value in RISAF_REGx_zCFGR is internally treated as zeroed by RISAF (only non-secure requests to subregions). (value: 0)
     *          - B_0x1: Only secure requests can access region x, and optional subregions can be defined as secure or non-secure. (value: 1)
     */
        /** @brief Only non-secure requests can access region x. SEC value in RISAF_REGx_zCFGR is internally treated as zeroed by RISAF (only non-secure requests to subregions). */
    constexpr std::uint32_t RISAF_REG3_CFGR_SEC_B_0x0 = 0;
        /** @brief Only secure requests can access region x, and optional subregions can be defined as secure or non-secure. */
    constexpr std::uint32_t RISAF_REG3_CFGR_SEC_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG3_CFGR_PRIVC0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG3_CFGR_PRIVC0_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG3_CFGR_PRIVC0_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG3_CFGR_PRIVC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG3_CFGR_PRIVC1_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG3_CFGR_PRIVC1_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG3_CFGR_PRIVC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG3_CFGR_PRIVC2_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG3_CFGR_PRIVC2_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG3_CFGR_PRIVC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG3_CFGR_PRIVC3_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG3_CFGR_PRIVC3_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG3_CFGR_PRIVC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG3_CFGR_PRIVC4_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG3_CFGR_PRIVC4_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG3_CFGR_PRIVC5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG3_CFGR_PRIVC5_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG3_CFGR_PRIVC5_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG3_CFGR_PRIVC6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG3_CFGR_PRIVC6_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG3_CFGR_PRIVC6_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG3_CFGR_PRIVC7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG3_CFGR_PRIVC7_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG3_CFGR_PRIVC7_B_0x1 = 1;

    /** @brief RISAF region 3 start-address register */
    using RISAF_REG3_STARTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Base region address start */
    using RISAF_REG3_STARTR_BADDSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 3 end-address register */
    using RISAF_REG3_ENDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Base region address end */
    using RISAF_REG3_ENDR_BADDEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 3 CID configuration register */
    using RISAF_REG3_CIDCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xCC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief read enable for compartment y */
    using RISAF_REG3_CIDCFGR_RDENC0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG3_CIDCFGR_RDENC0_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG3_CIDCFGR_RDENC0_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG3_CIDCFGR_RDENC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG3_CIDCFGR_RDENC1_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG3_CIDCFGR_RDENC1_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG3_CIDCFGR_RDENC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG3_CIDCFGR_RDENC2_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG3_CIDCFGR_RDENC2_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG3_CIDCFGR_RDENC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG3_CIDCFGR_RDENC3_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG3_CIDCFGR_RDENC3_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG3_CIDCFGR_RDENC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG3_CIDCFGR_RDENC4_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG3_CIDCFGR_RDENC4_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG3_CIDCFGR_RDENC5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG3_CIDCFGR_RDENC5_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG3_CIDCFGR_RDENC5_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG3_CIDCFGR_RDENC6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG3_CIDCFGR_RDENC6_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG3_CIDCFGR_RDENC6_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG3_CIDCFGR_RDENC7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG3_CIDCFGR_RDENC7_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG3_CIDCFGR_RDENC7_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG3_CIDCFGR_WRENC0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG3_CIDCFGR_WRENC0_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG3_CIDCFGR_WRENC0_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG3_CIDCFGR_WRENC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG3_CIDCFGR_WRENC1_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG3_CIDCFGR_WRENC1_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG3_CIDCFGR_WRENC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG3_CIDCFGR_WRENC2_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG3_CIDCFGR_WRENC2_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG3_CIDCFGR_WRENC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG3_CIDCFGR_WRENC3_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG3_CIDCFGR_WRENC3_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG3_CIDCFGR_WRENC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG3_CIDCFGR_WRENC4_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG3_CIDCFGR_WRENC4_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG3_CIDCFGR_WRENC5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG3_CIDCFGR_WRENC5_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG3_CIDCFGR_WRENC5_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG3_CIDCFGR_WRENC6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG3_CIDCFGR_WRENC6_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG3_CIDCFGR_WRENC6_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG3_CIDCFGR_WRENC7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG3_CIDCFGR_WRENC7_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG3_CIDCFGR_WRENC7_B_0x1 = 1;

    /** @brief RISAF region 4 configuration register */
    using RISAF_REG4_CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x100, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief base region enable */
    using RISAF_REG4_CFGR_BREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Base region x is disabled. Access control of primary region 0 (secure, privileged) applies to any access between region x start and end addresses. Associated subregions are also disabled. (value: 0)
     *          - B_0x1: Base region x is enabled. Access controls defined in region x apply to any access between region x start and end addresses. (value: 1)
     */
        /** @brief Base region x is disabled. Access control of primary region 0 (secure, privileged) applies to any access between region x start and end addresses. Associated subregions are also disabled. */
    constexpr std::uint32_t RISAF_REG4_CFGR_BREN_B_0x0 = 0;
        /** @brief Base region x is enabled. Access controls defined in region x apply to any access between region x start and end addresses. */
    constexpr std::uint32_t RISAF_REG4_CFGR_BREN_B_0x1 = 1;

    /** @brief secure region */
    using RISAF_REG4_CFGR_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Only non-secure requests can access region x. SEC value in RISAF_REGx_zCFGR is internally treated as zeroed by RISAF (only non-secure requests to subregions). (value: 0)
     *          - B_0x1: Only secure requests can access region x, and optional subregions can be defined as secure or non-secure. (value: 1)
     */
        /** @brief Only non-secure requests can access region x. SEC value in RISAF_REGx_zCFGR is internally treated as zeroed by RISAF (only non-secure requests to subregions). */
    constexpr std::uint32_t RISAF_REG4_CFGR_SEC_B_0x0 = 0;
        /** @brief Only secure requests can access region x, and optional subregions can be defined as secure or non-secure. */
    constexpr std::uint32_t RISAF_REG4_CFGR_SEC_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG4_CFGR_PRIVC0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG4_CFGR_PRIVC0_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG4_CFGR_PRIVC0_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG4_CFGR_PRIVC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG4_CFGR_PRIVC1_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG4_CFGR_PRIVC1_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG4_CFGR_PRIVC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG4_CFGR_PRIVC2_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG4_CFGR_PRIVC2_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG4_CFGR_PRIVC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG4_CFGR_PRIVC3_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG4_CFGR_PRIVC3_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG4_CFGR_PRIVC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG4_CFGR_PRIVC4_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG4_CFGR_PRIVC4_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG4_CFGR_PRIVC5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG4_CFGR_PRIVC5_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG4_CFGR_PRIVC5_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG4_CFGR_PRIVC6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG4_CFGR_PRIVC6_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG4_CFGR_PRIVC6_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG4_CFGR_PRIVC7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG4_CFGR_PRIVC7_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG4_CFGR_PRIVC7_B_0x1 = 1;

    /** @brief RISAF region 4 start-address register */
    using RISAF_REG4_STARTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x104, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Base region address start */
    using RISAF_REG4_STARTR_BADDSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 4 end-address register */
    using RISAF_REG4_ENDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x108, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Base region address end */
    using RISAF_REG4_ENDR_BADDEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 4 CID configuration register */
    using RISAF_REG4_CIDCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief read enable for compartment y */
    using RISAF_REG4_CIDCFGR_RDENC0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG4_CIDCFGR_RDENC0_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG4_CIDCFGR_RDENC0_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG4_CIDCFGR_RDENC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG4_CIDCFGR_RDENC1_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG4_CIDCFGR_RDENC1_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG4_CIDCFGR_RDENC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG4_CIDCFGR_RDENC2_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG4_CIDCFGR_RDENC2_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG4_CIDCFGR_RDENC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG4_CIDCFGR_RDENC3_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG4_CIDCFGR_RDENC3_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG4_CIDCFGR_RDENC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG4_CIDCFGR_RDENC4_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG4_CIDCFGR_RDENC4_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG4_CIDCFGR_RDENC5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG4_CIDCFGR_RDENC5_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG4_CIDCFGR_RDENC5_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG4_CIDCFGR_RDENC6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG4_CIDCFGR_RDENC6_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG4_CIDCFGR_RDENC6_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG4_CIDCFGR_RDENC7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG4_CIDCFGR_RDENC7_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG4_CIDCFGR_RDENC7_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG4_CIDCFGR_WRENC0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG4_CIDCFGR_WRENC0_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG4_CIDCFGR_WRENC0_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG4_CIDCFGR_WRENC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG4_CIDCFGR_WRENC1_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG4_CIDCFGR_WRENC1_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG4_CIDCFGR_WRENC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG4_CIDCFGR_WRENC2_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG4_CIDCFGR_WRENC2_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG4_CIDCFGR_WRENC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG4_CIDCFGR_WRENC3_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG4_CIDCFGR_WRENC3_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG4_CIDCFGR_WRENC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG4_CIDCFGR_WRENC4_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG4_CIDCFGR_WRENC4_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG4_CIDCFGR_WRENC5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG4_CIDCFGR_WRENC5_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG4_CIDCFGR_WRENC5_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG4_CIDCFGR_WRENC6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG4_CIDCFGR_WRENC6_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG4_CIDCFGR_WRENC6_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG4_CIDCFGR_WRENC7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG4_CIDCFGR_WRENC7_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG4_CIDCFGR_WRENC7_B_0x1 = 1;

    /** @brief RISAF region 5 configuration register */
    using RISAF_REG5_CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x140, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief base region enable */
    using RISAF_REG5_CFGR_BREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Base region x is disabled. Access control of primary region 0 (secure, privileged) applies to any access between region x start and end addresses. Associated subregions are also disabled. (value: 0)
     *          - B_0x1: Base region x is enabled. Access controls defined in region x apply to any access between region x start and end addresses. (value: 1)
     */
        /** @brief Base region x is disabled. Access control of primary region 0 (secure, privileged) applies to any access between region x start and end addresses. Associated subregions are also disabled. */
    constexpr std::uint32_t RISAF_REG5_CFGR_BREN_B_0x0 = 0;
        /** @brief Base region x is enabled. Access controls defined in region x apply to any access between region x start and end addresses. */
    constexpr std::uint32_t RISAF_REG5_CFGR_BREN_B_0x1 = 1;

    /** @brief secure region */
    using RISAF_REG5_CFGR_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Only non-secure requests can access region x. SEC value in RISAF_REGx_zCFGR is internally treated as zeroed by RISAF (only non-secure requests to subregions). (value: 0)
     *          - B_0x1: Only secure requests can access region x, and optional subregions can be defined as secure or non-secure. (value: 1)
     */
        /** @brief Only non-secure requests can access region x. SEC value in RISAF_REGx_zCFGR is internally treated as zeroed by RISAF (only non-secure requests to subregions). */
    constexpr std::uint32_t RISAF_REG5_CFGR_SEC_B_0x0 = 0;
        /** @brief Only secure requests can access region x, and optional subregions can be defined as secure or non-secure. */
    constexpr std::uint32_t RISAF_REG5_CFGR_SEC_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG5_CFGR_PRIVC0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG5_CFGR_PRIVC0_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG5_CFGR_PRIVC0_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG5_CFGR_PRIVC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG5_CFGR_PRIVC1_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG5_CFGR_PRIVC1_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG5_CFGR_PRIVC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG5_CFGR_PRIVC2_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG5_CFGR_PRIVC2_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG5_CFGR_PRIVC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG5_CFGR_PRIVC3_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG5_CFGR_PRIVC3_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG5_CFGR_PRIVC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG5_CFGR_PRIVC4_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG5_CFGR_PRIVC4_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG5_CFGR_PRIVC5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG5_CFGR_PRIVC5_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG5_CFGR_PRIVC5_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG5_CFGR_PRIVC6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG5_CFGR_PRIVC6_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG5_CFGR_PRIVC6_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG5_CFGR_PRIVC7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG5_CFGR_PRIVC7_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG5_CFGR_PRIVC7_B_0x1 = 1;

    /** @brief RISAF region 5 start-address register */
    using RISAF_REG5_STARTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x144, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Base region address start */
    using RISAF_REG5_STARTR_BADDSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 5 end-address register */
    using RISAF_REG5_ENDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x148, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Base region address end */
    using RISAF_REG5_ENDR_BADDEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 5 CID configuration register */
    using RISAF_REG5_CIDCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief read enable for compartment y */
    using RISAF_REG5_CIDCFGR_RDENC0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG5_CIDCFGR_RDENC0_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG5_CIDCFGR_RDENC0_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG5_CIDCFGR_RDENC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG5_CIDCFGR_RDENC1_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG5_CIDCFGR_RDENC1_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG5_CIDCFGR_RDENC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG5_CIDCFGR_RDENC2_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG5_CIDCFGR_RDENC2_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG5_CIDCFGR_RDENC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG5_CIDCFGR_RDENC3_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG5_CIDCFGR_RDENC3_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG5_CIDCFGR_RDENC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG5_CIDCFGR_RDENC4_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG5_CIDCFGR_RDENC4_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG5_CIDCFGR_RDENC5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG5_CIDCFGR_RDENC5_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG5_CIDCFGR_RDENC5_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG5_CIDCFGR_RDENC6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG5_CIDCFGR_RDENC6_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG5_CIDCFGR_RDENC6_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG5_CIDCFGR_RDENC7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG5_CIDCFGR_RDENC7_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG5_CIDCFGR_RDENC7_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG5_CIDCFGR_WRENC0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG5_CIDCFGR_WRENC0_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG5_CIDCFGR_WRENC0_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG5_CIDCFGR_WRENC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG5_CIDCFGR_WRENC1_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG5_CIDCFGR_WRENC1_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG5_CIDCFGR_WRENC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG5_CIDCFGR_WRENC2_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG5_CIDCFGR_WRENC2_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG5_CIDCFGR_WRENC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG5_CIDCFGR_WRENC3_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG5_CIDCFGR_WRENC3_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG5_CIDCFGR_WRENC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG5_CIDCFGR_WRENC4_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG5_CIDCFGR_WRENC4_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG5_CIDCFGR_WRENC5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG5_CIDCFGR_WRENC5_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG5_CIDCFGR_WRENC5_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG5_CIDCFGR_WRENC6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG5_CIDCFGR_WRENC6_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG5_CIDCFGR_WRENC6_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG5_CIDCFGR_WRENC7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG5_CIDCFGR_WRENC7_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG5_CIDCFGR_WRENC7_B_0x1 = 1;

    /** @brief RISAF region 6 configuration register */
    using RISAF_REG6_CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x180, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief base region enable */
    using RISAF_REG6_CFGR_BREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Base region x is disabled. Access control of primary region 0 (secure, privileged) applies to any access between region x start and end addresses. Associated subregions are also disabled. (value: 0)
     *          - B_0x1: Base region x is enabled. Access controls defined in region x apply to any access between region x start and end addresses. (value: 1)
     */
        /** @brief Base region x is disabled. Access control of primary region 0 (secure, privileged) applies to any access between region x start and end addresses. Associated subregions are also disabled. */
    constexpr std::uint32_t RISAF_REG6_CFGR_BREN_B_0x0 = 0;
        /** @brief Base region x is enabled. Access controls defined in region x apply to any access between region x start and end addresses. */
    constexpr std::uint32_t RISAF_REG6_CFGR_BREN_B_0x1 = 1;

    /** @brief secure region */
    using RISAF_REG6_CFGR_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Only non-secure requests can access region x. SEC value in RISAF_REGx_zCFGR is internally treated as zeroed by RISAF (only non-secure requests to subregions). (value: 0)
     *          - B_0x1: Only secure requests can access region x, and optional subregions can be defined as secure or non-secure. (value: 1)
     */
        /** @brief Only non-secure requests can access region x. SEC value in RISAF_REGx_zCFGR is internally treated as zeroed by RISAF (only non-secure requests to subregions). */
    constexpr std::uint32_t RISAF_REG6_CFGR_SEC_B_0x0 = 0;
        /** @brief Only secure requests can access region x, and optional subregions can be defined as secure or non-secure. */
    constexpr std::uint32_t RISAF_REG6_CFGR_SEC_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG6_CFGR_PRIVC0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG6_CFGR_PRIVC0_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG6_CFGR_PRIVC0_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG6_CFGR_PRIVC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG6_CFGR_PRIVC1_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG6_CFGR_PRIVC1_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG6_CFGR_PRIVC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG6_CFGR_PRIVC2_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG6_CFGR_PRIVC2_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG6_CFGR_PRIVC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG6_CFGR_PRIVC3_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG6_CFGR_PRIVC3_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG6_CFGR_PRIVC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG6_CFGR_PRIVC4_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG6_CFGR_PRIVC4_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG6_CFGR_PRIVC5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG6_CFGR_PRIVC5_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG6_CFGR_PRIVC5_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG6_CFGR_PRIVC6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG6_CFGR_PRIVC6_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG6_CFGR_PRIVC6_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG6_CFGR_PRIVC7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG6_CFGR_PRIVC7_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG6_CFGR_PRIVC7_B_0x1 = 1;

    /** @brief RISAF region 6 start-address register */
    using RISAF_REG6_STARTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x184, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Base region address start */
    using RISAF_REG6_STARTR_BADDSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 6 end-address register */
    using RISAF_REG6_ENDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x188, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Base region address end */
    using RISAF_REG6_ENDR_BADDEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 6 CID configuration register */
    using RISAF_REG6_CIDCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief read enable for compartment y */
    using RISAF_REG6_CIDCFGR_RDENC0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG6_CIDCFGR_RDENC0_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG6_CIDCFGR_RDENC0_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG6_CIDCFGR_RDENC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG6_CIDCFGR_RDENC1_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG6_CIDCFGR_RDENC1_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG6_CIDCFGR_RDENC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG6_CIDCFGR_RDENC2_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG6_CIDCFGR_RDENC2_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG6_CIDCFGR_RDENC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG6_CIDCFGR_RDENC3_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG6_CIDCFGR_RDENC3_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG6_CIDCFGR_RDENC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG6_CIDCFGR_RDENC4_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG6_CIDCFGR_RDENC4_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG6_CIDCFGR_RDENC5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG6_CIDCFGR_RDENC5_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG6_CIDCFGR_RDENC5_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG6_CIDCFGR_RDENC6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG6_CIDCFGR_RDENC6_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG6_CIDCFGR_RDENC6_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG6_CIDCFGR_RDENC7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG6_CIDCFGR_RDENC7_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG6_CIDCFGR_RDENC7_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG6_CIDCFGR_WRENC0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG6_CIDCFGR_WRENC0_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG6_CIDCFGR_WRENC0_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG6_CIDCFGR_WRENC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG6_CIDCFGR_WRENC1_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG6_CIDCFGR_WRENC1_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG6_CIDCFGR_WRENC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG6_CIDCFGR_WRENC2_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG6_CIDCFGR_WRENC2_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG6_CIDCFGR_WRENC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG6_CIDCFGR_WRENC3_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG6_CIDCFGR_WRENC3_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG6_CIDCFGR_WRENC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG6_CIDCFGR_WRENC4_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG6_CIDCFGR_WRENC4_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG6_CIDCFGR_WRENC5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG6_CIDCFGR_WRENC5_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG6_CIDCFGR_WRENC5_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG6_CIDCFGR_WRENC6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG6_CIDCFGR_WRENC6_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG6_CIDCFGR_WRENC6_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG6_CIDCFGR_WRENC7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG6_CIDCFGR_WRENC7_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG6_CIDCFGR_WRENC7_B_0x1 = 1;

    /** @brief RISAF region 7 configuration register */
    using RISAF_REG7_CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief base region enable */
    using RISAF_REG7_CFGR_BREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Base region x is disabled. Access control of primary region 0 (secure, privileged) applies to any access between region x start and end addresses. Associated subregions are also disabled. (value: 0)
     *          - B_0x1: Base region x is enabled. Access controls defined in region x apply to any access between region x start and end addresses. (value: 1)
     */
        /** @brief Base region x is disabled. Access control of primary region 0 (secure, privileged) applies to any access between region x start and end addresses. Associated subregions are also disabled. */
    constexpr std::uint32_t RISAF_REG7_CFGR_BREN_B_0x0 = 0;
        /** @brief Base region x is enabled. Access controls defined in region x apply to any access between region x start and end addresses. */
    constexpr std::uint32_t RISAF_REG7_CFGR_BREN_B_0x1 = 1;

    /** @brief secure region */
    using RISAF_REG7_CFGR_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Only non-secure requests can access region x. SEC value in RISAF_REGx_zCFGR is internally treated as zeroed by RISAF (only non-secure requests to subregions). (value: 0)
     *          - B_0x1: Only secure requests can access region x, and optional subregions can be defined as secure or non-secure. (value: 1)
     */
        /** @brief Only non-secure requests can access region x. SEC value in RISAF_REGx_zCFGR is internally treated as zeroed by RISAF (only non-secure requests to subregions). */
    constexpr std::uint32_t RISAF_REG7_CFGR_SEC_B_0x0 = 0;
        /** @brief Only secure requests can access region x, and optional subregions can be defined as secure or non-secure. */
    constexpr std::uint32_t RISAF_REG7_CFGR_SEC_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG7_CFGR_PRIVC0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG7_CFGR_PRIVC0_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG7_CFGR_PRIVC0_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG7_CFGR_PRIVC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG7_CFGR_PRIVC1_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG7_CFGR_PRIVC1_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG7_CFGR_PRIVC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG7_CFGR_PRIVC2_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG7_CFGR_PRIVC2_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG7_CFGR_PRIVC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG7_CFGR_PRIVC3_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG7_CFGR_PRIVC3_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG7_CFGR_PRIVC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG7_CFGR_PRIVC4_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG7_CFGR_PRIVC4_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG7_CFGR_PRIVC5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG7_CFGR_PRIVC5_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG7_CFGR_PRIVC5_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG7_CFGR_PRIVC6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG7_CFGR_PRIVC6_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG7_CFGR_PRIVC6_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG7_CFGR_PRIVC7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG7_CFGR_PRIVC7_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG7_CFGR_PRIVC7_B_0x1 = 1;

    /** @brief RISAF region 7 start-address register */
    using RISAF_REG7_STARTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Base region address start */
    using RISAF_REG7_STARTR_BADDSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 7 end-address register */
    using RISAF_REG7_ENDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Base region address end */
    using RISAF_REG7_ENDR_BADDEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 7 CID configuration register */
    using RISAF_REG7_CIDCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1CC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief read enable for compartment y */
    using RISAF_REG7_CIDCFGR_RDENC0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG7_CIDCFGR_RDENC0_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG7_CIDCFGR_RDENC0_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG7_CIDCFGR_RDENC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG7_CIDCFGR_RDENC1_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG7_CIDCFGR_RDENC1_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG7_CIDCFGR_RDENC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG7_CIDCFGR_RDENC2_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG7_CIDCFGR_RDENC2_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG7_CIDCFGR_RDENC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG7_CIDCFGR_RDENC3_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG7_CIDCFGR_RDENC3_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG7_CIDCFGR_RDENC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG7_CIDCFGR_RDENC4_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG7_CIDCFGR_RDENC4_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG7_CIDCFGR_RDENC5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG7_CIDCFGR_RDENC5_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG7_CIDCFGR_RDENC5_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG7_CIDCFGR_RDENC6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG7_CIDCFGR_RDENC6_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG7_CIDCFGR_RDENC6_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG7_CIDCFGR_RDENC7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG7_CIDCFGR_RDENC7_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG7_CIDCFGR_RDENC7_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG7_CIDCFGR_WRENC0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG7_CIDCFGR_WRENC0_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG7_CIDCFGR_WRENC0_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG7_CIDCFGR_WRENC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG7_CIDCFGR_WRENC1_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG7_CIDCFGR_WRENC1_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG7_CIDCFGR_WRENC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG7_CIDCFGR_WRENC2_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG7_CIDCFGR_WRENC2_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG7_CIDCFGR_WRENC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG7_CIDCFGR_WRENC3_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG7_CIDCFGR_WRENC3_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG7_CIDCFGR_WRENC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG7_CIDCFGR_WRENC4_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG7_CIDCFGR_WRENC4_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG7_CIDCFGR_WRENC5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG7_CIDCFGR_WRENC5_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG7_CIDCFGR_WRENC5_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG7_CIDCFGR_WRENC6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG7_CIDCFGR_WRENC6_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG7_CIDCFGR_WRENC6_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG7_CIDCFGR_WRENC7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG7_CIDCFGR_WRENC7_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG7_CIDCFGR_WRENC7_B_0x1 = 1;

    /** @brief RISAF region 8 configuration register */
    using RISAF_REG8_CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x200, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief base region enable */
    using RISAF_REG8_CFGR_BREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Base region x is disabled. Access control of primary region 0 (secure, privileged) applies to any access between region x start and end addresses. Associated subregions are also disabled. (value: 0)
     *          - B_0x1: Base region x is enabled. Access controls defined in region x apply to any access between region x start and end addresses. (value: 1)
     */
        /** @brief Base region x is disabled. Access control of primary region 0 (secure, privileged) applies to any access between region x start and end addresses. Associated subregions are also disabled. */
    constexpr std::uint32_t RISAF_REG8_CFGR_BREN_B_0x0 = 0;
        /** @brief Base region x is enabled. Access controls defined in region x apply to any access between region x start and end addresses. */
    constexpr std::uint32_t RISAF_REG8_CFGR_BREN_B_0x1 = 1;

    /** @brief secure region */
    using RISAF_REG8_CFGR_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Only non-secure requests can access region x. SEC value in RISAF_REGx_zCFGR is internally treated as zeroed by RISAF (only non-secure requests to subregions). (value: 0)
     *          - B_0x1: Only secure requests can access region x, and optional subregions can be defined as secure or non-secure. (value: 1)
     */
        /** @brief Only non-secure requests can access region x. SEC value in RISAF_REGx_zCFGR is internally treated as zeroed by RISAF (only non-secure requests to subregions). */
    constexpr std::uint32_t RISAF_REG8_CFGR_SEC_B_0x0 = 0;
        /** @brief Only secure requests can access region x, and optional subregions can be defined as secure or non-secure. */
    constexpr std::uint32_t RISAF_REG8_CFGR_SEC_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG8_CFGR_PRIVC0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG8_CFGR_PRIVC0_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG8_CFGR_PRIVC0_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG8_CFGR_PRIVC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG8_CFGR_PRIVC1_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG8_CFGR_PRIVC1_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG8_CFGR_PRIVC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG8_CFGR_PRIVC2_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG8_CFGR_PRIVC2_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG8_CFGR_PRIVC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG8_CFGR_PRIVC3_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG8_CFGR_PRIVC3_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG8_CFGR_PRIVC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG8_CFGR_PRIVC4_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG8_CFGR_PRIVC4_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG8_CFGR_PRIVC5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG8_CFGR_PRIVC5_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG8_CFGR_PRIVC5_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG8_CFGR_PRIVC6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG8_CFGR_PRIVC6_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG8_CFGR_PRIVC6_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG8_CFGR_PRIVC7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG8_CFGR_PRIVC7_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG8_CFGR_PRIVC7_B_0x1 = 1;

    /** @brief RISAF region 8 start-address register */
    using RISAF_REG8_STARTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x204, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Base region address start */
    using RISAF_REG8_STARTR_BADDSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 8 end-address register */
    using RISAF_REG8_ENDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x208, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Base region address end */
    using RISAF_REG8_ENDR_BADDEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 8 CID configuration register */
    using RISAF_REG8_CIDCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief read enable for compartment y */
    using RISAF_REG8_CIDCFGR_RDENC0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG8_CIDCFGR_RDENC0_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG8_CIDCFGR_RDENC0_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG8_CIDCFGR_RDENC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG8_CIDCFGR_RDENC1_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG8_CIDCFGR_RDENC1_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG8_CIDCFGR_RDENC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG8_CIDCFGR_RDENC2_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG8_CIDCFGR_RDENC2_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG8_CIDCFGR_RDENC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG8_CIDCFGR_RDENC3_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG8_CIDCFGR_RDENC3_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG8_CIDCFGR_RDENC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG8_CIDCFGR_RDENC4_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG8_CIDCFGR_RDENC4_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG8_CIDCFGR_RDENC5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG8_CIDCFGR_RDENC5_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG8_CIDCFGR_RDENC5_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG8_CIDCFGR_RDENC6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG8_CIDCFGR_RDENC6_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG8_CIDCFGR_RDENC6_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG8_CIDCFGR_RDENC7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG8_CIDCFGR_RDENC7_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG8_CIDCFGR_RDENC7_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG8_CIDCFGR_WRENC0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG8_CIDCFGR_WRENC0_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG8_CIDCFGR_WRENC0_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG8_CIDCFGR_WRENC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG8_CIDCFGR_WRENC1_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG8_CIDCFGR_WRENC1_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG8_CIDCFGR_WRENC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG8_CIDCFGR_WRENC2_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG8_CIDCFGR_WRENC2_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG8_CIDCFGR_WRENC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG8_CIDCFGR_WRENC3_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG8_CIDCFGR_WRENC3_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG8_CIDCFGR_WRENC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG8_CIDCFGR_WRENC4_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG8_CIDCFGR_WRENC4_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG8_CIDCFGR_WRENC5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG8_CIDCFGR_WRENC5_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG8_CIDCFGR_WRENC5_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG8_CIDCFGR_WRENC6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG8_CIDCFGR_WRENC6_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG8_CIDCFGR_WRENC6_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG8_CIDCFGR_WRENC7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG8_CIDCFGR_WRENC7_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG8_CIDCFGR_WRENC7_B_0x1 = 1;

    /** @brief RISAF region 9 configuration register */
    using RISAF_REG9_CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x240, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief base region enable */
    using RISAF_REG9_CFGR_BREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Base region x is disabled. Access control of primary region 0 (secure, privileged) applies to any access between region x start and end addresses. Associated subregions are also disabled. (value: 0)
     *          - B_0x1: Base region x is enabled. Access controls defined in region x apply to any access between region x start and end addresses. (value: 1)
     */
        /** @brief Base region x is disabled. Access control of primary region 0 (secure, privileged) applies to any access between region x start and end addresses. Associated subregions are also disabled. */
    constexpr std::uint32_t RISAF_REG9_CFGR_BREN_B_0x0 = 0;
        /** @brief Base region x is enabled. Access controls defined in region x apply to any access between region x start and end addresses. */
    constexpr std::uint32_t RISAF_REG9_CFGR_BREN_B_0x1 = 1;

    /** @brief secure region */
    using RISAF_REG9_CFGR_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Only non-secure requests can access region x. SEC value in RISAF_REGx_zCFGR is internally treated as zeroed by RISAF (only non-secure requests to subregions). (value: 0)
     *          - B_0x1: Only secure requests can access region x, and optional subregions can be defined as secure or non-secure. (value: 1)
     */
        /** @brief Only non-secure requests can access region x. SEC value in RISAF_REGx_zCFGR is internally treated as zeroed by RISAF (only non-secure requests to subregions). */
    constexpr std::uint32_t RISAF_REG9_CFGR_SEC_B_0x0 = 0;
        /** @brief Only secure requests can access region x, and optional subregions can be defined as secure or non-secure. */
    constexpr std::uint32_t RISAF_REG9_CFGR_SEC_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG9_CFGR_PRIVC0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG9_CFGR_PRIVC0_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG9_CFGR_PRIVC0_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG9_CFGR_PRIVC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG9_CFGR_PRIVC1_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG9_CFGR_PRIVC1_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG9_CFGR_PRIVC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG9_CFGR_PRIVC2_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG9_CFGR_PRIVC2_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG9_CFGR_PRIVC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG9_CFGR_PRIVC3_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG9_CFGR_PRIVC3_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG9_CFGR_PRIVC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG9_CFGR_PRIVC4_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG9_CFGR_PRIVC4_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG9_CFGR_PRIVC5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG9_CFGR_PRIVC5_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG9_CFGR_PRIVC5_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG9_CFGR_PRIVC6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG9_CFGR_PRIVC6_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG9_CFGR_PRIVC6_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG9_CFGR_PRIVC7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG9_CFGR_PRIVC7_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG9_CFGR_PRIVC7_B_0x1 = 1;

    /** @brief RISAF region 9 start-address register */
    using RISAF_REG9_STARTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x244, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Base region address start */
    using RISAF_REG9_STARTR_BADDSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 9 end-address register */
    using RISAF_REG9_ENDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x248, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Base region address end */
    using RISAF_REG9_ENDR_BADDEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 9 CID configuration register */
    using RISAF_REG9_CIDCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief read enable for compartment y */
    using RISAF_REG9_CIDCFGR_RDENC0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG9_CIDCFGR_RDENC0_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG9_CIDCFGR_RDENC0_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG9_CIDCFGR_RDENC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG9_CIDCFGR_RDENC1_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG9_CIDCFGR_RDENC1_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG9_CIDCFGR_RDENC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG9_CIDCFGR_RDENC2_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG9_CIDCFGR_RDENC2_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG9_CIDCFGR_RDENC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG9_CIDCFGR_RDENC3_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG9_CIDCFGR_RDENC3_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG9_CIDCFGR_RDENC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG9_CIDCFGR_RDENC4_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG9_CIDCFGR_RDENC4_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG9_CIDCFGR_RDENC5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG9_CIDCFGR_RDENC5_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG9_CIDCFGR_RDENC5_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG9_CIDCFGR_RDENC6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG9_CIDCFGR_RDENC6_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG9_CIDCFGR_RDENC6_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG9_CIDCFGR_RDENC7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG9_CIDCFGR_RDENC7_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG9_CIDCFGR_RDENC7_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG9_CIDCFGR_WRENC0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG9_CIDCFGR_WRENC0_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG9_CIDCFGR_WRENC0_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG9_CIDCFGR_WRENC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG9_CIDCFGR_WRENC1_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG9_CIDCFGR_WRENC1_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG9_CIDCFGR_WRENC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG9_CIDCFGR_WRENC2_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG9_CIDCFGR_WRENC2_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG9_CIDCFGR_WRENC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG9_CIDCFGR_WRENC3_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG9_CIDCFGR_WRENC3_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG9_CIDCFGR_WRENC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG9_CIDCFGR_WRENC4_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG9_CIDCFGR_WRENC4_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG9_CIDCFGR_WRENC5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG9_CIDCFGR_WRENC5_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG9_CIDCFGR_WRENC5_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG9_CIDCFGR_WRENC6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG9_CIDCFGR_WRENC6_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG9_CIDCFGR_WRENC6_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG9_CIDCFGR_WRENC7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG9_CIDCFGR_WRENC7_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG9_CIDCFGR_WRENC7_B_0x1 = 1;

    /** @brief RISAF region 10 configuration register */
    using RISAF_REG10_CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x280, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief base region enable */
    using RISAF_REG10_CFGR_BREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Base region x is disabled. Access control of primary region 0 (secure, privileged) applies to any access between region x start and end addresses. Associated subregions are also disabled. (value: 0)
     *          - B_0x1: Base region x is enabled. Access controls defined in region x apply to any access between region x start and end addresses. (value: 1)
     */
        /** @brief Base region x is disabled. Access control of primary region 0 (secure, privileged) applies to any access between region x start and end addresses. Associated subregions are also disabled. */
    constexpr std::uint32_t RISAF_REG10_CFGR_BREN_B_0x0 = 0;
        /** @brief Base region x is enabled. Access controls defined in region x apply to any access between region x start and end addresses. */
    constexpr std::uint32_t RISAF_REG10_CFGR_BREN_B_0x1 = 1;

    /** @brief secure region */
    using RISAF_REG10_CFGR_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Only non-secure requests can access region x. SEC value in RISAF_REGx_zCFGR is internally treated as zeroed by RISAF (only non-secure requests to subregions). (value: 0)
     *          - B_0x1: Only secure requests can access region x, and optional subregions can be defined as secure or non-secure. (value: 1)
     */
        /** @brief Only non-secure requests can access region x. SEC value in RISAF_REGx_zCFGR is internally treated as zeroed by RISAF (only non-secure requests to subregions). */
    constexpr std::uint32_t RISAF_REG10_CFGR_SEC_B_0x0 = 0;
        /** @brief Only secure requests can access region x, and optional subregions can be defined as secure or non-secure. */
    constexpr std::uint32_t RISAF_REG10_CFGR_SEC_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG10_CFGR_PRIVC0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG10_CFGR_PRIVC0_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG10_CFGR_PRIVC0_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG10_CFGR_PRIVC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG10_CFGR_PRIVC1_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG10_CFGR_PRIVC1_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG10_CFGR_PRIVC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG10_CFGR_PRIVC2_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG10_CFGR_PRIVC2_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG10_CFGR_PRIVC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG10_CFGR_PRIVC3_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG10_CFGR_PRIVC3_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG10_CFGR_PRIVC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG10_CFGR_PRIVC4_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG10_CFGR_PRIVC4_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG10_CFGR_PRIVC5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG10_CFGR_PRIVC5_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG10_CFGR_PRIVC5_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG10_CFGR_PRIVC6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG10_CFGR_PRIVC6_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG10_CFGR_PRIVC6_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG10_CFGR_PRIVC7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG10_CFGR_PRIVC7_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG10_CFGR_PRIVC7_B_0x1 = 1;

    /** @brief RISAF region 10 start-address register */
    using RISAF_REG10_STARTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x284, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Base region address start */
    using RISAF_REG10_STARTR_BADDSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 10 end-address register */
    using RISAF_REG10_ENDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x288, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Base region address end */
    using RISAF_REG10_ENDR_BADDEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 10 CID configuration register */
    using RISAF_REG10_CIDCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief read enable for compartment y */
    using RISAF_REG10_CIDCFGR_RDENC0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG10_CIDCFGR_RDENC0_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG10_CIDCFGR_RDENC0_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG10_CIDCFGR_RDENC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG10_CIDCFGR_RDENC1_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG10_CIDCFGR_RDENC1_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG10_CIDCFGR_RDENC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG10_CIDCFGR_RDENC2_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG10_CIDCFGR_RDENC2_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG10_CIDCFGR_RDENC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG10_CIDCFGR_RDENC3_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG10_CIDCFGR_RDENC3_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG10_CIDCFGR_RDENC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG10_CIDCFGR_RDENC4_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG10_CIDCFGR_RDENC4_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG10_CIDCFGR_RDENC5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG10_CIDCFGR_RDENC5_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG10_CIDCFGR_RDENC5_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG10_CIDCFGR_RDENC6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG10_CIDCFGR_RDENC6_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG10_CIDCFGR_RDENC6_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG10_CIDCFGR_RDENC7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG10_CIDCFGR_RDENC7_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG10_CIDCFGR_RDENC7_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG10_CIDCFGR_WRENC0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG10_CIDCFGR_WRENC0_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG10_CIDCFGR_WRENC0_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG10_CIDCFGR_WRENC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG10_CIDCFGR_WRENC1_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG10_CIDCFGR_WRENC1_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG10_CIDCFGR_WRENC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG10_CIDCFGR_WRENC2_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG10_CIDCFGR_WRENC2_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG10_CIDCFGR_WRENC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG10_CIDCFGR_WRENC3_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG10_CIDCFGR_WRENC3_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG10_CIDCFGR_WRENC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG10_CIDCFGR_WRENC4_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG10_CIDCFGR_WRENC4_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG10_CIDCFGR_WRENC5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG10_CIDCFGR_WRENC5_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG10_CIDCFGR_WRENC5_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG10_CIDCFGR_WRENC6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG10_CIDCFGR_WRENC6_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG10_CIDCFGR_WRENC6_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG10_CIDCFGR_WRENC7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG10_CIDCFGR_WRENC7_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG10_CIDCFGR_WRENC7_B_0x1 = 1;

    /** @brief RISAF region 11 configuration register */
    using RISAF_REG11_CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief base region enable */
    using RISAF_REG11_CFGR_BREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Base region x is disabled. Access control of primary region 0 (secure, privileged) applies to any access between region x start and end addresses. Associated subregions are also disabled. (value: 0)
     *          - B_0x1: Base region x is enabled. Access controls defined in region x apply to any access between region x start and end addresses. (value: 1)
     */
        /** @brief Base region x is disabled. Access control of primary region 0 (secure, privileged) applies to any access between region x start and end addresses. Associated subregions are also disabled. */
    constexpr std::uint32_t RISAF_REG11_CFGR_BREN_B_0x0 = 0;
        /** @brief Base region x is enabled. Access controls defined in region x apply to any access between region x start and end addresses. */
    constexpr std::uint32_t RISAF_REG11_CFGR_BREN_B_0x1 = 1;

    /** @brief secure region */
    using RISAF_REG11_CFGR_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Only non-secure requests can access region x. SEC value in RISAF_REGx_zCFGR is internally treated as zeroed by RISAF (only non-secure requests to subregions). (value: 0)
     *          - B_0x1: Only secure requests can access region x, and optional subregions can be defined as secure or non-secure. (value: 1)
     */
        /** @brief Only non-secure requests can access region x. SEC value in RISAF_REGx_zCFGR is internally treated as zeroed by RISAF (only non-secure requests to subregions). */
    constexpr std::uint32_t RISAF_REG11_CFGR_SEC_B_0x0 = 0;
        /** @brief Only secure requests can access region x, and optional subregions can be defined as secure or non-secure. */
    constexpr std::uint32_t RISAF_REG11_CFGR_SEC_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG11_CFGR_PRIVC0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG11_CFGR_PRIVC0_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG11_CFGR_PRIVC0_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG11_CFGR_PRIVC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG11_CFGR_PRIVC1_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG11_CFGR_PRIVC1_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG11_CFGR_PRIVC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG11_CFGR_PRIVC2_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG11_CFGR_PRIVC2_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG11_CFGR_PRIVC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG11_CFGR_PRIVC3_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG11_CFGR_PRIVC3_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG11_CFGR_PRIVC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG11_CFGR_PRIVC4_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG11_CFGR_PRIVC4_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG11_CFGR_PRIVC5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG11_CFGR_PRIVC5_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG11_CFGR_PRIVC5_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG11_CFGR_PRIVC6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG11_CFGR_PRIVC6_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG11_CFGR_PRIVC6_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG11_CFGR_PRIVC7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG11_CFGR_PRIVC7_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG11_CFGR_PRIVC7_B_0x1 = 1;

    /** @brief RISAF region 11 start-address register */
    using RISAF_REG11_STARTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Base region address start */
    using RISAF_REG11_STARTR_BADDSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 11 end-address register */
    using RISAF_REG11_ENDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Base region address end */
    using RISAF_REG11_ENDR_BADDEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 11 CID configuration register */
    using RISAF_REG11_CIDCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2CC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief read enable for compartment y */
    using RISAF_REG11_CIDCFGR_RDENC0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG11_CIDCFGR_RDENC0_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG11_CIDCFGR_RDENC0_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG11_CIDCFGR_RDENC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG11_CIDCFGR_RDENC1_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG11_CIDCFGR_RDENC1_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG11_CIDCFGR_RDENC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG11_CIDCFGR_RDENC2_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG11_CIDCFGR_RDENC2_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG11_CIDCFGR_RDENC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG11_CIDCFGR_RDENC3_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG11_CIDCFGR_RDENC3_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG11_CIDCFGR_RDENC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG11_CIDCFGR_RDENC4_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG11_CIDCFGR_RDENC4_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG11_CIDCFGR_RDENC5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG11_CIDCFGR_RDENC5_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG11_CIDCFGR_RDENC5_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG11_CIDCFGR_RDENC6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG11_CIDCFGR_RDENC6_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG11_CIDCFGR_RDENC6_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG11_CIDCFGR_RDENC7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG11_CIDCFGR_RDENC7_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG11_CIDCFGR_RDENC7_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG11_CIDCFGR_WRENC0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG11_CIDCFGR_WRENC0_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG11_CIDCFGR_WRENC0_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG11_CIDCFGR_WRENC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG11_CIDCFGR_WRENC1_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG11_CIDCFGR_WRENC1_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG11_CIDCFGR_WRENC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG11_CIDCFGR_WRENC2_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG11_CIDCFGR_WRENC2_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG11_CIDCFGR_WRENC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG11_CIDCFGR_WRENC3_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG11_CIDCFGR_WRENC3_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG11_CIDCFGR_WRENC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG11_CIDCFGR_WRENC4_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG11_CIDCFGR_WRENC4_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG11_CIDCFGR_WRENC5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG11_CIDCFGR_WRENC5_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG11_CIDCFGR_WRENC5_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG11_CIDCFGR_WRENC6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG11_CIDCFGR_WRENC6_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG11_CIDCFGR_WRENC6_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG11_CIDCFGR_WRENC7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG11_CIDCFGR_WRENC7_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG11_CIDCFGR_WRENC7_B_0x1 = 1;

    /** @brief RISAF region 12 configuration register */
    using RISAF_REG12_CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x300, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief base region enable */
    using RISAF_REG12_CFGR_BREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Base region x is disabled. Access control of primary region 0 (secure, privileged) applies to any access between region x start and end addresses. Associated subregions are also disabled. (value: 0)
     *          - B_0x1: Base region x is enabled. Access controls defined in region x apply to any access between region x start and end addresses. (value: 1)
     */
        /** @brief Base region x is disabled. Access control of primary region 0 (secure, privileged) applies to any access between region x start and end addresses. Associated subregions are also disabled. */
    constexpr std::uint32_t RISAF_REG12_CFGR_BREN_B_0x0 = 0;
        /** @brief Base region x is enabled. Access controls defined in region x apply to any access between region x start and end addresses. */
    constexpr std::uint32_t RISAF_REG12_CFGR_BREN_B_0x1 = 1;

    /** @brief secure region */
    using RISAF_REG12_CFGR_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Only non-secure requests can access region x. SEC value in RISAF_REGx_zCFGR is internally treated as zeroed by RISAF (only non-secure requests to subregions). (value: 0)
     *          - B_0x1: Only secure requests can access region x, and optional subregions can be defined as secure or non-secure. (value: 1)
     */
        /** @brief Only non-secure requests can access region x. SEC value in RISAF_REGx_zCFGR is internally treated as zeroed by RISAF (only non-secure requests to subregions). */
    constexpr std::uint32_t RISAF_REG12_CFGR_SEC_B_0x0 = 0;
        /** @brief Only secure requests can access region x, and optional subregions can be defined as secure or non-secure. */
    constexpr std::uint32_t RISAF_REG12_CFGR_SEC_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG12_CFGR_PRIVC0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG12_CFGR_PRIVC0_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG12_CFGR_PRIVC0_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG12_CFGR_PRIVC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG12_CFGR_PRIVC1_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG12_CFGR_PRIVC1_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG12_CFGR_PRIVC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG12_CFGR_PRIVC2_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG12_CFGR_PRIVC2_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG12_CFGR_PRIVC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG12_CFGR_PRIVC3_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG12_CFGR_PRIVC3_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG12_CFGR_PRIVC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG12_CFGR_PRIVC4_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG12_CFGR_PRIVC4_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG12_CFGR_PRIVC5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG12_CFGR_PRIVC5_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG12_CFGR_PRIVC5_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG12_CFGR_PRIVC6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG12_CFGR_PRIVC6_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG12_CFGR_PRIVC6_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG12_CFGR_PRIVC7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG12_CFGR_PRIVC7_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG12_CFGR_PRIVC7_B_0x1 = 1;

    /** @brief RISAF region 12 start-address register */
    using RISAF_REG12_STARTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x304, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Base region address start */
    using RISAF_REG12_STARTR_BADDSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 12 end-address register */
    using RISAF_REG12_ENDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x308, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Base region address end */
    using RISAF_REG12_ENDR_BADDEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 12 CID configuration register */
    using RISAF_REG12_CIDCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief read enable for compartment y */
    using RISAF_REG12_CIDCFGR_RDENC0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG12_CIDCFGR_RDENC0_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG12_CIDCFGR_RDENC0_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG12_CIDCFGR_RDENC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG12_CIDCFGR_RDENC1_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG12_CIDCFGR_RDENC1_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG12_CIDCFGR_RDENC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG12_CIDCFGR_RDENC2_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG12_CIDCFGR_RDENC2_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG12_CIDCFGR_RDENC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG12_CIDCFGR_RDENC3_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG12_CIDCFGR_RDENC3_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG12_CIDCFGR_RDENC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG12_CIDCFGR_RDENC4_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG12_CIDCFGR_RDENC4_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG12_CIDCFGR_RDENC5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG12_CIDCFGR_RDENC5_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG12_CIDCFGR_RDENC5_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG12_CIDCFGR_RDENC6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG12_CIDCFGR_RDENC6_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG12_CIDCFGR_RDENC6_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG12_CIDCFGR_RDENC7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG12_CIDCFGR_RDENC7_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG12_CIDCFGR_RDENC7_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG12_CIDCFGR_WRENC0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG12_CIDCFGR_WRENC0_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG12_CIDCFGR_WRENC0_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG12_CIDCFGR_WRENC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG12_CIDCFGR_WRENC1_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG12_CIDCFGR_WRENC1_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG12_CIDCFGR_WRENC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG12_CIDCFGR_WRENC2_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG12_CIDCFGR_WRENC2_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG12_CIDCFGR_WRENC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG12_CIDCFGR_WRENC3_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG12_CIDCFGR_WRENC3_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG12_CIDCFGR_WRENC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG12_CIDCFGR_WRENC4_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG12_CIDCFGR_WRENC4_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG12_CIDCFGR_WRENC5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG12_CIDCFGR_WRENC5_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG12_CIDCFGR_WRENC5_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG12_CIDCFGR_WRENC6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG12_CIDCFGR_WRENC6_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG12_CIDCFGR_WRENC6_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG12_CIDCFGR_WRENC7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG12_CIDCFGR_WRENC7_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG12_CIDCFGR_WRENC7_B_0x1 = 1;

    /** @brief RISAF region 13 configuration register */
    using RISAF_REG13_CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x340, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief base region enable */
    using RISAF_REG13_CFGR_BREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Base region x is disabled. Access control of primary region 0 (secure, privileged) applies to any access between region x start and end addresses. Associated subregions are also disabled. (value: 0)
     *          - B_0x1: Base region x is enabled. Access controls defined in region x apply to any access between region x start and end addresses. (value: 1)
     */
        /** @brief Base region x is disabled. Access control of primary region 0 (secure, privileged) applies to any access between region x start and end addresses. Associated subregions are also disabled. */
    constexpr std::uint32_t RISAF_REG13_CFGR_BREN_B_0x0 = 0;
        /** @brief Base region x is enabled. Access controls defined in region x apply to any access between region x start and end addresses. */
    constexpr std::uint32_t RISAF_REG13_CFGR_BREN_B_0x1 = 1;

    /** @brief secure region */
    using RISAF_REG13_CFGR_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Only non-secure requests can access region x. SEC value in RISAF_REGx_zCFGR is internally treated as zeroed by RISAF (only non-secure requests to subregions). (value: 0)
     *          - B_0x1: Only secure requests can access region x, and optional subregions can be defined as secure or non-secure. (value: 1)
     */
        /** @brief Only non-secure requests can access region x. SEC value in RISAF_REGx_zCFGR is internally treated as zeroed by RISAF (only non-secure requests to subregions). */
    constexpr std::uint32_t RISAF_REG13_CFGR_SEC_B_0x0 = 0;
        /** @brief Only secure requests can access region x, and optional subregions can be defined as secure or non-secure. */
    constexpr std::uint32_t RISAF_REG13_CFGR_SEC_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG13_CFGR_PRIVC0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG13_CFGR_PRIVC0_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG13_CFGR_PRIVC0_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG13_CFGR_PRIVC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG13_CFGR_PRIVC1_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG13_CFGR_PRIVC1_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG13_CFGR_PRIVC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG13_CFGR_PRIVC2_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG13_CFGR_PRIVC2_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG13_CFGR_PRIVC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG13_CFGR_PRIVC3_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG13_CFGR_PRIVC3_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG13_CFGR_PRIVC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG13_CFGR_PRIVC4_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG13_CFGR_PRIVC4_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG13_CFGR_PRIVC5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG13_CFGR_PRIVC5_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG13_CFGR_PRIVC5_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG13_CFGR_PRIVC6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG13_CFGR_PRIVC6_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG13_CFGR_PRIVC6_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG13_CFGR_PRIVC7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG13_CFGR_PRIVC7_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG13_CFGR_PRIVC7_B_0x1 = 1;

    /** @brief RISAF region 13 start-address register */
    using RISAF_REG13_STARTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x344, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Base region address start */
    using RISAF_REG13_STARTR_BADDSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 13 end-address register */
    using RISAF_REG13_ENDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x348, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Base region address end */
    using RISAF_REG13_ENDR_BADDEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 13 CID configuration register */
    using RISAF_REG13_CIDCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief read enable for compartment y */
    using RISAF_REG13_CIDCFGR_RDENC0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG13_CIDCFGR_RDENC0_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG13_CIDCFGR_RDENC0_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG13_CIDCFGR_RDENC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG13_CIDCFGR_RDENC1_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG13_CIDCFGR_RDENC1_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG13_CIDCFGR_RDENC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG13_CIDCFGR_RDENC2_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG13_CIDCFGR_RDENC2_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG13_CIDCFGR_RDENC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG13_CIDCFGR_RDENC3_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG13_CIDCFGR_RDENC3_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG13_CIDCFGR_RDENC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG13_CIDCFGR_RDENC4_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG13_CIDCFGR_RDENC4_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG13_CIDCFGR_RDENC5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG13_CIDCFGR_RDENC5_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG13_CIDCFGR_RDENC5_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG13_CIDCFGR_RDENC6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG13_CIDCFGR_RDENC6_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG13_CIDCFGR_RDENC6_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG13_CIDCFGR_RDENC7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG13_CIDCFGR_RDENC7_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG13_CIDCFGR_RDENC7_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG13_CIDCFGR_WRENC0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG13_CIDCFGR_WRENC0_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG13_CIDCFGR_WRENC0_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG13_CIDCFGR_WRENC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG13_CIDCFGR_WRENC1_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG13_CIDCFGR_WRENC1_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG13_CIDCFGR_WRENC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG13_CIDCFGR_WRENC2_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG13_CIDCFGR_WRENC2_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG13_CIDCFGR_WRENC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG13_CIDCFGR_WRENC3_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG13_CIDCFGR_WRENC3_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG13_CIDCFGR_WRENC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG13_CIDCFGR_WRENC4_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG13_CIDCFGR_WRENC4_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG13_CIDCFGR_WRENC5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG13_CIDCFGR_WRENC5_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG13_CIDCFGR_WRENC5_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG13_CIDCFGR_WRENC6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG13_CIDCFGR_WRENC6_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG13_CIDCFGR_WRENC6_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG13_CIDCFGR_WRENC7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG13_CIDCFGR_WRENC7_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG13_CIDCFGR_WRENC7_B_0x1 = 1;

    /** @brief RISAF region 14 configuration register */
    using RISAF_REG14_CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x380, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief base region enable */
    using RISAF_REG14_CFGR_BREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Base region x is disabled. Access control of primary region 0 (secure, privileged) applies to any access between region x start and end addresses. Associated subregions are also disabled. (value: 0)
     *          - B_0x1: Base region x is enabled. Access controls defined in region x apply to any access between region x start and end addresses. (value: 1)
     */
        /** @brief Base region x is disabled. Access control of primary region 0 (secure, privileged) applies to any access between region x start and end addresses. Associated subregions are also disabled. */
    constexpr std::uint32_t RISAF_REG14_CFGR_BREN_B_0x0 = 0;
        /** @brief Base region x is enabled. Access controls defined in region x apply to any access between region x start and end addresses. */
    constexpr std::uint32_t RISAF_REG14_CFGR_BREN_B_0x1 = 1;

    /** @brief secure region */
    using RISAF_REG14_CFGR_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Only non-secure requests can access region x. SEC value in RISAF_REGx_zCFGR is internally treated as zeroed by RISAF (only non-secure requests to subregions). (value: 0)
     *          - B_0x1: Only secure requests can access region x, and optional subregions can be defined as secure or non-secure. (value: 1)
     */
        /** @brief Only non-secure requests can access region x. SEC value in RISAF_REGx_zCFGR is internally treated as zeroed by RISAF (only non-secure requests to subregions). */
    constexpr std::uint32_t RISAF_REG14_CFGR_SEC_B_0x0 = 0;
        /** @brief Only secure requests can access region x, and optional subregions can be defined as secure or non-secure. */
    constexpr std::uint32_t RISAF_REG14_CFGR_SEC_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG14_CFGR_PRIVC0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG14_CFGR_PRIVC0_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG14_CFGR_PRIVC0_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG14_CFGR_PRIVC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG14_CFGR_PRIVC1_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG14_CFGR_PRIVC1_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG14_CFGR_PRIVC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG14_CFGR_PRIVC2_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG14_CFGR_PRIVC2_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG14_CFGR_PRIVC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG14_CFGR_PRIVC3_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG14_CFGR_PRIVC3_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG14_CFGR_PRIVC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG14_CFGR_PRIVC4_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG14_CFGR_PRIVC4_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG14_CFGR_PRIVC5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG14_CFGR_PRIVC5_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG14_CFGR_PRIVC5_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG14_CFGR_PRIVC6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG14_CFGR_PRIVC6_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG14_CFGR_PRIVC6_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG14_CFGR_PRIVC7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG14_CFGR_PRIVC7_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG14_CFGR_PRIVC7_B_0x1 = 1;

    /** @brief RISAF region 14 start-address register */
    using RISAF_REG14_STARTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x384, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Base region address start */
    using RISAF_REG14_STARTR_BADDSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 14 end-address register */
    using RISAF_REG14_ENDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x388, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Base region address end */
    using RISAF_REG14_ENDR_BADDEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 14 CID configuration register */
    using RISAF_REG14_CIDCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief read enable for compartment y */
    using RISAF_REG14_CIDCFGR_RDENC0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG14_CIDCFGR_RDENC0_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG14_CIDCFGR_RDENC0_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG14_CIDCFGR_RDENC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG14_CIDCFGR_RDENC1_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG14_CIDCFGR_RDENC1_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG14_CIDCFGR_RDENC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG14_CIDCFGR_RDENC2_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG14_CIDCFGR_RDENC2_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG14_CIDCFGR_RDENC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG14_CIDCFGR_RDENC3_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG14_CIDCFGR_RDENC3_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG14_CIDCFGR_RDENC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG14_CIDCFGR_RDENC4_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG14_CIDCFGR_RDENC4_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG14_CIDCFGR_RDENC5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG14_CIDCFGR_RDENC5_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG14_CIDCFGR_RDENC5_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG14_CIDCFGR_RDENC6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG14_CIDCFGR_RDENC6_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG14_CIDCFGR_RDENC6_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG14_CIDCFGR_RDENC7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG14_CIDCFGR_RDENC7_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG14_CIDCFGR_RDENC7_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG14_CIDCFGR_WRENC0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG14_CIDCFGR_WRENC0_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG14_CIDCFGR_WRENC0_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG14_CIDCFGR_WRENC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG14_CIDCFGR_WRENC1_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG14_CIDCFGR_WRENC1_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG14_CIDCFGR_WRENC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG14_CIDCFGR_WRENC2_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG14_CIDCFGR_WRENC2_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG14_CIDCFGR_WRENC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG14_CIDCFGR_WRENC3_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG14_CIDCFGR_WRENC3_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG14_CIDCFGR_WRENC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG14_CIDCFGR_WRENC4_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG14_CIDCFGR_WRENC4_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG14_CIDCFGR_WRENC5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG14_CIDCFGR_WRENC5_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG14_CIDCFGR_WRENC5_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG14_CIDCFGR_WRENC6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG14_CIDCFGR_WRENC6_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG14_CIDCFGR_WRENC6_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG14_CIDCFGR_WRENC7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG14_CIDCFGR_WRENC7_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG14_CIDCFGR_WRENC7_B_0x1 = 1;

    /** @brief RISAF region 15 configuration register */
    using RISAF_REG15_CFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief base region enable */
    using RISAF_REG15_CFGR_BREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Base region x is disabled. Access control of primary region 0 (secure, privileged) applies to any access between region x start and end addresses. Associated subregions are also disabled. (value: 0)
     *          - B_0x1: Base region x is enabled. Access controls defined in region x apply to any access between region x start and end addresses. (value: 1)
     */
        /** @brief Base region x is disabled. Access control of primary region 0 (secure, privileged) applies to any access between region x start and end addresses. Associated subregions are also disabled. */
    constexpr std::uint32_t RISAF_REG15_CFGR_BREN_B_0x0 = 0;
        /** @brief Base region x is enabled. Access controls defined in region x apply to any access between region x start and end addresses. */
    constexpr std::uint32_t RISAF_REG15_CFGR_BREN_B_0x1 = 1;

    /** @brief secure region */
    using RISAF_REG15_CFGR_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Only non-secure requests can access region x. SEC value in RISAF_REGx_zCFGR is internally treated as zeroed by RISAF (only non-secure requests to subregions). (value: 0)
     *          - B_0x1: Only secure requests can access region x, and optional subregions can be defined as secure or non-secure. (value: 1)
     */
        /** @brief Only non-secure requests can access region x. SEC value in RISAF_REGx_zCFGR is internally treated as zeroed by RISAF (only non-secure requests to subregions). */
    constexpr std::uint32_t RISAF_REG15_CFGR_SEC_B_0x0 = 0;
        /** @brief Only secure requests can access region x, and optional subregions can be defined as secure or non-secure. */
    constexpr std::uint32_t RISAF_REG15_CFGR_SEC_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG15_CFGR_PRIVC0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG15_CFGR_PRIVC0_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG15_CFGR_PRIVC0_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG15_CFGR_PRIVC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG15_CFGR_PRIVC1_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG15_CFGR_PRIVC1_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG15_CFGR_PRIVC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG15_CFGR_PRIVC2_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG15_CFGR_PRIVC2_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG15_CFGR_PRIVC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG15_CFGR_PRIVC3_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG15_CFGR_PRIVC3_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG15_CFGR_PRIVC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG15_CFGR_PRIVC4_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG15_CFGR_PRIVC4_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG15_CFGR_PRIVC5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG15_CFGR_PRIVC5_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG15_CFGR_PRIVC5_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG15_CFGR_PRIVC6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG15_CFGR_PRIVC6_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG15_CFGR_PRIVC6_B_0x1 = 1;

    /** @brief privileged access for compartment y */
    using RISAF_REG15_CFGR_PRIVC7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y can access to region x in privileged and unprivileged mode. (value: 0)
     *          - B_0x1: Application running in compartment y can access to region x in privileged mode only. (value: 1)
     */
        /** @brief Application running in compartment y can access to region x in privileged and unprivileged mode. */
    constexpr std::uint32_t RISAF_REG15_CFGR_PRIVC7_B_0x0 = 0;
        /** @brief Application running in compartment y can access to region x in privileged mode only. */
    constexpr std::uint32_t RISAF_REG15_CFGR_PRIVC7_B_0x1 = 1;

    /** @brief RISAF region 15 start-address register */
    using RISAF_REG15_STARTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Base region address start */
    using RISAF_REG15_STARTR_BADDSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 15 end-address register */
    using RISAF_REG15_ENDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Base region address end */
    using RISAF_REG15_ENDR_BADDEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 15 CID configuration register */
    using RISAF_REG15_CIDCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3CC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief read enable for compartment y */
    using RISAF_REG15_CIDCFGR_RDENC0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG15_CIDCFGR_RDENC0_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG15_CIDCFGR_RDENC0_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG15_CIDCFGR_RDENC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG15_CIDCFGR_RDENC1_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG15_CIDCFGR_RDENC1_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG15_CIDCFGR_RDENC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG15_CIDCFGR_RDENC2_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG15_CIDCFGR_RDENC2_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG15_CIDCFGR_RDENC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG15_CIDCFGR_RDENC3_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG15_CIDCFGR_RDENC3_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG15_CIDCFGR_RDENC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG15_CIDCFGR_RDENC4_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG15_CIDCFGR_RDENC4_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG15_CIDCFGR_RDENC5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG15_CIDCFGR_RDENC5_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG15_CIDCFGR_RDENC5_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG15_CIDCFGR_RDENC6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG15_CIDCFGR_RDENC6_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG15_CIDCFGR_RDENC6_B_0x1 = 1;

    /** @brief read enable for compartment y */
    using RISAF_REG15_CIDCFGR_RDENC7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot read region x (read as zero). (value: 0)
     *          - B_0x1: Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot read region x (read as zero). */
    constexpr std::uint32_t RISAF_REG15_CIDCFGR_RDENC7_B_0x0 = 0;
        /** @brief Application running in compartment y can read region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG15_CIDCFGR_RDENC7_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG15_CIDCFGR_WRENC0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG15_CIDCFGR_WRENC0_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG15_CIDCFGR_WRENC0_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG15_CIDCFGR_WRENC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG15_CIDCFGR_WRENC1_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG15_CIDCFGR_WRENC1_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG15_CIDCFGR_WRENC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG15_CIDCFGR_WRENC2_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG15_CIDCFGR_WRENC2_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG15_CIDCFGR_WRENC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG15_CIDCFGR_WRENC3_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG15_CIDCFGR_WRENC3_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG15_CIDCFGR_WRENC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG15_CIDCFGR_WRENC4_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG15_CIDCFGR_WRENC4_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG15_CIDCFGR_WRENC5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG15_CIDCFGR_WRENC5_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG15_CIDCFGR_WRENC5_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG15_CIDCFGR_WRENC6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG15_CIDCFGR_WRENC6_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG15_CIDCFGR_WRENC6_B_0x1 = 1;

    /** @brief write enable for compartment y */
    using RISAF_REG15_CIDCFGR_WRENC7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Application running in compartment y cannot write to region x (write ignored). (value: 0)
     *          - B_0x1: Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. (value: 1)
     */
        /** @brief Application running in compartment y cannot write to region x (write ignored). */
    constexpr std::uint32_t RISAF_REG15_CIDCFGR_WRENC7_B_0x0 = 0;
        /** @brief Application running in compartment y can write to region x. Additional control defined by SEC and PRIVCy in RISAF_REGx_CFGR, also apply. */
    constexpr std::uint32_t RISAF_REG15_CIDCFGR_WRENC7_B_0x1 = 1;

    /** @brief RISAF region 1 subregion A configuration register */
    using RISAF_REG1_ACFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief subregion enable */
    using RISAF_REG1_ACFGR_SREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Subregion z is disabled. Access control of base region x applies to any access between this subregion start and end addresses. (value: 0)
     *          - B_0x1: Subregion z of region x is enable. Access control defined in subregion z applies to any access between subregion z start and end addresses. (value: 1)
     */
        /** @brief Subregion z is disabled. Access control of base region x applies to any access between this subregion start and end addresses. */
    constexpr std::uint32_t RISAF_REG1_ACFGR_SREN_B_0x0 = 0;
        /** @brief Subregion z of region x is enable. Access control defined in subregion z applies to any access between subregion z start and end addresses. */
    constexpr std::uint32_t RISAF_REG1_ACFGR_SREN_B_0x1 = 1;

    /** @brief resource lock */
    using RISAF_REG1_ACFGR_RLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are writable. (value: 0)
     *          - B_0x1: Writes to RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are ignored. (value: 1)
     */
        /** @brief RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are writable. */
    constexpr std::uint32_t RISAF_REG1_ACFGR_RLOCK_B_0x0 = 0;
        /** @brief Writes to RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are ignored. */
    constexpr std::uint32_t RISAF_REG1_ACFGR_RLOCK_B_0x1 = 1;

    /** @brief subregion CID */
    using RISAF_REG1_ACFGR_SRCID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief secure subregion */
    using RISAF_REG1_ACFGR_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Only non-secure requests can access subregion z of region x. (value: 0)
     *          - B_0x1: Only secure requests can access subregion z of region x. (value: 1)
     */
        /** @brief Only non-secure requests can access subregion z of region x. */
    constexpr std::uint32_t RISAF_REG1_ACFGR_SEC_B_0x0 = 0;
        /** @brief Only secure requests can access subregion z of region x. */
    constexpr std::uint32_t RISAF_REG1_ACFGR_SEC_B_0x1 = 1;

    /** @brief privileged subregion */
    using RISAF_REG1_ACFGR_PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged accesses are granted in subregion z of region x. (value: 0)
     *          - B_0x1: Only privileged accesses are granted in subregion z of region x. (value: 1)
     */
        /** @brief Privileged and unprivileged accesses are granted in subregion z of region x. */
    constexpr std::uint32_t RISAF_REG1_ACFGR_PRIV_B_0x0 = 0;
        /** @brief Only privileged accesses are granted in subregion z of region x. */
    constexpr std::uint32_t RISAF_REG1_ACFGR_PRIV_B_0x1 = 1;

    /** @brief read enable */
    using RISAF_REG1_ACFGR_RDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Any read to subregion z of region x returns zero. (value: 0)
     *          - B_0x1: Subregion z of region x can be read. (value: 1)
     */
        /** @brief Any read to subregion z of region x returns zero. */
    constexpr std::uint32_t RISAF_REG1_ACFGR_RDEN_B_0x0 = 0;
        /** @brief Subregion z of region x can be read. */
    constexpr std::uint32_t RISAF_REG1_ACFGR_RDEN_B_0x1 = 1;

    /** @brief write enable */
    using RISAF_REG1_ACFGR_WREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Any writes to subregion z of region x are ignored. (value: 0)
     *          - B_0x1: Subregion z of region x can be written to. (value: 1)
     */
        /** @brief Any writes to subregion z of region x are ignored. */
    constexpr std::uint32_t RISAF_REG1_ACFGR_WREN_B_0x0 = 0;
        /** @brief Subregion z of region x can be written to. */
    constexpr std::uint32_t RISAF_REG1_ACFGR_WREN_B_0x1 = 1;

    /** @brief RISAF region 1 subregion A start-address register */
    using RISAF_REG1_ASTARTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief subregion address start */
    using RISAF_REG1_ASTARTR_SADDSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 1 subregion A end-address register */
    using RISAF_REG1_AENDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x58, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief subregion address end */
    using RISAF_REG1_AENDR_SADDEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 1 subregion A nested mode register */
    using RISAF_REG1_ANESTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief delegated configuration enable */
    using RISAF_REG1_ANESTR_DCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RIF configuration for subregion z can be written only by the secure privileged software. (value: 0)
     *          - B_0x1: RIF configuration for subregion z can be written only (value: 1)
     */
        /** @brief RIF configuration for subregion z can be written only by the secure privileged software. */
    constexpr std::uint32_t RISAF_REG1_ANESTR_DCEN_B_0x0 = 0;
        /** @brief RIF configuration for subregion z can be written only */
    constexpr std::uint32_t RISAF_REG1_ANESTR_DCEN_B_0x1 = 1;

    /** @brief RISAF region 2 subregion A configuration register */
    using RISAF_REG2_ACFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x90, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief subregion enable */
    using RISAF_REG2_ACFGR_SREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Subregion z is disabled. Access control of base region x applies to any access between this subregion start and end addresses. (value: 0)
     *          - B_0x1: Subregion z of region x is enable. Access control defined in subregion z applies to any access between subregion z start and end addresses. (value: 1)
     */
        /** @brief Subregion z is disabled. Access control of base region x applies to any access between this subregion start and end addresses. */
    constexpr std::uint32_t RISAF_REG2_ACFGR_SREN_B_0x0 = 0;
        /** @brief Subregion z of region x is enable. Access control defined in subregion z applies to any access between subregion z start and end addresses. */
    constexpr std::uint32_t RISAF_REG2_ACFGR_SREN_B_0x1 = 1;

    /** @brief resource lock */
    using RISAF_REG2_ACFGR_RLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are writable. (value: 0)
     *          - B_0x1: Writes to RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are ignored. (value: 1)
     */
        /** @brief RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are writable. */
    constexpr std::uint32_t RISAF_REG2_ACFGR_RLOCK_B_0x0 = 0;
        /** @brief Writes to RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are ignored. */
    constexpr std::uint32_t RISAF_REG2_ACFGR_RLOCK_B_0x1 = 1;

    /** @brief subregion CID */
    using RISAF_REG2_ACFGR_SRCID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief secure subregion */
    using RISAF_REG2_ACFGR_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Only non-secure requests can access subregion z of region x. (value: 0)
     *          - B_0x1: Only secure requests can access subregion z of region x. (value: 1)
     */
        /** @brief Only non-secure requests can access subregion z of region x. */
    constexpr std::uint32_t RISAF_REG2_ACFGR_SEC_B_0x0 = 0;
        /** @brief Only secure requests can access subregion z of region x. */
    constexpr std::uint32_t RISAF_REG2_ACFGR_SEC_B_0x1 = 1;

    /** @brief privileged subregion */
    using RISAF_REG2_ACFGR_PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged accesses are granted in subregion z of region x. (value: 0)
     *          - B_0x1: Only privileged accesses are granted in subregion z of region x. (value: 1)
     */
        /** @brief Privileged and unprivileged accesses are granted in subregion z of region x. */
    constexpr std::uint32_t RISAF_REG2_ACFGR_PRIV_B_0x0 = 0;
        /** @brief Only privileged accesses are granted in subregion z of region x. */
    constexpr std::uint32_t RISAF_REG2_ACFGR_PRIV_B_0x1 = 1;

    /** @brief read enable */
    using RISAF_REG2_ACFGR_RDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Any read to subregion z of region x returns zero. (value: 0)
     *          - B_0x1: Subregion z of region x can be read. (value: 1)
     */
        /** @brief Any read to subregion z of region x returns zero. */
    constexpr std::uint32_t RISAF_REG2_ACFGR_RDEN_B_0x0 = 0;
        /** @brief Subregion z of region x can be read. */
    constexpr std::uint32_t RISAF_REG2_ACFGR_RDEN_B_0x1 = 1;

    /** @brief write enable */
    using RISAF_REG2_ACFGR_WREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Any writes to subregion z of region x are ignored. (value: 0)
     *          - B_0x1: Subregion z of region x can be written to. (value: 1)
     */
        /** @brief Any writes to subregion z of region x are ignored. */
    constexpr std::uint32_t RISAF_REG2_ACFGR_WREN_B_0x0 = 0;
        /** @brief Subregion z of region x can be written to. */
    constexpr std::uint32_t RISAF_REG2_ACFGR_WREN_B_0x1 = 1;

    /** @brief RISAF region 2 subregion A start-address register */
    using RISAF_REG2_ASTARTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x94, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief subregion address start */
    using RISAF_REG2_ASTARTR_SADDSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 2 subregion A end-address register */
    using RISAF_REG2_AENDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x98, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief subregion address end */
    using RISAF_REG2_AENDR_SADDEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 2 subregion A nested mode register */
    using RISAF_REG2_ANESTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief delegated configuration enable */
    using RISAF_REG2_ANESTR_DCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RIF configuration for subregion z can be written only by the secure privileged software. (value: 0)
     *          - B_0x1: RIF configuration for subregion z can be written only (value: 1)
     */
        /** @brief RIF configuration for subregion z can be written only by the secure privileged software. */
    constexpr std::uint32_t RISAF_REG2_ANESTR_DCEN_B_0x0 = 0;
        /** @brief RIF configuration for subregion z can be written only */
    constexpr std::uint32_t RISAF_REG2_ANESTR_DCEN_B_0x1 = 1;

    /** @brief RISAF region 3 subregion A configuration register */
    using RISAF_REG3_ACFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief subregion enable */
    using RISAF_REG3_ACFGR_SREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Subregion z is disabled. Access control of base region x applies to any access between this subregion start and end addresses. (value: 0)
     *          - B_0x1: Subregion z of region x is enable. Access control defined in subregion z applies to any access between subregion z start and end addresses. (value: 1)
     */
        /** @brief Subregion z is disabled. Access control of base region x applies to any access between this subregion start and end addresses. */
    constexpr std::uint32_t RISAF_REG3_ACFGR_SREN_B_0x0 = 0;
        /** @brief Subregion z of region x is enable. Access control defined in subregion z applies to any access between subregion z start and end addresses. */
    constexpr std::uint32_t RISAF_REG3_ACFGR_SREN_B_0x1 = 1;

    /** @brief resource lock */
    using RISAF_REG3_ACFGR_RLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are writable. (value: 0)
     *          - B_0x1: Writes to RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are ignored. (value: 1)
     */
        /** @brief RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are writable. */
    constexpr std::uint32_t RISAF_REG3_ACFGR_RLOCK_B_0x0 = 0;
        /** @brief Writes to RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are ignored. */
    constexpr std::uint32_t RISAF_REG3_ACFGR_RLOCK_B_0x1 = 1;

    /** @brief subregion CID */
    using RISAF_REG3_ACFGR_SRCID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief secure subregion */
    using RISAF_REG3_ACFGR_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Only non-secure requests can access subregion z of region x. (value: 0)
     *          - B_0x1: Only secure requests can access subregion z of region x. (value: 1)
     */
        /** @brief Only non-secure requests can access subregion z of region x. */
    constexpr std::uint32_t RISAF_REG3_ACFGR_SEC_B_0x0 = 0;
        /** @brief Only secure requests can access subregion z of region x. */
    constexpr std::uint32_t RISAF_REG3_ACFGR_SEC_B_0x1 = 1;

    /** @brief privileged subregion */
    using RISAF_REG3_ACFGR_PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged accesses are granted in subregion z of region x. (value: 0)
     *          - B_0x1: Only privileged accesses are granted in subregion z of region x. (value: 1)
     */
        /** @brief Privileged and unprivileged accesses are granted in subregion z of region x. */
    constexpr std::uint32_t RISAF_REG3_ACFGR_PRIV_B_0x0 = 0;
        /** @brief Only privileged accesses are granted in subregion z of region x. */
    constexpr std::uint32_t RISAF_REG3_ACFGR_PRIV_B_0x1 = 1;

    /** @brief read enable */
    using RISAF_REG3_ACFGR_RDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Any read to subregion z of region x returns zero. (value: 0)
     *          - B_0x1: Subregion z of region x can be read. (value: 1)
     */
        /** @brief Any read to subregion z of region x returns zero. */
    constexpr std::uint32_t RISAF_REG3_ACFGR_RDEN_B_0x0 = 0;
        /** @brief Subregion z of region x can be read. */
    constexpr std::uint32_t RISAF_REG3_ACFGR_RDEN_B_0x1 = 1;

    /** @brief write enable */
    using RISAF_REG3_ACFGR_WREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Any writes to subregion z of region x are ignored. (value: 0)
     *          - B_0x1: Subregion z of region x can be written to. (value: 1)
     */
        /** @brief Any writes to subregion z of region x are ignored. */
    constexpr std::uint32_t RISAF_REG3_ACFGR_WREN_B_0x0 = 0;
        /** @brief Subregion z of region x can be written to. */
    constexpr std::uint32_t RISAF_REG3_ACFGR_WREN_B_0x1 = 1;

    /** @brief RISAF region 3 subregion A start-address register */
    using RISAF_REG3_ASTARTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief subregion address start */
    using RISAF_REG3_ASTARTR_SADDSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 3 subregion A end-address register */
    using RISAF_REG3_AENDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief subregion address end */
    using RISAF_REG3_AENDR_SADDEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 3 subregion A nested mode register */
    using RISAF_REG3_ANESTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xDC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief delegated configuration enable */
    using RISAF_REG3_ANESTR_DCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RIF configuration for subregion z can be written only by the secure privileged software. (value: 0)
     *          - B_0x1: RIF configuration for subregion z can be written only (value: 1)
     */
        /** @brief RIF configuration for subregion z can be written only by the secure privileged software. */
    constexpr std::uint32_t RISAF_REG3_ANESTR_DCEN_B_0x0 = 0;
        /** @brief RIF configuration for subregion z can be written only */
    constexpr std::uint32_t RISAF_REG3_ANESTR_DCEN_B_0x1 = 1;

    /** @brief RISAF region 4 subregion A configuration register */
    using RISAF_REG4_ACFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x110, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief subregion enable */
    using RISAF_REG4_ACFGR_SREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Subregion z is disabled. Access control of base region x applies to any access between this subregion start and end addresses. (value: 0)
     *          - B_0x1: Subregion z of region x is enable. Access control defined in subregion z applies to any access between subregion z start and end addresses. (value: 1)
     */
        /** @brief Subregion z is disabled. Access control of base region x applies to any access between this subregion start and end addresses. */
    constexpr std::uint32_t RISAF_REG4_ACFGR_SREN_B_0x0 = 0;
        /** @brief Subregion z of region x is enable. Access control defined in subregion z applies to any access between subregion z start and end addresses. */
    constexpr std::uint32_t RISAF_REG4_ACFGR_SREN_B_0x1 = 1;

    /** @brief resource lock */
    using RISAF_REG4_ACFGR_RLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are writable. (value: 0)
     *          - B_0x1: Writes to RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are ignored. (value: 1)
     */
        /** @brief RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are writable. */
    constexpr std::uint32_t RISAF_REG4_ACFGR_RLOCK_B_0x0 = 0;
        /** @brief Writes to RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are ignored. */
    constexpr std::uint32_t RISAF_REG4_ACFGR_RLOCK_B_0x1 = 1;

    /** @brief subregion CID */
    using RISAF_REG4_ACFGR_SRCID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief secure subregion */
    using RISAF_REG4_ACFGR_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Only non-secure requests can access subregion z of region x. (value: 0)
     *          - B_0x1: Only secure requests can access subregion z of region x. (value: 1)
     */
        /** @brief Only non-secure requests can access subregion z of region x. */
    constexpr std::uint32_t RISAF_REG4_ACFGR_SEC_B_0x0 = 0;
        /** @brief Only secure requests can access subregion z of region x. */
    constexpr std::uint32_t RISAF_REG4_ACFGR_SEC_B_0x1 = 1;

    /** @brief privileged subregion */
    using RISAF_REG4_ACFGR_PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged accesses are granted in subregion z of region x. (value: 0)
     *          - B_0x1: Only privileged accesses are granted in subregion z of region x. (value: 1)
     */
        /** @brief Privileged and unprivileged accesses are granted in subregion z of region x. */
    constexpr std::uint32_t RISAF_REG4_ACFGR_PRIV_B_0x0 = 0;
        /** @brief Only privileged accesses are granted in subregion z of region x. */
    constexpr std::uint32_t RISAF_REG4_ACFGR_PRIV_B_0x1 = 1;

    /** @brief read enable */
    using RISAF_REG4_ACFGR_RDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Any read to subregion z of region x returns zero. (value: 0)
     *          - B_0x1: Subregion z of region x can be read. (value: 1)
     */
        /** @brief Any read to subregion z of region x returns zero. */
    constexpr std::uint32_t RISAF_REG4_ACFGR_RDEN_B_0x0 = 0;
        /** @brief Subregion z of region x can be read. */
    constexpr std::uint32_t RISAF_REG4_ACFGR_RDEN_B_0x1 = 1;

    /** @brief write enable */
    using RISAF_REG4_ACFGR_WREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Any writes to subregion z of region x are ignored. (value: 0)
     *          - B_0x1: Subregion z of region x can be written to. (value: 1)
     */
        /** @brief Any writes to subregion z of region x are ignored. */
    constexpr std::uint32_t RISAF_REG4_ACFGR_WREN_B_0x0 = 0;
        /** @brief Subregion z of region x can be written to. */
    constexpr std::uint32_t RISAF_REG4_ACFGR_WREN_B_0x1 = 1;

    /** @brief RISAF region 4 subregion A start-address register */
    using RISAF_REG4_ASTARTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x114, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief subregion address start */
    using RISAF_REG4_ASTARTR_SADDSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 4 subregion A end-address register */
    using RISAF_REG4_AENDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x118, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief subregion address end */
    using RISAF_REG4_AENDR_SADDEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 4 subregion A nested mode register */
    using RISAF_REG4_ANESTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x11C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief delegated configuration enable */
    using RISAF_REG4_ANESTR_DCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RIF configuration for subregion z can be written only by the secure privileged software. (value: 0)
     *          - B_0x1: RIF configuration for subregion z can be written only (value: 1)
     */
        /** @brief RIF configuration for subregion z can be written only by the secure privileged software. */
    constexpr std::uint32_t RISAF_REG4_ANESTR_DCEN_B_0x0 = 0;
        /** @brief RIF configuration for subregion z can be written only */
    constexpr std::uint32_t RISAF_REG4_ANESTR_DCEN_B_0x1 = 1;

    /** @brief RISAF region 5 subregion A configuration register */
    using RISAF_REG5_ACFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x150, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief subregion enable */
    using RISAF_REG5_ACFGR_SREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Subregion z is disabled. Access control of base region x applies to any access between this subregion start and end addresses. (value: 0)
     *          - B_0x1: Subregion z of region x is enable. Access control defined in subregion z applies to any access between subregion z start and end addresses. (value: 1)
     */
        /** @brief Subregion z is disabled. Access control of base region x applies to any access between this subregion start and end addresses. */
    constexpr std::uint32_t RISAF_REG5_ACFGR_SREN_B_0x0 = 0;
        /** @brief Subregion z of region x is enable. Access control defined in subregion z applies to any access between subregion z start and end addresses. */
    constexpr std::uint32_t RISAF_REG5_ACFGR_SREN_B_0x1 = 1;

    /** @brief resource lock */
    using RISAF_REG5_ACFGR_RLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are writable. (value: 0)
     *          - B_0x1: Writes to RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are ignored. (value: 1)
     */
        /** @brief RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are writable. */
    constexpr std::uint32_t RISAF_REG5_ACFGR_RLOCK_B_0x0 = 0;
        /** @brief Writes to RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are ignored. */
    constexpr std::uint32_t RISAF_REG5_ACFGR_RLOCK_B_0x1 = 1;

    /** @brief subregion CID */
    using RISAF_REG5_ACFGR_SRCID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief secure subregion */
    using RISAF_REG5_ACFGR_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Only non-secure requests can access subregion z of region x. (value: 0)
     *          - B_0x1: Only secure requests can access subregion z of region x. (value: 1)
     */
        /** @brief Only non-secure requests can access subregion z of region x. */
    constexpr std::uint32_t RISAF_REG5_ACFGR_SEC_B_0x0 = 0;
        /** @brief Only secure requests can access subregion z of region x. */
    constexpr std::uint32_t RISAF_REG5_ACFGR_SEC_B_0x1 = 1;

    /** @brief privileged subregion */
    using RISAF_REG5_ACFGR_PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged accesses are granted in subregion z of region x. (value: 0)
     *          - B_0x1: Only privileged accesses are granted in subregion z of region x. (value: 1)
     */
        /** @brief Privileged and unprivileged accesses are granted in subregion z of region x. */
    constexpr std::uint32_t RISAF_REG5_ACFGR_PRIV_B_0x0 = 0;
        /** @brief Only privileged accesses are granted in subregion z of region x. */
    constexpr std::uint32_t RISAF_REG5_ACFGR_PRIV_B_0x1 = 1;

    /** @brief read enable */
    using RISAF_REG5_ACFGR_RDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Any read to subregion z of region x returns zero. (value: 0)
     *          - B_0x1: Subregion z of region x can be read. (value: 1)
     */
        /** @brief Any read to subregion z of region x returns zero. */
    constexpr std::uint32_t RISAF_REG5_ACFGR_RDEN_B_0x0 = 0;
        /** @brief Subregion z of region x can be read. */
    constexpr std::uint32_t RISAF_REG5_ACFGR_RDEN_B_0x1 = 1;

    /** @brief write enable */
    using RISAF_REG5_ACFGR_WREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Any writes to subregion z of region x are ignored. (value: 0)
     *          - B_0x1: Subregion z of region x can be written to. (value: 1)
     */
        /** @brief Any writes to subregion z of region x are ignored. */
    constexpr std::uint32_t RISAF_REG5_ACFGR_WREN_B_0x0 = 0;
        /** @brief Subregion z of region x can be written to. */
    constexpr std::uint32_t RISAF_REG5_ACFGR_WREN_B_0x1 = 1;

    /** @brief RISAF region 5 subregion A start-address register */
    using RISAF_REG5_ASTARTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x154, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief subregion address start */
    using RISAF_REG5_ASTARTR_SADDSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 5 subregion A end-address register */
    using RISAF_REG5_AENDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x158, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief subregion address end */
    using RISAF_REG5_AENDR_SADDEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 5 subregion A nested mode register */
    using RISAF_REG5_ANESTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x15C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief delegated configuration enable */
    using RISAF_REG5_ANESTR_DCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RIF configuration for subregion z can be written only by the secure privileged software. (value: 0)
     *          - B_0x1: RIF configuration for subregion z can be written only (value: 1)
     */
        /** @brief RIF configuration for subregion z can be written only by the secure privileged software. */
    constexpr std::uint32_t RISAF_REG5_ANESTR_DCEN_B_0x0 = 0;
        /** @brief RIF configuration for subregion z can be written only */
    constexpr std::uint32_t RISAF_REG5_ANESTR_DCEN_B_0x1 = 1;

    /** @brief RISAF region 6 subregion A configuration register */
    using RISAF_REG6_ACFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x190, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief subregion enable */
    using RISAF_REG6_ACFGR_SREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Subregion z is disabled. Access control of base region x applies to any access between this subregion start and end addresses. (value: 0)
     *          - B_0x1: Subregion z of region x is enable. Access control defined in subregion z applies to any access between subregion z start and end addresses. (value: 1)
     */
        /** @brief Subregion z is disabled. Access control of base region x applies to any access between this subregion start and end addresses. */
    constexpr std::uint32_t RISAF_REG6_ACFGR_SREN_B_0x0 = 0;
        /** @brief Subregion z of region x is enable. Access control defined in subregion z applies to any access between subregion z start and end addresses. */
    constexpr std::uint32_t RISAF_REG6_ACFGR_SREN_B_0x1 = 1;

    /** @brief resource lock */
    using RISAF_REG6_ACFGR_RLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are writable. (value: 0)
     *          - B_0x1: Writes to RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are ignored. (value: 1)
     */
        /** @brief RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are writable. */
    constexpr std::uint32_t RISAF_REG6_ACFGR_RLOCK_B_0x0 = 0;
        /** @brief Writes to RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are ignored. */
    constexpr std::uint32_t RISAF_REG6_ACFGR_RLOCK_B_0x1 = 1;

    /** @brief subregion CID */
    using RISAF_REG6_ACFGR_SRCID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief secure subregion */
    using RISAF_REG6_ACFGR_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Only non-secure requests can access subregion z of region x. (value: 0)
     *          - B_0x1: Only secure requests can access subregion z of region x. (value: 1)
     */
        /** @brief Only non-secure requests can access subregion z of region x. */
    constexpr std::uint32_t RISAF_REG6_ACFGR_SEC_B_0x0 = 0;
        /** @brief Only secure requests can access subregion z of region x. */
    constexpr std::uint32_t RISAF_REG6_ACFGR_SEC_B_0x1 = 1;

    /** @brief privileged subregion */
    using RISAF_REG6_ACFGR_PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged accesses are granted in subregion z of region x. (value: 0)
     *          - B_0x1: Only privileged accesses are granted in subregion z of region x. (value: 1)
     */
        /** @brief Privileged and unprivileged accesses are granted in subregion z of region x. */
    constexpr std::uint32_t RISAF_REG6_ACFGR_PRIV_B_0x0 = 0;
        /** @brief Only privileged accesses are granted in subregion z of region x. */
    constexpr std::uint32_t RISAF_REG6_ACFGR_PRIV_B_0x1 = 1;

    /** @brief read enable */
    using RISAF_REG6_ACFGR_RDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Any read to subregion z of region x returns zero. (value: 0)
     *          - B_0x1: Subregion z of region x can be read. (value: 1)
     */
        /** @brief Any read to subregion z of region x returns zero. */
    constexpr std::uint32_t RISAF_REG6_ACFGR_RDEN_B_0x0 = 0;
        /** @brief Subregion z of region x can be read. */
    constexpr std::uint32_t RISAF_REG6_ACFGR_RDEN_B_0x1 = 1;

    /** @brief write enable */
    using RISAF_REG6_ACFGR_WREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Any writes to subregion z of region x are ignored. (value: 0)
     *          - B_0x1: Subregion z of region x can be written to. (value: 1)
     */
        /** @brief Any writes to subregion z of region x are ignored. */
    constexpr std::uint32_t RISAF_REG6_ACFGR_WREN_B_0x0 = 0;
        /** @brief Subregion z of region x can be written to. */
    constexpr std::uint32_t RISAF_REG6_ACFGR_WREN_B_0x1 = 1;

    /** @brief RISAF region 6 subregion A start-address register */
    using RISAF_REG6_ASTARTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x194, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief subregion address start */
    using RISAF_REG6_ASTARTR_SADDSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 6 subregion A end-address register */
    using RISAF_REG6_AENDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x198, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief subregion address end */
    using RISAF_REG6_AENDR_SADDEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 6 subregion A nested mode register */
    using RISAF_REG6_ANESTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x19C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief delegated configuration enable */
    using RISAF_REG6_ANESTR_DCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RIF configuration for subregion z can be written only by the secure privileged software. (value: 0)
     *          - B_0x1: RIF configuration for subregion z can be written only (value: 1)
     */
        /** @brief RIF configuration for subregion z can be written only by the secure privileged software. */
    constexpr std::uint32_t RISAF_REG6_ANESTR_DCEN_B_0x0 = 0;
        /** @brief RIF configuration for subregion z can be written only */
    constexpr std::uint32_t RISAF_REG6_ANESTR_DCEN_B_0x1 = 1;

    /** @brief RISAF region 7 subregion A configuration register */
    using RISAF_REG7_ACFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1D0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief subregion enable */
    using RISAF_REG7_ACFGR_SREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Subregion z is disabled. Access control of base region x applies to any access between this subregion start and end addresses. (value: 0)
     *          - B_0x1: Subregion z of region x is enable. Access control defined in subregion z applies to any access between subregion z start and end addresses. (value: 1)
     */
        /** @brief Subregion z is disabled. Access control of base region x applies to any access between this subregion start and end addresses. */
    constexpr std::uint32_t RISAF_REG7_ACFGR_SREN_B_0x0 = 0;
        /** @brief Subregion z of region x is enable. Access control defined in subregion z applies to any access between subregion z start and end addresses. */
    constexpr std::uint32_t RISAF_REG7_ACFGR_SREN_B_0x1 = 1;

    /** @brief resource lock */
    using RISAF_REG7_ACFGR_RLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are writable. (value: 0)
     *          - B_0x1: Writes to RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are ignored. (value: 1)
     */
        /** @brief RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are writable. */
    constexpr std::uint32_t RISAF_REG7_ACFGR_RLOCK_B_0x0 = 0;
        /** @brief Writes to RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are ignored. */
    constexpr std::uint32_t RISAF_REG7_ACFGR_RLOCK_B_0x1 = 1;

    /** @brief subregion CID */
    using RISAF_REG7_ACFGR_SRCID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief secure subregion */
    using RISAF_REG7_ACFGR_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Only non-secure requests can access subregion z of region x. (value: 0)
     *          - B_0x1: Only secure requests can access subregion z of region x. (value: 1)
     */
        /** @brief Only non-secure requests can access subregion z of region x. */
    constexpr std::uint32_t RISAF_REG7_ACFGR_SEC_B_0x0 = 0;
        /** @brief Only secure requests can access subregion z of region x. */
    constexpr std::uint32_t RISAF_REG7_ACFGR_SEC_B_0x1 = 1;

    /** @brief privileged subregion */
    using RISAF_REG7_ACFGR_PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged accesses are granted in subregion z of region x. (value: 0)
     *          - B_0x1: Only privileged accesses are granted in subregion z of region x. (value: 1)
     */
        /** @brief Privileged and unprivileged accesses are granted in subregion z of region x. */
    constexpr std::uint32_t RISAF_REG7_ACFGR_PRIV_B_0x0 = 0;
        /** @brief Only privileged accesses are granted in subregion z of region x. */
    constexpr std::uint32_t RISAF_REG7_ACFGR_PRIV_B_0x1 = 1;

    /** @brief read enable */
    using RISAF_REG7_ACFGR_RDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Any read to subregion z of region x returns zero. (value: 0)
     *          - B_0x1: Subregion z of region x can be read. (value: 1)
     */
        /** @brief Any read to subregion z of region x returns zero. */
    constexpr std::uint32_t RISAF_REG7_ACFGR_RDEN_B_0x0 = 0;
        /** @brief Subregion z of region x can be read. */
    constexpr std::uint32_t RISAF_REG7_ACFGR_RDEN_B_0x1 = 1;

    /** @brief write enable */
    using RISAF_REG7_ACFGR_WREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Any writes to subregion z of region x are ignored. (value: 0)
     *          - B_0x1: Subregion z of region x can be written to. (value: 1)
     */
        /** @brief Any writes to subregion z of region x are ignored. */
    constexpr std::uint32_t RISAF_REG7_ACFGR_WREN_B_0x0 = 0;
        /** @brief Subregion z of region x can be written to. */
    constexpr std::uint32_t RISAF_REG7_ACFGR_WREN_B_0x1 = 1;

    /** @brief RISAF region 7 subregion A start-address register */
    using RISAF_REG7_ASTARTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1D4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief subregion address start */
    using RISAF_REG7_ASTARTR_SADDSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 7 subregion A end-address register */
    using RISAF_REG7_AENDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1D8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief subregion address end */
    using RISAF_REG7_AENDR_SADDEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 7 subregion A nested mode register */
    using RISAF_REG7_ANESTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1DC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief delegated configuration enable */
    using RISAF_REG7_ANESTR_DCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RIF configuration for subregion z can be written only by the secure privileged software. (value: 0)
     *          - B_0x1: RIF configuration for subregion z can be written only (value: 1)
     */
        /** @brief RIF configuration for subregion z can be written only by the secure privileged software. */
    constexpr std::uint32_t RISAF_REG7_ANESTR_DCEN_B_0x0 = 0;
        /** @brief RIF configuration for subregion z can be written only */
    constexpr std::uint32_t RISAF_REG7_ANESTR_DCEN_B_0x1 = 1;

    /** @brief RISAF region 8 subregion A configuration register */
    using RISAF_REG8_ACFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x210, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief subregion enable */
    using RISAF_REG8_ACFGR_SREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Subregion z is disabled. Access control of base region x applies to any access between this subregion start and end addresses. (value: 0)
     *          - B_0x1: Subregion z of region x is enable. Access control defined in subregion z applies to any access between subregion z start and end addresses. (value: 1)
     */
        /** @brief Subregion z is disabled. Access control of base region x applies to any access between this subregion start and end addresses. */
    constexpr std::uint32_t RISAF_REG8_ACFGR_SREN_B_0x0 = 0;
        /** @brief Subregion z of region x is enable. Access control defined in subregion z applies to any access between subregion z start and end addresses. */
    constexpr std::uint32_t RISAF_REG8_ACFGR_SREN_B_0x1 = 1;

    /** @brief resource lock */
    using RISAF_REG8_ACFGR_RLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are writable. (value: 0)
     *          - B_0x1: Writes to RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are ignored. (value: 1)
     */
        /** @brief RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are writable. */
    constexpr std::uint32_t RISAF_REG8_ACFGR_RLOCK_B_0x0 = 0;
        /** @brief Writes to RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are ignored. */
    constexpr std::uint32_t RISAF_REG8_ACFGR_RLOCK_B_0x1 = 1;

    /** @brief subregion CID */
    using RISAF_REG8_ACFGR_SRCID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief secure subregion */
    using RISAF_REG8_ACFGR_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Only non-secure requests can access subregion z of region x. (value: 0)
     *          - B_0x1: Only secure requests can access subregion z of region x. (value: 1)
     */
        /** @brief Only non-secure requests can access subregion z of region x. */
    constexpr std::uint32_t RISAF_REG8_ACFGR_SEC_B_0x0 = 0;
        /** @brief Only secure requests can access subregion z of region x. */
    constexpr std::uint32_t RISAF_REG8_ACFGR_SEC_B_0x1 = 1;

    /** @brief privileged subregion */
    using RISAF_REG8_ACFGR_PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged accesses are granted in subregion z of region x. (value: 0)
     *          - B_0x1: Only privileged accesses are granted in subregion z of region x. (value: 1)
     */
        /** @brief Privileged and unprivileged accesses are granted in subregion z of region x. */
    constexpr std::uint32_t RISAF_REG8_ACFGR_PRIV_B_0x0 = 0;
        /** @brief Only privileged accesses are granted in subregion z of region x. */
    constexpr std::uint32_t RISAF_REG8_ACFGR_PRIV_B_0x1 = 1;

    /** @brief read enable */
    using RISAF_REG8_ACFGR_RDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Any read to subregion z of region x returns zero. (value: 0)
     *          - B_0x1: Subregion z of region x can be read. (value: 1)
     */
        /** @brief Any read to subregion z of region x returns zero. */
    constexpr std::uint32_t RISAF_REG8_ACFGR_RDEN_B_0x0 = 0;
        /** @brief Subregion z of region x can be read. */
    constexpr std::uint32_t RISAF_REG8_ACFGR_RDEN_B_0x1 = 1;

    /** @brief write enable */
    using RISAF_REG8_ACFGR_WREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Any writes to subregion z of region x are ignored. (value: 0)
     *          - B_0x1: Subregion z of region x can be written to. (value: 1)
     */
        /** @brief Any writes to subregion z of region x are ignored. */
    constexpr std::uint32_t RISAF_REG8_ACFGR_WREN_B_0x0 = 0;
        /** @brief Subregion z of region x can be written to. */
    constexpr std::uint32_t RISAF_REG8_ACFGR_WREN_B_0x1 = 1;

    /** @brief RISAF region 8 subregion A start-address register */
    using RISAF_REG8_ASTARTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x214, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief subregion address start */
    using RISAF_REG8_ASTARTR_SADDSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 8 subregion A end-address register */
    using RISAF_REG8_AENDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x218, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief subregion address end */
    using RISAF_REG8_AENDR_SADDEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 8 subregion A nested mode register */
    using RISAF_REG8_ANESTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x21C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief delegated configuration enable */
    using RISAF_REG8_ANESTR_DCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RIF configuration for subregion z can be written only by the secure privileged software. (value: 0)
     *          - B_0x1: RIF configuration for subregion z can be written only (value: 1)
     */
        /** @brief RIF configuration for subregion z can be written only by the secure privileged software. */
    constexpr std::uint32_t RISAF_REG8_ANESTR_DCEN_B_0x0 = 0;
        /** @brief RIF configuration for subregion z can be written only */
    constexpr std::uint32_t RISAF_REG8_ANESTR_DCEN_B_0x1 = 1;

    /** @brief RISAF region 9 subregion A configuration register */
    using RISAF_REG9_ACFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x250, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief subregion enable */
    using RISAF_REG9_ACFGR_SREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Subregion z is disabled. Access control of base region x applies to any access between this subregion start and end addresses. (value: 0)
     *          - B_0x1: Subregion z of region x is enable. Access control defined in subregion z applies to any access between subregion z start and end addresses. (value: 1)
     */
        /** @brief Subregion z is disabled. Access control of base region x applies to any access between this subregion start and end addresses. */
    constexpr std::uint32_t RISAF_REG9_ACFGR_SREN_B_0x0 = 0;
        /** @brief Subregion z of region x is enable. Access control defined in subregion z applies to any access between subregion z start and end addresses. */
    constexpr std::uint32_t RISAF_REG9_ACFGR_SREN_B_0x1 = 1;

    /** @brief resource lock */
    using RISAF_REG9_ACFGR_RLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are writable. (value: 0)
     *          - B_0x1: Writes to RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are ignored. (value: 1)
     */
        /** @brief RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are writable. */
    constexpr std::uint32_t RISAF_REG9_ACFGR_RLOCK_B_0x0 = 0;
        /** @brief Writes to RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are ignored. */
    constexpr std::uint32_t RISAF_REG9_ACFGR_RLOCK_B_0x1 = 1;

    /** @brief subregion CID */
    using RISAF_REG9_ACFGR_SRCID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief secure subregion */
    using RISAF_REG9_ACFGR_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Only non-secure requests can access subregion z of region x. (value: 0)
     *          - B_0x1: Only secure requests can access subregion z of region x. (value: 1)
     */
        /** @brief Only non-secure requests can access subregion z of region x. */
    constexpr std::uint32_t RISAF_REG9_ACFGR_SEC_B_0x0 = 0;
        /** @brief Only secure requests can access subregion z of region x. */
    constexpr std::uint32_t RISAF_REG9_ACFGR_SEC_B_0x1 = 1;

    /** @brief privileged subregion */
    using RISAF_REG9_ACFGR_PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged accesses are granted in subregion z of region x. (value: 0)
     *          - B_0x1: Only privileged accesses are granted in subregion z of region x. (value: 1)
     */
        /** @brief Privileged and unprivileged accesses are granted in subregion z of region x. */
    constexpr std::uint32_t RISAF_REG9_ACFGR_PRIV_B_0x0 = 0;
        /** @brief Only privileged accesses are granted in subregion z of region x. */
    constexpr std::uint32_t RISAF_REG9_ACFGR_PRIV_B_0x1 = 1;

    /** @brief read enable */
    using RISAF_REG9_ACFGR_RDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Any read to subregion z of region x returns zero. (value: 0)
     *          - B_0x1: Subregion z of region x can be read. (value: 1)
     */
        /** @brief Any read to subregion z of region x returns zero. */
    constexpr std::uint32_t RISAF_REG9_ACFGR_RDEN_B_0x0 = 0;
        /** @brief Subregion z of region x can be read. */
    constexpr std::uint32_t RISAF_REG9_ACFGR_RDEN_B_0x1 = 1;

    /** @brief write enable */
    using RISAF_REG9_ACFGR_WREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Any writes to subregion z of region x are ignored. (value: 0)
     *          - B_0x1: Subregion z of region x can be written to. (value: 1)
     */
        /** @brief Any writes to subregion z of region x are ignored. */
    constexpr std::uint32_t RISAF_REG9_ACFGR_WREN_B_0x0 = 0;
        /** @brief Subregion z of region x can be written to. */
    constexpr std::uint32_t RISAF_REG9_ACFGR_WREN_B_0x1 = 1;

    /** @brief RISAF region 9 subregion A start-address register */
    using RISAF_REG9_ASTARTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x254, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief subregion address start */
    using RISAF_REG9_ASTARTR_SADDSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 9 subregion A end-address register */
    using RISAF_REG9_AENDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x258, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief subregion address end */
    using RISAF_REG9_AENDR_SADDEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 9 subregion A nested mode register */
    using RISAF_REG9_ANESTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x25C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief delegated configuration enable */
    using RISAF_REG9_ANESTR_DCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RIF configuration for subregion z can be written only by the secure privileged software. (value: 0)
     *          - B_0x1: RIF configuration for subregion z can be written only (value: 1)
     */
        /** @brief RIF configuration for subregion z can be written only by the secure privileged software. */
    constexpr std::uint32_t RISAF_REG9_ANESTR_DCEN_B_0x0 = 0;
        /** @brief RIF configuration for subregion z can be written only */
    constexpr std::uint32_t RISAF_REG9_ANESTR_DCEN_B_0x1 = 1;

    /** @brief RISAF region 10 subregion A configuration register */
    using RISAF_REG10_ACFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x290, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief subregion enable */
    using RISAF_REG10_ACFGR_SREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Subregion z is disabled. Access control of base region x applies to any access between this subregion start and end addresses. (value: 0)
     *          - B_0x1: Subregion z of region x is enable. Access control defined in subregion z applies to any access between subregion z start and end addresses. (value: 1)
     */
        /** @brief Subregion z is disabled. Access control of base region x applies to any access between this subregion start and end addresses. */
    constexpr std::uint32_t RISAF_REG10_ACFGR_SREN_B_0x0 = 0;
        /** @brief Subregion z of region x is enable. Access control defined in subregion z applies to any access between subregion z start and end addresses. */
    constexpr std::uint32_t RISAF_REG10_ACFGR_SREN_B_0x1 = 1;

    /** @brief resource lock */
    using RISAF_REG10_ACFGR_RLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are writable. (value: 0)
     *          - B_0x1: Writes to RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are ignored. (value: 1)
     */
        /** @brief RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are writable. */
    constexpr std::uint32_t RISAF_REG10_ACFGR_RLOCK_B_0x0 = 0;
        /** @brief Writes to RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are ignored. */
    constexpr std::uint32_t RISAF_REG10_ACFGR_RLOCK_B_0x1 = 1;

    /** @brief subregion CID */
    using RISAF_REG10_ACFGR_SRCID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief secure subregion */
    using RISAF_REG10_ACFGR_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Only non-secure requests can access subregion z of region x. (value: 0)
     *          - B_0x1: Only secure requests can access subregion z of region x. (value: 1)
     */
        /** @brief Only non-secure requests can access subregion z of region x. */
    constexpr std::uint32_t RISAF_REG10_ACFGR_SEC_B_0x0 = 0;
        /** @brief Only secure requests can access subregion z of region x. */
    constexpr std::uint32_t RISAF_REG10_ACFGR_SEC_B_0x1 = 1;

    /** @brief privileged subregion */
    using RISAF_REG10_ACFGR_PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged accesses are granted in subregion z of region x. (value: 0)
     *          - B_0x1: Only privileged accesses are granted in subregion z of region x. (value: 1)
     */
        /** @brief Privileged and unprivileged accesses are granted in subregion z of region x. */
    constexpr std::uint32_t RISAF_REG10_ACFGR_PRIV_B_0x0 = 0;
        /** @brief Only privileged accesses are granted in subregion z of region x. */
    constexpr std::uint32_t RISAF_REG10_ACFGR_PRIV_B_0x1 = 1;

    /** @brief read enable */
    using RISAF_REG10_ACFGR_RDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Any read to subregion z of region x returns zero. (value: 0)
     *          - B_0x1: Subregion z of region x can be read. (value: 1)
     */
        /** @brief Any read to subregion z of region x returns zero. */
    constexpr std::uint32_t RISAF_REG10_ACFGR_RDEN_B_0x0 = 0;
        /** @brief Subregion z of region x can be read. */
    constexpr std::uint32_t RISAF_REG10_ACFGR_RDEN_B_0x1 = 1;

    /** @brief write enable */
    using RISAF_REG10_ACFGR_WREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Any writes to subregion z of region x are ignored. (value: 0)
     *          - B_0x1: Subregion z of region x can be written to. (value: 1)
     */
        /** @brief Any writes to subregion z of region x are ignored. */
    constexpr std::uint32_t RISAF_REG10_ACFGR_WREN_B_0x0 = 0;
        /** @brief Subregion z of region x can be written to. */
    constexpr std::uint32_t RISAF_REG10_ACFGR_WREN_B_0x1 = 1;

    /** @brief RISAF region 10 subregion A start-address register */
    using RISAF_REG10_ASTARTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x294, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief subregion address start */
    using RISAF_REG10_ASTARTR_SADDSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 10 subregion A end-address register */
    using RISAF_REG10_AENDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x298, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief subregion address end */
    using RISAF_REG10_AENDR_SADDEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 10 subregion A nested mode register */
    using RISAF_REG10_ANESTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x29C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief delegated configuration enable */
    using RISAF_REG10_ANESTR_DCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RIF configuration for subregion z can be written only by the secure privileged software. (value: 0)
     *          - B_0x1: RIF configuration for subregion z can be written only (value: 1)
     */
        /** @brief RIF configuration for subregion z can be written only by the secure privileged software. */
    constexpr std::uint32_t RISAF_REG10_ANESTR_DCEN_B_0x0 = 0;
        /** @brief RIF configuration for subregion z can be written only */
    constexpr std::uint32_t RISAF_REG10_ANESTR_DCEN_B_0x1 = 1;

    /** @brief RISAF region 11 subregion A configuration register */
    using RISAF_REG11_ACFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2D0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief subregion enable */
    using RISAF_REG11_ACFGR_SREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Subregion z is disabled. Access control of base region x applies to any access between this subregion start and end addresses. (value: 0)
     *          - B_0x1: Subregion z of region x is enable. Access control defined in subregion z applies to any access between subregion z start and end addresses. (value: 1)
     */
        /** @brief Subregion z is disabled. Access control of base region x applies to any access between this subregion start and end addresses. */
    constexpr std::uint32_t RISAF_REG11_ACFGR_SREN_B_0x0 = 0;
        /** @brief Subregion z of region x is enable. Access control defined in subregion z applies to any access between subregion z start and end addresses. */
    constexpr std::uint32_t RISAF_REG11_ACFGR_SREN_B_0x1 = 1;

    /** @brief resource lock */
    using RISAF_REG11_ACFGR_RLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are writable. (value: 0)
     *          - B_0x1: Writes to RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are ignored. (value: 1)
     */
        /** @brief RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are writable. */
    constexpr std::uint32_t RISAF_REG11_ACFGR_RLOCK_B_0x0 = 0;
        /** @brief Writes to RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are ignored. */
    constexpr std::uint32_t RISAF_REG11_ACFGR_RLOCK_B_0x1 = 1;

    /** @brief subregion CID */
    using RISAF_REG11_ACFGR_SRCID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief secure subregion */
    using RISAF_REG11_ACFGR_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Only non-secure requests can access subregion z of region x. (value: 0)
     *          - B_0x1: Only secure requests can access subregion z of region x. (value: 1)
     */
        /** @brief Only non-secure requests can access subregion z of region x. */
    constexpr std::uint32_t RISAF_REG11_ACFGR_SEC_B_0x0 = 0;
        /** @brief Only secure requests can access subregion z of region x. */
    constexpr std::uint32_t RISAF_REG11_ACFGR_SEC_B_0x1 = 1;

    /** @brief privileged subregion */
    using RISAF_REG11_ACFGR_PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged accesses are granted in subregion z of region x. (value: 0)
     *          - B_0x1: Only privileged accesses are granted in subregion z of region x. (value: 1)
     */
        /** @brief Privileged and unprivileged accesses are granted in subregion z of region x. */
    constexpr std::uint32_t RISAF_REG11_ACFGR_PRIV_B_0x0 = 0;
        /** @brief Only privileged accesses are granted in subregion z of region x. */
    constexpr std::uint32_t RISAF_REG11_ACFGR_PRIV_B_0x1 = 1;

    /** @brief read enable */
    using RISAF_REG11_ACFGR_RDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Any read to subregion z of region x returns zero. (value: 0)
     *          - B_0x1: Subregion z of region x can be read. (value: 1)
     */
        /** @brief Any read to subregion z of region x returns zero. */
    constexpr std::uint32_t RISAF_REG11_ACFGR_RDEN_B_0x0 = 0;
        /** @brief Subregion z of region x can be read. */
    constexpr std::uint32_t RISAF_REG11_ACFGR_RDEN_B_0x1 = 1;

    /** @brief write enable */
    using RISAF_REG11_ACFGR_WREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Any writes to subregion z of region x are ignored. (value: 0)
     *          - B_0x1: Subregion z of region x can be written to. (value: 1)
     */
        /** @brief Any writes to subregion z of region x are ignored. */
    constexpr std::uint32_t RISAF_REG11_ACFGR_WREN_B_0x0 = 0;
        /** @brief Subregion z of region x can be written to. */
    constexpr std::uint32_t RISAF_REG11_ACFGR_WREN_B_0x1 = 1;

    /** @brief RISAF region 11 subregion A start-address register */
    using RISAF_REG11_ASTARTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2D4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief subregion address start */
    using RISAF_REG11_ASTARTR_SADDSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 11 subregion A end-address register */
    using RISAF_REG11_AENDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2D8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief subregion address end */
    using RISAF_REG11_AENDR_SADDEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 11 subregion A nested mode register */
    using RISAF_REG11_ANESTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2DC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief delegated configuration enable */
    using RISAF_REG11_ANESTR_DCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RIF configuration for subregion z can be written only by the secure privileged software. (value: 0)
     *          - B_0x1: RIF configuration for subregion z can be written only (value: 1)
     */
        /** @brief RIF configuration for subregion z can be written only by the secure privileged software. */
    constexpr std::uint32_t RISAF_REG11_ANESTR_DCEN_B_0x0 = 0;
        /** @brief RIF configuration for subregion z can be written only */
    constexpr std::uint32_t RISAF_REG11_ANESTR_DCEN_B_0x1 = 1;

    /** @brief RISAF region 12 subregion A configuration register */
    using RISAF_REG12_ACFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x310, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief subregion enable */
    using RISAF_REG12_ACFGR_SREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Subregion z is disabled. Access control of base region x applies to any access between this subregion start and end addresses. (value: 0)
     *          - B_0x1: Subregion z of region x is enable. Access control defined in subregion z applies to any access between subregion z start and end addresses. (value: 1)
     */
        /** @brief Subregion z is disabled. Access control of base region x applies to any access between this subregion start and end addresses. */
    constexpr std::uint32_t RISAF_REG12_ACFGR_SREN_B_0x0 = 0;
        /** @brief Subregion z of region x is enable. Access control defined in subregion z applies to any access between subregion z start and end addresses. */
    constexpr std::uint32_t RISAF_REG12_ACFGR_SREN_B_0x1 = 1;

    /** @brief resource lock */
    using RISAF_REG12_ACFGR_RLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are writable. (value: 0)
     *          - B_0x1: Writes to RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are ignored. (value: 1)
     */
        /** @brief RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are writable. */
    constexpr std::uint32_t RISAF_REG12_ACFGR_RLOCK_B_0x0 = 0;
        /** @brief Writes to RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are ignored. */
    constexpr std::uint32_t RISAF_REG12_ACFGR_RLOCK_B_0x1 = 1;

    /** @brief subregion CID */
    using RISAF_REG12_ACFGR_SRCID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief secure subregion */
    using RISAF_REG12_ACFGR_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Only non-secure requests can access subregion z of region x. (value: 0)
     *          - B_0x1: Only secure requests can access subregion z of region x. (value: 1)
     */
        /** @brief Only non-secure requests can access subregion z of region x. */
    constexpr std::uint32_t RISAF_REG12_ACFGR_SEC_B_0x0 = 0;
        /** @brief Only secure requests can access subregion z of region x. */
    constexpr std::uint32_t RISAF_REG12_ACFGR_SEC_B_0x1 = 1;

    /** @brief privileged subregion */
    using RISAF_REG12_ACFGR_PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged accesses are granted in subregion z of region x. (value: 0)
     *          - B_0x1: Only privileged accesses are granted in subregion z of region x. (value: 1)
     */
        /** @brief Privileged and unprivileged accesses are granted in subregion z of region x. */
    constexpr std::uint32_t RISAF_REG12_ACFGR_PRIV_B_0x0 = 0;
        /** @brief Only privileged accesses are granted in subregion z of region x. */
    constexpr std::uint32_t RISAF_REG12_ACFGR_PRIV_B_0x1 = 1;

    /** @brief read enable */
    using RISAF_REG12_ACFGR_RDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Any read to subregion z of region x returns zero. (value: 0)
     *          - B_0x1: Subregion z of region x can be read. (value: 1)
     */
        /** @brief Any read to subregion z of region x returns zero. */
    constexpr std::uint32_t RISAF_REG12_ACFGR_RDEN_B_0x0 = 0;
        /** @brief Subregion z of region x can be read. */
    constexpr std::uint32_t RISAF_REG12_ACFGR_RDEN_B_0x1 = 1;

    /** @brief write enable */
    using RISAF_REG12_ACFGR_WREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Any writes to subregion z of region x are ignored. (value: 0)
     *          - B_0x1: Subregion z of region x can be written to. (value: 1)
     */
        /** @brief Any writes to subregion z of region x are ignored. */
    constexpr std::uint32_t RISAF_REG12_ACFGR_WREN_B_0x0 = 0;
        /** @brief Subregion z of region x can be written to. */
    constexpr std::uint32_t RISAF_REG12_ACFGR_WREN_B_0x1 = 1;

    /** @brief RISAF region 12 subregion A start-address register */
    using RISAF_REG12_ASTARTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x314, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief subregion address start */
    using RISAF_REG12_ASTARTR_SADDSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 12 subregion A end-address register */
    using RISAF_REG12_AENDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x318, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief subregion address end */
    using RISAF_REG12_AENDR_SADDEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 12 subregion A nested mode register */
    using RISAF_REG12_ANESTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x31C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief delegated configuration enable */
    using RISAF_REG12_ANESTR_DCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RIF configuration for subregion z can be written only by the secure privileged software. (value: 0)
     *          - B_0x1: RIF configuration for subregion z can be written only (value: 1)
     */
        /** @brief RIF configuration for subregion z can be written only by the secure privileged software. */
    constexpr std::uint32_t RISAF_REG12_ANESTR_DCEN_B_0x0 = 0;
        /** @brief RIF configuration for subregion z can be written only */
    constexpr std::uint32_t RISAF_REG12_ANESTR_DCEN_B_0x1 = 1;

    /** @brief RISAF region 13 subregion A configuration register */
    using RISAF_REG13_ACFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x350, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief subregion enable */
    using RISAF_REG13_ACFGR_SREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Subregion z is disabled. Access control of base region x applies to any access between this subregion start and end addresses. (value: 0)
     *          - B_0x1: Subregion z of region x is enable. Access control defined in subregion z applies to any access between subregion z start and end addresses. (value: 1)
     */
        /** @brief Subregion z is disabled. Access control of base region x applies to any access between this subregion start and end addresses. */
    constexpr std::uint32_t RISAF_REG13_ACFGR_SREN_B_0x0 = 0;
        /** @brief Subregion z of region x is enable. Access control defined in subregion z applies to any access between subregion z start and end addresses. */
    constexpr std::uint32_t RISAF_REG13_ACFGR_SREN_B_0x1 = 1;

    /** @brief resource lock */
    using RISAF_REG13_ACFGR_RLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are writable. (value: 0)
     *          - B_0x1: Writes to RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are ignored. (value: 1)
     */
        /** @brief RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are writable. */
    constexpr std::uint32_t RISAF_REG13_ACFGR_RLOCK_B_0x0 = 0;
        /** @brief Writes to RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are ignored. */
    constexpr std::uint32_t RISAF_REG13_ACFGR_RLOCK_B_0x1 = 1;

    /** @brief subregion CID */
    using RISAF_REG13_ACFGR_SRCID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief secure subregion */
    using RISAF_REG13_ACFGR_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Only non-secure requests can access subregion z of region x. (value: 0)
     *          - B_0x1: Only secure requests can access subregion z of region x. (value: 1)
     */
        /** @brief Only non-secure requests can access subregion z of region x. */
    constexpr std::uint32_t RISAF_REG13_ACFGR_SEC_B_0x0 = 0;
        /** @brief Only secure requests can access subregion z of region x. */
    constexpr std::uint32_t RISAF_REG13_ACFGR_SEC_B_0x1 = 1;

    /** @brief privileged subregion */
    using RISAF_REG13_ACFGR_PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged accesses are granted in subregion z of region x. (value: 0)
     *          - B_0x1: Only privileged accesses are granted in subregion z of region x. (value: 1)
     */
        /** @brief Privileged and unprivileged accesses are granted in subregion z of region x. */
    constexpr std::uint32_t RISAF_REG13_ACFGR_PRIV_B_0x0 = 0;
        /** @brief Only privileged accesses are granted in subregion z of region x. */
    constexpr std::uint32_t RISAF_REG13_ACFGR_PRIV_B_0x1 = 1;

    /** @brief read enable */
    using RISAF_REG13_ACFGR_RDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Any read to subregion z of region x returns zero. (value: 0)
     *          - B_0x1: Subregion z of region x can be read. (value: 1)
     */
        /** @brief Any read to subregion z of region x returns zero. */
    constexpr std::uint32_t RISAF_REG13_ACFGR_RDEN_B_0x0 = 0;
        /** @brief Subregion z of region x can be read. */
    constexpr std::uint32_t RISAF_REG13_ACFGR_RDEN_B_0x1 = 1;

    /** @brief write enable */
    using RISAF_REG13_ACFGR_WREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Any writes to subregion z of region x are ignored. (value: 0)
     *          - B_0x1: Subregion z of region x can be written to. (value: 1)
     */
        /** @brief Any writes to subregion z of region x are ignored. */
    constexpr std::uint32_t RISAF_REG13_ACFGR_WREN_B_0x0 = 0;
        /** @brief Subregion z of region x can be written to. */
    constexpr std::uint32_t RISAF_REG13_ACFGR_WREN_B_0x1 = 1;

    /** @brief RISAF region 13 subregion A start-address register */
    using RISAF_REG13_ASTARTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x354, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief subregion address start */
    using RISAF_REG13_ASTARTR_SADDSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 13 subregion A end-address register */
    using RISAF_REG13_AENDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x358, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief subregion address end */
    using RISAF_REG13_AENDR_SADDEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 13 subregion A nested mode register */
    using RISAF_REG13_ANESTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x35C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief delegated configuration enable */
    using RISAF_REG13_ANESTR_DCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RIF configuration for subregion z can be written only by the secure privileged software. (value: 0)
     *          - B_0x1: RIF configuration for subregion z can be written only (value: 1)
     */
        /** @brief RIF configuration for subregion z can be written only by the secure privileged software. */
    constexpr std::uint32_t RISAF_REG13_ANESTR_DCEN_B_0x0 = 0;
        /** @brief RIF configuration for subregion z can be written only */
    constexpr std::uint32_t RISAF_REG13_ANESTR_DCEN_B_0x1 = 1;

    /** @brief RISAF region 14 subregion A configuration register */
    using RISAF_REG14_ACFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x390, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief subregion enable */
    using RISAF_REG14_ACFGR_SREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Subregion z is disabled. Access control of base region x applies to any access between this subregion start and end addresses. (value: 0)
     *          - B_0x1: Subregion z of region x is enable. Access control defined in subregion z applies to any access between subregion z start and end addresses. (value: 1)
     */
        /** @brief Subregion z is disabled. Access control of base region x applies to any access between this subregion start and end addresses. */
    constexpr std::uint32_t RISAF_REG14_ACFGR_SREN_B_0x0 = 0;
        /** @brief Subregion z of region x is enable. Access control defined in subregion z applies to any access between subregion z start and end addresses. */
    constexpr std::uint32_t RISAF_REG14_ACFGR_SREN_B_0x1 = 1;

    /** @brief resource lock */
    using RISAF_REG14_ACFGR_RLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are writable. (value: 0)
     *          - B_0x1: Writes to RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are ignored. (value: 1)
     */
        /** @brief RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are writable. */
    constexpr std::uint32_t RISAF_REG14_ACFGR_RLOCK_B_0x0 = 0;
        /** @brief Writes to RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are ignored. */
    constexpr std::uint32_t RISAF_REG14_ACFGR_RLOCK_B_0x1 = 1;

    /** @brief subregion CID */
    using RISAF_REG14_ACFGR_SRCID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief secure subregion */
    using RISAF_REG14_ACFGR_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Only non-secure requests can access subregion z of region x. (value: 0)
     *          - B_0x1: Only secure requests can access subregion z of region x. (value: 1)
     */
        /** @brief Only non-secure requests can access subregion z of region x. */
    constexpr std::uint32_t RISAF_REG14_ACFGR_SEC_B_0x0 = 0;
        /** @brief Only secure requests can access subregion z of region x. */
    constexpr std::uint32_t RISAF_REG14_ACFGR_SEC_B_0x1 = 1;

    /** @brief privileged subregion */
    using RISAF_REG14_ACFGR_PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged accesses are granted in subregion z of region x. (value: 0)
     *          - B_0x1: Only privileged accesses are granted in subregion z of region x. (value: 1)
     */
        /** @brief Privileged and unprivileged accesses are granted in subregion z of region x. */
    constexpr std::uint32_t RISAF_REG14_ACFGR_PRIV_B_0x0 = 0;
        /** @brief Only privileged accesses are granted in subregion z of region x. */
    constexpr std::uint32_t RISAF_REG14_ACFGR_PRIV_B_0x1 = 1;

    /** @brief read enable */
    using RISAF_REG14_ACFGR_RDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Any read to subregion z of region x returns zero. (value: 0)
     *          - B_0x1: Subregion z of region x can be read. (value: 1)
     */
        /** @brief Any read to subregion z of region x returns zero. */
    constexpr std::uint32_t RISAF_REG14_ACFGR_RDEN_B_0x0 = 0;
        /** @brief Subregion z of region x can be read. */
    constexpr std::uint32_t RISAF_REG14_ACFGR_RDEN_B_0x1 = 1;

    /** @brief write enable */
    using RISAF_REG14_ACFGR_WREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Any writes to subregion z of region x are ignored. (value: 0)
     *          - B_0x1: Subregion z of region x can be written to. (value: 1)
     */
        /** @brief Any writes to subregion z of region x are ignored. */
    constexpr std::uint32_t RISAF_REG14_ACFGR_WREN_B_0x0 = 0;
        /** @brief Subregion z of region x can be written to. */
    constexpr std::uint32_t RISAF_REG14_ACFGR_WREN_B_0x1 = 1;

    /** @brief RISAF region 14 subregion A start-address register */
    using RISAF_REG14_ASTARTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x394, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief subregion address start */
    using RISAF_REG14_ASTARTR_SADDSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 14 subregion A end-address register */
    using RISAF_REG14_AENDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x398, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief subregion address end */
    using RISAF_REG14_AENDR_SADDEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 14 subregion A nested mode register */
    using RISAF_REG14_ANESTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x39C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief delegated configuration enable */
    using RISAF_REG14_ANESTR_DCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RIF configuration for subregion z can be written only by the secure privileged software. (value: 0)
     *          - B_0x1: RIF configuration for subregion z can be written only (value: 1)
     */
        /** @brief RIF configuration for subregion z can be written only by the secure privileged software. */
    constexpr std::uint32_t RISAF_REG14_ANESTR_DCEN_B_0x0 = 0;
        /** @brief RIF configuration for subregion z can be written only */
    constexpr std::uint32_t RISAF_REG14_ANESTR_DCEN_B_0x1 = 1;

    /** @brief RISAF region 15 subregion A configuration register */
    using RISAF_REG15_ACFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3D0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief subregion enable */
    using RISAF_REG15_ACFGR_SREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Subregion z is disabled. Access control of base region x applies to any access between this subregion start and end addresses. (value: 0)
     *          - B_0x1: Subregion z of region x is enable. Access control defined in subregion z applies to any access between subregion z start and end addresses. (value: 1)
     */
        /** @brief Subregion z is disabled. Access control of base region x applies to any access between this subregion start and end addresses. */
    constexpr std::uint32_t RISAF_REG15_ACFGR_SREN_B_0x0 = 0;
        /** @brief Subregion z of region x is enable. Access control defined in subregion z applies to any access between subregion z start and end addresses. */
    constexpr std::uint32_t RISAF_REG15_ACFGR_SREN_B_0x1 = 1;

    /** @brief resource lock */
    using RISAF_REG15_ACFGR_RLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are writable. (value: 0)
     *          - B_0x1: Writes to RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are ignored. (value: 1)
     */
        /** @brief RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are writable. */
    constexpr std::uint32_t RISAF_REG15_ACFGR_RLOCK_B_0x0 = 0;
        /** @brief Writes to RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are ignored. */
    constexpr std::uint32_t RISAF_REG15_ACFGR_RLOCK_B_0x1 = 1;

    /** @brief subregion CID */
    using RISAF_REG15_ACFGR_SRCID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief secure subregion */
    using RISAF_REG15_ACFGR_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Only non-secure requests can access subregion z of region x. (value: 0)
     *          - B_0x1: Only secure requests can access subregion z of region x. (value: 1)
     */
        /** @brief Only non-secure requests can access subregion z of region x. */
    constexpr std::uint32_t RISAF_REG15_ACFGR_SEC_B_0x0 = 0;
        /** @brief Only secure requests can access subregion z of region x. */
    constexpr std::uint32_t RISAF_REG15_ACFGR_SEC_B_0x1 = 1;

    /** @brief privileged subregion */
    using RISAF_REG15_ACFGR_PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged accesses are granted in subregion z of region x. (value: 0)
     *          - B_0x1: Only privileged accesses are granted in subregion z of region x. (value: 1)
     */
        /** @brief Privileged and unprivileged accesses are granted in subregion z of region x. */
    constexpr std::uint32_t RISAF_REG15_ACFGR_PRIV_B_0x0 = 0;
        /** @brief Only privileged accesses are granted in subregion z of region x. */
    constexpr std::uint32_t RISAF_REG15_ACFGR_PRIV_B_0x1 = 1;

    /** @brief read enable */
    using RISAF_REG15_ACFGR_RDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Any read to subregion z of region x returns zero. (value: 0)
     *          - B_0x1: Subregion z of region x can be read. (value: 1)
     */
        /** @brief Any read to subregion z of region x returns zero. */
    constexpr std::uint32_t RISAF_REG15_ACFGR_RDEN_B_0x0 = 0;
        /** @brief Subregion z of region x can be read. */
    constexpr std::uint32_t RISAF_REG15_ACFGR_RDEN_B_0x1 = 1;

    /** @brief write enable */
    using RISAF_REG15_ACFGR_WREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Any writes to subregion z of region x are ignored. (value: 0)
     *          - B_0x1: Subregion z of region x can be written to. (value: 1)
     */
        /** @brief Any writes to subregion z of region x are ignored. */
    constexpr std::uint32_t RISAF_REG15_ACFGR_WREN_B_0x0 = 0;
        /** @brief Subregion z of region x can be written to. */
    constexpr std::uint32_t RISAF_REG15_ACFGR_WREN_B_0x1 = 1;

    /** @brief RISAF region 15 subregion A start-address register */
    using RISAF_REG15_ASTARTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3D4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief subregion address start */
    using RISAF_REG15_ASTARTR_SADDSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 15 subregion A end-address register */
    using RISAF_REG15_AENDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3D8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief subregion address end */
    using RISAF_REG15_AENDR_SADDEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 15 subregion A nested mode register */
    using RISAF_REG15_ANESTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3DC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief delegated configuration enable */
    using RISAF_REG15_ANESTR_DCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RIF configuration for subregion z can be written only by the secure privileged software. (value: 0)
     *          - B_0x1: RIF configuration for subregion z can be written only (value: 1)
     */
        /** @brief RIF configuration for subregion z can be written only by the secure privileged software. */
    constexpr std::uint32_t RISAF_REG15_ANESTR_DCEN_B_0x0 = 0;
        /** @brief RIF configuration for subregion z can be written only */
    constexpr std::uint32_t RISAF_REG15_ANESTR_DCEN_B_0x1 = 1;

    /** @brief RISAF region 1 subregion B configuration register */
    using RISAF_REG1_BCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief subregion enable */
    using RISAF_REG1_BCFGR_SREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Subregion z is disabled. Access control of base region x applies to any access between this subregion start and end addresses. (value: 0)
     *          - B_0x1: Subregion z of region x is enable. Access control defined in subregion z applies to any access between subregion z start and end addresses. (value: 1)
     */
        /** @brief Subregion z is disabled. Access control of base region x applies to any access between this subregion start and end addresses. */
    constexpr std::uint32_t RISAF_REG1_BCFGR_SREN_B_0x0 = 0;
        /** @brief Subregion z of region x is enable. Access control defined in subregion z applies to any access between subregion z start and end addresses. */
    constexpr std::uint32_t RISAF_REG1_BCFGR_SREN_B_0x1 = 1;

    /** @brief resource lock */
    using RISAF_REG1_BCFGR_RLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are writable. (value: 0)
     *          - B_0x1: Writes to RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are ignored. (value: 1)
     */
        /** @brief RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are writable. */
    constexpr std::uint32_t RISAF_REG1_BCFGR_RLOCK_B_0x0 = 0;
        /** @brief Writes to RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are ignored. */
    constexpr std::uint32_t RISAF_REG1_BCFGR_RLOCK_B_0x1 = 1;

    /** @brief subregion CID */
    using RISAF_REG1_BCFGR_SRCID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief secure subregion */
    using RISAF_REG1_BCFGR_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Only non-secure requests can access subregion z of region x. (value: 0)
     *          - B_0x1: Only secure requests can access subregion z of region x. (value: 1)
     */
        /** @brief Only non-secure requests can access subregion z of region x. */
    constexpr std::uint32_t RISAF_REG1_BCFGR_SEC_B_0x0 = 0;
        /** @brief Only secure requests can access subregion z of region x. */
    constexpr std::uint32_t RISAF_REG1_BCFGR_SEC_B_0x1 = 1;

    /** @brief privileged subregion */
    using RISAF_REG1_BCFGR_PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged accesses are granted in subregion z of region x. (value: 0)
     *          - B_0x1: Only privileged accesses are granted in subregion z of region x. (value: 1)
     */
        /** @brief Privileged and unprivileged accesses are granted in subregion z of region x. */
    constexpr std::uint32_t RISAF_REG1_BCFGR_PRIV_B_0x0 = 0;
        /** @brief Only privileged accesses are granted in subregion z of region x. */
    constexpr std::uint32_t RISAF_REG1_BCFGR_PRIV_B_0x1 = 1;

    /** @brief read enable */
    using RISAF_REG1_BCFGR_RDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Any read to subregion z of region x returns zero. (value: 0)
     *          - B_0x1: Subregion z of region x can be read. (value: 1)
     */
        /** @brief Any read to subregion z of region x returns zero. */
    constexpr std::uint32_t RISAF_REG1_BCFGR_RDEN_B_0x0 = 0;
        /** @brief Subregion z of region x can be read. */
    constexpr std::uint32_t RISAF_REG1_BCFGR_RDEN_B_0x1 = 1;

    /** @brief write enable */
    using RISAF_REG1_BCFGR_WREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Any writes to subregion z of region x are ignored. (value: 0)
     *          - B_0x1: Subregion z of region x can be written to. (value: 1)
     */
        /** @brief Any writes to subregion z of region x are ignored. */
    constexpr std::uint32_t RISAF_REG1_BCFGR_WREN_B_0x0 = 0;
        /** @brief Subregion z of region x can be written to. */
    constexpr std::uint32_t RISAF_REG1_BCFGR_WREN_B_0x1 = 1;

    /** @brief RISAF region 1 subregion B start-address register */
    using RISAF_REG1_BSTARTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x64, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief subregion address start */
    using RISAF_REG1_BSTARTR_SADDSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 1 subregion B end-address register */
    using RISAF_REG1_BENDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x68, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief subregion address end */
    using RISAF_REG1_BENDR_SADDEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 1 subregion B nested mode register */
    using RISAF_REG1_BNESTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief delegated configuration enable */
    using RISAF_REG1_BNESTR_DCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RIF configuration for subregion z can be written only by the secure privileged software. (value: 0)
     *          - B_0x1: RIF configuration for subregion z can be written only (value: 1)
     */
        /** @brief RIF configuration for subregion z can be written only by the secure privileged software. */
    constexpr std::uint32_t RISAF_REG1_BNESTR_DCEN_B_0x0 = 0;
        /** @brief RIF configuration for subregion z can be written only */
    constexpr std::uint32_t RISAF_REG1_BNESTR_DCEN_B_0x1 = 1;

    /** @brief RISAF region 2 subregion B configuration register */
    using RISAF_REG2_BCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief subregion enable */
    using RISAF_REG2_BCFGR_SREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Subregion z is disabled. Access control of base region x applies to any access between this subregion start and end addresses. (value: 0)
     *          - B_0x1: Subregion z of region x is enable. Access control defined in subregion z applies to any access between subregion z start and end addresses. (value: 1)
     */
        /** @brief Subregion z is disabled. Access control of base region x applies to any access between this subregion start and end addresses. */
    constexpr std::uint32_t RISAF_REG2_BCFGR_SREN_B_0x0 = 0;
        /** @brief Subregion z of region x is enable. Access control defined in subregion z applies to any access between subregion z start and end addresses. */
    constexpr std::uint32_t RISAF_REG2_BCFGR_SREN_B_0x1 = 1;

    /** @brief resource lock */
    using RISAF_REG2_BCFGR_RLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are writable. (value: 0)
     *          - B_0x1: Writes to RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are ignored. (value: 1)
     */
        /** @brief RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are writable. */
    constexpr std::uint32_t RISAF_REG2_BCFGR_RLOCK_B_0x0 = 0;
        /** @brief Writes to RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are ignored. */
    constexpr std::uint32_t RISAF_REG2_BCFGR_RLOCK_B_0x1 = 1;

    /** @brief subregion CID */
    using RISAF_REG2_BCFGR_SRCID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief secure subregion */
    using RISAF_REG2_BCFGR_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Only non-secure requests can access subregion z of region x. (value: 0)
     *          - B_0x1: Only secure requests can access subregion z of region x. (value: 1)
     */
        /** @brief Only non-secure requests can access subregion z of region x. */
    constexpr std::uint32_t RISAF_REG2_BCFGR_SEC_B_0x0 = 0;
        /** @brief Only secure requests can access subregion z of region x. */
    constexpr std::uint32_t RISAF_REG2_BCFGR_SEC_B_0x1 = 1;

    /** @brief privileged subregion */
    using RISAF_REG2_BCFGR_PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged accesses are granted in subregion z of region x. (value: 0)
     *          - B_0x1: Only privileged accesses are granted in subregion z of region x. (value: 1)
     */
        /** @brief Privileged and unprivileged accesses are granted in subregion z of region x. */
    constexpr std::uint32_t RISAF_REG2_BCFGR_PRIV_B_0x0 = 0;
        /** @brief Only privileged accesses are granted in subregion z of region x. */
    constexpr std::uint32_t RISAF_REG2_BCFGR_PRIV_B_0x1 = 1;

    /** @brief read enable */
    using RISAF_REG2_BCFGR_RDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Any read to subregion z of region x returns zero. (value: 0)
     *          - B_0x1: Subregion z of region x can be read. (value: 1)
     */
        /** @brief Any read to subregion z of region x returns zero. */
    constexpr std::uint32_t RISAF_REG2_BCFGR_RDEN_B_0x0 = 0;
        /** @brief Subregion z of region x can be read. */
    constexpr std::uint32_t RISAF_REG2_BCFGR_RDEN_B_0x1 = 1;

    /** @brief write enable */
    using RISAF_REG2_BCFGR_WREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Any writes to subregion z of region x are ignored. (value: 0)
     *          - B_0x1: Subregion z of region x can be written to. (value: 1)
     */
        /** @brief Any writes to subregion z of region x are ignored. */
    constexpr std::uint32_t RISAF_REG2_BCFGR_WREN_B_0x0 = 0;
        /** @brief Subregion z of region x can be written to. */
    constexpr std::uint32_t RISAF_REG2_BCFGR_WREN_B_0x1 = 1;

    /** @brief RISAF region 2 subregion B start-address register */
    using RISAF_REG2_BSTARTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief subregion address start */
    using RISAF_REG2_BSTARTR_SADDSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 2 subregion B end-address register */
    using RISAF_REG2_BENDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief subregion address end */
    using RISAF_REG2_BENDR_SADDEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 2 subregion B nested mode register */
    using RISAF_REG2_BNESTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xAC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief delegated configuration enable */
    using RISAF_REG2_BNESTR_DCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RIF configuration for subregion z can be written only by the secure privileged software. (value: 0)
     *          - B_0x1: RIF configuration for subregion z can be written only (value: 1)
     */
        /** @brief RIF configuration for subregion z can be written only by the secure privileged software. */
    constexpr std::uint32_t RISAF_REG2_BNESTR_DCEN_B_0x0 = 0;
        /** @brief RIF configuration for subregion z can be written only */
    constexpr std::uint32_t RISAF_REG2_BNESTR_DCEN_B_0x1 = 1;

    /** @brief RISAF region 3 subregion B configuration register */
    using RISAF_REG3_BCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xE0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief subregion enable */
    using RISAF_REG3_BCFGR_SREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Subregion z is disabled. Access control of base region x applies to any access between this subregion start and end addresses. (value: 0)
     *          - B_0x1: Subregion z of region x is enable. Access control defined in subregion z applies to any access between subregion z start and end addresses. (value: 1)
     */
        /** @brief Subregion z is disabled. Access control of base region x applies to any access between this subregion start and end addresses. */
    constexpr std::uint32_t RISAF_REG3_BCFGR_SREN_B_0x0 = 0;
        /** @brief Subregion z of region x is enable. Access control defined in subregion z applies to any access between subregion z start and end addresses. */
    constexpr std::uint32_t RISAF_REG3_BCFGR_SREN_B_0x1 = 1;

    /** @brief resource lock */
    using RISAF_REG3_BCFGR_RLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are writable. (value: 0)
     *          - B_0x1: Writes to RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are ignored. (value: 1)
     */
        /** @brief RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are writable. */
    constexpr std::uint32_t RISAF_REG3_BCFGR_RLOCK_B_0x0 = 0;
        /** @brief Writes to RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are ignored. */
    constexpr std::uint32_t RISAF_REG3_BCFGR_RLOCK_B_0x1 = 1;

    /** @brief subregion CID */
    using RISAF_REG3_BCFGR_SRCID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief secure subregion */
    using RISAF_REG3_BCFGR_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Only non-secure requests can access subregion z of region x. (value: 0)
     *          - B_0x1: Only secure requests can access subregion z of region x. (value: 1)
     */
        /** @brief Only non-secure requests can access subregion z of region x. */
    constexpr std::uint32_t RISAF_REG3_BCFGR_SEC_B_0x0 = 0;
        /** @brief Only secure requests can access subregion z of region x. */
    constexpr std::uint32_t RISAF_REG3_BCFGR_SEC_B_0x1 = 1;

    /** @brief privileged subregion */
    using RISAF_REG3_BCFGR_PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged accesses are granted in subregion z of region x. (value: 0)
     *          - B_0x1: Only privileged accesses are granted in subregion z of region x. (value: 1)
     */
        /** @brief Privileged and unprivileged accesses are granted in subregion z of region x. */
    constexpr std::uint32_t RISAF_REG3_BCFGR_PRIV_B_0x0 = 0;
        /** @brief Only privileged accesses are granted in subregion z of region x. */
    constexpr std::uint32_t RISAF_REG3_BCFGR_PRIV_B_0x1 = 1;

    /** @brief read enable */
    using RISAF_REG3_BCFGR_RDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Any read to subregion z of region x returns zero. (value: 0)
     *          - B_0x1: Subregion z of region x can be read. (value: 1)
     */
        /** @brief Any read to subregion z of region x returns zero. */
    constexpr std::uint32_t RISAF_REG3_BCFGR_RDEN_B_0x0 = 0;
        /** @brief Subregion z of region x can be read. */
    constexpr std::uint32_t RISAF_REG3_BCFGR_RDEN_B_0x1 = 1;

    /** @brief write enable */
    using RISAF_REG3_BCFGR_WREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Any writes to subregion z of region x are ignored. (value: 0)
     *          - B_0x1: Subregion z of region x can be written to. (value: 1)
     */
        /** @brief Any writes to subregion z of region x are ignored. */
    constexpr std::uint32_t RISAF_REG3_BCFGR_WREN_B_0x0 = 0;
        /** @brief Subregion z of region x can be written to. */
    constexpr std::uint32_t RISAF_REG3_BCFGR_WREN_B_0x1 = 1;

    /** @brief RISAF region 3 subregion B start-address register */
    using RISAF_REG3_BSTARTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xE4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief subregion address start */
    using RISAF_REG3_BSTARTR_SADDSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 3 subregion B end-address register */
    using RISAF_REG3_BENDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xE8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief subregion address end */
    using RISAF_REG3_BENDR_SADDEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 3 subregion B nested mode register */
    using RISAF_REG3_BNESTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xEC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief delegated configuration enable */
    using RISAF_REG3_BNESTR_DCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RIF configuration for subregion z can be written only by the secure privileged software. (value: 0)
     *          - B_0x1: RIF configuration for subregion z can be written only (value: 1)
     */
        /** @brief RIF configuration for subregion z can be written only by the secure privileged software. */
    constexpr std::uint32_t RISAF_REG3_BNESTR_DCEN_B_0x0 = 0;
        /** @brief RIF configuration for subregion z can be written only */
    constexpr std::uint32_t RISAF_REG3_BNESTR_DCEN_B_0x1 = 1;

    /** @brief RISAF region 4 subregion B configuration register */
    using RISAF_REG4_BCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x120, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief subregion enable */
    using RISAF_REG4_BCFGR_SREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Subregion z is disabled. Access control of base region x applies to any access between this subregion start and end addresses. (value: 0)
     *          - B_0x1: Subregion z of region x is enable. Access control defined in subregion z applies to any access between subregion z start and end addresses. (value: 1)
     */
        /** @brief Subregion z is disabled. Access control of base region x applies to any access between this subregion start and end addresses. */
    constexpr std::uint32_t RISAF_REG4_BCFGR_SREN_B_0x0 = 0;
        /** @brief Subregion z of region x is enable. Access control defined in subregion z applies to any access between subregion z start and end addresses. */
    constexpr std::uint32_t RISAF_REG4_BCFGR_SREN_B_0x1 = 1;

    /** @brief resource lock */
    using RISAF_REG4_BCFGR_RLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are writable. (value: 0)
     *          - B_0x1: Writes to RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are ignored. (value: 1)
     */
        /** @brief RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are writable. */
    constexpr std::uint32_t RISAF_REG4_BCFGR_RLOCK_B_0x0 = 0;
        /** @brief Writes to RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are ignored. */
    constexpr std::uint32_t RISAF_REG4_BCFGR_RLOCK_B_0x1 = 1;

    /** @brief subregion CID */
    using RISAF_REG4_BCFGR_SRCID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief secure subregion */
    using RISAF_REG4_BCFGR_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Only non-secure requests can access subregion z of region x. (value: 0)
     *          - B_0x1: Only secure requests can access subregion z of region x. (value: 1)
     */
        /** @brief Only non-secure requests can access subregion z of region x. */
    constexpr std::uint32_t RISAF_REG4_BCFGR_SEC_B_0x0 = 0;
        /** @brief Only secure requests can access subregion z of region x. */
    constexpr std::uint32_t RISAF_REG4_BCFGR_SEC_B_0x1 = 1;

    /** @brief privileged subregion */
    using RISAF_REG4_BCFGR_PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged accesses are granted in subregion z of region x. (value: 0)
     *          - B_0x1: Only privileged accesses are granted in subregion z of region x. (value: 1)
     */
        /** @brief Privileged and unprivileged accesses are granted in subregion z of region x. */
    constexpr std::uint32_t RISAF_REG4_BCFGR_PRIV_B_0x0 = 0;
        /** @brief Only privileged accesses are granted in subregion z of region x. */
    constexpr std::uint32_t RISAF_REG4_BCFGR_PRIV_B_0x1 = 1;

    /** @brief read enable */
    using RISAF_REG4_BCFGR_RDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Any read to subregion z of region x returns zero. (value: 0)
     *          - B_0x1: Subregion z of region x can be read. (value: 1)
     */
        /** @brief Any read to subregion z of region x returns zero. */
    constexpr std::uint32_t RISAF_REG4_BCFGR_RDEN_B_0x0 = 0;
        /** @brief Subregion z of region x can be read. */
    constexpr std::uint32_t RISAF_REG4_BCFGR_RDEN_B_0x1 = 1;

    /** @brief write enable */
    using RISAF_REG4_BCFGR_WREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Any writes to subregion z of region x are ignored. (value: 0)
     *          - B_0x1: Subregion z of region x can be written to. (value: 1)
     */
        /** @brief Any writes to subregion z of region x are ignored. */
    constexpr std::uint32_t RISAF_REG4_BCFGR_WREN_B_0x0 = 0;
        /** @brief Subregion z of region x can be written to. */
    constexpr std::uint32_t RISAF_REG4_BCFGR_WREN_B_0x1 = 1;

    /** @brief RISAF region 4 subregion B start-address register */
    using RISAF_REG4_BSTARTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x124, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief subregion address start */
    using RISAF_REG4_BSTARTR_SADDSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 4 subregion B end-address register */
    using RISAF_REG4_BENDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x128, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief subregion address end */
    using RISAF_REG4_BENDR_SADDEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 4 subregion B nested mode register */
    using RISAF_REG4_BNESTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x12C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief delegated configuration enable */
    using RISAF_REG4_BNESTR_DCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RIF configuration for subregion z can be written only by the secure privileged software. (value: 0)
     *          - B_0x1: RIF configuration for subregion z can be written only (value: 1)
     */
        /** @brief RIF configuration for subregion z can be written only by the secure privileged software. */
    constexpr std::uint32_t RISAF_REG4_BNESTR_DCEN_B_0x0 = 0;
        /** @brief RIF configuration for subregion z can be written only */
    constexpr std::uint32_t RISAF_REG4_BNESTR_DCEN_B_0x1 = 1;

    /** @brief RISAF region 5 subregion B configuration register */
    using RISAF_REG5_BCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x160, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief subregion enable */
    using RISAF_REG5_BCFGR_SREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Subregion z is disabled. Access control of base region x applies to any access between this subregion start and end addresses. (value: 0)
     *          - B_0x1: Subregion z of region x is enable. Access control defined in subregion z applies to any access between subregion z start and end addresses. (value: 1)
     */
        /** @brief Subregion z is disabled. Access control of base region x applies to any access between this subregion start and end addresses. */
    constexpr std::uint32_t RISAF_REG5_BCFGR_SREN_B_0x0 = 0;
        /** @brief Subregion z of region x is enable. Access control defined in subregion z applies to any access between subregion z start and end addresses. */
    constexpr std::uint32_t RISAF_REG5_BCFGR_SREN_B_0x1 = 1;

    /** @brief resource lock */
    using RISAF_REG5_BCFGR_RLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are writable. (value: 0)
     *          - B_0x1: Writes to RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are ignored. (value: 1)
     */
        /** @brief RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are writable. */
    constexpr std::uint32_t RISAF_REG5_BCFGR_RLOCK_B_0x0 = 0;
        /** @brief Writes to RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are ignored. */
    constexpr std::uint32_t RISAF_REG5_BCFGR_RLOCK_B_0x1 = 1;

    /** @brief subregion CID */
    using RISAF_REG5_BCFGR_SRCID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief secure subregion */
    using RISAF_REG5_BCFGR_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Only non-secure requests can access subregion z of region x. (value: 0)
     *          - B_0x1: Only secure requests can access subregion z of region x. (value: 1)
     */
        /** @brief Only non-secure requests can access subregion z of region x. */
    constexpr std::uint32_t RISAF_REG5_BCFGR_SEC_B_0x0 = 0;
        /** @brief Only secure requests can access subregion z of region x. */
    constexpr std::uint32_t RISAF_REG5_BCFGR_SEC_B_0x1 = 1;

    /** @brief privileged subregion */
    using RISAF_REG5_BCFGR_PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged accesses are granted in subregion z of region x. (value: 0)
     *          - B_0x1: Only privileged accesses are granted in subregion z of region x. (value: 1)
     */
        /** @brief Privileged and unprivileged accesses are granted in subregion z of region x. */
    constexpr std::uint32_t RISAF_REG5_BCFGR_PRIV_B_0x0 = 0;
        /** @brief Only privileged accesses are granted in subregion z of region x. */
    constexpr std::uint32_t RISAF_REG5_BCFGR_PRIV_B_0x1 = 1;

    /** @brief read enable */
    using RISAF_REG5_BCFGR_RDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Any read to subregion z of region x returns zero. (value: 0)
     *          - B_0x1: Subregion z of region x can be read. (value: 1)
     */
        /** @brief Any read to subregion z of region x returns zero. */
    constexpr std::uint32_t RISAF_REG5_BCFGR_RDEN_B_0x0 = 0;
        /** @brief Subregion z of region x can be read. */
    constexpr std::uint32_t RISAF_REG5_BCFGR_RDEN_B_0x1 = 1;

    /** @brief write enable */
    using RISAF_REG5_BCFGR_WREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Any writes to subregion z of region x are ignored. (value: 0)
     *          - B_0x1: Subregion z of region x can be written to. (value: 1)
     */
        /** @brief Any writes to subregion z of region x are ignored. */
    constexpr std::uint32_t RISAF_REG5_BCFGR_WREN_B_0x0 = 0;
        /** @brief Subregion z of region x can be written to. */
    constexpr std::uint32_t RISAF_REG5_BCFGR_WREN_B_0x1 = 1;

    /** @brief RISAF region 5 subregion B start-address register */
    using RISAF_REG5_BSTARTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x164, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief subregion address start */
    using RISAF_REG5_BSTARTR_SADDSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 5 subregion B end-address register */
    using RISAF_REG5_BENDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x168, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief subregion address end */
    using RISAF_REG5_BENDR_SADDEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 5 subregion B nested mode register */
    using RISAF_REG5_BNESTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x16C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief delegated configuration enable */
    using RISAF_REG5_BNESTR_DCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RIF configuration for subregion z can be written only by the secure privileged software. (value: 0)
     *          - B_0x1: RIF configuration for subregion z can be written only (value: 1)
     */
        /** @brief RIF configuration for subregion z can be written only by the secure privileged software. */
    constexpr std::uint32_t RISAF_REG5_BNESTR_DCEN_B_0x0 = 0;
        /** @brief RIF configuration for subregion z can be written only */
    constexpr std::uint32_t RISAF_REG5_BNESTR_DCEN_B_0x1 = 1;

    /** @brief RISAF region 6 subregion B configuration register */
    using RISAF_REG6_BCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief subregion enable */
    using RISAF_REG6_BCFGR_SREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Subregion z is disabled. Access control of base region x applies to any access between this subregion start and end addresses. (value: 0)
     *          - B_0x1: Subregion z of region x is enable. Access control defined in subregion z applies to any access between subregion z start and end addresses. (value: 1)
     */
        /** @brief Subregion z is disabled. Access control of base region x applies to any access between this subregion start and end addresses. */
    constexpr std::uint32_t RISAF_REG6_BCFGR_SREN_B_0x0 = 0;
        /** @brief Subregion z of region x is enable. Access control defined in subregion z applies to any access between subregion z start and end addresses. */
    constexpr std::uint32_t RISAF_REG6_BCFGR_SREN_B_0x1 = 1;

    /** @brief resource lock */
    using RISAF_REG6_BCFGR_RLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are writable. (value: 0)
     *          - B_0x1: Writes to RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are ignored. (value: 1)
     */
        /** @brief RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are writable. */
    constexpr std::uint32_t RISAF_REG6_BCFGR_RLOCK_B_0x0 = 0;
        /** @brief Writes to RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are ignored. */
    constexpr std::uint32_t RISAF_REG6_BCFGR_RLOCK_B_0x1 = 1;

    /** @brief subregion CID */
    using RISAF_REG6_BCFGR_SRCID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief secure subregion */
    using RISAF_REG6_BCFGR_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Only non-secure requests can access subregion z of region x. (value: 0)
     *          - B_0x1: Only secure requests can access subregion z of region x. (value: 1)
     */
        /** @brief Only non-secure requests can access subregion z of region x. */
    constexpr std::uint32_t RISAF_REG6_BCFGR_SEC_B_0x0 = 0;
        /** @brief Only secure requests can access subregion z of region x. */
    constexpr std::uint32_t RISAF_REG6_BCFGR_SEC_B_0x1 = 1;

    /** @brief privileged subregion */
    using RISAF_REG6_BCFGR_PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged accesses are granted in subregion z of region x. (value: 0)
     *          - B_0x1: Only privileged accesses are granted in subregion z of region x. (value: 1)
     */
        /** @brief Privileged and unprivileged accesses are granted in subregion z of region x. */
    constexpr std::uint32_t RISAF_REG6_BCFGR_PRIV_B_0x0 = 0;
        /** @brief Only privileged accesses are granted in subregion z of region x. */
    constexpr std::uint32_t RISAF_REG6_BCFGR_PRIV_B_0x1 = 1;

    /** @brief read enable */
    using RISAF_REG6_BCFGR_RDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Any read to subregion z of region x returns zero. (value: 0)
     *          - B_0x1: Subregion z of region x can be read. (value: 1)
     */
        /** @brief Any read to subregion z of region x returns zero. */
    constexpr std::uint32_t RISAF_REG6_BCFGR_RDEN_B_0x0 = 0;
        /** @brief Subregion z of region x can be read. */
    constexpr std::uint32_t RISAF_REG6_BCFGR_RDEN_B_0x1 = 1;

    /** @brief write enable */
    using RISAF_REG6_BCFGR_WREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Any writes to subregion z of region x are ignored. (value: 0)
     *          - B_0x1: Subregion z of region x can be written to. (value: 1)
     */
        /** @brief Any writes to subregion z of region x are ignored. */
    constexpr std::uint32_t RISAF_REG6_BCFGR_WREN_B_0x0 = 0;
        /** @brief Subregion z of region x can be written to. */
    constexpr std::uint32_t RISAF_REG6_BCFGR_WREN_B_0x1 = 1;

    /** @brief RISAF region 6 subregion B start-address register */
    using RISAF_REG6_BSTARTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1A4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief subregion address start */
    using RISAF_REG6_BSTARTR_SADDSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 6 subregion B end-address register */
    using RISAF_REG6_BENDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1A8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief subregion address end */
    using RISAF_REG6_BENDR_SADDEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 6 subregion B nested mode register */
    using RISAF_REG6_BNESTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1AC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief delegated configuration enable */
    using RISAF_REG6_BNESTR_DCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RIF configuration for subregion z can be written only by the secure privileged software. (value: 0)
     *          - B_0x1: RIF configuration for subregion z can be written only (value: 1)
     */
        /** @brief RIF configuration for subregion z can be written only by the secure privileged software. */
    constexpr std::uint32_t RISAF_REG6_BNESTR_DCEN_B_0x0 = 0;
        /** @brief RIF configuration for subregion z can be written only */
    constexpr std::uint32_t RISAF_REG6_BNESTR_DCEN_B_0x1 = 1;

    /** @brief RISAF region 7 subregion B configuration register */
    using RISAF_REG7_BCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1E0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief subregion enable */
    using RISAF_REG7_BCFGR_SREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Subregion z is disabled. Access control of base region x applies to any access between this subregion start and end addresses. (value: 0)
     *          - B_0x1: Subregion z of region x is enable. Access control defined in subregion z applies to any access between subregion z start and end addresses. (value: 1)
     */
        /** @brief Subregion z is disabled. Access control of base region x applies to any access between this subregion start and end addresses. */
    constexpr std::uint32_t RISAF_REG7_BCFGR_SREN_B_0x0 = 0;
        /** @brief Subregion z of region x is enable. Access control defined in subregion z applies to any access between subregion z start and end addresses. */
    constexpr std::uint32_t RISAF_REG7_BCFGR_SREN_B_0x1 = 1;

    /** @brief resource lock */
    using RISAF_REG7_BCFGR_RLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are writable. (value: 0)
     *          - B_0x1: Writes to RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are ignored. (value: 1)
     */
        /** @brief RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are writable. */
    constexpr std::uint32_t RISAF_REG7_BCFGR_RLOCK_B_0x0 = 0;
        /** @brief Writes to RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are ignored. */
    constexpr std::uint32_t RISAF_REG7_BCFGR_RLOCK_B_0x1 = 1;

    /** @brief subregion CID */
    using RISAF_REG7_BCFGR_SRCID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief secure subregion */
    using RISAF_REG7_BCFGR_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Only non-secure requests can access subregion z of region x. (value: 0)
     *          - B_0x1: Only secure requests can access subregion z of region x. (value: 1)
     */
        /** @brief Only non-secure requests can access subregion z of region x. */
    constexpr std::uint32_t RISAF_REG7_BCFGR_SEC_B_0x0 = 0;
        /** @brief Only secure requests can access subregion z of region x. */
    constexpr std::uint32_t RISAF_REG7_BCFGR_SEC_B_0x1 = 1;

    /** @brief privileged subregion */
    using RISAF_REG7_BCFGR_PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged accesses are granted in subregion z of region x. (value: 0)
     *          - B_0x1: Only privileged accesses are granted in subregion z of region x. (value: 1)
     */
        /** @brief Privileged and unprivileged accesses are granted in subregion z of region x. */
    constexpr std::uint32_t RISAF_REG7_BCFGR_PRIV_B_0x0 = 0;
        /** @brief Only privileged accesses are granted in subregion z of region x. */
    constexpr std::uint32_t RISAF_REG7_BCFGR_PRIV_B_0x1 = 1;

    /** @brief read enable */
    using RISAF_REG7_BCFGR_RDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Any read to subregion z of region x returns zero. (value: 0)
     *          - B_0x1: Subregion z of region x can be read. (value: 1)
     */
        /** @brief Any read to subregion z of region x returns zero. */
    constexpr std::uint32_t RISAF_REG7_BCFGR_RDEN_B_0x0 = 0;
        /** @brief Subregion z of region x can be read. */
    constexpr std::uint32_t RISAF_REG7_BCFGR_RDEN_B_0x1 = 1;

    /** @brief write enable */
    using RISAF_REG7_BCFGR_WREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Any writes to subregion z of region x are ignored. (value: 0)
     *          - B_0x1: Subregion z of region x can be written to. (value: 1)
     */
        /** @brief Any writes to subregion z of region x are ignored. */
    constexpr std::uint32_t RISAF_REG7_BCFGR_WREN_B_0x0 = 0;
        /** @brief Subregion z of region x can be written to. */
    constexpr std::uint32_t RISAF_REG7_BCFGR_WREN_B_0x1 = 1;

    /** @brief RISAF region 7 subregion B start-address register */
    using RISAF_REG7_BSTARTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1E4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief subregion address start */
    using RISAF_REG7_BSTARTR_SADDSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 7 subregion B end-address register */
    using RISAF_REG7_BENDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1E8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief subregion address end */
    using RISAF_REG7_BENDR_SADDEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 7 subregion B nested mode register */
    using RISAF_REG7_BNESTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1EC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief delegated configuration enable */
    using RISAF_REG7_BNESTR_DCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RIF configuration for subregion z can be written only by the secure privileged software. (value: 0)
     *          - B_0x1: RIF configuration for subregion z can be written only (value: 1)
     */
        /** @brief RIF configuration for subregion z can be written only by the secure privileged software. */
    constexpr std::uint32_t RISAF_REG7_BNESTR_DCEN_B_0x0 = 0;
        /** @brief RIF configuration for subregion z can be written only */
    constexpr std::uint32_t RISAF_REG7_BNESTR_DCEN_B_0x1 = 1;

    /** @brief RISAF region 8 subregion B configuration register */
    using RISAF_REG8_BCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x220, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief subregion enable */
    using RISAF_REG8_BCFGR_SREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Subregion z is disabled. Access control of base region x applies to any access between this subregion start and end addresses. (value: 0)
     *          - B_0x1: Subregion z of region x is enable. Access control defined in subregion z applies to any access between subregion z start and end addresses. (value: 1)
     */
        /** @brief Subregion z is disabled. Access control of base region x applies to any access between this subregion start and end addresses. */
    constexpr std::uint32_t RISAF_REG8_BCFGR_SREN_B_0x0 = 0;
        /** @brief Subregion z of region x is enable. Access control defined in subregion z applies to any access between subregion z start and end addresses. */
    constexpr std::uint32_t RISAF_REG8_BCFGR_SREN_B_0x1 = 1;

    /** @brief resource lock */
    using RISAF_REG8_BCFGR_RLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are writable. (value: 0)
     *          - B_0x1: Writes to RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are ignored. (value: 1)
     */
        /** @brief RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are writable. */
    constexpr std::uint32_t RISAF_REG8_BCFGR_RLOCK_B_0x0 = 0;
        /** @brief Writes to RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are ignored. */
    constexpr std::uint32_t RISAF_REG8_BCFGR_RLOCK_B_0x1 = 1;

    /** @brief subregion CID */
    using RISAF_REG8_BCFGR_SRCID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief secure subregion */
    using RISAF_REG8_BCFGR_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Only non-secure requests can access subregion z of region x. (value: 0)
     *          - B_0x1: Only secure requests can access subregion z of region x. (value: 1)
     */
        /** @brief Only non-secure requests can access subregion z of region x. */
    constexpr std::uint32_t RISAF_REG8_BCFGR_SEC_B_0x0 = 0;
        /** @brief Only secure requests can access subregion z of region x. */
    constexpr std::uint32_t RISAF_REG8_BCFGR_SEC_B_0x1 = 1;

    /** @brief privileged subregion */
    using RISAF_REG8_BCFGR_PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged accesses are granted in subregion z of region x. (value: 0)
     *          - B_0x1: Only privileged accesses are granted in subregion z of region x. (value: 1)
     */
        /** @brief Privileged and unprivileged accesses are granted in subregion z of region x. */
    constexpr std::uint32_t RISAF_REG8_BCFGR_PRIV_B_0x0 = 0;
        /** @brief Only privileged accesses are granted in subregion z of region x. */
    constexpr std::uint32_t RISAF_REG8_BCFGR_PRIV_B_0x1 = 1;

    /** @brief read enable */
    using RISAF_REG8_BCFGR_RDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Any read to subregion z of region x returns zero. (value: 0)
     *          - B_0x1: Subregion z of region x can be read. (value: 1)
     */
        /** @brief Any read to subregion z of region x returns zero. */
    constexpr std::uint32_t RISAF_REG8_BCFGR_RDEN_B_0x0 = 0;
        /** @brief Subregion z of region x can be read. */
    constexpr std::uint32_t RISAF_REG8_BCFGR_RDEN_B_0x1 = 1;

    /** @brief write enable */
    using RISAF_REG8_BCFGR_WREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Any writes to subregion z of region x are ignored. (value: 0)
     *          - B_0x1: Subregion z of region x can be written to. (value: 1)
     */
        /** @brief Any writes to subregion z of region x are ignored. */
    constexpr std::uint32_t RISAF_REG8_BCFGR_WREN_B_0x0 = 0;
        /** @brief Subregion z of region x can be written to. */
    constexpr std::uint32_t RISAF_REG8_BCFGR_WREN_B_0x1 = 1;

    /** @brief RISAF region 8 subregion B start-address register */
    using RISAF_REG8_BSTARTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x224, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief subregion address start */
    using RISAF_REG8_BSTARTR_SADDSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 8 subregion B end-address register */
    using RISAF_REG8_BENDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x228, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief subregion address end */
    using RISAF_REG8_BENDR_SADDEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 8 subregion B nested mode register */
    using RISAF_REG8_BNESTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x22C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief delegated configuration enable */
    using RISAF_REG8_BNESTR_DCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RIF configuration for subregion z can be written only by the secure privileged software. (value: 0)
     *          - B_0x1: RIF configuration for subregion z can be written only (value: 1)
     */
        /** @brief RIF configuration for subregion z can be written only by the secure privileged software. */
    constexpr std::uint32_t RISAF_REG8_BNESTR_DCEN_B_0x0 = 0;
        /** @brief RIF configuration for subregion z can be written only */
    constexpr std::uint32_t RISAF_REG8_BNESTR_DCEN_B_0x1 = 1;

    /** @brief RISAF region 9 subregion B configuration register */
    using RISAF_REG9_BCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x260, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief subregion enable */
    using RISAF_REG9_BCFGR_SREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Subregion z is disabled. Access control of base region x applies to any access between this subregion start and end addresses. (value: 0)
     *          - B_0x1: Subregion z of region x is enable. Access control defined in subregion z applies to any access between subregion z start and end addresses. (value: 1)
     */
        /** @brief Subregion z is disabled. Access control of base region x applies to any access between this subregion start and end addresses. */
    constexpr std::uint32_t RISAF_REG9_BCFGR_SREN_B_0x0 = 0;
        /** @brief Subregion z of region x is enable. Access control defined in subregion z applies to any access between subregion z start and end addresses. */
    constexpr std::uint32_t RISAF_REG9_BCFGR_SREN_B_0x1 = 1;

    /** @brief resource lock */
    using RISAF_REG9_BCFGR_RLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are writable. (value: 0)
     *          - B_0x1: Writes to RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are ignored. (value: 1)
     */
        /** @brief RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are writable. */
    constexpr std::uint32_t RISAF_REG9_BCFGR_RLOCK_B_0x0 = 0;
        /** @brief Writes to RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are ignored. */
    constexpr std::uint32_t RISAF_REG9_BCFGR_RLOCK_B_0x1 = 1;

    /** @brief subregion CID */
    using RISAF_REG9_BCFGR_SRCID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief secure subregion */
    using RISAF_REG9_BCFGR_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Only non-secure requests can access subregion z of region x. (value: 0)
     *          - B_0x1: Only secure requests can access subregion z of region x. (value: 1)
     */
        /** @brief Only non-secure requests can access subregion z of region x. */
    constexpr std::uint32_t RISAF_REG9_BCFGR_SEC_B_0x0 = 0;
        /** @brief Only secure requests can access subregion z of region x. */
    constexpr std::uint32_t RISAF_REG9_BCFGR_SEC_B_0x1 = 1;

    /** @brief privileged subregion */
    using RISAF_REG9_BCFGR_PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged accesses are granted in subregion z of region x. (value: 0)
     *          - B_0x1: Only privileged accesses are granted in subregion z of region x. (value: 1)
     */
        /** @brief Privileged and unprivileged accesses are granted in subregion z of region x. */
    constexpr std::uint32_t RISAF_REG9_BCFGR_PRIV_B_0x0 = 0;
        /** @brief Only privileged accesses are granted in subregion z of region x. */
    constexpr std::uint32_t RISAF_REG9_BCFGR_PRIV_B_0x1 = 1;

    /** @brief read enable */
    using RISAF_REG9_BCFGR_RDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Any read to subregion z of region x returns zero. (value: 0)
     *          - B_0x1: Subregion z of region x can be read. (value: 1)
     */
        /** @brief Any read to subregion z of region x returns zero. */
    constexpr std::uint32_t RISAF_REG9_BCFGR_RDEN_B_0x0 = 0;
        /** @brief Subregion z of region x can be read. */
    constexpr std::uint32_t RISAF_REG9_BCFGR_RDEN_B_0x1 = 1;

    /** @brief write enable */
    using RISAF_REG9_BCFGR_WREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Any writes to subregion z of region x are ignored. (value: 0)
     *          - B_0x1: Subregion z of region x can be written to. (value: 1)
     */
        /** @brief Any writes to subregion z of region x are ignored. */
    constexpr std::uint32_t RISAF_REG9_BCFGR_WREN_B_0x0 = 0;
        /** @brief Subregion z of region x can be written to. */
    constexpr std::uint32_t RISAF_REG9_BCFGR_WREN_B_0x1 = 1;

    /** @brief RISAF region 9 subregion B start-address register */
    using RISAF_REG9_BSTARTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x264, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief subregion address start */
    using RISAF_REG9_BSTARTR_SADDSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 9 subregion B end-address register */
    using RISAF_REG9_BENDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x268, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief subregion address end */
    using RISAF_REG9_BENDR_SADDEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 9 subregion B nested mode register */
    using RISAF_REG9_BNESTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x26C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief delegated configuration enable */
    using RISAF_REG9_BNESTR_DCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RIF configuration for subregion z can be written only by the secure privileged software. (value: 0)
     *          - B_0x1: RIF configuration for subregion z can be written only (value: 1)
     */
        /** @brief RIF configuration for subregion z can be written only by the secure privileged software. */
    constexpr std::uint32_t RISAF_REG9_BNESTR_DCEN_B_0x0 = 0;
        /** @brief RIF configuration for subregion z can be written only */
    constexpr std::uint32_t RISAF_REG9_BNESTR_DCEN_B_0x1 = 1;

    /** @brief RISAF region 10 subregion B configuration register */
    using RISAF_REG10_BCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief subregion enable */
    using RISAF_REG10_BCFGR_SREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Subregion z is disabled. Access control of base region x applies to any access between this subregion start and end addresses. (value: 0)
     *          - B_0x1: Subregion z of region x is enable. Access control defined in subregion z applies to any access between subregion z start and end addresses. (value: 1)
     */
        /** @brief Subregion z is disabled. Access control of base region x applies to any access between this subregion start and end addresses. */
    constexpr std::uint32_t RISAF_REG10_BCFGR_SREN_B_0x0 = 0;
        /** @brief Subregion z of region x is enable. Access control defined in subregion z applies to any access between subregion z start and end addresses. */
    constexpr std::uint32_t RISAF_REG10_BCFGR_SREN_B_0x1 = 1;

    /** @brief resource lock */
    using RISAF_REG10_BCFGR_RLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are writable. (value: 0)
     *          - B_0x1: Writes to RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are ignored. (value: 1)
     */
        /** @brief RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are writable. */
    constexpr std::uint32_t RISAF_REG10_BCFGR_RLOCK_B_0x0 = 0;
        /** @brief Writes to RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are ignored. */
    constexpr std::uint32_t RISAF_REG10_BCFGR_RLOCK_B_0x1 = 1;

    /** @brief subregion CID */
    using RISAF_REG10_BCFGR_SRCID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief secure subregion */
    using RISAF_REG10_BCFGR_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Only non-secure requests can access subregion z of region x. (value: 0)
     *          - B_0x1: Only secure requests can access subregion z of region x. (value: 1)
     */
        /** @brief Only non-secure requests can access subregion z of region x. */
    constexpr std::uint32_t RISAF_REG10_BCFGR_SEC_B_0x0 = 0;
        /** @brief Only secure requests can access subregion z of region x. */
    constexpr std::uint32_t RISAF_REG10_BCFGR_SEC_B_0x1 = 1;

    /** @brief privileged subregion */
    using RISAF_REG10_BCFGR_PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged accesses are granted in subregion z of region x. (value: 0)
     *          - B_0x1: Only privileged accesses are granted in subregion z of region x. (value: 1)
     */
        /** @brief Privileged and unprivileged accesses are granted in subregion z of region x. */
    constexpr std::uint32_t RISAF_REG10_BCFGR_PRIV_B_0x0 = 0;
        /** @brief Only privileged accesses are granted in subregion z of region x. */
    constexpr std::uint32_t RISAF_REG10_BCFGR_PRIV_B_0x1 = 1;

    /** @brief read enable */
    using RISAF_REG10_BCFGR_RDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Any read to subregion z of region x returns zero. (value: 0)
     *          - B_0x1: Subregion z of region x can be read. (value: 1)
     */
        /** @brief Any read to subregion z of region x returns zero. */
    constexpr std::uint32_t RISAF_REG10_BCFGR_RDEN_B_0x0 = 0;
        /** @brief Subregion z of region x can be read. */
    constexpr std::uint32_t RISAF_REG10_BCFGR_RDEN_B_0x1 = 1;

    /** @brief write enable */
    using RISAF_REG10_BCFGR_WREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Any writes to subregion z of region x are ignored. (value: 0)
     *          - B_0x1: Subregion z of region x can be written to. (value: 1)
     */
        /** @brief Any writes to subregion z of region x are ignored. */
    constexpr std::uint32_t RISAF_REG10_BCFGR_WREN_B_0x0 = 0;
        /** @brief Subregion z of region x can be written to. */
    constexpr std::uint32_t RISAF_REG10_BCFGR_WREN_B_0x1 = 1;

    /** @brief RISAF region 10 subregion B start-address register */
    using RISAF_REG10_BSTARTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2A4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief subregion address start */
    using RISAF_REG10_BSTARTR_SADDSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 10 subregion B end-address register */
    using RISAF_REG10_BENDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2A8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief subregion address end */
    using RISAF_REG10_BENDR_SADDEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 10 subregion B nested mode register */
    using RISAF_REG10_BNESTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2AC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief delegated configuration enable */
    using RISAF_REG10_BNESTR_DCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RIF configuration for subregion z can be written only by the secure privileged software. (value: 0)
     *          - B_0x1: RIF configuration for subregion z can be written only (value: 1)
     */
        /** @brief RIF configuration for subregion z can be written only by the secure privileged software. */
    constexpr std::uint32_t RISAF_REG10_BNESTR_DCEN_B_0x0 = 0;
        /** @brief RIF configuration for subregion z can be written only */
    constexpr std::uint32_t RISAF_REG10_BNESTR_DCEN_B_0x1 = 1;

    /** @brief RISAF region 11 subregion B configuration register */
    using RISAF_REG11_BCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2E0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief subregion enable */
    using RISAF_REG11_BCFGR_SREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Subregion z is disabled. Access control of base region x applies to any access between this subregion start and end addresses. (value: 0)
     *          - B_0x1: Subregion z of region x is enable. Access control defined in subregion z applies to any access between subregion z start and end addresses. (value: 1)
     */
        /** @brief Subregion z is disabled. Access control of base region x applies to any access between this subregion start and end addresses. */
    constexpr std::uint32_t RISAF_REG11_BCFGR_SREN_B_0x0 = 0;
        /** @brief Subregion z of region x is enable. Access control defined in subregion z applies to any access between subregion z start and end addresses. */
    constexpr std::uint32_t RISAF_REG11_BCFGR_SREN_B_0x1 = 1;

    /** @brief resource lock */
    using RISAF_REG11_BCFGR_RLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are writable. (value: 0)
     *          - B_0x1: Writes to RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are ignored. (value: 1)
     */
        /** @brief RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are writable. */
    constexpr std::uint32_t RISAF_REG11_BCFGR_RLOCK_B_0x0 = 0;
        /** @brief Writes to RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are ignored. */
    constexpr std::uint32_t RISAF_REG11_BCFGR_RLOCK_B_0x1 = 1;

    /** @brief subregion CID */
    using RISAF_REG11_BCFGR_SRCID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief secure subregion */
    using RISAF_REG11_BCFGR_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Only non-secure requests can access subregion z of region x. (value: 0)
     *          - B_0x1: Only secure requests can access subregion z of region x. (value: 1)
     */
        /** @brief Only non-secure requests can access subregion z of region x. */
    constexpr std::uint32_t RISAF_REG11_BCFGR_SEC_B_0x0 = 0;
        /** @brief Only secure requests can access subregion z of region x. */
    constexpr std::uint32_t RISAF_REG11_BCFGR_SEC_B_0x1 = 1;

    /** @brief privileged subregion */
    using RISAF_REG11_BCFGR_PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged accesses are granted in subregion z of region x. (value: 0)
     *          - B_0x1: Only privileged accesses are granted in subregion z of region x. (value: 1)
     */
        /** @brief Privileged and unprivileged accesses are granted in subregion z of region x. */
    constexpr std::uint32_t RISAF_REG11_BCFGR_PRIV_B_0x0 = 0;
        /** @brief Only privileged accesses are granted in subregion z of region x. */
    constexpr std::uint32_t RISAF_REG11_BCFGR_PRIV_B_0x1 = 1;

    /** @brief read enable */
    using RISAF_REG11_BCFGR_RDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Any read to subregion z of region x returns zero. (value: 0)
     *          - B_0x1: Subregion z of region x can be read. (value: 1)
     */
        /** @brief Any read to subregion z of region x returns zero. */
    constexpr std::uint32_t RISAF_REG11_BCFGR_RDEN_B_0x0 = 0;
        /** @brief Subregion z of region x can be read. */
    constexpr std::uint32_t RISAF_REG11_BCFGR_RDEN_B_0x1 = 1;

    /** @brief write enable */
    using RISAF_REG11_BCFGR_WREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Any writes to subregion z of region x are ignored. (value: 0)
     *          - B_0x1: Subregion z of region x can be written to. (value: 1)
     */
        /** @brief Any writes to subregion z of region x are ignored. */
    constexpr std::uint32_t RISAF_REG11_BCFGR_WREN_B_0x0 = 0;
        /** @brief Subregion z of region x can be written to. */
    constexpr std::uint32_t RISAF_REG11_BCFGR_WREN_B_0x1 = 1;

    /** @brief RISAF region 11 subregion B start-address register */
    using RISAF_REG11_BSTARTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2E4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief subregion address start */
    using RISAF_REG11_BSTARTR_SADDSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 11 subregion B end-address register */
    using RISAF_REG11_BENDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2E8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief subregion address end */
    using RISAF_REG11_BENDR_SADDEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 11 subregion B nested mode register */
    using RISAF_REG11_BNESTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2EC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief delegated configuration enable */
    using RISAF_REG11_BNESTR_DCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RIF configuration for subregion z can be written only by the secure privileged software. (value: 0)
     *          - B_0x1: RIF configuration for subregion z can be written only (value: 1)
     */
        /** @brief RIF configuration for subregion z can be written only by the secure privileged software. */
    constexpr std::uint32_t RISAF_REG11_BNESTR_DCEN_B_0x0 = 0;
        /** @brief RIF configuration for subregion z can be written only */
    constexpr std::uint32_t RISAF_REG11_BNESTR_DCEN_B_0x1 = 1;

    /** @brief RISAF region 12 subregion B configuration register */
    using RISAF_REG12_BCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x320, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief subregion enable */
    using RISAF_REG12_BCFGR_SREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Subregion z is disabled. Access control of base region x applies to any access between this subregion start and end addresses. (value: 0)
     *          - B_0x1: Subregion z of region x is enable. Access control defined in subregion z applies to any access between subregion z start and end addresses. (value: 1)
     */
        /** @brief Subregion z is disabled. Access control of base region x applies to any access between this subregion start and end addresses. */
    constexpr std::uint32_t RISAF_REG12_BCFGR_SREN_B_0x0 = 0;
        /** @brief Subregion z of region x is enable. Access control defined in subregion z applies to any access between subregion z start and end addresses. */
    constexpr std::uint32_t RISAF_REG12_BCFGR_SREN_B_0x1 = 1;

    /** @brief resource lock */
    using RISAF_REG12_BCFGR_RLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are writable. (value: 0)
     *          - B_0x1: Writes to RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are ignored. (value: 1)
     */
        /** @brief RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are writable. */
    constexpr std::uint32_t RISAF_REG12_BCFGR_RLOCK_B_0x0 = 0;
        /** @brief Writes to RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are ignored. */
    constexpr std::uint32_t RISAF_REG12_BCFGR_RLOCK_B_0x1 = 1;

    /** @brief subregion CID */
    using RISAF_REG12_BCFGR_SRCID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief secure subregion */
    using RISAF_REG12_BCFGR_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Only non-secure requests can access subregion z of region x. (value: 0)
     *          - B_0x1: Only secure requests can access subregion z of region x. (value: 1)
     */
        /** @brief Only non-secure requests can access subregion z of region x. */
    constexpr std::uint32_t RISAF_REG12_BCFGR_SEC_B_0x0 = 0;
        /** @brief Only secure requests can access subregion z of region x. */
    constexpr std::uint32_t RISAF_REG12_BCFGR_SEC_B_0x1 = 1;

    /** @brief privileged subregion */
    using RISAF_REG12_BCFGR_PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged accesses are granted in subregion z of region x. (value: 0)
     *          - B_0x1: Only privileged accesses are granted in subregion z of region x. (value: 1)
     */
        /** @brief Privileged and unprivileged accesses are granted in subregion z of region x. */
    constexpr std::uint32_t RISAF_REG12_BCFGR_PRIV_B_0x0 = 0;
        /** @brief Only privileged accesses are granted in subregion z of region x. */
    constexpr std::uint32_t RISAF_REG12_BCFGR_PRIV_B_0x1 = 1;

    /** @brief read enable */
    using RISAF_REG12_BCFGR_RDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Any read to subregion z of region x returns zero. (value: 0)
     *          - B_0x1: Subregion z of region x can be read. (value: 1)
     */
        /** @brief Any read to subregion z of region x returns zero. */
    constexpr std::uint32_t RISAF_REG12_BCFGR_RDEN_B_0x0 = 0;
        /** @brief Subregion z of region x can be read. */
    constexpr std::uint32_t RISAF_REG12_BCFGR_RDEN_B_0x1 = 1;

    /** @brief write enable */
    using RISAF_REG12_BCFGR_WREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Any writes to subregion z of region x are ignored. (value: 0)
     *          - B_0x1: Subregion z of region x can be written to. (value: 1)
     */
        /** @brief Any writes to subregion z of region x are ignored. */
    constexpr std::uint32_t RISAF_REG12_BCFGR_WREN_B_0x0 = 0;
        /** @brief Subregion z of region x can be written to. */
    constexpr std::uint32_t RISAF_REG12_BCFGR_WREN_B_0x1 = 1;

    /** @brief RISAF region 12 subregion B start-address register */
    using RISAF_REG12_BSTARTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x324, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief subregion address start */
    using RISAF_REG12_BSTARTR_SADDSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 12 subregion B end-address register */
    using RISAF_REG12_BENDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x328, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief subregion address end */
    using RISAF_REG12_BENDR_SADDEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 12 subregion B nested mode register */
    using RISAF_REG12_BNESTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x32C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief delegated configuration enable */
    using RISAF_REG12_BNESTR_DCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RIF configuration for subregion z can be written only by the secure privileged software. (value: 0)
     *          - B_0x1: RIF configuration for subregion z can be written only (value: 1)
     */
        /** @brief RIF configuration for subregion z can be written only by the secure privileged software. */
    constexpr std::uint32_t RISAF_REG12_BNESTR_DCEN_B_0x0 = 0;
        /** @brief RIF configuration for subregion z can be written only */
    constexpr std::uint32_t RISAF_REG12_BNESTR_DCEN_B_0x1 = 1;

    /** @brief RISAF region 13 subregion B configuration register */
    using RISAF_REG13_BCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x360, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief subregion enable */
    using RISAF_REG13_BCFGR_SREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Subregion z is disabled. Access control of base region x applies to any access between this subregion start and end addresses. (value: 0)
     *          - B_0x1: Subregion z of region x is enable. Access control defined in subregion z applies to any access between subregion z start and end addresses. (value: 1)
     */
        /** @brief Subregion z is disabled. Access control of base region x applies to any access between this subregion start and end addresses. */
    constexpr std::uint32_t RISAF_REG13_BCFGR_SREN_B_0x0 = 0;
        /** @brief Subregion z of region x is enable. Access control defined in subregion z applies to any access between subregion z start and end addresses. */
    constexpr std::uint32_t RISAF_REG13_BCFGR_SREN_B_0x1 = 1;

    /** @brief resource lock */
    using RISAF_REG13_BCFGR_RLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are writable. (value: 0)
     *          - B_0x1: Writes to RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are ignored. (value: 1)
     */
        /** @brief RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are writable. */
    constexpr std::uint32_t RISAF_REG13_BCFGR_RLOCK_B_0x0 = 0;
        /** @brief Writes to RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are ignored. */
    constexpr std::uint32_t RISAF_REG13_BCFGR_RLOCK_B_0x1 = 1;

    /** @brief subregion CID */
    using RISAF_REG13_BCFGR_SRCID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief secure subregion */
    using RISAF_REG13_BCFGR_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Only non-secure requests can access subregion z of region x. (value: 0)
     *          - B_0x1: Only secure requests can access subregion z of region x. (value: 1)
     */
        /** @brief Only non-secure requests can access subregion z of region x. */
    constexpr std::uint32_t RISAF_REG13_BCFGR_SEC_B_0x0 = 0;
        /** @brief Only secure requests can access subregion z of region x. */
    constexpr std::uint32_t RISAF_REG13_BCFGR_SEC_B_0x1 = 1;

    /** @brief privileged subregion */
    using RISAF_REG13_BCFGR_PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged accesses are granted in subregion z of region x. (value: 0)
     *          - B_0x1: Only privileged accesses are granted in subregion z of region x. (value: 1)
     */
        /** @brief Privileged and unprivileged accesses are granted in subregion z of region x. */
    constexpr std::uint32_t RISAF_REG13_BCFGR_PRIV_B_0x0 = 0;
        /** @brief Only privileged accesses are granted in subregion z of region x. */
    constexpr std::uint32_t RISAF_REG13_BCFGR_PRIV_B_0x1 = 1;

    /** @brief read enable */
    using RISAF_REG13_BCFGR_RDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Any read to subregion z of region x returns zero. (value: 0)
     *          - B_0x1: Subregion z of region x can be read. (value: 1)
     */
        /** @brief Any read to subregion z of region x returns zero. */
    constexpr std::uint32_t RISAF_REG13_BCFGR_RDEN_B_0x0 = 0;
        /** @brief Subregion z of region x can be read. */
    constexpr std::uint32_t RISAF_REG13_BCFGR_RDEN_B_0x1 = 1;

    /** @brief write enable */
    using RISAF_REG13_BCFGR_WREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Any writes to subregion z of region x are ignored. (value: 0)
     *          - B_0x1: Subregion z of region x can be written to. (value: 1)
     */
        /** @brief Any writes to subregion z of region x are ignored. */
    constexpr std::uint32_t RISAF_REG13_BCFGR_WREN_B_0x0 = 0;
        /** @brief Subregion z of region x can be written to. */
    constexpr std::uint32_t RISAF_REG13_BCFGR_WREN_B_0x1 = 1;

    /** @brief RISAF region 13 subregion B start-address register */
    using RISAF_REG13_BSTARTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x364, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief subregion address start */
    using RISAF_REG13_BSTARTR_SADDSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 13 subregion B end-address register */
    using RISAF_REG13_BENDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x368, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief subregion address end */
    using RISAF_REG13_BENDR_SADDEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 13 subregion B nested mode register */
    using RISAF_REG13_BNESTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x36C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief delegated configuration enable */
    using RISAF_REG13_BNESTR_DCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RIF configuration for subregion z can be written only by the secure privileged software. (value: 0)
     *          - B_0x1: RIF configuration for subregion z can be written only (value: 1)
     */
        /** @brief RIF configuration for subregion z can be written only by the secure privileged software. */
    constexpr std::uint32_t RISAF_REG13_BNESTR_DCEN_B_0x0 = 0;
        /** @brief RIF configuration for subregion z can be written only */
    constexpr std::uint32_t RISAF_REG13_BNESTR_DCEN_B_0x1 = 1;

    /** @brief RISAF region 14 subregion B configuration register */
    using RISAF_REG14_BCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief subregion enable */
    using RISAF_REG14_BCFGR_SREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Subregion z is disabled. Access control of base region x applies to any access between this subregion start and end addresses. (value: 0)
     *          - B_0x1: Subregion z of region x is enable. Access control defined in subregion z applies to any access between subregion z start and end addresses. (value: 1)
     */
        /** @brief Subregion z is disabled. Access control of base region x applies to any access between this subregion start and end addresses. */
    constexpr std::uint32_t RISAF_REG14_BCFGR_SREN_B_0x0 = 0;
        /** @brief Subregion z of region x is enable. Access control defined in subregion z applies to any access between subregion z start and end addresses. */
    constexpr std::uint32_t RISAF_REG14_BCFGR_SREN_B_0x1 = 1;

    /** @brief resource lock */
    using RISAF_REG14_BCFGR_RLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are writable. (value: 0)
     *          - B_0x1: Writes to RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are ignored. (value: 1)
     */
        /** @brief RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are writable. */
    constexpr std::uint32_t RISAF_REG14_BCFGR_RLOCK_B_0x0 = 0;
        /** @brief Writes to RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are ignored. */
    constexpr std::uint32_t RISAF_REG14_BCFGR_RLOCK_B_0x1 = 1;

    /** @brief subregion CID */
    using RISAF_REG14_BCFGR_SRCID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief secure subregion */
    using RISAF_REG14_BCFGR_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Only non-secure requests can access subregion z of region x. (value: 0)
     *          - B_0x1: Only secure requests can access subregion z of region x. (value: 1)
     */
        /** @brief Only non-secure requests can access subregion z of region x. */
    constexpr std::uint32_t RISAF_REG14_BCFGR_SEC_B_0x0 = 0;
        /** @brief Only secure requests can access subregion z of region x. */
    constexpr std::uint32_t RISAF_REG14_BCFGR_SEC_B_0x1 = 1;

    /** @brief privileged subregion */
    using RISAF_REG14_BCFGR_PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged accesses are granted in subregion z of region x. (value: 0)
     *          - B_0x1: Only privileged accesses are granted in subregion z of region x. (value: 1)
     */
        /** @brief Privileged and unprivileged accesses are granted in subregion z of region x. */
    constexpr std::uint32_t RISAF_REG14_BCFGR_PRIV_B_0x0 = 0;
        /** @brief Only privileged accesses are granted in subregion z of region x. */
    constexpr std::uint32_t RISAF_REG14_BCFGR_PRIV_B_0x1 = 1;

    /** @brief read enable */
    using RISAF_REG14_BCFGR_RDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Any read to subregion z of region x returns zero. (value: 0)
     *          - B_0x1: Subregion z of region x can be read. (value: 1)
     */
        /** @brief Any read to subregion z of region x returns zero. */
    constexpr std::uint32_t RISAF_REG14_BCFGR_RDEN_B_0x0 = 0;
        /** @brief Subregion z of region x can be read. */
    constexpr std::uint32_t RISAF_REG14_BCFGR_RDEN_B_0x1 = 1;

    /** @brief write enable */
    using RISAF_REG14_BCFGR_WREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Any writes to subregion z of region x are ignored. (value: 0)
     *          - B_0x1: Subregion z of region x can be written to. (value: 1)
     */
        /** @brief Any writes to subregion z of region x are ignored. */
    constexpr std::uint32_t RISAF_REG14_BCFGR_WREN_B_0x0 = 0;
        /** @brief Subregion z of region x can be written to. */
    constexpr std::uint32_t RISAF_REG14_BCFGR_WREN_B_0x1 = 1;

    /** @brief RISAF region 14 subregion B start-address register */
    using RISAF_REG14_BSTARTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3A4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief subregion address start */
    using RISAF_REG14_BSTARTR_SADDSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 14 subregion B end-address register */
    using RISAF_REG14_BENDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3A8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief subregion address end */
    using RISAF_REG14_BENDR_SADDEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 14 subregion B nested mode register */
    using RISAF_REG14_BNESTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3AC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief delegated configuration enable */
    using RISAF_REG14_BNESTR_DCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RIF configuration for subregion z can be written only by the secure privileged software. (value: 0)
     *          - B_0x1: RIF configuration for subregion z can be written only (value: 1)
     */
        /** @brief RIF configuration for subregion z can be written only by the secure privileged software. */
    constexpr std::uint32_t RISAF_REG14_BNESTR_DCEN_B_0x0 = 0;
        /** @brief RIF configuration for subregion z can be written only */
    constexpr std::uint32_t RISAF_REG14_BNESTR_DCEN_B_0x1 = 1;

    /** @brief RISAF region 15 subregion B configuration register */
    using RISAF_REG15_BCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3E0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief subregion enable */
    using RISAF_REG15_BCFGR_SREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Subregion z is disabled. Access control of base region x applies to any access between this subregion start and end addresses. (value: 0)
     *          - B_0x1: Subregion z of region x is enable. Access control defined in subregion z applies to any access between subregion z start and end addresses. (value: 1)
     */
        /** @brief Subregion z is disabled. Access control of base region x applies to any access between this subregion start and end addresses. */
    constexpr std::uint32_t RISAF_REG15_BCFGR_SREN_B_0x0 = 0;
        /** @brief Subregion z of region x is enable. Access control defined in subregion z applies to any access between subregion z start and end addresses. */
    constexpr std::uint32_t RISAF_REG15_BCFGR_SREN_B_0x1 = 1;

    /** @brief resource lock */
    using RISAF_REG15_BCFGR_RLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are writable. (value: 0)
     *          - B_0x1: Writes to RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are ignored. (value: 1)
     */
        /** @brief RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are writable. */
    constexpr std::uint32_t RISAF_REG15_BCFGR_RLOCK_B_0x0 = 0;
        /** @brief Writes to RISAF_REGx_zCFGR, RISAF_REGx_zSTARTR and RISAF_REGx_zENDR are ignored. */
    constexpr std::uint32_t RISAF_REG15_BCFGR_RLOCK_B_0x1 = 1;

    /** @brief subregion CID */
    using RISAF_REG15_BCFGR_SRCID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief secure subregion */
    using RISAF_REG15_BCFGR_SEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Only non-secure requests can access subregion z of region x. (value: 0)
     *          - B_0x1: Only secure requests can access subregion z of region x. (value: 1)
     */
        /** @brief Only non-secure requests can access subregion z of region x. */
    constexpr std::uint32_t RISAF_REG15_BCFGR_SEC_B_0x0 = 0;
        /** @brief Only secure requests can access subregion z of region x. */
    constexpr std::uint32_t RISAF_REG15_BCFGR_SEC_B_0x1 = 1;

    /** @brief privileged subregion */
    using RISAF_REG15_BCFGR_PRIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Privileged and unprivileged accesses are granted in subregion z of region x. (value: 0)
     *          - B_0x1: Only privileged accesses are granted in subregion z of region x. (value: 1)
     */
        /** @brief Privileged and unprivileged accesses are granted in subregion z of region x. */
    constexpr std::uint32_t RISAF_REG15_BCFGR_PRIV_B_0x0 = 0;
        /** @brief Only privileged accesses are granted in subregion z of region x. */
    constexpr std::uint32_t RISAF_REG15_BCFGR_PRIV_B_0x1 = 1;

    /** @brief read enable */
    using RISAF_REG15_BCFGR_RDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Any read to subregion z of region x returns zero. (value: 0)
     *          - B_0x1: Subregion z of region x can be read. (value: 1)
     */
        /** @brief Any read to subregion z of region x returns zero. */
    constexpr std::uint32_t RISAF_REG15_BCFGR_RDEN_B_0x0 = 0;
        /** @brief Subregion z of region x can be read. */
    constexpr std::uint32_t RISAF_REG15_BCFGR_RDEN_B_0x1 = 1;

    /** @brief write enable */
    using RISAF_REG15_BCFGR_WREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Any writes to subregion z of region x are ignored. (value: 0)
     *          - B_0x1: Subregion z of region x can be written to. (value: 1)
     */
        /** @brief Any writes to subregion z of region x are ignored. */
    constexpr std::uint32_t RISAF_REG15_BCFGR_WREN_B_0x0 = 0;
        /** @brief Subregion z of region x can be written to. */
    constexpr std::uint32_t RISAF_REG15_BCFGR_WREN_B_0x1 = 1;

    /** @brief RISAF region 15 subregion B start-address register */
    using RISAF_REG15_BSTARTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3E4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief subregion address start */
    using RISAF_REG15_BSTARTR_SADDSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 15 subregion B end-address register */
    using RISAF_REG15_BENDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3E8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief subregion address end */
    using RISAF_REG15_BENDR_SADDEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RISAF region 15 subregion B nested mode register */
    using RISAF_REG15_BNESTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3EC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief delegated configuration enable */
    using RISAF_REG15_BNESTR_DCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RIF configuration for subregion z can be written only by the secure privileged software. (value: 0)
     *          - B_0x1: RIF configuration for subregion z can be written only (value: 1)
     */
        /** @brief RIF configuration for subregion z can be written only by the secure privileged software. */
    constexpr std::uint32_t RISAF_REG15_BNESTR_DCEN_B_0x0 = 0;
        /** @brief RIF configuration for subregion z can be written only */
    constexpr std::uint32_t RISAF_REG15_BNESTR_DCEN_B_0x1 = 1;

}

#endif
