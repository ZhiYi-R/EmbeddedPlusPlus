/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32U535_GPDMA1_HPP
#define EMBEDDED_PP_STM32U535_GPDMA1_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief GPDMA1 */
namespace STM32U535::GPDMA1 {

    /** @brief GPDMA secure configuration register */
    using GPDMA_SECCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC0 */
    using GPDMA_SECCFGR_SEC0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC1 */
    using GPDMA_SECCFGR_SEC1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC2 */
    using GPDMA_SECCFGR_SEC2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC3 */
    using GPDMA_SECCFGR_SEC3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC4 */
    using GPDMA_SECCFGR_SEC4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC5 */
    using GPDMA_SECCFGR_SEC5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC6 */
    using GPDMA_SECCFGR_SEC6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC7 */
    using GPDMA_SECCFGR_SEC7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC8 */
    using GPDMA_SECCFGR_SEC8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC9 */
    using GPDMA_SECCFGR_SEC9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC10 */
    using GPDMA_SECCFGR_SEC10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC11 */
    using GPDMA_SECCFGR_SEC11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC12 */
    using GPDMA_SECCFGR_SEC12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC13 */
    using GPDMA_SECCFGR_SEC13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC14 */
    using GPDMA_SECCFGR_SEC14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SEC15 */
    using GPDMA_SECCFGR_SEC15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA privileged configuration register */
    using GPDMA_PRIVCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV0 */
    using GPDMA_PRIVCFGR_PRIV0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV1 */
    using GPDMA_PRIVCFGR_PRIV1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV2 */
    using GPDMA_PRIVCFGR_PRIV2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV3 */
    using GPDMA_PRIVCFGR_PRIV3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV4 */
    using GPDMA_PRIVCFGR_PRIV4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV5 */
    using GPDMA_PRIVCFGR_PRIV5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV6 */
    using GPDMA_PRIVCFGR_PRIV6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV7 */
    using GPDMA_PRIVCFGR_PRIV7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV8 */
    using GPDMA_PRIVCFGR_PRIV8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV9 */
    using GPDMA_PRIVCFGR_PRIV9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV10 */
    using GPDMA_PRIVCFGR_PRIV10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV11 */
    using GPDMA_PRIVCFGR_PRIV11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV12 */
    using GPDMA_PRIVCFGR_PRIV12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV13 */
    using GPDMA_PRIVCFGR_PRIV13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV14 */
    using GPDMA_PRIVCFGR_PRIV14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PRIV15 */
    using GPDMA_PRIVCFGR_PRIV15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA configuration lock register */
    using GPDMA_RCFGLOCKR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LOCK0 */
    using GPDMA_RCFGLOCKR_LOCK0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LOCK1 */
    using GPDMA_RCFGLOCKR_LOCK1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LOCK2 */
    using GPDMA_RCFGLOCKR_LOCK2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LOCK3 */
    using GPDMA_RCFGLOCKR_LOCK3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LOCK4 */
    using GPDMA_RCFGLOCKR_LOCK4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LOCK5 */
    using GPDMA_RCFGLOCKR_LOCK5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LOCK6 */
    using GPDMA_RCFGLOCKR_LOCK6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LOCK7 */
    using GPDMA_RCFGLOCKR_LOCK7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LOCK8 */
    using GPDMA_RCFGLOCKR_LOCK8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LOCK9 */
    using GPDMA_RCFGLOCKR_LOCK9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LOCK10 */
    using GPDMA_RCFGLOCKR_LOCK10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LOCK11 */
    using GPDMA_RCFGLOCKR_LOCK11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LOCK12 */
    using GPDMA_RCFGLOCKR_LOCK12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LOCK13 */
    using GPDMA_RCFGLOCKR_LOCK13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LOCK14 */
    using GPDMA_RCFGLOCKR_LOCK14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LOCK15 */
    using GPDMA_RCFGLOCKR_LOCK15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA non-secure masked interrupt status register */
    using GPDMA_MISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MIS0 */
    using GPDMA_MISR_MIS0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MIS1 */
    using GPDMA_MISR_MIS1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MIS2 */
    using GPDMA_MISR_MIS2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MIS3 */
    using GPDMA_MISR_MIS3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MIS4 */
    using GPDMA_MISR_MIS4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MIS5 */
    using GPDMA_MISR_MIS5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MIS6 */
    using GPDMA_MISR_MIS6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MIS7 */
    using GPDMA_MISR_MIS7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MIS8 */
    using GPDMA_MISR_MIS8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MIS9 */
    using GPDMA_MISR_MIS9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MIS10 */
    using GPDMA_MISR_MIS10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MIS11 */
    using GPDMA_MISR_MIS11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MIS12 */
    using GPDMA_MISR_MIS12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MIS13 */
    using GPDMA_MISR_MIS13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MIS14 */
    using GPDMA_MISR_MIS14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MIS15 */
    using GPDMA_MISR_MIS15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA secure masked interrupt status register */
    using GPDMA_SMISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MIS0 */
    using GPDMA_SMISR_MIS0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MIS1 */
    using GPDMA_SMISR_MIS1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MIS2 */
    using GPDMA_SMISR_MIS2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MIS3 */
    using GPDMA_SMISR_MIS3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MIS4 */
    using GPDMA_SMISR_MIS4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MIS5 */
    using GPDMA_SMISR_MIS5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MIS6 */
    using GPDMA_SMISR_MIS6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MIS7 */
    using GPDMA_SMISR_MIS7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MIS8 */
    using GPDMA_SMISR_MIS8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MIS9 */
    using GPDMA_SMISR_MIS9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MIS10 */
    using GPDMA_SMISR_MIS10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MIS11 */
    using GPDMA_SMISR_MIS11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MIS12 */
    using GPDMA_SMISR_MIS12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MIS13 */
    using GPDMA_SMISR_MIS13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MIS14 */
    using GPDMA_SMISR_MIS14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MIS15 */
    using GPDMA_SMISR_MIS15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 0 linked-list base address register */
    using GPDMA_C0LBAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief linked-list base address of GPDMA channel x */
    using GPDMA_C0LBAR_LBA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 0 flag clear register */
    using GPDMA_C0FCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transfer complete flag clear */
    using GPDMA_C0FCR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding TCF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C0FCR_TCF_B_0x0 = 0;
        /** @brief corresponding TCF flag cleared */
    constexpr std::uint32_t GPDMA_C0FCR_TCF_B_0x1 = 1;

    /** @brief half transfer flag clear */
    using GPDMA_C0FCR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding HTF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C0FCR_HTF_B_0x0 = 0;
        /** @brief corresponding HTF flag cleared */
    constexpr std::uint32_t GPDMA_C0FCR_HTF_B_0x1 = 1;

    /** @brief data transfer error flag clear */
    using GPDMA_C0FCR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding DTEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C0FCR_DTEF_B_0x0 = 0;
        /** @brief corresponding DTEF flag cleared */
    constexpr std::uint32_t GPDMA_C0FCR_DTEF_B_0x1 = 1;

    /** @brief update link transfer error flag clear */
    using GPDMA_C0FCR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding ULEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C0FCR_ULEF_B_0x0 = 0;
        /** @brief corresponding ULEF flag cleared */
    constexpr std::uint32_t GPDMA_C0FCR_ULEF_B_0x1 = 1;

    /** @brief user setting error flag clear */
    using GPDMA_C0FCR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding USEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C0FCR_USEF_B_0x0 = 0;
        /** @brief corresponding USEF flag cleared */
    constexpr std::uint32_t GPDMA_C0FCR_USEF_B_0x1 = 1;

    /** @brief completed suspension flag clear */
    using GPDMA_C0FCR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding SUSPF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C0FCR_SUSPF_B_0x0 = 0;
        /** @brief corresponding SUSPF flag cleared */
    constexpr std::uint32_t GPDMA_C0FCR_SUSPF_B_0x1 = 1;

    /** @brief trigger overrun flag clear */
    using GPDMA_C0FCR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding TOF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C0FCR_TOF_B_0x0 = 0;
        /** @brief corresponding TOF flag cleared */
    constexpr std::uint32_t GPDMA_C0FCR_TOF_B_0x1 = 1;

    /** @brief GPDMA channel 0 status register */
    using GPDMA_C0SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief idle flag */
    using GPDMA_C0SR_IDLEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: channel not in idle state (value: 0)
     *          - B_0x1: channel in idle state (value: 1)
     */
        /** @brief channel not in idle state */
    constexpr std::uint32_t GPDMA_C0SR_IDLEF_B_0x0 = 0;
        /** @brief channel in idle state */
    constexpr std::uint32_t GPDMA_C0SR_IDLEF_B_0x1 = 1;

    /** @brief transfer complete flag */
    using GPDMA_C0SR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no transfer complete event (value: 0)
     *          - B_0x1: a transfer complete event occurred (value: 1)
     */
        /** @brief no transfer complete event */
    constexpr std::uint32_t GPDMA_C0SR_TCF_B_0x0 = 0;
        /** @brief a transfer complete event occurred */
    constexpr std::uint32_t GPDMA_C0SR_TCF_B_0x1 = 1;

    /** @brief half transfer flag */
    using GPDMA_C0SR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no half transfer event (value: 0)
     *          - B_0x1: an half transfer event occurred (value: 1)
     */
        /** @brief no half transfer event */
    constexpr std::uint32_t GPDMA_C0SR_HTF_B_0x0 = 0;
        /** @brief an half transfer event occurred */
    constexpr std::uint32_t GPDMA_C0SR_HTF_B_0x1 = 1;

    /** @brief data transfer error flag */
    using GPDMA_C0SR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no data transfer error event (value: 0)
     *          - B_0x1: a master bus error event occurred on a data transfer (value: 1)
     */
        /** @brief no data transfer error event */
    constexpr std::uint32_t GPDMA_C0SR_DTEF_B_0x0 = 0;
        /** @brief a master bus error event occurred on a data transfer */
    constexpr std::uint32_t GPDMA_C0SR_DTEF_B_0x1 = 1;

    /** @brief update link transfer error flag */
    using GPDMA_C0SR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no update link transfer error event (value: 0)
     *          - B_0x1: a master bus error event occurred while updating a linked-list register from memory (value: 1)
     */
        /** @brief no update link transfer error event */
    constexpr std::uint32_t GPDMA_C0SR_ULEF_B_0x0 = 0;
        /** @brief a master bus error event occurred while updating a linked-list register from memory */
    constexpr std::uint32_t GPDMA_C0SR_ULEF_B_0x1 = 1;

    /** @brief user setting error flag */
    using GPDMA_C0SR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no user setting error event (value: 0)
     *          - B_0x1: a user setting error event occurred (value: 1)
     */
        /** @brief no user setting error event */
    constexpr std::uint32_t GPDMA_C0SR_USEF_B_0x0 = 0;
        /** @brief a user setting error event occurred */
    constexpr std::uint32_t GPDMA_C0SR_USEF_B_0x1 = 1;

    /** @brief completed suspension flag */
    using GPDMA_C0SR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no completed suspension event (value: 0)
     *          - B_0x1: a completed suspension event occurred (value: 1)
     */
        /** @brief no completed suspension event */
    constexpr std::uint32_t GPDMA_C0SR_SUSPF_B_0x0 = 0;
        /** @brief a completed suspension event occurred */
    constexpr std::uint32_t GPDMA_C0SR_SUSPF_B_0x1 = 1;

    /** @brief trigger overrun flag */
    using GPDMA_C0SR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no trigger overrun event (value: 0)
     *          - B_0x1: a trigger overrun event occurred (value: 1)
     */
        /** @brief no trigger overrun event */
    constexpr std::uint32_t GPDMA_C0SR_TOF_B_0x0 = 0;
        /** @brief a trigger overrun event occurred */
    constexpr std::uint32_t GPDMA_C0SR_TOF_B_0x1 = 1;

    /** @brief monitored FIFO level */
    using GPDMA_C0SR_FIFOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 0 control register */
    using GPDMA_C0CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x64, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief enable */
    using GPDMA_C0CR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write: ignored, read: channel disabled (value: 0)
     *          - B_0x1: write: enable channel, read: channel enabled (value: 1)
     */
        /** @brief write: ignored, read: channel disabled */
    constexpr std::uint32_t GPDMA_C0CR_EN_B_0x0 = 0;
        /** @brief write: enable channel, read: channel enabled */
    constexpr std::uint32_t GPDMA_C0CR_EN_B_0x1 = 1;

    /** @brief reset */
    using GPDMA_C0CR_RESET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no channel reset (value: 0)
     *          - B_0x1: channel reset (value: 1)
     */
        /** @brief no channel reset */
    constexpr std::uint32_t GPDMA_C0CR_RESET_B_0x0 = 0;
        /** @brief channel reset */
    constexpr std::uint32_t GPDMA_C0CR_RESET_B_0x1 = 1;

    /** @brief suspend */
    using GPDMA_C0CR_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write: resume channel, read: channel not suspended (value: 0)
     *          - B_0x1: write: suspend channel, read: channel suspended. (value: 1)
     */
        /** @brief write: resume channel, read: channel not suspended */
    constexpr std::uint32_t GPDMA_C0CR_SUSP_B_0x0 = 0;
        /** @brief write: suspend channel, read: channel suspended. */
    constexpr std::uint32_t GPDMA_C0CR_SUSP_B_0x1 = 1;

    /** @brief transfer complete interrupt enable */
    using GPDMA_C0CR_TCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C0CR_TCIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C0CR_TCIE_B_0x1 = 1;

    /** @brief half transfer complete interrupt enable */
    using GPDMA_C0CR_HTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C0CR_HTIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C0CR_HTIE_B_0x1 = 1;

    /** @brief data transfer error interrupt enable */
    using GPDMA_C0CR_DTEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C0CR_DTEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C0CR_DTEIE_B_0x1 = 1;

    /** @brief update link transfer error interrupt enable */
    using GPDMA_C0CR_ULEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C0CR_ULEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C0CR_ULEIE_B_0x1 = 1;

    /** @brief user setting error interrupt enable */
    using GPDMA_C0CR_USEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C0CR_USEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C0CR_USEIE_B_0x1 = 1;

    /** @brief completed suspension interrupt enable */
    using GPDMA_C0CR_SUSPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C0CR_SUSPIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C0CR_SUSPIE_B_0x1 = 1;

    /** @brief trigger overrun interrupt enable */
    using GPDMA_C0CR_TOIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C0CR_TOIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C0CR_TOIE_B_0x1 = 1;

    /** @brief Link step mode */
    using GPDMA_C0CR_LSM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: channel executed for the full linked-list and completed at the end of the last LLI (GPDMA_CxLLR=0). The 16 low-significant bits of the link address are null (LA[15:0]=0) and all the update bits are null (UT1=UB1=UT2=USA=UDA=ULL=0 and UT3=UB2=0 if present). Then GPDMA_CxBR1.BNDT[15:0]=0 and GPDMA_CxBR1.BRC[10:0]=0 if present. (value: 0)
     *          - B_0x1: channel executed once for the current LLI (value: 1)
     */
        /** @brief channel executed for the full linked-list and completed at the end of the last LLI (GPDMA_CxLLR=0). The 16 low-significant bits of the link address are null (LA[15:0]=0) and all the update bits are null (UT1=UB1=UT2=USA=UDA=ULL=0 and UT3=UB2=0 if present). Then GPDMA_CxBR1.BNDT[15:0]=0 and GPDMA_CxBR1.BRC[10:0]=0 if present. */
    constexpr std::uint32_t GPDMA_C0CR_LSM_B_0x0 = 0;
        /** @brief channel executed once for the current LLI */
    constexpr std::uint32_t GPDMA_C0CR_LSM_B_0x1 = 1;

    /** @brief linked-list allocated port */
    using GPDMA_C0CR_LAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C0CR_LAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C0CR_LAP_B_0x1 = 1;

    /** @brief priority level of the channel x GPDMA transfer versus others */
    using GPDMA_C0CR_PRIO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: low priority, low weight (value: 0)
     *          - B_0x1: low priority, mid weight (value: 1)
     *          - B_0x2: low priority, high weight (value: 2)
     *          - B_0x3: high priority (value: 3)
     */
        /** @brief low priority, low weight */
    constexpr std::uint32_t GPDMA_C0CR_PRIO_B_0x0 = 0;
        /** @brief low priority, mid weight */
    constexpr std::uint32_t GPDMA_C0CR_PRIO_B_0x1 = 1;
        /** @brief low priority, high weight */
    constexpr std::uint32_t GPDMA_C0CR_PRIO_B_0x2 = 2;
        /** @brief high priority */
    constexpr std::uint32_t GPDMA_C0CR_PRIO_B_0x3 = 3;

    /** @brief GPDMA channel 0 transfer register 1 */
    using GPDMA_C0TR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x90, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief binary logarithm of the source data width of a burst in bytes */
    using GPDMA_C0TR1_SDW_LOG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: byte (value: 0)
     *          - B_0x1: half-word (2 bytes) (value: 1)
     *          - B_0x2: word (4 bytes) (value: 2)
     *          - B_0x3: user setting error reported and no transfer issued (value: 3)
     */
        /** @brief byte */
    constexpr std::uint32_t GPDMA_C0TR1_SDW_LOG2_B_0x0 = 0;
        /** @brief half-word (2 bytes) */
    constexpr std::uint32_t GPDMA_C0TR1_SDW_LOG2_B_0x1 = 1;
        /** @brief word (4 bytes) */
    constexpr std::uint32_t GPDMA_C0TR1_SDW_LOG2_B_0x2 = 2;
        /** @brief user setting error reported and no transfer issued */
    constexpr std::uint32_t GPDMA_C0TR1_SDW_LOG2_B_0x3 = 3;

    /** @brief source incrementing burst */
    using GPDMA_C0TR1_SINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fixed burst (value: 0)
     *          - B_0x1: contiguously incremented burst (value: 1)
     */
        /** @brief fixed burst */
    constexpr std::uint32_t GPDMA_C0TR1_SINC_B_0x0 = 0;
        /** @brief contiguously incremented burst */
    constexpr std::uint32_t GPDMA_C0TR1_SINC_B_0x1 = 1;

    /** @brief source burst length minus 1, between 0 and 63 */
    using GPDMA_C0TR1_SBL_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief padding/alignment mode */
    using GPDMA_C0TR1_PAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: source data is transferred as right aligned, padded with 0s up to the destination data width (value: 0)
     *          - B_0x1: source data is transferred as right aligned, sign extended up to the destination data width (value: 1)
     */
        /** @brief source data is transferred as right aligned, padded with 0s up to the destination data width */
    constexpr std::uint32_t GPDMA_C0TR1_PAM_B_0x0 = 0;
        /** @brief source data is transferred as right aligned, sign extended up to the destination data width */
    constexpr std::uint32_t GPDMA_C0TR1_PAM_B_0x1 = 1;

    /** @brief source byte exchange within the unaligned half-word of each source word */
    using GPDMA_C0TR1_SBX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no byte-based exchange within the unaligned half-word of each source word (value: 0)
     *          - B_0x1: the two consecutive bytes within the unaligned half-word of each source word are exchanged. (value: 1)
     */
        /** @brief no byte-based exchange within the unaligned half-word of each source word */
    constexpr std::uint32_t GPDMA_C0TR1_SBX_B_0x0 = 0;
        /** @brief the two consecutive bytes within the unaligned half-word of each source word are exchanged. */
    constexpr std::uint32_t GPDMA_C0TR1_SBX_B_0x1 = 1;

    /** @brief source allocated port */
    using GPDMA_C0TR1_SAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C0TR1_SAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C0TR1_SAP_B_0x1 = 1;

    /** @brief security attribute of the GPDMA transfer from the source */
    using GPDMA_C0TR1_SSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPDMA transfer non-secure (value: 0)
     *          - B_0x1: GPDMA transfer secure (value: 1)
     */
        /** @brief GPDMA transfer non-secure */
    constexpr std::uint32_t GPDMA_C0TR1_SSEC_B_0x0 = 0;
        /** @brief GPDMA transfer secure */
    constexpr std::uint32_t GPDMA_C0TR1_SSEC_B_0x1 = 1;

    /** @brief binary logarithm of the destination data width of a burst, in bytes */
    using GPDMA_C0TR1_DDW_LOG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: byte (value: 0)
     *          - B_0x1: half-word (2 bytes) (value: 1)
     *          - B_0x2: word (4 bytes) (value: 2)
     *          - B_0x3: user setting error reported and no transfer issued (value: 3)
     */
        /** @brief byte */
    constexpr std::uint32_t GPDMA_C0TR1_DDW_LOG2_B_0x0 = 0;
        /** @brief half-word (2 bytes) */
    constexpr std::uint32_t GPDMA_C0TR1_DDW_LOG2_B_0x1 = 1;
        /** @brief word (4 bytes) */
    constexpr std::uint32_t GPDMA_C0TR1_DDW_LOG2_B_0x2 = 2;
        /** @brief user setting error reported and no transfer issued */
    constexpr std::uint32_t GPDMA_C0TR1_DDW_LOG2_B_0x3 = 3;

    /** @brief destination incrementing burst */
    using GPDMA_C0TR1_DINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fixed burst (value: 0)
     *          - B_0x1: contiguously incremented burst (value: 1)
     */
        /** @brief fixed burst */
    constexpr std::uint32_t GPDMA_C0TR1_DINC_B_0x0 = 0;
        /** @brief contiguously incremented burst */
    constexpr std::uint32_t GPDMA_C0TR1_DINC_B_0x1 = 1;

    /** @brief destination burst length minus 1, between 0 and 63 */
    using GPDMA_C0TR1_DBL_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination byte exchange */
    using GPDMA_C0TR1_DBX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no byte-based exchange within half-word (value: 0)
     *          - B_0x1: the two consecutive (post PAM) bytes are exchanged in each destination half-word. (value: 1)
     */
        /** @brief no byte-based exchange within half-word */
    constexpr std::uint32_t GPDMA_C0TR1_DBX_B_0x0 = 0;
        /** @brief the two consecutive (post PAM) bytes are exchanged in each destination half-word. */
    constexpr std::uint32_t GPDMA_C0TR1_DBX_B_0x1 = 1;

    /** @brief destination half-word exchange */
    using GPDMA_C0TR1_DHX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no halfword-based exchanged within word (value: 0)
     *          - B_0x1: the two consecutive (post PAM) half-words are exchanged in each destination word. (value: 1)
     */
        /** @brief no halfword-based exchanged within word */
    constexpr std::uint32_t GPDMA_C0TR1_DHX_B_0x0 = 0;
        /** @brief the two consecutive (post PAM) half-words are exchanged in each destination word. */
    constexpr std::uint32_t GPDMA_C0TR1_DHX_B_0x1 = 1;

    /** @brief destination allocated port */
    using GPDMA_C0TR1_DAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C0TR1_DAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C0TR1_DAP_B_0x1 = 1;

    /** @brief security attribute of the GPDMA transfer to the destination */
    using GPDMA_C0TR1_DSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPDMA transfer non-secure (value: 0)
     *          - B_0x1: GPDMA transfer secure (value: 1)
     */
        /** @brief GPDMA transfer non-secure */
    constexpr std::uint32_t GPDMA_C0TR1_DSEC_B_0x0 = 0;
        /** @brief GPDMA transfer secure */
    constexpr std::uint32_t GPDMA_C0TR1_DSEC_B_0x1 = 1;

    /** @brief GPDMA channel 0 transfer register 2 */
    using GPDMA_C0TR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x94, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA hardware request selection */
    using GPDMA_C0TR2_REQSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief software request */
    using GPDMA_C0TR2_SWREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no software request. The selected hardware request REQSEL[6:0] is taken into account. (value: 0)
     *          - B_0x1: software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[6:0] is ignored. (value: 1)
     */
        /** @brief no software request. The selected hardware request REQSEL[6:0] is taken into account. */
    constexpr std::uint32_t GPDMA_C0TR2_SWREQ_B_0x0 = 0;
        /** @brief software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[6:0] is ignored. */
    constexpr std::uint32_t GPDMA_C0TR2_SWREQ_B_0x1 = 1;

    /** @brief destination hardware request */
    using GPDMA_C0TR2_DREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: selected hardware request driven by a source peripheral (request signal taken into account by the GPDMA transfer scheduler over the source/read port) (value: 0)
     *          - B_0x1: selected hardware request driven by a destination peripheral (request signal taken into account by the GPDMA transfer scheduler over the destination/write port) (value: 1)
     */
        /** @brief selected hardware request driven by a source peripheral (request signal taken into account by the GPDMA transfer scheduler over the source/read port) */
    constexpr std::uint32_t GPDMA_C0TR2_DREQ_B_0x0 = 0;
        /** @brief selected hardware request driven by a destination peripheral (request signal taken into account by the GPDMA transfer scheduler over the destination/write port) */
    constexpr std::uint32_t GPDMA_C0TR2_DREQ_B_0x1 = 1;

    /** @brief Block hardware request */
    using GPDMA_C0TR2_BREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a burst level. (value: 0)
     *          - B_0x1: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see ). (value: 1)
     */
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a burst level. */
    constexpr std::uint32_t GPDMA_C0TR2_BREQ_B_0x0 = 0;
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see ). */
    constexpr std::uint32_t GPDMA_C0TR2_BREQ_B_0x1 = 1;

    /** @brief trigger mode */
    using GPDMA_C0TR2_TRIGM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: at block level: the first burst read of each block transfer is conditioned by one hit trigger (channel x = 12 to 15, for each block if a 2D/repeated block is configured with GPDMA_CxBR1.BRC[10:0] different to 0). (value: 0)
     *          - B_0x1: channel x = 0 to 11, same as 00; channel x=12 to 15, at 2D/repeated block level, the (value: 1)
     *          - B_0x2: at link level: a LLI link transfer is conditioned by one hit trigger. The LLI data transfer (if any) is not conditioned. (value: 2)
     *          - B_0x3: at programmed burst level: If SWREQ = 1, each programmed burst read is conditioned by one hit trigger. If SWREQ=0, each programmed burst that is requested by the selected peripheral, is conditioned by one hit trigger. (value: 3)
     */
        /** @brief at block level: the first burst read of each block transfer is conditioned by one hit trigger (channel x = 12 to 15, for each block if a 2D/repeated block is configured with GPDMA_CxBR1.BRC[10:0] different to 0). */
    constexpr std::uint32_t GPDMA_C0TR2_TRIGM_B_0x0 = 0;
        /** @brief channel x = 0 to 11, same as 00; channel x=12 to 15, at 2D/repeated block level, the */
    constexpr std::uint32_t GPDMA_C0TR2_TRIGM_B_0x1 = 1;
        /** @brief at link level: a LLI link transfer is conditioned by one hit trigger. The LLI data transfer (if any) is not conditioned. */
    constexpr std::uint32_t GPDMA_C0TR2_TRIGM_B_0x2 = 2;
        /** @brief at programmed burst level: If SWREQ = 1, each programmed burst read is conditioned by one hit trigger. If SWREQ=0, each programmed burst that is requested by the selected peripheral, is conditioned by one hit trigger. */
    constexpr std::uint32_t GPDMA_C0TR2_TRIGM_B_0x3 = 3;

    /** @brief trigger event input selection */
    using GPDMA_C0TR2_TRIGSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief trigger event polarity */
    using GPDMA_C0TR2_TRIGPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no trigger (masked trigger event) (value: 0)
     *          - B_0x1: trigger on the rising edge (value: 1)
     *          - B_0x2: trigger on the falling edge (value: 2)
     *          - B_0x3: same as 00 (value: 3)
     */
        /** @brief no trigger (masked trigger event) */
    constexpr std::uint32_t GPDMA_C0TR2_TRIGPOL_B_0x0 = 0;
        /** @brief trigger on the rising edge */
    constexpr std::uint32_t GPDMA_C0TR2_TRIGPOL_B_0x1 = 1;
        /** @brief trigger on the falling edge */
    constexpr std::uint32_t GPDMA_C0TR2_TRIGPOL_B_0x2 = 2;
        /** @brief same as 00 */
    constexpr std::uint32_t GPDMA_C0TR2_TRIGPOL_B_0x3 = 3;

    /** @brief transfer complete event mode */
    using GPDMA_C0TR2_TCEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: at block level (when GPDMA_CxBR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. (value: 0)
     *          - B_0x1: channel x = 0 to 11, same as 00; channel x=12 to 15, at 2D/repeated block level (when GPDMA_CxBR1.BRC[10:0]= 0 and GPDMA_CxBR1.BNDT[15:0]= 0), the complete (and the half) transfer event is generated at the end (respectively half of the end) of the 2D/repeated block. (value: 1)
     *          - B_0x2: at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer (the LLI data transfer being a block transfer or a 2D/repeated block transfer for channel x = 12 to 15), if any data transfer. (value: 2)
     *          - B_0x3: at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address GPDMA_CxLLR.LA[15:2] to zero and clears all the GPDMA_CxLLR update bits (UT1, UT2, UB1, USA, UDA and ULL, plus UT3 and UB2 if present). If the channel transfer is continuous/infinite, no event is generated. (value: 3)
     */
        /** @brief at block level (when GPDMA_CxBR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. */
    constexpr std::uint32_t GPDMA_C0TR2_TCEM_B_0x0 = 0;
        /** @brief channel x = 0 to 11, same as 00; channel x=12 to 15, at 2D/repeated block level (when GPDMA_CxBR1.BRC[10:0]= 0 and GPDMA_CxBR1.BNDT[15:0]= 0), the complete (and the half) transfer event is generated at the end (respectively half of the end) of the 2D/repeated block. */
    constexpr std::uint32_t GPDMA_C0TR2_TCEM_B_0x1 = 1;
        /** @brief at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer (the LLI data transfer being a block transfer or a 2D/repeated block transfer for channel x = 12 to 15), if any data transfer. */
    constexpr std::uint32_t GPDMA_C0TR2_TCEM_B_0x2 = 2;
        /** @brief at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address GPDMA_CxLLR.LA[15:2] to zero and clears all the GPDMA_CxLLR update bits (UT1, UT2, UB1, USA, UDA and ULL, plus UT3 and UB2 if present). If the channel transfer is continuous/infinite, no event is generated. */
    constexpr std::uint32_t GPDMA_C0TR2_TCEM_B_0x3 = 3;

    /** @brief GPDMA channel 0 block register 1 */
    using GPDMA_C0BR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x98, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief block number of data bytes to transfer from the source */
    using GPDMA_C0BR1_BNDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 0 source address register */
    using GPDMA_C0SAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x9C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief source address */
    using GPDMA_C0SAR_SA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 0 destination address register */
    using GPDMA_C0DAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xA0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination address */
    using GPDMA_C0DAR_DA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 0 linked-list address register */
    using GPDMA_C0LLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xCC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pointer (16-bit low-significant address) to the next linked-list data structure */
    using GPDMA_C0LLR_LA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxLLR register from memory */
    using GPDMA_C0LLR_ULL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxLLR update (value: 0)
     *          - B_0x1: GPDMA_CxLLR update (value: 1)
     */
        /** @brief no GPDMA_CxLLR update */
    constexpr std::uint32_t GPDMA_C0LLR_ULL_B_0x0 = 0;
        /** @brief GPDMA_CxLLR update */
    constexpr std::uint32_t GPDMA_C0LLR_ULL_B_0x1 = 1;

    /** @brief Update GPDMA_CxDAR register from memory */
    using GPDMA_C0LLR_UDA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxDAR update (value: 0)
     *          - B_0x1: GPDMA_CxDAR update (value: 1)
     */
        /** @brief no GPDMA_CxDAR update */
    constexpr std::uint32_t GPDMA_C0LLR_UDA_B_0x0 = 0;
        /** @brief GPDMA_CxDAR update */
    constexpr std::uint32_t GPDMA_C0LLR_UDA_B_0x1 = 1;

    /** @brief update GPDMA_CxSAR from memory */
    using GPDMA_C0LLR_USA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxSAR update (value: 0)
     *          - B_0x1: GPDMA_CxSAR update (value: 1)
     */
        /** @brief no GPDMA_CxSAR update */
    constexpr std::uint32_t GPDMA_C0LLR_USA_B_0x0 = 0;
        /** @brief GPDMA_CxSAR update */
    constexpr std::uint32_t GPDMA_C0LLR_USA_B_0x1 = 1;

    /** @brief Update GPDMA_CxBR1 from memory */
    using GPDMA_C0LLR_UB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxBR1 update from memory (GPDMA_CxBR1.BNDT[15:0] restored if any link transfer) (value: 0)
     *          - B_0x1: GPDMA_CxBR1 update (value: 1)
     */
        /** @brief no GPDMA_CxBR1 update from memory (GPDMA_CxBR1.BNDT[15:0] restored if any link transfer) */
    constexpr std::uint32_t GPDMA_C0LLR_UB1_B_0x0 = 0;
        /** @brief GPDMA_CxBR1 update */
    constexpr std::uint32_t GPDMA_C0LLR_UB1_B_0x1 = 1;

    /** @brief Update GPDMA_CxTR2 from memory */
    using GPDMA_C0LLR_UT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxTR2 update (value: 0)
     *          - B_0x1: GPDMA_CxTR2 update (value: 1)
     */
        /** @brief no GPDMA_CxTR2 update */
    constexpr std::uint32_t GPDMA_C0LLR_UT2_B_0x0 = 0;
        /** @brief GPDMA_CxTR2 update */
    constexpr std::uint32_t GPDMA_C0LLR_UT2_B_0x1 = 1;

    /** @brief Update GPDMA_CxTR1 from memory */
    using GPDMA_C0LLR_UT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxTR1 update (value: 0)
     *          - B_0x1: GPDMA_CxTR1 update (value: 1)
     */
        /** @brief no GPDMA_CxTR1 update */
    constexpr std::uint32_t GPDMA_C0LLR_UT1_B_0x0 = 0;
        /** @brief GPDMA_CxTR1 update */
    constexpr std::uint32_t GPDMA_C0LLR_UT1_B_0x1 = 1;

    /** @brief GPDMA channel 1 linked-list base address register */
    using GPDMA_C1LBAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xD0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief linked-list base address of GPDMA channel x */
    using GPDMA_C1LBAR_LBA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 1 flag clear register */
    using GPDMA_C1FCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xDC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transfer complete flag clear */
    using GPDMA_C1FCR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding TCF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C1FCR_TCF_B_0x0 = 0;
        /** @brief corresponding TCF flag cleared */
    constexpr std::uint32_t GPDMA_C1FCR_TCF_B_0x1 = 1;

    /** @brief half transfer flag clear */
    using GPDMA_C1FCR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding HTF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C1FCR_HTF_B_0x0 = 0;
        /** @brief corresponding HTF flag cleared */
    constexpr std::uint32_t GPDMA_C1FCR_HTF_B_0x1 = 1;

    /** @brief data transfer error flag clear */
    using GPDMA_C1FCR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding DTEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C1FCR_DTEF_B_0x0 = 0;
        /** @brief corresponding DTEF flag cleared */
    constexpr std::uint32_t GPDMA_C1FCR_DTEF_B_0x1 = 1;

    /** @brief update link transfer error flag clear */
    using GPDMA_C1FCR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding ULEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C1FCR_ULEF_B_0x0 = 0;
        /** @brief corresponding ULEF flag cleared */
    constexpr std::uint32_t GPDMA_C1FCR_ULEF_B_0x1 = 1;

    /** @brief user setting error flag clear */
    using GPDMA_C1FCR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding USEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C1FCR_USEF_B_0x0 = 0;
        /** @brief corresponding USEF flag cleared */
    constexpr std::uint32_t GPDMA_C1FCR_USEF_B_0x1 = 1;

    /** @brief completed suspension flag clear */
    using GPDMA_C1FCR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding SUSPF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C1FCR_SUSPF_B_0x0 = 0;
        /** @brief corresponding SUSPF flag cleared */
    constexpr std::uint32_t GPDMA_C1FCR_SUSPF_B_0x1 = 1;

    /** @brief trigger overrun flag clear */
    using GPDMA_C1FCR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding TOF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C1FCR_TOF_B_0x0 = 0;
        /** @brief corresponding TOF flag cleared */
    constexpr std::uint32_t GPDMA_C1FCR_TOF_B_0x1 = 1;

    /** @brief GPDMA channel 1 status register */
    using GPDMA_C1SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xE0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief idle flag */
    using GPDMA_C1SR_IDLEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: channel not in idle state (value: 0)
     *          - B_0x1: channel in idle state (value: 1)
     */
        /** @brief channel not in idle state */
    constexpr std::uint32_t GPDMA_C1SR_IDLEF_B_0x0 = 0;
        /** @brief channel in idle state */
    constexpr std::uint32_t GPDMA_C1SR_IDLEF_B_0x1 = 1;

    /** @brief transfer complete flag */
    using GPDMA_C1SR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no transfer complete event (value: 0)
     *          - B_0x1: a transfer complete event occurred (value: 1)
     */
        /** @brief no transfer complete event */
    constexpr std::uint32_t GPDMA_C1SR_TCF_B_0x0 = 0;
        /** @brief a transfer complete event occurred */
    constexpr std::uint32_t GPDMA_C1SR_TCF_B_0x1 = 1;

    /** @brief half transfer flag */
    using GPDMA_C1SR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no half transfer event (value: 0)
     *          - B_0x1: an half transfer event occurred (value: 1)
     */
        /** @brief no half transfer event */
    constexpr std::uint32_t GPDMA_C1SR_HTF_B_0x0 = 0;
        /** @brief an half transfer event occurred */
    constexpr std::uint32_t GPDMA_C1SR_HTF_B_0x1 = 1;

    /** @brief data transfer error flag */
    using GPDMA_C1SR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no data transfer error event (value: 0)
     *          - B_0x1: a master bus error event occurred on a data transfer (value: 1)
     */
        /** @brief no data transfer error event */
    constexpr std::uint32_t GPDMA_C1SR_DTEF_B_0x0 = 0;
        /** @brief a master bus error event occurred on a data transfer */
    constexpr std::uint32_t GPDMA_C1SR_DTEF_B_0x1 = 1;

    /** @brief update link transfer error flag */
    using GPDMA_C1SR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no update link transfer error event (value: 0)
     *          - B_0x1: a master bus error event occurred while updating a linked-list register from memory (value: 1)
     */
        /** @brief no update link transfer error event */
    constexpr std::uint32_t GPDMA_C1SR_ULEF_B_0x0 = 0;
        /** @brief a master bus error event occurred while updating a linked-list register from memory */
    constexpr std::uint32_t GPDMA_C1SR_ULEF_B_0x1 = 1;

    /** @brief user setting error flag */
    using GPDMA_C1SR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no user setting error event (value: 0)
     *          - B_0x1: a user setting error event occurred (value: 1)
     */
        /** @brief no user setting error event */
    constexpr std::uint32_t GPDMA_C1SR_USEF_B_0x0 = 0;
        /** @brief a user setting error event occurred */
    constexpr std::uint32_t GPDMA_C1SR_USEF_B_0x1 = 1;

    /** @brief completed suspension flag */
    using GPDMA_C1SR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no completed suspension event (value: 0)
     *          - B_0x1: a completed suspension event occurred (value: 1)
     */
        /** @brief no completed suspension event */
    constexpr std::uint32_t GPDMA_C1SR_SUSPF_B_0x0 = 0;
        /** @brief a completed suspension event occurred */
    constexpr std::uint32_t GPDMA_C1SR_SUSPF_B_0x1 = 1;

    /** @brief trigger overrun flag */
    using GPDMA_C1SR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no trigger overrun event (value: 0)
     *          - B_0x1: a trigger overrun event occurred (value: 1)
     */
        /** @brief no trigger overrun event */
    constexpr std::uint32_t GPDMA_C1SR_TOF_B_0x0 = 0;
        /** @brief a trigger overrun event occurred */
    constexpr std::uint32_t GPDMA_C1SR_TOF_B_0x1 = 1;

    /** @brief monitored FIFO level */
    using GPDMA_C1SR_FIFOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 1 control register */
    using GPDMA_C1CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xE4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief enable */
    using GPDMA_C1CR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write: ignored, read: channel disabled (value: 0)
     *          - B_0x1: write: enable channel, read: channel enabled (value: 1)
     */
        /** @brief write: ignored, read: channel disabled */
    constexpr std::uint32_t GPDMA_C1CR_EN_B_0x0 = 0;
        /** @brief write: enable channel, read: channel enabled */
    constexpr std::uint32_t GPDMA_C1CR_EN_B_0x1 = 1;

    /** @brief reset */
    using GPDMA_C1CR_RESET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no channel reset (value: 0)
     *          - B_0x1: channel reset (value: 1)
     */
        /** @brief no channel reset */
    constexpr std::uint32_t GPDMA_C1CR_RESET_B_0x0 = 0;
        /** @brief channel reset */
    constexpr std::uint32_t GPDMA_C1CR_RESET_B_0x1 = 1;

    /** @brief suspend */
    using GPDMA_C1CR_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write: resume channel, read: channel not suspended (value: 0)
     *          - B_0x1: write: suspend channel, read: channel suspended. (value: 1)
     */
        /** @brief write: resume channel, read: channel not suspended */
    constexpr std::uint32_t GPDMA_C1CR_SUSP_B_0x0 = 0;
        /** @brief write: suspend channel, read: channel suspended. */
    constexpr std::uint32_t GPDMA_C1CR_SUSP_B_0x1 = 1;

    /** @brief transfer complete interrupt enable */
    using GPDMA_C1CR_TCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C1CR_TCIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C1CR_TCIE_B_0x1 = 1;

    /** @brief half transfer complete interrupt enable */
    using GPDMA_C1CR_HTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C1CR_HTIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C1CR_HTIE_B_0x1 = 1;

    /** @brief data transfer error interrupt enable */
    using GPDMA_C1CR_DTEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C1CR_DTEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C1CR_DTEIE_B_0x1 = 1;

    /** @brief update link transfer error interrupt enable */
    using GPDMA_C1CR_ULEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C1CR_ULEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C1CR_ULEIE_B_0x1 = 1;

    /** @brief user setting error interrupt enable */
    using GPDMA_C1CR_USEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C1CR_USEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C1CR_USEIE_B_0x1 = 1;

    /** @brief completed suspension interrupt enable */
    using GPDMA_C1CR_SUSPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C1CR_SUSPIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C1CR_SUSPIE_B_0x1 = 1;

    /** @brief trigger overrun interrupt enable */
    using GPDMA_C1CR_TOIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C1CR_TOIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C1CR_TOIE_B_0x1 = 1;

    /** @brief Link step mode */
    using GPDMA_C1CR_LSM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: channel executed for the full linked-list and completed at the end of the last LLI (GPDMA_CxLLR=0). The 16 low-significant bits of the link address are null (LA[15:0]=0) and all the update bits are null (UT1=UB1=UT2=USA=UDA=ULL=0 and UT3=UB2=0 if present). Then GPDMA_CxBR1.BNDT[15:0]=0 and GPDMA_CxBR1.BRC[10:0]=0 if present. (value: 0)
     *          - B_0x1: channel executed once for the current LLI (value: 1)
     */
        /** @brief channel executed for the full linked-list and completed at the end of the last LLI (GPDMA_CxLLR=0). The 16 low-significant bits of the link address are null (LA[15:0]=0) and all the update bits are null (UT1=UB1=UT2=USA=UDA=ULL=0 and UT3=UB2=0 if present). Then GPDMA_CxBR1.BNDT[15:0]=0 and GPDMA_CxBR1.BRC[10:0]=0 if present. */
    constexpr std::uint32_t GPDMA_C1CR_LSM_B_0x0 = 0;
        /** @brief channel executed once for the current LLI */
    constexpr std::uint32_t GPDMA_C1CR_LSM_B_0x1 = 1;

    /** @brief linked-list allocated port */
    using GPDMA_C1CR_LAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C1CR_LAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C1CR_LAP_B_0x1 = 1;

    /** @brief priority level of the channel x GPDMA transfer versus others */
    using GPDMA_C1CR_PRIO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: low priority, low weight (value: 0)
     *          - B_0x1: low priority, mid weight (value: 1)
     *          - B_0x2: low priority, high weight (value: 2)
     *          - B_0x3: high priority (value: 3)
     */
        /** @brief low priority, low weight */
    constexpr std::uint32_t GPDMA_C1CR_PRIO_B_0x0 = 0;
        /** @brief low priority, mid weight */
    constexpr std::uint32_t GPDMA_C1CR_PRIO_B_0x1 = 1;
        /** @brief low priority, high weight */
    constexpr std::uint32_t GPDMA_C1CR_PRIO_B_0x2 = 2;
        /** @brief high priority */
    constexpr std::uint32_t GPDMA_C1CR_PRIO_B_0x3 = 3;

    /** @brief GPDMA channel 1 transfer register 1 */
    using GPDMA_C1TR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x110, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief binary logarithm of the source data width of a burst in bytes */
    using GPDMA_C1TR1_SDW_LOG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: byte (value: 0)
     *          - B_0x1: half-word (2 bytes) (value: 1)
     *          - B_0x2: word (4 bytes) (value: 2)
     *          - B_0x3: user setting error reported and no transfer issued (value: 3)
     */
        /** @brief byte */
    constexpr std::uint32_t GPDMA_C1TR1_SDW_LOG2_B_0x0 = 0;
        /** @brief half-word (2 bytes) */
    constexpr std::uint32_t GPDMA_C1TR1_SDW_LOG2_B_0x1 = 1;
        /** @brief word (4 bytes) */
    constexpr std::uint32_t GPDMA_C1TR1_SDW_LOG2_B_0x2 = 2;
        /** @brief user setting error reported and no transfer issued */
    constexpr std::uint32_t GPDMA_C1TR1_SDW_LOG2_B_0x3 = 3;

    /** @brief source incrementing burst */
    using GPDMA_C1TR1_SINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fixed burst (value: 0)
     *          - B_0x1: contiguously incremented burst (value: 1)
     */
        /** @brief fixed burst */
    constexpr std::uint32_t GPDMA_C1TR1_SINC_B_0x0 = 0;
        /** @brief contiguously incremented burst */
    constexpr std::uint32_t GPDMA_C1TR1_SINC_B_0x1 = 1;

    /** @brief source burst length minus 1, between 0 and 63 */
    using GPDMA_C1TR1_SBL_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief padding/alignment mode */
    using GPDMA_C1TR1_PAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: source data is transferred as right aligned, padded with 0s up to the destination data width (value: 0)
     *          - B_0x1: source data is transferred as right aligned, sign extended up to the destination data width (value: 1)
     */
        /** @brief source data is transferred as right aligned, padded with 0s up to the destination data width */
    constexpr std::uint32_t GPDMA_C1TR1_PAM_B_0x0 = 0;
        /** @brief source data is transferred as right aligned, sign extended up to the destination data width */
    constexpr std::uint32_t GPDMA_C1TR1_PAM_B_0x1 = 1;

    /** @brief source byte exchange within the unaligned half-word of each source word */
    using GPDMA_C1TR1_SBX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no byte-based exchange within the unaligned half-word of each source word (value: 0)
     *          - B_0x1: the two consecutive bytes within the unaligned half-word of each source word are exchanged. (value: 1)
     */
        /** @brief no byte-based exchange within the unaligned half-word of each source word */
    constexpr std::uint32_t GPDMA_C1TR1_SBX_B_0x0 = 0;
        /** @brief the two consecutive bytes within the unaligned half-word of each source word are exchanged. */
    constexpr std::uint32_t GPDMA_C1TR1_SBX_B_0x1 = 1;

    /** @brief source allocated port */
    using GPDMA_C1TR1_SAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C1TR1_SAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C1TR1_SAP_B_0x1 = 1;

    /** @brief security attribute of the GPDMA transfer from the source */
    using GPDMA_C1TR1_SSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPDMA transfer non-secure (value: 0)
     *          - B_0x1: GPDMA transfer secure (value: 1)
     */
        /** @brief GPDMA transfer non-secure */
    constexpr std::uint32_t GPDMA_C1TR1_SSEC_B_0x0 = 0;
        /** @brief GPDMA transfer secure */
    constexpr std::uint32_t GPDMA_C1TR1_SSEC_B_0x1 = 1;

    /** @brief binary logarithm of the destination data width of a burst, in bytes */
    using GPDMA_C1TR1_DDW_LOG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: byte (value: 0)
     *          - B_0x1: half-word (2 bytes) (value: 1)
     *          - B_0x2: word (4 bytes) (value: 2)
     *          - B_0x3: user setting error reported and no transfer issued (value: 3)
     */
        /** @brief byte */
    constexpr std::uint32_t GPDMA_C1TR1_DDW_LOG2_B_0x0 = 0;
        /** @brief half-word (2 bytes) */
    constexpr std::uint32_t GPDMA_C1TR1_DDW_LOG2_B_0x1 = 1;
        /** @brief word (4 bytes) */
    constexpr std::uint32_t GPDMA_C1TR1_DDW_LOG2_B_0x2 = 2;
        /** @brief user setting error reported and no transfer issued */
    constexpr std::uint32_t GPDMA_C1TR1_DDW_LOG2_B_0x3 = 3;

    /** @brief destination incrementing burst */
    using GPDMA_C1TR1_DINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fixed burst (value: 0)
     *          - B_0x1: contiguously incremented burst (value: 1)
     */
        /** @brief fixed burst */
    constexpr std::uint32_t GPDMA_C1TR1_DINC_B_0x0 = 0;
        /** @brief contiguously incremented burst */
    constexpr std::uint32_t GPDMA_C1TR1_DINC_B_0x1 = 1;

    /** @brief destination burst length minus 1, between 0 and 63 */
    using GPDMA_C1TR1_DBL_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination byte exchange */
    using GPDMA_C1TR1_DBX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no byte-based exchange within half-word (value: 0)
     *          - B_0x1: the two consecutive (post PAM) bytes are exchanged in each destination half-word. (value: 1)
     */
        /** @brief no byte-based exchange within half-word */
    constexpr std::uint32_t GPDMA_C1TR1_DBX_B_0x0 = 0;
        /** @brief the two consecutive (post PAM) bytes are exchanged in each destination half-word. */
    constexpr std::uint32_t GPDMA_C1TR1_DBX_B_0x1 = 1;

    /** @brief destination half-word exchange */
    using GPDMA_C1TR1_DHX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no halfword-based exchanged within word (value: 0)
     *          - B_0x1: the two consecutive (post PAM) half-words are exchanged in each destination word. (value: 1)
     */
        /** @brief no halfword-based exchanged within word */
    constexpr std::uint32_t GPDMA_C1TR1_DHX_B_0x0 = 0;
        /** @brief the two consecutive (post PAM) half-words are exchanged in each destination word. */
    constexpr std::uint32_t GPDMA_C1TR1_DHX_B_0x1 = 1;

    /** @brief destination allocated port */
    using GPDMA_C1TR1_DAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C1TR1_DAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C1TR1_DAP_B_0x1 = 1;

    /** @brief security attribute of the GPDMA transfer to the destination */
    using GPDMA_C1TR1_DSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPDMA transfer non-secure (value: 0)
     *          - B_0x1: GPDMA transfer secure (value: 1)
     */
        /** @brief GPDMA transfer non-secure */
    constexpr std::uint32_t GPDMA_C1TR1_DSEC_B_0x0 = 0;
        /** @brief GPDMA transfer secure */
    constexpr std::uint32_t GPDMA_C1TR1_DSEC_B_0x1 = 1;

    /** @brief GPDMA channel 1 transfer register 2 */
    using GPDMA_C1TR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x114, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA hardware request selection */
    using GPDMA_C1TR2_REQSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief software request */
    using GPDMA_C1TR2_SWREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no software request. The selected hardware request REQSEL[6:0] is taken into account. (value: 0)
     *          - B_0x1: software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[6:0] is ignored. (value: 1)
     */
        /** @brief no software request. The selected hardware request REQSEL[6:0] is taken into account. */
    constexpr std::uint32_t GPDMA_C1TR2_SWREQ_B_0x0 = 0;
        /** @brief software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[6:0] is ignored. */
    constexpr std::uint32_t GPDMA_C1TR2_SWREQ_B_0x1 = 1;

    /** @brief destination hardware request */
    using GPDMA_C1TR2_DREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: selected hardware request driven by a source peripheral (request signal taken into account by the GPDMA transfer scheduler over the source/read port) (value: 0)
     *          - B_0x1: selected hardware request driven by a destination peripheral (request signal taken into account by the GPDMA transfer scheduler over the destination/write port) (value: 1)
     */
        /** @brief selected hardware request driven by a source peripheral (request signal taken into account by the GPDMA transfer scheduler over the source/read port) */
    constexpr std::uint32_t GPDMA_C1TR2_DREQ_B_0x0 = 0;
        /** @brief selected hardware request driven by a destination peripheral (request signal taken into account by the GPDMA transfer scheduler over the destination/write port) */
    constexpr std::uint32_t GPDMA_C1TR2_DREQ_B_0x1 = 1;

    /** @brief Block hardware request */
    using GPDMA_C1TR2_BREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a burst level. (value: 0)
     *          - B_0x1: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see ). (value: 1)
     */
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a burst level. */
    constexpr std::uint32_t GPDMA_C1TR2_BREQ_B_0x0 = 0;
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see ). */
    constexpr std::uint32_t GPDMA_C1TR2_BREQ_B_0x1 = 1;

    /** @brief trigger mode */
    using GPDMA_C1TR2_TRIGM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: at block level: the first burst read of each block transfer is conditioned by one hit trigger (channel x = 12 to 15, for each block if a 2D/repeated block is configured with GPDMA_CxBR1.BRC[10:0] different to 0). (value: 0)
     *          - B_0x1: channel x = 0 to 11, same as 00; channel x=12 to 15, at 2D/repeated block level, the (value: 1)
     *          - B_0x2: at link level: a LLI link transfer is conditioned by one hit trigger. The LLI data transfer (if any) is not conditioned. (value: 2)
     *          - B_0x3: at programmed burst level: If SWREQ = 1, each programmed burst read is conditioned by one hit trigger. If SWREQ=0, each programmed burst that is requested by the selected peripheral, is conditioned by one hit trigger. (value: 3)
     */
        /** @brief at block level: the first burst read of each block transfer is conditioned by one hit trigger (channel x = 12 to 15, for each block if a 2D/repeated block is configured with GPDMA_CxBR1.BRC[10:0] different to 0). */
    constexpr std::uint32_t GPDMA_C1TR2_TRIGM_B_0x0 = 0;
        /** @brief channel x = 0 to 11, same as 00; channel x=12 to 15, at 2D/repeated block level, the */
    constexpr std::uint32_t GPDMA_C1TR2_TRIGM_B_0x1 = 1;
        /** @brief at link level: a LLI link transfer is conditioned by one hit trigger. The LLI data transfer (if any) is not conditioned. */
    constexpr std::uint32_t GPDMA_C1TR2_TRIGM_B_0x2 = 2;
        /** @brief at programmed burst level: If SWREQ = 1, each programmed burst read is conditioned by one hit trigger. If SWREQ=0, each programmed burst that is requested by the selected peripheral, is conditioned by one hit trigger. */
    constexpr std::uint32_t GPDMA_C1TR2_TRIGM_B_0x3 = 3;

    /** @brief trigger event input selection */
    using GPDMA_C1TR2_TRIGSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief trigger event polarity */
    using GPDMA_C1TR2_TRIGPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no trigger (masked trigger event) (value: 0)
     *          - B_0x1: trigger on the rising edge (value: 1)
     *          - B_0x2: trigger on the falling edge (value: 2)
     *          - B_0x3: same as 00 (value: 3)
     */
        /** @brief no trigger (masked trigger event) */
    constexpr std::uint32_t GPDMA_C1TR2_TRIGPOL_B_0x0 = 0;
        /** @brief trigger on the rising edge */
    constexpr std::uint32_t GPDMA_C1TR2_TRIGPOL_B_0x1 = 1;
        /** @brief trigger on the falling edge */
    constexpr std::uint32_t GPDMA_C1TR2_TRIGPOL_B_0x2 = 2;
        /** @brief same as 00 */
    constexpr std::uint32_t GPDMA_C1TR2_TRIGPOL_B_0x3 = 3;

    /** @brief transfer complete event mode */
    using GPDMA_C1TR2_TCEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: at block level (when GPDMA_CxBR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. (value: 0)
     *          - B_0x1: channel x = 0 to 11, same as 00; channel x=12 to 15, at 2D/repeated block level (when GPDMA_CxBR1.BRC[10:0]= 0 and GPDMA_CxBR1.BNDT[15:0]= 0), the complete (and the half) transfer event is generated at the end (respectively half of the end) of the 2D/repeated block. (value: 1)
     *          - B_0x2: at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer (the LLI data transfer being a block transfer or a 2D/repeated block transfer for channel x = 12 to 15), if any data transfer. (value: 2)
     *          - B_0x3: at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address GPDMA_CxLLR.LA[15:2] to zero and clears all the GPDMA_CxLLR update bits (UT1, UT2, UB1, USA, UDA and ULL, plus UT3 and UB2 if present). If the channel transfer is continuous/infinite, no event is generated. (value: 3)
     */
        /** @brief at block level (when GPDMA_CxBR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. */
    constexpr std::uint32_t GPDMA_C1TR2_TCEM_B_0x0 = 0;
        /** @brief channel x = 0 to 11, same as 00; channel x=12 to 15, at 2D/repeated block level (when GPDMA_CxBR1.BRC[10:0]= 0 and GPDMA_CxBR1.BNDT[15:0]= 0), the complete (and the half) transfer event is generated at the end (respectively half of the end) of the 2D/repeated block. */
    constexpr std::uint32_t GPDMA_C1TR2_TCEM_B_0x1 = 1;
        /** @brief at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer (the LLI data transfer being a block transfer or a 2D/repeated block transfer for channel x = 12 to 15), if any data transfer. */
    constexpr std::uint32_t GPDMA_C1TR2_TCEM_B_0x2 = 2;
        /** @brief at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address GPDMA_CxLLR.LA[15:2] to zero and clears all the GPDMA_CxLLR update bits (UT1, UT2, UB1, USA, UDA and ULL, plus UT3 and UB2 if present). If the channel transfer is continuous/infinite, no event is generated. */
    constexpr std::uint32_t GPDMA_C1TR2_TCEM_B_0x3 = 3;

    /** @brief GPDMA channel 1 block register 1 */
    using GPDMA_C1BR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x118, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief block number of data bytes to transfer from the source */
    using GPDMA_C1BR1_BNDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 1 source address register */
    using GPDMA_C1SAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x11C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief source address */
    using GPDMA_C1SAR_SA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 1 destination address register */
    using GPDMA_C1DAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x120, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination address */
    using GPDMA_C1DAR_DA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 1 linked-list address register */
    using GPDMA_C1LLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pointer (16-bit low-significant address) to the next linked-list data structure */
    using GPDMA_C1LLR_LA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxLLR register from memory */
    using GPDMA_C1LLR_ULL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxLLR update (value: 0)
     *          - B_0x1: GPDMA_CxLLR update (value: 1)
     */
        /** @brief no GPDMA_CxLLR update */
    constexpr std::uint32_t GPDMA_C1LLR_ULL_B_0x0 = 0;
        /** @brief GPDMA_CxLLR update */
    constexpr std::uint32_t GPDMA_C1LLR_ULL_B_0x1 = 1;

    /** @brief Update GPDMA_CxDAR register from memory */
    using GPDMA_C1LLR_UDA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxDAR update (value: 0)
     *          - B_0x1: GPDMA_CxDAR update (value: 1)
     */
        /** @brief no GPDMA_CxDAR update */
    constexpr std::uint32_t GPDMA_C1LLR_UDA_B_0x0 = 0;
        /** @brief GPDMA_CxDAR update */
    constexpr std::uint32_t GPDMA_C1LLR_UDA_B_0x1 = 1;

    /** @brief update GPDMA_CxSAR from memory */
    using GPDMA_C1LLR_USA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxSAR update (value: 0)
     *          - B_0x1: GPDMA_CxSAR update (value: 1)
     */
        /** @brief no GPDMA_CxSAR update */
    constexpr std::uint32_t GPDMA_C1LLR_USA_B_0x0 = 0;
        /** @brief GPDMA_CxSAR update */
    constexpr std::uint32_t GPDMA_C1LLR_USA_B_0x1 = 1;

    /** @brief Update GPDMA_CxBR1 from memory */
    using GPDMA_C1LLR_UB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxBR1 update from memory (GPDMA_CxBR1.BNDT[15:0] restored if any link transfer) (value: 0)
     *          - B_0x1: GPDMA_CxBR1 update (value: 1)
     */
        /** @brief no GPDMA_CxBR1 update from memory (GPDMA_CxBR1.BNDT[15:0] restored if any link transfer) */
    constexpr std::uint32_t GPDMA_C1LLR_UB1_B_0x0 = 0;
        /** @brief GPDMA_CxBR1 update */
    constexpr std::uint32_t GPDMA_C1LLR_UB1_B_0x1 = 1;

    /** @brief Update GPDMA_CxTR2 from memory */
    using GPDMA_C1LLR_UT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxTR2 update (value: 0)
     *          - B_0x1: GPDMA_CxTR2 update (value: 1)
     */
        /** @brief no GPDMA_CxTR2 update */
    constexpr std::uint32_t GPDMA_C1LLR_UT2_B_0x0 = 0;
        /** @brief GPDMA_CxTR2 update */
    constexpr std::uint32_t GPDMA_C1LLR_UT2_B_0x1 = 1;

    /** @brief Update GPDMA_CxTR1 from memory */
    using GPDMA_C1LLR_UT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxTR1 update (value: 0)
     *          - B_0x1: GPDMA_CxTR1 update (value: 1)
     */
        /** @brief no GPDMA_CxTR1 update */
    constexpr std::uint32_t GPDMA_C1LLR_UT1_B_0x0 = 0;
        /** @brief GPDMA_CxTR1 update */
    constexpr std::uint32_t GPDMA_C1LLR_UT1_B_0x1 = 1;

    /** @brief GPDMA channel 2 linked-list base address register */
    using GPDMA_C2LBAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x150, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief linked-list base address of GPDMA channel x */
    using GPDMA_C2LBAR_LBA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 2 flag clear register */
    using GPDMA_C2FCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x15C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transfer complete flag clear */
    using GPDMA_C2FCR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding TCF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C2FCR_TCF_B_0x0 = 0;
        /** @brief corresponding TCF flag cleared */
    constexpr std::uint32_t GPDMA_C2FCR_TCF_B_0x1 = 1;

    /** @brief half transfer flag clear */
    using GPDMA_C2FCR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding HTF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C2FCR_HTF_B_0x0 = 0;
        /** @brief corresponding HTF flag cleared */
    constexpr std::uint32_t GPDMA_C2FCR_HTF_B_0x1 = 1;

    /** @brief data transfer error flag clear */
    using GPDMA_C2FCR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding DTEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C2FCR_DTEF_B_0x0 = 0;
        /** @brief corresponding DTEF flag cleared */
    constexpr std::uint32_t GPDMA_C2FCR_DTEF_B_0x1 = 1;

    /** @brief update link transfer error flag clear */
    using GPDMA_C2FCR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding ULEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C2FCR_ULEF_B_0x0 = 0;
        /** @brief corresponding ULEF flag cleared */
    constexpr std::uint32_t GPDMA_C2FCR_ULEF_B_0x1 = 1;

    /** @brief user setting error flag clear */
    using GPDMA_C2FCR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding USEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C2FCR_USEF_B_0x0 = 0;
        /** @brief corresponding USEF flag cleared */
    constexpr std::uint32_t GPDMA_C2FCR_USEF_B_0x1 = 1;

    /** @brief completed suspension flag clear */
    using GPDMA_C2FCR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding SUSPF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C2FCR_SUSPF_B_0x0 = 0;
        /** @brief corresponding SUSPF flag cleared */
    constexpr std::uint32_t GPDMA_C2FCR_SUSPF_B_0x1 = 1;

    /** @brief trigger overrun flag clear */
    using GPDMA_C2FCR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding TOF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C2FCR_TOF_B_0x0 = 0;
        /** @brief corresponding TOF flag cleared */
    constexpr std::uint32_t GPDMA_C2FCR_TOF_B_0x1 = 1;

    /** @brief GPDMA channel 2 status register */
    using GPDMA_C2SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x160, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief idle flag */
    using GPDMA_C2SR_IDLEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: channel not in idle state (value: 0)
     *          - B_0x1: channel in idle state (value: 1)
     */
        /** @brief channel not in idle state */
    constexpr std::uint32_t GPDMA_C2SR_IDLEF_B_0x0 = 0;
        /** @brief channel in idle state */
    constexpr std::uint32_t GPDMA_C2SR_IDLEF_B_0x1 = 1;

    /** @brief transfer complete flag */
    using GPDMA_C2SR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no transfer complete event (value: 0)
     *          - B_0x1: a transfer complete event occurred (value: 1)
     */
        /** @brief no transfer complete event */
    constexpr std::uint32_t GPDMA_C2SR_TCF_B_0x0 = 0;
        /** @brief a transfer complete event occurred */
    constexpr std::uint32_t GPDMA_C2SR_TCF_B_0x1 = 1;

    /** @brief half transfer flag */
    using GPDMA_C2SR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no half transfer event (value: 0)
     *          - B_0x1: an half transfer event occurred (value: 1)
     */
        /** @brief no half transfer event */
    constexpr std::uint32_t GPDMA_C2SR_HTF_B_0x0 = 0;
        /** @brief an half transfer event occurred */
    constexpr std::uint32_t GPDMA_C2SR_HTF_B_0x1 = 1;

    /** @brief data transfer error flag */
    using GPDMA_C2SR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no data transfer error event (value: 0)
     *          - B_0x1: a master bus error event occurred on a data transfer (value: 1)
     */
        /** @brief no data transfer error event */
    constexpr std::uint32_t GPDMA_C2SR_DTEF_B_0x0 = 0;
        /** @brief a master bus error event occurred on a data transfer */
    constexpr std::uint32_t GPDMA_C2SR_DTEF_B_0x1 = 1;

    /** @brief update link transfer error flag */
    using GPDMA_C2SR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no update link transfer error event (value: 0)
     *          - B_0x1: a master bus error event occurred while updating a linked-list register from memory (value: 1)
     */
        /** @brief no update link transfer error event */
    constexpr std::uint32_t GPDMA_C2SR_ULEF_B_0x0 = 0;
        /** @brief a master bus error event occurred while updating a linked-list register from memory */
    constexpr std::uint32_t GPDMA_C2SR_ULEF_B_0x1 = 1;

    /** @brief user setting error flag */
    using GPDMA_C2SR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no user setting error event (value: 0)
     *          - B_0x1: a user setting error event occurred (value: 1)
     */
        /** @brief no user setting error event */
    constexpr std::uint32_t GPDMA_C2SR_USEF_B_0x0 = 0;
        /** @brief a user setting error event occurred */
    constexpr std::uint32_t GPDMA_C2SR_USEF_B_0x1 = 1;

    /** @brief completed suspension flag */
    using GPDMA_C2SR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no completed suspension event (value: 0)
     *          - B_0x1: a completed suspension event occurred (value: 1)
     */
        /** @brief no completed suspension event */
    constexpr std::uint32_t GPDMA_C2SR_SUSPF_B_0x0 = 0;
        /** @brief a completed suspension event occurred */
    constexpr std::uint32_t GPDMA_C2SR_SUSPF_B_0x1 = 1;

    /** @brief trigger overrun flag */
    using GPDMA_C2SR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no trigger overrun event (value: 0)
     *          - B_0x1: a trigger overrun event occurred (value: 1)
     */
        /** @brief no trigger overrun event */
    constexpr std::uint32_t GPDMA_C2SR_TOF_B_0x0 = 0;
        /** @brief a trigger overrun event occurred */
    constexpr std::uint32_t GPDMA_C2SR_TOF_B_0x1 = 1;

    /** @brief monitored FIFO level */
    using GPDMA_C2SR_FIFOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 2 control register */
    using GPDMA_C2CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x164, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief enable */
    using GPDMA_C2CR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write: ignored, read: channel disabled (value: 0)
     *          - B_0x1: write: enable channel, read: channel enabled (value: 1)
     */
        /** @brief write: ignored, read: channel disabled */
    constexpr std::uint32_t GPDMA_C2CR_EN_B_0x0 = 0;
        /** @brief write: enable channel, read: channel enabled */
    constexpr std::uint32_t GPDMA_C2CR_EN_B_0x1 = 1;

    /** @brief reset */
    using GPDMA_C2CR_RESET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no channel reset (value: 0)
     *          - B_0x1: channel reset (value: 1)
     */
        /** @brief no channel reset */
    constexpr std::uint32_t GPDMA_C2CR_RESET_B_0x0 = 0;
        /** @brief channel reset */
    constexpr std::uint32_t GPDMA_C2CR_RESET_B_0x1 = 1;

    /** @brief suspend */
    using GPDMA_C2CR_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write: resume channel, read: channel not suspended (value: 0)
     *          - B_0x1: write: suspend channel, read: channel suspended. (value: 1)
     */
        /** @brief write: resume channel, read: channel not suspended */
    constexpr std::uint32_t GPDMA_C2CR_SUSP_B_0x0 = 0;
        /** @brief write: suspend channel, read: channel suspended. */
    constexpr std::uint32_t GPDMA_C2CR_SUSP_B_0x1 = 1;

    /** @brief transfer complete interrupt enable */
    using GPDMA_C2CR_TCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C2CR_TCIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C2CR_TCIE_B_0x1 = 1;

    /** @brief half transfer complete interrupt enable */
    using GPDMA_C2CR_HTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C2CR_HTIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C2CR_HTIE_B_0x1 = 1;

    /** @brief data transfer error interrupt enable */
    using GPDMA_C2CR_DTEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C2CR_DTEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C2CR_DTEIE_B_0x1 = 1;

    /** @brief update link transfer error interrupt enable */
    using GPDMA_C2CR_ULEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C2CR_ULEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C2CR_ULEIE_B_0x1 = 1;

    /** @brief user setting error interrupt enable */
    using GPDMA_C2CR_USEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C2CR_USEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C2CR_USEIE_B_0x1 = 1;

    /** @brief completed suspension interrupt enable */
    using GPDMA_C2CR_SUSPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C2CR_SUSPIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C2CR_SUSPIE_B_0x1 = 1;

    /** @brief trigger overrun interrupt enable */
    using GPDMA_C2CR_TOIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C2CR_TOIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C2CR_TOIE_B_0x1 = 1;

    /** @brief Link step mode */
    using GPDMA_C2CR_LSM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: channel executed for the full linked-list and completed at the end of the last LLI (GPDMA_CxLLR=0). The 16 low-significant bits of the link address are null (LA[15:0]=0) and all the update bits are null (UT1=UB1=UT2=USA=UDA=ULL=0 and UT3=UB2=0 if present). Then GPDMA_CxBR1.BNDT[15:0]=0 and GPDMA_CxBR1.BRC[10:0]=0 if present. (value: 0)
     *          - B_0x1: channel executed once for the current LLI (value: 1)
     */
        /** @brief channel executed for the full linked-list and completed at the end of the last LLI (GPDMA_CxLLR=0). The 16 low-significant bits of the link address are null (LA[15:0]=0) and all the update bits are null (UT1=UB1=UT2=USA=UDA=ULL=0 and UT3=UB2=0 if present). Then GPDMA_CxBR1.BNDT[15:0]=0 and GPDMA_CxBR1.BRC[10:0]=0 if present. */
    constexpr std::uint32_t GPDMA_C2CR_LSM_B_0x0 = 0;
        /** @brief channel executed once for the current LLI */
    constexpr std::uint32_t GPDMA_C2CR_LSM_B_0x1 = 1;

    /** @brief linked-list allocated port */
    using GPDMA_C2CR_LAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C2CR_LAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C2CR_LAP_B_0x1 = 1;

    /** @brief priority level of the channel x GPDMA transfer versus others */
    using GPDMA_C2CR_PRIO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: low priority, low weight (value: 0)
     *          - B_0x1: low priority, mid weight (value: 1)
     *          - B_0x2: low priority, high weight (value: 2)
     *          - B_0x3: high priority (value: 3)
     */
        /** @brief low priority, low weight */
    constexpr std::uint32_t GPDMA_C2CR_PRIO_B_0x0 = 0;
        /** @brief low priority, mid weight */
    constexpr std::uint32_t GPDMA_C2CR_PRIO_B_0x1 = 1;
        /** @brief low priority, high weight */
    constexpr std::uint32_t GPDMA_C2CR_PRIO_B_0x2 = 2;
        /** @brief high priority */
    constexpr std::uint32_t GPDMA_C2CR_PRIO_B_0x3 = 3;

    /** @brief GPDMA channel 2 transfer register 1 */
    using GPDMA_C2TR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x190, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief binary logarithm of the source data width of a burst in bytes */
    using GPDMA_C2TR1_SDW_LOG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: byte (value: 0)
     *          - B_0x1: half-word (2 bytes) (value: 1)
     *          - B_0x2: word (4 bytes) (value: 2)
     *          - B_0x3: user setting error reported and no transfer issued (value: 3)
     */
        /** @brief byte */
    constexpr std::uint32_t GPDMA_C2TR1_SDW_LOG2_B_0x0 = 0;
        /** @brief half-word (2 bytes) */
    constexpr std::uint32_t GPDMA_C2TR1_SDW_LOG2_B_0x1 = 1;
        /** @brief word (4 bytes) */
    constexpr std::uint32_t GPDMA_C2TR1_SDW_LOG2_B_0x2 = 2;
        /** @brief user setting error reported and no transfer issued */
    constexpr std::uint32_t GPDMA_C2TR1_SDW_LOG2_B_0x3 = 3;

    /** @brief source incrementing burst */
    using GPDMA_C2TR1_SINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fixed burst (value: 0)
     *          - B_0x1: contiguously incremented burst (value: 1)
     */
        /** @brief fixed burst */
    constexpr std::uint32_t GPDMA_C2TR1_SINC_B_0x0 = 0;
        /** @brief contiguously incremented burst */
    constexpr std::uint32_t GPDMA_C2TR1_SINC_B_0x1 = 1;

    /** @brief source burst length minus 1, between 0 and 63 */
    using GPDMA_C2TR1_SBL_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief padding/alignment mode */
    using GPDMA_C2TR1_PAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: source data is transferred as right aligned, padded with 0s up to the destination data width (value: 0)
     *          - B_0x1: source data is transferred as right aligned, sign extended up to the destination data width (value: 1)
     */
        /** @brief source data is transferred as right aligned, padded with 0s up to the destination data width */
    constexpr std::uint32_t GPDMA_C2TR1_PAM_B_0x0 = 0;
        /** @brief source data is transferred as right aligned, sign extended up to the destination data width */
    constexpr std::uint32_t GPDMA_C2TR1_PAM_B_0x1 = 1;

    /** @brief source byte exchange within the unaligned half-word of each source word */
    using GPDMA_C2TR1_SBX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no byte-based exchange within the unaligned half-word of each source word (value: 0)
     *          - B_0x1: the two consecutive bytes within the unaligned half-word of each source word are exchanged. (value: 1)
     */
        /** @brief no byte-based exchange within the unaligned half-word of each source word */
    constexpr std::uint32_t GPDMA_C2TR1_SBX_B_0x0 = 0;
        /** @brief the two consecutive bytes within the unaligned half-word of each source word are exchanged. */
    constexpr std::uint32_t GPDMA_C2TR1_SBX_B_0x1 = 1;

    /** @brief source allocated port */
    using GPDMA_C2TR1_SAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C2TR1_SAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C2TR1_SAP_B_0x1 = 1;

    /** @brief security attribute of the GPDMA transfer from the source */
    using GPDMA_C2TR1_SSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPDMA transfer non-secure (value: 0)
     *          - B_0x1: GPDMA transfer secure (value: 1)
     */
        /** @brief GPDMA transfer non-secure */
    constexpr std::uint32_t GPDMA_C2TR1_SSEC_B_0x0 = 0;
        /** @brief GPDMA transfer secure */
    constexpr std::uint32_t GPDMA_C2TR1_SSEC_B_0x1 = 1;

    /** @brief binary logarithm of the destination data width of a burst, in bytes */
    using GPDMA_C2TR1_DDW_LOG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: byte (value: 0)
     *          - B_0x1: half-word (2 bytes) (value: 1)
     *          - B_0x2: word (4 bytes) (value: 2)
     *          - B_0x3: user setting error reported and no transfer issued (value: 3)
     */
        /** @brief byte */
    constexpr std::uint32_t GPDMA_C2TR1_DDW_LOG2_B_0x0 = 0;
        /** @brief half-word (2 bytes) */
    constexpr std::uint32_t GPDMA_C2TR1_DDW_LOG2_B_0x1 = 1;
        /** @brief word (4 bytes) */
    constexpr std::uint32_t GPDMA_C2TR1_DDW_LOG2_B_0x2 = 2;
        /** @brief user setting error reported and no transfer issued */
    constexpr std::uint32_t GPDMA_C2TR1_DDW_LOG2_B_0x3 = 3;

    /** @brief destination incrementing burst */
    using GPDMA_C2TR1_DINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fixed burst (value: 0)
     *          - B_0x1: contiguously incremented burst (value: 1)
     */
        /** @brief fixed burst */
    constexpr std::uint32_t GPDMA_C2TR1_DINC_B_0x0 = 0;
        /** @brief contiguously incremented burst */
    constexpr std::uint32_t GPDMA_C2TR1_DINC_B_0x1 = 1;

    /** @brief destination burst length minus 1, between 0 and 63 */
    using GPDMA_C2TR1_DBL_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination byte exchange */
    using GPDMA_C2TR1_DBX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no byte-based exchange within half-word (value: 0)
     *          - B_0x1: the two consecutive (post PAM) bytes are exchanged in each destination half-word. (value: 1)
     */
        /** @brief no byte-based exchange within half-word */
    constexpr std::uint32_t GPDMA_C2TR1_DBX_B_0x0 = 0;
        /** @brief the two consecutive (post PAM) bytes are exchanged in each destination half-word. */
    constexpr std::uint32_t GPDMA_C2TR1_DBX_B_0x1 = 1;

    /** @brief destination half-word exchange */
    using GPDMA_C2TR1_DHX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no halfword-based exchanged within word (value: 0)
     *          - B_0x1: the two consecutive (post PAM) half-words are exchanged in each destination word. (value: 1)
     */
        /** @brief no halfword-based exchanged within word */
    constexpr std::uint32_t GPDMA_C2TR1_DHX_B_0x0 = 0;
        /** @brief the two consecutive (post PAM) half-words are exchanged in each destination word. */
    constexpr std::uint32_t GPDMA_C2TR1_DHX_B_0x1 = 1;

    /** @brief destination allocated port */
    using GPDMA_C2TR1_DAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C2TR1_DAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C2TR1_DAP_B_0x1 = 1;

    /** @brief security attribute of the GPDMA transfer to the destination */
    using GPDMA_C2TR1_DSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPDMA transfer non-secure (value: 0)
     *          - B_0x1: GPDMA transfer secure (value: 1)
     */
        /** @brief GPDMA transfer non-secure */
    constexpr std::uint32_t GPDMA_C2TR1_DSEC_B_0x0 = 0;
        /** @brief GPDMA transfer secure */
    constexpr std::uint32_t GPDMA_C2TR1_DSEC_B_0x1 = 1;

    /** @brief GPDMA channel 2 transfer register 2 */
    using GPDMA_C2TR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x194, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA hardware request selection */
    using GPDMA_C2TR2_REQSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief software request */
    using GPDMA_C2TR2_SWREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no software request. The selected hardware request REQSEL[6:0] is taken into account. (value: 0)
     *          - B_0x1: software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[6:0] is ignored. (value: 1)
     */
        /** @brief no software request. The selected hardware request REQSEL[6:0] is taken into account. */
    constexpr std::uint32_t GPDMA_C2TR2_SWREQ_B_0x0 = 0;
        /** @brief software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[6:0] is ignored. */
    constexpr std::uint32_t GPDMA_C2TR2_SWREQ_B_0x1 = 1;

    /** @brief destination hardware request */
    using GPDMA_C2TR2_DREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: selected hardware request driven by a source peripheral (request signal taken into account by the GPDMA transfer scheduler over the source/read port) (value: 0)
     *          - B_0x1: selected hardware request driven by a destination peripheral (request signal taken into account by the GPDMA transfer scheduler over the destination/write port) (value: 1)
     */
        /** @brief selected hardware request driven by a source peripheral (request signal taken into account by the GPDMA transfer scheduler over the source/read port) */
    constexpr std::uint32_t GPDMA_C2TR2_DREQ_B_0x0 = 0;
        /** @brief selected hardware request driven by a destination peripheral (request signal taken into account by the GPDMA transfer scheduler over the destination/write port) */
    constexpr std::uint32_t GPDMA_C2TR2_DREQ_B_0x1 = 1;

    /** @brief Block hardware request */
    using GPDMA_C2TR2_BREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a burst level. (value: 0)
     *          - B_0x1: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see ). (value: 1)
     */
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a burst level. */
    constexpr std::uint32_t GPDMA_C2TR2_BREQ_B_0x0 = 0;
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see ). */
    constexpr std::uint32_t GPDMA_C2TR2_BREQ_B_0x1 = 1;

    /** @brief trigger mode */
    using GPDMA_C2TR2_TRIGM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: at block level: the first burst read of each block transfer is conditioned by one hit trigger (channel x = 12 to 15, for each block if a 2D/repeated block is configured with GPDMA_CxBR1.BRC[10:0] different to 0). (value: 0)
     *          - B_0x1: channel x = 0 to 11, same as 00; channel x=12 to 15, at 2D/repeated block level, the (value: 1)
     *          - B_0x2: at link level: a LLI link transfer is conditioned by one hit trigger. The LLI data transfer (if any) is not conditioned. (value: 2)
     *          - B_0x3: at programmed burst level: If SWREQ = 1, each programmed burst read is conditioned by one hit trigger. If SWREQ=0, each programmed burst that is requested by the selected peripheral, is conditioned by one hit trigger. (value: 3)
     */
        /** @brief at block level: the first burst read of each block transfer is conditioned by one hit trigger (channel x = 12 to 15, for each block if a 2D/repeated block is configured with GPDMA_CxBR1.BRC[10:0] different to 0). */
    constexpr std::uint32_t GPDMA_C2TR2_TRIGM_B_0x0 = 0;
        /** @brief channel x = 0 to 11, same as 00; channel x=12 to 15, at 2D/repeated block level, the */
    constexpr std::uint32_t GPDMA_C2TR2_TRIGM_B_0x1 = 1;
        /** @brief at link level: a LLI link transfer is conditioned by one hit trigger. The LLI data transfer (if any) is not conditioned. */
    constexpr std::uint32_t GPDMA_C2TR2_TRIGM_B_0x2 = 2;
        /** @brief at programmed burst level: If SWREQ = 1, each programmed burst read is conditioned by one hit trigger. If SWREQ=0, each programmed burst that is requested by the selected peripheral, is conditioned by one hit trigger. */
    constexpr std::uint32_t GPDMA_C2TR2_TRIGM_B_0x3 = 3;

    /** @brief trigger event input selection */
    using GPDMA_C2TR2_TRIGSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief trigger event polarity */
    using GPDMA_C2TR2_TRIGPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no trigger (masked trigger event) (value: 0)
     *          - B_0x1: trigger on the rising edge (value: 1)
     *          - B_0x2: trigger on the falling edge (value: 2)
     *          - B_0x3: same as 00 (value: 3)
     */
        /** @brief no trigger (masked trigger event) */
    constexpr std::uint32_t GPDMA_C2TR2_TRIGPOL_B_0x0 = 0;
        /** @brief trigger on the rising edge */
    constexpr std::uint32_t GPDMA_C2TR2_TRIGPOL_B_0x1 = 1;
        /** @brief trigger on the falling edge */
    constexpr std::uint32_t GPDMA_C2TR2_TRIGPOL_B_0x2 = 2;
        /** @brief same as 00 */
    constexpr std::uint32_t GPDMA_C2TR2_TRIGPOL_B_0x3 = 3;

    /** @brief transfer complete event mode */
    using GPDMA_C2TR2_TCEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: at block level (when GPDMA_CxBR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. (value: 0)
     *          - B_0x1: channel x = 0 to 11, same as 00; channel x=12 to 15, at 2D/repeated block level (when GPDMA_CxBR1.BRC[10:0]= 0 and GPDMA_CxBR1.BNDT[15:0]= 0), the complete (and the half) transfer event is generated at the end (respectively half of the end) of the 2D/repeated block. (value: 1)
     *          - B_0x2: at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer (the LLI data transfer being a block transfer or a 2D/repeated block transfer for channel x = 12 to 15), if any data transfer. (value: 2)
     *          - B_0x3: at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address GPDMA_CxLLR.LA[15:2] to zero and clears all the GPDMA_CxLLR update bits (UT1, UT2, UB1, USA, UDA and ULL, plus UT3 and UB2 if present). If the channel transfer is continuous/infinite, no event is generated. (value: 3)
     */
        /** @brief at block level (when GPDMA_CxBR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. */
    constexpr std::uint32_t GPDMA_C2TR2_TCEM_B_0x0 = 0;
        /** @brief channel x = 0 to 11, same as 00; channel x=12 to 15, at 2D/repeated block level (when GPDMA_CxBR1.BRC[10:0]= 0 and GPDMA_CxBR1.BNDT[15:0]= 0), the complete (and the half) transfer event is generated at the end (respectively half of the end) of the 2D/repeated block. */
    constexpr std::uint32_t GPDMA_C2TR2_TCEM_B_0x1 = 1;
        /** @brief at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer (the LLI data transfer being a block transfer or a 2D/repeated block transfer for channel x = 12 to 15), if any data transfer. */
    constexpr std::uint32_t GPDMA_C2TR2_TCEM_B_0x2 = 2;
        /** @brief at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address GPDMA_CxLLR.LA[15:2] to zero and clears all the GPDMA_CxLLR update bits (UT1, UT2, UB1, USA, UDA and ULL, plus UT3 and UB2 if present). If the channel transfer is continuous/infinite, no event is generated. */
    constexpr std::uint32_t GPDMA_C2TR2_TCEM_B_0x3 = 3;

    /** @brief GPDMA channel 2 block register 1 */
    using GPDMA_C2BR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x198, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief block number of data bytes to transfer from the source */
    using GPDMA_C2BR1_BNDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 2 source address register */
    using GPDMA_C2SAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x19C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief source address */
    using GPDMA_C2SAR_SA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 2 destination address register */
    using GPDMA_C2DAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination address */
    using GPDMA_C2DAR_DA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 2 linked-list address register */
    using GPDMA_C2LLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1CC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pointer (16-bit low-significant address) to the next linked-list data structure */
    using GPDMA_C2LLR_LA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxLLR register from memory */
    using GPDMA_C2LLR_ULL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxLLR update (value: 0)
     *          - B_0x1: GPDMA_CxLLR update (value: 1)
     */
        /** @brief no GPDMA_CxLLR update */
    constexpr std::uint32_t GPDMA_C2LLR_ULL_B_0x0 = 0;
        /** @brief GPDMA_CxLLR update */
    constexpr std::uint32_t GPDMA_C2LLR_ULL_B_0x1 = 1;

    /** @brief Update GPDMA_CxDAR register from memory */
    using GPDMA_C2LLR_UDA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxDAR update (value: 0)
     *          - B_0x1: GPDMA_CxDAR update (value: 1)
     */
        /** @brief no GPDMA_CxDAR update */
    constexpr std::uint32_t GPDMA_C2LLR_UDA_B_0x0 = 0;
        /** @brief GPDMA_CxDAR update */
    constexpr std::uint32_t GPDMA_C2LLR_UDA_B_0x1 = 1;

    /** @brief update GPDMA_CxSAR from memory */
    using GPDMA_C2LLR_USA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxSAR update (value: 0)
     *          - B_0x1: GPDMA_CxSAR update (value: 1)
     */
        /** @brief no GPDMA_CxSAR update */
    constexpr std::uint32_t GPDMA_C2LLR_USA_B_0x0 = 0;
        /** @brief GPDMA_CxSAR update */
    constexpr std::uint32_t GPDMA_C2LLR_USA_B_0x1 = 1;

    /** @brief Update GPDMA_CxBR1 from memory */
    using GPDMA_C2LLR_UB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxBR1 update from memory (GPDMA_CxBR1.BNDT[15:0] restored if any link transfer) (value: 0)
     *          - B_0x1: GPDMA_CxBR1 update (value: 1)
     */
        /** @brief no GPDMA_CxBR1 update from memory (GPDMA_CxBR1.BNDT[15:0] restored if any link transfer) */
    constexpr std::uint32_t GPDMA_C2LLR_UB1_B_0x0 = 0;
        /** @brief GPDMA_CxBR1 update */
    constexpr std::uint32_t GPDMA_C2LLR_UB1_B_0x1 = 1;

    /** @brief Update GPDMA_CxTR2 from memory */
    using GPDMA_C2LLR_UT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxTR2 update (value: 0)
     *          - B_0x1: GPDMA_CxTR2 update (value: 1)
     */
        /** @brief no GPDMA_CxTR2 update */
    constexpr std::uint32_t GPDMA_C2LLR_UT2_B_0x0 = 0;
        /** @brief GPDMA_CxTR2 update */
    constexpr std::uint32_t GPDMA_C2LLR_UT2_B_0x1 = 1;

    /** @brief Update GPDMA_CxTR1 from memory */
    using GPDMA_C2LLR_UT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxTR1 update (value: 0)
     *          - B_0x1: GPDMA_CxTR1 update (value: 1)
     */
        /** @brief no GPDMA_CxTR1 update */
    constexpr std::uint32_t GPDMA_C2LLR_UT1_B_0x0 = 0;
        /** @brief GPDMA_CxTR1 update */
    constexpr std::uint32_t GPDMA_C2LLR_UT1_B_0x1 = 1;

    /** @brief GPDMA channel 3 linked-list base address register */
    using GPDMA_C3LBAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1D0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief linked-list base address of GPDMA channel x */
    using GPDMA_C3LBAR_LBA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 3 flag clear register */
    using GPDMA_C3FCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1DC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transfer complete flag clear */
    using GPDMA_C3FCR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding TCF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C3FCR_TCF_B_0x0 = 0;
        /** @brief corresponding TCF flag cleared */
    constexpr std::uint32_t GPDMA_C3FCR_TCF_B_0x1 = 1;

    /** @brief half transfer flag clear */
    using GPDMA_C3FCR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding HTF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C3FCR_HTF_B_0x0 = 0;
        /** @brief corresponding HTF flag cleared */
    constexpr std::uint32_t GPDMA_C3FCR_HTF_B_0x1 = 1;

    /** @brief data transfer error flag clear */
    using GPDMA_C3FCR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding DTEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C3FCR_DTEF_B_0x0 = 0;
        /** @brief corresponding DTEF flag cleared */
    constexpr std::uint32_t GPDMA_C3FCR_DTEF_B_0x1 = 1;

    /** @brief update link transfer error flag clear */
    using GPDMA_C3FCR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding ULEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C3FCR_ULEF_B_0x0 = 0;
        /** @brief corresponding ULEF flag cleared */
    constexpr std::uint32_t GPDMA_C3FCR_ULEF_B_0x1 = 1;

    /** @brief user setting error flag clear */
    using GPDMA_C3FCR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding USEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C3FCR_USEF_B_0x0 = 0;
        /** @brief corresponding USEF flag cleared */
    constexpr std::uint32_t GPDMA_C3FCR_USEF_B_0x1 = 1;

    /** @brief completed suspension flag clear */
    using GPDMA_C3FCR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding SUSPF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C3FCR_SUSPF_B_0x0 = 0;
        /** @brief corresponding SUSPF flag cleared */
    constexpr std::uint32_t GPDMA_C3FCR_SUSPF_B_0x1 = 1;

    /** @brief trigger overrun flag clear */
    using GPDMA_C3FCR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding TOF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C3FCR_TOF_B_0x0 = 0;
        /** @brief corresponding TOF flag cleared */
    constexpr std::uint32_t GPDMA_C3FCR_TOF_B_0x1 = 1;

    /** @brief GPDMA channel 3 status register */
    using GPDMA_C3SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1E0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief idle flag */
    using GPDMA_C3SR_IDLEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: channel not in idle state (value: 0)
     *          - B_0x1: channel in idle state (value: 1)
     */
        /** @brief channel not in idle state */
    constexpr std::uint32_t GPDMA_C3SR_IDLEF_B_0x0 = 0;
        /** @brief channel in idle state */
    constexpr std::uint32_t GPDMA_C3SR_IDLEF_B_0x1 = 1;

    /** @brief transfer complete flag */
    using GPDMA_C3SR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no transfer complete event (value: 0)
     *          - B_0x1: a transfer complete event occurred (value: 1)
     */
        /** @brief no transfer complete event */
    constexpr std::uint32_t GPDMA_C3SR_TCF_B_0x0 = 0;
        /** @brief a transfer complete event occurred */
    constexpr std::uint32_t GPDMA_C3SR_TCF_B_0x1 = 1;

    /** @brief half transfer flag */
    using GPDMA_C3SR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no half transfer event (value: 0)
     *          - B_0x1: an half transfer event occurred (value: 1)
     */
        /** @brief no half transfer event */
    constexpr std::uint32_t GPDMA_C3SR_HTF_B_0x0 = 0;
        /** @brief an half transfer event occurred */
    constexpr std::uint32_t GPDMA_C3SR_HTF_B_0x1 = 1;

    /** @brief data transfer error flag */
    using GPDMA_C3SR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no data transfer error event (value: 0)
     *          - B_0x1: a master bus error event occurred on a data transfer (value: 1)
     */
        /** @brief no data transfer error event */
    constexpr std::uint32_t GPDMA_C3SR_DTEF_B_0x0 = 0;
        /** @brief a master bus error event occurred on a data transfer */
    constexpr std::uint32_t GPDMA_C3SR_DTEF_B_0x1 = 1;

    /** @brief update link transfer error flag */
    using GPDMA_C3SR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no update link transfer error event (value: 0)
     *          - B_0x1: a master bus error event occurred while updating a linked-list register from memory (value: 1)
     */
        /** @brief no update link transfer error event */
    constexpr std::uint32_t GPDMA_C3SR_ULEF_B_0x0 = 0;
        /** @brief a master bus error event occurred while updating a linked-list register from memory */
    constexpr std::uint32_t GPDMA_C3SR_ULEF_B_0x1 = 1;

    /** @brief user setting error flag */
    using GPDMA_C3SR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no user setting error event (value: 0)
     *          - B_0x1: a user setting error event occurred (value: 1)
     */
        /** @brief no user setting error event */
    constexpr std::uint32_t GPDMA_C3SR_USEF_B_0x0 = 0;
        /** @brief a user setting error event occurred */
    constexpr std::uint32_t GPDMA_C3SR_USEF_B_0x1 = 1;

    /** @brief completed suspension flag */
    using GPDMA_C3SR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no completed suspension event (value: 0)
     *          - B_0x1: a completed suspension event occurred (value: 1)
     */
        /** @brief no completed suspension event */
    constexpr std::uint32_t GPDMA_C3SR_SUSPF_B_0x0 = 0;
        /** @brief a completed suspension event occurred */
    constexpr std::uint32_t GPDMA_C3SR_SUSPF_B_0x1 = 1;

    /** @brief trigger overrun flag */
    using GPDMA_C3SR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no trigger overrun event (value: 0)
     *          - B_0x1: a trigger overrun event occurred (value: 1)
     */
        /** @brief no trigger overrun event */
    constexpr std::uint32_t GPDMA_C3SR_TOF_B_0x0 = 0;
        /** @brief a trigger overrun event occurred */
    constexpr std::uint32_t GPDMA_C3SR_TOF_B_0x1 = 1;

    /** @brief monitored FIFO level */
    using GPDMA_C3SR_FIFOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 3 control register */
    using GPDMA_C3CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1E4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief enable */
    using GPDMA_C3CR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write: ignored, read: channel disabled (value: 0)
     *          - B_0x1: write: enable channel, read: channel enabled (value: 1)
     */
        /** @brief write: ignored, read: channel disabled */
    constexpr std::uint32_t GPDMA_C3CR_EN_B_0x0 = 0;
        /** @brief write: enable channel, read: channel enabled */
    constexpr std::uint32_t GPDMA_C3CR_EN_B_0x1 = 1;

    /** @brief reset */
    using GPDMA_C3CR_RESET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no channel reset (value: 0)
     *          - B_0x1: channel reset (value: 1)
     */
        /** @brief no channel reset */
    constexpr std::uint32_t GPDMA_C3CR_RESET_B_0x0 = 0;
        /** @brief channel reset */
    constexpr std::uint32_t GPDMA_C3CR_RESET_B_0x1 = 1;

    /** @brief suspend */
    using GPDMA_C3CR_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write: resume channel, read: channel not suspended (value: 0)
     *          - B_0x1: write: suspend channel, read: channel suspended. (value: 1)
     */
        /** @brief write: resume channel, read: channel not suspended */
    constexpr std::uint32_t GPDMA_C3CR_SUSP_B_0x0 = 0;
        /** @brief write: suspend channel, read: channel suspended. */
    constexpr std::uint32_t GPDMA_C3CR_SUSP_B_0x1 = 1;

    /** @brief transfer complete interrupt enable */
    using GPDMA_C3CR_TCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C3CR_TCIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C3CR_TCIE_B_0x1 = 1;

    /** @brief half transfer complete interrupt enable */
    using GPDMA_C3CR_HTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C3CR_HTIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C3CR_HTIE_B_0x1 = 1;

    /** @brief data transfer error interrupt enable */
    using GPDMA_C3CR_DTEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C3CR_DTEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C3CR_DTEIE_B_0x1 = 1;

    /** @brief update link transfer error interrupt enable */
    using GPDMA_C3CR_ULEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C3CR_ULEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C3CR_ULEIE_B_0x1 = 1;

    /** @brief user setting error interrupt enable */
    using GPDMA_C3CR_USEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C3CR_USEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C3CR_USEIE_B_0x1 = 1;

    /** @brief completed suspension interrupt enable */
    using GPDMA_C3CR_SUSPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C3CR_SUSPIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C3CR_SUSPIE_B_0x1 = 1;

    /** @brief trigger overrun interrupt enable */
    using GPDMA_C3CR_TOIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C3CR_TOIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C3CR_TOIE_B_0x1 = 1;

    /** @brief Link step mode */
    using GPDMA_C3CR_LSM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: channel executed for the full linked-list and completed at the end of the last LLI (GPDMA_CxLLR=0). The 16 low-significant bits of the link address are null (LA[15:0]=0) and all the update bits are null (UT1=UB1=UT2=USA=UDA=ULL=0 and UT3=UB2=0 if present). Then GPDMA_CxBR1.BNDT[15:0]=0 and GPDMA_CxBR1.BRC[10:0]=0 if present. (value: 0)
     *          - B_0x1: channel executed once for the current LLI (value: 1)
     */
        /** @brief channel executed for the full linked-list and completed at the end of the last LLI (GPDMA_CxLLR=0). The 16 low-significant bits of the link address are null (LA[15:0]=0) and all the update bits are null (UT1=UB1=UT2=USA=UDA=ULL=0 and UT3=UB2=0 if present). Then GPDMA_CxBR1.BNDT[15:0]=0 and GPDMA_CxBR1.BRC[10:0]=0 if present. */
    constexpr std::uint32_t GPDMA_C3CR_LSM_B_0x0 = 0;
        /** @brief channel executed once for the current LLI */
    constexpr std::uint32_t GPDMA_C3CR_LSM_B_0x1 = 1;

    /** @brief linked-list allocated port */
    using GPDMA_C3CR_LAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C3CR_LAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C3CR_LAP_B_0x1 = 1;

    /** @brief priority level of the channel x GPDMA transfer versus others */
    using GPDMA_C3CR_PRIO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: low priority, low weight (value: 0)
     *          - B_0x1: low priority, mid weight (value: 1)
     *          - B_0x2: low priority, high weight (value: 2)
     *          - B_0x3: high priority (value: 3)
     */
        /** @brief low priority, low weight */
    constexpr std::uint32_t GPDMA_C3CR_PRIO_B_0x0 = 0;
        /** @brief low priority, mid weight */
    constexpr std::uint32_t GPDMA_C3CR_PRIO_B_0x1 = 1;
        /** @brief low priority, high weight */
    constexpr std::uint32_t GPDMA_C3CR_PRIO_B_0x2 = 2;
        /** @brief high priority */
    constexpr std::uint32_t GPDMA_C3CR_PRIO_B_0x3 = 3;

    /** @brief GPDMA channel 3 transfer register 1 */
    using GPDMA_C3TR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x210, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief binary logarithm of the source data width of a burst in bytes */
    using GPDMA_C3TR1_SDW_LOG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: byte (value: 0)
     *          - B_0x1: half-word (2 bytes) (value: 1)
     *          - B_0x2: word (4 bytes) (value: 2)
     *          - B_0x3: user setting error reported and no transfer issued (value: 3)
     */
        /** @brief byte */
    constexpr std::uint32_t GPDMA_C3TR1_SDW_LOG2_B_0x0 = 0;
        /** @brief half-word (2 bytes) */
    constexpr std::uint32_t GPDMA_C3TR1_SDW_LOG2_B_0x1 = 1;
        /** @brief word (4 bytes) */
    constexpr std::uint32_t GPDMA_C3TR1_SDW_LOG2_B_0x2 = 2;
        /** @brief user setting error reported and no transfer issued */
    constexpr std::uint32_t GPDMA_C3TR1_SDW_LOG2_B_0x3 = 3;

    /** @brief source incrementing burst */
    using GPDMA_C3TR1_SINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fixed burst (value: 0)
     *          - B_0x1: contiguously incremented burst (value: 1)
     */
        /** @brief fixed burst */
    constexpr std::uint32_t GPDMA_C3TR1_SINC_B_0x0 = 0;
        /** @brief contiguously incremented burst */
    constexpr std::uint32_t GPDMA_C3TR1_SINC_B_0x1 = 1;

    /** @brief source burst length minus 1, between 0 and 63 */
    using GPDMA_C3TR1_SBL_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief padding/alignment mode */
    using GPDMA_C3TR1_PAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: source data is transferred as right aligned, padded with 0s up to the destination data width (value: 0)
     *          - B_0x1: source data is transferred as right aligned, sign extended up to the destination data width (value: 1)
     */
        /** @brief source data is transferred as right aligned, padded with 0s up to the destination data width */
    constexpr std::uint32_t GPDMA_C3TR1_PAM_B_0x0 = 0;
        /** @brief source data is transferred as right aligned, sign extended up to the destination data width */
    constexpr std::uint32_t GPDMA_C3TR1_PAM_B_0x1 = 1;

    /** @brief source byte exchange within the unaligned half-word of each source word */
    using GPDMA_C3TR1_SBX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no byte-based exchange within the unaligned half-word of each source word (value: 0)
     *          - B_0x1: the two consecutive bytes within the unaligned half-word of each source word are exchanged. (value: 1)
     */
        /** @brief no byte-based exchange within the unaligned half-word of each source word */
    constexpr std::uint32_t GPDMA_C3TR1_SBX_B_0x0 = 0;
        /** @brief the two consecutive bytes within the unaligned half-word of each source word are exchanged. */
    constexpr std::uint32_t GPDMA_C3TR1_SBX_B_0x1 = 1;

    /** @brief source allocated port */
    using GPDMA_C3TR1_SAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C3TR1_SAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C3TR1_SAP_B_0x1 = 1;

    /** @brief security attribute of the GPDMA transfer from the source */
    using GPDMA_C3TR1_SSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPDMA transfer non-secure (value: 0)
     *          - B_0x1: GPDMA transfer secure (value: 1)
     */
        /** @brief GPDMA transfer non-secure */
    constexpr std::uint32_t GPDMA_C3TR1_SSEC_B_0x0 = 0;
        /** @brief GPDMA transfer secure */
    constexpr std::uint32_t GPDMA_C3TR1_SSEC_B_0x1 = 1;

    /** @brief binary logarithm of the destination data width of a burst, in bytes */
    using GPDMA_C3TR1_DDW_LOG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: byte (value: 0)
     *          - B_0x1: half-word (2 bytes) (value: 1)
     *          - B_0x2: word (4 bytes) (value: 2)
     *          - B_0x3: user setting error reported and no transfer issued (value: 3)
     */
        /** @brief byte */
    constexpr std::uint32_t GPDMA_C3TR1_DDW_LOG2_B_0x0 = 0;
        /** @brief half-word (2 bytes) */
    constexpr std::uint32_t GPDMA_C3TR1_DDW_LOG2_B_0x1 = 1;
        /** @brief word (4 bytes) */
    constexpr std::uint32_t GPDMA_C3TR1_DDW_LOG2_B_0x2 = 2;
        /** @brief user setting error reported and no transfer issued */
    constexpr std::uint32_t GPDMA_C3TR1_DDW_LOG2_B_0x3 = 3;

    /** @brief destination incrementing burst */
    using GPDMA_C3TR1_DINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fixed burst (value: 0)
     *          - B_0x1: contiguously incremented burst (value: 1)
     */
        /** @brief fixed burst */
    constexpr std::uint32_t GPDMA_C3TR1_DINC_B_0x0 = 0;
        /** @brief contiguously incremented burst */
    constexpr std::uint32_t GPDMA_C3TR1_DINC_B_0x1 = 1;

    /** @brief destination burst length minus 1, between 0 and 63 */
    using GPDMA_C3TR1_DBL_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination byte exchange */
    using GPDMA_C3TR1_DBX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no byte-based exchange within half-word (value: 0)
     *          - B_0x1: the two consecutive (post PAM) bytes are exchanged in each destination half-word. (value: 1)
     */
        /** @brief no byte-based exchange within half-word */
    constexpr std::uint32_t GPDMA_C3TR1_DBX_B_0x0 = 0;
        /** @brief the two consecutive (post PAM) bytes are exchanged in each destination half-word. */
    constexpr std::uint32_t GPDMA_C3TR1_DBX_B_0x1 = 1;

    /** @brief destination half-word exchange */
    using GPDMA_C3TR1_DHX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no halfword-based exchanged within word (value: 0)
     *          - B_0x1: the two consecutive (post PAM) half-words are exchanged in each destination word. (value: 1)
     */
        /** @brief no halfword-based exchanged within word */
    constexpr std::uint32_t GPDMA_C3TR1_DHX_B_0x0 = 0;
        /** @brief the two consecutive (post PAM) half-words are exchanged in each destination word. */
    constexpr std::uint32_t GPDMA_C3TR1_DHX_B_0x1 = 1;

    /** @brief destination allocated port */
    using GPDMA_C3TR1_DAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C3TR1_DAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C3TR1_DAP_B_0x1 = 1;

    /** @brief security attribute of the GPDMA transfer to the destination */
    using GPDMA_C3TR1_DSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPDMA transfer non-secure (value: 0)
     *          - B_0x1: GPDMA transfer secure (value: 1)
     */
        /** @brief GPDMA transfer non-secure */
    constexpr std::uint32_t GPDMA_C3TR1_DSEC_B_0x0 = 0;
        /** @brief GPDMA transfer secure */
    constexpr std::uint32_t GPDMA_C3TR1_DSEC_B_0x1 = 1;

    /** @brief GPDMA channel 3 transfer register 2 */
    using GPDMA_C3TR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x214, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA hardware request selection */
    using GPDMA_C3TR2_REQSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief software request */
    using GPDMA_C3TR2_SWREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no software request. The selected hardware request REQSEL[6:0] is taken into account. (value: 0)
     *          - B_0x1: software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[6:0] is ignored. (value: 1)
     */
        /** @brief no software request. The selected hardware request REQSEL[6:0] is taken into account. */
    constexpr std::uint32_t GPDMA_C3TR2_SWREQ_B_0x0 = 0;
        /** @brief software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[6:0] is ignored. */
    constexpr std::uint32_t GPDMA_C3TR2_SWREQ_B_0x1 = 1;

    /** @brief destination hardware request */
    using GPDMA_C3TR2_DREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: selected hardware request driven by a source peripheral (request signal taken into account by the GPDMA transfer scheduler over the source/read port) (value: 0)
     *          - B_0x1: selected hardware request driven by a destination peripheral (request signal taken into account by the GPDMA transfer scheduler over the destination/write port) (value: 1)
     */
        /** @brief selected hardware request driven by a source peripheral (request signal taken into account by the GPDMA transfer scheduler over the source/read port) */
    constexpr std::uint32_t GPDMA_C3TR2_DREQ_B_0x0 = 0;
        /** @brief selected hardware request driven by a destination peripheral (request signal taken into account by the GPDMA transfer scheduler over the destination/write port) */
    constexpr std::uint32_t GPDMA_C3TR2_DREQ_B_0x1 = 1;

    /** @brief Block hardware request */
    using GPDMA_C3TR2_BREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a burst level. (value: 0)
     *          - B_0x1: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see ). (value: 1)
     */
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a burst level. */
    constexpr std::uint32_t GPDMA_C3TR2_BREQ_B_0x0 = 0;
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see ). */
    constexpr std::uint32_t GPDMA_C3TR2_BREQ_B_0x1 = 1;

    /** @brief trigger mode */
    using GPDMA_C3TR2_TRIGM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: at block level: the first burst read of each block transfer is conditioned by one hit trigger (channel x = 12 to 15, for each block if a 2D/repeated block is configured with GPDMA_CxBR1.BRC[10:0] different to 0). (value: 0)
     *          - B_0x1: channel x = 0 to 11, same as 00; channel x=12 to 15, at 2D/repeated block level, the (value: 1)
     *          - B_0x2: at link level: a LLI link transfer is conditioned by one hit trigger. The LLI data transfer (if any) is not conditioned. (value: 2)
     *          - B_0x3: at programmed burst level: If SWREQ = 1, each programmed burst read is conditioned by one hit trigger. If SWREQ=0, each programmed burst that is requested by the selected peripheral, is conditioned by one hit trigger. (value: 3)
     */
        /** @brief at block level: the first burst read of each block transfer is conditioned by one hit trigger (channel x = 12 to 15, for each block if a 2D/repeated block is configured with GPDMA_CxBR1.BRC[10:0] different to 0). */
    constexpr std::uint32_t GPDMA_C3TR2_TRIGM_B_0x0 = 0;
        /** @brief channel x = 0 to 11, same as 00; channel x=12 to 15, at 2D/repeated block level, the */
    constexpr std::uint32_t GPDMA_C3TR2_TRIGM_B_0x1 = 1;
        /** @brief at link level: a LLI link transfer is conditioned by one hit trigger. The LLI data transfer (if any) is not conditioned. */
    constexpr std::uint32_t GPDMA_C3TR2_TRIGM_B_0x2 = 2;
        /** @brief at programmed burst level: If SWREQ = 1, each programmed burst read is conditioned by one hit trigger. If SWREQ=0, each programmed burst that is requested by the selected peripheral, is conditioned by one hit trigger. */
    constexpr std::uint32_t GPDMA_C3TR2_TRIGM_B_0x3 = 3;

    /** @brief trigger event input selection */
    using GPDMA_C3TR2_TRIGSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief trigger event polarity */
    using GPDMA_C3TR2_TRIGPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no trigger (masked trigger event) (value: 0)
     *          - B_0x1: trigger on the rising edge (value: 1)
     *          - B_0x2: trigger on the falling edge (value: 2)
     *          - B_0x3: same as 00 (value: 3)
     */
        /** @brief no trigger (masked trigger event) */
    constexpr std::uint32_t GPDMA_C3TR2_TRIGPOL_B_0x0 = 0;
        /** @brief trigger on the rising edge */
    constexpr std::uint32_t GPDMA_C3TR2_TRIGPOL_B_0x1 = 1;
        /** @brief trigger on the falling edge */
    constexpr std::uint32_t GPDMA_C3TR2_TRIGPOL_B_0x2 = 2;
        /** @brief same as 00 */
    constexpr std::uint32_t GPDMA_C3TR2_TRIGPOL_B_0x3 = 3;

    /** @brief transfer complete event mode */
    using GPDMA_C3TR2_TCEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: at block level (when GPDMA_CxBR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. (value: 0)
     *          - B_0x1: channel x = 0 to 11, same as 00; channel x=12 to 15, at 2D/repeated block level (when GPDMA_CxBR1.BRC[10:0]= 0 and GPDMA_CxBR1.BNDT[15:0]= 0), the complete (and the half) transfer event is generated at the end (respectively half of the end) of the 2D/repeated block. (value: 1)
     *          - B_0x2: at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer (the LLI data transfer being a block transfer or a 2D/repeated block transfer for channel x = 12 to 15), if any data transfer. (value: 2)
     *          - B_0x3: at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address GPDMA_CxLLR.LA[15:2] to zero and clears all the GPDMA_CxLLR update bits (UT1, UT2, UB1, USA, UDA and ULL, plus UT3 and UB2 if present). If the channel transfer is continuous/infinite, no event is generated. (value: 3)
     */
        /** @brief at block level (when GPDMA_CxBR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. */
    constexpr std::uint32_t GPDMA_C3TR2_TCEM_B_0x0 = 0;
        /** @brief channel x = 0 to 11, same as 00; channel x=12 to 15, at 2D/repeated block level (when GPDMA_CxBR1.BRC[10:0]= 0 and GPDMA_CxBR1.BNDT[15:0]= 0), the complete (and the half) transfer event is generated at the end (respectively half of the end) of the 2D/repeated block. */
    constexpr std::uint32_t GPDMA_C3TR2_TCEM_B_0x1 = 1;
        /** @brief at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer (the LLI data transfer being a block transfer or a 2D/repeated block transfer for channel x = 12 to 15), if any data transfer. */
    constexpr std::uint32_t GPDMA_C3TR2_TCEM_B_0x2 = 2;
        /** @brief at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address GPDMA_CxLLR.LA[15:2] to zero and clears all the GPDMA_CxLLR update bits (UT1, UT2, UB1, USA, UDA and ULL, plus UT3 and UB2 if present). If the channel transfer is continuous/infinite, no event is generated. */
    constexpr std::uint32_t GPDMA_C3TR2_TCEM_B_0x3 = 3;

    /** @brief GPDMA channel 3 block register 1 */
    using GPDMA_C3BR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x218, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief block number of data bytes to transfer from the source */
    using GPDMA_C3BR1_BNDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 3 source address register */
    using GPDMA_C3SAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x21C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief source address */
    using GPDMA_C3SAR_SA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 3 destination address register */
    using GPDMA_C3DAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x220, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination address */
    using GPDMA_C3DAR_DA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 3 linked-list address register */
    using GPDMA_C3LLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pointer (16-bit low-significant address) to the next linked-list data structure */
    using GPDMA_C3LLR_LA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxLLR register from memory */
    using GPDMA_C3LLR_ULL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxLLR update (value: 0)
     *          - B_0x1: GPDMA_CxLLR update (value: 1)
     */
        /** @brief no GPDMA_CxLLR update */
    constexpr std::uint32_t GPDMA_C3LLR_ULL_B_0x0 = 0;
        /** @brief GPDMA_CxLLR update */
    constexpr std::uint32_t GPDMA_C3LLR_ULL_B_0x1 = 1;

    /** @brief Update GPDMA_CxDAR register from memory */
    using GPDMA_C3LLR_UDA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxDAR update (value: 0)
     *          - B_0x1: GPDMA_CxDAR update (value: 1)
     */
        /** @brief no GPDMA_CxDAR update */
    constexpr std::uint32_t GPDMA_C3LLR_UDA_B_0x0 = 0;
        /** @brief GPDMA_CxDAR update */
    constexpr std::uint32_t GPDMA_C3LLR_UDA_B_0x1 = 1;

    /** @brief update GPDMA_CxSAR from memory */
    using GPDMA_C3LLR_USA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxSAR update (value: 0)
     *          - B_0x1: GPDMA_CxSAR update (value: 1)
     */
        /** @brief no GPDMA_CxSAR update */
    constexpr std::uint32_t GPDMA_C3LLR_USA_B_0x0 = 0;
        /** @brief GPDMA_CxSAR update */
    constexpr std::uint32_t GPDMA_C3LLR_USA_B_0x1 = 1;

    /** @brief Update GPDMA_CxBR1 from memory */
    using GPDMA_C3LLR_UB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxBR1 update from memory (GPDMA_CxBR1.BNDT[15:0] restored if any link transfer) (value: 0)
     *          - B_0x1: GPDMA_CxBR1 update (value: 1)
     */
        /** @brief no GPDMA_CxBR1 update from memory (GPDMA_CxBR1.BNDT[15:0] restored if any link transfer) */
    constexpr std::uint32_t GPDMA_C3LLR_UB1_B_0x0 = 0;
        /** @brief GPDMA_CxBR1 update */
    constexpr std::uint32_t GPDMA_C3LLR_UB1_B_0x1 = 1;

    /** @brief Update GPDMA_CxTR2 from memory */
    using GPDMA_C3LLR_UT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxTR2 update (value: 0)
     *          - B_0x1: GPDMA_CxTR2 update (value: 1)
     */
        /** @brief no GPDMA_CxTR2 update */
    constexpr std::uint32_t GPDMA_C3LLR_UT2_B_0x0 = 0;
        /** @brief GPDMA_CxTR2 update */
    constexpr std::uint32_t GPDMA_C3LLR_UT2_B_0x1 = 1;

    /** @brief Update GPDMA_CxTR1 from memory */
    using GPDMA_C3LLR_UT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxTR1 update (value: 0)
     *          - B_0x1: GPDMA_CxTR1 update (value: 1)
     */
        /** @brief no GPDMA_CxTR1 update */
    constexpr std::uint32_t GPDMA_C3LLR_UT1_B_0x0 = 0;
        /** @brief GPDMA_CxTR1 update */
    constexpr std::uint32_t GPDMA_C3LLR_UT1_B_0x1 = 1;

    /** @brief GPDMA channel 4 linked-list base address register */
    using GPDMA_C4LBAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x250, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief linked-list base address of GPDMA channel x */
    using GPDMA_C4LBAR_LBA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 4 flag clear register */
    using GPDMA_C4FCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x25C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transfer complete flag clear */
    using GPDMA_C4FCR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding TCF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C4FCR_TCF_B_0x0 = 0;
        /** @brief corresponding TCF flag cleared */
    constexpr std::uint32_t GPDMA_C4FCR_TCF_B_0x1 = 1;

    /** @brief half transfer flag clear */
    using GPDMA_C4FCR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding HTF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C4FCR_HTF_B_0x0 = 0;
        /** @brief corresponding HTF flag cleared */
    constexpr std::uint32_t GPDMA_C4FCR_HTF_B_0x1 = 1;

    /** @brief data transfer error flag clear */
    using GPDMA_C4FCR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding DTEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C4FCR_DTEF_B_0x0 = 0;
        /** @brief corresponding DTEF flag cleared */
    constexpr std::uint32_t GPDMA_C4FCR_DTEF_B_0x1 = 1;

    /** @brief update link transfer error flag clear */
    using GPDMA_C4FCR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding ULEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C4FCR_ULEF_B_0x0 = 0;
        /** @brief corresponding ULEF flag cleared */
    constexpr std::uint32_t GPDMA_C4FCR_ULEF_B_0x1 = 1;

    /** @brief user setting error flag clear */
    using GPDMA_C4FCR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding USEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C4FCR_USEF_B_0x0 = 0;
        /** @brief corresponding USEF flag cleared */
    constexpr std::uint32_t GPDMA_C4FCR_USEF_B_0x1 = 1;

    /** @brief completed suspension flag clear */
    using GPDMA_C4FCR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding SUSPF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C4FCR_SUSPF_B_0x0 = 0;
        /** @brief corresponding SUSPF flag cleared */
    constexpr std::uint32_t GPDMA_C4FCR_SUSPF_B_0x1 = 1;

    /** @brief trigger overrun flag clear */
    using GPDMA_C4FCR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding TOF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C4FCR_TOF_B_0x0 = 0;
        /** @brief corresponding TOF flag cleared */
    constexpr std::uint32_t GPDMA_C4FCR_TOF_B_0x1 = 1;

    /** @brief GPDMA channel 4 status register */
    using GPDMA_C4SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x260, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief idle flag */
    using GPDMA_C4SR_IDLEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: channel not in idle state (value: 0)
     *          - B_0x1: channel in idle state (value: 1)
     */
        /** @brief channel not in idle state */
    constexpr std::uint32_t GPDMA_C4SR_IDLEF_B_0x0 = 0;
        /** @brief channel in idle state */
    constexpr std::uint32_t GPDMA_C4SR_IDLEF_B_0x1 = 1;

    /** @brief transfer complete flag */
    using GPDMA_C4SR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no transfer complete event (value: 0)
     *          - B_0x1: a transfer complete event occurred (value: 1)
     */
        /** @brief no transfer complete event */
    constexpr std::uint32_t GPDMA_C4SR_TCF_B_0x0 = 0;
        /** @brief a transfer complete event occurred */
    constexpr std::uint32_t GPDMA_C4SR_TCF_B_0x1 = 1;

    /** @brief half transfer flag */
    using GPDMA_C4SR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no half transfer event (value: 0)
     *          - B_0x1: an half transfer event occurred (value: 1)
     */
        /** @brief no half transfer event */
    constexpr std::uint32_t GPDMA_C4SR_HTF_B_0x0 = 0;
        /** @brief an half transfer event occurred */
    constexpr std::uint32_t GPDMA_C4SR_HTF_B_0x1 = 1;

    /** @brief data transfer error flag */
    using GPDMA_C4SR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no data transfer error event (value: 0)
     *          - B_0x1: a master bus error event occurred on a data transfer (value: 1)
     */
        /** @brief no data transfer error event */
    constexpr std::uint32_t GPDMA_C4SR_DTEF_B_0x0 = 0;
        /** @brief a master bus error event occurred on a data transfer */
    constexpr std::uint32_t GPDMA_C4SR_DTEF_B_0x1 = 1;

    /** @brief update link transfer error flag */
    using GPDMA_C4SR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no update link transfer error event (value: 0)
     *          - B_0x1: a master bus error event occurred while updating a linked-list register from memory (value: 1)
     */
        /** @brief no update link transfer error event */
    constexpr std::uint32_t GPDMA_C4SR_ULEF_B_0x0 = 0;
        /** @brief a master bus error event occurred while updating a linked-list register from memory */
    constexpr std::uint32_t GPDMA_C4SR_ULEF_B_0x1 = 1;

    /** @brief user setting error flag */
    using GPDMA_C4SR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no user setting error event (value: 0)
     *          - B_0x1: a user setting error event occurred (value: 1)
     */
        /** @brief no user setting error event */
    constexpr std::uint32_t GPDMA_C4SR_USEF_B_0x0 = 0;
        /** @brief a user setting error event occurred */
    constexpr std::uint32_t GPDMA_C4SR_USEF_B_0x1 = 1;

    /** @brief completed suspension flag */
    using GPDMA_C4SR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no completed suspension event (value: 0)
     *          - B_0x1: a completed suspension event occurred (value: 1)
     */
        /** @brief no completed suspension event */
    constexpr std::uint32_t GPDMA_C4SR_SUSPF_B_0x0 = 0;
        /** @brief a completed suspension event occurred */
    constexpr std::uint32_t GPDMA_C4SR_SUSPF_B_0x1 = 1;

    /** @brief trigger overrun flag */
    using GPDMA_C4SR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no trigger overrun event (value: 0)
     *          - B_0x1: a trigger overrun event occurred (value: 1)
     */
        /** @brief no trigger overrun event */
    constexpr std::uint32_t GPDMA_C4SR_TOF_B_0x0 = 0;
        /** @brief a trigger overrun event occurred */
    constexpr std::uint32_t GPDMA_C4SR_TOF_B_0x1 = 1;

    /** @brief monitored FIFO level */
    using GPDMA_C4SR_FIFOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 4 control register */
    using GPDMA_C4CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x264, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief enable */
    using GPDMA_C4CR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write: ignored, read: channel disabled (value: 0)
     *          - B_0x1: write: enable channel, read: channel enabled (value: 1)
     */
        /** @brief write: ignored, read: channel disabled */
    constexpr std::uint32_t GPDMA_C4CR_EN_B_0x0 = 0;
        /** @brief write: enable channel, read: channel enabled */
    constexpr std::uint32_t GPDMA_C4CR_EN_B_0x1 = 1;

    /** @brief reset */
    using GPDMA_C4CR_RESET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no channel reset (value: 0)
     *          - B_0x1: channel reset (value: 1)
     */
        /** @brief no channel reset */
    constexpr std::uint32_t GPDMA_C4CR_RESET_B_0x0 = 0;
        /** @brief channel reset */
    constexpr std::uint32_t GPDMA_C4CR_RESET_B_0x1 = 1;

    /** @brief suspend */
    using GPDMA_C4CR_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write: resume channel, read: channel not suspended (value: 0)
     *          - B_0x1: write: suspend channel, read: channel suspended. (value: 1)
     */
        /** @brief write: resume channel, read: channel not suspended */
    constexpr std::uint32_t GPDMA_C4CR_SUSP_B_0x0 = 0;
        /** @brief write: suspend channel, read: channel suspended. */
    constexpr std::uint32_t GPDMA_C4CR_SUSP_B_0x1 = 1;

    /** @brief transfer complete interrupt enable */
    using GPDMA_C4CR_TCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C4CR_TCIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C4CR_TCIE_B_0x1 = 1;

    /** @brief half transfer complete interrupt enable */
    using GPDMA_C4CR_HTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C4CR_HTIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C4CR_HTIE_B_0x1 = 1;

    /** @brief data transfer error interrupt enable */
    using GPDMA_C4CR_DTEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C4CR_DTEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C4CR_DTEIE_B_0x1 = 1;

    /** @brief update link transfer error interrupt enable */
    using GPDMA_C4CR_ULEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C4CR_ULEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C4CR_ULEIE_B_0x1 = 1;

    /** @brief user setting error interrupt enable */
    using GPDMA_C4CR_USEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C4CR_USEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C4CR_USEIE_B_0x1 = 1;

    /** @brief completed suspension interrupt enable */
    using GPDMA_C4CR_SUSPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C4CR_SUSPIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C4CR_SUSPIE_B_0x1 = 1;

    /** @brief trigger overrun interrupt enable */
    using GPDMA_C4CR_TOIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C4CR_TOIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C4CR_TOIE_B_0x1 = 1;

    /** @brief Link step mode */
    using GPDMA_C4CR_LSM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: channel executed for the full linked-list and completed at the end of the last LLI (GPDMA_CxLLR=0). The 16 low-significant bits of the link address are null (LA[15:0]=0) and all the update bits are null (UT1=UB1=UT2=USA=UDA=ULL=0 and UT3=UB2=0 if present). Then GPDMA_CxBR1.BNDT[15:0]=0 and GPDMA_CxBR1.BRC[10:0]=0 if present. (value: 0)
     *          - B_0x1: channel executed once for the current LLI (value: 1)
     */
        /** @brief channel executed for the full linked-list and completed at the end of the last LLI (GPDMA_CxLLR=0). The 16 low-significant bits of the link address are null (LA[15:0]=0) and all the update bits are null (UT1=UB1=UT2=USA=UDA=ULL=0 and UT3=UB2=0 if present). Then GPDMA_CxBR1.BNDT[15:0]=0 and GPDMA_CxBR1.BRC[10:0]=0 if present. */
    constexpr std::uint32_t GPDMA_C4CR_LSM_B_0x0 = 0;
        /** @brief channel executed once for the current LLI */
    constexpr std::uint32_t GPDMA_C4CR_LSM_B_0x1 = 1;

    /** @brief linked-list allocated port */
    using GPDMA_C4CR_LAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C4CR_LAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C4CR_LAP_B_0x1 = 1;

    /** @brief priority level of the channel x GPDMA transfer versus others */
    using GPDMA_C4CR_PRIO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: low priority, low weight (value: 0)
     *          - B_0x1: low priority, mid weight (value: 1)
     *          - B_0x2: low priority, high weight (value: 2)
     *          - B_0x3: high priority (value: 3)
     */
        /** @brief low priority, low weight */
    constexpr std::uint32_t GPDMA_C4CR_PRIO_B_0x0 = 0;
        /** @brief low priority, mid weight */
    constexpr std::uint32_t GPDMA_C4CR_PRIO_B_0x1 = 1;
        /** @brief low priority, high weight */
    constexpr std::uint32_t GPDMA_C4CR_PRIO_B_0x2 = 2;
        /** @brief high priority */
    constexpr std::uint32_t GPDMA_C4CR_PRIO_B_0x3 = 3;

    /** @brief GPDMA channel 4 transfer register 1 */
    using GPDMA_C4TR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x290, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief binary logarithm of the source data width of a burst in bytes */
    using GPDMA_C4TR1_SDW_LOG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: byte (value: 0)
     *          - B_0x1: half-word (2 bytes) (value: 1)
     *          - B_0x2: word (4 bytes) (value: 2)
     *          - B_0x3: user setting error reported and no transfer issued (value: 3)
     */
        /** @brief byte */
    constexpr std::uint32_t GPDMA_C4TR1_SDW_LOG2_B_0x0 = 0;
        /** @brief half-word (2 bytes) */
    constexpr std::uint32_t GPDMA_C4TR1_SDW_LOG2_B_0x1 = 1;
        /** @brief word (4 bytes) */
    constexpr std::uint32_t GPDMA_C4TR1_SDW_LOG2_B_0x2 = 2;
        /** @brief user setting error reported and no transfer issued */
    constexpr std::uint32_t GPDMA_C4TR1_SDW_LOG2_B_0x3 = 3;

    /** @brief source incrementing burst */
    using GPDMA_C4TR1_SINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fixed burst (value: 0)
     *          - B_0x1: contiguously incremented burst (value: 1)
     */
        /** @brief fixed burst */
    constexpr std::uint32_t GPDMA_C4TR1_SINC_B_0x0 = 0;
        /** @brief contiguously incremented burst */
    constexpr std::uint32_t GPDMA_C4TR1_SINC_B_0x1 = 1;

    /** @brief source burst length minus 1, between 0 and 63 */
    using GPDMA_C4TR1_SBL_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief padding/alignment mode */
    using GPDMA_C4TR1_PAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: source data is transferred as right aligned, padded with 0s up to the destination data width (value: 0)
     *          - B_0x1: source data is transferred as right aligned, sign extended up to the destination data width (value: 1)
     */
        /** @brief source data is transferred as right aligned, padded with 0s up to the destination data width */
    constexpr std::uint32_t GPDMA_C4TR1_PAM_B_0x0 = 0;
        /** @brief source data is transferred as right aligned, sign extended up to the destination data width */
    constexpr std::uint32_t GPDMA_C4TR1_PAM_B_0x1 = 1;

    /** @brief source byte exchange within the unaligned half-word of each source word */
    using GPDMA_C4TR1_SBX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no byte-based exchange within the unaligned half-word of each source word (value: 0)
     *          - B_0x1: the two consecutive bytes within the unaligned half-word of each source word are exchanged. (value: 1)
     */
        /** @brief no byte-based exchange within the unaligned half-word of each source word */
    constexpr std::uint32_t GPDMA_C4TR1_SBX_B_0x0 = 0;
        /** @brief the two consecutive bytes within the unaligned half-word of each source word are exchanged. */
    constexpr std::uint32_t GPDMA_C4TR1_SBX_B_0x1 = 1;

    /** @brief source allocated port */
    using GPDMA_C4TR1_SAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C4TR1_SAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C4TR1_SAP_B_0x1 = 1;

    /** @brief security attribute of the GPDMA transfer from the source */
    using GPDMA_C4TR1_SSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPDMA transfer non-secure (value: 0)
     *          - B_0x1: GPDMA transfer secure (value: 1)
     */
        /** @brief GPDMA transfer non-secure */
    constexpr std::uint32_t GPDMA_C4TR1_SSEC_B_0x0 = 0;
        /** @brief GPDMA transfer secure */
    constexpr std::uint32_t GPDMA_C4TR1_SSEC_B_0x1 = 1;

    /** @brief binary logarithm of the destination data width of a burst, in bytes */
    using GPDMA_C4TR1_DDW_LOG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: byte (value: 0)
     *          - B_0x1: half-word (2 bytes) (value: 1)
     *          - B_0x2: word (4 bytes) (value: 2)
     *          - B_0x3: user setting error reported and no transfer issued (value: 3)
     */
        /** @brief byte */
    constexpr std::uint32_t GPDMA_C4TR1_DDW_LOG2_B_0x0 = 0;
        /** @brief half-word (2 bytes) */
    constexpr std::uint32_t GPDMA_C4TR1_DDW_LOG2_B_0x1 = 1;
        /** @brief word (4 bytes) */
    constexpr std::uint32_t GPDMA_C4TR1_DDW_LOG2_B_0x2 = 2;
        /** @brief user setting error reported and no transfer issued */
    constexpr std::uint32_t GPDMA_C4TR1_DDW_LOG2_B_0x3 = 3;

    /** @brief destination incrementing burst */
    using GPDMA_C4TR1_DINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fixed burst (value: 0)
     *          - B_0x1: contiguously incremented burst (value: 1)
     */
        /** @brief fixed burst */
    constexpr std::uint32_t GPDMA_C4TR1_DINC_B_0x0 = 0;
        /** @brief contiguously incremented burst */
    constexpr std::uint32_t GPDMA_C4TR1_DINC_B_0x1 = 1;

    /** @brief destination burst length minus 1, between 0 and 63 */
    using GPDMA_C4TR1_DBL_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination byte exchange */
    using GPDMA_C4TR1_DBX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no byte-based exchange within half-word (value: 0)
     *          - B_0x1: the two consecutive (post PAM) bytes are exchanged in each destination half-word. (value: 1)
     */
        /** @brief no byte-based exchange within half-word */
    constexpr std::uint32_t GPDMA_C4TR1_DBX_B_0x0 = 0;
        /** @brief the two consecutive (post PAM) bytes are exchanged in each destination half-word. */
    constexpr std::uint32_t GPDMA_C4TR1_DBX_B_0x1 = 1;

    /** @brief destination half-word exchange */
    using GPDMA_C4TR1_DHX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no halfword-based exchanged within word (value: 0)
     *          - B_0x1: the two consecutive (post PAM) half-words are exchanged in each destination word. (value: 1)
     */
        /** @brief no halfword-based exchanged within word */
    constexpr std::uint32_t GPDMA_C4TR1_DHX_B_0x0 = 0;
        /** @brief the two consecutive (post PAM) half-words are exchanged in each destination word. */
    constexpr std::uint32_t GPDMA_C4TR1_DHX_B_0x1 = 1;

    /** @brief destination allocated port */
    using GPDMA_C4TR1_DAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C4TR1_DAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C4TR1_DAP_B_0x1 = 1;

    /** @brief security attribute of the GPDMA transfer to the destination */
    using GPDMA_C4TR1_DSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPDMA transfer non-secure (value: 0)
     *          - B_0x1: GPDMA transfer secure (value: 1)
     */
        /** @brief GPDMA transfer non-secure */
    constexpr std::uint32_t GPDMA_C4TR1_DSEC_B_0x0 = 0;
        /** @brief GPDMA transfer secure */
    constexpr std::uint32_t GPDMA_C4TR1_DSEC_B_0x1 = 1;

    /** @brief GPDMA channel 4 transfer register 2 */
    using GPDMA_C4TR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x294, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA hardware request selection */
    using GPDMA_C4TR2_REQSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief software request */
    using GPDMA_C4TR2_SWREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no software request. The selected hardware request REQSEL[6:0] is taken into account. (value: 0)
     *          - B_0x1: software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[6:0] is ignored. (value: 1)
     */
        /** @brief no software request. The selected hardware request REQSEL[6:0] is taken into account. */
    constexpr std::uint32_t GPDMA_C4TR2_SWREQ_B_0x0 = 0;
        /** @brief software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[6:0] is ignored. */
    constexpr std::uint32_t GPDMA_C4TR2_SWREQ_B_0x1 = 1;

    /** @brief destination hardware request */
    using GPDMA_C4TR2_DREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: selected hardware request driven by a source peripheral (request signal taken into account by the GPDMA transfer scheduler over the source/read port) (value: 0)
     *          - B_0x1: selected hardware request driven by a destination peripheral (request signal taken into account by the GPDMA transfer scheduler over the destination/write port) (value: 1)
     */
        /** @brief selected hardware request driven by a source peripheral (request signal taken into account by the GPDMA transfer scheduler over the source/read port) */
    constexpr std::uint32_t GPDMA_C4TR2_DREQ_B_0x0 = 0;
        /** @brief selected hardware request driven by a destination peripheral (request signal taken into account by the GPDMA transfer scheduler over the destination/write port) */
    constexpr std::uint32_t GPDMA_C4TR2_DREQ_B_0x1 = 1;

    /** @brief Block hardware request */
    using GPDMA_C4TR2_BREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a burst level. (value: 0)
     *          - B_0x1: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see ). (value: 1)
     */
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a burst level. */
    constexpr std::uint32_t GPDMA_C4TR2_BREQ_B_0x0 = 0;
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see ). */
    constexpr std::uint32_t GPDMA_C4TR2_BREQ_B_0x1 = 1;

    /** @brief trigger mode */
    using GPDMA_C4TR2_TRIGM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: at block level: the first burst read of each block transfer is conditioned by one hit trigger (channel x = 12 to 15, for each block if a 2D/repeated block is configured with GPDMA_CxBR1.BRC[10:0] different to 0). (value: 0)
     *          - B_0x1: channel x = 0 to 11, same as 00; channel x=12 to 15, at 2D/repeated block level, the (value: 1)
     *          - B_0x2: at link level: a LLI link transfer is conditioned by one hit trigger. The LLI data transfer (if any) is not conditioned. (value: 2)
     *          - B_0x3: at programmed burst level: If SWREQ = 1, each programmed burst read is conditioned by one hit trigger. If SWREQ=0, each programmed burst that is requested by the selected peripheral, is conditioned by one hit trigger. (value: 3)
     */
        /** @brief at block level: the first burst read of each block transfer is conditioned by one hit trigger (channel x = 12 to 15, for each block if a 2D/repeated block is configured with GPDMA_CxBR1.BRC[10:0] different to 0). */
    constexpr std::uint32_t GPDMA_C4TR2_TRIGM_B_0x0 = 0;
        /** @brief channel x = 0 to 11, same as 00; channel x=12 to 15, at 2D/repeated block level, the */
    constexpr std::uint32_t GPDMA_C4TR2_TRIGM_B_0x1 = 1;
        /** @brief at link level: a LLI link transfer is conditioned by one hit trigger. The LLI data transfer (if any) is not conditioned. */
    constexpr std::uint32_t GPDMA_C4TR2_TRIGM_B_0x2 = 2;
        /** @brief at programmed burst level: If SWREQ = 1, each programmed burst read is conditioned by one hit trigger. If SWREQ=0, each programmed burst that is requested by the selected peripheral, is conditioned by one hit trigger. */
    constexpr std::uint32_t GPDMA_C4TR2_TRIGM_B_0x3 = 3;

    /** @brief trigger event input selection */
    using GPDMA_C4TR2_TRIGSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief trigger event polarity */
    using GPDMA_C4TR2_TRIGPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no trigger (masked trigger event) (value: 0)
     *          - B_0x1: trigger on the rising edge (value: 1)
     *          - B_0x2: trigger on the falling edge (value: 2)
     *          - B_0x3: same as 00 (value: 3)
     */
        /** @brief no trigger (masked trigger event) */
    constexpr std::uint32_t GPDMA_C4TR2_TRIGPOL_B_0x0 = 0;
        /** @brief trigger on the rising edge */
    constexpr std::uint32_t GPDMA_C4TR2_TRIGPOL_B_0x1 = 1;
        /** @brief trigger on the falling edge */
    constexpr std::uint32_t GPDMA_C4TR2_TRIGPOL_B_0x2 = 2;
        /** @brief same as 00 */
    constexpr std::uint32_t GPDMA_C4TR2_TRIGPOL_B_0x3 = 3;

    /** @brief transfer complete event mode */
    using GPDMA_C4TR2_TCEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: at block level (when GPDMA_CxBR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. (value: 0)
     *          - B_0x1: channel x = 0 to 11, same as 00; channel x=12 to 15, at 2D/repeated block level (when GPDMA_CxBR1.BRC[10:0]= 0 and GPDMA_CxBR1.BNDT[15:0]= 0), the complete (and the half) transfer event is generated at the end (respectively half of the end) of the 2D/repeated block. (value: 1)
     *          - B_0x2: at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer (the LLI data transfer being a block transfer or a 2D/repeated block transfer for channel x = 12 to 15), if any data transfer. (value: 2)
     *          - B_0x3: at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address GPDMA_CxLLR.LA[15:2] to zero and clears all the GPDMA_CxLLR update bits (UT1, UT2, UB1, USA, UDA and ULL, plus UT3 and UB2 if present). If the channel transfer is continuous/infinite, no event is generated. (value: 3)
     */
        /** @brief at block level (when GPDMA_CxBR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. */
    constexpr std::uint32_t GPDMA_C4TR2_TCEM_B_0x0 = 0;
        /** @brief channel x = 0 to 11, same as 00; channel x=12 to 15, at 2D/repeated block level (when GPDMA_CxBR1.BRC[10:0]= 0 and GPDMA_CxBR1.BNDT[15:0]= 0), the complete (and the half) transfer event is generated at the end (respectively half of the end) of the 2D/repeated block. */
    constexpr std::uint32_t GPDMA_C4TR2_TCEM_B_0x1 = 1;
        /** @brief at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer (the LLI data transfer being a block transfer or a 2D/repeated block transfer for channel x = 12 to 15), if any data transfer. */
    constexpr std::uint32_t GPDMA_C4TR2_TCEM_B_0x2 = 2;
        /** @brief at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address GPDMA_CxLLR.LA[15:2] to zero and clears all the GPDMA_CxLLR update bits (UT1, UT2, UB1, USA, UDA and ULL, plus UT3 and UB2 if present). If the channel transfer is continuous/infinite, no event is generated. */
    constexpr std::uint32_t GPDMA_C4TR2_TCEM_B_0x3 = 3;

    /** @brief GPDMA channel 4 block register 1 */
    using GPDMA_C4BR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x298, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief block number of data bytes to transfer from the source */
    using GPDMA_C4BR1_BNDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 4 source address register */
    using GPDMA_C4SAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x29C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief source address */
    using GPDMA_C4SAR_SA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 4 destination address register */
    using GPDMA_C4DAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination address */
    using GPDMA_C4DAR_DA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 4 linked-list address register */
    using GPDMA_C4LLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2CC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pointer (16-bit low-significant address) to the next linked-list data structure */
    using GPDMA_C4LLR_LA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxLLR register from memory */
    using GPDMA_C4LLR_ULL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxLLR update (value: 0)
     *          - B_0x1: GPDMA_CxLLR update (value: 1)
     */
        /** @brief no GPDMA_CxLLR update */
    constexpr std::uint32_t GPDMA_C4LLR_ULL_B_0x0 = 0;
        /** @brief GPDMA_CxLLR update */
    constexpr std::uint32_t GPDMA_C4LLR_ULL_B_0x1 = 1;

    /** @brief Update GPDMA_CxDAR register from memory */
    using GPDMA_C4LLR_UDA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxDAR update (value: 0)
     *          - B_0x1: GPDMA_CxDAR update (value: 1)
     */
        /** @brief no GPDMA_CxDAR update */
    constexpr std::uint32_t GPDMA_C4LLR_UDA_B_0x0 = 0;
        /** @brief GPDMA_CxDAR update */
    constexpr std::uint32_t GPDMA_C4LLR_UDA_B_0x1 = 1;

    /** @brief update GPDMA_CxSAR from memory */
    using GPDMA_C4LLR_USA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxSAR update (value: 0)
     *          - B_0x1: GPDMA_CxSAR update (value: 1)
     */
        /** @brief no GPDMA_CxSAR update */
    constexpr std::uint32_t GPDMA_C4LLR_USA_B_0x0 = 0;
        /** @brief GPDMA_CxSAR update */
    constexpr std::uint32_t GPDMA_C4LLR_USA_B_0x1 = 1;

    /** @brief Update GPDMA_CxBR1 from memory */
    using GPDMA_C4LLR_UB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxBR1 update from memory (GPDMA_CxBR1.BNDT[15:0] restored if any link transfer) (value: 0)
     *          - B_0x1: GPDMA_CxBR1 update (value: 1)
     */
        /** @brief no GPDMA_CxBR1 update from memory (GPDMA_CxBR1.BNDT[15:0] restored if any link transfer) */
    constexpr std::uint32_t GPDMA_C4LLR_UB1_B_0x0 = 0;
        /** @brief GPDMA_CxBR1 update */
    constexpr std::uint32_t GPDMA_C4LLR_UB1_B_0x1 = 1;

    /** @brief Update GPDMA_CxTR2 from memory */
    using GPDMA_C4LLR_UT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxTR2 update (value: 0)
     *          - B_0x1: GPDMA_CxTR2 update (value: 1)
     */
        /** @brief no GPDMA_CxTR2 update */
    constexpr std::uint32_t GPDMA_C4LLR_UT2_B_0x0 = 0;
        /** @brief GPDMA_CxTR2 update */
    constexpr std::uint32_t GPDMA_C4LLR_UT2_B_0x1 = 1;

    /** @brief Update GPDMA_CxTR1 from memory */
    using GPDMA_C4LLR_UT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxTR1 update (value: 0)
     *          - B_0x1: GPDMA_CxTR1 update (value: 1)
     */
        /** @brief no GPDMA_CxTR1 update */
    constexpr std::uint32_t GPDMA_C4LLR_UT1_B_0x0 = 0;
        /** @brief GPDMA_CxTR1 update */
    constexpr std::uint32_t GPDMA_C4LLR_UT1_B_0x1 = 1;

    /** @brief GPDMA channel 5 linked-list base address register */
    using GPDMA_C5LBAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2D0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief linked-list base address of GPDMA channel x */
    using GPDMA_C5LBAR_LBA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 5 flag clear register */
    using GPDMA_C5FCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2DC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transfer complete flag clear */
    using GPDMA_C5FCR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding TCF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C5FCR_TCF_B_0x0 = 0;
        /** @brief corresponding TCF flag cleared */
    constexpr std::uint32_t GPDMA_C5FCR_TCF_B_0x1 = 1;

    /** @brief half transfer flag clear */
    using GPDMA_C5FCR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding HTF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C5FCR_HTF_B_0x0 = 0;
        /** @brief corresponding HTF flag cleared */
    constexpr std::uint32_t GPDMA_C5FCR_HTF_B_0x1 = 1;

    /** @brief data transfer error flag clear */
    using GPDMA_C5FCR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding DTEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C5FCR_DTEF_B_0x0 = 0;
        /** @brief corresponding DTEF flag cleared */
    constexpr std::uint32_t GPDMA_C5FCR_DTEF_B_0x1 = 1;

    /** @brief update link transfer error flag clear */
    using GPDMA_C5FCR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding ULEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C5FCR_ULEF_B_0x0 = 0;
        /** @brief corresponding ULEF flag cleared */
    constexpr std::uint32_t GPDMA_C5FCR_ULEF_B_0x1 = 1;

    /** @brief user setting error flag clear */
    using GPDMA_C5FCR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding USEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C5FCR_USEF_B_0x0 = 0;
        /** @brief corresponding USEF flag cleared */
    constexpr std::uint32_t GPDMA_C5FCR_USEF_B_0x1 = 1;

    /** @brief completed suspension flag clear */
    using GPDMA_C5FCR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding SUSPF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C5FCR_SUSPF_B_0x0 = 0;
        /** @brief corresponding SUSPF flag cleared */
    constexpr std::uint32_t GPDMA_C5FCR_SUSPF_B_0x1 = 1;

    /** @brief trigger overrun flag clear */
    using GPDMA_C5FCR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding TOF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C5FCR_TOF_B_0x0 = 0;
        /** @brief corresponding TOF flag cleared */
    constexpr std::uint32_t GPDMA_C5FCR_TOF_B_0x1 = 1;

    /** @brief GPDMA channel 5 status register */
    using GPDMA_C5SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2E0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief idle flag */
    using GPDMA_C5SR_IDLEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: channel not in idle state (value: 0)
     *          - B_0x1: channel in idle state (value: 1)
     */
        /** @brief channel not in idle state */
    constexpr std::uint32_t GPDMA_C5SR_IDLEF_B_0x0 = 0;
        /** @brief channel in idle state */
    constexpr std::uint32_t GPDMA_C5SR_IDLEF_B_0x1 = 1;

    /** @brief transfer complete flag */
    using GPDMA_C5SR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no transfer complete event (value: 0)
     *          - B_0x1: a transfer complete event occurred (value: 1)
     */
        /** @brief no transfer complete event */
    constexpr std::uint32_t GPDMA_C5SR_TCF_B_0x0 = 0;
        /** @brief a transfer complete event occurred */
    constexpr std::uint32_t GPDMA_C5SR_TCF_B_0x1 = 1;

    /** @brief half transfer flag */
    using GPDMA_C5SR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no half transfer event (value: 0)
     *          - B_0x1: an half transfer event occurred (value: 1)
     */
        /** @brief no half transfer event */
    constexpr std::uint32_t GPDMA_C5SR_HTF_B_0x0 = 0;
        /** @brief an half transfer event occurred */
    constexpr std::uint32_t GPDMA_C5SR_HTF_B_0x1 = 1;

    /** @brief data transfer error flag */
    using GPDMA_C5SR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no data transfer error event (value: 0)
     *          - B_0x1: a master bus error event occurred on a data transfer (value: 1)
     */
        /** @brief no data transfer error event */
    constexpr std::uint32_t GPDMA_C5SR_DTEF_B_0x0 = 0;
        /** @brief a master bus error event occurred on a data transfer */
    constexpr std::uint32_t GPDMA_C5SR_DTEF_B_0x1 = 1;

    /** @brief update link transfer error flag */
    using GPDMA_C5SR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no update link transfer error event (value: 0)
     *          - B_0x1: a master bus error event occurred while updating a linked-list register from memory (value: 1)
     */
        /** @brief no update link transfer error event */
    constexpr std::uint32_t GPDMA_C5SR_ULEF_B_0x0 = 0;
        /** @brief a master bus error event occurred while updating a linked-list register from memory */
    constexpr std::uint32_t GPDMA_C5SR_ULEF_B_0x1 = 1;

    /** @brief user setting error flag */
    using GPDMA_C5SR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no user setting error event (value: 0)
     *          - B_0x1: a user setting error event occurred (value: 1)
     */
        /** @brief no user setting error event */
    constexpr std::uint32_t GPDMA_C5SR_USEF_B_0x0 = 0;
        /** @brief a user setting error event occurred */
    constexpr std::uint32_t GPDMA_C5SR_USEF_B_0x1 = 1;

    /** @brief completed suspension flag */
    using GPDMA_C5SR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no completed suspension event (value: 0)
     *          - B_0x1: a completed suspension event occurred (value: 1)
     */
        /** @brief no completed suspension event */
    constexpr std::uint32_t GPDMA_C5SR_SUSPF_B_0x0 = 0;
        /** @brief a completed suspension event occurred */
    constexpr std::uint32_t GPDMA_C5SR_SUSPF_B_0x1 = 1;

    /** @brief trigger overrun flag */
    using GPDMA_C5SR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no trigger overrun event (value: 0)
     *          - B_0x1: a trigger overrun event occurred (value: 1)
     */
        /** @brief no trigger overrun event */
    constexpr std::uint32_t GPDMA_C5SR_TOF_B_0x0 = 0;
        /** @brief a trigger overrun event occurred */
    constexpr std::uint32_t GPDMA_C5SR_TOF_B_0x1 = 1;

    /** @brief monitored FIFO level */
    using GPDMA_C5SR_FIFOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 5 control register */
    using GPDMA_C5CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2E4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief enable */
    using GPDMA_C5CR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write: ignored, read: channel disabled (value: 0)
     *          - B_0x1: write: enable channel, read: channel enabled (value: 1)
     */
        /** @brief write: ignored, read: channel disabled */
    constexpr std::uint32_t GPDMA_C5CR_EN_B_0x0 = 0;
        /** @brief write: enable channel, read: channel enabled */
    constexpr std::uint32_t GPDMA_C5CR_EN_B_0x1 = 1;

    /** @brief reset */
    using GPDMA_C5CR_RESET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no channel reset (value: 0)
     *          - B_0x1: channel reset (value: 1)
     */
        /** @brief no channel reset */
    constexpr std::uint32_t GPDMA_C5CR_RESET_B_0x0 = 0;
        /** @brief channel reset */
    constexpr std::uint32_t GPDMA_C5CR_RESET_B_0x1 = 1;

    /** @brief suspend */
    using GPDMA_C5CR_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write: resume channel, read: channel not suspended (value: 0)
     *          - B_0x1: write: suspend channel, read: channel suspended. (value: 1)
     */
        /** @brief write: resume channel, read: channel not suspended */
    constexpr std::uint32_t GPDMA_C5CR_SUSP_B_0x0 = 0;
        /** @brief write: suspend channel, read: channel suspended. */
    constexpr std::uint32_t GPDMA_C5CR_SUSP_B_0x1 = 1;

    /** @brief transfer complete interrupt enable */
    using GPDMA_C5CR_TCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C5CR_TCIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C5CR_TCIE_B_0x1 = 1;

    /** @brief half transfer complete interrupt enable */
    using GPDMA_C5CR_HTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C5CR_HTIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C5CR_HTIE_B_0x1 = 1;

    /** @brief data transfer error interrupt enable */
    using GPDMA_C5CR_DTEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C5CR_DTEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C5CR_DTEIE_B_0x1 = 1;

    /** @brief update link transfer error interrupt enable */
    using GPDMA_C5CR_ULEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C5CR_ULEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C5CR_ULEIE_B_0x1 = 1;

    /** @brief user setting error interrupt enable */
    using GPDMA_C5CR_USEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C5CR_USEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C5CR_USEIE_B_0x1 = 1;

    /** @brief completed suspension interrupt enable */
    using GPDMA_C5CR_SUSPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C5CR_SUSPIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C5CR_SUSPIE_B_0x1 = 1;

    /** @brief trigger overrun interrupt enable */
    using GPDMA_C5CR_TOIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C5CR_TOIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C5CR_TOIE_B_0x1 = 1;

    /** @brief Link step mode */
    using GPDMA_C5CR_LSM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: channel executed for the full linked-list and completed at the end of the last LLI (GPDMA_CxLLR=0). The 16 low-significant bits of the link address are null (LA[15:0]=0) and all the update bits are null (UT1=UB1=UT2=USA=UDA=ULL=0 and UT3=UB2=0 if present). Then GPDMA_CxBR1.BNDT[15:0]=0 and GPDMA_CxBR1.BRC[10:0]=0 if present. (value: 0)
     *          - B_0x1: channel executed once for the current LLI (value: 1)
     */
        /** @brief channel executed for the full linked-list and completed at the end of the last LLI (GPDMA_CxLLR=0). The 16 low-significant bits of the link address are null (LA[15:0]=0) and all the update bits are null (UT1=UB1=UT2=USA=UDA=ULL=0 and UT3=UB2=0 if present). Then GPDMA_CxBR1.BNDT[15:0]=0 and GPDMA_CxBR1.BRC[10:0]=0 if present. */
    constexpr std::uint32_t GPDMA_C5CR_LSM_B_0x0 = 0;
        /** @brief channel executed once for the current LLI */
    constexpr std::uint32_t GPDMA_C5CR_LSM_B_0x1 = 1;

    /** @brief linked-list allocated port */
    using GPDMA_C5CR_LAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C5CR_LAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C5CR_LAP_B_0x1 = 1;

    /** @brief priority level of the channel x GPDMA transfer versus others */
    using GPDMA_C5CR_PRIO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: low priority, low weight (value: 0)
     *          - B_0x1: low priority, mid weight (value: 1)
     *          - B_0x2: low priority, high weight (value: 2)
     *          - B_0x3: high priority (value: 3)
     */
        /** @brief low priority, low weight */
    constexpr std::uint32_t GPDMA_C5CR_PRIO_B_0x0 = 0;
        /** @brief low priority, mid weight */
    constexpr std::uint32_t GPDMA_C5CR_PRIO_B_0x1 = 1;
        /** @brief low priority, high weight */
    constexpr std::uint32_t GPDMA_C5CR_PRIO_B_0x2 = 2;
        /** @brief high priority */
    constexpr std::uint32_t GPDMA_C5CR_PRIO_B_0x3 = 3;

    /** @brief GPDMA channel 5 transfer register 1 */
    using GPDMA_C5TR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x310, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief binary logarithm of the source data width of a burst in bytes */
    using GPDMA_C5TR1_SDW_LOG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: byte (value: 0)
     *          - B_0x1: half-word (2 bytes) (value: 1)
     *          - B_0x2: word (4 bytes) (value: 2)
     *          - B_0x3: user setting error reported and no transfer issued (value: 3)
     */
        /** @brief byte */
    constexpr std::uint32_t GPDMA_C5TR1_SDW_LOG2_B_0x0 = 0;
        /** @brief half-word (2 bytes) */
    constexpr std::uint32_t GPDMA_C5TR1_SDW_LOG2_B_0x1 = 1;
        /** @brief word (4 bytes) */
    constexpr std::uint32_t GPDMA_C5TR1_SDW_LOG2_B_0x2 = 2;
        /** @brief user setting error reported and no transfer issued */
    constexpr std::uint32_t GPDMA_C5TR1_SDW_LOG2_B_0x3 = 3;

    /** @brief source incrementing burst */
    using GPDMA_C5TR1_SINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fixed burst (value: 0)
     *          - B_0x1: contiguously incremented burst (value: 1)
     */
        /** @brief fixed burst */
    constexpr std::uint32_t GPDMA_C5TR1_SINC_B_0x0 = 0;
        /** @brief contiguously incremented burst */
    constexpr std::uint32_t GPDMA_C5TR1_SINC_B_0x1 = 1;

    /** @brief source burst length minus 1, between 0 and 63 */
    using GPDMA_C5TR1_SBL_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief padding/alignment mode */
    using GPDMA_C5TR1_PAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: source data is transferred as right aligned, padded with 0s up to the destination data width (value: 0)
     *          - B_0x1: source data is transferred as right aligned, sign extended up to the destination data width (value: 1)
     */
        /** @brief source data is transferred as right aligned, padded with 0s up to the destination data width */
    constexpr std::uint32_t GPDMA_C5TR1_PAM_B_0x0 = 0;
        /** @brief source data is transferred as right aligned, sign extended up to the destination data width */
    constexpr std::uint32_t GPDMA_C5TR1_PAM_B_0x1 = 1;

    /** @brief source byte exchange within the unaligned half-word of each source word */
    using GPDMA_C5TR1_SBX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no byte-based exchange within the unaligned half-word of each source word (value: 0)
     *          - B_0x1: the two consecutive bytes within the unaligned half-word of each source word are exchanged. (value: 1)
     */
        /** @brief no byte-based exchange within the unaligned half-word of each source word */
    constexpr std::uint32_t GPDMA_C5TR1_SBX_B_0x0 = 0;
        /** @brief the two consecutive bytes within the unaligned half-word of each source word are exchanged. */
    constexpr std::uint32_t GPDMA_C5TR1_SBX_B_0x1 = 1;

    /** @brief source allocated port */
    using GPDMA_C5TR1_SAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C5TR1_SAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C5TR1_SAP_B_0x1 = 1;

    /** @brief security attribute of the GPDMA transfer from the source */
    using GPDMA_C5TR1_SSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPDMA transfer non-secure (value: 0)
     *          - B_0x1: GPDMA transfer secure (value: 1)
     */
        /** @brief GPDMA transfer non-secure */
    constexpr std::uint32_t GPDMA_C5TR1_SSEC_B_0x0 = 0;
        /** @brief GPDMA transfer secure */
    constexpr std::uint32_t GPDMA_C5TR1_SSEC_B_0x1 = 1;

    /** @brief binary logarithm of the destination data width of a burst, in bytes */
    using GPDMA_C5TR1_DDW_LOG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: byte (value: 0)
     *          - B_0x1: half-word (2 bytes) (value: 1)
     *          - B_0x2: word (4 bytes) (value: 2)
     *          - B_0x3: user setting error reported and no transfer issued (value: 3)
     */
        /** @brief byte */
    constexpr std::uint32_t GPDMA_C5TR1_DDW_LOG2_B_0x0 = 0;
        /** @brief half-word (2 bytes) */
    constexpr std::uint32_t GPDMA_C5TR1_DDW_LOG2_B_0x1 = 1;
        /** @brief word (4 bytes) */
    constexpr std::uint32_t GPDMA_C5TR1_DDW_LOG2_B_0x2 = 2;
        /** @brief user setting error reported and no transfer issued */
    constexpr std::uint32_t GPDMA_C5TR1_DDW_LOG2_B_0x3 = 3;

    /** @brief destination incrementing burst */
    using GPDMA_C5TR1_DINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fixed burst (value: 0)
     *          - B_0x1: contiguously incremented burst (value: 1)
     */
        /** @brief fixed burst */
    constexpr std::uint32_t GPDMA_C5TR1_DINC_B_0x0 = 0;
        /** @brief contiguously incremented burst */
    constexpr std::uint32_t GPDMA_C5TR1_DINC_B_0x1 = 1;

    /** @brief destination burst length minus 1, between 0 and 63 */
    using GPDMA_C5TR1_DBL_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination byte exchange */
    using GPDMA_C5TR1_DBX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no byte-based exchange within half-word (value: 0)
     *          - B_0x1: the two consecutive (post PAM) bytes are exchanged in each destination half-word. (value: 1)
     */
        /** @brief no byte-based exchange within half-word */
    constexpr std::uint32_t GPDMA_C5TR1_DBX_B_0x0 = 0;
        /** @brief the two consecutive (post PAM) bytes are exchanged in each destination half-word. */
    constexpr std::uint32_t GPDMA_C5TR1_DBX_B_0x1 = 1;

    /** @brief destination half-word exchange */
    using GPDMA_C5TR1_DHX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no halfword-based exchanged within word (value: 0)
     *          - B_0x1: the two consecutive (post PAM) half-words are exchanged in each destination word. (value: 1)
     */
        /** @brief no halfword-based exchanged within word */
    constexpr std::uint32_t GPDMA_C5TR1_DHX_B_0x0 = 0;
        /** @brief the two consecutive (post PAM) half-words are exchanged in each destination word. */
    constexpr std::uint32_t GPDMA_C5TR1_DHX_B_0x1 = 1;

    /** @brief destination allocated port */
    using GPDMA_C5TR1_DAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C5TR1_DAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C5TR1_DAP_B_0x1 = 1;

    /** @brief security attribute of the GPDMA transfer to the destination */
    using GPDMA_C5TR1_DSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPDMA transfer non-secure (value: 0)
     *          - B_0x1: GPDMA transfer secure (value: 1)
     */
        /** @brief GPDMA transfer non-secure */
    constexpr std::uint32_t GPDMA_C5TR1_DSEC_B_0x0 = 0;
        /** @brief GPDMA transfer secure */
    constexpr std::uint32_t GPDMA_C5TR1_DSEC_B_0x1 = 1;

    /** @brief GPDMA channel 5 transfer register 2 */
    using GPDMA_C5TR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x314, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA hardware request selection */
    using GPDMA_C5TR2_REQSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief software request */
    using GPDMA_C5TR2_SWREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no software request. The selected hardware request REQSEL[6:0] is taken into account. (value: 0)
     *          - B_0x1: software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[6:0] is ignored. (value: 1)
     */
        /** @brief no software request. The selected hardware request REQSEL[6:0] is taken into account. */
    constexpr std::uint32_t GPDMA_C5TR2_SWREQ_B_0x0 = 0;
        /** @brief software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[6:0] is ignored. */
    constexpr std::uint32_t GPDMA_C5TR2_SWREQ_B_0x1 = 1;

    /** @brief destination hardware request */
    using GPDMA_C5TR2_DREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: selected hardware request driven by a source peripheral (request signal taken into account by the GPDMA transfer scheduler over the source/read port) (value: 0)
     *          - B_0x1: selected hardware request driven by a destination peripheral (request signal taken into account by the GPDMA transfer scheduler over the destination/write port) (value: 1)
     */
        /** @brief selected hardware request driven by a source peripheral (request signal taken into account by the GPDMA transfer scheduler over the source/read port) */
    constexpr std::uint32_t GPDMA_C5TR2_DREQ_B_0x0 = 0;
        /** @brief selected hardware request driven by a destination peripheral (request signal taken into account by the GPDMA transfer scheduler over the destination/write port) */
    constexpr std::uint32_t GPDMA_C5TR2_DREQ_B_0x1 = 1;

    /** @brief Block hardware request */
    using GPDMA_C5TR2_BREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a burst level. (value: 0)
     *          - B_0x1: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see ). (value: 1)
     */
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a burst level. */
    constexpr std::uint32_t GPDMA_C5TR2_BREQ_B_0x0 = 0;
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see ). */
    constexpr std::uint32_t GPDMA_C5TR2_BREQ_B_0x1 = 1;

    /** @brief trigger mode */
    using GPDMA_C5TR2_TRIGM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: at block level: the first burst read of each block transfer is conditioned by one hit trigger (channel x = 12 to 15, for each block if a 2D/repeated block is configured with GPDMA_CxBR1.BRC[10:0] different to 0). (value: 0)
     *          - B_0x1: channel x = 0 to 11, same as 00; channel x=12 to 15, at 2D/repeated block level, the (value: 1)
     *          - B_0x2: at link level: a LLI link transfer is conditioned by one hit trigger. The LLI data transfer (if any) is not conditioned. (value: 2)
     *          - B_0x3: at programmed burst level: If SWREQ = 1, each programmed burst read is conditioned by one hit trigger. If SWREQ=0, each programmed burst that is requested by the selected peripheral, is conditioned by one hit trigger. (value: 3)
     */
        /** @brief at block level: the first burst read of each block transfer is conditioned by one hit trigger (channel x = 12 to 15, for each block if a 2D/repeated block is configured with GPDMA_CxBR1.BRC[10:0] different to 0). */
    constexpr std::uint32_t GPDMA_C5TR2_TRIGM_B_0x0 = 0;
        /** @brief channel x = 0 to 11, same as 00; channel x=12 to 15, at 2D/repeated block level, the */
    constexpr std::uint32_t GPDMA_C5TR2_TRIGM_B_0x1 = 1;
        /** @brief at link level: a LLI link transfer is conditioned by one hit trigger. The LLI data transfer (if any) is not conditioned. */
    constexpr std::uint32_t GPDMA_C5TR2_TRIGM_B_0x2 = 2;
        /** @brief at programmed burst level: If SWREQ = 1, each programmed burst read is conditioned by one hit trigger. If SWREQ=0, each programmed burst that is requested by the selected peripheral, is conditioned by one hit trigger. */
    constexpr std::uint32_t GPDMA_C5TR2_TRIGM_B_0x3 = 3;

    /** @brief trigger event input selection */
    using GPDMA_C5TR2_TRIGSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief trigger event polarity */
    using GPDMA_C5TR2_TRIGPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no trigger (masked trigger event) (value: 0)
     *          - B_0x1: trigger on the rising edge (value: 1)
     *          - B_0x2: trigger on the falling edge (value: 2)
     *          - B_0x3: same as 00 (value: 3)
     */
        /** @brief no trigger (masked trigger event) */
    constexpr std::uint32_t GPDMA_C5TR2_TRIGPOL_B_0x0 = 0;
        /** @brief trigger on the rising edge */
    constexpr std::uint32_t GPDMA_C5TR2_TRIGPOL_B_0x1 = 1;
        /** @brief trigger on the falling edge */
    constexpr std::uint32_t GPDMA_C5TR2_TRIGPOL_B_0x2 = 2;
        /** @brief same as 00 */
    constexpr std::uint32_t GPDMA_C5TR2_TRIGPOL_B_0x3 = 3;

    /** @brief transfer complete event mode */
    using GPDMA_C5TR2_TCEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: at block level (when GPDMA_CxBR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. (value: 0)
     *          - B_0x1: channel x = 0 to 11, same as 00; channel x=12 to 15, at 2D/repeated block level (when GPDMA_CxBR1.BRC[10:0]= 0 and GPDMA_CxBR1.BNDT[15:0]= 0), the complete (and the half) transfer event is generated at the end (respectively half of the end) of the 2D/repeated block. (value: 1)
     *          - B_0x2: at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer (the LLI data transfer being a block transfer or a 2D/repeated block transfer for channel x = 12 to 15), if any data transfer. (value: 2)
     *          - B_0x3: at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address GPDMA_CxLLR.LA[15:2] to zero and clears all the GPDMA_CxLLR update bits (UT1, UT2, UB1, USA, UDA and ULL, plus UT3 and UB2 if present). If the channel transfer is continuous/infinite, no event is generated. (value: 3)
     */
        /** @brief at block level (when GPDMA_CxBR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. */
    constexpr std::uint32_t GPDMA_C5TR2_TCEM_B_0x0 = 0;
        /** @brief channel x = 0 to 11, same as 00; channel x=12 to 15, at 2D/repeated block level (when GPDMA_CxBR1.BRC[10:0]= 0 and GPDMA_CxBR1.BNDT[15:0]= 0), the complete (and the half) transfer event is generated at the end (respectively half of the end) of the 2D/repeated block. */
    constexpr std::uint32_t GPDMA_C5TR2_TCEM_B_0x1 = 1;
        /** @brief at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer (the LLI data transfer being a block transfer or a 2D/repeated block transfer for channel x = 12 to 15), if any data transfer. */
    constexpr std::uint32_t GPDMA_C5TR2_TCEM_B_0x2 = 2;
        /** @brief at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address GPDMA_CxLLR.LA[15:2] to zero and clears all the GPDMA_CxLLR update bits (UT1, UT2, UB1, USA, UDA and ULL, plus UT3 and UB2 if present). If the channel transfer is continuous/infinite, no event is generated. */
    constexpr std::uint32_t GPDMA_C5TR2_TCEM_B_0x3 = 3;

    /** @brief GPDMA channel 5 block register 1 */
    using GPDMA_C5BR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x318, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief block number of data bytes to transfer from the source */
    using GPDMA_C5BR1_BNDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 5 source address register */
    using GPDMA_C5SAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x31C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief source address */
    using GPDMA_C5SAR_SA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 5 destination address register */
    using GPDMA_C5DAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x320, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination address */
    using GPDMA_C5DAR_DA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 5 linked-list address register */
    using GPDMA_C5LLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pointer (16-bit low-significant address) to the next linked-list data structure */
    using GPDMA_C5LLR_LA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxLLR register from memory */
    using GPDMA_C5LLR_ULL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxLLR update (value: 0)
     *          - B_0x1: GPDMA_CxLLR update (value: 1)
     */
        /** @brief no GPDMA_CxLLR update */
    constexpr std::uint32_t GPDMA_C5LLR_ULL_B_0x0 = 0;
        /** @brief GPDMA_CxLLR update */
    constexpr std::uint32_t GPDMA_C5LLR_ULL_B_0x1 = 1;

    /** @brief Update GPDMA_CxDAR register from memory */
    using GPDMA_C5LLR_UDA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxDAR update (value: 0)
     *          - B_0x1: GPDMA_CxDAR update (value: 1)
     */
        /** @brief no GPDMA_CxDAR update */
    constexpr std::uint32_t GPDMA_C5LLR_UDA_B_0x0 = 0;
        /** @brief GPDMA_CxDAR update */
    constexpr std::uint32_t GPDMA_C5LLR_UDA_B_0x1 = 1;

    /** @brief update GPDMA_CxSAR from memory */
    using GPDMA_C5LLR_USA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxSAR update (value: 0)
     *          - B_0x1: GPDMA_CxSAR update (value: 1)
     */
        /** @brief no GPDMA_CxSAR update */
    constexpr std::uint32_t GPDMA_C5LLR_USA_B_0x0 = 0;
        /** @brief GPDMA_CxSAR update */
    constexpr std::uint32_t GPDMA_C5LLR_USA_B_0x1 = 1;

    /** @brief Update GPDMA_CxBR1 from memory */
    using GPDMA_C5LLR_UB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxBR1 update from memory (GPDMA_CxBR1.BNDT[15:0] restored if any link transfer) (value: 0)
     *          - B_0x1: GPDMA_CxBR1 update (value: 1)
     */
        /** @brief no GPDMA_CxBR1 update from memory (GPDMA_CxBR1.BNDT[15:0] restored if any link transfer) */
    constexpr std::uint32_t GPDMA_C5LLR_UB1_B_0x0 = 0;
        /** @brief GPDMA_CxBR1 update */
    constexpr std::uint32_t GPDMA_C5LLR_UB1_B_0x1 = 1;

    /** @brief Update GPDMA_CxTR2 from memory */
    using GPDMA_C5LLR_UT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxTR2 update (value: 0)
     *          - B_0x1: GPDMA_CxTR2 update (value: 1)
     */
        /** @brief no GPDMA_CxTR2 update */
    constexpr std::uint32_t GPDMA_C5LLR_UT2_B_0x0 = 0;
        /** @brief GPDMA_CxTR2 update */
    constexpr std::uint32_t GPDMA_C5LLR_UT2_B_0x1 = 1;

    /** @brief Update GPDMA_CxTR1 from memory */
    using GPDMA_C5LLR_UT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxTR1 update (value: 0)
     *          - B_0x1: GPDMA_CxTR1 update (value: 1)
     */
        /** @brief no GPDMA_CxTR1 update */
    constexpr std::uint32_t GPDMA_C5LLR_UT1_B_0x0 = 0;
        /** @brief GPDMA_CxTR1 update */
    constexpr std::uint32_t GPDMA_C5LLR_UT1_B_0x1 = 1;

    /** @brief GPDMA channel 6 linked-list base address register */
    using GPDMA_C6LBAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x350, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief linked-list base address of GPDMA channel x */
    using GPDMA_C6LBAR_LBA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 6 flag clear register */
    using GPDMA_C6FCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x35C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transfer complete flag clear */
    using GPDMA_C6FCR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding TCF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C6FCR_TCF_B_0x0 = 0;
        /** @brief corresponding TCF flag cleared */
    constexpr std::uint32_t GPDMA_C6FCR_TCF_B_0x1 = 1;

    /** @brief half transfer flag clear */
    using GPDMA_C6FCR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding HTF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C6FCR_HTF_B_0x0 = 0;
        /** @brief corresponding HTF flag cleared */
    constexpr std::uint32_t GPDMA_C6FCR_HTF_B_0x1 = 1;

    /** @brief data transfer error flag clear */
    using GPDMA_C6FCR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding DTEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C6FCR_DTEF_B_0x0 = 0;
        /** @brief corresponding DTEF flag cleared */
    constexpr std::uint32_t GPDMA_C6FCR_DTEF_B_0x1 = 1;

    /** @brief update link transfer error flag clear */
    using GPDMA_C6FCR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding ULEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C6FCR_ULEF_B_0x0 = 0;
        /** @brief corresponding ULEF flag cleared */
    constexpr std::uint32_t GPDMA_C6FCR_ULEF_B_0x1 = 1;

    /** @brief user setting error flag clear */
    using GPDMA_C6FCR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding USEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C6FCR_USEF_B_0x0 = 0;
        /** @brief corresponding USEF flag cleared */
    constexpr std::uint32_t GPDMA_C6FCR_USEF_B_0x1 = 1;

    /** @brief completed suspension flag clear */
    using GPDMA_C6FCR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding SUSPF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C6FCR_SUSPF_B_0x0 = 0;
        /** @brief corresponding SUSPF flag cleared */
    constexpr std::uint32_t GPDMA_C6FCR_SUSPF_B_0x1 = 1;

    /** @brief trigger overrun flag clear */
    using GPDMA_C6FCR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding TOF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C6FCR_TOF_B_0x0 = 0;
        /** @brief corresponding TOF flag cleared */
    constexpr std::uint32_t GPDMA_C6FCR_TOF_B_0x1 = 1;

    /** @brief GPDMA channel 6 status register */
    using GPDMA_C6SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x360, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief idle flag */
    using GPDMA_C6SR_IDLEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: channel not in idle state (value: 0)
     *          - B_0x1: channel in idle state (value: 1)
     */
        /** @brief channel not in idle state */
    constexpr std::uint32_t GPDMA_C6SR_IDLEF_B_0x0 = 0;
        /** @brief channel in idle state */
    constexpr std::uint32_t GPDMA_C6SR_IDLEF_B_0x1 = 1;

    /** @brief transfer complete flag */
    using GPDMA_C6SR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no transfer complete event (value: 0)
     *          - B_0x1: a transfer complete event occurred (value: 1)
     */
        /** @brief no transfer complete event */
    constexpr std::uint32_t GPDMA_C6SR_TCF_B_0x0 = 0;
        /** @brief a transfer complete event occurred */
    constexpr std::uint32_t GPDMA_C6SR_TCF_B_0x1 = 1;

    /** @brief half transfer flag */
    using GPDMA_C6SR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no half transfer event (value: 0)
     *          - B_0x1: an half transfer event occurred (value: 1)
     */
        /** @brief no half transfer event */
    constexpr std::uint32_t GPDMA_C6SR_HTF_B_0x0 = 0;
        /** @brief an half transfer event occurred */
    constexpr std::uint32_t GPDMA_C6SR_HTF_B_0x1 = 1;

    /** @brief data transfer error flag */
    using GPDMA_C6SR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no data transfer error event (value: 0)
     *          - B_0x1: a master bus error event occurred on a data transfer (value: 1)
     */
        /** @brief no data transfer error event */
    constexpr std::uint32_t GPDMA_C6SR_DTEF_B_0x0 = 0;
        /** @brief a master bus error event occurred on a data transfer */
    constexpr std::uint32_t GPDMA_C6SR_DTEF_B_0x1 = 1;

    /** @brief update link transfer error flag */
    using GPDMA_C6SR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no update link transfer error event (value: 0)
     *          - B_0x1: a master bus error event occurred while updating a linked-list register from memory (value: 1)
     */
        /** @brief no update link transfer error event */
    constexpr std::uint32_t GPDMA_C6SR_ULEF_B_0x0 = 0;
        /** @brief a master bus error event occurred while updating a linked-list register from memory */
    constexpr std::uint32_t GPDMA_C6SR_ULEF_B_0x1 = 1;

    /** @brief user setting error flag */
    using GPDMA_C6SR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no user setting error event (value: 0)
     *          - B_0x1: a user setting error event occurred (value: 1)
     */
        /** @brief no user setting error event */
    constexpr std::uint32_t GPDMA_C6SR_USEF_B_0x0 = 0;
        /** @brief a user setting error event occurred */
    constexpr std::uint32_t GPDMA_C6SR_USEF_B_0x1 = 1;

    /** @brief completed suspension flag */
    using GPDMA_C6SR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no completed suspension event (value: 0)
     *          - B_0x1: a completed suspension event occurred (value: 1)
     */
        /** @brief no completed suspension event */
    constexpr std::uint32_t GPDMA_C6SR_SUSPF_B_0x0 = 0;
        /** @brief a completed suspension event occurred */
    constexpr std::uint32_t GPDMA_C6SR_SUSPF_B_0x1 = 1;

    /** @brief trigger overrun flag */
    using GPDMA_C6SR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no trigger overrun event (value: 0)
     *          - B_0x1: a trigger overrun event occurred (value: 1)
     */
        /** @brief no trigger overrun event */
    constexpr std::uint32_t GPDMA_C6SR_TOF_B_0x0 = 0;
        /** @brief a trigger overrun event occurred */
    constexpr std::uint32_t GPDMA_C6SR_TOF_B_0x1 = 1;

    /** @brief monitored FIFO level */
    using GPDMA_C6SR_FIFOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 6 control register */
    using GPDMA_C6CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x364, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief enable */
    using GPDMA_C6CR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write: ignored, read: channel disabled (value: 0)
     *          - B_0x1: write: enable channel, read: channel enabled (value: 1)
     */
        /** @brief write: ignored, read: channel disabled */
    constexpr std::uint32_t GPDMA_C6CR_EN_B_0x0 = 0;
        /** @brief write: enable channel, read: channel enabled */
    constexpr std::uint32_t GPDMA_C6CR_EN_B_0x1 = 1;

    /** @brief reset */
    using GPDMA_C6CR_RESET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no channel reset (value: 0)
     *          - B_0x1: channel reset (value: 1)
     */
        /** @brief no channel reset */
    constexpr std::uint32_t GPDMA_C6CR_RESET_B_0x0 = 0;
        /** @brief channel reset */
    constexpr std::uint32_t GPDMA_C6CR_RESET_B_0x1 = 1;

    /** @brief suspend */
    using GPDMA_C6CR_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write: resume channel, read: channel not suspended (value: 0)
     *          - B_0x1: write: suspend channel, read: channel suspended. (value: 1)
     */
        /** @brief write: resume channel, read: channel not suspended */
    constexpr std::uint32_t GPDMA_C6CR_SUSP_B_0x0 = 0;
        /** @brief write: suspend channel, read: channel suspended. */
    constexpr std::uint32_t GPDMA_C6CR_SUSP_B_0x1 = 1;

    /** @brief transfer complete interrupt enable */
    using GPDMA_C6CR_TCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C6CR_TCIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C6CR_TCIE_B_0x1 = 1;

    /** @brief half transfer complete interrupt enable */
    using GPDMA_C6CR_HTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C6CR_HTIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C6CR_HTIE_B_0x1 = 1;

    /** @brief data transfer error interrupt enable */
    using GPDMA_C6CR_DTEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C6CR_DTEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C6CR_DTEIE_B_0x1 = 1;

    /** @brief update link transfer error interrupt enable */
    using GPDMA_C6CR_ULEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C6CR_ULEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C6CR_ULEIE_B_0x1 = 1;

    /** @brief user setting error interrupt enable */
    using GPDMA_C6CR_USEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C6CR_USEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C6CR_USEIE_B_0x1 = 1;

    /** @brief completed suspension interrupt enable */
    using GPDMA_C6CR_SUSPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C6CR_SUSPIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C6CR_SUSPIE_B_0x1 = 1;

    /** @brief trigger overrun interrupt enable */
    using GPDMA_C6CR_TOIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C6CR_TOIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C6CR_TOIE_B_0x1 = 1;

    /** @brief Link step mode */
    using GPDMA_C6CR_LSM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: channel executed for the full linked-list and completed at the end of the last LLI (GPDMA_CxLLR=0). The 16 low-significant bits of the link address are null (LA[15:0]=0) and all the update bits are null (UT1=UB1=UT2=USA=UDA=ULL=0 and UT3=UB2=0 if present). Then GPDMA_CxBR1.BNDT[15:0]=0 and GPDMA_CxBR1.BRC[10:0]=0 if present. (value: 0)
     *          - B_0x1: channel executed once for the current LLI (value: 1)
     */
        /** @brief channel executed for the full linked-list and completed at the end of the last LLI (GPDMA_CxLLR=0). The 16 low-significant bits of the link address are null (LA[15:0]=0) and all the update bits are null (UT1=UB1=UT2=USA=UDA=ULL=0 and UT3=UB2=0 if present). Then GPDMA_CxBR1.BNDT[15:0]=0 and GPDMA_CxBR1.BRC[10:0]=0 if present. */
    constexpr std::uint32_t GPDMA_C6CR_LSM_B_0x0 = 0;
        /** @brief channel executed once for the current LLI */
    constexpr std::uint32_t GPDMA_C6CR_LSM_B_0x1 = 1;

    /** @brief linked-list allocated port */
    using GPDMA_C6CR_LAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C6CR_LAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C6CR_LAP_B_0x1 = 1;

    /** @brief priority level of the channel x GPDMA transfer versus others */
    using GPDMA_C6CR_PRIO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: low priority, low weight (value: 0)
     *          - B_0x1: low priority, mid weight (value: 1)
     *          - B_0x2: low priority, high weight (value: 2)
     *          - B_0x3: high priority (value: 3)
     */
        /** @brief low priority, low weight */
    constexpr std::uint32_t GPDMA_C6CR_PRIO_B_0x0 = 0;
        /** @brief low priority, mid weight */
    constexpr std::uint32_t GPDMA_C6CR_PRIO_B_0x1 = 1;
        /** @brief low priority, high weight */
    constexpr std::uint32_t GPDMA_C6CR_PRIO_B_0x2 = 2;
        /** @brief high priority */
    constexpr std::uint32_t GPDMA_C6CR_PRIO_B_0x3 = 3;

    /** @brief GPDMA channel 6 transfer register 1 */
    using GPDMA_C6TR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x390, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief binary logarithm of the source data width of a burst in bytes */
    using GPDMA_C6TR1_SDW_LOG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: byte (value: 0)
     *          - B_0x1: half-word (2 bytes) (value: 1)
     *          - B_0x2: word (4 bytes) (value: 2)
     *          - B_0x3: user setting error reported and no transfer issued (value: 3)
     */
        /** @brief byte */
    constexpr std::uint32_t GPDMA_C6TR1_SDW_LOG2_B_0x0 = 0;
        /** @brief half-word (2 bytes) */
    constexpr std::uint32_t GPDMA_C6TR1_SDW_LOG2_B_0x1 = 1;
        /** @brief word (4 bytes) */
    constexpr std::uint32_t GPDMA_C6TR1_SDW_LOG2_B_0x2 = 2;
        /** @brief user setting error reported and no transfer issued */
    constexpr std::uint32_t GPDMA_C6TR1_SDW_LOG2_B_0x3 = 3;

    /** @brief source incrementing burst */
    using GPDMA_C6TR1_SINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fixed burst (value: 0)
     *          - B_0x1: contiguously incremented burst (value: 1)
     */
        /** @brief fixed burst */
    constexpr std::uint32_t GPDMA_C6TR1_SINC_B_0x0 = 0;
        /** @brief contiguously incremented burst */
    constexpr std::uint32_t GPDMA_C6TR1_SINC_B_0x1 = 1;

    /** @brief source burst length minus 1, between 0 and 63 */
    using GPDMA_C6TR1_SBL_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief padding/alignment mode */
    using GPDMA_C6TR1_PAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: source data is transferred as right aligned, padded with 0s up to the destination data width (value: 0)
     *          - B_0x1: source data is transferred as right aligned, sign extended up to the destination data width (value: 1)
     */
        /** @brief source data is transferred as right aligned, padded with 0s up to the destination data width */
    constexpr std::uint32_t GPDMA_C6TR1_PAM_B_0x0 = 0;
        /** @brief source data is transferred as right aligned, sign extended up to the destination data width */
    constexpr std::uint32_t GPDMA_C6TR1_PAM_B_0x1 = 1;

    /** @brief source byte exchange within the unaligned half-word of each source word */
    using GPDMA_C6TR1_SBX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no byte-based exchange within the unaligned half-word of each source word (value: 0)
     *          - B_0x1: the two consecutive bytes within the unaligned half-word of each source word are exchanged. (value: 1)
     */
        /** @brief no byte-based exchange within the unaligned half-word of each source word */
    constexpr std::uint32_t GPDMA_C6TR1_SBX_B_0x0 = 0;
        /** @brief the two consecutive bytes within the unaligned half-word of each source word are exchanged. */
    constexpr std::uint32_t GPDMA_C6TR1_SBX_B_0x1 = 1;

    /** @brief source allocated port */
    using GPDMA_C6TR1_SAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C6TR1_SAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C6TR1_SAP_B_0x1 = 1;

    /** @brief security attribute of the GPDMA transfer from the source */
    using GPDMA_C6TR1_SSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPDMA transfer non-secure (value: 0)
     *          - B_0x1: GPDMA transfer secure (value: 1)
     */
        /** @brief GPDMA transfer non-secure */
    constexpr std::uint32_t GPDMA_C6TR1_SSEC_B_0x0 = 0;
        /** @brief GPDMA transfer secure */
    constexpr std::uint32_t GPDMA_C6TR1_SSEC_B_0x1 = 1;

    /** @brief binary logarithm of the destination data width of a burst, in bytes */
    using GPDMA_C6TR1_DDW_LOG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: byte (value: 0)
     *          - B_0x1: half-word (2 bytes) (value: 1)
     *          - B_0x2: word (4 bytes) (value: 2)
     *          - B_0x3: user setting error reported and no transfer issued (value: 3)
     */
        /** @brief byte */
    constexpr std::uint32_t GPDMA_C6TR1_DDW_LOG2_B_0x0 = 0;
        /** @brief half-word (2 bytes) */
    constexpr std::uint32_t GPDMA_C6TR1_DDW_LOG2_B_0x1 = 1;
        /** @brief word (4 bytes) */
    constexpr std::uint32_t GPDMA_C6TR1_DDW_LOG2_B_0x2 = 2;
        /** @brief user setting error reported and no transfer issued */
    constexpr std::uint32_t GPDMA_C6TR1_DDW_LOG2_B_0x3 = 3;

    /** @brief destination incrementing burst */
    using GPDMA_C6TR1_DINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fixed burst (value: 0)
     *          - B_0x1: contiguously incremented burst (value: 1)
     */
        /** @brief fixed burst */
    constexpr std::uint32_t GPDMA_C6TR1_DINC_B_0x0 = 0;
        /** @brief contiguously incremented burst */
    constexpr std::uint32_t GPDMA_C6TR1_DINC_B_0x1 = 1;

    /** @brief destination burst length minus 1, between 0 and 63 */
    using GPDMA_C6TR1_DBL_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination byte exchange */
    using GPDMA_C6TR1_DBX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no byte-based exchange within half-word (value: 0)
     *          - B_0x1: the two consecutive (post PAM) bytes are exchanged in each destination half-word. (value: 1)
     */
        /** @brief no byte-based exchange within half-word */
    constexpr std::uint32_t GPDMA_C6TR1_DBX_B_0x0 = 0;
        /** @brief the two consecutive (post PAM) bytes are exchanged in each destination half-word. */
    constexpr std::uint32_t GPDMA_C6TR1_DBX_B_0x1 = 1;

    /** @brief destination half-word exchange */
    using GPDMA_C6TR1_DHX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no halfword-based exchanged within word (value: 0)
     *          - B_0x1: the two consecutive (post PAM) half-words are exchanged in each destination word. (value: 1)
     */
        /** @brief no halfword-based exchanged within word */
    constexpr std::uint32_t GPDMA_C6TR1_DHX_B_0x0 = 0;
        /** @brief the two consecutive (post PAM) half-words are exchanged in each destination word. */
    constexpr std::uint32_t GPDMA_C6TR1_DHX_B_0x1 = 1;

    /** @brief destination allocated port */
    using GPDMA_C6TR1_DAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C6TR1_DAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C6TR1_DAP_B_0x1 = 1;

    /** @brief security attribute of the GPDMA transfer to the destination */
    using GPDMA_C6TR1_DSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPDMA transfer non-secure (value: 0)
     *          - B_0x1: GPDMA transfer secure (value: 1)
     */
        /** @brief GPDMA transfer non-secure */
    constexpr std::uint32_t GPDMA_C6TR1_DSEC_B_0x0 = 0;
        /** @brief GPDMA transfer secure */
    constexpr std::uint32_t GPDMA_C6TR1_DSEC_B_0x1 = 1;

    /** @brief GPDMA channel 6 transfer register 2 */
    using GPDMA_C6TR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x394, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA hardware request selection */
    using GPDMA_C6TR2_REQSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief software request */
    using GPDMA_C6TR2_SWREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no software request. The selected hardware request REQSEL[6:0] is taken into account. (value: 0)
     *          - B_0x1: software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[6:0] is ignored. (value: 1)
     */
        /** @brief no software request. The selected hardware request REQSEL[6:0] is taken into account. */
    constexpr std::uint32_t GPDMA_C6TR2_SWREQ_B_0x0 = 0;
        /** @brief software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[6:0] is ignored. */
    constexpr std::uint32_t GPDMA_C6TR2_SWREQ_B_0x1 = 1;

    /** @brief destination hardware request */
    using GPDMA_C6TR2_DREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: selected hardware request driven by a source peripheral (request signal taken into account by the GPDMA transfer scheduler over the source/read port) (value: 0)
     *          - B_0x1: selected hardware request driven by a destination peripheral (request signal taken into account by the GPDMA transfer scheduler over the destination/write port) (value: 1)
     */
        /** @brief selected hardware request driven by a source peripheral (request signal taken into account by the GPDMA transfer scheduler over the source/read port) */
    constexpr std::uint32_t GPDMA_C6TR2_DREQ_B_0x0 = 0;
        /** @brief selected hardware request driven by a destination peripheral (request signal taken into account by the GPDMA transfer scheduler over the destination/write port) */
    constexpr std::uint32_t GPDMA_C6TR2_DREQ_B_0x1 = 1;

    /** @brief Block hardware request */
    using GPDMA_C6TR2_BREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a burst level. (value: 0)
     *          - B_0x1: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see ). (value: 1)
     */
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a burst level. */
    constexpr std::uint32_t GPDMA_C6TR2_BREQ_B_0x0 = 0;
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see ). */
    constexpr std::uint32_t GPDMA_C6TR2_BREQ_B_0x1 = 1;

    /** @brief trigger mode */
    using GPDMA_C6TR2_TRIGM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: at block level: the first burst read of each block transfer is conditioned by one hit trigger (channel x = 12 to 15, for each block if a 2D/repeated block is configured with GPDMA_CxBR1.BRC[10:0] different to 0). (value: 0)
     *          - B_0x1: channel x = 0 to 11, same as 00; channel x=12 to 15, at 2D/repeated block level, the (value: 1)
     *          - B_0x2: at link level: a LLI link transfer is conditioned by one hit trigger. The LLI data transfer (if any) is not conditioned. (value: 2)
     *          - B_0x3: at programmed burst level: If SWREQ = 1, each programmed burst read is conditioned by one hit trigger. If SWREQ=0, each programmed burst that is requested by the selected peripheral, is conditioned by one hit trigger. (value: 3)
     */
        /** @brief at block level: the first burst read of each block transfer is conditioned by one hit trigger (channel x = 12 to 15, for each block if a 2D/repeated block is configured with GPDMA_CxBR1.BRC[10:0] different to 0). */
    constexpr std::uint32_t GPDMA_C6TR2_TRIGM_B_0x0 = 0;
        /** @brief channel x = 0 to 11, same as 00; channel x=12 to 15, at 2D/repeated block level, the */
    constexpr std::uint32_t GPDMA_C6TR2_TRIGM_B_0x1 = 1;
        /** @brief at link level: a LLI link transfer is conditioned by one hit trigger. The LLI data transfer (if any) is not conditioned. */
    constexpr std::uint32_t GPDMA_C6TR2_TRIGM_B_0x2 = 2;
        /** @brief at programmed burst level: If SWREQ = 1, each programmed burst read is conditioned by one hit trigger. If SWREQ=0, each programmed burst that is requested by the selected peripheral, is conditioned by one hit trigger. */
    constexpr std::uint32_t GPDMA_C6TR2_TRIGM_B_0x3 = 3;

    /** @brief trigger event input selection */
    using GPDMA_C6TR2_TRIGSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief trigger event polarity */
    using GPDMA_C6TR2_TRIGPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no trigger (masked trigger event) (value: 0)
     *          - B_0x1: trigger on the rising edge (value: 1)
     *          - B_0x2: trigger on the falling edge (value: 2)
     *          - B_0x3: same as 00 (value: 3)
     */
        /** @brief no trigger (masked trigger event) */
    constexpr std::uint32_t GPDMA_C6TR2_TRIGPOL_B_0x0 = 0;
        /** @brief trigger on the rising edge */
    constexpr std::uint32_t GPDMA_C6TR2_TRIGPOL_B_0x1 = 1;
        /** @brief trigger on the falling edge */
    constexpr std::uint32_t GPDMA_C6TR2_TRIGPOL_B_0x2 = 2;
        /** @brief same as 00 */
    constexpr std::uint32_t GPDMA_C6TR2_TRIGPOL_B_0x3 = 3;

    /** @brief transfer complete event mode */
    using GPDMA_C6TR2_TCEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: at block level (when GPDMA_CxBR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. (value: 0)
     *          - B_0x1: channel x = 0 to 11, same as 00; channel x=12 to 15, at 2D/repeated block level (when GPDMA_CxBR1.BRC[10:0]= 0 and GPDMA_CxBR1.BNDT[15:0]= 0), the complete (and the half) transfer event is generated at the end (respectively half of the end) of the 2D/repeated block. (value: 1)
     *          - B_0x2: at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer (the LLI data transfer being a block transfer or a 2D/repeated block transfer for channel x = 12 to 15), if any data transfer. (value: 2)
     *          - B_0x3: at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address GPDMA_CxLLR.LA[15:2] to zero and clears all the GPDMA_CxLLR update bits (UT1, UT2, UB1, USA, UDA and ULL, plus UT3 and UB2 if present). If the channel transfer is continuous/infinite, no event is generated. (value: 3)
     */
        /** @brief at block level (when GPDMA_CxBR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. */
    constexpr std::uint32_t GPDMA_C6TR2_TCEM_B_0x0 = 0;
        /** @brief channel x = 0 to 11, same as 00; channel x=12 to 15, at 2D/repeated block level (when GPDMA_CxBR1.BRC[10:0]= 0 and GPDMA_CxBR1.BNDT[15:0]= 0), the complete (and the half) transfer event is generated at the end (respectively half of the end) of the 2D/repeated block. */
    constexpr std::uint32_t GPDMA_C6TR2_TCEM_B_0x1 = 1;
        /** @brief at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer (the LLI data transfer being a block transfer or a 2D/repeated block transfer for channel x = 12 to 15), if any data transfer. */
    constexpr std::uint32_t GPDMA_C6TR2_TCEM_B_0x2 = 2;
        /** @brief at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address GPDMA_CxLLR.LA[15:2] to zero and clears all the GPDMA_CxLLR update bits (UT1, UT2, UB1, USA, UDA and ULL, plus UT3 and UB2 if present). If the channel transfer is continuous/infinite, no event is generated. */
    constexpr std::uint32_t GPDMA_C6TR2_TCEM_B_0x3 = 3;

    /** @brief GPDMA channel 6 block register 1 */
    using GPDMA_C6BR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x398, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief block number of data bytes to transfer from the source */
    using GPDMA_C6BR1_BNDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 6 source address register */
    using GPDMA_C6SAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x39C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief source address */
    using GPDMA_C6SAR_SA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 6 destination address register */
    using GPDMA_C6DAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination address */
    using GPDMA_C6DAR_DA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 6 linked-list address register */
    using GPDMA_C6LLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3CC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pointer (16-bit low-significant address) to the next linked-list data structure */
    using GPDMA_C6LLR_LA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxLLR register from memory */
    using GPDMA_C6LLR_ULL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxLLR update (value: 0)
     *          - B_0x1: GPDMA_CxLLR update (value: 1)
     */
        /** @brief no GPDMA_CxLLR update */
    constexpr std::uint32_t GPDMA_C6LLR_ULL_B_0x0 = 0;
        /** @brief GPDMA_CxLLR update */
    constexpr std::uint32_t GPDMA_C6LLR_ULL_B_0x1 = 1;

    /** @brief Update GPDMA_CxDAR register from memory */
    using GPDMA_C6LLR_UDA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxDAR update (value: 0)
     *          - B_0x1: GPDMA_CxDAR update (value: 1)
     */
        /** @brief no GPDMA_CxDAR update */
    constexpr std::uint32_t GPDMA_C6LLR_UDA_B_0x0 = 0;
        /** @brief GPDMA_CxDAR update */
    constexpr std::uint32_t GPDMA_C6LLR_UDA_B_0x1 = 1;

    /** @brief update GPDMA_CxSAR from memory */
    using GPDMA_C6LLR_USA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxSAR update (value: 0)
     *          - B_0x1: GPDMA_CxSAR update (value: 1)
     */
        /** @brief no GPDMA_CxSAR update */
    constexpr std::uint32_t GPDMA_C6LLR_USA_B_0x0 = 0;
        /** @brief GPDMA_CxSAR update */
    constexpr std::uint32_t GPDMA_C6LLR_USA_B_0x1 = 1;

    /** @brief Update GPDMA_CxBR1 from memory */
    using GPDMA_C6LLR_UB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxBR1 update from memory (GPDMA_CxBR1.BNDT[15:0] restored if any link transfer) (value: 0)
     *          - B_0x1: GPDMA_CxBR1 update (value: 1)
     */
        /** @brief no GPDMA_CxBR1 update from memory (GPDMA_CxBR1.BNDT[15:0] restored if any link transfer) */
    constexpr std::uint32_t GPDMA_C6LLR_UB1_B_0x0 = 0;
        /** @brief GPDMA_CxBR1 update */
    constexpr std::uint32_t GPDMA_C6LLR_UB1_B_0x1 = 1;

    /** @brief Update GPDMA_CxTR2 from memory */
    using GPDMA_C6LLR_UT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxTR2 update (value: 0)
     *          - B_0x1: GPDMA_CxTR2 update (value: 1)
     */
        /** @brief no GPDMA_CxTR2 update */
    constexpr std::uint32_t GPDMA_C6LLR_UT2_B_0x0 = 0;
        /** @brief GPDMA_CxTR2 update */
    constexpr std::uint32_t GPDMA_C6LLR_UT2_B_0x1 = 1;

    /** @brief Update GPDMA_CxTR1 from memory */
    using GPDMA_C6LLR_UT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxTR1 update (value: 0)
     *          - B_0x1: GPDMA_CxTR1 update (value: 1)
     */
        /** @brief no GPDMA_CxTR1 update */
    constexpr std::uint32_t GPDMA_C6LLR_UT1_B_0x0 = 0;
        /** @brief GPDMA_CxTR1 update */
    constexpr std::uint32_t GPDMA_C6LLR_UT1_B_0x1 = 1;

    /** @brief GPDMA channel 7 linked-list base address register */
    using GPDMA_C7LBAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3D0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief linked-list base address of GPDMA channel x */
    using GPDMA_C7LBAR_LBA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 7 flag clear register */
    using GPDMA_C7FCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3DC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transfer complete flag clear */
    using GPDMA_C7FCR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding TCF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C7FCR_TCF_B_0x0 = 0;
        /** @brief corresponding TCF flag cleared */
    constexpr std::uint32_t GPDMA_C7FCR_TCF_B_0x1 = 1;

    /** @brief half transfer flag clear */
    using GPDMA_C7FCR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding HTF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C7FCR_HTF_B_0x0 = 0;
        /** @brief corresponding HTF flag cleared */
    constexpr std::uint32_t GPDMA_C7FCR_HTF_B_0x1 = 1;

    /** @brief data transfer error flag clear */
    using GPDMA_C7FCR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding DTEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C7FCR_DTEF_B_0x0 = 0;
        /** @brief corresponding DTEF flag cleared */
    constexpr std::uint32_t GPDMA_C7FCR_DTEF_B_0x1 = 1;

    /** @brief update link transfer error flag clear */
    using GPDMA_C7FCR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding ULEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C7FCR_ULEF_B_0x0 = 0;
        /** @brief corresponding ULEF flag cleared */
    constexpr std::uint32_t GPDMA_C7FCR_ULEF_B_0x1 = 1;

    /** @brief user setting error flag clear */
    using GPDMA_C7FCR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding USEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C7FCR_USEF_B_0x0 = 0;
        /** @brief corresponding USEF flag cleared */
    constexpr std::uint32_t GPDMA_C7FCR_USEF_B_0x1 = 1;

    /** @brief completed suspension flag clear */
    using GPDMA_C7FCR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding SUSPF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C7FCR_SUSPF_B_0x0 = 0;
        /** @brief corresponding SUSPF flag cleared */
    constexpr std::uint32_t GPDMA_C7FCR_SUSPF_B_0x1 = 1;

    /** @brief trigger overrun flag clear */
    using GPDMA_C7FCR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding TOF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C7FCR_TOF_B_0x0 = 0;
        /** @brief corresponding TOF flag cleared */
    constexpr std::uint32_t GPDMA_C7FCR_TOF_B_0x1 = 1;

    /** @brief GPDMA channel 7 status register */
    using GPDMA_C7SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3E0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief idle flag */
    using GPDMA_C7SR_IDLEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: channel not in idle state (value: 0)
     *          - B_0x1: channel in idle state (value: 1)
     */
        /** @brief channel not in idle state */
    constexpr std::uint32_t GPDMA_C7SR_IDLEF_B_0x0 = 0;
        /** @brief channel in idle state */
    constexpr std::uint32_t GPDMA_C7SR_IDLEF_B_0x1 = 1;

    /** @brief transfer complete flag */
    using GPDMA_C7SR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no transfer complete event (value: 0)
     *          - B_0x1: a transfer complete event occurred (value: 1)
     */
        /** @brief no transfer complete event */
    constexpr std::uint32_t GPDMA_C7SR_TCF_B_0x0 = 0;
        /** @brief a transfer complete event occurred */
    constexpr std::uint32_t GPDMA_C7SR_TCF_B_0x1 = 1;

    /** @brief half transfer flag */
    using GPDMA_C7SR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no half transfer event (value: 0)
     *          - B_0x1: an half transfer event occurred (value: 1)
     */
        /** @brief no half transfer event */
    constexpr std::uint32_t GPDMA_C7SR_HTF_B_0x0 = 0;
        /** @brief an half transfer event occurred */
    constexpr std::uint32_t GPDMA_C7SR_HTF_B_0x1 = 1;

    /** @brief data transfer error flag */
    using GPDMA_C7SR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no data transfer error event (value: 0)
     *          - B_0x1: a master bus error event occurred on a data transfer (value: 1)
     */
        /** @brief no data transfer error event */
    constexpr std::uint32_t GPDMA_C7SR_DTEF_B_0x0 = 0;
        /** @brief a master bus error event occurred on a data transfer */
    constexpr std::uint32_t GPDMA_C7SR_DTEF_B_0x1 = 1;

    /** @brief update link transfer error flag */
    using GPDMA_C7SR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no update link transfer error event (value: 0)
     *          - B_0x1: a master bus error event occurred while updating a linked-list register from memory (value: 1)
     */
        /** @brief no update link transfer error event */
    constexpr std::uint32_t GPDMA_C7SR_ULEF_B_0x0 = 0;
        /** @brief a master bus error event occurred while updating a linked-list register from memory */
    constexpr std::uint32_t GPDMA_C7SR_ULEF_B_0x1 = 1;

    /** @brief user setting error flag */
    using GPDMA_C7SR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no user setting error event (value: 0)
     *          - B_0x1: a user setting error event occurred (value: 1)
     */
        /** @brief no user setting error event */
    constexpr std::uint32_t GPDMA_C7SR_USEF_B_0x0 = 0;
        /** @brief a user setting error event occurred */
    constexpr std::uint32_t GPDMA_C7SR_USEF_B_0x1 = 1;

    /** @brief completed suspension flag */
    using GPDMA_C7SR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no completed suspension event (value: 0)
     *          - B_0x1: a completed suspension event occurred (value: 1)
     */
        /** @brief no completed suspension event */
    constexpr std::uint32_t GPDMA_C7SR_SUSPF_B_0x0 = 0;
        /** @brief a completed suspension event occurred */
    constexpr std::uint32_t GPDMA_C7SR_SUSPF_B_0x1 = 1;

    /** @brief trigger overrun flag */
    using GPDMA_C7SR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no trigger overrun event (value: 0)
     *          - B_0x1: a trigger overrun event occurred (value: 1)
     */
        /** @brief no trigger overrun event */
    constexpr std::uint32_t GPDMA_C7SR_TOF_B_0x0 = 0;
        /** @brief a trigger overrun event occurred */
    constexpr std::uint32_t GPDMA_C7SR_TOF_B_0x1 = 1;

    /** @brief monitored FIFO level */
    using GPDMA_C7SR_FIFOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 7 control register */
    using GPDMA_C7CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3E4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief enable */
    using GPDMA_C7CR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write: ignored, read: channel disabled (value: 0)
     *          - B_0x1: write: enable channel, read: channel enabled (value: 1)
     */
        /** @brief write: ignored, read: channel disabled */
    constexpr std::uint32_t GPDMA_C7CR_EN_B_0x0 = 0;
        /** @brief write: enable channel, read: channel enabled */
    constexpr std::uint32_t GPDMA_C7CR_EN_B_0x1 = 1;

    /** @brief reset */
    using GPDMA_C7CR_RESET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no channel reset (value: 0)
     *          - B_0x1: channel reset (value: 1)
     */
        /** @brief no channel reset */
    constexpr std::uint32_t GPDMA_C7CR_RESET_B_0x0 = 0;
        /** @brief channel reset */
    constexpr std::uint32_t GPDMA_C7CR_RESET_B_0x1 = 1;

    /** @brief suspend */
    using GPDMA_C7CR_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write: resume channel, read: channel not suspended (value: 0)
     *          - B_0x1: write: suspend channel, read: channel suspended. (value: 1)
     */
        /** @brief write: resume channel, read: channel not suspended */
    constexpr std::uint32_t GPDMA_C7CR_SUSP_B_0x0 = 0;
        /** @brief write: suspend channel, read: channel suspended. */
    constexpr std::uint32_t GPDMA_C7CR_SUSP_B_0x1 = 1;

    /** @brief transfer complete interrupt enable */
    using GPDMA_C7CR_TCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C7CR_TCIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C7CR_TCIE_B_0x1 = 1;

    /** @brief half transfer complete interrupt enable */
    using GPDMA_C7CR_HTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C7CR_HTIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C7CR_HTIE_B_0x1 = 1;

    /** @brief data transfer error interrupt enable */
    using GPDMA_C7CR_DTEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C7CR_DTEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C7CR_DTEIE_B_0x1 = 1;

    /** @brief update link transfer error interrupt enable */
    using GPDMA_C7CR_ULEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C7CR_ULEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C7CR_ULEIE_B_0x1 = 1;

    /** @brief user setting error interrupt enable */
    using GPDMA_C7CR_USEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C7CR_USEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C7CR_USEIE_B_0x1 = 1;

    /** @brief completed suspension interrupt enable */
    using GPDMA_C7CR_SUSPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C7CR_SUSPIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C7CR_SUSPIE_B_0x1 = 1;

    /** @brief trigger overrun interrupt enable */
    using GPDMA_C7CR_TOIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C7CR_TOIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C7CR_TOIE_B_0x1 = 1;

    /** @brief Link step mode */
    using GPDMA_C7CR_LSM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: channel executed for the full linked-list and completed at the end of the last LLI (GPDMA_CxLLR=0). The 16 low-significant bits of the link address are null (LA[15:0]=0) and all the update bits are null (UT1=UB1=UT2=USA=UDA=ULL=0 and UT3=UB2=0 if present). Then GPDMA_CxBR1.BNDT[15:0]=0 and GPDMA_CxBR1.BRC[10:0]=0 if present. (value: 0)
     *          - B_0x1: channel executed once for the current LLI (value: 1)
     */
        /** @brief channel executed for the full linked-list and completed at the end of the last LLI (GPDMA_CxLLR=0). The 16 low-significant bits of the link address are null (LA[15:0]=0) and all the update bits are null (UT1=UB1=UT2=USA=UDA=ULL=0 and UT3=UB2=0 if present). Then GPDMA_CxBR1.BNDT[15:0]=0 and GPDMA_CxBR1.BRC[10:0]=0 if present. */
    constexpr std::uint32_t GPDMA_C7CR_LSM_B_0x0 = 0;
        /** @brief channel executed once for the current LLI */
    constexpr std::uint32_t GPDMA_C7CR_LSM_B_0x1 = 1;

    /** @brief linked-list allocated port */
    using GPDMA_C7CR_LAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C7CR_LAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C7CR_LAP_B_0x1 = 1;

    /** @brief priority level of the channel x GPDMA transfer versus others */
    using GPDMA_C7CR_PRIO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: low priority, low weight (value: 0)
     *          - B_0x1: low priority, mid weight (value: 1)
     *          - B_0x2: low priority, high weight (value: 2)
     *          - B_0x3: high priority (value: 3)
     */
        /** @brief low priority, low weight */
    constexpr std::uint32_t GPDMA_C7CR_PRIO_B_0x0 = 0;
        /** @brief low priority, mid weight */
    constexpr std::uint32_t GPDMA_C7CR_PRIO_B_0x1 = 1;
        /** @brief low priority, high weight */
    constexpr std::uint32_t GPDMA_C7CR_PRIO_B_0x2 = 2;
        /** @brief high priority */
    constexpr std::uint32_t GPDMA_C7CR_PRIO_B_0x3 = 3;

    /** @brief GPDMA channel 7 transfer register 1 */
    using GPDMA_C7TR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x410, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief binary logarithm of the source data width of a burst in bytes */
    using GPDMA_C7TR1_SDW_LOG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: byte (value: 0)
     *          - B_0x1: half-word (2 bytes) (value: 1)
     *          - B_0x2: word (4 bytes) (value: 2)
     *          - B_0x3: user setting error reported and no transfer issued (value: 3)
     */
        /** @brief byte */
    constexpr std::uint32_t GPDMA_C7TR1_SDW_LOG2_B_0x0 = 0;
        /** @brief half-word (2 bytes) */
    constexpr std::uint32_t GPDMA_C7TR1_SDW_LOG2_B_0x1 = 1;
        /** @brief word (4 bytes) */
    constexpr std::uint32_t GPDMA_C7TR1_SDW_LOG2_B_0x2 = 2;
        /** @brief user setting error reported and no transfer issued */
    constexpr std::uint32_t GPDMA_C7TR1_SDW_LOG2_B_0x3 = 3;

    /** @brief source incrementing burst */
    using GPDMA_C7TR1_SINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fixed burst (value: 0)
     *          - B_0x1: contiguously incremented burst (value: 1)
     */
        /** @brief fixed burst */
    constexpr std::uint32_t GPDMA_C7TR1_SINC_B_0x0 = 0;
        /** @brief contiguously incremented burst */
    constexpr std::uint32_t GPDMA_C7TR1_SINC_B_0x1 = 1;

    /** @brief source burst length minus 1, between 0 and 63 */
    using GPDMA_C7TR1_SBL_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief padding/alignment mode */
    using GPDMA_C7TR1_PAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: source data is transferred as right aligned, padded with 0s up to the destination data width (value: 0)
     *          - B_0x1: source data is transferred as right aligned, sign extended up to the destination data width (value: 1)
     */
        /** @brief source data is transferred as right aligned, padded with 0s up to the destination data width */
    constexpr std::uint32_t GPDMA_C7TR1_PAM_B_0x0 = 0;
        /** @brief source data is transferred as right aligned, sign extended up to the destination data width */
    constexpr std::uint32_t GPDMA_C7TR1_PAM_B_0x1 = 1;

    /** @brief source byte exchange within the unaligned half-word of each source word */
    using GPDMA_C7TR1_SBX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no byte-based exchange within the unaligned half-word of each source word (value: 0)
     *          - B_0x1: the two consecutive bytes within the unaligned half-word of each source word are exchanged. (value: 1)
     */
        /** @brief no byte-based exchange within the unaligned half-word of each source word */
    constexpr std::uint32_t GPDMA_C7TR1_SBX_B_0x0 = 0;
        /** @brief the two consecutive bytes within the unaligned half-word of each source word are exchanged. */
    constexpr std::uint32_t GPDMA_C7TR1_SBX_B_0x1 = 1;

    /** @brief source allocated port */
    using GPDMA_C7TR1_SAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C7TR1_SAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C7TR1_SAP_B_0x1 = 1;

    /** @brief security attribute of the GPDMA transfer from the source */
    using GPDMA_C7TR1_SSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPDMA transfer non-secure (value: 0)
     *          - B_0x1: GPDMA transfer secure (value: 1)
     */
        /** @brief GPDMA transfer non-secure */
    constexpr std::uint32_t GPDMA_C7TR1_SSEC_B_0x0 = 0;
        /** @brief GPDMA transfer secure */
    constexpr std::uint32_t GPDMA_C7TR1_SSEC_B_0x1 = 1;

    /** @brief binary logarithm of the destination data width of a burst, in bytes */
    using GPDMA_C7TR1_DDW_LOG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: byte (value: 0)
     *          - B_0x1: half-word (2 bytes) (value: 1)
     *          - B_0x2: word (4 bytes) (value: 2)
     *          - B_0x3: user setting error reported and no transfer issued (value: 3)
     */
        /** @brief byte */
    constexpr std::uint32_t GPDMA_C7TR1_DDW_LOG2_B_0x0 = 0;
        /** @brief half-word (2 bytes) */
    constexpr std::uint32_t GPDMA_C7TR1_DDW_LOG2_B_0x1 = 1;
        /** @brief word (4 bytes) */
    constexpr std::uint32_t GPDMA_C7TR1_DDW_LOG2_B_0x2 = 2;
        /** @brief user setting error reported and no transfer issued */
    constexpr std::uint32_t GPDMA_C7TR1_DDW_LOG2_B_0x3 = 3;

    /** @brief destination incrementing burst */
    using GPDMA_C7TR1_DINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fixed burst (value: 0)
     *          - B_0x1: contiguously incremented burst (value: 1)
     */
        /** @brief fixed burst */
    constexpr std::uint32_t GPDMA_C7TR1_DINC_B_0x0 = 0;
        /** @brief contiguously incremented burst */
    constexpr std::uint32_t GPDMA_C7TR1_DINC_B_0x1 = 1;

    /** @brief destination burst length minus 1, between 0 and 63 */
    using GPDMA_C7TR1_DBL_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination byte exchange */
    using GPDMA_C7TR1_DBX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no byte-based exchange within half-word (value: 0)
     *          - B_0x1: the two consecutive (post PAM) bytes are exchanged in each destination half-word. (value: 1)
     */
        /** @brief no byte-based exchange within half-word */
    constexpr std::uint32_t GPDMA_C7TR1_DBX_B_0x0 = 0;
        /** @brief the two consecutive (post PAM) bytes are exchanged in each destination half-word. */
    constexpr std::uint32_t GPDMA_C7TR1_DBX_B_0x1 = 1;

    /** @brief destination half-word exchange */
    using GPDMA_C7TR1_DHX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no halfword-based exchanged within word (value: 0)
     *          - B_0x1: the two consecutive (post PAM) half-words are exchanged in each destination word. (value: 1)
     */
        /** @brief no halfword-based exchanged within word */
    constexpr std::uint32_t GPDMA_C7TR1_DHX_B_0x0 = 0;
        /** @brief the two consecutive (post PAM) half-words are exchanged in each destination word. */
    constexpr std::uint32_t GPDMA_C7TR1_DHX_B_0x1 = 1;

    /** @brief destination allocated port */
    using GPDMA_C7TR1_DAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C7TR1_DAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C7TR1_DAP_B_0x1 = 1;

    /** @brief security attribute of the GPDMA transfer to the destination */
    using GPDMA_C7TR1_DSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPDMA transfer non-secure (value: 0)
     *          - B_0x1: GPDMA transfer secure (value: 1)
     */
        /** @brief GPDMA transfer non-secure */
    constexpr std::uint32_t GPDMA_C7TR1_DSEC_B_0x0 = 0;
        /** @brief GPDMA transfer secure */
    constexpr std::uint32_t GPDMA_C7TR1_DSEC_B_0x1 = 1;

    /** @brief GPDMA channel 7 transfer register 2 */
    using GPDMA_C7TR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x414, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA hardware request selection */
    using GPDMA_C7TR2_REQSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief software request */
    using GPDMA_C7TR2_SWREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no software request. The selected hardware request REQSEL[6:0] is taken into account. (value: 0)
     *          - B_0x1: software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[6:0] is ignored. (value: 1)
     */
        /** @brief no software request. The selected hardware request REQSEL[6:0] is taken into account. */
    constexpr std::uint32_t GPDMA_C7TR2_SWREQ_B_0x0 = 0;
        /** @brief software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[6:0] is ignored. */
    constexpr std::uint32_t GPDMA_C7TR2_SWREQ_B_0x1 = 1;

    /** @brief destination hardware request */
    using GPDMA_C7TR2_DREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: selected hardware request driven by a source peripheral (request signal taken into account by the GPDMA transfer scheduler over the source/read port) (value: 0)
     *          - B_0x1: selected hardware request driven by a destination peripheral (request signal taken into account by the GPDMA transfer scheduler over the destination/write port) (value: 1)
     */
        /** @brief selected hardware request driven by a source peripheral (request signal taken into account by the GPDMA transfer scheduler over the source/read port) */
    constexpr std::uint32_t GPDMA_C7TR2_DREQ_B_0x0 = 0;
        /** @brief selected hardware request driven by a destination peripheral (request signal taken into account by the GPDMA transfer scheduler over the destination/write port) */
    constexpr std::uint32_t GPDMA_C7TR2_DREQ_B_0x1 = 1;

    /** @brief Block hardware request */
    using GPDMA_C7TR2_BREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a burst level. (value: 0)
     *          - B_0x1: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see ). (value: 1)
     */
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a burst level. */
    constexpr std::uint32_t GPDMA_C7TR2_BREQ_B_0x0 = 0;
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see ). */
    constexpr std::uint32_t GPDMA_C7TR2_BREQ_B_0x1 = 1;

    /** @brief trigger mode */
    using GPDMA_C7TR2_TRIGM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: at block level: the first burst read of each block transfer is conditioned by one hit trigger (channel x = 12 to 15, for each block if a 2D/repeated block is configured with GPDMA_CxBR1.BRC[10:0] different to 0). (value: 0)
     *          - B_0x1: channel x = 0 to 11, same as 00; channel x=12 to 15, at 2D/repeated block level, the (value: 1)
     *          - B_0x2: at link level: a LLI link transfer is conditioned by one hit trigger. The LLI data transfer (if any) is not conditioned. (value: 2)
     *          - B_0x3: at programmed burst level: If SWREQ = 1, each programmed burst read is conditioned by one hit trigger. If SWREQ=0, each programmed burst that is requested by the selected peripheral, is conditioned by one hit trigger. (value: 3)
     */
        /** @brief at block level: the first burst read of each block transfer is conditioned by one hit trigger (channel x = 12 to 15, for each block if a 2D/repeated block is configured with GPDMA_CxBR1.BRC[10:0] different to 0). */
    constexpr std::uint32_t GPDMA_C7TR2_TRIGM_B_0x0 = 0;
        /** @brief channel x = 0 to 11, same as 00; channel x=12 to 15, at 2D/repeated block level, the */
    constexpr std::uint32_t GPDMA_C7TR2_TRIGM_B_0x1 = 1;
        /** @brief at link level: a LLI link transfer is conditioned by one hit trigger. The LLI data transfer (if any) is not conditioned. */
    constexpr std::uint32_t GPDMA_C7TR2_TRIGM_B_0x2 = 2;
        /** @brief at programmed burst level: If SWREQ = 1, each programmed burst read is conditioned by one hit trigger. If SWREQ=0, each programmed burst that is requested by the selected peripheral, is conditioned by one hit trigger. */
    constexpr std::uint32_t GPDMA_C7TR2_TRIGM_B_0x3 = 3;

    /** @brief trigger event input selection */
    using GPDMA_C7TR2_TRIGSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief trigger event polarity */
    using GPDMA_C7TR2_TRIGPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no trigger (masked trigger event) (value: 0)
     *          - B_0x1: trigger on the rising edge (value: 1)
     *          - B_0x2: trigger on the falling edge (value: 2)
     *          - B_0x3: same as 00 (value: 3)
     */
        /** @brief no trigger (masked trigger event) */
    constexpr std::uint32_t GPDMA_C7TR2_TRIGPOL_B_0x0 = 0;
        /** @brief trigger on the rising edge */
    constexpr std::uint32_t GPDMA_C7TR2_TRIGPOL_B_0x1 = 1;
        /** @brief trigger on the falling edge */
    constexpr std::uint32_t GPDMA_C7TR2_TRIGPOL_B_0x2 = 2;
        /** @brief same as 00 */
    constexpr std::uint32_t GPDMA_C7TR2_TRIGPOL_B_0x3 = 3;

    /** @brief transfer complete event mode */
    using GPDMA_C7TR2_TCEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: at block level (when GPDMA_CxBR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. (value: 0)
     *          - B_0x1: channel x = 0 to 11, same as 00; channel x=12 to 15, at 2D/repeated block level (when GPDMA_CxBR1.BRC[10:0]= 0 and GPDMA_CxBR1.BNDT[15:0]= 0), the complete (and the half) transfer event is generated at the end (respectively half of the end) of the 2D/repeated block. (value: 1)
     *          - B_0x2: at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer (the LLI data transfer being a block transfer or a 2D/repeated block transfer for channel x = 12 to 15), if any data transfer. (value: 2)
     *          - B_0x3: at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address GPDMA_CxLLR.LA[15:2] to zero and clears all the GPDMA_CxLLR update bits (UT1, UT2, UB1, USA, UDA and ULL, plus UT3 and UB2 if present). If the channel transfer is continuous/infinite, no event is generated. (value: 3)
     */
        /** @brief at block level (when GPDMA_CxBR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. */
    constexpr std::uint32_t GPDMA_C7TR2_TCEM_B_0x0 = 0;
        /** @brief channel x = 0 to 11, same as 00; channel x=12 to 15, at 2D/repeated block level (when GPDMA_CxBR1.BRC[10:0]= 0 and GPDMA_CxBR1.BNDT[15:0]= 0), the complete (and the half) transfer event is generated at the end (respectively half of the end) of the 2D/repeated block. */
    constexpr std::uint32_t GPDMA_C7TR2_TCEM_B_0x1 = 1;
        /** @brief at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer (the LLI data transfer being a block transfer or a 2D/repeated block transfer for channel x = 12 to 15), if any data transfer. */
    constexpr std::uint32_t GPDMA_C7TR2_TCEM_B_0x2 = 2;
        /** @brief at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address GPDMA_CxLLR.LA[15:2] to zero and clears all the GPDMA_CxLLR update bits (UT1, UT2, UB1, USA, UDA and ULL, plus UT3 and UB2 if present). If the channel transfer is continuous/infinite, no event is generated. */
    constexpr std::uint32_t GPDMA_C7TR2_TCEM_B_0x3 = 3;

    /** @brief GPDMA channel 7 block register 1 */
    using GPDMA_C7BR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x418, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief block number of data bytes to transfer from the source */
    using GPDMA_C7BR1_BNDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 7 source address register */
    using GPDMA_C7SAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x41C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief source address */
    using GPDMA_C7SAR_SA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 7 destination address register */
    using GPDMA_C7DAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x420, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination address */
    using GPDMA_C7DAR_DA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 7 linked-list address register */
    using GPDMA_C7LLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pointer (16-bit low-significant address) to the next linked-list data structure */
    using GPDMA_C7LLR_LA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxLLR register from memory */
    using GPDMA_C7LLR_ULL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxLLR update (value: 0)
     *          - B_0x1: GPDMA_CxLLR update (value: 1)
     */
        /** @brief no GPDMA_CxLLR update */
    constexpr std::uint32_t GPDMA_C7LLR_ULL_B_0x0 = 0;
        /** @brief GPDMA_CxLLR update */
    constexpr std::uint32_t GPDMA_C7LLR_ULL_B_0x1 = 1;

    /** @brief Update GPDMA_CxDAR register from memory */
    using GPDMA_C7LLR_UDA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxDAR update (value: 0)
     *          - B_0x1: GPDMA_CxDAR update (value: 1)
     */
        /** @brief no GPDMA_CxDAR update */
    constexpr std::uint32_t GPDMA_C7LLR_UDA_B_0x0 = 0;
        /** @brief GPDMA_CxDAR update */
    constexpr std::uint32_t GPDMA_C7LLR_UDA_B_0x1 = 1;

    /** @brief update GPDMA_CxSAR from memory */
    using GPDMA_C7LLR_USA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxSAR update (value: 0)
     *          - B_0x1: GPDMA_CxSAR update (value: 1)
     */
        /** @brief no GPDMA_CxSAR update */
    constexpr std::uint32_t GPDMA_C7LLR_USA_B_0x0 = 0;
        /** @brief GPDMA_CxSAR update */
    constexpr std::uint32_t GPDMA_C7LLR_USA_B_0x1 = 1;

    /** @brief Update GPDMA_CxBR1 from memory */
    using GPDMA_C7LLR_UB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxBR1 update from memory (GPDMA_CxBR1.BNDT[15:0] restored if any link transfer) (value: 0)
     *          - B_0x1: GPDMA_CxBR1 update (value: 1)
     */
        /** @brief no GPDMA_CxBR1 update from memory (GPDMA_CxBR1.BNDT[15:0] restored if any link transfer) */
    constexpr std::uint32_t GPDMA_C7LLR_UB1_B_0x0 = 0;
        /** @brief GPDMA_CxBR1 update */
    constexpr std::uint32_t GPDMA_C7LLR_UB1_B_0x1 = 1;

    /** @brief Update GPDMA_CxTR2 from memory */
    using GPDMA_C7LLR_UT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxTR2 update (value: 0)
     *          - B_0x1: GPDMA_CxTR2 update (value: 1)
     */
        /** @brief no GPDMA_CxTR2 update */
    constexpr std::uint32_t GPDMA_C7LLR_UT2_B_0x0 = 0;
        /** @brief GPDMA_CxTR2 update */
    constexpr std::uint32_t GPDMA_C7LLR_UT2_B_0x1 = 1;

    /** @brief Update GPDMA_CxTR1 from memory */
    using GPDMA_C7LLR_UT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxTR1 update (value: 0)
     *          - B_0x1: GPDMA_CxTR1 update (value: 1)
     */
        /** @brief no GPDMA_CxTR1 update */
    constexpr std::uint32_t GPDMA_C7LLR_UT1_B_0x0 = 0;
        /** @brief GPDMA_CxTR1 update */
    constexpr std::uint32_t GPDMA_C7LLR_UT1_B_0x1 = 1;

    /** @brief GPDMA channel 8 linked-list base address register */
    using GPDMA_C8LBAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x450, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief linked-list base address of GPDMA channel x */
    using GPDMA_C8LBAR_LBA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 8 flag clear register */
    using GPDMA_C8FCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x45C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transfer complete flag clear */
    using GPDMA_C8FCR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding TCF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C8FCR_TCF_B_0x0 = 0;
        /** @brief corresponding TCF flag cleared */
    constexpr std::uint32_t GPDMA_C8FCR_TCF_B_0x1 = 1;

    /** @brief half transfer flag clear */
    using GPDMA_C8FCR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding HTF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C8FCR_HTF_B_0x0 = 0;
        /** @brief corresponding HTF flag cleared */
    constexpr std::uint32_t GPDMA_C8FCR_HTF_B_0x1 = 1;

    /** @brief data transfer error flag clear */
    using GPDMA_C8FCR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding DTEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C8FCR_DTEF_B_0x0 = 0;
        /** @brief corresponding DTEF flag cleared */
    constexpr std::uint32_t GPDMA_C8FCR_DTEF_B_0x1 = 1;

    /** @brief update link transfer error flag clear */
    using GPDMA_C8FCR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding ULEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C8FCR_ULEF_B_0x0 = 0;
        /** @brief corresponding ULEF flag cleared */
    constexpr std::uint32_t GPDMA_C8FCR_ULEF_B_0x1 = 1;

    /** @brief user setting error flag clear */
    using GPDMA_C8FCR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding USEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C8FCR_USEF_B_0x0 = 0;
        /** @brief corresponding USEF flag cleared */
    constexpr std::uint32_t GPDMA_C8FCR_USEF_B_0x1 = 1;

    /** @brief completed suspension flag clear */
    using GPDMA_C8FCR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding SUSPF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C8FCR_SUSPF_B_0x0 = 0;
        /** @brief corresponding SUSPF flag cleared */
    constexpr std::uint32_t GPDMA_C8FCR_SUSPF_B_0x1 = 1;

    /** @brief trigger overrun flag clear */
    using GPDMA_C8FCR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding TOF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C8FCR_TOF_B_0x0 = 0;
        /** @brief corresponding TOF flag cleared */
    constexpr std::uint32_t GPDMA_C8FCR_TOF_B_0x1 = 1;

    /** @brief GPDMA channel 8 status register */
    using GPDMA_C8SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x460, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief idle flag */
    using GPDMA_C8SR_IDLEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: channel not in idle state (value: 0)
     *          - B_0x1: channel in idle state (value: 1)
     */
        /** @brief channel not in idle state */
    constexpr std::uint32_t GPDMA_C8SR_IDLEF_B_0x0 = 0;
        /** @brief channel in idle state */
    constexpr std::uint32_t GPDMA_C8SR_IDLEF_B_0x1 = 1;

    /** @brief transfer complete flag */
    using GPDMA_C8SR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no transfer complete event (value: 0)
     *          - B_0x1: a transfer complete event occurred (value: 1)
     */
        /** @brief no transfer complete event */
    constexpr std::uint32_t GPDMA_C8SR_TCF_B_0x0 = 0;
        /** @brief a transfer complete event occurred */
    constexpr std::uint32_t GPDMA_C8SR_TCF_B_0x1 = 1;

    /** @brief half transfer flag */
    using GPDMA_C8SR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no half transfer event (value: 0)
     *          - B_0x1: an half transfer event occurred (value: 1)
     */
        /** @brief no half transfer event */
    constexpr std::uint32_t GPDMA_C8SR_HTF_B_0x0 = 0;
        /** @brief an half transfer event occurred */
    constexpr std::uint32_t GPDMA_C8SR_HTF_B_0x1 = 1;

    /** @brief data transfer error flag */
    using GPDMA_C8SR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no data transfer error event (value: 0)
     *          - B_0x1: a master bus error event occurred on a data transfer (value: 1)
     */
        /** @brief no data transfer error event */
    constexpr std::uint32_t GPDMA_C8SR_DTEF_B_0x0 = 0;
        /** @brief a master bus error event occurred on a data transfer */
    constexpr std::uint32_t GPDMA_C8SR_DTEF_B_0x1 = 1;

    /** @brief update link transfer error flag */
    using GPDMA_C8SR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no update link transfer error event (value: 0)
     *          - B_0x1: a master bus error event occurred while updating a linked-list register from memory (value: 1)
     */
        /** @brief no update link transfer error event */
    constexpr std::uint32_t GPDMA_C8SR_ULEF_B_0x0 = 0;
        /** @brief a master bus error event occurred while updating a linked-list register from memory */
    constexpr std::uint32_t GPDMA_C8SR_ULEF_B_0x1 = 1;

    /** @brief user setting error flag */
    using GPDMA_C8SR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no user setting error event (value: 0)
     *          - B_0x1: a user setting error event occurred (value: 1)
     */
        /** @brief no user setting error event */
    constexpr std::uint32_t GPDMA_C8SR_USEF_B_0x0 = 0;
        /** @brief a user setting error event occurred */
    constexpr std::uint32_t GPDMA_C8SR_USEF_B_0x1 = 1;

    /** @brief completed suspension flag */
    using GPDMA_C8SR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no completed suspension event (value: 0)
     *          - B_0x1: a completed suspension event occurred (value: 1)
     */
        /** @brief no completed suspension event */
    constexpr std::uint32_t GPDMA_C8SR_SUSPF_B_0x0 = 0;
        /** @brief a completed suspension event occurred */
    constexpr std::uint32_t GPDMA_C8SR_SUSPF_B_0x1 = 1;

    /** @brief trigger overrun flag */
    using GPDMA_C8SR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no trigger overrun event (value: 0)
     *          - B_0x1: a trigger overrun event occurred (value: 1)
     */
        /** @brief no trigger overrun event */
    constexpr std::uint32_t GPDMA_C8SR_TOF_B_0x0 = 0;
        /** @brief a trigger overrun event occurred */
    constexpr std::uint32_t GPDMA_C8SR_TOF_B_0x1 = 1;

    /** @brief monitored FIFO level */
    using GPDMA_C8SR_FIFOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 8 control register */
    using GPDMA_C8CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x464, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief enable */
    using GPDMA_C8CR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write: ignored, read: channel disabled (value: 0)
     *          - B_0x1: write: enable channel, read: channel enabled (value: 1)
     */
        /** @brief write: ignored, read: channel disabled */
    constexpr std::uint32_t GPDMA_C8CR_EN_B_0x0 = 0;
        /** @brief write: enable channel, read: channel enabled */
    constexpr std::uint32_t GPDMA_C8CR_EN_B_0x1 = 1;

    /** @brief reset */
    using GPDMA_C8CR_RESET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no channel reset (value: 0)
     *          - B_0x1: channel reset (value: 1)
     */
        /** @brief no channel reset */
    constexpr std::uint32_t GPDMA_C8CR_RESET_B_0x0 = 0;
        /** @brief channel reset */
    constexpr std::uint32_t GPDMA_C8CR_RESET_B_0x1 = 1;

    /** @brief suspend */
    using GPDMA_C8CR_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write: resume channel, read: channel not suspended (value: 0)
     *          - B_0x1: write: suspend channel, read: channel suspended. (value: 1)
     */
        /** @brief write: resume channel, read: channel not suspended */
    constexpr std::uint32_t GPDMA_C8CR_SUSP_B_0x0 = 0;
        /** @brief write: suspend channel, read: channel suspended. */
    constexpr std::uint32_t GPDMA_C8CR_SUSP_B_0x1 = 1;

    /** @brief transfer complete interrupt enable */
    using GPDMA_C8CR_TCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C8CR_TCIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C8CR_TCIE_B_0x1 = 1;

    /** @brief half transfer complete interrupt enable */
    using GPDMA_C8CR_HTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C8CR_HTIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C8CR_HTIE_B_0x1 = 1;

    /** @brief data transfer error interrupt enable */
    using GPDMA_C8CR_DTEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C8CR_DTEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C8CR_DTEIE_B_0x1 = 1;

    /** @brief update link transfer error interrupt enable */
    using GPDMA_C8CR_ULEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C8CR_ULEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C8CR_ULEIE_B_0x1 = 1;

    /** @brief user setting error interrupt enable */
    using GPDMA_C8CR_USEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C8CR_USEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C8CR_USEIE_B_0x1 = 1;

    /** @brief completed suspension interrupt enable */
    using GPDMA_C8CR_SUSPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C8CR_SUSPIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C8CR_SUSPIE_B_0x1 = 1;

    /** @brief trigger overrun interrupt enable */
    using GPDMA_C8CR_TOIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C8CR_TOIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C8CR_TOIE_B_0x1 = 1;

    /** @brief Link step mode */
    using GPDMA_C8CR_LSM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: channel executed for the full linked-list and completed at the end of the last LLI (GPDMA_CxLLR=0). The 16 low-significant bits of the link address are null (LA[15:0]=0) and all the update bits are null (UT1=UB1=UT2=USA=UDA=ULL=0 and UT3=UB2=0 if present). Then GPDMA_CxBR1.BNDT[15:0]=0 and GPDMA_CxBR1.BRC[10:0]=0 if present. (value: 0)
     *          - B_0x1: channel executed once for the current LLI (value: 1)
     */
        /** @brief channel executed for the full linked-list and completed at the end of the last LLI (GPDMA_CxLLR=0). The 16 low-significant bits of the link address are null (LA[15:0]=0) and all the update bits are null (UT1=UB1=UT2=USA=UDA=ULL=0 and UT3=UB2=0 if present). Then GPDMA_CxBR1.BNDT[15:0]=0 and GPDMA_CxBR1.BRC[10:0]=0 if present. */
    constexpr std::uint32_t GPDMA_C8CR_LSM_B_0x0 = 0;
        /** @brief channel executed once for the current LLI */
    constexpr std::uint32_t GPDMA_C8CR_LSM_B_0x1 = 1;

    /** @brief linked-list allocated port */
    using GPDMA_C8CR_LAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C8CR_LAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C8CR_LAP_B_0x1 = 1;

    /** @brief priority level of the channel x GPDMA transfer versus others */
    using GPDMA_C8CR_PRIO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: low priority, low weight (value: 0)
     *          - B_0x1: low priority, mid weight (value: 1)
     *          - B_0x2: low priority, high weight (value: 2)
     *          - B_0x3: high priority (value: 3)
     */
        /** @brief low priority, low weight */
    constexpr std::uint32_t GPDMA_C8CR_PRIO_B_0x0 = 0;
        /** @brief low priority, mid weight */
    constexpr std::uint32_t GPDMA_C8CR_PRIO_B_0x1 = 1;
        /** @brief low priority, high weight */
    constexpr std::uint32_t GPDMA_C8CR_PRIO_B_0x2 = 2;
        /** @brief high priority */
    constexpr std::uint32_t GPDMA_C8CR_PRIO_B_0x3 = 3;

    /** @brief GPDMA channel 8 transfer register 1 */
    using GPDMA_C8TR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x490, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief binary logarithm of the source data width of a burst in bytes */
    using GPDMA_C8TR1_SDW_LOG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: byte (value: 0)
     *          - B_0x1: half-word (2 bytes) (value: 1)
     *          - B_0x2: word (4 bytes) (value: 2)
     *          - B_0x3: user setting error reported and no transfer issued (value: 3)
     */
        /** @brief byte */
    constexpr std::uint32_t GPDMA_C8TR1_SDW_LOG2_B_0x0 = 0;
        /** @brief half-word (2 bytes) */
    constexpr std::uint32_t GPDMA_C8TR1_SDW_LOG2_B_0x1 = 1;
        /** @brief word (4 bytes) */
    constexpr std::uint32_t GPDMA_C8TR1_SDW_LOG2_B_0x2 = 2;
        /** @brief user setting error reported and no transfer issued */
    constexpr std::uint32_t GPDMA_C8TR1_SDW_LOG2_B_0x3 = 3;

    /** @brief source incrementing burst */
    using GPDMA_C8TR1_SINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fixed burst (value: 0)
     *          - B_0x1: contiguously incremented burst (value: 1)
     */
        /** @brief fixed burst */
    constexpr std::uint32_t GPDMA_C8TR1_SINC_B_0x0 = 0;
        /** @brief contiguously incremented burst */
    constexpr std::uint32_t GPDMA_C8TR1_SINC_B_0x1 = 1;

    /** @brief source burst length minus 1, between 0 and 63 */
    using GPDMA_C8TR1_SBL_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief padding/alignment mode */
    using GPDMA_C8TR1_PAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: source data is transferred as right aligned, padded with 0s up to the destination data width (value: 0)
     *          - B_0x1: source data is transferred as right aligned, sign extended up to the destination data width (value: 1)
     */
        /** @brief source data is transferred as right aligned, padded with 0s up to the destination data width */
    constexpr std::uint32_t GPDMA_C8TR1_PAM_B_0x0 = 0;
        /** @brief source data is transferred as right aligned, sign extended up to the destination data width */
    constexpr std::uint32_t GPDMA_C8TR1_PAM_B_0x1 = 1;

    /** @brief source byte exchange within the unaligned half-word of each source word */
    using GPDMA_C8TR1_SBX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no byte-based exchange within the unaligned half-word of each source word (value: 0)
     *          - B_0x1: the two consecutive bytes within the unaligned half-word of each source word are exchanged. (value: 1)
     */
        /** @brief no byte-based exchange within the unaligned half-word of each source word */
    constexpr std::uint32_t GPDMA_C8TR1_SBX_B_0x0 = 0;
        /** @brief the two consecutive bytes within the unaligned half-word of each source word are exchanged. */
    constexpr std::uint32_t GPDMA_C8TR1_SBX_B_0x1 = 1;

    /** @brief source allocated port */
    using GPDMA_C8TR1_SAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C8TR1_SAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C8TR1_SAP_B_0x1 = 1;

    /** @brief security attribute of the GPDMA transfer from the source */
    using GPDMA_C8TR1_SSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPDMA transfer non-secure (value: 0)
     *          - B_0x1: GPDMA transfer secure (value: 1)
     */
        /** @brief GPDMA transfer non-secure */
    constexpr std::uint32_t GPDMA_C8TR1_SSEC_B_0x0 = 0;
        /** @brief GPDMA transfer secure */
    constexpr std::uint32_t GPDMA_C8TR1_SSEC_B_0x1 = 1;

    /** @brief binary logarithm of the destination data width of a burst, in bytes */
    using GPDMA_C8TR1_DDW_LOG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: byte (value: 0)
     *          - B_0x1: half-word (2 bytes) (value: 1)
     *          - B_0x2: word (4 bytes) (value: 2)
     *          - B_0x3: user setting error reported and no transfer issued (value: 3)
     */
        /** @brief byte */
    constexpr std::uint32_t GPDMA_C8TR1_DDW_LOG2_B_0x0 = 0;
        /** @brief half-word (2 bytes) */
    constexpr std::uint32_t GPDMA_C8TR1_DDW_LOG2_B_0x1 = 1;
        /** @brief word (4 bytes) */
    constexpr std::uint32_t GPDMA_C8TR1_DDW_LOG2_B_0x2 = 2;
        /** @brief user setting error reported and no transfer issued */
    constexpr std::uint32_t GPDMA_C8TR1_DDW_LOG2_B_0x3 = 3;

    /** @brief destination incrementing burst */
    using GPDMA_C8TR1_DINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fixed burst (value: 0)
     *          - B_0x1: contiguously incremented burst (value: 1)
     */
        /** @brief fixed burst */
    constexpr std::uint32_t GPDMA_C8TR1_DINC_B_0x0 = 0;
        /** @brief contiguously incremented burst */
    constexpr std::uint32_t GPDMA_C8TR1_DINC_B_0x1 = 1;

    /** @brief destination burst length minus 1, between 0 and 63 */
    using GPDMA_C8TR1_DBL_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination byte exchange */
    using GPDMA_C8TR1_DBX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no byte-based exchange within half-word (value: 0)
     *          - B_0x1: the two consecutive (post PAM) bytes are exchanged in each destination half-word. (value: 1)
     */
        /** @brief no byte-based exchange within half-word */
    constexpr std::uint32_t GPDMA_C8TR1_DBX_B_0x0 = 0;
        /** @brief the two consecutive (post PAM) bytes are exchanged in each destination half-word. */
    constexpr std::uint32_t GPDMA_C8TR1_DBX_B_0x1 = 1;

    /** @brief destination half-word exchange */
    using GPDMA_C8TR1_DHX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no halfword-based exchanged within word (value: 0)
     *          - B_0x1: the two consecutive (post PAM) half-words are exchanged in each destination word. (value: 1)
     */
        /** @brief no halfword-based exchanged within word */
    constexpr std::uint32_t GPDMA_C8TR1_DHX_B_0x0 = 0;
        /** @brief the two consecutive (post PAM) half-words are exchanged in each destination word. */
    constexpr std::uint32_t GPDMA_C8TR1_DHX_B_0x1 = 1;

    /** @brief destination allocated port */
    using GPDMA_C8TR1_DAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C8TR1_DAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C8TR1_DAP_B_0x1 = 1;

    /** @brief security attribute of the GPDMA transfer to the destination */
    using GPDMA_C8TR1_DSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPDMA transfer non-secure (value: 0)
     *          - B_0x1: GPDMA transfer secure (value: 1)
     */
        /** @brief GPDMA transfer non-secure */
    constexpr std::uint32_t GPDMA_C8TR1_DSEC_B_0x0 = 0;
        /** @brief GPDMA transfer secure */
    constexpr std::uint32_t GPDMA_C8TR1_DSEC_B_0x1 = 1;

    /** @brief GPDMA channel 8 transfer register 2 */
    using GPDMA_C8TR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x494, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA hardware request selection */
    using GPDMA_C8TR2_REQSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief software request */
    using GPDMA_C8TR2_SWREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no software request. The selected hardware request REQSEL[6:0] is taken into account. (value: 0)
     *          - B_0x1: software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[6:0] is ignored. (value: 1)
     */
        /** @brief no software request. The selected hardware request REQSEL[6:0] is taken into account. */
    constexpr std::uint32_t GPDMA_C8TR2_SWREQ_B_0x0 = 0;
        /** @brief software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[6:0] is ignored. */
    constexpr std::uint32_t GPDMA_C8TR2_SWREQ_B_0x1 = 1;

    /** @brief destination hardware request */
    using GPDMA_C8TR2_DREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: selected hardware request driven by a source peripheral (request signal taken into account by the GPDMA transfer scheduler over the source/read port) (value: 0)
     *          - B_0x1: selected hardware request driven by a destination peripheral (request signal taken into account by the GPDMA transfer scheduler over the destination/write port) (value: 1)
     */
        /** @brief selected hardware request driven by a source peripheral (request signal taken into account by the GPDMA transfer scheduler over the source/read port) */
    constexpr std::uint32_t GPDMA_C8TR2_DREQ_B_0x0 = 0;
        /** @brief selected hardware request driven by a destination peripheral (request signal taken into account by the GPDMA transfer scheduler over the destination/write port) */
    constexpr std::uint32_t GPDMA_C8TR2_DREQ_B_0x1 = 1;

    /** @brief Block hardware request */
    using GPDMA_C8TR2_BREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a burst level. (value: 0)
     *          - B_0x1: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see ). (value: 1)
     */
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a burst level. */
    constexpr std::uint32_t GPDMA_C8TR2_BREQ_B_0x0 = 0;
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see ). */
    constexpr std::uint32_t GPDMA_C8TR2_BREQ_B_0x1 = 1;

    /** @brief trigger mode */
    using GPDMA_C8TR2_TRIGM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: at block level: the first burst read of each block transfer is conditioned by one hit trigger (channel x = 12 to 15, for each block if a 2D/repeated block is configured with GPDMA_CxBR1.BRC[10:0] different to 0). (value: 0)
     *          - B_0x1: channel x = 0 to 11, same as 00; channel x=12 to 15, at 2D/repeated block level, the (value: 1)
     *          - B_0x2: at link level: a LLI link transfer is conditioned by one hit trigger. The LLI data transfer (if any) is not conditioned. (value: 2)
     *          - B_0x3: at programmed burst level: If SWREQ = 1, each programmed burst read is conditioned by one hit trigger. If SWREQ=0, each programmed burst that is requested by the selected peripheral, is conditioned by one hit trigger. (value: 3)
     */
        /** @brief at block level: the first burst read of each block transfer is conditioned by one hit trigger (channel x = 12 to 15, for each block if a 2D/repeated block is configured with GPDMA_CxBR1.BRC[10:0] different to 0). */
    constexpr std::uint32_t GPDMA_C8TR2_TRIGM_B_0x0 = 0;
        /** @brief channel x = 0 to 11, same as 00; channel x=12 to 15, at 2D/repeated block level, the */
    constexpr std::uint32_t GPDMA_C8TR2_TRIGM_B_0x1 = 1;
        /** @brief at link level: a LLI link transfer is conditioned by one hit trigger. The LLI data transfer (if any) is not conditioned. */
    constexpr std::uint32_t GPDMA_C8TR2_TRIGM_B_0x2 = 2;
        /** @brief at programmed burst level: If SWREQ = 1, each programmed burst read is conditioned by one hit trigger. If SWREQ=0, each programmed burst that is requested by the selected peripheral, is conditioned by one hit trigger. */
    constexpr std::uint32_t GPDMA_C8TR2_TRIGM_B_0x3 = 3;

    /** @brief trigger event input selection */
    using GPDMA_C8TR2_TRIGSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief trigger event polarity */
    using GPDMA_C8TR2_TRIGPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no trigger (masked trigger event) (value: 0)
     *          - B_0x1: trigger on the rising edge (value: 1)
     *          - B_0x2: trigger on the falling edge (value: 2)
     *          - B_0x3: same as 00 (value: 3)
     */
        /** @brief no trigger (masked trigger event) */
    constexpr std::uint32_t GPDMA_C8TR2_TRIGPOL_B_0x0 = 0;
        /** @brief trigger on the rising edge */
    constexpr std::uint32_t GPDMA_C8TR2_TRIGPOL_B_0x1 = 1;
        /** @brief trigger on the falling edge */
    constexpr std::uint32_t GPDMA_C8TR2_TRIGPOL_B_0x2 = 2;
        /** @brief same as 00 */
    constexpr std::uint32_t GPDMA_C8TR2_TRIGPOL_B_0x3 = 3;

    /** @brief transfer complete event mode */
    using GPDMA_C8TR2_TCEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: at block level (when GPDMA_CxBR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. (value: 0)
     *          - B_0x1: channel x = 0 to 11, same as 00; channel x=12 to 15, at 2D/repeated block level (when GPDMA_CxBR1.BRC[10:0]= 0 and GPDMA_CxBR1.BNDT[15:0]= 0), the complete (and the half) transfer event is generated at the end (respectively half of the end) of the 2D/repeated block. (value: 1)
     *          - B_0x2: at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer (the LLI data transfer being a block transfer or a 2D/repeated block transfer for channel x = 12 to 15), if any data transfer. (value: 2)
     *          - B_0x3: at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address GPDMA_CxLLR.LA[15:2] to zero and clears all the GPDMA_CxLLR update bits (UT1, UT2, UB1, USA, UDA and ULL, plus UT3 and UB2 if present). If the channel transfer is continuous/infinite, no event is generated. (value: 3)
     */
        /** @brief at block level (when GPDMA_CxBR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. */
    constexpr std::uint32_t GPDMA_C8TR2_TCEM_B_0x0 = 0;
        /** @brief channel x = 0 to 11, same as 00; channel x=12 to 15, at 2D/repeated block level (when GPDMA_CxBR1.BRC[10:0]= 0 and GPDMA_CxBR1.BNDT[15:0]= 0), the complete (and the half) transfer event is generated at the end (respectively half of the end) of the 2D/repeated block. */
    constexpr std::uint32_t GPDMA_C8TR2_TCEM_B_0x1 = 1;
        /** @brief at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer (the LLI data transfer being a block transfer or a 2D/repeated block transfer for channel x = 12 to 15), if any data transfer. */
    constexpr std::uint32_t GPDMA_C8TR2_TCEM_B_0x2 = 2;
        /** @brief at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address GPDMA_CxLLR.LA[15:2] to zero and clears all the GPDMA_CxLLR update bits (UT1, UT2, UB1, USA, UDA and ULL, plus UT3 and UB2 if present). If the channel transfer is continuous/infinite, no event is generated. */
    constexpr std::uint32_t GPDMA_C8TR2_TCEM_B_0x3 = 3;

    /** @brief GPDMA channel 8 block register 1 */
    using GPDMA_C8BR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x498, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief block number of data bytes to transfer from the source */
    using GPDMA_C8BR1_BNDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 8 source address register */
    using GPDMA_C8SAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x49C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief source address */
    using GPDMA_C8SAR_SA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 8 destination address register */
    using GPDMA_C8DAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination address */
    using GPDMA_C8DAR_DA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 8 linked-list address register */
    using GPDMA_C8LLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4CC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pointer (16-bit low-significant address) to the next linked-list data structure */
    using GPDMA_C8LLR_LA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxLLR register from memory */
    using GPDMA_C8LLR_ULL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxLLR update (value: 0)
     *          - B_0x1: GPDMA_CxLLR update (value: 1)
     */
        /** @brief no GPDMA_CxLLR update */
    constexpr std::uint32_t GPDMA_C8LLR_ULL_B_0x0 = 0;
        /** @brief GPDMA_CxLLR update */
    constexpr std::uint32_t GPDMA_C8LLR_ULL_B_0x1 = 1;

    /** @brief Update GPDMA_CxDAR register from memory */
    using GPDMA_C8LLR_UDA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxDAR update (value: 0)
     *          - B_0x1: GPDMA_CxDAR update (value: 1)
     */
        /** @brief no GPDMA_CxDAR update */
    constexpr std::uint32_t GPDMA_C8LLR_UDA_B_0x0 = 0;
        /** @brief GPDMA_CxDAR update */
    constexpr std::uint32_t GPDMA_C8LLR_UDA_B_0x1 = 1;

    /** @brief update GPDMA_CxSAR from memory */
    using GPDMA_C8LLR_USA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxSAR update (value: 0)
     *          - B_0x1: GPDMA_CxSAR update (value: 1)
     */
        /** @brief no GPDMA_CxSAR update */
    constexpr std::uint32_t GPDMA_C8LLR_USA_B_0x0 = 0;
        /** @brief GPDMA_CxSAR update */
    constexpr std::uint32_t GPDMA_C8LLR_USA_B_0x1 = 1;

    /** @brief Update GPDMA_CxBR1 from memory */
    using GPDMA_C8LLR_UB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxBR1 update from memory (GPDMA_CxBR1.BNDT[15:0] restored if any link transfer) (value: 0)
     *          - B_0x1: GPDMA_CxBR1 update (value: 1)
     */
        /** @brief no GPDMA_CxBR1 update from memory (GPDMA_CxBR1.BNDT[15:0] restored if any link transfer) */
    constexpr std::uint32_t GPDMA_C8LLR_UB1_B_0x0 = 0;
        /** @brief GPDMA_CxBR1 update */
    constexpr std::uint32_t GPDMA_C8LLR_UB1_B_0x1 = 1;

    /** @brief Update GPDMA_CxTR2 from memory */
    using GPDMA_C8LLR_UT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxTR2 update (value: 0)
     *          - B_0x1: GPDMA_CxTR2 update (value: 1)
     */
        /** @brief no GPDMA_CxTR2 update */
    constexpr std::uint32_t GPDMA_C8LLR_UT2_B_0x0 = 0;
        /** @brief GPDMA_CxTR2 update */
    constexpr std::uint32_t GPDMA_C8LLR_UT2_B_0x1 = 1;

    /** @brief Update GPDMA_CxTR1 from memory */
    using GPDMA_C8LLR_UT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxTR1 update (value: 0)
     *          - B_0x1: GPDMA_CxTR1 update (value: 1)
     */
        /** @brief no GPDMA_CxTR1 update */
    constexpr std::uint32_t GPDMA_C8LLR_UT1_B_0x0 = 0;
        /** @brief GPDMA_CxTR1 update */
    constexpr std::uint32_t GPDMA_C8LLR_UT1_B_0x1 = 1;

    /** @brief GPDMA channel 9 linked-list base address register */
    using GPDMA_C9LBAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4D0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief linked-list base address of GPDMA channel x */
    using GPDMA_C9LBAR_LBA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 9 flag clear register */
    using GPDMA_C9FCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4DC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transfer complete flag clear */
    using GPDMA_C9FCR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding TCF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C9FCR_TCF_B_0x0 = 0;
        /** @brief corresponding TCF flag cleared */
    constexpr std::uint32_t GPDMA_C9FCR_TCF_B_0x1 = 1;

    /** @brief half transfer flag clear */
    using GPDMA_C9FCR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding HTF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C9FCR_HTF_B_0x0 = 0;
        /** @brief corresponding HTF flag cleared */
    constexpr std::uint32_t GPDMA_C9FCR_HTF_B_0x1 = 1;

    /** @brief data transfer error flag clear */
    using GPDMA_C9FCR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding DTEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C9FCR_DTEF_B_0x0 = 0;
        /** @brief corresponding DTEF flag cleared */
    constexpr std::uint32_t GPDMA_C9FCR_DTEF_B_0x1 = 1;

    /** @brief update link transfer error flag clear */
    using GPDMA_C9FCR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding ULEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C9FCR_ULEF_B_0x0 = 0;
        /** @brief corresponding ULEF flag cleared */
    constexpr std::uint32_t GPDMA_C9FCR_ULEF_B_0x1 = 1;

    /** @brief user setting error flag clear */
    using GPDMA_C9FCR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding USEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C9FCR_USEF_B_0x0 = 0;
        /** @brief corresponding USEF flag cleared */
    constexpr std::uint32_t GPDMA_C9FCR_USEF_B_0x1 = 1;

    /** @brief completed suspension flag clear */
    using GPDMA_C9FCR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding SUSPF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C9FCR_SUSPF_B_0x0 = 0;
        /** @brief corresponding SUSPF flag cleared */
    constexpr std::uint32_t GPDMA_C9FCR_SUSPF_B_0x1 = 1;

    /** @brief trigger overrun flag clear */
    using GPDMA_C9FCR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding TOF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C9FCR_TOF_B_0x0 = 0;
        /** @brief corresponding TOF flag cleared */
    constexpr std::uint32_t GPDMA_C9FCR_TOF_B_0x1 = 1;

    /** @brief GPDMA channel 9 status register */
    using GPDMA_C9SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4E0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief idle flag */
    using GPDMA_C9SR_IDLEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: channel not in idle state (value: 0)
     *          - B_0x1: channel in idle state (value: 1)
     */
        /** @brief channel not in idle state */
    constexpr std::uint32_t GPDMA_C9SR_IDLEF_B_0x0 = 0;
        /** @brief channel in idle state */
    constexpr std::uint32_t GPDMA_C9SR_IDLEF_B_0x1 = 1;

    /** @brief transfer complete flag */
    using GPDMA_C9SR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no transfer complete event (value: 0)
     *          - B_0x1: a transfer complete event occurred (value: 1)
     */
        /** @brief no transfer complete event */
    constexpr std::uint32_t GPDMA_C9SR_TCF_B_0x0 = 0;
        /** @brief a transfer complete event occurred */
    constexpr std::uint32_t GPDMA_C9SR_TCF_B_0x1 = 1;

    /** @brief half transfer flag */
    using GPDMA_C9SR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no half transfer event (value: 0)
     *          - B_0x1: an half transfer event occurred (value: 1)
     */
        /** @brief no half transfer event */
    constexpr std::uint32_t GPDMA_C9SR_HTF_B_0x0 = 0;
        /** @brief an half transfer event occurred */
    constexpr std::uint32_t GPDMA_C9SR_HTF_B_0x1 = 1;

    /** @brief data transfer error flag */
    using GPDMA_C9SR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no data transfer error event (value: 0)
     *          - B_0x1: a master bus error event occurred on a data transfer (value: 1)
     */
        /** @brief no data transfer error event */
    constexpr std::uint32_t GPDMA_C9SR_DTEF_B_0x0 = 0;
        /** @brief a master bus error event occurred on a data transfer */
    constexpr std::uint32_t GPDMA_C9SR_DTEF_B_0x1 = 1;

    /** @brief update link transfer error flag */
    using GPDMA_C9SR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no update link transfer error event (value: 0)
     *          - B_0x1: a master bus error event occurred while updating a linked-list register from memory (value: 1)
     */
        /** @brief no update link transfer error event */
    constexpr std::uint32_t GPDMA_C9SR_ULEF_B_0x0 = 0;
        /** @brief a master bus error event occurred while updating a linked-list register from memory */
    constexpr std::uint32_t GPDMA_C9SR_ULEF_B_0x1 = 1;

    /** @brief user setting error flag */
    using GPDMA_C9SR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no user setting error event (value: 0)
     *          - B_0x1: a user setting error event occurred (value: 1)
     */
        /** @brief no user setting error event */
    constexpr std::uint32_t GPDMA_C9SR_USEF_B_0x0 = 0;
        /** @brief a user setting error event occurred */
    constexpr std::uint32_t GPDMA_C9SR_USEF_B_0x1 = 1;

    /** @brief completed suspension flag */
    using GPDMA_C9SR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no completed suspension event (value: 0)
     *          - B_0x1: a completed suspension event occurred (value: 1)
     */
        /** @brief no completed suspension event */
    constexpr std::uint32_t GPDMA_C9SR_SUSPF_B_0x0 = 0;
        /** @brief a completed suspension event occurred */
    constexpr std::uint32_t GPDMA_C9SR_SUSPF_B_0x1 = 1;

    /** @brief trigger overrun flag */
    using GPDMA_C9SR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no trigger overrun event (value: 0)
     *          - B_0x1: a trigger overrun event occurred (value: 1)
     */
        /** @brief no trigger overrun event */
    constexpr std::uint32_t GPDMA_C9SR_TOF_B_0x0 = 0;
        /** @brief a trigger overrun event occurred */
    constexpr std::uint32_t GPDMA_C9SR_TOF_B_0x1 = 1;

    /** @brief monitored FIFO level */
    using GPDMA_C9SR_FIFOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 9 control register */
    using GPDMA_C9CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4E4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief enable */
    using GPDMA_C9CR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write: ignored, read: channel disabled (value: 0)
     *          - B_0x1: write: enable channel, read: channel enabled (value: 1)
     */
        /** @brief write: ignored, read: channel disabled */
    constexpr std::uint32_t GPDMA_C9CR_EN_B_0x0 = 0;
        /** @brief write: enable channel, read: channel enabled */
    constexpr std::uint32_t GPDMA_C9CR_EN_B_0x1 = 1;

    /** @brief reset */
    using GPDMA_C9CR_RESET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no channel reset (value: 0)
     *          - B_0x1: channel reset (value: 1)
     */
        /** @brief no channel reset */
    constexpr std::uint32_t GPDMA_C9CR_RESET_B_0x0 = 0;
        /** @brief channel reset */
    constexpr std::uint32_t GPDMA_C9CR_RESET_B_0x1 = 1;

    /** @brief suspend */
    using GPDMA_C9CR_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write: resume channel, read: channel not suspended (value: 0)
     *          - B_0x1: write: suspend channel, read: channel suspended. (value: 1)
     */
        /** @brief write: resume channel, read: channel not suspended */
    constexpr std::uint32_t GPDMA_C9CR_SUSP_B_0x0 = 0;
        /** @brief write: suspend channel, read: channel suspended. */
    constexpr std::uint32_t GPDMA_C9CR_SUSP_B_0x1 = 1;

    /** @brief transfer complete interrupt enable */
    using GPDMA_C9CR_TCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C9CR_TCIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C9CR_TCIE_B_0x1 = 1;

    /** @brief half transfer complete interrupt enable */
    using GPDMA_C9CR_HTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C9CR_HTIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C9CR_HTIE_B_0x1 = 1;

    /** @brief data transfer error interrupt enable */
    using GPDMA_C9CR_DTEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C9CR_DTEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C9CR_DTEIE_B_0x1 = 1;

    /** @brief update link transfer error interrupt enable */
    using GPDMA_C9CR_ULEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C9CR_ULEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C9CR_ULEIE_B_0x1 = 1;

    /** @brief user setting error interrupt enable */
    using GPDMA_C9CR_USEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C9CR_USEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C9CR_USEIE_B_0x1 = 1;

    /** @brief completed suspension interrupt enable */
    using GPDMA_C9CR_SUSPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C9CR_SUSPIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C9CR_SUSPIE_B_0x1 = 1;

    /** @brief trigger overrun interrupt enable */
    using GPDMA_C9CR_TOIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C9CR_TOIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C9CR_TOIE_B_0x1 = 1;

    /** @brief Link step mode */
    using GPDMA_C9CR_LSM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: channel executed for the full linked-list and completed at the end of the last LLI (GPDMA_CxLLR=0). The 16 low-significant bits of the link address are null (LA[15:0]=0) and all the update bits are null (UT1=UB1=UT2=USA=UDA=ULL=0 and UT3=UB2=0 if present). Then GPDMA_CxBR1.BNDT[15:0]=0 and GPDMA_CxBR1.BRC[10:0]=0 if present. (value: 0)
     *          - B_0x1: channel executed once for the current LLI (value: 1)
     */
        /** @brief channel executed for the full linked-list and completed at the end of the last LLI (GPDMA_CxLLR=0). The 16 low-significant bits of the link address are null (LA[15:0]=0) and all the update bits are null (UT1=UB1=UT2=USA=UDA=ULL=0 and UT3=UB2=0 if present). Then GPDMA_CxBR1.BNDT[15:0]=0 and GPDMA_CxBR1.BRC[10:0]=0 if present. */
    constexpr std::uint32_t GPDMA_C9CR_LSM_B_0x0 = 0;
        /** @brief channel executed once for the current LLI */
    constexpr std::uint32_t GPDMA_C9CR_LSM_B_0x1 = 1;

    /** @brief linked-list allocated port */
    using GPDMA_C9CR_LAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C9CR_LAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C9CR_LAP_B_0x1 = 1;

    /** @brief priority level of the channel x GPDMA transfer versus others */
    using GPDMA_C9CR_PRIO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: low priority, low weight (value: 0)
     *          - B_0x1: low priority, mid weight (value: 1)
     *          - B_0x2: low priority, high weight (value: 2)
     *          - B_0x3: high priority (value: 3)
     */
        /** @brief low priority, low weight */
    constexpr std::uint32_t GPDMA_C9CR_PRIO_B_0x0 = 0;
        /** @brief low priority, mid weight */
    constexpr std::uint32_t GPDMA_C9CR_PRIO_B_0x1 = 1;
        /** @brief low priority, high weight */
    constexpr std::uint32_t GPDMA_C9CR_PRIO_B_0x2 = 2;
        /** @brief high priority */
    constexpr std::uint32_t GPDMA_C9CR_PRIO_B_0x3 = 3;

    /** @brief GPDMA channel 9 transfer register 1 */
    using GPDMA_C9TR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x510, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief binary logarithm of the source data width of a burst in bytes */
    using GPDMA_C9TR1_SDW_LOG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: byte (value: 0)
     *          - B_0x1: half-word (2 bytes) (value: 1)
     *          - B_0x2: word (4 bytes) (value: 2)
     *          - B_0x3: user setting error reported and no transfer issued (value: 3)
     */
        /** @brief byte */
    constexpr std::uint32_t GPDMA_C9TR1_SDW_LOG2_B_0x0 = 0;
        /** @brief half-word (2 bytes) */
    constexpr std::uint32_t GPDMA_C9TR1_SDW_LOG2_B_0x1 = 1;
        /** @brief word (4 bytes) */
    constexpr std::uint32_t GPDMA_C9TR1_SDW_LOG2_B_0x2 = 2;
        /** @brief user setting error reported and no transfer issued */
    constexpr std::uint32_t GPDMA_C9TR1_SDW_LOG2_B_0x3 = 3;

    /** @brief source incrementing burst */
    using GPDMA_C9TR1_SINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fixed burst (value: 0)
     *          - B_0x1: contiguously incremented burst (value: 1)
     */
        /** @brief fixed burst */
    constexpr std::uint32_t GPDMA_C9TR1_SINC_B_0x0 = 0;
        /** @brief contiguously incremented burst */
    constexpr std::uint32_t GPDMA_C9TR1_SINC_B_0x1 = 1;

    /** @brief source burst length minus 1, between 0 and 63 */
    using GPDMA_C9TR1_SBL_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief padding/alignment mode */
    using GPDMA_C9TR1_PAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: source data is transferred as right aligned, padded with 0s up to the destination data width (value: 0)
     *          - B_0x1: source data is transferred as right aligned, sign extended up to the destination data width (value: 1)
     */
        /** @brief source data is transferred as right aligned, padded with 0s up to the destination data width */
    constexpr std::uint32_t GPDMA_C9TR1_PAM_B_0x0 = 0;
        /** @brief source data is transferred as right aligned, sign extended up to the destination data width */
    constexpr std::uint32_t GPDMA_C9TR1_PAM_B_0x1 = 1;

    /** @brief source byte exchange within the unaligned half-word of each source word */
    using GPDMA_C9TR1_SBX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no byte-based exchange within the unaligned half-word of each source word (value: 0)
     *          - B_0x1: the two consecutive bytes within the unaligned half-word of each source word are exchanged. (value: 1)
     */
        /** @brief no byte-based exchange within the unaligned half-word of each source word */
    constexpr std::uint32_t GPDMA_C9TR1_SBX_B_0x0 = 0;
        /** @brief the two consecutive bytes within the unaligned half-word of each source word are exchanged. */
    constexpr std::uint32_t GPDMA_C9TR1_SBX_B_0x1 = 1;

    /** @brief source allocated port */
    using GPDMA_C9TR1_SAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C9TR1_SAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C9TR1_SAP_B_0x1 = 1;

    /** @brief security attribute of the GPDMA transfer from the source */
    using GPDMA_C9TR1_SSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPDMA transfer non-secure (value: 0)
     *          - B_0x1: GPDMA transfer secure (value: 1)
     */
        /** @brief GPDMA transfer non-secure */
    constexpr std::uint32_t GPDMA_C9TR1_SSEC_B_0x0 = 0;
        /** @brief GPDMA transfer secure */
    constexpr std::uint32_t GPDMA_C9TR1_SSEC_B_0x1 = 1;

    /** @brief binary logarithm of the destination data width of a burst, in bytes */
    using GPDMA_C9TR1_DDW_LOG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: byte (value: 0)
     *          - B_0x1: half-word (2 bytes) (value: 1)
     *          - B_0x2: word (4 bytes) (value: 2)
     *          - B_0x3: user setting error reported and no transfer issued (value: 3)
     */
        /** @brief byte */
    constexpr std::uint32_t GPDMA_C9TR1_DDW_LOG2_B_0x0 = 0;
        /** @brief half-word (2 bytes) */
    constexpr std::uint32_t GPDMA_C9TR1_DDW_LOG2_B_0x1 = 1;
        /** @brief word (4 bytes) */
    constexpr std::uint32_t GPDMA_C9TR1_DDW_LOG2_B_0x2 = 2;
        /** @brief user setting error reported and no transfer issued */
    constexpr std::uint32_t GPDMA_C9TR1_DDW_LOG2_B_0x3 = 3;

    /** @brief destination incrementing burst */
    using GPDMA_C9TR1_DINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fixed burst (value: 0)
     *          - B_0x1: contiguously incremented burst (value: 1)
     */
        /** @brief fixed burst */
    constexpr std::uint32_t GPDMA_C9TR1_DINC_B_0x0 = 0;
        /** @brief contiguously incremented burst */
    constexpr std::uint32_t GPDMA_C9TR1_DINC_B_0x1 = 1;

    /** @brief destination burst length minus 1, between 0 and 63 */
    using GPDMA_C9TR1_DBL_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination byte exchange */
    using GPDMA_C9TR1_DBX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no byte-based exchange within half-word (value: 0)
     *          - B_0x1: the two consecutive (post PAM) bytes are exchanged in each destination half-word. (value: 1)
     */
        /** @brief no byte-based exchange within half-word */
    constexpr std::uint32_t GPDMA_C9TR1_DBX_B_0x0 = 0;
        /** @brief the two consecutive (post PAM) bytes are exchanged in each destination half-word. */
    constexpr std::uint32_t GPDMA_C9TR1_DBX_B_0x1 = 1;

    /** @brief destination half-word exchange */
    using GPDMA_C9TR1_DHX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no halfword-based exchanged within word (value: 0)
     *          - B_0x1: the two consecutive (post PAM) half-words are exchanged in each destination word. (value: 1)
     */
        /** @brief no halfword-based exchanged within word */
    constexpr std::uint32_t GPDMA_C9TR1_DHX_B_0x0 = 0;
        /** @brief the two consecutive (post PAM) half-words are exchanged in each destination word. */
    constexpr std::uint32_t GPDMA_C9TR1_DHX_B_0x1 = 1;

    /** @brief destination allocated port */
    using GPDMA_C9TR1_DAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C9TR1_DAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C9TR1_DAP_B_0x1 = 1;

    /** @brief security attribute of the GPDMA transfer to the destination */
    using GPDMA_C9TR1_DSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPDMA transfer non-secure (value: 0)
     *          - B_0x1: GPDMA transfer secure (value: 1)
     */
        /** @brief GPDMA transfer non-secure */
    constexpr std::uint32_t GPDMA_C9TR1_DSEC_B_0x0 = 0;
        /** @brief GPDMA transfer secure */
    constexpr std::uint32_t GPDMA_C9TR1_DSEC_B_0x1 = 1;

    /** @brief GPDMA channel 9 transfer register 2 */
    using GPDMA_C9TR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x514, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA hardware request selection */
    using GPDMA_C9TR2_REQSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief software request */
    using GPDMA_C9TR2_SWREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no software request. The selected hardware request REQSEL[6:0] is taken into account. (value: 0)
     *          - B_0x1: software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[6:0] is ignored. (value: 1)
     */
        /** @brief no software request. The selected hardware request REQSEL[6:0] is taken into account. */
    constexpr std::uint32_t GPDMA_C9TR2_SWREQ_B_0x0 = 0;
        /** @brief software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[6:0] is ignored. */
    constexpr std::uint32_t GPDMA_C9TR2_SWREQ_B_0x1 = 1;

    /** @brief destination hardware request */
    using GPDMA_C9TR2_DREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: selected hardware request driven by a source peripheral (request signal taken into account by the GPDMA transfer scheduler over the source/read port) (value: 0)
     *          - B_0x1: selected hardware request driven by a destination peripheral (request signal taken into account by the GPDMA transfer scheduler over the destination/write port) (value: 1)
     */
        /** @brief selected hardware request driven by a source peripheral (request signal taken into account by the GPDMA transfer scheduler over the source/read port) */
    constexpr std::uint32_t GPDMA_C9TR2_DREQ_B_0x0 = 0;
        /** @brief selected hardware request driven by a destination peripheral (request signal taken into account by the GPDMA transfer scheduler over the destination/write port) */
    constexpr std::uint32_t GPDMA_C9TR2_DREQ_B_0x1 = 1;

    /** @brief Block hardware request */
    using GPDMA_C9TR2_BREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a burst level. (value: 0)
     *          - B_0x1: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see ). (value: 1)
     */
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a burst level. */
    constexpr std::uint32_t GPDMA_C9TR2_BREQ_B_0x0 = 0;
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see ). */
    constexpr std::uint32_t GPDMA_C9TR2_BREQ_B_0x1 = 1;

    /** @brief trigger mode */
    using GPDMA_C9TR2_TRIGM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: at block level: the first burst read of each block transfer is conditioned by one hit trigger (channel x = 12 to 15, for each block if a 2D/repeated block is configured with GPDMA_CxBR1.BRC[10:0] different to 0). (value: 0)
     *          - B_0x1: channel x = 0 to 11, same as 00; channel x=12 to 15, at 2D/repeated block level, the (value: 1)
     *          - B_0x2: at link level: a LLI link transfer is conditioned by one hit trigger. The LLI data transfer (if any) is not conditioned. (value: 2)
     *          - B_0x3: at programmed burst level: If SWREQ = 1, each programmed burst read is conditioned by one hit trigger. If SWREQ=0, each programmed burst that is requested by the selected peripheral, is conditioned by one hit trigger. (value: 3)
     */
        /** @brief at block level: the first burst read of each block transfer is conditioned by one hit trigger (channel x = 12 to 15, for each block if a 2D/repeated block is configured with GPDMA_CxBR1.BRC[10:0] different to 0). */
    constexpr std::uint32_t GPDMA_C9TR2_TRIGM_B_0x0 = 0;
        /** @brief channel x = 0 to 11, same as 00; channel x=12 to 15, at 2D/repeated block level, the */
    constexpr std::uint32_t GPDMA_C9TR2_TRIGM_B_0x1 = 1;
        /** @brief at link level: a LLI link transfer is conditioned by one hit trigger. The LLI data transfer (if any) is not conditioned. */
    constexpr std::uint32_t GPDMA_C9TR2_TRIGM_B_0x2 = 2;
        /** @brief at programmed burst level: If SWREQ = 1, each programmed burst read is conditioned by one hit trigger. If SWREQ=0, each programmed burst that is requested by the selected peripheral, is conditioned by one hit trigger. */
    constexpr std::uint32_t GPDMA_C9TR2_TRIGM_B_0x3 = 3;

    /** @brief trigger event input selection */
    using GPDMA_C9TR2_TRIGSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief trigger event polarity */
    using GPDMA_C9TR2_TRIGPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no trigger (masked trigger event) (value: 0)
     *          - B_0x1: trigger on the rising edge (value: 1)
     *          - B_0x2: trigger on the falling edge (value: 2)
     *          - B_0x3: same as 00 (value: 3)
     */
        /** @brief no trigger (masked trigger event) */
    constexpr std::uint32_t GPDMA_C9TR2_TRIGPOL_B_0x0 = 0;
        /** @brief trigger on the rising edge */
    constexpr std::uint32_t GPDMA_C9TR2_TRIGPOL_B_0x1 = 1;
        /** @brief trigger on the falling edge */
    constexpr std::uint32_t GPDMA_C9TR2_TRIGPOL_B_0x2 = 2;
        /** @brief same as 00 */
    constexpr std::uint32_t GPDMA_C9TR2_TRIGPOL_B_0x3 = 3;

    /** @brief transfer complete event mode */
    using GPDMA_C9TR2_TCEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: at block level (when GPDMA_CxBR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. (value: 0)
     *          - B_0x1: channel x = 0 to 11, same as 00; channel x=12 to 15, at 2D/repeated block level (when GPDMA_CxBR1.BRC[10:0]= 0 and GPDMA_CxBR1.BNDT[15:0]= 0), the complete (and the half) transfer event is generated at the end (respectively half of the end) of the 2D/repeated block. (value: 1)
     *          - B_0x2: at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer (the LLI data transfer being a block transfer or a 2D/repeated block transfer for channel x = 12 to 15), if any data transfer. (value: 2)
     *          - B_0x3: at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address GPDMA_CxLLR.LA[15:2] to zero and clears all the GPDMA_CxLLR update bits (UT1, UT2, UB1, USA, UDA and ULL, plus UT3 and UB2 if present). If the channel transfer is continuous/infinite, no event is generated. (value: 3)
     */
        /** @brief at block level (when GPDMA_CxBR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. */
    constexpr std::uint32_t GPDMA_C9TR2_TCEM_B_0x0 = 0;
        /** @brief channel x = 0 to 11, same as 00; channel x=12 to 15, at 2D/repeated block level (when GPDMA_CxBR1.BRC[10:0]= 0 and GPDMA_CxBR1.BNDT[15:0]= 0), the complete (and the half) transfer event is generated at the end (respectively half of the end) of the 2D/repeated block. */
    constexpr std::uint32_t GPDMA_C9TR2_TCEM_B_0x1 = 1;
        /** @brief at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer (the LLI data transfer being a block transfer or a 2D/repeated block transfer for channel x = 12 to 15), if any data transfer. */
    constexpr std::uint32_t GPDMA_C9TR2_TCEM_B_0x2 = 2;
        /** @brief at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address GPDMA_CxLLR.LA[15:2] to zero and clears all the GPDMA_CxLLR update bits (UT1, UT2, UB1, USA, UDA and ULL, plus UT3 and UB2 if present). If the channel transfer is continuous/infinite, no event is generated. */
    constexpr std::uint32_t GPDMA_C9TR2_TCEM_B_0x3 = 3;

    /** @brief GPDMA channel 9 block register 1 */
    using GPDMA_C9BR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x518, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief block number of data bytes to transfer from the source */
    using GPDMA_C9BR1_BNDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 9 source address register */
    using GPDMA_C9SAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x51C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief source address */
    using GPDMA_C9SAR_SA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 9 destination address register */
    using GPDMA_C9DAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x520, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination address */
    using GPDMA_C9DAR_DA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 9 linked-list address register */
    using GPDMA_C9LLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x54C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pointer (16-bit low-significant address) to the next linked-list data structure */
    using GPDMA_C9LLR_LA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxLLR register from memory */
    using GPDMA_C9LLR_ULL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxLLR update (value: 0)
     *          - B_0x1: GPDMA_CxLLR update (value: 1)
     */
        /** @brief no GPDMA_CxLLR update */
    constexpr std::uint32_t GPDMA_C9LLR_ULL_B_0x0 = 0;
        /** @brief GPDMA_CxLLR update */
    constexpr std::uint32_t GPDMA_C9LLR_ULL_B_0x1 = 1;

    /** @brief Update GPDMA_CxDAR register from memory */
    using GPDMA_C9LLR_UDA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxDAR update (value: 0)
     *          - B_0x1: GPDMA_CxDAR update (value: 1)
     */
        /** @brief no GPDMA_CxDAR update */
    constexpr std::uint32_t GPDMA_C9LLR_UDA_B_0x0 = 0;
        /** @brief GPDMA_CxDAR update */
    constexpr std::uint32_t GPDMA_C9LLR_UDA_B_0x1 = 1;

    /** @brief update GPDMA_CxSAR from memory */
    using GPDMA_C9LLR_USA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxSAR update (value: 0)
     *          - B_0x1: GPDMA_CxSAR update (value: 1)
     */
        /** @brief no GPDMA_CxSAR update */
    constexpr std::uint32_t GPDMA_C9LLR_USA_B_0x0 = 0;
        /** @brief GPDMA_CxSAR update */
    constexpr std::uint32_t GPDMA_C9LLR_USA_B_0x1 = 1;

    /** @brief Update GPDMA_CxBR1 from memory */
    using GPDMA_C9LLR_UB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxBR1 update from memory (GPDMA_CxBR1.BNDT[15:0] restored if any link transfer) (value: 0)
     *          - B_0x1: GPDMA_CxBR1 update (value: 1)
     */
        /** @brief no GPDMA_CxBR1 update from memory (GPDMA_CxBR1.BNDT[15:0] restored if any link transfer) */
    constexpr std::uint32_t GPDMA_C9LLR_UB1_B_0x0 = 0;
        /** @brief GPDMA_CxBR1 update */
    constexpr std::uint32_t GPDMA_C9LLR_UB1_B_0x1 = 1;

    /** @brief Update GPDMA_CxTR2 from memory */
    using GPDMA_C9LLR_UT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxTR2 update (value: 0)
     *          - B_0x1: GPDMA_CxTR2 update (value: 1)
     */
        /** @brief no GPDMA_CxTR2 update */
    constexpr std::uint32_t GPDMA_C9LLR_UT2_B_0x0 = 0;
        /** @brief GPDMA_CxTR2 update */
    constexpr std::uint32_t GPDMA_C9LLR_UT2_B_0x1 = 1;

    /** @brief Update GPDMA_CxTR1 from memory */
    using GPDMA_C9LLR_UT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxTR1 update (value: 0)
     *          - B_0x1: GPDMA_CxTR1 update (value: 1)
     */
        /** @brief no GPDMA_CxTR1 update */
    constexpr std::uint32_t GPDMA_C9LLR_UT1_B_0x0 = 0;
        /** @brief GPDMA_CxTR1 update */
    constexpr std::uint32_t GPDMA_C9LLR_UT1_B_0x1 = 1;

    /** @brief GPDMA channel 10 linked-list base address register */
    using GPDMA_C10LBAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x550, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief linked-list base address of GPDMA channel x */
    using GPDMA_C10LBAR_LBA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 10 flag clear register */
    using GPDMA_C10FCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x55C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transfer complete flag clear */
    using GPDMA_C10FCR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding TCF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C10FCR_TCF_B_0x0 = 0;
        /** @brief corresponding TCF flag cleared */
    constexpr std::uint32_t GPDMA_C10FCR_TCF_B_0x1 = 1;

    /** @brief half transfer flag clear */
    using GPDMA_C10FCR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding HTF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C10FCR_HTF_B_0x0 = 0;
        /** @brief corresponding HTF flag cleared */
    constexpr std::uint32_t GPDMA_C10FCR_HTF_B_0x1 = 1;

    /** @brief data transfer error flag clear */
    using GPDMA_C10FCR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding DTEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C10FCR_DTEF_B_0x0 = 0;
        /** @brief corresponding DTEF flag cleared */
    constexpr std::uint32_t GPDMA_C10FCR_DTEF_B_0x1 = 1;

    /** @brief update link transfer error flag clear */
    using GPDMA_C10FCR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding ULEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C10FCR_ULEF_B_0x0 = 0;
        /** @brief corresponding ULEF flag cleared */
    constexpr std::uint32_t GPDMA_C10FCR_ULEF_B_0x1 = 1;

    /** @brief user setting error flag clear */
    using GPDMA_C10FCR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding USEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C10FCR_USEF_B_0x0 = 0;
        /** @brief corresponding USEF flag cleared */
    constexpr std::uint32_t GPDMA_C10FCR_USEF_B_0x1 = 1;

    /** @brief completed suspension flag clear */
    using GPDMA_C10FCR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding SUSPF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C10FCR_SUSPF_B_0x0 = 0;
        /** @brief corresponding SUSPF flag cleared */
    constexpr std::uint32_t GPDMA_C10FCR_SUSPF_B_0x1 = 1;

    /** @brief trigger overrun flag clear */
    using GPDMA_C10FCR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding TOF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C10FCR_TOF_B_0x0 = 0;
        /** @brief corresponding TOF flag cleared */
    constexpr std::uint32_t GPDMA_C10FCR_TOF_B_0x1 = 1;

    /** @brief GPDMA channel 10 status register */
    using GPDMA_C10SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x560, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief idle flag */
    using GPDMA_C10SR_IDLEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: channel not in idle state (value: 0)
     *          - B_0x1: channel in idle state (value: 1)
     */
        /** @brief channel not in idle state */
    constexpr std::uint32_t GPDMA_C10SR_IDLEF_B_0x0 = 0;
        /** @brief channel in idle state */
    constexpr std::uint32_t GPDMA_C10SR_IDLEF_B_0x1 = 1;

    /** @brief transfer complete flag */
    using GPDMA_C10SR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no transfer complete event (value: 0)
     *          - B_0x1: a transfer complete event occurred (value: 1)
     */
        /** @brief no transfer complete event */
    constexpr std::uint32_t GPDMA_C10SR_TCF_B_0x0 = 0;
        /** @brief a transfer complete event occurred */
    constexpr std::uint32_t GPDMA_C10SR_TCF_B_0x1 = 1;

    /** @brief half transfer flag */
    using GPDMA_C10SR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no half transfer event (value: 0)
     *          - B_0x1: an half transfer event occurred (value: 1)
     */
        /** @brief no half transfer event */
    constexpr std::uint32_t GPDMA_C10SR_HTF_B_0x0 = 0;
        /** @brief an half transfer event occurred */
    constexpr std::uint32_t GPDMA_C10SR_HTF_B_0x1 = 1;

    /** @brief data transfer error flag */
    using GPDMA_C10SR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no data transfer error event (value: 0)
     *          - B_0x1: a master bus error event occurred on a data transfer (value: 1)
     */
        /** @brief no data transfer error event */
    constexpr std::uint32_t GPDMA_C10SR_DTEF_B_0x0 = 0;
        /** @brief a master bus error event occurred on a data transfer */
    constexpr std::uint32_t GPDMA_C10SR_DTEF_B_0x1 = 1;

    /** @brief update link transfer error flag */
    using GPDMA_C10SR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no update link transfer error event (value: 0)
     *          - B_0x1: a master bus error event occurred while updating a linked-list register from memory (value: 1)
     */
        /** @brief no update link transfer error event */
    constexpr std::uint32_t GPDMA_C10SR_ULEF_B_0x0 = 0;
        /** @brief a master bus error event occurred while updating a linked-list register from memory */
    constexpr std::uint32_t GPDMA_C10SR_ULEF_B_0x1 = 1;

    /** @brief user setting error flag */
    using GPDMA_C10SR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no user setting error event (value: 0)
     *          - B_0x1: a user setting error event occurred (value: 1)
     */
        /** @brief no user setting error event */
    constexpr std::uint32_t GPDMA_C10SR_USEF_B_0x0 = 0;
        /** @brief a user setting error event occurred */
    constexpr std::uint32_t GPDMA_C10SR_USEF_B_0x1 = 1;

    /** @brief completed suspension flag */
    using GPDMA_C10SR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no completed suspension event (value: 0)
     *          - B_0x1: a completed suspension event occurred (value: 1)
     */
        /** @brief no completed suspension event */
    constexpr std::uint32_t GPDMA_C10SR_SUSPF_B_0x0 = 0;
        /** @brief a completed suspension event occurred */
    constexpr std::uint32_t GPDMA_C10SR_SUSPF_B_0x1 = 1;

    /** @brief trigger overrun flag */
    using GPDMA_C10SR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no trigger overrun event (value: 0)
     *          - B_0x1: a trigger overrun event occurred (value: 1)
     */
        /** @brief no trigger overrun event */
    constexpr std::uint32_t GPDMA_C10SR_TOF_B_0x0 = 0;
        /** @brief a trigger overrun event occurred */
    constexpr std::uint32_t GPDMA_C10SR_TOF_B_0x1 = 1;

    /** @brief monitored FIFO level */
    using GPDMA_C10SR_FIFOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 10 control register */
    using GPDMA_C10CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x564, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief enable */
    using GPDMA_C10CR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write: ignored, read: channel disabled (value: 0)
     *          - B_0x1: write: enable channel, read: channel enabled (value: 1)
     */
        /** @brief write: ignored, read: channel disabled */
    constexpr std::uint32_t GPDMA_C10CR_EN_B_0x0 = 0;
        /** @brief write: enable channel, read: channel enabled */
    constexpr std::uint32_t GPDMA_C10CR_EN_B_0x1 = 1;

    /** @brief reset */
    using GPDMA_C10CR_RESET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no channel reset (value: 0)
     *          - B_0x1: channel reset (value: 1)
     */
        /** @brief no channel reset */
    constexpr std::uint32_t GPDMA_C10CR_RESET_B_0x0 = 0;
        /** @brief channel reset */
    constexpr std::uint32_t GPDMA_C10CR_RESET_B_0x1 = 1;

    /** @brief suspend */
    using GPDMA_C10CR_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write: resume channel, read: channel not suspended (value: 0)
     *          - B_0x1: write: suspend channel, read: channel suspended. (value: 1)
     */
        /** @brief write: resume channel, read: channel not suspended */
    constexpr std::uint32_t GPDMA_C10CR_SUSP_B_0x0 = 0;
        /** @brief write: suspend channel, read: channel suspended. */
    constexpr std::uint32_t GPDMA_C10CR_SUSP_B_0x1 = 1;

    /** @brief transfer complete interrupt enable */
    using GPDMA_C10CR_TCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C10CR_TCIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C10CR_TCIE_B_0x1 = 1;

    /** @brief half transfer complete interrupt enable */
    using GPDMA_C10CR_HTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C10CR_HTIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C10CR_HTIE_B_0x1 = 1;

    /** @brief data transfer error interrupt enable */
    using GPDMA_C10CR_DTEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C10CR_DTEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C10CR_DTEIE_B_0x1 = 1;

    /** @brief update link transfer error interrupt enable */
    using GPDMA_C10CR_ULEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C10CR_ULEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C10CR_ULEIE_B_0x1 = 1;

    /** @brief user setting error interrupt enable */
    using GPDMA_C10CR_USEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C10CR_USEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C10CR_USEIE_B_0x1 = 1;

    /** @brief completed suspension interrupt enable */
    using GPDMA_C10CR_SUSPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C10CR_SUSPIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C10CR_SUSPIE_B_0x1 = 1;

    /** @brief trigger overrun interrupt enable */
    using GPDMA_C10CR_TOIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C10CR_TOIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C10CR_TOIE_B_0x1 = 1;

    /** @brief Link step mode */
    using GPDMA_C10CR_LSM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: channel executed for the full linked-list and completed at the end of the last LLI (GPDMA_CxLLR=0). The 16 low-significant bits of the link address are null (LA[15:0]=0) and all the update bits are null (UT1=UB1=UT2=USA=UDA=ULL=0 and UT3=UB2=0 if present). Then GPDMA_CxBR1.BNDT[15:0]=0 and GPDMA_CxBR1.BRC[10:0]=0 if present. (value: 0)
     *          - B_0x1: channel executed once for the current LLI (value: 1)
     */
        /** @brief channel executed for the full linked-list and completed at the end of the last LLI (GPDMA_CxLLR=0). The 16 low-significant bits of the link address are null (LA[15:0]=0) and all the update bits are null (UT1=UB1=UT2=USA=UDA=ULL=0 and UT3=UB2=0 if present). Then GPDMA_CxBR1.BNDT[15:0]=0 and GPDMA_CxBR1.BRC[10:0]=0 if present. */
    constexpr std::uint32_t GPDMA_C10CR_LSM_B_0x0 = 0;
        /** @brief channel executed once for the current LLI */
    constexpr std::uint32_t GPDMA_C10CR_LSM_B_0x1 = 1;

    /** @brief linked-list allocated port */
    using GPDMA_C10CR_LAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C10CR_LAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C10CR_LAP_B_0x1 = 1;

    /** @brief priority level of the channel x GPDMA transfer versus others */
    using GPDMA_C10CR_PRIO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: low priority, low weight (value: 0)
     *          - B_0x1: low priority, mid weight (value: 1)
     *          - B_0x2: low priority, high weight (value: 2)
     *          - B_0x3: high priority (value: 3)
     */
        /** @brief low priority, low weight */
    constexpr std::uint32_t GPDMA_C10CR_PRIO_B_0x0 = 0;
        /** @brief low priority, mid weight */
    constexpr std::uint32_t GPDMA_C10CR_PRIO_B_0x1 = 1;
        /** @brief low priority, high weight */
    constexpr std::uint32_t GPDMA_C10CR_PRIO_B_0x2 = 2;
        /** @brief high priority */
    constexpr std::uint32_t GPDMA_C10CR_PRIO_B_0x3 = 3;

    /** @brief GPDMA channel 10 transfer register 1 */
    using GPDMA_C10TR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x590, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief binary logarithm of the source data width of a burst in bytes */
    using GPDMA_C10TR1_SDW_LOG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: byte (value: 0)
     *          - B_0x1: half-word (2 bytes) (value: 1)
     *          - B_0x2: word (4 bytes) (value: 2)
     *          - B_0x3: user setting error reported and no transfer issued (value: 3)
     */
        /** @brief byte */
    constexpr std::uint32_t GPDMA_C10TR1_SDW_LOG2_B_0x0 = 0;
        /** @brief half-word (2 bytes) */
    constexpr std::uint32_t GPDMA_C10TR1_SDW_LOG2_B_0x1 = 1;
        /** @brief word (4 bytes) */
    constexpr std::uint32_t GPDMA_C10TR1_SDW_LOG2_B_0x2 = 2;
        /** @brief user setting error reported and no transfer issued */
    constexpr std::uint32_t GPDMA_C10TR1_SDW_LOG2_B_0x3 = 3;

    /** @brief source incrementing burst */
    using GPDMA_C10TR1_SINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fixed burst (value: 0)
     *          - B_0x1: contiguously incremented burst (value: 1)
     */
        /** @brief fixed burst */
    constexpr std::uint32_t GPDMA_C10TR1_SINC_B_0x0 = 0;
        /** @brief contiguously incremented burst */
    constexpr std::uint32_t GPDMA_C10TR1_SINC_B_0x1 = 1;

    /** @brief source burst length minus 1, between 0 and 63 */
    using GPDMA_C10TR1_SBL_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief padding/alignment mode */
    using GPDMA_C10TR1_PAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: source data is transferred as right aligned, padded with 0s up to the destination data width (value: 0)
     *          - B_0x1: source data is transferred as right aligned, sign extended up to the destination data width (value: 1)
     */
        /** @brief source data is transferred as right aligned, padded with 0s up to the destination data width */
    constexpr std::uint32_t GPDMA_C10TR1_PAM_B_0x0 = 0;
        /** @brief source data is transferred as right aligned, sign extended up to the destination data width */
    constexpr std::uint32_t GPDMA_C10TR1_PAM_B_0x1 = 1;

    /** @brief source byte exchange within the unaligned half-word of each source word */
    using GPDMA_C10TR1_SBX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no byte-based exchange within the unaligned half-word of each source word (value: 0)
     *          - B_0x1: the two consecutive bytes within the unaligned half-word of each source word are exchanged. (value: 1)
     */
        /** @brief no byte-based exchange within the unaligned half-word of each source word */
    constexpr std::uint32_t GPDMA_C10TR1_SBX_B_0x0 = 0;
        /** @brief the two consecutive bytes within the unaligned half-word of each source word are exchanged. */
    constexpr std::uint32_t GPDMA_C10TR1_SBX_B_0x1 = 1;

    /** @brief source allocated port */
    using GPDMA_C10TR1_SAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C10TR1_SAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C10TR1_SAP_B_0x1 = 1;

    /** @brief security attribute of the GPDMA transfer from the source */
    using GPDMA_C10TR1_SSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPDMA transfer non-secure (value: 0)
     *          - B_0x1: GPDMA transfer secure (value: 1)
     */
        /** @brief GPDMA transfer non-secure */
    constexpr std::uint32_t GPDMA_C10TR1_SSEC_B_0x0 = 0;
        /** @brief GPDMA transfer secure */
    constexpr std::uint32_t GPDMA_C10TR1_SSEC_B_0x1 = 1;

    /** @brief binary logarithm of the destination data width of a burst, in bytes */
    using GPDMA_C10TR1_DDW_LOG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: byte (value: 0)
     *          - B_0x1: half-word (2 bytes) (value: 1)
     *          - B_0x2: word (4 bytes) (value: 2)
     *          - B_0x3: user setting error reported and no transfer issued (value: 3)
     */
        /** @brief byte */
    constexpr std::uint32_t GPDMA_C10TR1_DDW_LOG2_B_0x0 = 0;
        /** @brief half-word (2 bytes) */
    constexpr std::uint32_t GPDMA_C10TR1_DDW_LOG2_B_0x1 = 1;
        /** @brief word (4 bytes) */
    constexpr std::uint32_t GPDMA_C10TR1_DDW_LOG2_B_0x2 = 2;
        /** @brief user setting error reported and no transfer issued */
    constexpr std::uint32_t GPDMA_C10TR1_DDW_LOG2_B_0x3 = 3;

    /** @brief destination incrementing burst */
    using GPDMA_C10TR1_DINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fixed burst (value: 0)
     *          - B_0x1: contiguously incremented burst (value: 1)
     */
        /** @brief fixed burst */
    constexpr std::uint32_t GPDMA_C10TR1_DINC_B_0x0 = 0;
        /** @brief contiguously incremented burst */
    constexpr std::uint32_t GPDMA_C10TR1_DINC_B_0x1 = 1;

    /** @brief destination burst length minus 1, between 0 and 63 */
    using GPDMA_C10TR1_DBL_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination byte exchange */
    using GPDMA_C10TR1_DBX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no byte-based exchange within half-word (value: 0)
     *          - B_0x1: the two consecutive (post PAM) bytes are exchanged in each destination half-word. (value: 1)
     */
        /** @brief no byte-based exchange within half-word */
    constexpr std::uint32_t GPDMA_C10TR1_DBX_B_0x0 = 0;
        /** @brief the two consecutive (post PAM) bytes are exchanged in each destination half-word. */
    constexpr std::uint32_t GPDMA_C10TR1_DBX_B_0x1 = 1;

    /** @brief destination half-word exchange */
    using GPDMA_C10TR1_DHX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no halfword-based exchanged within word (value: 0)
     *          - B_0x1: the two consecutive (post PAM) half-words are exchanged in each destination word. (value: 1)
     */
        /** @brief no halfword-based exchanged within word */
    constexpr std::uint32_t GPDMA_C10TR1_DHX_B_0x0 = 0;
        /** @brief the two consecutive (post PAM) half-words are exchanged in each destination word. */
    constexpr std::uint32_t GPDMA_C10TR1_DHX_B_0x1 = 1;

    /** @brief destination allocated port */
    using GPDMA_C10TR1_DAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C10TR1_DAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C10TR1_DAP_B_0x1 = 1;

    /** @brief security attribute of the GPDMA transfer to the destination */
    using GPDMA_C10TR1_DSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPDMA transfer non-secure (value: 0)
     *          - B_0x1: GPDMA transfer secure (value: 1)
     */
        /** @brief GPDMA transfer non-secure */
    constexpr std::uint32_t GPDMA_C10TR1_DSEC_B_0x0 = 0;
        /** @brief GPDMA transfer secure */
    constexpr std::uint32_t GPDMA_C10TR1_DSEC_B_0x1 = 1;

    /** @brief GPDMA channel 10 transfer register 2 */
    using GPDMA_C10TR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x594, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA hardware request selection */
    using GPDMA_C10TR2_REQSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief software request */
    using GPDMA_C10TR2_SWREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no software request. The selected hardware request REQSEL[6:0] is taken into account. (value: 0)
     *          - B_0x1: software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[6:0] is ignored. (value: 1)
     */
        /** @brief no software request. The selected hardware request REQSEL[6:0] is taken into account. */
    constexpr std::uint32_t GPDMA_C10TR2_SWREQ_B_0x0 = 0;
        /** @brief software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[6:0] is ignored. */
    constexpr std::uint32_t GPDMA_C10TR2_SWREQ_B_0x1 = 1;

    /** @brief destination hardware request */
    using GPDMA_C10TR2_DREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: selected hardware request driven by a source peripheral (request signal taken into account by the GPDMA transfer scheduler over the source/read port) (value: 0)
     *          - B_0x1: selected hardware request driven by a destination peripheral (request signal taken into account by the GPDMA transfer scheduler over the destination/write port) (value: 1)
     */
        /** @brief selected hardware request driven by a source peripheral (request signal taken into account by the GPDMA transfer scheduler over the source/read port) */
    constexpr std::uint32_t GPDMA_C10TR2_DREQ_B_0x0 = 0;
        /** @brief selected hardware request driven by a destination peripheral (request signal taken into account by the GPDMA transfer scheduler over the destination/write port) */
    constexpr std::uint32_t GPDMA_C10TR2_DREQ_B_0x1 = 1;

    /** @brief Block hardware request */
    using GPDMA_C10TR2_BREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a burst level. (value: 0)
     *          - B_0x1: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see ). (value: 1)
     */
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a burst level. */
    constexpr std::uint32_t GPDMA_C10TR2_BREQ_B_0x0 = 0;
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see ). */
    constexpr std::uint32_t GPDMA_C10TR2_BREQ_B_0x1 = 1;

    /** @brief trigger mode */
    using GPDMA_C10TR2_TRIGM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: at block level: the first burst read of each block transfer is conditioned by one hit trigger (channel x = 12 to 15, for each block if a 2D/repeated block is configured with GPDMA_CxBR1.BRC[10:0] different to 0). (value: 0)
     *          - B_0x1: channel x = 0 to 11, same as 00; channel x=12 to 15, at 2D/repeated block level, the (value: 1)
     *          - B_0x2: at link level: a LLI link transfer is conditioned by one hit trigger. The LLI data transfer (if any) is not conditioned. (value: 2)
     *          - B_0x3: at programmed burst level: If SWREQ = 1, each programmed burst read is conditioned by one hit trigger. If SWREQ=0, each programmed burst that is requested by the selected peripheral, is conditioned by one hit trigger. (value: 3)
     */
        /** @brief at block level: the first burst read of each block transfer is conditioned by one hit trigger (channel x = 12 to 15, for each block if a 2D/repeated block is configured with GPDMA_CxBR1.BRC[10:0] different to 0). */
    constexpr std::uint32_t GPDMA_C10TR2_TRIGM_B_0x0 = 0;
        /** @brief channel x = 0 to 11, same as 00; channel x=12 to 15, at 2D/repeated block level, the */
    constexpr std::uint32_t GPDMA_C10TR2_TRIGM_B_0x1 = 1;
        /** @brief at link level: a LLI link transfer is conditioned by one hit trigger. The LLI data transfer (if any) is not conditioned. */
    constexpr std::uint32_t GPDMA_C10TR2_TRIGM_B_0x2 = 2;
        /** @brief at programmed burst level: If SWREQ = 1, each programmed burst read is conditioned by one hit trigger. If SWREQ=0, each programmed burst that is requested by the selected peripheral, is conditioned by one hit trigger. */
    constexpr std::uint32_t GPDMA_C10TR2_TRIGM_B_0x3 = 3;

    /** @brief trigger event input selection */
    using GPDMA_C10TR2_TRIGSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief trigger event polarity */
    using GPDMA_C10TR2_TRIGPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no trigger (masked trigger event) (value: 0)
     *          - B_0x1: trigger on the rising edge (value: 1)
     *          - B_0x2: trigger on the falling edge (value: 2)
     *          - B_0x3: same as 00 (value: 3)
     */
        /** @brief no trigger (masked trigger event) */
    constexpr std::uint32_t GPDMA_C10TR2_TRIGPOL_B_0x0 = 0;
        /** @brief trigger on the rising edge */
    constexpr std::uint32_t GPDMA_C10TR2_TRIGPOL_B_0x1 = 1;
        /** @brief trigger on the falling edge */
    constexpr std::uint32_t GPDMA_C10TR2_TRIGPOL_B_0x2 = 2;
        /** @brief same as 00 */
    constexpr std::uint32_t GPDMA_C10TR2_TRIGPOL_B_0x3 = 3;

    /** @brief transfer complete event mode */
    using GPDMA_C10TR2_TCEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: at block level (when GPDMA_CxBR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. (value: 0)
     *          - B_0x1: channel x = 0 to 11, same as 00; channel x=12 to 15, at 2D/repeated block level (when GPDMA_CxBR1.BRC[10:0]= 0 and GPDMA_CxBR1.BNDT[15:0]= 0), the complete (and the half) transfer event is generated at the end (respectively half of the end) of the 2D/repeated block. (value: 1)
     *          - B_0x2: at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer (the LLI data transfer being a block transfer or a 2D/repeated block transfer for channel x = 12 to 15), if any data transfer. (value: 2)
     *          - B_0x3: at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address GPDMA_CxLLR.LA[15:2] to zero and clears all the GPDMA_CxLLR update bits (UT1, UT2, UB1, USA, UDA and ULL, plus UT3 and UB2 if present). If the channel transfer is continuous/infinite, no event is generated. (value: 3)
     */
        /** @brief at block level (when GPDMA_CxBR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. */
    constexpr std::uint32_t GPDMA_C10TR2_TCEM_B_0x0 = 0;
        /** @brief channel x = 0 to 11, same as 00; channel x=12 to 15, at 2D/repeated block level (when GPDMA_CxBR1.BRC[10:0]= 0 and GPDMA_CxBR1.BNDT[15:0]= 0), the complete (and the half) transfer event is generated at the end (respectively half of the end) of the 2D/repeated block. */
    constexpr std::uint32_t GPDMA_C10TR2_TCEM_B_0x1 = 1;
        /** @brief at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer (the LLI data transfer being a block transfer or a 2D/repeated block transfer for channel x = 12 to 15), if any data transfer. */
    constexpr std::uint32_t GPDMA_C10TR2_TCEM_B_0x2 = 2;
        /** @brief at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address GPDMA_CxLLR.LA[15:2] to zero and clears all the GPDMA_CxLLR update bits (UT1, UT2, UB1, USA, UDA and ULL, plus UT3 and UB2 if present). If the channel transfer is continuous/infinite, no event is generated. */
    constexpr std::uint32_t GPDMA_C10TR2_TCEM_B_0x3 = 3;

    /** @brief GPDMA channel 10 block register 1 */
    using GPDMA_C10BR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x598, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief block number of data bytes to transfer from the source */
    using GPDMA_C10BR1_BNDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 10 source address register */
    using GPDMA_C10SAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x59C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief source address */
    using GPDMA_C10SAR_SA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 10 destination address register */
    using GPDMA_C10DAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination address */
    using GPDMA_C10DAR_DA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 10 linked-list address register */
    using GPDMA_C10LLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5CC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pointer (16-bit low-significant address) to the next linked-list data structure */
    using GPDMA_C10LLR_LA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxLLR register from memory */
    using GPDMA_C10LLR_ULL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxLLR update (value: 0)
     *          - B_0x1: GPDMA_CxLLR update (value: 1)
     */
        /** @brief no GPDMA_CxLLR update */
    constexpr std::uint32_t GPDMA_C10LLR_ULL_B_0x0 = 0;
        /** @brief GPDMA_CxLLR update */
    constexpr std::uint32_t GPDMA_C10LLR_ULL_B_0x1 = 1;

    /** @brief Update GPDMA_CxDAR register from memory */
    using GPDMA_C10LLR_UDA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxDAR update (value: 0)
     *          - B_0x1: GPDMA_CxDAR update (value: 1)
     */
        /** @brief no GPDMA_CxDAR update */
    constexpr std::uint32_t GPDMA_C10LLR_UDA_B_0x0 = 0;
        /** @brief GPDMA_CxDAR update */
    constexpr std::uint32_t GPDMA_C10LLR_UDA_B_0x1 = 1;

    /** @brief update GPDMA_CxSAR from memory */
    using GPDMA_C10LLR_USA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxSAR update (value: 0)
     *          - B_0x1: GPDMA_CxSAR update (value: 1)
     */
        /** @brief no GPDMA_CxSAR update */
    constexpr std::uint32_t GPDMA_C10LLR_USA_B_0x0 = 0;
        /** @brief GPDMA_CxSAR update */
    constexpr std::uint32_t GPDMA_C10LLR_USA_B_0x1 = 1;

    /** @brief Update GPDMA_CxBR1 from memory */
    using GPDMA_C10LLR_UB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxBR1 update from memory (GPDMA_CxBR1.BNDT[15:0] restored if any link transfer) (value: 0)
     *          - B_0x1: GPDMA_CxBR1 update (value: 1)
     */
        /** @brief no GPDMA_CxBR1 update from memory (GPDMA_CxBR1.BNDT[15:0] restored if any link transfer) */
    constexpr std::uint32_t GPDMA_C10LLR_UB1_B_0x0 = 0;
        /** @brief GPDMA_CxBR1 update */
    constexpr std::uint32_t GPDMA_C10LLR_UB1_B_0x1 = 1;

    /** @brief Update GPDMA_CxTR2 from memory */
    using GPDMA_C10LLR_UT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxTR2 update (value: 0)
     *          - B_0x1: GPDMA_CxTR2 update (value: 1)
     */
        /** @brief no GPDMA_CxTR2 update */
    constexpr std::uint32_t GPDMA_C10LLR_UT2_B_0x0 = 0;
        /** @brief GPDMA_CxTR2 update */
    constexpr std::uint32_t GPDMA_C10LLR_UT2_B_0x1 = 1;

    /** @brief Update GPDMA_CxTR1 from memory */
    using GPDMA_C10LLR_UT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxTR1 update (value: 0)
     *          - B_0x1: GPDMA_CxTR1 update (value: 1)
     */
        /** @brief no GPDMA_CxTR1 update */
    constexpr std::uint32_t GPDMA_C10LLR_UT1_B_0x0 = 0;
        /** @brief GPDMA_CxTR1 update */
    constexpr std::uint32_t GPDMA_C10LLR_UT1_B_0x1 = 1;

    /** @brief GPDMA channel 11 linked-list base address register */
    using GPDMA_C11LBAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5D0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief linked-list base address of GPDMA channel x */
    using GPDMA_C11LBAR_LBA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 11 flag clear register */
    using GPDMA_C11FCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5DC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transfer complete flag clear */
    using GPDMA_C11FCR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding TCF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C11FCR_TCF_B_0x0 = 0;
        /** @brief corresponding TCF flag cleared */
    constexpr std::uint32_t GPDMA_C11FCR_TCF_B_0x1 = 1;

    /** @brief half transfer flag clear */
    using GPDMA_C11FCR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding HTF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C11FCR_HTF_B_0x0 = 0;
        /** @brief corresponding HTF flag cleared */
    constexpr std::uint32_t GPDMA_C11FCR_HTF_B_0x1 = 1;

    /** @brief data transfer error flag clear */
    using GPDMA_C11FCR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding DTEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C11FCR_DTEF_B_0x0 = 0;
        /** @brief corresponding DTEF flag cleared */
    constexpr std::uint32_t GPDMA_C11FCR_DTEF_B_0x1 = 1;

    /** @brief update link transfer error flag clear */
    using GPDMA_C11FCR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding ULEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C11FCR_ULEF_B_0x0 = 0;
        /** @brief corresponding ULEF flag cleared */
    constexpr std::uint32_t GPDMA_C11FCR_ULEF_B_0x1 = 1;

    /** @brief user setting error flag clear */
    using GPDMA_C11FCR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding USEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C11FCR_USEF_B_0x0 = 0;
        /** @brief corresponding USEF flag cleared */
    constexpr std::uint32_t GPDMA_C11FCR_USEF_B_0x1 = 1;

    /** @brief completed suspension flag clear */
    using GPDMA_C11FCR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding SUSPF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C11FCR_SUSPF_B_0x0 = 0;
        /** @brief corresponding SUSPF flag cleared */
    constexpr std::uint32_t GPDMA_C11FCR_SUSPF_B_0x1 = 1;

    /** @brief trigger overrun flag clear */
    using GPDMA_C11FCR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding TOF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C11FCR_TOF_B_0x0 = 0;
        /** @brief corresponding TOF flag cleared */
    constexpr std::uint32_t GPDMA_C11FCR_TOF_B_0x1 = 1;

    /** @brief GPDMA channel 11 status register */
    using GPDMA_C11SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5E0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief idle flag */
    using GPDMA_C11SR_IDLEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: channel not in idle state (value: 0)
     *          - B_0x1: channel in idle state (value: 1)
     */
        /** @brief channel not in idle state */
    constexpr std::uint32_t GPDMA_C11SR_IDLEF_B_0x0 = 0;
        /** @brief channel in idle state */
    constexpr std::uint32_t GPDMA_C11SR_IDLEF_B_0x1 = 1;

    /** @brief transfer complete flag */
    using GPDMA_C11SR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no transfer complete event (value: 0)
     *          - B_0x1: a transfer complete event occurred (value: 1)
     */
        /** @brief no transfer complete event */
    constexpr std::uint32_t GPDMA_C11SR_TCF_B_0x0 = 0;
        /** @brief a transfer complete event occurred */
    constexpr std::uint32_t GPDMA_C11SR_TCF_B_0x1 = 1;

    /** @brief half transfer flag */
    using GPDMA_C11SR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no half transfer event (value: 0)
     *          - B_0x1: an half transfer event occurred (value: 1)
     */
        /** @brief no half transfer event */
    constexpr std::uint32_t GPDMA_C11SR_HTF_B_0x0 = 0;
        /** @brief an half transfer event occurred */
    constexpr std::uint32_t GPDMA_C11SR_HTF_B_0x1 = 1;

    /** @brief data transfer error flag */
    using GPDMA_C11SR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no data transfer error event (value: 0)
     *          - B_0x1: a master bus error event occurred on a data transfer (value: 1)
     */
        /** @brief no data transfer error event */
    constexpr std::uint32_t GPDMA_C11SR_DTEF_B_0x0 = 0;
        /** @brief a master bus error event occurred on a data transfer */
    constexpr std::uint32_t GPDMA_C11SR_DTEF_B_0x1 = 1;

    /** @brief update link transfer error flag */
    using GPDMA_C11SR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no update link transfer error event (value: 0)
     *          - B_0x1: a master bus error event occurred while updating a linked-list register from memory (value: 1)
     */
        /** @brief no update link transfer error event */
    constexpr std::uint32_t GPDMA_C11SR_ULEF_B_0x0 = 0;
        /** @brief a master bus error event occurred while updating a linked-list register from memory */
    constexpr std::uint32_t GPDMA_C11SR_ULEF_B_0x1 = 1;

    /** @brief user setting error flag */
    using GPDMA_C11SR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no user setting error event (value: 0)
     *          - B_0x1: a user setting error event occurred (value: 1)
     */
        /** @brief no user setting error event */
    constexpr std::uint32_t GPDMA_C11SR_USEF_B_0x0 = 0;
        /** @brief a user setting error event occurred */
    constexpr std::uint32_t GPDMA_C11SR_USEF_B_0x1 = 1;

    /** @brief completed suspension flag */
    using GPDMA_C11SR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no completed suspension event (value: 0)
     *          - B_0x1: a completed suspension event occurred (value: 1)
     */
        /** @brief no completed suspension event */
    constexpr std::uint32_t GPDMA_C11SR_SUSPF_B_0x0 = 0;
        /** @brief a completed suspension event occurred */
    constexpr std::uint32_t GPDMA_C11SR_SUSPF_B_0x1 = 1;

    /** @brief trigger overrun flag */
    using GPDMA_C11SR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no trigger overrun event (value: 0)
     *          - B_0x1: a trigger overrun event occurred (value: 1)
     */
        /** @brief no trigger overrun event */
    constexpr std::uint32_t GPDMA_C11SR_TOF_B_0x0 = 0;
        /** @brief a trigger overrun event occurred */
    constexpr std::uint32_t GPDMA_C11SR_TOF_B_0x1 = 1;

    /** @brief monitored FIFO level */
    using GPDMA_C11SR_FIFOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 11 control register */
    using GPDMA_C11CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5E4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief enable */
    using GPDMA_C11CR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write: ignored, read: channel disabled (value: 0)
     *          - B_0x1: write: enable channel, read: channel enabled (value: 1)
     */
        /** @brief write: ignored, read: channel disabled */
    constexpr std::uint32_t GPDMA_C11CR_EN_B_0x0 = 0;
        /** @brief write: enable channel, read: channel enabled */
    constexpr std::uint32_t GPDMA_C11CR_EN_B_0x1 = 1;

    /** @brief reset */
    using GPDMA_C11CR_RESET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no channel reset (value: 0)
     *          - B_0x1: channel reset (value: 1)
     */
        /** @brief no channel reset */
    constexpr std::uint32_t GPDMA_C11CR_RESET_B_0x0 = 0;
        /** @brief channel reset */
    constexpr std::uint32_t GPDMA_C11CR_RESET_B_0x1 = 1;

    /** @brief suspend */
    using GPDMA_C11CR_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write: resume channel, read: channel not suspended (value: 0)
     *          - B_0x1: write: suspend channel, read: channel suspended. (value: 1)
     */
        /** @brief write: resume channel, read: channel not suspended */
    constexpr std::uint32_t GPDMA_C11CR_SUSP_B_0x0 = 0;
        /** @brief write: suspend channel, read: channel suspended. */
    constexpr std::uint32_t GPDMA_C11CR_SUSP_B_0x1 = 1;

    /** @brief transfer complete interrupt enable */
    using GPDMA_C11CR_TCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C11CR_TCIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C11CR_TCIE_B_0x1 = 1;

    /** @brief half transfer complete interrupt enable */
    using GPDMA_C11CR_HTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C11CR_HTIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C11CR_HTIE_B_0x1 = 1;

    /** @brief data transfer error interrupt enable */
    using GPDMA_C11CR_DTEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C11CR_DTEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C11CR_DTEIE_B_0x1 = 1;

    /** @brief update link transfer error interrupt enable */
    using GPDMA_C11CR_ULEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C11CR_ULEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C11CR_ULEIE_B_0x1 = 1;

    /** @brief user setting error interrupt enable */
    using GPDMA_C11CR_USEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C11CR_USEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C11CR_USEIE_B_0x1 = 1;

    /** @brief completed suspension interrupt enable */
    using GPDMA_C11CR_SUSPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C11CR_SUSPIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C11CR_SUSPIE_B_0x1 = 1;

    /** @brief trigger overrun interrupt enable */
    using GPDMA_C11CR_TOIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C11CR_TOIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C11CR_TOIE_B_0x1 = 1;

    /** @brief Link step mode */
    using GPDMA_C11CR_LSM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: channel executed for the full linked-list and completed at the end of the last LLI (GPDMA_CxLLR=0). The 16 low-significant bits of the link address are null (LA[15:0]=0) and all the update bits are null (UT1=UB1=UT2=USA=UDA=ULL=0 and UT3=UB2=0 if present). Then GPDMA_CxBR1.BNDT[15:0]=0 and GPDMA_CxBR1.BRC[10:0]=0 if present. (value: 0)
     *          - B_0x1: channel executed once for the current LLI (value: 1)
     */
        /** @brief channel executed for the full linked-list and completed at the end of the last LLI (GPDMA_CxLLR=0). The 16 low-significant bits of the link address are null (LA[15:0]=0) and all the update bits are null (UT1=UB1=UT2=USA=UDA=ULL=0 and UT3=UB2=0 if present). Then GPDMA_CxBR1.BNDT[15:0]=0 and GPDMA_CxBR1.BRC[10:0]=0 if present. */
    constexpr std::uint32_t GPDMA_C11CR_LSM_B_0x0 = 0;
        /** @brief channel executed once for the current LLI */
    constexpr std::uint32_t GPDMA_C11CR_LSM_B_0x1 = 1;

    /** @brief linked-list allocated port */
    using GPDMA_C11CR_LAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C11CR_LAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C11CR_LAP_B_0x1 = 1;

    /** @brief priority level of the channel x GPDMA transfer versus others */
    using GPDMA_C11CR_PRIO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: low priority, low weight (value: 0)
     *          - B_0x1: low priority, mid weight (value: 1)
     *          - B_0x2: low priority, high weight (value: 2)
     *          - B_0x3: high priority (value: 3)
     */
        /** @brief low priority, low weight */
    constexpr std::uint32_t GPDMA_C11CR_PRIO_B_0x0 = 0;
        /** @brief low priority, mid weight */
    constexpr std::uint32_t GPDMA_C11CR_PRIO_B_0x1 = 1;
        /** @brief low priority, high weight */
    constexpr std::uint32_t GPDMA_C11CR_PRIO_B_0x2 = 2;
        /** @brief high priority */
    constexpr std::uint32_t GPDMA_C11CR_PRIO_B_0x3 = 3;

    /** @brief GPDMA channel 11 transfer register 1 */
    using GPDMA_C11TR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x610, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief binary logarithm of the source data width of a burst in bytes */
    using GPDMA_C11TR1_SDW_LOG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: byte (value: 0)
     *          - B_0x1: half-word (2 bytes) (value: 1)
     *          - B_0x2: word (4 bytes) (value: 2)
     *          - B_0x3: user setting error reported and no transfer issued (value: 3)
     */
        /** @brief byte */
    constexpr std::uint32_t GPDMA_C11TR1_SDW_LOG2_B_0x0 = 0;
        /** @brief half-word (2 bytes) */
    constexpr std::uint32_t GPDMA_C11TR1_SDW_LOG2_B_0x1 = 1;
        /** @brief word (4 bytes) */
    constexpr std::uint32_t GPDMA_C11TR1_SDW_LOG2_B_0x2 = 2;
        /** @brief user setting error reported and no transfer issued */
    constexpr std::uint32_t GPDMA_C11TR1_SDW_LOG2_B_0x3 = 3;

    /** @brief source incrementing burst */
    using GPDMA_C11TR1_SINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fixed burst (value: 0)
     *          - B_0x1: contiguously incremented burst (value: 1)
     */
        /** @brief fixed burst */
    constexpr std::uint32_t GPDMA_C11TR1_SINC_B_0x0 = 0;
        /** @brief contiguously incremented burst */
    constexpr std::uint32_t GPDMA_C11TR1_SINC_B_0x1 = 1;

    /** @brief source burst length minus 1, between 0 and 63 */
    using GPDMA_C11TR1_SBL_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief padding/alignment mode */
    using GPDMA_C11TR1_PAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: source data is transferred as right aligned, padded with 0s up to the destination data width (value: 0)
     *          - B_0x1: source data is transferred as right aligned, sign extended up to the destination data width (value: 1)
     */
        /** @brief source data is transferred as right aligned, padded with 0s up to the destination data width */
    constexpr std::uint32_t GPDMA_C11TR1_PAM_B_0x0 = 0;
        /** @brief source data is transferred as right aligned, sign extended up to the destination data width */
    constexpr std::uint32_t GPDMA_C11TR1_PAM_B_0x1 = 1;

    /** @brief source byte exchange within the unaligned half-word of each source word */
    using GPDMA_C11TR1_SBX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no byte-based exchange within the unaligned half-word of each source word (value: 0)
     *          - B_0x1: the two consecutive bytes within the unaligned half-word of each source word are exchanged. (value: 1)
     */
        /** @brief no byte-based exchange within the unaligned half-word of each source word */
    constexpr std::uint32_t GPDMA_C11TR1_SBX_B_0x0 = 0;
        /** @brief the two consecutive bytes within the unaligned half-word of each source word are exchanged. */
    constexpr std::uint32_t GPDMA_C11TR1_SBX_B_0x1 = 1;

    /** @brief source allocated port */
    using GPDMA_C11TR1_SAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C11TR1_SAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C11TR1_SAP_B_0x1 = 1;

    /** @brief security attribute of the GPDMA transfer from the source */
    using GPDMA_C11TR1_SSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPDMA transfer non-secure (value: 0)
     *          - B_0x1: GPDMA transfer secure (value: 1)
     */
        /** @brief GPDMA transfer non-secure */
    constexpr std::uint32_t GPDMA_C11TR1_SSEC_B_0x0 = 0;
        /** @brief GPDMA transfer secure */
    constexpr std::uint32_t GPDMA_C11TR1_SSEC_B_0x1 = 1;

    /** @brief binary logarithm of the destination data width of a burst, in bytes */
    using GPDMA_C11TR1_DDW_LOG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: byte (value: 0)
     *          - B_0x1: half-word (2 bytes) (value: 1)
     *          - B_0x2: word (4 bytes) (value: 2)
     *          - B_0x3: user setting error reported and no transfer issued (value: 3)
     */
        /** @brief byte */
    constexpr std::uint32_t GPDMA_C11TR1_DDW_LOG2_B_0x0 = 0;
        /** @brief half-word (2 bytes) */
    constexpr std::uint32_t GPDMA_C11TR1_DDW_LOG2_B_0x1 = 1;
        /** @brief word (4 bytes) */
    constexpr std::uint32_t GPDMA_C11TR1_DDW_LOG2_B_0x2 = 2;
        /** @brief user setting error reported and no transfer issued */
    constexpr std::uint32_t GPDMA_C11TR1_DDW_LOG2_B_0x3 = 3;

    /** @brief destination incrementing burst */
    using GPDMA_C11TR1_DINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fixed burst (value: 0)
     *          - B_0x1: contiguously incremented burst (value: 1)
     */
        /** @brief fixed burst */
    constexpr std::uint32_t GPDMA_C11TR1_DINC_B_0x0 = 0;
        /** @brief contiguously incremented burst */
    constexpr std::uint32_t GPDMA_C11TR1_DINC_B_0x1 = 1;

    /** @brief destination burst length minus 1, between 0 and 63 */
    using GPDMA_C11TR1_DBL_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination byte exchange */
    using GPDMA_C11TR1_DBX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no byte-based exchange within half-word (value: 0)
     *          - B_0x1: the two consecutive (post PAM) bytes are exchanged in each destination half-word. (value: 1)
     */
        /** @brief no byte-based exchange within half-word */
    constexpr std::uint32_t GPDMA_C11TR1_DBX_B_0x0 = 0;
        /** @brief the two consecutive (post PAM) bytes are exchanged in each destination half-word. */
    constexpr std::uint32_t GPDMA_C11TR1_DBX_B_0x1 = 1;

    /** @brief destination half-word exchange */
    using GPDMA_C11TR1_DHX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no halfword-based exchanged within word (value: 0)
     *          - B_0x1: the two consecutive (post PAM) half-words are exchanged in each destination word. (value: 1)
     */
        /** @brief no halfword-based exchanged within word */
    constexpr std::uint32_t GPDMA_C11TR1_DHX_B_0x0 = 0;
        /** @brief the two consecutive (post PAM) half-words are exchanged in each destination word. */
    constexpr std::uint32_t GPDMA_C11TR1_DHX_B_0x1 = 1;

    /** @brief destination allocated port */
    using GPDMA_C11TR1_DAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C11TR1_DAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C11TR1_DAP_B_0x1 = 1;

    /** @brief security attribute of the GPDMA transfer to the destination */
    using GPDMA_C11TR1_DSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPDMA transfer non-secure (value: 0)
     *          - B_0x1: GPDMA transfer secure (value: 1)
     */
        /** @brief GPDMA transfer non-secure */
    constexpr std::uint32_t GPDMA_C11TR1_DSEC_B_0x0 = 0;
        /** @brief GPDMA transfer secure */
    constexpr std::uint32_t GPDMA_C11TR1_DSEC_B_0x1 = 1;

    /** @brief GPDMA channel 11 transfer register 2 */
    using GPDMA_C11TR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x614, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA hardware request selection */
    using GPDMA_C11TR2_REQSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief software request */
    using GPDMA_C11TR2_SWREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no software request. The selected hardware request REQSEL[6:0] is taken into account. (value: 0)
     *          - B_0x1: software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[6:0] is ignored. (value: 1)
     */
        /** @brief no software request. The selected hardware request REQSEL[6:0] is taken into account. */
    constexpr std::uint32_t GPDMA_C11TR2_SWREQ_B_0x0 = 0;
        /** @brief software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[6:0] is ignored. */
    constexpr std::uint32_t GPDMA_C11TR2_SWREQ_B_0x1 = 1;

    /** @brief destination hardware request */
    using GPDMA_C11TR2_DREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: selected hardware request driven by a source peripheral (request signal taken into account by the GPDMA transfer scheduler over the source/read port) (value: 0)
     *          - B_0x1: selected hardware request driven by a destination peripheral (request signal taken into account by the GPDMA transfer scheduler over the destination/write port) (value: 1)
     */
        /** @brief selected hardware request driven by a source peripheral (request signal taken into account by the GPDMA transfer scheduler over the source/read port) */
    constexpr std::uint32_t GPDMA_C11TR2_DREQ_B_0x0 = 0;
        /** @brief selected hardware request driven by a destination peripheral (request signal taken into account by the GPDMA transfer scheduler over the destination/write port) */
    constexpr std::uint32_t GPDMA_C11TR2_DREQ_B_0x1 = 1;

    /** @brief Block hardware request */
    using GPDMA_C11TR2_BREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a burst level. (value: 0)
     *          - B_0x1: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see ). (value: 1)
     */
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a burst level. */
    constexpr std::uint32_t GPDMA_C11TR2_BREQ_B_0x0 = 0;
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see ). */
    constexpr std::uint32_t GPDMA_C11TR2_BREQ_B_0x1 = 1;

    /** @brief trigger mode */
    using GPDMA_C11TR2_TRIGM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: at block level: the first burst read of each block transfer is conditioned by one hit trigger (channel x = 12 to 15, for each block if a 2D/repeated block is configured with GPDMA_CxBR1.BRC[10:0] different to 0). (value: 0)
     *          - B_0x1: channel x = 0 to 11, same as 00; channel x=12 to 15, at 2D/repeated block level, the (value: 1)
     *          - B_0x2: at link level: a LLI link transfer is conditioned by one hit trigger. The LLI data transfer (if any) is not conditioned. (value: 2)
     *          - B_0x3: at programmed burst level: If SWREQ = 1, each programmed burst read is conditioned by one hit trigger. If SWREQ=0, each programmed burst that is requested by the selected peripheral, is conditioned by one hit trigger. (value: 3)
     */
        /** @brief at block level: the first burst read of each block transfer is conditioned by one hit trigger (channel x = 12 to 15, for each block if a 2D/repeated block is configured with GPDMA_CxBR1.BRC[10:0] different to 0). */
    constexpr std::uint32_t GPDMA_C11TR2_TRIGM_B_0x0 = 0;
        /** @brief channel x = 0 to 11, same as 00; channel x=12 to 15, at 2D/repeated block level, the */
    constexpr std::uint32_t GPDMA_C11TR2_TRIGM_B_0x1 = 1;
        /** @brief at link level: a LLI link transfer is conditioned by one hit trigger. The LLI data transfer (if any) is not conditioned. */
    constexpr std::uint32_t GPDMA_C11TR2_TRIGM_B_0x2 = 2;
        /** @brief at programmed burst level: If SWREQ = 1, each programmed burst read is conditioned by one hit trigger. If SWREQ=0, each programmed burst that is requested by the selected peripheral, is conditioned by one hit trigger. */
    constexpr std::uint32_t GPDMA_C11TR2_TRIGM_B_0x3 = 3;

    /** @brief trigger event input selection */
    using GPDMA_C11TR2_TRIGSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief trigger event polarity */
    using GPDMA_C11TR2_TRIGPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no trigger (masked trigger event) (value: 0)
     *          - B_0x1: trigger on the rising edge (value: 1)
     *          - B_0x2: trigger on the falling edge (value: 2)
     *          - B_0x3: same as 00 (value: 3)
     */
        /** @brief no trigger (masked trigger event) */
    constexpr std::uint32_t GPDMA_C11TR2_TRIGPOL_B_0x0 = 0;
        /** @brief trigger on the rising edge */
    constexpr std::uint32_t GPDMA_C11TR2_TRIGPOL_B_0x1 = 1;
        /** @brief trigger on the falling edge */
    constexpr std::uint32_t GPDMA_C11TR2_TRIGPOL_B_0x2 = 2;
        /** @brief same as 00 */
    constexpr std::uint32_t GPDMA_C11TR2_TRIGPOL_B_0x3 = 3;

    /** @brief transfer complete event mode */
    using GPDMA_C11TR2_TCEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: at block level (when GPDMA_CxBR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. (value: 0)
     *          - B_0x1: channel x = 0 to 11, same as 00; channel x=12 to 15, at 2D/repeated block level (when GPDMA_CxBR1.BRC[10:0]= 0 and GPDMA_CxBR1.BNDT[15:0]= 0), the complete (and the half) transfer event is generated at the end (respectively half of the end) of the 2D/repeated block. (value: 1)
     *          - B_0x2: at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer (the LLI data transfer being a block transfer or a 2D/repeated block transfer for channel x = 12 to 15), if any data transfer. (value: 2)
     *          - B_0x3: at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address GPDMA_CxLLR.LA[15:2] to zero and clears all the GPDMA_CxLLR update bits (UT1, UT2, UB1, USA, UDA and ULL, plus UT3 and UB2 if present). If the channel transfer is continuous/infinite, no event is generated. (value: 3)
     */
        /** @brief at block level (when GPDMA_CxBR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. */
    constexpr std::uint32_t GPDMA_C11TR2_TCEM_B_0x0 = 0;
        /** @brief channel x = 0 to 11, same as 00; channel x=12 to 15, at 2D/repeated block level (when GPDMA_CxBR1.BRC[10:0]= 0 and GPDMA_CxBR1.BNDT[15:0]= 0), the complete (and the half) transfer event is generated at the end (respectively half of the end) of the 2D/repeated block. */
    constexpr std::uint32_t GPDMA_C11TR2_TCEM_B_0x1 = 1;
        /** @brief at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer (the LLI data transfer being a block transfer or a 2D/repeated block transfer for channel x = 12 to 15), if any data transfer. */
    constexpr std::uint32_t GPDMA_C11TR2_TCEM_B_0x2 = 2;
        /** @brief at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address GPDMA_CxLLR.LA[15:2] to zero and clears all the GPDMA_CxLLR update bits (UT1, UT2, UB1, USA, UDA and ULL, plus UT3 and UB2 if present). If the channel transfer is continuous/infinite, no event is generated. */
    constexpr std::uint32_t GPDMA_C11TR2_TCEM_B_0x3 = 3;

    /** @brief GPDMA channel 11 block register 1 */
    using GPDMA_C11BR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x618, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief block number of data bytes to transfer from the source */
    using GPDMA_C11BR1_BNDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 11 source address register */
    using GPDMA_C11SAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x61C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief source address */
    using GPDMA_C11SAR_SA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 11 destination address register */
    using GPDMA_C11DAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x620, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination address */
    using GPDMA_C11DAR_DA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 11 linked-list address register */
    using GPDMA_C11LLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x64C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pointer (16-bit low-significant address) to the next linked-list data structure */
    using GPDMA_C11LLR_LA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxLLR register from memory */
    using GPDMA_C11LLR_ULL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxLLR update (value: 0)
     *          - B_0x1: GPDMA_CxLLR update (value: 1)
     */
        /** @brief no GPDMA_CxLLR update */
    constexpr std::uint32_t GPDMA_C11LLR_ULL_B_0x0 = 0;
        /** @brief GPDMA_CxLLR update */
    constexpr std::uint32_t GPDMA_C11LLR_ULL_B_0x1 = 1;

    /** @brief Update GPDMA_CxDAR register from memory */
    using GPDMA_C11LLR_UDA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxDAR update (value: 0)
     *          - B_0x1: GPDMA_CxDAR update (value: 1)
     */
        /** @brief no GPDMA_CxDAR update */
    constexpr std::uint32_t GPDMA_C11LLR_UDA_B_0x0 = 0;
        /** @brief GPDMA_CxDAR update */
    constexpr std::uint32_t GPDMA_C11LLR_UDA_B_0x1 = 1;

    /** @brief update GPDMA_CxSAR from memory */
    using GPDMA_C11LLR_USA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxSAR update (value: 0)
     *          - B_0x1: GPDMA_CxSAR update (value: 1)
     */
        /** @brief no GPDMA_CxSAR update */
    constexpr std::uint32_t GPDMA_C11LLR_USA_B_0x0 = 0;
        /** @brief GPDMA_CxSAR update */
    constexpr std::uint32_t GPDMA_C11LLR_USA_B_0x1 = 1;

    /** @brief Update GPDMA_CxBR1 from memory */
    using GPDMA_C11LLR_UB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxBR1 update from memory (GPDMA_CxBR1.BNDT[15:0] restored if any link transfer) (value: 0)
     *          - B_0x1: GPDMA_CxBR1 update (value: 1)
     */
        /** @brief no GPDMA_CxBR1 update from memory (GPDMA_CxBR1.BNDT[15:0] restored if any link transfer) */
    constexpr std::uint32_t GPDMA_C11LLR_UB1_B_0x0 = 0;
        /** @brief GPDMA_CxBR1 update */
    constexpr std::uint32_t GPDMA_C11LLR_UB1_B_0x1 = 1;

    /** @brief Update GPDMA_CxTR2 from memory */
    using GPDMA_C11LLR_UT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxTR2 update (value: 0)
     *          - B_0x1: GPDMA_CxTR2 update (value: 1)
     */
        /** @brief no GPDMA_CxTR2 update */
    constexpr std::uint32_t GPDMA_C11LLR_UT2_B_0x0 = 0;
        /** @brief GPDMA_CxTR2 update */
    constexpr std::uint32_t GPDMA_C11LLR_UT2_B_0x1 = 1;

    /** @brief Update GPDMA_CxTR1 from memory */
    using GPDMA_C11LLR_UT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxTR1 update (value: 0)
     *          - B_0x1: GPDMA_CxTR1 update (value: 1)
     */
        /** @brief no GPDMA_CxTR1 update */
    constexpr std::uint32_t GPDMA_C11LLR_UT1_B_0x0 = 0;
        /** @brief GPDMA_CxTR1 update */
    constexpr std::uint32_t GPDMA_C11LLR_UT1_B_0x1 = 1;

    /** @brief GPDMA channel 12 linked-list base address register */
    using GPDMA_C12LBAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x650, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief linked-list base address of GPDMA channel x */
    using GPDMA_C12LBAR_LBA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 12 flag clear register */
    using GPDMA_C12FCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x65C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transfer complete flag clear */
    using GPDMA_C12FCR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding TCF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C12FCR_TCF_B_0x0 = 0;
        /** @brief corresponding TCF flag cleared */
    constexpr std::uint32_t GPDMA_C12FCR_TCF_B_0x1 = 1;

    /** @brief half transfer flag clear */
    using GPDMA_C12FCR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding HTF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C12FCR_HTF_B_0x0 = 0;
        /** @brief corresponding HTF flag cleared */
    constexpr std::uint32_t GPDMA_C12FCR_HTF_B_0x1 = 1;

    /** @brief data transfer error flag clear */
    using GPDMA_C12FCR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding DTEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C12FCR_DTEF_B_0x0 = 0;
        /** @brief corresponding DTEF flag cleared */
    constexpr std::uint32_t GPDMA_C12FCR_DTEF_B_0x1 = 1;

    /** @brief update link transfer error flag clear */
    using GPDMA_C12FCR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding ULEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C12FCR_ULEF_B_0x0 = 0;
        /** @brief corresponding ULEF flag cleared */
    constexpr std::uint32_t GPDMA_C12FCR_ULEF_B_0x1 = 1;

    /** @brief user setting error flag clear */
    using GPDMA_C12FCR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding USEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C12FCR_USEF_B_0x0 = 0;
        /** @brief corresponding USEF flag cleared */
    constexpr std::uint32_t GPDMA_C12FCR_USEF_B_0x1 = 1;

    /** @brief completed suspension flag clear */
    using GPDMA_C12FCR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding SUSPF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C12FCR_SUSPF_B_0x0 = 0;
        /** @brief corresponding SUSPF flag cleared */
    constexpr std::uint32_t GPDMA_C12FCR_SUSPF_B_0x1 = 1;

    /** @brief trigger overrun flag clear */
    using GPDMA_C12FCR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding TOF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C12FCR_TOF_B_0x0 = 0;
        /** @brief corresponding TOF flag cleared */
    constexpr std::uint32_t GPDMA_C12FCR_TOF_B_0x1 = 1;

    /** @brief GPDMA channel 12 status register */
    using GPDMA_C12SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x660, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief idle flag */
    using GPDMA_C12SR_IDLEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: channel not in idle state (value: 0)
     *          - B_0x1: channel in idle state (value: 1)
     */
        /** @brief channel not in idle state */
    constexpr std::uint32_t GPDMA_C12SR_IDLEF_B_0x0 = 0;
        /** @brief channel in idle state */
    constexpr std::uint32_t GPDMA_C12SR_IDLEF_B_0x1 = 1;

    /** @brief transfer complete flag */
    using GPDMA_C12SR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no transfer complete event (value: 0)
     *          - B_0x1: a transfer complete event occurred (value: 1)
     */
        /** @brief no transfer complete event */
    constexpr std::uint32_t GPDMA_C12SR_TCF_B_0x0 = 0;
        /** @brief a transfer complete event occurred */
    constexpr std::uint32_t GPDMA_C12SR_TCF_B_0x1 = 1;

    /** @brief half transfer flag */
    using GPDMA_C12SR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no half transfer event (value: 0)
     *          - B_0x1: an half transfer event occurred (value: 1)
     */
        /** @brief no half transfer event */
    constexpr std::uint32_t GPDMA_C12SR_HTF_B_0x0 = 0;
        /** @brief an half transfer event occurred */
    constexpr std::uint32_t GPDMA_C12SR_HTF_B_0x1 = 1;

    /** @brief data transfer error flag */
    using GPDMA_C12SR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no data transfer error event (value: 0)
     *          - B_0x1: a master bus error event occurred on a data transfer (value: 1)
     */
        /** @brief no data transfer error event */
    constexpr std::uint32_t GPDMA_C12SR_DTEF_B_0x0 = 0;
        /** @brief a master bus error event occurred on a data transfer */
    constexpr std::uint32_t GPDMA_C12SR_DTEF_B_0x1 = 1;

    /** @brief update link transfer error flag */
    using GPDMA_C12SR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no update link transfer error event (value: 0)
     *          - B_0x1: a master bus error event occurred while updating a linked-list register from memory (value: 1)
     */
        /** @brief no update link transfer error event */
    constexpr std::uint32_t GPDMA_C12SR_ULEF_B_0x0 = 0;
        /** @brief a master bus error event occurred while updating a linked-list register from memory */
    constexpr std::uint32_t GPDMA_C12SR_ULEF_B_0x1 = 1;

    /** @brief user setting error flag */
    using GPDMA_C12SR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no user setting error event (value: 0)
     *          - B_0x1: a user setting error event occurred (value: 1)
     */
        /** @brief no user setting error event */
    constexpr std::uint32_t GPDMA_C12SR_USEF_B_0x0 = 0;
        /** @brief a user setting error event occurred */
    constexpr std::uint32_t GPDMA_C12SR_USEF_B_0x1 = 1;

    /** @brief completed suspension flag */
    using GPDMA_C12SR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no completed suspension event (value: 0)
     *          - B_0x1: a completed suspension event occurred (value: 1)
     */
        /** @brief no completed suspension event */
    constexpr std::uint32_t GPDMA_C12SR_SUSPF_B_0x0 = 0;
        /** @brief a completed suspension event occurred */
    constexpr std::uint32_t GPDMA_C12SR_SUSPF_B_0x1 = 1;

    /** @brief trigger overrun flag */
    using GPDMA_C12SR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no trigger overrun event (value: 0)
     *          - B_0x1: a trigger overrun event occurred (value: 1)
     */
        /** @brief no trigger overrun event */
    constexpr std::uint32_t GPDMA_C12SR_TOF_B_0x0 = 0;
        /** @brief a trigger overrun event occurred */
    constexpr std::uint32_t GPDMA_C12SR_TOF_B_0x1 = 1;

    /** @brief monitored FIFO level */
    using GPDMA_C12SR_FIFOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 12 control register */
    using GPDMA_C12CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x664, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief enable */
    using GPDMA_C12CR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write: ignored, read: channel disabled (value: 0)
     *          - B_0x1: write: enable channel, read: channel enabled (value: 1)
     */
        /** @brief write: ignored, read: channel disabled */
    constexpr std::uint32_t GPDMA_C12CR_EN_B_0x0 = 0;
        /** @brief write: enable channel, read: channel enabled */
    constexpr std::uint32_t GPDMA_C12CR_EN_B_0x1 = 1;

    /** @brief reset */
    using GPDMA_C12CR_RESET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no channel reset (value: 0)
     *          - B_0x1: channel reset (value: 1)
     */
        /** @brief no channel reset */
    constexpr std::uint32_t GPDMA_C12CR_RESET_B_0x0 = 0;
        /** @brief channel reset */
    constexpr std::uint32_t GPDMA_C12CR_RESET_B_0x1 = 1;

    /** @brief suspend */
    using GPDMA_C12CR_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write: resume channel, read: channel not suspended (value: 0)
     *          - B_0x1: write: suspend channel, read: channel suspended. (value: 1)
     */
        /** @brief write: resume channel, read: channel not suspended */
    constexpr std::uint32_t GPDMA_C12CR_SUSP_B_0x0 = 0;
        /** @brief write: suspend channel, read: channel suspended. */
    constexpr std::uint32_t GPDMA_C12CR_SUSP_B_0x1 = 1;

    /** @brief transfer complete interrupt enable */
    using GPDMA_C12CR_TCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C12CR_TCIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C12CR_TCIE_B_0x1 = 1;

    /** @brief half transfer complete interrupt enable */
    using GPDMA_C12CR_HTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C12CR_HTIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C12CR_HTIE_B_0x1 = 1;

    /** @brief data transfer error interrupt enable */
    using GPDMA_C12CR_DTEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C12CR_DTEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C12CR_DTEIE_B_0x1 = 1;

    /** @brief update link transfer error interrupt enable */
    using GPDMA_C12CR_ULEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C12CR_ULEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C12CR_ULEIE_B_0x1 = 1;

    /** @brief user setting error interrupt enable */
    using GPDMA_C12CR_USEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C12CR_USEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C12CR_USEIE_B_0x1 = 1;

    /** @brief completed suspension interrupt enable */
    using GPDMA_C12CR_SUSPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C12CR_SUSPIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C12CR_SUSPIE_B_0x1 = 1;

    /** @brief trigger overrun interrupt enable */
    using GPDMA_C12CR_TOIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C12CR_TOIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C12CR_TOIE_B_0x1 = 1;

    /** @brief Link step mode */
    using GPDMA_C12CR_LSM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: channel executed for the full linked-list and completed at the end of the last LLI (GPDMA_CxLLR=0). The 16 low-significant bits of the link address are null (LA[15:0]=0) and all the update bits are null (UT1=UB1=UT2=USA=UDA=ULL=0 and UT3=UB2=0 if present). Then GPDMA_CxBR1.BNDT[15:0]=0 and GPDMA_CxBR1.BRC[10:0]=0 if present. (value: 0)
     *          - B_0x1: channel executed once for the current LLI (value: 1)
     */
        /** @brief channel executed for the full linked-list and completed at the end of the last LLI (GPDMA_CxLLR=0). The 16 low-significant bits of the link address are null (LA[15:0]=0) and all the update bits are null (UT1=UB1=UT2=USA=UDA=ULL=0 and UT3=UB2=0 if present). Then GPDMA_CxBR1.BNDT[15:0]=0 and GPDMA_CxBR1.BRC[10:0]=0 if present. */
    constexpr std::uint32_t GPDMA_C12CR_LSM_B_0x0 = 0;
        /** @brief channel executed once for the current LLI */
    constexpr std::uint32_t GPDMA_C12CR_LSM_B_0x1 = 1;

    /** @brief linked-list allocated port */
    using GPDMA_C12CR_LAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C12CR_LAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C12CR_LAP_B_0x1 = 1;

    /** @brief priority level of the channel x GPDMA transfer versus others */
    using GPDMA_C12CR_PRIO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: low priority, low weight (value: 0)
     *          - B_0x1: low priority, mid weight (value: 1)
     *          - B_0x2: low priority, high weight (value: 2)
     *          - B_0x3: high priority (value: 3)
     */
        /** @brief low priority, low weight */
    constexpr std::uint32_t GPDMA_C12CR_PRIO_B_0x0 = 0;
        /** @brief low priority, mid weight */
    constexpr std::uint32_t GPDMA_C12CR_PRIO_B_0x1 = 1;
        /** @brief low priority, high weight */
    constexpr std::uint32_t GPDMA_C12CR_PRIO_B_0x2 = 2;
        /** @brief high priority */
    constexpr std::uint32_t GPDMA_C12CR_PRIO_B_0x3 = 3;

    /** @brief GPDMA channel 12 transfer register 1 */
    using GPDMA_C12TR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x690, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief binary logarithm of the source data width of a burst in bytes */
    using GPDMA_C12TR1_SDW_LOG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: byte (value: 0)
     *          - B_0x1: half-word (2 bytes) (value: 1)
     *          - B_0x2: word (4 bytes) (value: 2)
     *          - B_0x3: user setting error reported and no transfer issued (value: 3)
     */
        /** @brief byte */
    constexpr std::uint32_t GPDMA_C12TR1_SDW_LOG2_B_0x0 = 0;
        /** @brief half-word (2 bytes) */
    constexpr std::uint32_t GPDMA_C12TR1_SDW_LOG2_B_0x1 = 1;
        /** @brief word (4 bytes) */
    constexpr std::uint32_t GPDMA_C12TR1_SDW_LOG2_B_0x2 = 2;
        /** @brief user setting error reported and no transfer issued */
    constexpr std::uint32_t GPDMA_C12TR1_SDW_LOG2_B_0x3 = 3;

    /** @brief source incrementing burst */
    using GPDMA_C12TR1_SINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fixed burst (value: 0)
     *          - B_0x1: contiguously incremented burst (value: 1)
     */
        /** @brief fixed burst */
    constexpr std::uint32_t GPDMA_C12TR1_SINC_B_0x0 = 0;
        /** @brief contiguously incremented burst */
    constexpr std::uint32_t GPDMA_C12TR1_SINC_B_0x1 = 1;

    /** @brief source burst length minus 1, between 0 and 63 */
    using GPDMA_C12TR1_SBL_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief padding/alignment mode */
    using GPDMA_C12TR1_PAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: source data is transferred as right aligned, padded with 0s up to the destination data width (value: 0)
     *          - B_0x1: source data is transferred as right aligned, sign extended up to the destination data width (value: 1)
     */
        /** @brief source data is transferred as right aligned, padded with 0s up to the destination data width */
    constexpr std::uint32_t GPDMA_C12TR1_PAM_B_0x0 = 0;
        /** @brief source data is transferred as right aligned, sign extended up to the destination data width */
    constexpr std::uint32_t GPDMA_C12TR1_PAM_B_0x1 = 1;

    /** @brief source byte exchange within the unaligned half-word of each source word */
    using GPDMA_C12TR1_SBX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no byte-based exchange within the unaligned half-word of each source word (value: 0)
     *          - B_0x1: the two consecutive bytes within the unaligned half-word of each source word are exchanged. (value: 1)
     */
        /** @brief no byte-based exchange within the unaligned half-word of each source word */
    constexpr std::uint32_t GPDMA_C12TR1_SBX_B_0x0 = 0;
        /** @brief the two consecutive bytes within the unaligned half-word of each source word are exchanged. */
    constexpr std::uint32_t GPDMA_C12TR1_SBX_B_0x1 = 1;

    /** @brief source allocated port */
    using GPDMA_C12TR1_SAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C12TR1_SAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C12TR1_SAP_B_0x1 = 1;

    /** @brief security attribute of the GPDMA transfer from the source */
    using GPDMA_C12TR1_SSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPDMA transfer non-secure (value: 0)
     *          - B_0x1: GPDMA transfer secure (value: 1)
     */
        /** @brief GPDMA transfer non-secure */
    constexpr std::uint32_t GPDMA_C12TR1_SSEC_B_0x0 = 0;
        /** @brief GPDMA transfer secure */
    constexpr std::uint32_t GPDMA_C12TR1_SSEC_B_0x1 = 1;

    /** @brief binary logarithm of the destination data width of a burst, in bytes */
    using GPDMA_C12TR1_DDW_LOG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: byte (value: 0)
     *          - B_0x1: half-word (2 bytes) (value: 1)
     *          - B_0x2: word (4 bytes) (value: 2)
     *          - B_0x3: user setting error reported and no transfer issued (value: 3)
     */
        /** @brief byte */
    constexpr std::uint32_t GPDMA_C12TR1_DDW_LOG2_B_0x0 = 0;
        /** @brief half-word (2 bytes) */
    constexpr std::uint32_t GPDMA_C12TR1_DDW_LOG2_B_0x1 = 1;
        /** @brief word (4 bytes) */
    constexpr std::uint32_t GPDMA_C12TR1_DDW_LOG2_B_0x2 = 2;
        /** @brief user setting error reported and no transfer issued */
    constexpr std::uint32_t GPDMA_C12TR1_DDW_LOG2_B_0x3 = 3;

    /** @brief destination incrementing burst */
    using GPDMA_C12TR1_DINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fixed burst (value: 0)
     *          - B_0x1: contiguously incremented burst (value: 1)
     */
        /** @brief fixed burst */
    constexpr std::uint32_t GPDMA_C12TR1_DINC_B_0x0 = 0;
        /** @brief contiguously incremented burst */
    constexpr std::uint32_t GPDMA_C12TR1_DINC_B_0x1 = 1;

    /** @brief destination burst length minus 1, between 0 and 63 */
    using GPDMA_C12TR1_DBL_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination byte exchange */
    using GPDMA_C12TR1_DBX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no byte-based exchange within half-word (value: 0)
     *          - B_0x1: the two consecutive (post PAM) bytes are exchanged in each destination half-word. (value: 1)
     */
        /** @brief no byte-based exchange within half-word */
    constexpr std::uint32_t GPDMA_C12TR1_DBX_B_0x0 = 0;
        /** @brief the two consecutive (post PAM) bytes are exchanged in each destination half-word. */
    constexpr std::uint32_t GPDMA_C12TR1_DBX_B_0x1 = 1;

    /** @brief destination half-word exchange */
    using GPDMA_C12TR1_DHX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no halfword-based exchanged within word (value: 0)
     *          - B_0x1: the two consecutive (post PAM) half-words are exchanged in each destination word. (value: 1)
     */
        /** @brief no halfword-based exchanged within word */
    constexpr std::uint32_t GPDMA_C12TR1_DHX_B_0x0 = 0;
        /** @brief the two consecutive (post PAM) half-words are exchanged in each destination word. */
    constexpr std::uint32_t GPDMA_C12TR1_DHX_B_0x1 = 1;

    /** @brief destination allocated port */
    using GPDMA_C12TR1_DAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C12TR1_DAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C12TR1_DAP_B_0x1 = 1;

    /** @brief security attribute of the GPDMA transfer to the destination */
    using GPDMA_C12TR1_DSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPDMA transfer non-secure (value: 0)
     *          - B_0x1: GPDMA transfer secure (value: 1)
     */
        /** @brief GPDMA transfer non-secure */
    constexpr std::uint32_t GPDMA_C12TR1_DSEC_B_0x0 = 0;
        /** @brief GPDMA transfer secure */
    constexpr std::uint32_t GPDMA_C12TR1_DSEC_B_0x1 = 1;

    /** @brief GPDMA channel 12 transfer register 2 */
    using GPDMA_C12TR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x694, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA hardware request selection */
    using GPDMA_C12TR2_REQSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief software request */
    using GPDMA_C12TR2_SWREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no software request. The selected hardware request REQSEL[6:0] is taken into account. (value: 0)
     *          - B_0x1: software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[6:0] is ignored. (value: 1)
     */
        /** @brief no software request. The selected hardware request REQSEL[6:0] is taken into account. */
    constexpr std::uint32_t GPDMA_C12TR2_SWREQ_B_0x0 = 0;
        /** @brief software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[6:0] is ignored. */
    constexpr std::uint32_t GPDMA_C12TR2_SWREQ_B_0x1 = 1;

    /** @brief destination hardware request */
    using GPDMA_C12TR2_DREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: selected hardware request driven by a source peripheral (request signal taken into account by the GPDMA transfer scheduler over the source/read port) (value: 0)
     *          - B_0x1: selected hardware request driven by a destination peripheral (request signal taken into account by the GPDMA transfer scheduler over the destination/write port) (value: 1)
     */
        /** @brief selected hardware request driven by a source peripheral (request signal taken into account by the GPDMA transfer scheduler over the source/read port) */
    constexpr std::uint32_t GPDMA_C12TR2_DREQ_B_0x0 = 0;
        /** @brief selected hardware request driven by a destination peripheral (request signal taken into account by the GPDMA transfer scheduler over the destination/write port) */
    constexpr std::uint32_t GPDMA_C12TR2_DREQ_B_0x1 = 1;

    /** @brief Block hardware request */
    using GPDMA_C12TR2_BREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a burst level. (value: 0)
     *          - B_0x1: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see ). (value: 1)
     */
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a burst level. */
    constexpr std::uint32_t GPDMA_C12TR2_BREQ_B_0x0 = 0;
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see ). */
    constexpr std::uint32_t GPDMA_C12TR2_BREQ_B_0x1 = 1;

    /** @brief trigger mode */
    using GPDMA_C12TR2_TRIGM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: at block level: the first burst read of each block transfer is conditioned by one hit trigger (channel x = 12 to 15, for each block if a 2D/repeated block is configured with GPDMA_CxBR1.BRC[10:0] different to 0). (value: 0)
     *          - B_0x1: channel x = 0 to 11, same as 00; channel x=12 to 15, at 2D/repeated block level, the (value: 1)
     *          - B_0x2: at link level: a LLI link transfer is conditioned by one hit trigger. The LLI data transfer (if any) is not conditioned. (value: 2)
     *          - B_0x3: at programmed burst level: If SWREQ = 1, each programmed burst read is conditioned by one hit trigger. If SWREQ=0, each programmed burst that is requested by the selected peripheral, is conditioned by one hit trigger. (value: 3)
     */
        /** @brief at block level: the first burst read of each block transfer is conditioned by one hit trigger (channel x = 12 to 15, for each block if a 2D/repeated block is configured with GPDMA_CxBR1.BRC[10:0] different to 0). */
    constexpr std::uint32_t GPDMA_C12TR2_TRIGM_B_0x0 = 0;
        /** @brief channel x = 0 to 11, same as 00; channel x=12 to 15, at 2D/repeated block level, the */
    constexpr std::uint32_t GPDMA_C12TR2_TRIGM_B_0x1 = 1;
        /** @brief at link level: a LLI link transfer is conditioned by one hit trigger. The LLI data transfer (if any) is not conditioned. */
    constexpr std::uint32_t GPDMA_C12TR2_TRIGM_B_0x2 = 2;
        /** @brief at programmed burst level: If SWREQ = 1, each programmed burst read is conditioned by one hit trigger. If SWREQ=0, each programmed burst that is requested by the selected peripheral, is conditioned by one hit trigger. */
    constexpr std::uint32_t GPDMA_C12TR2_TRIGM_B_0x3 = 3;

    /** @brief trigger event input selection */
    using GPDMA_C12TR2_TRIGSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief trigger event polarity */
    using GPDMA_C12TR2_TRIGPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no trigger (masked trigger event) (value: 0)
     *          - B_0x1: trigger on the rising edge (value: 1)
     *          - B_0x2: trigger on the falling edge (value: 2)
     *          - B_0x3: same as 00 (value: 3)
     */
        /** @brief no trigger (masked trigger event) */
    constexpr std::uint32_t GPDMA_C12TR2_TRIGPOL_B_0x0 = 0;
        /** @brief trigger on the rising edge */
    constexpr std::uint32_t GPDMA_C12TR2_TRIGPOL_B_0x1 = 1;
        /** @brief trigger on the falling edge */
    constexpr std::uint32_t GPDMA_C12TR2_TRIGPOL_B_0x2 = 2;
        /** @brief same as 00 */
    constexpr std::uint32_t GPDMA_C12TR2_TRIGPOL_B_0x3 = 3;

    /** @brief transfer complete event mode */
    using GPDMA_C12TR2_TCEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: at block level (when GPDMA_CxBR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. (value: 0)
     *          - B_0x1: channel x = 0 to 11, same as 00; channel x=12 to 15, at 2D/repeated block level (when GPDMA_CxBR1.BRC[10:0]= 0 and GPDMA_CxBR1.BNDT[15:0]= 0), the complete (and the half) transfer event is generated at the end (respectively half of the end) of the 2D/repeated block. (value: 1)
     *          - B_0x2: at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer (the LLI data transfer being a block transfer or a 2D/repeated block transfer for channel x = 12 to 15), if any data transfer. (value: 2)
     *          - B_0x3: at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address GPDMA_CxLLR.LA[15:2] to zero and clears all the GPDMA_CxLLR update bits (UT1, UT2, UB1, USA, UDA and ULL, plus UT3 and UB2 if present). If the channel transfer is continuous/infinite, no event is generated. (value: 3)
     */
        /** @brief at block level (when GPDMA_CxBR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. */
    constexpr std::uint32_t GPDMA_C12TR2_TCEM_B_0x0 = 0;
        /** @brief channel x = 0 to 11, same as 00; channel x=12 to 15, at 2D/repeated block level (when GPDMA_CxBR1.BRC[10:0]= 0 and GPDMA_CxBR1.BNDT[15:0]= 0), the complete (and the half) transfer event is generated at the end (respectively half of the end) of the 2D/repeated block. */
    constexpr std::uint32_t GPDMA_C12TR2_TCEM_B_0x1 = 1;
        /** @brief at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer (the LLI data transfer being a block transfer or a 2D/repeated block transfer for channel x = 12 to 15), if any data transfer. */
    constexpr std::uint32_t GPDMA_C12TR2_TCEM_B_0x2 = 2;
        /** @brief at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address GPDMA_CxLLR.LA[15:2] to zero and clears all the GPDMA_CxLLR update bits (UT1, UT2, UB1, USA, UDA and ULL, plus UT3 and UB2 if present). If the channel transfer is continuous/infinite, no event is generated. */
    constexpr std::uint32_t GPDMA_C12TR2_TCEM_B_0x3 = 3;

    /** @brief GPDMA channel 12 alternate block register 1 */
    using GPDMA_C12BR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x698, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief block number of data bytes to transfer from the source */
    using GPDMA_C12BR1_BNDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Block repeat counter */
    using GPDMA_C12BR1_BRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief source address decrement */
    using GPDMA_C12BR1_SDEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: At the end of a programmed burst transfer from the source, the GPDMA_CxSAR register is updated by adding the programmed offset GPDMA_CxTR3.SAO to the current GPDMA_CxSAR value (current source address) (value: 0)
     *          - B_0x1: At the end of a programmed burst transfer from the source, the GPDMA_CxSAR register is updated by subtracting the programmed offset GPDMA_CxTR3.SAO to the current GPDMA_CxSAR value (current source address) (value: 1)
     */
        /** @brief At the end of a programmed burst transfer from the source, the GPDMA_CxSAR register is updated by adding the programmed offset GPDMA_CxTR3.SAO to the current GPDMA_CxSAR value (current source address) */
    constexpr std::uint32_t GPDMA_C12BR1_SDEC_B_0x0 = 0;
        /** @brief At the end of a programmed burst transfer from the source, the GPDMA_CxSAR register is updated by subtracting the programmed offset GPDMA_CxTR3.SAO to the current GPDMA_CxSAR value (current source address) */
    constexpr std::uint32_t GPDMA_C12BR1_SDEC_B_0x1 = 1;

    /** @brief destination address decrement */
    using GPDMA_C12BR1_DDEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: At the end of a programmed burst transfer to the destination, the GPDMA_CxDAR register is updated by adding the programmed offset GPDMA_CxTR3.DAO to the current GPDMA_CxDAR value (current destination address) (value: 0)
     *          - B_0x1: At the end of a programmed burst transfer to the destination, the GPDMA_CxDAR register is updated by subtracting the programmed offset GPDMA_CxTR3.DAO to the current GPDMA_CxDAR value (current destination address) (value: 1)
     */
        /** @brief At the end of a programmed burst transfer to the destination, the GPDMA_CxDAR register is updated by adding the programmed offset GPDMA_CxTR3.DAO to the current GPDMA_CxDAR value (current destination address) */
    constexpr std::uint32_t GPDMA_C12BR1_DDEC_B_0x0 = 0;
        /** @brief At the end of a programmed burst transfer to the destination, the GPDMA_CxDAR register is updated by subtracting the programmed offset GPDMA_CxTR3.DAO to the current GPDMA_CxDAR value (current destination address) */
    constexpr std::uint32_t GPDMA_C12BR1_DDEC_B_0x1 = 1;

    /** @brief Block repeat source address decrement */
    using GPDMA_C12BR1_BRSDEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: at the end of a block transfer, the GPDMA_CxSAR register is updated by adding the programmed offset GPDMA_CxBR2.BRSAO to the current GPDMA_CxSAR value (current source address) (value: 0)
     *          - B_0x1: at the end of a block transfer, the GPDMA_CxSAR register is updated by subtracting the programmed offset GPDMA_CxBR2.BRSAO from the current GPDMA_CxSAR value (current source address) (value: 1)
     */
        /** @brief at the end of a block transfer, the GPDMA_CxSAR register is updated by adding the programmed offset GPDMA_CxBR2.BRSAO to the current GPDMA_CxSAR value (current source address) */
    constexpr std::uint32_t GPDMA_C12BR1_BRSDEC_B_0x0 = 0;
        /** @brief at the end of a block transfer, the GPDMA_CxSAR register is updated by subtracting the programmed offset GPDMA_CxBR2.BRSAO from the current GPDMA_CxSAR value (current source address) */
    constexpr std::uint32_t GPDMA_C12BR1_BRSDEC_B_0x1 = 1;

    /** @brief Block repeat destination address decrement */
    using GPDMA_C12BR1_BRDDEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: at the end of a block transfer, the GPDMA_CxDAR register is updated by adding the programmed offset GPDMA_CxBR2.BRDAO to the current GPDMA_CxDAR value (current destination address) (value: 0)
     *          - B_0x1: at the end of a block transfer, the GPDMA_CxDAR register is updated by subtracting the programmed offset GPDMA_CxBR2.BRDAO from the current GPDMA_CxDAR value (current destination address) (value: 1)
     */
        /** @brief at the end of a block transfer, the GPDMA_CxDAR register is updated by adding the programmed offset GPDMA_CxBR2.BRDAO to the current GPDMA_CxDAR value (current destination address) */
    constexpr std::uint32_t GPDMA_C12BR1_BRDDEC_B_0x0 = 0;
        /** @brief at the end of a block transfer, the GPDMA_CxDAR register is updated by subtracting the programmed offset GPDMA_CxBR2.BRDAO from the current GPDMA_CxDAR value (current destination address) */
    constexpr std::uint32_t GPDMA_C12BR1_BRDDEC_B_0x1 = 1;

    /** @brief GPDMA channel 12 source address register */
    using GPDMA_C12SAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x69C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief source address */
    using GPDMA_C12SAR_SA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 12 destination address register */
    using GPDMA_C12DAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination address */
    using GPDMA_C12DAR_DA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 12 transfer register 3 */
    using GPDMA_C12TR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6A4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief source address offset increment */
    using GPDMA_C12TR3_SAO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 13, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination address offset increment */
    using GPDMA_C12TR3_DAO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 13, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 12 block register 2 */
    using GPDMA_C12BR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6A8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Block repeated source address offset */
    using GPDMA_C12BR2_BRSAO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Block repeated destination address offset */
    using GPDMA_C12BR2_BRDAO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 12 alternate linked-list address register */
    using GPDMA_C12LLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6CC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pointer (16-bit low-significant address) to the next linked-list data structure */
    using GPDMA_C12LLR_LA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxLLR register from memory */
    using GPDMA_C12LLR_ULL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxLLR update (value: 0)
     *          - B_0x1: GPDMA_CxLLR update (value: 1)
     */
        /** @brief no GPDMA_CxLLR update */
    constexpr std::uint32_t GPDMA_C12LLR_ULL_B_0x0 = 0;
        /** @brief GPDMA_CxLLR update */
    constexpr std::uint32_t GPDMA_C12LLR_ULL_B_0x1 = 1;

    /** @brief Update GPDMA_CxBR2 from memory */
    using GPDMA_C12LLR_UB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxBR2 update (value: 0)
     *          - B_0x1: GPDMA_CxBR2 update (value: 1)
     */
        /** @brief no GPDMA_CxBR2 update */
    constexpr std::uint32_t GPDMA_C12LLR_UB2_B_0x0 = 0;
        /** @brief GPDMA_CxBR2 update */
    constexpr std::uint32_t GPDMA_C12LLR_UB2_B_0x1 = 1;

    /** @brief Update GPDMA_CxTR3 from memory */
    using GPDMA_C12LLR_UT3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxTR3 update (value: 0)
     *          - B_0x1: GPDMA_CxTR3 update (value: 1)
     */
        /** @brief no GPDMA_CxTR3 update */
    constexpr std::uint32_t GPDMA_C12LLR_UT3_B_0x0 = 0;
        /** @brief GPDMA_CxTR3 update */
    constexpr std::uint32_t GPDMA_C12LLR_UT3_B_0x1 = 1;

    /** @brief Update GPDMA_CxDAR register from memory */
    using GPDMA_C12LLR_UDA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxDAR update (value: 0)
     *          - B_0x1: GPDMA_CxDAR update (value: 1)
     */
        /** @brief no GPDMA_CxDAR update */
    constexpr std::uint32_t GPDMA_C12LLR_UDA_B_0x0 = 0;
        /** @brief GPDMA_CxDAR update */
    constexpr std::uint32_t GPDMA_C12LLR_UDA_B_0x1 = 1;

    /** @brief update GPDMA_CxSAR from memory */
    using GPDMA_C12LLR_USA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxSAR update (value: 0)
     *          - B_0x1: GPDMA_CxSAR update (value: 1)
     */
        /** @brief no GPDMA_CxSAR update */
    constexpr std::uint32_t GPDMA_C12LLR_USA_B_0x0 = 0;
        /** @brief GPDMA_CxSAR update */
    constexpr std::uint32_t GPDMA_C12LLR_USA_B_0x1 = 1;

    /** @brief Update GPDMA_CxBR1 from memory */
    using GPDMA_C12LLR_UB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxBR1 update from memory (GPDMA_CxBR1.BNDT[15:0] restored if any link transfer) (value: 0)
     *          - B_0x1: GPDMA_CxBR1 update (value: 1)
     */
        /** @brief no GPDMA_CxBR1 update from memory (GPDMA_CxBR1.BNDT[15:0] restored if any link transfer) */
    constexpr std::uint32_t GPDMA_C12LLR_UB1_B_0x0 = 0;
        /** @brief GPDMA_CxBR1 update */
    constexpr std::uint32_t GPDMA_C12LLR_UB1_B_0x1 = 1;

    /** @brief Update GPDMA_CxTR2 from memory */
    using GPDMA_C12LLR_UT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxTR2 update (value: 0)
     *          - B_0x1: GPDMA_CxTR2 update (value: 1)
     */
        /** @brief no GPDMA_CxTR2 update */
    constexpr std::uint32_t GPDMA_C12LLR_UT2_B_0x0 = 0;
        /** @brief GPDMA_CxTR2 update */
    constexpr std::uint32_t GPDMA_C12LLR_UT2_B_0x1 = 1;

    /** @brief Update GPDMA_CxTR1 from memory */
    using GPDMA_C12LLR_UT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxTR1 update (value: 0)
     *          - B_0x1: GPDMA_CxTR1 update (value: 1)
     */
        /** @brief no GPDMA_CxTR1 update */
    constexpr std::uint32_t GPDMA_C12LLR_UT1_B_0x0 = 0;
        /** @brief GPDMA_CxTR1 update */
    constexpr std::uint32_t GPDMA_C12LLR_UT1_B_0x1 = 1;

    /** @brief GPDMA channel 13 linked-list base address register */
    using GPDMA_C13LBAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6D0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief linked-list base address of GPDMA channel x */
    using GPDMA_C13LBAR_LBA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 13 flag clear register */
    using GPDMA_C13FCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6DC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transfer complete flag clear */
    using GPDMA_C13FCR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding TCF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C13FCR_TCF_B_0x0 = 0;
        /** @brief corresponding TCF flag cleared */
    constexpr std::uint32_t GPDMA_C13FCR_TCF_B_0x1 = 1;

    /** @brief half transfer flag clear */
    using GPDMA_C13FCR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding HTF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C13FCR_HTF_B_0x0 = 0;
        /** @brief corresponding HTF flag cleared */
    constexpr std::uint32_t GPDMA_C13FCR_HTF_B_0x1 = 1;

    /** @brief data transfer error flag clear */
    using GPDMA_C13FCR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding DTEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C13FCR_DTEF_B_0x0 = 0;
        /** @brief corresponding DTEF flag cleared */
    constexpr std::uint32_t GPDMA_C13FCR_DTEF_B_0x1 = 1;

    /** @brief update link transfer error flag clear */
    using GPDMA_C13FCR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding ULEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C13FCR_ULEF_B_0x0 = 0;
        /** @brief corresponding ULEF flag cleared */
    constexpr std::uint32_t GPDMA_C13FCR_ULEF_B_0x1 = 1;

    /** @brief user setting error flag clear */
    using GPDMA_C13FCR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding USEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C13FCR_USEF_B_0x0 = 0;
        /** @brief corresponding USEF flag cleared */
    constexpr std::uint32_t GPDMA_C13FCR_USEF_B_0x1 = 1;

    /** @brief completed suspension flag clear */
    using GPDMA_C13FCR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding SUSPF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C13FCR_SUSPF_B_0x0 = 0;
        /** @brief corresponding SUSPF flag cleared */
    constexpr std::uint32_t GPDMA_C13FCR_SUSPF_B_0x1 = 1;

    /** @brief trigger overrun flag clear */
    using GPDMA_C13FCR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding TOF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C13FCR_TOF_B_0x0 = 0;
        /** @brief corresponding TOF flag cleared */
    constexpr std::uint32_t GPDMA_C13FCR_TOF_B_0x1 = 1;

    /** @brief GPDMA channel 13 status register */
    using GPDMA_C13SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6E0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief idle flag */
    using GPDMA_C13SR_IDLEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: channel not in idle state (value: 0)
     *          - B_0x1: channel in idle state (value: 1)
     */
        /** @brief channel not in idle state */
    constexpr std::uint32_t GPDMA_C13SR_IDLEF_B_0x0 = 0;
        /** @brief channel in idle state */
    constexpr std::uint32_t GPDMA_C13SR_IDLEF_B_0x1 = 1;

    /** @brief transfer complete flag */
    using GPDMA_C13SR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no transfer complete event (value: 0)
     *          - B_0x1: a transfer complete event occurred (value: 1)
     */
        /** @brief no transfer complete event */
    constexpr std::uint32_t GPDMA_C13SR_TCF_B_0x0 = 0;
        /** @brief a transfer complete event occurred */
    constexpr std::uint32_t GPDMA_C13SR_TCF_B_0x1 = 1;

    /** @brief half transfer flag */
    using GPDMA_C13SR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no half transfer event (value: 0)
     *          - B_0x1: an half transfer event occurred (value: 1)
     */
        /** @brief no half transfer event */
    constexpr std::uint32_t GPDMA_C13SR_HTF_B_0x0 = 0;
        /** @brief an half transfer event occurred */
    constexpr std::uint32_t GPDMA_C13SR_HTF_B_0x1 = 1;

    /** @brief data transfer error flag */
    using GPDMA_C13SR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no data transfer error event (value: 0)
     *          - B_0x1: a master bus error event occurred on a data transfer (value: 1)
     */
        /** @brief no data transfer error event */
    constexpr std::uint32_t GPDMA_C13SR_DTEF_B_0x0 = 0;
        /** @brief a master bus error event occurred on a data transfer */
    constexpr std::uint32_t GPDMA_C13SR_DTEF_B_0x1 = 1;

    /** @brief update link transfer error flag */
    using GPDMA_C13SR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no update link transfer error event (value: 0)
     *          - B_0x1: a master bus error event occurred while updating a linked-list register from memory (value: 1)
     */
        /** @brief no update link transfer error event */
    constexpr std::uint32_t GPDMA_C13SR_ULEF_B_0x0 = 0;
        /** @brief a master bus error event occurred while updating a linked-list register from memory */
    constexpr std::uint32_t GPDMA_C13SR_ULEF_B_0x1 = 1;

    /** @brief user setting error flag */
    using GPDMA_C13SR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no user setting error event (value: 0)
     *          - B_0x1: a user setting error event occurred (value: 1)
     */
        /** @brief no user setting error event */
    constexpr std::uint32_t GPDMA_C13SR_USEF_B_0x0 = 0;
        /** @brief a user setting error event occurred */
    constexpr std::uint32_t GPDMA_C13SR_USEF_B_0x1 = 1;

    /** @brief completed suspension flag */
    using GPDMA_C13SR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no completed suspension event (value: 0)
     *          - B_0x1: a completed suspension event occurred (value: 1)
     */
        /** @brief no completed suspension event */
    constexpr std::uint32_t GPDMA_C13SR_SUSPF_B_0x0 = 0;
        /** @brief a completed suspension event occurred */
    constexpr std::uint32_t GPDMA_C13SR_SUSPF_B_0x1 = 1;

    /** @brief trigger overrun flag */
    using GPDMA_C13SR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no trigger overrun event (value: 0)
     *          - B_0x1: a trigger overrun event occurred (value: 1)
     */
        /** @brief no trigger overrun event */
    constexpr std::uint32_t GPDMA_C13SR_TOF_B_0x0 = 0;
        /** @brief a trigger overrun event occurred */
    constexpr std::uint32_t GPDMA_C13SR_TOF_B_0x1 = 1;

    /** @brief monitored FIFO level */
    using GPDMA_C13SR_FIFOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 13 control register */
    using GPDMA_C13CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x6E4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief enable */
    using GPDMA_C13CR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write: ignored, read: channel disabled (value: 0)
     *          - B_0x1: write: enable channel, read: channel enabled (value: 1)
     */
        /** @brief write: ignored, read: channel disabled */
    constexpr std::uint32_t GPDMA_C13CR_EN_B_0x0 = 0;
        /** @brief write: enable channel, read: channel enabled */
    constexpr std::uint32_t GPDMA_C13CR_EN_B_0x1 = 1;

    /** @brief reset */
    using GPDMA_C13CR_RESET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no channel reset (value: 0)
     *          - B_0x1: channel reset (value: 1)
     */
        /** @brief no channel reset */
    constexpr std::uint32_t GPDMA_C13CR_RESET_B_0x0 = 0;
        /** @brief channel reset */
    constexpr std::uint32_t GPDMA_C13CR_RESET_B_0x1 = 1;

    /** @brief suspend */
    using GPDMA_C13CR_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write: resume channel, read: channel not suspended (value: 0)
     *          - B_0x1: write: suspend channel, read: channel suspended. (value: 1)
     */
        /** @brief write: resume channel, read: channel not suspended */
    constexpr std::uint32_t GPDMA_C13CR_SUSP_B_0x0 = 0;
        /** @brief write: suspend channel, read: channel suspended. */
    constexpr std::uint32_t GPDMA_C13CR_SUSP_B_0x1 = 1;

    /** @brief transfer complete interrupt enable */
    using GPDMA_C13CR_TCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C13CR_TCIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C13CR_TCIE_B_0x1 = 1;

    /** @brief half transfer complete interrupt enable */
    using GPDMA_C13CR_HTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C13CR_HTIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C13CR_HTIE_B_0x1 = 1;

    /** @brief data transfer error interrupt enable */
    using GPDMA_C13CR_DTEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C13CR_DTEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C13CR_DTEIE_B_0x1 = 1;

    /** @brief update link transfer error interrupt enable */
    using GPDMA_C13CR_ULEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C13CR_ULEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C13CR_ULEIE_B_0x1 = 1;

    /** @brief user setting error interrupt enable */
    using GPDMA_C13CR_USEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C13CR_USEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C13CR_USEIE_B_0x1 = 1;

    /** @brief completed suspension interrupt enable */
    using GPDMA_C13CR_SUSPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C13CR_SUSPIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C13CR_SUSPIE_B_0x1 = 1;

    /** @brief trigger overrun interrupt enable */
    using GPDMA_C13CR_TOIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C13CR_TOIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C13CR_TOIE_B_0x1 = 1;

    /** @brief Link step mode */
    using GPDMA_C13CR_LSM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: channel executed for the full linked-list and completed at the end of the last LLI (GPDMA_CxLLR=0). The 16 low-significant bits of the link address are null (LA[15:0]=0) and all the update bits are null (UT1=UB1=UT2=USA=UDA=ULL=0 and UT3=UB2=0 if present). Then GPDMA_CxBR1.BNDT[15:0]=0 and GPDMA_CxBR1.BRC[10:0]=0 if present. (value: 0)
     *          - B_0x1: channel executed once for the current LLI (value: 1)
     */
        /** @brief channel executed for the full linked-list and completed at the end of the last LLI (GPDMA_CxLLR=0). The 16 low-significant bits of the link address are null (LA[15:0]=0) and all the update bits are null (UT1=UB1=UT2=USA=UDA=ULL=0 and UT3=UB2=0 if present). Then GPDMA_CxBR1.BNDT[15:0]=0 and GPDMA_CxBR1.BRC[10:0]=0 if present. */
    constexpr std::uint32_t GPDMA_C13CR_LSM_B_0x0 = 0;
        /** @brief channel executed once for the current LLI */
    constexpr std::uint32_t GPDMA_C13CR_LSM_B_0x1 = 1;

    /** @brief linked-list allocated port */
    using GPDMA_C13CR_LAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C13CR_LAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C13CR_LAP_B_0x1 = 1;

    /** @brief priority level of the channel x GPDMA transfer versus others */
    using GPDMA_C13CR_PRIO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: low priority, low weight (value: 0)
     *          - B_0x1: low priority, mid weight (value: 1)
     *          - B_0x2: low priority, high weight (value: 2)
     *          - B_0x3: high priority (value: 3)
     */
        /** @brief low priority, low weight */
    constexpr std::uint32_t GPDMA_C13CR_PRIO_B_0x0 = 0;
        /** @brief low priority, mid weight */
    constexpr std::uint32_t GPDMA_C13CR_PRIO_B_0x1 = 1;
        /** @brief low priority, high weight */
    constexpr std::uint32_t GPDMA_C13CR_PRIO_B_0x2 = 2;
        /** @brief high priority */
    constexpr std::uint32_t GPDMA_C13CR_PRIO_B_0x3 = 3;

    /** @brief GPDMA channel 13 transfer register 1 */
    using GPDMA_C13TR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x710, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief binary logarithm of the source data width of a burst in bytes */
    using GPDMA_C13TR1_SDW_LOG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: byte (value: 0)
     *          - B_0x1: half-word (2 bytes) (value: 1)
     *          - B_0x2: word (4 bytes) (value: 2)
     *          - B_0x3: user setting error reported and no transfer issued (value: 3)
     */
        /** @brief byte */
    constexpr std::uint32_t GPDMA_C13TR1_SDW_LOG2_B_0x0 = 0;
        /** @brief half-word (2 bytes) */
    constexpr std::uint32_t GPDMA_C13TR1_SDW_LOG2_B_0x1 = 1;
        /** @brief word (4 bytes) */
    constexpr std::uint32_t GPDMA_C13TR1_SDW_LOG2_B_0x2 = 2;
        /** @brief user setting error reported and no transfer issued */
    constexpr std::uint32_t GPDMA_C13TR1_SDW_LOG2_B_0x3 = 3;

    /** @brief source incrementing burst */
    using GPDMA_C13TR1_SINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fixed burst (value: 0)
     *          - B_0x1: contiguously incremented burst (value: 1)
     */
        /** @brief fixed burst */
    constexpr std::uint32_t GPDMA_C13TR1_SINC_B_0x0 = 0;
        /** @brief contiguously incremented burst */
    constexpr std::uint32_t GPDMA_C13TR1_SINC_B_0x1 = 1;

    /** @brief source burst length minus 1, between 0 and 63 */
    using GPDMA_C13TR1_SBL_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief padding/alignment mode */
    using GPDMA_C13TR1_PAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: source data is transferred as right aligned, padded with 0s up to the destination data width (value: 0)
     *          - B_0x1: source data is transferred as right aligned, sign extended up to the destination data width (value: 1)
     */
        /** @brief source data is transferred as right aligned, padded with 0s up to the destination data width */
    constexpr std::uint32_t GPDMA_C13TR1_PAM_B_0x0 = 0;
        /** @brief source data is transferred as right aligned, sign extended up to the destination data width */
    constexpr std::uint32_t GPDMA_C13TR1_PAM_B_0x1 = 1;

    /** @brief source byte exchange within the unaligned half-word of each source word */
    using GPDMA_C13TR1_SBX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no byte-based exchange within the unaligned half-word of each source word (value: 0)
     *          - B_0x1: the two consecutive bytes within the unaligned half-word of each source word are exchanged. (value: 1)
     */
        /** @brief no byte-based exchange within the unaligned half-word of each source word */
    constexpr std::uint32_t GPDMA_C13TR1_SBX_B_0x0 = 0;
        /** @brief the two consecutive bytes within the unaligned half-word of each source word are exchanged. */
    constexpr std::uint32_t GPDMA_C13TR1_SBX_B_0x1 = 1;

    /** @brief source allocated port */
    using GPDMA_C13TR1_SAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C13TR1_SAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C13TR1_SAP_B_0x1 = 1;

    /** @brief security attribute of the GPDMA transfer from the source */
    using GPDMA_C13TR1_SSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPDMA transfer non-secure (value: 0)
     *          - B_0x1: GPDMA transfer secure (value: 1)
     */
        /** @brief GPDMA transfer non-secure */
    constexpr std::uint32_t GPDMA_C13TR1_SSEC_B_0x0 = 0;
        /** @brief GPDMA transfer secure */
    constexpr std::uint32_t GPDMA_C13TR1_SSEC_B_0x1 = 1;

    /** @brief binary logarithm of the destination data width of a burst, in bytes */
    using GPDMA_C13TR1_DDW_LOG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: byte (value: 0)
     *          - B_0x1: half-word (2 bytes) (value: 1)
     *          - B_0x2: word (4 bytes) (value: 2)
     *          - B_0x3: user setting error reported and no transfer issued (value: 3)
     */
        /** @brief byte */
    constexpr std::uint32_t GPDMA_C13TR1_DDW_LOG2_B_0x0 = 0;
        /** @brief half-word (2 bytes) */
    constexpr std::uint32_t GPDMA_C13TR1_DDW_LOG2_B_0x1 = 1;
        /** @brief word (4 bytes) */
    constexpr std::uint32_t GPDMA_C13TR1_DDW_LOG2_B_0x2 = 2;
        /** @brief user setting error reported and no transfer issued */
    constexpr std::uint32_t GPDMA_C13TR1_DDW_LOG2_B_0x3 = 3;

    /** @brief destination incrementing burst */
    using GPDMA_C13TR1_DINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fixed burst (value: 0)
     *          - B_0x1: contiguously incremented burst (value: 1)
     */
        /** @brief fixed burst */
    constexpr std::uint32_t GPDMA_C13TR1_DINC_B_0x0 = 0;
        /** @brief contiguously incremented burst */
    constexpr std::uint32_t GPDMA_C13TR1_DINC_B_0x1 = 1;

    /** @brief destination burst length minus 1, between 0 and 63 */
    using GPDMA_C13TR1_DBL_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination byte exchange */
    using GPDMA_C13TR1_DBX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no byte-based exchange within half-word (value: 0)
     *          - B_0x1: the two consecutive (post PAM) bytes are exchanged in each destination half-word. (value: 1)
     */
        /** @brief no byte-based exchange within half-word */
    constexpr std::uint32_t GPDMA_C13TR1_DBX_B_0x0 = 0;
        /** @brief the two consecutive (post PAM) bytes are exchanged in each destination half-word. */
    constexpr std::uint32_t GPDMA_C13TR1_DBX_B_0x1 = 1;

    /** @brief destination half-word exchange */
    using GPDMA_C13TR1_DHX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no halfword-based exchanged within word (value: 0)
     *          - B_0x1: the two consecutive (post PAM) half-words are exchanged in each destination word. (value: 1)
     */
        /** @brief no halfword-based exchanged within word */
    constexpr std::uint32_t GPDMA_C13TR1_DHX_B_0x0 = 0;
        /** @brief the two consecutive (post PAM) half-words are exchanged in each destination word. */
    constexpr std::uint32_t GPDMA_C13TR1_DHX_B_0x1 = 1;

    /** @brief destination allocated port */
    using GPDMA_C13TR1_DAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C13TR1_DAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C13TR1_DAP_B_0x1 = 1;

    /** @brief security attribute of the GPDMA transfer to the destination */
    using GPDMA_C13TR1_DSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPDMA transfer non-secure (value: 0)
     *          - B_0x1: GPDMA transfer secure (value: 1)
     */
        /** @brief GPDMA transfer non-secure */
    constexpr std::uint32_t GPDMA_C13TR1_DSEC_B_0x0 = 0;
        /** @brief GPDMA transfer secure */
    constexpr std::uint32_t GPDMA_C13TR1_DSEC_B_0x1 = 1;

    /** @brief GPDMA channel 13 transfer register 2 */
    using GPDMA_C13TR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x714, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA hardware request selection */
    using GPDMA_C13TR2_REQSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief software request */
    using GPDMA_C13TR2_SWREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no software request. The selected hardware request REQSEL[6:0] is taken into account. (value: 0)
     *          - B_0x1: software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[6:0] is ignored. (value: 1)
     */
        /** @brief no software request. The selected hardware request REQSEL[6:0] is taken into account. */
    constexpr std::uint32_t GPDMA_C13TR2_SWREQ_B_0x0 = 0;
        /** @brief software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[6:0] is ignored. */
    constexpr std::uint32_t GPDMA_C13TR2_SWREQ_B_0x1 = 1;

    /** @brief destination hardware request */
    using GPDMA_C13TR2_DREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: selected hardware request driven by a source peripheral (request signal taken into account by the GPDMA transfer scheduler over the source/read port) (value: 0)
     *          - B_0x1: selected hardware request driven by a destination peripheral (request signal taken into account by the GPDMA transfer scheduler over the destination/write port) (value: 1)
     */
        /** @brief selected hardware request driven by a source peripheral (request signal taken into account by the GPDMA transfer scheduler over the source/read port) */
    constexpr std::uint32_t GPDMA_C13TR2_DREQ_B_0x0 = 0;
        /** @brief selected hardware request driven by a destination peripheral (request signal taken into account by the GPDMA transfer scheduler over the destination/write port) */
    constexpr std::uint32_t GPDMA_C13TR2_DREQ_B_0x1 = 1;

    /** @brief Block hardware request */
    using GPDMA_C13TR2_BREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a burst level. (value: 0)
     *          - B_0x1: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see ). (value: 1)
     */
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a burst level. */
    constexpr std::uint32_t GPDMA_C13TR2_BREQ_B_0x0 = 0;
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see ). */
    constexpr std::uint32_t GPDMA_C13TR2_BREQ_B_0x1 = 1;

    /** @brief trigger mode */
    using GPDMA_C13TR2_TRIGM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: at block level: the first burst read of each block transfer is conditioned by one hit trigger (channel x = 12 to 15, for each block if a 2D/repeated block is configured with GPDMA_CxBR1.BRC[10:0] different to 0). (value: 0)
     *          - B_0x1: channel x = 0 to 11, same as 00; channel x=12 to 15, at 2D/repeated block level, the (value: 1)
     *          - B_0x2: at link level: a LLI link transfer is conditioned by one hit trigger. The LLI data transfer (if any) is not conditioned. (value: 2)
     *          - B_0x3: at programmed burst level: If SWREQ = 1, each programmed burst read is conditioned by one hit trigger. If SWREQ=0, each programmed burst that is requested by the selected peripheral, is conditioned by one hit trigger. (value: 3)
     */
        /** @brief at block level: the first burst read of each block transfer is conditioned by one hit trigger (channel x = 12 to 15, for each block if a 2D/repeated block is configured with GPDMA_CxBR1.BRC[10:0] different to 0). */
    constexpr std::uint32_t GPDMA_C13TR2_TRIGM_B_0x0 = 0;
        /** @brief channel x = 0 to 11, same as 00; channel x=12 to 15, at 2D/repeated block level, the */
    constexpr std::uint32_t GPDMA_C13TR2_TRIGM_B_0x1 = 1;
        /** @brief at link level: a LLI link transfer is conditioned by one hit trigger. The LLI data transfer (if any) is not conditioned. */
    constexpr std::uint32_t GPDMA_C13TR2_TRIGM_B_0x2 = 2;
        /** @brief at programmed burst level: If SWREQ = 1, each programmed burst read is conditioned by one hit trigger. If SWREQ=0, each programmed burst that is requested by the selected peripheral, is conditioned by one hit trigger. */
    constexpr std::uint32_t GPDMA_C13TR2_TRIGM_B_0x3 = 3;

    /** @brief trigger event input selection */
    using GPDMA_C13TR2_TRIGSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief trigger event polarity */
    using GPDMA_C13TR2_TRIGPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no trigger (masked trigger event) (value: 0)
     *          - B_0x1: trigger on the rising edge (value: 1)
     *          - B_0x2: trigger on the falling edge (value: 2)
     *          - B_0x3: same as 00 (value: 3)
     */
        /** @brief no trigger (masked trigger event) */
    constexpr std::uint32_t GPDMA_C13TR2_TRIGPOL_B_0x0 = 0;
        /** @brief trigger on the rising edge */
    constexpr std::uint32_t GPDMA_C13TR2_TRIGPOL_B_0x1 = 1;
        /** @brief trigger on the falling edge */
    constexpr std::uint32_t GPDMA_C13TR2_TRIGPOL_B_0x2 = 2;
        /** @brief same as 00 */
    constexpr std::uint32_t GPDMA_C13TR2_TRIGPOL_B_0x3 = 3;

    /** @brief transfer complete event mode */
    using GPDMA_C13TR2_TCEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: at block level (when GPDMA_CxBR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. (value: 0)
     *          - B_0x1: channel x = 0 to 11, same as 00; channel x=12 to 15, at 2D/repeated block level (when GPDMA_CxBR1.BRC[10:0]= 0 and GPDMA_CxBR1.BNDT[15:0]= 0), the complete (and the half) transfer event is generated at the end (respectively half of the end) of the 2D/repeated block. (value: 1)
     *          - B_0x2: at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer (the LLI data transfer being a block transfer or a 2D/repeated block transfer for channel x = 12 to 15), if any data transfer. (value: 2)
     *          - B_0x3: at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address GPDMA_CxLLR.LA[15:2] to zero and clears all the GPDMA_CxLLR update bits (UT1, UT2, UB1, USA, UDA and ULL, plus UT3 and UB2 if present). If the channel transfer is continuous/infinite, no event is generated. (value: 3)
     */
        /** @brief at block level (when GPDMA_CxBR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. */
    constexpr std::uint32_t GPDMA_C13TR2_TCEM_B_0x0 = 0;
        /** @brief channel x = 0 to 11, same as 00; channel x=12 to 15, at 2D/repeated block level (when GPDMA_CxBR1.BRC[10:0]= 0 and GPDMA_CxBR1.BNDT[15:0]= 0), the complete (and the half) transfer event is generated at the end (respectively half of the end) of the 2D/repeated block. */
    constexpr std::uint32_t GPDMA_C13TR2_TCEM_B_0x1 = 1;
        /** @brief at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer (the LLI data transfer being a block transfer or a 2D/repeated block transfer for channel x = 12 to 15), if any data transfer. */
    constexpr std::uint32_t GPDMA_C13TR2_TCEM_B_0x2 = 2;
        /** @brief at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address GPDMA_CxLLR.LA[15:2] to zero and clears all the GPDMA_CxLLR update bits (UT1, UT2, UB1, USA, UDA and ULL, plus UT3 and UB2 if present). If the channel transfer is continuous/infinite, no event is generated. */
    constexpr std::uint32_t GPDMA_C13TR2_TCEM_B_0x3 = 3;

    /** @brief GPDMA channel 13 alternate block register 1 */
    using GPDMA_C13BR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x718, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief block number of data bytes to transfer from the source */
    using GPDMA_C13BR1_BNDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Block repeat counter */
    using GPDMA_C13BR1_BRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief source address decrement */
    using GPDMA_C13BR1_SDEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: At the end of a programmed burst transfer from the source, the GPDMA_CxSAR register is updated by adding the programmed offset GPDMA_CxTR3.SAO to the current GPDMA_CxSAR value (current source address) (value: 0)
     *          - B_0x1: At the end of a programmed burst transfer from the source, the GPDMA_CxSAR register is updated by subtracting the programmed offset GPDMA_CxTR3.SAO to the current GPDMA_CxSAR value (current source address) (value: 1)
     */
        /** @brief At the end of a programmed burst transfer from the source, the GPDMA_CxSAR register is updated by adding the programmed offset GPDMA_CxTR3.SAO to the current GPDMA_CxSAR value (current source address) */
    constexpr std::uint32_t GPDMA_C13BR1_SDEC_B_0x0 = 0;
        /** @brief At the end of a programmed burst transfer from the source, the GPDMA_CxSAR register is updated by subtracting the programmed offset GPDMA_CxTR3.SAO to the current GPDMA_CxSAR value (current source address) */
    constexpr std::uint32_t GPDMA_C13BR1_SDEC_B_0x1 = 1;

    /** @brief destination address decrement */
    using GPDMA_C13BR1_DDEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: At the end of a programmed burst transfer to the destination, the GPDMA_CxDAR register is updated by adding the programmed offset GPDMA_CxTR3.DAO to the current GPDMA_CxDAR value (current destination address) (value: 0)
     *          - B_0x1: At the end of a programmed burst transfer to the destination, the GPDMA_CxDAR register is updated by subtracting the programmed offset GPDMA_CxTR3.DAO to the current GPDMA_CxDAR value (current destination address) (value: 1)
     */
        /** @brief At the end of a programmed burst transfer to the destination, the GPDMA_CxDAR register is updated by adding the programmed offset GPDMA_CxTR3.DAO to the current GPDMA_CxDAR value (current destination address) */
    constexpr std::uint32_t GPDMA_C13BR1_DDEC_B_0x0 = 0;
        /** @brief At the end of a programmed burst transfer to the destination, the GPDMA_CxDAR register is updated by subtracting the programmed offset GPDMA_CxTR3.DAO to the current GPDMA_CxDAR value (current destination address) */
    constexpr std::uint32_t GPDMA_C13BR1_DDEC_B_0x1 = 1;

    /** @brief Block repeat source address decrement */
    using GPDMA_C13BR1_BRSDEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: at the end of a block transfer, the GPDMA_CxSAR register is updated by adding the programmed offset GPDMA_CxBR2.BRSAO to the current GPDMA_CxSAR value (current source address) (value: 0)
     *          - B_0x1: at the end of a block transfer, the GPDMA_CxSAR register is updated by subtracting the programmed offset GPDMA_CxBR2.BRSAO from the current GPDMA_CxSAR value (current source address) (value: 1)
     */
        /** @brief at the end of a block transfer, the GPDMA_CxSAR register is updated by adding the programmed offset GPDMA_CxBR2.BRSAO to the current GPDMA_CxSAR value (current source address) */
    constexpr std::uint32_t GPDMA_C13BR1_BRSDEC_B_0x0 = 0;
        /** @brief at the end of a block transfer, the GPDMA_CxSAR register is updated by subtracting the programmed offset GPDMA_CxBR2.BRSAO from the current GPDMA_CxSAR value (current source address) */
    constexpr std::uint32_t GPDMA_C13BR1_BRSDEC_B_0x1 = 1;

    /** @brief Block repeat destination address decrement */
    using GPDMA_C13BR1_BRDDEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: at the end of a block transfer, the GPDMA_CxDAR register is updated by adding the programmed offset GPDMA_CxBR2.BRDAO to the current GPDMA_CxDAR value (current destination address) (value: 0)
     *          - B_0x1: at the end of a block transfer, the GPDMA_CxDAR register is updated by subtracting the programmed offset GPDMA_CxBR2.BRDAO from the current GPDMA_CxDAR value (current destination address) (value: 1)
     */
        /** @brief at the end of a block transfer, the GPDMA_CxDAR register is updated by adding the programmed offset GPDMA_CxBR2.BRDAO to the current GPDMA_CxDAR value (current destination address) */
    constexpr std::uint32_t GPDMA_C13BR1_BRDDEC_B_0x0 = 0;
        /** @brief at the end of a block transfer, the GPDMA_CxDAR register is updated by subtracting the programmed offset GPDMA_CxBR2.BRDAO from the current GPDMA_CxDAR value (current destination address) */
    constexpr std::uint32_t GPDMA_C13BR1_BRDDEC_B_0x1 = 1;

    /** @brief GPDMA channel 13 source address register */
    using GPDMA_C13SAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x71C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief source address */
    using GPDMA_C13SAR_SA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 13 destination address register */
    using GPDMA_C13DAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x720, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination address */
    using GPDMA_C13DAR_DA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 13 transfer register 3 */
    using GPDMA_C13TR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x724, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief source address offset increment */
    using GPDMA_C13TR3_SAO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 13, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination address offset increment */
    using GPDMA_C13TR3_DAO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 13, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 13 block register 2 */
    using GPDMA_C13BR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x728, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Block repeated source address offset */
    using GPDMA_C13BR2_BRSAO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Block repeated destination address offset */
    using GPDMA_C13BR2_BRDAO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 13 alternate linked-list address register */
    using GPDMA_C13LLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x74C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pointer (16-bit low-significant address) to the next linked-list data structure */
    using GPDMA_C13LLR_LA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxLLR register from memory */
    using GPDMA_C13LLR_ULL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxLLR update (value: 0)
     *          - B_0x1: GPDMA_CxLLR update (value: 1)
     */
        /** @brief no GPDMA_CxLLR update */
    constexpr std::uint32_t GPDMA_C13LLR_ULL_B_0x0 = 0;
        /** @brief GPDMA_CxLLR update */
    constexpr std::uint32_t GPDMA_C13LLR_ULL_B_0x1 = 1;

    /** @brief Update GPDMA_CxBR2 from memory */
    using GPDMA_C13LLR_UB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxBR2 update (value: 0)
     *          - B_0x1: GPDMA_CxBR2 update (value: 1)
     */
        /** @brief no GPDMA_CxBR2 update */
    constexpr std::uint32_t GPDMA_C13LLR_UB2_B_0x0 = 0;
        /** @brief GPDMA_CxBR2 update */
    constexpr std::uint32_t GPDMA_C13LLR_UB2_B_0x1 = 1;

    /** @brief Update GPDMA_CxTR3 from memory */
    using GPDMA_C13LLR_UT3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxTR3 update (value: 0)
     *          - B_0x1: GPDMA_CxTR3 update (value: 1)
     */
        /** @brief no GPDMA_CxTR3 update */
    constexpr std::uint32_t GPDMA_C13LLR_UT3_B_0x0 = 0;
        /** @brief GPDMA_CxTR3 update */
    constexpr std::uint32_t GPDMA_C13LLR_UT3_B_0x1 = 1;

    /** @brief Update GPDMA_CxDAR register from memory */
    using GPDMA_C13LLR_UDA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxDAR update (value: 0)
     *          - B_0x1: GPDMA_CxDAR update (value: 1)
     */
        /** @brief no GPDMA_CxDAR update */
    constexpr std::uint32_t GPDMA_C13LLR_UDA_B_0x0 = 0;
        /** @brief GPDMA_CxDAR update */
    constexpr std::uint32_t GPDMA_C13LLR_UDA_B_0x1 = 1;

    /** @brief update GPDMA_CxSAR from memory */
    using GPDMA_C13LLR_USA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxSAR update (value: 0)
     *          - B_0x1: GPDMA_CxSAR update (value: 1)
     */
        /** @brief no GPDMA_CxSAR update */
    constexpr std::uint32_t GPDMA_C13LLR_USA_B_0x0 = 0;
        /** @brief GPDMA_CxSAR update */
    constexpr std::uint32_t GPDMA_C13LLR_USA_B_0x1 = 1;

    /** @brief Update GPDMA_CxBR1 from memory */
    using GPDMA_C13LLR_UB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxBR1 update from memory (GPDMA_CxBR1.BNDT[15:0] restored if any link transfer) (value: 0)
     *          - B_0x1: GPDMA_CxBR1 update (value: 1)
     */
        /** @brief no GPDMA_CxBR1 update from memory (GPDMA_CxBR1.BNDT[15:0] restored if any link transfer) */
    constexpr std::uint32_t GPDMA_C13LLR_UB1_B_0x0 = 0;
        /** @brief GPDMA_CxBR1 update */
    constexpr std::uint32_t GPDMA_C13LLR_UB1_B_0x1 = 1;

    /** @brief Update GPDMA_CxTR2 from memory */
    using GPDMA_C13LLR_UT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxTR2 update (value: 0)
     *          - B_0x1: GPDMA_CxTR2 update (value: 1)
     */
        /** @brief no GPDMA_CxTR2 update */
    constexpr std::uint32_t GPDMA_C13LLR_UT2_B_0x0 = 0;
        /** @brief GPDMA_CxTR2 update */
    constexpr std::uint32_t GPDMA_C13LLR_UT2_B_0x1 = 1;

    /** @brief Update GPDMA_CxTR1 from memory */
    using GPDMA_C13LLR_UT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxTR1 update (value: 0)
     *          - B_0x1: GPDMA_CxTR1 update (value: 1)
     */
        /** @brief no GPDMA_CxTR1 update */
    constexpr std::uint32_t GPDMA_C13LLR_UT1_B_0x0 = 0;
        /** @brief GPDMA_CxTR1 update */
    constexpr std::uint32_t GPDMA_C13LLR_UT1_B_0x1 = 1;

    /** @brief GPDMA channel 14 linked-list base address register */
    using GPDMA_C14LBAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x750, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief linked-list base address of GPDMA channel x */
    using GPDMA_C14LBAR_LBA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 14 flag clear register */
    using GPDMA_C14FCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x75C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transfer complete flag clear */
    using GPDMA_C14FCR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding TCF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C14FCR_TCF_B_0x0 = 0;
        /** @brief corresponding TCF flag cleared */
    constexpr std::uint32_t GPDMA_C14FCR_TCF_B_0x1 = 1;

    /** @brief half transfer flag clear */
    using GPDMA_C14FCR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding HTF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C14FCR_HTF_B_0x0 = 0;
        /** @brief corresponding HTF flag cleared */
    constexpr std::uint32_t GPDMA_C14FCR_HTF_B_0x1 = 1;

    /** @brief data transfer error flag clear */
    using GPDMA_C14FCR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding DTEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C14FCR_DTEF_B_0x0 = 0;
        /** @brief corresponding DTEF flag cleared */
    constexpr std::uint32_t GPDMA_C14FCR_DTEF_B_0x1 = 1;

    /** @brief update link transfer error flag clear */
    using GPDMA_C14FCR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding ULEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C14FCR_ULEF_B_0x0 = 0;
        /** @brief corresponding ULEF flag cleared */
    constexpr std::uint32_t GPDMA_C14FCR_ULEF_B_0x1 = 1;

    /** @brief user setting error flag clear */
    using GPDMA_C14FCR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding USEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C14FCR_USEF_B_0x0 = 0;
        /** @brief corresponding USEF flag cleared */
    constexpr std::uint32_t GPDMA_C14FCR_USEF_B_0x1 = 1;

    /** @brief completed suspension flag clear */
    using GPDMA_C14FCR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding SUSPF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C14FCR_SUSPF_B_0x0 = 0;
        /** @brief corresponding SUSPF flag cleared */
    constexpr std::uint32_t GPDMA_C14FCR_SUSPF_B_0x1 = 1;

    /** @brief trigger overrun flag clear */
    using GPDMA_C14FCR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding TOF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C14FCR_TOF_B_0x0 = 0;
        /** @brief corresponding TOF flag cleared */
    constexpr std::uint32_t GPDMA_C14FCR_TOF_B_0x1 = 1;

    /** @brief GPDMA channel 14 status register */
    using GPDMA_C14SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x760, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief idle flag */
    using GPDMA_C14SR_IDLEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: channel not in idle state (value: 0)
     *          - B_0x1: channel in idle state (value: 1)
     */
        /** @brief channel not in idle state */
    constexpr std::uint32_t GPDMA_C14SR_IDLEF_B_0x0 = 0;
        /** @brief channel in idle state */
    constexpr std::uint32_t GPDMA_C14SR_IDLEF_B_0x1 = 1;

    /** @brief transfer complete flag */
    using GPDMA_C14SR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no transfer complete event (value: 0)
     *          - B_0x1: a transfer complete event occurred (value: 1)
     */
        /** @brief no transfer complete event */
    constexpr std::uint32_t GPDMA_C14SR_TCF_B_0x0 = 0;
        /** @brief a transfer complete event occurred */
    constexpr std::uint32_t GPDMA_C14SR_TCF_B_0x1 = 1;

    /** @brief half transfer flag */
    using GPDMA_C14SR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no half transfer event (value: 0)
     *          - B_0x1: an half transfer event occurred (value: 1)
     */
        /** @brief no half transfer event */
    constexpr std::uint32_t GPDMA_C14SR_HTF_B_0x0 = 0;
        /** @brief an half transfer event occurred */
    constexpr std::uint32_t GPDMA_C14SR_HTF_B_0x1 = 1;

    /** @brief data transfer error flag */
    using GPDMA_C14SR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no data transfer error event (value: 0)
     *          - B_0x1: a master bus error event occurred on a data transfer (value: 1)
     */
        /** @brief no data transfer error event */
    constexpr std::uint32_t GPDMA_C14SR_DTEF_B_0x0 = 0;
        /** @brief a master bus error event occurred on a data transfer */
    constexpr std::uint32_t GPDMA_C14SR_DTEF_B_0x1 = 1;

    /** @brief update link transfer error flag */
    using GPDMA_C14SR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no update link transfer error event (value: 0)
     *          - B_0x1: a master bus error event occurred while updating a linked-list register from memory (value: 1)
     */
        /** @brief no update link transfer error event */
    constexpr std::uint32_t GPDMA_C14SR_ULEF_B_0x0 = 0;
        /** @brief a master bus error event occurred while updating a linked-list register from memory */
    constexpr std::uint32_t GPDMA_C14SR_ULEF_B_0x1 = 1;

    /** @brief user setting error flag */
    using GPDMA_C14SR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no user setting error event (value: 0)
     *          - B_0x1: a user setting error event occurred (value: 1)
     */
        /** @brief no user setting error event */
    constexpr std::uint32_t GPDMA_C14SR_USEF_B_0x0 = 0;
        /** @brief a user setting error event occurred */
    constexpr std::uint32_t GPDMA_C14SR_USEF_B_0x1 = 1;

    /** @brief completed suspension flag */
    using GPDMA_C14SR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no completed suspension event (value: 0)
     *          - B_0x1: a completed suspension event occurred (value: 1)
     */
        /** @brief no completed suspension event */
    constexpr std::uint32_t GPDMA_C14SR_SUSPF_B_0x0 = 0;
        /** @brief a completed suspension event occurred */
    constexpr std::uint32_t GPDMA_C14SR_SUSPF_B_0x1 = 1;

    /** @brief trigger overrun flag */
    using GPDMA_C14SR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no trigger overrun event (value: 0)
     *          - B_0x1: a trigger overrun event occurred (value: 1)
     */
        /** @brief no trigger overrun event */
    constexpr std::uint32_t GPDMA_C14SR_TOF_B_0x0 = 0;
        /** @brief a trigger overrun event occurred */
    constexpr std::uint32_t GPDMA_C14SR_TOF_B_0x1 = 1;

    /** @brief monitored FIFO level */
    using GPDMA_C14SR_FIFOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 14 control register */
    using GPDMA_C14CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x764, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief enable */
    using GPDMA_C14CR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write: ignored, read: channel disabled (value: 0)
     *          - B_0x1: write: enable channel, read: channel enabled (value: 1)
     */
        /** @brief write: ignored, read: channel disabled */
    constexpr std::uint32_t GPDMA_C14CR_EN_B_0x0 = 0;
        /** @brief write: enable channel, read: channel enabled */
    constexpr std::uint32_t GPDMA_C14CR_EN_B_0x1 = 1;

    /** @brief reset */
    using GPDMA_C14CR_RESET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no channel reset (value: 0)
     *          - B_0x1: channel reset (value: 1)
     */
        /** @brief no channel reset */
    constexpr std::uint32_t GPDMA_C14CR_RESET_B_0x0 = 0;
        /** @brief channel reset */
    constexpr std::uint32_t GPDMA_C14CR_RESET_B_0x1 = 1;

    /** @brief suspend */
    using GPDMA_C14CR_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write: resume channel, read: channel not suspended (value: 0)
     *          - B_0x1: write: suspend channel, read: channel suspended. (value: 1)
     */
        /** @brief write: resume channel, read: channel not suspended */
    constexpr std::uint32_t GPDMA_C14CR_SUSP_B_0x0 = 0;
        /** @brief write: suspend channel, read: channel suspended. */
    constexpr std::uint32_t GPDMA_C14CR_SUSP_B_0x1 = 1;

    /** @brief transfer complete interrupt enable */
    using GPDMA_C14CR_TCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C14CR_TCIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C14CR_TCIE_B_0x1 = 1;

    /** @brief half transfer complete interrupt enable */
    using GPDMA_C14CR_HTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C14CR_HTIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C14CR_HTIE_B_0x1 = 1;

    /** @brief data transfer error interrupt enable */
    using GPDMA_C14CR_DTEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C14CR_DTEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C14CR_DTEIE_B_0x1 = 1;

    /** @brief update link transfer error interrupt enable */
    using GPDMA_C14CR_ULEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C14CR_ULEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C14CR_ULEIE_B_0x1 = 1;

    /** @brief user setting error interrupt enable */
    using GPDMA_C14CR_USEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C14CR_USEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C14CR_USEIE_B_0x1 = 1;

    /** @brief completed suspension interrupt enable */
    using GPDMA_C14CR_SUSPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C14CR_SUSPIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C14CR_SUSPIE_B_0x1 = 1;

    /** @brief trigger overrun interrupt enable */
    using GPDMA_C14CR_TOIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C14CR_TOIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C14CR_TOIE_B_0x1 = 1;

    /** @brief Link step mode */
    using GPDMA_C14CR_LSM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: channel executed for the full linked-list and completed at the end of the last LLI (GPDMA_CxLLR=0). The 16 low-significant bits of the link address are null (LA[15:0]=0) and all the update bits are null (UT1=UB1=UT2=USA=UDA=ULL=0 and UT3=UB2=0 if present). Then GPDMA_CxBR1.BNDT[15:0]=0 and GPDMA_CxBR1.BRC[10:0]=0 if present. (value: 0)
     *          - B_0x1: channel executed once for the current LLI (value: 1)
     */
        /** @brief channel executed for the full linked-list and completed at the end of the last LLI (GPDMA_CxLLR=0). The 16 low-significant bits of the link address are null (LA[15:0]=0) and all the update bits are null (UT1=UB1=UT2=USA=UDA=ULL=0 and UT3=UB2=0 if present). Then GPDMA_CxBR1.BNDT[15:0]=0 and GPDMA_CxBR1.BRC[10:0]=0 if present. */
    constexpr std::uint32_t GPDMA_C14CR_LSM_B_0x0 = 0;
        /** @brief channel executed once for the current LLI */
    constexpr std::uint32_t GPDMA_C14CR_LSM_B_0x1 = 1;

    /** @brief linked-list allocated port */
    using GPDMA_C14CR_LAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C14CR_LAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C14CR_LAP_B_0x1 = 1;

    /** @brief priority level of the channel x GPDMA transfer versus others */
    using GPDMA_C14CR_PRIO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: low priority, low weight (value: 0)
     *          - B_0x1: low priority, mid weight (value: 1)
     *          - B_0x2: low priority, high weight (value: 2)
     *          - B_0x3: high priority (value: 3)
     */
        /** @brief low priority, low weight */
    constexpr std::uint32_t GPDMA_C14CR_PRIO_B_0x0 = 0;
        /** @brief low priority, mid weight */
    constexpr std::uint32_t GPDMA_C14CR_PRIO_B_0x1 = 1;
        /** @brief low priority, high weight */
    constexpr std::uint32_t GPDMA_C14CR_PRIO_B_0x2 = 2;
        /** @brief high priority */
    constexpr std::uint32_t GPDMA_C14CR_PRIO_B_0x3 = 3;

    /** @brief GPDMA channel 14 transfer register 1 */
    using GPDMA_C14TR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x790, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief binary logarithm of the source data width of a burst in bytes */
    using GPDMA_C14TR1_SDW_LOG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: byte (value: 0)
     *          - B_0x1: half-word (2 bytes) (value: 1)
     *          - B_0x2: word (4 bytes) (value: 2)
     *          - B_0x3: user setting error reported and no transfer issued (value: 3)
     */
        /** @brief byte */
    constexpr std::uint32_t GPDMA_C14TR1_SDW_LOG2_B_0x0 = 0;
        /** @brief half-word (2 bytes) */
    constexpr std::uint32_t GPDMA_C14TR1_SDW_LOG2_B_0x1 = 1;
        /** @brief word (4 bytes) */
    constexpr std::uint32_t GPDMA_C14TR1_SDW_LOG2_B_0x2 = 2;
        /** @brief user setting error reported and no transfer issued */
    constexpr std::uint32_t GPDMA_C14TR1_SDW_LOG2_B_0x3 = 3;

    /** @brief source incrementing burst */
    using GPDMA_C14TR1_SINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fixed burst (value: 0)
     *          - B_0x1: contiguously incremented burst (value: 1)
     */
        /** @brief fixed burst */
    constexpr std::uint32_t GPDMA_C14TR1_SINC_B_0x0 = 0;
        /** @brief contiguously incremented burst */
    constexpr std::uint32_t GPDMA_C14TR1_SINC_B_0x1 = 1;

    /** @brief source burst length minus 1, between 0 and 63 */
    using GPDMA_C14TR1_SBL_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief padding/alignment mode */
    using GPDMA_C14TR1_PAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: source data is transferred as right aligned, padded with 0s up to the destination data width (value: 0)
     *          - B_0x1: source data is transferred as right aligned, sign extended up to the destination data width (value: 1)
     */
        /** @brief source data is transferred as right aligned, padded with 0s up to the destination data width */
    constexpr std::uint32_t GPDMA_C14TR1_PAM_B_0x0 = 0;
        /** @brief source data is transferred as right aligned, sign extended up to the destination data width */
    constexpr std::uint32_t GPDMA_C14TR1_PAM_B_0x1 = 1;

    /** @brief source byte exchange within the unaligned half-word of each source word */
    using GPDMA_C14TR1_SBX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no byte-based exchange within the unaligned half-word of each source word (value: 0)
     *          - B_0x1: the two consecutive bytes within the unaligned half-word of each source word are exchanged. (value: 1)
     */
        /** @brief no byte-based exchange within the unaligned half-word of each source word */
    constexpr std::uint32_t GPDMA_C14TR1_SBX_B_0x0 = 0;
        /** @brief the two consecutive bytes within the unaligned half-word of each source word are exchanged. */
    constexpr std::uint32_t GPDMA_C14TR1_SBX_B_0x1 = 1;

    /** @brief source allocated port */
    using GPDMA_C14TR1_SAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C14TR1_SAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C14TR1_SAP_B_0x1 = 1;

    /** @brief security attribute of the GPDMA transfer from the source */
    using GPDMA_C14TR1_SSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPDMA transfer non-secure (value: 0)
     *          - B_0x1: GPDMA transfer secure (value: 1)
     */
        /** @brief GPDMA transfer non-secure */
    constexpr std::uint32_t GPDMA_C14TR1_SSEC_B_0x0 = 0;
        /** @brief GPDMA transfer secure */
    constexpr std::uint32_t GPDMA_C14TR1_SSEC_B_0x1 = 1;

    /** @brief binary logarithm of the destination data width of a burst, in bytes */
    using GPDMA_C14TR1_DDW_LOG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: byte (value: 0)
     *          - B_0x1: half-word (2 bytes) (value: 1)
     *          - B_0x2: word (4 bytes) (value: 2)
     *          - B_0x3: user setting error reported and no transfer issued (value: 3)
     */
        /** @brief byte */
    constexpr std::uint32_t GPDMA_C14TR1_DDW_LOG2_B_0x0 = 0;
        /** @brief half-word (2 bytes) */
    constexpr std::uint32_t GPDMA_C14TR1_DDW_LOG2_B_0x1 = 1;
        /** @brief word (4 bytes) */
    constexpr std::uint32_t GPDMA_C14TR1_DDW_LOG2_B_0x2 = 2;
        /** @brief user setting error reported and no transfer issued */
    constexpr std::uint32_t GPDMA_C14TR1_DDW_LOG2_B_0x3 = 3;

    /** @brief destination incrementing burst */
    using GPDMA_C14TR1_DINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fixed burst (value: 0)
     *          - B_0x1: contiguously incremented burst (value: 1)
     */
        /** @brief fixed burst */
    constexpr std::uint32_t GPDMA_C14TR1_DINC_B_0x0 = 0;
        /** @brief contiguously incremented burst */
    constexpr std::uint32_t GPDMA_C14TR1_DINC_B_0x1 = 1;

    /** @brief destination burst length minus 1, between 0 and 63 */
    using GPDMA_C14TR1_DBL_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination byte exchange */
    using GPDMA_C14TR1_DBX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no byte-based exchange within half-word (value: 0)
     *          - B_0x1: the two consecutive (post PAM) bytes are exchanged in each destination half-word. (value: 1)
     */
        /** @brief no byte-based exchange within half-word */
    constexpr std::uint32_t GPDMA_C14TR1_DBX_B_0x0 = 0;
        /** @brief the two consecutive (post PAM) bytes are exchanged in each destination half-word. */
    constexpr std::uint32_t GPDMA_C14TR1_DBX_B_0x1 = 1;

    /** @brief destination half-word exchange */
    using GPDMA_C14TR1_DHX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no halfword-based exchanged within word (value: 0)
     *          - B_0x1: the two consecutive (post PAM) half-words are exchanged in each destination word. (value: 1)
     */
        /** @brief no halfword-based exchanged within word */
    constexpr std::uint32_t GPDMA_C14TR1_DHX_B_0x0 = 0;
        /** @brief the two consecutive (post PAM) half-words are exchanged in each destination word. */
    constexpr std::uint32_t GPDMA_C14TR1_DHX_B_0x1 = 1;

    /** @brief destination allocated port */
    using GPDMA_C14TR1_DAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C14TR1_DAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C14TR1_DAP_B_0x1 = 1;

    /** @brief security attribute of the GPDMA transfer to the destination */
    using GPDMA_C14TR1_DSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPDMA transfer non-secure (value: 0)
     *          - B_0x1: GPDMA transfer secure (value: 1)
     */
        /** @brief GPDMA transfer non-secure */
    constexpr std::uint32_t GPDMA_C14TR1_DSEC_B_0x0 = 0;
        /** @brief GPDMA transfer secure */
    constexpr std::uint32_t GPDMA_C14TR1_DSEC_B_0x1 = 1;

    /** @brief GPDMA channel 14 transfer register 2 */
    using GPDMA_C14TR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x794, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA hardware request selection */
    using GPDMA_C14TR2_REQSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief software request */
    using GPDMA_C14TR2_SWREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no software request. The selected hardware request REQSEL[6:0] is taken into account. (value: 0)
     *          - B_0x1: software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[6:0] is ignored. (value: 1)
     */
        /** @brief no software request. The selected hardware request REQSEL[6:0] is taken into account. */
    constexpr std::uint32_t GPDMA_C14TR2_SWREQ_B_0x0 = 0;
        /** @brief software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[6:0] is ignored. */
    constexpr std::uint32_t GPDMA_C14TR2_SWREQ_B_0x1 = 1;

    /** @brief destination hardware request */
    using GPDMA_C14TR2_DREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: selected hardware request driven by a source peripheral (request signal taken into account by the GPDMA transfer scheduler over the source/read port) (value: 0)
     *          - B_0x1: selected hardware request driven by a destination peripheral (request signal taken into account by the GPDMA transfer scheduler over the destination/write port) (value: 1)
     */
        /** @brief selected hardware request driven by a source peripheral (request signal taken into account by the GPDMA transfer scheduler over the source/read port) */
    constexpr std::uint32_t GPDMA_C14TR2_DREQ_B_0x0 = 0;
        /** @brief selected hardware request driven by a destination peripheral (request signal taken into account by the GPDMA transfer scheduler over the destination/write port) */
    constexpr std::uint32_t GPDMA_C14TR2_DREQ_B_0x1 = 1;

    /** @brief Block hardware request */
    using GPDMA_C14TR2_BREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a burst level. (value: 0)
     *          - B_0x1: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see ). (value: 1)
     */
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a burst level. */
    constexpr std::uint32_t GPDMA_C14TR2_BREQ_B_0x0 = 0;
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see ). */
    constexpr std::uint32_t GPDMA_C14TR2_BREQ_B_0x1 = 1;

    /** @brief trigger mode */
    using GPDMA_C14TR2_TRIGM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: at block level: the first burst read of each block transfer is conditioned by one hit trigger (channel x = 12 to 15, for each block if a 2D/repeated block is configured with GPDMA_CxBR1.BRC[10:0] different to 0). (value: 0)
     *          - B_0x1: channel x = 0 to 11, same as 00; channel x=12 to 15, at 2D/repeated block level, the (value: 1)
     *          - B_0x2: at link level: a LLI link transfer is conditioned by one hit trigger. The LLI data transfer (if any) is not conditioned. (value: 2)
     *          - B_0x3: at programmed burst level: If SWREQ = 1, each programmed burst read is conditioned by one hit trigger. If SWREQ=0, each programmed burst that is requested by the selected peripheral, is conditioned by one hit trigger. (value: 3)
     */
        /** @brief at block level: the first burst read of each block transfer is conditioned by one hit trigger (channel x = 12 to 15, for each block if a 2D/repeated block is configured with GPDMA_CxBR1.BRC[10:0] different to 0). */
    constexpr std::uint32_t GPDMA_C14TR2_TRIGM_B_0x0 = 0;
        /** @brief channel x = 0 to 11, same as 00; channel x=12 to 15, at 2D/repeated block level, the */
    constexpr std::uint32_t GPDMA_C14TR2_TRIGM_B_0x1 = 1;
        /** @brief at link level: a LLI link transfer is conditioned by one hit trigger. The LLI data transfer (if any) is not conditioned. */
    constexpr std::uint32_t GPDMA_C14TR2_TRIGM_B_0x2 = 2;
        /** @brief at programmed burst level: If SWREQ = 1, each programmed burst read is conditioned by one hit trigger. If SWREQ=0, each programmed burst that is requested by the selected peripheral, is conditioned by one hit trigger. */
    constexpr std::uint32_t GPDMA_C14TR2_TRIGM_B_0x3 = 3;

    /** @brief trigger event input selection */
    using GPDMA_C14TR2_TRIGSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief trigger event polarity */
    using GPDMA_C14TR2_TRIGPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no trigger (masked trigger event) (value: 0)
     *          - B_0x1: trigger on the rising edge (value: 1)
     *          - B_0x2: trigger on the falling edge (value: 2)
     *          - B_0x3: same as 00 (value: 3)
     */
        /** @brief no trigger (masked trigger event) */
    constexpr std::uint32_t GPDMA_C14TR2_TRIGPOL_B_0x0 = 0;
        /** @brief trigger on the rising edge */
    constexpr std::uint32_t GPDMA_C14TR2_TRIGPOL_B_0x1 = 1;
        /** @brief trigger on the falling edge */
    constexpr std::uint32_t GPDMA_C14TR2_TRIGPOL_B_0x2 = 2;
        /** @brief same as 00 */
    constexpr std::uint32_t GPDMA_C14TR2_TRIGPOL_B_0x3 = 3;

    /** @brief transfer complete event mode */
    using GPDMA_C14TR2_TCEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: at block level (when GPDMA_CxBR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. (value: 0)
     *          - B_0x1: channel x = 0 to 11, same as 00; channel x=12 to 15, at 2D/repeated block level (when GPDMA_CxBR1.BRC[10:0]= 0 and GPDMA_CxBR1.BNDT[15:0]= 0), the complete (and the half) transfer event is generated at the end (respectively half of the end) of the 2D/repeated block. (value: 1)
     *          - B_0x2: at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer (the LLI data transfer being a block transfer or a 2D/repeated block transfer for channel x = 12 to 15), if any data transfer. (value: 2)
     *          - B_0x3: at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address GPDMA_CxLLR.LA[15:2] to zero and clears all the GPDMA_CxLLR update bits (UT1, UT2, UB1, USA, UDA and ULL, plus UT3 and UB2 if present). If the channel transfer is continuous/infinite, no event is generated. (value: 3)
     */
        /** @brief at block level (when GPDMA_CxBR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. */
    constexpr std::uint32_t GPDMA_C14TR2_TCEM_B_0x0 = 0;
        /** @brief channel x = 0 to 11, same as 00; channel x=12 to 15, at 2D/repeated block level (when GPDMA_CxBR1.BRC[10:0]= 0 and GPDMA_CxBR1.BNDT[15:0]= 0), the complete (and the half) transfer event is generated at the end (respectively half of the end) of the 2D/repeated block. */
    constexpr std::uint32_t GPDMA_C14TR2_TCEM_B_0x1 = 1;
        /** @brief at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer (the LLI data transfer being a block transfer or a 2D/repeated block transfer for channel x = 12 to 15), if any data transfer. */
    constexpr std::uint32_t GPDMA_C14TR2_TCEM_B_0x2 = 2;
        /** @brief at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address GPDMA_CxLLR.LA[15:2] to zero and clears all the GPDMA_CxLLR update bits (UT1, UT2, UB1, USA, UDA and ULL, plus UT3 and UB2 if present). If the channel transfer is continuous/infinite, no event is generated. */
    constexpr std::uint32_t GPDMA_C14TR2_TCEM_B_0x3 = 3;

    /** @brief GPDMA channel 14 alternate block register 1 */
    using GPDMA_C14BR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x798, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief block number of data bytes to transfer from the source */
    using GPDMA_C14BR1_BNDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Block repeat counter */
    using GPDMA_C14BR1_BRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief source address decrement */
    using GPDMA_C14BR1_SDEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: At the end of a programmed burst transfer from the source, the GPDMA_CxSAR register is updated by adding the programmed offset GPDMA_CxTR3.SAO to the current GPDMA_CxSAR value (current source address) (value: 0)
     *          - B_0x1: At the end of a programmed burst transfer from the source, the GPDMA_CxSAR register is updated by subtracting the programmed offset GPDMA_CxTR3.SAO to the current GPDMA_CxSAR value (current source address) (value: 1)
     */
        /** @brief At the end of a programmed burst transfer from the source, the GPDMA_CxSAR register is updated by adding the programmed offset GPDMA_CxTR3.SAO to the current GPDMA_CxSAR value (current source address) */
    constexpr std::uint32_t GPDMA_C14BR1_SDEC_B_0x0 = 0;
        /** @brief At the end of a programmed burst transfer from the source, the GPDMA_CxSAR register is updated by subtracting the programmed offset GPDMA_CxTR3.SAO to the current GPDMA_CxSAR value (current source address) */
    constexpr std::uint32_t GPDMA_C14BR1_SDEC_B_0x1 = 1;

    /** @brief destination address decrement */
    using GPDMA_C14BR1_DDEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: At the end of a programmed burst transfer to the destination, the GPDMA_CxDAR register is updated by adding the programmed offset GPDMA_CxTR3.DAO to the current GPDMA_CxDAR value (current destination address) (value: 0)
     *          - B_0x1: At the end of a programmed burst transfer to the destination, the GPDMA_CxDAR register is updated by subtracting the programmed offset GPDMA_CxTR3.DAO to the current GPDMA_CxDAR value (current destination address) (value: 1)
     */
        /** @brief At the end of a programmed burst transfer to the destination, the GPDMA_CxDAR register is updated by adding the programmed offset GPDMA_CxTR3.DAO to the current GPDMA_CxDAR value (current destination address) */
    constexpr std::uint32_t GPDMA_C14BR1_DDEC_B_0x0 = 0;
        /** @brief At the end of a programmed burst transfer to the destination, the GPDMA_CxDAR register is updated by subtracting the programmed offset GPDMA_CxTR3.DAO to the current GPDMA_CxDAR value (current destination address) */
    constexpr std::uint32_t GPDMA_C14BR1_DDEC_B_0x1 = 1;

    /** @brief Block repeat source address decrement */
    using GPDMA_C14BR1_BRSDEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: at the end of a block transfer, the GPDMA_CxSAR register is updated by adding the programmed offset GPDMA_CxBR2.BRSAO to the current GPDMA_CxSAR value (current source address) (value: 0)
     *          - B_0x1: at the end of a block transfer, the GPDMA_CxSAR register is updated by subtracting the programmed offset GPDMA_CxBR2.BRSAO from the current GPDMA_CxSAR value (current source address) (value: 1)
     */
        /** @brief at the end of a block transfer, the GPDMA_CxSAR register is updated by adding the programmed offset GPDMA_CxBR2.BRSAO to the current GPDMA_CxSAR value (current source address) */
    constexpr std::uint32_t GPDMA_C14BR1_BRSDEC_B_0x0 = 0;
        /** @brief at the end of a block transfer, the GPDMA_CxSAR register is updated by subtracting the programmed offset GPDMA_CxBR2.BRSAO from the current GPDMA_CxSAR value (current source address) */
    constexpr std::uint32_t GPDMA_C14BR1_BRSDEC_B_0x1 = 1;

    /** @brief Block repeat destination address decrement */
    using GPDMA_C14BR1_BRDDEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: at the end of a block transfer, the GPDMA_CxDAR register is updated by adding the programmed offset GPDMA_CxBR2.BRDAO to the current GPDMA_CxDAR value (current destination address) (value: 0)
     *          - B_0x1: at the end of a block transfer, the GPDMA_CxDAR register is updated by subtracting the programmed offset GPDMA_CxBR2.BRDAO from the current GPDMA_CxDAR value (current destination address) (value: 1)
     */
        /** @brief at the end of a block transfer, the GPDMA_CxDAR register is updated by adding the programmed offset GPDMA_CxBR2.BRDAO to the current GPDMA_CxDAR value (current destination address) */
    constexpr std::uint32_t GPDMA_C14BR1_BRDDEC_B_0x0 = 0;
        /** @brief at the end of a block transfer, the GPDMA_CxDAR register is updated by subtracting the programmed offset GPDMA_CxBR2.BRDAO from the current GPDMA_CxDAR value (current destination address) */
    constexpr std::uint32_t GPDMA_C14BR1_BRDDEC_B_0x1 = 1;

    /** @brief GPDMA channel 14 source address register */
    using GPDMA_C14SAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x79C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief source address */
    using GPDMA_C14SAR_SA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 14 destination address register */
    using GPDMA_C14DAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination address */
    using GPDMA_C14DAR_DA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 14 transfer register 3 */
    using GPDMA_C14TR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7A4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief source address offset increment */
    using GPDMA_C14TR3_SAO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 13, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination address offset increment */
    using GPDMA_C14TR3_DAO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 13, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 14 block register 2 */
    using GPDMA_C14BR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7A8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Block repeated source address offset */
    using GPDMA_C14BR2_BRSAO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Block repeated destination address offset */
    using GPDMA_C14BR2_BRDAO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 14 alternate linked-list address register */
    using GPDMA_C14LLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7CC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pointer (16-bit low-significant address) to the next linked-list data structure */
    using GPDMA_C14LLR_LA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxLLR register from memory */
    using GPDMA_C14LLR_ULL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxLLR update (value: 0)
     *          - B_0x1: GPDMA_CxLLR update (value: 1)
     */
        /** @brief no GPDMA_CxLLR update */
    constexpr std::uint32_t GPDMA_C14LLR_ULL_B_0x0 = 0;
        /** @brief GPDMA_CxLLR update */
    constexpr std::uint32_t GPDMA_C14LLR_ULL_B_0x1 = 1;

    /** @brief Update GPDMA_CxBR2 from memory */
    using GPDMA_C14LLR_UB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxBR2 update (value: 0)
     *          - B_0x1: GPDMA_CxBR2 update (value: 1)
     */
        /** @brief no GPDMA_CxBR2 update */
    constexpr std::uint32_t GPDMA_C14LLR_UB2_B_0x0 = 0;
        /** @brief GPDMA_CxBR2 update */
    constexpr std::uint32_t GPDMA_C14LLR_UB2_B_0x1 = 1;

    /** @brief Update GPDMA_CxTR3 from memory */
    using GPDMA_C14LLR_UT3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxTR3 update (value: 0)
     *          - B_0x1: GPDMA_CxTR3 update (value: 1)
     */
        /** @brief no GPDMA_CxTR3 update */
    constexpr std::uint32_t GPDMA_C14LLR_UT3_B_0x0 = 0;
        /** @brief GPDMA_CxTR3 update */
    constexpr std::uint32_t GPDMA_C14LLR_UT3_B_0x1 = 1;

    /** @brief Update GPDMA_CxDAR register from memory */
    using GPDMA_C14LLR_UDA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxDAR update (value: 0)
     *          - B_0x1: GPDMA_CxDAR update (value: 1)
     */
        /** @brief no GPDMA_CxDAR update */
    constexpr std::uint32_t GPDMA_C14LLR_UDA_B_0x0 = 0;
        /** @brief GPDMA_CxDAR update */
    constexpr std::uint32_t GPDMA_C14LLR_UDA_B_0x1 = 1;

    /** @brief update GPDMA_CxSAR from memory */
    using GPDMA_C14LLR_USA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxSAR update (value: 0)
     *          - B_0x1: GPDMA_CxSAR update (value: 1)
     */
        /** @brief no GPDMA_CxSAR update */
    constexpr std::uint32_t GPDMA_C14LLR_USA_B_0x0 = 0;
        /** @brief GPDMA_CxSAR update */
    constexpr std::uint32_t GPDMA_C14LLR_USA_B_0x1 = 1;

    /** @brief Update GPDMA_CxBR1 from memory */
    using GPDMA_C14LLR_UB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxBR1 update from memory (GPDMA_CxBR1.BNDT[15:0] restored if any link transfer) (value: 0)
     *          - B_0x1: GPDMA_CxBR1 update (value: 1)
     */
        /** @brief no GPDMA_CxBR1 update from memory (GPDMA_CxBR1.BNDT[15:0] restored if any link transfer) */
    constexpr std::uint32_t GPDMA_C14LLR_UB1_B_0x0 = 0;
        /** @brief GPDMA_CxBR1 update */
    constexpr std::uint32_t GPDMA_C14LLR_UB1_B_0x1 = 1;

    /** @brief Update GPDMA_CxTR2 from memory */
    using GPDMA_C14LLR_UT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxTR2 update (value: 0)
     *          - B_0x1: GPDMA_CxTR2 update (value: 1)
     */
        /** @brief no GPDMA_CxTR2 update */
    constexpr std::uint32_t GPDMA_C14LLR_UT2_B_0x0 = 0;
        /** @brief GPDMA_CxTR2 update */
    constexpr std::uint32_t GPDMA_C14LLR_UT2_B_0x1 = 1;

    /** @brief Update GPDMA_CxTR1 from memory */
    using GPDMA_C14LLR_UT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxTR1 update (value: 0)
     *          - B_0x1: GPDMA_CxTR1 update (value: 1)
     */
        /** @brief no GPDMA_CxTR1 update */
    constexpr std::uint32_t GPDMA_C14LLR_UT1_B_0x0 = 0;
        /** @brief GPDMA_CxTR1 update */
    constexpr std::uint32_t GPDMA_C14LLR_UT1_B_0x1 = 1;

    /** @brief GPDMA channel 15 linked-list base address register */
    using GPDMA_C15LBAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7D0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief linked-list base address of GPDMA channel x */
    using GPDMA_C15LBAR_LBA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 15 flag clear register */
    using GPDMA_C15FCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7DC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transfer complete flag clear */
    using GPDMA_C15FCR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding TCF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C15FCR_TCF_B_0x0 = 0;
        /** @brief corresponding TCF flag cleared */
    constexpr std::uint32_t GPDMA_C15FCR_TCF_B_0x1 = 1;

    /** @brief half transfer flag clear */
    using GPDMA_C15FCR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding HTF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C15FCR_HTF_B_0x0 = 0;
        /** @brief corresponding HTF flag cleared */
    constexpr std::uint32_t GPDMA_C15FCR_HTF_B_0x1 = 1;

    /** @brief data transfer error flag clear */
    using GPDMA_C15FCR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding DTEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C15FCR_DTEF_B_0x0 = 0;
        /** @brief corresponding DTEF flag cleared */
    constexpr std::uint32_t GPDMA_C15FCR_DTEF_B_0x1 = 1;

    /** @brief update link transfer error flag clear */
    using GPDMA_C15FCR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding ULEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C15FCR_ULEF_B_0x0 = 0;
        /** @brief corresponding ULEF flag cleared */
    constexpr std::uint32_t GPDMA_C15FCR_ULEF_B_0x1 = 1;

    /** @brief user setting error flag clear */
    using GPDMA_C15FCR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding USEF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C15FCR_USEF_B_0x0 = 0;
        /** @brief corresponding USEF flag cleared */
    constexpr std::uint32_t GPDMA_C15FCR_USEF_B_0x1 = 1;

    /** @brief completed suspension flag clear */
    using GPDMA_C15FCR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding SUSPF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C15FCR_SUSPF_B_0x0 = 0;
        /** @brief corresponding SUSPF flag cleared */
    constexpr std::uint32_t GPDMA_C15FCR_SUSPF_B_0x1 = 1;

    /** @brief trigger overrun flag clear */
    using GPDMA_C15FCR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no effect (value: 0)
     *          - B_0x1: corresponding TOF flag cleared (value: 1)
     */
        /** @brief no effect */
    constexpr std::uint32_t GPDMA_C15FCR_TOF_B_0x0 = 0;
        /** @brief corresponding TOF flag cleared */
    constexpr std::uint32_t GPDMA_C15FCR_TOF_B_0x1 = 1;

    /** @brief GPDMA channel 15 status register */
    using GPDMA_C15SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7E0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief idle flag */
    using GPDMA_C15SR_IDLEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: channel not in idle state (value: 0)
     *          - B_0x1: channel in idle state (value: 1)
     */
        /** @brief channel not in idle state */
    constexpr std::uint32_t GPDMA_C15SR_IDLEF_B_0x0 = 0;
        /** @brief channel in idle state */
    constexpr std::uint32_t GPDMA_C15SR_IDLEF_B_0x1 = 1;

    /** @brief transfer complete flag */
    using GPDMA_C15SR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no transfer complete event (value: 0)
     *          - B_0x1: a transfer complete event occurred (value: 1)
     */
        /** @brief no transfer complete event */
    constexpr std::uint32_t GPDMA_C15SR_TCF_B_0x0 = 0;
        /** @brief a transfer complete event occurred */
    constexpr std::uint32_t GPDMA_C15SR_TCF_B_0x1 = 1;

    /** @brief half transfer flag */
    using GPDMA_C15SR_HTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no half transfer event (value: 0)
     *          - B_0x1: an half transfer event occurred (value: 1)
     */
        /** @brief no half transfer event */
    constexpr std::uint32_t GPDMA_C15SR_HTF_B_0x0 = 0;
        /** @brief an half transfer event occurred */
    constexpr std::uint32_t GPDMA_C15SR_HTF_B_0x1 = 1;

    /** @brief data transfer error flag */
    using GPDMA_C15SR_DTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no data transfer error event (value: 0)
     *          - B_0x1: a master bus error event occurred on a data transfer (value: 1)
     */
        /** @brief no data transfer error event */
    constexpr std::uint32_t GPDMA_C15SR_DTEF_B_0x0 = 0;
        /** @brief a master bus error event occurred on a data transfer */
    constexpr std::uint32_t GPDMA_C15SR_DTEF_B_0x1 = 1;

    /** @brief update link transfer error flag */
    using GPDMA_C15SR_ULEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no update link transfer error event (value: 0)
     *          - B_0x1: a master bus error event occurred while updating a linked-list register from memory (value: 1)
     */
        /** @brief no update link transfer error event */
    constexpr std::uint32_t GPDMA_C15SR_ULEF_B_0x0 = 0;
        /** @brief a master bus error event occurred while updating a linked-list register from memory */
    constexpr std::uint32_t GPDMA_C15SR_ULEF_B_0x1 = 1;

    /** @brief user setting error flag */
    using GPDMA_C15SR_USEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no user setting error event (value: 0)
     *          - B_0x1: a user setting error event occurred (value: 1)
     */
        /** @brief no user setting error event */
    constexpr std::uint32_t GPDMA_C15SR_USEF_B_0x0 = 0;
        /** @brief a user setting error event occurred */
    constexpr std::uint32_t GPDMA_C15SR_USEF_B_0x1 = 1;

    /** @brief completed suspension flag */
    using GPDMA_C15SR_SUSPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no completed suspension event (value: 0)
     *          - B_0x1: a completed suspension event occurred (value: 1)
     */
        /** @brief no completed suspension event */
    constexpr std::uint32_t GPDMA_C15SR_SUSPF_B_0x0 = 0;
        /** @brief a completed suspension event occurred */
    constexpr std::uint32_t GPDMA_C15SR_SUSPF_B_0x1 = 1;

    /** @brief trigger overrun flag */
    using GPDMA_C15SR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no trigger overrun event (value: 0)
     *          - B_0x1: a trigger overrun event occurred (value: 1)
     */
        /** @brief no trigger overrun event */
    constexpr std::uint32_t GPDMA_C15SR_TOF_B_0x0 = 0;
        /** @brief a trigger overrun event occurred */
    constexpr std::uint32_t GPDMA_C15SR_TOF_B_0x1 = 1;

    /** @brief monitored FIFO level */
    using GPDMA_C15SR_FIFOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 15 control register */
    using GPDMA_C15CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x7E4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief enable */
    using GPDMA_C15CR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write: ignored, read: channel disabled (value: 0)
     *          - B_0x1: write: enable channel, read: channel enabled (value: 1)
     */
        /** @brief write: ignored, read: channel disabled */
    constexpr std::uint32_t GPDMA_C15CR_EN_B_0x0 = 0;
        /** @brief write: enable channel, read: channel enabled */
    constexpr std::uint32_t GPDMA_C15CR_EN_B_0x1 = 1;

    /** @brief reset */
    using GPDMA_C15CR_RESET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no channel reset (value: 0)
     *          - B_0x1: channel reset (value: 1)
     */
        /** @brief no channel reset */
    constexpr std::uint32_t GPDMA_C15CR_RESET_B_0x0 = 0;
        /** @brief channel reset */
    constexpr std::uint32_t GPDMA_C15CR_RESET_B_0x1 = 1;

    /** @brief suspend */
    using GPDMA_C15CR_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: write: resume channel, read: channel not suspended (value: 0)
     *          - B_0x1: write: suspend channel, read: channel suspended. (value: 1)
     */
        /** @brief write: resume channel, read: channel not suspended */
    constexpr std::uint32_t GPDMA_C15CR_SUSP_B_0x0 = 0;
        /** @brief write: suspend channel, read: channel suspended. */
    constexpr std::uint32_t GPDMA_C15CR_SUSP_B_0x1 = 1;

    /** @brief transfer complete interrupt enable */
    using GPDMA_C15CR_TCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C15CR_TCIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C15CR_TCIE_B_0x1 = 1;

    /** @brief half transfer complete interrupt enable */
    using GPDMA_C15CR_HTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C15CR_HTIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C15CR_HTIE_B_0x1 = 1;

    /** @brief data transfer error interrupt enable */
    using GPDMA_C15CR_DTEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C15CR_DTEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C15CR_DTEIE_B_0x1 = 1;

    /** @brief update link transfer error interrupt enable */
    using GPDMA_C15CR_ULEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C15CR_ULEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C15CR_ULEIE_B_0x1 = 1;

    /** @brief user setting error interrupt enable */
    using GPDMA_C15CR_USEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C15CR_USEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C15CR_USEIE_B_0x1 = 1;

    /** @brief completed suspension interrupt enable */
    using GPDMA_C15CR_SUSPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C15CR_SUSPIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C15CR_SUSPIE_B_0x1 = 1;

    /** @brief trigger overrun interrupt enable */
    using GPDMA_C15CR_TOIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t GPDMA_C15CR_TOIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t GPDMA_C15CR_TOIE_B_0x1 = 1;

    /** @brief Link step mode */
    using GPDMA_C15CR_LSM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: channel executed for the full linked-list and completed at the end of the last LLI (GPDMA_CxLLR=0). The 16 low-significant bits of the link address are null (LA[15:0]=0) and all the update bits are null (UT1=UB1=UT2=USA=UDA=ULL=0 and UT3=UB2=0 if present). Then GPDMA_CxBR1.BNDT[15:0]=0 and GPDMA_CxBR1.BRC[10:0]=0 if present. (value: 0)
     *          - B_0x1: channel executed once for the current LLI (value: 1)
     */
        /** @brief channel executed for the full linked-list and completed at the end of the last LLI (GPDMA_CxLLR=0). The 16 low-significant bits of the link address are null (LA[15:0]=0) and all the update bits are null (UT1=UB1=UT2=USA=UDA=ULL=0 and UT3=UB2=0 if present). Then GPDMA_CxBR1.BNDT[15:0]=0 and GPDMA_CxBR1.BRC[10:0]=0 if present. */
    constexpr std::uint32_t GPDMA_C15CR_LSM_B_0x0 = 0;
        /** @brief channel executed once for the current LLI */
    constexpr std::uint32_t GPDMA_C15CR_LSM_B_0x1 = 1;

    /** @brief linked-list allocated port */
    using GPDMA_C15CR_LAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C15CR_LAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C15CR_LAP_B_0x1 = 1;

    /** @brief priority level of the channel x GPDMA transfer versus others */
    using GPDMA_C15CR_PRIO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: low priority, low weight (value: 0)
     *          - B_0x1: low priority, mid weight (value: 1)
     *          - B_0x2: low priority, high weight (value: 2)
     *          - B_0x3: high priority (value: 3)
     */
        /** @brief low priority, low weight */
    constexpr std::uint32_t GPDMA_C15CR_PRIO_B_0x0 = 0;
        /** @brief low priority, mid weight */
    constexpr std::uint32_t GPDMA_C15CR_PRIO_B_0x1 = 1;
        /** @brief low priority, high weight */
    constexpr std::uint32_t GPDMA_C15CR_PRIO_B_0x2 = 2;
        /** @brief high priority */
    constexpr std::uint32_t GPDMA_C15CR_PRIO_B_0x3 = 3;

    /** @brief GPDMA channel 15 transfer register 1 */
    using GPDMA_C15TR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x810, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief binary logarithm of the source data width of a burst in bytes */
    using GPDMA_C15TR1_SDW_LOG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: byte (value: 0)
     *          - B_0x1: half-word (2 bytes) (value: 1)
     *          - B_0x2: word (4 bytes) (value: 2)
     *          - B_0x3: user setting error reported and no transfer issued (value: 3)
     */
        /** @brief byte */
    constexpr std::uint32_t GPDMA_C15TR1_SDW_LOG2_B_0x0 = 0;
        /** @brief half-word (2 bytes) */
    constexpr std::uint32_t GPDMA_C15TR1_SDW_LOG2_B_0x1 = 1;
        /** @brief word (4 bytes) */
    constexpr std::uint32_t GPDMA_C15TR1_SDW_LOG2_B_0x2 = 2;
        /** @brief user setting error reported and no transfer issued */
    constexpr std::uint32_t GPDMA_C15TR1_SDW_LOG2_B_0x3 = 3;

    /** @brief source incrementing burst */
    using GPDMA_C15TR1_SINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fixed burst (value: 0)
     *          - B_0x1: contiguously incremented burst (value: 1)
     */
        /** @brief fixed burst */
    constexpr std::uint32_t GPDMA_C15TR1_SINC_B_0x0 = 0;
        /** @brief contiguously incremented burst */
    constexpr std::uint32_t GPDMA_C15TR1_SINC_B_0x1 = 1;

    /** @brief source burst length minus 1, between 0 and 63 */
    using GPDMA_C15TR1_SBL_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief padding/alignment mode */
    using GPDMA_C15TR1_PAM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: source data is transferred as right aligned, padded with 0s up to the destination data width (value: 0)
     *          - B_0x1: source data is transferred as right aligned, sign extended up to the destination data width (value: 1)
     */
        /** @brief source data is transferred as right aligned, padded with 0s up to the destination data width */
    constexpr std::uint32_t GPDMA_C15TR1_PAM_B_0x0 = 0;
        /** @brief source data is transferred as right aligned, sign extended up to the destination data width */
    constexpr std::uint32_t GPDMA_C15TR1_PAM_B_0x1 = 1;

    /** @brief source byte exchange within the unaligned half-word of each source word */
    using GPDMA_C15TR1_SBX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no byte-based exchange within the unaligned half-word of each source word (value: 0)
     *          - B_0x1: the two consecutive bytes within the unaligned half-word of each source word are exchanged. (value: 1)
     */
        /** @brief no byte-based exchange within the unaligned half-word of each source word */
    constexpr std::uint32_t GPDMA_C15TR1_SBX_B_0x0 = 0;
        /** @brief the two consecutive bytes within the unaligned half-word of each source word are exchanged. */
    constexpr std::uint32_t GPDMA_C15TR1_SBX_B_0x1 = 1;

    /** @brief source allocated port */
    using GPDMA_C15TR1_SAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C15TR1_SAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C15TR1_SAP_B_0x1 = 1;

    /** @brief security attribute of the GPDMA transfer from the source */
    using GPDMA_C15TR1_SSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPDMA transfer non-secure (value: 0)
     *          - B_0x1: GPDMA transfer secure (value: 1)
     */
        /** @brief GPDMA transfer non-secure */
    constexpr std::uint32_t GPDMA_C15TR1_SSEC_B_0x0 = 0;
        /** @brief GPDMA transfer secure */
    constexpr std::uint32_t GPDMA_C15TR1_SSEC_B_0x1 = 1;

    /** @brief binary logarithm of the destination data width of a burst, in bytes */
    using GPDMA_C15TR1_DDW_LOG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: byte (value: 0)
     *          - B_0x1: half-word (2 bytes) (value: 1)
     *          - B_0x2: word (4 bytes) (value: 2)
     *          - B_0x3: user setting error reported and no transfer issued (value: 3)
     */
        /** @brief byte */
    constexpr std::uint32_t GPDMA_C15TR1_DDW_LOG2_B_0x0 = 0;
        /** @brief half-word (2 bytes) */
    constexpr std::uint32_t GPDMA_C15TR1_DDW_LOG2_B_0x1 = 1;
        /** @brief word (4 bytes) */
    constexpr std::uint32_t GPDMA_C15TR1_DDW_LOG2_B_0x2 = 2;
        /** @brief user setting error reported and no transfer issued */
    constexpr std::uint32_t GPDMA_C15TR1_DDW_LOG2_B_0x3 = 3;

    /** @brief destination incrementing burst */
    using GPDMA_C15TR1_DINC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: fixed burst (value: 0)
     *          - B_0x1: contiguously incremented burst (value: 1)
     */
        /** @brief fixed burst */
    constexpr std::uint32_t GPDMA_C15TR1_DINC_B_0x0 = 0;
        /** @brief contiguously incremented burst */
    constexpr std::uint32_t GPDMA_C15TR1_DINC_B_0x1 = 1;

    /** @brief destination burst length minus 1, between 0 and 63 */
    using GPDMA_C15TR1_DBL_1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination byte exchange */
    using GPDMA_C15TR1_DBX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no byte-based exchange within half-word (value: 0)
     *          - B_0x1: the two consecutive (post PAM) bytes are exchanged in each destination half-word. (value: 1)
     */
        /** @brief no byte-based exchange within half-word */
    constexpr std::uint32_t GPDMA_C15TR1_DBX_B_0x0 = 0;
        /** @brief the two consecutive (post PAM) bytes are exchanged in each destination half-word. */
    constexpr std::uint32_t GPDMA_C15TR1_DBX_B_0x1 = 1;

    /** @brief destination half-word exchange */
    using GPDMA_C15TR1_DHX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no halfword-based exchanged within word (value: 0)
     *          - B_0x1: the two consecutive (post PAM) half-words are exchanged in each destination word. (value: 1)
     */
        /** @brief no halfword-based exchanged within word */
    constexpr std::uint32_t GPDMA_C15TR1_DHX_B_0x0 = 0;
        /** @brief the two consecutive (post PAM) half-words are exchanged in each destination word. */
    constexpr std::uint32_t GPDMA_C15TR1_DHX_B_0x1 = 1;

    /** @brief destination allocated port */
    using GPDMA_C15TR1_DAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: port 0 (AHB) allocated (value: 0)
     *          - B_0x1: port 1 (AHB) allocated (value: 1)
     */
        /** @brief port 0 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C15TR1_DAP_B_0x0 = 0;
        /** @brief port 1 (AHB) allocated */
    constexpr std::uint32_t GPDMA_C15TR1_DAP_B_0x1 = 1;

    /** @brief security attribute of the GPDMA transfer to the destination */
    using GPDMA_C15TR1_DSEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: GPDMA transfer non-secure (value: 0)
     *          - B_0x1: GPDMA transfer secure (value: 1)
     */
        /** @brief GPDMA transfer non-secure */
    constexpr std::uint32_t GPDMA_C15TR1_DSEC_B_0x0 = 0;
        /** @brief GPDMA transfer secure */
    constexpr std::uint32_t GPDMA_C15TR1_DSEC_B_0x1 = 1;

    /** @brief GPDMA channel 15 transfer register 2 */
    using GPDMA_C15TR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x814, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA hardware request selection */
    using GPDMA_C15TR2_REQSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief software request */
    using GPDMA_C15TR2_SWREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no software request. The selected hardware request REQSEL[6:0] is taken into account. (value: 0)
     *          - B_0x1: software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[6:0] is ignored. (value: 1)
     */
        /** @brief no software request. The selected hardware request REQSEL[6:0] is taken into account. */
    constexpr std::uint32_t GPDMA_C15TR2_SWREQ_B_0x0 = 0;
        /** @brief software request for a memory-to-memory transfer. The default selected hardware request as per REQSEL[6:0] is ignored. */
    constexpr std::uint32_t GPDMA_C15TR2_SWREQ_B_0x1 = 1;

    /** @brief destination hardware request */
    using GPDMA_C15TR2_DREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: selected hardware request driven by a source peripheral (request signal taken into account by the GPDMA transfer scheduler over the source/read port) (value: 0)
     *          - B_0x1: selected hardware request driven by a destination peripheral (request signal taken into account by the GPDMA transfer scheduler over the destination/write port) (value: 1)
     */
        /** @brief selected hardware request driven by a source peripheral (request signal taken into account by the GPDMA transfer scheduler over the source/read port) */
    constexpr std::uint32_t GPDMA_C15TR2_DREQ_B_0x0 = 0;
        /** @brief selected hardware request driven by a destination peripheral (request signal taken into account by the GPDMA transfer scheduler over the destination/write port) */
    constexpr std::uint32_t GPDMA_C15TR2_DREQ_B_0x1 = 1;

    /** @brief Block hardware request */
    using GPDMA_C15TR2_BREQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a burst level. (value: 0)
     *          - B_0x1: the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see ). (value: 1)
     */
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a burst level. */
    constexpr std::uint32_t GPDMA_C15TR2_BREQ_B_0x0 = 0;
        /** @brief the selected hardware request is driven by a peripheral with a hardware request/acknowledge protocol at a block level (see ). */
    constexpr std::uint32_t GPDMA_C15TR2_BREQ_B_0x1 = 1;

    /** @brief trigger mode */
    using GPDMA_C15TR2_TRIGM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: at block level: the first burst read of each block transfer is conditioned by one hit trigger (channel x = 12 to 15, for each block if a 2D/repeated block is configured with GPDMA_CxBR1.BRC[10:0] different to 0). (value: 0)
     *          - B_0x1: channel x = 0 to 11, same as 00; channel x=12 to 15, at 2D/repeated block level, the (value: 1)
     *          - B_0x2: at link level: a LLI link transfer is conditioned by one hit trigger. The LLI data transfer (if any) is not conditioned. (value: 2)
     *          - B_0x3: at programmed burst level: If SWREQ = 1, each programmed burst read is conditioned by one hit trigger. If SWREQ=0, each programmed burst that is requested by the selected peripheral, is conditioned by one hit trigger. (value: 3)
     */
        /** @brief at block level: the first burst read of each block transfer is conditioned by one hit trigger (channel x = 12 to 15, for each block if a 2D/repeated block is configured with GPDMA_CxBR1.BRC[10:0] different to 0). */
    constexpr std::uint32_t GPDMA_C15TR2_TRIGM_B_0x0 = 0;
        /** @brief channel x = 0 to 11, same as 00; channel x=12 to 15, at 2D/repeated block level, the */
    constexpr std::uint32_t GPDMA_C15TR2_TRIGM_B_0x1 = 1;
        /** @brief at link level: a LLI link transfer is conditioned by one hit trigger. The LLI data transfer (if any) is not conditioned. */
    constexpr std::uint32_t GPDMA_C15TR2_TRIGM_B_0x2 = 2;
        /** @brief at programmed burst level: If SWREQ = 1, each programmed burst read is conditioned by one hit trigger. If SWREQ=0, each programmed burst that is requested by the selected peripheral, is conditioned by one hit trigger. */
    constexpr std::uint32_t GPDMA_C15TR2_TRIGM_B_0x3 = 3;

    /** @brief trigger event input selection */
    using GPDMA_C15TR2_TRIGSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief trigger event polarity */
    using GPDMA_C15TR2_TRIGPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no trigger (masked trigger event) (value: 0)
     *          - B_0x1: trigger on the rising edge (value: 1)
     *          - B_0x2: trigger on the falling edge (value: 2)
     *          - B_0x3: same as 00 (value: 3)
     */
        /** @brief no trigger (masked trigger event) */
    constexpr std::uint32_t GPDMA_C15TR2_TRIGPOL_B_0x0 = 0;
        /** @brief trigger on the rising edge */
    constexpr std::uint32_t GPDMA_C15TR2_TRIGPOL_B_0x1 = 1;
        /** @brief trigger on the falling edge */
    constexpr std::uint32_t GPDMA_C15TR2_TRIGPOL_B_0x2 = 2;
        /** @brief same as 00 */
    constexpr std::uint32_t GPDMA_C15TR2_TRIGPOL_B_0x3 = 3;

    /** @brief transfer complete event mode */
    using GPDMA_C15TR2_TCEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: at block level (when GPDMA_CxBR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. (value: 0)
     *          - B_0x1: channel x = 0 to 11, same as 00; channel x=12 to 15, at 2D/repeated block level (when GPDMA_CxBR1.BRC[10:0]= 0 and GPDMA_CxBR1.BNDT[15:0]= 0), the complete (and the half) transfer event is generated at the end (respectively half of the end) of the 2D/repeated block. (value: 1)
     *          - B_0x2: at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer (the LLI data transfer being a block transfer or a 2D/repeated block transfer for channel x = 12 to 15), if any data transfer. (value: 2)
     *          - B_0x3: at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address GPDMA_CxLLR.LA[15:2] to zero and clears all the GPDMA_CxLLR update bits (UT1, UT2, UB1, USA, UDA and ULL, plus UT3 and UB2 if present). If the channel transfer is continuous/infinite, no event is generated. (value: 3)
     */
        /** @brief at block level (when GPDMA_CxBR1.BNDT[15:0] = 0): the complete (and the half) transfer event is generated at the (respectively half of the) end of a block. */
    constexpr std::uint32_t GPDMA_C15TR2_TCEM_B_0x0 = 0;
        /** @brief channel x = 0 to 11, same as 00; channel x=12 to 15, at 2D/repeated block level (when GPDMA_CxBR1.BRC[10:0]= 0 and GPDMA_CxBR1.BNDT[15:0]= 0), the complete (and the half) transfer event is generated at the end (respectively half of the end) of the 2D/repeated block. */
    constexpr std::uint32_t GPDMA_C15TR2_TCEM_B_0x1 = 1;
        /** @brief at LLI level: the complete transfer event is generated at the end of the LLI transfer, including the update of the LLI if any. The half transfer event is generated at the half of the LLI data transfer (the LLI data transfer being a block transfer or a 2D/repeated block transfer for channel x = 12 to 15), if any data transfer. */
    constexpr std::uint32_t GPDMA_C15TR2_TCEM_B_0x2 = 2;
        /** @brief at channel level: the complete transfer event is generated at the end of the last LLI transfer. The half transfer event is generated at the half of the data transfer of the last LLI. The last LLI updates the link address GPDMA_CxLLR.LA[15:2] to zero and clears all the GPDMA_CxLLR update bits (UT1, UT2, UB1, USA, UDA and ULL, plus UT3 and UB2 if present). If the channel transfer is continuous/infinite, no event is generated. */
    constexpr std::uint32_t GPDMA_C15TR2_TCEM_B_0x3 = 3;

    /** @brief GPDMA channel 15 alternate block register 1 */
    using GPDMA_C15BR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x818, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief block number of data bytes to transfer from the source */
    using GPDMA_C15BR1_BNDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Block repeat counter */
    using GPDMA_C15BR1_BRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief source address decrement */
    using GPDMA_C15BR1_SDEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: At the end of a programmed burst transfer from the source, the GPDMA_CxSAR register is updated by adding the programmed offset GPDMA_CxTR3.SAO to the current GPDMA_CxSAR value (current source address) (value: 0)
     *          - B_0x1: At the end of a programmed burst transfer from the source, the GPDMA_CxSAR register is updated by subtracting the programmed offset GPDMA_CxTR3.SAO to the current GPDMA_CxSAR value (current source address) (value: 1)
     */
        /** @brief At the end of a programmed burst transfer from the source, the GPDMA_CxSAR register is updated by adding the programmed offset GPDMA_CxTR3.SAO to the current GPDMA_CxSAR value (current source address) */
    constexpr std::uint32_t GPDMA_C15BR1_SDEC_B_0x0 = 0;
        /** @brief At the end of a programmed burst transfer from the source, the GPDMA_CxSAR register is updated by subtracting the programmed offset GPDMA_CxTR3.SAO to the current GPDMA_CxSAR value (current source address) */
    constexpr std::uint32_t GPDMA_C15BR1_SDEC_B_0x1 = 1;

    /** @brief destination address decrement */
    using GPDMA_C15BR1_DDEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: At the end of a programmed burst transfer to the destination, the GPDMA_CxDAR register is updated by adding the programmed offset GPDMA_CxTR3.DAO to the current GPDMA_CxDAR value (current destination address) (value: 0)
     *          - B_0x1: At the end of a programmed burst transfer to the destination, the GPDMA_CxDAR register is updated by subtracting the programmed offset GPDMA_CxTR3.DAO to the current GPDMA_CxDAR value (current destination address) (value: 1)
     */
        /** @brief At the end of a programmed burst transfer to the destination, the GPDMA_CxDAR register is updated by adding the programmed offset GPDMA_CxTR3.DAO to the current GPDMA_CxDAR value (current destination address) */
    constexpr std::uint32_t GPDMA_C15BR1_DDEC_B_0x0 = 0;
        /** @brief At the end of a programmed burst transfer to the destination, the GPDMA_CxDAR register is updated by subtracting the programmed offset GPDMA_CxTR3.DAO to the current GPDMA_CxDAR value (current destination address) */
    constexpr std::uint32_t GPDMA_C15BR1_DDEC_B_0x1 = 1;

    /** @brief Block repeat source address decrement */
    using GPDMA_C15BR1_BRSDEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: at the end of a block transfer, the GPDMA_CxSAR register is updated by adding the programmed offset GPDMA_CxBR2.BRSAO to the current GPDMA_CxSAR value (current source address) (value: 0)
     *          - B_0x1: at the end of a block transfer, the GPDMA_CxSAR register is updated by subtracting the programmed offset GPDMA_CxBR2.BRSAO from the current GPDMA_CxSAR value (current source address) (value: 1)
     */
        /** @brief at the end of a block transfer, the GPDMA_CxSAR register is updated by adding the programmed offset GPDMA_CxBR2.BRSAO to the current GPDMA_CxSAR value (current source address) */
    constexpr std::uint32_t GPDMA_C15BR1_BRSDEC_B_0x0 = 0;
        /** @brief at the end of a block transfer, the GPDMA_CxSAR register is updated by subtracting the programmed offset GPDMA_CxBR2.BRSAO from the current GPDMA_CxSAR value (current source address) */
    constexpr std::uint32_t GPDMA_C15BR1_BRSDEC_B_0x1 = 1;

    /** @brief Block repeat destination address decrement */
    using GPDMA_C15BR1_BRDDEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: at the end of a block transfer, the GPDMA_CxDAR register is updated by adding the programmed offset GPDMA_CxBR2.BRDAO to the current GPDMA_CxDAR value (current destination address) (value: 0)
     *          - B_0x1: at the end of a block transfer, the GPDMA_CxDAR register is updated by subtracting the programmed offset GPDMA_CxBR2.BRDAO from the current GPDMA_CxDAR value (current destination address) (value: 1)
     */
        /** @brief at the end of a block transfer, the GPDMA_CxDAR register is updated by adding the programmed offset GPDMA_CxBR2.BRDAO to the current GPDMA_CxDAR value (current destination address) */
    constexpr std::uint32_t GPDMA_C15BR1_BRDDEC_B_0x0 = 0;
        /** @brief at the end of a block transfer, the GPDMA_CxDAR register is updated by subtracting the programmed offset GPDMA_CxBR2.BRDAO from the current GPDMA_CxDAR value (current destination address) */
    constexpr std::uint32_t GPDMA_C15BR1_BRDDEC_B_0x1 = 1;

    /** @brief GPDMA channel 15 source address register */
    using GPDMA_C15SAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x81C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief source address */
    using GPDMA_C15SAR_SA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 15 destination address register */
    using GPDMA_C15DAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x820, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination address */
    using GPDMA_C15DAR_DA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 15 transfer register 3 */
    using GPDMA_C15TR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x824, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief source address offset increment */
    using GPDMA_C15TR3_SAO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 13, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief destination address offset increment */
    using GPDMA_C15TR3_DAO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 13, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 15 block register 2 */
    using GPDMA_C15BR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x828, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Block repeated source address offset */
    using GPDMA_C15BR2_BRSAO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Block repeated destination address offset */
    using GPDMA_C15BR2_BRDAO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief GPDMA channel 15 alternate linked-list address register */
    using GPDMA_C15LLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x84C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief pointer (16-bit low-significant address) to the next linked-list data structure */
    using GPDMA_C15LLR_LA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Update GPDMA_CxLLR register from memory */
    using GPDMA_C15LLR_ULL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxLLR update (value: 0)
     *          - B_0x1: GPDMA_CxLLR update (value: 1)
     */
        /** @brief no GPDMA_CxLLR update */
    constexpr std::uint32_t GPDMA_C15LLR_ULL_B_0x0 = 0;
        /** @brief GPDMA_CxLLR update */
    constexpr std::uint32_t GPDMA_C15LLR_ULL_B_0x1 = 1;

    /** @brief Update GPDMA_CxBR2 from memory */
    using GPDMA_C15LLR_UB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxBR2 update (value: 0)
     *          - B_0x1: GPDMA_CxBR2 update (value: 1)
     */
        /** @brief no GPDMA_CxBR2 update */
    constexpr std::uint32_t GPDMA_C15LLR_UB2_B_0x0 = 0;
        /** @brief GPDMA_CxBR2 update */
    constexpr std::uint32_t GPDMA_C15LLR_UB2_B_0x1 = 1;

    /** @brief Update GPDMA_CxTR3 from memory */
    using GPDMA_C15LLR_UT3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxTR3 update (value: 0)
     *          - B_0x1: GPDMA_CxTR3 update (value: 1)
     */
        /** @brief no GPDMA_CxTR3 update */
    constexpr std::uint32_t GPDMA_C15LLR_UT3_B_0x0 = 0;
        /** @brief GPDMA_CxTR3 update */
    constexpr std::uint32_t GPDMA_C15LLR_UT3_B_0x1 = 1;

    /** @brief Update GPDMA_CxDAR register from memory */
    using GPDMA_C15LLR_UDA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxDAR update (value: 0)
     *          - B_0x1: GPDMA_CxDAR update (value: 1)
     */
        /** @brief no GPDMA_CxDAR update */
    constexpr std::uint32_t GPDMA_C15LLR_UDA_B_0x0 = 0;
        /** @brief GPDMA_CxDAR update */
    constexpr std::uint32_t GPDMA_C15LLR_UDA_B_0x1 = 1;

    /** @brief update GPDMA_CxSAR from memory */
    using GPDMA_C15LLR_USA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxSAR update (value: 0)
     *          - B_0x1: GPDMA_CxSAR update (value: 1)
     */
        /** @brief no GPDMA_CxSAR update */
    constexpr std::uint32_t GPDMA_C15LLR_USA_B_0x0 = 0;
        /** @brief GPDMA_CxSAR update */
    constexpr std::uint32_t GPDMA_C15LLR_USA_B_0x1 = 1;

    /** @brief Update GPDMA_CxBR1 from memory */
    using GPDMA_C15LLR_UB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxBR1 update from memory (GPDMA_CxBR1.BNDT[15:0] restored if any link transfer) (value: 0)
     *          - B_0x1: GPDMA_CxBR1 update (value: 1)
     */
        /** @brief no GPDMA_CxBR1 update from memory (GPDMA_CxBR1.BNDT[15:0] restored if any link transfer) */
    constexpr std::uint32_t GPDMA_C15LLR_UB1_B_0x0 = 0;
        /** @brief GPDMA_CxBR1 update */
    constexpr std::uint32_t GPDMA_C15LLR_UB1_B_0x1 = 1;

    /** @brief Update GPDMA_CxTR2 from memory */
    using GPDMA_C15LLR_UT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxTR2 update (value: 0)
     *          - B_0x1: GPDMA_CxTR2 update (value: 1)
     */
        /** @brief no GPDMA_CxTR2 update */
    constexpr std::uint32_t GPDMA_C15LLR_UT2_B_0x0 = 0;
        /** @brief GPDMA_CxTR2 update */
    constexpr std::uint32_t GPDMA_C15LLR_UT2_B_0x1 = 1;

    /** @brief Update GPDMA_CxTR1 from memory */
    using GPDMA_C15LLR_UT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no GPDMA_CxTR1 update (value: 0)
     *          - B_0x1: GPDMA_CxTR1 update (value: 1)
     */
        /** @brief no GPDMA_CxTR1 update */
    constexpr std::uint32_t GPDMA_C15LLR_UT1_B_0x0 = 0;
        /** @brief GPDMA_CxTR1 update */
    constexpr std::uint32_t GPDMA_C15LLR_UT1_B_0x1 = 1;

}

#endif
