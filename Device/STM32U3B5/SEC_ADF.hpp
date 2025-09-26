/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32U3B5_SEC_ADF_HPP
#define EMBEDDED_PP_STM32U3B5_SEC_ADF_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief ADF register block */
namespace STM32U3B5::SEC_ADF {

    /** @brief ADF global control register */
    using ADF_GCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger output control */
    using ADF_GCR_TRGO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write 0 has no effect. (value: 0)
     *          - B_0x1: Write 1 generates a positive pulse on the adf_trgo signal and triggers the acquisition on enabled filter having their ACQMOD[2:0] = 01x and selecting TRGO as trigger. (value: 1)
     */
        /** @brief Write 0 has no effect. */
    constexpr std::uint32_t ADF_GCR_TRGO_B_0x0 = 0;
        /** @brief Write 1 generates a positive pulse on the adf_trgo signal and triggers the acquisition on enabled filter having their ACQMOD[2:0] = 01x and selecting TRGO as trigger. */
    constexpr std::uint32_t ADF_GCR_TRGO_B_0x1 = 1;

    /** @brief ADF clock generator control register */
    using ADF_CKGCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CKGEN dividers enable */
    using ADF_CKGCR_CKGDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CKGEN dividers disabled (value: 0)
     *          - B_0x1: CKGEN dividers enabled (value: 1)
     */
        /** @brief CKGEN dividers disabled */
    constexpr std::uint32_t ADF_CKGCR_CKGDEN_B_0x0 = 0;
        /** @brief CKGEN dividers enabled */
    constexpr std::uint32_t ADF_CKGCR_CKGDEN_B_0x1 = 1;

    /** @brief ADF_CCK0 clock enable */
    using ADF_CKGCR_CCK0EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bitstream clock not generated (value: 0)
     *          - B_0x1: Bitstream clock generated on the ADF_CCK0 pin (value: 1)
     */
        /** @brief Bitstream clock not generated */
    constexpr std::uint32_t ADF_CKGCR_CCK0EN_B_0x0 = 0;
        /** @brief Bitstream clock generated on the ADF_CCK0 pin */
    constexpr std::uint32_t ADF_CKGCR_CCK0EN_B_0x1 = 1;

    /** @brief ADF_CCK1 clock enable */
    using ADF_CKGCR_CCK1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bitstream clock not generated (value: 0)
     *          - B_0x1: Bitstream clock generated on the ADF_CCK1 pin. (value: 1)
     */
        /** @brief Bitstream clock not generated */
    constexpr std::uint32_t ADF_CKGCR_CCK1EN_B_0x0 = 0;
        /** @brief Bitstream clock generated on the ADF_CCK1 pin. */
    constexpr std::uint32_t ADF_CKGCR_CCK1EN_B_0x1 = 1;

    /** @brief Clock generator mode */
    using ADF_CKGCR_CKGMOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The kernel clock is provided to the dividers as soon as CKGDEN is set to 1. (value: 0)
     *          - B_0x1: The kernel clock is provided to the dividers when CKGDEN is set to 1 and the trigger condition met. (value: 1)
     */
        /** @brief The kernel clock is provided to the dividers as soon as CKGDEN is set to 1. */
    constexpr std::uint32_t ADF_CKGCR_CKGMOD_B_0x0 = 0;
        /** @brief The kernel clock is provided to the dividers when CKGDEN is set to 1 and the trigger condition met. */
    constexpr std::uint32_t ADF_CKGCR_CKGMOD_B_0x1 = 1;

    /** @brief ADF_CCK0 direction */
    using ADF_CKGCR_CCK0DIR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The ADF_CCK0 pin direction is in input. (value: 0)
     *          - B_0x1: The ADF_CCK0 pin direction is in output. (value: 1)
     */
        /** @brief The ADF_CCK0 pin direction is in input. */
    constexpr std::uint32_t ADF_CKGCR_CCK0DIR_B_0x0 = 0;
        /** @brief The ADF_CCK0 pin direction is in output. */
    constexpr std::uint32_t ADF_CKGCR_CCK0DIR_B_0x1 = 1;

    /** @brief ADF_CCK1 direction */
    using ADF_CKGCR_CCK1DIR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The ADF_CCK1 pin direction is in input. (value: 0)
     *          - B_0x1: The ADF_CCK1 pin direction is in output. (value: 1)
     */
        /** @brief The ADF_CCK1 pin direction is in input. */
    constexpr std::uint32_t ADF_CKGCR_CCK1DIR_B_0x0 = 0;
        /** @brief The ADF_CCK1 pin direction is in output. */
    constexpr std::uint32_t ADF_CKGCR_CCK1DIR_B_0x1 = 1;

    /** @brief CKGEN trigger sensitivity selection */
    using ADF_CKGCR_TRGSENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: A rising edge event triggers the activation of CKGEN dividers. (value: 0)
     *          - B_0x1: A falling edge even triggers the activation of CKGEN dividers. (value: 1)
     */
        /** @brief A rising edge event triggers the activation of CKGEN dividers. */
    constexpr std::uint32_t ADF_CKGCR_TRGSENS_B_0x0 = 0;
        /** @brief A falling edge even triggers the activation of CKGEN dividers. */
    constexpr std::uint32_t ADF_CKGCR_TRGSENS_B_0x1 = 1;

    /** @brief Digital filter trigger signal selection */
    using ADF_CKGCR_TRGSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x2: adf_trg1 selected (value: 2)
     */
        /** @brief adf_trg1 selected */
    constexpr std::uint32_t ADF_CKGCR_TRGSRC_B_0x2 = 2;

    /** @brief Divider to control the ADF_CCK clock */
    using ADF_CKGCR_CCKDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The ADF_CCK clock is adf_proc_ck. (value: 0)
     *          - B_0x1: The ADF_CCK clock is adf_proc_ck / 2. (value: 1)
     *          - B_0x2: The ADF_CCK clock is adf_proc_ck / 3. (value: 2)
     *          - B_0xF: The ADF_CCK clock is adf_proc_ck / 16. (value: 15)
     */
        /** @brief The ADF_CCK clock is adf_proc_ck. */
    constexpr std::uint32_t ADF_CKGCR_CCKDIV_B_0x0 = 0;
        /** @brief The ADF_CCK clock is adf_proc_ck / 2. */
    constexpr std::uint32_t ADF_CKGCR_CCKDIV_B_0x1 = 1;
        /** @brief The ADF_CCK clock is adf_proc_ck / 3. */
    constexpr std::uint32_t ADF_CKGCR_CCKDIV_B_0x2 = 2;
        /** @brief The ADF_CCK clock is adf_proc_ck / 16. */
    constexpr std::uint32_t ADF_CKGCR_CCKDIV_B_0xF = 15;

    /** @brief Divider to control the serial interface clock */
    using ADF_CKGCR_PROCDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: adf_ker_ck provided to the SITF (value: 0)
     *          - B_0x1: adf_ker_ck / 2 provided to the SITF (value: 1)
     */
        /** @brief adf_ker_ck provided to the SITF */
    constexpr std::uint32_t ADF_CKGCR_PROCDIV_B_0x0 = 0;
        /** @brief adf_ker_ck / 2 provided to the SITF */
    constexpr std::uint32_t ADF_CKGCR_PROCDIV_B_0x1 = 1;

    /** @brief Clock generator active flag */
    using ADF_CKGCR_CKGACTIVE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The clock generator is not active and can be configured if needed. (value: 0)
     *          - B_0x1: The clock generator is active and protected fields cannot be configured. (value: 1)
     */
        /** @brief The clock generator is not active and can be configured if needed. */
    constexpr std::uint32_t ADF_CKGCR_CKGACTIVE_B_0x0 = 0;
        /** @brief The clock generator is active and protected fields cannot be configured. */
    constexpr std::uint32_t ADF_CKGCR_CKGACTIVE_B_0x1 = 1;

    /** @brief ADF trigger input selection register */
    using ADF_TRGISEL = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input selection for adf_trgi */
    using ADF_TRGISEL_TRGISEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: exti15 is selected (default after reset) (value: 0)
     *          - B_0x1: tim1_trgo is selected (value: 1)
     *          - B_0x2: tim3_trgo is selected (value: 2)
     *          - B_0x3: tim6_trgo is selected (value: 3)
     */
        /** @brief exti15 is selected (default after reset) */
    constexpr std::uint32_t ADF_TRGISEL_TRGISEL_B_0x0 = 0;
        /** @brief tim1_trgo is selected */
    constexpr std::uint32_t ADF_TRGISEL_TRGISEL_B_0x1 = 1;
        /** @brief tim3_trgo is selected */
    constexpr std::uint32_t ADF_TRGISEL_TRGISEL_B_0x2 = 2;
        /** @brief tim6_trgo is selected */
    constexpr std::uint32_t ADF_TRGISEL_TRGISEL_B_0x3 = 3;

    /** @brief ADF serial interface control register 0 */
    using ADF_SITF0CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x80, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Serial interface enable */
    using ADF_SITF0CR_SITFEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Serial interface disabled (value: 0)
     *          - B_0x1: Serial interface enabled (value: 1)
     */
        /** @brief Serial interface disabled */
    constexpr std::uint32_t ADF_SITF0CR_SITFEN_B_0x0 = 0;
        /** @brief Serial interface enabled */
    constexpr std::uint32_t ADF_SITF0CR_SITFEN_B_0x1 = 1;

    /** @brief Serial clock source */
    using ADF_SITF0CR_SCKSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Serial clock source is ADF_CCK0. (value: 0)
     *          - B_0x1: Serial clock source is ADF_CCK1. (value: 1)
     */
        /** @brief Serial clock source is ADF_CCK0. */
    constexpr std::uint32_t ADF_SITF0CR_SCKSRC_B_0x0 = 0;
        /** @brief Serial clock source is ADF_CCK1. */
    constexpr std::uint32_t ADF_SITF0CR_SCKSRC_B_0x1 = 1;

    /** @brief Serial interface type */
    using ADF_SITF0CR_SITFMOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LF_MASTER SPI mode (value: 0)
     *          - B_0x1: Normal SPI mode (value: 1)
     *          - B_0x2: Manchester mode: rising edge = logic 0, falling edge = logic 1 (value: 2)
     *          - B_0x3: Manchester mode: rising edge = logic 1, falling edge = logic 0 (value: 3)
     */
        /** @brief LF_MASTER SPI mode */
    constexpr std::uint32_t ADF_SITF0CR_SITFMOD_B_0x0 = 0;
        /** @brief Normal SPI mode */
    constexpr std::uint32_t ADF_SITF0CR_SITFMOD_B_0x1 = 1;
        /** @brief Manchester mode: rising edge = logic 0, falling edge = logic 1 */
    constexpr std::uint32_t ADF_SITF0CR_SITFMOD_B_0x2 = 2;
        /** @brief Manchester mode: rising edge = logic 1, falling edge = logic 0 */
    constexpr std::uint32_t ADF_SITF0CR_SITFMOD_B_0x3 = 3;

    /** @brief Manchester symbol threshold/SPI threshold */
    using ADF_SITF0CR_STH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Serial interface active flag */
    using ADF_SITF0CR_SITFACTIVE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The serial interface is not active, and can be configured if needed. (value: 0)
     *          - B_0x1: The serial interface is active and protected fields cannot be configured. (value: 1)
     */
        /** @brief The serial interface is not active, and can be configured if needed. */
    constexpr std::uint32_t ADF_SITF0CR_SITFACTIVE_B_0x0 = 0;
        /** @brief The serial interface is active and protected fields cannot be configured. */
    constexpr std::uint32_t ADF_SITF0CR_SITFACTIVE_B_0x1 = 1;

    /** @brief ADF bitstream matrix control register 0 */
    using ADF_BSMx0CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x84, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bitstream selection */
    using ADF_BSMx0CR_BSSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: bs0_r provided to DFLT0 (value: 0)
     *          - B_0x1: bs0_f provided to DFLT0 (value: 1)
     */
        /** @brief bs0_r provided to DFLT0 */
    constexpr std::uint32_t ADF_BSMx0CR_BSSEL_B_0x0 = 0;
        /** @brief bs0_f provided to DFLT0 */
    constexpr std::uint32_t ADF_BSMx0CR_BSSEL_B_0x1 = 1;

    /** @brief BSMx active flag */
    using ADF_BSMx0CR_BSMxACTIVE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BSMx is not active and can be configured if needed. (value: 0)
     *          - B_0x1: BSMx is active and protected fields cannot be configured. (value: 1)
     */
        /** @brief BSMx is not active and can be configured if needed. */
    constexpr std::uint32_t ADF_BSMx0CR_BSMxACTIVE_B_0x0 = 0;
        /** @brief BSMx is active and protected fields cannot be configured. */
    constexpr std::uint32_t ADF_BSMx0CR_BSMxACTIVE_B_0x1 = 1;

    /** @brief ADF digital filter control register 0 */
    using ADF_DFLT0CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x88, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFLT0 enable */
    using ADF_DFLT0CR_DFLTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Acquisition immediately stopped (value: 0)
     *          - B_0x1: Acquisition immediately started if ACQMOD[2:0] = 00x or 101, or acquisition started when the proper trigger event occurs if ACQMOD[2:0] = 01x. (value: 1)
     */
        /** @brief Acquisition immediately stopped */
    constexpr std::uint32_t ADF_DFLT0CR_DFLTEN_B_0x0 = 0;
        /** @brief Acquisition immediately started if ACQMOD[2:0] = 00x or 101, or acquisition started when the proper trigger event occurs if ACQMOD[2:0] = 01x. */
    constexpr std::uint32_t ADF_DFLT0CR_DFLTEN_B_0x1 = 1;

    /** @brief DMA requests enable */
    using ADF_DFLT0CR_DMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DMA interface for the corresponding digital filter disabled (value: 0)
     *          - B_0x1: DMA interface for the corresponding digital filter enabled (value: 1)
     */
        /** @brief DMA interface for the corresponding digital filter disabled */
    constexpr std::uint32_t ADF_DFLT0CR_DMAEN_B_0x0 = 0;
        /** @brief DMA interface for the corresponding digital filter enabled */
    constexpr std::uint32_t ADF_DFLT0CR_DMAEN_B_0x1 = 1;

    /** @brief RxFIFO threshold selection */
    using ADF_DFLT0CR_FTH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RxFIFO threshold event generated when the RxFIFO is not empty (value: 0)
     *          - B_0x1: RxFIFO threshold event generated when the RxFIFO is half-full (value: 1)
     */
        /** @brief RxFIFO threshold event generated when the RxFIFO is not empty */
    constexpr std::uint32_t ADF_DFLT0CR_FTH_B_0x0 = 0;
        /** @brief RxFIFO threshold event generated when the RxFIFO is half-full */
    constexpr std::uint32_t ADF_DFLT0CR_FTH_B_0x1 = 1;

    /** @brief DFLT0 trigger mode */
    using ADF_DFLT0CR_ACQMOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Asynchronous continuous acquisition mode (value: 0)
     *          - B_0x1: Asynchronous single-shot acquisition mode (value: 1)
     *          - B_0x2: Synchronous continuous acquisition mode (value: 2)
     *          - B_0x3: Synchronous single-shot acquisition mode (value: 3)
     *          - B_0x4: Window continuous acquisition mode (value: 4)
     */
        /** @brief Asynchronous continuous acquisition mode */
    constexpr std::uint32_t ADF_DFLT0CR_ACQMOD_B_0x0 = 0;
        /** @brief Asynchronous single-shot acquisition mode */
    constexpr std::uint32_t ADF_DFLT0CR_ACQMOD_B_0x1 = 1;
        /** @brief Synchronous continuous acquisition mode */
    constexpr std::uint32_t ADF_DFLT0CR_ACQMOD_B_0x2 = 2;
        /** @brief Synchronous single-shot acquisition mode */
    constexpr std::uint32_t ADF_DFLT0CR_ACQMOD_B_0x3 = 3;
        /** @brief Window continuous acquisition mode */
    constexpr std::uint32_t ADF_DFLT0CR_ACQMOD_B_0x4 = 4;

    /** @brief DFLT0 trigger sensitivity selection */
    using ADF_DFLT0CR_TRGSENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: A rising edge event triggers the acquisition. (value: 0)
     *          - B_0x1: A falling edge even triggers the acquisition. (value: 1)
     */
        /** @brief A rising edge event triggers the acquisition. */
    constexpr std::uint32_t ADF_DFLT0CR_TRGSENS_B_0x0 = 0;
        /** @brief A falling edge even triggers the acquisition. */
    constexpr std::uint32_t ADF_DFLT0CR_TRGSENS_B_0x1 = 1;

    /** @brief DFLT0 trigger signal selection */
    using ADF_DFLT0CR_TRGSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TRGO selected (value: 0)
     *          - B_0x2: adf_trgi selected (value: 2)
     */
        /** @brief TRGO selected */
    constexpr std::uint32_t ADF_DFLT0CR_TRGSRC_B_0x0 = 0;
        /** @brief adf_trgi selected */
    constexpr std::uint32_t ADF_DFLT0CR_TRGSRC_B_0x2 = 2;

    /** @brief Number of samples to be discarded */
    using ADF_DFLT0CR_NBDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No sample discarded (value: 0)
     *          - B_0x1: 1 sample discarded (value: 1)
     */
        /** @brief No sample discarded */
    constexpr std::uint32_t ADF_DFLT0CR_NBDIS_B_0x0 = 0;
        /** @brief 1 sample discarded */
    constexpr std::uint32_t ADF_DFLT0CR_NBDIS_B_0x1 = 1;

    /** @brief DFLT0 run status flag */
    using ADF_DFLT0CR_DFLTRUN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DFLT0 not running and ready to accept a new trigger event (value: 0)
     *          - B_0x1: DFLT0running (value: 1)
     */
        /** @brief DFLT0 not running and ready to accept a new trigger event */
    constexpr std::uint32_t ADF_DFLT0CR_DFLTRUN_B_0x0 = 0;
        /** @brief DFLT0running */
    constexpr std::uint32_t ADF_DFLT0CR_DFLTRUN_B_0x1 = 1;

    /** @brief DFLT0 active flag */
    using ADF_DFLT0CR_DFLTACTIVE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DFLT0 not active (can be re-enabled again, via DFLTEN bit, if needed) (value: 0)
     *          - B_0x1: DFLT0 active (value: 1)
     */
        /** @brief DFLT0 not active (can be re-enabled again, via DFLTEN bit, if needed) */
    constexpr std::uint32_t ADF_DFLT0CR_DFLTACTIVE_B_0x0 = 0;
        /** @brief DFLT0 active */
    constexpr std::uint32_t ADF_DFLT0CR_DFLTACTIVE_B_0x1 = 1;

    /** @brief ADF digital filer configuration register 0 */
    using ADF_DFLT0CICR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Source data for the digital filter */
    using ADF_DFLT0CICR_DATSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x2: Stream coming from the ADCITF1 selected (value: 2)
     *          - B_0x3: Stream coming from the ADCITF2 selected (value: 3)
     */
        /** @brief Stream coming from the ADCITF1 selected */
    constexpr std::uint32_t ADF_DFLT0CICR_DATSRC_B_0x2 = 2;
        /** @brief Stream coming from the ADCITF2 selected */
    constexpr std::uint32_t ADF_DFLT0CICR_DATSRC_B_0x3 = 3;

    /** @brief Select the CIC order */
    using ADF_DFLT0CICR_CICMOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x4: MCIC configured in single Sincless thansup>4less than/sup> filter (value: 4)
     *          - B_0x5: MCIC configured in single Sincless thansup>5less than/sup> filter (value: 5)
     */
        /** @brief MCIC configured in single Sincless thansup>4less than/sup> filter */
    constexpr std::uint32_t ADF_DFLT0CICR_CICMOD_B_0x4 = 4;
        /** @brief MCIC configured in single Sincless thansup>5less than/sup> filter */
    constexpr std::uint32_t ADF_DFLT0CICR_CICMOD_B_0x5 = 5;

    /** @brief CIC decimation ratio selection */
    using ADF_DFLT0CICR_MCICD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Decimation ratio is 2. (value: 0)
     *          - B_0x1: Decimation ratio is 2. (value: 1)
     */
        /** @brief Decimation ratio is 2. */
    constexpr std::uint32_t ADF_DFLT0CICR_MCICD_B_0x0 = 0;
        /** @brief Decimation ratio is 2. */
    constexpr std::uint32_t ADF_DFLT0CICR_MCICD_B_0x1 = 1;

    /** @brief CIC decimation ratio selection */
    using ADF_DFLT0CICR_MCICD8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Decimation ratio is 2. (value: 0)
     *          - B_0x1: Decimation ratio is 2. (value: 1)
     */
        /** @brief Decimation ratio is 2. */
    constexpr std::uint32_t ADF_DFLT0CICR_MCICD8_B_0x0 = 0;
        /** @brief Decimation ratio is 2. */
    constexpr std::uint32_t ADF_DFLT0CICR_MCICD8_B_0x1 = 1;

    /** @brief Scaling factor selection */
    using ADF_DFLT0CICR_SCALE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 0 dB (value: 0)
     *          - B_0x1: + 3. (value: 1)
     *          - B_0x2: + 6 dB or shift left by 1 bit (value: 2)
     *          - B_0x18: + 72 dB or shift left by 12 bits (value: 24)
     *          - B_0x20: - 48. (value: 32)
     *          - B_0x21: - 44. (value: 33)
     *          - B_0x22: - 42. (value: 34)
     *          - B_0x23: - 38. (value: 35)
     *          - B_0x2E: -6 dB or shift right by 1 bit (value: 46)
     *          - B_0x2F: -2. (value: 47)
     */
        /** @brief 0 dB */
    constexpr std::uint32_t ADF_DFLT0CICR_SCALE_B_0x0 = 0;
        /** @brief + 3. */
    constexpr std::uint32_t ADF_DFLT0CICR_SCALE_B_0x1 = 1;
        /** @brief + 6 dB or shift left by 1 bit */
    constexpr std::uint32_t ADF_DFLT0CICR_SCALE_B_0x2 = 2;
        /** @brief + 72 dB or shift left by 12 bits */
    constexpr std::uint32_t ADF_DFLT0CICR_SCALE_B_0x18 = 24;
        /** @brief - 48. */
    constexpr std::uint32_t ADF_DFLT0CICR_SCALE_B_0x20 = 32;
        /** @brief - 44. */
    constexpr std::uint32_t ADF_DFLT0CICR_SCALE_B_0x21 = 33;
        /** @brief - 42. */
    constexpr std::uint32_t ADF_DFLT0CICR_SCALE_B_0x22 = 34;
        /** @brief - 38. */
    constexpr std::uint32_t ADF_DFLT0CICR_SCALE_B_0x23 = 35;
        /** @brief -6 dB or shift right by 1 bit */
    constexpr std::uint32_t ADF_DFLT0CICR_SCALE_B_0x2E = 46;
        /** @brief -2. */
    constexpr std::uint32_t ADF_DFLT0CICR_SCALE_B_0x2F = 47;

    /** @brief ADF reshape filter configuration register 0 */
    using ADF_DFLT0RSFR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x90, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reshaper filter bypass */
    using ADF_DFLT0RSFR_RSFLTBYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Reshape filter not bypassed (default value) (value: 0)
     *          - B_0x1: Reshape filter bypassed (value: 1)
     */
        /** @brief Reshape filter not bypassed (default value) */
    constexpr std::uint32_t ADF_DFLT0RSFR_RSFLTBYP_B_0x0 = 0;
        /** @brief Reshape filter bypassed */
    constexpr std::uint32_t ADF_DFLT0RSFR_RSFLTBYP_B_0x1 = 1;

    /** @brief Reshaper filter decimation ratio */
    using ADF_DFLT0RSFR_RSFLTD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Decimation ratio is 4 (default value). (value: 0)
     *          - B_0x1: Decimation ratio is 1. (value: 1)
     */
        /** @brief Decimation ratio is 4 (default value). */
    constexpr std::uint32_t ADF_DFLT0RSFR_RSFLTD_B_0x0 = 0;
        /** @brief Decimation ratio is 1. */
    constexpr std::uint32_t ADF_DFLT0RSFR_RSFLTD_B_0x1 = 1;

    /** @brief High-pass filter bypass */
    using ADF_DFLT0RSFR_HPFBYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HPF not bypassed (default value) (value: 0)
     *          - B_0x1: HPF bypassed (value: 1)
     */
        /** @brief HPF not bypassed (default value) */
    constexpr std::uint32_t ADF_DFLT0RSFR_HPFBYP_B_0x0 = 0;
        /** @brief HPF bypassed */
    constexpr std::uint32_t ADF_DFLT0RSFR_HPFBYP_B_0x1 = 1;

    /** @brief High-pass filter cut-off frequency */
    using ADF_DFLT0RSFR_HPFC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Cut-off frequency = 0. (value: 0)
     *          - B_0x1: Cut-off frequency = 0. (value: 1)
     *          - B_0x2: Cut-off frequency = 0. (value: 2)
     *          - B_0x3: Cut-off frequency = 0. (value: 3)
     */
        /** @brief Cut-off frequency = 0. */
    constexpr std::uint32_t ADF_DFLT0RSFR_HPFC_B_0x0 = 0;
        /** @brief Cut-off frequency = 0. */
    constexpr std::uint32_t ADF_DFLT0RSFR_HPFC_B_0x1 = 1;
        /** @brief Cut-off frequency = 0. */
    constexpr std::uint32_t ADF_DFLT0RSFR_HPFC_B_0x2 = 2;
        /** @brief Cut-off frequency = 0. */
    constexpr std::uint32_t ADF_DFLT0RSFR_HPFC_B_0x3 = 3;

    /** @brief ADF delay control register 0 */
    using ADF_DLY0CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Delay to apply to a bitstream */
    using ADF_DLY0CR_SKPDLY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No input sample skipped (value: 0)
     *          - B_0x1: 1 input sample skipped (value: 1)
     */
        /** @brief No input sample skipped */
    constexpr std::uint32_t ADF_DLY0CR_SKPDLY_B_0x0 = 0;
        /** @brief 1 input sample skipped */
    constexpr std::uint32_t ADF_DLY0CR_SKPDLY_B_0x1 = 1;

    /** @brief Skip busy flag */
    using ADF_DLY0CR_SKPBF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADF ready to accept a new value into SKPDLY[6:0] (value: 0)
     *          - B_0x1: Last valid SKPDLY[6:0] still under precessing (value: 1)
     */
        /** @brief ADF ready to accept a new value into SKPDLY[6:0] */
    constexpr std::uint32_t ADF_DLY0CR_SKPBF_B_0x0 = 0;
        /** @brief Last valid SKPDLY[6:0] still under precessing */
    constexpr std::uint32_t ADF_DLY0CR_SKPBF_B_0x1 = 1;

    /** @brief ADF DFLT0 interrupt enable register */
    using ADF_DFLT0IER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xAC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RxFIFO threshold interrupt enable */
    using ADF_DFLT0IER_FTHIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RxFIFO threshold interrupt disabled (value: 0)
     *          - B_0x1: RxFIFO threshold interrupt enabled (value: 1)
     */
        /** @brief RxFIFO threshold interrupt disabled */
    constexpr std::uint32_t ADF_DFLT0IER_FTHIE_B_0x0 = 0;
        /** @brief RxFIFO threshold interrupt enabled */
    constexpr std::uint32_t ADF_DFLT0IER_FTHIE_B_0x1 = 1;

    /** @brief Data overflow interrupt enable */
    using ADF_DFLT0IER_DOVRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Data overflow interrupt disabled (value: 0)
     *          - B_0x1: Data overflow interrupt enabled (value: 1)
     */
        /** @brief Data overflow interrupt disabled */
    constexpr std::uint32_t ADF_DFLT0IER_DOVRIE_B_0x0 = 0;
        /** @brief Data overflow interrupt enabled */
    constexpr std::uint32_t ADF_DFLT0IER_DOVRIE_B_0x1 = 1;

    /** @brief Saturation detection interrupt enable */
    using ADF_DFLT0IER_SATIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Saturation interrupt disabled (value: 0)
     *          - B_0x1: Saturation interrupt enabled (value: 1)
     */
        /** @brief Saturation interrupt disabled */
    constexpr std::uint32_t ADF_DFLT0IER_SATIE_B_0x0 = 0;
        /** @brief Saturation interrupt enabled */
    constexpr std::uint32_t ADF_DFLT0IER_SATIE_B_0x1 = 1;

    /** @brief Clock absence detection interrupt enable */
    using ADF_DFLT0IER_CKABIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Clock absence interrupt disabled (value: 0)
     *          - B_0x1: Clock absence interrupt enabled (value: 1)
     */
        /** @brief Clock absence interrupt disabled */
    constexpr std::uint32_t ADF_DFLT0IER_CKABIE_B_0x0 = 0;
        /** @brief Clock absence interrupt enabled */
    constexpr std::uint32_t ADF_DFLT0IER_CKABIE_B_0x1 = 1;

    /** @brief Reshape filter overrun interrupt enable */
    using ADF_DFLT0IER_RFOVRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Reshape filter overrun interrupt disabled (value: 0)
     *          - B_0x1: Reshape filter overrun interrupt enabled (value: 1)
     */
        /** @brief Reshape filter overrun interrupt disabled */
    constexpr std::uint32_t ADF_DFLT0IER_RFOVRIE_B_0x0 = 0;
        /** @brief Reshape filter overrun interrupt enabled */
    constexpr std::uint32_t ADF_DFLT0IER_RFOVRIE_B_0x1 = 1;

    /** @brief Sound activity detection interrupt enable */
    using ADF_DFLT0IER_SDDETIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Sound-trigger interrupt disabled (value: 0)
     *          - B_0x1: Sound-trigger interrupt enabled (value: 1)
     */
        /** @brief Sound-trigger interrupt disabled */
    constexpr std::uint32_t ADF_DFLT0IER_SDDETIE_B_0x0 = 0;
        /** @brief Sound-trigger interrupt enabled */
    constexpr std::uint32_t ADF_DFLT0IER_SDDETIE_B_0x1 = 1;

    /** @brief SAD sound-level value ready enable */
    using ADF_DFLT0IER_SDLVLIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Sound-level-ready interrupt disabled (value: 0)
     *          - B_0x1: Sound-level-ready interrupt enabled (value: 1)
     */
        /** @brief Sound-level-ready interrupt disabled */
    constexpr std::uint32_t ADF_DFLT0IER_SDLVLIE_B_0x0 = 0;
        /** @brief Sound-level-ready interrupt enabled */
    constexpr std::uint32_t ADF_DFLT0IER_SDLVLIE_B_0x1 = 1;

    /** @brief ADF DFLT0 interrupt status register 0 */
    using ADF_DFLT0ISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RxFIFO threshold flag */
    using ADF_DFLT0ISR_FTHF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RxFIFO threshold not reached (value: 0)
     *          - B_0x1: RxFIFO threshold reached (value: 1)
     */
        /** @brief RxFIFO threshold not reached */
    constexpr std::uint32_t ADF_DFLT0ISR_FTHF_B_0x0 = 0;
        /** @brief RxFIFO threshold reached */
    constexpr std::uint32_t ADF_DFLT0ISR_FTHF_B_0x1 = 1;

    /** @brief Data overflow flag */
    using ADF_DFLT0ISR_DOVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Read 0 means that no overflow is detected. (value: 0)
     *          - B_0x1: Read 1 means that an overflow is detected; Write 1 clears this flag. (value: 1)
     */
        /** @brief Read 0 means that no overflow is detected. */
    constexpr std::uint32_t ADF_DFLT0ISR_DOVRF_B_0x0 = 0;
        /** @brief Read 1 means that an overflow is detected; Write 1 clears this flag. */
    constexpr std::uint32_t ADF_DFLT0ISR_DOVRF_B_0x1 = 1;

    /** @brief RxFIFO not empty flag */
    using ADF_DFLT0ISR_RxNEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RxFIFO empty (value: 0)
     *          - B_0x1: RxFIFO not empty (value: 1)
     */
        /** @brief RxFIFO empty */
    constexpr std::uint32_t ADF_DFLT0ISR_RxNEF_B_0x0 = 0;
        /** @brief RxFIFO not empty */
    constexpr std::uint32_t ADF_DFLT0ISR_RxNEF_B_0x1 = 1;

    /** @brief Saturation detection flag */
    using ADF_DFLT0ISR_SATF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Read 0 means that no saturation is detected. (value: 0)
     *          - B_0x1: Read 1 means that a saturation is detected. (value: 1)
     */
        /** @brief Read 0 means that no saturation is detected. */
    constexpr std::uint32_t ADF_DFLT0ISR_SATF_B_0x0 = 0;
        /** @brief Read 1 means that a saturation is detected. */
    constexpr std::uint32_t ADF_DFLT0ISR_SATF_B_0x1 = 1;

    /** @brief Clock absence detection flag */
    using ADF_DFLT0ISR_CKABF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Read 0 means that no clock absence is detected. (value: 0)
     *          - B_0x1: Read 1 means that a clock absence is detected. (value: 1)
     */
        /** @brief Read 0 means that no clock absence is detected. */
    constexpr std::uint32_t ADF_DFLT0ISR_CKABF_B_0x0 = 0;
        /** @brief Read 1 means that a clock absence is detected. */
    constexpr std::uint32_t ADF_DFLT0ISR_CKABF_B_0x1 = 1;

    /** @brief Reshape filter overrun detection flag */
    using ADF_DFLT0ISR_RFOVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Read 0 means that no reshape filter overrun is detected. (value: 0)
     *          - B_0x1: Read 1 means that reshape filter overrun is detected. (value: 1)
     */
        /** @brief Read 0 means that no reshape filter overrun is detected. */
    constexpr std::uint32_t ADF_DFLT0ISR_RFOVRF_B_0x0 = 0;
        /** @brief Read 1 means that reshape filter overrun is detected. */
    constexpr std::uint32_t ADF_DFLT0ISR_RFOVRF_B_0x1 = 1;

    /** @brief Sound activity detection flag */
    using ADF_DFLT0ISR_SDDETF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Read 0 means that no sound activity is detected. (value: 0)
     *          - B_0x1: Read 1 means that sound activity is detected. (value: 1)
     */
        /** @brief Read 0 means that no sound activity is detected. */
    constexpr std::uint32_t ADF_DFLT0ISR_SDDETF_B_0x0 = 0;
        /** @brief Read 1 means that sound activity is detected. */
    constexpr std::uint32_t ADF_DFLT0ISR_SDDETF_B_0x1 = 1;

    /** @brief Sound level value ready flag */
    using ADF_DFLT0ISR_SDLVLF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Read 0 means that new sound level value is not ready. (value: 0)
     *          - B_0x1: Read 1 means that new sound level value is ready. (value: 1)
     */
        /** @brief Read 0 means that new sound level value is not ready. */
    constexpr std::uint32_t ADF_DFLT0ISR_SDLVLF_B_0x0 = 0;
        /** @brief Read 1 means that new sound level value is ready. */
    constexpr std::uint32_t ADF_DFLT0ISR_SDLVLF_B_0x1 = 1;

    /** @brief ADF SAD control register */
    using ADF_SADCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sound activity detector enable */
    using ADF_SADCR_SADEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SAD disabled and SAD state reset (value: 0)
     *          - B_0x1: SAD enabled (value: 1)
     */
        /** @brief SAD disabled and SAD state reset */
    constexpr std::uint32_t ADF_SADCR_SADEN_B_0x0 = 0;
        /** @brief SAD enabled */
    constexpr std::uint32_t ADF_SADCR_SADEN_B_0x1 = 1;

    /** @brief Data capture mode */
    using ADF_SADCR_DATCAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Samples from DFLT0 not transfered into the memory (value: 0)
     *          - B_0x1: Samples from DFLT0 transfered into the memory when SAD is in DETECT state (value: 1)
     */
        /** @brief Samples from DFLT0 not transfered into the memory */
    constexpr std::uint32_t ADF_SADCR_DATCAP_B_0x0 = 0;
        /** @brief Samples from DFLT0 transfered into the memory when SAD is in DETECT state */
    constexpr std::uint32_t ADF_SADCR_DATCAP_B_0x1 = 1;

    /** @brief Sound trigger event configuration */
    using ADF_SADCR_DETCFG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: sddet_evt generated when SAD enters the MONITOR state (value: 0)
     *          - B_0x1: sddet_evt generated when SAD enters or exits the DETECT state (value: 1)
     */
        /** @brief sddet_evt generated when SAD enters the MONITOR state */
    constexpr std::uint32_t ADF_SADCR_DETCFG_B_0x0 = 0;
        /** @brief sddet_evt generated when SAD enters or exits the DETECT state */
    constexpr std::uint32_t ADF_SADCR_DETCFG_B_0x1 = 1;

    /** @brief SAD state */
    using ADF_SADCR_SADST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SAD in LEARN state (value: 0)
     *          - B_0x1: SAD in MONITOR state (value: 1)
     *          - B_0x3: SAD in DETECT state (value: 3)
     */
        /** @brief SAD in LEARN state */
    constexpr std::uint32_t ADF_SADCR_SADST_B_0x0 = 0;
        /** @brief SAD in MONITOR state */
    constexpr std::uint32_t ADF_SADCR_SADST_B_0x1 = 1;
        /** @brief SAD in DETECT state */
    constexpr std::uint32_t ADF_SADCR_SADST_B_0x3 = 3;

    /** @brief Hysteresis enable */
    using ADF_SADCR_HYSTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Hysteresis function disabled. (value: 0)
     *          - B_0x1: Hysteresis function enabled. (value: 1)
     */
        /** @brief Hysteresis function disabled. */
    constexpr std::uint32_t ADF_SADCR_HYSTEN_B_0x0 = 0;
        /** @brief Hysteresis function enabled. */
    constexpr std::uint32_t ADF_SADCR_HYSTEN_B_0x1 = 1;

    /** @brief Frame size */
    using ADF_SADCR_FRSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 8 PCM samples used to compute the short-term signal level (value: 0)
     *          - B_0x1: 16 PCM samples used to compute the short-term signal level (value: 1)
     *          - B_0x2: 32 PCM samples used to compute the short-term signal level (value: 2)
     *          - B_0x3: 64 PCM samples used to compute the short-term signal level (value: 3)
     *          - B_0x4: 128 PCM samples used to compute the short-term signal level (value: 4)
     *          - B_0x5: 256 PCM samples used to compute the short-term signal level (value: 5)
     */
        /** @brief 8 PCM samples used to compute the short-term signal level */
    constexpr std::uint32_t ADF_SADCR_FRSIZE_B_0x0 = 0;
        /** @brief 16 PCM samples used to compute the short-term signal level */
    constexpr std::uint32_t ADF_SADCR_FRSIZE_B_0x1 = 1;
        /** @brief 32 PCM samples used to compute the short-term signal level */
    constexpr std::uint32_t ADF_SADCR_FRSIZE_B_0x2 = 2;
        /** @brief 64 PCM samples used to compute the short-term signal level */
    constexpr std::uint32_t ADF_SADCR_FRSIZE_B_0x3 = 3;
        /** @brief 128 PCM samples used to compute the short-term signal level */
    constexpr std::uint32_t ADF_SADCR_FRSIZE_B_0x4 = 4;
        /** @brief 256 PCM samples used to compute the short-term signal level */
    constexpr std::uint32_t ADF_SADCR_FRSIZE_B_0x5 = 5;

    /** @brief SAD working mode */
    using ADF_SADCR_SADMOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Threshold value computed according to the estimated ambient noise (value: 0)
     *          - B_0x1: Threshold value equal to ANMIN[12:0], multiplied by the gain selected by SNTHR[3:0] (value: 1)
     */
        /** @brief Threshold value computed according to the estimated ambient noise */
    constexpr std::uint32_t ADF_SADCR_SADMOD_B_0x0 = 0;
        /** @brief Threshold value equal to ANMIN[12:0], multiplied by the gain selected by SNTHR[3:0] */
    constexpr std::uint32_t ADF_SADCR_SADMOD_B_0x1 = 1;

    /** @brief SAD Active flag */
    using ADF_SADCR_SADACTIVE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SAD not active and can be configured if needed (value: 0)
     *          - B_0x1: SAD active and protected fields cannot be configured. (value: 1)
     */
        /** @brief SAD not active and can be configured if needed */
    constexpr std::uint32_t ADF_SADCR_SADACTIVE_B_0x0 = 0;
        /** @brief SAD active and protected fields cannot be configured. */
    constexpr std::uint32_t ADF_SADCR_SADACTIVE_B_0x1 = 1;

    /** @brief ADF SAD configuration register */
    using ADF_SADCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xBC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Signal to noise threshold */
    using ADF_SADCFGR_SNTHR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: THRless thansub>H less than/sub>is 3. (value: 0)
     *          - B_0x1: THRless thansub>H less than/sub>is 6. (value: 1)
     *          - B_0x2: THRless thansub>H less than/sub>is 9. (value: 2)
     *          - B_0x3: THRless thansub>H less than/sub>is 12 dB higher than ANLVL (value: 3)
     *          - B_0x4: THRless thansub>H less than/sub>is 15. (value: 4)
     *          - B_0x5: THRless thansub>H less than/sub>is 18 dB higher than ANLVL (value: 5)
     *          - B_0x6: THRless thansub>H less than/sub>is 21. (value: 6)
     *          - B_0x7: THRless thansub>H less than/sub>is 24. (value: 7)
     *          - B_0x8: THRless thansub>H less than/sub>is 27. (value: 8)
     *          - B_0x9: THRless thansub>H less than/sub>is 30. (value: 9)
     */
        /** @brief THRless thansub>H less than/sub>is 3. */
    constexpr std::uint32_t ADF_SADCFGR_SNTHR_B_0x0 = 0;
        /** @brief THRless thansub>H less than/sub>is 6. */
    constexpr std::uint32_t ADF_SADCFGR_SNTHR_B_0x1 = 1;
        /** @brief THRless thansub>H less than/sub>is 9. */
    constexpr std::uint32_t ADF_SADCFGR_SNTHR_B_0x2 = 2;
        /** @brief THRless thansub>H less than/sub>is 12 dB higher than ANLVL */
    constexpr std::uint32_t ADF_SADCFGR_SNTHR_B_0x3 = 3;
        /** @brief THRless thansub>H less than/sub>is 15. */
    constexpr std::uint32_t ADF_SADCFGR_SNTHR_B_0x4 = 4;
        /** @brief THRless thansub>H less than/sub>is 18 dB higher than ANLVL */
    constexpr std::uint32_t ADF_SADCFGR_SNTHR_B_0x5 = 5;
        /** @brief THRless thansub>H less than/sub>is 21. */
    constexpr std::uint32_t ADF_SADCFGR_SNTHR_B_0x6 = 6;
        /** @brief THRless thansub>H less than/sub>is 24. */
    constexpr std::uint32_t ADF_SADCFGR_SNTHR_B_0x7 = 7;
        /** @brief THRless thansub>H less than/sub>is 27. */
    constexpr std::uint32_t ADF_SADCFGR_SNTHR_B_0x8 = 8;
        /** @brief THRless thansub>H less than/sub>is 30. */
    constexpr std::uint32_t ADF_SADCFGR_SNTHR_B_0x9 = 9;

    /** @brief Ambient noise slope control */
    using ADF_SADCFGR_ANSLP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of learning frames */
    using ADF_SADCFGR_LFRNB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 2 frames used to compute the initial noise level (value: 0)
     *          - B_0x1: 4 frames used to compute the initial noise level (value: 1)
     *          - B_0x2: 8 frames used to compute the initial noise level (value: 2)
     *          - B_0x3: 16 frames used to compute the initial noise level (value: 3)
     */
        /** @brief 2 frames used to compute the initial noise level */
    constexpr std::uint32_t ADF_SADCFGR_LFRNB_B_0x0 = 0;
        /** @brief 4 frames used to compute the initial noise level */
    constexpr std::uint32_t ADF_SADCFGR_LFRNB_B_0x1 = 1;
        /** @brief 8 frames used to compute the initial noise level */
    constexpr std::uint32_t ADF_SADCFGR_LFRNB_B_0x2 = 2;
        /** @brief 16 frames used to compute the initial noise level */
    constexpr std::uint32_t ADF_SADCFGR_LFRNB_B_0x3 = 3;

    /** @brief Hangover time window */
    using ADF_SADCFGR_HGOVR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SAD back to MONITOR state if sound is below threshold for 4 frames (value: 0)
     *          - B_0x1: SAD back to MONITOR state if sound is below threshold for 8 frames (value: 1)
     *          - B_0x2: SAD back to MONITOR state if sound is below threshold for 16 frames (value: 2)
     *          - B_0x3: SAD back to MONITOR state if sound is below threshold for 32 frames (value: 3)
     *          - B_0x4: SAD back to MONITOR state if sound is below threshold for 64 frames (value: 4)
     *          - B_0x5: SAD back to MONITOR state if sound is below threshold for 128 frames (value: 5)
     *          - B_0x6: SAD back to MONITOR state if sound is below threshold for 256 frames (value: 6)
     *          - B_0x7: SAD back to MONITOR state if sound is below threshold for 512 frames (value: 7)
     */
        /** @brief SAD back to MONITOR state if sound is below threshold for 4 frames */
    constexpr std::uint32_t ADF_SADCFGR_HGOVR_B_0x0 = 0;
        /** @brief SAD back to MONITOR state if sound is below threshold for 8 frames */
    constexpr std::uint32_t ADF_SADCFGR_HGOVR_B_0x1 = 1;
        /** @brief SAD back to MONITOR state if sound is below threshold for 16 frames */
    constexpr std::uint32_t ADF_SADCFGR_HGOVR_B_0x2 = 2;
        /** @brief SAD back to MONITOR state if sound is below threshold for 32 frames */
    constexpr std::uint32_t ADF_SADCFGR_HGOVR_B_0x3 = 3;
        /** @brief SAD back to MONITOR state if sound is below threshold for 64 frames */
    constexpr std::uint32_t ADF_SADCFGR_HGOVR_B_0x4 = 4;
        /** @brief SAD back to MONITOR state if sound is below threshold for 128 frames */
    constexpr std::uint32_t ADF_SADCFGR_HGOVR_B_0x5 = 5;
        /** @brief SAD back to MONITOR state if sound is below threshold for 256 frames */
    constexpr std::uint32_t ADF_SADCFGR_HGOVR_B_0x6 = 6;
        /** @brief SAD back to MONITOR state if sound is below threshold for 512 frames */
    constexpr std::uint32_t ADF_SADCFGR_HGOVR_B_0x7 = 7;

    /** @brief Minimum noise level */
    using ADF_SADCFGR_ANMIN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 13, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADF SAD sound level register */
    using ADF_SADSDLVR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Short term sound level */
    using ADF_SADSDLVR_SDLVL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 15, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADF SAD ambient noise level register */
    using ADF_SADANLVR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Ambient noise level estimation */
    using ADF_SADANLVR_ANLVL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 15, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADF digital filter data register 0 */
    using ADF_DFLT0DR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data processed by DFT0 */
    using ADF_DFLT0DR_DR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
