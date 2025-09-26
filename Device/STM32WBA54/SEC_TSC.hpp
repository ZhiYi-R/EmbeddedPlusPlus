/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32WBA54_SEC_TSC_HPP
#define EMBEDDED_PP_STM32WBA54_SEC_TSC_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Touch sensing controller */
namespace STM32WBA54::SEC_TSC {

    /** @brief TSC control register */
    using TSC_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Touch sensing controller enable This bit is set and cleared by software to enable/disable the touch sensing controller. Note: When the touch sensing controller is disabled, TSC registers settings have no effect. */
    using TSC_CR_TSCE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Touch sensing controller disabled (value: 0)
     *          - B_0x1: Touch sensing controller enabled (value: 1)
     */
        /** @brief Touch sensing controller disabled */
    constexpr std::uint32_t TSC_CR_TSCE_B_0x0 = 0;
        /** @brief Touch sensing controller enabled */
    constexpr std::uint32_t TSC_CR_TSCE_B_0x1 = 1;

    /** @brief Start a new acquisition This bit is set by software to start a new acquisition. It is cleared by hardware as soon as the acquisition is complete or by software to cancel the ongoing acquisition. */
    using TSC_CR_START = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Acquisition not started (value: 0)
     *          - B_0x1: Start a new acquisition (value: 1)
     */
        /** @brief Acquisition not started */
    constexpr std::uint32_t TSC_CR_START_B_0x0 = 0;
        /** @brief Start a new acquisition */
    constexpr std::uint32_t TSC_CR_START_B_0x1 = 1;

    /** @brief Acquisition mode This bit is set and cleared by software to select the acquisition mode. Note: This bit must not be modified when an acquisition is ongoing. */
    using TSC_CR_AM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal acquisition mode (acquisition starts as soon as START bit is set) (value: 0)
     *          - B_0x1: Synchronized acquisition mode (acquisition starts if START bit is set and when the selected signal is detected on the SYNC input pin) (value: 1)
     */
        /** @brief Normal acquisition mode (acquisition starts as soon as START bit is set) */
    constexpr std::uint32_t TSC_CR_AM_B_0x0 = 0;
        /** @brief Synchronized acquisition mode (acquisition starts if START bit is set and when the selected signal is detected on the SYNC input pin) */
    constexpr std::uint32_t TSC_CR_AM_B_0x1 = 1;

    /** @brief Synchronization pin polarity This bit is set and cleared by software to select the polarity of the synchronization input pin. */
    using TSC_CR_SYNCPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling edge only (value: 0)
     *          - B_0x1: Rising edge and high level (value: 1)
     */
        /** @brief Falling edge only */
    constexpr std::uint32_t TSC_CR_SYNCPOL_B_0x0 = 0;
        /** @brief Rising edge and high level */
    constexpr std::uint32_t TSC_CR_SYNCPOL_B_0x1 = 1;

    /** @brief I/O Default mode This bit is set and cleared by software. It defines the configuration of all the TSC I/Os when there is no ongoing acquisition. When there is an ongoing acquisition, it defines the configuration of all unused I/Os (not defined as sampling capacitor I/O or as channel I/O). Note: This bit must not be modified when an acquisition is ongoing. */
    using TSC_CR_IODEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I/Os are forced to output push-pull low (value: 0)
     *          - B_0x1: I/Os are in input floating (value: 1)
     */
        /** @brief I/Os are forced to output push-pull low */
    constexpr std::uint32_t TSC_CR_IODEF_B_0x0 = 0;
        /** @brief I/Os are in input floating */
    constexpr std::uint32_t TSC_CR_IODEF_B_0x1 = 1;

    /** @brief Max count value These bits are set and cleared by software. They define the maximum number of charge transfer pulses that can be generated before a max count error is generated. Note: These bits must not be modified when an acquisition is ongoing. */
    using TSC_CR_MCV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 255 (value: 0)
     *          - B_0x1: 511 (value: 1)
     *          - B_0x2: 1023 (value: 2)
     *          - B_0x3: 2047 (value: 3)
     *          - B_0x4: 4095 (value: 4)
     *          - B_0x5: 8191 (value: 5)
     *          - B_0x6: 16383 (value: 6)
     */
        /** @brief 255 */
    constexpr std::uint32_t TSC_CR_MCV_B_0x0 = 0;
        /** @brief 511 */
    constexpr std::uint32_t TSC_CR_MCV_B_0x1 = 1;
        /** @brief 1023 */
    constexpr std::uint32_t TSC_CR_MCV_B_0x2 = 2;
        /** @brief 2047 */
    constexpr std::uint32_t TSC_CR_MCV_B_0x3 = 3;
        /** @brief 4095 */
    constexpr std::uint32_t TSC_CR_MCV_B_0x4 = 4;
        /** @brief 8191 */
    constexpr std::uint32_t TSC_CR_MCV_B_0x5 = 5;
        /** @brief 16383 */
    constexpr std::uint32_t TSC_CR_MCV_B_0x6 = 6;

    /** @brief Pulse generator prescaler These bits are set and cleared by software.They select the AHB clock divider used to generate the pulse generator clock (PGCLK). Note: These bits must not be modified when an acquisition is ongoing. Note: Some configurations are forbidden. Refer to the Section21.3.4: Charge transfer acquisition sequence for details. */
    using TSC_CR_PGPSC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fsubHCLK/sub (value: 0)
     *          - B_0x1: fsubHCLK/sub /2 (value: 1)
     *          - B_0x2: fsubHCLK/sub /4 (value: 2)
     *          - B_0x3: fsubHCLK/sub /8 (value: 3)
     *          - B_0x4: fsubHCLK/sub /16 (value: 4)
     *          - B_0x5: fsubHCLK/sub /32 (value: 5)
     *          - B_0x6: fsubHCLK/sub /64 (value: 6)
     *          - B_0x7: fsubHCLK/sub /128 (value: 7)
     */
        /** @brief fsubHCLK/sub */
    constexpr std::uint32_t TSC_CR_PGPSC_B_0x0 = 0;
        /** @brief fsubHCLK/sub /2 */
    constexpr std::uint32_t TSC_CR_PGPSC_B_0x1 = 1;
        /** @brief fsubHCLK/sub /4 */
    constexpr std::uint32_t TSC_CR_PGPSC_B_0x2 = 2;
        /** @brief fsubHCLK/sub /8 */
    constexpr std::uint32_t TSC_CR_PGPSC_B_0x3 = 3;
        /** @brief fsubHCLK/sub /16 */
    constexpr std::uint32_t TSC_CR_PGPSC_B_0x4 = 4;
        /** @brief fsubHCLK/sub /32 */
    constexpr std::uint32_t TSC_CR_PGPSC_B_0x5 = 5;
        /** @brief fsubHCLK/sub /64 */
    constexpr std::uint32_t TSC_CR_PGPSC_B_0x6 = 6;
        /** @brief fsubHCLK/sub /128 */
    constexpr std::uint32_t TSC_CR_PGPSC_B_0x7 = 7;

    /** @brief Spread spectrum prescaler This bit is set and cleared by software. It selects the AHB clock divider used to generate the spread spectrum clock (SSCLK). Note: This bit must not be modified when an acquisition is ongoing. */
    using TSC_CR_SSPSC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fsubHCLK/sub (value: 0)
     *          - B_0x1: fsubHCLK/sub /2 (value: 1)
     */
        /** @brief fsubHCLK/sub */
    constexpr std::uint32_t TSC_CR_SSPSC_B_0x0 = 0;
        /** @brief fsubHCLK/sub /2 */
    constexpr std::uint32_t TSC_CR_SSPSC_B_0x1 = 1;

    /** @brief Spread spectrum enable This bit is set and cleared by software to enable/disable the spread spectrum feature. Note: This bit must not be modified when an acquisition is ongoing. */
    using TSC_CR_SSE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Spread spectrum disabled (value: 0)
     *          - B_0x1: Spread spectrum enabled (value: 1)
     */
        /** @brief Spread spectrum disabled */
    constexpr std::uint32_t TSC_CR_SSE_B_0x0 = 0;
        /** @brief Spread spectrum enabled */
    constexpr std::uint32_t TSC_CR_SSE_B_0x1 = 1;

    /** @brief Spread spectrum deviation These bits are set and cleared by software. They define the spread spectrum deviation which consists in adding a variable number of periods of the SSCLK clock to the charge transfer pulse high state. ... Note: These bits must not be modified when an acquisition is ongoing. */
    using TSC_CR_SSD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1x tsubSSCLK/sub (value: 0)
     *          - B_0x1: 2x tsubSSCLK/sub (value: 1)
     *          - B_0x7F: 128x tsubSSCLK/sub (value: 127)
     */
        /** @brief 1x tsubSSCLK/sub */
    constexpr std::uint32_t TSC_CR_SSD_B_0x0 = 0;
        /** @brief 2x tsubSSCLK/sub */
    constexpr std::uint32_t TSC_CR_SSD_B_0x1 = 1;
        /** @brief 128x tsubSSCLK/sub */
    constexpr std::uint32_t TSC_CR_SSD_B_0x7F = 127;

    /** @brief Charge transfer pulse low These bits are set and cleared by software. They define the duration of the low state of the charge transfer pulse (transfer of charge from CsubX/sub to CsubS/sub). ... Note: These bits must not be modified when an acquisition is ongoing. Note: Some configurations are forbidden. Refer to the Section21.3.4: Charge transfer acquisition sequence for details. */
    using TSC_CR_CTPL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1x tsubPGCLK/sub (value: 0)
     *          - B_0x1: 2x tsubPGCLK/sub (value: 1)
     *          - B_0xF: 16x tsubPGCLK/sub (value: 15)
     */
        /** @brief 1x tsubPGCLK/sub */
    constexpr std::uint32_t TSC_CR_CTPL_B_0x0 = 0;
        /** @brief 2x tsubPGCLK/sub */
    constexpr std::uint32_t TSC_CR_CTPL_B_0x1 = 1;
        /** @brief 16x tsubPGCLK/sub */
    constexpr std::uint32_t TSC_CR_CTPL_B_0xF = 15;

    /** @brief Charge transfer pulse high These bits are set and cleared by software. They define the duration of the high state of the charge transfer pulse (charge of CsubX/sub). ... Note: These bits must not be modified when an acquisition is ongoing. */
    using TSC_CR_CTPH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1x tsubPGCLK/sub (value: 0)
     *          - B_0x1: 2x tsubPGCLK/sub (value: 1)
     *          - B_0xF: 16x tsubPGCLK/sub (value: 15)
     */
        /** @brief 1x tsubPGCLK/sub */
    constexpr std::uint32_t TSC_CR_CTPH_B_0x0 = 0;
        /** @brief 2x tsubPGCLK/sub */
    constexpr std::uint32_t TSC_CR_CTPH_B_0x1 = 1;
        /** @brief 16x tsubPGCLK/sub */
    constexpr std::uint32_t TSC_CR_CTPH_B_0xF = 15;

    /** @brief TSC interrupt enable register */
    using TSC_IER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of acquisition interrupt enable This bit is set and cleared by software to enable/disable the end of acquisition interrupt. */
    using TSC_IER_EOAIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: End of acquisition interrupt disabled (value: 0)
     *          - B_0x1: End of acquisition interrupt enabled (value: 1)
     */
        /** @brief End of acquisition interrupt disabled */
    constexpr std::uint32_t TSC_IER_EOAIE_B_0x0 = 0;
        /** @brief End of acquisition interrupt enabled */
    constexpr std::uint32_t TSC_IER_EOAIE_B_0x1 = 1;

    /** @brief Max count error interrupt enable This bit is set and cleared by software to enable/disable the max count error interrupt. */
    using TSC_IER_MCEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Max count error interrupt disabled (value: 0)
     *          - B_0x1: Max count error interrupt enabled (value: 1)
     */
        /** @brief Max count error interrupt disabled */
    constexpr std::uint32_t TSC_IER_MCEIE_B_0x0 = 0;
        /** @brief Max count error interrupt enabled */
    constexpr std::uint32_t TSC_IER_MCEIE_B_0x1 = 1;

    /** @brief TSC interrupt clear register */
    using TSC_ICR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of acquisition interrupt clear This bit is set by software to clear the end of acquisition flag and it is cleared by hardware when the flag is reset. Writing a '0' has no effect. */
    using TSC_ICR_EOAIC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Clears the corresponding EOAF of the TSC_ISR register (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t TSC_ICR_EOAIC_B_0x0 = 0;
        /** @brief Clears the corresponding EOAF of the TSC_ISR register */
    constexpr std::uint32_t TSC_ICR_EOAIC_B_0x1 = 1;

    /** @brief Max count error interrupt clear This bit is set by software to clear the max count error flag and it is cleared by hardware when the flag is reset. Writing a '0' has no effect. */
    using TSC_ICR_MCEIC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Clears the corresponding MCEF of the TSC_ISR register (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t TSC_ICR_MCEIC_B_0x0 = 0;
        /** @brief Clears the corresponding MCEF of the TSC_ISR register */
    constexpr std::uint32_t TSC_ICR_MCEIC_B_0x1 = 1;

    /** @brief TSC interrupt status register */
    using TSC_ISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of acquisition flag This bit is set by hardware when the acquisition of all enabled group is complete (all GxS bits of all enabled analog I/O groups are set or when a max count error is detected). It is cleared by software writing 1 to the bit EOAIC of the TSC_ICR register. */
    using TSC_ISR_EOAF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Acquisition is ongoing or not started (value: 0)
     *          - B_0x1: Acquisition is complete (value: 1)
     */
        /** @brief Acquisition is ongoing or not started */
    constexpr std::uint32_t TSC_ISR_EOAF_B_0x0 = 0;
        /** @brief Acquisition is complete */
    constexpr std::uint32_t TSC_ISR_EOAF_B_0x1 = 1;

    /** @brief Max count error flag This bit is set by hardware as soon as an analog I/O group counter reaches the max count value specified. It is cleared by software writing 1 to the bit MCEIC of the TSC_ICR register. */
    using TSC_ISR_MCEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No max count error (MCE) detected (value: 0)
     *          - B_0x1: Max count error (MCE) detected (value: 1)
     */
        /** @brief No max count error (MCE) detected */
    constexpr std::uint32_t TSC_ISR_MCEF_B_0x0 = 0;
        /** @brief Max count error (MCE) detected */
    constexpr std::uint32_t TSC_ISR_MCEF_B_0x1 = 1;

    /** @brief TSC I/O hysteresis control register */
    using TSC_IOHCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Gx_IOy Schmitt trigger hysteresis mode, x = 8 to 1, y = 4 to 1. These bits are set and cleared by software to enable/disable the Gx_IOy Schmitt trigger hysteresis. Note: These bits control the I/O Schmitt trigger hysteresis whatever the I/O control mode is (even if controlled by standard GPIO registers). */
    using TSC_IOHCR_G1_IO1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy Schmitt trigger hysteresis disabled (value: 0)
     *          - B_0x1: Gx_IOy Schmitt trigger hysteresis enabled (value: 1)
     */
        /** @brief Gx_IOy Schmitt trigger hysteresis disabled */
    constexpr std::uint32_t TSC_IOHCR_G1_IO1_B_0x0 = 0;
        /** @brief Gx_IOy Schmitt trigger hysteresis enabled */
    constexpr std::uint32_t TSC_IOHCR_G1_IO1_B_0x1 = 1;

    /** @brief Gx_IOy Schmitt trigger hysteresis mode, x = 8 to 1, y = 4 to 1. These bits are set and cleared by software to enable/disable the Gx_IOy Schmitt trigger hysteresis. Note: These bits control the I/O Schmitt trigger hysteresis whatever the I/O control mode is (even if controlled by standard GPIO registers). */
    using TSC_IOHCR_G1_IO2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy Schmitt trigger hysteresis disabled (value: 0)
     *          - B_0x1: Gx_IOy Schmitt trigger hysteresis enabled (value: 1)
     */
        /** @brief Gx_IOy Schmitt trigger hysteresis disabled */
    constexpr std::uint32_t TSC_IOHCR_G1_IO2_B_0x0 = 0;
        /** @brief Gx_IOy Schmitt trigger hysteresis enabled */
    constexpr std::uint32_t TSC_IOHCR_G1_IO2_B_0x1 = 1;

    /** @brief Gx_IOy Schmitt trigger hysteresis mode, x = 8 to 1, y = 4 to 1. These bits are set and cleared by software to enable/disable the Gx_IOy Schmitt trigger hysteresis. Note: These bits control the I/O Schmitt trigger hysteresis whatever the I/O control mode is (even if controlled by standard GPIO registers). */
    using TSC_IOHCR_G1_IO3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy Schmitt trigger hysteresis disabled (value: 0)
     *          - B_0x1: Gx_IOy Schmitt trigger hysteresis enabled (value: 1)
     */
        /** @brief Gx_IOy Schmitt trigger hysteresis disabled */
    constexpr std::uint32_t TSC_IOHCR_G1_IO3_B_0x0 = 0;
        /** @brief Gx_IOy Schmitt trigger hysteresis enabled */
    constexpr std::uint32_t TSC_IOHCR_G1_IO3_B_0x1 = 1;

    /** @brief Gx_IOy Schmitt trigger hysteresis mode, x = 8 to 1, y = 4 to 1. These bits are set and cleared by software to enable/disable the Gx_IOy Schmitt trigger hysteresis. Note: These bits control the I/O Schmitt trigger hysteresis whatever the I/O control mode is (even if controlled by standard GPIO registers). */
    using TSC_IOHCR_G1_IO4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy Schmitt trigger hysteresis disabled (value: 0)
     *          - B_0x1: Gx_IOy Schmitt trigger hysteresis enabled (value: 1)
     */
        /** @brief Gx_IOy Schmitt trigger hysteresis disabled */
    constexpr std::uint32_t TSC_IOHCR_G1_IO4_B_0x0 = 0;
        /** @brief Gx_IOy Schmitt trigger hysteresis enabled */
    constexpr std::uint32_t TSC_IOHCR_G1_IO4_B_0x1 = 1;

    /** @brief Gx_IOy Schmitt trigger hysteresis mode, x = 8 to 1, y = 4 to 1. These bits are set and cleared by software to enable/disable the Gx_IOy Schmitt trigger hysteresis. Note: These bits control the I/O Schmitt trigger hysteresis whatever the I/O control mode is (even if controlled by standard GPIO registers). */
    using TSC_IOHCR_G2_IO1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy Schmitt trigger hysteresis disabled (value: 0)
     *          - B_0x1: Gx_IOy Schmitt trigger hysteresis enabled (value: 1)
     */
        /** @brief Gx_IOy Schmitt trigger hysteresis disabled */
    constexpr std::uint32_t TSC_IOHCR_G2_IO1_B_0x0 = 0;
        /** @brief Gx_IOy Schmitt trigger hysteresis enabled */
    constexpr std::uint32_t TSC_IOHCR_G2_IO1_B_0x1 = 1;

    /** @brief Gx_IOy Schmitt trigger hysteresis mode, x = 8 to 1, y = 4 to 1. These bits are set and cleared by software to enable/disable the Gx_IOy Schmitt trigger hysteresis. Note: These bits control the I/O Schmitt trigger hysteresis whatever the I/O control mode is (even if controlled by standard GPIO registers). */
    using TSC_IOHCR_G2_IO2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy Schmitt trigger hysteresis disabled (value: 0)
     *          - B_0x1: Gx_IOy Schmitt trigger hysteresis enabled (value: 1)
     */
        /** @brief Gx_IOy Schmitt trigger hysteresis disabled */
    constexpr std::uint32_t TSC_IOHCR_G2_IO2_B_0x0 = 0;
        /** @brief Gx_IOy Schmitt trigger hysteresis enabled */
    constexpr std::uint32_t TSC_IOHCR_G2_IO2_B_0x1 = 1;

    /** @brief Gx_IOy Schmitt trigger hysteresis mode, x = 8 to 1, y = 4 to 1. These bits are set and cleared by software to enable/disable the Gx_IOy Schmitt trigger hysteresis. Note: These bits control the I/O Schmitt trigger hysteresis whatever the I/O control mode is (even if controlled by standard GPIO registers). */
    using TSC_IOHCR_G2_IO3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy Schmitt trigger hysteresis disabled (value: 0)
     *          - B_0x1: Gx_IOy Schmitt trigger hysteresis enabled (value: 1)
     */
        /** @brief Gx_IOy Schmitt trigger hysteresis disabled */
    constexpr std::uint32_t TSC_IOHCR_G2_IO3_B_0x0 = 0;
        /** @brief Gx_IOy Schmitt trigger hysteresis enabled */
    constexpr std::uint32_t TSC_IOHCR_G2_IO3_B_0x1 = 1;

    /** @brief Gx_IOy Schmitt trigger hysteresis mode, x = 8 to 1, y = 4 to 1. These bits are set and cleared by software to enable/disable the Gx_IOy Schmitt trigger hysteresis. Note: These bits control the I/O Schmitt trigger hysteresis whatever the I/O control mode is (even if controlled by standard GPIO registers). */
    using TSC_IOHCR_G2_IO4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy Schmitt trigger hysteresis disabled (value: 0)
     *          - B_0x1: Gx_IOy Schmitt trigger hysteresis enabled (value: 1)
     */
        /** @brief Gx_IOy Schmitt trigger hysteresis disabled */
    constexpr std::uint32_t TSC_IOHCR_G2_IO4_B_0x0 = 0;
        /** @brief Gx_IOy Schmitt trigger hysteresis enabled */
    constexpr std::uint32_t TSC_IOHCR_G2_IO4_B_0x1 = 1;

    /** @brief Gx_IOy Schmitt trigger hysteresis mode, x = 8 to 1, y = 4 to 1. These bits are set and cleared by software to enable/disable the Gx_IOy Schmitt trigger hysteresis. Note: These bits control the I/O Schmitt trigger hysteresis whatever the I/O control mode is (even if controlled by standard GPIO registers). */
    using TSC_IOHCR_G3_IO1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy Schmitt trigger hysteresis disabled (value: 0)
     *          - B_0x1: Gx_IOy Schmitt trigger hysteresis enabled (value: 1)
     */
        /** @brief Gx_IOy Schmitt trigger hysteresis disabled */
    constexpr std::uint32_t TSC_IOHCR_G3_IO1_B_0x0 = 0;
        /** @brief Gx_IOy Schmitt trigger hysteresis enabled */
    constexpr std::uint32_t TSC_IOHCR_G3_IO1_B_0x1 = 1;

    /** @brief Gx_IOy Schmitt trigger hysteresis mode, x = 8 to 1, y = 4 to 1. These bits are set and cleared by software to enable/disable the Gx_IOy Schmitt trigger hysteresis. Note: These bits control the I/O Schmitt trigger hysteresis whatever the I/O control mode is (even if controlled by standard GPIO registers). */
    using TSC_IOHCR_G3_IO2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy Schmitt trigger hysteresis disabled (value: 0)
     *          - B_0x1: Gx_IOy Schmitt trigger hysteresis enabled (value: 1)
     */
        /** @brief Gx_IOy Schmitt trigger hysteresis disabled */
    constexpr std::uint32_t TSC_IOHCR_G3_IO2_B_0x0 = 0;
        /** @brief Gx_IOy Schmitt trigger hysteresis enabled */
    constexpr std::uint32_t TSC_IOHCR_G3_IO2_B_0x1 = 1;

    /** @brief Gx_IOy Schmitt trigger hysteresis mode, x = 8 to 1, y = 4 to 1. These bits are set and cleared by software to enable/disable the Gx_IOy Schmitt trigger hysteresis. Note: These bits control the I/O Schmitt trigger hysteresis whatever the I/O control mode is (even if controlled by standard GPIO registers). */
    using TSC_IOHCR_G3_IO3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy Schmitt trigger hysteresis disabled (value: 0)
     *          - B_0x1: Gx_IOy Schmitt trigger hysteresis enabled (value: 1)
     */
        /** @brief Gx_IOy Schmitt trigger hysteresis disabled */
    constexpr std::uint32_t TSC_IOHCR_G3_IO3_B_0x0 = 0;
        /** @brief Gx_IOy Schmitt trigger hysteresis enabled */
    constexpr std::uint32_t TSC_IOHCR_G3_IO3_B_0x1 = 1;

    /** @brief Gx_IOy Schmitt trigger hysteresis mode, x = 8 to 1, y = 4 to 1. These bits are set and cleared by software to enable/disable the Gx_IOy Schmitt trigger hysteresis. Note: These bits control the I/O Schmitt trigger hysteresis whatever the I/O control mode is (even if controlled by standard GPIO registers). */
    using TSC_IOHCR_G3_IO4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy Schmitt trigger hysteresis disabled (value: 0)
     *          - B_0x1: Gx_IOy Schmitt trigger hysteresis enabled (value: 1)
     */
        /** @brief Gx_IOy Schmitt trigger hysteresis disabled */
    constexpr std::uint32_t TSC_IOHCR_G3_IO4_B_0x0 = 0;
        /** @brief Gx_IOy Schmitt trigger hysteresis enabled */
    constexpr std::uint32_t TSC_IOHCR_G3_IO4_B_0x1 = 1;

    /** @brief Gx_IOy Schmitt trigger hysteresis mode, x = 8 to 1, y = 4 to 1. These bits are set and cleared by software to enable/disable the Gx_IOy Schmitt trigger hysteresis. Note: These bits control the I/O Schmitt trigger hysteresis whatever the I/O control mode is (even if controlled by standard GPIO registers). */
    using TSC_IOHCR_G4_IO1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy Schmitt trigger hysteresis disabled (value: 0)
     *          - B_0x1: Gx_IOy Schmitt trigger hysteresis enabled (value: 1)
     */
        /** @brief Gx_IOy Schmitt trigger hysteresis disabled */
    constexpr std::uint32_t TSC_IOHCR_G4_IO1_B_0x0 = 0;
        /** @brief Gx_IOy Schmitt trigger hysteresis enabled */
    constexpr std::uint32_t TSC_IOHCR_G4_IO1_B_0x1 = 1;

    /** @brief Gx_IOy Schmitt trigger hysteresis mode, x = 8 to 1, y = 4 to 1. These bits are set and cleared by software to enable/disable the Gx_IOy Schmitt trigger hysteresis. Note: These bits control the I/O Schmitt trigger hysteresis whatever the I/O control mode is (even if controlled by standard GPIO registers). */
    using TSC_IOHCR_G4_IO2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy Schmitt trigger hysteresis disabled (value: 0)
     *          - B_0x1: Gx_IOy Schmitt trigger hysteresis enabled (value: 1)
     */
        /** @brief Gx_IOy Schmitt trigger hysteresis disabled */
    constexpr std::uint32_t TSC_IOHCR_G4_IO2_B_0x0 = 0;
        /** @brief Gx_IOy Schmitt trigger hysteresis enabled */
    constexpr std::uint32_t TSC_IOHCR_G4_IO2_B_0x1 = 1;

    /** @brief Gx_IOy Schmitt trigger hysteresis mode, x = 8 to 1, y = 4 to 1. These bits are set and cleared by software to enable/disable the Gx_IOy Schmitt trigger hysteresis. Note: These bits control the I/O Schmitt trigger hysteresis whatever the I/O control mode is (even if controlled by standard GPIO registers). */
    using TSC_IOHCR_G4_IO3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy Schmitt trigger hysteresis disabled (value: 0)
     *          - B_0x1: Gx_IOy Schmitt trigger hysteresis enabled (value: 1)
     */
        /** @brief Gx_IOy Schmitt trigger hysteresis disabled */
    constexpr std::uint32_t TSC_IOHCR_G4_IO3_B_0x0 = 0;
        /** @brief Gx_IOy Schmitt trigger hysteresis enabled */
    constexpr std::uint32_t TSC_IOHCR_G4_IO3_B_0x1 = 1;

    /** @brief Gx_IOy Schmitt trigger hysteresis mode, x = 8 to 1, y = 4 to 1. These bits are set and cleared by software to enable/disable the Gx_IOy Schmitt trigger hysteresis. Note: These bits control the I/O Schmitt trigger hysteresis whatever the I/O control mode is (even if controlled by standard GPIO registers). */
    using TSC_IOHCR_G4_IO4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy Schmitt trigger hysteresis disabled (value: 0)
     *          - B_0x1: Gx_IOy Schmitt trigger hysteresis enabled (value: 1)
     */
        /** @brief Gx_IOy Schmitt trigger hysteresis disabled */
    constexpr std::uint32_t TSC_IOHCR_G4_IO4_B_0x0 = 0;
        /** @brief Gx_IOy Schmitt trigger hysteresis enabled */
    constexpr std::uint32_t TSC_IOHCR_G4_IO4_B_0x1 = 1;

    /** @brief Gx_IOy Schmitt trigger hysteresis mode, x = 8 to 1, y = 4 to 1. These bits are set and cleared by software to enable/disable the Gx_IOy Schmitt trigger hysteresis. Note: These bits control the I/O Schmitt trigger hysteresis whatever the I/O control mode is (even if controlled by standard GPIO registers). */
    using TSC_IOHCR_G5_IO1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy Schmitt trigger hysteresis disabled (value: 0)
     *          - B_0x1: Gx_IOy Schmitt trigger hysteresis enabled (value: 1)
     */
        /** @brief Gx_IOy Schmitt trigger hysteresis disabled */
    constexpr std::uint32_t TSC_IOHCR_G5_IO1_B_0x0 = 0;
        /** @brief Gx_IOy Schmitt trigger hysteresis enabled */
    constexpr std::uint32_t TSC_IOHCR_G5_IO1_B_0x1 = 1;

    /** @brief Gx_IOy Schmitt trigger hysteresis mode, x = 8 to 1, y = 4 to 1. These bits are set and cleared by software to enable/disable the Gx_IOy Schmitt trigger hysteresis. Note: These bits control the I/O Schmitt trigger hysteresis whatever the I/O control mode is (even if controlled by standard GPIO registers). */
    using TSC_IOHCR_G5_IO2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy Schmitt trigger hysteresis disabled (value: 0)
     *          - B_0x1: Gx_IOy Schmitt trigger hysteresis enabled (value: 1)
     */
        /** @brief Gx_IOy Schmitt trigger hysteresis disabled */
    constexpr std::uint32_t TSC_IOHCR_G5_IO2_B_0x0 = 0;
        /** @brief Gx_IOy Schmitt trigger hysteresis enabled */
    constexpr std::uint32_t TSC_IOHCR_G5_IO2_B_0x1 = 1;

    /** @brief Gx_IOy Schmitt trigger hysteresis mode, x = 8 to 1, y = 4 to 1. These bits are set and cleared by software to enable/disable the Gx_IOy Schmitt trigger hysteresis. Note: These bits control the I/O Schmitt trigger hysteresis whatever the I/O control mode is (even if controlled by standard GPIO registers). */
    using TSC_IOHCR_G5_IO3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy Schmitt trigger hysteresis disabled (value: 0)
     *          - B_0x1: Gx_IOy Schmitt trigger hysteresis enabled (value: 1)
     */
        /** @brief Gx_IOy Schmitt trigger hysteresis disabled */
    constexpr std::uint32_t TSC_IOHCR_G5_IO3_B_0x0 = 0;
        /** @brief Gx_IOy Schmitt trigger hysteresis enabled */
    constexpr std::uint32_t TSC_IOHCR_G5_IO3_B_0x1 = 1;

    /** @brief Gx_IOy Schmitt trigger hysteresis mode, x = 8 to 1, y = 4 to 1. These bits are set and cleared by software to enable/disable the Gx_IOy Schmitt trigger hysteresis. Note: These bits control the I/O Schmitt trigger hysteresis whatever the I/O control mode is (even if controlled by standard GPIO registers). */
    using TSC_IOHCR_G5_IO4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy Schmitt trigger hysteresis disabled (value: 0)
     *          - B_0x1: Gx_IOy Schmitt trigger hysteresis enabled (value: 1)
     */
        /** @brief Gx_IOy Schmitt trigger hysteresis disabled */
    constexpr std::uint32_t TSC_IOHCR_G5_IO4_B_0x0 = 0;
        /** @brief Gx_IOy Schmitt trigger hysteresis enabled */
    constexpr std::uint32_t TSC_IOHCR_G5_IO4_B_0x1 = 1;

    /** @brief Gx_IOy Schmitt trigger hysteresis mode, x = 8 to 1, y = 4 to 1. These bits are set and cleared by software to enable/disable the Gx_IOy Schmitt trigger hysteresis. Note: These bits control the I/O Schmitt trigger hysteresis whatever the I/O control mode is (even if controlled by standard GPIO registers). */
    using TSC_IOHCR_G6_IO1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy Schmitt trigger hysteresis disabled (value: 0)
     *          - B_0x1: Gx_IOy Schmitt trigger hysteresis enabled (value: 1)
     */
        /** @brief Gx_IOy Schmitt trigger hysteresis disabled */
    constexpr std::uint32_t TSC_IOHCR_G6_IO1_B_0x0 = 0;
        /** @brief Gx_IOy Schmitt trigger hysteresis enabled */
    constexpr std::uint32_t TSC_IOHCR_G6_IO1_B_0x1 = 1;

    /** @brief Gx_IOy Schmitt trigger hysteresis mode, x = 8 to 1, y = 4 to 1. These bits are set and cleared by software to enable/disable the Gx_IOy Schmitt trigger hysteresis. Note: These bits control the I/O Schmitt trigger hysteresis whatever the I/O control mode is (even if controlled by standard GPIO registers). */
    using TSC_IOHCR_G6_IO2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy Schmitt trigger hysteresis disabled (value: 0)
     *          - B_0x1: Gx_IOy Schmitt trigger hysteresis enabled (value: 1)
     */
        /** @brief Gx_IOy Schmitt trigger hysteresis disabled */
    constexpr std::uint32_t TSC_IOHCR_G6_IO2_B_0x0 = 0;
        /** @brief Gx_IOy Schmitt trigger hysteresis enabled */
    constexpr std::uint32_t TSC_IOHCR_G6_IO2_B_0x1 = 1;

    /** @brief Gx_IOy Schmitt trigger hysteresis mode, x = 8 to 1, y = 4 to 1. These bits are set and cleared by software to enable/disable the Gx_IOy Schmitt trigger hysteresis. Note: These bits control the I/O Schmitt trigger hysteresis whatever the I/O control mode is (even if controlled by standard GPIO registers). */
    using TSC_IOHCR_G6_IO3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy Schmitt trigger hysteresis disabled (value: 0)
     *          - B_0x1: Gx_IOy Schmitt trigger hysteresis enabled (value: 1)
     */
        /** @brief Gx_IOy Schmitt trigger hysteresis disabled */
    constexpr std::uint32_t TSC_IOHCR_G6_IO3_B_0x0 = 0;
        /** @brief Gx_IOy Schmitt trigger hysteresis enabled */
    constexpr std::uint32_t TSC_IOHCR_G6_IO3_B_0x1 = 1;

    /** @brief Gx_IOy Schmitt trigger hysteresis mode, x = 8 to 1, y = 4 to 1. These bits are set and cleared by software to enable/disable the Gx_IOy Schmitt trigger hysteresis. Note: These bits control the I/O Schmitt trigger hysteresis whatever the I/O control mode is (even if controlled by standard GPIO registers). */
    using TSC_IOHCR_G6_IO4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy Schmitt trigger hysteresis disabled (value: 0)
     *          - B_0x1: Gx_IOy Schmitt trigger hysteresis enabled (value: 1)
     */
        /** @brief Gx_IOy Schmitt trigger hysteresis disabled */
    constexpr std::uint32_t TSC_IOHCR_G6_IO4_B_0x0 = 0;
        /** @brief Gx_IOy Schmitt trigger hysteresis enabled */
    constexpr std::uint32_t TSC_IOHCR_G6_IO4_B_0x1 = 1;

    /** @brief TSC I/O analog switch control register */
    using TSC_IOASCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Gx_IOy analog switch enable These bits are set and cleared by software to enable/disable the Gx_IOy analog switch. Note: These bits control the I/O analog switch whatever the I/O control mode is (even if controlled by standard GPIO registers). */
    using TSC_IOASCR_G1_IO1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy analog switch disabled (opened) (value: 0)
     *          - B_0x1: Gx_IOy analog switch enabled (closed) (value: 1)
     */
        /** @brief Gx_IOy analog switch disabled (opened) */
    constexpr std::uint32_t TSC_IOASCR_G1_IO1_B_0x0 = 0;
        /** @brief Gx_IOy analog switch enabled (closed) */
    constexpr std::uint32_t TSC_IOASCR_G1_IO1_B_0x1 = 1;

    /** @brief Gx_IOy analog switch enable These bits are set and cleared by software to enable/disable the Gx_IOy analog switch. Note: These bits control the I/O analog switch whatever the I/O control mode is (even if controlled by standard GPIO registers). */
    using TSC_IOASCR_G1_IO2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy analog switch disabled (opened) (value: 0)
     *          - B_0x1: Gx_IOy analog switch enabled (closed) (value: 1)
     */
        /** @brief Gx_IOy analog switch disabled (opened) */
    constexpr std::uint32_t TSC_IOASCR_G1_IO2_B_0x0 = 0;
        /** @brief Gx_IOy analog switch enabled (closed) */
    constexpr std::uint32_t TSC_IOASCR_G1_IO2_B_0x1 = 1;

    /** @brief Gx_IOy analog switch enable These bits are set and cleared by software to enable/disable the Gx_IOy analog switch. Note: These bits control the I/O analog switch whatever the I/O control mode is (even if controlled by standard GPIO registers). */
    using TSC_IOASCR_G1_IO3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy analog switch disabled (opened) (value: 0)
     *          - B_0x1: Gx_IOy analog switch enabled (closed) (value: 1)
     */
        /** @brief Gx_IOy analog switch disabled (opened) */
    constexpr std::uint32_t TSC_IOASCR_G1_IO3_B_0x0 = 0;
        /** @brief Gx_IOy analog switch enabled (closed) */
    constexpr std::uint32_t TSC_IOASCR_G1_IO3_B_0x1 = 1;

    /** @brief Gx_IOy analog switch enable These bits are set and cleared by software to enable/disable the Gx_IOy analog switch. Note: These bits control the I/O analog switch whatever the I/O control mode is (even if controlled by standard GPIO registers). */
    using TSC_IOASCR_G1_IO4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy analog switch disabled (opened) (value: 0)
     *          - B_0x1: Gx_IOy analog switch enabled (closed) (value: 1)
     */
        /** @brief Gx_IOy analog switch disabled (opened) */
    constexpr std::uint32_t TSC_IOASCR_G1_IO4_B_0x0 = 0;
        /** @brief Gx_IOy analog switch enabled (closed) */
    constexpr std::uint32_t TSC_IOASCR_G1_IO4_B_0x1 = 1;

    /** @brief Gx_IOy analog switch enable These bits are set and cleared by software to enable/disable the Gx_IOy analog switch. Note: These bits control the I/O analog switch whatever the I/O control mode is (even if controlled by standard GPIO registers). */
    using TSC_IOASCR_G2_IO1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy analog switch disabled (opened) (value: 0)
     *          - B_0x1: Gx_IOy analog switch enabled (closed) (value: 1)
     */
        /** @brief Gx_IOy analog switch disabled (opened) */
    constexpr std::uint32_t TSC_IOASCR_G2_IO1_B_0x0 = 0;
        /** @brief Gx_IOy analog switch enabled (closed) */
    constexpr std::uint32_t TSC_IOASCR_G2_IO1_B_0x1 = 1;

    /** @brief Gx_IOy analog switch enable These bits are set and cleared by software to enable/disable the Gx_IOy analog switch. Note: These bits control the I/O analog switch whatever the I/O control mode is (even if controlled by standard GPIO registers). */
    using TSC_IOASCR_G2_IO2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy analog switch disabled (opened) (value: 0)
     *          - B_0x1: Gx_IOy analog switch enabled (closed) (value: 1)
     */
        /** @brief Gx_IOy analog switch disabled (opened) */
    constexpr std::uint32_t TSC_IOASCR_G2_IO2_B_0x0 = 0;
        /** @brief Gx_IOy analog switch enabled (closed) */
    constexpr std::uint32_t TSC_IOASCR_G2_IO2_B_0x1 = 1;

    /** @brief Gx_IOy analog switch enable These bits are set and cleared by software to enable/disable the Gx_IOy analog switch. Note: These bits control the I/O analog switch whatever the I/O control mode is (even if controlled by standard GPIO registers). */
    using TSC_IOASCR_G2_IO3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy analog switch disabled (opened) (value: 0)
     *          - B_0x1: Gx_IOy analog switch enabled (closed) (value: 1)
     */
        /** @brief Gx_IOy analog switch disabled (opened) */
    constexpr std::uint32_t TSC_IOASCR_G2_IO3_B_0x0 = 0;
        /** @brief Gx_IOy analog switch enabled (closed) */
    constexpr std::uint32_t TSC_IOASCR_G2_IO3_B_0x1 = 1;

    /** @brief Gx_IOy analog switch enable These bits are set and cleared by software to enable/disable the Gx_IOy analog switch. Note: These bits control the I/O analog switch whatever the I/O control mode is (even if controlled by standard GPIO registers). */
    using TSC_IOASCR_G2_IO4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy analog switch disabled (opened) (value: 0)
     *          - B_0x1: Gx_IOy analog switch enabled (closed) (value: 1)
     */
        /** @brief Gx_IOy analog switch disabled (opened) */
    constexpr std::uint32_t TSC_IOASCR_G2_IO4_B_0x0 = 0;
        /** @brief Gx_IOy analog switch enabled (closed) */
    constexpr std::uint32_t TSC_IOASCR_G2_IO4_B_0x1 = 1;

    /** @brief Gx_IOy analog switch enable These bits are set and cleared by software to enable/disable the Gx_IOy analog switch. Note: These bits control the I/O analog switch whatever the I/O control mode is (even if controlled by standard GPIO registers). */
    using TSC_IOASCR_G3_IO1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy analog switch disabled (opened) (value: 0)
     *          - B_0x1: Gx_IOy analog switch enabled (closed) (value: 1)
     */
        /** @brief Gx_IOy analog switch disabled (opened) */
    constexpr std::uint32_t TSC_IOASCR_G3_IO1_B_0x0 = 0;
        /** @brief Gx_IOy analog switch enabled (closed) */
    constexpr std::uint32_t TSC_IOASCR_G3_IO1_B_0x1 = 1;

    /** @brief Gx_IOy analog switch enable These bits are set and cleared by software to enable/disable the Gx_IOy analog switch. Note: These bits control the I/O analog switch whatever the I/O control mode is (even if controlled by standard GPIO registers). */
    using TSC_IOASCR_G3_IO2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy analog switch disabled (opened) (value: 0)
     *          - B_0x1: Gx_IOy analog switch enabled (closed) (value: 1)
     */
        /** @brief Gx_IOy analog switch disabled (opened) */
    constexpr std::uint32_t TSC_IOASCR_G3_IO2_B_0x0 = 0;
        /** @brief Gx_IOy analog switch enabled (closed) */
    constexpr std::uint32_t TSC_IOASCR_G3_IO2_B_0x1 = 1;

    /** @brief Gx_IOy analog switch enable These bits are set and cleared by software to enable/disable the Gx_IOy analog switch. Note: These bits control the I/O analog switch whatever the I/O control mode is (even if controlled by standard GPIO registers). */
    using TSC_IOASCR_G3_IO3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy analog switch disabled (opened) (value: 0)
     *          - B_0x1: Gx_IOy analog switch enabled (closed) (value: 1)
     */
        /** @brief Gx_IOy analog switch disabled (opened) */
    constexpr std::uint32_t TSC_IOASCR_G3_IO3_B_0x0 = 0;
        /** @brief Gx_IOy analog switch enabled (closed) */
    constexpr std::uint32_t TSC_IOASCR_G3_IO3_B_0x1 = 1;

    /** @brief Gx_IOy analog switch enable These bits are set and cleared by software to enable/disable the Gx_IOy analog switch. Note: These bits control the I/O analog switch whatever the I/O control mode is (even if controlled by standard GPIO registers). */
    using TSC_IOASCR_G3_IO4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy analog switch disabled (opened) (value: 0)
     *          - B_0x1: Gx_IOy analog switch enabled (closed) (value: 1)
     */
        /** @brief Gx_IOy analog switch disabled (opened) */
    constexpr std::uint32_t TSC_IOASCR_G3_IO4_B_0x0 = 0;
        /** @brief Gx_IOy analog switch enabled (closed) */
    constexpr std::uint32_t TSC_IOASCR_G3_IO4_B_0x1 = 1;

    /** @brief Gx_IOy analog switch enable These bits are set and cleared by software to enable/disable the Gx_IOy analog switch. Note: These bits control the I/O analog switch whatever the I/O control mode is (even if controlled by standard GPIO registers). */
    using TSC_IOASCR_G4_IO1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy analog switch disabled (opened) (value: 0)
     *          - B_0x1: Gx_IOy analog switch enabled (closed) (value: 1)
     */
        /** @brief Gx_IOy analog switch disabled (opened) */
    constexpr std::uint32_t TSC_IOASCR_G4_IO1_B_0x0 = 0;
        /** @brief Gx_IOy analog switch enabled (closed) */
    constexpr std::uint32_t TSC_IOASCR_G4_IO1_B_0x1 = 1;

    /** @brief Gx_IOy analog switch enable These bits are set and cleared by software to enable/disable the Gx_IOy analog switch. Note: These bits control the I/O analog switch whatever the I/O control mode is (even if controlled by standard GPIO registers). */
    using TSC_IOASCR_G4_IO2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy analog switch disabled (opened) (value: 0)
     *          - B_0x1: Gx_IOy analog switch enabled (closed) (value: 1)
     */
        /** @brief Gx_IOy analog switch disabled (opened) */
    constexpr std::uint32_t TSC_IOASCR_G4_IO2_B_0x0 = 0;
        /** @brief Gx_IOy analog switch enabled (closed) */
    constexpr std::uint32_t TSC_IOASCR_G4_IO2_B_0x1 = 1;

    /** @brief Gx_IOy analog switch enable These bits are set and cleared by software to enable/disable the Gx_IOy analog switch. Note: These bits control the I/O analog switch whatever the I/O control mode is (even if controlled by standard GPIO registers). */
    using TSC_IOASCR_G4_IO3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy analog switch disabled (opened) (value: 0)
     *          - B_0x1: Gx_IOy analog switch enabled (closed) (value: 1)
     */
        /** @brief Gx_IOy analog switch disabled (opened) */
    constexpr std::uint32_t TSC_IOASCR_G4_IO3_B_0x0 = 0;
        /** @brief Gx_IOy analog switch enabled (closed) */
    constexpr std::uint32_t TSC_IOASCR_G4_IO3_B_0x1 = 1;

    /** @brief Gx_IOy analog switch enable These bits are set and cleared by software to enable/disable the Gx_IOy analog switch. Note: These bits control the I/O analog switch whatever the I/O control mode is (even if controlled by standard GPIO registers). */
    using TSC_IOASCR_G4_IO4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy analog switch disabled (opened) (value: 0)
     *          - B_0x1: Gx_IOy analog switch enabled (closed) (value: 1)
     */
        /** @brief Gx_IOy analog switch disabled (opened) */
    constexpr std::uint32_t TSC_IOASCR_G4_IO4_B_0x0 = 0;
        /** @brief Gx_IOy analog switch enabled (closed) */
    constexpr std::uint32_t TSC_IOASCR_G4_IO4_B_0x1 = 1;

    /** @brief Gx_IOy analog switch enable These bits are set and cleared by software to enable/disable the Gx_IOy analog switch. Note: These bits control the I/O analog switch whatever the I/O control mode is (even if controlled by standard GPIO registers). */
    using TSC_IOASCR_G5_IO1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy analog switch disabled (opened) (value: 0)
     *          - B_0x1: Gx_IOy analog switch enabled (closed) (value: 1)
     */
        /** @brief Gx_IOy analog switch disabled (opened) */
    constexpr std::uint32_t TSC_IOASCR_G5_IO1_B_0x0 = 0;
        /** @brief Gx_IOy analog switch enabled (closed) */
    constexpr std::uint32_t TSC_IOASCR_G5_IO1_B_0x1 = 1;

    /** @brief Gx_IOy analog switch enable These bits are set and cleared by software to enable/disable the Gx_IOy analog switch. Note: These bits control the I/O analog switch whatever the I/O control mode is (even if controlled by standard GPIO registers). */
    using TSC_IOASCR_G5_IO2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy analog switch disabled (opened) (value: 0)
     *          - B_0x1: Gx_IOy analog switch enabled (closed) (value: 1)
     */
        /** @brief Gx_IOy analog switch disabled (opened) */
    constexpr std::uint32_t TSC_IOASCR_G5_IO2_B_0x0 = 0;
        /** @brief Gx_IOy analog switch enabled (closed) */
    constexpr std::uint32_t TSC_IOASCR_G5_IO2_B_0x1 = 1;

    /** @brief Gx_IOy analog switch enable These bits are set and cleared by software to enable/disable the Gx_IOy analog switch. Note: These bits control the I/O analog switch whatever the I/O control mode is (even if controlled by standard GPIO registers). */
    using TSC_IOASCR_G5_IO3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy analog switch disabled (opened) (value: 0)
     *          - B_0x1: Gx_IOy analog switch enabled (closed) (value: 1)
     */
        /** @brief Gx_IOy analog switch disabled (opened) */
    constexpr std::uint32_t TSC_IOASCR_G5_IO3_B_0x0 = 0;
        /** @brief Gx_IOy analog switch enabled (closed) */
    constexpr std::uint32_t TSC_IOASCR_G5_IO3_B_0x1 = 1;

    /** @brief Gx_IOy analog switch enable These bits are set and cleared by software to enable/disable the Gx_IOy analog switch. Note: These bits control the I/O analog switch whatever the I/O control mode is (even if controlled by standard GPIO registers). */
    using TSC_IOASCR_G5_IO4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy analog switch disabled (opened) (value: 0)
     *          - B_0x1: Gx_IOy analog switch enabled (closed) (value: 1)
     */
        /** @brief Gx_IOy analog switch disabled (opened) */
    constexpr std::uint32_t TSC_IOASCR_G5_IO4_B_0x0 = 0;
        /** @brief Gx_IOy analog switch enabled (closed) */
    constexpr std::uint32_t TSC_IOASCR_G5_IO4_B_0x1 = 1;

    /** @brief Gx_IOy analog switch enable These bits are set and cleared by software to enable/disable the Gx_IOy analog switch. Note: These bits control the I/O analog switch whatever the I/O control mode is (even if controlled by standard GPIO registers). */
    using TSC_IOASCR_G6_IO1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy analog switch disabled (opened) (value: 0)
     *          - B_0x1: Gx_IOy analog switch enabled (closed) (value: 1)
     */
        /** @brief Gx_IOy analog switch disabled (opened) */
    constexpr std::uint32_t TSC_IOASCR_G6_IO1_B_0x0 = 0;
        /** @brief Gx_IOy analog switch enabled (closed) */
    constexpr std::uint32_t TSC_IOASCR_G6_IO1_B_0x1 = 1;

    /** @brief Gx_IOy analog switch enable These bits are set and cleared by software to enable/disable the Gx_IOy analog switch. Note: These bits control the I/O analog switch whatever the I/O control mode is (even if controlled by standard GPIO registers). */
    using TSC_IOASCR_G6_IO2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy analog switch disabled (opened) (value: 0)
     *          - B_0x1: Gx_IOy analog switch enabled (closed) (value: 1)
     */
        /** @brief Gx_IOy analog switch disabled (opened) */
    constexpr std::uint32_t TSC_IOASCR_G6_IO2_B_0x0 = 0;
        /** @brief Gx_IOy analog switch enabled (closed) */
    constexpr std::uint32_t TSC_IOASCR_G6_IO2_B_0x1 = 1;

    /** @brief Gx_IOy analog switch enable These bits are set and cleared by software to enable/disable the Gx_IOy analog switch. Note: These bits control the I/O analog switch whatever the I/O control mode is (even if controlled by standard GPIO registers). */
    using TSC_IOASCR_G6_IO3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy analog switch disabled (opened) (value: 0)
     *          - B_0x1: Gx_IOy analog switch enabled (closed) (value: 1)
     */
        /** @brief Gx_IOy analog switch disabled (opened) */
    constexpr std::uint32_t TSC_IOASCR_G6_IO3_B_0x0 = 0;
        /** @brief Gx_IOy analog switch enabled (closed) */
    constexpr std::uint32_t TSC_IOASCR_G6_IO3_B_0x1 = 1;

    /** @brief Gx_IOy analog switch enable These bits are set and cleared by software to enable/disable the Gx_IOy analog switch. Note: These bits control the I/O analog switch whatever the I/O control mode is (even if controlled by standard GPIO registers). */
    using TSC_IOASCR_G6_IO4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy analog switch disabled (opened) (value: 0)
     *          - B_0x1: Gx_IOy analog switch enabled (closed) (value: 1)
     */
        /** @brief Gx_IOy analog switch disabled (opened) */
    constexpr std::uint32_t TSC_IOASCR_G6_IO4_B_0x0 = 0;
        /** @brief Gx_IOy analog switch enabled (closed) */
    constexpr std::uint32_t TSC_IOASCR_G6_IO4_B_0x1 = 1;

    /** @brief TSC I/O sampling control register */
    using TSC_IOSCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Gx_IOy sampling mode These bits are set and cleared by software to configure the Gx_IOy as a sampling capacitor I/O. Only one I/O per analog I/O group must be defined as sampling capacitor. Note: These bits must not be modified when an acquisition is ongoing. Note: During the acquisition phase and even if the TSC peripheral alternate function is not enabled, as soon as the TSC_IOSCR bit is set, the corresponding GPIO analog switch is automatically controlled by the touch sensing controller. */
    using TSC_IOSCR_G1_IO1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as sampling capacitor (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOSCR_G1_IO1_B_0x0 = 0;
        /** @brief Gx_IOy used as sampling capacitor */
    constexpr std::uint32_t TSC_IOSCR_G1_IO1_B_0x1 = 1;

    /** @brief Gx_IOy sampling mode These bits are set and cleared by software to configure the Gx_IOy as a sampling capacitor I/O. Only one I/O per analog I/O group must be defined as sampling capacitor. Note: These bits must not be modified when an acquisition is ongoing. Note: During the acquisition phase and even if the TSC peripheral alternate function is not enabled, as soon as the TSC_IOSCR bit is set, the corresponding GPIO analog switch is automatically controlled by the touch sensing controller. */
    using TSC_IOSCR_G1_IO2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as sampling capacitor (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOSCR_G1_IO2_B_0x0 = 0;
        /** @brief Gx_IOy used as sampling capacitor */
    constexpr std::uint32_t TSC_IOSCR_G1_IO2_B_0x1 = 1;

    /** @brief Gx_IOy sampling mode These bits are set and cleared by software to configure the Gx_IOy as a sampling capacitor I/O. Only one I/O per analog I/O group must be defined as sampling capacitor. Note: These bits must not be modified when an acquisition is ongoing. Note: During the acquisition phase and even if the TSC peripheral alternate function is not enabled, as soon as the TSC_IOSCR bit is set, the corresponding GPIO analog switch is automatically controlled by the touch sensing controller. */
    using TSC_IOSCR_G1_IO3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as sampling capacitor (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOSCR_G1_IO3_B_0x0 = 0;
        /** @brief Gx_IOy used as sampling capacitor */
    constexpr std::uint32_t TSC_IOSCR_G1_IO3_B_0x1 = 1;

    /** @brief Gx_IOy sampling mode These bits are set and cleared by software to configure the Gx_IOy as a sampling capacitor I/O. Only one I/O per analog I/O group must be defined as sampling capacitor. Note: These bits must not be modified when an acquisition is ongoing. Note: During the acquisition phase and even if the TSC peripheral alternate function is not enabled, as soon as the TSC_IOSCR bit is set, the corresponding GPIO analog switch is automatically controlled by the touch sensing controller. */
    using TSC_IOSCR_G1_IO4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as sampling capacitor (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOSCR_G1_IO4_B_0x0 = 0;
        /** @brief Gx_IOy used as sampling capacitor */
    constexpr std::uint32_t TSC_IOSCR_G1_IO4_B_0x1 = 1;

    /** @brief Gx_IOy sampling mode These bits are set and cleared by software to configure the Gx_IOy as a sampling capacitor I/O. Only one I/O per analog I/O group must be defined as sampling capacitor. Note: These bits must not be modified when an acquisition is ongoing. Note: During the acquisition phase and even if the TSC peripheral alternate function is not enabled, as soon as the TSC_IOSCR bit is set, the corresponding GPIO analog switch is automatically controlled by the touch sensing controller. */
    using TSC_IOSCR_G2_IO1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as sampling capacitor (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOSCR_G2_IO1_B_0x0 = 0;
        /** @brief Gx_IOy used as sampling capacitor */
    constexpr std::uint32_t TSC_IOSCR_G2_IO1_B_0x1 = 1;

    /** @brief Gx_IOy sampling mode These bits are set and cleared by software to configure the Gx_IOy as a sampling capacitor I/O. Only one I/O per analog I/O group must be defined as sampling capacitor. Note: These bits must not be modified when an acquisition is ongoing. Note: During the acquisition phase and even if the TSC peripheral alternate function is not enabled, as soon as the TSC_IOSCR bit is set, the corresponding GPIO analog switch is automatically controlled by the touch sensing controller. */
    using TSC_IOSCR_G2_IO2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as sampling capacitor (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOSCR_G2_IO2_B_0x0 = 0;
        /** @brief Gx_IOy used as sampling capacitor */
    constexpr std::uint32_t TSC_IOSCR_G2_IO2_B_0x1 = 1;

    /** @brief Gx_IOy sampling mode These bits are set and cleared by software to configure the Gx_IOy as a sampling capacitor I/O. Only one I/O per analog I/O group must be defined as sampling capacitor. Note: These bits must not be modified when an acquisition is ongoing. Note: During the acquisition phase and even if the TSC peripheral alternate function is not enabled, as soon as the TSC_IOSCR bit is set, the corresponding GPIO analog switch is automatically controlled by the touch sensing controller. */
    using TSC_IOSCR_G2_IO3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as sampling capacitor (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOSCR_G2_IO3_B_0x0 = 0;
        /** @brief Gx_IOy used as sampling capacitor */
    constexpr std::uint32_t TSC_IOSCR_G2_IO3_B_0x1 = 1;

    /** @brief Gx_IOy sampling mode These bits are set and cleared by software to configure the Gx_IOy as a sampling capacitor I/O. Only one I/O per analog I/O group must be defined as sampling capacitor. Note: These bits must not be modified when an acquisition is ongoing. Note: During the acquisition phase and even if the TSC peripheral alternate function is not enabled, as soon as the TSC_IOSCR bit is set, the corresponding GPIO analog switch is automatically controlled by the touch sensing controller. */
    using TSC_IOSCR_G2_IO4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as sampling capacitor (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOSCR_G2_IO4_B_0x0 = 0;
        /** @brief Gx_IOy used as sampling capacitor */
    constexpr std::uint32_t TSC_IOSCR_G2_IO4_B_0x1 = 1;

    /** @brief Gx_IOy sampling mode These bits are set and cleared by software to configure the Gx_IOy as a sampling capacitor I/O. Only one I/O per analog I/O group must be defined as sampling capacitor. Note: These bits must not be modified when an acquisition is ongoing. Note: During the acquisition phase and even if the TSC peripheral alternate function is not enabled, as soon as the TSC_IOSCR bit is set, the corresponding GPIO analog switch is automatically controlled by the touch sensing controller. */
    using TSC_IOSCR_G3_IO1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as sampling capacitor (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOSCR_G3_IO1_B_0x0 = 0;
        /** @brief Gx_IOy used as sampling capacitor */
    constexpr std::uint32_t TSC_IOSCR_G3_IO1_B_0x1 = 1;

    /** @brief Gx_IOy sampling mode These bits are set and cleared by software to configure the Gx_IOy as a sampling capacitor I/O. Only one I/O per analog I/O group must be defined as sampling capacitor. Note: These bits must not be modified when an acquisition is ongoing. Note: During the acquisition phase and even if the TSC peripheral alternate function is not enabled, as soon as the TSC_IOSCR bit is set, the corresponding GPIO analog switch is automatically controlled by the touch sensing controller. */
    using TSC_IOSCR_G3_IO2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as sampling capacitor (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOSCR_G3_IO2_B_0x0 = 0;
        /** @brief Gx_IOy used as sampling capacitor */
    constexpr std::uint32_t TSC_IOSCR_G3_IO2_B_0x1 = 1;

    /** @brief Gx_IOy sampling mode These bits are set and cleared by software to configure the Gx_IOy as a sampling capacitor I/O. Only one I/O per analog I/O group must be defined as sampling capacitor. Note: These bits must not be modified when an acquisition is ongoing. Note: During the acquisition phase and even if the TSC peripheral alternate function is not enabled, as soon as the TSC_IOSCR bit is set, the corresponding GPIO analog switch is automatically controlled by the touch sensing controller. */
    using TSC_IOSCR_G3_IO3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as sampling capacitor (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOSCR_G3_IO3_B_0x0 = 0;
        /** @brief Gx_IOy used as sampling capacitor */
    constexpr std::uint32_t TSC_IOSCR_G3_IO3_B_0x1 = 1;

    /** @brief Gx_IOy sampling mode These bits are set and cleared by software to configure the Gx_IOy as a sampling capacitor I/O. Only one I/O per analog I/O group must be defined as sampling capacitor. Note: These bits must not be modified when an acquisition is ongoing. Note: During the acquisition phase and even if the TSC peripheral alternate function is not enabled, as soon as the TSC_IOSCR bit is set, the corresponding GPIO analog switch is automatically controlled by the touch sensing controller. */
    using TSC_IOSCR_G3_IO4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as sampling capacitor (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOSCR_G3_IO4_B_0x0 = 0;
        /** @brief Gx_IOy used as sampling capacitor */
    constexpr std::uint32_t TSC_IOSCR_G3_IO4_B_0x1 = 1;

    /** @brief Gx_IOy sampling mode These bits are set and cleared by software to configure the Gx_IOy as a sampling capacitor I/O. Only one I/O per analog I/O group must be defined as sampling capacitor. Note: These bits must not be modified when an acquisition is ongoing. Note: During the acquisition phase and even if the TSC peripheral alternate function is not enabled, as soon as the TSC_IOSCR bit is set, the corresponding GPIO analog switch is automatically controlled by the touch sensing controller. */
    using TSC_IOSCR_G4_IO1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as sampling capacitor (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOSCR_G4_IO1_B_0x0 = 0;
        /** @brief Gx_IOy used as sampling capacitor */
    constexpr std::uint32_t TSC_IOSCR_G4_IO1_B_0x1 = 1;

    /** @brief Gx_IOy sampling mode These bits are set and cleared by software to configure the Gx_IOy as a sampling capacitor I/O. Only one I/O per analog I/O group must be defined as sampling capacitor. Note: These bits must not be modified when an acquisition is ongoing. Note: During the acquisition phase and even if the TSC peripheral alternate function is not enabled, as soon as the TSC_IOSCR bit is set, the corresponding GPIO analog switch is automatically controlled by the touch sensing controller. */
    using TSC_IOSCR_G4_IO2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as sampling capacitor (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOSCR_G4_IO2_B_0x0 = 0;
        /** @brief Gx_IOy used as sampling capacitor */
    constexpr std::uint32_t TSC_IOSCR_G4_IO2_B_0x1 = 1;

    /** @brief Gx_IOy sampling mode These bits are set and cleared by software to configure the Gx_IOy as a sampling capacitor I/O. Only one I/O per analog I/O group must be defined as sampling capacitor. Note: These bits must not be modified when an acquisition is ongoing. Note: During the acquisition phase and even if the TSC peripheral alternate function is not enabled, as soon as the TSC_IOSCR bit is set, the corresponding GPIO analog switch is automatically controlled by the touch sensing controller. */
    using TSC_IOSCR_G4_IO3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as sampling capacitor (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOSCR_G4_IO3_B_0x0 = 0;
        /** @brief Gx_IOy used as sampling capacitor */
    constexpr std::uint32_t TSC_IOSCR_G4_IO3_B_0x1 = 1;

    /** @brief Gx_IOy sampling mode These bits are set and cleared by software to configure the Gx_IOy as a sampling capacitor I/O. Only one I/O per analog I/O group must be defined as sampling capacitor. Note: These bits must not be modified when an acquisition is ongoing. Note: During the acquisition phase and even if the TSC peripheral alternate function is not enabled, as soon as the TSC_IOSCR bit is set, the corresponding GPIO analog switch is automatically controlled by the touch sensing controller. */
    using TSC_IOSCR_G4_IO4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as sampling capacitor (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOSCR_G4_IO4_B_0x0 = 0;
        /** @brief Gx_IOy used as sampling capacitor */
    constexpr std::uint32_t TSC_IOSCR_G4_IO4_B_0x1 = 1;

    /** @brief Gx_IOy sampling mode These bits are set and cleared by software to configure the Gx_IOy as a sampling capacitor I/O. Only one I/O per analog I/O group must be defined as sampling capacitor. Note: These bits must not be modified when an acquisition is ongoing. Note: During the acquisition phase and even if the TSC peripheral alternate function is not enabled, as soon as the TSC_IOSCR bit is set, the corresponding GPIO analog switch is automatically controlled by the touch sensing controller. */
    using TSC_IOSCR_G5_IO1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as sampling capacitor (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOSCR_G5_IO1_B_0x0 = 0;
        /** @brief Gx_IOy used as sampling capacitor */
    constexpr std::uint32_t TSC_IOSCR_G5_IO1_B_0x1 = 1;

    /** @brief Gx_IOy sampling mode These bits are set and cleared by software to configure the Gx_IOy as a sampling capacitor I/O. Only one I/O per analog I/O group must be defined as sampling capacitor. Note: These bits must not be modified when an acquisition is ongoing. Note: During the acquisition phase and even if the TSC peripheral alternate function is not enabled, as soon as the TSC_IOSCR bit is set, the corresponding GPIO analog switch is automatically controlled by the touch sensing controller. */
    using TSC_IOSCR_G5_IO2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as sampling capacitor (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOSCR_G5_IO2_B_0x0 = 0;
        /** @brief Gx_IOy used as sampling capacitor */
    constexpr std::uint32_t TSC_IOSCR_G5_IO2_B_0x1 = 1;

    /** @brief Gx_IOy sampling mode These bits are set and cleared by software to configure the Gx_IOy as a sampling capacitor I/O. Only one I/O per analog I/O group must be defined as sampling capacitor. Note: These bits must not be modified when an acquisition is ongoing. Note: During the acquisition phase and even if the TSC peripheral alternate function is not enabled, as soon as the TSC_IOSCR bit is set, the corresponding GPIO analog switch is automatically controlled by the touch sensing controller. */
    using TSC_IOSCR_G5_IO3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as sampling capacitor (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOSCR_G5_IO3_B_0x0 = 0;
        /** @brief Gx_IOy used as sampling capacitor */
    constexpr std::uint32_t TSC_IOSCR_G5_IO3_B_0x1 = 1;

    /** @brief Gx_IOy sampling mode These bits are set and cleared by software to configure the Gx_IOy as a sampling capacitor I/O. Only one I/O per analog I/O group must be defined as sampling capacitor. Note: These bits must not be modified when an acquisition is ongoing. Note: During the acquisition phase and even if the TSC peripheral alternate function is not enabled, as soon as the TSC_IOSCR bit is set, the corresponding GPIO analog switch is automatically controlled by the touch sensing controller. */
    using TSC_IOSCR_G5_IO4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as sampling capacitor (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOSCR_G5_IO4_B_0x0 = 0;
        /** @brief Gx_IOy used as sampling capacitor */
    constexpr std::uint32_t TSC_IOSCR_G5_IO4_B_0x1 = 1;

    /** @brief Gx_IOy sampling mode These bits are set and cleared by software to configure the Gx_IOy as a sampling capacitor I/O. Only one I/O per analog I/O group must be defined as sampling capacitor. Note: These bits must not be modified when an acquisition is ongoing. Note: During the acquisition phase and even if the TSC peripheral alternate function is not enabled, as soon as the TSC_IOSCR bit is set, the corresponding GPIO analog switch is automatically controlled by the touch sensing controller. */
    using TSC_IOSCR_G6_IO1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as sampling capacitor (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOSCR_G6_IO1_B_0x0 = 0;
        /** @brief Gx_IOy used as sampling capacitor */
    constexpr std::uint32_t TSC_IOSCR_G6_IO1_B_0x1 = 1;

    /** @brief Gx_IOy sampling mode These bits are set and cleared by software to configure the Gx_IOy as a sampling capacitor I/O. Only one I/O per analog I/O group must be defined as sampling capacitor. Note: These bits must not be modified when an acquisition is ongoing. Note: During the acquisition phase and even if the TSC peripheral alternate function is not enabled, as soon as the TSC_IOSCR bit is set, the corresponding GPIO analog switch is automatically controlled by the touch sensing controller. */
    using TSC_IOSCR_G6_IO2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as sampling capacitor (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOSCR_G6_IO2_B_0x0 = 0;
        /** @brief Gx_IOy used as sampling capacitor */
    constexpr std::uint32_t TSC_IOSCR_G6_IO2_B_0x1 = 1;

    /** @brief Gx_IOy sampling mode These bits are set and cleared by software to configure the Gx_IOy as a sampling capacitor I/O. Only one I/O per analog I/O group must be defined as sampling capacitor. Note: These bits must not be modified when an acquisition is ongoing. Note: During the acquisition phase and even if the TSC peripheral alternate function is not enabled, as soon as the TSC_IOSCR bit is set, the corresponding GPIO analog switch is automatically controlled by the touch sensing controller. */
    using TSC_IOSCR_G6_IO3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as sampling capacitor (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOSCR_G6_IO3_B_0x0 = 0;
        /** @brief Gx_IOy used as sampling capacitor */
    constexpr std::uint32_t TSC_IOSCR_G6_IO3_B_0x1 = 1;

    /** @brief Gx_IOy sampling mode These bits are set and cleared by software to configure the Gx_IOy as a sampling capacitor I/O. Only one I/O per analog I/O group must be defined as sampling capacitor. Note: These bits must not be modified when an acquisition is ongoing. Note: During the acquisition phase and even if the TSC peripheral alternate function is not enabled, as soon as the TSC_IOSCR bit is set, the corresponding GPIO analog switch is automatically controlled by the touch sensing controller. */
    using TSC_IOSCR_G6_IO4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as sampling capacitor (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOSCR_G6_IO4_B_0x0 = 0;
        /** @brief Gx_IOy used as sampling capacitor */
    constexpr std::uint32_t TSC_IOSCR_G6_IO4_B_0x1 = 1;

    /** @brief TSC I/O channel control register */
    using TSC_IOCCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Gx_IOy channel mode These bits are set and cleared by software to configure the Gx_IOy as a channel I/O. Note: These bits must not be modified when an acquisition is ongoing. Note: During the acquisition phase and even if the TSC peripheral alternate function is not enabled, as soon as the TSC_IOCCR bit is set, the corresponding GPIO analog switch is automatically controlled by the touch sensing controller. */
    using TSC_IOCCR_G1_IO1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as channel (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOCCR_G1_IO1_B_0x0 = 0;
        /** @brief Gx_IOy used as channel */
    constexpr std::uint32_t TSC_IOCCR_G1_IO1_B_0x1 = 1;

    /** @brief Gx_IOy channel mode These bits are set and cleared by software to configure the Gx_IOy as a channel I/O. Note: These bits must not be modified when an acquisition is ongoing. Note: During the acquisition phase and even if the TSC peripheral alternate function is not enabled, as soon as the TSC_IOCCR bit is set, the corresponding GPIO analog switch is automatically controlled by the touch sensing controller. */
    using TSC_IOCCR_G1_IO2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as channel (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOCCR_G1_IO2_B_0x0 = 0;
        /** @brief Gx_IOy used as channel */
    constexpr std::uint32_t TSC_IOCCR_G1_IO2_B_0x1 = 1;

    /** @brief Gx_IOy channel mode These bits are set and cleared by software to configure the Gx_IOy as a channel I/O. Note: These bits must not be modified when an acquisition is ongoing. Note: During the acquisition phase and even if the TSC peripheral alternate function is not enabled, as soon as the TSC_IOCCR bit is set, the corresponding GPIO analog switch is automatically controlled by the touch sensing controller. */
    using TSC_IOCCR_G1_IO3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as channel (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOCCR_G1_IO3_B_0x0 = 0;
        /** @brief Gx_IOy used as channel */
    constexpr std::uint32_t TSC_IOCCR_G1_IO3_B_0x1 = 1;

    /** @brief Gx_IOy channel mode These bits are set and cleared by software to configure the Gx_IOy as a channel I/O. Note: These bits must not be modified when an acquisition is ongoing. Note: During the acquisition phase and even if the TSC peripheral alternate function is not enabled, as soon as the TSC_IOCCR bit is set, the corresponding GPIO analog switch is automatically controlled by the touch sensing controller. */
    using TSC_IOCCR_G1_IO4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as channel (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOCCR_G1_IO4_B_0x0 = 0;
        /** @brief Gx_IOy used as channel */
    constexpr std::uint32_t TSC_IOCCR_G1_IO4_B_0x1 = 1;

    /** @brief Gx_IOy channel mode These bits are set and cleared by software to configure the Gx_IOy as a channel I/O. Note: These bits must not be modified when an acquisition is ongoing. Note: During the acquisition phase and even if the TSC peripheral alternate function is not enabled, as soon as the TSC_IOCCR bit is set, the corresponding GPIO analog switch is automatically controlled by the touch sensing controller. */
    using TSC_IOCCR_G2_IO1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as channel (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOCCR_G2_IO1_B_0x0 = 0;
        /** @brief Gx_IOy used as channel */
    constexpr std::uint32_t TSC_IOCCR_G2_IO1_B_0x1 = 1;

    /** @brief Gx_IOy channel mode These bits are set and cleared by software to configure the Gx_IOy as a channel I/O. Note: These bits must not be modified when an acquisition is ongoing. Note: During the acquisition phase and even if the TSC peripheral alternate function is not enabled, as soon as the TSC_IOCCR bit is set, the corresponding GPIO analog switch is automatically controlled by the touch sensing controller. */
    using TSC_IOCCR_G2_IO2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as channel (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOCCR_G2_IO2_B_0x0 = 0;
        /** @brief Gx_IOy used as channel */
    constexpr std::uint32_t TSC_IOCCR_G2_IO2_B_0x1 = 1;

    /** @brief Gx_IOy channel mode These bits are set and cleared by software to configure the Gx_IOy as a channel I/O. Note: These bits must not be modified when an acquisition is ongoing. Note: During the acquisition phase and even if the TSC peripheral alternate function is not enabled, as soon as the TSC_IOCCR bit is set, the corresponding GPIO analog switch is automatically controlled by the touch sensing controller. */
    using TSC_IOCCR_G2_IO3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as channel (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOCCR_G2_IO3_B_0x0 = 0;
        /** @brief Gx_IOy used as channel */
    constexpr std::uint32_t TSC_IOCCR_G2_IO3_B_0x1 = 1;

    /** @brief Gx_IOy channel mode These bits are set and cleared by software to configure the Gx_IOy as a channel I/O. Note: These bits must not be modified when an acquisition is ongoing. Note: During the acquisition phase and even if the TSC peripheral alternate function is not enabled, as soon as the TSC_IOCCR bit is set, the corresponding GPIO analog switch is automatically controlled by the touch sensing controller. */
    using TSC_IOCCR_G2_IO4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as channel (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOCCR_G2_IO4_B_0x0 = 0;
        /** @brief Gx_IOy used as channel */
    constexpr std::uint32_t TSC_IOCCR_G2_IO4_B_0x1 = 1;

    /** @brief Gx_IOy channel mode These bits are set and cleared by software to configure the Gx_IOy as a channel I/O. Note: These bits must not be modified when an acquisition is ongoing. Note: During the acquisition phase and even if the TSC peripheral alternate function is not enabled, as soon as the TSC_IOCCR bit is set, the corresponding GPIO analog switch is automatically controlled by the touch sensing controller. */
    using TSC_IOCCR_G3_IO1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as channel (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOCCR_G3_IO1_B_0x0 = 0;
        /** @brief Gx_IOy used as channel */
    constexpr std::uint32_t TSC_IOCCR_G3_IO1_B_0x1 = 1;

    /** @brief Gx_IOy channel mode These bits are set and cleared by software to configure the Gx_IOy as a channel I/O. Note: These bits must not be modified when an acquisition is ongoing. Note: During the acquisition phase and even if the TSC peripheral alternate function is not enabled, as soon as the TSC_IOCCR bit is set, the corresponding GPIO analog switch is automatically controlled by the touch sensing controller. */
    using TSC_IOCCR_G3_IO2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as channel (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOCCR_G3_IO2_B_0x0 = 0;
        /** @brief Gx_IOy used as channel */
    constexpr std::uint32_t TSC_IOCCR_G3_IO2_B_0x1 = 1;

    /** @brief Gx_IOy channel mode These bits are set and cleared by software to configure the Gx_IOy as a channel I/O. Note: These bits must not be modified when an acquisition is ongoing. Note: During the acquisition phase and even if the TSC peripheral alternate function is not enabled, as soon as the TSC_IOCCR bit is set, the corresponding GPIO analog switch is automatically controlled by the touch sensing controller. */
    using TSC_IOCCR_G3_IO3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as channel (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOCCR_G3_IO3_B_0x0 = 0;
        /** @brief Gx_IOy used as channel */
    constexpr std::uint32_t TSC_IOCCR_G3_IO3_B_0x1 = 1;

    /** @brief Gx_IOy channel mode These bits are set and cleared by software to configure the Gx_IOy as a channel I/O. Note: These bits must not be modified when an acquisition is ongoing. Note: During the acquisition phase and even if the TSC peripheral alternate function is not enabled, as soon as the TSC_IOCCR bit is set, the corresponding GPIO analog switch is automatically controlled by the touch sensing controller. */
    using TSC_IOCCR_G3_IO4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as channel (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOCCR_G3_IO4_B_0x0 = 0;
        /** @brief Gx_IOy used as channel */
    constexpr std::uint32_t TSC_IOCCR_G3_IO4_B_0x1 = 1;

    /** @brief Gx_IOy channel mode These bits are set and cleared by software to configure the Gx_IOy as a channel I/O. Note: These bits must not be modified when an acquisition is ongoing. Note: During the acquisition phase and even if the TSC peripheral alternate function is not enabled, as soon as the TSC_IOCCR bit is set, the corresponding GPIO analog switch is automatically controlled by the touch sensing controller. */
    using TSC_IOCCR_G4_IO1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as channel (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOCCR_G4_IO1_B_0x0 = 0;
        /** @brief Gx_IOy used as channel */
    constexpr std::uint32_t TSC_IOCCR_G4_IO1_B_0x1 = 1;

    /** @brief Gx_IOy channel mode These bits are set and cleared by software to configure the Gx_IOy as a channel I/O. Note: These bits must not be modified when an acquisition is ongoing. Note: During the acquisition phase and even if the TSC peripheral alternate function is not enabled, as soon as the TSC_IOCCR bit is set, the corresponding GPIO analog switch is automatically controlled by the touch sensing controller. */
    using TSC_IOCCR_G4_IO2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as channel (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOCCR_G4_IO2_B_0x0 = 0;
        /** @brief Gx_IOy used as channel */
    constexpr std::uint32_t TSC_IOCCR_G4_IO2_B_0x1 = 1;

    /** @brief Gx_IOy channel mode These bits are set and cleared by software to configure the Gx_IOy as a channel I/O. Note: These bits must not be modified when an acquisition is ongoing. Note: During the acquisition phase and even if the TSC peripheral alternate function is not enabled, as soon as the TSC_IOCCR bit is set, the corresponding GPIO analog switch is automatically controlled by the touch sensing controller. */
    using TSC_IOCCR_G4_IO3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as channel (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOCCR_G4_IO3_B_0x0 = 0;
        /** @brief Gx_IOy used as channel */
    constexpr std::uint32_t TSC_IOCCR_G4_IO3_B_0x1 = 1;

    /** @brief Gx_IOy channel mode These bits are set and cleared by software to configure the Gx_IOy as a channel I/O. Note: These bits must not be modified when an acquisition is ongoing. Note: During the acquisition phase and even if the TSC peripheral alternate function is not enabled, as soon as the TSC_IOCCR bit is set, the corresponding GPIO analog switch is automatically controlled by the touch sensing controller. */
    using TSC_IOCCR_G4_IO4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as channel (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOCCR_G4_IO4_B_0x0 = 0;
        /** @brief Gx_IOy used as channel */
    constexpr std::uint32_t TSC_IOCCR_G4_IO4_B_0x1 = 1;

    /** @brief Gx_IOy channel mode These bits are set and cleared by software to configure the Gx_IOy as a channel I/O. Note: These bits must not be modified when an acquisition is ongoing. Note: During the acquisition phase and even if the TSC peripheral alternate function is not enabled, as soon as the TSC_IOCCR bit is set, the corresponding GPIO analog switch is automatically controlled by the touch sensing controller. */
    using TSC_IOCCR_G5_IO1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as channel (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOCCR_G5_IO1_B_0x0 = 0;
        /** @brief Gx_IOy used as channel */
    constexpr std::uint32_t TSC_IOCCR_G5_IO1_B_0x1 = 1;

    /** @brief Gx_IOy channel mode These bits are set and cleared by software to configure the Gx_IOy as a channel I/O. Note: These bits must not be modified when an acquisition is ongoing. Note: During the acquisition phase and even if the TSC peripheral alternate function is not enabled, as soon as the TSC_IOCCR bit is set, the corresponding GPIO analog switch is automatically controlled by the touch sensing controller. */
    using TSC_IOCCR_G5_IO2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as channel (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOCCR_G5_IO2_B_0x0 = 0;
        /** @brief Gx_IOy used as channel */
    constexpr std::uint32_t TSC_IOCCR_G5_IO2_B_0x1 = 1;

    /** @brief Gx_IOy channel mode These bits are set and cleared by software to configure the Gx_IOy as a channel I/O. Note: These bits must not be modified when an acquisition is ongoing. Note: During the acquisition phase and even if the TSC peripheral alternate function is not enabled, as soon as the TSC_IOCCR bit is set, the corresponding GPIO analog switch is automatically controlled by the touch sensing controller. */
    using TSC_IOCCR_G5_IO3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as channel (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOCCR_G5_IO3_B_0x0 = 0;
        /** @brief Gx_IOy used as channel */
    constexpr std::uint32_t TSC_IOCCR_G5_IO3_B_0x1 = 1;

    /** @brief Gx_IOy channel mode These bits are set and cleared by software to configure the Gx_IOy as a channel I/O. Note: These bits must not be modified when an acquisition is ongoing. Note: During the acquisition phase and even if the TSC peripheral alternate function is not enabled, as soon as the TSC_IOCCR bit is set, the corresponding GPIO analog switch is automatically controlled by the touch sensing controller. */
    using TSC_IOCCR_G5_IO4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as channel (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOCCR_G5_IO4_B_0x0 = 0;
        /** @brief Gx_IOy used as channel */
    constexpr std::uint32_t TSC_IOCCR_G5_IO4_B_0x1 = 1;

    /** @brief Gx_IOy channel mode These bits are set and cleared by software to configure the Gx_IOy as a channel I/O. Note: These bits must not be modified when an acquisition is ongoing. Note: During the acquisition phase and even if the TSC peripheral alternate function is not enabled, as soon as the TSC_IOCCR bit is set, the corresponding GPIO analog switch is automatically controlled by the touch sensing controller. */
    using TSC_IOCCR_G6_IO1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as channel (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOCCR_G6_IO1_B_0x0 = 0;
        /** @brief Gx_IOy used as channel */
    constexpr std::uint32_t TSC_IOCCR_G6_IO1_B_0x1 = 1;

    /** @brief Gx_IOy channel mode These bits are set and cleared by software to configure the Gx_IOy as a channel I/O. Note: These bits must not be modified when an acquisition is ongoing. Note: During the acquisition phase and even if the TSC peripheral alternate function is not enabled, as soon as the TSC_IOCCR bit is set, the corresponding GPIO analog switch is automatically controlled by the touch sensing controller. */
    using TSC_IOCCR_G6_IO2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as channel (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOCCR_G6_IO2_B_0x0 = 0;
        /** @brief Gx_IOy used as channel */
    constexpr std::uint32_t TSC_IOCCR_G6_IO2_B_0x1 = 1;

    /** @brief Gx_IOy channel mode These bits are set and cleared by software to configure the Gx_IOy as a channel I/O. Note: These bits must not be modified when an acquisition is ongoing. Note: During the acquisition phase and even if the TSC peripheral alternate function is not enabled, as soon as the TSC_IOCCR bit is set, the corresponding GPIO analog switch is automatically controlled by the touch sensing controller. */
    using TSC_IOCCR_G6_IO3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as channel (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOCCR_G6_IO3_B_0x0 = 0;
        /** @brief Gx_IOy used as channel */
    constexpr std::uint32_t TSC_IOCCR_G6_IO3_B_0x1 = 1;

    /** @brief Gx_IOy channel mode These bits are set and cleared by software to configure the Gx_IOy as a channel I/O. Note: These bits must not be modified when an acquisition is ongoing. Note: During the acquisition phase and even if the TSC peripheral alternate function is not enabled, as soon as the TSC_IOCCR bit is set, the corresponding GPIO analog switch is automatically controlled by the touch sensing controller. */
    using TSC_IOCCR_G6_IO4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as channel (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOCCR_G6_IO4_B_0x0 = 0;
        /** @brief Gx_IOy used as channel */
    constexpr std::uint32_t TSC_IOCCR_G6_IO4_B_0x1 = 1;

    /** @brief TSC I/O group control status register */
    using TSC_IOGCSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog I/O group x enable These bits are set and cleared by software to enable/disable the acquisition (counter is counting) on the corresponding analog I/O group x. */
    using TSC_IOGCSR_G1E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Acquisition on analog I/O group x disabled (value: 0)
     *          - B_0x1: Acquisition on analog I/O group x enabled (value: 1)
     */
        /** @brief Acquisition on analog I/O group x disabled */
    constexpr std::uint32_t TSC_IOGCSR_G1E_B_0x0 = 0;
        /** @brief Acquisition on analog I/O group x enabled */
    constexpr std::uint32_t TSC_IOGCSR_G1E_B_0x1 = 1;

    /** @brief Analog I/O group x enable These bits are set and cleared by software to enable/disable the acquisition (counter is counting) on the corresponding analog I/O group x. */
    using TSC_IOGCSR_G2E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Acquisition on analog I/O group x disabled (value: 0)
     *          - B_0x1: Acquisition on analog I/O group x enabled (value: 1)
     */
        /** @brief Acquisition on analog I/O group x disabled */
    constexpr std::uint32_t TSC_IOGCSR_G2E_B_0x0 = 0;
        /** @brief Acquisition on analog I/O group x enabled */
    constexpr std::uint32_t TSC_IOGCSR_G2E_B_0x1 = 1;

    /** @brief Analog I/O group x enable These bits are set and cleared by software to enable/disable the acquisition (counter is counting) on the corresponding analog I/O group x. */
    using TSC_IOGCSR_G3E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Acquisition on analog I/O group x disabled (value: 0)
     *          - B_0x1: Acquisition on analog I/O group x enabled (value: 1)
     */
        /** @brief Acquisition on analog I/O group x disabled */
    constexpr std::uint32_t TSC_IOGCSR_G3E_B_0x0 = 0;
        /** @brief Acquisition on analog I/O group x enabled */
    constexpr std::uint32_t TSC_IOGCSR_G3E_B_0x1 = 1;

    /** @brief Analog I/O group x enable These bits are set and cleared by software to enable/disable the acquisition (counter is counting) on the corresponding analog I/O group x. */
    using TSC_IOGCSR_G4E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Acquisition on analog I/O group x disabled (value: 0)
     *          - B_0x1: Acquisition on analog I/O group x enabled (value: 1)
     */
        /** @brief Acquisition on analog I/O group x disabled */
    constexpr std::uint32_t TSC_IOGCSR_G4E_B_0x0 = 0;
        /** @brief Acquisition on analog I/O group x enabled */
    constexpr std::uint32_t TSC_IOGCSR_G4E_B_0x1 = 1;

    /** @brief Analog I/O group x enable These bits are set and cleared by software to enable/disable the acquisition (counter is counting) on the corresponding analog I/O group x. */
    using TSC_IOGCSR_G5E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Acquisition on analog I/O group x disabled (value: 0)
     *          - B_0x1: Acquisition on analog I/O group x enabled (value: 1)
     */
        /** @brief Acquisition on analog I/O group x disabled */
    constexpr std::uint32_t TSC_IOGCSR_G5E_B_0x0 = 0;
        /** @brief Acquisition on analog I/O group x enabled */
    constexpr std::uint32_t TSC_IOGCSR_G5E_B_0x1 = 1;

    /** @brief Analog I/O group x enable These bits are set and cleared by software to enable/disable the acquisition (counter is counting) on the corresponding analog I/O group x. */
    using TSC_IOGCSR_G6E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Acquisition on analog I/O group x disabled (value: 0)
     *          - B_0x1: Acquisition on analog I/O group x enabled (value: 1)
     */
        /** @brief Acquisition on analog I/O group x disabled */
    constexpr std::uint32_t TSC_IOGCSR_G6E_B_0x0 = 0;
        /** @brief Acquisition on analog I/O group x enabled */
    constexpr std::uint32_t TSC_IOGCSR_G6E_B_0x1 = 1;

    /** @brief Analog I/O group x status These bits are set by hardware when the acquisition on the corresponding enabled analog I/O group x is complete. They are cleared by hardware when a new acquisition is started. Note: When a max count error is detected the remaining GxS bits of the enabled analog I/O groups are not set. */
    using TSC_IOGCSR_G1S = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Acquisition on analog I/O group x is ongoing or not started (value: 0)
     *          - B_0x1: Acquisition on analog I/O group x is complete (value: 1)
     */
        /** @brief Acquisition on analog I/O group x is ongoing or not started */
    constexpr std::uint32_t TSC_IOGCSR_G1S_B_0x0 = 0;
        /** @brief Acquisition on analog I/O group x is complete */
    constexpr std::uint32_t TSC_IOGCSR_G1S_B_0x1 = 1;

    /** @brief Analog I/O group x status These bits are set by hardware when the acquisition on the corresponding enabled analog I/O group x is complete. They are cleared by hardware when a new acquisition is started. Note: When a max count error is detected the remaining GxS bits of the enabled analog I/O groups are not set. */
    using TSC_IOGCSR_G2S = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Acquisition on analog I/O group x is ongoing or not started (value: 0)
     *          - B_0x1: Acquisition on analog I/O group x is complete (value: 1)
     */
        /** @brief Acquisition on analog I/O group x is ongoing or not started */
    constexpr std::uint32_t TSC_IOGCSR_G2S_B_0x0 = 0;
        /** @brief Acquisition on analog I/O group x is complete */
    constexpr std::uint32_t TSC_IOGCSR_G2S_B_0x1 = 1;

    /** @brief Analog I/O group x status These bits are set by hardware when the acquisition on the corresponding enabled analog I/O group x is complete. They are cleared by hardware when a new acquisition is started. Note: When a max count error is detected the remaining GxS bits of the enabled analog I/O groups are not set. */
    using TSC_IOGCSR_G3S = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Acquisition on analog I/O group x is ongoing or not started (value: 0)
     *          - B_0x1: Acquisition on analog I/O group x is complete (value: 1)
     */
        /** @brief Acquisition on analog I/O group x is ongoing or not started */
    constexpr std::uint32_t TSC_IOGCSR_G3S_B_0x0 = 0;
        /** @brief Acquisition on analog I/O group x is complete */
    constexpr std::uint32_t TSC_IOGCSR_G3S_B_0x1 = 1;

    /** @brief Analog I/O group x status These bits are set by hardware when the acquisition on the corresponding enabled analog I/O group x is complete. They are cleared by hardware when a new acquisition is started. Note: When a max count error is detected the remaining GxS bits of the enabled analog I/O groups are not set. */
    using TSC_IOGCSR_G4S = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Acquisition on analog I/O group x is ongoing or not started (value: 0)
     *          - B_0x1: Acquisition on analog I/O group x is complete (value: 1)
     */
        /** @brief Acquisition on analog I/O group x is ongoing or not started */
    constexpr std::uint32_t TSC_IOGCSR_G4S_B_0x0 = 0;
        /** @brief Acquisition on analog I/O group x is complete */
    constexpr std::uint32_t TSC_IOGCSR_G4S_B_0x1 = 1;

    /** @brief Analog I/O group x status These bits are set by hardware when the acquisition on the corresponding enabled analog I/O group x is complete. They are cleared by hardware when a new acquisition is started. Note: When a max count error is detected the remaining GxS bits of the enabled analog I/O groups are not set. */
    using TSC_IOGCSR_G5S = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Acquisition on analog I/O group x is ongoing or not started (value: 0)
     *          - B_0x1: Acquisition on analog I/O group x is complete (value: 1)
     */
        /** @brief Acquisition on analog I/O group x is ongoing or not started */
    constexpr std::uint32_t TSC_IOGCSR_G5S_B_0x0 = 0;
        /** @brief Acquisition on analog I/O group x is complete */
    constexpr std::uint32_t TSC_IOGCSR_G5S_B_0x1 = 1;

    /** @brief Analog I/O group x status These bits are set by hardware when the acquisition on the corresponding enabled analog I/O group x is complete. They are cleared by hardware when a new acquisition is started. Note: When a max count error is detected the remaining GxS bits of the enabled analog I/O groups are not set. */
    using TSC_IOGCSR_G6S = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Acquisition on analog I/O group x is ongoing or not started (value: 0)
     *          - B_0x1: Acquisition on analog I/O group x is complete (value: 1)
     */
        /** @brief Acquisition on analog I/O group x is ongoing or not started */
    constexpr std::uint32_t TSC_IOGCSR_G6S_B_0x0 = 0;
        /** @brief Acquisition on analog I/O group x is complete */
    constexpr std::uint32_t TSC_IOGCSR_G6S_B_0x1 = 1;

    /** @brief TSC I/O group 1 counter register */
    using TSC_IOG1CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Counter value These bits represent the number of charge transfer cycles generated on the analog I/O group x to complete its acquisition (voltage across CsubS/sub has reached the threshold). */
    using TSC_IOG1CR_CNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TSC I/O group 2 counter register */
    using TSC_IOG2CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Counter value These bits represent the number of charge transfer cycles generated on the analog I/O group x to complete its acquisition (voltage across CsubS/sub has reached the threshold). */
    using TSC_IOG2CR_CNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TSC I/O group 3 counter register */
    using TSC_IOG3CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Counter value These bits represent the number of charge transfer cycles generated on the analog I/O group x to complete its acquisition (voltage across CsubS/sub has reached the threshold). */
    using TSC_IOG3CR_CNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TSC I/O group 4 counter register */
    using TSC_IOG4CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Counter value These bits represent the number of charge transfer cycles generated on the analog I/O group x to complete its acquisition (voltage across CsubS/sub has reached the threshold). */
    using TSC_IOG4CR_CNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TSC I/O group 5 counter register */
    using TSC_IOG5CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Counter value These bits represent the number of charge transfer cycles generated on the analog I/O group x to complete its acquisition (voltage across CsubS/sub has reached the threshold). */
    using TSC_IOG5CR_CNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TSC I/O group 6 counter register */
    using TSC_IOG6CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Counter value These bits represent the number of charge transfer cycles generated on the analog I/O group x to complete its acquisition (voltage across CsubS/sub has reached the threshold). */
    using TSC_IOG6CR_CNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
