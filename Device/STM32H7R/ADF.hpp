/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32H7R_ADF_HPP
#define EMBEDDED_PP_STM32H7R_ADF_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Audio digital filter */
namespace STM32H7R::ADF {

    /** @brief ADF global control register */
    using ADF_GCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Trigger output control This bit is set by software and reset by hardware. It is used to start the acquisition of several filters synchronously. It is also used to synchronize several ADF together by controlling the adf_trgo signal. */
    using ADF_GCR_TRGO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write 0 has no effect. Read 0 means that the trigger can be set again to 1. (value: 0)
     *          - B_0x1: Write 1 generates a positive pulse on the adf_trgo signal and triggers the acquisition on enabled filter having their ACQMOD[2:0] = 01x and selecting TRGO as trigger. Read 1 means that the trigger pulse is still active. (value: 1)
     */
        /** @brief Write 0 has no effect. Read 0 means that the trigger can be set again to 1. */
    constexpr std::uint32_t ADF_GCR_TRGO_B_0x0 = 0;
        /** @brief Write 1 generates a positive pulse on the adf_trgo signal and triggers the acquisition on enabled filter having their ACQMOD[2:0] = 01x and selecting TRGO as trigger. Read 1 means that the trigger pulse is still active. */
    constexpr std::uint32_t ADF_GCR_TRGO_B_0x1 = 1;

    /** @brief ADF clock generator control register */
    using ADF_CKGCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CKGEN dividers enable This bit is set and reset by software. It is used to enable/disable the clock dividers of the CKGEN: PROCDIV and CCKDIV. */
    using ADF_CKGCR_CKGDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CKGEN dividers disabled (value: 0)
     *          - B_0x1: CKGEN dividers enabled (value: 1)
     */
        /** @brief CKGEN dividers disabled */
    constexpr std::uint32_t ADF_CKGCR_CKGDEN_B_0x0 = 0;
        /** @brief CKGEN dividers enabled */
    constexpr std::uint32_t ADF_CKGCR_CKGDEN_B_0x1 = 1;

    /** @brief ADF_CCK0 clock enable This bit is set and reset by software. It is used to control the generation of the bitstream clock on the ADF_CCK0 pin. */
    using ADF_CKGCR_CCK0EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bitstream clock not generated (value: 0)
     *          - B_0x1: Bitstream clock generated on the ADF_CCK0 pin (value: 1)
     */
        /** @brief Bitstream clock not generated */
    constexpr std::uint32_t ADF_CKGCR_CCK0EN_B_0x0 = 0;
        /** @brief Bitstream clock generated on the ADF_CCK0 pin */
    constexpr std::uint32_t ADF_CKGCR_CCK0EN_B_0x1 = 1;

    /** @brief ADF_CCK1 clock enable This bit is set and reset by software. It is used to control the generation of the bitstream clock on the ADF_CCK1 pin. */
    using ADF_CKGCR_CCK1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bitstream clock not generated (value: 0)
     *          - B_0x1: Bitstream clock generated on the ADF_CCK1 pin. (value: 1)
     */
        /** @brief Bitstream clock not generated */
    constexpr std::uint32_t ADF_CKGCR_CCK1EN_B_0x0 = 0;
        /** @brief Bitstream clock generated on the ADF_CCK1 pin. */
    constexpr std::uint32_t ADF_CKGCR_CCK1EN_B_0x1 = 1;

    /** @brief Clock generator mode This bit is set and reset by software. It is used to define the way the clock generator is enabled. This bit must not be changed if the filter is enabled (DFTEN = 1). Note: This bit can be write-protected (see Section 46.4.13: Register protection for details). */
    using ADF_CKGCR_CKGMOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The kernel clock is provided to the dividers as soon as CKGDEN is set to 1. (value: 0)
     *          - B_0x1: The kernel clock is provided to the dividers when CKGDEN is set to 1 and the trigger condition met. (value: 1)
     */
        /** @brief The kernel clock is provided to the dividers as soon as CKGDEN is set to 1. */
    constexpr std::uint32_t ADF_CKGCR_CKGMOD_B_0x0 = 0;
        /** @brief The kernel clock is provided to the dividers when CKGDEN is set to 1 and the trigger condition met. */
    constexpr std::uint32_t ADF_CKGCR_CKGMOD_B_0x1 = 1;

    /** @brief ADF_CCK0 direction This bit is set and reset by software. It is used to control the direction of the ADF_CCK0 pin. Note: This bit can be write-protected (see Section 46.4.13: Register protection for details). */
    using ADF_CKGCR_CCK0DIR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The ADF_CCK0 pin direction is in input. (value: 0)
     *          - B_0x1: The ADF_CCK0 pin direction is in output. (value: 1)
     */
        /** @brief The ADF_CCK0 pin direction is in input. */
    constexpr std::uint32_t ADF_CKGCR_CCK0DIR_B_0x0 = 0;
        /** @brief The ADF_CCK0 pin direction is in output. */
    constexpr std::uint32_t ADF_CKGCR_CCK0DIR_B_0x1 = 1;

    /** @brief ADF_CCK1 direction This bit is set and reset by software. It is used to control the direction of the ADF_CCK1 pin. Note: This bit can be write-protected (see Section 46.4.13: Register protection for details). */
    using ADF_CKGCR_CCK1DIR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The ADF_CCK1 pin direction is in input. (value: 0)
     *          - B_0x1: The ADF_CCK1 pin direction is in output. (value: 1)
     */
        /** @brief The ADF_CCK1 pin direction is in input. */
    constexpr std::uint32_t ADF_CKGCR_CCK1DIR_B_0x0 = 0;
        /** @brief The ADF_CCK1 pin direction is in output. */
    constexpr std::uint32_t ADF_CKGCR_CCK1DIR_B_0x1 = 1;

    /** @brief CKGEN trigger sensitivity selection This bit is set and cleared by software. It is used to select the trigger sensitivity of the trigger signals. This bit is not significant if the CKGMOD = 0. Note: When the trigger source is TRGO, the sensitivity is forced to falling edge, thus TRGSENS value is not taken into account. This bit can be write-protected (see Section 46.4.13: Register protection for details). */
    using ADF_CKGCR_TRGSENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: A rising edge event triggers the activation of CKGEN dividers. (value: 0)
     *          - B_0x1: A falling edge even triggers the activation of CKGEN dividers. (value: 1)
     */
        /** @brief A rising edge event triggers the activation of CKGEN dividers. */
    constexpr std::uint32_t ADF_CKGCR_TRGSENS_B_0x0 = 0;
        /** @brief A falling edge even triggers the activation of CKGEN dividers. */
    constexpr std::uint32_t ADF_CKGCR_TRGSENS_B_0x1 = 1;

    /** @brief Digital filter trigger signal selection This field is set and cleared by software. It is used to select which external signals trigger the corresponding filter. This field is not significant if the CKGMOD = 0. 000x: TRGO selected others: reserved Note: This field can be write-protected (see Section 46.4.13: Register protection for details). */
    using ADF_CKGCR_TRGSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x2: adf_trg1 selected (value: 2)
     */
        /** @brief adf_trg1 selected */
    constexpr std::uint32_t ADF_CKGCR_TRGSRC_B_0x2 = 2;

    /** @brief Divider to control the ADF_CCK clock This field is set and reset by software. It is used to adjust the frequency of the ADF_CCK clock. The input clock of this divider is the clock provided to the SITF. More globally, the frequency of the ADF_CCK is given by the following formula: This field must not be changed if the filter is enabled (DFTEN = 1). ... Note: This field can be write-protected (see Section 46.4.13: Register protection for details). */
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

    /** @brief Divider to control the serial interface clock this field is set and reset by software. It is used to adjust the frequency of the clock provided to the SITF. This field must not be changed if the filter is enabled (DFTEN = 1). ... Note: This field can be write-protected (see Section 46.4.13: Register protection for details). */
    using ADF_CKGCR_PROCDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: adf_ker_ck provided to the SITF (value: 0)
     *          - B_0x1: adf_ker_ck / 2 provided to the SITF (value: 1)
     */
        /** @brief adf_ker_ck provided to the SITF */
    constexpr std::uint32_t ADF_CKGCR_PROCDIV_B_0x0 = 0;
        /** @brief adf_ker_ck / 2 provided to the SITF */
    constexpr std::uint32_t ADF_CKGCR_PROCDIV_B_0x1 = 1;

    /** @brief Clock generator active flag This bit is set and cleared by hardware. Ii is used by the application to check if the clock generator is effectively enabled (active) or not. The protected fields of this function can only be updated when CKGACTIVE = 0 (see Section 46.4.13: Register protection for details). The delay between a transition on CKGDEN and a transition on CKGACTIVE is two periods of AHB clock and two 2 periods of adf_proc_ck. */
    using ADF_CKGCR_CKGACTIVE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The clock generator is not active and can be configured if needed. (value: 0)
     *          - B_0x1: The clock generator is active and protected fields cannot be configured. (value: 1)
     */
        /** @brief The clock generator is not active and can be configured if needed. */
    constexpr std::uint32_t ADF_CKGCR_CKGACTIVE_B_0x0 = 0;
        /** @brief The clock generator is active and protected fields cannot be configured. */
    constexpr std::uint32_t ADF_CKGCR_CKGACTIVE_B_0x1 = 1;

    /** @brief ADF serial interface control register 0 */
    using ADF_SITF0CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x80, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Serial interface enable This bit is set and cleared by software. It is used to enable/disable the serial interface. */
    using ADF_SITF0CR_SITFEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Serial interface disabled (value: 0)
     *          - B_0x1: Serial interface enabled (value: 1)
     */
        /** @brief Serial interface disabled */
    constexpr std::uint32_t ADF_SITF0CR_SITFEN_B_0x0 = 0;
        /** @brief Serial interface enabled */
    constexpr std::uint32_t ADF_SITF0CR_SITFEN_B_0x1 = 1;

    /** @brief Serial clock source This field is set and cleared by software. It is used to select the clock source of the serial interface. others: reserved Note: This field can be write-protected (see Section 46.4.13: Register protection for details). */
    using ADF_SITF0CR_SCKSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Serial clock source is ADF_CCK0. (value: 0)
     *          - B_0x1: Serial clock source is ADF_CCK1. (value: 1)
     */
        /** @brief Serial clock source is ADF_CCK0. */
    constexpr std::uint32_t ADF_SITF0CR_SCKSRC_B_0x0 = 0;
        /** @brief Serial clock source is ADF_CCK1. */
    constexpr std::uint32_t ADF_SITF0CR_SCKSRC_B_0x1 = 1;

    /** @brief Serial interface type This field is set and cleared by software. It is used to define the serial interface type. Note: This field can be write-protected (see Section 46.4.13: Register protection for details). */
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

    /** @brief Manchester symbol threshold/SPI threshold This field is set and cleared by software. It is used for Manchester mode to define the expected symbol threshold levels (seer to Manchester mode for details on computation). In addition this field is used to define the timeout value for the clock absence detection in Normal SPI mode. STH[4:0] values lower than four are invalid. Note: This field can be write-protected (see Section 46.4.13: Register protection for details). */
    using ADF_SITF0CR_STH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Serial interface active flag This bit is set and cleared by hardware. It is used by the application to check if the serial interface is effectively enabled (active) or not. The protected fields of this function can only be updated when SITFACTIVE is set to 0 (see Section 46.4.13: Register protection for details). The delay between a transition on SITFEN and a transition on SITFACTIVE is two periods of AHB clock and two periods of adf_proc_ck. */
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
    using ADF_BSMX0CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x84, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bitstream selection This field is set and cleared by software. It is used to select the bitstream to be processed for DFLT0. others: reserved Note: This field can be write-protected (see Section 46.4.13: Register protection for details). */
    using ADF_BSMX0CR_BSSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: bs0_r provided to DFLT0 (value: 0)
     *          - B_0x1: bs0_f provided to DFLT0 (value: 1)
     */
        /** @brief bs0_r provided to DFLT0 */
    constexpr std::uint32_t ADF_BSMX0CR_BSSEL_B_0x0 = 0;
        /** @brief bs0_f provided to DFLT0 */
    constexpr std::uint32_t ADF_BSMX0CR_BSSEL_B_0x1 = 1;

    /** @brief BSMX active flag This bit is set and cleared by hardware. It is used by the application to check if the BSMX is effectively enabled (active) or not. BSSEL[4:0] can only be updated when BSMXACTIVE is set to 0. This BSMXACTIVE flag cannot go to 0 if DFLT0 is enabled. */
    using ADF_BSMX0CR_BSMXACTIVE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: BSMX is not active and can be configured if needed. (value: 0)
     *          - B_0x1: BSMX is active and protected fields cannot be configured. (value: 1)
     */
        /** @brief BSMX is not active and can be configured if needed. */
    constexpr std::uint32_t ADF_BSMX0CR_BSMXACTIVE_B_0x0 = 0;
        /** @brief BSMX is active and protected fields cannot be configured. */
    constexpr std::uint32_t ADF_BSMX0CR_BSMXACTIVE_B_0x1 = 1;

    /** @brief ADF digital filter control register 0 */
    using ADF_DFLT0CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x88, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DFLT0 enable This bit is set and cleared by software. It is used to control the start of acquisition of the DFLT0 path. This bit behavior depends on ACQMOD[2:0] and external events. The serial or parallel interface delivering the samples must be enabled as well. */
    using ADF_DFLT0CR_DFLTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Acquisition immediately stopped (value: 0)
     *          - B_0x1: Acquisition immediately started if ACQMOD[2:0] = 00x or 101, or acquisition started when the proper trigger event occurs if ACQMOD[2:0] = 01x. (value: 1)
     */
        /** @brief Acquisition immediately stopped */
    constexpr std::uint32_t ADF_DFLT0CR_DFLTEN_B_0x0 = 0;
        /** @brief Acquisition immediately started if ACQMOD[2:0] = 00x or 101, or acquisition started when the proper trigger event occurs if ACQMOD[2:0] = 01x. */
    constexpr std::uint32_t ADF_DFLT0CR_DFLTEN_B_0x1 = 1;

    /** @brief DMA requests enable This bit is set and cleared by software. It is used to control the generation of DMA request to transfer the processed samples into the memory. Note: This bit can be write-protected (see Section 46.4.13: Register protection for details). */
    using ADF_DFLT0CR_DMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DMA interface for the corresponding digital filter disabled (value: 0)
     *          - B_0x1: DMA interface for the corresponding digital filter enabled (value: 1)
     */
        /** @brief DMA interface for the corresponding digital filter disabled */
    constexpr std::uint32_t ADF_DFLT0CR_DMAEN_B_0x0 = 0;
        /** @brief DMA interface for the corresponding digital filter enabled */
    constexpr std::uint32_t ADF_DFLT0CR_DMAEN_B_0x1 = 1;

    /** @brief RXFIFO threshold selection This bit is set and cleared by software. It is used to select the RXFIFO threshold. Note: This bit can be write-protected (see Section 46.4.13: Register protection for details). */
    using ADF_DFLT0CR_FTH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RXFIFO threshold event generated when the RXFIFO is not empty (value: 0)
     *          - B_0x1: RXFIFO threshold event generated when the RXFIFO is half-full (value: 1)
     */
        /** @brief RXFIFO threshold event generated when the RXFIFO is not empty */
    constexpr std::uint32_t ADF_DFLT0CR_FTH_B_0x0 = 0;
        /** @brief RXFIFO threshold event generated when the RXFIFO is half-full */
    constexpr std::uint32_t ADF_DFLT0CR_FTH_B_0x1 = 1;

    /** @brief DFLT0 trigger mode This field is set and cleared by software. It is used to select the filter trigger mode. others: same as 000 Note: This field can be write-protected (see Section 46.4.13: Register protection for details).. */
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

    /** @brief DFLT0 trigger sensitivity selection This field is set and cleared by software. It is used to select the trigger sensitivity of the external signals When the trigger source is TRGO, TRGSENS value is not taken into account. When TRGO is selected, the sensitivity is forced to falling edge. Note: This bit can be write-protected (see Section 46.4.13: Register protection for details). */
    using ADF_DFLT0CR_TRGSENS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: A rising edge event triggers the acquisition. (value: 0)
     *          - B_0x1: A falling edge even triggers the acquisition. (value: 1)
     */
        /** @brief A rising edge event triggers the acquisition. */
    constexpr std::uint32_t ADF_DFLT0CR_TRGSENS_B_0x0 = 0;
        /** @brief A falling edge even triggers the acquisition. */
    constexpr std::uint32_t ADF_DFLT0CR_TRGSENS_B_0x1 = 1;

    /** @brief DFLT0 trigger signal selection This field is set and cleared by software. It is used to select which external signals trigger DFLT0. others: Reserved Note: This field can be write-protected (see Section 46.4.13: Register protection for details). */
    using ADF_DFLT0CR_TRGSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TRGO selected (value: 0)
     *          - B_0x2: adf_trgi selected (value: 2)
     */
        /** @brief TRGO selected */
    constexpr std::uint32_t ADF_DFLT0CR_TRGSRC_B_0x0 = 0;
        /** @brief adf_trgi selected */
    constexpr std::uint32_t ADF_DFLT0CR_TRGSRC_B_0x2 = 2;

    /** @brief Number of samples to be discarded This field is set and cleared by software. It is used to define the number of samples to be discarded every time DFLT0 is re-started. ... Note: This field can be write-protected (see Section 46.4.13: Register protection for details). */
    using ADF_DFLT0CR_NBDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No sample discarded (value: 0)
     *          - B_0x1: 1 sample discarded (value: 1)
     */
        /** @brief No sample discarded */
    constexpr std::uint32_t ADF_DFLT0CR_NBDIS_B_0x0 = 0;
        /** @brief 1 sample discarded */
    constexpr std::uint32_t ADF_DFLT0CR_NBDIS_B_0x1 = 1;

    /** @brief DFLT0 run status flag This bit is set and cleared by hardware. It indicates if DFLT0 is running or not. */
    using ADF_DFLT0CR_DFLTRUN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DFLT0 not running and ready to accept a new trigger event (value: 0)
     *          - B_0x1: DFLT0running (value: 1)
     */
        /** @brief DFLT0 not running and ready to accept a new trigger event */
    constexpr std::uint32_t ADF_DFLT0CR_DFLTRUN_B_0x0 = 0;
        /** @brief DFLT0running */
    constexpr std::uint32_t ADF_DFLT0CR_DFLTRUN_B_0x1 = 1;

    /** @brief DFLT0 active flag This bit is set and cleared by hardware. It indicates if DFLT0 is active: can be running or waiting for events. */
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
    /** @brief Source data for the digital filter This field is set and cleared by software. 0x: Stream coming from the BSMX selected Note: This field can be write-protected (see Section 46.4.13: Register protection for details). */
    using ADF_DFLT0CICR_DATSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x2: Stream coming from the ADCITF1 selected (value: 2)
     *          - B_0x3: Stream coming from the ADCITF2 selected (value: 3)
     */
        /** @brief Stream coming from the ADCITF1 selected */
    constexpr std::uint32_t ADF_DFLT0CICR_DATSRC_B_0x2 = 2;
        /** @brief Stream coming from the ADCITF2 selected */
    constexpr std::uint32_t ADF_DFLT0CICR_DATSRC_B_0x3 = 3;

    /** @brief Select the CIC order This field is set and cleared by software. It is used to select the order of the MCIC. others: reserved Note: This field can be write-protected (see Section 46.4.13: Register protection for details). */
    using ADF_DFLT0CICR_CICMOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x4: MCIC configured in single Sinc<sup>4</sup> filter (value: 4)
     *          - B_0x5: MCIC configured in single Sinc<sup>5</sup> filter (value: 5)
     */
        /** @brief MCIC configured in single Sinc<sup>4</sup> filter */
    constexpr std::uint32_t ADF_DFLT0CICR_CICMOD_B_0x4 = 4;
        /** @brief MCIC configured in single Sinc<sup>5</sup> filter */
    constexpr std::uint32_t ADF_DFLT0CICR_CICMOD_B_0x5 = 5;

    /** @brief CIC decimation ratio selection This field is set and cleared by software.It is used to select the CIC decimation ratio. A decimation ratio smaller than two is not allowed. The decimation ratio is given by (CICDEC+1). ... Note: This field can be write-protected (see Section 46.4.13: Register protection for details). */
    using ADF_DFLT0CICR_MCICD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Decimation ratio is 2. (value: 0)
     *          - B_0x1: Decimation ratio is 2. (value: 1)
     */
        /** @brief Decimation ratio is 2. */
    constexpr std::uint32_t ADF_DFLT0CICR_MCICD_B_0x0 = 0;
        /** @brief Decimation ratio is 2. */
    constexpr std::uint32_t ADF_DFLT0CICR_MCICD_B_0x1 = 1;

    /** @brief CIC decimation ratio selection This field is set and cleared by software.It is used to select the CIC decimation ratio. A decimation ratio smaller than two is not allowed. The decimation ratio is given by (CICDEC+1). ... Note: This field can be write-protected (see Section 46.4.13: Register protection for details). */
    using ADF_DFLT0CICR_MCICD8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Decimation ratio is 2. (value: 0)
     *          - B_0x1: Decimation ratio is 2. (value: 1)
     */
        /** @brief Decimation ratio is 2. */
    constexpr std::uint32_t ADF_DFLT0CICR_MCICD8_B_0x0 = 0;
        /** @brief Decimation ratio is 2. */
    constexpr std::uint32_t ADF_DFLT0CICR_MCICD8_B_0x1 = 1;

    /** @brief Scaling factor selection This field is set and cleared by software. It is used to select the gain to be applied at CIC output (see Table 419 for details). If the application attempts to write a new gain value while the previous one is not yet applied, this new gain value is ignored. Reading back this field informs the application on the current gain value. ... ... others: Reserved */
    using ADF_DFLT0CICR_SCALE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 0 dB (value: 0)
     *          - B_0x1: + 3.5 dB (value: 1)
     *          - B_0x2: + 6 dB or shift left by 1 bit (value: 2)
     *          - B_0x18: + 72 dB or shift left by 12 bits (value: 24)
     *          - B_0x20: - 48.2 dB or shift right by 8 bits (default value) (value: 32)
     *          - B_0x21: - 44.6 dB (value: 33)
     *          - B_0x22: - 42.1 dB or shift right by 7 bits (value: 34)
     *          - B_0x23: - 38.6 dB (value: 35)
     *          - B_0x2E: -6 dB or shift right by 1 bit (value: 46)
     *          - B_0x2F: -2.5 dB (value: 47)
     */
        /** @brief 0 dB */
    constexpr std::uint32_t ADF_DFLT0CICR_SCALE_B_0x0 = 0;
        /** @brief + 3.5 dB */
    constexpr std::uint32_t ADF_DFLT0CICR_SCALE_B_0x1 = 1;
        /** @brief + 6 dB or shift left by 1 bit */
    constexpr std::uint32_t ADF_DFLT0CICR_SCALE_B_0x2 = 2;
        /** @brief + 72 dB or shift left by 12 bits */
    constexpr std::uint32_t ADF_DFLT0CICR_SCALE_B_0x18 = 24;
        /** @brief - 48.2 dB or shift right by 8 bits (default value) */
    constexpr std::uint32_t ADF_DFLT0CICR_SCALE_B_0x20 = 32;
        /** @brief - 44.6 dB */
    constexpr std::uint32_t ADF_DFLT0CICR_SCALE_B_0x21 = 33;
        /** @brief - 42.1 dB or shift right by 7 bits */
    constexpr std::uint32_t ADF_DFLT0CICR_SCALE_B_0x22 = 34;
        /** @brief - 38.6 dB */
    constexpr std::uint32_t ADF_DFLT0CICR_SCALE_B_0x23 = 35;
        /** @brief -6 dB or shift right by 1 bit */
    constexpr std::uint32_t ADF_DFLT0CICR_SCALE_B_0x2E = 46;
        /** @brief -2.5 dB */
    constexpr std::uint32_t ADF_DFLT0CICR_SCALE_B_0x2F = 47;

    /** @brief ADF reshape filter configuration register 0 */
    using ADF_DFLT0RSFR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x90, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Reshaper filter bypass This bit is set and cleared by software. It is used to bypass the reshape filter and its decimation block. Note: This bit can be write-protected (see Section 46.4.13: Register protection for details). */
    using ADF_DFLT0RSFR_RSFLTBYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Reshape filter not bypassed (default value) (value: 0)
     *          - B_0x1: Reshape filter bypassed (value: 1)
     */
        /** @brief Reshape filter not bypassed (default value) */
    constexpr std::uint32_t ADF_DFLT0RSFR_RSFLTBYP_B_0x0 = 0;
        /** @brief Reshape filter bypassed */
    constexpr std::uint32_t ADF_DFLT0RSFR_RSFLTBYP_B_0x1 = 1;

    /** @brief Reshaper filter decimation ratio This bit is set and cleared by software. It is used to select the decimation ratio for the reshape filter Note: This bit can be write-protected (see Section 46.4.13: Register protection for details). */
    using ADF_DFLT0RSFR_RSFLTD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Decimation ratio is 4 (default value). (value: 0)
     *          - B_0x1: Decimation ratio is 1. (value: 1)
     */
        /** @brief Decimation ratio is 4 (default value). */
    constexpr std::uint32_t ADF_DFLT0RSFR_RSFLTD_B_0x0 = 0;
        /** @brief Decimation ratio is 1. */
    constexpr std::uint32_t ADF_DFLT0RSFR_RSFLTD_B_0x1 = 1;

    /** @brief High-pass filter bypass This bit is set and cleared by software. It is used to bypass the high-pass filter. Note: This bit can be write-protected (see Section 46.4.13: Register protection for details). */
    using ADF_DFLT0RSFR_HPFBYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: HPF not bypassed (default value) (value: 0)
     *          - B_0x1: HPF bypassed (value: 1)
     */
        /** @brief HPF not bypassed (default value) */
    constexpr std::uint32_t ADF_DFLT0RSFR_HPFBYP_B_0x0 = 0;
        /** @brief HPF bypassed */
    constexpr std::uint32_t ADF_DFLT0RSFR_HPFBYP_B_0x1 = 1;

    /** @brief High-pass filter cut-off frequency This field is set and cleared by software. it is used to select the cut-off frequency of the high-pass filter. F<sub>PCM</sub> represents the sampling frequency at HPF input. Note: This field can be write-protected (see Section 46.4.13: Register protection for details). */
    using ADF_DFLT0RSFR_HPFC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Cut-off frequency = 0.000625 x FPCM (value: 0)
     *          - B_0x1: Cut-off frequency = 0.00125 x FPCM (value: 1)
     *          - B_0x2: Cut-off frequency = 0.00250 x FPCM (value: 2)
     *          - B_0x3: Cut-off frequency = 0.00950 x FPCM (value: 3)
     */
        /** @brief Cut-off frequency = 0.000625 x FPCM */
    constexpr std::uint32_t ADF_DFLT0RSFR_HPFC_B_0x0 = 0;
        /** @brief Cut-off frequency = 0.00125 x FPCM */
    constexpr std::uint32_t ADF_DFLT0RSFR_HPFC_B_0x1 = 1;
        /** @brief Cut-off frequency = 0.00250 x FPCM */
    constexpr std::uint32_t ADF_DFLT0RSFR_HPFC_B_0x2 = 2;
        /** @brief Cut-off frequency = 0.00950 x FPCM */
    constexpr std::uint32_t ADF_DFLT0RSFR_HPFC_B_0x3 = 3;

    /** @brief ADF delay control register 0 */
    using ADF_DLY0CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Delay to apply to a bitstream This field is set and cleared by software. It defines the number of input samples that are skipped. Skipping is applied immediately after writing to this field, if SKPBF = 0 and DFLTEN = 1. If SKPBF = 1, the value written into the register is ignored by the delay state machine. ... */
    using ADF_DLY0CR_SKPDLY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No input sample skipped (value: 0)
     *          - B_0x1: 1 input sample skipped (value: 1)
     */
        /** @brief No input sample skipped */
    constexpr std::uint32_t ADF_DLY0CR_SKPDLY_B_0x0 = 0;
        /** @brief 1 input sample skipped */
    constexpr std::uint32_t ADF_DLY0CR_SKPDLY_B_0x1 = 1;

    /** @brief Skip busy flag This bit is set and cleared by hardware. It is used to control if the delay sequence is completed. */
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
    /** @brief RXFIFO threshold interrupt enable This bit is set and cleared by software. */
    using ADF_DFLT0IER_FTHIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RXFIFO threshold interrupt disabled (value: 0)
     *          - B_0x1: RXFIFO threshold interrupt enabled (value: 1)
     */
        /** @brief RXFIFO threshold interrupt disabled */
    constexpr std::uint32_t ADF_DFLT0IER_FTHIE_B_0x0 = 0;
        /** @brief RXFIFO threshold interrupt enabled */
    constexpr std::uint32_t ADF_DFLT0IER_FTHIE_B_0x1 = 1;

    /** @brief Data overflow interrupt enable This bit is set and cleared by software. */
    using ADF_DFLT0IER_DOVRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Data overflow interrupt disabled (value: 0)
     *          - B_0x1: Data overflow interrupt enabled (value: 1)
     */
        /** @brief Data overflow interrupt disabled */
    constexpr std::uint32_t ADF_DFLT0IER_DOVRIE_B_0x0 = 0;
        /** @brief Data overflow interrupt enabled */
    constexpr std::uint32_t ADF_DFLT0IER_DOVRIE_B_0x1 = 1;

    /** @brief Saturation detection interrupt enable This bit is set and cleared by software. */
    using ADF_DFLT0IER_SATIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Saturation interrupt disabled (value: 0)
     *          - B_0x1: Saturation interrupt enabled (value: 1)
     */
        /** @brief Saturation interrupt disabled */
    constexpr std::uint32_t ADF_DFLT0IER_SATIE_B_0x0 = 0;
        /** @brief Saturation interrupt enabled */
    constexpr std::uint32_t ADF_DFLT0IER_SATIE_B_0x1 = 1;

    /** @brief Clock absence detection interrupt enable This bit is set and cleared by software. */
    using ADF_DFLT0IER_CKABIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Clock absence interrupt disabled (value: 0)
     *          - B_0x1: Clock absence interrupt enabled (value: 1)
     */
        /** @brief Clock absence interrupt disabled */
    constexpr std::uint32_t ADF_DFLT0IER_CKABIE_B_0x0 = 0;
        /** @brief Clock absence interrupt enabled */
    constexpr std::uint32_t ADF_DFLT0IER_CKABIE_B_0x1 = 1;

    /** @brief Reshape filter overrun interrupt enable This bit is set and cleared by software. */
    using ADF_DFLT0IER_RFOVRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Reshape filter overrun interrupt disabled (value: 0)
     *          - B_0x1: Reshape filter overrun interrupt enabled (value: 1)
     */
        /** @brief Reshape filter overrun interrupt disabled */
    constexpr std::uint32_t ADF_DFLT0IER_RFOVRIE_B_0x0 = 0;
        /** @brief Reshape filter overrun interrupt enabled */
    constexpr std::uint32_t ADF_DFLT0IER_RFOVRIE_B_0x1 = 1;

    /** @brief Sound activity detection interrupt enable This bit is set and cleared by software. */
    using ADF_DFLT0IER_SDDETIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Sound-trigger interrupt disabled (value: 0)
     *          - B_0x1: Sound-trigger interrupt enabled (value: 1)
     */
        /** @brief Sound-trigger interrupt disabled */
    constexpr std::uint32_t ADF_DFLT0IER_SDDETIE_B_0x0 = 0;
        /** @brief Sound-trigger interrupt enabled */
    constexpr std::uint32_t ADF_DFLT0IER_SDDETIE_B_0x1 = 1;

    /** @brief SAD sound-level value ready enable This bit is set and cleared by software. */
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
    /** @brief RXFIFO threshold flag This bit is set by hardware, and cleared by the hardware when the RXFIFO level is lower than the threshold. */
    using ADF_DFLT0ISR_FTHF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RXFIFO threshold not reached (value: 0)
     *          - B_0x1: RXFIFO threshold reached (value: 1)
     */
        /** @brief RXFIFO threshold not reached */
    constexpr std::uint32_t ADF_DFLT0ISR_FTHF_B_0x0 = 0;
        /** @brief RXFIFO threshold reached */
    constexpr std::uint32_t ADF_DFLT0ISR_FTHF_B_0x1 = 1;

    /** @brief Data overflow flag This bit is set by hardware and cleared by software by writing this bit to 1. */
    using ADF_DFLT0ISR_DOVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Read 0 means that no overflow is detected. Write 0 has no effect. (value: 0)
     *          - B_0x1: Read 1 means that an overflow is detected; Write 1 clears this flag. (value: 1)
     */
        /** @brief Read 0 means that no overflow is detected. Write 0 has no effect. */
    constexpr std::uint32_t ADF_DFLT0ISR_DOVRF_B_0x0 = 0;
        /** @brief Read 1 means that an overflow is detected; Write 1 clears this flag. */
    constexpr std::uint32_t ADF_DFLT0ISR_DOVRF_B_0x1 = 1;

    /** @brief RXFIFO not empty flag This bit is set and cleared by hardware according to the RXFIFO level. */
    using ADF_DFLT0ISR_RXNEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RXFIFO empty (value: 0)
     *          - B_0x1: RXFIFO not empty (value: 1)
     */
        /** @brief RXFIFO empty */
    constexpr std::uint32_t ADF_DFLT0ISR_RXNEF_B_0x0 = 0;
        /** @brief RXFIFO not empty */
    constexpr std::uint32_t ADF_DFLT0ISR_RXNEF_B_0x1 = 1;

    /** @brief Saturation detection flag This bit is set by hardware and cleared by software by writing this bit to 1. */
    using ADF_DFLT0ISR_SATF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Read 0 means that no saturation is detected. Write 0 has no effect. (value: 0)
     *          - B_0x1: Read 1 means that a saturation is detected. Write 1 clears this flag. (value: 1)
     */
        /** @brief Read 0 means that no saturation is detected. Write 0 has no effect. */
    constexpr std::uint32_t ADF_DFLT0ISR_SATF_B_0x0 = 0;
        /** @brief Read 1 means that a saturation is detected. Write 1 clears this flag. */
    constexpr std::uint32_t ADF_DFLT0ISR_SATF_B_0x1 = 1;

    /** @brief Clock absence detection flag This bit is set by hardware and cleared by software by writing this bit to 1. */
    using ADF_DFLT0ISR_CKABF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Read 0 means that no clock absence is detected. Write 0 has no effect. (value: 0)
     *          - B_0x1: Read 1 means that a clock absence is detected. Write 1 clears this flag. (value: 1)
     */
        /** @brief Read 0 means that no clock absence is detected. Write 0 has no effect. */
    constexpr std::uint32_t ADF_DFLT0ISR_CKABF_B_0x0 = 0;
        /** @brief Read 1 means that a clock absence is detected. Write 1 clears this flag. */
    constexpr std::uint32_t ADF_DFLT0ISR_CKABF_B_0x1 = 1;

    /** @brief Reshape filter overrun detection flag This bit is set by hardware and cleared by software by writing this bit to 1. */
    using ADF_DFLT0ISR_RFOVRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Read 0 means that no reshape filter overrun is detected. Write 0 has no effect. (value: 0)
     *          - B_0x1: Read 1 means that reshape filter overrun is detected. Write 1 clears this flag. (value: 1)
     */
        /** @brief Read 0 means that no reshape filter overrun is detected. Write 0 has no effect. */
    constexpr std::uint32_t ADF_DFLT0ISR_RFOVRF_B_0x0 = 0;
        /** @brief Read 1 means that reshape filter overrun is detected. Write 1 clears this flag. */
    constexpr std::uint32_t ADF_DFLT0ISR_RFOVRF_B_0x1 = 1;

    /** @brief Sound activity detection flag This bit is set by hardware and cleared by software by writing this bit to 1. */
    using ADF_DFLT0ISR_SDDETF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Read 0 means that no sound activity is detected. Write 0 has no effect. (value: 0)
     *          - B_0x1: Read 1 means that sound activity is detected. Write 1 clears this flag. (value: 1)
     */
        /** @brief Read 0 means that no sound activity is detected. Write 0 has no effect. */
    constexpr std::uint32_t ADF_DFLT0ISR_SDDETF_B_0x0 = 0;
        /** @brief Read 1 means that sound activity is detected. Write 1 clears this flag. */
    constexpr std::uint32_t ADF_DFLT0ISR_SDDETF_B_0x1 = 1;

    /** @brief Sound level value ready flag This bit is set by hardware and cleared by software by writing this bit to 1. */
    using ADF_DFLT0ISR_SDLVLF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Read 0 means that new sound level value is not ready. Write 0 has no effect. (value: 0)
     *          - B_0x1: Read 1 means that new sound level value is ready. Write 1 clears this flag. (value: 1)
     */
        /** @brief Read 0 means that new sound level value is not ready. Write 0 has no effect. */
    constexpr std::uint32_t ADF_DFLT0ISR_SDLVLF_B_0x0 = 0;
        /** @brief Read 1 means that new sound level value is ready. Write 1 clears this flag. */
    constexpr std::uint32_t ADF_DFLT0ISR_SDLVLF_B_0x1 = 1;

    /** @brief ADF SAD control register */
    using ADF_SADCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xB8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sound activity detector enable This bit is set and cleared by software. It is used to enable/disable the SAD. */
    using ADF_SADCR_SADEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SAD disabled and SAD state reset (value: 0)
     *          - B_0x1: SAD enabled (value: 1)
     */
        /** @brief SAD disabled and SAD state reset */
    constexpr std::uint32_t ADF_SADCR_SADEN_B_0x0 = 0;
        /** @brief SAD enabled */
    constexpr std::uint32_t ADF_SADCR_SADEN_B_0x1 = 1;

    /** @brief Data capture mode This field is set and cleared by software. It is used to define in which conditions, the samples provided by DLFT0 are stored into the memory. 1x: Samples from DFLT0 transfered into memory when SAD and DFLT0 are enabled Note: This field can be write-protected (see Section 46.4.13: Register protection for details). */
    using ADF_SADCR_DATCAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Samples from DFLT0 not transfered into the memory (value: 0)
     *          - B_0x1: Samples from DFLT0 transfered into the memory when SAD is in DETECT state (value: 1)
     */
        /** @brief Samples from DFLT0 not transfered into the memory */
    constexpr std::uint32_t ADF_SADCR_DATCAP_B_0x0 = 0;
        /** @brief Samples from DFLT0 transfered into the memory when SAD is in DETECT state */
    constexpr std::uint32_t ADF_SADCR_DATCAP_B_0x1 = 1;

    /** @brief Sound trigger event configuration This bit is set and cleared by software. It is used to define if the sddet_evt event is generated only when the SAD enters to MONITOR state or when the SAD enters or exits the DETECT state. Note: This bit can be write-protected (see Section 46.4.13: Register protection for details). */
    using ADF_SADCR_DETCFG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: sddet_evt generated when SAD enters the MONITOR state (value: 0)
     *          - B_0x1: sddet_evt generated when SAD enters or exits the DETECT state (value: 1)
     */
        /** @brief sddet_evt generated when SAD enters the MONITOR state */
    constexpr std::uint32_t ADF_SADCR_DETCFG_B_0x0 = 0;
        /** @brief sddet_evt generated when SAD enters or exits the DETECT state */
    constexpr std::uint32_t ADF_SADCR_DETCFG_B_0x1 = 1;

    /** @brief SAD state This field is set and cleared by hardware. It indicates the SAD state and is meaningful only when SADEN = 1. The SAD state can be: - LEARN when the SAD is in learning phase or in SDLVL computation mode - MONITOR when the SAD is in monitoring phase - DETECT when the SAD detects a sound */
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

    /** @brief Hysteresis enable This bit is set and cleared by software. It is used to enable/disable the hysteresis function (see Table 419 for details). This bit must be kept to 0 when SADMOD[1:0] = 1x. Note: This bit can be write-protected (see Section 46.4.13: Register protection for details). */
    using ADF_SADCR_HYSTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Hysteresis function disabled. THR<sub>H</sub> is always used. (value: 0)
     *          - B_0x1: Hysteresis function enabled. THR<sub>H</sub> is used for MONITOR to DETECT transition and THR<sub>L</sub> is used for DETECT to MONITOR transition. (value: 1)
     */
        /** @brief Hysteresis function disabled. THR<sub>H</sub> is always used. */
    constexpr std::uint32_t ADF_SADCR_HYSTEN_B_0x0 = 0;
        /** @brief Hysteresis function enabled. THR<sub>H</sub> is used for MONITOR to DETECT transition and THR<sub>L</sub> is used for DETECT to MONITOR transition. */
    constexpr std::uint32_t ADF_SADCR_HYSTEN_B_0x1 = 1;

    /** @brief Frame size This field is set and cleared by software. it is used to define the size of one frame and also to define how many samples are taken into account to compute the short-term signal level. 11x: 512 PCM samples used to compute the short-term signal level Note: This field can be write-protected (see Section 46.4.13: Register protection for details). */
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

    /** @brief SAD working mode This field is set and cleared by software. It is used to define the way the SAD works. The SAD triggers when the sound level (SDLVL) is bigger than the defined threshold. In this mode, the SAD works like a voice activity detector. The SAD triggers when the sound level (SDLVL) is bigger than the defined threshold. In this mode, the SAD works like a sound detector. 1x: Threshold value given by 4 x ANMIN[12:0] The SAD triggers when the estimated ambient noise (ANLVL), multiplied by the gain selected by SNTHR[3:0] is bigger than the defined threshold. In this mode, the SAD is working like an ambient noise estimator. Hysteresis function cannot be used in this mode. Note: This field can be write-protected (see Section 46.4.13: Register protection for details). */
    using ADF_SADCR_SADMOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Threshold value computed according to the estimated ambient noise (value: 0)
     *          - B_0x1: Threshold value equal to ANMIN[12:0], multiplied by the gain selected by SNTHR[3:0] (value: 1)
     */
        /** @brief Threshold value computed according to the estimated ambient noise */
    constexpr std::uint32_t ADF_SADCR_SADMOD_B_0x0 = 0;
        /** @brief Threshold value equal to ANMIN[12:0], multiplied by the gain selected by SNTHR[3:0] */
    constexpr std::uint32_t ADF_SADCR_SADMOD_B_0x1 = 1;

    /** @brief SAD Active flag This bit is set and cleared by hardware. It is used to check if the SAD is effectively enabled (active) or not. The protected fields and registers of this function can only be updated when the SADACTIVE is set to 0 (see Section 46.4.13: Register protection for details). The delay between a transition on SADEN and a transition on SADACTIVE is two periods of AHB clock and two periods of adf_proc_ck. */
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
    /** @brief Signal to noise threshold This field is set and cleared by software. It is used to define THR<sub>H </sub>(and THR<sub>L</sub> if hysteresis is enabled). See Table 419 for details. others: Reserved Note: This field can be write-protected (see Section 46.4.13: Register protection for details). */
    using ADF_SADCFGR_SNTHR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: THR<sub>H </sub>is 3.5 dB higher than ANLVL (value: 0)
     *          - B_0x1: THR<sub>H </sub>is 6.0 dB higher than ANLVL (value: 1)
     *          - B_0x2: THR<sub>H </sub>is 9.5 dB higher than ANLVL (value: 2)
     *          - B_0x3: THR<sub>H </sub>is 12 dB higher than ANLVL (value: 3)
     *          - B_0x4: THR<sub>H </sub>is 15.6 dB higher than ANLVL (value: 4)
     *          - B_0x5: THR<sub>H </sub>is 18 dB higher than ANLVL (value: 5)
     *          - B_0x6: THR<sub>H </sub>is 21.6 dB higher than ANLVL (value: 6)
     *          - B_0x7: THR<sub>H </sub>is 24.1 dB higher than ANLVL (value: 7)
     *          - B_0x8: THR<sub>H </sub>is 27.6 dB higher than ANLVL (value: 8)
     *          - B_0x9: THR<sub>H </sub>is 30.1dB higher than ANLVL (value: 9)
     */
        /** @brief THR<sub>H </sub>is 3.5 dB higher than ANLVL */
    constexpr std::uint32_t ADF_SADCFGR_SNTHR_B_0x0 = 0;
        /** @brief THR<sub>H </sub>is 6.0 dB higher than ANLVL */
    constexpr std::uint32_t ADF_SADCFGR_SNTHR_B_0x1 = 1;
        /** @brief THR<sub>H </sub>is 9.5 dB higher than ANLVL */
    constexpr std::uint32_t ADF_SADCFGR_SNTHR_B_0x2 = 2;
        /** @brief THR<sub>H </sub>is 12 dB higher than ANLVL */
    constexpr std::uint32_t ADF_SADCFGR_SNTHR_B_0x3 = 3;
        /** @brief THR<sub>H </sub>is 15.6 dB higher than ANLVL */
    constexpr std::uint32_t ADF_SADCFGR_SNTHR_B_0x4 = 4;
        /** @brief THR<sub>H </sub>is 18 dB higher than ANLVL */
    constexpr std::uint32_t ADF_SADCFGR_SNTHR_B_0x5 = 5;
        /** @brief THR<sub>H </sub>is 21.6 dB higher than ANLVL */
    constexpr std::uint32_t ADF_SADCFGR_SNTHR_B_0x6 = 6;
        /** @brief THR<sub>H </sub>is 24.1 dB higher than ANLVL */
    constexpr std::uint32_t ADF_SADCFGR_SNTHR_B_0x7 = 7;
        /** @brief THR<sub>H </sub>is 27.6 dB higher than ANLVL */
    constexpr std::uint32_t ADF_SADCFGR_SNTHR_B_0x8 = 8;
        /** @brief THR<sub>H </sub>is 30.1dB higher than ANLVL */
    constexpr std::uint32_t ADF_SADCFGR_SNTHR_B_0x9 = 9;

    /** @brief Ambient noise slope control This field is set and cleared by software. It is used to define the positive and negative slope of the noise estimator, in charge of updating the ANLVL (see Ambient noise estimation (ANLVL) for information about programming this field). Note: This field can be write-protected (see Section 46.4.13: Register protection for details). */
    using ADF_SADCFGR_ANSLP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of learning frames This field is set and cleared by software. It is used to define the number of learning frames to perform the first estimate of the noise level. 1xx: 32 frames used to compute the initial noise level Note: This field can be write-protected (see Section 46.4.13: Register protection for details). */
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

    /** @brief Hangover time window This field is set and cleared by software. Once the SAD state is DETECT, this parameter is used to define the amount of time the sound is allowed to remain below the threshold, before switching the SAD to MONITOR state (see FRSIZE field for the description of a frame). Note: This field can be write-protected (see Section 46.4.13: Register protection for details). */
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

    /** @brief Minimum noise level This field is set and cleared by software. It is used to define the minimum noise level and then the sensitivity. It represents a positive number. Note: This field can be write-protected (see Section 46.4.13: Register protection for details). */
    using ADF_SADCFGR_ANMIN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 13, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADF SAD sound level register */
    using ADF_SADSDLVR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Short term sound level This field is set by hardware. It contains the latest sound level computed by the SAD. To refresh this value, SDLVLF must be cleared. */
    using ADF_SADSDLVR_SDLVL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 15, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADF SAD ambient noise level register */
    using ADF_SADANLVR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Ambient noise level estimation This field is set by hardware. It contains the latest ambient noise level computed by the SAD. To refresh this field, the SDLVLF flag must be cleared. */
    using ADF_SADANLVR_ANLVL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 15, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADF digital filter data register 0 */
    using ADF_DFLT0DR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xF0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data processed by DFT0 */
    using ADF_DFLT0DR_DR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
