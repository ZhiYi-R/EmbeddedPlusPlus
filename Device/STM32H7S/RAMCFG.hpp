/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32H7S_RAMCFG_HPP
#define EMBEDDED_PP_STM32H7S_RAMCFG_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief RAMs configuration controller */
namespace STM32H7S::RAMCFG {

    /** @brief RAMECC interrupt enable register */
    using RAMECC_IER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Global interrupt enable When GIE bit is set to 1, an interrupt is generated when an enabled global ECC error (GECCDEBWIE, GECCDEIE or GECCSEIE) occurs. */
    using RAMECC_IER_GIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt generated when an ECC error occurs (value: 0)
     *          - B_0x1: interrupt generated when an ECC error occurs (value: 1)
     */
        /** @brief no interrupt generated when an ECC error occurs */
    constexpr std::uint32_t RAMECC_IER_GIE_B_0x0 = 0;
        /** @brief interrupt generated when an ECC error occurs */
    constexpr std::uint32_t RAMECC_IER_GIE_B_0x1 = 1;

    /** @brief Global ECC single error interrupt enable When GECCSEIE bit is set to 1, an interrupt is generated when an ECC single error occurs during a read operation from RAM. */
    using RAMECC_IER_GECCSEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt generated when an ECC single error occurs (value: 0)
     *          - B_0x1: interrupt generated when an ECC single error occurs (value: 1)
     */
        /** @brief no interrupt generated when an ECC single error occurs */
    constexpr std::uint32_t RAMECC_IER_GECCSEIE_B_0x0 = 0;
        /** @brief interrupt generated when an ECC single error occurs */
    constexpr std::uint32_t RAMECC_IER_GECCSEIE_B_0x1 = 1;

    /** @brief Global ECC double error interrupt enable When GECCDEIE bit is set to 1, an interrupt is generated when an ECC double detection error occurs during a read operation from RAM. */
    using RAMECC_IER_GECCDEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt generated when an ECC double detection error occurs (value: 0)
     *          - B_0x1: interrupt generated if an ECC double detection error occurs (value: 1)
     */
        /** @brief no interrupt generated when an ECC double detection error occurs */
    constexpr std::uint32_t RAMECC_IER_GECCDEIE_B_0x0 = 0;
        /** @brief interrupt generated if an ECC double detection error occurs */
    constexpr std::uint32_t RAMECC_IER_GECCDEIE_B_0x1 = 1;

    /** @brief Global ECC double error on byte write (BW) interrupt enable When GECCDEBWIE bit is set to 1, an interrupt is generated when an ECC double detection error occurs during a byte write operation to RAM (incomplete word write). */
    using RAMECC_IER_GECCDEBWIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt generated when an ECC double detection error occurs on byte write (value: 0)
     *          - B_0x1: interrupt generated if an ECC double detection error occurs on byte write (value: 1)
     */
        /** @brief no interrupt generated when an ECC double detection error occurs on byte write */
    constexpr std::uint32_t RAMECC_IER_GECCDEBWIE_B_0x0 = 0;
        /** @brief interrupt generated if an ECC double detection error occurs on byte write */
    constexpr std::uint32_t RAMECC_IER_GECCDEBWIE_B_0x1 = 1;

    /** @brief RAMECC monitor 1 configuration register */
    using RAMECC_M1CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC single error interrupt enable When ECCSEIE bit is set to 1, monitor x generates an interrupt when an ECC single error occurs during a read operation from RAM. */
    using RAMECC_M1CR_ECCSEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt generated when an ECC single error occurs (value: 0)
     *          - B_0x1: interrupt generated when an ECC single error occurs (value: 1)
     */
        /** @brief no interrupt generated when an ECC single error occurs */
    constexpr std::uint32_t RAMECC_M1CR_ECCSEIE_B_0x0 = 0;
        /** @brief interrupt generated when an ECC single error occurs */
    constexpr std::uint32_t RAMECC_M1CR_ECCSEIE_B_0x1 = 1;

    /** @brief ECC double error interrupt enable When ECCDEIE bit is set to 1, monitor x generates an interrupt when an ECC double detection error occurs during a read operation from RAM. */
    using RAMECC_M1CR_ECCDEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt generated when an ECC double detection error occurs (value: 0)
     *          - B_0x1: interrupt generated if an ECC double detection error occurs (value: 1)
     */
        /** @brief no interrupt generated when an ECC double detection error occurs */
    constexpr std::uint32_t RAMECC_M1CR_ECCDEIE_B_0x0 = 0;
        /** @brief interrupt generated if an ECC double detection error occurs */
    constexpr std::uint32_t RAMECC_M1CR_ECCDEIE_B_0x1 = 1;

    /** @brief ECC double error on byte write (BW) interrupt enable When ECCDEBWIE bit is set to 1, monitor x generates an interrupt when an ECC double detection error occurs during a byte write operation to RAM. */
    using RAMECC_M1CR_ECCDEBWIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt generated when an ECC double detection error occurs on byte write (value: 0)
     *          - B_0x1: interrupt generated if an ECC double detection error occurs on byte write (value: 1)
     */
        /** @brief no interrupt generated when an ECC double detection error occurs on byte write */
    constexpr std::uint32_t RAMECC_M1CR_ECCDEBWIE_B_0x0 = 0;
        /** @brief interrupt generated if an ECC double detection error occurs on byte write */
    constexpr std::uint32_t RAMECC_M1CR_ECCDEBWIE_B_0x1 = 1;

    /** @brief ECC error latching enable When ECCELEN bit is set to 1, if an ECC error occurs (both for single error correction or double detection) during a read operation, the context (address, data and ECC code) that generated the error are latched to their respective registers. */
    using RAMECC_M1CR_ECCELEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no error context preserved when an ECC error occurs (value: 0)
     *          - B_0x1: error context preserved when an ECC error occurs (value: 1)
     */
        /** @brief no error context preserved when an ECC error occurs */
    constexpr std::uint32_t RAMECC_M1CR_ECCELEN_B_0x0 = 0;
        /** @brief error context preserved when an ECC error occurs */
    constexpr std::uint32_t RAMECC_M1CR_ECCELEN_B_0x1 = 1;

    /** @brief ECC single error counter enable When ECCSECEN bit is set to 1, the occurrence counter is incremented when an ECC single error occurs during a read operation from RAM. */
    using RAMECC_M1CR_ECCSECEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no counter increment when an ECC single error occurs (value: 0)
     *          - B_0x1: counter increment when an ECC single error occurs (value: 1)
     */
        /** @brief no counter increment when an ECC single error occurs */
    constexpr std::uint32_t RAMECC_M1CR_ECCSECEN_B_0x0 = 0;
        /** @brief counter increment when an ECC single error occurs */
    constexpr std::uint32_t RAMECC_M1CR_ECCSECEN_B_0x1 = 1;

    /** @brief ECC double error counter enable When ECCDECEN bit is set to 1, the occurrence counter is incremented when an ECC double detection error occurs during a read operation from RAM. */
    using RAMECC_M1CR_ECCDECEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no counter increment when an ECC double detection error occurs (value: 0)
     *          - B_0x1: counter increment when an ECC double detection error occurs (value: 1)
     */
        /** @brief no counter increment when an ECC double detection error occurs */
    constexpr std::uint32_t RAMECC_M1CR_ECCDECEN_B_0x0 = 0;
        /** @brief counter increment when an ECC double detection error occurs */
    constexpr std::uint32_t RAMECC_M1CR_ECCDECEN_B_0x1 = 1;

    /** @brief ECC double error on byte write (BW) counter enable When ECCDEBWCEN bit is set to 1, the occurrence counter is incremented when an ECC double detection error occurs during a byte write operation to RAM. */
    using RAMECC_M1CR_ECCDEBWCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no counter increment when an ECC double detection error occurs on byte write (value: 0)
     *          - B_0x1: counter increment when an ECC double detection error occurs on byte write (value: 1)
     */
        /** @brief no counter increment when an ECC double detection error occurs on byte write */
    constexpr std::uint32_t RAMECC_M1CR_ECCDEBWCEN_B_0x0 = 0;
        /** @brief counter increment when an ECC double detection error occurs on byte write */
    constexpr std::uint32_t RAMECC_M1CR_ECCDEBWCEN_B_0x1 = 1;

    /** @brief ECC Test ECC access */
    using RAMECC_M1CR_ECCTEA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: inactive (value: 0)
     *          - B_0x1: write and read access blocked on data memory (value: 1)
     *          - B_0x2: write and read access blocked on ECC memory (value: 2)
     *          - B_0x3: inactive (value: 3)
     */
        /** @brief inactive */
    constexpr std::uint32_t RAMECC_M1CR_ECCTEA_B_0x0 = 0;
        /** @brief write and read access blocked on data memory */
    constexpr std::uint32_t RAMECC_M1CR_ECCTEA_B_0x1 = 1;
        /** @brief write and read access blocked on ECC memory */
    constexpr std::uint32_t RAMECC_M1CR_ECCTEA_B_0x2 = 2;
        /** @brief inactive */
    constexpr std::uint32_t RAMECC_M1CR_ECCTEA_B_0x3 = 3;

    /** @brief RAMECC monitor 1 status register */
    using RAMECC_M1SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC single error detected and corrected flag This bit is set by hardware. It is cleared by software by writing a 0 */
    using RAMECC_M1SR_SEDCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no error detected and corrected (value: 0)
     *          - B_0x1: error detected and corrected (value: 1)
     */
        /** @brief no error detected and corrected */
    constexpr std::uint32_t RAMECC_M1SR_SEDCF_B_0x0 = 0;
        /** @brief error detected and corrected */
    constexpr std::uint32_t RAMECC_M1SR_SEDCF_B_0x1 = 1;

    /** @brief ECC double error detected flag This bit is set by hardware. It is cleared by software by writing a 0 */
    using RAMECC_M1SR_DEDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no error detected (value: 0)
     *          - B_0x1: error detected (value: 1)
     */
        /** @brief no error detected */
    constexpr std::uint32_t RAMECC_M1SR_DEDF_B_0x0 = 0;
        /** @brief error detected */
    constexpr std::uint32_t RAMECC_M1SR_DEDF_B_0x1 = 1;

    /** @brief ECC double error on byte write (BW) detected flag This bit is set by hardware. It is cleared by software by writing a 0 */
    using RAMECC_M1SR_DEBWDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no error detected (value: 0)
     *          - B_0x1: error detected (value: 1)
     */
        /** @brief no error detected */
    constexpr std::uint32_t RAMECC_M1SR_DEBWDF_B_0x0 = 0;
        /** @brief error detected */
    constexpr std::uint32_t RAMECC_M1SR_DEBWDF_B_0x1 = 1;

    /** @brief RAMECC monitor 1 failing address register */
    using RAMECC_M1FAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC error failing address When an ECC error occurs the FADD bitfield contains the address that generated the ECC error. */
    using RAMECC_M1FAR_FADD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RAMECC monitor 1 failing data low register */
    using RAMECC_M1FDRL = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Failing data low When an ECC error occurs the FDATAL bitfield contains the LSB part of the data that generated the error. For 32-bit word SRAM, this bitfield contains the full memory word that generated the error. */
    using RAMECC_M1FDRL_FDATAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RAMECC monitor 1 failing data high register */
    using RAMECC_M1FDRH = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Failing data high (64-bit memory) When an ECC error occurs the FDATAH bitfield contains the MSB part of the data that generated the error. */
    using RAMECC_M1FDRH_FDATAH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RAMECC monitor 1 failing ECC error code register */
    using RAMECC_M1FECR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Failing error code When an ECC error occurs the FEC bitfield contains the ECC failing code that generated the error. */
    using RAMECC_M1FECR_FEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RAMECC monitor 2 configuration register */
    using RAMECC_M2CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC single error interrupt enable When ECCSEIE bit is set to 1, monitor x generates an interrupt when an ECC single error occurs during a read operation from RAM. */
    using RAMECC_M2CR_ECCSEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt generated when an ECC single error occurs (value: 0)
     *          - B_0x1: interrupt generated when an ECC single error occurs (value: 1)
     */
        /** @brief no interrupt generated when an ECC single error occurs */
    constexpr std::uint32_t RAMECC_M2CR_ECCSEIE_B_0x0 = 0;
        /** @brief interrupt generated when an ECC single error occurs */
    constexpr std::uint32_t RAMECC_M2CR_ECCSEIE_B_0x1 = 1;

    /** @brief ECC double error interrupt enable When ECCDEIE bit is set to 1, monitor x generates an interrupt when an ECC double detection error occurs during a read operation from RAM. */
    using RAMECC_M2CR_ECCDEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt generated when an ECC double detection error occurs (value: 0)
     *          - B_0x1: interrupt generated if an ECC double detection error occurs (value: 1)
     */
        /** @brief no interrupt generated when an ECC double detection error occurs */
    constexpr std::uint32_t RAMECC_M2CR_ECCDEIE_B_0x0 = 0;
        /** @brief interrupt generated if an ECC double detection error occurs */
    constexpr std::uint32_t RAMECC_M2CR_ECCDEIE_B_0x1 = 1;

    /** @brief ECC double error on byte write (BW) interrupt enable When ECCDEBWIE bit is set to 1, monitor x generates an interrupt when an ECC double detection error occurs during a byte write operation to RAM. */
    using RAMECC_M2CR_ECCDEBWIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt generated when an ECC double detection error occurs on byte write (value: 0)
     *          - B_0x1: interrupt generated if an ECC double detection error occurs on byte write (value: 1)
     */
        /** @brief no interrupt generated when an ECC double detection error occurs on byte write */
    constexpr std::uint32_t RAMECC_M2CR_ECCDEBWIE_B_0x0 = 0;
        /** @brief interrupt generated if an ECC double detection error occurs on byte write */
    constexpr std::uint32_t RAMECC_M2CR_ECCDEBWIE_B_0x1 = 1;

    /** @brief ECC error latching enable When ECCELEN bit is set to 1, if an ECC error occurs (both for single error correction or double detection) during a read operation, the context (address, data and ECC code) that generated the error are latched to their respective registers. */
    using RAMECC_M2CR_ECCELEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no error context preserved when an ECC error occurs (value: 0)
     *          - B_0x1: error context preserved when an ECC error occurs (value: 1)
     */
        /** @brief no error context preserved when an ECC error occurs */
    constexpr std::uint32_t RAMECC_M2CR_ECCELEN_B_0x0 = 0;
        /** @brief error context preserved when an ECC error occurs */
    constexpr std::uint32_t RAMECC_M2CR_ECCELEN_B_0x1 = 1;

    /** @brief ECC single error counter enable When ECCSECEN bit is set to 1, the occurrence counter is incremented when an ECC single error occurs during a read operation from RAM. */
    using RAMECC_M2CR_ECCSECEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no counter increment when an ECC single error occurs (value: 0)
     *          - B_0x1: counter increment when an ECC single error occurs (value: 1)
     */
        /** @brief no counter increment when an ECC single error occurs */
    constexpr std::uint32_t RAMECC_M2CR_ECCSECEN_B_0x0 = 0;
        /** @brief counter increment when an ECC single error occurs */
    constexpr std::uint32_t RAMECC_M2CR_ECCSECEN_B_0x1 = 1;

    /** @brief ECC double error counter enable When ECCDECEN bit is set to 1, the occurrence counter is incremented when an ECC double detection error occurs during a read operation from RAM. */
    using RAMECC_M2CR_ECCDECEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no counter increment when an ECC double detection error occurs (value: 0)
     *          - B_0x1: counter increment when an ECC double detection error occurs (value: 1)
     */
        /** @brief no counter increment when an ECC double detection error occurs */
    constexpr std::uint32_t RAMECC_M2CR_ECCDECEN_B_0x0 = 0;
        /** @brief counter increment when an ECC double detection error occurs */
    constexpr std::uint32_t RAMECC_M2CR_ECCDECEN_B_0x1 = 1;

    /** @brief ECC double error on byte write (BW) counter enable When ECCDEBWCEN bit is set to 1, the occurrence counter is incremented when an ECC double detection error occurs during a byte write operation to RAM. */
    using RAMECC_M2CR_ECCDEBWCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no counter increment when an ECC double detection error occurs on byte write (value: 0)
     *          - B_0x1: counter increment when an ECC double detection error occurs on byte write (value: 1)
     */
        /** @brief no counter increment when an ECC double detection error occurs on byte write */
    constexpr std::uint32_t RAMECC_M2CR_ECCDEBWCEN_B_0x0 = 0;
        /** @brief counter increment when an ECC double detection error occurs on byte write */
    constexpr std::uint32_t RAMECC_M2CR_ECCDEBWCEN_B_0x1 = 1;

    /** @brief ECC Test ECC access */
    using RAMECC_M2CR_ECCTEA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: inactive (value: 0)
     *          - B_0x1: write and read access blocked on data memory (value: 1)
     *          - B_0x2: write and read access blocked on ECC memory (value: 2)
     *          - B_0x3: inactive (value: 3)
     */
        /** @brief inactive */
    constexpr std::uint32_t RAMECC_M2CR_ECCTEA_B_0x0 = 0;
        /** @brief write and read access blocked on data memory */
    constexpr std::uint32_t RAMECC_M2CR_ECCTEA_B_0x1 = 1;
        /** @brief write and read access blocked on ECC memory */
    constexpr std::uint32_t RAMECC_M2CR_ECCTEA_B_0x2 = 2;
        /** @brief inactive */
    constexpr std::uint32_t RAMECC_M2CR_ECCTEA_B_0x3 = 3;

    /** @brief RAMECC monitor 2 status register */
    using RAMECC_M2SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC single error detected and corrected flag This bit is set by hardware. It is cleared by software by writing a 0 */
    using RAMECC_M2SR_SEDCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no error detected and corrected (value: 0)
     *          - B_0x1: error detected and corrected (value: 1)
     */
        /** @brief no error detected and corrected */
    constexpr std::uint32_t RAMECC_M2SR_SEDCF_B_0x0 = 0;
        /** @brief error detected and corrected */
    constexpr std::uint32_t RAMECC_M2SR_SEDCF_B_0x1 = 1;

    /** @brief ECC double error detected flag This bit is set by hardware. It is cleared by software by writing a 0 */
    using RAMECC_M2SR_DEDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no error detected (value: 0)
     *          - B_0x1: error detected (value: 1)
     */
        /** @brief no error detected */
    constexpr std::uint32_t RAMECC_M2SR_DEDF_B_0x0 = 0;
        /** @brief error detected */
    constexpr std::uint32_t RAMECC_M2SR_DEDF_B_0x1 = 1;

    /** @brief ECC double error on byte write (BW) detected flag This bit is set by hardware. It is cleared by software by writing a 0 */
    using RAMECC_M2SR_DEBWDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no error detected (value: 0)
     *          - B_0x1: error detected (value: 1)
     */
        /** @brief no error detected */
    constexpr std::uint32_t RAMECC_M2SR_DEBWDF_B_0x0 = 0;
        /** @brief error detected */
    constexpr std::uint32_t RAMECC_M2SR_DEBWDF_B_0x1 = 1;

    /** @brief RAMECC monitor 2 failing address register */
    using RAMECC_M2FAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC error failing address When an ECC error occurs the FADD bitfield contains the address that generated the ECC error. */
    using RAMECC_M2FAR_FADD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RAMECC monitor 2 failing data low register */
    using RAMECC_M2FDRL = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Failing data low When an ECC error occurs the FDATAL bitfield contains the LSB part of the data that generated the error. For 32-bit word SRAM, this bitfield contains the full memory word that generated the error. */
    using RAMECC_M2FDRL_FDATAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RAMECC monitor 2 failing data high register */
    using RAMECC_M2FDRH = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Failing data high (64-bit memory) When an ECC error occurs the FDATAH bitfield contains the MSB part of the data that generated the error. */
    using RAMECC_M2FDRH_FDATAH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RAMECC monitor 2 failing ECC error code register */
    using RAMECC_M2FECR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Failing error code When an ECC error occurs the FEC bitfield contains the ECC failing code that generated the error. */
    using RAMECC_M2FECR_FEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RAMECC monitor 3 configuration register */
    using RAMECC_M3CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC single error interrupt enable When ECCSEIE bit is set to 1, monitor x generates an interrupt when an ECC single error occurs during a read operation from RAM. */
    using RAMECC_M3CR_ECCSEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt generated when an ECC single error occurs (value: 0)
     *          - B_0x1: interrupt generated when an ECC single error occurs (value: 1)
     */
        /** @brief no interrupt generated when an ECC single error occurs */
    constexpr std::uint32_t RAMECC_M3CR_ECCSEIE_B_0x0 = 0;
        /** @brief interrupt generated when an ECC single error occurs */
    constexpr std::uint32_t RAMECC_M3CR_ECCSEIE_B_0x1 = 1;

    /** @brief ECC double error interrupt enable When ECCDEIE bit is set to 1, monitor x generates an interrupt when an ECC double detection error occurs during a read operation from RAM. */
    using RAMECC_M3CR_ECCDEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt generated when an ECC double detection error occurs (value: 0)
     *          - B_0x1: interrupt generated if an ECC double detection error occurs (value: 1)
     */
        /** @brief no interrupt generated when an ECC double detection error occurs */
    constexpr std::uint32_t RAMECC_M3CR_ECCDEIE_B_0x0 = 0;
        /** @brief interrupt generated if an ECC double detection error occurs */
    constexpr std::uint32_t RAMECC_M3CR_ECCDEIE_B_0x1 = 1;

    /** @brief ECC double error on byte write (BW) interrupt enable When ECCDEBWIE bit is set to 1, monitor x generates an interrupt when an ECC double detection error occurs during a byte write operation to RAM. */
    using RAMECC_M3CR_ECCDEBWIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt generated when an ECC double detection error occurs on byte write (value: 0)
     *          - B_0x1: interrupt generated if an ECC double detection error occurs on byte write (value: 1)
     */
        /** @brief no interrupt generated when an ECC double detection error occurs on byte write */
    constexpr std::uint32_t RAMECC_M3CR_ECCDEBWIE_B_0x0 = 0;
        /** @brief interrupt generated if an ECC double detection error occurs on byte write */
    constexpr std::uint32_t RAMECC_M3CR_ECCDEBWIE_B_0x1 = 1;

    /** @brief ECC error latching enable When ECCELEN bit is set to 1, if an ECC error occurs (both for single error correction or double detection) during a read operation, the context (address, data and ECC code) that generated the error are latched to their respective registers. */
    using RAMECC_M3CR_ECCELEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no error context preserved when an ECC error occurs (value: 0)
     *          - B_0x1: error context preserved when an ECC error occurs (value: 1)
     */
        /** @brief no error context preserved when an ECC error occurs */
    constexpr std::uint32_t RAMECC_M3CR_ECCELEN_B_0x0 = 0;
        /** @brief error context preserved when an ECC error occurs */
    constexpr std::uint32_t RAMECC_M3CR_ECCELEN_B_0x1 = 1;

    /** @brief ECC single error counter enable When ECCSECEN bit is set to 1, the occurrence counter is incremented when an ECC single error occurs during a read operation from RAM. */
    using RAMECC_M3CR_ECCSECEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no counter increment when an ECC single error occurs (value: 0)
     *          - B_0x1: counter increment when an ECC single error occurs (value: 1)
     */
        /** @brief no counter increment when an ECC single error occurs */
    constexpr std::uint32_t RAMECC_M3CR_ECCSECEN_B_0x0 = 0;
        /** @brief counter increment when an ECC single error occurs */
    constexpr std::uint32_t RAMECC_M3CR_ECCSECEN_B_0x1 = 1;

    /** @brief ECC double error counter enable When ECCDECEN bit is set to 1, the occurrence counter is incremented when an ECC double detection error occurs during a read operation from RAM. */
    using RAMECC_M3CR_ECCDECEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no counter increment when an ECC double detection error occurs (value: 0)
     *          - B_0x1: counter increment when an ECC double detection error occurs (value: 1)
     */
        /** @brief no counter increment when an ECC double detection error occurs */
    constexpr std::uint32_t RAMECC_M3CR_ECCDECEN_B_0x0 = 0;
        /** @brief counter increment when an ECC double detection error occurs */
    constexpr std::uint32_t RAMECC_M3CR_ECCDECEN_B_0x1 = 1;

    /** @brief ECC double error on byte write (BW) counter enable When ECCDEBWCEN bit is set to 1, the occurrence counter is incremented when an ECC double detection error occurs during a byte write operation to RAM. */
    using RAMECC_M3CR_ECCDEBWCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no counter increment when an ECC double detection error occurs on byte write (value: 0)
     *          - B_0x1: counter increment when an ECC double detection error occurs on byte write (value: 1)
     */
        /** @brief no counter increment when an ECC double detection error occurs on byte write */
    constexpr std::uint32_t RAMECC_M3CR_ECCDEBWCEN_B_0x0 = 0;
        /** @brief counter increment when an ECC double detection error occurs on byte write */
    constexpr std::uint32_t RAMECC_M3CR_ECCDEBWCEN_B_0x1 = 1;

    /** @brief ECC Test ECC access */
    using RAMECC_M3CR_ECCTEA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: inactive (value: 0)
     *          - B_0x1: write and read access blocked on data memory (value: 1)
     *          - B_0x2: write and read access blocked on ECC memory (value: 2)
     *          - B_0x3: inactive (value: 3)
     */
        /** @brief inactive */
    constexpr std::uint32_t RAMECC_M3CR_ECCTEA_B_0x0 = 0;
        /** @brief write and read access blocked on data memory */
    constexpr std::uint32_t RAMECC_M3CR_ECCTEA_B_0x1 = 1;
        /** @brief write and read access blocked on ECC memory */
    constexpr std::uint32_t RAMECC_M3CR_ECCTEA_B_0x2 = 2;
        /** @brief inactive */
    constexpr std::uint32_t RAMECC_M3CR_ECCTEA_B_0x3 = 3;

    /** @brief RAMECC monitor 3 status register */
    using RAMECC_M3SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x64, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC single error detected and corrected flag This bit is set by hardware. It is cleared by software by writing a 0 */
    using RAMECC_M3SR_SEDCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no error detected and corrected (value: 0)
     *          - B_0x1: error detected and corrected (value: 1)
     */
        /** @brief no error detected and corrected */
    constexpr std::uint32_t RAMECC_M3SR_SEDCF_B_0x0 = 0;
        /** @brief error detected and corrected */
    constexpr std::uint32_t RAMECC_M3SR_SEDCF_B_0x1 = 1;

    /** @brief ECC double error detected flag This bit is set by hardware. It is cleared by software by writing a 0 */
    using RAMECC_M3SR_DEDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no error detected (value: 0)
     *          - B_0x1: error detected (value: 1)
     */
        /** @brief no error detected */
    constexpr std::uint32_t RAMECC_M3SR_DEDF_B_0x0 = 0;
        /** @brief error detected */
    constexpr std::uint32_t RAMECC_M3SR_DEDF_B_0x1 = 1;

    /** @brief ECC double error on byte write (BW) detected flag This bit is set by hardware. It is cleared by software by writing a 0 */
    using RAMECC_M3SR_DEBWDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no error detected (value: 0)
     *          - B_0x1: error detected (value: 1)
     */
        /** @brief no error detected */
    constexpr std::uint32_t RAMECC_M3SR_DEBWDF_B_0x0 = 0;
        /** @brief error detected */
    constexpr std::uint32_t RAMECC_M3SR_DEBWDF_B_0x1 = 1;

    /** @brief RAMECC monitor 3 failing address register */
    using RAMECC_M3FAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x68, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC error failing address When an ECC error occurs the FADD bitfield contains the address that generated the ECC error. */
    using RAMECC_M3FAR_FADD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RAMECC monitor 3 failing data low register */
    using RAMECC_M3FDRL = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Failing data low When an ECC error occurs the FDATAL bitfield contains the LSB part of the data that generated the error. For 32-bit word SRAM, this bitfield contains the full memory word that generated the error. */
    using RAMECC_M3FDRL_FDATAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RAMECC monitor 3 failing data high register */
    using RAMECC_M3FDRH = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x70, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Failing data high (64-bit memory) When an ECC error occurs the FDATAH bitfield contains the MSB part of the data that generated the error. */
    using RAMECC_M3FDRH_FDATAH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RAMECC monitor 3 failing ECC error code register */
    using RAMECC_M3FECR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x74, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Failing error code When an ECC error occurs the FEC bitfield contains the ECC failing code that generated the error. */
    using RAMECC_M3FECR_FEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RAMECC monitor 4 configuration register */
    using RAMECC_M4CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x80, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC single error interrupt enable When ECCSEIE bit is set to 1, monitor x generates an interrupt when an ECC single error occurs during a read operation from RAM. */
    using RAMECC_M4CR_ECCSEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt generated when an ECC single error occurs (value: 0)
     *          - B_0x1: interrupt generated when an ECC single error occurs (value: 1)
     */
        /** @brief no interrupt generated when an ECC single error occurs */
    constexpr std::uint32_t RAMECC_M4CR_ECCSEIE_B_0x0 = 0;
        /** @brief interrupt generated when an ECC single error occurs */
    constexpr std::uint32_t RAMECC_M4CR_ECCSEIE_B_0x1 = 1;

    /** @brief ECC double error interrupt enable When ECCDEIE bit is set to 1, monitor x generates an interrupt when an ECC double detection error occurs during a read operation from RAM. */
    using RAMECC_M4CR_ECCDEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt generated when an ECC double detection error occurs (value: 0)
     *          - B_0x1: interrupt generated if an ECC double detection error occurs (value: 1)
     */
        /** @brief no interrupt generated when an ECC double detection error occurs */
    constexpr std::uint32_t RAMECC_M4CR_ECCDEIE_B_0x0 = 0;
        /** @brief interrupt generated if an ECC double detection error occurs */
    constexpr std::uint32_t RAMECC_M4CR_ECCDEIE_B_0x1 = 1;

    /** @brief ECC double error on byte write (BW) interrupt enable When ECCDEBWIE bit is set to 1, monitor x generates an interrupt when an ECC double detection error occurs during a byte write operation to RAM. */
    using RAMECC_M4CR_ECCDEBWIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt generated when an ECC double detection error occurs on byte write (value: 0)
     *          - B_0x1: interrupt generated if an ECC double detection error occurs on byte write (value: 1)
     */
        /** @brief no interrupt generated when an ECC double detection error occurs on byte write */
    constexpr std::uint32_t RAMECC_M4CR_ECCDEBWIE_B_0x0 = 0;
        /** @brief interrupt generated if an ECC double detection error occurs on byte write */
    constexpr std::uint32_t RAMECC_M4CR_ECCDEBWIE_B_0x1 = 1;

    /** @brief ECC error latching enable When ECCELEN bit is set to 1, if an ECC error occurs (both for single error correction or double detection) during a read operation, the context (address, data and ECC code) that generated the error are latched to their respective registers. */
    using RAMECC_M4CR_ECCELEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no error context preserved when an ECC error occurs (value: 0)
     *          - B_0x1: error context preserved when an ECC error occurs (value: 1)
     */
        /** @brief no error context preserved when an ECC error occurs */
    constexpr std::uint32_t RAMECC_M4CR_ECCELEN_B_0x0 = 0;
        /** @brief error context preserved when an ECC error occurs */
    constexpr std::uint32_t RAMECC_M4CR_ECCELEN_B_0x1 = 1;

    /** @brief ECC single error counter enable When ECCSECEN bit is set to 1, the occurrence counter is incremented when an ECC single error occurs during a read operation from RAM. */
    using RAMECC_M4CR_ECCSECEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no counter increment when an ECC single error occurs (value: 0)
     *          - B_0x1: counter increment when an ECC single error occurs (value: 1)
     */
        /** @brief no counter increment when an ECC single error occurs */
    constexpr std::uint32_t RAMECC_M4CR_ECCSECEN_B_0x0 = 0;
        /** @brief counter increment when an ECC single error occurs */
    constexpr std::uint32_t RAMECC_M4CR_ECCSECEN_B_0x1 = 1;

    /** @brief ECC double error counter enable When ECCDECEN bit is set to 1, the occurrence counter is incremented when an ECC double detection error occurs during a read operation from RAM. */
    using RAMECC_M4CR_ECCDECEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no counter increment when an ECC double detection error occurs (value: 0)
     *          - B_0x1: counter increment when an ECC double detection error occurs (value: 1)
     */
        /** @brief no counter increment when an ECC double detection error occurs */
    constexpr std::uint32_t RAMECC_M4CR_ECCDECEN_B_0x0 = 0;
        /** @brief counter increment when an ECC double detection error occurs */
    constexpr std::uint32_t RAMECC_M4CR_ECCDECEN_B_0x1 = 1;

    /** @brief ECC double error on byte write (BW) counter enable When ECCDEBWCEN bit is set to 1, the occurrence counter is incremented when an ECC double detection error occurs during a byte write operation to RAM. */
    using RAMECC_M4CR_ECCDEBWCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no counter increment when an ECC double detection error occurs on byte write (value: 0)
     *          - B_0x1: counter increment when an ECC double detection error occurs on byte write (value: 1)
     */
        /** @brief no counter increment when an ECC double detection error occurs on byte write */
    constexpr std::uint32_t RAMECC_M4CR_ECCDEBWCEN_B_0x0 = 0;
        /** @brief counter increment when an ECC double detection error occurs on byte write */
    constexpr std::uint32_t RAMECC_M4CR_ECCDEBWCEN_B_0x1 = 1;

    /** @brief ECC Test ECC access */
    using RAMECC_M4CR_ECCTEA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: inactive (value: 0)
     *          - B_0x1: write and read access blocked on data memory (value: 1)
     *          - B_0x2: write and read access blocked on ECC memory (value: 2)
     *          - B_0x3: inactive (value: 3)
     */
        /** @brief inactive */
    constexpr std::uint32_t RAMECC_M4CR_ECCTEA_B_0x0 = 0;
        /** @brief write and read access blocked on data memory */
    constexpr std::uint32_t RAMECC_M4CR_ECCTEA_B_0x1 = 1;
        /** @brief write and read access blocked on ECC memory */
    constexpr std::uint32_t RAMECC_M4CR_ECCTEA_B_0x2 = 2;
        /** @brief inactive */
    constexpr std::uint32_t RAMECC_M4CR_ECCTEA_B_0x3 = 3;

    /** @brief RAMECC monitor 4 status register */
    using RAMECC_M4SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x84, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC single error detected and corrected flag This bit is set by hardware. It is cleared by software by writing a 0 */
    using RAMECC_M4SR_SEDCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no error detected and corrected (value: 0)
     *          - B_0x1: error detected and corrected (value: 1)
     */
        /** @brief no error detected and corrected */
    constexpr std::uint32_t RAMECC_M4SR_SEDCF_B_0x0 = 0;
        /** @brief error detected and corrected */
    constexpr std::uint32_t RAMECC_M4SR_SEDCF_B_0x1 = 1;

    /** @brief ECC double error detected flag This bit is set by hardware. It is cleared by software by writing a 0 */
    using RAMECC_M4SR_DEDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no error detected (value: 0)
     *          - B_0x1: error detected (value: 1)
     */
        /** @brief no error detected */
    constexpr std::uint32_t RAMECC_M4SR_DEDF_B_0x0 = 0;
        /** @brief error detected */
    constexpr std::uint32_t RAMECC_M4SR_DEDF_B_0x1 = 1;

    /** @brief ECC double error on byte write (BW) detected flag This bit is set by hardware. It is cleared by software by writing a 0 */
    using RAMECC_M4SR_DEBWDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no error detected (value: 0)
     *          - B_0x1: error detected (value: 1)
     */
        /** @brief no error detected */
    constexpr std::uint32_t RAMECC_M4SR_DEBWDF_B_0x0 = 0;
        /** @brief error detected */
    constexpr std::uint32_t RAMECC_M4SR_DEBWDF_B_0x1 = 1;

    /** @brief RAMECC monitor 4 failing address register */
    using RAMECC_M4FAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x88, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC error failing address When an ECC error occurs the FADD bitfield contains the address that generated the ECC error. */
    using RAMECC_M4FAR_FADD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RAMECC monitor 4 failing data low register */
    using RAMECC_M4FDRL = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Failing data low When an ECC error occurs the FDATAL bitfield contains the LSB part of the data that generated the error. For 32-bit word SRAM, this bitfield contains the full memory word that generated the error. */
    using RAMECC_M4FDRL_FDATAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RAMECC monitor 4 failing data high register */
    using RAMECC_M4FDRH = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x90, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Failing data high (64-bit memory) When an ECC error occurs the FDATAH bitfield contains the MSB part of the data that generated the error. */
    using RAMECC_M4FDRH_FDATAH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RAMECC monitor 4 failing ECC error code register */
    using RAMECC_M4FECR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x94, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Failing error code When an ECC error occurs the FEC bitfield contains the ECC failing code that generated the error. */
    using RAMECC_M4FECR_FEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RAMECC monitor 5 configuration register */
    using RAMECC_M5CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC single error interrupt enable When ECCSEIE bit is set to 1, monitor x generates an interrupt when an ECC single error occurs during a read operation from RAM. */
    using RAMECC_M5CR_ECCSEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt generated when an ECC single error occurs (value: 0)
     *          - B_0x1: interrupt generated when an ECC single error occurs (value: 1)
     */
        /** @brief no interrupt generated when an ECC single error occurs */
    constexpr std::uint32_t RAMECC_M5CR_ECCSEIE_B_0x0 = 0;
        /** @brief interrupt generated when an ECC single error occurs */
    constexpr std::uint32_t RAMECC_M5CR_ECCSEIE_B_0x1 = 1;

    /** @brief ECC double error interrupt enable When ECCDEIE bit is set to 1, monitor x generates an interrupt when an ECC double detection error occurs during a read operation from RAM. */
    using RAMECC_M5CR_ECCDEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt generated when an ECC double detection error occurs (value: 0)
     *          - B_0x1: interrupt generated if an ECC double detection error occurs (value: 1)
     */
        /** @brief no interrupt generated when an ECC double detection error occurs */
    constexpr std::uint32_t RAMECC_M5CR_ECCDEIE_B_0x0 = 0;
        /** @brief interrupt generated if an ECC double detection error occurs */
    constexpr std::uint32_t RAMECC_M5CR_ECCDEIE_B_0x1 = 1;

    /** @brief ECC double error on byte write (BW) interrupt enable When ECCDEBWIE bit is set to 1, monitor x generates an interrupt when an ECC double detection error occurs during a byte write operation to RAM. */
    using RAMECC_M5CR_ECCDEBWIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no interrupt generated when an ECC double detection error occurs on byte write (value: 0)
     *          - B_0x1: interrupt generated if an ECC double detection error occurs on byte write (value: 1)
     */
        /** @brief no interrupt generated when an ECC double detection error occurs on byte write */
    constexpr std::uint32_t RAMECC_M5CR_ECCDEBWIE_B_0x0 = 0;
        /** @brief interrupt generated if an ECC double detection error occurs on byte write */
    constexpr std::uint32_t RAMECC_M5CR_ECCDEBWIE_B_0x1 = 1;

    /** @brief ECC error latching enable When ECCELEN bit is set to 1, if an ECC error occurs (both for single error correction or double detection) during a read operation, the context (address, data and ECC code) that generated the error are latched to their respective registers. */
    using RAMECC_M5CR_ECCELEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no error context preserved when an ECC error occurs (value: 0)
     *          - B_0x1: error context preserved when an ECC error occurs (value: 1)
     */
        /** @brief no error context preserved when an ECC error occurs */
    constexpr std::uint32_t RAMECC_M5CR_ECCELEN_B_0x0 = 0;
        /** @brief error context preserved when an ECC error occurs */
    constexpr std::uint32_t RAMECC_M5CR_ECCELEN_B_0x1 = 1;

    /** @brief ECC single error counter enable When ECCSECEN bit is set to 1, the occurrence counter is incremented when an ECC single error occurs during a read operation from RAM. */
    using RAMECC_M5CR_ECCSECEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no counter increment when an ECC single error occurs (value: 0)
     *          - B_0x1: counter increment when an ECC single error occurs (value: 1)
     */
        /** @brief no counter increment when an ECC single error occurs */
    constexpr std::uint32_t RAMECC_M5CR_ECCSECEN_B_0x0 = 0;
        /** @brief counter increment when an ECC single error occurs */
    constexpr std::uint32_t RAMECC_M5CR_ECCSECEN_B_0x1 = 1;

    /** @brief ECC double error counter enable When ECCDECEN bit is set to 1, the occurrence counter is incremented when an ECC double detection error occurs during a read operation from RAM. */
    using RAMECC_M5CR_ECCDECEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no counter increment when an ECC double detection error occurs (value: 0)
     *          - B_0x1: counter increment when an ECC double detection error occurs (value: 1)
     */
        /** @brief no counter increment when an ECC double detection error occurs */
    constexpr std::uint32_t RAMECC_M5CR_ECCDECEN_B_0x0 = 0;
        /** @brief counter increment when an ECC double detection error occurs */
    constexpr std::uint32_t RAMECC_M5CR_ECCDECEN_B_0x1 = 1;

    /** @brief ECC double error on byte write (BW) counter enable When ECCDEBWCEN bit is set to 1, the occurrence counter is incremented when an ECC double detection error occurs during a byte write operation to RAM. */
    using RAMECC_M5CR_ECCDEBWCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no counter increment when an ECC double detection error occurs on byte write (value: 0)
     *          - B_0x1: counter increment when an ECC double detection error occurs on byte write (value: 1)
     */
        /** @brief no counter increment when an ECC double detection error occurs on byte write */
    constexpr std::uint32_t RAMECC_M5CR_ECCDEBWCEN_B_0x0 = 0;
        /** @brief counter increment when an ECC double detection error occurs on byte write */
    constexpr std::uint32_t RAMECC_M5CR_ECCDEBWCEN_B_0x1 = 1;

    /** @brief ECC Test ECC access */
    using RAMECC_M5CR_ECCTEA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: inactive (value: 0)
     *          - B_0x1: write and read access blocked on data memory (value: 1)
     *          - B_0x2: write and read access blocked on ECC memory (value: 2)
     *          - B_0x3: inactive (value: 3)
     */
        /** @brief inactive */
    constexpr std::uint32_t RAMECC_M5CR_ECCTEA_B_0x0 = 0;
        /** @brief write and read access blocked on data memory */
    constexpr std::uint32_t RAMECC_M5CR_ECCTEA_B_0x1 = 1;
        /** @brief write and read access blocked on ECC memory */
    constexpr std::uint32_t RAMECC_M5CR_ECCTEA_B_0x2 = 2;
        /** @brief inactive */
    constexpr std::uint32_t RAMECC_M5CR_ECCTEA_B_0x3 = 3;

    /** @brief RAMECC monitor 5 status register */
    using RAMECC_M5SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC single error detected and corrected flag This bit is set by hardware. It is cleared by software by writing a 0 */
    using RAMECC_M5SR_SEDCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no error detected and corrected (value: 0)
     *          - B_0x1: error detected and corrected (value: 1)
     */
        /** @brief no error detected and corrected */
    constexpr std::uint32_t RAMECC_M5SR_SEDCF_B_0x0 = 0;
        /** @brief error detected and corrected */
    constexpr std::uint32_t RAMECC_M5SR_SEDCF_B_0x1 = 1;

    /** @brief ECC double error detected flag This bit is set by hardware. It is cleared by software by writing a 0 */
    using RAMECC_M5SR_DEDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no error detected (value: 0)
     *          - B_0x1: error detected (value: 1)
     */
        /** @brief no error detected */
    constexpr std::uint32_t RAMECC_M5SR_DEDF_B_0x0 = 0;
        /** @brief error detected */
    constexpr std::uint32_t RAMECC_M5SR_DEDF_B_0x1 = 1;

    /** @brief ECC double error on byte write (BW) detected flag This bit is set by hardware. It is cleared by software by writing a 0 */
    using RAMECC_M5SR_DEBWDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no error detected (value: 0)
     *          - B_0x1: error detected (value: 1)
     */
        /** @brief no error detected */
    constexpr std::uint32_t RAMECC_M5SR_DEBWDF_B_0x0 = 0;
        /** @brief error detected */
    constexpr std::uint32_t RAMECC_M5SR_DEBWDF_B_0x1 = 1;

    /** @brief RAMECC monitor 5 failing address register */
    using RAMECC_M5FAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ECC error failing address When an ECC error occurs the FADD bitfield contains the address that generated the ECC error. */
    using RAMECC_M5FAR_FADD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RAMECC monitor 5 failing data low register */
    using RAMECC_M5FDRL = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xAC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Failing data low When an ECC error occurs the FDATAL bitfield contains the LSB part of the data that generated the error. For 32-bit word SRAM, this bitfield contains the full memory word that generated the error. */
    using RAMECC_M5FDRL_FDATAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RAMECC monitor 5 failing data high register */
    using RAMECC_M5FDRH = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Failing data high (64-bit memory) When an ECC error occurs the FDATAH bitfield contains the MSB part of the data that generated the error. */
    using RAMECC_M5FDRH_FDATAH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RAMECC monitor 5 failing ECC error code register */
    using RAMECC_M5FECR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Failing error code When an ECC error occurs the FEC bitfield contains the ECC failing code that generated the error. */
    using RAMECC_M5FECR_FEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
