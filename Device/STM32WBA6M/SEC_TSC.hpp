/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32WBA6M_SEC_TSC_HPP
#define EMBEDDED_PP_STM32WBA6M_SEC_TSC_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief TSC address block description */
namespace STM32WBA6M::SEC_TSC {

    /** @brief TSC control register */
    using TSC_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Touch sensing controller enable */
    using TSC_CR_TSCE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Touch sensing controller disabled (value: 0)
     *          - B_0x1: Touch sensing controller enabled (value: 1)
     */
        /** @brief Touch sensing controller disabled */
    constexpr std::uint32_t TSC_CR_TSCE_B_0x0 = 0;
        /** @brief Touch sensing controller enabled */
    constexpr std::uint32_t TSC_CR_TSCE_B_0x1 = 1;

    /** @brief Start a new acquisition */
    using TSC_CR_START = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Acquisition not started (value: 0)
     *          - B_0x1: Start a new acquisition (value: 1)
     */
        /** @brief Acquisition not started */
    constexpr std::uint32_t TSC_CR_START_B_0x0 = 0;
        /** @brief Start a new acquisition */
    constexpr std::uint32_t TSC_CR_START_B_0x1 = 1;

    /** @brief Acquisition mode */
    using TSC_CR_AM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal acquisition mode (acquisition starts as soon as START bit is set) (value: 0)
     *          - B_0x1: Synchronized acquisition mode (acquisition starts if START bit is set and when the selected signal is detected on the SYNC input pin) (value: 1)
     */
        /** @brief Normal acquisition mode (acquisition starts as soon as START bit is set) */
    constexpr std::uint32_t TSC_CR_AM_B_0x0 = 0;
        /** @brief Synchronized acquisition mode (acquisition starts if START bit is set and when the selected signal is detected on the SYNC input pin) */
    constexpr std::uint32_t TSC_CR_AM_B_0x1 = 1;

    /** @brief Synchronization pin polarity */
    using TSC_CR_SYNCPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling edge only (value: 0)
     *          - B_0x1: Rising edge and high level (value: 1)
     */
        /** @brief Falling edge only */
    constexpr std::uint32_t TSC_CR_SYNCPOL_B_0x0 = 0;
        /** @brief Rising edge and high level */
    constexpr std::uint32_t TSC_CR_SYNCPOL_B_0x1 = 1;

    /** @brief I/O Default mode */
    using TSC_CR_IODEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I/Os are forced to output push-pull low (value: 0)
     *          - B_0x1: I/Os are in input floating (value: 1)
     */
        /** @brief I/Os are forced to output push-pull low */
    constexpr std::uint32_t TSC_CR_IODEF_B_0x0 = 0;
        /** @brief I/Os are in input floating */
    constexpr std::uint32_t TSC_CR_IODEF_B_0x1 = 1;

    /** @brief Max count value */
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

    /** @brief Pulse generator prescaler */
    using TSC_CR_PGPSC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fless thansub HCLKless than/sub (value: 0)
     *          - B_0x1: fless thansub HCLKless than/sub /2 (value: 1)
     *          - B_0x2: fless thansub HCLKless than/sub /4 (value: 2)
     *          - B_0x3: fless thansub HCLKless than/sub /8 (value: 3)
     *          - B_0x4: fless thansub HCLKless than/sub /16 (value: 4)
     *          - B_0x5: fless thansub HCLKless than/sub /32 (value: 5)
     *          - B_0x6: fless thansub HCLKless than/sub /64 (value: 6)
     *          - B_0x7: fless thansub HCLKless than/sub /128 (value: 7)
     */
        /** @brief fless thansub HCLKless than/sub */
    constexpr std::uint32_t TSC_CR_PGPSC_B_0x0 = 0;
        /** @brief fless thansub HCLKless than/sub /2 */
    constexpr std::uint32_t TSC_CR_PGPSC_B_0x1 = 1;
        /** @brief fless thansub HCLKless than/sub /4 */
    constexpr std::uint32_t TSC_CR_PGPSC_B_0x2 = 2;
        /** @brief fless thansub HCLKless than/sub /8 */
    constexpr std::uint32_t TSC_CR_PGPSC_B_0x3 = 3;
        /** @brief fless thansub HCLKless than/sub /16 */
    constexpr std::uint32_t TSC_CR_PGPSC_B_0x4 = 4;
        /** @brief fless thansub HCLKless than/sub /32 */
    constexpr std::uint32_t TSC_CR_PGPSC_B_0x5 = 5;
        /** @brief fless thansub HCLKless than/sub /64 */
    constexpr std::uint32_t TSC_CR_PGPSC_B_0x6 = 6;
        /** @brief fless thansub HCLKless than/sub /128 */
    constexpr std::uint32_t TSC_CR_PGPSC_B_0x7 = 7;

    /** @brief Spread spectrum prescaler */
    using TSC_CR_SSPSC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fless thansub HCLKless than/sub (value: 0)
     *          - B_0x1: fless thansub HCLKless than/sub /2 (value: 1)
     */
        /** @brief fless thansub HCLKless than/sub */
    constexpr std::uint32_t TSC_CR_SSPSC_B_0x0 = 0;
        /** @brief fless thansub HCLKless than/sub /2 */
    constexpr std::uint32_t TSC_CR_SSPSC_B_0x1 = 1;

    /** @brief Spread spectrum enable */
    using TSC_CR_SSE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Spread spectrum disabled (value: 0)
     *          - B_0x1: Spread spectrum enabled (value: 1)
     */
        /** @brief Spread spectrum disabled */
    constexpr std::uint32_t TSC_CR_SSE_B_0x0 = 0;
        /** @brief Spread spectrum enabled */
    constexpr std::uint32_t TSC_CR_SSE_B_0x1 = 1;

    /** @brief Spread spectrum deviation */
    using TSC_CR_SSD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1x tless thansub SSCLKless than/sub (value: 0)
     *          - B_0x1: 2x tless thansub SSCLKless than/sub (value: 1)
     *          - B_0x7F: 128x tless thansub SSCLKless than/sub (value: 127)
     */
        /** @brief 1x tless thansub SSCLKless than/sub */
    constexpr std::uint32_t TSC_CR_SSD_B_0x0 = 0;
        /** @brief 2x tless thansub SSCLKless than/sub */
    constexpr std::uint32_t TSC_CR_SSD_B_0x1 = 1;
        /** @brief 128x tless thansub SSCLKless than/sub */
    constexpr std::uint32_t TSC_CR_SSD_B_0x7F = 127;

    /** @brief Charge transfer pulse low */
    using TSC_CR_CTPL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1x tless thansub PGCLKless than/sub (value: 0)
     *          - B_0x1: 2x tless thansub PGCLKless than/sub (value: 1)
     *          - B_0xF: 16x tless thansub PGCLKless than/sub (value: 15)
     */
        /** @brief 1x tless thansub PGCLKless than/sub */
    constexpr std::uint32_t TSC_CR_CTPL_B_0x0 = 0;
        /** @brief 2x tless thansub PGCLKless than/sub */
    constexpr std::uint32_t TSC_CR_CTPL_B_0x1 = 1;
        /** @brief 16x tless thansub PGCLKless than/sub */
    constexpr std::uint32_t TSC_CR_CTPL_B_0xF = 15;

    /** @brief Charge transfer pulse high */
    using TSC_CR_CTPH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1x tless thansub PGCLKless than/sub (value: 0)
     *          - B_0x1: 2x tless thansub PGCLKless than/sub (value: 1)
     *          - B_0xF: 16x tless thansub PGCLKless than/sub (value: 15)
     */
        /** @brief 1x tless thansub PGCLKless than/sub */
    constexpr std::uint32_t TSC_CR_CTPH_B_0x0 = 0;
        /** @brief 2x tless thansub PGCLKless than/sub */
    constexpr std::uint32_t TSC_CR_CTPH_B_0x1 = 1;
        /** @brief 16x tless thansub PGCLKless than/sub */
    constexpr std::uint32_t TSC_CR_CTPH_B_0xF = 15;

    /** @brief TSC interrupt enable register */
    using TSC_IER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of acquisition interrupt enable */
    using TSC_IER_EOAIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: End of acquisition interrupt disabled (value: 0)
     *          - B_0x1: End of acquisition interrupt enabled (value: 1)
     */
        /** @brief End of acquisition interrupt disabled */
    constexpr std::uint32_t TSC_IER_EOAIE_B_0x0 = 0;
        /** @brief End of acquisition interrupt enabled */
    constexpr std::uint32_t TSC_IER_EOAIE_B_0x1 = 1;

    /** @brief Max count error interrupt enable */
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
    /** @brief End of acquisition interrupt clear */
    using TSC_ICR_EOAIC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No effect (value: 0)
     *          - B_0x1: Clears the corresponding EOAF of the TSC_ISR register (value: 1)
     */
        /** @brief No effect */
    constexpr std::uint32_t TSC_ICR_EOAIC_B_0x0 = 0;
        /** @brief Clears the corresponding EOAF of the TSC_ISR register */
    constexpr std::uint32_t TSC_ICR_EOAIC_B_0x1 = 1;

    /** @brief Max count error interrupt clear */
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
    /** @brief End of acquisition flag */
    using TSC_ISR_EOAF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Acquisition is ongoing or not started (value: 0)
     *          - B_0x1: Acquisition is complete (value: 1)
     */
        /** @brief Acquisition is ongoing or not started */
    constexpr std::uint32_t TSC_ISR_EOAF_B_0x0 = 0;
        /** @brief Acquisition is complete */
    constexpr std::uint32_t TSC_ISR_EOAF_B_0x1 = 1;

    /** @brief Max count error flag */
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
    /** @brief Gx_IOy Schmitt trigger hysteresis mode */
    using TSC_IOHCR_G1_IO1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy Schmitt trigger hysteresis disabled (value: 0)
     *          - B_0x1: Gx_IOy Schmitt trigger hysteresis enabled (value: 1)
     */
        /** @brief Gx_IOy Schmitt trigger hysteresis disabled */
    constexpr std::uint32_t TSC_IOHCR_G1_IO1_B_0x0 = 0;
        /** @brief Gx_IOy Schmitt trigger hysteresis enabled */
    constexpr std::uint32_t TSC_IOHCR_G1_IO1_B_0x1 = 1;

    /** @brief Gx_IOy Schmitt trigger hysteresis mode */
    using TSC_IOHCR_G1_IO2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy Schmitt trigger hysteresis disabled (value: 0)
     *          - B_0x1: Gx_IOy Schmitt trigger hysteresis enabled (value: 1)
     */
        /** @brief Gx_IOy Schmitt trigger hysteresis disabled */
    constexpr std::uint32_t TSC_IOHCR_G1_IO2_B_0x0 = 0;
        /** @brief Gx_IOy Schmitt trigger hysteresis enabled */
    constexpr std::uint32_t TSC_IOHCR_G1_IO2_B_0x1 = 1;

    /** @brief Gx_IOy Schmitt trigger hysteresis mode */
    using TSC_IOHCR_G1_IO3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy Schmitt trigger hysteresis disabled (value: 0)
     *          - B_0x1: Gx_IOy Schmitt trigger hysteresis enabled (value: 1)
     */
        /** @brief Gx_IOy Schmitt trigger hysteresis disabled */
    constexpr std::uint32_t TSC_IOHCR_G1_IO3_B_0x0 = 0;
        /** @brief Gx_IOy Schmitt trigger hysteresis enabled */
    constexpr std::uint32_t TSC_IOHCR_G1_IO3_B_0x1 = 1;

    /** @brief Gx_IOy Schmitt trigger hysteresis mode */
    using TSC_IOHCR_G1_IO4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy Schmitt trigger hysteresis disabled (value: 0)
     *          - B_0x1: Gx_IOy Schmitt trigger hysteresis enabled (value: 1)
     */
        /** @brief Gx_IOy Schmitt trigger hysteresis disabled */
    constexpr std::uint32_t TSC_IOHCR_G1_IO4_B_0x0 = 0;
        /** @brief Gx_IOy Schmitt trigger hysteresis enabled */
    constexpr std::uint32_t TSC_IOHCR_G1_IO4_B_0x1 = 1;

    /** @brief Gx_IOy Schmitt trigger hysteresis mode */
    using TSC_IOHCR_G2_IO1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy Schmitt trigger hysteresis disabled (value: 0)
     *          - B_0x1: Gx_IOy Schmitt trigger hysteresis enabled (value: 1)
     */
        /** @brief Gx_IOy Schmitt trigger hysteresis disabled */
    constexpr std::uint32_t TSC_IOHCR_G2_IO1_B_0x0 = 0;
        /** @brief Gx_IOy Schmitt trigger hysteresis enabled */
    constexpr std::uint32_t TSC_IOHCR_G2_IO1_B_0x1 = 1;

    /** @brief Gx_IOy Schmitt trigger hysteresis mode */
    using TSC_IOHCR_G2_IO2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy Schmitt trigger hysteresis disabled (value: 0)
     *          - B_0x1: Gx_IOy Schmitt trigger hysteresis enabled (value: 1)
     */
        /** @brief Gx_IOy Schmitt trigger hysteresis disabled */
    constexpr std::uint32_t TSC_IOHCR_G2_IO2_B_0x0 = 0;
        /** @brief Gx_IOy Schmitt trigger hysteresis enabled */
    constexpr std::uint32_t TSC_IOHCR_G2_IO2_B_0x1 = 1;

    /** @brief Gx_IOy Schmitt trigger hysteresis mode */
    using TSC_IOHCR_G2_IO3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy Schmitt trigger hysteresis disabled (value: 0)
     *          - B_0x1: Gx_IOy Schmitt trigger hysteresis enabled (value: 1)
     */
        /** @brief Gx_IOy Schmitt trigger hysteresis disabled */
    constexpr std::uint32_t TSC_IOHCR_G2_IO3_B_0x0 = 0;
        /** @brief Gx_IOy Schmitt trigger hysteresis enabled */
    constexpr std::uint32_t TSC_IOHCR_G2_IO3_B_0x1 = 1;

    /** @brief Gx_IOy Schmitt trigger hysteresis mode */
    using TSC_IOHCR_G2_IO4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy Schmitt trigger hysteresis disabled (value: 0)
     *          - B_0x1: Gx_IOy Schmitt trigger hysteresis enabled (value: 1)
     */
        /** @brief Gx_IOy Schmitt trigger hysteresis disabled */
    constexpr std::uint32_t TSC_IOHCR_G2_IO4_B_0x0 = 0;
        /** @brief Gx_IOy Schmitt trigger hysteresis enabled */
    constexpr std::uint32_t TSC_IOHCR_G2_IO4_B_0x1 = 1;

    /** @brief Gx_IOy Schmitt trigger hysteresis mode */
    using TSC_IOHCR_G3_IO1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy Schmitt trigger hysteresis disabled (value: 0)
     *          - B_0x1: Gx_IOy Schmitt trigger hysteresis enabled (value: 1)
     */
        /** @brief Gx_IOy Schmitt trigger hysteresis disabled */
    constexpr std::uint32_t TSC_IOHCR_G3_IO1_B_0x0 = 0;
        /** @brief Gx_IOy Schmitt trigger hysteresis enabled */
    constexpr std::uint32_t TSC_IOHCR_G3_IO1_B_0x1 = 1;

    /** @brief Gx_IOy Schmitt trigger hysteresis mode */
    using TSC_IOHCR_G3_IO2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy Schmitt trigger hysteresis disabled (value: 0)
     *          - B_0x1: Gx_IOy Schmitt trigger hysteresis enabled (value: 1)
     */
        /** @brief Gx_IOy Schmitt trigger hysteresis disabled */
    constexpr std::uint32_t TSC_IOHCR_G3_IO2_B_0x0 = 0;
        /** @brief Gx_IOy Schmitt trigger hysteresis enabled */
    constexpr std::uint32_t TSC_IOHCR_G3_IO2_B_0x1 = 1;

    /** @brief Gx_IOy Schmitt trigger hysteresis mode */
    using TSC_IOHCR_G3_IO3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy Schmitt trigger hysteresis disabled (value: 0)
     *          - B_0x1: Gx_IOy Schmitt trigger hysteresis enabled (value: 1)
     */
        /** @brief Gx_IOy Schmitt trigger hysteresis disabled */
    constexpr std::uint32_t TSC_IOHCR_G3_IO3_B_0x0 = 0;
        /** @brief Gx_IOy Schmitt trigger hysteresis enabled */
    constexpr std::uint32_t TSC_IOHCR_G3_IO3_B_0x1 = 1;

    /** @brief Gx_IOy Schmitt trigger hysteresis mode */
    using TSC_IOHCR_G3_IO4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy Schmitt trigger hysteresis disabled (value: 0)
     *          - B_0x1: Gx_IOy Schmitt trigger hysteresis enabled (value: 1)
     */
        /** @brief Gx_IOy Schmitt trigger hysteresis disabled */
    constexpr std::uint32_t TSC_IOHCR_G3_IO4_B_0x0 = 0;
        /** @brief Gx_IOy Schmitt trigger hysteresis enabled */
    constexpr std::uint32_t TSC_IOHCR_G3_IO4_B_0x1 = 1;

    /** @brief Gx_IOy Schmitt trigger hysteresis mode */
    using TSC_IOHCR_G4_IO1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy Schmitt trigger hysteresis disabled (value: 0)
     *          - B_0x1: Gx_IOy Schmitt trigger hysteresis enabled (value: 1)
     */
        /** @brief Gx_IOy Schmitt trigger hysteresis disabled */
    constexpr std::uint32_t TSC_IOHCR_G4_IO1_B_0x0 = 0;
        /** @brief Gx_IOy Schmitt trigger hysteresis enabled */
    constexpr std::uint32_t TSC_IOHCR_G4_IO1_B_0x1 = 1;

    /** @brief Gx_IOy Schmitt trigger hysteresis mode */
    using TSC_IOHCR_G4_IO2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy Schmitt trigger hysteresis disabled (value: 0)
     *          - B_0x1: Gx_IOy Schmitt trigger hysteresis enabled (value: 1)
     */
        /** @brief Gx_IOy Schmitt trigger hysteresis disabled */
    constexpr std::uint32_t TSC_IOHCR_G4_IO2_B_0x0 = 0;
        /** @brief Gx_IOy Schmitt trigger hysteresis enabled */
    constexpr std::uint32_t TSC_IOHCR_G4_IO2_B_0x1 = 1;

    /** @brief Gx_IOy Schmitt trigger hysteresis mode */
    using TSC_IOHCR_G4_IO3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy Schmitt trigger hysteresis disabled (value: 0)
     *          - B_0x1: Gx_IOy Schmitt trigger hysteresis enabled (value: 1)
     */
        /** @brief Gx_IOy Schmitt trigger hysteresis disabled */
    constexpr std::uint32_t TSC_IOHCR_G4_IO3_B_0x0 = 0;
        /** @brief Gx_IOy Schmitt trigger hysteresis enabled */
    constexpr std::uint32_t TSC_IOHCR_G4_IO3_B_0x1 = 1;

    /** @brief Gx_IOy Schmitt trigger hysteresis mode */
    using TSC_IOHCR_G4_IO4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy Schmitt trigger hysteresis disabled (value: 0)
     *          - B_0x1: Gx_IOy Schmitt trigger hysteresis enabled (value: 1)
     */
        /** @brief Gx_IOy Schmitt trigger hysteresis disabled */
    constexpr std::uint32_t TSC_IOHCR_G4_IO4_B_0x0 = 0;
        /** @brief Gx_IOy Schmitt trigger hysteresis enabled */
    constexpr std::uint32_t TSC_IOHCR_G4_IO4_B_0x1 = 1;

    /** @brief Gx_IOy Schmitt trigger hysteresis mode */
    using TSC_IOHCR_G5_IO1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy Schmitt trigger hysteresis disabled (value: 0)
     *          - B_0x1: Gx_IOy Schmitt trigger hysteresis enabled (value: 1)
     */
        /** @brief Gx_IOy Schmitt trigger hysteresis disabled */
    constexpr std::uint32_t TSC_IOHCR_G5_IO1_B_0x0 = 0;
        /** @brief Gx_IOy Schmitt trigger hysteresis enabled */
    constexpr std::uint32_t TSC_IOHCR_G5_IO1_B_0x1 = 1;

    /** @brief Gx_IOy Schmitt trigger hysteresis mode */
    using TSC_IOHCR_G5_IO2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy Schmitt trigger hysteresis disabled (value: 0)
     *          - B_0x1: Gx_IOy Schmitt trigger hysteresis enabled (value: 1)
     */
        /** @brief Gx_IOy Schmitt trigger hysteresis disabled */
    constexpr std::uint32_t TSC_IOHCR_G5_IO2_B_0x0 = 0;
        /** @brief Gx_IOy Schmitt trigger hysteresis enabled */
    constexpr std::uint32_t TSC_IOHCR_G5_IO2_B_0x1 = 1;

    /** @brief Gx_IOy Schmitt trigger hysteresis mode */
    using TSC_IOHCR_G5_IO3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy Schmitt trigger hysteresis disabled (value: 0)
     *          - B_0x1: Gx_IOy Schmitt trigger hysteresis enabled (value: 1)
     */
        /** @brief Gx_IOy Schmitt trigger hysteresis disabled */
    constexpr std::uint32_t TSC_IOHCR_G5_IO3_B_0x0 = 0;
        /** @brief Gx_IOy Schmitt trigger hysteresis enabled */
    constexpr std::uint32_t TSC_IOHCR_G5_IO3_B_0x1 = 1;

    /** @brief Gx_IOy Schmitt trigger hysteresis mode */
    using TSC_IOHCR_G5_IO4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy Schmitt trigger hysteresis disabled (value: 0)
     *          - B_0x1: Gx_IOy Schmitt trigger hysteresis enabled (value: 1)
     */
        /** @brief Gx_IOy Schmitt trigger hysteresis disabled */
    constexpr std::uint32_t TSC_IOHCR_G5_IO4_B_0x0 = 0;
        /** @brief Gx_IOy Schmitt trigger hysteresis enabled */
    constexpr std::uint32_t TSC_IOHCR_G5_IO4_B_0x1 = 1;

    /** @brief Gx_IOy Schmitt trigger hysteresis mode */
    using TSC_IOHCR_G6_IO1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy Schmitt trigger hysteresis disabled (value: 0)
     *          - B_0x1: Gx_IOy Schmitt trigger hysteresis enabled (value: 1)
     */
        /** @brief Gx_IOy Schmitt trigger hysteresis disabled */
    constexpr std::uint32_t TSC_IOHCR_G6_IO1_B_0x0 = 0;
        /** @brief Gx_IOy Schmitt trigger hysteresis enabled */
    constexpr std::uint32_t TSC_IOHCR_G6_IO1_B_0x1 = 1;

    /** @brief Gx_IOy Schmitt trigger hysteresis mode */
    using TSC_IOHCR_G6_IO2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy Schmitt trigger hysteresis disabled (value: 0)
     *          - B_0x1: Gx_IOy Schmitt trigger hysteresis enabled (value: 1)
     */
        /** @brief Gx_IOy Schmitt trigger hysteresis disabled */
    constexpr std::uint32_t TSC_IOHCR_G6_IO2_B_0x0 = 0;
        /** @brief Gx_IOy Schmitt trigger hysteresis enabled */
    constexpr std::uint32_t TSC_IOHCR_G6_IO2_B_0x1 = 1;

    /** @brief Gx_IOy Schmitt trigger hysteresis mode */
    using TSC_IOHCR_G6_IO3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy Schmitt trigger hysteresis disabled (value: 0)
     *          - B_0x1: Gx_IOy Schmitt trigger hysteresis enabled (value: 1)
     */
        /** @brief Gx_IOy Schmitt trigger hysteresis disabled */
    constexpr std::uint32_t TSC_IOHCR_G6_IO3_B_0x0 = 0;
        /** @brief Gx_IOy Schmitt trigger hysteresis enabled */
    constexpr std::uint32_t TSC_IOHCR_G6_IO3_B_0x1 = 1;

    /** @brief Gx_IOy Schmitt trigger hysteresis mode */
    using TSC_IOHCR_G6_IO4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy Schmitt trigger hysteresis disabled (value: 0)
     *          - B_0x1: Gx_IOy Schmitt trigger hysteresis enabled (value: 1)
     */
        /** @brief Gx_IOy Schmitt trigger hysteresis disabled */
    constexpr std::uint32_t TSC_IOHCR_G6_IO4_B_0x0 = 0;
        /** @brief Gx_IOy Schmitt trigger hysteresis enabled */
    constexpr std::uint32_t TSC_IOHCR_G6_IO4_B_0x1 = 1;

    /** @brief Gx_IOy Schmitt trigger hysteresis mode */
    using TSC_IOHCR_G7_IO1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy Schmitt trigger hysteresis disabled (value: 0)
     *          - B_0x1: Gx_IOy Schmitt trigger hysteresis enabled (value: 1)
     */
        /** @brief Gx_IOy Schmitt trigger hysteresis disabled */
    constexpr std::uint32_t TSC_IOHCR_G7_IO1_B_0x0 = 0;
        /** @brief Gx_IOy Schmitt trigger hysteresis enabled */
    constexpr std::uint32_t TSC_IOHCR_G7_IO1_B_0x1 = 1;

    /** @brief Gx_IOy Schmitt trigger hysteresis mode */
    using TSC_IOHCR_G7_IO2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy Schmitt trigger hysteresis disabled (value: 0)
     *          - B_0x1: Gx_IOy Schmitt trigger hysteresis enabled (value: 1)
     */
        /** @brief Gx_IOy Schmitt trigger hysteresis disabled */
    constexpr std::uint32_t TSC_IOHCR_G7_IO2_B_0x0 = 0;
        /** @brief Gx_IOy Schmitt trigger hysteresis enabled */
    constexpr std::uint32_t TSC_IOHCR_G7_IO2_B_0x1 = 1;

    /** @brief Gx_IOy Schmitt trigger hysteresis mode */
    using TSC_IOHCR_G7_IO3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy Schmitt trigger hysteresis disabled (value: 0)
     *          - B_0x1: Gx_IOy Schmitt trigger hysteresis enabled (value: 1)
     */
        /** @brief Gx_IOy Schmitt trigger hysteresis disabled */
    constexpr std::uint32_t TSC_IOHCR_G7_IO3_B_0x0 = 0;
        /** @brief Gx_IOy Schmitt trigger hysteresis enabled */
    constexpr std::uint32_t TSC_IOHCR_G7_IO3_B_0x1 = 1;

    /** @brief Gx_IOy Schmitt trigger hysteresis mode */
    using TSC_IOHCR_G7_IO4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy Schmitt trigger hysteresis disabled (value: 0)
     *          - B_0x1: Gx_IOy Schmitt trigger hysteresis enabled (value: 1)
     */
        /** @brief Gx_IOy Schmitt trigger hysteresis disabled */
    constexpr std::uint32_t TSC_IOHCR_G7_IO4_B_0x0 = 0;
        /** @brief Gx_IOy Schmitt trigger hysteresis enabled */
    constexpr std::uint32_t TSC_IOHCR_G7_IO4_B_0x1 = 1;

    /** @brief Gx_IOy Schmitt trigger hysteresis mode */
    using TSC_IOHCR_G8_IO1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy Schmitt trigger hysteresis disabled (value: 0)
     *          - B_0x1: Gx_IOy Schmitt trigger hysteresis enabled (value: 1)
     */
        /** @brief Gx_IOy Schmitt trigger hysteresis disabled */
    constexpr std::uint32_t TSC_IOHCR_G8_IO1_B_0x0 = 0;
        /** @brief Gx_IOy Schmitt trigger hysteresis enabled */
    constexpr std::uint32_t TSC_IOHCR_G8_IO1_B_0x1 = 1;

    /** @brief Gx_IOy Schmitt trigger hysteresis mode */
    using TSC_IOHCR_G8_IO2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy Schmitt trigger hysteresis disabled (value: 0)
     *          - B_0x1: Gx_IOy Schmitt trigger hysteresis enabled (value: 1)
     */
        /** @brief Gx_IOy Schmitt trigger hysteresis disabled */
    constexpr std::uint32_t TSC_IOHCR_G8_IO2_B_0x0 = 0;
        /** @brief Gx_IOy Schmitt trigger hysteresis enabled */
    constexpr std::uint32_t TSC_IOHCR_G8_IO2_B_0x1 = 1;

    /** @brief Gx_IOy Schmitt trigger hysteresis mode */
    using TSC_IOHCR_G8_IO3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy Schmitt trigger hysteresis disabled (value: 0)
     *          - B_0x1: Gx_IOy Schmitt trigger hysteresis enabled (value: 1)
     */
        /** @brief Gx_IOy Schmitt trigger hysteresis disabled */
    constexpr std::uint32_t TSC_IOHCR_G8_IO3_B_0x0 = 0;
        /** @brief Gx_IOy Schmitt trigger hysteresis enabled */
    constexpr std::uint32_t TSC_IOHCR_G8_IO3_B_0x1 = 1;

    /** @brief Gx_IOy Schmitt trigger hysteresis mode */
    using TSC_IOHCR_G8_IO4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy Schmitt trigger hysteresis disabled (value: 0)
     *          - B_0x1: Gx_IOy Schmitt trigger hysteresis enabled (value: 1)
     */
        /** @brief Gx_IOy Schmitt trigger hysteresis disabled */
    constexpr std::uint32_t TSC_IOHCR_G8_IO4_B_0x0 = 0;
        /** @brief Gx_IOy Schmitt trigger hysteresis enabled */
    constexpr std::uint32_t TSC_IOHCR_G8_IO4_B_0x1 = 1;

    /** @brief TSC I/O analog switch control register */
    using TSC_IOASCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Gx_IOy analog switch enable */
    using TSC_IOASCR_G1_IO1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy analog switch disabled (opened) (value: 0)
     *          - B_0x1: Gx_IOy analog switch enabled (closed) (value: 1)
     */
        /** @brief Gx_IOy analog switch disabled (opened) */
    constexpr std::uint32_t TSC_IOASCR_G1_IO1_B_0x0 = 0;
        /** @brief Gx_IOy analog switch enabled (closed) */
    constexpr std::uint32_t TSC_IOASCR_G1_IO1_B_0x1 = 1;

    /** @brief Gx_IOy analog switch enable */
    using TSC_IOASCR_G1_IO2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy analog switch disabled (opened) (value: 0)
     *          - B_0x1: Gx_IOy analog switch enabled (closed) (value: 1)
     */
        /** @brief Gx_IOy analog switch disabled (opened) */
    constexpr std::uint32_t TSC_IOASCR_G1_IO2_B_0x0 = 0;
        /** @brief Gx_IOy analog switch enabled (closed) */
    constexpr std::uint32_t TSC_IOASCR_G1_IO2_B_0x1 = 1;

    /** @brief Gx_IOy analog switch enable */
    using TSC_IOASCR_G1_IO3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy analog switch disabled (opened) (value: 0)
     *          - B_0x1: Gx_IOy analog switch enabled (closed) (value: 1)
     */
        /** @brief Gx_IOy analog switch disabled (opened) */
    constexpr std::uint32_t TSC_IOASCR_G1_IO3_B_0x0 = 0;
        /** @brief Gx_IOy analog switch enabled (closed) */
    constexpr std::uint32_t TSC_IOASCR_G1_IO3_B_0x1 = 1;

    /** @brief Gx_IOy analog switch enable */
    using TSC_IOASCR_G1_IO4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy analog switch disabled (opened) (value: 0)
     *          - B_0x1: Gx_IOy analog switch enabled (closed) (value: 1)
     */
        /** @brief Gx_IOy analog switch disabled (opened) */
    constexpr std::uint32_t TSC_IOASCR_G1_IO4_B_0x0 = 0;
        /** @brief Gx_IOy analog switch enabled (closed) */
    constexpr std::uint32_t TSC_IOASCR_G1_IO4_B_0x1 = 1;

    /** @brief Gx_IOy analog switch enable */
    using TSC_IOASCR_G2_IO1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy analog switch disabled (opened) (value: 0)
     *          - B_0x1: Gx_IOy analog switch enabled (closed) (value: 1)
     */
        /** @brief Gx_IOy analog switch disabled (opened) */
    constexpr std::uint32_t TSC_IOASCR_G2_IO1_B_0x0 = 0;
        /** @brief Gx_IOy analog switch enabled (closed) */
    constexpr std::uint32_t TSC_IOASCR_G2_IO1_B_0x1 = 1;

    /** @brief Gx_IOy analog switch enable */
    using TSC_IOASCR_G2_IO2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy analog switch disabled (opened) (value: 0)
     *          - B_0x1: Gx_IOy analog switch enabled (closed) (value: 1)
     */
        /** @brief Gx_IOy analog switch disabled (opened) */
    constexpr std::uint32_t TSC_IOASCR_G2_IO2_B_0x0 = 0;
        /** @brief Gx_IOy analog switch enabled (closed) */
    constexpr std::uint32_t TSC_IOASCR_G2_IO2_B_0x1 = 1;

    /** @brief Gx_IOy analog switch enable */
    using TSC_IOASCR_G2_IO3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy analog switch disabled (opened) (value: 0)
     *          - B_0x1: Gx_IOy analog switch enabled (closed) (value: 1)
     */
        /** @brief Gx_IOy analog switch disabled (opened) */
    constexpr std::uint32_t TSC_IOASCR_G2_IO3_B_0x0 = 0;
        /** @brief Gx_IOy analog switch enabled (closed) */
    constexpr std::uint32_t TSC_IOASCR_G2_IO3_B_0x1 = 1;

    /** @brief Gx_IOy analog switch enable */
    using TSC_IOASCR_G2_IO4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy analog switch disabled (opened) (value: 0)
     *          - B_0x1: Gx_IOy analog switch enabled (closed) (value: 1)
     */
        /** @brief Gx_IOy analog switch disabled (opened) */
    constexpr std::uint32_t TSC_IOASCR_G2_IO4_B_0x0 = 0;
        /** @brief Gx_IOy analog switch enabled (closed) */
    constexpr std::uint32_t TSC_IOASCR_G2_IO4_B_0x1 = 1;

    /** @brief Gx_IOy analog switch enable */
    using TSC_IOASCR_G3_IO1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy analog switch disabled (opened) (value: 0)
     *          - B_0x1: Gx_IOy analog switch enabled (closed) (value: 1)
     */
        /** @brief Gx_IOy analog switch disabled (opened) */
    constexpr std::uint32_t TSC_IOASCR_G3_IO1_B_0x0 = 0;
        /** @brief Gx_IOy analog switch enabled (closed) */
    constexpr std::uint32_t TSC_IOASCR_G3_IO1_B_0x1 = 1;

    /** @brief Gx_IOy analog switch enable */
    using TSC_IOASCR_G3_IO2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy analog switch disabled (opened) (value: 0)
     *          - B_0x1: Gx_IOy analog switch enabled (closed) (value: 1)
     */
        /** @brief Gx_IOy analog switch disabled (opened) */
    constexpr std::uint32_t TSC_IOASCR_G3_IO2_B_0x0 = 0;
        /** @brief Gx_IOy analog switch enabled (closed) */
    constexpr std::uint32_t TSC_IOASCR_G3_IO2_B_0x1 = 1;

    /** @brief Gx_IOy analog switch enable */
    using TSC_IOASCR_G3_IO3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy analog switch disabled (opened) (value: 0)
     *          - B_0x1: Gx_IOy analog switch enabled (closed) (value: 1)
     */
        /** @brief Gx_IOy analog switch disabled (opened) */
    constexpr std::uint32_t TSC_IOASCR_G3_IO3_B_0x0 = 0;
        /** @brief Gx_IOy analog switch enabled (closed) */
    constexpr std::uint32_t TSC_IOASCR_G3_IO3_B_0x1 = 1;

    /** @brief Gx_IOy analog switch enable */
    using TSC_IOASCR_G3_IO4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy analog switch disabled (opened) (value: 0)
     *          - B_0x1: Gx_IOy analog switch enabled (closed) (value: 1)
     */
        /** @brief Gx_IOy analog switch disabled (opened) */
    constexpr std::uint32_t TSC_IOASCR_G3_IO4_B_0x0 = 0;
        /** @brief Gx_IOy analog switch enabled (closed) */
    constexpr std::uint32_t TSC_IOASCR_G3_IO4_B_0x1 = 1;

    /** @brief Gx_IOy analog switch enable */
    using TSC_IOASCR_G4_IO1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy analog switch disabled (opened) (value: 0)
     *          - B_0x1: Gx_IOy analog switch enabled (closed) (value: 1)
     */
        /** @brief Gx_IOy analog switch disabled (opened) */
    constexpr std::uint32_t TSC_IOASCR_G4_IO1_B_0x0 = 0;
        /** @brief Gx_IOy analog switch enabled (closed) */
    constexpr std::uint32_t TSC_IOASCR_G4_IO1_B_0x1 = 1;

    /** @brief Gx_IOy analog switch enable */
    using TSC_IOASCR_G4_IO2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy analog switch disabled (opened) (value: 0)
     *          - B_0x1: Gx_IOy analog switch enabled (closed) (value: 1)
     */
        /** @brief Gx_IOy analog switch disabled (opened) */
    constexpr std::uint32_t TSC_IOASCR_G4_IO2_B_0x0 = 0;
        /** @brief Gx_IOy analog switch enabled (closed) */
    constexpr std::uint32_t TSC_IOASCR_G4_IO2_B_0x1 = 1;

    /** @brief Gx_IOy analog switch enable */
    using TSC_IOASCR_G4_IO3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy analog switch disabled (opened) (value: 0)
     *          - B_0x1: Gx_IOy analog switch enabled (closed) (value: 1)
     */
        /** @brief Gx_IOy analog switch disabled (opened) */
    constexpr std::uint32_t TSC_IOASCR_G4_IO3_B_0x0 = 0;
        /** @brief Gx_IOy analog switch enabled (closed) */
    constexpr std::uint32_t TSC_IOASCR_G4_IO3_B_0x1 = 1;

    /** @brief Gx_IOy analog switch enable */
    using TSC_IOASCR_G4_IO4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy analog switch disabled (opened) (value: 0)
     *          - B_0x1: Gx_IOy analog switch enabled (closed) (value: 1)
     */
        /** @brief Gx_IOy analog switch disabled (opened) */
    constexpr std::uint32_t TSC_IOASCR_G4_IO4_B_0x0 = 0;
        /** @brief Gx_IOy analog switch enabled (closed) */
    constexpr std::uint32_t TSC_IOASCR_G4_IO4_B_0x1 = 1;

    /** @brief Gx_IOy analog switch enable */
    using TSC_IOASCR_G5_IO1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy analog switch disabled (opened) (value: 0)
     *          - B_0x1: Gx_IOy analog switch enabled (closed) (value: 1)
     */
        /** @brief Gx_IOy analog switch disabled (opened) */
    constexpr std::uint32_t TSC_IOASCR_G5_IO1_B_0x0 = 0;
        /** @brief Gx_IOy analog switch enabled (closed) */
    constexpr std::uint32_t TSC_IOASCR_G5_IO1_B_0x1 = 1;

    /** @brief Gx_IOy analog switch enable */
    using TSC_IOASCR_G5_IO2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy analog switch disabled (opened) (value: 0)
     *          - B_0x1: Gx_IOy analog switch enabled (closed) (value: 1)
     */
        /** @brief Gx_IOy analog switch disabled (opened) */
    constexpr std::uint32_t TSC_IOASCR_G5_IO2_B_0x0 = 0;
        /** @brief Gx_IOy analog switch enabled (closed) */
    constexpr std::uint32_t TSC_IOASCR_G5_IO2_B_0x1 = 1;

    /** @brief Gx_IOy analog switch enable */
    using TSC_IOASCR_G5_IO3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy analog switch disabled (opened) (value: 0)
     *          - B_0x1: Gx_IOy analog switch enabled (closed) (value: 1)
     */
        /** @brief Gx_IOy analog switch disabled (opened) */
    constexpr std::uint32_t TSC_IOASCR_G5_IO3_B_0x0 = 0;
        /** @brief Gx_IOy analog switch enabled (closed) */
    constexpr std::uint32_t TSC_IOASCR_G5_IO3_B_0x1 = 1;

    /** @brief Gx_IOy analog switch enable */
    using TSC_IOASCR_G5_IO4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy analog switch disabled (opened) (value: 0)
     *          - B_0x1: Gx_IOy analog switch enabled (closed) (value: 1)
     */
        /** @brief Gx_IOy analog switch disabled (opened) */
    constexpr std::uint32_t TSC_IOASCR_G5_IO4_B_0x0 = 0;
        /** @brief Gx_IOy analog switch enabled (closed) */
    constexpr std::uint32_t TSC_IOASCR_G5_IO4_B_0x1 = 1;

    /** @brief Gx_IOy analog switch enable */
    using TSC_IOASCR_G6_IO1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy analog switch disabled (opened) (value: 0)
     *          - B_0x1: Gx_IOy analog switch enabled (closed) (value: 1)
     */
        /** @brief Gx_IOy analog switch disabled (opened) */
    constexpr std::uint32_t TSC_IOASCR_G6_IO1_B_0x0 = 0;
        /** @brief Gx_IOy analog switch enabled (closed) */
    constexpr std::uint32_t TSC_IOASCR_G6_IO1_B_0x1 = 1;

    /** @brief Gx_IOy analog switch enable */
    using TSC_IOASCR_G6_IO2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy analog switch disabled (opened) (value: 0)
     *          - B_0x1: Gx_IOy analog switch enabled (closed) (value: 1)
     */
        /** @brief Gx_IOy analog switch disabled (opened) */
    constexpr std::uint32_t TSC_IOASCR_G6_IO2_B_0x0 = 0;
        /** @brief Gx_IOy analog switch enabled (closed) */
    constexpr std::uint32_t TSC_IOASCR_G6_IO2_B_0x1 = 1;

    /** @brief Gx_IOy analog switch enable */
    using TSC_IOASCR_G6_IO3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy analog switch disabled (opened) (value: 0)
     *          - B_0x1: Gx_IOy analog switch enabled (closed) (value: 1)
     */
        /** @brief Gx_IOy analog switch disabled (opened) */
    constexpr std::uint32_t TSC_IOASCR_G6_IO3_B_0x0 = 0;
        /** @brief Gx_IOy analog switch enabled (closed) */
    constexpr std::uint32_t TSC_IOASCR_G6_IO3_B_0x1 = 1;

    /** @brief Gx_IOy analog switch enable */
    using TSC_IOASCR_G6_IO4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy analog switch disabled (opened) (value: 0)
     *          - B_0x1: Gx_IOy analog switch enabled (closed) (value: 1)
     */
        /** @brief Gx_IOy analog switch disabled (opened) */
    constexpr std::uint32_t TSC_IOASCR_G6_IO4_B_0x0 = 0;
        /** @brief Gx_IOy analog switch enabled (closed) */
    constexpr std::uint32_t TSC_IOASCR_G6_IO4_B_0x1 = 1;

    /** @brief Gx_IOy analog switch enable */
    using TSC_IOASCR_G7_IO1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy analog switch disabled (opened) (value: 0)
     *          - B_0x1: Gx_IOy analog switch enabled (closed) (value: 1)
     */
        /** @brief Gx_IOy analog switch disabled (opened) */
    constexpr std::uint32_t TSC_IOASCR_G7_IO1_B_0x0 = 0;
        /** @brief Gx_IOy analog switch enabled (closed) */
    constexpr std::uint32_t TSC_IOASCR_G7_IO1_B_0x1 = 1;

    /** @brief Gx_IOy analog switch enable */
    using TSC_IOASCR_G7_IO2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy analog switch disabled (opened) (value: 0)
     *          - B_0x1: Gx_IOy analog switch enabled (closed) (value: 1)
     */
        /** @brief Gx_IOy analog switch disabled (opened) */
    constexpr std::uint32_t TSC_IOASCR_G7_IO2_B_0x0 = 0;
        /** @brief Gx_IOy analog switch enabled (closed) */
    constexpr std::uint32_t TSC_IOASCR_G7_IO2_B_0x1 = 1;

    /** @brief Gx_IOy analog switch enable */
    using TSC_IOASCR_G7_IO3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy analog switch disabled (opened) (value: 0)
     *          - B_0x1: Gx_IOy analog switch enabled (closed) (value: 1)
     */
        /** @brief Gx_IOy analog switch disabled (opened) */
    constexpr std::uint32_t TSC_IOASCR_G7_IO3_B_0x0 = 0;
        /** @brief Gx_IOy analog switch enabled (closed) */
    constexpr std::uint32_t TSC_IOASCR_G7_IO3_B_0x1 = 1;

    /** @brief Gx_IOy analog switch enable */
    using TSC_IOASCR_G7_IO4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy analog switch disabled (opened) (value: 0)
     *          - B_0x1: Gx_IOy analog switch enabled (closed) (value: 1)
     */
        /** @brief Gx_IOy analog switch disabled (opened) */
    constexpr std::uint32_t TSC_IOASCR_G7_IO4_B_0x0 = 0;
        /** @brief Gx_IOy analog switch enabled (closed) */
    constexpr std::uint32_t TSC_IOASCR_G7_IO4_B_0x1 = 1;

    /** @brief Gx_IOy analog switch enable */
    using TSC_IOASCR_G8_IO1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy analog switch disabled (opened) (value: 0)
     *          - B_0x1: Gx_IOy analog switch enabled (closed) (value: 1)
     */
        /** @brief Gx_IOy analog switch disabled (opened) */
    constexpr std::uint32_t TSC_IOASCR_G8_IO1_B_0x0 = 0;
        /** @brief Gx_IOy analog switch enabled (closed) */
    constexpr std::uint32_t TSC_IOASCR_G8_IO1_B_0x1 = 1;

    /** @brief Gx_IOy analog switch enable */
    using TSC_IOASCR_G8_IO2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy analog switch disabled (opened) (value: 0)
     *          - B_0x1: Gx_IOy analog switch enabled (closed) (value: 1)
     */
        /** @brief Gx_IOy analog switch disabled (opened) */
    constexpr std::uint32_t TSC_IOASCR_G8_IO2_B_0x0 = 0;
        /** @brief Gx_IOy analog switch enabled (closed) */
    constexpr std::uint32_t TSC_IOASCR_G8_IO2_B_0x1 = 1;

    /** @brief Gx_IOy analog switch enable */
    using TSC_IOASCR_G8_IO3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy analog switch disabled (opened) (value: 0)
     *          - B_0x1: Gx_IOy analog switch enabled (closed) (value: 1)
     */
        /** @brief Gx_IOy analog switch disabled (opened) */
    constexpr std::uint32_t TSC_IOASCR_G8_IO3_B_0x0 = 0;
        /** @brief Gx_IOy analog switch enabled (closed) */
    constexpr std::uint32_t TSC_IOASCR_G8_IO3_B_0x1 = 1;

    /** @brief Gx_IOy analog switch enable */
    using TSC_IOASCR_G8_IO4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy analog switch disabled (opened) (value: 0)
     *          - B_0x1: Gx_IOy analog switch enabled (closed) (value: 1)
     */
        /** @brief Gx_IOy analog switch disabled (opened) */
    constexpr std::uint32_t TSC_IOASCR_G8_IO4_B_0x0 = 0;
        /** @brief Gx_IOy analog switch enabled (closed) */
    constexpr std::uint32_t TSC_IOASCR_G8_IO4_B_0x1 = 1;

    /** @brief TSC I/O sampling control register */
    using TSC_IOSCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Gx_IOy sampling mode */
    using TSC_IOSCR_G1_IO1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as sampling capacitor (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOSCR_G1_IO1_B_0x0 = 0;
        /** @brief Gx_IOy used as sampling capacitor */
    constexpr std::uint32_t TSC_IOSCR_G1_IO1_B_0x1 = 1;

    /** @brief Gx_IOy sampling mode */
    using TSC_IOSCR_G1_IO2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as sampling capacitor (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOSCR_G1_IO2_B_0x0 = 0;
        /** @brief Gx_IOy used as sampling capacitor */
    constexpr std::uint32_t TSC_IOSCR_G1_IO2_B_0x1 = 1;

    /** @brief Gx_IOy sampling mode */
    using TSC_IOSCR_G1_IO3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as sampling capacitor (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOSCR_G1_IO3_B_0x0 = 0;
        /** @brief Gx_IOy used as sampling capacitor */
    constexpr std::uint32_t TSC_IOSCR_G1_IO3_B_0x1 = 1;

    /** @brief Gx_IOy sampling mode */
    using TSC_IOSCR_G1_IO4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as sampling capacitor (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOSCR_G1_IO4_B_0x0 = 0;
        /** @brief Gx_IOy used as sampling capacitor */
    constexpr std::uint32_t TSC_IOSCR_G1_IO4_B_0x1 = 1;

    /** @brief Gx_IOy sampling mode */
    using TSC_IOSCR_G2_IO1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as sampling capacitor (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOSCR_G2_IO1_B_0x0 = 0;
        /** @brief Gx_IOy used as sampling capacitor */
    constexpr std::uint32_t TSC_IOSCR_G2_IO1_B_0x1 = 1;

    /** @brief Gx_IOy sampling mode */
    using TSC_IOSCR_G2_IO2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as sampling capacitor (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOSCR_G2_IO2_B_0x0 = 0;
        /** @brief Gx_IOy used as sampling capacitor */
    constexpr std::uint32_t TSC_IOSCR_G2_IO2_B_0x1 = 1;

    /** @brief Gx_IOy sampling mode */
    using TSC_IOSCR_G2_IO3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as sampling capacitor (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOSCR_G2_IO3_B_0x0 = 0;
        /** @brief Gx_IOy used as sampling capacitor */
    constexpr std::uint32_t TSC_IOSCR_G2_IO3_B_0x1 = 1;

    /** @brief Gx_IOy sampling mode */
    using TSC_IOSCR_G2_IO4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as sampling capacitor (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOSCR_G2_IO4_B_0x0 = 0;
        /** @brief Gx_IOy used as sampling capacitor */
    constexpr std::uint32_t TSC_IOSCR_G2_IO4_B_0x1 = 1;

    /** @brief Gx_IOy sampling mode */
    using TSC_IOSCR_G3_IO1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as sampling capacitor (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOSCR_G3_IO1_B_0x0 = 0;
        /** @brief Gx_IOy used as sampling capacitor */
    constexpr std::uint32_t TSC_IOSCR_G3_IO1_B_0x1 = 1;

    /** @brief Gx_IOy sampling mode */
    using TSC_IOSCR_G3_IO2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as sampling capacitor (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOSCR_G3_IO2_B_0x0 = 0;
        /** @brief Gx_IOy used as sampling capacitor */
    constexpr std::uint32_t TSC_IOSCR_G3_IO2_B_0x1 = 1;

    /** @brief Gx_IOy sampling mode */
    using TSC_IOSCR_G3_IO3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as sampling capacitor (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOSCR_G3_IO3_B_0x0 = 0;
        /** @brief Gx_IOy used as sampling capacitor */
    constexpr std::uint32_t TSC_IOSCR_G3_IO3_B_0x1 = 1;

    /** @brief Gx_IOy sampling mode */
    using TSC_IOSCR_G3_IO4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as sampling capacitor (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOSCR_G3_IO4_B_0x0 = 0;
        /** @brief Gx_IOy used as sampling capacitor */
    constexpr std::uint32_t TSC_IOSCR_G3_IO4_B_0x1 = 1;

    /** @brief Gx_IOy sampling mode */
    using TSC_IOSCR_G4_IO1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as sampling capacitor (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOSCR_G4_IO1_B_0x0 = 0;
        /** @brief Gx_IOy used as sampling capacitor */
    constexpr std::uint32_t TSC_IOSCR_G4_IO1_B_0x1 = 1;

    /** @brief Gx_IOy sampling mode */
    using TSC_IOSCR_G4_IO2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as sampling capacitor (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOSCR_G4_IO2_B_0x0 = 0;
        /** @brief Gx_IOy used as sampling capacitor */
    constexpr std::uint32_t TSC_IOSCR_G4_IO2_B_0x1 = 1;

    /** @brief Gx_IOy sampling mode */
    using TSC_IOSCR_G4_IO3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as sampling capacitor (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOSCR_G4_IO3_B_0x0 = 0;
        /** @brief Gx_IOy used as sampling capacitor */
    constexpr std::uint32_t TSC_IOSCR_G4_IO3_B_0x1 = 1;

    /** @brief Gx_IOy sampling mode */
    using TSC_IOSCR_G4_IO4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as sampling capacitor (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOSCR_G4_IO4_B_0x0 = 0;
        /** @brief Gx_IOy used as sampling capacitor */
    constexpr std::uint32_t TSC_IOSCR_G4_IO4_B_0x1 = 1;

    /** @brief Gx_IOy sampling mode */
    using TSC_IOSCR_G5_IO1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as sampling capacitor (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOSCR_G5_IO1_B_0x0 = 0;
        /** @brief Gx_IOy used as sampling capacitor */
    constexpr std::uint32_t TSC_IOSCR_G5_IO1_B_0x1 = 1;

    /** @brief Gx_IOy sampling mode */
    using TSC_IOSCR_G5_IO2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as sampling capacitor (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOSCR_G5_IO2_B_0x0 = 0;
        /** @brief Gx_IOy used as sampling capacitor */
    constexpr std::uint32_t TSC_IOSCR_G5_IO2_B_0x1 = 1;

    /** @brief Gx_IOy sampling mode */
    using TSC_IOSCR_G5_IO3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as sampling capacitor (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOSCR_G5_IO3_B_0x0 = 0;
        /** @brief Gx_IOy used as sampling capacitor */
    constexpr std::uint32_t TSC_IOSCR_G5_IO3_B_0x1 = 1;

    /** @brief Gx_IOy sampling mode */
    using TSC_IOSCR_G5_IO4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as sampling capacitor (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOSCR_G5_IO4_B_0x0 = 0;
        /** @brief Gx_IOy used as sampling capacitor */
    constexpr std::uint32_t TSC_IOSCR_G5_IO4_B_0x1 = 1;

    /** @brief Gx_IOy sampling mode */
    using TSC_IOSCR_G6_IO1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as sampling capacitor (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOSCR_G6_IO1_B_0x0 = 0;
        /** @brief Gx_IOy used as sampling capacitor */
    constexpr std::uint32_t TSC_IOSCR_G6_IO1_B_0x1 = 1;

    /** @brief Gx_IOy sampling mode */
    using TSC_IOSCR_G6_IO2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as sampling capacitor (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOSCR_G6_IO2_B_0x0 = 0;
        /** @brief Gx_IOy used as sampling capacitor */
    constexpr std::uint32_t TSC_IOSCR_G6_IO2_B_0x1 = 1;

    /** @brief Gx_IOy sampling mode */
    using TSC_IOSCR_G6_IO3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as sampling capacitor (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOSCR_G6_IO3_B_0x0 = 0;
        /** @brief Gx_IOy used as sampling capacitor */
    constexpr std::uint32_t TSC_IOSCR_G6_IO3_B_0x1 = 1;

    /** @brief Gx_IOy sampling mode */
    using TSC_IOSCR_G6_IO4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as sampling capacitor (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOSCR_G6_IO4_B_0x0 = 0;
        /** @brief Gx_IOy used as sampling capacitor */
    constexpr std::uint32_t TSC_IOSCR_G6_IO4_B_0x1 = 1;

    /** @brief Gx_IOy sampling mode */
    using TSC_IOSCR_G7_IO1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as sampling capacitor (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOSCR_G7_IO1_B_0x0 = 0;
        /** @brief Gx_IOy used as sampling capacitor */
    constexpr std::uint32_t TSC_IOSCR_G7_IO1_B_0x1 = 1;

    /** @brief Gx_IOy sampling mode */
    using TSC_IOSCR_G7_IO2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as sampling capacitor (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOSCR_G7_IO2_B_0x0 = 0;
        /** @brief Gx_IOy used as sampling capacitor */
    constexpr std::uint32_t TSC_IOSCR_G7_IO2_B_0x1 = 1;

    /** @brief Gx_IOy sampling mode */
    using TSC_IOSCR_G7_IO3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as sampling capacitor (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOSCR_G7_IO3_B_0x0 = 0;
        /** @brief Gx_IOy used as sampling capacitor */
    constexpr std::uint32_t TSC_IOSCR_G7_IO3_B_0x1 = 1;

    /** @brief Gx_IOy sampling mode */
    using TSC_IOSCR_G7_IO4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as sampling capacitor (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOSCR_G7_IO4_B_0x0 = 0;
        /** @brief Gx_IOy used as sampling capacitor */
    constexpr std::uint32_t TSC_IOSCR_G7_IO4_B_0x1 = 1;

    /** @brief Gx_IOy sampling mode */
    using TSC_IOSCR_G8_IO1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as sampling capacitor (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOSCR_G8_IO1_B_0x0 = 0;
        /** @brief Gx_IOy used as sampling capacitor */
    constexpr std::uint32_t TSC_IOSCR_G8_IO1_B_0x1 = 1;

    /** @brief Gx_IOy sampling mode */
    using TSC_IOSCR_G8_IO2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as sampling capacitor (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOSCR_G8_IO2_B_0x0 = 0;
        /** @brief Gx_IOy used as sampling capacitor */
    constexpr std::uint32_t TSC_IOSCR_G8_IO2_B_0x1 = 1;

    /** @brief Gx_IOy sampling mode */
    using TSC_IOSCR_G8_IO3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as sampling capacitor (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOSCR_G8_IO3_B_0x0 = 0;
        /** @brief Gx_IOy used as sampling capacitor */
    constexpr std::uint32_t TSC_IOSCR_G8_IO3_B_0x1 = 1;

    /** @brief Gx_IOy sampling mode */
    using TSC_IOSCR_G8_IO4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as sampling capacitor (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOSCR_G8_IO4_B_0x0 = 0;
        /** @brief Gx_IOy used as sampling capacitor */
    constexpr std::uint32_t TSC_IOSCR_G8_IO4_B_0x1 = 1;

    /** @brief TSC I/O channel control register */
    using TSC_IOCCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Gx_IOy channel mode */
    using TSC_IOCCR_G1_IO1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as channel (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOCCR_G1_IO1_B_0x0 = 0;
        /** @brief Gx_IOy used as channel */
    constexpr std::uint32_t TSC_IOCCR_G1_IO1_B_0x1 = 1;

    /** @brief Gx_IOy channel mode */
    using TSC_IOCCR_G1_IO2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as channel (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOCCR_G1_IO2_B_0x0 = 0;
        /** @brief Gx_IOy used as channel */
    constexpr std::uint32_t TSC_IOCCR_G1_IO2_B_0x1 = 1;

    /** @brief Gx_IOy channel mode */
    using TSC_IOCCR_G1_IO3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as channel (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOCCR_G1_IO3_B_0x0 = 0;
        /** @brief Gx_IOy used as channel */
    constexpr std::uint32_t TSC_IOCCR_G1_IO3_B_0x1 = 1;

    /** @brief Gx_IOy channel mode */
    using TSC_IOCCR_G1_IO4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as channel (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOCCR_G1_IO4_B_0x0 = 0;
        /** @brief Gx_IOy used as channel */
    constexpr std::uint32_t TSC_IOCCR_G1_IO4_B_0x1 = 1;

    /** @brief Gx_IOy channel mode */
    using TSC_IOCCR_G2_IO1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as channel (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOCCR_G2_IO1_B_0x0 = 0;
        /** @brief Gx_IOy used as channel */
    constexpr std::uint32_t TSC_IOCCR_G2_IO1_B_0x1 = 1;

    /** @brief Gx_IOy channel mode */
    using TSC_IOCCR_G2_IO2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as channel (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOCCR_G2_IO2_B_0x0 = 0;
        /** @brief Gx_IOy used as channel */
    constexpr std::uint32_t TSC_IOCCR_G2_IO2_B_0x1 = 1;

    /** @brief Gx_IOy channel mode */
    using TSC_IOCCR_G2_IO3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as channel (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOCCR_G2_IO3_B_0x0 = 0;
        /** @brief Gx_IOy used as channel */
    constexpr std::uint32_t TSC_IOCCR_G2_IO3_B_0x1 = 1;

    /** @brief Gx_IOy channel mode */
    using TSC_IOCCR_G2_IO4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as channel (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOCCR_G2_IO4_B_0x0 = 0;
        /** @brief Gx_IOy used as channel */
    constexpr std::uint32_t TSC_IOCCR_G2_IO4_B_0x1 = 1;

    /** @brief Gx_IOy channel mode */
    using TSC_IOCCR_G3_IO1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as channel (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOCCR_G3_IO1_B_0x0 = 0;
        /** @brief Gx_IOy used as channel */
    constexpr std::uint32_t TSC_IOCCR_G3_IO1_B_0x1 = 1;

    /** @brief Gx_IOy channel mode */
    using TSC_IOCCR_G3_IO2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as channel (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOCCR_G3_IO2_B_0x0 = 0;
        /** @brief Gx_IOy used as channel */
    constexpr std::uint32_t TSC_IOCCR_G3_IO2_B_0x1 = 1;

    /** @brief Gx_IOy channel mode */
    using TSC_IOCCR_G3_IO3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as channel (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOCCR_G3_IO3_B_0x0 = 0;
        /** @brief Gx_IOy used as channel */
    constexpr std::uint32_t TSC_IOCCR_G3_IO3_B_0x1 = 1;

    /** @brief Gx_IOy channel mode */
    using TSC_IOCCR_G3_IO4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as channel (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOCCR_G3_IO4_B_0x0 = 0;
        /** @brief Gx_IOy used as channel */
    constexpr std::uint32_t TSC_IOCCR_G3_IO4_B_0x1 = 1;

    /** @brief Gx_IOy channel mode */
    using TSC_IOCCR_G4_IO1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as channel (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOCCR_G4_IO1_B_0x0 = 0;
        /** @brief Gx_IOy used as channel */
    constexpr std::uint32_t TSC_IOCCR_G4_IO1_B_0x1 = 1;

    /** @brief Gx_IOy channel mode */
    using TSC_IOCCR_G4_IO2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as channel (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOCCR_G4_IO2_B_0x0 = 0;
        /** @brief Gx_IOy used as channel */
    constexpr std::uint32_t TSC_IOCCR_G4_IO2_B_0x1 = 1;

    /** @brief Gx_IOy channel mode */
    using TSC_IOCCR_G4_IO3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as channel (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOCCR_G4_IO3_B_0x0 = 0;
        /** @brief Gx_IOy used as channel */
    constexpr std::uint32_t TSC_IOCCR_G4_IO3_B_0x1 = 1;

    /** @brief Gx_IOy channel mode */
    using TSC_IOCCR_G4_IO4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as channel (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOCCR_G4_IO4_B_0x0 = 0;
        /** @brief Gx_IOy used as channel */
    constexpr std::uint32_t TSC_IOCCR_G4_IO4_B_0x1 = 1;

    /** @brief Gx_IOy channel mode */
    using TSC_IOCCR_G5_IO1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as channel (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOCCR_G5_IO1_B_0x0 = 0;
        /** @brief Gx_IOy used as channel */
    constexpr std::uint32_t TSC_IOCCR_G5_IO1_B_0x1 = 1;

    /** @brief Gx_IOy channel mode */
    using TSC_IOCCR_G5_IO2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as channel (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOCCR_G5_IO2_B_0x0 = 0;
        /** @brief Gx_IOy used as channel */
    constexpr std::uint32_t TSC_IOCCR_G5_IO2_B_0x1 = 1;

    /** @brief Gx_IOy channel mode */
    using TSC_IOCCR_G5_IO3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as channel (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOCCR_G5_IO3_B_0x0 = 0;
        /** @brief Gx_IOy used as channel */
    constexpr std::uint32_t TSC_IOCCR_G5_IO3_B_0x1 = 1;

    /** @brief Gx_IOy channel mode */
    using TSC_IOCCR_G5_IO4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as channel (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOCCR_G5_IO4_B_0x0 = 0;
        /** @brief Gx_IOy used as channel */
    constexpr std::uint32_t TSC_IOCCR_G5_IO4_B_0x1 = 1;

    /** @brief Gx_IOy channel mode */
    using TSC_IOCCR_G6_IO1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as channel (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOCCR_G6_IO1_B_0x0 = 0;
        /** @brief Gx_IOy used as channel */
    constexpr std::uint32_t TSC_IOCCR_G6_IO1_B_0x1 = 1;

    /** @brief Gx_IOy channel mode */
    using TSC_IOCCR_G6_IO2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as channel (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOCCR_G6_IO2_B_0x0 = 0;
        /** @brief Gx_IOy used as channel */
    constexpr std::uint32_t TSC_IOCCR_G6_IO2_B_0x1 = 1;

    /** @brief Gx_IOy channel mode */
    using TSC_IOCCR_G6_IO3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as channel (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOCCR_G6_IO3_B_0x0 = 0;
        /** @brief Gx_IOy used as channel */
    constexpr std::uint32_t TSC_IOCCR_G6_IO3_B_0x1 = 1;

    /** @brief Gx_IOy channel mode */
    using TSC_IOCCR_G6_IO4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as channel (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOCCR_G6_IO4_B_0x0 = 0;
        /** @brief Gx_IOy used as channel */
    constexpr std::uint32_t TSC_IOCCR_G6_IO4_B_0x1 = 1;

    /** @brief Gx_IOy channel mode */
    using TSC_IOCCR_G7_IO1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as channel (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOCCR_G7_IO1_B_0x0 = 0;
        /** @brief Gx_IOy used as channel */
    constexpr std::uint32_t TSC_IOCCR_G7_IO1_B_0x1 = 1;

    /** @brief Gx_IOy channel mode */
    using TSC_IOCCR_G7_IO2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as channel (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOCCR_G7_IO2_B_0x0 = 0;
        /** @brief Gx_IOy used as channel */
    constexpr std::uint32_t TSC_IOCCR_G7_IO2_B_0x1 = 1;

    /** @brief Gx_IOy channel mode */
    using TSC_IOCCR_G7_IO3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as channel (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOCCR_G7_IO3_B_0x0 = 0;
        /** @brief Gx_IOy used as channel */
    constexpr std::uint32_t TSC_IOCCR_G7_IO3_B_0x1 = 1;

    /** @brief Gx_IOy channel mode */
    using TSC_IOCCR_G7_IO4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as channel (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOCCR_G7_IO4_B_0x0 = 0;
        /** @brief Gx_IOy used as channel */
    constexpr std::uint32_t TSC_IOCCR_G7_IO4_B_0x1 = 1;

    /** @brief Gx_IOy channel mode */
    using TSC_IOCCR_G8_IO1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as channel (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOCCR_G8_IO1_B_0x0 = 0;
        /** @brief Gx_IOy used as channel */
    constexpr std::uint32_t TSC_IOCCR_G8_IO1_B_0x1 = 1;

    /** @brief Gx_IOy channel mode */
    using TSC_IOCCR_G8_IO2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as channel (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOCCR_G8_IO2_B_0x0 = 0;
        /** @brief Gx_IOy used as channel */
    constexpr std::uint32_t TSC_IOCCR_G8_IO2_B_0x1 = 1;

    /** @brief Gx_IOy channel mode */
    using TSC_IOCCR_G8_IO3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as channel (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOCCR_G8_IO3_B_0x0 = 0;
        /** @brief Gx_IOy used as channel */
    constexpr std::uint32_t TSC_IOCCR_G8_IO3_B_0x1 = 1;

    /** @brief Gx_IOy channel mode */
    using TSC_IOCCR_G8_IO4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Gx_IOy unused (value: 0)
     *          - B_0x1: Gx_IOy used as channel (value: 1)
     */
        /** @brief Gx_IOy unused */
    constexpr std::uint32_t TSC_IOCCR_G8_IO4_B_0x0 = 0;
        /** @brief Gx_IOy used as channel */
    constexpr std::uint32_t TSC_IOCCR_G8_IO4_B_0x1 = 1;

    /** @brief TSC I/O group control status register */
    using TSC_IOGCSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog I/O group x enable */
    using TSC_IOGCSR_G1E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Acquisition on analog I/O group x disabled (value: 0)
     *          - B_0x1: Acquisition on analog I/O group x enabled (value: 1)
     */
        /** @brief Acquisition on analog I/O group x disabled */
    constexpr std::uint32_t TSC_IOGCSR_G1E_B_0x0 = 0;
        /** @brief Acquisition on analog I/O group x enabled */
    constexpr std::uint32_t TSC_IOGCSR_G1E_B_0x1 = 1;

    /** @brief Analog I/O group x enable */
    using TSC_IOGCSR_G2E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Acquisition on analog I/O group x disabled (value: 0)
     *          - B_0x1: Acquisition on analog I/O group x enabled (value: 1)
     */
        /** @brief Acquisition on analog I/O group x disabled */
    constexpr std::uint32_t TSC_IOGCSR_G2E_B_0x0 = 0;
        /** @brief Acquisition on analog I/O group x enabled */
    constexpr std::uint32_t TSC_IOGCSR_G2E_B_0x1 = 1;

    /** @brief Analog I/O group x enable */
    using TSC_IOGCSR_G3E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Acquisition on analog I/O group x disabled (value: 0)
     *          - B_0x1: Acquisition on analog I/O group x enabled (value: 1)
     */
        /** @brief Acquisition on analog I/O group x disabled */
    constexpr std::uint32_t TSC_IOGCSR_G3E_B_0x0 = 0;
        /** @brief Acquisition on analog I/O group x enabled */
    constexpr std::uint32_t TSC_IOGCSR_G3E_B_0x1 = 1;

    /** @brief Analog I/O group x enable */
    using TSC_IOGCSR_G4E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Acquisition on analog I/O group x disabled (value: 0)
     *          - B_0x1: Acquisition on analog I/O group x enabled (value: 1)
     */
        /** @brief Acquisition on analog I/O group x disabled */
    constexpr std::uint32_t TSC_IOGCSR_G4E_B_0x0 = 0;
        /** @brief Acquisition on analog I/O group x enabled */
    constexpr std::uint32_t TSC_IOGCSR_G4E_B_0x1 = 1;

    /** @brief Analog I/O group x enable */
    using TSC_IOGCSR_G5E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Acquisition on analog I/O group x disabled (value: 0)
     *          - B_0x1: Acquisition on analog I/O group x enabled (value: 1)
     */
        /** @brief Acquisition on analog I/O group x disabled */
    constexpr std::uint32_t TSC_IOGCSR_G5E_B_0x0 = 0;
        /** @brief Acquisition on analog I/O group x enabled */
    constexpr std::uint32_t TSC_IOGCSR_G5E_B_0x1 = 1;

    /** @brief Analog I/O group x enable */
    using TSC_IOGCSR_G6E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Acquisition on analog I/O group x disabled (value: 0)
     *          - B_0x1: Acquisition on analog I/O group x enabled (value: 1)
     */
        /** @brief Acquisition on analog I/O group x disabled */
    constexpr std::uint32_t TSC_IOGCSR_G6E_B_0x0 = 0;
        /** @brief Acquisition on analog I/O group x enabled */
    constexpr std::uint32_t TSC_IOGCSR_G6E_B_0x1 = 1;

    /** @brief Analog I/O group x enable */
    using TSC_IOGCSR_G7E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Acquisition on analog I/O group x disabled (value: 0)
     *          - B_0x1: Acquisition on analog I/O group x enabled (value: 1)
     */
        /** @brief Acquisition on analog I/O group x disabled */
    constexpr std::uint32_t TSC_IOGCSR_G7E_B_0x0 = 0;
        /** @brief Acquisition on analog I/O group x enabled */
    constexpr std::uint32_t TSC_IOGCSR_G7E_B_0x1 = 1;

    /** @brief Analog I/O group x enable */
    using TSC_IOGCSR_G8E = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Acquisition on analog I/O group x disabled (value: 0)
     *          - B_0x1: Acquisition on analog I/O group x enabled (value: 1)
     */
        /** @brief Acquisition on analog I/O group x disabled */
    constexpr std::uint32_t TSC_IOGCSR_G8E_B_0x0 = 0;
        /** @brief Acquisition on analog I/O group x enabled */
    constexpr std::uint32_t TSC_IOGCSR_G8E_B_0x1 = 1;

    /** @brief Analog I/O group x status */
    using TSC_IOGCSR_G1S = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Acquisition on analog I/O group x is ongoing or not started (value: 0)
     *          - B_0x1: Acquisition on analog I/O group x is complete (value: 1)
     */
        /** @brief Acquisition on analog I/O group x is ongoing or not started */
    constexpr std::uint32_t TSC_IOGCSR_G1S_B_0x0 = 0;
        /** @brief Acquisition on analog I/O group x is complete */
    constexpr std::uint32_t TSC_IOGCSR_G1S_B_0x1 = 1;

    /** @brief Analog I/O group x status */
    using TSC_IOGCSR_G2S = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Acquisition on analog I/O group x is ongoing or not started (value: 0)
     *          - B_0x1: Acquisition on analog I/O group x is complete (value: 1)
     */
        /** @brief Acquisition on analog I/O group x is ongoing or not started */
    constexpr std::uint32_t TSC_IOGCSR_G2S_B_0x0 = 0;
        /** @brief Acquisition on analog I/O group x is complete */
    constexpr std::uint32_t TSC_IOGCSR_G2S_B_0x1 = 1;

    /** @brief Analog I/O group x status */
    using TSC_IOGCSR_G3S = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Acquisition on analog I/O group x is ongoing or not started (value: 0)
     *          - B_0x1: Acquisition on analog I/O group x is complete (value: 1)
     */
        /** @brief Acquisition on analog I/O group x is ongoing or not started */
    constexpr std::uint32_t TSC_IOGCSR_G3S_B_0x0 = 0;
        /** @brief Acquisition on analog I/O group x is complete */
    constexpr std::uint32_t TSC_IOGCSR_G3S_B_0x1 = 1;

    /** @brief Analog I/O group x status */
    using TSC_IOGCSR_G4S = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Acquisition on analog I/O group x is ongoing or not started (value: 0)
     *          - B_0x1: Acquisition on analog I/O group x is complete (value: 1)
     */
        /** @brief Acquisition on analog I/O group x is ongoing or not started */
    constexpr std::uint32_t TSC_IOGCSR_G4S_B_0x0 = 0;
        /** @brief Acquisition on analog I/O group x is complete */
    constexpr std::uint32_t TSC_IOGCSR_G4S_B_0x1 = 1;

    /** @brief Analog I/O group x status */
    using TSC_IOGCSR_G5S = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Acquisition on analog I/O group x is ongoing or not started (value: 0)
     *          - B_0x1: Acquisition on analog I/O group x is complete (value: 1)
     */
        /** @brief Acquisition on analog I/O group x is ongoing or not started */
    constexpr std::uint32_t TSC_IOGCSR_G5S_B_0x0 = 0;
        /** @brief Acquisition on analog I/O group x is complete */
    constexpr std::uint32_t TSC_IOGCSR_G5S_B_0x1 = 1;

    /** @brief Analog I/O group x status */
    using TSC_IOGCSR_G6S = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Acquisition on analog I/O group x is ongoing or not started (value: 0)
     *          - B_0x1: Acquisition on analog I/O group x is complete (value: 1)
     */
        /** @brief Acquisition on analog I/O group x is ongoing or not started */
    constexpr std::uint32_t TSC_IOGCSR_G6S_B_0x0 = 0;
        /** @brief Acquisition on analog I/O group x is complete */
    constexpr std::uint32_t TSC_IOGCSR_G6S_B_0x1 = 1;

    /** @brief Analog I/O group x status */
    using TSC_IOGCSR_G7S = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Acquisition on analog I/O group x is ongoing or not started (value: 0)
     *          - B_0x1: Acquisition on analog I/O group x is complete (value: 1)
     */
        /** @brief Acquisition on analog I/O group x is ongoing or not started */
    constexpr std::uint32_t TSC_IOGCSR_G7S_B_0x0 = 0;
        /** @brief Acquisition on analog I/O group x is complete */
    constexpr std::uint32_t TSC_IOGCSR_G7S_B_0x1 = 1;

    /** @brief Analog I/O group x status */
    using TSC_IOGCSR_G8S = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Acquisition on analog I/O group x is ongoing or not started (value: 0)
     *          - B_0x1: Acquisition on analog I/O group x is complete (value: 1)
     */
        /** @brief Acquisition on analog I/O group x is ongoing or not started */
    constexpr std::uint32_t TSC_IOGCSR_G8S_B_0x0 = 0;
        /** @brief Acquisition on analog I/O group x is complete */
    constexpr std::uint32_t TSC_IOGCSR_G8S_B_0x1 = 1;

    /** @brief TSC I/O group 1 counter register */
    using TSC_IOG1CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Counter value */
    using TSC_IOG1CR_CNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TSC I/O group 2 counter register */
    using TSC_IOG2CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Counter value */
    using TSC_IOG2CR_CNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TSC I/O group 3 counter register */
    using TSC_IOG3CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Counter value */
    using TSC_IOG3CR_CNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TSC I/O group 4 counter register */
    using TSC_IOG4CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Counter value */
    using TSC_IOG4CR_CNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TSC I/O group 5 counter register */
    using TSC_IOG5CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Counter value */
    using TSC_IOG5CR_CNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TSC I/O group 6 counter register */
    using TSC_IOG6CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Counter value */
    using TSC_IOG6CR_CNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TSC I/O group 7 counter register */
    using TSC_IOG7CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Counter value */
    using TSC_IOG7CR_CNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TSC I/O group 8 counter register */
    using TSC_IOG8CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Counter value */
    using TSC_IOG8CR_CNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
