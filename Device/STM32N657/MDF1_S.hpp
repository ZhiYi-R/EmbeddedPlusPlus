/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32N657_MDF1_S_HPP
#define EMBEDDED_PP_STM32N657_MDF1_S_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief MDF register block */
namespace STM32N657::MDF1_S {

    /** @brief MDF global control register */
    using MDF_GCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger output control */
    using MDF_GCR_TRGO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write 0 has no effect. Read 0 means that the trigger can be set again to 1. (value: 0)
     *          - B_0x1: Write 1 generates a positive pulse on mdf_trgo signal and triggers the acquisition on the enabled filters having ACQMOD[2:0] = 0x1 and selecting TRGO as trigger. Read 1 means that the trigger pulse is still active. (value: 1)
     */
        /** @brief Write 0 has no effect. Read 0 means that the trigger can be set again to 1. */
    constexpr std::uint32_t MDF_GCR_TRGO_B_0x0 = 0;
        /** @brief Write 1 generates a positive pulse on mdf_trgo signal and triggers the acquisition on the enabled filters having ACQMOD[2:0] = 0x1 and selecting TRGO as trigger. Read 1 means that the trigger pulse is still active. */
    constexpr std::uint32_t MDF_GCR_TRGO_B_0x1 = 1;

    /** @brief Interleaved number */
    using MDF_GCR_ILVNB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interleaved-transfer mode disabled (value: 0)
     *          - B_0x1: Data from DFLT0 and DFLT1 are interleaved. (value: 1)
     *          - B_0x2: Data from DFLT0, DFLT1 and DFLT2 are interleaved. (value: 2)
     *          - B_0xF: Data from DFLT0 to DFLT15 are interleaved. (value: 15)
     */
        /** @brief Interleaved-transfer mode disabled */
    constexpr std::uint32_t MDF_GCR_ILVNB_B_0x0 = 0;
        /** @brief Data from DFLT0 and DFLT1 are interleaved. */
    constexpr std::uint32_t MDF_GCR_ILVNB_B_0x1 = 1;
        /** @brief Data from DFLT0, DFLT1 and DFLT2 are interleaved. */
    constexpr std::uint32_t MDF_GCR_ILVNB_B_0x2 = 2;
        /** @brief Data from DFLT0 to DFLT15 are interleaved. */
    constexpr std::uint32_t MDF_GCR_ILVNB_B_0xF = 15;

    /** @brief MDF clock generator control register */
    using MDF_CKGCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CKGEN dividers enable */
    using MDF_CKGCR_CKGDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CKGEN dividers disabled (value: 0)
     *          - B_0x1: CKGEN dividers enabled (value: 1)
     */
        /** @brief CKGEN dividers disabled */
    constexpr std::uint32_t MDF_CKGCR_CKGDEN_B_0x0 = 0;
        /** @brief CKGEN dividers enabled */
    constexpr std::uint32_t MDF_CKGCR_CKGDEN_B_0x1 = 1;

    /** @brief MDF_CCK0 clock enable */
    using MDF_CKGCR_CCK0EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bitstream clock not generated (value: 0)
     *          - B_0x1: Bitstream clock generated on the MDF_CCK0 pad (value: 1)
     */
        /** @brief Bitstream clock not generated */
    constexpr std::uint32_t MDF_CKGCR_CCK0EN_B_0x0 = 0;
        /** @brief Bitstream clock generated on the MDF_CCK0 pad */
    constexpr std::uint32_t MDF_CKGCR_CCK0EN_B_0x1 = 1;

    /** @brief MDF_CCK1 clock enable */
    using MDF_CKGCR_CCK1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bitstream clock not generated (value: 0)
     *          - B_0x1: Bitstream clock generated on the MDF_CCK1 pad (value: 1)
     */
        /** @brief Bitstream clock not generated */
    constexpr std::uint32_t MDF_CKGCR_CCK1EN_B_0x0 = 0;
        /** @brief Bitstream clock generated on the MDF_CCK1 pad */
    constexpr std::uint32_t MDF_CKGCR_CCK1EN_B_0x1 = 1;

    /** @brief Clock generator mode */
    using MDF_CKGCR_CKGMOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The kernel clock is provided to the dividers as soon as CKGDEN is set to 1. (value: 0)
     *          - B_0x1: The kernel clock is provided to the dividers when CKGDEN is set to 1 and the trigger condition met. (value: 1)
     */
        /** @brief The kernel clock is provided to the dividers as soon as CKGDEN is set to 1. */
    constexpr std::uint32_t MDF_CKGCR_CKGMOD_B_0x0 = 0;
        /** @brief The kernel clock is provided to the dividers when CKGDEN is set to 1 and the trigger condition met. */
    constexpr std::uint32_t MDF_CKGCR_CKGMOD_B_0x1 = 1;

    /** @brief MDF_CCK0 direction */
    using MDF_CKGCR_CCK0DIR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MDF_CCK0 pin direction is in input. (value: 0)
     *          - B_0x1: MDF_CCK0 pin direction is in output. (value: 1)
     */
        /** @brief MDF_CCK0 pin direction is in input. */
    constexpr std::uint32_t MDF_CKGCR_CCK0DIR_B_0x0 = 0;
        /** @brief MDF_CCK0 pin direction is in output. */
    constexpr std::uint32_t MDF_CKGCR_CCK0DIR_B_0x1 = 1;

    /** @brief MDF_CCK1 direction */
    using MDF_CKGCR_CCK1DIR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MDF_CCK1 pin direction is in input. (value: 0)
     *          - B_0x1: MDF_CCK1 pin direction is in output. (value: 1)
     */
        /** @brief MDF_CCK1 pin direction is in input. */
    constexpr std::uint32_t MDF_CKGCR_CCK1DIR_B_0x0 = 0;
        /** @brief MDF_CCK1 pin direction is in output. */
    constexpr std::uint32_t MDF_CKGCR_CCK1DIR_B_0x1 = 1;

    /** @brief CKGEN trigger sensitivity selection */
    using MDF_CKGCR_TRGSENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: A rising edge event triggers the activation of CKGEN dividers. (value: 0)
     *          - B_0x1: A falling edge even triggers the activation of CKGEN dividers. (value: 1)
     */
        /** @brief A rising edge event triggers the activation of CKGEN dividers. */
    constexpr std::uint32_t MDF_CKGCR_TRGSENS_B_0x0 = 0;
        /** @brief A falling edge even triggers the activation of CKGEN dividers. */
    constexpr std::uint32_t MDF_CKGCR_TRGSENS_B_0x1 = 1;

    /** @brief Digital filter trigger signal selection */
    using MDF_CKGCR_TRGSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x2: mdf_trg[0] selected (value: 2)
     *          - B_0x3: mdf_trg[1] selected (value: 3)
     *          - B_0xF: mdf_trg[13] selected (value: 15)
     */
        /** @brief mdf_trg[0] selected */
    constexpr std::uint32_t MDF_CKGCR_TRGSRC_B_0x2 = 2;
        /** @brief mdf_trg[1] selected */
    constexpr std::uint32_t MDF_CKGCR_TRGSRC_B_0x3 = 3;
        /** @brief mdf_trg[13] selected */
    constexpr std::uint32_t MDF_CKGCR_TRGSRC_B_0xF = 15;

    /** @brief Divider to control the MDF_CCK clock */
    using MDF_CKGCR_CCKDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The MDF_CCK clock is mdf_proc_ck. (value: 0)
     *          - B_0x1: The MDF_CCK clock is mdf_proc_ck / 2. (value: 1)
     *          - B_0x2: The MDF_CCK clock is mdf_proc_ck / 3. (value: 2)
     *          - B_0xF: The MDF_CCK clock is mdf_proc_ck / 16. (value: 15)
     */
        /** @brief The MDF_CCK clock is mdf_proc_ck. */
    constexpr std::uint32_t MDF_CKGCR_CCKDIV_B_0x0 = 0;
        /** @brief The MDF_CCK clock is mdf_proc_ck / 2. */
    constexpr std::uint32_t MDF_CKGCR_CCKDIV_B_0x1 = 1;
        /** @brief The MDF_CCK clock is mdf_proc_ck / 3. */
    constexpr std::uint32_t MDF_CKGCR_CCKDIV_B_0x2 = 2;
        /** @brief The MDF_CCK clock is mdf_proc_ck / 16. */
    constexpr std::uint32_t MDF_CKGCR_CCKDIV_B_0xF = 15;

    /** @brief Divider to control the serial interface clock */
    using MDF_CKGCR_PROCDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: mdf_ker_ck provided to the SITF (value: 0)
     *          - B_0x1: mdf_ker_ck/2 provided to the SITF (value: 1)
     */
        /** @brief mdf_ker_ck provided to the SITF */
    constexpr std::uint32_t MDF_CKGCR_PROCDIV_B_0x0 = 0;
        /** @brief mdf_ker_ck/2 provided to the SITF */
    constexpr std::uint32_t MDF_CKGCR_PROCDIV_B_0x1 = 1;

    /** @brief Clock generator active flag */
    using MDF_CKGCR_CKGACTIVE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The clock generator is not active and can be configured if needed. (value: 0)
     *          - B_0x1: The clock generator is active and protected fields cannot be configured. (value: 1)
     */
        /** @brief The clock generator is not active and can be configured if needed. */
    constexpr std::uint32_t MDF_CKGCR_CKGACTIVE_B_0x0 = 0;
        /** @brief The clock generator is active and protected fields cannot be configured. */
    constexpr std::uint32_t MDF_CKGCR_CKGACTIVE_B_0x1 = 1;

    /** @brief MDF serial interface control register 0 */
    using MDF_SITF0CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x80, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Serial interface enable */
    using MDF_SITF0CR_SITFEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Serial interface disabled (value: 0)
     *          - B_0x1: Serial interface enabled (value: 1)
     */
        /** @brief Serial interface disabled */
    constexpr std::uint32_t MDF_SITF0CR_SITFEN_B_0x0 = 0;
        /** @brief Serial interface enabled */
    constexpr std::uint32_t MDF_SITF0CR_SITFEN_B_0x1 = 1;

    /** @brief Serial clock source */
    using MDF_SITF0CR_SCKSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Serial clock source is MDF_CCK0. (value: 0)
     *          - B_0x1: Serial clock source is MDF_CCK1. (value: 1)
     */
        /** @brief Serial clock source is MDF_CCK0. */
    constexpr std::uint32_t MDF_SITF0CR_SCKSRC_B_0x0 = 0;
        /** @brief Serial clock source is MDF_CCK1. */
    constexpr std::uint32_t MDF_SITF0CR_SCKSRC_B_0x1 = 1;

    /** @brief Serial interface type */
    using MDF_SITF0CR_SITFMOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LF_MASTER SPI mode (value: 0)
     *          - B_0x1: Normal SPI mode (value: 1)
     *          - B_0x2: Manchester mode: rising edge = logic 0, falling edge = logic 1 (value: 2)
     *          - B_0x3: Manchester mode: rising edge = logic 1, falling edge = logic 0 (value: 3)
     */
        /** @brief LF_MASTER SPI mode */
    constexpr std::uint32_t MDF_SITF0CR_SITFMOD_B_0x0 = 0;
        /** @brief Normal SPI mode */
    constexpr std::uint32_t MDF_SITF0CR_SITFMOD_B_0x1 = 1;
        /** @brief Manchester mode: rising edge = logic 0, falling edge = logic 1 */
    constexpr std::uint32_t MDF_SITF0CR_SITFMOD_B_0x2 = 2;
        /** @brief Manchester mode: rising edge = logic 1, falling edge = logic 0 */
    constexpr std::uint32_t MDF_SITF0CR_SITFMOD_B_0x3 = 3;

    /** @brief Manchester symbol threshold/SPI threshold */
    using MDF_SITF0CR_STH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Serial interface active flag */
    using MDF_SITF0CR_SITFACTIVE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The serial interface is not active and can be configured if needed. (value: 0)
     *          - B_0x1: The serial interface is active and protected fields cannot be configured. (value: 1)
     */
        /** @brief The serial interface is not active and can be configured if needed. */
    constexpr std::uint32_t MDF_SITF0CR_SITFACTIVE_B_0x0 = 0;
        /** @brief The serial interface is active and protected fields cannot be configured. */
    constexpr std::uint32_t MDF_SITF0CR_SITFACTIVE_B_0x1 = 1;

    /** @brief MDF bitstream matrix control register 0 */
    using MDF_BSMX0CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x84, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bitstream Selection */
    using MDF_BSMX0CR_BSSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: bs0_r provided to DFLTx and SCDx (value: 0)
     *          - B_0x1: bs0_f provided to DFLTx and SCDx (value: 1)
     *          - B_0x2: bs1_r provided to DFLTx and SCDx (if instantiated) (value: 2)
     *          - B_0x3: bs1_f provided to DFLTx and SCDx (if instantiated) (value: 3)
     *          - B_0x1E: bs15_r provided to DFLTx and SCDx (if instantiated) (value: 30)
     *          - B_0x1F: bs15_f provided to DFLTx and SCDx (if instantiated) (value: 31)
     */
        /** @brief bs0_r provided to DFLTx and SCDx */
    constexpr std::uint32_t MDF_BSMX0CR_BSSEL_B_0x0 = 0;
        /** @brief bs0_f provided to DFLTx and SCDx */
    constexpr std::uint32_t MDF_BSMX0CR_BSSEL_B_0x1 = 1;
        /** @brief bs1_r provided to DFLTx and SCDx (if instantiated) */
    constexpr std::uint32_t MDF_BSMX0CR_BSSEL_B_0x2 = 2;
        /** @brief bs1_f provided to DFLTx and SCDx (if instantiated) */
    constexpr std::uint32_t MDF_BSMX0CR_BSSEL_B_0x3 = 3;
        /** @brief bs15_r provided to DFLTx and SCDx (if instantiated) */
    constexpr std::uint32_t MDF_BSMX0CR_BSSEL_B_0x1E = 30;
        /** @brief bs15_f provided to DFLTx and SCDx (if instantiated) */
    constexpr std::uint32_t MDF_BSMX0CR_BSSEL_B_0x1F = 31;

    /** @brief BSMX active flag */
    using MDF_BSMX0CR_BSMXACTIVE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BSMX is not active and can be configured if needed. (value: 0)
     *          - B_0x1: BSMX is active and protected fields cannot be configured. (value: 1)
     */
        /** @brief BSMX is not active and can be configured if needed. */
    constexpr std::uint32_t MDF_BSMX0CR_BSMXACTIVE_B_0x0 = 0;
        /** @brief BSMX is active and protected fields cannot be configured. */
    constexpr std::uint32_t MDF_BSMX0CR_BSMXACTIVE_B_0x1 = 1;

    /** @brief MDF digital filter control register 0 */
    using MDF_DFLT0CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x88, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Digital filter enable */
    using MDF_DFLT0CR_DFLTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Acquisition immediately stopped (value: 0)
     *          - B_0x1: Acquisition immediately started if ACQMOD[2:0] = 00x or 101, or acquisition started when the proper trigger event occurs if ACQMOD[2:0] = 01x or 100. (value: 1)
     */
        /** @brief Acquisition immediately stopped */
    constexpr std::uint32_t MDF_DFLT0CR_DFLTEN_B_0x0 = 0;
        /** @brief Acquisition immediately started if ACQMOD[2:0] = 00x or 101, or acquisition started when the proper trigger event occurs if ACQMOD[2:0] = 01x or 100. */
    constexpr std::uint32_t MDF_DFLT0CR_DFLTEN_B_0x1 = 1;

    /** @brief DMA requests enable */
    using MDF_DFLT0CR_DMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DMA interface for the corresponding digital filter disabled (value: 0)
     *          - B_0x1: DMA interface for the corresponding digital filter enabled (value: 1)
     */
        /** @brief DMA interface for the corresponding digital filter disabled */
    constexpr std::uint32_t MDF_DFLT0CR_DMAEN_B_0x0 = 0;
        /** @brief DMA interface for the corresponding digital filter enabled */
    constexpr std::uint32_t MDF_DFLT0CR_DMAEN_B_0x1 = 1;

    /** @brief RXFIFO Threshold selection */
    using MDF_DFLT0CR_FTH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RXFIFO threshold event generated when the RXFIFO is not empty (value: 0)
     *          - B_0x1: RXFIFO threshold event generated when the RXFIFO is half-full (value: 1)
     */
        /** @brief RXFIFO threshold event generated when the RXFIFO is not empty */
    constexpr std::uint32_t MDF_DFLT0CR_FTH_B_0x0 = 0;
        /** @brief RXFIFO threshold event generated when the RXFIFO is half-full */
    constexpr std::uint32_t MDF_DFLT0CR_FTH_B_0x1 = 1;

    /** @brief Digital filter trigger mode */
    using MDF_DFLT0CR_ACQMOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Asynchronous continuous acquisition mode (value: 0)
     *          - B_0x1: Asynchronous single-shot acquisition mode (value: 1)
     *          - B_0x2: Synchronous continuous acquisition mode (value: 2)
     *          - B_0x3: Synchronous, single-shot acquisition mode (value: 3)
     *          - B_0x4: Window continuous acquisition mode (value: 4)
     *          - B_0x5: Synchronous snapshot mode (value: 5)
     */
        /** @brief Asynchronous continuous acquisition mode */
    constexpr std::uint32_t MDF_DFLT0CR_ACQMOD_B_0x0 = 0;
        /** @brief Asynchronous single-shot acquisition mode */
    constexpr std::uint32_t MDF_DFLT0CR_ACQMOD_B_0x1 = 1;
        /** @brief Synchronous continuous acquisition mode */
    constexpr std::uint32_t MDF_DFLT0CR_ACQMOD_B_0x2 = 2;
        /** @brief Synchronous, single-shot acquisition mode */
    constexpr std::uint32_t MDF_DFLT0CR_ACQMOD_B_0x3 = 3;
        /** @brief Window continuous acquisition mode */
    constexpr std::uint32_t MDF_DFLT0CR_ACQMOD_B_0x4 = 4;
        /** @brief Synchronous snapshot mode */
    constexpr std::uint32_t MDF_DFLT0CR_ACQMOD_B_0x5 = 5;

    /** @brief Digital filter trigger sensitivity selection */
    using MDF_DFLT0CR_TRGSENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: A rising edge event triggers the acquisition. (value: 0)
     *          - B_0x1: A falling edge even triggers the acquisition. (value: 1)
     */
        /** @brief A rising edge event triggers the acquisition. */
    constexpr std::uint32_t MDF_DFLT0CR_TRGSENS_B_0x0 = 0;
        /** @brief A falling edge even triggers the acquisition. */
    constexpr std::uint32_t MDF_DFLT0CR_TRGSENS_B_0x1 = 1;

    /** @brief Digital filter trigger signal selection */
    using MDF_DFLT0CR_TRGSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TRGO selected (value: 0)
     *          - B_0x1: OLDx event selected (value: 1)
     *          - B_0x2: mdf_trg[0] selected (value: 2)
     *          - B_0xF: mdf_trg[13] selected (value: 15)
     */
        /** @brief TRGO selected */
    constexpr std::uint32_t MDF_DFLT0CR_TRGSRC_B_0x0 = 0;
        /** @brief OLDx event selected */
    constexpr std::uint32_t MDF_DFLT0CR_TRGSRC_B_0x1 = 1;
        /** @brief mdf_trg[0] selected */
    constexpr std::uint32_t MDF_DFLT0CR_TRGSRC_B_0x2 = 2;
        /** @brief mdf_trg[13] selected */
    constexpr std::uint32_t MDF_DFLT0CR_TRGSRC_B_0xF = 15;

    /** @brief Snapshot data format */
    using MDF_DFLT0CR_SNPSFMT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Integrator counter (INT_CNT) not inserted into MDF_SNPSxDR, leaving a data resolution of 23 bits (value: 0)
     *          - B_0x1: Integrator counter (INT_CNT) inserted at position [15:9] of MDF_SNPSxDR, leaving a data resolution of 16 bits. (value: 1)
     */
        /** @brief Integrator counter (INT_CNT) not inserted into MDF_SNPSxDR, leaving a data resolution of 23 bits */
    constexpr std::uint32_t MDF_DFLT0CR_SNPSFMT_B_0x0 = 0;
        /** @brief Integrator counter (INT_CNT) inserted at position [15:9] of MDF_SNPSxDR, leaving a data resolution of 16 bits. */
    constexpr std::uint32_t MDF_DFLT0CR_SNPSFMT_B_0x1 = 1;

    /** @brief Number of samples to be discarded */
    using MDF_DFLT0CR_NBDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No sample discarded (value: 0)
     *          - B_0x1: 1 sample discarded (value: 1)
     */
        /** @brief No sample discarded */
    constexpr std::uint32_t MDF_DFLT0CR_NBDIS_B_0x0 = 0;
        /** @brief 1 sample discarded */
    constexpr std::uint32_t MDF_DFLT0CR_NBDIS_B_0x1 = 1;

    /** @brief Digital filter run status flag */
    using MDF_DFLT0CR_DFLTRUN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Digital filter not running and ready to accept a new trigger event (value: 0)
     *          - B_0x1: Digital filter running (value: 1)
     */
        /** @brief Digital filter not running and ready to accept a new trigger event */
    constexpr std::uint32_t MDF_DFLT0CR_DFLTRUN_B_0x0 = 0;
        /** @brief Digital filter running */
    constexpr std::uint32_t MDF_DFLT0CR_DFLTRUN_B_0x1 = 1;

    /** @brief Digital filter active flag */
    using MDF_DFLT0CR_DFLTACTIVE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Digital filter not active (can be re-enabled again, via DFLTEN, if needed) (value: 0)
     *          - B_0x1: Digital filter active (value: 1)
     */
        /** @brief Digital filter not active (can be re-enabled again, via DFLTEN, if needed) */
    constexpr std::uint32_t MDF_DFLT0CR_DFLTACTIVE_B_0x0 = 0;
        /** @brief Digital filter active */
    constexpr std::uint32_t MDF_DFLT0CR_DFLTACTIVE_B_0x1 = 1;

    /** @brief MDF digital filter configuration register 0 */
    using MDF_DFLT0CICR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Source data for the digital filter */
    using MDF_DFLT0CICR_DATSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x2: Stream coming from the ADCITF1 selected (value: 2)
     *          - B_0x3: Stream coming from the ADCITF2 selected (value: 3)
     */
        /** @brief Stream coming from the ADCITF1 selected */
    constexpr std::uint32_t MDF_DFLT0CICR_DATSRC_B_0x2 = 2;
        /** @brief Stream coming from the ADCITF2 selected */
    constexpr std::uint32_t MDF_DFLT0CICR_DATSRC_B_0x3 = 3;

    /** @brief Select the CIC mode */
    using MDF_DFLT0CICR_CICMOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CIC split in two filters and MCIC configured in FastSinc filter (value: 0)
     *          - B_0x1: CIC split in two filters and MCIC configured in Sincless thansup>1less than/sup> filter (value: 1)
     *          - B_0x2: CIC split in two filters and MCIC configured in Sincless thansup>2less than/sup> filter (value: 2)
     *          - B_0x3: CIC split in two filters and MCIC configured in Sincless thansup>3less than/sup> filter (value: 3)
     *          - B_0x4: CIC configured in single Sincless thansup>4less than/sup> filter (value: 4)
     */
        /** @brief CIC split in two filters and MCIC configured in FastSinc filter */
    constexpr std::uint32_t MDF_DFLT0CICR_CICMOD_B_0x0 = 0;
        /** @brief CIC split in two filters and MCIC configured in Sincless thansup>1less than/sup> filter */
    constexpr std::uint32_t MDF_DFLT0CICR_CICMOD_B_0x1 = 1;
        /** @brief CIC split in two filters and MCIC configured in Sincless thansup>2less than/sup> filter */
    constexpr std::uint32_t MDF_DFLT0CICR_CICMOD_B_0x2 = 2;
        /** @brief CIC split in two filters and MCIC configured in Sincless thansup>3less than/sup> filter */
    constexpr std::uint32_t MDF_DFLT0CICR_CICMOD_B_0x3 = 3;
        /** @brief CIC configured in single Sincless thansup>4less than/sup> filter */
    constexpr std::uint32_t MDF_DFLT0CICR_CICMOD_B_0x4 = 4;

    /** @brief CIC decimation ratio selection */
    using MDF_DFLT0CICR_MCICD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Decimation ratio is 2. (value: 0)
     *          - B_0x1: Decimation ratio is 2. (value: 1)
     */
        /** @brief Decimation ratio is 2. */
    constexpr std::uint32_t MDF_DFLT0CICR_MCICD_B_0x0 = 0;
        /** @brief Decimation ratio is 2. */
    constexpr std::uint32_t MDF_DFLT0CICR_MCICD_B_0x1 = 1;

    /** @brief CIC decimation ratio selection */
    using MDF_DFLT0CICR_MCICD8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Decimation ratio is 2. (value: 0)
     *          - B_0x1: Decimation ratio is 2. (value: 1)
     */
        /** @brief Decimation ratio is 2. */
    constexpr std::uint32_t MDF_DFLT0CICR_MCICD8_B_0x0 = 0;
        /** @brief Decimation ratio is 2. */
    constexpr std::uint32_t MDF_DFLT0CICR_MCICD8_B_0x1 = 1;

    /** @brief Scaling factor selection */
    using MDF_DFLT0CICR_SCALE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 0 dB (value: 0)
     *          - B_0x1: + 3.5 dB (value: 1)
     *          - B_0x2: + 6 dB or shift left by 1 bit (value: 2)
     *          - B_0x18: + 72 dB or shift left by 12 bits (value: 24)
     *          - B_0x20: - 48.2 dB or shift right by 8 bits (default value) (value: 32)
     *          - B_0x21: - 44.6 dB (value: 33)
     *          - B_0x22: - 42.1 dB or shift right by 7 bits (value: 34)
     *          - B_0x23: - 38.6 dB (value: 35)
     *          - B_0x2E: - 6 dB or shift right by 1 bit (value: 46)
     *          - B_0x2F: - 2.5 dB (value: 47)
     */
        /** @brief 0 dB */
    constexpr std::uint32_t MDF_DFLT0CICR_SCALE_B_0x0 = 0;
        /** @brief + 3.5 dB */
    constexpr std::uint32_t MDF_DFLT0CICR_SCALE_B_0x1 = 1;
        /** @brief + 6 dB or shift left by 1 bit */
    constexpr std::uint32_t MDF_DFLT0CICR_SCALE_B_0x2 = 2;
        /** @brief + 72 dB or shift left by 12 bits */
    constexpr std::uint32_t MDF_DFLT0CICR_SCALE_B_0x18 = 24;
        /** @brief - 48.2 dB or shift right by 8 bits (default value) */
    constexpr std::uint32_t MDF_DFLT0CICR_SCALE_B_0x20 = 32;
        /** @brief - 44.6 dB */
    constexpr std::uint32_t MDF_DFLT0CICR_SCALE_B_0x21 = 33;
        /** @brief - 42.1 dB or shift right by 7 bits */
    constexpr std::uint32_t MDF_DFLT0CICR_SCALE_B_0x22 = 34;
        /** @brief - 38.6 dB */
    constexpr std::uint32_t MDF_DFLT0CICR_SCALE_B_0x23 = 35;
        /** @brief - 6 dB or shift right by 1 bit */
    constexpr std::uint32_t MDF_DFLT0CICR_SCALE_B_0x2E = 46;
        /** @brief - 2.5 dB */
    constexpr std::uint32_t MDF_DFLT0CICR_SCALE_B_0x2F = 47;

    /** @brief MDF reshape filter configuration register 0 */
    using MDF_DFLT0RSFR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x90, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reshaper filter bypass */
    using MDF_DFLT0RSFR_RSFLTBYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Reshape filter not bypassed (default value) (value: 0)
     *          - B_0x1: Reshape filter bypassed (value: 1)
     */
        /** @brief Reshape filter not bypassed (default value) */
    constexpr std::uint32_t MDF_DFLT0RSFR_RSFLTBYP_B_0x0 = 0;
        /** @brief Reshape filter bypassed */
    constexpr std::uint32_t MDF_DFLT0RSFR_RSFLTBYP_B_0x1 = 1;

    /** @brief Reshaper filter decimation ratio */
    using MDF_DFLT0RSFR_RSFLTD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Decimation ratio is 4 (default value). (value: 0)
     *          - B_0x1: Decimation ratio is 1. (value: 1)
     */
        /** @brief Decimation ratio is 4 (default value). */
    constexpr std::uint32_t MDF_DFLT0RSFR_RSFLTD_B_0x0 = 0;
        /** @brief Decimation ratio is 1. */
    constexpr std::uint32_t MDF_DFLT0RSFR_RSFLTD_B_0x1 = 1;

    /** @brief High-pass filter bypass */
    using MDF_DFLT0RSFR_HPFBYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HPF not bypassed (default value) (value: 0)
     *          - B_0x1: HPF bypassed (value: 1)
     */
        /** @brief HPF not bypassed (default value) */
    constexpr std::uint32_t MDF_DFLT0RSFR_HPFBYP_B_0x0 = 0;
        /** @brief HPF bypassed */
    constexpr std::uint32_t MDF_DFLT0RSFR_HPFBYP_B_0x1 = 1;

    /** @brief High-pass filter cut-off frequency */
    using MDF_DFLT0RSFR_HPFC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Cut-off frequency = 0.000625 x Fless thansub>PCMless than/sub> (value: 0)
     *          - B_0x1: Cut-off frequency = 0.00125 x Fless thansub>PCMless than/sub> (value: 1)
     *          - B_0x2: Cut-off frequency = 0.00250 x Fless thansub>PCMless than/sub> (value: 2)
     *          - B_0x3: Cut-off frequency = 0.00950 x Fless thansub>PCMless than/sub> (value: 3)
     */
        /** @brief Cut-off frequency = 0.000625 x Fless thansub>PCMless than/sub> */
    constexpr std::uint32_t MDF_DFLT0RSFR_HPFC_B_0x0 = 0;
        /** @brief Cut-off frequency = 0.00125 x Fless thansub>PCMless than/sub> */
    constexpr std::uint32_t MDF_DFLT0RSFR_HPFC_B_0x1 = 1;
        /** @brief Cut-off frequency = 0.00250 x Fless thansub>PCMless than/sub> */
    constexpr std::uint32_t MDF_DFLT0RSFR_HPFC_B_0x2 = 2;
        /** @brief Cut-off frequency = 0.00950 x Fless thansub>PCMless than/sub> */
    constexpr std::uint32_t MDF_DFLT0RSFR_HPFC_B_0x3 = 3;

    /** @brief MDF integrator configuration register 0 */
    using MDF_DFLT0INTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x94, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Integrator output division */
    using MDF_DFLT0INTR_INTDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The integrator data outputs are divided by 128 (default value). (value: 0)
     *          - B_0x1: The integrator data outputs are divided by 32. (value: 1)
     *          - B_0x2: The integrator data outputs are divided by 4. (value: 2)
     *          - B_0x3: The integrator data outputs are not divided. (value: 3)
     */
        /** @brief The integrator data outputs are divided by 128 (default value). */
    constexpr std::uint32_t MDF_DFLT0INTR_INTDIV_B_0x0 = 0;
        /** @brief The integrator data outputs are divided by 32. */
    constexpr std::uint32_t MDF_DFLT0INTR_INTDIV_B_0x1 = 1;
        /** @brief The integrator data outputs are divided by 4. */
    constexpr std::uint32_t MDF_DFLT0INTR_INTDIV_B_0x2 = 2;
        /** @brief The integrator data outputs are not divided. */
    constexpr std::uint32_t MDF_DFLT0INTR_INTDIV_B_0x3 = 3;

    /** @brief Integration value selection */
    using MDF_DFLT0INTR_INTVAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The integration value is 1, meaning bypass mode (default after reset). (value: 0)
     *          - B_0x1: The integration value is 2. (value: 1)
     */
        /** @brief The integration value is 1, meaning bypass mode (default after reset). */
    constexpr std::uint32_t MDF_DFLT0INTR_INTVAL_B_0x0 = 0;
        /** @brief The integration value is 2. */
    constexpr std::uint32_t MDF_DFLT0INTR_INTVAL_B_0x1 = 1;

    /** @brief MDF out-of limit detector control register 0 */
    using MDF_OLD0CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x98, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OLDx enable */
    using MDF_OLD0CR_OLDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OLDx disabled (default value) (value: 0)
     *          - B_0x1: OLDx enabled, including the ACIC filter working in continuous mode (value: 1)
     */
        /** @brief OLDx disabled (default value) */
    constexpr std::uint32_t MDF_OLD0CR_OLDEN_B_0x0 = 0;
        /** @brief OLDx enabled, including the ACIC filter working in continuous mode */
    constexpr std::uint32_t MDF_OLD0CR_OLDEN_B_0x1 = 1;

    /** @brief Threshold In band */
    using MDF_OLD0CR_THINB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The OLDx generates an event if the signal is lower than OLDTHL or higher than OLDTHH (default value). (value: 0)
     *          - B_0x1: The OLDx generates an event if the signal is lower than OLDTHH and higher than OLDTHL (value: 1)
     */
        /** @brief The OLDx generates an event if the signal is lower than OLDTHL or higher than OLDTHH (default value). */
    constexpr std::uint32_t MDF_OLD0CR_THINB_B_0x0 = 0;
        /** @brief The OLDx generates an event if the signal is lower than OLDTHH and higher than OLDTHL */
    constexpr std::uint32_t MDF_OLD0CR_THINB_B_0x1 = 1;

    /** @brief Break signal assignment for out-of limit detector */
    using MDF_OLD0CR_BKOLD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OLDx CIC order selection */
    using MDF_OLD0CR_ACICN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FastSinc filter type (value: 0)
     *          - B_0x1: Sincless thansup>1less than/sup> filter type (value: 1)
     *          - B_0x2: Sincless thansup>2less than/sup> filter type (value: 2)
     *          - B_0x3: Sincless thansup>3less than/sup> filter type (value: 3)
     */
        /** @brief FastSinc filter type */
    constexpr std::uint32_t MDF_OLD0CR_ACICN_B_0x0 = 0;
        /** @brief Sincless thansup>1less than/sup> filter type */
    constexpr std::uint32_t MDF_OLD0CR_ACICN_B_0x1 = 1;
        /** @brief Sincless thansup>2less than/sup> filter type */
    constexpr std::uint32_t MDF_OLD0CR_ACICN_B_0x2 = 2;
        /** @brief Sincless thansup>3less than/sup> filter type */
    constexpr std::uint32_t MDF_OLD0CR_ACICN_B_0x3 = 3;

    /** @brief OLDx CIC decimation ratio selection */
    using MDF_OLD0CR_ACICD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Decimation ratio is 1. (value: 0)
     *          - B_0x1: Decimation ratio is 2. (value: 1)
     */
        /** @brief Decimation ratio is 1. */
    constexpr std::uint32_t MDF_OLD0CR_ACICD_B_0x0 = 0;
        /** @brief Decimation ratio is 2. */
    constexpr std::uint32_t MDF_OLD0CR_ACICD_B_0x1 = 1;

    /** @brief OLDx active flag */
    using MDF_OLD0CR_OLDACTIVE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OLDx not active and can be configured if needed (value: 0)
     *          - B_0x1: OLDx active and protected fields cannot be configured (value: 1)
     */
        /** @brief OLDx not active and can be configured if needed */
    constexpr std::uint32_t MDF_OLD0CR_OLDACTIVE_B_0x0 = 0;
        /** @brief OLDx active and protected fields cannot be configured */
    constexpr std::uint32_t MDF_OLD0CR_OLDACTIVE_B_0x1 = 1;

    /** @brief MDF OLD0 low threshold register 0 */
    using MDF_OLD0THLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OLD low threshold value */
    using MDF_OLD0THLR_OLDTHL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 26, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDF OLD0 high threshold register 0 */
    using MDF_OLD0THHR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OLDx high threshold value */
    using MDF_OLD0THHR_OLDTHH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 26, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDF delay control register 0 */
    using MDF_DLY0CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Delay to apply to a bitstream */
    using MDF_DLY0CR_SKPDLY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No input sample skipped (value: 0)
     *          - B_0x1: 1 input sample skipped (value: 1)
     */
        /** @brief No input sample skipped */
    constexpr std::uint32_t MDF_DLY0CR_SKPDLY_B_0x0 = 0;
        /** @brief 1 input sample skipped */
    constexpr std::uint32_t MDF_DLY0CR_SKPDLY_B_0x1 = 1;

    /** @brief Skip busy flag */
    using MDF_DLY0CR_SKPBF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MDF ready to accept a new value into SKPDLY[6:0] (value: 0)
     *          - B_0x1: Last valid SKPDLY[6:0] still under processing (value: 1)
     */
        /** @brief MDF ready to accept a new value into SKPDLY[6:0] */
    constexpr std::uint32_t MDF_DLY0CR_SKPBF_B_0x0 = 0;
        /** @brief Last valid SKPDLY[6:0] still under processing */
    constexpr std::uint32_t MDF_DLY0CR_SKPBF_B_0x1 = 1;

    /** @brief MDF short circuit detector control register 0 */
    using MDF_SCD0CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SCDx enable */
    using MDF_SCD0CR_SCDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SCDx disabled (value: 0)
     *          - B_0x1: SSCDx enabled, (value: 1)
     */
        /** @brief SCDx disabled */
    constexpr std::uint32_t MDF_SCD0CR_SCDEN_B_0x0 = 0;
        /** @brief SSCDx enabled, */
    constexpr std::uint32_t MDF_SCD0CR_SCDEN_B_0x1 = 1;

    /** @brief Break signal assignment for short circuit detector */
    using MDF_SCD0CR_BKSCD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SCDx threshold */
    using MDF_SCD0CR_SCDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 2 consecutive 1's or 0's generate an event. (value: 0)
     *          - B_0x1: 2 consecutive 1's or 0's generate an event. (value: 1)
     */
        /** @brief 2 consecutive 1's or 0's generate an event. */
    constexpr std::uint32_t MDF_SCD0CR_SCDT_B_0x0 = 0;
        /** @brief 2 consecutive 1's or 0's generate an event. */
    constexpr std::uint32_t MDF_SCD0CR_SCDT_B_0x1 = 1;

    /** @brief SCDx active flag */
    using MDF_SCD0CR_SCDACTIVE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SCDx not active and can be configured if needed (value: 0)
     *          - B_0x1: SCDx active and protected fields cannot be configured (value: 1)
     */
        /** @brief SCDx not active and can be configured if needed */
    constexpr std::uint32_t MDF_SCD0CR_SCDACTIVE_B_0x0 = 0;
        /** @brief SCDx active and protected fields cannot be configured */
    constexpr std::uint32_t MDF_SCD0CR_SCDACTIVE_B_0x1 = 1;

    /** @brief MDF DFLT0 interrupt enable register 0 */
    using MDF_DFLT0IER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xAC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RXFIFO threshold interrupt enable */
    using MDF_DFLT0IER_FTHIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RXFIFO threshold interrupt disabled (value: 0)
     *          - B_0x1: RXFIFO threshold interrupt enabled (value: 1)
     */
        /** @brief RXFIFO threshold interrupt disabled */
    constexpr std::uint32_t MDF_DFLT0IER_FTHIE_B_0x0 = 0;
        /** @brief RXFIFO threshold interrupt enabled */
    constexpr std::uint32_t MDF_DFLT0IER_FTHIE_B_0x1 = 1;

    /** @brief Data overflow interrupt enable */
    using MDF_DFLT0IER_DOVRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Data overflow interrupt disabled (value: 0)
     *          - B_0x1: Data overflow interrupt enabled (value: 1)
     */
        /** @brief Data overflow interrupt disabled */
    constexpr std::uint32_t MDF_DFLT0IER_DOVRIE_B_0x0 = 0;
        /** @brief Data overflow interrupt enabled */
    constexpr std::uint32_t MDF_DFLT0IER_DOVRIE_B_0x1 = 1;

    /** @brief Snapshot data ready interrupt enable */
    using MDF_DFLT0IER_SSDRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Snapshot data ready interrupt disabled (value: 0)
     *          - B_0x1: Snapshot data ready interrupt enabled (value: 1)
     */
        /** @brief Snapshot data ready interrupt disabled */
    constexpr std::uint32_t MDF_DFLT0IER_SSDRIE_B_0x0 = 0;
        /** @brief Snapshot data ready interrupt enabled */
    constexpr std::uint32_t MDF_DFLT0IER_SSDRIE_B_0x1 = 1;

    /** @brief OLD0 interrupt enable */
    using MDF_DFLT0IER_OLDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OLD0 event interrupt disabled (value: 0)
     *          - B_0x1: OLD0 event interrupt enabled (value: 1)
     */
        /** @brief OLD0 event interrupt disabled */
    constexpr std::uint32_t MDF_DFLT0IER_OLDIE_B_0x0 = 0;
        /** @brief OLD0 event interrupt enabled */
    constexpr std::uint32_t MDF_DFLT0IER_OLDIE_B_0x1 = 1;

    /** @brief Snapshot overrun interrupt enable */
    using MDF_DFLT0IER_SSOVRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Snapshot overrun interrupt disabled (value: 0)
     *          - B_0x1: Snapshot overrun interrupt enabled (value: 1)
     */
        /** @brief Snapshot overrun interrupt disabled */
    constexpr std::uint32_t MDF_DFLT0IER_SSOVRIE_B_0x0 = 0;
        /** @brief Snapshot overrun interrupt enabled */
    constexpr std::uint32_t MDF_DFLT0IER_SSOVRIE_B_0x1 = 1;

    /** @brief SCD0 interrupt enable */
    using MDF_DFLT0IER_SCDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SCD0 interrupt disabled (value: 0)
     *          - B_0x1: SCD0 interrupt enabled (value: 1)
     */
        /** @brief SCD0 interrupt disabled */
    constexpr std::uint32_t MDF_DFLT0IER_SCDIE_B_0x0 = 0;
        /** @brief SCD0 interrupt enabled */
    constexpr std::uint32_t MDF_DFLT0IER_SCDIE_B_0x1 = 1;

    /** @brief Saturation detection interrupt enable */
    using MDF_DFLT0IER_SATIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Saturation interrupt disabled (value: 0)
     *          - B_0x1: Saturation interrupt enabled (value: 1)
     */
        /** @brief Saturation interrupt disabled */
    constexpr std::uint32_t MDF_DFLT0IER_SATIE_B_0x0 = 0;
        /** @brief Saturation interrupt enabled */
    constexpr std::uint32_t MDF_DFLT0IER_SATIE_B_0x1 = 1;

    /** @brief Clock absence detection interrupt enable */
    using MDF_DFLT0IER_CKABIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Clock absence interrupt disabled (value: 0)
     *          - B_0x1: Clock absence interrupt enabled (value: 1)
     */
        /** @brief Clock absence interrupt disabled */
    constexpr std::uint32_t MDF_DFLT0IER_CKABIE_B_0x0 = 0;
        /** @brief Clock absence interrupt enabled */
    constexpr std::uint32_t MDF_DFLT0IER_CKABIE_B_0x1 = 1;

    /** @brief Reshape filter overrun interrupt enable */
    using MDF_DFLT0IER_RFOVRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Reshape filter overrun interrupt disabled (value: 0)
     *          - B_0x1: Reshape filter overrun interrupt enabled (value: 1)
     */
        /** @brief Reshape filter overrun interrupt disabled */
    constexpr std::uint32_t MDF_DFLT0IER_RFOVRIE_B_0x0 = 0;
        /** @brief Reshape filter overrun interrupt enabled */
    constexpr std::uint32_t MDF_DFLT0IER_RFOVRIE_B_0x1 = 1;

    /** @brief MDF DFLT0 interrupt status register 0 */
    using MDF_DFLT0ISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RXFIFO threshold flag */
    using MDF_DFLT0ISR_FTHF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RXFIFO threshold not reached (value: 0)
     *          - B_0x1: RXFIFO threshold reached (value: 1)
     */
        /** @brief RXFIFO threshold not reached */
    constexpr std::uint32_t MDF_DFLT0ISR_FTHF_B_0x0 = 0;
        /** @brief RXFIFO threshold reached */
    constexpr std::uint32_t MDF_DFLT0ISR_FTHF_B_0x1 = 1;

    /** @brief Data overflow flag */
    using MDF_DFLT0ISR_DOVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Read 0 means that no overflow is detected. Write 0 has no effect. (value: 0)
     *          - B_0x1: Read 1 means that an overflow is detected; Write 1 clears this flag. (value: 1)
     */
        /** @brief Read 0 means that no overflow is detected. Write 0 has no effect. */
    constexpr std::uint32_t MDF_DFLT0ISR_DOVRF_B_0x0 = 0;
        /** @brief Read 1 means that an overflow is detected; Write 1 clears this flag. */
    constexpr std::uint32_t MDF_DFLT0ISR_DOVRF_B_0x1 = 1;

    /** @brief Snapshot data ready flag */
    using MDF_DFLT0ISR_SSDRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Read 0 means that no data is available. Write 0 has no effect. (value: 0)
     *          - B_0x1: Read 1 means that a new data is available. Write 1 clears this flag. (value: 1)
     */
        /** @brief Read 0 means that no data is available. Write 0 has no effect. */
    constexpr std::uint32_t MDF_DFLT0ISR_SSDRF_B_0x0 = 0;
        /** @brief Read 1 means that a new data is available. Write 1 clears this flag. */
    constexpr std::uint32_t MDF_DFLT0ISR_SSDRF_B_0x1 = 1;

    /** @brief RXFIFO not-empty flag */
    using MDF_DFLT0ISR_RXNEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RXFIFO empty (value: 0)
     *          - B_0x1: RXFIFO not empty (value: 1)
     */
        /** @brief RXFIFO empty */
    constexpr std::uint32_t MDF_DFLT0ISR_RXNEF_B_0x0 = 0;
        /** @brief RXFIFO not empty */
    constexpr std::uint32_t MDF_DFLT0ISR_RXNEF_B_0x1 = 1;

    /** @brief OLD0 flag */
    using MDF_DFLT0ISR_OLDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Read 0 means that no OLD0 event is detected. Write 0 has no effect. (value: 0)
     *          - B_0x1: Read 1 means that an OLD0 event is detected Write 1 clears THHF, THLF and OLDF. (value: 1)
     */
        /** @brief Read 0 means that no OLD0 event is detected. Write 0 has no effect. */
    constexpr std::uint32_t MDF_DFLT0ISR_OLDF_B_0x0 = 0;
        /** @brief Read 1 means that an OLD0 event is detected Write 1 clears THHF, THLF and OLDF. */
    constexpr std::uint32_t MDF_DFLT0ISR_OLDF_B_0x1 = 1;

    /** @brief Low-threshold status flag */
    using MDF_DFLT0ISR_THLF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The signal was higher than OLDTHL when the last OLD0 event occurred. (value: 0)
     *          - B_0x1: The signal was lower than OLDTHL when the last OLD0 event occurred. (value: 1)
     */
        /** @brief The signal was higher than OLDTHL when the last OLD0 event occurred. */
    constexpr std::uint32_t MDF_DFLT0ISR_THLF_B_0x0 = 0;
        /** @brief The signal was lower than OLDTHL when the last OLD0 event occurred. */
    constexpr std::uint32_t MDF_DFLT0ISR_THLF_B_0x1 = 1;

    /** @brief High-threshold status flag */
    using MDF_DFLT0ISR_THHF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The signal was lower than OLDTHH when the last OLD0 event occurred. (value: 0)
     *          - B_0x1: The signal was higher than OLDTHH when the last OLD0 event occurred. (value: 1)
     */
        /** @brief The signal was lower than OLDTHH when the last OLD0 event occurred. */
    constexpr std::uint32_t MDF_DFLT0ISR_THHF_B_0x0 = 0;
        /** @brief The signal was higher than OLDTHH when the last OLD0 event occurred. */
    constexpr std::uint32_t MDF_DFLT0ISR_THHF_B_0x1 = 1;

    /** @brief Snapshot overrun flag */
    using MDF_DFLT0ISR_SSOVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Read 0 means that no snapshot overrun event is detected. Write 0 has no effect. (value: 0)
     *          - B_0x1: Read 1 means that a snapshot overrun event is detected. Write 1 clears this flag. (value: 1)
     */
        /** @brief Read 0 means that no snapshot overrun event is detected. Write 0 has no effect. */
    constexpr std::uint32_t MDF_DFLT0ISR_SSOVRF_B_0x0 = 0;
        /** @brief Read 1 means that a snapshot overrun event is detected. Write 1 clears this flag. */
    constexpr std::uint32_t MDF_DFLT0ISR_SSOVRF_B_0x1 = 1;

    /** @brief Short-circuit detector flag */
    using MDF_DFLT0ISR_SCDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Read 0 means that no SCD0 event is detected. Write 0 has no effect. (value: 0)
     *          - B_0x1: Read 1 means that a SCD0 event is detected. Write 1 clears this flag. (value: 1)
     */
        /** @brief Read 0 means that no SCD0 event is detected. Write 0 has no effect. */
    constexpr std::uint32_t MDF_DFLT0ISR_SCDF_B_0x0 = 0;
        /** @brief Read 1 means that a SCD0 event is detected. Write 1 clears this flag. */
    constexpr std::uint32_t MDF_DFLT0ISR_SCDF_B_0x1 = 1;

    /** @brief Saturation detection flag */
    using MDF_DFLT0ISR_SATF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Read 0 means that no saturation is detected. Write 0 has no effect. (value: 0)
     *          - B_0x1: Read 1 means that a saturation is detected. Write 1 clears this flag. (value: 1)
     */
        /** @brief Read 0 means that no saturation is detected. Write 0 has no effect. */
    constexpr std::uint32_t MDF_DFLT0ISR_SATF_B_0x0 = 0;
        /** @brief Read 1 means that a saturation is detected. Write 1 clears this flag. */
    constexpr std::uint32_t MDF_DFLT0ISR_SATF_B_0x1 = 1;

    /** @brief Clock absence detection flag */
    using MDF_DFLT0ISR_CKABF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Read 0 means that no clock absence is detected. Write 0 has no effect. (value: 0)
     *          - B_0x1: Read 1 means that a clock absence is detected. Write 1 clears this flag. (value: 1)
     */
        /** @brief Read 0 means that no clock absence is detected. Write 0 has no effect. */
    constexpr std::uint32_t MDF_DFLT0ISR_CKABF_B_0x0 = 0;
        /** @brief Read 1 means that a clock absence is detected. Write 1 clears this flag. */
    constexpr std::uint32_t MDF_DFLT0ISR_CKABF_B_0x1 = 1;

    /** @brief Reshape filter overrun detection flag */
    using MDF_DFLT0ISR_RFOVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Read 0 means that no reshape filter overrun is detected. Write 0 has no effect. (value: 0)
     *          - B_0x1: Read 1 means that reshape filter overrun is detected. Write 1 clears this flag. (value: 1)
     */
        /** @brief Read 0 means that no reshape filter overrun is detected. Write 0 has no effect. */
    constexpr std::uint32_t MDF_DFLT0ISR_RFOVRF_B_0x0 = 0;
        /** @brief Read 1 means that reshape filter overrun is detected. Write 1 clears this flag. */
    constexpr std::uint32_t MDF_DFLT0ISR_RFOVRF_B_0x1 = 1;

    /** @brief MDF offset error compensation control register 0 */
    using MDF_OEC0CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Offset error compensation */
    using MDF_OEC0CR_OFFSET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 26, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDF snapshot data register 0 */
    using MDF_SNPS0DR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xEC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Contains the MCIC decimation counter value when the last trigger event occurs (MCIC_CNT) */
    using MDF_SNPS0DR_MCICDC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extended data size */
    using MDF_SNPS0DR_EXTSDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Contains the 16 MSB of the last valid data processed by the digital filter. */
    using MDF_SNPS0DR_SDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDF digital filter data register 0 */
    using MDF_DFLT0DR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data processed by digital filter */
    using MDF_DFLT0DR_DR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDF serial interface control register 1 */
    using MDF_SITF1CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x100, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Serial interface enable */
    using MDF_SITF1CR_SITFEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Serial interface disabled (value: 0)
     *          - B_0x1: Serial interface enabled (value: 1)
     */
        /** @brief Serial interface disabled */
    constexpr std::uint32_t MDF_SITF1CR_SITFEN_B_0x0 = 0;
        /** @brief Serial interface enabled */
    constexpr std::uint32_t MDF_SITF1CR_SITFEN_B_0x1 = 1;

    /** @brief Serial clock source */
    using MDF_SITF1CR_SCKSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Serial clock source is MDF_CCK0. (value: 0)
     *          - B_0x1: Serial clock source is MDF_CCK1. (value: 1)
     */
        /** @brief Serial clock source is MDF_CCK0. */
    constexpr std::uint32_t MDF_SITF1CR_SCKSRC_B_0x0 = 0;
        /** @brief Serial clock source is MDF_CCK1. */
    constexpr std::uint32_t MDF_SITF1CR_SCKSRC_B_0x1 = 1;

    /** @brief Serial interface type */
    using MDF_SITF1CR_SITFMOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LF_MASTER SPI mode (value: 0)
     *          - B_0x1: Normal SPI mode (value: 1)
     *          - B_0x2: Manchester mode: rising edge = logic 0, falling edge = logic 1 (value: 2)
     *          - B_0x3: Manchester mode: rising edge = logic 1, falling edge = logic 0 (value: 3)
     */
        /** @brief LF_MASTER SPI mode */
    constexpr std::uint32_t MDF_SITF1CR_SITFMOD_B_0x0 = 0;
        /** @brief Normal SPI mode */
    constexpr std::uint32_t MDF_SITF1CR_SITFMOD_B_0x1 = 1;
        /** @brief Manchester mode: rising edge = logic 0, falling edge = logic 1 */
    constexpr std::uint32_t MDF_SITF1CR_SITFMOD_B_0x2 = 2;
        /** @brief Manchester mode: rising edge = logic 1, falling edge = logic 0 */
    constexpr std::uint32_t MDF_SITF1CR_SITFMOD_B_0x3 = 3;

    /** @brief Manchester symbol threshold/SPI threshold */
    using MDF_SITF1CR_STH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Serial interface active flag */
    using MDF_SITF1CR_SITFACTIVE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The serial interface is not active and can be configured if needed. (value: 0)
     *          - B_0x1: The serial interface is active and protected fields cannot be configured. (value: 1)
     */
        /** @brief The serial interface is not active and can be configured if needed. */
    constexpr std::uint32_t MDF_SITF1CR_SITFACTIVE_B_0x0 = 0;
        /** @brief The serial interface is active and protected fields cannot be configured. */
    constexpr std::uint32_t MDF_SITF1CR_SITFACTIVE_B_0x1 = 1;

    /** @brief MDF bitstream matrix control register 1 */
    using MDF_BSMX1CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x104, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bitstream Selection */
    using MDF_BSMX1CR_BSSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: bs0_r provided to DFLTx and SCDx (value: 0)
     *          - B_0x1: bs0_f provided to DFLTx and SCDx (value: 1)
     *          - B_0x2: bs1_r provided to DFLTx and SCDx (if instantiated) (value: 2)
     *          - B_0x3: bs1_f provided to DFLTx and SCDx (if instantiated) (value: 3)
     *          - B_0x1E: bs15_r provided to DFLTx and SCDx (if instantiated) (value: 30)
     *          - B_0x1F: bs15_f provided to DFLTx and SCDx (if instantiated) (value: 31)
     */
        /** @brief bs0_r provided to DFLTx and SCDx */
    constexpr std::uint32_t MDF_BSMX1CR_BSSEL_B_0x0 = 0;
        /** @brief bs0_f provided to DFLTx and SCDx */
    constexpr std::uint32_t MDF_BSMX1CR_BSSEL_B_0x1 = 1;
        /** @brief bs1_r provided to DFLTx and SCDx (if instantiated) */
    constexpr std::uint32_t MDF_BSMX1CR_BSSEL_B_0x2 = 2;
        /** @brief bs1_f provided to DFLTx and SCDx (if instantiated) */
    constexpr std::uint32_t MDF_BSMX1CR_BSSEL_B_0x3 = 3;
        /** @brief bs15_r provided to DFLTx and SCDx (if instantiated) */
    constexpr std::uint32_t MDF_BSMX1CR_BSSEL_B_0x1E = 30;
        /** @brief bs15_f provided to DFLTx and SCDx (if instantiated) */
    constexpr std::uint32_t MDF_BSMX1CR_BSSEL_B_0x1F = 31;

    /** @brief BSMX active flag */
    using MDF_BSMX1CR_BSMXACTIVE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BSMX is not active and can be configured if needed. (value: 0)
     *          - B_0x1: BSMX is active and protected fields cannot be configured. (value: 1)
     */
        /** @brief BSMX is not active and can be configured if needed. */
    constexpr std::uint32_t MDF_BSMX1CR_BSMXACTIVE_B_0x0 = 0;
        /** @brief BSMX is active and protected fields cannot be configured. */
    constexpr std::uint32_t MDF_BSMX1CR_BSMXACTIVE_B_0x1 = 1;

    /** @brief MDF digital filter control register 1 */
    using MDF_DFLT1CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x108, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Digital filter enable */
    using MDF_DFLT1CR_DFLTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Acquisition immediately stopped (value: 0)
     *          - B_0x1: Acquisition immediately started if ACQMOD[2:0] = 00x or 101, or acquisition started when the proper trigger event occurs if ACQMOD[2:0] = 01x or 100. (value: 1)
     */
        /** @brief Acquisition immediately stopped */
    constexpr std::uint32_t MDF_DFLT1CR_DFLTEN_B_0x0 = 0;
        /** @brief Acquisition immediately started if ACQMOD[2:0] = 00x or 101, or acquisition started when the proper trigger event occurs if ACQMOD[2:0] = 01x or 100. */
    constexpr std::uint32_t MDF_DFLT1CR_DFLTEN_B_0x1 = 1;

    /** @brief DMA requests enable */
    using MDF_DFLT1CR_DMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DMA interface for the corresponding digital filter disabled (value: 0)
     *          - B_0x1: DMA interface for the corresponding digital filter enabled (value: 1)
     */
        /** @brief DMA interface for the corresponding digital filter disabled */
    constexpr std::uint32_t MDF_DFLT1CR_DMAEN_B_0x0 = 0;
        /** @brief DMA interface for the corresponding digital filter enabled */
    constexpr std::uint32_t MDF_DFLT1CR_DMAEN_B_0x1 = 1;

    /** @brief RXFIFO Threshold selection */
    using MDF_DFLT1CR_FTH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RXFIFO threshold event generated when the RXFIFO is not empty (value: 0)
     *          - B_0x1: RXFIFO threshold event generated when the RXFIFO is half-full (value: 1)
     */
        /** @brief RXFIFO threshold event generated when the RXFIFO is not empty */
    constexpr std::uint32_t MDF_DFLT1CR_FTH_B_0x0 = 0;
        /** @brief RXFIFO threshold event generated when the RXFIFO is half-full */
    constexpr std::uint32_t MDF_DFLT1CR_FTH_B_0x1 = 1;

    /** @brief Digital filter trigger mode */
    using MDF_DFLT1CR_ACQMOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Asynchronous continuous acquisition mode (value: 0)
     *          - B_0x1: Asynchronous single-shot acquisition mode (value: 1)
     *          - B_0x2: Synchronous continuous acquisition mode (value: 2)
     *          - B_0x3: Synchronous, single-shot acquisition mode (value: 3)
     *          - B_0x4: Window continuous acquisition mode (value: 4)
     *          - B_0x5: Synchronous snapshot mode (value: 5)
     */
        /** @brief Asynchronous continuous acquisition mode */
    constexpr std::uint32_t MDF_DFLT1CR_ACQMOD_B_0x0 = 0;
        /** @brief Asynchronous single-shot acquisition mode */
    constexpr std::uint32_t MDF_DFLT1CR_ACQMOD_B_0x1 = 1;
        /** @brief Synchronous continuous acquisition mode */
    constexpr std::uint32_t MDF_DFLT1CR_ACQMOD_B_0x2 = 2;
        /** @brief Synchronous, single-shot acquisition mode */
    constexpr std::uint32_t MDF_DFLT1CR_ACQMOD_B_0x3 = 3;
        /** @brief Window continuous acquisition mode */
    constexpr std::uint32_t MDF_DFLT1CR_ACQMOD_B_0x4 = 4;
        /** @brief Synchronous snapshot mode */
    constexpr std::uint32_t MDF_DFLT1CR_ACQMOD_B_0x5 = 5;

    /** @brief Digital filter trigger sensitivity selection */
    using MDF_DFLT1CR_TRGSENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: A rising edge event triggers the acquisition. (value: 0)
     *          - B_0x1: A falling edge even triggers the acquisition. (value: 1)
     */
        /** @brief A rising edge event triggers the acquisition. */
    constexpr std::uint32_t MDF_DFLT1CR_TRGSENS_B_0x0 = 0;
        /** @brief A falling edge even triggers the acquisition. */
    constexpr std::uint32_t MDF_DFLT1CR_TRGSENS_B_0x1 = 1;

    /** @brief Digital filter trigger signal selection */
    using MDF_DFLT1CR_TRGSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TRGO selected (value: 0)
     *          - B_0x1: OLDx event selected (value: 1)
     *          - B_0x2: mdf_trg[0] selected (value: 2)
     *          - B_0xF: mdf_trg[13] selected (value: 15)
     */
        /** @brief TRGO selected */
    constexpr std::uint32_t MDF_DFLT1CR_TRGSRC_B_0x0 = 0;
        /** @brief OLDx event selected */
    constexpr std::uint32_t MDF_DFLT1CR_TRGSRC_B_0x1 = 1;
        /** @brief mdf_trg[0] selected */
    constexpr std::uint32_t MDF_DFLT1CR_TRGSRC_B_0x2 = 2;
        /** @brief mdf_trg[13] selected */
    constexpr std::uint32_t MDF_DFLT1CR_TRGSRC_B_0xF = 15;

    /** @brief Snapshot data format */
    using MDF_DFLT1CR_SNPSFMT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Integrator counter (INT_CNT) not inserted into MDF_SNPSxDR, leaving a data resolution of 23 bits (value: 0)
     *          - B_0x1: Integrator counter (INT_CNT) inserted at position [15:9] of MDF_SNPSxDR, leaving a data resolution of 16 bits. (value: 1)
     */
        /** @brief Integrator counter (INT_CNT) not inserted into MDF_SNPSxDR, leaving a data resolution of 23 bits */
    constexpr std::uint32_t MDF_DFLT1CR_SNPSFMT_B_0x0 = 0;
        /** @brief Integrator counter (INT_CNT) inserted at position [15:9] of MDF_SNPSxDR, leaving a data resolution of 16 bits. */
    constexpr std::uint32_t MDF_DFLT1CR_SNPSFMT_B_0x1 = 1;

    /** @brief Number of samples to be discarded */
    using MDF_DFLT1CR_NBDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No sample discarded (value: 0)
     *          - B_0x1: 1 sample discarded (value: 1)
     */
        /** @brief No sample discarded */
    constexpr std::uint32_t MDF_DFLT1CR_NBDIS_B_0x0 = 0;
        /** @brief 1 sample discarded */
    constexpr std::uint32_t MDF_DFLT1CR_NBDIS_B_0x1 = 1;

    /** @brief Digital filter run status flag */
    using MDF_DFLT1CR_DFLTRUN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Digital filter not running and ready to accept a new trigger event (value: 0)
     *          - B_0x1: Digital filter running (value: 1)
     */
        /** @brief Digital filter not running and ready to accept a new trigger event */
    constexpr std::uint32_t MDF_DFLT1CR_DFLTRUN_B_0x0 = 0;
        /** @brief Digital filter running */
    constexpr std::uint32_t MDF_DFLT1CR_DFLTRUN_B_0x1 = 1;

    /** @brief Digital filter active flag */
    using MDF_DFLT1CR_DFLTACTIVE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Digital filter not active (can be re-enabled again, via DFLTEN, if needed) (value: 0)
     *          - B_0x1: Digital filter active (value: 1)
     */
        /** @brief Digital filter not active (can be re-enabled again, via DFLTEN, if needed) */
    constexpr std::uint32_t MDF_DFLT1CR_DFLTACTIVE_B_0x0 = 0;
        /** @brief Digital filter active */
    constexpr std::uint32_t MDF_DFLT1CR_DFLTACTIVE_B_0x1 = 1;

    /** @brief MDF digital filter configuration register 1 */
    using MDF_DFLT1CICR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Source data for the digital filter */
    using MDF_DFLT1CICR_DATSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x2: Stream coming from the ADCITF1 selected (value: 2)
     *          - B_0x3: Stream coming from the ADCITF2 selected (value: 3)
     */
        /** @brief Stream coming from the ADCITF1 selected */
    constexpr std::uint32_t MDF_DFLT1CICR_DATSRC_B_0x2 = 2;
        /** @brief Stream coming from the ADCITF2 selected */
    constexpr std::uint32_t MDF_DFLT1CICR_DATSRC_B_0x3 = 3;

    /** @brief Select the CIC mode */
    using MDF_DFLT1CICR_CICMOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CIC split in two filters and MCIC configured in FastSinc filter (value: 0)
     *          - B_0x1: CIC split in two filters and MCIC configured in Sincless thansup>1less than/sup> filter (value: 1)
     *          - B_0x2: CIC split in two filters and MCIC configured in Sincless thansup>2less than/sup> filter (value: 2)
     *          - B_0x3: CIC split in two filters and MCIC configured in Sincless thansup>3less than/sup> filter (value: 3)
     *          - B_0x4: CIC configured in single Sincless thansup>4less than/sup> filter (value: 4)
     */
        /** @brief CIC split in two filters and MCIC configured in FastSinc filter */
    constexpr std::uint32_t MDF_DFLT1CICR_CICMOD_B_0x0 = 0;
        /** @brief CIC split in two filters and MCIC configured in Sincless thansup>1less than/sup> filter */
    constexpr std::uint32_t MDF_DFLT1CICR_CICMOD_B_0x1 = 1;
        /** @brief CIC split in two filters and MCIC configured in Sincless thansup>2less than/sup> filter */
    constexpr std::uint32_t MDF_DFLT1CICR_CICMOD_B_0x2 = 2;
        /** @brief CIC split in two filters and MCIC configured in Sincless thansup>3less than/sup> filter */
    constexpr std::uint32_t MDF_DFLT1CICR_CICMOD_B_0x3 = 3;
        /** @brief CIC configured in single Sincless thansup>4less than/sup> filter */
    constexpr std::uint32_t MDF_DFLT1CICR_CICMOD_B_0x4 = 4;

    /** @brief CIC decimation ratio selection */
    using MDF_DFLT1CICR_MCICD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Decimation ratio is 2. (value: 0)
     *          - B_0x1: Decimation ratio is 2. (value: 1)
     */
        /** @brief Decimation ratio is 2. */
    constexpr std::uint32_t MDF_DFLT1CICR_MCICD_B_0x0 = 0;
        /** @brief Decimation ratio is 2. */
    constexpr std::uint32_t MDF_DFLT1CICR_MCICD_B_0x1 = 1;

    /** @brief CIC decimation ratio selection */
    using MDF_DFLT1CICR_MCICD8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Decimation ratio is 2. (value: 0)
     *          - B_0x1: Decimation ratio is 2. (value: 1)
     */
        /** @brief Decimation ratio is 2. */
    constexpr std::uint32_t MDF_DFLT1CICR_MCICD8_B_0x0 = 0;
        /** @brief Decimation ratio is 2. */
    constexpr std::uint32_t MDF_DFLT1CICR_MCICD8_B_0x1 = 1;

    /** @brief Scaling factor selection */
    using MDF_DFLT1CICR_SCALE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 0 dB (value: 0)
     *          - B_0x1: + 3.5 dB (value: 1)
     *          - B_0x2: + 6 dB or shift left by 1 bit (value: 2)
     *          - B_0x18: + 72 dB or shift left by 12 bits (value: 24)
     *          - B_0x20: - 48.2 dB or shift right by 8 bits (default value) (value: 32)
     *          - B_0x21: - 44.6 dB (value: 33)
     *          - B_0x22: - 42.1 dB or shift right by 7 bits (value: 34)
     *          - B_0x23: - 38.6 dB (value: 35)
     *          - B_0x2E: - 6 dB or shift right by 1 bit (value: 46)
     *          - B_0x2F: - 2.5 dB (value: 47)
     */
        /** @brief 0 dB */
    constexpr std::uint32_t MDF_DFLT1CICR_SCALE_B_0x0 = 0;
        /** @brief + 3.5 dB */
    constexpr std::uint32_t MDF_DFLT1CICR_SCALE_B_0x1 = 1;
        /** @brief + 6 dB or shift left by 1 bit */
    constexpr std::uint32_t MDF_DFLT1CICR_SCALE_B_0x2 = 2;
        /** @brief + 72 dB or shift left by 12 bits */
    constexpr std::uint32_t MDF_DFLT1CICR_SCALE_B_0x18 = 24;
        /** @brief - 48.2 dB or shift right by 8 bits (default value) */
    constexpr std::uint32_t MDF_DFLT1CICR_SCALE_B_0x20 = 32;
        /** @brief - 44.6 dB */
    constexpr std::uint32_t MDF_DFLT1CICR_SCALE_B_0x21 = 33;
        /** @brief - 42.1 dB or shift right by 7 bits */
    constexpr std::uint32_t MDF_DFLT1CICR_SCALE_B_0x22 = 34;
        /** @brief - 38.6 dB */
    constexpr std::uint32_t MDF_DFLT1CICR_SCALE_B_0x23 = 35;
        /** @brief - 6 dB or shift right by 1 bit */
    constexpr std::uint32_t MDF_DFLT1CICR_SCALE_B_0x2E = 46;
        /** @brief - 2.5 dB */
    constexpr std::uint32_t MDF_DFLT1CICR_SCALE_B_0x2F = 47;

    /** @brief MDF reshape filter configuration register 1 */
    using MDF_DFLT1RSFR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x110, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reshaper filter bypass */
    using MDF_DFLT1RSFR_RSFLTBYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Reshape filter not bypassed (default value) (value: 0)
     *          - B_0x1: Reshape filter bypassed (value: 1)
     */
        /** @brief Reshape filter not bypassed (default value) */
    constexpr std::uint32_t MDF_DFLT1RSFR_RSFLTBYP_B_0x0 = 0;
        /** @brief Reshape filter bypassed */
    constexpr std::uint32_t MDF_DFLT1RSFR_RSFLTBYP_B_0x1 = 1;

    /** @brief Reshaper filter decimation ratio */
    using MDF_DFLT1RSFR_RSFLTD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Decimation ratio is 4 (default value). (value: 0)
     *          - B_0x1: Decimation ratio is 1. (value: 1)
     */
        /** @brief Decimation ratio is 4 (default value). */
    constexpr std::uint32_t MDF_DFLT1RSFR_RSFLTD_B_0x0 = 0;
        /** @brief Decimation ratio is 1. */
    constexpr std::uint32_t MDF_DFLT1RSFR_RSFLTD_B_0x1 = 1;

    /** @brief High-pass filter bypass */
    using MDF_DFLT1RSFR_HPFBYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HPF not bypassed (default value) (value: 0)
     *          - B_0x1: HPF bypassed (value: 1)
     */
        /** @brief HPF not bypassed (default value) */
    constexpr std::uint32_t MDF_DFLT1RSFR_HPFBYP_B_0x0 = 0;
        /** @brief HPF bypassed */
    constexpr std::uint32_t MDF_DFLT1RSFR_HPFBYP_B_0x1 = 1;

    /** @brief High-pass filter cut-off frequency */
    using MDF_DFLT1RSFR_HPFC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Cut-off frequency = 0.000625 x Fless thansub>PCMless than/sub> (value: 0)
     *          - B_0x1: Cut-off frequency = 0.00125 x Fless thansub>PCMless than/sub> (value: 1)
     *          - B_0x2: Cut-off frequency = 0.00250 x Fless thansub>PCMless than/sub> (value: 2)
     *          - B_0x3: Cut-off frequency = 0.00950 x Fless thansub>PCMless than/sub> (value: 3)
     */
        /** @brief Cut-off frequency = 0.000625 x Fless thansub>PCMless than/sub> */
    constexpr std::uint32_t MDF_DFLT1RSFR_HPFC_B_0x0 = 0;
        /** @brief Cut-off frequency = 0.00125 x Fless thansub>PCMless than/sub> */
    constexpr std::uint32_t MDF_DFLT1RSFR_HPFC_B_0x1 = 1;
        /** @brief Cut-off frequency = 0.00250 x Fless thansub>PCMless than/sub> */
    constexpr std::uint32_t MDF_DFLT1RSFR_HPFC_B_0x2 = 2;
        /** @brief Cut-off frequency = 0.00950 x Fless thansub>PCMless than/sub> */
    constexpr std::uint32_t MDF_DFLT1RSFR_HPFC_B_0x3 = 3;

    /** @brief MDF integrator configuration register 1 */
    using MDF_DFLT1INTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x114, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Integrator output division */
    using MDF_DFLT1INTR_INTDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The integrator data outputs are divided by 128 (default value). (value: 0)
     *          - B_0x1: The integrator data outputs are divided by 32. (value: 1)
     *          - B_0x2: The integrator data outputs are divided by 4. (value: 2)
     *          - B_0x3: The integrator data outputs are not divided. (value: 3)
     */
        /** @brief The integrator data outputs are divided by 128 (default value). */
    constexpr std::uint32_t MDF_DFLT1INTR_INTDIV_B_0x0 = 0;
        /** @brief The integrator data outputs are divided by 32. */
    constexpr std::uint32_t MDF_DFLT1INTR_INTDIV_B_0x1 = 1;
        /** @brief The integrator data outputs are divided by 4. */
    constexpr std::uint32_t MDF_DFLT1INTR_INTDIV_B_0x2 = 2;
        /** @brief The integrator data outputs are not divided. */
    constexpr std::uint32_t MDF_DFLT1INTR_INTDIV_B_0x3 = 3;

    /** @brief Integration value selection */
    using MDF_DFLT1INTR_INTVAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The integration value is 1, meaning bypass mode (default after reset). (value: 0)
     *          - B_0x1: The integration value is 2. (value: 1)
     */
        /** @brief The integration value is 1, meaning bypass mode (default after reset). */
    constexpr std::uint32_t MDF_DFLT1INTR_INTVAL_B_0x0 = 0;
        /** @brief The integration value is 2. */
    constexpr std::uint32_t MDF_DFLT1INTR_INTVAL_B_0x1 = 1;

    /** @brief MDF out-of limit detector control register 1 */
    using MDF_OLD1CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x118, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OLDx enable */
    using MDF_OLD1CR_OLDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OLDx disabled (default value) (value: 0)
     *          - B_0x1: OLDx enabled, including the ACIC filter working in continuous mode (value: 1)
     */
        /** @brief OLDx disabled (default value) */
    constexpr std::uint32_t MDF_OLD1CR_OLDEN_B_0x0 = 0;
        /** @brief OLDx enabled, including the ACIC filter working in continuous mode */
    constexpr std::uint32_t MDF_OLD1CR_OLDEN_B_0x1 = 1;

    /** @brief Threshold In band */
    using MDF_OLD1CR_THINB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The OLDx generates an event if the signal is lower than OLDTHL or higher than OLDTHH (default value). (value: 0)
     *          - B_0x1: The OLDx generates an event if the signal is lower than OLDTHH and higher than OLDTHL (value: 1)
     */
        /** @brief The OLDx generates an event if the signal is lower than OLDTHL or higher than OLDTHH (default value). */
    constexpr std::uint32_t MDF_OLD1CR_THINB_B_0x0 = 0;
        /** @brief The OLDx generates an event if the signal is lower than OLDTHH and higher than OLDTHL */
    constexpr std::uint32_t MDF_OLD1CR_THINB_B_0x1 = 1;

    /** @brief Break signal assignment for out-of limit detector */
    using MDF_OLD1CR_BKOLD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OLDx CIC order selection */
    using MDF_OLD1CR_ACICN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FastSinc filter type (value: 0)
     *          - B_0x1: Sincless thansup>1less than/sup> filter type (value: 1)
     *          - B_0x2: Sincless thansup>2less than/sup> filter type (value: 2)
     *          - B_0x3: Sincless thansup>3less than/sup> filter type (value: 3)
     */
        /** @brief FastSinc filter type */
    constexpr std::uint32_t MDF_OLD1CR_ACICN_B_0x0 = 0;
        /** @brief Sincless thansup>1less than/sup> filter type */
    constexpr std::uint32_t MDF_OLD1CR_ACICN_B_0x1 = 1;
        /** @brief Sincless thansup>2less than/sup> filter type */
    constexpr std::uint32_t MDF_OLD1CR_ACICN_B_0x2 = 2;
        /** @brief Sincless thansup>3less than/sup> filter type */
    constexpr std::uint32_t MDF_OLD1CR_ACICN_B_0x3 = 3;

    /** @brief OLDx CIC decimation ratio selection */
    using MDF_OLD1CR_ACICD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Decimation ratio is 1. (value: 0)
     *          - B_0x1: Decimation ratio is 2. (value: 1)
     */
        /** @brief Decimation ratio is 1. */
    constexpr std::uint32_t MDF_OLD1CR_ACICD_B_0x0 = 0;
        /** @brief Decimation ratio is 2. */
    constexpr std::uint32_t MDF_OLD1CR_ACICD_B_0x1 = 1;

    /** @brief OLDx active flag */
    using MDF_OLD1CR_OLDACTIVE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OLDx not active and can be configured if needed (value: 0)
     *          - B_0x1: OLDx active and protected fields cannot be configured (value: 1)
     */
        /** @brief OLDx not active and can be configured if needed */
    constexpr std::uint32_t MDF_OLD1CR_OLDACTIVE_B_0x0 = 0;
        /** @brief OLDx active and protected fields cannot be configured */
    constexpr std::uint32_t MDF_OLD1CR_OLDACTIVE_B_0x1 = 1;

    /** @brief MDF OLD1 low threshold register 1 */
    using MDF_OLD1THLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x11C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OLD low threshold value */
    using MDF_OLD1THLR_OLDTHL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 26, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDF OLD1 high threshold register 1 */
    using MDF_OLD1THHR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x120, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OLDx high threshold value */
    using MDF_OLD1THHR_OLDTHH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 26, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDF delay control register 1 */
    using MDF_DLY1CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x124, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Delay to apply to a bitstream */
    using MDF_DLY1CR_SKPDLY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No input sample skipped (value: 0)
     *          - B_0x1: 1 input sample skipped (value: 1)
     */
        /** @brief No input sample skipped */
    constexpr std::uint32_t MDF_DLY1CR_SKPDLY_B_0x0 = 0;
        /** @brief 1 input sample skipped */
    constexpr std::uint32_t MDF_DLY1CR_SKPDLY_B_0x1 = 1;

    /** @brief Skip busy flag */
    using MDF_DLY1CR_SKPBF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MDF ready to accept a new value into SKPDLY[6:0] (value: 0)
     *          - B_0x1: Last valid SKPDLY[6:0] still under processing (value: 1)
     */
        /** @brief MDF ready to accept a new value into SKPDLY[6:0] */
    constexpr std::uint32_t MDF_DLY1CR_SKPBF_B_0x0 = 0;
        /** @brief Last valid SKPDLY[6:0] still under processing */
    constexpr std::uint32_t MDF_DLY1CR_SKPBF_B_0x1 = 1;

    /** @brief MDF short circuit detector control register 1 */
    using MDF_SCD1CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x128, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SCDx enable */
    using MDF_SCD1CR_SCDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SCDx disabled (value: 0)
     *          - B_0x1: SSCDx enabled, (value: 1)
     */
        /** @brief SCDx disabled */
    constexpr std::uint32_t MDF_SCD1CR_SCDEN_B_0x0 = 0;
        /** @brief SSCDx enabled, */
    constexpr std::uint32_t MDF_SCD1CR_SCDEN_B_0x1 = 1;

    /** @brief Break signal assignment for short circuit detector */
    using MDF_SCD1CR_BKSCD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SCDx threshold */
    using MDF_SCD1CR_SCDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 2 consecutive 1's or 0's generate an event. (value: 0)
     *          - B_0x1: 2 consecutive 1's or 0's generate an event. (value: 1)
     */
        /** @brief 2 consecutive 1's or 0's generate an event. */
    constexpr std::uint32_t MDF_SCD1CR_SCDT_B_0x0 = 0;
        /** @brief 2 consecutive 1's or 0's generate an event. */
    constexpr std::uint32_t MDF_SCD1CR_SCDT_B_0x1 = 1;

    /** @brief SCDx active flag */
    using MDF_SCD1CR_SCDACTIVE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SCDx not active and can be configured if needed (value: 0)
     *          - B_0x1: SCDx active and protected fields cannot be configured (value: 1)
     */
        /** @brief SCDx not active and can be configured if needed */
    constexpr std::uint32_t MDF_SCD1CR_SCDACTIVE_B_0x0 = 0;
        /** @brief SCDx active and protected fields cannot be configured */
    constexpr std::uint32_t MDF_SCD1CR_SCDACTIVE_B_0x1 = 1;

    /** @brief MDF DFLT1 interrupt enable register 1 */
    using MDF_DFLT1IER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x12C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RXFIFO threshold interrupt enable */
    using MDF_DFLT1IER_FTHIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RXFIFO threshold interrupt disabled (value: 0)
     *          - B_0x1: RXFIFO threshold interrupt enabled (value: 1)
     */
        /** @brief RXFIFO threshold interrupt disabled */
    constexpr std::uint32_t MDF_DFLT1IER_FTHIE_B_0x0 = 0;
        /** @brief RXFIFO threshold interrupt enabled */
    constexpr std::uint32_t MDF_DFLT1IER_FTHIE_B_0x1 = 1;

    /** @brief Data overflow interrupt enable */
    using MDF_DFLT1IER_DOVRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Data overflow interrupt disabled (value: 0)
     *          - B_0x1: Data overflow interrupt enabled (value: 1)
     */
        /** @brief Data overflow interrupt disabled */
    constexpr std::uint32_t MDF_DFLT1IER_DOVRIE_B_0x0 = 0;
        /** @brief Data overflow interrupt enabled */
    constexpr std::uint32_t MDF_DFLT1IER_DOVRIE_B_0x1 = 1;

    /** @brief Snapshot data ready interrupt enable */
    using MDF_DFLT1IER_SSDRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Snapshot data ready interrupt disabled (value: 0)
     *          - B_0x1: Snapshot data ready interrupt enabled (value: 1)
     */
        /** @brief Snapshot data ready interrupt disabled */
    constexpr std::uint32_t MDF_DFLT1IER_SSDRIE_B_0x0 = 0;
        /** @brief Snapshot data ready interrupt enabled */
    constexpr std::uint32_t MDF_DFLT1IER_SSDRIE_B_0x1 = 1;

    /** @brief OLDx interrupt enable */
    using MDF_DFLT1IER_OLDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OLDx event interrupt disabled (value: 0)
     *          - B_0x1: OLDx event interrupt enabled (value: 1)
     */
        /** @brief OLDx event interrupt disabled */
    constexpr std::uint32_t MDF_DFLT1IER_OLDIE_B_0x0 = 0;
        /** @brief OLDx event interrupt enabled */
    constexpr std::uint32_t MDF_DFLT1IER_OLDIE_B_0x1 = 1;

    /** @brief Snapshot overrun interrupt enable */
    using MDF_DFLT1IER_SSOVRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Snapshot overrun interrupt disabled (value: 0)
     *          - B_0x1: Snapshot overrun interrupt enabled (value: 1)
     */
        /** @brief Snapshot overrun interrupt disabled */
    constexpr std::uint32_t MDF_DFLT1IER_SSOVRIE_B_0x0 = 0;
        /** @brief Snapshot overrun interrupt enabled */
    constexpr std::uint32_t MDF_DFLT1IER_SSOVRIE_B_0x1 = 1;

    /** @brief SCDx interrupt enable */
    using MDF_DFLT1IER_SCDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SCDx interrupt disabled (value: 0)
     *          - B_0x1: SCDx interrupt enabled (value: 1)
     */
        /** @brief SCDx interrupt disabled */
    constexpr std::uint32_t MDF_DFLT1IER_SCDIE_B_0x0 = 0;
        /** @brief SCDx interrupt enabled */
    constexpr std::uint32_t MDF_DFLT1IER_SCDIE_B_0x1 = 1;

    /** @brief Saturation detection interrupt enable */
    using MDF_DFLT1IER_SATIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Saturation interrupt disabled (value: 0)
     *          - B_0x1: Saturation interrupt enabled (value: 1)
     */
        /** @brief Saturation interrupt disabled */
    constexpr std::uint32_t MDF_DFLT1IER_SATIE_B_0x0 = 0;
        /** @brief Saturation interrupt enabled */
    constexpr std::uint32_t MDF_DFLT1IER_SATIE_B_0x1 = 1;

    /** @brief Clock absence detection interrupt enable */
    using MDF_DFLT1IER_CKABIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Clock absence interrupt disabled (value: 0)
     *          - B_0x1: Clock absence interrupt enabled (value: 1)
     */
        /** @brief Clock absence interrupt disabled */
    constexpr std::uint32_t MDF_DFLT1IER_CKABIE_B_0x0 = 0;
        /** @brief Clock absence interrupt enabled */
    constexpr std::uint32_t MDF_DFLT1IER_CKABIE_B_0x1 = 1;

    /** @brief Reshape filter overrun interrupt enable */
    using MDF_DFLT1IER_RFOVRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Reshape filter overrun interrupt disabled (value: 0)
     *          - B_0x1: Reshape filter overrun interrupt enabled (value: 1)
     */
        /** @brief Reshape filter overrun interrupt disabled */
    constexpr std::uint32_t MDF_DFLT1IER_RFOVRIE_B_0x0 = 0;
        /** @brief Reshape filter overrun interrupt enabled */
    constexpr std::uint32_t MDF_DFLT1IER_RFOVRIE_B_0x1 = 1;

    /** @brief MDF DFLT1 interrupt status register 1 */
    using MDF_DFLT1ISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x130, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RXFIFO threshold flag */
    using MDF_DFLT1ISR_FTHF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RXFIFO threshold not reached (value: 0)
     *          - B_0x1: RXFIFO threshold reached (value: 1)
     */
        /** @brief RXFIFO threshold not reached */
    constexpr std::uint32_t MDF_DFLT1ISR_FTHF_B_0x0 = 0;
        /** @brief RXFIFO threshold reached */
    constexpr std::uint32_t MDF_DFLT1ISR_FTHF_B_0x1 = 1;

    /** @brief Data overflow flag */
    using MDF_DFLT1ISR_DOVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Read 0 means that no overflow is detected. Write 0 has no effect. (value: 0)
     *          - B_0x1: Read 1 means that an overflow is detected; Write 1 clears this flag. (value: 1)
     */
        /** @brief Read 0 means that no overflow is detected. Write 0 has no effect. */
    constexpr std::uint32_t MDF_DFLT1ISR_DOVRF_B_0x0 = 0;
        /** @brief Read 1 means that an overflow is detected; Write 1 clears this flag. */
    constexpr std::uint32_t MDF_DFLT1ISR_DOVRF_B_0x1 = 1;

    /** @brief Snapshot data ready flag */
    using MDF_DFLT1ISR_SSDRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Read 0 means that no data is available. Write 0 has no effect. (value: 0)
     *          - B_0x1: Read 1 means that a new data is available. Write 1 clears this flag. (value: 1)
     */
        /** @brief Read 0 means that no data is available. Write 0 has no effect. */
    constexpr std::uint32_t MDF_DFLT1ISR_SSDRF_B_0x0 = 0;
        /** @brief Read 1 means that a new data is available. Write 1 clears this flag. */
    constexpr std::uint32_t MDF_DFLT1ISR_SSDRF_B_0x1 = 1;

    /** @brief RXFIFO not-empty flag */
    using MDF_DFLT1ISR_RXNEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RXFIFO empty (value: 0)
     *          - B_0x1: RXFIFO not empty (value: 1)
     */
        /** @brief RXFIFO empty */
    constexpr std::uint32_t MDF_DFLT1ISR_RXNEF_B_0x0 = 0;
        /** @brief RXFIFO not empty */
    constexpr std::uint32_t MDF_DFLT1ISR_RXNEF_B_0x1 = 1;

    /** @brief OLDx flag */
    using MDF_DFLT1ISR_OLDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Read 0 means that no OLDx event is detected. Write 0 has no effect. (value: 0)
     *          - B_0x1: Read 1 means that an OLDx event is detected Write 1 clears THHF, THLF and OLDF. (value: 1)
     */
        /** @brief Read 0 means that no OLDx event is detected. Write 0 has no effect. */
    constexpr std::uint32_t MDF_DFLT1ISR_OLDF_B_0x0 = 0;
        /** @brief Read 1 means that an OLDx event is detected Write 1 clears THHF, THLF and OLDF. */
    constexpr std::uint32_t MDF_DFLT1ISR_OLDF_B_0x1 = 1;

    /** @brief Low-threshold status flag */
    using MDF_DFLT1ISR_THLF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The signal was higher than OLDTHL when the last OLDx event occurred. (value: 0)
     *          - B_0x1: The signal was lower than OLDTHL when the last OLDx event occurred. (value: 1)
     */
        /** @brief The signal was higher than OLDTHL when the last OLDx event occurred. */
    constexpr std::uint32_t MDF_DFLT1ISR_THLF_B_0x0 = 0;
        /** @brief The signal was lower than OLDTHL when the last OLDx event occurred. */
    constexpr std::uint32_t MDF_DFLT1ISR_THLF_B_0x1 = 1;

    /** @brief High-threshold status flag */
    using MDF_DFLT1ISR_THHF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The signal was lower than OLDTHH when the last OLDx event occurred. (value: 0)
     *          - B_0x1: The signal was higher than OLDTHH when the last OLDx event occurred. (value: 1)
     */
        /** @brief The signal was lower than OLDTHH when the last OLDx event occurred. */
    constexpr std::uint32_t MDF_DFLT1ISR_THHF_B_0x0 = 0;
        /** @brief The signal was higher than OLDTHH when the last OLDx event occurred. */
    constexpr std::uint32_t MDF_DFLT1ISR_THHF_B_0x1 = 1;

    /** @brief Snapshot overrun flag */
    using MDF_DFLT1ISR_SSOVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Read 0 means that no snapshot overrun event is detected. Write 0 has no effect. (value: 0)
     *          - B_0x1: Read 1 means that a snapshot overrun event is detected. Write 1 clears this flag. (value: 1)
     */
        /** @brief Read 0 means that no snapshot overrun event is detected. Write 0 has no effect. */
    constexpr std::uint32_t MDF_DFLT1ISR_SSOVRF_B_0x0 = 0;
        /** @brief Read 1 means that a snapshot overrun event is detected. Write 1 clears this flag. */
    constexpr std::uint32_t MDF_DFLT1ISR_SSOVRF_B_0x1 = 1;

    /** @brief Short-circuit detector flag */
    using MDF_DFLT1ISR_SCDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Read 0 means that no SCD event is detected. Write 0 has no effect. (value: 0)
     *          - B_0x1: Read 1 means that a SCD event is detected. Write 1 clears this flag. (value: 1)
     */
        /** @brief Read 0 means that no SCD event is detected. Write 0 has no effect. */
    constexpr std::uint32_t MDF_DFLT1ISR_SCDF_B_0x0 = 0;
        /** @brief Read 1 means that a SCD event is detected. Write 1 clears this flag. */
    constexpr std::uint32_t MDF_DFLT1ISR_SCDF_B_0x1 = 1;

    /** @brief Saturation detection flag */
    using MDF_DFLT1ISR_SATF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Read 0 means that no saturation is detected. Write 0 has no effect. (value: 0)
     *          - B_0x1: Read 1 means that a saturation is detected. Write 1 clears this flag. (value: 1)
     */
        /** @brief Read 0 means that no saturation is detected. Write 0 has no effect. */
    constexpr std::uint32_t MDF_DFLT1ISR_SATF_B_0x0 = 0;
        /** @brief Read 1 means that a saturation is detected. Write 1 clears this flag. */
    constexpr std::uint32_t MDF_DFLT1ISR_SATF_B_0x1 = 1;

    /** @brief Clock absence detection flag */
    using MDF_DFLT1ISR_CKABF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Read 0 means that no clock absence is detected. Write 0 has no effect. (value: 0)
     *          - B_0x1: Read 1 means that a clock absence is detected. Write 1 clears this flag. (value: 1)
     */
        /** @brief Read 0 means that no clock absence is detected. Write 0 has no effect. */
    constexpr std::uint32_t MDF_DFLT1ISR_CKABF_B_0x0 = 0;
        /** @brief Read 1 means that a clock absence is detected. Write 1 clears this flag. */
    constexpr std::uint32_t MDF_DFLT1ISR_CKABF_B_0x1 = 1;

    /** @brief Reshape filter overrun detection flag */
    using MDF_DFLT1ISR_RFOVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Read 0 means that no reshape filter overrun is detected. Write 0 has no effect. (value: 0)
     *          - B_0x1: Read 1 means that reshape filter overrun is detected. Write 1 clears this flag. (value: 1)
     */
        /** @brief Read 0 means that no reshape filter overrun is detected. Write 0 has no effect. */
    constexpr std::uint32_t MDF_DFLT1ISR_RFOVRF_B_0x0 = 0;
        /** @brief Read 1 means that reshape filter overrun is detected. Write 1 clears this flag. */
    constexpr std::uint32_t MDF_DFLT1ISR_RFOVRF_B_0x1 = 1;

    /** @brief MDF offset error compensation control register 1 */
    using MDF_OEC1CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x134, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Offset error compensation */
    using MDF_OEC1CR_OFFSET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 26, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDF snapshot data register 1 */
    using MDF_SNPS1DR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x16C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Contains the MCIC decimation counter value when the last trigger event occurs (MCIC_CNT) */
    using MDF_SNPS1DR_MCICDC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extended data size */
    using MDF_SNPS1DR_EXTSDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Contains the 16 MSB of the last valid data processed by the digital filter. */
    using MDF_SNPS1DR_SDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDF digital filter data register 1 */
    using MDF_DFLT1DR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x170, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data processed by digital filter */
    using MDF_DFLT1DR_DR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDF serial interface control register 2 */
    using MDF_SITF2CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x180, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Serial interface enable */
    using MDF_SITF2CR_SITFEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Serial interface disabled (value: 0)
     *          - B_0x1: Serial interface enabled (value: 1)
     */
        /** @brief Serial interface disabled */
    constexpr std::uint32_t MDF_SITF2CR_SITFEN_B_0x0 = 0;
        /** @brief Serial interface enabled */
    constexpr std::uint32_t MDF_SITF2CR_SITFEN_B_0x1 = 1;

    /** @brief Serial clock source */
    using MDF_SITF2CR_SCKSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Serial clock source is MDF_CCK0. (value: 0)
     *          - B_0x1: Serial clock source is MDF_CCK1. (value: 1)
     */
        /** @brief Serial clock source is MDF_CCK0. */
    constexpr std::uint32_t MDF_SITF2CR_SCKSRC_B_0x0 = 0;
        /** @brief Serial clock source is MDF_CCK1. */
    constexpr std::uint32_t MDF_SITF2CR_SCKSRC_B_0x1 = 1;

    /** @brief Serial interface type */
    using MDF_SITF2CR_SITFMOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LF_MASTER SPI mode (value: 0)
     *          - B_0x1: Normal SPI mode (value: 1)
     *          - B_0x2: Manchester mode: rising edge = logic 0, falling edge = logic 1 (value: 2)
     *          - B_0x3: Manchester mode: rising edge = logic 1, falling edge = logic 0 (value: 3)
     */
        /** @brief LF_MASTER SPI mode */
    constexpr std::uint32_t MDF_SITF2CR_SITFMOD_B_0x0 = 0;
        /** @brief Normal SPI mode */
    constexpr std::uint32_t MDF_SITF2CR_SITFMOD_B_0x1 = 1;
        /** @brief Manchester mode: rising edge = logic 0, falling edge = logic 1 */
    constexpr std::uint32_t MDF_SITF2CR_SITFMOD_B_0x2 = 2;
        /** @brief Manchester mode: rising edge = logic 1, falling edge = logic 0 */
    constexpr std::uint32_t MDF_SITF2CR_SITFMOD_B_0x3 = 3;

    /** @brief Manchester symbol threshold/SPI threshold */
    using MDF_SITF2CR_STH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Serial interface active flag */
    using MDF_SITF2CR_SITFACTIVE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The serial interface is not active and can be configured if needed. (value: 0)
     *          - B_0x1: The serial interface is active and protected fields cannot be configured. (value: 1)
     */
        /** @brief The serial interface is not active and can be configured if needed. */
    constexpr std::uint32_t MDF_SITF2CR_SITFACTIVE_B_0x0 = 0;
        /** @brief The serial interface is active and protected fields cannot be configured. */
    constexpr std::uint32_t MDF_SITF2CR_SITFACTIVE_B_0x1 = 1;

    /** @brief MDF bitstream matrix control register 2 */
    using MDF_BSMX2CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x184, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bitstream Selection */
    using MDF_BSMX2CR_BSSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: bs0_r provided to DFLTx and SCDx (value: 0)
     *          - B_0x1: bs0_f provided to DFLTx and SCDx (value: 1)
     *          - B_0x2: bs1_r provided to DFLTx and SCDx (if instantiated) (value: 2)
     *          - B_0x3: bs1_f provided to DFLTx and SCDx (if instantiated) (value: 3)
     *          - B_0x1E: bs15_r provided to DFLTx and SCDx (if instantiated) (value: 30)
     *          - B_0x1F: bs15_f provided to DFLTx and SCDx (if instantiated) (value: 31)
     */
        /** @brief bs0_r provided to DFLTx and SCDx */
    constexpr std::uint32_t MDF_BSMX2CR_BSSEL_B_0x0 = 0;
        /** @brief bs0_f provided to DFLTx and SCDx */
    constexpr std::uint32_t MDF_BSMX2CR_BSSEL_B_0x1 = 1;
        /** @brief bs1_r provided to DFLTx and SCDx (if instantiated) */
    constexpr std::uint32_t MDF_BSMX2CR_BSSEL_B_0x2 = 2;
        /** @brief bs1_f provided to DFLTx and SCDx (if instantiated) */
    constexpr std::uint32_t MDF_BSMX2CR_BSSEL_B_0x3 = 3;
        /** @brief bs15_r provided to DFLTx and SCDx (if instantiated) */
    constexpr std::uint32_t MDF_BSMX2CR_BSSEL_B_0x1E = 30;
        /** @brief bs15_f provided to DFLTx and SCDx (if instantiated) */
    constexpr std::uint32_t MDF_BSMX2CR_BSSEL_B_0x1F = 31;

    /** @brief BSMX active flag */
    using MDF_BSMX2CR_BSMXACTIVE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BSMX is not active and can be configured if needed. (value: 0)
     *          - B_0x1: BSMX is active and protected fields cannot be configured. (value: 1)
     */
        /** @brief BSMX is not active and can be configured if needed. */
    constexpr std::uint32_t MDF_BSMX2CR_BSMXACTIVE_B_0x0 = 0;
        /** @brief BSMX is active and protected fields cannot be configured. */
    constexpr std::uint32_t MDF_BSMX2CR_BSMXACTIVE_B_0x1 = 1;

    /** @brief MDF digital filter control register 2 */
    using MDF_DFLT2CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x188, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Digital filter enable */
    using MDF_DFLT2CR_DFLTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Acquisition immediately stopped (value: 0)
     *          - B_0x1: Acquisition immediately started if ACQMOD[2:0] = 00x or 101, or acquisition started when the proper trigger event occurs if ACQMOD[2:0] = 01x or 100. (value: 1)
     */
        /** @brief Acquisition immediately stopped */
    constexpr std::uint32_t MDF_DFLT2CR_DFLTEN_B_0x0 = 0;
        /** @brief Acquisition immediately started if ACQMOD[2:0] = 00x or 101, or acquisition started when the proper trigger event occurs if ACQMOD[2:0] = 01x or 100. */
    constexpr std::uint32_t MDF_DFLT2CR_DFLTEN_B_0x1 = 1;

    /** @brief DMA requests enable */
    using MDF_DFLT2CR_DMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DMA interface for the corresponding digital filter disabled (value: 0)
     *          - B_0x1: DMA interface for the corresponding digital filter enabled (value: 1)
     */
        /** @brief DMA interface for the corresponding digital filter disabled */
    constexpr std::uint32_t MDF_DFLT2CR_DMAEN_B_0x0 = 0;
        /** @brief DMA interface for the corresponding digital filter enabled */
    constexpr std::uint32_t MDF_DFLT2CR_DMAEN_B_0x1 = 1;

    /** @brief RXFIFO Threshold selection */
    using MDF_DFLT2CR_FTH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RXFIFO threshold event generated when the RXFIFO is not empty (value: 0)
     *          - B_0x1: RXFIFO threshold event generated when the RXFIFO is half-full (value: 1)
     */
        /** @brief RXFIFO threshold event generated when the RXFIFO is not empty */
    constexpr std::uint32_t MDF_DFLT2CR_FTH_B_0x0 = 0;
        /** @brief RXFIFO threshold event generated when the RXFIFO is half-full */
    constexpr std::uint32_t MDF_DFLT2CR_FTH_B_0x1 = 1;

    /** @brief Digital filter trigger mode */
    using MDF_DFLT2CR_ACQMOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Asynchronous continuous acquisition mode (value: 0)
     *          - B_0x1: Asynchronous single-shot acquisition mode (value: 1)
     *          - B_0x2: Synchronous continuous acquisition mode (value: 2)
     *          - B_0x3: Synchronous, single-shot acquisition mode (value: 3)
     *          - B_0x4: Window continuous acquisition mode (value: 4)
     *          - B_0x5: Synchronous snapshot mode (value: 5)
     */
        /** @brief Asynchronous continuous acquisition mode */
    constexpr std::uint32_t MDF_DFLT2CR_ACQMOD_B_0x0 = 0;
        /** @brief Asynchronous single-shot acquisition mode */
    constexpr std::uint32_t MDF_DFLT2CR_ACQMOD_B_0x1 = 1;
        /** @brief Synchronous continuous acquisition mode */
    constexpr std::uint32_t MDF_DFLT2CR_ACQMOD_B_0x2 = 2;
        /** @brief Synchronous, single-shot acquisition mode */
    constexpr std::uint32_t MDF_DFLT2CR_ACQMOD_B_0x3 = 3;
        /** @brief Window continuous acquisition mode */
    constexpr std::uint32_t MDF_DFLT2CR_ACQMOD_B_0x4 = 4;
        /** @brief Synchronous snapshot mode */
    constexpr std::uint32_t MDF_DFLT2CR_ACQMOD_B_0x5 = 5;

    /** @brief Digital filter trigger sensitivity selection */
    using MDF_DFLT2CR_TRGSENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: A rising edge event triggers the acquisition. (value: 0)
     *          - B_0x1: A falling edge even triggers the acquisition. (value: 1)
     */
        /** @brief A rising edge event triggers the acquisition. */
    constexpr std::uint32_t MDF_DFLT2CR_TRGSENS_B_0x0 = 0;
        /** @brief A falling edge even triggers the acquisition. */
    constexpr std::uint32_t MDF_DFLT2CR_TRGSENS_B_0x1 = 1;

    /** @brief Digital filter trigger signal selection */
    using MDF_DFLT2CR_TRGSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TRGO selected (value: 0)
     *          - B_0x1: OLDx event selected (value: 1)
     *          - B_0x2: mdf_trg[0] selected (value: 2)
     *          - B_0xF: mdf_trg[13] selected (value: 15)
     */
        /** @brief TRGO selected */
    constexpr std::uint32_t MDF_DFLT2CR_TRGSRC_B_0x0 = 0;
        /** @brief OLDx event selected */
    constexpr std::uint32_t MDF_DFLT2CR_TRGSRC_B_0x1 = 1;
        /** @brief mdf_trg[0] selected */
    constexpr std::uint32_t MDF_DFLT2CR_TRGSRC_B_0x2 = 2;
        /** @brief mdf_trg[13] selected */
    constexpr std::uint32_t MDF_DFLT2CR_TRGSRC_B_0xF = 15;

    /** @brief Snapshot data format */
    using MDF_DFLT2CR_SNPSFMT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Integrator counter (INT_CNT) not inserted into MDF_SNPSxDR, leaving a data resolution of 23 bits (value: 0)
     *          - B_0x1: Integrator counter (INT_CNT) inserted at position [15:9] of MDF_SNPSxDR, leaving a data resolution of 16 bits. (value: 1)
     */
        /** @brief Integrator counter (INT_CNT) not inserted into MDF_SNPSxDR, leaving a data resolution of 23 bits */
    constexpr std::uint32_t MDF_DFLT2CR_SNPSFMT_B_0x0 = 0;
        /** @brief Integrator counter (INT_CNT) inserted at position [15:9] of MDF_SNPSxDR, leaving a data resolution of 16 bits. */
    constexpr std::uint32_t MDF_DFLT2CR_SNPSFMT_B_0x1 = 1;

    /** @brief Number of samples to be discarded */
    using MDF_DFLT2CR_NBDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No sample discarded (value: 0)
     *          - B_0x1: 1 sample discarded (value: 1)
     */
        /** @brief No sample discarded */
    constexpr std::uint32_t MDF_DFLT2CR_NBDIS_B_0x0 = 0;
        /** @brief 1 sample discarded */
    constexpr std::uint32_t MDF_DFLT2CR_NBDIS_B_0x1 = 1;

    /** @brief Digital filter run status flag */
    using MDF_DFLT2CR_DFLTRUN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Digital filter not running and ready to accept a new trigger event (value: 0)
     *          - B_0x1: Digital filter running (value: 1)
     */
        /** @brief Digital filter not running and ready to accept a new trigger event */
    constexpr std::uint32_t MDF_DFLT2CR_DFLTRUN_B_0x0 = 0;
        /** @brief Digital filter running */
    constexpr std::uint32_t MDF_DFLT2CR_DFLTRUN_B_0x1 = 1;

    /** @brief Digital filter active flag */
    using MDF_DFLT2CR_DFLTACTIVE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Digital filter not active (can be re-enabled again, via DFLTEN, if needed) (value: 0)
     *          - B_0x1: Digital filter active (value: 1)
     */
        /** @brief Digital filter not active (can be re-enabled again, via DFLTEN, if needed) */
    constexpr std::uint32_t MDF_DFLT2CR_DFLTACTIVE_B_0x0 = 0;
        /** @brief Digital filter active */
    constexpr std::uint32_t MDF_DFLT2CR_DFLTACTIVE_B_0x1 = 1;

    /** @brief MDF digital filter configuration register 2 */
    using MDF_DFLT2CICR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Source data for the digital filter */
    using MDF_DFLT2CICR_DATSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x2: Stream coming from the ADCITF1 selected (value: 2)
     *          - B_0x3: Stream coming from the ADCITF2 selected (value: 3)
     */
        /** @brief Stream coming from the ADCITF1 selected */
    constexpr std::uint32_t MDF_DFLT2CICR_DATSRC_B_0x2 = 2;
        /** @brief Stream coming from the ADCITF2 selected */
    constexpr std::uint32_t MDF_DFLT2CICR_DATSRC_B_0x3 = 3;

    /** @brief Select the CIC mode */
    using MDF_DFLT2CICR_CICMOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CIC split in two filters and MCIC configured in FastSinc filter (value: 0)
     *          - B_0x1: CIC split in two filters and MCIC configured in Sincless thansup>1less than/sup> filter (value: 1)
     *          - B_0x2: CIC split in two filters and MCIC configured in Sincless thansup>2less than/sup> filter (value: 2)
     *          - B_0x3: CIC split in two filters and MCIC configured in Sincless thansup>3less than/sup> filter (value: 3)
     *          - B_0x4: CIC configured in single Sincless thansup>4less than/sup> filter (value: 4)
     */
        /** @brief CIC split in two filters and MCIC configured in FastSinc filter */
    constexpr std::uint32_t MDF_DFLT2CICR_CICMOD_B_0x0 = 0;
        /** @brief CIC split in two filters and MCIC configured in Sincless thansup>1less than/sup> filter */
    constexpr std::uint32_t MDF_DFLT2CICR_CICMOD_B_0x1 = 1;
        /** @brief CIC split in two filters and MCIC configured in Sincless thansup>2less than/sup> filter */
    constexpr std::uint32_t MDF_DFLT2CICR_CICMOD_B_0x2 = 2;
        /** @brief CIC split in two filters and MCIC configured in Sincless thansup>3less than/sup> filter */
    constexpr std::uint32_t MDF_DFLT2CICR_CICMOD_B_0x3 = 3;
        /** @brief CIC configured in single Sincless thansup>4less than/sup> filter */
    constexpr std::uint32_t MDF_DFLT2CICR_CICMOD_B_0x4 = 4;

    /** @brief CIC decimation ratio selection */
    using MDF_DFLT2CICR_MCICD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Decimation ratio is 2. (value: 0)
     *          - B_0x1: Decimation ratio is 2. (value: 1)
     */
        /** @brief Decimation ratio is 2. */
    constexpr std::uint32_t MDF_DFLT2CICR_MCICD_B_0x0 = 0;
        /** @brief Decimation ratio is 2. */
    constexpr std::uint32_t MDF_DFLT2CICR_MCICD_B_0x1 = 1;

    /** @brief CIC decimation ratio selection */
    using MDF_DFLT2CICR_MCICD8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Decimation ratio is 2. (value: 0)
     *          - B_0x1: Decimation ratio is 2. (value: 1)
     */
        /** @brief Decimation ratio is 2. */
    constexpr std::uint32_t MDF_DFLT2CICR_MCICD8_B_0x0 = 0;
        /** @brief Decimation ratio is 2. */
    constexpr std::uint32_t MDF_DFLT2CICR_MCICD8_B_0x1 = 1;

    /** @brief Scaling factor selection */
    using MDF_DFLT2CICR_SCALE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 0 dB (value: 0)
     *          - B_0x1: + 3.5 dB (value: 1)
     *          - B_0x2: + 6 dB or shift left by 1 bit (value: 2)
     *          - B_0x18: + 72 dB or shift left by 12 bits (value: 24)
     *          - B_0x20: - 48.2 dB or shift right by 8 bits (default value) (value: 32)
     *          - B_0x21: - 44.6 dB (value: 33)
     *          - B_0x22: - 42.1 dB or shift right by 7 bits (value: 34)
     *          - B_0x23: - 38.6 dB (value: 35)
     *          - B_0x2E: - 6 dB or shift right by 1 bit (value: 46)
     *          - B_0x2F: - 2.5 dB (value: 47)
     */
        /** @brief 0 dB */
    constexpr std::uint32_t MDF_DFLT2CICR_SCALE_B_0x0 = 0;
        /** @brief + 3.5 dB */
    constexpr std::uint32_t MDF_DFLT2CICR_SCALE_B_0x1 = 1;
        /** @brief + 6 dB or shift left by 1 bit */
    constexpr std::uint32_t MDF_DFLT2CICR_SCALE_B_0x2 = 2;
        /** @brief + 72 dB or shift left by 12 bits */
    constexpr std::uint32_t MDF_DFLT2CICR_SCALE_B_0x18 = 24;
        /** @brief - 48.2 dB or shift right by 8 bits (default value) */
    constexpr std::uint32_t MDF_DFLT2CICR_SCALE_B_0x20 = 32;
        /** @brief - 44.6 dB */
    constexpr std::uint32_t MDF_DFLT2CICR_SCALE_B_0x21 = 33;
        /** @brief - 42.1 dB or shift right by 7 bits */
    constexpr std::uint32_t MDF_DFLT2CICR_SCALE_B_0x22 = 34;
        /** @brief - 38.6 dB */
    constexpr std::uint32_t MDF_DFLT2CICR_SCALE_B_0x23 = 35;
        /** @brief - 6 dB or shift right by 1 bit */
    constexpr std::uint32_t MDF_DFLT2CICR_SCALE_B_0x2E = 46;
        /** @brief - 2.5 dB */
    constexpr std::uint32_t MDF_DFLT2CICR_SCALE_B_0x2F = 47;

    /** @brief MDF reshape filter configuration register 2 */
    using MDF_DFLT2RSFR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x190, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reshaper filter bypass */
    using MDF_DFLT2RSFR_RSFLTBYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Reshape filter not bypassed (default value) (value: 0)
     *          - B_0x1: Reshape filter bypassed (value: 1)
     */
        /** @brief Reshape filter not bypassed (default value) */
    constexpr std::uint32_t MDF_DFLT2RSFR_RSFLTBYP_B_0x0 = 0;
        /** @brief Reshape filter bypassed */
    constexpr std::uint32_t MDF_DFLT2RSFR_RSFLTBYP_B_0x1 = 1;

    /** @brief Reshaper filter decimation ratio */
    using MDF_DFLT2RSFR_RSFLTD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Decimation ratio is 4 (default value). (value: 0)
     *          - B_0x1: Decimation ratio is 1. (value: 1)
     */
        /** @brief Decimation ratio is 4 (default value). */
    constexpr std::uint32_t MDF_DFLT2RSFR_RSFLTD_B_0x0 = 0;
        /** @brief Decimation ratio is 1. */
    constexpr std::uint32_t MDF_DFLT2RSFR_RSFLTD_B_0x1 = 1;

    /** @brief High-pass filter bypass */
    using MDF_DFLT2RSFR_HPFBYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HPF not bypassed (default value) (value: 0)
     *          - B_0x1: HPF bypassed (value: 1)
     */
        /** @brief HPF not bypassed (default value) */
    constexpr std::uint32_t MDF_DFLT2RSFR_HPFBYP_B_0x0 = 0;
        /** @brief HPF bypassed */
    constexpr std::uint32_t MDF_DFLT2RSFR_HPFBYP_B_0x1 = 1;

    /** @brief High-pass filter cut-off frequency */
    using MDF_DFLT2RSFR_HPFC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Cut-off frequency = 0.000625 x Fless thansub>PCMless than/sub> (value: 0)
     *          - B_0x1: Cut-off frequency = 0.00125 x Fless thansub>PCMless than/sub> (value: 1)
     *          - B_0x2: Cut-off frequency = 0.00250 x Fless thansub>PCMless than/sub> (value: 2)
     *          - B_0x3: Cut-off frequency = 0.00950 x Fless thansub>PCMless than/sub> (value: 3)
     */
        /** @brief Cut-off frequency = 0.000625 x Fless thansub>PCMless than/sub> */
    constexpr std::uint32_t MDF_DFLT2RSFR_HPFC_B_0x0 = 0;
        /** @brief Cut-off frequency = 0.00125 x Fless thansub>PCMless than/sub> */
    constexpr std::uint32_t MDF_DFLT2RSFR_HPFC_B_0x1 = 1;
        /** @brief Cut-off frequency = 0.00250 x Fless thansub>PCMless than/sub> */
    constexpr std::uint32_t MDF_DFLT2RSFR_HPFC_B_0x2 = 2;
        /** @brief Cut-off frequency = 0.00950 x Fless thansub>PCMless than/sub> */
    constexpr std::uint32_t MDF_DFLT2RSFR_HPFC_B_0x3 = 3;

    /** @brief MDF integrator configuration register 2 */
    using MDF_DFLT2INTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x194, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Integrator output division */
    using MDF_DFLT2INTR_INTDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The integrator data outputs are divided by 128 (default value). (value: 0)
     *          - B_0x1: The integrator data outputs are divided by 32. (value: 1)
     *          - B_0x2: The integrator data outputs are divided by 4. (value: 2)
     *          - B_0x3: The integrator data outputs are not divided. (value: 3)
     */
        /** @brief The integrator data outputs are divided by 128 (default value). */
    constexpr std::uint32_t MDF_DFLT2INTR_INTDIV_B_0x0 = 0;
        /** @brief The integrator data outputs are divided by 32. */
    constexpr std::uint32_t MDF_DFLT2INTR_INTDIV_B_0x1 = 1;
        /** @brief The integrator data outputs are divided by 4. */
    constexpr std::uint32_t MDF_DFLT2INTR_INTDIV_B_0x2 = 2;
        /** @brief The integrator data outputs are not divided. */
    constexpr std::uint32_t MDF_DFLT2INTR_INTDIV_B_0x3 = 3;

    /** @brief Integration value selection */
    using MDF_DFLT2INTR_INTVAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The integration value is 1, meaning bypass mode (default after reset). (value: 0)
     *          - B_0x1: The integration value is 2. (value: 1)
     */
        /** @brief The integration value is 1, meaning bypass mode (default after reset). */
    constexpr std::uint32_t MDF_DFLT2INTR_INTVAL_B_0x0 = 0;
        /** @brief The integration value is 2. */
    constexpr std::uint32_t MDF_DFLT2INTR_INTVAL_B_0x1 = 1;

    /** @brief MDF out-of limit detector control register 2 */
    using MDF_OLD2CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x198, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OLDx enable */
    using MDF_OLD2CR_OLDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OLDx disabled (default value) (value: 0)
     *          - B_0x1: OLDx enabled, including the ACIC filter working in continuous mode (value: 1)
     */
        /** @brief OLDx disabled (default value) */
    constexpr std::uint32_t MDF_OLD2CR_OLDEN_B_0x0 = 0;
        /** @brief OLDx enabled, including the ACIC filter working in continuous mode */
    constexpr std::uint32_t MDF_OLD2CR_OLDEN_B_0x1 = 1;

    /** @brief Threshold In band */
    using MDF_OLD2CR_THINB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The OLDx generates an event if the signal is lower than OLDTHL or higher than OLDTHH (default value). (value: 0)
     *          - B_0x1: The OLDx generates an event if the signal is lower than OLDTHH and higher than OLDTHL (value: 1)
     */
        /** @brief The OLDx generates an event if the signal is lower than OLDTHL or higher than OLDTHH (default value). */
    constexpr std::uint32_t MDF_OLD2CR_THINB_B_0x0 = 0;
        /** @brief The OLDx generates an event if the signal is lower than OLDTHH and higher than OLDTHL */
    constexpr std::uint32_t MDF_OLD2CR_THINB_B_0x1 = 1;

    /** @brief Break signal assignment for out-of limit detector */
    using MDF_OLD2CR_BKOLD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OLDx CIC order selection */
    using MDF_OLD2CR_ACICN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FastSinc filter type (value: 0)
     *          - B_0x1: Sincless thansup>1less than/sup> filter type (value: 1)
     *          - B_0x2: Sincless thansup>2less than/sup> filter type (value: 2)
     *          - B_0x3: Sincless thansup>3less than/sup> filter type (value: 3)
     */
        /** @brief FastSinc filter type */
    constexpr std::uint32_t MDF_OLD2CR_ACICN_B_0x0 = 0;
        /** @brief Sincless thansup>1less than/sup> filter type */
    constexpr std::uint32_t MDF_OLD2CR_ACICN_B_0x1 = 1;
        /** @brief Sincless thansup>2less than/sup> filter type */
    constexpr std::uint32_t MDF_OLD2CR_ACICN_B_0x2 = 2;
        /** @brief Sincless thansup>3less than/sup> filter type */
    constexpr std::uint32_t MDF_OLD2CR_ACICN_B_0x3 = 3;

    /** @brief OLDx CIC decimation ratio selection */
    using MDF_OLD2CR_ACICD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Decimation ratio is 1. (value: 0)
     *          - B_0x1: Decimation ratio is 2. (value: 1)
     */
        /** @brief Decimation ratio is 1. */
    constexpr std::uint32_t MDF_OLD2CR_ACICD_B_0x0 = 0;
        /** @brief Decimation ratio is 2. */
    constexpr std::uint32_t MDF_OLD2CR_ACICD_B_0x1 = 1;

    /** @brief OLDx active flag */
    using MDF_OLD2CR_OLDACTIVE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OLDx not active and can be configured if needed (value: 0)
     *          - B_0x1: OLDx active and protected fields cannot be configured (value: 1)
     */
        /** @brief OLDx not active and can be configured if needed */
    constexpr std::uint32_t MDF_OLD2CR_OLDACTIVE_B_0x0 = 0;
        /** @brief OLDx active and protected fields cannot be configured */
    constexpr std::uint32_t MDF_OLD2CR_OLDACTIVE_B_0x1 = 1;

    /** @brief MDF OLD2 low threshold register 2 */
    using MDF_OLD2THLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x19C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OLD low threshold value */
    using MDF_OLD2THLR_OLDTHL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 26, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDF OLD2 high threshold register 2 */
    using MDF_OLD2THHR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OLDx high threshold value */
    using MDF_OLD2THHR_OLDTHH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 26, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDF delay control register 2 */
    using MDF_DLY2CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1A4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Delay to apply to a bitstream */
    using MDF_DLY2CR_SKPDLY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No input sample skipped (value: 0)
     *          - B_0x1: 1 input sample skipped (value: 1)
     */
        /** @brief No input sample skipped */
    constexpr std::uint32_t MDF_DLY2CR_SKPDLY_B_0x0 = 0;
        /** @brief 1 input sample skipped */
    constexpr std::uint32_t MDF_DLY2CR_SKPDLY_B_0x1 = 1;

    /** @brief Skip busy flag */
    using MDF_DLY2CR_SKPBF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MDF ready to accept a new value into SKPDLY[6:0] (value: 0)
     *          - B_0x1: Last valid SKPDLY[6:0] still under processing (value: 1)
     */
        /** @brief MDF ready to accept a new value into SKPDLY[6:0] */
    constexpr std::uint32_t MDF_DLY2CR_SKPBF_B_0x0 = 0;
        /** @brief Last valid SKPDLY[6:0] still under processing */
    constexpr std::uint32_t MDF_DLY2CR_SKPBF_B_0x1 = 1;

    /** @brief MDF short circuit detector control register 2 */
    using MDF_SCD2CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1A8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SCDx enable */
    using MDF_SCD2CR_SCDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SCDx disabled (value: 0)
     *          - B_0x1: SSCDx enabled, (value: 1)
     */
        /** @brief SCDx disabled */
    constexpr std::uint32_t MDF_SCD2CR_SCDEN_B_0x0 = 0;
        /** @brief SSCDx enabled, */
    constexpr std::uint32_t MDF_SCD2CR_SCDEN_B_0x1 = 1;

    /** @brief Break signal assignment for short circuit detector */
    using MDF_SCD2CR_BKSCD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SCDx threshold */
    using MDF_SCD2CR_SCDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 2 consecutive 1's or 0's generate an event. (value: 0)
     *          - B_0x1: 2 consecutive 1's or 0's generate an event. (value: 1)
     */
        /** @brief 2 consecutive 1's or 0's generate an event. */
    constexpr std::uint32_t MDF_SCD2CR_SCDT_B_0x0 = 0;
        /** @brief 2 consecutive 1's or 0's generate an event. */
    constexpr std::uint32_t MDF_SCD2CR_SCDT_B_0x1 = 1;

    /** @brief SCDx active flag */
    using MDF_SCD2CR_SCDACTIVE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SCDx not active and can be configured if needed (value: 0)
     *          - B_0x1: SCDx active and protected fields cannot be configured (value: 1)
     */
        /** @brief SCDx not active and can be configured if needed */
    constexpr std::uint32_t MDF_SCD2CR_SCDACTIVE_B_0x0 = 0;
        /** @brief SCDx active and protected fields cannot be configured */
    constexpr std::uint32_t MDF_SCD2CR_SCDACTIVE_B_0x1 = 1;

    /** @brief MDF DFLT2 interrupt enable register 2 */
    using MDF_DFLT2IER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1AC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RXFIFO threshold interrupt enable */
    using MDF_DFLT2IER_FTHIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RXFIFO threshold interrupt disabled (value: 0)
     *          - B_0x1: RXFIFO threshold interrupt enabled (value: 1)
     */
        /** @brief RXFIFO threshold interrupt disabled */
    constexpr std::uint32_t MDF_DFLT2IER_FTHIE_B_0x0 = 0;
        /** @brief RXFIFO threshold interrupt enabled */
    constexpr std::uint32_t MDF_DFLT2IER_FTHIE_B_0x1 = 1;

    /** @brief Data overflow interrupt enable */
    using MDF_DFLT2IER_DOVRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Data overflow interrupt disabled (value: 0)
     *          - B_0x1: Data overflow interrupt enabled (value: 1)
     */
        /** @brief Data overflow interrupt disabled */
    constexpr std::uint32_t MDF_DFLT2IER_DOVRIE_B_0x0 = 0;
        /** @brief Data overflow interrupt enabled */
    constexpr std::uint32_t MDF_DFLT2IER_DOVRIE_B_0x1 = 1;

    /** @brief Snapshot data ready interrupt enable */
    using MDF_DFLT2IER_SSDRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Snapshot data ready interrupt disabled (value: 0)
     *          - B_0x1: Snapshot data ready interrupt enabled (value: 1)
     */
        /** @brief Snapshot data ready interrupt disabled */
    constexpr std::uint32_t MDF_DFLT2IER_SSDRIE_B_0x0 = 0;
        /** @brief Snapshot data ready interrupt enabled */
    constexpr std::uint32_t MDF_DFLT2IER_SSDRIE_B_0x1 = 1;

    /** @brief OLDx interrupt enable */
    using MDF_DFLT2IER_OLDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OLDx event interrupt disabled (value: 0)
     *          - B_0x1: OLDx event interrupt enabled (value: 1)
     */
        /** @brief OLDx event interrupt disabled */
    constexpr std::uint32_t MDF_DFLT2IER_OLDIE_B_0x0 = 0;
        /** @brief OLDx event interrupt enabled */
    constexpr std::uint32_t MDF_DFLT2IER_OLDIE_B_0x1 = 1;

    /** @brief Snapshot overrun interrupt enable */
    using MDF_DFLT2IER_SSOVRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Snapshot overrun interrupt disabled (value: 0)
     *          - B_0x1: Snapshot overrun interrupt enabled (value: 1)
     */
        /** @brief Snapshot overrun interrupt disabled */
    constexpr std::uint32_t MDF_DFLT2IER_SSOVRIE_B_0x0 = 0;
        /** @brief Snapshot overrun interrupt enabled */
    constexpr std::uint32_t MDF_DFLT2IER_SSOVRIE_B_0x1 = 1;

    /** @brief SCDx interrupt enable */
    using MDF_DFLT2IER_SCDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SCDx interrupt disabled (value: 0)
     *          - B_0x1: SCDx interrupt enabled (value: 1)
     */
        /** @brief SCDx interrupt disabled */
    constexpr std::uint32_t MDF_DFLT2IER_SCDIE_B_0x0 = 0;
        /** @brief SCDx interrupt enabled */
    constexpr std::uint32_t MDF_DFLT2IER_SCDIE_B_0x1 = 1;

    /** @brief Saturation detection interrupt enable */
    using MDF_DFLT2IER_SATIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Saturation interrupt disabled (value: 0)
     *          - B_0x1: Saturation interrupt enabled (value: 1)
     */
        /** @brief Saturation interrupt disabled */
    constexpr std::uint32_t MDF_DFLT2IER_SATIE_B_0x0 = 0;
        /** @brief Saturation interrupt enabled */
    constexpr std::uint32_t MDF_DFLT2IER_SATIE_B_0x1 = 1;

    /** @brief Clock absence detection interrupt enable */
    using MDF_DFLT2IER_CKABIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Clock absence interrupt disabled (value: 0)
     *          - B_0x1: Clock absence interrupt enabled (value: 1)
     */
        /** @brief Clock absence interrupt disabled */
    constexpr std::uint32_t MDF_DFLT2IER_CKABIE_B_0x0 = 0;
        /** @brief Clock absence interrupt enabled */
    constexpr std::uint32_t MDF_DFLT2IER_CKABIE_B_0x1 = 1;

    /** @brief Reshape filter overrun interrupt enable */
    using MDF_DFLT2IER_RFOVRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Reshape filter overrun interrupt disabled (value: 0)
     *          - B_0x1: Reshape filter overrun interrupt enabled (value: 1)
     */
        /** @brief Reshape filter overrun interrupt disabled */
    constexpr std::uint32_t MDF_DFLT2IER_RFOVRIE_B_0x0 = 0;
        /** @brief Reshape filter overrun interrupt enabled */
    constexpr std::uint32_t MDF_DFLT2IER_RFOVRIE_B_0x1 = 1;

    /** @brief MDF DFLT2 interrupt status register 2 */
    using MDF_DFLT2ISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1B0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RXFIFO threshold flag */
    using MDF_DFLT2ISR_FTHF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RXFIFO threshold not reached (value: 0)
     *          - B_0x1: RXFIFO threshold reached (value: 1)
     */
        /** @brief RXFIFO threshold not reached */
    constexpr std::uint32_t MDF_DFLT2ISR_FTHF_B_0x0 = 0;
        /** @brief RXFIFO threshold reached */
    constexpr std::uint32_t MDF_DFLT2ISR_FTHF_B_0x1 = 1;

    /** @brief Data overflow flag */
    using MDF_DFLT2ISR_DOVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Read 0 means that no overflow is detected. Write 0 has no effect. (value: 0)
     *          - B_0x1: Read 1 means that an overflow is detected; Write 1 clears this flag. (value: 1)
     */
        /** @brief Read 0 means that no overflow is detected. Write 0 has no effect. */
    constexpr std::uint32_t MDF_DFLT2ISR_DOVRF_B_0x0 = 0;
        /** @brief Read 1 means that an overflow is detected; Write 1 clears this flag. */
    constexpr std::uint32_t MDF_DFLT2ISR_DOVRF_B_0x1 = 1;

    /** @brief Snapshot data ready flag */
    using MDF_DFLT2ISR_SSDRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Read 0 means that no data is available. Write 0 has no effect. (value: 0)
     *          - B_0x1: Read 1 means that a new data is available. Write 1 clears this flag. (value: 1)
     */
        /** @brief Read 0 means that no data is available. Write 0 has no effect. */
    constexpr std::uint32_t MDF_DFLT2ISR_SSDRF_B_0x0 = 0;
        /** @brief Read 1 means that a new data is available. Write 1 clears this flag. */
    constexpr std::uint32_t MDF_DFLT2ISR_SSDRF_B_0x1 = 1;

    /** @brief RXFIFO not-empty flag */
    using MDF_DFLT2ISR_RXNEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RXFIFO empty (value: 0)
     *          - B_0x1: RXFIFO not empty (value: 1)
     */
        /** @brief RXFIFO empty */
    constexpr std::uint32_t MDF_DFLT2ISR_RXNEF_B_0x0 = 0;
        /** @brief RXFIFO not empty */
    constexpr std::uint32_t MDF_DFLT2ISR_RXNEF_B_0x1 = 1;

    /** @brief OLDx flag */
    using MDF_DFLT2ISR_OLDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Read 0 means that no OLDx event is detected. Write 0 has no effect. (value: 0)
     *          - B_0x1: Read 1 means that an OLDx event is detected Write 1 clears THHF, THLF and OLDF. (value: 1)
     */
        /** @brief Read 0 means that no OLDx event is detected. Write 0 has no effect. */
    constexpr std::uint32_t MDF_DFLT2ISR_OLDF_B_0x0 = 0;
        /** @brief Read 1 means that an OLDx event is detected Write 1 clears THHF, THLF and OLDF. */
    constexpr std::uint32_t MDF_DFLT2ISR_OLDF_B_0x1 = 1;

    /** @brief Low-threshold status flag */
    using MDF_DFLT2ISR_THLF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The signal was higher than OLDTHL when the last OLDx event occurred. (value: 0)
     *          - B_0x1: The signal was lower than OLDTHL when the last OLDx event occurred. (value: 1)
     */
        /** @brief The signal was higher than OLDTHL when the last OLDx event occurred. */
    constexpr std::uint32_t MDF_DFLT2ISR_THLF_B_0x0 = 0;
        /** @brief The signal was lower than OLDTHL when the last OLDx event occurred. */
    constexpr std::uint32_t MDF_DFLT2ISR_THLF_B_0x1 = 1;

    /** @brief High-threshold status flag */
    using MDF_DFLT2ISR_THHF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The signal was lower than OLDTHH when the last OLDx event occurred. (value: 0)
     *          - B_0x1: The signal was higher than OLDTHH when the last OLDx event occurred. (value: 1)
     */
        /** @brief The signal was lower than OLDTHH when the last OLDx event occurred. */
    constexpr std::uint32_t MDF_DFLT2ISR_THHF_B_0x0 = 0;
        /** @brief The signal was higher than OLDTHH when the last OLDx event occurred. */
    constexpr std::uint32_t MDF_DFLT2ISR_THHF_B_0x1 = 1;

    /** @brief Snapshot overrun flag */
    using MDF_DFLT2ISR_SSOVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Read 0 means that no snapshot overrun event is detected. Write 0 has no effect. (value: 0)
     *          - B_0x1: Read 1 means that a snapshot overrun event is detected. Write 1 clears this flag. (value: 1)
     */
        /** @brief Read 0 means that no snapshot overrun event is detected. Write 0 has no effect. */
    constexpr std::uint32_t MDF_DFLT2ISR_SSOVRF_B_0x0 = 0;
        /** @brief Read 1 means that a snapshot overrun event is detected. Write 1 clears this flag. */
    constexpr std::uint32_t MDF_DFLT2ISR_SSOVRF_B_0x1 = 1;

    /** @brief Short-circuit detector flag */
    using MDF_DFLT2ISR_SCDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Read 0 means that no SCD event is detected. Write 0 has no effect. (value: 0)
     *          - B_0x1: Read 1 means that a SCD event is detected. Write 1 clears this flag. (value: 1)
     */
        /** @brief Read 0 means that no SCD event is detected. Write 0 has no effect. */
    constexpr std::uint32_t MDF_DFLT2ISR_SCDF_B_0x0 = 0;
        /** @brief Read 1 means that a SCD event is detected. Write 1 clears this flag. */
    constexpr std::uint32_t MDF_DFLT2ISR_SCDF_B_0x1 = 1;

    /** @brief Saturation detection flag */
    using MDF_DFLT2ISR_SATF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Read 0 means that no saturation is detected. Write 0 has no effect. (value: 0)
     *          - B_0x1: Read 1 means that a saturation is detected. Write 1 clears this flag. (value: 1)
     */
        /** @brief Read 0 means that no saturation is detected. Write 0 has no effect. */
    constexpr std::uint32_t MDF_DFLT2ISR_SATF_B_0x0 = 0;
        /** @brief Read 1 means that a saturation is detected. Write 1 clears this flag. */
    constexpr std::uint32_t MDF_DFLT2ISR_SATF_B_0x1 = 1;

    /** @brief Clock absence detection flag */
    using MDF_DFLT2ISR_CKABF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Read 0 means that no clock absence is detected. Write 0 has no effect. (value: 0)
     *          - B_0x1: Read 1 means that a clock absence is detected. Write 1 clears this flag. (value: 1)
     */
        /** @brief Read 0 means that no clock absence is detected. Write 0 has no effect. */
    constexpr std::uint32_t MDF_DFLT2ISR_CKABF_B_0x0 = 0;
        /** @brief Read 1 means that a clock absence is detected. Write 1 clears this flag. */
    constexpr std::uint32_t MDF_DFLT2ISR_CKABF_B_0x1 = 1;

    /** @brief Reshape filter overrun detection flag */
    using MDF_DFLT2ISR_RFOVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Read 0 means that no reshape filter overrun is detected. Write 0 has no effect. (value: 0)
     *          - B_0x1: Read 1 means that reshape filter overrun is detected. Write 1 clears this flag. (value: 1)
     */
        /** @brief Read 0 means that no reshape filter overrun is detected. Write 0 has no effect. */
    constexpr std::uint32_t MDF_DFLT2ISR_RFOVRF_B_0x0 = 0;
        /** @brief Read 1 means that reshape filter overrun is detected. Write 1 clears this flag. */
    constexpr std::uint32_t MDF_DFLT2ISR_RFOVRF_B_0x1 = 1;

    /** @brief MDF offset error compensation control register 2 */
    using MDF_OEC2CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1B4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Offset error compensation */
    using MDF_OEC2CR_OFFSET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 26, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDF snapshot data register 2 */
    using MDF_SNPS2DR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1EC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Contains the MCIC decimation counter value when the last trigger event occurs (MCIC_CNT) */
    using MDF_SNPS2DR_MCICDC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extended data size */
    using MDF_SNPS2DR_EXTSDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Contains the 16 MSB of the last valid data processed by the digital filter. */
    using MDF_SNPS2DR_SDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDF digital filter data register 2 */
    using MDF_DFLT2DR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1F0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data processed by digital filter */
    using MDF_DFLT2DR_DR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDF serial interface control register 3 */
    using MDF_SITF3CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x200, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Serial interface enable */
    using MDF_SITF3CR_SITFEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Serial interface disabled (value: 0)
     *          - B_0x1: Serial interface enabled (value: 1)
     */
        /** @brief Serial interface disabled */
    constexpr std::uint32_t MDF_SITF3CR_SITFEN_B_0x0 = 0;
        /** @brief Serial interface enabled */
    constexpr std::uint32_t MDF_SITF3CR_SITFEN_B_0x1 = 1;

    /** @brief Serial clock source */
    using MDF_SITF3CR_SCKSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Serial clock source is MDF_CCK0. (value: 0)
     *          - B_0x1: Serial clock source is MDF_CCK1. (value: 1)
     */
        /** @brief Serial clock source is MDF_CCK0. */
    constexpr std::uint32_t MDF_SITF3CR_SCKSRC_B_0x0 = 0;
        /** @brief Serial clock source is MDF_CCK1. */
    constexpr std::uint32_t MDF_SITF3CR_SCKSRC_B_0x1 = 1;

    /** @brief Serial interface type */
    using MDF_SITF3CR_SITFMOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LF_MASTER SPI mode (value: 0)
     *          - B_0x1: Normal SPI mode (value: 1)
     *          - B_0x2: Manchester mode: rising edge = logic 0, falling edge = logic 1 (value: 2)
     *          - B_0x3: Manchester mode: rising edge = logic 1, falling edge = logic 0 (value: 3)
     */
        /** @brief LF_MASTER SPI mode */
    constexpr std::uint32_t MDF_SITF3CR_SITFMOD_B_0x0 = 0;
        /** @brief Normal SPI mode */
    constexpr std::uint32_t MDF_SITF3CR_SITFMOD_B_0x1 = 1;
        /** @brief Manchester mode: rising edge = logic 0, falling edge = logic 1 */
    constexpr std::uint32_t MDF_SITF3CR_SITFMOD_B_0x2 = 2;
        /** @brief Manchester mode: rising edge = logic 1, falling edge = logic 0 */
    constexpr std::uint32_t MDF_SITF3CR_SITFMOD_B_0x3 = 3;

    /** @brief Manchester symbol threshold/SPI threshold */
    using MDF_SITF3CR_STH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Serial interface active flag */
    using MDF_SITF3CR_SITFACTIVE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The serial interface is not active and can be configured if needed. (value: 0)
     *          - B_0x1: The serial interface is active and protected fields cannot be configured. (value: 1)
     */
        /** @brief The serial interface is not active and can be configured if needed. */
    constexpr std::uint32_t MDF_SITF3CR_SITFACTIVE_B_0x0 = 0;
        /** @brief The serial interface is active and protected fields cannot be configured. */
    constexpr std::uint32_t MDF_SITF3CR_SITFACTIVE_B_0x1 = 1;

    /** @brief MDF bitstream matrix control register 3 */
    using MDF_BSMX3CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x204, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bitstream Selection */
    using MDF_BSMX3CR_BSSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: bs0_r provided to DFLTx and SCDx (value: 0)
     *          - B_0x1: bs0_f provided to DFLTx and SCDx (value: 1)
     *          - B_0x2: bs1_r provided to DFLTx and SCDx (if instantiated) (value: 2)
     *          - B_0x3: bs1_f provided to DFLTx and SCDx (if instantiated) (value: 3)
     *          - B_0x1E: bs15_r provided to DFLTx and SCDx (if instantiated) (value: 30)
     *          - B_0x1F: bs15_f provided to DFLTx and SCDx (if instantiated) (value: 31)
     */
        /** @brief bs0_r provided to DFLTx and SCDx */
    constexpr std::uint32_t MDF_BSMX3CR_BSSEL_B_0x0 = 0;
        /** @brief bs0_f provided to DFLTx and SCDx */
    constexpr std::uint32_t MDF_BSMX3CR_BSSEL_B_0x1 = 1;
        /** @brief bs1_r provided to DFLTx and SCDx (if instantiated) */
    constexpr std::uint32_t MDF_BSMX3CR_BSSEL_B_0x2 = 2;
        /** @brief bs1_f provided to DFLTx and SCDx (if instantiated) */
    constexpr std::uint32_t MDF_BSMX3CR_BSSEL_B_0x3 = 3;
        /** @brief bs15_r provided to DFLTx and SCDx (if instantiated) */
    constexpr std::uint32_t MDF_BSMX3CR_BSSEL_B_0x1E = 30;
        /** @brief bs15_f provided to DFLTx and SCDx (if instantiated) */
    constexpr std::uint32_t MDF_BSMX3CR_BSSEL_B_0x1F = 31;

    /** @brief BSMX active flag */
    using MDF_BSMX3CR_BSMXACTIVE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BSMX is not active and can be configured if needed. (value: 0)
     *          - B_0x1: BSMX is active and protected fields cannot be configured. (value: 1)
     */
        /** @brief BSMX is not active and can be configured if needed. */
    constexpr std::uint32_t MDF_BSMX3CR_BSMXACTIVE_B_0x0 = 0;
        /** @brief BSMX is active and protected fields cannot be configured. */
    constexpr std::uint32_t MDF_BSMX3CR_BSMXACTIVE_B_0x1 = 1;

    /** @brief MDF digital filter control register 3 */
    using MDF_DFLT3CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x208, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Digital filter enable */
    using MDF_DFLT3CR_DFLTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Acquisition immediately stopped (value: 0)
     *          - B_0x1: Acquisition immediately started if ACQMOD[2:0] = 00x or 101, or acquisition started when the proper trigger event occurs if ACQMOD[2:0] = 01x or 100. (value: 1)
     */
        /** @brief Acquisition immediately stopped */
    constexpr std::uint32_t MDF_DFLT3CR_DFLTEN_B_0x0 = 0;
        /** @brief Acquisition immediately started if ACQMOD[2:0] = 00x or 101, or acquisition started when the proper trigger event occurs if ACQMOD[2:0] = 01x or 100. */
    constexpr std::uint32_t MDF_DFLT3CR_DFLTEN_B_0x1 = 1;

    /** @brief DMA requests enable */
    using MDF_DFLT3CR_DMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DMA interface for the corresponding digital filter disabled (value: 0)
     *          - B_0x1: DMA interface for the corresponding digital filter enabled (value: 1)
     */
        /** @brief DMA interface for the corresponding digital filter disabled */
    constexpr std::uint32_t MDF_DFLT3CR_DMAEN_B_0x0 = 0;
        /** @brief DMA interface for the corresponding digital filter enabled */
    constexpr std::uint32_t MDF_DFLT3CR_DMAEN_B_0x1 = 1;

    /** @brief RXFIFO Threshold selection */
    using MDF_DFLT3CR_FTH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RXFIFO threshold event generated when the RXFIFO is not empty (value: 0)
     *          - B_0x1: RXFIFO threshold event generated when the RXFIFO is half-full (value: 1)
     */
        /** @brief RXFIFO threshold event generated when the RXFIFO is not empty */
    constexpr std::uint32_t MDF_DFLT3CR_FTH_B_0x0 = 0;
        /** @brief RXFIFO threshold event generated when the RXFIFO is half-full */
    constexpr std::uint32_t MDF_DFLT3CR_FTH_B_0x1 = 1;

    /** @brief Digital filter trigger mode */
    using MDF_DFLT3CR_ACQMOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Asynchronous continuous acquisition mode (value: 0)
     *          - B_0x1: Asynchronous single-shot acquisition mode (value: 1)
     *          - B_0x2: Synchronous continuous acquisition mode (value: 2)
     *          - B_0x3: Synchronous, single-shot acquisition mode (value: 3)
     *          - B_0x4: Window continuous acquisition mode (value: 4)
     *          - B_0x5: Synchronous snapshot mode (value: 5)
     */
        /** @brief Asynchronous continuous acquisition mode */
    constexpr std::uint32_t MDF_DFLT3CR_ACQMOD_B_0x0 = 0;
        /** @brief Asynchronous single-shot acquisition mode */
    constexpr std::uint32_t MDF_DFLT3CR_ACQMOD_B_0x1 = 1;
        /** @brief Synchronous continuous acquisition mode */
    constexpr std::uint32_t MDF_DFLT3CR_ACQMOD_B_0x2 = 2;
        /** @brief Synchronous, single-shot acquisition mode */
    constexpr std::uint32_t MDF_DFLT3CR_ACQMOD_B_0x3 = 3;
        /** @brief Window continuous acquisition mode */
    constexpr std::uint32_t MDF_DFLT3CR_ACQMOD_B_0x4 = 4;
        /** @brief Synchronous snapshot mode */
    constexpr std::uint32_t MDF_DFLT3CR_ACQMOD_B_0x5 = 5;

    /** @brief Digital filter trigger sensitivity selection */
    using MDF_DFLT3CR_TRGSENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: A rising edge event triggers the acquisition. (value: 0)
     *          - B_0x1: A falling edge even triggers the acquisition. (value: 1)
     */
        /** @brief A rising edge event triggers the acquisition. */
    constexpr std::uint32_t MDF_DFLT3CR_TRGSENS_B_0x0 = 0;
        /** @brief A falling edge even triggers the acquisition. */
    constexpr std::uint32_t MDF_DFLT3CR_TRGSENS_B_0x1 = 1;

    /** @brief Digital filter trigger signal selection */
    using MDF_DFLT3CR_TRGSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TRGO selected (value: 0)
     *          - B_0x1: OLDx event selected (value: 1)
     *          - B_0x2: mdf_trg[0] selected (value: 2)
     *          - B_0xF: mdf_trg[13] selected (value: 15)
     */
        /** @brief TRGO selected */
    constexpr std::uint32_t MDF_DFLT3CR_TRGSRC_B_0x0 = 0;
        /** @brief OLDx event selected */
    constexpr std::uint32_t MDF_DFLT3CR_TRGSRC_B_0x1 = 1;
        /** @brief mdf_trg[0] selected */
    constexpr std::uint32_t MDF_DFLT3CR_TRGSRC_B_0x2 = 2;
        /** @brief mdf_trg[13] selected */
    constexpr std::uint32_t MDF_DFLT3CR_TRGSRC_B_0xF = 15;

    /** @brief Snapshot data format */
    using MDF_DFLT3CR_SNPSFMT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Integrator counter (INT_CNT) not inserted into MDF_SNPSxDR, leaving a data resolution of 23 bits (value: 0)
     *          - B_0x1: Integrator counter (INT_CNT) inserted at position [15:9] of MDF_SNPSxDR, leaving a data resolution of 16 bits. (value: 1)
     */
        /** @brief Integrator counter (INT_CNT) not inserted into MDF_SNPSxDR, leaving a data resolution of 23 bits */
    constexpr std::uint32_t MDF_DFLT3CR_SNPSFMT_B_0x0 = 0;
        /** @brief Integrator counter (INT_CNT) inserted at position [15:9] of MDF_SNPSxDR, leaving a data resolution of 16 bits. */
    constexpr std::uint32_t MDF_DFLT3CR_SNPSFMT_B_0x1 = 1;

    /** @brief Number of samples to be discarded */
    using MDF_DFLT3CR_NBDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No sample discarded (value: 0)
     *          - B_0x1: 1 sample discarded (value: 1)
     */
        /** @brief No sample discarded */
    constexpr std::uint32_t MDF_DFLT3CR_NBDIS_B_0x0 = 0;
        /** @brief 1 sample discarded */
    constexpr std::uint32_t MDF_DFLT3CR_NBDIS_B_0x1 = 1;

    /** @brief Digital filter run status flag */
    using MDF_DFLT3CR_DFLTRUN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Digital filter not running and ready to accept a new trigger event (value: 0)
     *          - B_0x1: Digital filter running (value: 1)
     */
        /** @brief Digital filter not running and ready to accept a new trigger event */
    constexpr std::uint32_t MDF_DFLT3CR_DFLTRUN_B_0x0 = 0;
        /** @brief Digital filter running */
    constexpr std::uint32_t MDF_DFLT3CR_DFLTRUN_B_0x1 = 1;

    /** @brief Digital filter active flag */
    using MDF_DFLT3CR_DFLTACTIVE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Digital filter not active (can be re-enabled again, via DFLTEN, if needed) (value: 0)
     *          - B_0x1: Digital filter active (value: 1)
     */
        /** @brief Digital filter not active (can be re-enabled again, via DFLTEN, if needed) */
    constexpr std::uint32_t MDF_DFLT3CR_DFLTACTIVE_B_0x0 = 0;
        /** @brief Digital filter active */
    constexpr std::uint32_t MDF_DFLT3CR_DFLTACTIVE_B_0x1 = 1;

    /** @brief MDF digital filter configuration register 3 */
    using MDF_DFLT3CICR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Source data for the digital filter */
    using MDF_DFLT3CICR_DATSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x2: Stream coming from the ADCITF1 selected (value: 2)
     *          - B_0x3: Stream coming from the ADCITF2 selected (value: 3)
     */
        /** @brief Stream coming from the ADCITF1 selected */
    constexpr std::uint32_t MDF_DFLT3CICR_DATSRC_B_0x2 = 2;
        /** @brief Stream coming from the ADCITF2 selected */
    constexpr std::uint32_t MDF_DFLT3CICR_DATSRC_B_0x3 = 3;

    /** @brief Select the CIC mode */
    using MDF_DFLT3CICR_CICMOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CIC split in two filters and MCIC configured in FastSinc filter (value: 0)
     *          - B_0x1: CIC split in two filters and MCIC configured in Sincless thansup>1less than/sup> filter (value: 1)
     *          - B_0x2: CIC split in two filters and MCIC configured in Sincless thansup>2less than/sup> filter (value: 2)
     *          - B_0x3: CIC split in two filters and MCIC configured in Sincless thansup>3less than/sup> filter (value: 3)
     *          - B_0x4: CIC configured in single Sincless thansup>4less than/sup> filter (value: 4)
     */
        /** @brief CIC split in two filters and MCIC configured in FastSinc filter */
    constexpr std::uint32_t MDF_DFLT3CICR_CICMOD_B_0x0 = 0;
        /** @brief CIC split in two filters and MCIC configured in Sincless thansup>1less than/sup> filter */
    constexpr std::uint32_t MDF_DFLT3CICR_CICMOD_B_0x1 = 1;
        /** @brief CIC split in two filters and MCIC configured in Sincless thansup>2less than/sup> filter */
    constexpr std::uint32_t MDF_DFLT3CICR_CICMOD_B_0x2 = 2;
        /** @brief CIC split in two filters and MCIC configured in Sincless thansup>3less than/sup> filter */
    constexpr std::uint32_t MDF_DFLT3CICR_CICMOD_B_0x3 = 3;
        /** @brief CIC configured in single Sincless thansup>4less than/sup> filter */
    constexpr std::uint32_t MDF_DFLT3CICR_CICMOD_B_0x4 = 4;

    /** @brief CIC decimation ratio selection */
    using MDF_DFLT3CICR_MCICD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Decimation ratio is 2. (value: 0)
     *          - B_0x1: Decimation ratio is 2. (value: 1)
     */
        /** @brief Decimation ratio is 2. */
    constexpr std::uint32_t MDF_DFLT3CICR_MCICD_B_0x0 = 0;
        /** @brief Decimation ratio is 2. */
    constexpr std::uint32_t MDF_DFLT3CICR_MCICD_B_0x1 = 1;

    /** @brief CIC decimation ratio selection */
    using MDF_DFLT3CICR_MCICD8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Decimation ratio is 2. (value: 0)
     *          - B_0x1: Decimation ratio is 2. (value: 1)
     */
        /** @brief Decimation ratio is 2. */
    constexpr std::uint32_t MDF_DFLT3CICR_MCICD8_B_0x0 = 0;
        /** @brief Decimation ratio is 2. */
    constexpr std::uint32_t MDF_DFLT3CICR_MCICD8_B_0x1 = 1;

    /** @brief Scaling factor selection */
    using MDF_DFLT3CICR_SCALE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 0 dB (value: 0)
     *          - B_0x1: + 3.5 dB (value: 1)
     *          - B_0x2: + 6 dB or shift left by 1 bit (value: 2)
     *          - B_0x18: + 72 dB or shift left by 12 bits (value: 24)
     *          - B_0x20: - 48.2 dB or shift right by 8 bits (default value) (value: 32)
     *          - B_0x21: - 44.6 dB (value: 33)
     *          - B_0x22: - 42.1 dB or shift right by 7 bits (value: 34)
     *          - B_0x23: - 38.6 dB (value: 35)
     *          - B_0x2E: - 6 dB or shift right by 1 bit (value: 46)
     *          - B_0x2F: - 2.5 dB (value: 47)
     */
        /** @brief 0 dB */
    constexpr std::uint32_t MDF_DFLT3CICR_SCALE_B_0x0 = 0;
        /** @brief + 3.5 dB */
    constexpr std::uint32_t MDF_DFLT3CICR_SCALE_B_0x1 = 1;
        /** @brief + 6 dB or shift left by 1 bit */
    constexpr std::uint32_t MDF_DFLT3CICR_SCALE_B_0x2 = 2;
        /** @brief + 72 dB or shift left by 12 bits */
    constexpr std::uint32_t MDF_DFLT3CICR_SCALE_B_0x18 = 24;
        /** @brief - 48.2 dB or shift right by 8 bits (default value) */
    constexpr std::uint32_t MDF_DFLT3CICR_SCALE_B_0x20 = 32;
        /** @brief - 44.6 dB */
    constexpr std::uint32_t MDF_DFLT3CICR_SCALE_B_0x21 = 33;
        /** @brief - 42.1 dB or shift right by 7 bits */
    constexpr std::uint32_t MDF_DFLT3CICR_SCALE_B_0x22 = 34;
        /** @brief - 38.6 dB */
    constexpr std::uint32_t MDF_DFLT3CICR_SCALE_B_0x23 = 35;
        /** @brief - 6 dB or shift right by 1 bit */
    constexpr std::uint32_t MDF_DFLT3CICR_SCALE_B_0x2E = 46;
        /** @brief - 2.5 dB */
    constexpr std::uint32_t MDF_DFLT3CICR_SCALE_B_0x2F = 47;

    /** @brief MDF reshape filter configuration register 3 */
    using MDF_DFLT3RSFR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x210, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reshaper filter bypass */
    using MDF_DFLT3RSFR_RSFLTBYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Reshape filter not bypassed (default value) (value: 0)
     *          - B_0x1: Reshape filter bypassed (value: 1)
     */
        /** @brief Reshape filter not bypassed (default value) */
    constexpr std::uint32_t MDF_DFLT3RSFR_RSFLTBYP_B_0x0 = 0;
        /** @brief Reshape filter bypassed */
    constexpr std::uint32_t MDF_DFLT3RSFR_RSFLTBYP_B_0x1 = 1;

    /** @brief Reshaper filter decimation ratio */
    using MDF_DFLT3RSFR_RSFLTD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Decimation ratio is 4 (default value). (value: 0)
     *          - B_0x1: Decimation ratio is 1. (value: 1)
     */
        /** @brief Decimation ratio is 4 (default value). */
    constexpr std::uint32_t MDF_DFLT3RSFR_RSFLTD_B_0x0 = 0;
        /** @brief Decimation ratio is 1. */
    constexpr std::uint32_t MDF_DFLT3RSFR_RSFLTD_B_0x1 = 1;

    /** @brief High-pass filter bypass */
    using MDF_DFLT3RSFR_HPFBYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HPF not bypassed (default value) (value: 0)
     *          - B_0x1: HPF bypassed (value: 1)
     */
        /** @brief HPF not bypassed (default value) */
    constexpr std::uint32_t MDF_DFLT3RSFR_HPFBYP_B_0x0 = 0;
        /** @brief HPF bypassed */
    constexpr std::uint32_t MDF_DFLT3RSFR_HPFBYP_B_0x1 = 1;

    /** @brief High-pass filter cut-off frequency */
    using MDF_DFLT3RSFR_HPFC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Cut-off frequency = 0.000625 x Fless thansub>PCMless than/sub> (value: 0)
     *          - B_0x1: Cut-off frequency = 0.00125 x Fless thansub>PCMless than/sub> (value: 1)
     *          - B_0x2: Cut-off frequency = 0.00250 x Fless thansub>PCMless than/sub> (value: 2)
     *          - B_0x3: Cut-off frequency = 0.00950 x Fless thansub>PCMless than/sub> (value: 3)
     */
        /** @brief Cut-off frequency = 0.000625 x Fless thansub>PCMless than/sub> */
    constexpr std::uint32_t MDF_DFLT3RSFR_HPFC_B_0x0 = 0;
        /** @brief Cut-off frequency = 0.00125 x Fless thansub>PCMless than/sub> */
    constexpr std::uint32_t MDF_DFLT3RSFR_HPFC_B_0x1 = 1;
        /** @brief Cut-off frequency = 0.00250 x Fless thansub>PCMless than/sub> */
    constexpr std::uint32_t MDF_DFLT3RSFR_HPFC_B_0x2 = 2;
        /** @brief Cut-off frequency = 0.00950 x Fless thansub>PCMless than/sub> */
    constexpr std::uint32_t MDF_DFLT3RSFR_HPFC_B_0x3 = 3;

    /** @brief MDF integrator configuration register 3 */
    using MDF_DFLT3INTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x214, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Integrator output division */
    using MDF_DFLT3INTR_INTDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The integrator data outputs are divided by 128 (default value). (value: 0)
     *          - B_0x1: The integrator data outputs are divided by 32. (value: 1)
     *          - B_0x2: The integrator data outputs are divided by 4. (value: 2)
     *          - B_0x3: The integrator data outputs are not divided. (value: 3)
     */
        /** @brief The integrator data outputs are divided by 128 (default value). */
    constexpr std::uint32_t MDF_DFLT3INTR_INTDIV_B_0x0 = 0;
        /** @brief The integrator data outputs are divided by 32. */
    constexpr std::uint32_t MDF_DFLT3INTR_INTDIV_B_0x1 = 1;
        /** @brief The integrator data outputs are divided by 4. */
    constexpr std::uint32_t MDF_DFLT3INTR_INTDIV_B_0x2 = 2;
        /** @brief The integrator data outputs are not divided. */
    constexpr std::uint32_t MDF_DFLT3INTR_INTDIV_B_0x3 = 3;

    /** @brief Integration value selection */
    using MDF_DFLT3INTR_INTVAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The integration value is 1, meaning bypass mode (default after reset). (value: 0)
     *          - B_0x1: The integration value is 2. (value: 1)
     */
        /** @brief The integration value is 1, meaning bypass mode (default after reset). */
    constexpr std::uint32_t MDF_DFLT3INTR_INTVAL_B_0x0 = 0;
        /** @brief The integration value is 2. */
    constexpr std::uint32_t MDF_DFLT3INTR_INTVAL_B_0x1 = 1;

    /** @brief MDF out-of limit detector control register 3 */
    using MDF_OLD3CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x218, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OLDx enable */
    using MDF_OLD3CR_OLDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OLDx disabled (default value) (value: 0)
     *          - B_0x1: OLDx enabled, including the ACIC filter working in continuous mode (value: 1)
     */
        /** @brief OLDx disabled (default value) */
    constexpr std::uint32_t MDF_OLD3CR_OLDEN_B_0x0 = 0;
        /** @brief OLDx enabled, including the ACIC filter working in continuous mode */
    constexpr std::uint32_t MDF_OLD3CR_OLDEN_B_0x1 = 1;

    /** @brief Threshold In band */
    using MDF_OLD3CR_THINB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The OLDx generates an event if the signal is lower than OLDTHL or higher than OLDTHH (default value). (value: 0)
     *          - B_0x1: The OLDx generates an event if the signal is lower than OLDTHH and higher than OLDTHL (value: 1)
     */
        /** @brief The OLDx generates an event if the signal is lower than OLDTHL or higher than OLDTHH (default value). */
    constexpr std::uint32_t MDF_OLD3CR_THINB_B_0x0 = 0;
        /** @brief The OLDx generates an event if the signal is lower than OLDTHH and higher than OLDTHL */
    constexpr std::uint32_t MDF_OLD3CR_THINB_B_0x1 = 1;

    /** @brief Break signal assignment for out-of limit detector */
    using MDF_OLD3CR_BKOLD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OLDx CIC order selection */
    using MDF_OLD3CR_ACICN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FastSinc filter type (value: 0)
     *          - B_0x1: Sincless thansup>1less than/sup> filter type (value: 1)
     *          - B_0x2: Sincless thansup>2less than/sup> filter type (value: 2)
     *          - B_0x3: Sincless thansup>3less than/sup> filter type (value: 3)
     */
        /** @brief FastSinc filter type */
    constexpr std::uint32_t MDF_OLD3CR_ACICN_B_0x0 = 0;
        /** @brief Sincless thansup>1less than/sup> filter type */
    constexpr std::uint32_t MDF_OLD3CR_ACICN_B_0x1 = 1;
        /** @brief Sincless thansup>2less than/sup> filter type */
    constexpr std::uint32_t MDF_OLD3CR_ACICN_B_0x2 = 2;
        /** @brief Sincless thansup>3less than/sup> filter type */
    constexpr std::uint32_t MDF_OLD3CR_ACICN_B_0x3 = 3;

    /** @brief OLDx CIC decimation ratio selection */
    using MDF_OLD3CR_ACICD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Decimation ratio is 1. (value: 0)
     *          - B_0x1: Decimation ratio is 2. (value: 1)
     */
        /** @brief Decimation ratio is 1. */
    constexpr std::uint32_t MDF_OLD3CR_ACICD_B_0x0 = 0;
        /** @brief Decimation ratio is 2. */
    constexpr std::uint32_t MDF_OLD3CR_ACICD_B_0x1 = 1;

    /** @brief OLDx active flag */
    using MDF_OLD3CR_OLDACTIVE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OLDx not active and can be configured if needed (value: 0)
     *          - B_0x1: OLDx active and protected fields cannot be configured (value: 1)
     */
        /** @brief OLDx not active and can be configured if needed */
    constexpr std::uint32_t MDF_OLD3CR_OLDACTIVE_B_0x0 = 0;
        /** @brief OLDx active and protected fields cannot be configured */
    constexpr std::uint32_t MDF_OLD3CR_OLDACTIVE_B_0x1 = 1;

    /** @brief MDF OLD3 low threshold register 3 */
    using MDF_OLD3THLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x21C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OLD low threshold value */
    using MDF_OLD3THLR_OLDTHL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 26, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDF OLD3 high threshold register 3 */
    using MDF_OLD3THHR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x220, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OLDx high threshold value */
    using MDF_OLD3THHR_OLDTHH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 26, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDF delay control register 3 */
    using MDF_DLY3CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x224, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Delay to apply to a bitstream */
    using MDF_DLY3CR_SKPDLY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No input sample skipped (value: 0)
     *          - B_0x1: 1 input sample skipped (value: 1)
     */
        /** @brief No input sample skipped */
    constexpr std::uint32_t MDF_DLY3CR_SKPDLY_B_0x0 = 0;
        /** @brief 1 input sample skipped */
    constexpr std::uint32_t MDF_DLY3CR_SKPDLY_B_0x1 = 1;

    /** @brief Skip busy flag */
    using MDF_DLY3CR_SKPBF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MDF ready to accept a new value into SKPDLY[6:0] (value: 0)
     *          - B_0x1: Last valid SKPDLY[6:0] still under processing (value: 1)
     */
        /** @brief MDF ready to accept a new value into SKPDLY[6:0] */
    constexpr std::uint32_t MDF_DLY3CR_SKPBF_B_0x0 = 0;
        /** @brief Last valid SKPDLY[6:0] still under processing */
    constexpr std::uint32_t MDF_DLY3CR_SKPBF_B_0x1 = 1;

    /** @brief MDF short circuit detector control register 3 */
    using MDF_SCD3CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x228, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SCDx enable */
    using MDF_SCD3CR_SCDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SCDx disabled (value: 0)
     *          - B_0x1: SSCDx enabled, (value: 1)
     */
        /** @brief SCDx disabled */
    constexpr std::uint32_t MDF_SCD3CR_SCDEN_B_0x0 = 0;
        /** @brief SSCDx enabled, */
    constexpr std::uint32_t MDF_SCD3CR_SCDEN_B_0x1 = 1;

    /** @brief Break signal assignment for short circuit detector */
    using MDF_SCD3CR_BKSCD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SCDx threshold */
    using MDF_SCD3CR_SCDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 2 consecutive 1's or 0's generate an event. (value: 0)
     *          - B_0x1: 2 consecutive 1's or 0's generate an event. (value: 1)
     */
        /** @brief 2 consecutive 1's or 0's generate an event. */
    constexpr std::uint32_t MDF_SCD3CR_SCDT_B_0x0 = 0;
        /** @brief 2 consecutive 1's or 0's generate an event. */
    constexpr std::uint32_t MDF_SCD3CR_SCDT_B_0x1 = 1;

    /** @brief SCDx active flag */
    using MDF_SCD3CR_SCDACTIVE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SCDx not active and can be configured if needed (value: 0)
     *          - B_0x1: SCDx active and protected fields cannot be configured (value: 1)
     */
        /** @brief SCDx not active and can be configured if needed */
    constexpr std::uint32_t MDF_SCD3CR_SCDACTIVE_B_0x0 = 0;
        /** @brief SCDx active and protected fields cannot be configured */
    constexpr std::uint32_t MDF_SCD3CR_SCDACTIVE_B_0x1 = 1;

    /** @brief MDF DFLT3 interrupt enable register 3 */
    using MDF_DFLT3IER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x22C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RXFIFO threshold interrupt enable */
    using MDF_DFLT3IER_FTHIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RXFIFO threshold interrupt disabled (value: 0)
     *          - B_0x1: RXFIFO threshold interrupt enabled (value: 1)
     */
        /** @brief RXFIFO threshold interrupt disabled */
    constexpr std::uint32_t MDF_DFLT3IER_FTHIE_B_0x0 = 0;
        /** @brief RXFIFO threshold interrupt enabled */
    constexpr std::uint32_t MDF_DFLT3IER_FTHIE_B_0x1 = 1;

    /** @brief Data overflow interrupt enable */
    using MDF_DFLT3IER_DOVRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Data overflow interrupt disabled (value: 0)
     *          - B_0x1: Data overflow interrupt enabled (value: 1)
     */
        /** @brief Data overflow interrupt disabled */
    constexpr std::uint32_t MDF_DFLT3IER_DOVRIE_B_0x0 = 0;
        /** @brief Data overflow interrupt enabled */
    constexpr std::uint32_t MDF_DFLT3IER_DOVRIE_B_0x1 = 1;

    /** @brief Snapshot data ready interrupt enable */
    using MDF_DFLT3IER_SSDRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Snapshot data ready interrupt disabled (value: 0)
     *          - B_0x1: Snapshot data ready interrupt enabled (value: 1)
     */
        /** @brief Snapshot data ready interrupt disabled */
    constexpr std::uint32_t MDF_DFLT3IER_SSDRIE_B_0x0 = 0;
        /** @brief Snapshot data ready interrupt enabled */
    constexpr std::uint32_t MDF_DFLT3IER_SSDRIE_B_0x1 = 1;

    /** @brief OLDx interrupt enable */
    using MDF_DFLT3IER_OLDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OLDx event interrupt disabled (value: 0)
     *          - B_0x1: OLDx event interrupt enabled (value: 1)
     */
        /** @brief OLDx event interrupt disabled */
    constexpr std::uint32_t MDF_DFLT3IER_OLDIE_B_0x0 = 0;
        /** @brief OLDx event interrupt enabled */
    constexpr std::uint32_t MDF_DFLT3IER_OLDIE_B_0x1 = 1;

    /** @brief Snapshot overrun interrupt enable */
    using MDF_DFLT3IER_SSOVRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Snapshot overrun interrupt disabled (value: 0)
     *          - B_0x1: Snapshot overrun interrupt enabled (value: 1)
     */
        /** @brief Snapshot overrun interrupt disabled */
    constexpr std::uint32_t MDF_DFLT3IER_SSOVRIE_B_0x0 = 0;
        /** @brief Snapshot overrun interrupt enabled */
    constexpr std::uint32_t MDF_DFLT3IER_SSOVRIE_B_0x1 = 1;

    /** @brief SCDx interrupt enable */
    using MDF_DFLT3IER_SCDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SCDx interrupt disabled (value: 0)
     *          - B_0x1: SCDx interrupt enabled (value: 1)
     */
        /** @brief SCDx interrupt disabled */
    constexpr std::uint32_t MDF_DFLT3IER_SCDIE_B_0x0 = 0;
        /** @brief SCDx interrupt enabled */
    constexpr std::uint32_t MDF_DFLT3IER_SCDIE_B_0x1 = 1;

    /** @brief Saturation detection interrupt enable */
    using MDF_DFLT3IER_SATIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Saturation interrupt disabled (value: 0)
     *          - B_0x1: Saturation interrupt enabled (value: 1)
     */
        /** @brief Saturation interrupt disabled */
    constexpr std::uint32_t MDF_DFLT3IER_SATIE_B_0x0 = 0;
        /** @brief Saturation interrupt enabled */
    constexpr std::uint32_t MDF_DFLT3IER_SATIE_B_0x1 = 1;

    /** @brief Clock absence detection interrupt enable */
    using MDF_DFLT3IER_CKABIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Clock absence interrupt disabled (value: 0)
     *          - B_0x1: Clock absence interrupt enabled (value: 1)
     */
        /** @brief Clock absence interrupt disabled */
    constexpr std::uint32_t MDF_DFLT3IER_CKABIE_B_0x0 = 0;
        /** @brief Clock absence interrupt enabled */
    constexpr std::uint32_t MDF_DFLT3IER_CKABIE_B_0x1 = 1;

    /** @brief Reshape filter overrun interrupt enable */
    using MDF_DFLT3IER_RFOVRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Reshape filter overrun interrupt disabled (value: 0)
     *          - B_0x1: Reshape filter overrun interrupt enabled (value: 1)
     */
        /** @brief Reshape filter overrun interrupt disabled */
    constexpr std::uint32_t MDF_DFLT3IER_RFOVRIE_B_0x0 = 0;
        /** @brief Reshape filter overrun interrupt enabled */
    constexpr std::uint32_t MDF_DFLT3IER_RFOVRIE_B_0x1 = 1;

    /** @brief MDF DFLT3 interrupt status register 3 */
    using MDF_DFLT3ISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x230, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RXFIFO threshold flag */
    using MDF_DFLT3ISR_FTHF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RXFIFO threshold not reached (value: 0)
     *          - B_0x1: RXFIFO threshold reached (value: 1)
     */
        /** @brief RXFIFO threshold not reached */
    constexpr std::uint32_t MDF_DFLT3ISR_FTHF_B_0x0 = 0;
        /** @brief RXFIFO threshold reached */
    constexpr std::uint32_t MDF_DFLT3ISR_FTHF_B_0x1 = 1;

    /** @brief Data overflow flag */
    using MDF_DFLT3ISR_DOVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Read 0 means that no overflow is detected. Write 0 has no effect. (value: 0)
     *          - B_0x1: Read 1 means that an overflow is detected; Write 1 clears this flag. (value: 1)
     */
        /** @brief Read 0 means that no overflow is detected. Write 0 has no effect. */
    constexpr std::uint32_t MDF_DFLT3ISR_DOVRF_B_0x0 = 0;
        /** @brief Read 1 means that an overflow is detected; Write 1 clears this flag. */
    constexpr std::uint32_t MDF_DFLT3ISR_DOVRF_B_0x1 = 1;

    /** @brief Snapshot data ready flag */
    using MDF_DFLT3ISR_SSDRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Read 0 means that no data is available. Write 0 has no effect. (value: 0)
     *          - B_0x1: Read 1 means that a new data is available. Write 1 clears this flag. (value: 1)
     */
        /** @brief Read 0 means that no data is available. Write 0 has no effect. */
    constexpr std::uint32_t MDF_DFLT3ISR_SSDRF_B_0x0 = 0;
        /** @brief Read 1 means that a new data is available. Write 1 clears this flag. */
    constexpr std::uint32_t MDF_DFLT3ISR_SSDRF_B_0x1 = 1;

    /** @brief RXFIFO not-empty flag */
    using MDF_DFLT3ISR_RXNEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RXFIFO empty (value: 0)
     *          - B_0x1: RXFIFO not empty (value: 1)
     */
        /** @brief RXFIFO empty */
    constexpr std::uint32_t MDF_DFLT3ISR_RXNEF_B_0x0 = 0;
        /** @brief RXFIFO not empty */
    constexpr std::uint32_t MDF_DFLT3ISR_RXNEF_B_0x1 = 1;

    /** @brief OLDx flag */
    using MDF_DFLT3ISR_OLDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Read 0 means that no OLDx event is detected. Write 0 has no effect. (value: 0)
     *          - B_0x1: Read 1 means that an OLDx event is detected Write 1 clears THHF, THLF and OLDF. (value: 1)
     */
        /** @brief Read 0 means that no OLDx event is detected. Write 0 has no effect. */
    constexpr std::uint32_t MDF_DFLT3ISR_OLDF_B_0x0 = 0;
        /** @brief Read 1 means that an OLDx event is detected Write 1 clears THHF, THLF and OLDF. */
    constexpr std::uint32_t MDF_DFLT3ISR_OLDF_B_0x1 = 1;

    /** @brief Low-threshold status flag */
    using MDF_DFLT3ISR_THLF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The signal was higher than OLDTHL when the last OLDx event occurred. (value: 0)
     *          - B_0x1: The signal was lower than OLDTHL when the last OLDx event occurred. (value: 1)
     */
        /** @brief The signal was higher than OLDTHL when the last OLDx event occurred. */
    constexpr std::uint32_t MDF_DFLT3ISR_THLF_B_0x0 = 0;
        /** @brief The signal was lower than OLDTHL when the last OLDx event occurred. */
    constexpr std::uint32_t MDF_DFLT3ISR_THLF_B_0x1 = 1;

    /** @brief High-threshold status flag */
    using MDF_DFLT3ISR_THHF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The signal was lower than OLDTHH when the last OLDx event occurred. (value: 0)
     *          - B_0x1: The signal was higher than OLDTHH when the last OLDx event occurred. (value: 1)
     */
        /** @brief The signal was lower than OLDTHH when the last OLDx event occurred. */
    constexpr std::uint32_t MDF_DFLT3ISR_THHF_B_0x0 = 0;
        /** @brief The signal was higher than OLDTHH when the last OLDx event occurred. */
    constexpr std::uint32_t MDF_DFLT3ISR_THHF_B_0x1 = 1;

    /** @brief Snapshot overrun flag */
    using MDF_DFLT3ISR_SSOVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Read 0 means that no snapshot overrun event is detected. Write 0 has no effect. (value: 0)
     *          - B_0x1: Read 1 means that a snapshot overrun event is detected. Write 1 clears this flag. (value: 1)
     */
        /** @brief Read 0 means that no snapshot overrun event is detected. Write 0 has no effect. */
    constexpr std::uint32_t MDF_DFLT3ISR_SSOVRF_B_0x0 = 0;
        /** @brief Read 1 means that a snapshot overrun event is detected. Write 1 clears this flag. */
    constexpr std::uint32_t MDF_DFLT3ISR_SSOVRF_B_0x1 = 1;

    /** @brief Short-circuit detector flag */
    using MDF_DFLT3ISR_SCDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Read 0 means that no SCD event is detected. Write 0 has no effect. (value: 0)
     *          - B_0x1: Read 1 means that a SCD event is detected. Write 1 clears this flag. (value: 1)
     */
        /** @brief Read 0 means that no SCD event is detected. Write 0 has no effect. */
    constexpr std::uint32_t MDF_DFLT3ISR_SCDF_B_0x0 = 0;
        /** @brief Read 1 means that a SCD event is detected. Write 1 clears this flag. */
    constexpr std::uint32_t MDF_DFLT3ISR_SCDF_B_0x1 = 1;

    /** @brief Saturation detection flag */
    using MDF_DFLT3ISR_SATF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Read 0 means that no saturation is detected. Write 0 has no effect. (value: 0)
     *          - B_0x1: Read 1 means that a saturation is detected. Write 1 clears this flag. (value: 1)
     */
        /** @brief Read 0 means that no saturation is detected. Write 0 has no effect. */
    constexpr std::uint32_t MDF_DFLT3ISR_SATF_B_0x0 = 0;
        /** @brief Read 1 means that a saturation is detected. Write 1 clears this flag. */
    constexpr std::uint32_t MDF_DFLT3ISR_SATF_B_0x1 = 1;

    /** @brief Clock absence detection flag */
    using MDF_DFLT3ISR_CKABF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Read 0 means that no clock absence is detected. Write 0 has no effect. (value: 0)
     *          - B_0x1: Read 1 means that a clock absence is detected. Write 1 clears this flag. (value: 1)
     */
        /** @brief Read 0 means that no clock absence is detected. Write 0 has no effect. */
    constexpr std::uint32_t MDF_DFLT3ISR_CKABF_B_0x0 = 0;
        /** @brief Read 1 means that a clock absence is detected. Write 1 clears this flag. */
    constexpr std::uint32_t MDF_DFLT3ISR_CKABF_B_0x1 = 1;

    /** @brief Reshape filter overrun detection flag */
    using MDF_DFLT3ISR_RFOVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Read 0 means that no reshape filter overrun is detected. Write 0 has no effect. (value: 0)
     *          - B_0x1: Read 1 means that reshape filter overrun is detected. Write 1 clears this flag. (value: 1)
     */
        /** @brief Read 0 means that no reshape filter overrun is detected. Write 0 has no effect. */
    constexpr std::uint32_t MDF_DFLT3ISR_RFOVRF_B_0x0 = 0;
        /** @brief Read 1 means that reshape filter overrun is detected. Write 1 clears this flag. */
    constexpr std::uint32_t MDF_DFLT3ISR_RFOVRF_B_0x1 = 1;

    /** @brief MDF offset error compensation control register 3 */
    using MDF_OEC3CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x234, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Offset error compensation */
    using MDF_OEC3CR_OFFSET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 26, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDF snapshot data register 3 */
    using MDF_SNPS3DR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x26C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Contains the MCIC decimation counter value when the last trigger event occurs (MCIC_CNT) */
    using MDF_SNPS3DR_MCICDC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extended data size */
    using MDF_SNPS3DR_EXTSDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Contains the 16 MSB of the last valid data processed by the digital filter. */
    using MDF_SNPS3DR_SDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDF digital filter data register 3 */
    using MDF_DFLT3DR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x270, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data processed by digital filter */
    using MDF_DFLT3DR_DR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDF serial interface control register 4 */
    using MDF_SITF4CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x280, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Serial interface enable */
    using MDF_SITF4CR_SITFEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Serial interface disabled (value: 0)
     *          - B_0x1: Serial interface enabled (value: 1)
     */
        /** @brief Serial interface disabled */
    constexpr std::uint32_t MDF_SITF4CR_SITFEN_B_0x0 = 0;
        /** @brief Serial interface enabled */
    constexpr std::uint32_t MDF_SITF4CR_SITFEN_B_0x1 = 1;

    /** @brief Serial clock source */
    using MDF_SITF4CR_SCKSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Serial clock source is MDF_CCK0. (value: 0)
     *          - B_0x1: Serial clock source is MDF_CCK1. (value: 1)
     */
        /** @brief Serial clock source is MDF_CCK0. */
    constexpr std::uint32_t MDF_SITF4CR_SCKSRC_B_0x0 = 0;
        /** @brief Serial clock source is MDF_CCK1. */
    constexpr std::uint32_t MDF_SITF4CR_SCKSRC_B_0x1 = 1;

    /** @brief Serial interface type */
    using MDF_SITF4CR_SITFMOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LF_MASTER SPI mode (value: 0)
     *          - B_0x1: Normal SPI mode (value: 1)
     *          - B_0x2: Manchester mode: rising edge = logic 0, falling edge = logic 1 (value: 2)
     *          - B_0x3: Manchester mode: rising edge = logic 1, falling edge = logic 0 (value: 3)
     */
        /** @brief LF_MASTER SPI mode */
    constexpr std::uint32_t MDF_SITF4CR_SITFMOD_B_0x0 = 0;
        /** @brief Normal SPI mode */
    constexpr std::uint32_t MDF_SITF4CR_SITFMOD_B_0x1 = 1;
        /** @brief Manchester mode: rising edge = logic 0, falling edge = logic 1 */
    constexpr std::uint32_t MDF_SITF4CR_SITFMOD_B_0x2 = 2;
        /** @brief Manchester mode: rising edge = logic 1, falling edge = logic 0 */
    constexpr std::uint32_t MDF_SITF4CR_SITFMOD_B_0x3 = 3;

    /** @brief Manchester symbol threshold/SPI threshold */
    using MDF_SITF4CR_STH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Serial interface active flag */
    using MDF_SITF4CR_SITFACTIVE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The serial interface is not active and can be configured if needed. (value: 0)
     *          - B_0x1: The serial interface is active and protected fields cannot be configured. (value: 1)
     */
        /** @brief The serial interface is not active and can be configured if needed. */
    constexpr std::uint32_t MDF_SITF4CR_SITFACTIVE_B_0x0 = 0;
        /** @brief The serial interface is active and protected fields cannot be configured. */
    constexpr std::uint32_t MDF_SITF4CR_SITFACTIVE_B_0x1 = 1;

    /** @brief MDF bitstream matrix control register 4 */
    using MDF_BSMX4CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x284, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bitstream Selection */
    using MDF_BSMX4CR_BSSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: bs0_r provided to DFLTx and SCDx (value: 0)
     *          - B_0x1: bs0_f provided to DFLTx and SCDx (value: 1)
     *          - B_0x2: bs1_r provided to DFLTx and SCDx (if instantiated) (value: 2)
     *          - B_0x3: bs1_f provided to DFLTx and SCDx (if instantiated) (value: 3)
     *          - B_0x1E: bs15_r provided to DFLTx and SCDx (if instantiated) (value: 30)
     *          - B_0x1F: bs15_f provided to DFLTx and SCDx (if instantiated) (value: 31)
     */
        /** @brief bs0_r provided to DFLTx and SCDx */
    constexpr std::uint32_t MDF_BSMX4CR_BSSEL_B_0x0 = 0;
        /** @brief bs0_f provided to DFLTx and SCDx */
    constexpr std::uint32_t MDF_BSMX4CR_BSSEL_B_0x1 = 1;
        /** @brief bs1_r provided to DFLTx and SCDx (if instantiated) */
    constexpr std::uint32_t MDF_BSMX4CR_BSSEL_B_0x2 = 2;
        /** @brief bs1_f provided to DFLTx and SCDx (if instantiated) */
    constexpr std::uint32_t MDF_BSMX4CR_BSSEL_B_0x3 = 3;
        /** @brief bs15_r provided to DFLTx and SCDx (if instantiated) */
    constexpr std::uint32_t MDF_BSMX4CR_BSSEL_B_0x1E = 30;
        /** @brief bs15_f provided to DFLTx and SCDx (if instantiated) */
    constexpr std::uint32_t MDF_BSMX4CR_BSSEL_B_0x1F = 31;

    /** @brief BSMX active flag */
    using MDF_BSMX4CR_BSMXACTIVE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BSMX is not active and can be configured if needed. (value: 0)
     *          - B_0x1: BSMX is active and protected fields cannot be configured. (value: 1)
     */
        /** @brief BSMX is not active and can be configured if needed. */
    constexpr std::uint32_t MDF_BSMX4CR_BSMXACTIVE_B_0x0 = 0;
        /** @brief BSMX is active and protected fields cannot be configured. */
    constexpr std::uint32_t MDF_BSMX4CR_BSMXACTIVE_B_0x1 = 1;

    /** @brief MDF digital filter control register 4 */
    using MDF_DFLT4CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x288, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Digital filter enable */
    using MDF_DFLT4CR_DFLTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Acquisition immediately stopped (value: 0)
     *          - B_0x1: Acquisition immediately started if ACQMOD[2:0] = 00x or 101, or acquisition started when the proper trigger event occurs if ACQMOD[2:0] = 01x or 100. (value: 1)
     */
        /** @brief Acquisition immediately stopped */
    constexpr std::uint32_t MDF_DFLT4CR_DFLTEN_B_0x0 = 0;
        /** @brief Acquisition immediately started if ACQMOD[2:0] = 00x or 101, or acquisition started when the proper trigger event occurs if ACQMOD[2:0] = 01x or 100. */
    constexpr std::uint32_t MDF_DFLT4CR_DFLTEN_B_0x1 = 1;

    /** @brief DMA requests enable */
    using MDF_DFLT4CR_DMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DMA interface for the corresponding digital filter disabled (value: 0)
     *          - B_0x1: DMA interface for the corresponding digital filter enabled (value: 1)
     */
        /** @brief DMA interface for the corresponding digital filter disabled */
    constexpr std::uint32_t MDF_DFLT4CR_DMAEN_B_0x0 = 0;
        /** @brief DMA interface for the corresponding digital filter enabled */
    constexpr std::uint32_t MDF_DFLT4CR_DMAEN_B_0x1 = 1;

    /** @brief RXFIFO Threshold selection */
    using MDF_DFLT4CR_FTH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RXFIFO threshold event generated when the RXFIFO is not empty (value: 0)
     *          - B_0x1: RXFIFO threshold event generated when the RXFIFO is half-full (value: 1)
     */
        /** @brief RXFIFO threshold event generated when the RXFIFO is not empty */
    constexpr std::uint32_t MDF_DFLT4CR_FTH_B_0x0 = 0;
        /** @brief RXFIFO threshold event generated when the RXFIFO is half-full */
    constexpr std::uint32_t MDF_DFLT4CR_FTH_B_0x1 = 1;

    /** @brief Digital filter trigger mode */
    using MDF_DFLT4CR_ACQMOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Asynchronous continuous acquisition mode (value: 0)
     *          - B_0x1: Asynchronous single-shot acquisition mode (value: 1)
     *          - B_0x2: Synchronous continuous acquisition mode (value: 2)
     *          - B_0x3: Synchronous, single-shot acquisition mode (value: 3)
     *          - B_0x4: Window continuous acquisition mode (value: 4)
     *          - B_0x5: Synchronous snapshot mode (value: 5)
     */
        /** @brief Asynchronous continuous acquisition mode */
    constexpr std::uint32_t MDF_DFLT4CR_ACQMOD_B_0x0 = 0;
        /** @brief Asynchronous single-shot acquisition mode */
    constexpr std::uint32_t MDF_DFLT4CR_ACQMOD_B_0x1 = 1;
        /** @brief Synchronous continuous acquisition mode */
    constexpr std::uint32_t MDF_DFLT4CR_ACQMOD_B_0x2 = 2;
        /** @brief Synchronous, single-shot acquisition mode */
    constexpr std::uint32_t MDF_DFLT4CR_ACQMOD_B_0x3 = 3;
        /** @brief Window continuous acquisition mode */
    constexpr std::uint32_t MDF_DFLT4CR_ACQMOD_B_0x4 = 4;
        /** @brief Synchronous snapshot mode */
    constexpr std::uint32_t MDF_DFLT4CR_ACQMOD_B_0x5 = 5;

    /** @brief Digital filter trigger sensitivity selection */
    using MDF_DFLT4CR_TRGSENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: A rising edge event triggers the acquisition. (value: 0)
     *          - B_0x1: A falling edge even triggers the acquisition. (value: 1)
     */
        /** @brief A rising edge event triggers the acquisition. */
    constexpr std::uint32_t MDF_DFLT4CR_TRGSENS_B_0x0 = 0;
        /** @brief A falling edge even triggers the acquisition. */
    constexpr std::uint32_t MDF_DFLT4CR_TRGSENS_B_0x1 = 1;

    /** @brief Digital filter trigger signal selection */
    using MDF_DFLT4CR_TRGSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TRGO selected (value: 0)
     *          - B_0x1: OLDx event selected (value: 1)
     *          - B_0x2: mdf_trg[0] selected (value: 2)
     *          - B_0xF: mdf_trg[13] selected (value: 15)
     */
        /** @brief TRGO selected */
    constexpr std::uint32_t MDF_DFLT4CR_TRGSRC_B_0x0 = 0;
        /** @brief OLDx event selected */
    constexpr std::uint32_t MDF_DFLT4CR_TRGSRC_B_0x1 = 1;
        /** @brief mdf_trg[0] selected */
    constexpr std::uint32_t MDF_DFLT4CR_TRGSRC_B_0x2 = 2;
        /** @brief mdf_trg[13] selected */
    constexpr std::uint32_t MDF_DFLT4CR_TRGSRC_B_0xF = 15;

    /** @brief Snapshot data format */
    using MDF_DFLT4CR_SNPSFMT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Integrator counter (INT_CNT) not inserted into MDF_SNPSxDR, leaving a data resolution of 23 bits (value: 0)
     *          - B_0x1: Integrator counter (INT_CNT) inserted at position [15:9] of MDF_SNPSxDR, leaving a data resolution of 16 bits. (value: 1)
     */
        /** @brief Integrator counter (INT_CNT) not inserted into MDF_SNPSxDR, leaving a data resolution of 23 bits */
    constexpr std::uint32_t MDF_DFLT4CR_SNPSFMT_B_0x0 = 0;
        /** @brief Integrator counter (INT_CNT) inserted at position [15:9] of MDF_SNPSxDR, leaving a data resolution of 16 bits. */
    constexpr std::uint32_t MDF_DFLT4CR_SNPSFMT_B_0x1 = 1;

    /** @brief Number of samples to be discarded */
    using MDF_DFLT4CR_NBDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No sample discarded (value: 0)
     *          - B_0x1: 1 sample discarded (value: 1)
     */
        /** @brief No sample discarded */
    constexpr std::uint32_t MDF_DFLT4CR_NBDIS_B_0x0 = 0;
        /** @brief 1 sample discarded */
    constexpr std::uint32_t MDF_DFLT4CR_NBDIS_B_0x1 = 1;

    /** @brief Digital filter run status flag */
    using MDF_DFLT4CR_DFLTRUN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Digital filter not running and ready to accept a new trigger event (value: 0)
     *          - B_0x1: Digital filter running (value: 1)
     */
        /** @brief Digital filter not running and ready to accept a new trigger event */
    constexpr std::uint32_t MDF_DFLT4CR_DFLTRUN_B_0x0 = 0;
        /** @brief Digital filter running */
    constexpr std::uint32_t MDF_DFLT4CR_DFLTRUN_B_0x1 = 1;

    /** @brief Digital filter active flag */
    using MDF_DFLT4CR_DFLTACTIVE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Digital filter not active (can be re-enabled again, via DFLTEN, if needed) (value: 0)
     *          - B_0x1: Digital filter active (value: 1)
     */
        /** @brief Digital filter not active (can be re-enabled again, via DFLTEN, if needed) */
    constexpr std::uint32_t MDF_DFLT4CR_DFLTACTIVE_B_0x0 = 0;
        /** @brief Digital filter active */
    constexpr std::uint32_t MDF_DFLT4CR_DFLTACTIVE_B_0x1 = 1;

    /** @brief MDF digital filter configuration register 4 */
    using MDF_DFLT4CICR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Source data for the digital filter */
    using MDF_DFLT4CICR_DATSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x2: Stream coming from the ADCITF1 selected (value: 2)
     *          - B_0x3: Stream coming from the ADCITF2 selected (value: 3)
     */
        /** @brief Stream coming from the ADCITF1 selected */
    constexpr std::uint32_t MDF_DFLT4CICR_DATSRC_B_0x2 = 2;
        /** @brief Stream coming from the ADCITF2 selected */
    constexpr std::uint32_t MDF_DFLT4CICR_DATSRC_B_0x3 = 3;

    /** @brief Select the CIC mode */
    using MDF_DFLT4CICR_CICMOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CIC split in two filters and MCIC configured in FastSinc filter (value: 0)
     *          - B_0x1: CIC split in two filters and MCIC configured in Sincless thansup>1less than/sup> filter (value: 1)
     *          - B_0x2: CIC split in two filters and MCIC configured in Sincless thansup>2less than/sup> filter (value: 2)
     *          - B_0x3: CIC split in two filters and MCIC configured in Sincless thansup>3less than/sup> filter (value: 3)
     *          - B_0x4: CIC configured in single Sincless thansup>4less than/sup> filter (value: 4)
     */
        /** @brief CIC split in two filters and MCIC configured in FastSinc filter */
    constexpr std::uint32_t MDF_DFLT4CICR_CICMOD_B_0x0 = 0;
        /** @brief CIC split in two filters and MCIC configured in Sincless thansup>1less than/sup> filter */
    constexpr std::uint32_t MDF_DFLT4CICR_CICMOD_B_0x1 = 1;
        /** @brief CIC split in two filters and MCIC configured in Sincless thansup>2less than/sup> filter */
    constexpr std::uint32_t MDF_DFLT4CICR_CICMOD_B_0x2 = 2;
        /** @brief CIC split in two filters and MCIC configured in Sincless thansup>3less than/sup> filter */
    constexpr std::uint32_t MDF_DFLT4CICR_CICMOD_B_0x3 = 3;
        /** @brief CIC configured in single Sincless thansup>4less than/sup> filter */
    constexpr std::uint32_t MDF_DFLT4CICR_CICMOD_B_0x4 = 4;

    /** @brief CIC decimation ratio selection */
    using MDF_DFLT4CICR_MCICD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Decimation ratio is 2. (value: 0)
     *          - B_0x1: Decimation ratio is 2. (value: 1)
     */
        /** @brief Decimation ratio is 2. */
    constexpr std::uint32_t MDF_DFLT4CICR_MCICD_B_0x0 = 0;
        /** @brief Decimation ratio is 2. */
    constexpr std::uint32_t MDF_DFLT4CICR_MCICD_B_0x1 = 1;

    /** @brief CIC decimation ratio selection */
    using MDF_DFLT4CICR_MCICD8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Decimation ratio is 2. (value: 0)
     *          - B_0x1: Decimation ratio is 2. (value: 1)
     */
        /** @brief Decimation ratio is 2. */
    constexpr std::uint32_t MDF_DFLT4CICR_MCICD8_B_0x0 = 0;
        /** @brief Decimation ratio is 2. */
    constexpr std::uint32_t MDF_DFLT4CICR_MCICD8_B_0x1 = 1;

    /** @brief Scaling factor selection */
    using MDF_DFLT4CICR_SCALE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 0 dB (value: 0)
     *          - B_0x1: + 3.5 dB (value: 1)
     *          - B_0x2: + 6 dB or shift left by 1 bit (value: 2)
     *          - B_0x18: + 72 dB or shift left by 12 bits (value: 24)
     *          - B_0x20: - 48.2 dB or shift right by 8 bits (default value) (value: 32)
     *          - B_0x21: - 44.6 dB (value: 33)
     *          - B_0x22: - 42.1 dB or shift right by 7 bits (value: 34)
     *          - B_0x23: - 38.6 dB (value: 35)
     *          - B_0x2E: - 6 dB or shift right by 1 bit (value: 46)
     *          - B_0x2F: - 2.5 dB (value: 47)
     */
        /** @brief 0 dB */
    constexpr std::uint32_t MDF_DFLT4CICR_SCALE_B_0x0 = 0;
        /** @brief + 3.5 dB */
    constexpr std::uint32_t MDF_DFLT4CICR_SCALE_B_0x1 = 1;
        /** @brief + 6 dB or shift left by 1 bit */
    constexpr std::uint32_t MDF_DFLT4CICR_SCALE_B_0x2 = 2;
        /** @brief + 72 dB or shift left by 12 bits */
    constexpr std::uint32_t MDF_DFLT4CICR_SCALE_B_0x18 = 24;
        /** @brief - 48.2 dB or shift right by 8 bits (default value) */
    constexpr std::uint32_t MDF_DFLT4CICR_SCALE_B_0x20 = 32;
        /** @brief - 44.6 dB */
    constexpr std::uint32_t MDF_DFLT4CICR_SCALE_B_0x21 = 33;
        /** @brief - 42.1 dB or shift right by 7 bits */
    constexpr std::uint32_t MDF_DFLT4CICR_SCALE_B_0x22 = 34;
        /** @brief - 38.6 dB */
    constexpr std::uint32_t MDF_DFLT4CICR_SCALE_B_0x23 = 35;
        /** @brief - 6 dB or shift right by 1 bit */
    constexpr std::uint32_t MDF_DFLT4CICR_SCALE_B_0x2E = 46;
        /** @brief - 2.5 dB */
    constexpr std::uint32_t MDF_DFLT4CICR_SCALE_B_0x2F = 47;

    /** @brief MDF reshape filter configuration register 4 */
    using MDF_DFLT4RSFR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x290, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reshaper filter bypass */
    using MDF_DFLT4RSFR_RSFLTBYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Reshape filter not bypassed (default value) (value: 0)
     *          - B_0x1: Reshape filter bypassed (value: 1)
     */
        /** @brief Reshape filter not bypassed (default value) */
    constexpr std::uint32_t MDF_DFLT4RSFR_RSFLTBYP_B_0x0 = 0;
        /** @brief Reshape filter bypassed */
    constexpr std::uint32_t MDF_DFLT4RSFR_RSFLTBYP_B_0x1 = 1;

    /** @brief Reshaper filter decimation ratio */
    using MDF_DFLT4RSFR_RSFLTD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Decimation ratio is 4 (default value). (value: 0)
     *          - B_0x1: Decimation ratio is 1. (value: 1)
     */
        /** @brief Decimation ratio is 4 (default value). */
    constexpr std::uint32_t MDF_DFLT4RSFR_RSFLTD_B_0x0 = 0;
        /** @brief Decimation ratio is 1. */
    constexpr std::uint32_t MDF_DFLT4RSFR_RSFLTD_B_0x1 = 1;

    /** @brief High-pass filter bypass */
    using MDF_DFLT4RSFR_HPFBYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HPF not bypassed (default value) (value: 0)
     *          - B_0x1: HPF bypassed (value: 1)
     */
        /** @brief HPF not bypassed (default value) */
    constexpr std::uint32_t MDF_DFLT4RSFR_HPFBYP_B_0x0 = 0;
        /** @brief HPF bypassed */
    constexpr std::uint32_t MDF_DFLT4RSFR_HPFBYP_B_0x1 = 1;

    /** @brief High-pass filter cut-off frequency */
    using MDF_DFLT4RSFR_HPFC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Cut-off frequency = 0.000625 x Fless thansub>PCMless than/sub> (value: 0)
     *          - B_0x1: Cut-off frequency = 0.00125 x Fless thansub>PCMless than/sub> (value: 1)
     *          - B_0x2: Cut-off frequency = 0.00250 x Fless thansub>PCMless than/sub> (value: 2)
     *          - B_0x3: Cut-off frequency = 0.00950 x Fless thansub>PCMless than/sub> (value: 3)
     */
        /** @brief Cut-off frequency = 0.000625 x Fless thansub>PCMless than/sub> */
    constexpr std::uint32_t MDF_DFLT4RSFR_HPFC_B_0x0 = 0;
        /** @brief Cut-off frequency = 0.00125 x Fless thansub>PCMless than/sub> */
    constexpr std::uint32_t MDF_DFLT4RSFR_HPFC_B_0x1 = 1;
        /** @brief Cut-off frequency = 0.00250 x Fless thansub>PCMless than/sub> */
    constexpr std::uint32_t MDF_DFLT4RSFR_HPFC_B_0x2 = 2;
        /** @brief Cut-off frequency = 0.00950 x Fless thansub>PCMless than/sub> */
    constexpr std::uint32_t MDF_DFLT4RSFR_HPFC_B_0x3 = 3;

    /** @brief MDF integrator configuration register 4 */
    using MDF_DFLT4INTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x294, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Integrator output division */
    using MDF_DFLT4INTR_INTDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The integrator data outputs are divided by 128 (default value). (value: 0)
     *          - B_0x1: The integrator data outputs are divided by 32. (value: 1)
     *          - B_0x2: The integrator data outputs are divided by 4. (value: 2)
     *          - B_0x3: The integrator data outputs are not divided. (value: 3)
     */
        /** @brief The integrator data outputs are divided by 128 (default value). */
    constexpr std::uint32_t MDF_DFLT4INTR_INTDIV_B_0x0 = 0;
        /** @brief The integrator data outputs are divided by 32. */
    constexpr std::uint32_t MDF_DFLT4INTR_INTDIV_B_0x1 = 1;
        /** @brief The integrator data outputs are divided by 4. */
    constexpr std::uint32_t MDF_DFLT4INTR_INTDIV_B_0x2 = 2;
        /** @brief The integrator data outputs are not divided. */
    constexpr std::uint32_t MDF_DFLT4INTR_INTDIV_B_0x3 = 3;

    /** @brief Integration value selection */
    using MDF_DFLT4INTR_INTVAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The integration value is 1, meaning bypass mode (default after reset). (value: 0)
     *          - B_0x1: The integration value is 2. (value: 1)
     */
        /** @brief The integration value is 1, meaning bypass mode (default after reset). */
    constexpr std::uint32_t MDF_DFLT4INTR_INTVAL_B_0x0 = 0;
        /** @brief The integration value is 2. */
    constexpr std::uint32_t MDF_DFLT4INTR_INTVAL_B_0x1 = 1;

    /** @brief MDF out-of limit detector control register 4 */
    using MDF_OLD4CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x298, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OLDx enable */
    using MDF_OLD4CR_OLDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OLDx disabled (default value) (value: 0)
     *          - B_0x1: OLDx enabled, including the ACIC filter working in continuous mode (value: 1)
     */
        /** @brief OLDx disabled (default value) */
    constexpr std::uint32_t MDF_OLD4CR_OLDEN_B_0x0 = 0;
        /** @brief OLDx enabled, including the ACIC filter working in continuous mode */
    constexpr std::uint32_t MDF_OLD4CR_OLDEN_B_0x1 = 1;

    /** @brief Threshold In band */
    using MDF_OLD4CR_THINB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The OLDx generates an event if the signal is lower than OLDTHL or higher than OLDTHH (default value). (value: 0)
     *          - B_0x1: The OLDx generates an event if the signal is lower than OLDTHH and higher than OLDTHL (value: 1)
     */
        /** @brief The OLDx generates an event if the signal is lower than OLDTHL or higher than OLDTHH (default value). */
    constexpr std::uint32_t MDF_OLD4CR_THINB_B_0x0 = 0;
        /** @brief The OLDx generates an event if the signal is lower than OLDTHH and higher than OLDTHL */
    constexpr std::uint32_t MDF_OLD4CR_THINB_B_0x1 = 1;

    /** @brief Break signal assignment for out-of limit detector */
    using MDF_OLD4CR_BKOLD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OLDx CIC order selection */
    using MDF_OLD4CR_ACICN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FastSinc filter type (value: 0)
     *          - B_0x1: Sincless thansup>1less than/sup> filter type (value: 1)
     *          - B_0x2: Sincless thansup>2less than/sup> filter type (value: 2)
     *          - B_0x3: Sincless thansup>3less than/sup> filter type (value: 3)
     */
        /** @brief FastSinc filter type */
    constexpr std::uint32_t MDF_OLD4CR_ACICN_B_0x0 = 0;
        /** @brief Sincless thansup>1less than/sup> filter type */
    constexpr std::uint32_t MDF_OLD4CR_ACICN_B_0x1 = 1;
        /** @brief Sincless thansup>2less than/sup> filter type */
    constexpr std::uint32_t MDF_OLD4CR_ACICN_B_0x2 = 2;
        /** @brief Sincless thansup>3less than/sup> filter type */
    constexpr std::uint32_t MDF_OLD4CR_ACICN_B_0x3 = 3;

    /** @brief OLDx CIC decimation ratio selection */
    using MDF_OLD4CR_ACICD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Decimation ratio is 1. (value: 0)
     *          - B_0x1: Decimation ratio is 2. (value: 1)
     */
        /** @brief Decimation ratio is 1. */
    constexpr std::uint32_t MDF_OLD4CR_ACICD_B_0x0 = 0;
        /** @brief Decimation ratio is 2. */
    constexpr std::uint32_t MDF_OLD4CR_ACICD_B_0x1 = 1;

    /** @brief OLDx active flag */
    using MDF_OLD4CR_OLDACTIVE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OLDx not active and can be configured if needed (value: 0)
     *          - B_0x1: OLDx active and protected fields cannot be configured (value: 1)
     */
        /** @brief OLDx not active and can be configured if needed */
    constexpr std::uint32_t MDF_OLD4CR_OLDACTIVE_B_0x0 = 0;
        /** @brief OLDx active and protected fields cannot be configured */
    constexpr std::uint32_t MDF_OLD4CR_OLDACTIVE_B_0x1 = 1;

    /** @brief MDF OLD4 low threshold register 4 */
    using MDF_OLD4THLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x29C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OLD low threshold value */
    using MDF_OLD4THLR_OLDTHL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 26, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDF OLD4 high threshold register 4 */
    using MDF_OLD4THHR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OLDx high threshold value */
    using MDF_OLD4THHR_OLDTHH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 26, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDF delay control register 4 */
    using MDF_DLY4CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2A4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Delay to apply to a bitstream */
    using MDF_DLY4CR_SKPDLY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No input sample skipped (value: 0)
     *          - B_0x1: 1 input sample skipped (value: 1)
     */
        /** @brief No input sample skipped */
    constexpr std::uint32_t MDF_DLY4CR_SKPDLY_B_0x0 = 0;
        /** @brief 1 input sample skipped */
    constexpr std::uint32_t MDF_DLY4CR_SKPDLY_B_0x1 = 1;

    /** @brief Skip busy flag */
    using MDF_DLY4CR_SKPBF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MDF ready to accept a new value into SKPDLY[6:0] (value: 0)
     *          - B_0x1: Last valid SKPDLY[6:0] still under processing (value: 1)
     */
        /** @brief MDF ready to accept a new value into SKPDLY[6:0] */
    constexpr std::uint32_t MDF_DLY4CR_SKPBF_B_0x0 = 0;
        /** @brief Last valid SKPDLY[6:0] still under processing */
    constexpr std::uint32_t MDF_DLY4CR_SKPBF_B_0x1 = 1;

    /** @brief MDF short circuit detector control register 4 */
    using MDF_SCD4CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2A8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SCDx enable */
    using MDF_SCD4CR_SCDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SCDx disabled (value: 0)
     *          - B_0x1: SSCDx enabled, (value: 1)
     */
        /** @brief SCDx disabled */
    constexpr std::uint32_t MDF_SCD4CR_SCDEN_B_0x0 = 0;
        /** @brief SSCDx enabled, */
    constexpr std::uint32_t MDF_SCD4CR_SCDEN_B_0x1 = 1;

    /** @brief Break signal assignment for short circuit detector */
    using MDF_SCD4CR_BKSCD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SCDx threshold */
    using MDF_SCD4CR_SCDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 2 consecutive 1's or 0's generate an event. (value: 0)
     *          - B_0x1: 2 consecutive 1's or 0's generate an event. (value: 1)
     */
        /** @brief 2 consecutive 1's or 0's generate an event. */
    constexpr std::uint32_t MDF_SCD4CR_SCDT_B_0x0 = 0;
        /** @brief 2 consecutive 1's or 0's generate an event. */
    constexpr std::uint32_t MDF_SCD4CR_SCDT_B_0x1 = 1;

    /** @brief SCDx active flag */
    using MDF_SCD4CR_SCDACTIVE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SCDx not active and can be configured if needed (value: 0)
     *          - B_0x1: SCDx active and protected fields cannot be configured (value: 1)
     */
        /** @brief SCDx not active and can be configured if needed */
    constexpr std::uint32_t MDF_SCD4CR_SCDACTIVE_B_0x0 = 0;
        /** @brief SCDx active and protected fields cannot be configured */
    constexpr std::uint32_t MDF_SCD4CR_SCDACTIVE_B_0x1 = 1;

    /** @brief MDF DFLT4 interrupt enable register 4 */
    using MDF_DFLT4IER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2AC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RXFIFO threshold interrupt enable */
    using MDF_DFLT4IER_FTHIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RXFIFO threshold interrupt disabled (value: 0)
     *          - B_0x1: RXFIFO threshold interrupt enabled (value: 1)
     */
        /** @brief RXFIFO threshold interrupt disabled */
    constexpr std::uint32_t MDF_DFLT4IER_FTHIE_B_0x0 = 0;
        /** @brief RXFIFO threshold interrupt enabled */
    constexpr std::uint32_t MDF_DFLT4IER_FTHIE_B_0x1 = 1;

    /** @brief Data overflow interrupt enable */
    using MDF_DFLT4IER_DOVRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Data overflow interrupt disabled (value: 0)
     *          - B_0x1: Data overflow interrupt enabled (value: 1)
     */
        /** @brief Data overflow interrupt disabled */
    constexpr std::uint32_t MDF_DFLT4IER_DOVRIE_B_0x0 = 0;
        /** @brief Data overflow interrupt enabled */
    constexpr std::uint32_t MDF_DFLT4IER_DOVRIE_B_0x1 = 1;

    /** @brief Snapshot data ready interrupt enable */
    using MDF_DFLT4IER_SSDRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Snapshot data ready interrupt disabled (value: 0)
     *          - B_0x1: Snapshot data ready interrupt enabled (value: 1)
     */
        /** @brief Snapshot data ready interrupt disabled */
    constexpr std::uint32_t MDF_DFLT4IER_SSDRIE_B_0x0 = 0;
        /** @brief Snapshot data ready interrupt enabled */
    constexpr std::uint32_t MDF_DFLT4IER_SSDRIE_B_0x1 = 1;

    /** @brief OLDx interrupt enable */
    using MDF_DFLT4IER_OLDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OLDx event interrupt disabled (value: 0)
     *          - B_0x1: OLDx event interrupt enabled (value: 1)
     */
        /** @brief OLDx event interrupt disabled */
    constexpr std::uint32_t MDF_DFLT4IER_OLDIE_B_0x0 = 0;
        /** @brief OLDx event interrupt enabled */
    constexpr std::uint32_t MDF_DFLT4IER_OLDIE_B_0x1 = 1;

    /** @brief Snapshot overrun interrupt enable */
    using MDF_DFLT4IER_SSOVRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Snapshot overrun interrupt disabled (value: 0)
     *          - B_0x1: Snapshot overrun interrupt enabled (value: 1)
     */
        /** @brief Snapshot overrun interrupt disabled */
    constexpr std::uint32_t MDF_DFLT4IER_SSOVRIE_B_0x0 = 0;
        /** @brief Snapshot overrun interrupt enabled */
    constexpr std::uint32_t MDF_DFLT4IER_SSOVRIE_B_0x1 = 1;

    /** @brief SCDx interrupt enable */
    using MDF_DFLT4IER_SCDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SCDx interrupt disabled (value: 0)
     *          - B_0x1: SCDx interrupt enabled (value: 1)
     */
        /** @brief SCDx interrupt disabled */
    constexpr std::uint32_t MDF_DFLT4IER_SCDIE_B_0x0 = 0;
        /** @brief SCDx interrupt enabled */
    constexpr std::uint32_t MDF_DFLT4IER_SCDIE_B_0x1 = 1;

    /** @brief Saturation detection interrupt enable */
    using MDF_DFLT4IER_SATIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Saturation interrupt disabled (value: 0)
     *          - B_0x1: Saturation interrupt enabled (value: 1)
     */
        /** @brief Saturation interrupt disabled */
    constexpr std::uint32_t MDF_DFLT4IER_SATIE_B_0x0 = 0;
        /** @brief Saturation interrupt enabled */
    constexpr std::uint32_t MDF_DFLT4IER_SATIE_B_0x1 = 1;

    /** @brief Clock absence detection interrupt enable */
    using MDF_DFLT4IER_CKABIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Clock absence interrupt disabled (value: 0)
     *          - B_0x1: Clock absence interrupt enabled (value: 1)
     */
        /** @brief Clock absence interrupt disabled */
    constexpr std::uint32_t MDF_DFLT4IER_CKABIE_B_0x0 = 0;
        /** @brief Clock absence interrupt enabled */
    constexpr std::uint32_t MDF_DFLT4IER_CKABIE_B_0x1 = 1;

    /** @brief Reshape filter overrun interrupt enable */
    using MDF_DFLT4IER_RFOVRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Reshape filter overrun interrupt disabled (value: 0)
     *          - B_0x1: Reshape filter overrun interrupt enabled (value: 1)
     */
        /** @brief Reshape filter overrun interrupt disabled */
    constexpr std::uint32_t MDF_DFLT4IER_RFOVRIE_B_0x0 = 0;
        /** @brief Reshape filter overrun interrupt enabled */
    constexpr std::uint32_t MDF_DFLT4IER_RFOVRIE_B_0x1 = 1;

    /** @brief MDF DFLT4 interrupt status register 4 */
    using MDF_DFLT4ISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2B0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RXFIFO threshold flag */
    using MDF_DFLT4ISR_FTHF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RXFIFO threshold not reached (value: 0)
     *          - B_0x1: RXFIFO threshold reached (value: 1)
     */
        /** @brief RXFIFO threshold not reached */
    constexpr std::uint32_t MDF_DFLT4ISR_FTHF_B_0x0 = 0;
        /** @brief RXFIFO threshold reached */
    constexpr std::uint32_t MDF_DFLT4ISR_FTHF_B_0x1 = 1;

    /** @brief Data overflow flag */
    using MDF_DFLT4ISR_DOVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Read 0 means that no overflow is detected. Write 0 has no effect. (value: 0)
     *          - B_0x1: Read 1 means that an overflow is detected; Write 1 clears this flag. (value: 1)
     */
        /** @brief Read 0 means that no overflow is detected. Write 0 has no effect. */
    constexpr std::uint32_t MDF_DFLT4ISR_DOVRF_B_0x0 = 0;
        /** @brief Read 1 means that an overflow is detected; Write 1 clears this flag. */
    constexpr std::uint32_t MDF_DFLT4ISR_DOVRF_B_0x1 = 1;

    /** @brief Snapshot data ready flag */
    using MDF_DFLT4ISR_SSDRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Read 0 means that no data is available. Write 0 has no effect. (value: 0)
     *          - B_0x1: Read 1 means that a new data is available. Write 1 clears this flag. (value: 1)
     */
        /** @brief Read 0 means that no data is available. Write 0 has no effect. */
    constexpr std::uint32_t MDF_DFLT4ISR_SSDRF_B_0x0 = 0;
        /** @brief Read 1 means that a new data is available. Write 1 clears this flag. */
    constexpr std::uint32_t MDF_DFLT4ISR_SSDRF_B_0x1 = 1;

    /** @brief RXFIFO not-empty flag */
    using MDF_DFLT4ISR_RXNEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RXFIFO empty (value: 0)
     *          - B_0x1: RXFIFO not empty (value: 1)
     */
        /** @brief RXFIFO empty */
    constexpr std::uint32_t MDF_DFLT4ISR_RXNEF_B_0x0 = 0;
        /** @brief RXFIFO not empty */
    constexpr std::uint32_t MDF_DFLT4ISR_RXNEF_B_0x1 = 1;

    /** @brief OLDx flag */
    using MDF_DFLT4ISR_OLDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Read 0 means that no OLDx event is detected. Write 0 has no effect. (value: 0)
     *          - B_0x1: Read 1 means that an OLDx event is detected Write 1 clears THHF, THLF and OLDF. (value: 1)
     */
        /** @brief Read 0 means that no OLDx event is detected. Write 0 has no effect. */
    constexpr std::uint32_t MDF_DFLT4ISR_OLDF_B_0x0 = 0;
        /** @brief Read 1 means that an OLDx event is detected Write 1 clears THHF, THLF and OLDF. */
    constexpr std::uint32_t MDF_DFLT4ISR_OLDF_B_0x1 = 1;

    /** @brief Low-threshold status flag */
    using MDF_DFLT4ISR_THLF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The signal was higher than OLDTHL when the last OLDx event occurred. (value: 0)
     *          - B_0x1: The signal was lower than OLDTHL when the last OLDx event occurred. (value: 1)
     */
        /** @brief The signal was higher than OLDTHL when the last OLDx event occurred. */
    constexpr std::uint32_t MDF_DFLT4ISR_THLF_B_0x0 = 0;
        /** @brief The signal was lower than OLDTHL when the last OLDx event occurred. */
    constexpr std::uint32_t MDF_DFLT4ISR_THLF_B_0x1 = 1;

    /** @brief High-threshold status flag */
    using MDF_DFLT4ISR_THHF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The signal was lower than OLDTHH when the last OLDx event occurred. (value: 0)
     *          - B_0x1: The signal was higher than OLDTHH when the last OLDx event occurred. (value: 1)
     */
        /** @brief The signal was lower than OLDTHH when the last OLDx event occurred. */
    constexpr std::uint32_t MDF_DFLT4ISR_THHF_B_0x0 = 0;
        /** @brief The signal was higher than OLDTHH when the last OLDx event occurred. */
    constexpr std::uint32_t MDF_DFLT4ISR_THHF_B_0x1 = 1;

    /** @brief Snapshot overrun flag */
    using MDF_DFLT4ISR_SSOVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Read 0 means that no snapshot overrun event is detected. Write 0 has no effect. (value: 0)
     *          - B_0x1: Read 1 means that a snapshot overrun event is detected. Write 1 clears this flag. (value: 1)
     */
        /** @brief Read 0 means that no snapshot overrun event is detected. Write 0 has no effect. */
    constexpr std::uint32_t MDF_DFLT4ISR_SSOVRF_B_0x0 = 0;
        /** @brief Read 1 means that a snapshot overrun event is detected. Write 1 clears this flag. */
    constexpr std::uint32_t MDF_DFLT4ISR_SSOVRF_B_0x1 = 1;

    /** @brief Short-circuit detector flag */
    using MDF_DFLT4ISR_SCDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Read 0 means that no SCD event is detected. Write 0 has no effect. (value: 0)
     *          - B_0x1: Read 1 means that a SCD event is detected. Write 1 clears this flag. (value: 1)
     */
        /** @brief Read 0 means that no SCD event is detected. Write 0 has no effect. */
    constexpr std::uint32_t MDF_DFLT4ISR_SCDF_B_0x0 = 0;
        /** @brief Read 1 means that a SCD event is detected. Write 1 clears this flag. */
    constexpr std::uint32_t MDF_DFLT4ISR_SCDF_B_0x1 = 1;

    /** @brief Saturation detection flag */
    using MDF_DFLT4ISR_SATF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Read 0 means that no saturation is detected. Write 0 has no effect. (value: 0)
     *          - B_0x1: Read 1 means that a saturation is detected. Write 1 clears this flag. (value: 1)
     */
        /** @brief Read 0 means that no saturation is detected. Write 0 has no effect. */
    constexpr std::uint32_t MDF_DFLT4ISR_SATF_B_0x0 = 0;
        /** @brief Read 1 means that a saturation is detected. Write 1 clears this flag. */
    constexpr std::uint32_t MDF_DFLT4ISR_SATF_B_0x1 = 1;

    /** @brief Clock absence detection flag */
    using MDF_DFLT4ISR_CKABF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Read 0 means that no clock absence is detected. Write 0 has no effect. (value: 0)
     *          - B_0x1: Read 1 means that a clock absence is detected. Write 1 clears this flag. (value: 1)
     */
        /** @brief Read 0 means that no clock absence is detected. Write 0 has no effect. */
    constexpr std::uint32_t MDF_DFLT4ISR_CKABF_B_0x0 = 0;
        /** @brief Read 1 means that a clock absence is detected. Write 1 clears this flag. */
    constexpr std::uint32_t MDF_DFLT4ISR_CKABF_B_0x1 = 1;

    /** @brief Reshape filter overrun detection flag */
    using MDF_DFLT4ISR_RFOVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Read 0 means that no reshape filter overrun is detected. Write 0 has no effect. (value: 0)
     *          - B_0x1: Read 1 means that reshape filter overrun is detected. Write 1 clears this flag. (value: 1)
     */
        /** @brief Read 0 means that no reshape filter overrun is detected. Write 0 has no effect. */
    constexpr std::uint32_t MDF_DFLT4ISR_RFOVRF_B_0x0 = 0;
        /** @brief Read 1 means that reshape filter overrun is detected. Write 1 clears this flag. */
    constexpr std::uint32_t MDF_DFLT4ISR_RFOVRF_B_0x1 = 1;

    /** @brief MDF offset error compensation control register 4 */
    using MDF_OEC4CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2B4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Offset error compensation */
    using MDF_OEC4CR_OFFSET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 26, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDF snapshot data register 4 */
    using MDF_SNPS4DR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2EC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Contains the MCIC decimation counter value when the last trigger event occurs (MCIC_CNT) */
    using MDF_SNPS4DR_MCICDC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extended data size */
    using MDF_SNPS4DR_EXTSDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Contains the 16 MSB of the last valid data processed by the digital filter. */
    using MDF_SNPS4DR_SDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDF digital filter data register 4 */
    using MDF_DFLT4DR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2F0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data processed by digital filter */
    using MDF_DFLT4DR_DR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDF serial interface control register 5 */
    using MDF_SITF5CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x300, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Serial interface enable */
    using MDF_SITF5CR_SITFEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Serial interface disabled (value: 0)
     *          - B_0x1: Serial interface enabled (value: 1)
     */
        /** @brief Serial interface disabled */
    constexpr std::uint32_t MDF_SITF5CR_SITFEN_B_0x0 = 0;
        /** @brief Serial interface enabled */
    constexpr std::uint32_t MDF_SITF5CR_SITFEN_B_0x1 = 1;

    /** @brief Serial clock source */
    using MDF_SITF5CR_SCKSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Serial clock source is MDF_CCK0. (value: 0)
     *          - B_0x1: Serial clock source is MDF_CCK1. (value: 1)
     */
        /** @brief Serial clock source is MDF_CCK0. */
    constexpr std::uint32_t MDF_SITF5CR_SCKSRC_B_0x0 = 0;
        /** @brief Serial clock source is MDF_CCK1. */
    constexpr std::uint32_t MDF_SITF5CR_SCKSRC_B_0x1 = 1;

    /** @brief Serial interface type */
    using MDF_SITF5CR_SITFMOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LF_MASTER SPI mode (value: 0)
     *          - B_0x1: Normal SPI mode (value: 1)
     *          - B_0x2: Manchester mode: rising edge = logic 0, falling edge = logic 1 (value: 2)
     *          - B_0x3: Manchester mode: rising edge = logic 1, falling edge = logic 0 (value: 3)
     */
        /** @brief LF_MASTER SPI mode */
    constexpr std::uint32_t MDF_SITF5CR_SITFMOD_B_0x0 = 0;
        /** @brief Normal SPI mode */
    constexpr std::uint32_t MDF_SITF5CR_SITFMOD_B_0x1 = 1;
        /** @brief Manchester mode: rising edge = logic 0, falling edge = logic 1 */
    constexpr std::uint32_t MDF_SITF5CR_SITFMOD_B_0x2 = 2;
        /** @brief Manchester mode: rising edge = logic 1, falling edge = logic 0 */
    constexpr std::uint32_t MDF_SITF5CR_SITFMOD_B_0x3 = 3;

    /** @brief Manchester symbol threshold/SPI threshold */
    using MDF_SITF5CR_STH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Serial interface active flag */
    using MDF_SITF5CR_SITFACTIVE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The serial interface is not active and can be configured if needed. (value: 0)
     *          - B_0x1: The serial interface is active and protected fields cannot be configured. (value: 1)
     */
        /** @brief The serial interface is not active and can be configured if needed. */
    constexpr std::uint32_t MDF_SITF5CR_SITFACTIVE_B_0x0 = 0;
        /** @brief The serial interface is active and protected fields cannot be configured. */
    constexpr std::uint32_t MDF_SITF5CR_SITFACTIVE_B_0x1 = 1;

    /** @brief MDF bitstream matrix control register 5 */
    using MDF_BSMX5CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x304, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bitstream Selection */
    using MDF_BSMX5CR_BSSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: bs0_r provided to DFLTx and SCDx (value: 0)
     *          - B_0x1: bs0_f provided to DFLTx and SCDx (value: 1)
     *          - B_0x2: bs1_r provided to DFLTx and SCDx (if instantiated) (value: 2)
     *          - B_0x3: bs1_f provided to DFLTx and SCDx (if instantiated) (value: 3)
     *          - B_0x1E: bs15_r provided to DFLTx and SCDx (if instantiated) (value: 30)
     *          - B_0x1F: bs15_f provided to DFLTx and SCDx (if instantiated) (value: 31)
     */
        /** @brief bs0_r provided to DFLTx and SCDx */
    constexpr std::uint32_t MDF_BSMX5CR_BSSEL_B_0x0 = 0;
        /** @brief bs0_f provided to DFLTx and SCDx */
    constexpr std::uint32_t MDF_BSMX5CR_BSSEL_B_0x1 = 1;
        /** @brief bs1_r provided to DFLTx and SCDx (if instantiated) */
    constexpr std::uint32_t MDF_BSMX5CR_BSSEL_B_0x2 = 2;
        /** @brief bs1_f provided to DFLTx and SCDx (if instantiated) */
    constexpr std::uint32_t MDF_BSMX5CR_BSSEL_B_0x3 = 3;
        /** @brief bs15_r provided to DFLTx and SCDx (if instantiated) */
    constexpr std::uint32_t MDF_BSMX5CR_BSSEL_B_0x1E = 30;
        /** @brief bs15_f provided to DFLTx and SCDx (if instantiated) */
    constexpr std::uint32_t MDF_BSMX5CR_BSSEL_B_0x1F = 31;

    /** @brief BSMX active flag */
    using MDF_BSMX5CR_BSMXACTIVE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BSMX is not active and can be configured if needed. (value: 0)
     *          - B_0x1: BSMX is active and protected fields cannot be configured. (value: 1)
     */
        /** @brief BSMX is not active and can be configured if needed. */
    constexpr std::uint32_t MDF_BSMX5CR_BSMXACTIVE_B_0x0 = 0;
        /** @brief BSMX is active and protected fields cannot be configured. */
    constexpr std::uint32_t MDF_BSMX5CR_BSMXACTIVE_B_0x1 = 1;

    /** @brief MDF digital filter control register 5 */
    using MDF_DFLT5CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x308, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Digital filter enable */
    using MDF_DFLT5CR_DFLTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Acquisition immediately stopped (value: 0)
     *          - B_0x1: Acquisition immediately started if ACQMOD[2:0] = 00x or 101, or acquisition started when the proper trigger event occurs if ACQMOD[2:0] = 01x or 100. (value: 1)
     */
        /** @brief Acquisition immediately stopped */
    constexpr std::uint32_t MDF_DFLT5CR_DFLTEN_B_0x0 = 0;
        /** @brief Acquisition immediately started if ACQMOD[2:0] = 00x or 101, or acquisition started when the proper trigger event occurs if ACQMOD[2:0] = 01x or 100. */
    constexpr std::uint32_t MDF_DFLT5CR_DFLTEN_B_0x1 = 1;

    /** @brief DMA requests enable */
    using MDF_DFLT5CR_DMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DMA interface for the corresponding digital filter disabled (value: 0)
     *          - B_0x1: DMA interface for the corresponding digital filter enabled (value: 1)
     */
        /** @brief DMA interface for the corresponding digital filter disabled */
    constexpr std::uint32_t MDF_DFLT5CR_DMAEN_B_0x0 = 0;
        /** @brief DMA interface for the corresponding digital filter enabled */
    constexpr std::uint32_t MDF_DFLT5CR_DMAEN_B_0x1 = 1;

    /** @brief RXFIFO Threshold selection */
    using MDF_DFLT5CR_FTH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RXFIFO threshold event generated when the RXFIFO is not empty (value: 0)
     *          - B_0x1: RXFIFO threshold event generated when the RXFIFO is half-full (value: 1)
     */
        /** @brief RXFIFO threshold event generated when the RXFIFO is not empty */
    constexpr std::uint32_t MDF_DFLT5CR_FTH_B_0x0 = 0;
        /** @brief RXFIFO threshold event generated when the RXFIFO is half-full */
    constexpr std::uint32_t MDF_DFLT5CR_FTH_B_0x1 = 1;

    /** @brief Digital filter trigger mode */
    using MDF_DFLT5CR_ACQMOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Asynchronous continuous acquisition mode (value: 0)
     *          - B_0x1: Asynchronous single-shot acquisition mode (value: 1)
     *          - B_0x2: Synchronous continuous acquisition mode (value: 2)
     *          - B_0x3: Synchronous, single-shot acquisition mode (value: 3)
     *          - B_0x4: Window continuous acquisition mode (value: 4)
     *          - B_0x5: Synchronous snapshot mode (value: 5)
     */
        /** @brief Asynchronous continuous acquisition mode */
    constexpr std::uint32_t MDF_DFLT5CR_ACQMOD_B_0x0 = 0;
        /** @brief Asynchronous single-shot acquisition mode */
    constexpr std::uint32_t MDF_DFLT5CR_ACQMOD_B_0x1 = 1;
        /** @brief Synchronous continuous acquisition mode */
    constexpr std::uint32_t MDF_DFLT5CR_ACQMOD_B_0x2 = 2;
        /** @brief Synchronous, single-shot acquisition mode */
    constexpr std::uint32_t MDF_DFLT5CR_ACQMOD_B_0x3 = 3;
        /** @brief Window continuous acquisition mode */
    constexpr std::uint32_t MDF_DFLT5CR_ACQMOD_B_0x4 = 4;
        /** @brief Synchronous snapshot mode */
    constexpr std::uint32_t MDF_DFLT5CR_ACQMOD_B_0x5 = 5;

    /** @brief Digital filter trigger sensitivity selection */
    using MDF_DFLT5CR_TRGSENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: A rising edge event triggers the acquisition. (value: 0)
     *          - B_0x1: A falling edge even triggers the acquisition. (value: 1)
     */
        /** @brief A rising edge event triggers the acquisition. */
    constexpr std::uint32_t MDF_DFLT5CR_TRGSENS_B_0x0 = 0;
        /** @brief A falling edge even triggers the acquisition. */
    constexpr std::uint32_t MDF_DFLT5CR_TRGSENS_B_0x1 = 1;

    /** @brief Digital filter trigger signal selection */
    using MDF_DFLT5CR_TRGSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TRGO selected (value: 0)
     *          - B_0x1: OLDx event selected (value: 1)
     *          - B_0x2: mdf_trg[0] selected (value: 2)
     *          - B_0xF: mdf_trg[13] selected (value: 15)
     */
        /** @brief TRGO selected */
    constexpr std::uint32_t MDF_DFLT5CR_TRGSRC_B_0x0 = 0;
        /** @brief OLDx event selected */
    constexpr std::uint32_t MDF_DFLT5CR_TRGSRC_B_0x1 = 1;
        /** @brief mdf_trg[0] selected */
    constexpr std::uint32_t MDF_DFLT5CR_TRGSRC_B_0x2 = 2;
        /** @brief mdf_trg[13] selected */
    constexpr std::uint32_t MDF_DFLT5CR_TRGSRC_B_0xF = 15;

    /** @brief Snapshot data format */
    using MDF_DFLT5CR_SNPSFMT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Integrator counter (INT_CNT) not inserted into MDF_SNPSxDR, leaving a data resolution of 23 bits (value: 0)
     *          - B_0x1: Integrator counter (INT_CNT) inserted at position [15:9] of MDF_SNPSxDR, leaving a data resolution of 16 bits. (value: 1)
     */
        /** @brief Integrator counter (INT_CNT) not inserted into MDF_SNPSxDR, leaving a data resolution of 23 bits */
    constexpr std::uint32_t MDF_DFLT5CR_SNPSFMT_B_0x0 = 0;
        /** @brief Integrator counter (INT_CNT) inserted at position [15:9] of MDF_SNPSxDR, leaving a data resolution of 16 bits. */
    constexpr std::uint32_t MDF_DFLT5CR_SNPSFMT_B_0x1 = 1;

    /** @brief Number of samples to be discarded */
    using MDF_DFLT5CR_NBDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No sample discarded (value: 0)
     *          - B_0x1: 1 sample discarded (value: 1)
     */
        /** @brief No sample discarded */
    constexpr std::uint32_t MDF_DFLT5CR_NBDIS_B_0x0 = 0;
        /** @brief 1 sample discarded */
    constexpr std::uint32_t MDF_DFLT5CR_NBDIS_B_0x1 = 1;

    /** @brief Digital filter run status flag */
    using MDF_DFLT5CR_DFLTRUN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Digital filter not running and ready to accept a new trigger event (value: 0)
     *          - B_0x1: Digital filter running (value: 1)
     */
        /** @brief Digital filter not running and ready to accept a new trigger event */
    constexpr std::uint32_t MDF_DFLT5CR_DFLTRUN_B_0x0 = 0;
        /** @brief Digital filter running */
    constexpr std::uint32_t MDF_DFLT5CR_DFLTRUN_B_0x1 = 1;

    /** @brief Digital filter active flag */
    using MDF_DFLT5CR_DFLTACTIVE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Digital filter not active (can be re-enabled again, via DFLTEN, if needed) (value: 0)
     *          - B_0x1: Digital filter active (value: 1)
     */
        /** @brief Digital filter not active (can be re-enabled again, via DFLTEN, if needed) */
    constexpr std::uint32_t MDF_DFLT5CR_DFLTACTIVE_B_0x0 = 0;
        /** @brief Digital filter active */
    constexpr std::uint32_t MDF_DFLT5CR_DFLTACTIVE_B_0x1 = 1;

    /** @brief MDF digital filter configuration register 5 */
    using MDF_DFLT5CICR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Source data for the digital filter */
    using MDF_DFLT5CICR_DATSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x2: Stream coming from the ADCITF1 selected (value: 2)
     *          - B_0x3: Stream coming from the ADCITF2 selected (value: 3)
     */
        /** @brief Stream coming from the ADCITF1 selected */
    constexpr std::uint32_t MDF_DFLT5CICR_DATSRC_B_0x2 = 2;
        /** @brief Stream coming from the ADCITF2 selected */
    constexpr std::uint32_t MDF_DFLT5CICR_DATSRC_B_0x3 = 3;

    /** @brief Select the CIC mode */
    using MDF_DFLT5CICR_CICMOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CIC split in two filters and MCIC configured in FastSinc filter (value: 0)
     *          - B_0x1: CIC split in two filters and MCIC configured in Sincless thansup>1less than/sup> filter (value: 1)
     *          - B_0x2: CIC split in two filters and MCIC configured in Sincless thansup>2less than/sup> filter (value: 2)
     *          - B_0x3: CIC split in two filters and MCIC configured in Sincless thansup>3less than/sup> filter (value: 3)
     *          - B_0x4: CIC configured in single Sincless thansup>4less than/sup> filter (value: 4)
     */
        /** @brief CIC split in two filters and MCIC configured in FastSinc filter */
    constexpr std::uint32_t MDF_DFLT5CICR_CICMOD_B_0x0 = 0;
        /** @brief CIC split in two filters and MCIC configured in Sincless thansup>1less than/sup> filter */
    constexpr std::uint32_t MDF_DFLT5CICR_CICMOD_B_0x1 = 1;
        /** @brief CIC split in two filters and MCIC configured in Sincless thansup>2less than/sup> filter */
    constexpr std::uint32_t MDF_DFLT5CICR_CICMOD_B_0x2 = 2;
        /** @brief CIC split in two filters and MCIC configured in Sincless thansup>3less than/sup> filter */
    constexpr std::uint32_t MDF_DFLT5CICR_CICMOD_B_0x3 = 3;
        /** @brief CIC configured in single Sincless thansup>4less than/sup> filter */
    constexpr std::uint32_t MDF_DFLT5CICR_CICMOD_B_0x4 = 4;

    /** @brief CIC decimation ratio selection */
    using MDF_DFLT5CICR_MCICD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Decimation ratio is 2. (value: 0)
     *          - B_0x1: Decimation ratio is 2. (value: 1)
     */
        /** @brief Decimation ratio is 2. */
    constexpr std::uint32_t MDF_DFLT5CICR_MCICD_B_0x0 = 0;
        /** @brief Decimation ratio is 2. */
    constexpr std::uint32_t MDF_DFLT5CICR_MCICD_B_0x1 = 1;

    /** @brief CIC decimation ratio selection */
    using MDF_DFLT5CICR_MCICD8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Decimation ratio is 2. (value: 0)
     *          - B_0x1: Decimation ratio is 2. (value: 1)
     */
        /** @brief Decimation ratio is 2. */
    constexpr std::uint32_t MDF_DFLT5CICR_MCICD8_B_0x0 = 0;
        /** @brief Decimation ratio is 2. */
    constexpr std::uint32_t MDF_DFLT5CICR_MCICD8_B_0x1 = 1;

    /** @brief Scaling factor selection */
    using MDF_DFLT5CICR_SCALE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 0 dB (value: 0)
     *          - B_0x1: + 3.5 dB (value: 1)
     *          - B_0x2: + 6 dB or shift left by 1 bit (value: 2)
     *          - B_0x18: + 72 dB or shift left by 12 bits (value: 24)
     *          - B_0x20: - 48.2 dB or shift right by 8 bits (default value) (value: 32)
     *          - B_0x21: - 44.6 dB (value: 33)
     *          - B_0x22: - 42.1 dB or shift right by 7 bits (value: 34)
     *          - B_0x23: - 38.6 dB (value: 35)
     *          - B_0x2E: - 6 dB or shift right by 1 bit (value: 46)
     *          - B_0x2F: - 2.5 dB (value: 47)
     */
        /** @brief 0 dB */
    constexpr std::uint32_t MDF_DFLT5CICR_SCALE_B_0x0 = 0;
        /** @brief + 3.5 dB */
    constexpr std::uint32_t MDF_DFLT5CICR_SCALE_B_0x1 = 1;
        /** @brief + 6 dB or shift left by 1 bit */
    constexpr std::uint32_t MDF_DFLT5CICR_SCALE_B_0x2 = 2;
        /** @brief + 72 dB or shift left by 12 bits */
    constexpr std::uint32_t MDF_DFLT5CICR_SCALE_B_0x18 = 24;
        /** @brief - 48.2 dB or shift right by 8 bits (default value) */
    constexpr std::uint32_t MDF_DFLT5CICR_SCALE_B_0x20 = 32;
        /** @brief - 44.6 dB */
    constexpr std::uint32_t MDF_DFLT5CICR_SCALE_B_0x21 = 33;
        /** @brief - 42.1 dB or shift right by 7 bits */
    constexpr std::uint32_t MDF_DFLT5CICR_SCALE_B_0x22 = 34;
        /** @brief - 38.6 dB */
    constexpr std::uint32_t MDF_DFLT5CICR_SCALE_B_0x23 = 35;
        /** @brief - 6 dB or shift right by 1 bit */
    constexpr std::uint32_t MDF_DFLT5CICR_SCALE_B_0x2E = 46;
        /** @brief - 2.5 dB */
    constexpr std::uint32_t MDF_DFLT5CICR_SCALE_B_0x2F = 47;

    /** @brief MDF reshape filter configuration register 5 */
    using MDF_DFLT5RSFR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x310, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reshaper filter bypass */
    using MDF_DFLT5RSFR_RSFLTBYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Reshape filter not bypassed (default value) (value: 0)
     *          - B_0x1: Reshape filter bypassed (value: 1)
     */
        /** @brief Reshape filter not bypassed (default value) */
    constexpr std::uint32_t MDF_DFLT5RSFR_RSFLTBYP_B_0x0 = 0;
        /** @brief Reshape filter bypassed */
    constexpr std::uint32_t MDF_DFLT5RSFR_RSFLTBYP_B_0x1 = 1;

    /** @brief Reshaper filter decimation ratio */
    using MDF_DFLT5RSFR_RSFLTD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Decimation ratio is 4 (default value). (value: 0)
     *          - B_0x1: Decimation ratio is 1. (value: 1)
     */
        /** @brief Decimation ratio is 4 (default value). */
    constexpr std::uint32_t MDF_DFLT5RSFR_RSFLTD_B_0x0 = 0;
        /** @brief Decimation ratio is 1. */
    constexpr std::uint32_t MDF_DFLT5RSFR_RSFLTD_B_0x1 = 1;

    /** @brief High-pass filter bypass */
    using MDF_DFLT5RSFR_HPFBYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HPF not bypassed (default value) (value: 0)
     *          - B_0x1: HPF bypassed (value: 1)
     */
        /** @brief HPF not bypassed (default value) */
    constexpr std::uint32_t MDF_DFLT5RSFR_HPFBYP_B_0x0 = 0;
        /** @brief HPF bypassed */
    constexpr std::uint32_t MDF_DFLT5RSFR_HPFBYP_B_0x1 = 1;

    /** @brief High-pass filter cut-off frequency */
    using MDF_DFLT5RSFR_HPFC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Cut-off frequency = 0.000625 x Fless thansub>PCMless than/sub> (value: 0)
     *          - B_0x1: Cut-off frequency = 0.00125 x Fless thansub>PCMless than/sub> (value: 1)
     *          - B_0x2: Cut-off frequency = 0.00250 x Fless thansub>PCMless than/sub> (value: 2)
     *          - B_0x3: Cut-off frequency = 0.00950 x Fless thansub>PCMless than/sub> (value: 3)
     */
        /** @brief Cut-off frequency = 0.000625 x Fless thansub>PCMless than/sub> */
    constexpr std::uint32_t MDF_DFLT5RSFR_HPFC_B_0x0 = 0;
        /** @brief Cut-off frequency = 0.00125 x Fless thansub>PCMless than/sub> */
    constexpr std::uint32_t MDF_DFLT5RSFR_HPFC_B_0x1 = 1;
        /** @brief Cut-off frequency = 0.00250 x Fless thansub>PCMless than/sub> */
    constexpr std::uint32_t MDF_DFLT5RSFR_HPFC_B_0x2 = 2;
        /** @brief Cut-off frequency = 0.00950 x Fless thansub>PCMless than/sub> */
    constexpr std::uint32_t MDF_DFLT5RSFR_HPFC_B_0x3 = 3;

    /** @brief MDF integrator configuration register 5 */
    using MDF_DFLT5INTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x314, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Integrator output division */
    using MDF_DFLT5INTR_INTDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The integrator data outputs are divided by 128 (default value). (value: 0)
     *          - B_0x1: The integrator data outputs are divided by 32. (value: 1)
     *          - B_0x2: The integrator data outputs are divided by 4. (value: 2)
     *          - B_0x3: The integrator data outputs are not divided. (value: 3)
     */
        /** @brief The integrator data outputs are divided by 128 (default value). */
    constexpr std::uint32_t MDF_DFLT5INTR_INTDIV_B_0x0 = 0;
        /** @brief The integrator data outputs are divided by 32. */
    constexpr std::uint32_t MDF_DFLT5INTR_INTDIV_B_0x1 = 1;
        /** @brief The integrator data outputs are divided by 4. */
    constexpr std::uint32_t MDF_DFLT5INTR_INTDIV_B_0x2 = 2;
        /** @brief The integrator data outputs are not divided. */
    constexpr std::uint32_t MDF_DFLT5INTR_INTDIV_B_0x3 = 3;

    /** @brief Integration value selection */
    using MDF_DFLT5INTR_INTVAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The integration value is 1, meaning bypass mode (default after reset). (value: 0)
     *          - B_0x1: The integration value is 2. (value: 1)
     */
        /** @brief The integration value is 1, meaning bypass mode (default after reset). */
    constexpr std::uint32_t MDF_DFLT5INTR_INTVAL_B_0x0 = 0;
        /** @brief The integration value is 2. */
    constexpr std::uint32_t MDF_DFLT5INTR_INTVAL_B_0x1 = 1;

    /** @brief MDF out-of limit detector control register 5 */
    using MDF_OLD5CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x318, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OLDx enable */
    using MDF_OLD5CR_OLDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OLDx disabled (default value) (value: 0)
     *          - B_0x1: OLDx enabled, including the ACIC filter working in continuous mode (value: 1)
     */
        /** @brief OLDx disabled (default value) */
    constexpr std::uint32_t MDF_OLD5CR_OLDEN_B_0x0 = 0;
        /** @brief OLDx enabled, including the ACIC filter working in continuous mode */
    constexpr std::uint32_t MDF_OLD5CR_OLDEN_B_0x1 = 1;

    /** @brief Threshold In band */
    using MDF_OLD5CR_THINB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The OLDx generates an event if the signal is lower than OLDTHL or higher than OLDTHH (default value). (value: 0)
     *          - B_0x1: The OLDx generates an event if the signal is lower than OLDTHH and higher than OLDTHL (value: 1)
     */
        /** @brief The OLDx generates an event if the signal is lower than OLDTHL or higher than OLDTHH (default value). */
    constexpr std::uint32_t MDF_OLD5CR_THINB_B_0x0 = 0;
        /** @brief The OLDx generates an event if the signal is lower than OLDTHH and higher than OLDTHL */
    constexpr std::uint32_t MDF_OLD5CR_THINB_B_0x1 = 1;

    /** @brief Break signal assignment for out-of limit detector */
    using MDF_OLD5CR_BKOLD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OLDx CIC order selection */
    using MDF_OLD5CR_ACICN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FastSinc filter type (value: 0)
     *          - B_0x1: Sincless thansup>1less than/sup> filter type (value: 1)
     *          - B_0x2: Sincless thansup>2less than/sup> filter type (value: 2)
     *          - B_0x3: Sincless thansup>3less than/sup> filter type (value: 3)
     */
        /** @brief FastSinc filter type */
    constexpr std::uint32_t MDF_OLD5CR_ACICN_B_0x0 = 0;
        /** @brief Sincless thansup>1less than/sup> filter type */
    constexpr std::uint32_t MDF_OLD5CR_ACICN_B_0x1 = 1;
        /** @brief Sincless thansup>2less than/sup> filter type */
    constexpr std::uint32_t MDF_OLD5CR_ACICN_B_0x2 = 2;
        /** @brief Sincless thansup>3less than/sup> filter type */
    constexpr std::uint32_t MDF_OLD5CR_ACICN_B_0x3 = 3;

    /** @brief OLDx CIC decimation ratio selection */
    using MDF_OLD5CR_ACICD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Decimation ratio is 1. (value: 0)
     *          - B_0x1: Decimation ratio is 2. (value: 1)
     */
        /** @brief Decimation ratio is 1. */
    constexpr std::uint32_t MDF_OLD5CR_ACICD_B_0x0 = 0;
        /** @brief Decimation ratio is 2. */
    constexpr std::uint32_t MDF_OLD5CR_ACICD_B_0x1 = 1;

    /** @brief OLDx active flag */
    using MDF_OLD5CR_OLDACTIVE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OLDx not active and can be configured if needed (value: 0)
     *          - B_0x1: OLDx active and protected fields cannot be configured (value: 1)
     */
        /** @brief OLDx not active and can be configured if needed */
    constexpr std::uint32_t MDF_OLD5CR_OLDACTIVE_B_0x0 = 0;
        /** @brief OLDx active and protected fields cannot be configured */
    constexpr std::uint32_t MDF_OLD5CR_OLDACTIVE_B_0x1 = 1;

    /** @brief MDF OLD5 low threshold register 5 */
    using MDF_OLD5THLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x31C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OLD low threshold value */
    using MDF_OLD5THLR_OLDTHL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 26, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDF OLD5 high threshold register 5 */
    using MDF_OLD5THHR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x320, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OLDx high threshold value */
    using MDF_OLD5THHR_OLDTHH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 26, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDF delay control register 5 */
    using MDF_DLY5CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x324, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Delay to apply to a bitstream */
    using MDF_DLY5CR_SKPDLY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No input sample skipped (value: 0)
     *          - B_0x1: 1 input sample skipped (value: 1)
     */
        /** @brief No input sample skipped */
    constexpr std::uint32_t MDF_DLY5CR_SKPDLY_B_0x0 = 0;
        /** @brief 1 input sample skipped */
    constexpr std::uint32_t MDF_DLY5CR_SKPDLY_B_0x1 = 1;

    /** @brief Skip busy flag */
    using MDF_DLY5CR_SKPBF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MDF ready to accept a new value into SKPDLY[6:0] (value: 0)
     *          - B_0x1: Last valid SKPDLY[6:0] still under processing (value: 1)
     */
        /** @brief MDF ready to accept a new value into SKPDLY[6:0] */
    constexpr std::uint32_t MDF_DLY5CR_SKPBF_B_0x0 = 0;
        /** @brief Last valid SKPDLY[6:0] still under processing */
    constexpr std::uint32_t MDF_DLY5CR_SKPBF_B_0x1 = 1;

    /** @brief MDF short circuit detector control register 5 */
    using MDF_SCD5CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x328, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SCDx enable */
    using MDF_SCD5CR_SCDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SCDx disabled (value: 0)
     *          - B_0x1: SSCDx enabled, (value: 1)
     */
        /** @brief SCDx disabled */
    constexpr std::uint32_t MDF_SCD5CR_SCDEN_B_0x0 = 0;
        /** @brief SSCDx enabled, */
    constexpr std::uint32_t MDF_SCD5CR_SCDEN_B_0x1 = 1;

    /** @brief Break signal assignment for short circuit detector */
    using MDF_SCD5CR_BKSCD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SCDx threshold */
    using MDF_SCD5CR_SCDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 2 consecutive 1's or 0's generate an event. (value: 0)
     *          - B_0x1: 2 consecutive 1's or 0's generate an event. (value: 1)
     */
        /** @brief 2 consecutive 1's or 0's generate an event. */
    constexpr std::uint32_t MDF_SCD5CR_SCDT_B_0x0 = 0;
        /** @brief 2 consecutive 1's or 0's generate an event. */
    constexpr std::uint32_t MDF_SCD5CR_SCDT_B_0x1 = 1;

    /** @brief SCDx active flag */
    using MDF_SCD5CR_SCDACTIVE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SCDx not active and can be configured if needed (value: 0)
     *          - B_0x1: SCDx active and protected fields cannot be configured (value: 1)
     */
        /** @brief SCDx not active and can be configured if needed */
    constexpr std::uint32_t MDF_SCD5CR_SCDACTIVE_B_0x0 = 0;
        /** @brief SCDx active and protected fields cannot be configured */
    constexpr std::uint32_t MDF_SCD5CR_SCDACTIVE_B_0x1 = 1;

    /** @brief MDF DFLT5 interrupt enable register 5 */
    using MDF_DFLT5IER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x32C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RXFIFO threshold interrupt enable */
    using MDF_DFLT5IER_FTHIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RXFIFO threshold interrupt disabled (value: 0)
     *          - B_0x1: RXFIFO threshold interrupt enabled (value: 1)
     */
        /** @brief RXFIFO threshold interrupt disabled */
    constexpr std::uint32_t MDF_DFLT5IER_FTHIE_B_0x0 = 0;
        /** @brief RXFIFO threshold interrupt enabled */
    constexpr std::uint32_t MDF_DFLT5IER_FTHIE_B_0x1 = 1;

    /** @brief Data overflow interrupt enable */
    using MDF_DFLT5IER_DOVRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Data overflow interrupt disabled (value: 0)
     *          - B_0x1: Data overflow interrupt enabled (value: 1)
     */
        /** @brief Data overflow interrupt disabled */
    constexpr std::uint32_t MDF_DFLT5IER_DOVRIE_B_0x0 = 0;
        /** @brief Data overflow interrupt enabled */
    constexpr std::uint32_t MDF_DFLT5IER_DOVRIE_B_0x1 = 1;

    /** @brief Snapshot data ready interrupt enable */
    using MDF_DFLT5IER_SSDRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Snapshot data ready interrupt disabled (value: 0)
     *          - B_0x1: Snapshot data ready interrupt enabled (value: 1)
     */
        /** @brief Snapshot data ready interrupt disabled */
    constexpr std::uint32_t MDF_DFLT5IER_SSDRIE_B_0x0 = 0;
        /** @brief Snapshot data ready interrupt enabled */
    constexpr std::uint32_t MDF_DFLT5IER_SSDRIE_B_0x1 = 1;

    /** @brief OLDx interrupt enable */
    using MDF_DFLT5IER_OLDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OLDx event interrupt disabled (value: 0)
     *          - B_0x1: OLDx event interrupt enabled (value: 1)
     */
        /** @brief OLDx event interrupt disabled */
    constexpr std::uint32_t MDF_DFLT5IER_OLDIE_B_0x0 = 0;
        /** @brief OLDx event interrupt enabled */
    constexpr std::uint32_t MDF_DFLT5IER_OLDIE_B_0x1 = 1;

    /** @brief Snapshot overrun interrupt enable */
    using MDF_DFLT5IER_SSOVRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Snapshot overrun interrupt disabled (value: 0)
     *          - B_0x1: Snapshot overrun interrupt enabled (value: 1)
     */
        /** @brief Snapshot overrun interrupt disabled */
    constexpr std::uint32_t MDF_DFLT5IER_SSOVRIE_B_0x0 = 0;
        /** @brief Snapshot overrun interrupt enabled */
    constexpr std::uint32_t MDF_DFLT5IER_SSOVRIE_B_0x1 = 1;

    /** @brief SCDx interrupt enable */
    using MDF_DFLT5IER_SCDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SCDx interrupt disabled (value: 0)
     *          - B_0x1: SCDx interrupt enabled (value: 1)
     */
        /** @brief SCDx interrupt disabled */
    constexpr std::uint32_t MDF_DFLT5IER_SCDIE_B_0x0 = 0;
        /** @brief SCDx interrupt enabled */
    constexpr std::uint32_t MDF_DFLT5IER_SCDIE_B_0x1 = 1;

    /** @brief Saturation detection interrupt enable */
    using MDF_DFLT5IER_SATIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Saturation interrupt disabled (value: 0)
     *          - B_0x1: Saturation interrupt enabled (value: 1)
     */
        /** @brief Saturation interrupt disabled */
    constexpr std::uint32_t MDF_DFLT5IER_SATIE_B_0x0 = 0;
        /** @brief Saturation interrupt enabled */
    constexpr std::uint32_t MDF_DFLT5IER_SATIE_B_0x1 = 1;

    /** @brief Clock absence detection interrupt enable */
    using MDF_DFLT5IER_CKABIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Clock absence interrupt disabled (value: 0)
     *          - B_0x1: Clock absence interrupt enabled (value: 1)
     */
        /** @brief Clock absence interrupt disabled */
    constexpr std::uint32_t MDF_DFLT5IER_CKABIE_B_0x0 = 0;
        /** @brief Clock absence interrupt enabled */
    constexpr std::uint32_t MDF_DFLT5IER_CKABIE_B_0x1 = 1;

    /** @brief Reshape filter overrun interrupt enable */
    using MDF_DFLT5IER_RFOVRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Reshape filter overrun interrupt disabled (value: 0)
     *          - B_0x1: Reshape filter overrun interrupt enabled (value: 1)
     */
        /** @brief Reshape filter overrun interrupt disabled */
    constexpr std::uint32_t MDF_DFLT5IER_RFOVRIE_B_0x0 = 0;
        /** @brief Reshape filter overrun interrupt enabled */
    constexpr std::uint32_t MDF_DFLT5IER_RFOVRIE_B_0x1 = 1;

    /** @brief MDF DFLT5 interrupt status register 5 */
    using MDF_DFLT5ISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x330, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RXFIFO threshold flag */
    using MDF_DFLT5ISR_FTHF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RXFIFO threshold not reached (value: 0)
     *          - B_0x1: RXFIFO threshold reached (value: 1)
     */
        /** @brief RXFIFO threshold not reached */
    constexpr std::uint32_t MDF_DFLT5ISR_FTHF_B_0x0 = 0;
        /** @brief RXFIFO threshold reached */
    constexpr std::uint32_t MDF_DFLT5ISR_FTHF_B_0x1 = 1;

    /** @brief Data overflow flag */
    using MDF_DFLT5ISR_DOVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Read 0 means that no overflow is detected. Write 0 has no effect. (value: 0)
     *          - B_0x1: Read 1 means that an overflow is detected; Write 1 clears this flag. (value: 1)
     */
        /** @brief Read 0 means that no overflow is detected. Write 0 has no effect. */
    constexpr std::uint32_t MDF_DFLT5ISR_DOVRF_B_0x0 = 0;
        /** @brief Read 1 means that an overflow is detected; Write 1 clears this flag. */
    constexpr std::uint32_t MDF_DFLT5ISR_DOVRF_B_0x1 = 1;

    /** @brief Snapshot data ready flag */
    using MDF_DFLT5ISR_SSDRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Read 0 means that no data is available. Write 0 has no effect. (value: 0)
     *          - B_0x1: Read 1 means that a new data is available. Write 1 clears this flag. (value: 1)
     */
        /** @brief Read 0 means that no data is available. Write 0 has no effect. */
    constexpr std::uint32_t MDF_DFLT5ISR_SSDRF_B_0x0 = 0;
        /** @brief Read 1 means that a new data is available. Write 1 clears this flag. */
    constexpr std::uint32_t MDF_DFLT5ISR_SSDRF_B_0x1 = 1;

    /** @brief RXFIFO not-empty flag */
    using MDF_DFLT5ISR_RXNEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RXFIFO empty (value: 0)
     *          - B_0x1: RXFIFO not empty (value: 1)
     */
        /** @brief RXFIFO empty */
    constexpr std::uint32_t MDF_DFLT5ISR_RXNEF_B_0x0 = 0;
        /** @brief RXFIFO not empty */
    constexpr std::uint32_t MDF_DFLT5ISR_RXNEF_B_0x1 = 1;

    /** @brief OLDx flag */
    using MDF_DFLT5ISR_OLDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Read 0 means that no OLDx event is detected. Write 0 has no effect. (value: 0)
     *          - B_0x1: Read 1 means that an OLDx event is detected Write 1 clears THHF, THLF and OLDF. (value: 1)
     */
        /** @brief Read 0 means that no OLDx event is detected. Write 0 has no effect. */
    constexpr std::uint32_t MDF_DFLT5ISR_OLDF_B_0x0 = 0;
        /** @brief Read 1 means that an OLDx event is detected Write 1 clears THHF, THLF and OLDF. */
    constexpr std::uint32_t MDF_DFLT5ISR_OLDF_B_0x1 = 1;

    /** @brief Low-threshold status flag */
    using MDF_DFLT5ISR_THLF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The signal was higher than OLDTHL when the last OLDx event occurred. (value: 0)
     *          - B_0x1: The signal was lower than OLDTHL when the last OLDx event occurred. (value: 1)
     */
        /** @brief The signal was higher than OLDTHL when the last OLDx event occurred. */
    constexpr std::uint32_t MDF_DFLT5ISR_THLF_B_0x0 = 0;
        /** @brief The signal was lower than OLDTHL when the last OLDx event occurred. */
    constexpr std::uint32_t MDF_DFLT5ISR_THLF_B_0x1 = 1;

    /** @brief High-threshold status flag */
    using MDF_DFLT5ISR_THHF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The signal was lower than OLDTHH when the last OLDx event occurred. (value: 0)
     *          - B_0x1: The signal was higher than OLDTHH when the last OLDx event occurred. (value: 1)
     */
        /** @brief The signal was lower than OLDTHH when the last OLDx event occurred. */
    constexpr std::uint32_t MDF_DFLT5ISR_THHF_B_0x0 = 0;
        /** @brief The signal was higher than OLDTHH when the last OLDx event occurred. */
    constexpr std::uint32_t MDF_DFLT5ISR_THHF_B_0x1 = 1;

    /** @brief Snapshot overrun flag */
    using MDF_DFLT5ISR_SSOVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Read 0 means that no snapshot overrun event is detected. Write 0 has no effect. (value: 0)
     *          - B_0x1: Read 1 means that a snapshot overrun event is detected. Write 1 clears this flag. (value: 1)
     */
        /** @brief Read 0 means that no snapshot overrun event is detected. Write 0 has no effect. */
    constexpr std::uint32_t MDF_DFLT5ISR_SSOVRF_B_0x0 = 0;
        /** @brief Read 1 means that a snapshot overrun event is detected. Write 1 clears this flag. */
    constexpr std::uint32_t MDF_DFLT5ISR_SSOVRF_B_0x1 = 1;

    /** @brief Short-circuit detector flag */
    using MDF_DFLT5ISR_SCDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Read 0 means that no SCD event is detected. Write 0 has no effect. (value: 0)
     *          - B_0x1: Read 1 means that a SCD event is detected. Write 1 clears this flag. (value: 1)
     */
        /** @brief Read 0 means that no SCD event is detected. Write 0 has no effect. */
    constexpr std::uint32_t MDF_DFLT5ISR_SCDF_B_0x0 = 0;
        /** @brief Read 1 means that a SCD event is detected. Write 1 clears this flag. */
    constexpr std::uint32_t MDF_DFLT5ISR_SCDF_B_0x1 = 1;

    /** @brief Saturation detection flag */
    using MDF_DFLT5ISR_SATF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Read 0 means that no saturation is detected. Write 0 has no effect. (value: 0)
     *          - B_0x1: Read 1 means that a saturation is detected. Write 1 clears this flag. (value: 1)
     */
        /** @brief Read 0 means that no saturation is detected. Write 0 has no effect. */
    constexpr std::uint32_t MDF_DFLT5ISR_SATF_B_0x0 = 0;
        /** @brief Read 1 means that a saturation is detected. Write 1 clears this flag. */
    constexpr std::uint32_t MDF_DFLT5ISR_SATF_B_0x1 = 1;

    /** @brief Clock absence detection flag */
    using MDF_DFLT5ISR_CKABF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Read 0 means that no clock absence is detected. Write 0 has no effect. (value: 0)
     *          - B_0x1: Read 1 means that a clock absence is detected. Write 1 clears this flag. (value: 1)
     */
        /** @brief Read 0 means that no clock absence is detected. Write 0 has no effect. */
    constexpr std::uint32_t MDF_DFLT5ISR_CKABF_B_0x0 = 0;
        /** @brief Read 1 means that a clock absence is detected. Write 1 clears this flag. */
    constexpr std::uint32_t MDF_DFLT5ISR_CKABF_B_0x1 = 1;

    /** @brief Reshape filter overrun detection flag */
    using MDF_DFLT5ISR_RFOVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Read 0 means that no reshape filter overrun is detected. Write 0 has no effect. (value: 0)
     *          - B_0x1: Read 1 means that reshape filter overrun is detected. Write 1 clears this flag. (value: 1)
     */
        /** @brief Read 0 means that no reshape filter overrun is detected. Write 0 has no effect. */
    constexpr std::uint32_t MDF_DFLT5ISR_RFOVRF_B_0x0 = 0;
        /** @brief Read 1 means that reshape filter overrun is detected. Write 1 clears this flag. */
    constexpr std::uint32_t MDF_DFLT5ISR_RFOVRF_B_0x1 = 1;

    /** @brief MDF offset error compensation control register 5 */
    using MDF_OEC5CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x334, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Offset error compensation */
    using MDF_OEC5CR_OFFSET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 26, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDF snapshot data register 5 */
    using MDF_SNPS5DR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x36C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Contains the MCIC decimation counter value when the last trigger event occurs (MCIC_CNT) */
    using MDF_SNPS5DR_MCICDC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extended data size */
    using MDF_SNPS5DR_EXTSDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Contains the 16 MSB of the last valid data processed by the digital filter. */
    using MDF_SNPS5DR_SDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDF digital filter data register 5 */
    using MDF_DFLT5DR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x370, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data processed by digital filter */
    using MDF_DFLT5DR_DR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
