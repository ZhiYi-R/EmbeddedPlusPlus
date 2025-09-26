/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32N655_MDIOS_S_HPP
#define EMBEDDED_PP_STM32N655_MDIOS_S_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Management data input/output */
namespace STM32N655::MDIOS_S {

    /** @brief MDIOS configuration register */
    using MDIOS_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief peripheral enable */
    using MDIOS_CR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MDIOS is disabled. (value: 0)
     *          - B_0x1: MDIOS is enabled and monitoring the MDIO bus (MDC/MDIO). (value: 1)
     */
        /** @brief MDIOS is disabled. */
    constexpr std::uint32_t MDIOS_CR_EN_B_0x0 = 0;
        /** @brief MDIOS is enabled and monitoring the MDIO bus (MDC/MDIO). */
    constexpr std::uint32_t MDIOS_CR_EN_B_0x1 = 1;

    /** @brief register write interrupt enable */
    using MDIOS_CR_WRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt is disabled. (value: 0)
     *          - B_0x1: Interrupt is enabled. (value: 1)
     */
        /** @brief Interrupt is disabled. */
    constexpr std::uint32_t MDIOS_CR_WRIE_B_0x0 = 0;
        /** @brief Interrupt is enabled. */
    constexpr std::uint32_t MDIOS_CR_WRIE_B_0x1 = 1;

    /** @brief register read interrupt enable */
    using MDIOS_CR_RDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt is disabled. (value: 0)
     *          - B_0x1: Interrupt is enabled. (value: 1)
     */
        /** @brief Interrupt is disabled. */
    constexpr std::uint32_t MDIOS_CR_RDIE_B_0x0 = 0;
        /** @brief Interrupt is enabled. */
    constexpr std::uint32_t MDIOS_CR_RDIE_B_0x1 = 1;

    /** @brief error interrupt enable */
    using MDIOS_CR_EIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt is disabled. (value: 0)
     *          - B_0x1: Interrupt is enabled. (value: 1)
     */
        /** @brief Interrupt is disabled. */
    constexpr std::uint32_t MDIOS_CR_EIE_B_0x0 = 0;
        /** @brief Interrupt is enabled. */
    constexpr std::uint32_t MDIOS_CR_EIE_B_0x1 = 1;

    /** @brief disable preamble check */
    using MDIOS_CR_DPC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MDIO master must give preamble before each frame. (value: 0)
     *          - B_0x1: MDIO master can send each frame without a preceding preamble, and the MDIOS does not signal a preamble error. (value: 1)
     */
        /** @brief MDIO master must give preamble before each frame. */
    constexpr std::uint32_t MDIOS_CR_DPC_B_0x0 = 0;
        /** @brief MDIO master can send each frame without a preceding preamble, and the MDIOS does not signal a preamble error. */
    constexpr std::uint32_t MDIOS_CR_DPC_B_0x1 = 1;

    /** @brief slave address */
    using MDIOS_CR_PORT_ADDRESS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDIOS write flag register */
    using MDIOS_WRFR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief write flags for MDIOS registers 0 to 31. */
    using MDIOS_WRFR_WRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MDIOS register x is not written by the MDIO master. (value: 0)
     *          - B_0x1: MDIOS register x is written by the MDIO master and the data is available in DIN[15:0] in the MDIOS_DINRx register. (value: 1)
     */
        /** @brief MDIOS register x is not written by the MDIO master. */
    constexpr std::uint32_t MDIOS_WRFR_WRF_B_0x0 = 0;
        /** @brief MDIOS register x is written by the MDIO master and the data is available in DIN[15:0] in the MDIOS_DINRx register. */
    constexpr std::uint32_t MDIOS_WRFR_WRF_B_0x1 = 1;

    /** @brief MDIOS clear write flag register */
    using MDIOS_CWRFR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief clear the write flag */
    using MDIOS_CWRFR_CWRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDIOS read flag register */
    using MDIOS_RDFR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief read flags for MDIOS registers 0 to 31. */
    using MDIOS_RDFR_RDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MDIOS register x is not read by the MDIO master. (value: 0)
     *          - B_0x1: MDIOS register x is read by the MDIO master. (value: 1)
     */
        /** @brief MDIOS register x is not read by the MDIO master. */
    constexpr std::uint32_t MDIOS_RDFR_RDF_B_0x0 = 0;
        /** @brief MDIOS register x is read by the MDIO master. */
    constexpr std::uint32_t MDIOS_RDFR_RDF_B_0x1 = 1;

    /** @brief MDIOS clear read flag register */
    using MDIOS_CRDFR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief clear the read flag */
    using MDIOS_CRDFR_CRDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDIOS status register */
    using MDIOS_SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief preamble error flag */
    using MDIOS_SR_PERF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No preamble error has occurred. (value: 0)
     *          - B_0x1: A preamble error has occurred. (value: 1)
     */
        /** @brief No preamble error has occurred. */
    constexpr std::uint32_t MDIOS_SR_PERF_B_0x0 = 0;
        /** @brief A preamble error has occurred. */
    constexpr std::uint32_t MDIOS_SR_PERF_B_0x1 = 1;

    /** @brief start error flag */
    using MDIOS_SR_SERF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No start error has occurred. (value: 0)
     *          - B_0x1: A start error has occurred. (value: 1)
     */
        /** @brief No start error has occurred. */
    constexpr std::uint32_t MDIOS_SR_SERF_B_0x0 = 0;
        /** @brief A start error has occurred. */
    constexpr std::uint32_t MDIOS_SR_SERF_B_0x1 = 1;

    /** @brief turnaround error flag */
    using MDIOS_SR_TERF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No turnaround error has occurred. (value: 0)
     *          - B_0x1: A turnaround error has occurred. (value: 1)
     */
        /** @brief No turnaround error has occurred. */
    constexpr std::uint32_t MDIOS_SR_TERF_B_0x0 = 0;
        /** @brief A turnaround error has occurred. */
    constexpr std::uint32_t MDIOS_SR_TERF_B_0x1 = 1;

    /** @brief MDIOS clear flag register */
    using MDIOS_CLRFR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief clear the preamble error flag */
    using MDIOS_CLRFR_CPERF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief clear the start error flag */
    using MDIOS_CLRFR_CSERF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief clear the turnaround error flag */
    using MDIOS_CLRFR_CTERF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDIOS input data register 0 */
    using MDIOS_DINR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x100, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief input data received from MDIO master during write frames */
    using MDIOS_DINR0_DIN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDIOS input data register 1 */
    using MDIOS_DINR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x104, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief input data received from MDIO master during write frames */
    using MDIOS_DINR1_DIN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDIOS input data register 2 */
    using MDIOS_DINR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x108, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief input data received from MDIO master during write frames */
    using MDIOS_DINR2_DIN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDIOS input data register 3 */
    using MDIOS_DINR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief input data received from MDIO master during write frames */
    using MDIOS_DINR3_DIN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDIOS input data register 4 */
    using MDIOS_DINR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x110, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief input data received from MDIO master during write frames */
    using MDIOS_DINR4_DIN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDIOS input data register 5 */
    using MDIOS_DINR5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x114, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief input data received from MDIO master during write frames */
    using MDIOS_DINR5_DIN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDIOS input data register 6 */
    using MDIOS_DINR6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x118, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief input data received from MDIO master during write frames */
    using MDIOS_DINR6_DIN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDIOS input data register 7 */
    using MDIOS_DINR7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x11C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief input data received from MDIO master during write frames */
    using MDIOS_DINR7_DIN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDIOS input data register 8 */
    using MDIOS_DINR8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x120, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief input data received from MDIO master during write frames */
    using MDIOS_DINR8_DIN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDIOS input data register 9 */
    using MDIOS_DINR9 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x124, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief input data received from MDIO master during write frames */
    using MDIOS_DINR9_DIN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDIOS input data register 10 */
    using MDIOS_DINR10 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x128, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief input data received from MDIO master during write frames */
    using MDIOS_DINR10_DIN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDIOS input data register 11 */
    using MDIOS_DINR11 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x12C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief input data received from MDIO master during write frames */
    using MDIOS_DINR11_DIN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDIOS input data register 12 */
    using MDIOS_DINR12 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x130, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief input data received from MDIO master during write frames */
    using MDIOS_DINR12_DIN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDIOS input data register 13 */
    using MDIOS_DINR13 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x134, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief input data received from MDIO master during write frames */
    using MDIOS_DINR13_DIN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDIOS input data register 14 */
    using MDIOS_DINR14 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x138, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief input data received from MDIO master during write frames */
    using MDIOS_DINR14_DIN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDIOS input data register 15 */
    using MDIOS_DINR15 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x13C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief input data received from MDIO master during write frames */
    using MDIOS_DINR15_DIN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDIOS input data register 16 */
    using MDIOS_DINR16 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x140, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief input data received from MDIO master during write frames */
    using MDIOS_DINR16_DIN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDIOS input data register 17 */
    using MDIOS_DINR17 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x144, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief input data received from MDIO master during write frames */
    using MDIOS_DINR17_DIN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDIOS input data register 18 */
    using MDIOS_DINR18 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x148, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief input data received from MDIO master during write frames */
    using MDIOS_DINR18_DIN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDIOS input data register 19 */
    using MDIOS_DINR19 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief input data received from MDIO master during write frames */
    using MDIOS_DINR19_DIN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDIOS input data register 20 */
    using MDIOS_DINR20 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x150, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief input data received from MDIO master during write frames */
    using MDIOS_DINR20_DIN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDIOS input data register 21 */
    using MDIOS_DINR21 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x154, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief input data received from MDIO master during write frames */
    using MDIOS_DINR21_DIN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDIOS input data register 22 */
    using MDIOS_DINR22 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x158, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief input data received from MDIO master during write frames */
    using MDIOS_DINR22_DIN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDIOS input data register 23 */
    using MDIOS_DINR23 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x15C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief input data received from MDIO master during write frames */
    using MDIOS_DINR23_DIN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDIOS input data register 24 */
    using MDIOS_DINR24 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x160, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief input data received from MDIO master during write frames */
    using MDIOS_DINR24_DIN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDIOS input data register 25 */
    using MDIOS_DINR25 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x164, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief input data received from MDIO master during write frames */
    using MDIOS_DINR25_DIN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDIOS input data register 26 */
    using MDIOS_DINR26 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x168, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief input data received from MDIO master during write frames */
    using MDIOS_DINR26_DIN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDIOS input data register 27 */
    using MDIOS_DINR27 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x16C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief input data received from MDIO master during write frames */
    using MDIOS_DINR27_DIN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDIOS input data register 28 */
    using MDIOS_DINR28 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x170, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief input data received from MDIO master during write frames */
    using MDIOS_DINR28_DIN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDIOS input data register 29 */
    using MDIOS_DINR29 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x174, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief input data received from MDIO master during write frames */
    using MDIOS_DINR29_DIN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDIOS input data register 30 */
    using MDIOS_DINR30 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x178, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief input data received from MDIO master during write frames */
    using MDIOS_DINR30_DIN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDIOS input data register 31 */
    using MDIOS_DINR31 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x17C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief input data received from MDIO master during write frames */
    using MDIOS_DINR31_DIN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDIOS output data register 0 */
    using MDIOS_DOUTR0 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x180, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief output data sent to MDIO Master during read frames */
    using MDIOS_DOUTR0_DOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDIOS output data register 1 */
    using MDIOS_DOUTR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x184, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief output data sent to MDIO Master during read frames */
    using MDIOS_DOUTR1_DOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDIOS output data register 2 */
    using MDIOS_DOUTR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x188, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief output data sent to MDIO Master during read frames */
    using MDIOS_DOUTR2_DOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDIOS output data register 3 */
    using MDIOS_DOUTR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief output data sent to MDIO Master during read frames */
    using MDIOS_DOUTR3_DOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDIOS output data register 4 */
    using MDIOS_DOUTR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x190, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief output data sent to MDIO Master during read frames */
    using MDIOS_DOUTR4_DOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDIOS output data register 5 */
    using MDIOS_DOUTR5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x194, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief output data sent to MDIO Master during read frames */
    using MDIOS_DOUTR5_DOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDIOS output data register 6 */
    using MDIOS_DOUTR6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x198, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief output data sent to MDIO Master during read frames */
    using MDIOS_DOUTR6_DOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDIOS output data register 7 */
    using MDIOS_DOUTR7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x19C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief output data sent to MDIO Master during read frames */
    using MDIOS_DOUTR7_DOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDIOS output data register 8 */
    using MDIOS_DOUTR8 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief output data sent to MDIO Master during read frames */
    using MDIOS_DOUTR8_DOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDIOS output data register 9 */
    using MDIOS_DOUTR9 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1A4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief output data sent to MDIO Master during read frames */
    using MDIOS_DOUTR9_DOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDIOS output data register 10 */
    using MDIOS_DOUTR10 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1A8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief output data sent to MDIO Master during read frames */
    using MDIOS_DOUTR10_DOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDIOS output data register 11 */
    using MDIOS_DOUTR11 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1AC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief output data sent to MDIO Master during read frames */
    using MDIOS_DOUTR11_DOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDIOS output data register 12 */
    using MDIOS_DOUTR12 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1B0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief output data sent to MDIO Master during read frames */
    using MDIOS_DOUTR12_DOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDIOS output data register 13 */
    using MDIOS_DOUTR13 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1B4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief output data sent to MDIO Master during read frames */
    using MDIOS_DOUTR13_DOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDIOS output data register 14 */
    using MDIOS_DOUTR14 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1B8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief output data sent to MDIO Master during read frames */
    using MDIOS_DOUTR14_DOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDIOS output data register 15 */
    using MDIOS_DOUTR15 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1BC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief output data sent to MDIO Master during read frames */
    using MDIOS_DOUTR15_DOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDIOS output data register 16 */
    using MDIOS_DOUTR16 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief output data sent to MDIO Master during read frames */
    using MDIOS_DOUTR16_DOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDIOS output data register 17 */
    using MDIOS_DOUTR17 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief output data sent to MDIO Master during read frames */
    using MDIOS_DOUTR17_DOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDIOS output data register 18 */
    using MDIOS_DOUTR18 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief output data sent to MDIO Master during read frames */
    using MDIOS_DOUTR18_DOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDIOS output data register 19 */
    using MDIOS_DOUTR19 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1CC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief output data sent to MDIO Master during read frames */
    using MDIOS_DOUTR19_DOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDIOS output data register 20 */
    using MDIOS_DOUTR20 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1D0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief output data sent to MDIO Master during read frames */
    using MDIOS_DOUTR20_DOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDIOS output data register 21 */
    using MDIOS_DOUTR21 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1D4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief output data sent to MDIO Master during read frames */
    using MDIOS_DOUTR21_DOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDIOS output data register 22 */
    using MDIOS_DOUTR22 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1D8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief output data sent to MDIO Master during read frames */
    using MDIOS_DOUTR22_DOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDIOS output data register 23 */
    using MDIOS_DOUTR23 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1DC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief output data sent to MDIO Master during read frames */
    using MDIOS_DOUTR23_DOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDIOS output data register 24 */
    using MDIOS_DOUTR24 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1E0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief output data sent to MDIO Master during read frames */
    using MDIOS_DOUTR24_DOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDIOS output data register 25 */
    using MDIOS_DOUTR25 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1E4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief output data sent to MDIO Master during read frames */
    using MDIOS_DOUTR25_DOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDIOS output data register 26 */
    using MDIOS_DOUTR26 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1E8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief output data sent to MDIO Master during read frames */
    using MDIOS_DOUTR26_DOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDIOS output data register 27 */
    using MDIOS_DOUTR27 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1EC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief output data sent to MDIO Master during read frames */
    using MDIOS_DOUTR27_DOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDIOS output data register 28 */
    using MDIOS_DOUTR28 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1F0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief output data sent to MDIO Master during read frames */
    using MDIOS_DOUTR28_DOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDIOS output data register 29 */
    using MDIOS_DOUTR29 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1F4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief output data sent to MDIO Master during read frames */
    using MDIOS_DOUTR29_DOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDIOS output data register 30 */
    using MDIOS_DOUTR30 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1F8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief output data sent to MDIO Master during read frames */
    using MDIOS_DOUTR30_DOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MDIOS output data register 31 */
    using MDIOS_DOUTR31 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1FC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief output data sent to MDIO Master during read frames */
    using MDIOS_DOUTR31_DOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
