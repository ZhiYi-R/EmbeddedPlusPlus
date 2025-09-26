/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32G071_DMA2_HPP
#define EMBEDDED_PP_STM32G071_DMA2_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief DMA controller */
namespace STM32G071::DMA2 {

    /** @brief DMA interrupt status register */
    using DMA_ISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief global interrupt flag for channel 1 */
    using DMA_ISR_GIF1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no TE, HT or TC event (value: 0)
     *          - B_0x1: a TE, HT or TC event occurred (value: 1)
     */
        /** @brief no TE, HT or TC event */
    constexpr std::uint32_t DMA_ISR_GIF1_B_0x0 = 0;
        /** @brief a TE, HT or TC event occurred */
    constexpr std::uint32_t DMA_ISR_GIF1_B_0x1 = 1;

    /** @brief transfer complete (TC) flag for channel 1 */
    using DMA_ISR_TCIF1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no TC event (value: 0)
     *          - B_0x1: a TC event occurred (value: 1)
     */
        /** @brief no TC event */
    constexpr std::uint32_t DMA_ISR_TCIF1_B_0x0 = 0;
        /** @brief a TC event occurred */
    constexpr std::uint32_t DMA_ISR_TCIF1_B_0x1 = 1;

    /** @brief half transfer (HT) flag for channel 1 */
    using DMA_ISR_HTIF1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no HT event (value: 0)
     *          - B_0x1: a HT event occurred (value: 1)
     */
        /** @brief no HT event */
    constexpr std::uint32_t DMA_ISR_HTIF1_B_0x0 = 0;
        /** @brief a HT event occurred */
    constexpr std::uint32_t DMA_ISR_HTIF1_B_0x1 = 1;

    /** @brief transfer error (TE) flag for channel 1 */
    using DMA_ISR_TEIF1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no TE event (value: 0)
     *          - B_0x1: a TE event occurred (value: 1)
     */
        /** @brief no TE event */
    constexpr std::uint32_t DMA_ISR_TEIF1_B_0x0 = 0;
        /** @brief a TE event occurred */
    constexpr std::uint32_t DMA_ISR_TEIF1_B_0x1 = 1;

    /** @brief global interrupt flag for channel 2 */
    using DMA_ISR_GIF2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no TE, HT or TC event (value: 0)
     *          - B_0x1: a TE, HT or TC event occurred (value: 1)
     */
        /** @brief no TE, HT or TC event */
    constexpr std::uint32_t DMA_ISR_GIF2_B_0x0 = 0;
        /** @brief a TE, HT or TC event occurred */
    constexpr std::uint32_t DMA_ISR_GIF2_B_0x1 = 1;

    /** @brief transfer complete (TC) flag for channel 2 */
    using DMA_ISR_TCIF2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no TC event (value: 0)
     *          - B_0x1: a TC event occurred (value: 1)
     */
        /** @brief no TC event */
    constexpr std::uint32_t DMA_ISR_TCIF2_B_0x0 = 0;
        /** @brief a TC event occurred */
    constexpr std::uint32_t DMA_ISR_TCIF2_B_0x1 = 1;

    /** @brief half transfer (HT) flag for channel 2 */
    using DMA_ISR_HTIF2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no HT event (value: 0)
     *          - B_0x1: a HT event occurred (value: 1)
     */
        /** @brief no HT event */
    constexpr std::uint32_t DMA_ISR_HTIF2_B_0x0 = 0;
        /** @brief a HT event occurred */
    constexpr std::uint32_t DMA_ISR_HTIF2_B_0x1 = 1;

    /** @brief transfer error (TE) flag for channel 2 */
    using DMA_ISR_TEIF2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no TE event (value: 0)
     *          - B_0x1: a TE event occurred (value: 1)
     */
        /** @brief no TE event */
    constexpr std::uint32_t DMA_ISR_TEIF2_B_0x0 = 0;
        /** @brief a TE event occurred */
    constexpr std::uint32_t DMA_ISR_TEIF2_B_0x1 = 1;

    /** @brief global interrupt flag for channel 3 */
    using DMA_ISR_GIF3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no TE, HT or TC event (value: 0)
     *          - B_0x1: a TE, HT or TC event occurred (value: 1)
     */
        /** @brief no TE, HT or TC event */
    constexpr std::uint32_t DMA_ISR_GIF3_B_0x0 = 0;
        /** @brief a TE, HT or TC event occurred */
    constexpr std::uint32_t DMA_ISR_GIF3_B_0x1 = 1;

    /** @brief transfer complete (TC) flag for channel 3 */
    using DMA_ISR_TCIF3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no TC event (value: 0)
     *          - B_0x1: a TC event occurred (value: 1)
     */
        /** @brief no TC event */
    constexpr std::uint32_t DMA_ISR_TCIF3_B_0x0 = 0;
        /** @brief a TC event occurred */
    constexpr std::uint32_t DMA_ISR_TCIF3_B_0x1 = 1;

    /** @brief half transfer (HT) flag for channel 3 */
    using DMA_ISR_HTIF3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no HT event (value: 0)
     *          - B_0x1: a HT event occurred (value: 1)
     */
        /** @brief no HT event */
    constexpr std::uint32_t DMA_ISR_HTIF3_B_0x0 = 0;
        /** @brief a HT event occurred */
    constexpr std::uint32_t DMA_ISR_HTIF3_B_0x1 = 1;

    /** @brief transfer error (TE) flag for channel 3 */
    using DMA_ISR_TEIF3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no TE event (value: 0)
     *          - B_0x1: a TE event occurred (value: 1)
     */
        /** @brief no TE event */
    constexpr std::uint32_t DMA_ISR_TEIF3_B_0x0 = 0;
        /** @brief a TE event occurred */
    constexpr std::uint32_t DMA_ISR_TEIF3_B_0x1 = 1;

    /** @brief global interrupt flag for channel 4 */
    using DMA_ISR_GIF4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no TE, HT or TC event (value: 0)
     *          - B_0x1: a TE, HT or TC event occurred (value: 1)
     */
        /** @brief no TE, HT or TC event */
    constexpr std::uint32_t DMA_ISR_GIF4_B_0x0 = 0;
        /** @brief a TE, HT or TC event occurred */
    constexpr std::uint32_t DMA_ISR_GIF4_B_0x1 = 1;

    /** @brief transfer complete (TC) flag for channel 4 */
    using DMA_ISR_TCIF4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no TC event (value: 0)
     *          - B_0x1: a TC event occurred (value: 1)
     */
        /** @brief no TC event */
    constexpr std::uint32_t DMA_ISR_TCIF4_B_0x0 = 0;
        /** @brief a TC event occurred */
    constexpr std::uint32_t DMA_ISR_TCIF4_B_0x1 = 1;

    /** @brief half transfer (HT) flag for channel 4 */
    using DMA_ISR_HTIF4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no HT event (value: 0)
     *          - B_0x1: a HT event occurred (value: 1)
     */
        /** @brief no HT event */
    constexpr std::uint32_t DMA_ISR_HTIF4_B_0x0 = 0;
        /** @brief a HT event occurred */
    constexpr std::uint32_t DMA_ISR_HTIF4_B_0x1 = 1;

    /** @brief transfer error (TE) flag for channel 4 */
    using DMA_ISR_TEIF4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no TE event (value: 0)
     *          - B_0x1: a TE event occurred (value: 1)
     */
        /** @brief no TE event */
    constexpr std::uint32_t DMA_ISR_TEIF4_B_0x0 = 0;
        /** @brief a TE event occurred */
    constexpr std::uint32_t DMA_ISR_TEIF4_B_0x1 = 1;

    /** @brief global interrupt flag for channel 5 */
    using DMA_ISR_GIF5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no TE, HT or TC event (value: 0)
     *          - B_0x1: a TE, HT or TC event occurred (value: 1)
     */
        /** @brief no TE, HT or TC event */
    constexpr std::uint32_t DMA_ISR_GIF5_B_0x0 = 0;
        /** @brief a TE, HT or TC event occurred */
    constexpr std::uint32_t DMA_ISR_GIF5_B_0x1 = 1;

    /** @brief transfer complete (TC) flag for channel 5 */
    using DMA_ISR_TCIF5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no TC event (value: 0)
     *          - B_0x1: a TC event occurred (value: 1)
     */
        /** @brief no TC event */
    constexpr std::uint32_t DMA_ISR_TCIF5_B_0x0 = 0;
        /** @brief a TC event occurred */
    constexpr std::uint32_t DMA_ISR_TCIF5_B_0x1 = 1;

    /** @brief half transfer (HT) flag for channel 5 */
    using DMA_ISR_HTIF5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no HT event (value: 0)
     *          - B_0x1: a HT event occurred (value: 1)
     */
        /** @brief no HT event */
    constexpr std::uint32_t DMA_ISR_HTIF5_B_0x0 = 0;
        /** @brief a HT event occurred */
    constexpr std::uint32_t DMA_ISR_HTIF5_B_0x1 = 1;

    /** @brief transfer error (TE) flag for channel 5 */
    using DMA_ISR_TEIF5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no TE event (value: 0)
     *          - B_0x1: a TE event occurred (value: 1)
     */
        /** @brief no TE event */
    constexpr std::uint32_t DMA_ISR_TEIF5_B_0x0 = 0;
        /** @brief a TE event occurred */
    constexpr std::uint32_t DMA_ISR_TEIF5_B_0x1 = 1;

    /** @brief global interrupt flag for channel 6 */
    using DMA_ISR_GIF6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no TE, HT or TC event (value: 0)
     *          - B_0x1: a TE, HT or TC event occurred (value: 1)
     */
        /** @brief no TE, HT or TC event */
    constexpr std::uint32_t DMA_ISR_GIF6_B_0x0 = 0;
        /** @brief a TE, HT or TC event occurred */
    constexpr std::uint32_t DMA_ISR_GIF6_B_0x1 = 1;

    /** @brief transfer complete (TC) flag for channel 6 */
    using DMA_ISR_TCIF6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no TC event (value: 0)
     *          - B_0x1: a TC event occurred (value: 1)
     */
        /** @brief no TC event */
    constexpr std::uint32_t DMA_ISR_TCIF6_B_0x0 = 0;
        /** @brief a TC event occurred */
    constexpr std::uint32_t DMA_ISR_TCIF6_B_0x1 = 1;

    /** @brief half transfer (HT) flag for channel 6 */
    using DMA_ISR_HTIF6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no HT event (value: 0)
     *          - B_0x1: a HT event occurred (value: 1)
     */
        /** @brief no HT event */
    constexpr std::uint32_t DMA_ISR_HTIF6_B_0x0 = 0;
        /** @brief a HT event occurred */
    constexpr std::uint32_t DMA_ISR_HTIF6_B_0x1 = 1;

    /** @brief transfer error (TE) flag for channel 6 */
    using DMA_ISR_TEIF6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no TE event (value: 0)
     *          - B_0x1: a TE event occurred (value: 1)
     */
        /** @brief no TE event */
    constexpr std::uint32_t DMA_ISR_TEIF6_B_0x0 = 0;
        /** @brief a TE event occurred */
    constexpr std::uint32_t DMA_ISR_TEIF6_B_0x1 = 1;

    /** @brief global interrupt flag for channel 7 */
    using DMA_ISR_GIF7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no TE, HT or TC event (value: 0)
     *          - B_0x1: a TE, HT or TC event occurred (value: 1)
     */
        /** @brief no TE, HT or TC event */
    constexpr std::uint32_t DMA_ISR_GIF7_B_0x0 = 0;
        /** @brief a TE, HT or TC event occurred */
    constexpr std::uint32_t DMA_ISR_GIF7_B_0x1 = 1;

    /** @brief transfer complete (TC) flag for channel 7 */
    using DMA_ISR_TCIF7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no TC event (value: 0)
     *          - B_0x1: a TC event occurred (value: 1)
     */
        /** @brief no TC event */
    constexpr std::uint32_t DMA_ISR_TCIF7_B_0x0 = 0;
        /** @brief a TC event occurred */
    constexpr std::uint32_t DMA_ISR_TCIF7_B_0x1 = 1;

    /** @brief half transfer (HT) flag for channel 7 */
    using DMA_ISR_HTIF7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no HT event (value: 0)
     *          - B_0x1: a HT event occurred (value: 1)
     */
        /** @brief no HT event */
    constexpr std::uint32_t DMA_ISR_HTIF7_B_0x0 = 0;
        /** @brief a HT event occurred */
    constexpr std::uint32_t DMA_ISR_HTIF7_B_0x1 = 1;

    /** @brief transfer error (TE) flag for channel 7 */
    using DMA_ISR_TEIF7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no TE event (value: 0)
     *          - B_0x1: a TE event occurred (value: 1)
     */
        /** @brief no TE event */
    constexpr std::uint32_t DMA_ISR_TEIF7_B_0x0 = 0;
        /** @brief a TE event occurred */
    constexpr std::uint32_t DMA_ISR_TEIF7_B_0x1 = 1;

    /** @brief DMA interrupt flag clear register */
    using DMA_IFCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief global interrupt flag clear for channel 1 */
    using DMA_IFCR_CGIF1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transfer complete flag clear for channel 1 */
    using DMA_IFCR_CTCIF1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief half transfer flag clear for channel 1 */
    using DMA_IFCR_CHTIF1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transfer error flag clear for channel 1 */
    using DMA_IFCR_CTEIF1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief global interrupt flag clear for channel 2 */
    using DMA_IFCR_CGIF2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transfer complete flag clear for channel 2 */
    using DMA_IFCR_CTCIF2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief half transfer flag clear for channel 2 */
    using DMA_IFCR_CHTIF2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transfer error flag clear for channel 2 */
    using DMA_IFCR_CTEIF2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief global interrupt flag clear for channel 3 */
    using DMA_IFCR_CGIF3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transfer complete flag clear for channel 3 */
    using DMA_IFCR_CTCIF3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief half transfer flag clear for channel 3 */
    using DMA_IFCR_CHTIF3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transfer error flag clear for channel 3 */
    using DMA_IFCR_CTEIF3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief global interrupt flag clear for channel 4 */
    using DMA_IFCR_CGIF4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transfer complete flag clear for channel 4 */
    using DMA_IFCR_CTCIF4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief half transfer flag clear for channel 4 */
    using DMA_IFCR_CHTIF4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transfer error flag clear for channel 4 */
    using DMA_IFCR_CTEIF4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief global interrupt flag clear for channel 5 */
    using DMA_IFCR_CGIF5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transfer complete flag clear for channel 5 */
    using DMA_IFCR_CTCIF5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief half transfer flag clear for channel 5 */
    using DMA_IFCR_CHTIF5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transfer error flag clear for channel 5 */
    using DMA_IFCR_CTEIF5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief global interrupt flag clear for channel 6 */
    using DMA_IFCR_CGIF6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transfer complete flag clear for channel 6 */
    using DMA_IFCR_CTCIF6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief half transfer flag clear for channel 6 */
    using DMA_IFCR_CHTIF6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transfer error flag clear for channel 6 */
    using DMA_IFCR_CTEIF6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief global interrupt flag clear for channel 7 */
    using DMA_IFCR_CGIF7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transfer complete flag clear for channel 7 */
    using DMA_IFCR_CTCIF7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief half transfer flag clear for channel 7 */
    using DMA_IFCR_CHTIF7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transfer error flag clear for channel 7 */
    using DMA_IFCR_CTEIF7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA channel 1 configuration register */
    using DMA_CCR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief channel enable When a channel transfer error occurs, this bit is cleared by hardware. It can not be set again by software (channel x re-activated) until the TEIFx bit of the DMA_ISR register is cleared (by setting the CTEIFx bit of the DMA_IFCR register). Note: this bit is set and cleared by software. */
    using DMA_CCR1_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: disabled (value: 0)
     *          - B_0x1: enabled (value: 1)
     */
        /** @brief disabled */
    constexpr std::uint32_t DMA_CCR1_EN_B_0x0 = 0;
        /** @brief enabled */
    constexpr std::uint32_t DMA_CCR1_EN_B_0x1 = 1;

    /** @brief transfer complete interrupt enable Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is not read-only when the channel is enabled (EN=1). */
    using DMA_CCR1_TCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: disabled (value: 0)
     *          - B_0x1: enabled (value: 1)
     */
        /** @brief disabled */
    constexpr std::uint32_t DMA_CCR1_TCIE_B_0x0 = 0;
        /** @brief enabled */
    constexpr std::uint32_t DMA_CCR1_TCIE_B_0x1 = 1;

    /** @brief half transfer interrupt enable Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is not read-only when the channel is enabled (EN=1). */
    using DMA_CCR1_HTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: disabled (value: 0)
     *          - B_0x1: enabled (value: 1)
     */
        /** @brief disabled */
    constexpr std::uint32_t DMA_CCR1_HTIE_B_0x0 = 0;
        /** @brief enabled */
    constexpr std::uint32_t DMA_CCR1_HTIE_B_0x1 = 1;

    /** @brief transfer error interrupt enable Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is not read-only when the channel is enabled (EN=1). */
    using DMA_CCR1_TEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: disabled (value: 0)
     *          - B_0x1: enabled (value: 1)
     */
        /** @brief disabled */
    constexpr std::uint32_t DMA_CCR1_TEIE_B_0x0 = 0;
        /** @brief enabled */
    constexpr std::uint32_t DMA_CCR1_TEIE_B_0x1 = 1;

    /** @brief data transfer direction This bit must be set only in memory-to-peripheral and peripheral-to-memory modes. Source attributes are defined by PSIZE and PINC, plus the DMA_CPARx register. This is still valid in a memory-to-memory mode. Destination attributes are defined by MSIZE and MINC, plus the DMA_CMARx register. This is still valid in a peripheral-to-peripheral mode. Destination attributes are defined by PSIZE and PINC, plus the DMA_CPARx register. This is still valid in a memory-to-memory mode. Source attributes are defined by MSIZE and MINC, plus the DMA_CMARx register. This is still valid in a peripheral-to-peripheral mode. Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1). */
    using DMA_CCR1_DIR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: read from peripheral (value: 0)
     *          - B_0x1: read from memory (value: 1)
     */
        /** @brief read from peripheral */
    constexpr std::uint32_t DMA_CCR1_DIR_B_0x0 = 0;
        /** @brief read from memory */
    constexpr std::uint32_t DMA_CCR1_DIR_B_0x1 = 1;

    /** @brief circular mode Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is not read-only when the channel is enabled (EN=1). */
    using DMA_CCR1_CIRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: disabled (value: 0)
     *          - B_0x1: enabled (value: 1)
     */
        /** @brief disabled */
    constexpr std::uint32_t DMA_CCR1_CIRC_B_0x0 = 0;
        /** @brief enabled */
    constexpr std::uint32_t DMA_CCR1_CIRC_B_0x1 = 1;

    /** @brief peripheral increment mode Defines the increment mode for each DMA transfer to the identified peripheral. n memory-to-memory mode, this field identifies the memory destination if DIR=1 and the memory source if DIR=0. In peripheral-to-peripheral mode, this field identifies the peripheral destination if DIR=1 and the peripheral source if DIR=0. Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1). */
    using DMA_CCR1_PINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: disabled (value: 0)
     *          - B_0x1: enabled (value: 1)
     */
        /** @brief disabled */
    constexpr std::uint32_t DMA_CCR1_PINC_B_0x0 = 0;
        /** @brief enabled */
    constexpr std::uint32_t DMA_CCR1_PINC_B_0x1 = 1;

    /** @brief memory increment mode Defines the increment mode for each DMA transfer to the identified memory. In memory-to-memory mode, this field identifies the memory source if DIR=1 and the memory destination if DIR=0. In peripheral-to-peripheral mode, this field identifies the peripheral source if DIR=1 and the peripheral destination if DIR=0. Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1). */
    using DMA_CCR1_MINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: disabled (value: 0)
     *          - B_0x1: enabled (value: 1)
     */
        /** @brief disabled */
    constexpr std::uint32_t DMA_CCR1_MINC_B_0x0 = 0;
        /** @brief enabled */
    constexpr std::uint32_t DMA_CCR1_MINC_B_0x1 = 1;

    /** @brief peripheral size Defines the data size of each DMA transfer to the identified peripheral. In memory-to-memory mode, this field identifies the memory destination if DIR=1 and the memory source if DIR=0. In peripheral-to-peripheral mode, this field identifies the peripheral destination if DIR=1 and the peripheral source if DIR=0. Note: this field is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1). */
    using DMA_CCR1_PSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 8 bits (value: 0)
     *          - B_0x1: 16 bits (value: 1)
     *          - B_0x2: 32 bits (value: 2)
     */
        /** @brief 8 bits */
    constexpr std::uint32_t DMA_CCR1_PSIZE_B_0x0 = 0;
        /** @brief 16 bits */
    constexpr std::uint32_t DMA_CCR1_PSIZE_B_0x1 = 1;
        /** @brief 32 bits */
    constexpr std::uint32_t DMA_CCR1_PSIZE_B_0x2 = 2;

    /** @brief memory size Defines the data size of each DMA transfer to the identified memory. In memory-to-memory mode, this field identifies the memory source if DIR=1 and the memory destination if DIR=0. In peripheral-to-peripheral mode, this field identifies the peripheral source if DIR=1 and the peripheral destination if DIR=0. Note: this field is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1). */
    using DMA_CCR1_MSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 8 bits (value: 0)
     *          - B_0x1: 16 bits (value: 1)
     *          - B_0x2: 32 bits (value: 2)
     */
        /** @brief 8 bits */
    constexpr std::uint32_t DMA_CCR1_MSIZE_B_0x0 = 0;
        /** @brief 16 bits */
    constexpr std::uint32_t DMA_CCR1_MSIZE_B_0x1 = 1;
        /** @brief 32 bits */
    constexpr std::uint32_t DMA_CCR1_MSIZE_B_0x2 = 2;

    /** @brief priority level Note: this field is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1). */
    using DMA_CCR1_PL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: low (value: 0)
     *          - B_0x1: medium (value: 1)
     *          - B_0x2: high (value: 2)
     *          - B_0x3: very high (value: 3)
     */
        /** @brief low */
    constexpr std::uint32_t DMA_CCR1_PL_B_0x0 = 0;
        /** @brief medium */
    constexpr std::uint32_t DMA_CCR1_PL_B_0x1 = 1;
        /** @brief high */
    constexpr std::uint32_t DMA_CCR1_PL_B_0x2 = 2;
        /** @brief very high */
    constexpr std::uint32_t DMA_CCR1_PL_B_0x3 = 3;

    /** @brief memory-to-memory mode Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1). */
    using DMA_CCR1_MEM2MEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: disabled (value: 0)
     *          - B_0x1: enabled (value: 1)
     */
        /** @brief disabled */
    constexpr std::uint32_t DMA_CCR1_MEM2MEM_B_0x0 = 0;
        /** @brief enabled */
    constexpr std::uint32_t DMA_CCR1_MEM2MEM_B_0x1 = 1;

    /** @brief DMA channel x number of data register */
    using DMA_CNDTR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief number of data to transfer (0 to 216-1) This field is updated by hardware when the channel is enabled: It is decremented after each single DMA 'read followed by write' transfer, indicating the remaining amount of data items to transfer. It is kept at zero when the programmed amount of data to transfer is reached, if the channel is not in circular mode (CIRC=0 in the DMA_CCRx register). It is reloaded automatically by the previously programmed value, when the transfer is complete, if the channel is in circular mode (CIRC=1). If this field is zero, no transfer can be served whatever the channel status (enabled or not). Note: this field is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1). */
    using DMA_CNDTR1_NDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA channel x peripheral address register */
    using DMA_CPAR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief peripheral address It contains the base address of the peripheral data register from/to which the data will be read/written. When PSIZE[1:0]=01 (16 bits), bit 0 of PA[31:0] is ignored. Access is automatically aligned to a half-word address. When PSIZE=10 (32 bits), bits 1 and 0 of PA[31:0] are ignored. Access is automatically aligned to a word address. In memory-to-memory mode, this register identifies the memory destination address if DIR=1 and the memory source address if DIR=0. In peripheral-to-peripheral mode, this register identifies the peripheral destination address DIR=1 and the peripheral source address if DIR=0. Note: this register is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is not read-only when the channel is enabled (EN=1). */
    using DMA_CPAR1_PA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA channel x memory address register */
    using DMA_CMAR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief peripheral address It contains the base address of the memory from/to which the data will be read/written. When MSIZE[1:0]=01 (16 bits), bit 0 of MA[31:0] is ignored. Access is automatically aligned to a half-word address. When MSIZE=10 (32 bits), bits 1 and 0 of MA[31:0] are ignored. Access is automatically aligned to a word address. In memory-to-memory mode, this register identifies the memory source address if DIR=1 and the memory destination address if DIR=0. In peripheral-to-peripheral mode, this register identifies the peripheral source address DIR=1 and the peripheral destination address if DIR=0. Note: this register is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is not read-only when the channel is enabled (EN=1). */
    using DMA_CMAR1_MA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA channel 2 configuration register */
    using DMA_CCR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief channel enable When a channel transfer error occurs, this bit is cleared by hardware. It can not be set again by software (channel x re-activated) until the TEIFx bit of the DMA_ISR register is cleared (by setting the CTEIFx bit of the DMA_IFCR register). Note: this bit is set and cleared by software. */
    using DMA_CCR2_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: disabled (value: 0)
     *          - B_0x1: enabled (value: 1)
     */
        /** @brief disabled */
    constexpr std::uint32_t DMA_CCR2_EN_B_0x0 = 0;
        /** @brief enabled */
    constexpr std::uint32_t DMA_CCR2_EN_B_0x1 = 1;

    /** @brief transfer complete interrupt enable Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is not read-only when the channel is enabled (EN=1). */
    using DMA_CCR2_TCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: disabled (value: 0)
     *          - B_0x1: enabled (value: 1)
     */
        /** @brief disabled */
    constexpr std::uint32_t DMA_CCR2_TCIE_B_0x0 = 0;
        /** @brief enabled */
    constexpr std::uint32_t DMA_CCR2_TCIE_B_0x1 = 1;

    /** @brief half transfer interrupt enable Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is not read-only when the channel is enabled (EN=1). */
    using DMA_CCR2_HTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: disabled (value: 0)
     *          - B_0x1: enabled (value: 1)
     */
        /** @brief disabled */
    constexpr std::uint32_t DMA_CCR2_HTIE_B_0x0 = 0;
        /** @brief enabled */
    constexpr std::uint32_t DMA_CCR2_HTIE_B_0x1 = 1;

    /** @brief transfer error interrupt enable Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is not read-only when the channel is enabled (EN=1). */
    using DMA_CCR2_TEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: disabled (value: 0)
     *          - B_0x1: enabled (value: 1)
     */
        /** @brief disabled */
    constexpr std::uint32_t DMA_CCR2_TEIE_B_0x0 = 0;
        /** @brief enabled */
    constexpr std::uint32_t DMA_CCR2_TEIE_B_0x1 = 1;

    /** @brief data transfer direction This bit must be set only in memory-to-peripheral and peripheral-to-memory modes. Source attributes are defined by PSIZE and PINC, plus the DMA_CPARx register. This is still valid in a memory-to-memory mode. Destination attributes are defined by MSIZE and MINC, plus the DMA_CMARx register. This is still valid in a peripheral-to-peripheral mode. Destination attributes are defined by PSIZE and PINC, plus the DMA_CPARx register. This is still valid in a memory-to-memory mode. Source attributes are defined by MSIZE and MINC, plus the DMA_CMARx register. This is still valid in a peripheral-to-peripheral mode. Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1). */
    using DMA_CCR2_DIR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: read from peripheral (value: 0)
     *          - B_0x1: read from memory (value: 1)
     */
        /** @brief read from peripheral */
    constexpr std::uint32_t DMA_CCR2_DIR_B_0x0 = 0;
        /** @brief read from memory */
    constexpr std::uint32_t DMA_CCR2_DIR_B_0x1 = 1;

    /** @brief circular mode Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is not read-only when the channel is enabled (EN=1). */
    using DMA_CCR2_CIRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: disabled (value: 0)
     *          - B_0x1: enabled (value: 1)
     */
        /** @brief disabled */
    constexpr std::uint32_t DMA_CCR2_CIRC_B_0x0 = 0;
        /** @brief enabled */
    constexpr std::uint32_t DMA_CCR2_CIRC_B_0x1 = 1;

    /** @brief peripheral increment mode Defines the increment mode for each DMA transfer to the identified peripheral. n memory-to-memory mode, this field identifies the memory destination if DIR=1 and the memory source if DIR=0. In peripheral-to-peripheral mode, this field identifies the peripheral destination if DIR=1 and the peripheral source if DIR=0. Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1). */
    using DMA_CCR2_PINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: disabled (value: 0)
     *          - B_0x1: enabled (value: 1)
     */
        /** @brief disabled */
    constexpr std::uint32_t DMA_CCR2_PINC_B_0x0 = 0;
        /** @brief enabled */
    constexpr std::uint32_t DMA_CCR2_PINC_B_0x1 = 1;

    /** @brief memory increment mode Defines the increment mode for each DMA transfer to the identified memory. In memory-to-memory mode, this field identifies the memory source if DIR=1 and the memory destination if DIR=0. In peripheral-to-peripheral mode, this field identifies the peripheral source if DIR=1 and the peripheral destination if DIR=0. Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1). */
    using DMA_CCR2_MINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: disabled (value: 0)
     *          - B_0x1: enabled (value: 1)
     */
        /** @brief disabled */
    constexpr std::uint32_t DMA_CCR2_MINC_B_0x0 = 0;
        /** @brief enabled */
    constexpr std::uint32_t DMA_CCR2_MINC_B_0x1 = 1;

    /** @brief peripheral size Defines the data size of each DMA transfer to the identified peripheral. In memory-to-memory mode, this field identifies the memory destination if DIR=1 and the memory source if DIR=0. In peripheral-to-peripheral mode, this field identifies the peripheral destination if DIR=1 and the peripheral source if DIR=0. Note: this field is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1). */
    using DMA_CCR2_PSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 8 bits (value: 0)
     *          - B_0x1: 16 bits (value: 1)
     *          - B_0x2: 32 bits (value: 2)
     */
        /** @brief 8 bits */
    constexpr std::uint32_t DMA_CCR2_PSIZE_B_0x0 = 0;
        /** @brief 16 bits */
    constexpr std::uint32_t DMA_CCR2_PSIZE_B_0x1 = 1;
        /** @brief 32 bits */
    constexpr std::uint32_t DMA_CCR2_PSIZE_B_0x2 = 2;

    /** @brief memory size Defines the data size of each DMA transfer to the identified memory. In memory-to-memory mode, this field identifies the memory source if DIR=1 and the memory destination if DIR=0. In peripheral-to-peripheral mode, this field identifies the peripheral source if DIR=1 and the peripheral destination if DIR=0. Note: this field is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1). */
    using DMA_CCR2_MSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 8 bits (value: 0)
     *          - B_0x1: 16 bits (value: 1)
     *          - B_0x2: 32 bits (value: 2)
     */
        /** @brief 8 bits */
    constexpr std::uint32_t DMA_CCR2_MSIZE_B_0x0 = 0;
        /** @brief 16 bits */
    constexpr std::uint32_t DMA_CCR2_MSIZE_B_0x1 = 1;
        /** @brief 32 bits */
    constexpr std::uint32_t DMA_CCR2_MSIZE_B_0x2 = 2;

    /** @brief priority level Note: this field is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1). */
    using DMA_CCR2_PL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: low (value: 0)
     *          - B_0x1: medium (value: 1)
     *          - B_0x2: high (value: 2)
     *          - B_0x3: very high (value: 3)
     */
        /** @brief low */
    constexpr std::uint32_t DMA_CCR2_PL_B_0x0 = 0;
        /** @brief medium */
    constexpr std::uint32_t DMA_CCR2_PL_B_0x1 = 1;
        /** @brief high */
    constexpr std::uint32_t DMA_CCR2_PL_B_0x2 = 2;
        /** @brief very high */
    constexpr std::uint32_t DMA_CCR2_PL_B_0x3 = 3;

    /** @brief memory-to-memory mode Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1). */
    using DMA_CCR2_MEM2MEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: disabled (value: 0)
     *          - B_0x1: enabled (value: 1)
     */
        /** @brief disabled */
    constexpr std::uint32_t DMA_CCR2_MEM2MEM_B_0x0 = 0;
        /** @brief enabled */
    constexpr std::uint32_t DMA_CCR2_MEM2MEM_B_0x1 = 1;

    /** @brief DMA channel x number of data register */
    using DMA_CNDTR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief number of data to transfer (0 to 216-1) This field is updated by hardware when the channel is enabled: It is decremented after each single DMA 'read followed by write' transfer, indicating the remaining amount of data items to transfer. It is kept at zero when the programmed amount of data to transfer is reached, if the channel is not in circular mode (CIRC=0 in the DMA_CCRx register). It is reloaded automatically by the previously programmed value, when the transfer is complete, if the channel is in circular mode (CIRC=1). If this field is zero, no transfer can be served whatever the channel status (enabled or not). Note: this field is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1). */
    using DMA_CNDTR2_NDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA channel x peripheral address register */
    using DMA_CPAR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief peripheral address It contains the base address of the peripheral data register from/to which the data will be read/written. When PSIZE[1:0]=01 (16 bits), bit 0 of PA[31:0] is ignored. Access is automatically aligned to a half-word address. When PSIZE=10 (32 bits), bits 1 and 0 of PA[31:0] are ignored. Access is automatically aligned to a word address. In memory-to-memory mode, this register identifies the memory destination address if DIR=1 and the memory source address if DIR=0. In peripheral-to-peripheral mode, this register identifies the peripheral destination address DIR=1 and the peripheral source address if DIR=0. Note: this register is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is not read-only when the channel is enabled (EN=1). */
    using DMA_CPAR2_PA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA channel x memory address register */
    using DMA_CMAR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief peripheral address It contains the base address of the memory from/to which the data will be read/written. When MSIZE[1:0]=01 (16 bits), bit 0 of MA[31:0] is ignored. Access is automatically aligned to a half-word address. When MSIZE=10 (32 bits), bits 1 and 0 of MA[31:0] are ignored. Access is automatically aligned to a word address. In memory-to-memory mode, this register identifies the memory source address if DIR=1 and the memory destination address if DIR=0. In peripheral-to-peripheral mode, this register identifies the peripheral source address DIR=1 and the peripheral destination address if DIR=0. Note: this register is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is not read-only when the channel is enabled (EN=1). */
    using DMA_CMAR2_MA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA channel 3 configuration register */
    using DMA_CCR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief channel enable When a channel transfer error occurs, this bit is cleared by hardware. It can not be set again by software (channel x re-activated) until the TEIFx bit of the DMA_ISR register is cleared (by setting the CTEIFx bit of the DMA_IFCR register). Note: this bit is set and cleared by software. */
    using DMA_CCR3_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: disabled (value: 0)
     *          - B_0x1: enabled (value: 1)
     */
        /** @brief disabled */
    constexpr std::uint32_t DMA_CCR3_EN_B_0x0 = 0;
        /** @brief enabled */
    constexpr std::uint32_t DMA_CCR3_EN_B_0x1 = 1;

    /** @brief transfer complete interrupt enable Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is not read-only when the channel is enabled (EN=1). */
    using DMA_CCR3_TCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: disabled (value: 0)
     *          - B_0x1: enabled (value: 1)
     */
        /** @brief disabled */
    constexpr std::uint32_t DMA_CCR3_TCIE_B_0x0 = 0;
        /** @brief enabled */
    constexpr std::uint32_t DMA_CCR3_TCIE_B_0x1 = 1;

    /** @brief half transfer interrupt enable Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is not read-only when the channel is enabled (EN=1). */
    using DMA_CCR3_HTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: disabled (value: 0)
     *          - B_0x1: enabled (value: 1)
     */
        /** @brief disabled */
    constexpr std::uint32_t DMA_CCR3_HTIE_B_0x0 = 0;
        /** @brief enabled */
    constexpr std::uint32_t DMA_CCR3_HTIE_B_0x1 = 1;

    /** @brief transfer error interrupt enable Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is not read-only when the channel is enabled (EN=1). */
    using DMA_CCR3_TEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: disabled (value: 0)
     *          - B_0x1: enabled (value: 1)
     */
        /** @brief disabled */
    constexpr std::uint32_t DMA_CCR3_TEIE_B_0x0 = 0;
        /** @brief enabled */
    constexpr std::uint32_t DMA_CCR3_TEIE_B_0x1 = 1;

    /** @brief data transfer direction This bit must be set only in memory-to-peripheral and peripheral-to-memory modes. Source attributes are defined by PSIZE and PINC, plus the DMA_CPARx register. This is still valid in a memory-to-memory mode. Destination attributes are defined by MSIZE and MINC, plus the DMA_CMARx register. This is still valid in a peripheral-to-peripheral mode. Destination attributes are defined by PSIZE and PINC, plus the DMA_CPARx register. This is still valid in a memory-to-memory mode. Source attributes are defined by MSIZE and MINC, plus the DMA_CMARx register. This is still valid in a peripheral-to-peripheral mode. Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1). */
    using DMA_CCR3_DIR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: read from peripheral (value: 0)
     *          - B_0x1: read from memory (value: 1)
     */
        /** @brief read from peripheral */
    constexpr std::uint32_t DMA_CCR3_DIR_B_0x0 = 0;
        /** @brief read from memory */
    constexpr std::uint32_t DMA_CCR3_DIR_B_0x1 = 1;

    /** @brief circular mode Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is not read-only when the channel is enabled (EN=1). */
    using DMA_CCR3_CIRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: disabled (value: 0)
     *          - B_0x1: enabled (value: 1)
     */
        /** @brief disabled */
    constexpr std::uint32_t DMA_CCR3_CIRC_B_0x0 = 0;
        /** @brief enabled */
    constexpr std::uint32_t DMA_CCR3_CIRC_B_0x1 = 1;

    /** @brief peripheral increment mode Defines the increment mode for each DMA transfer to the identified peripheral. n memory-to-memory mode, this field identifies the memory destination if DIR=1 and the memory source if DIR=0. In peripheral-to-peripheral mode, this field identifies the peripheral destination if DIR=1 and the peripheral source if DIR=0. Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1). */
    using DMA_CCR3_PINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: disabled (value: 0)
     *          - B_0x1: enabled (value: 1)
     */
        /** @brief disabled */
    constexpr std::uint32_t DMA_CCR3_PINC_B_0x0 = 0;
        /** @brief enabled */
    constexpr std::uint32_t DMA_CCR3_PINC_B_0x1 = 1;

    /** @brief memory increment mode Defines the increment mode for each DMA transfer to the identified memory. In memory-to-memory mode, this field identifies the memory source if DIR=1 and the memory destination if DIR=0. In peripheral-to-peripheral mode, this field identifies the peripheral source if DIR=1 and the peripheral destination if DIR=0. Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1). */
    using DMA_CCR3_MINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: disabled (value: 0)
     *          - B_0x1: enabled (value: 1)
     */
        /** @brief disabled */
    constexpr std::uint32_t DMA_CCR3_MINC_B_0x0 = 0;
        /** @brief enabled */
    constexpr std::uint32_t DMA_CCR3_MINC_B_0x1 = 1;

    /** @brief peripheral size Defines the data size of each DMA transfer to the identified peripheral. In memory-to-memory mode, this field identifies the memory destination if DIR=1 and the memory source if DIR=0. In peripheral-to-peripheral mode, this field identifies the peripheral destination if DIR=1 and the peripheral source if DIR=0. Note: this field is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1). */
    using DMA_CCR3_PSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 8 bits (value: 0)
     *          - B_0x1: 16 bits (value: 1)
     *          - B_0x2: 32 bits (value: 2)
     */
        /** @brief 8 bits */
    constexpr std::uint32_t DMA_CCR3_PSIZE_B_0x0 = 0;
        /** @brief 16 bits */
    constexpr std::uint32_t DMA_CCR3_PSIZE_B_0x1 = 1;
        /** @brief 32 bits */
    constexpr std::uint32_t DMA_CCR3_PSIZE_B_0x2 = 2;

    /** @brief memory size Defines the data size of each DMA transfer to the identified memory. In memory-to-memory mode, this field identifies the memory source if DIR=1 and the memory destination if DIR=0. In peripheral-to-peripheral mode, this field identifies the peripheral source if DIR=1 and the peripheral destination if DIR=0. Note: this field is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1). */
    using DMA_CCR3_MSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 8 bits (value: 0)
     *          - B_0x1: 16 bits (value: 1)
     *          - B_0x2: 32 bits (value: 2)
     */
        /** @brief 8 bits */
    constexpr std::uint32_t DMA_CCR3_MSIZE_B_0x0 = 0;
        /** @brief 16 bits */
    constexpr std::uint32_t DMA_CCR3_MSIZE_B_0x1 = 1;
        /** @brief 32 bits */
    constexpr std::uint32_t DMA_CCR3_MSIZE_B_0x2 = 2;

    /** @brief priority level Note: this field is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1). */
    using DMA_CCR3_PL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: low (value: 0)
     *          - B_0x1: medium (value: 1)
     *          - B_0x2: high (value: 2)
     *          - B_0x3: very high (value: 3)
     */
        /** @brief low */
    constexpr std::uint32_t DMA_CCR3_PL_B_0x0 = 0;
        /** @brief medium */
    constexpr std::uint32_t DMA_CCR3_PL_B_0x1 = 1;
        /** @brief high */
    constexpr std::uint32_t DMA_CCR3_PL_B_0x2 = 2;
        /** @brief very high */
    constexpr std::uint32_t DMA_CCR3_PL_B_0x3 = 3;

    /** @brief memory-to-memory mode Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1). */
    using DMA_CCR3_MEM2MEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: disabled (value: 0)
     *          - B_0x1: enabled (value: 1)
     */
        /** @brief disabled */
    constexpr std::uint32_t DMA_CCR3_MEM2MEM_B_0x0 = 0;
        /** @brief enabled */
    constexpr std::uint32_t DMA_CCR3_MEM2MEM_B_0x1 = 1;

    /** @brief DMA channel x configuration register */
    using DMA_CNDTR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief number of data to transfer (0 to 216-1) This field is updated by hardware when the channel is enabled: It is decremented after each single DMA 'read followed by write' transfer, indicating the remaining amount of data items to transfer. It is kept at zero when the programmed amount of data to transfer is reached, if the channel is not in circular mode (CIRC=0 in the DMA_CCRx register). It is reloaded automatically by the previously programmed value, when the transfer is complete, if the channel is in circular mode (CIRC=1). If this field is zero, no transfer can be served whatever the channel status (enabled or not). Note: this field is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1). */
    using DMA_CNDTR3_NDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA channel x peripheral address register */
    using DMA_CPAR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief peripheral address It contains the base address of the peripheral data register from/to which the data will be read/written. When PSIZE[1:0]=01 (16 bits), bit 0 of PA[31:0] is ignored. Access is automatically aligned to a half-word address. When PSIZE=10 (32 bits), bits 1 and 0 of PA[31:0] are ignored. Access is automatically aligned to a word address. In memory-to-memory mode, this register identifies the memory destination address if DIR=1 and the memory source address if DIR=0. In peripheral-to-peripheral mode, this register identifies the peripheral destination address DIR=1 and the peripheral source address if DIR=0. Note: this register is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is not read-only when the channel is enabled (EN=1). */
    using DMA_CPAR3_PA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA channel x memory address register */
    using DMA_CMAR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief peripheral address It contains the base address of the memory from/to which the data will be read/written. When MSIZE[1:0]=01 (16 bits), bit 0 of MA[31:0] is ignored. Access is automatically aligned to a half-word address. When MSIZE=10 (32 bits), bits 1 and 0 of MA[31:0] are ignored. Access is automatically aligned to a word address. In memory-to-memory mode, this register identifies the memory source address if DIR=1 and the memory destination address if DIR=0. In peripheral-to-peripheral mode, this register identifies the peripheral source address DIR=1 and the peripheral destination address if DIR=0. Note: this register is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is not read-only when the channel is enabled (EN=1). */
    using DMA_CMAR3_MA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA channel 4 configuration register */
    using DMA_CCR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief channel enable When a channel transfer error occurs, this bit is cleared by hardware. It can not be set again by software (channel x re-activated) until the TEIFx bit of the DMA_ISR register is cleared (by setting the CTEIFx bit of the DMA_IFCR register). Note: this bit is set and cleared by software. */
    using DMA_CCR4_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: disabled (value: 0)
     *          - B_0x1: enabled (value: 1)
     */
        /** @brief disabled */
    constexpr std::uint32_t DMA_CCR4_EN_B_0x0 = 0;
        /** @brief enabled */
    constexpr std::uint32_t DMA_CCR4_EN_B_0x1 = 1;

    /** @brief transfer complete interrupt enable Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is not read-only when the channel is enabled (EN=1). */
    using DMA_CCR4_TCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: disabled (value: 0)
     *          - B_0x1: enabled (value: 1)
     */
        /** @brief disabled */
    constexpr std::uint32_t DMA_CCR4_TCIE_B_0x0 = 0;
        /** @brief enabled */
    constexpr std::uint32_t DMA_CCR4_TCIE_B_0x1 = 1;

    /** @brief half transfer interrupt enable Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is not read-only when the channel is enabled (EN=1). */
    using DMA_CCR4_HTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: disabled (value: 0)
     *          - B_0x1: enabled (value: 1)
     */
        /** @brief disabled */
    constexpr std::uint32_t DMA_CCR4_HTIE_B_0x0 = 0;
        /** @brief enabled */
    constexpr std::uint32_t DMA_CCR4_HTIE_B_0x1 = 1;

    /** @brief transfer error interrupt enable Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is not read-only when the channel is enabled (EN=1). */
    using DMA_CCR4_TEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: disabled (value: 0)
     *          - B_0x1: enabled (value: 1)
     */
        /** @brief disabled */
    constexpr std::uint32_t DMA_CCR4_TEIE_B_0x0 = 0;
        /** @brief enabled */
    constexpr std::uint32_t DMA_CCR4_TEIE_B_0x1 = 1;

    /** @brief data transfer direction This bit must be set only in memory-to-peripheral and peripheral-to-memory modes. Source attributes are defined by PSIZE and PINC, plus the DMA_CPARx register. This is still valid in a memory-to-memory mode. Destination attributes are defined by MSIZE and MINC, plus the DMA_CMARx register. This is still valid in a peripheral-to-peripheral mode. Destination attributes are defined by PSIZE and PINC, plus the DMA_CPARx register. This is still valid in a memory-to-memory mode. Source attributes are defined by MSIZE and MINC, plus the DMA_CMARx register. This is still valid in a peripheral-to-peripheral mode. Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1). */
    using DMA_CCR4_DIR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: read from peripheral (value: 0)
     *          - B_0x1: read from memory (value: 1)
     */
        /** @brief read from peripheral */
    constexpr std::uint32_t DMA_CCR4_DIR_B_0x0 = 0;
        /** @brief read from memory */
    constexpr std::uint32_t DMA_CCR4_DIR_B_0x1 = 1;

    /** @brief circular mode Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is not read-only when the channel is enabled (EN=1). */
    using DMA_CCR4_CIRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: disabled (value: 0)
     *          - B_0x1: enabled (value: 1)
     */
        /** @brief disabled */
    constexpr std::uint32_t DMA_CCR4_CIRC_B_0x0 = 0;
        /** @brief enabled */
    constexpr std::uint32_t DMA_CCR4_CIRC_B_0x1 = 1;

    /** @brief peripheral increment mode Defines the increment mode for each DMA transfer to the identified peripheral. n memory-to-memory mode, this field identifies the memory destination if DIR=1 and the memory source if DIR=0. In peripheral-to-peripheral mode, this field identifies the peripheral destination if DIR=1 and the peripheral source if DIR=0. Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1). */
    using DMA_CCR4_PINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: disabled (value: 0)
     *          - B_0x1: enabled (value: 1)
     */
        /** @brief disabled */
    constexpr std::uint32_t DMA_CCR4_PINC_B_0x0 = 0;
        /** @brief enabled */
    constexpr std::uint32_t DMA_CCR4_PINC_B_0x1 = 1;

    /** @brief memory increment mode Defines the increment mode for each DMA transfer to the identified memory. In memory-to-memory mode, this field identifies the memory source if DIR=1 and the memory destination if DIR=0. In peripheral-to-peripheral mode, this field identifies the peripheral source if DIR=1 and the peripheral destination if DIR=0. Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1). */
    using DMA_CCR4_MINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: disabled (value: 0)
     *          - B_0x1: enabled (value: 1)
     */
        /** @brief disabled */
    constexpr std::uint32_t DMA_CCR4_MINC_B_0x0 = 0;
        /** @brief enabled */
    constexpr std::uint32_t DMA_CCR4_MINC_B_0x1 = 1;

    /** @brief peripheral size Defines the data size of each DMA transfer to the identified peripheral. In memory-to-memory mode, this field identifies the memory destination if DIR=1 and the memory source if DIR=0. In peripheral-to-peripheral mode, this field identifies the peripheral destination if DIR=1 and the peripheral source if DIR=0. Note: this field is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1). */
    using DMA_CCR4_PSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 8 bits (value: 0)
     *          - B_0x1: 16 bits (value: 1)
     *          - B_0x2: 32 bits (value: 2)
     */
        /** @brief 8 bits */
    constexpr std::uint32_t DMA_CCR4_PSIZE_B_0x0 = 0;
        /** @brief 16 bits */
    constexpr std::uint32_t DMA_CCR4_PSIZE_B_0x1 = 1;
        /** @brief 32 bits */
    constexpr std::uint32_t DMA_CCR4_PSIZE_B_0x2 = 2;

    /** @brief memory size Defines the data size of each DMA transfer to the identified memory. In memory-to-memory mode, this field identifies the memory source if DIR=1 and the memory destination if DIR=0. In peripheral-to-peripheral mode, this field identifies the peripheral source if DIR=1 and the peripheral destination if DIR=0. Note: this field is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1). */
    using DMA_CCR4_MSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 8 bits (value: 0)
     *          - B_0x1: 16 bits (value: 1)
     *          - B_0x2: 32 bits (value: 2)
     */
        /** @brief 8 bits */
    constexpr std::uint32_t DMA_CCR4_MSIZE_B_0x0 = 0;
        /** @brief 16 bits */
    constexpr std::uint32_t DMA_CCR4_MSIZE_B_0x1 = 1;
        /** @brief 32 bits */
    constexpr std::uint32_t DMA_CCR4_MSIZE_B_0x2 = 2;

    /** @brief priority level Note: this field is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1). */
    using DMA_CCR4_PL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: low (value: 0)
     *          - B_0x1: medium (value: 1)
     *          - B_0x2: high (value: 2)
     *          - B_0x3: very high (value: 3)
     */
        /** @brief low */
    constexpr std::uint32_t DMA_CCR4_PL_B_0x0 = 0;
        /** @brief medium */
    constexpr std::uint32_t DMA_CCR4_PL_B_0x1 = 1;
        /** @brief high */
    constexpr std::uint32_t DMA_CCR4_PL_B_0x2 = 2;
        /** @brief very high */
    constexpr std::uint32_t DMA_CCR4_PL_B_0x3 = 3;

    /** @brief memory-to-memory mode Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1). */
    using DMA_CCR4_MEM2MEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: disabled (value: 0)
     *          - B_0x1: enabled (value: 1)
     */
        /** @brief disabled */
    constexpr std::uint32_t DMA_CCR4_MEM2MEM_B_0x0 = 0;
        /** @brief enabled */
    constexpr std::uint32_t DMA_CCR4_MEM2MEM_B_0x1 = 1;

    /** @brief DMA channel x configuration register */
    using DMA_CNDTR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief number of data to transfer (0 to 216-1) This field is updated by hardware when the channel is enabled: It is decremented after each single DMA 'read followed by write' transfer, indicating the remaining amount of data items to transfer. It is kept at zero when the programmed amount of data to transfer is reached, if the channel is not in circular mode (CIRC=0 in the DMA_CCRx register). It is reloaded automatically by the previously programmed value, when the transfer is complete, if the channel is in circular mode (CIRC=1). If this field is zero, no transfer can be served whatever the channel status (enabled or not). Note: this field is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1). */
    using DMA_CNDTR4_NDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA channel x peripheral address register */
    using DMA_CPAR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief peripheral address It contains the base address of the peripheral data register from/to which the data will be read/written. When PSIZE[1:0]=01 (16 bits), bit 0 of PA[31:0] is ignored. Access is automatically aligned to a half-word address. When PSIZE=10 (32 bits), bits 1 and 0 of PA[31:0] are ignored. Access is automatically aligned to a word address. In memory-to-memory mode, this register identifies the memory destination address if DIR=1 and the memory source address if DIR=0. In peripheral-to-peripheral mode, this register identifies the peripheral destination address DIR=1 and the peripheral source address if DIR=0. Note: this register is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is not read-only when the channel is enabled (EN=1). */
    using DMA_CPAR4_PA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA channel x memory address register */
    using DMA_CMAR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief peripheral address It contains the base address of the memory from/to which the data will be read/written. When MSIZE[1:0]=01 (16 bits), bit 0 of MA[31:0] is ignored. Access is automatically aligned to a half-word address. When MSIZE=10 (32 bits), bits 1 and 0 of MA[31:0] are ignored. Access is automatically aligned to a word address. In memory-to-memory mode, this register identifies the memory source address if DIR=1 and the memory destination address if DIR=0. In peripheral-to-peripheral mode, this register identifies the peripheral source address DIR=1 and the peripheral destination address if DIR=0. Note: this register is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is not read-only when the channel is enabled (EN=1). */
    using DMA_CMAR4_MA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA channel 5 configuration register */
    using DMA_CCR5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x58, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief channel enable When a channel transfer error occurs, this bit is cleared by hardware. It can not be set again by software (channel x re-activated) until the TEIFx bit of the DMA_ISR register is cleared (by setting the CTEIFx bit of the DMA_IFCR register). Note: this bit is set and cleared by software. */
    using DMA_CCR5_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: disabled (value: 0)
     *          - B_0x1: enabled (value: 1)
     */
        /** @brief disabled */
    constexpr std::uint32_t DMA_CCR5_EN_B_0x0 = 0;
        /** @brief enabled */
    constexpr std::uint32_t DMA_CCR5_EN_B_0x1 = 1;

    /** @brief transfer complete interrupt enable Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is not read-only when the channel is enabled (EN=1). */
    using DMA_CCR5_TCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: disabled (value: 0)
     *          - B_0x1: enabled (value: 1)
     */
        /** @brief disabled */
    constexpr std::uint32_t DMA_CCR5_TCIE_B_0x0 = 0;
        /** @brief enabled */
    constexpr std::uint32_t DMA_CCR5_TCIE_B_0x1 = 1;

    /** @brief half transfer interrupt enable Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is not read-only when the channel is enabled (EN=1). */
    using DMA_CCR5_HTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: disabled (value: 0)
     *          - B_0x1: enabled (value: 1)
     */
        /** @brief disabled */
    constexpr std::uint32_t DMA_CCR5_HTIE_B_0x0 = 0;
        /** @brief enabled */
    constexpr std::uint32_t DMA_CCR5_HTIE_B_0x1 = 1;

    /** @brief transfer error interrupt enable Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is not read-only when the channel is enabled (EN=1). */
    using DMA_CCR5_TEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: disabled (value: 0)
     *          - B_0x1: enabled (value: 1)
     */
        /** @brief disabled */
    constexpr std::uint32_t DMA_CCR5_TEIE_B_0x0 = 0;
        /** @brief enabled */
    constexpr std::uint32_t DMA_CCR5_TEIE_B_0x1 = 1;

    /** @brief data transfer direction This bit must be set only in memory-to-peripheral and peripheral-to-memory modes. Source attributes are defined by PSIZE and PINC, plus the DMA_CPARx register. This is still valid in a memory-to-memory mode. Destination attributes are defined by MSIZE and MINC, plus the DMA_CMARx register. This is still valid in a peripheral-to-peripheral mode. Destination attributes are defined by PSIZE and PINC, plus the DMA_CPARx register. This is still valid in a memory-to-memory mode. Source attributes are defined by MSIZE and MINC, plus the DMA_CMARx register. This is still valid in a peripheral-to-peripheral mode. Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1). */
    using DMA_CCR5_DIR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: read from peripheral (value: 0)
     *          - B_0x1: read from memory (value: 1)
     */
        /** @brief read from peripheral */
    constexpr std::uint32_t DMA_CCR5_DIR_B_0x0 = 0;
        /** @brief read from memory */
    constexpr std::uint32_t DMA_CCR5_DIR_B_0x1 = 1;

    /** @brief circular mode Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is not read-only when the channel is enabled (EN=1). */
    using DMA_CCR5_CIRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: disabled (value: 0)
     *          - B_0x1: enabled (value: 1)
     */
        /** @brief disabled */
    constexpr std::uint32_t DMA_CCR5_CIRC_B_0x0 = 0;
        /** @brief enabled */
    constexpr std::uint32_t DMA_CCR5_CIRC_B_0x1 = 1;

    /** @brief peripheral increment mode Defines the increment mode for each DMA transfer to the identified peripheral. n memory-to-memory mode, this field identifies the memory destination if DIR=1 and the memory source if DIR=0. In peripheral-to-peripheral mode, this field identifies the peripheral destination if DIR=1 and the peripheral source if DIR=0. Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1). */
    using DMA_CCR5_PINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: disabled (value: 0)
     *          - B_0x1: enabled (value: 1)
     */
        /** @brief disabled */
    constexpr std::uint32_t DMA_CCR5_PINC_B_0x0 = 0;
        /** @brief enabled */
    constexpr std::uint32_t DMA_CCR5_PINC_B_0x1 = 1;

    /** @brief memory increment mode Defines the increment mode for each DMA transfer to the identified memory. In memory-to-memory mode, this field identifies the memory source if DIR=1 and the memory destination if DIR=0. In peripheral-to-peripheral mode, this field identifies the peripheral source if DIR=1 and the peripheral destination if DIR=0. Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1). */
    using DMA_CCR5_MINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: disabled (value: 0)
     *          - B_0x1: enabled (value: 1)
     */
        /** @brief disabled */
    constexpr std::uint32_t DMA_CCR5_MINC_B_0x0 = 0;
        /** @brief enabled */
    constexpr std::uint32_t DMA_CCR5_MINC_B_0x1 = 1;

    /** @brief peripheral size Defines the data size of each DMA transfer to the identified peripheral. In memory-to-memory mode, this field identifies the memory destination if DIR=1 and the memory source if DIR=0. In peripheral-to-peripheral mode, this field identifies the peripheral destination if DIR=1 and the peripheral source if DIR=0. Note: this field is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1). */
    using DMA_CCR5_PSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 8 bits (value: 0)
     *          - B_0x1: 16 bits (value: 1)
     *          - B_0x2: 32 bits (value: 2)
     */
        /** @brief 8 bits */
    constexpr std::uint32_t DMA_CCR5_PSIZE_B_0x0 = 0;
        /** @brief 16 bits */
    constexpr std::uint32_t DMA_CCR5_PSIZE_B_0x1 = 1;
        /** @brief 32 bits */
    constexpr std::uint32_t DMA_CCR5_PSIZE_B_0x2 = 2;

    /** @brief memory size Defines the data size of each DMA transfer to the identified memory. In memory-to-memory mode, this field identifies the memory source if DIR=1 and the memory destination if DIR=0. In peripheral-to-peripheral mode, this field identifies the peripheral source if DIR=1 and the peripheral destination if DIR=0. Note: this field is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1). */
    using DMA_CCR5_MSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 8 bits (value: 0)
     *          - B_0x1: 16 bits (value: 1)
     *          - B_0x2: 32 bits (value: 2)
     */
        /** @brief 8 bits */
    constexpr std::uint32_t DMA_CCR5_MSIZE_B_0x0 = 0;
        /** @brief 16 bits */
    constexpr std::uint32_t DMA_CCR5_MSIZE_B_0x1 = 1;
        /** @brief 32 bits */
    constexpr std::uint32_t DMA_CCR5_MSIZE_B_0x2 = 2;

    /** @brief priority level Note: this field is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1). */
    using DMA_CCR5_PL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: low (value: 0)
     *          - B_0x1: medium (value: 1)
     *          - B_0x2: high (value: 2)
     *          - B_0x3: very high (value: 3)
     */
        /** @brief low */
    constexpr std::uint32_t DMA_CCR5_PL_B_0x0 = 0;
        /** @brief medium */
    constexpr std::uint32_t DMA_CCR5_PL_B_0x1 = 1;
        /** @brief high */
    constexpr std::uint32_t DMA_CCR5_PL_B_0x2 = 2;
        /** @brief very high */
    constexpr std::uint32_t DMA_CCR5_PL_B_0x3 = 3;

    /** @brief memory-to-memory mode Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1). */
    using DMA_CCR5_MEM2MEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: disabled (value: 0)
     *          - B_0x1: enabled (value: 1)
     */
        /** @brief disabled */
    constexpr std::uint32_t DMA_CCR5_MEM2MEM_B_0x0 = 0;
        /** @brief enabled */
    constexpr std::uint32_t DMA_CCR5_MEM2MEM_B_0x1 = 1;

    /** @brief DMA channel x configuration register */
    using DMA_CNDTR5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief number of data to transfer (0 to 216-1) This field is updated by hardware when the channel is enabled: It is decremented after each single DMA 'read followed by write' transfer, indicating the remaining amount of data items to transfer. It is kept at zero when the programmed amount of data to transfer is reached, if the channel is not in circular mode (CIRC=0 in the DMA_CCRx register). It is reloaded automatically by the previously programmed value, when the transfer is complete, if the channel is in circular mode (CIRC=1). If this field is zero, no transfer can be served whatever the channel status (enabled or not). Note: this field is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1). */
    using DMA_CNDTR5_NDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA channel x peripheral address register */
    using DMA_CPAR5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief peripheral address It contains the base address of the peripheral data register from/to which the data will be read/written. When PSIZE[1:0]=01 (16 bits), bit 0 of PA[31:0] is ignored. Access is automatically aligned to a half-word address. When PSIZE=10 (32 bits), bits 1 and 0 of PA[31:0] are ignored. Access is automatically aligned to a word address. In memory-to-memory mode, this register identifies the memory destination address if DIR=1 and the memory source address if DIR=0. In peripheral-to-peripheral mode, this register identifies the peripheral destination address DIR=1 and the peripheral source address if DIR=0. Note: this register is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is not read-only when the channel is enabled (EN=1). */
    using DMA_CPAR5_PA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA channel x memory address register */
    using DMA_CMAR5 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x64, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief peripheral address It contains the base address of the memory from/to which the data will be read/written. When MSIZE[1:0]=01 (16 bits), bit 0 of MA[31:0] is ignored. Access is automatically aligned to a half-word address. When MSIZE=10 (32 bits), bits 1 and 0 of MA[31:0] are ignored. Access is automatically aligned to a word address. In memory-to-memory mode, this register identifies the memory source address if DIR=1 and the memory destination address if DIR=0. In peripheral-to-peripheral mode, this register identifies the peripheral source address DIR=1 and the peripheral destination address if DIR=0. Note: this register is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is not read-only when the channel is enabled (EN=1). */
    using DMA_CMAR5_MA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA channel 6 configuration register */
    using DMA_CCR6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief channel enable When a channel transfer error occurs, this bit is cleared by hardware. It can not be set again by software (channel x re-activated) until the TEIFx bit of the DMA_ISR register is cleared (by setting the CTEIFx bit of the DMA_IFCR register). Note: this bit is set and cleared by software. */
    using DMA_CCR6_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: disabled (value: 0)
     *          - B_0x1: enabled (value: 1)
     */
        /** @brief disabled */
    constexpr std::uint32_t DMA_CCR6_EN_B_0x0 = 0;
        /** @brief enabled */
    constexpr std::uint32_t DMA_CCR6_EN_B_0x1 = 1;

    /** @brief transfer complete interrupt enable Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is not read-only when the channel is enabled (EN=1). */
    using DMA_CCR6_TCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: disabled (value: 0)
     *          - B_0x1: enabled (value: 1)
     */
        /** @brief disabled */
    constexpr std::uint32_t DMA_CCR6_TCIE_B_0x0 = 0;
        /** @brief enabled */
    constexpr std::uint32_t DMA_CCR6_TCIE_B_0x1 = 1;

    /** @brief half transfer interrupt enable Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is not read-only when the channel is enabled (EN=1). */
    using DMA_CCR6_HTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: disabled (value: 0)
     *          - B_0x1: enabled (value: 1)
     */
        /** @brief disabled */
    constexpr std::uint32_t DMA_CCR6_HTIE_B_0x0 = 0;
        /** @brief enabled */
    constexpr std::uint32_t DMA_CCR6_HTIE_B_0x1 = 1;

    /** @brief transfer error interrupt enable Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is not read-only when the channel is enabled (EN=1). */
    using DMA_CCR6_TEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: disabled (value: 0)
     *          - B_0x1: enabled (value: 1)
     */
        /** @brief disabled */
    constexpr std::uint32_t DMA_CCR6_TEIE_B_0x0 = 0;
        /** @brief enabled */
    constexpr std::uint32_t DMA_CCR6_TEIE_B_0x1 = 1;

    /** @brief data transfer direction This bit must be set only in memory-to-peripheral and peripheral-to-memory modes. Source attributes are defined by PSIZE and PINC, plus the DMA_CPARx register. This is still valid in a memory-to-memory mode. Destination attributes are defined by MSIZE and MINC, plus the DMA_CMARx register. This is still valid in a peripheral-to-peripheral mode. Destination attributes are defined by PSIZE and PINC, plus the DMA_CPARx register. This is still valid in a memory-to-memory mode. Source attributes are defined by MSIZE and MINC, plus the DMA_CMARx register. This is still valid in a peripheral-to-peripheral mode. Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1). */
    using DMA_CCR6_DIR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: read from peripheral (value: 0)
     *          - B_0x1: read from memory (value: 1)
     */
        /** @brief read from peripheral */
    constexpr std::uint32_t DMA_CCR6_DIR_B_0x0 = 0;
        /** @brief read from memory */
    constexpr std::uint32_t DMA_CCR6_DIR_B_0x1 = 1;

    /** @brief circular mode Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is not read-only when the channel is enabled (EN=1). */
    using DMA_CCR6_CIRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: disabled (value: 0)
     *          - B_0x1: enabled (value: 1)
     */
        /** @brief disabled */
    constexpr std::uint32_t DMA_CCR6_CIRC_B_0x0 = 0;
        /** @brief enabled */
    constexpr std::uint32_t DMA_CCR6_CIRC_B_0x1 = 1;

    /** @brief peripheral increment mode Defines the increment mode for each DMA transfer to the identified peripheral. n memory-to-memory mode, this field identifies the memory destination if DIR=1 and the memory source if DIR=0. In peripheral-to-peripheral mode, this field identifies the peripheral destination if DIR=1 and the peripheral source if DIR=0. Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1). */
    using DMA_CCR6_PINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: disabled (value: 0)
     *          - B_0x1: enabled (value: 1)
     */
        /** @brief disabled */
    constexpr std::uint32_t DMA_CCR6_PINC_B_0x0 = 0;
        /** @brief enabled */
    constexpr std::uint32_t DMA_CCR6_PINC_B_0x1 = 1;

    /** @brief memory increment mode Defines the increment mode for each DMA transfer to the identified memory. In memory-to-memory mode, this field identifies the memory source if DIR=1 and the memory destination if DIR=0. In peripheral-to-peripheral mode, this field identifies the peripheral source if DIR=1 and the peripheral destination if DIR=0. Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1). */
    using DMA_CCR6_MINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: disabled (value: 0)
     *          - B_0x1: enabled (value: 1)
     */
        /** @brief disabled */
    constexpr std::uint32_t DMA_CCR6_MINC_B_0x0 = 0;
        /** @brief enabled */
    constexpr std::uint32_t DMA_CCR6_MINC_B_0x1 = 1;

    /** @brief peripheral size Defines the data size of each DMA transfer to the identified peripheral. In memory-to-memory mode, this field identifies the memory destination if DIR=1 and the memory source if DIR=0. In peripheral-to-peripheral mode, this field identifies the peripheral destination if DIR=1 and the peripheral source if DIR=0. Note: this field is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1). */
    using DMA_CCR6_PSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 8 bits (value: 0)
     *          - B_0x1: 16 bits (value: 1)
     *          - B_0x2: 32 bits (value: 2)
     */
        /** @brief 8 bits */
    constexpr std::uint32_t DMA_CCR6_PSIZE_B_0x0 = 0;
        /** @brief 16 bits */
    constexpr std::uint32_t DMA_CCR6_PSIZE_B_0x1 = 1;
        /** @brief 32 bits */
    constexpr std::uint32_t DMA_CCR6_PSIZE_B_0x2 = 2;

    /** @brief memory size Defines the data size of each DMA transfer to the identified memory. In memory-to-memory mode, this field identifies the memory source if DIR=1 and the memory destination if DIR=0. In peripheral-to-peripheral mode, this field identifies the peripheral source if DIR=1 and the peripheral destination if DIR=0. Note: this field is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1). */
    using DMA_CCR6_MSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 8 bits (value: 0)
     *          - B_0x1: 16 bits (value: 1)
     *          - B_0x2: 32 bits (value: 2)
     */
        /** @brief 8 bits */
    constexpr std::uint32_t DMA_CCR6_MSIZE_B_0x0 = 0;
        /** @brief 16 bits */
    constexpr std::uint32_t DMA_CCR6_MSIZE_B_0x1 = 1;
        /** @brief 32 bits */
    constexpr std::uint32_t DMA_CCR6_MSIZE_B_0x2 = 2;

    /** @brief priority level Note: this field is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1). */
    using DMA_CCR6_PL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: low (value: 0)
     *          - B_0x1: medium (value: 1)
     *          - B_0x2: high (value: 2)
     *          - B_0x3: very high (value: 3)
     */
        /** @brief low */
    constexpr std::uint32_t DMA_CCR6_PL_B_0x0 = 0;
        /** @brief medium */
    constexpr std::uint32_t DMA_CCR6_PL_B_0x1 = 1;
        /** @brief high */
    constexpr std::uint32_t DMA_CCR6_PL_B_0x2 = 2;
        /** @brief very high */
    constexpr std::uint32_t DMA_CCR6_PL_B_0x3 = 3;

    /** @brief memory-to-memory mode Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1). */
    using DMA_CCR6_MEM2MEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: disabled (value: 0)
     *          - B_0x1: enabled (value: 1)
     */
        /** @brief disabled */
    constexpr std::uint32_t DMA_CCR6_MEM2MEM_B_0x0 = 0;
        /** @brief enabled */
    constexpr std::uint32_t DMA_CCR6_MEM2MEM_B_0x1 = 1;

    /** @brief DMA channel x configuration register */
    using DMA_CNDTR6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x70, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief number of data to transfer (0 to 216-1) This field is updated by hardware when the channel is enabled: It is decremented after each single DMA 'read followed by write' transfer, indicating the remaining amount of data items to transfer. It is kept at zero when the programmed amount of data to transfer is reached, if the channel is not in circular mode (CIRC=0 in the DMA_CCRx register). It is reloaded automatically by the previously programmed value, when the transfer is complete, if the channel is in circular mode (CIRC=1). If this field is zero, no transfer can be served whatever the channel status (enabled or not). Note: this field is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1). */
    using DMA_CNDTR6_NDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA channel x peripheral address register */
    using DMA_CPAR6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x74, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief peripheral address It contains the base address of the peripheral data register from/to which the data will be read/written. When PSIZE[1:0]=01 (16 bits), bit 0 of PA[31:0] is ignored. Access is automatically aligned to a half-word address. When PSIZE=10 (32 bits), bits 1 and 0 of PA[31:0] are ignored. Access is automatically aligned to a word address. In memory-to-memory mode, this register identifies the memory destination address if DIR=1 and the memory source address if DIR=0. In peripheral-to-peripheral mode, this register identifies the peripheral destination address DIR=1 and the peripheral source address if DIR=0. Note: this register is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is not read-only when the channel is enabled (EN=1). */
    using DMA_CPAR6_PA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA channel x memory address register */
    using DMA_CMAR6 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x78, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief peripheral address It contains the base address of the memory from/to which the data will be read/written. When MSIZE[1:0]=01 (16 bits), bit 0 of MA[31:0] is ignored. Access is automatically aligned to a half-word address. When MSIZE=10 (32 bits), bits 1 and 0 of MA[31:0] are ignored. Access is automatically aligned to a word address. In memory-to-memory mode, this register identifies the memory source address if DIR=1 and the memory destination address if DIR=0. In peripheral-to-peripheral mode, this register identifies the peripheral source address DIR=1 and the peripheral destination address if DIR=0. Note: this register is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is not read-only when the channel is enabled (EN=1). */
    using DMA_CMAR6_MA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA channel 7 configuration register */
    using DMA_CCR7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x80, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief channel enable When a channel transfer error occurs, this bit is cleared by hardware. It can not be set again by software (channel x re-activated) until the TEIFx bit of the DMA_ISR register is cleared (by setting the CTEIFx bit of the DMA_IFCR register). Note: this bit is set and cleared by software. */
    using DMA_CCR7_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: disabled (value: 0)
     *          - B_0x1: enabled (value: 1)
     */
        /** @brief disabled */
    constexpr std::uint32_t DMA_CCR7_EN_B_0x0 = 0;
        /** @brief enabled */
    constexpr std::uint32_t DMA_CCR7_EN_B_0x1 = 1;

    /** @brief transfer complete interrupt enable Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is not read-only when the channel is enabled (EN=1). */
    using DMA_CCR7_TCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: disabled (value: 0)
     *          - B_0x1: enabled (value: 1)
     */
        /** @brief disabled */
    constexpr std::uint32_t DMA_CCR7_TCIE_B_0x0 = 0;
        /** @brief enabled */
    constexpr std::uint32_t DMA_CCR7_TCIE_B_0x1 = 1;

    /** @brief half transfer interrupt enable Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is not read-only when the channel is enabled (EN=1). */
    using DMA_CCR7_HTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: disabled (value: 0)
     *          - B_0x1: enabled (value: 1)
     */
        /** @brief disabled */
    constexpr std::uint32_t DMA_CCR7_HTIE_B_0x0 = 0;
        /** @brief enabled */
    constexpr std::uint32_t DMA_CCR7_HTIE_B_0x1 = 1;

    /** @brief transfer error interrupt enable Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is not read-only when the channel is enabled (EN=1). */
    using DMA_CCR7_TEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: disabled (value: 0)
     *          - B_0x1: enabled (value: 1)
     */
        /** @brief disabled */
    constexpr std::uint32_t DMA_CCR7_TEIE_B_0x0 = 0;
        /** @brief enabled */
    constexpr std::uint32_t DMA_CCR7_TEIE_B_0x1 = 1;

    /** @brief data transfer direction This bit must be set only in memory-to-peripheral and peripheral-to-memory modes. Source attributes are defined by PSIZE and PINC, plus the DMA_CPARx register. This is still valid in a memory-to-memory mode. Destination attributes are defined by MSIZE and MINC, plus the DMA_CMARx register. This is still valid in a peripheral-to-peripheral mode. Destination attributes are defined by PSIZE and PINC, plus the DMA_CPARx register. This is still valid in a memory-to-memory mode. Source attributes are defined by MSIZE and MINC, plus the DMA_CMARx register. This is still valid in a peripheral-to-peripheral mode. Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1). */
    using DMA_CCR7_DIR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: read from peripheral (value: 0)
     *          - B_0x1: read from memory (value: 1)
     */
        /** @brief read from peripheral */
    constexpr std::uint32_t DMA_CCR7_DIR_B_0x0 = 0;
        /** @brief read from memory */
    constexpr std::uint32_t DMA_CCR7_DIR_B_0x1 = 1;

    /** @brief circular mode Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is not read-only when the channel is enabled (EN=1). */
    using DMA_CCR7_CIRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: disabled (value: 0)
     *          - B_0x1: enabled (value: 1)
     */
        /** @brief disabled */
    constexpr std::uint32_t DMA_CCR7_CIRC_B_0x0 = 0;
        /** @brief enabled */
    constexpr std::uint32_t DMA_CCR7_CIRC_B_0x1 = 1;

    /** @brief peripheral increment mode Defines the increment mode for each DMA transfer to the identified peripheral. n memory-to-memory mode, this field identifies the memory destination if DIR=1 and the memory source if DIR=0. In peripheral-to-peripheral mode, this field identifies the peripheral destination if DIR=1 and the peripheral source if DIR=0. Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1). */
    using DMA_CCR7_PINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: disabled (value: 0)
     *          - B_0x1: enabled (value: 1)
     */
        /** @brief disabled */
    constexpr std::uint32_t DMA_CCR7_PINC_B_0x0 = 0;
        /** @brief enabled */
    constexpr std::uint32_t DMA_CCR7_PINC_B_0x1 = 1;

    /** @brief memory increment mode Defines the increment mode for each DMA transfer to the identified memory. In memory-to-memory mode, this field identifies the memory source if DIR=1 and the memory destination if DIR=0. In peripheral-to-peripheral mode, this field identifies the peripheral source if DIR=1 and the peripheral destination if DIR=0. Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1). */
    using DMA_CCR7_MINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: disabled (value: 0)
     *          - B_0x1: enabled (value: 1)
     */
        /** @brief disabled */
    constexpr std::uint32_t DMA_CCR7_MINC_B_0x0 = 0;
        /** @brief enabled */
    constexpr std::uint32_t DMA_CCR7_MINC_B_0x1 = 1;

    /** @brief peripheral size Defines the data size of each DMA transfer to the identified peripheral. In memory-to-memory mode, this field identifies the memory destination if DIR=1 and the memory source if DIR=0. In peripheral-to-peripheral mode, this field identifies the peripheral destination if DIR=1 and the peripheral source if DIR=0. Note: this field is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1). */
    using DMA_CCR7_PSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 8 bits (value: 0)
     *          - B_0x1: 16 bits (value: 1)
     *          - B_0x2: 32 bits (value: 2)
     */
        /** @brief 8 bits */
    constexpr std::uint32_t DMA_CCR7_PSIZE_B_0x0 = 0;
        /** @brief 16 bits */
    constexpr std::uint32_t DMA_CCR7_PSIZE_B_0x1 = 1;
        /** @brief 32 bits */
    constexpr std::uint32_t DMA_CCR7_PSIZE_B_0x2 = 2;

    /** @brief memory size Defines the data size of each DMA transfer to the identified memory. In memory-to-memory mode, this field identifies the memory source if DIR=1 and the memory destination if DIR=0. In peripheral-to-peripheral mode, this field identifies the peripheral source if DIR=1 and the peripheral destination if DIR=0. Note: this field is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1). */
    using DMA_CCR7_MSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 8 bits (value: 0)
     *          - B_0x1: 16 bits (value: 1)
     *          - B_0x2: 32 bits (value: 2)
     */
        /** @brief 8 bits */
    constexpr std::uint32_t DMA_CCR7_MSIZE_B_0x0 = 0;
        /** @brief 16 bits */
    constexpr std::uint32_t DMA_CCR7_MSIZE_B_0x1 = 1;
        /** @brief 32 bits */
    constexpr std::uint32_t DMA_CCR7_MSIZE_B_0x2 = 2;

    /** @brief priority level Note: this field is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1). */
    using DMA_CCR7_PL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: low (value: 0)
     *          - B_0x1: medium (value: 1)
     *          - B_0x2: high (value: 2)
     *          - B_0x3: very high (value: 3)
     */
        /** @brief low */
    constexpr std::uint32_t DMA_CCR7_PL_B_0x0 = 0;
        /** @brief medium */
    constexpr std::uint32_t DMA_CCR7_PL_B_0x1 = 1;
        /** @brief high */
    constexpr std::uint32_t DMA_CCR7_PL_B_0x2 = 2;
        /** @brief very high */
    constexpr std::uint32_t DMA_CCR7_PL_B_0x3 = 3;

    /** @brief memory-to-memory mode Note: this bit is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1). */
    using DMA_CCR7_MEM2MEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: disabled (value: 0)
     *          - B_0x1: enabled (value: 1)
     */
        /** @brief disabled */
    constexpr std::uint32_t DMA_CCR7_MEM2MEM_B_0x0 = 0;
        /** @brief enabled */
    constexpr std::uint32_t DMA_CCR7_MEM2MEM_B_0x1 = 1;

    /** @brief DMA channel x configuration register */
    using DMA_CNDTR7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x84, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief number of data to transfer (0 to 216-1) This field is updated by hardware when the channel is enabled: It is decremented after each single DMA 'read followed by write' transfer, indicating the remaining amount of data items to transfer. It is kept at zero when the programmed amount of data to transfer is reached, if the channel is not in circular mode (CIRC=0 in the DMA_CCRx register). It is reloaded automatically by the previously programmed value, when the transfer is complete, if the channel is in circular mode (CIRC=1). If this field is zero, no transfer can be served whatever the channel status (enabled or not). Note: this field is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is read-only when the channel is enabled (EN=1). */
    using DMA_CNDTR7_NDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA channel x peripheral address register */
    using DMA_CPAR7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x88, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief peripheral address It contains the base address of the peripheral data register from/to which the data will be read/written. When PSIZE[1:0]=01 (16 bits), bit 0 of PA[31:0] is ignored. Access is automatically aligned to a half-word address. When PSIZE=10 (32 bits), bits 1 and 0 of PA[31:0] are ignored. Access is automatically aligned to a word address. In memory-to-memory mode, this register identifies the memory destination address if DIR=1 and the memory source address if DIR=0. In peripheral-to-peripheral mode, this register identifies the peripheral destination address DIR=1 and the peripheral source address if DIR=0. Note: this register is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is not read-only when the channel is enabled (EN=1). */
    using DMA_CPAR7_PA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA channel x memory address register */
    using DMA_CMAR7 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief peripheral address It contains the base address of the memory from/to which the data will be read/written. When MSIZE[1:0]=01 (16 bits), bit 0 of MA[31:0] is ignored. Access is automatically aligned to a half-word address. When MSIZE=10 (32 bits), bits 1 and 0 of MA[31:0] are ignored. Access is automatically aligned to a word address. In memory-to-memory mode, this register identifies the memory source address if DIR=1 and the memory destination address if DIR=0. In peripheral-to-peripheral mode, this register identifies the peripheral source address DIR=1 and the peripheral destination address if DIR=0. Note: this register is set and cleared by software. It must not be written when the channel is enabled (EN = 1). It is not read-only when the channel is enabled (EN=1). */
    using DMA_CMAR7_MA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
