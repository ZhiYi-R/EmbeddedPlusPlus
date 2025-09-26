/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32N657_ADC12_S_HPP
#define EMBEDDED_PP_STM32N657_ADC12_S_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief ADC common registers */
namespace STM32N657::ADC12_S {

    /** @brief ADC12 common status register */
    using ADC12_CSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x300, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master ADC ready */
    using ADC12_CSR_ADRDY_MST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of Sampling phase flag of the master ADC */
    using ADC12_CSR_EOSMP_MST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of regular conversion of the master ADC */
    using ADC12_CSR_EOC_MST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of regular sequence flag of the master ADC */
    using ADC12_CSR_EOS_MST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Overrun flag of the master ADC */
    using ADC12_CSR_OVR_MST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of injected conversion flag of the master ADC */
    using ADC12_CSR_JEOC_MST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of injected sequence flag of the master ADC */
    using ADC12_CSR_JEOS_MST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog 1 flag of the master ADC */
    using ADC12_CSR_AWD1_MST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog 2 flag of the master ADC */
    using ADC12_CSR_AWD2_MST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog 3 flag of the master ADC */
    using ADC12_CSR_AWD3_MST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Slave ADC ready */
    using ADC12_CSR_ADRDY_SLV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of Sampling phase flag of the slave ADC */
    using ADC12_CSR_EOSMP_SLV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of regular conversion of the slave ADC */
    using ADC12_CSR_EOC_SLV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of regular sequence flag of the slave ADC. This bit is a copy of the EOS bit in the corresponding ADC_ISR register. */
    using ADC12_CSR_EOS_SLV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Overrun flag of the slave ADC */
    using ADC12_CSR_OVR_SLV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of injected conversion flag of the slave ADC */
    using ADC12_CSR_JEOC_SLV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of injected sequence flag of the slave ADC */
    using ADC12_CSR_JEOS_SLV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog 1 flag of the slave ADC */
    using ADC12_CSR_AWD1_SLV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog 2 flag of the slave ADC */
    using ADC12_CSR_AWD2_SLV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog watchdog 3 flag of the slave ADC */
    using ADC12_CSR_AWD3_SLV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC12 common control register */
    using ADC12_CCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x308, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Dual ADC mode selection */
    using ADC12_CCR_DUAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Independent mode (value: 0)
     *          - B_0x1: Combined regular simultaneous + Injected simultaneous mode (value: 1)
     *          - B_0x2: Combined regular simultaneous + Alternate trigger mode (value: 2)
     *          - B_0x3: Combined Interleaved mode + Injected simultaneous mode (value: 3)
     *          - B_0x5: Injected simultaneous mode only (value: 5)
     *          - B_0x6: Regular simultaneous mode only (value: 6)
     *          - B_0x7: Interleaved mode only (value: 7)
     *          - B_0x9: Alternate trigger mode only (value: 9)
     */
        /** @brief Independent mode */
    constexpr std::uint32_t ADC12_CCR_DUAL_B_0x0 = 0;
        /** @brief Combined regular simultaneous + Injected simultaneous mode */
    constexpr std::uint32_t ADC12_CCR_DUAL_B_0x1 = 1;
        /** @brief Combined regular simultaneous + Alternate trigger mode */
    constexpr std::uint32_t ADC12_CCR_DUAL_B_0x2 = 2;
        /** @brief Combined Interleaved mode + Injected simultaneous mode */
    constexpr std::uint32_t ADC12_CCR_DUAL_B_0x3 = 3;
        /** @brief Injected simultaneous mode only */
    constexpr std::uint32_t ADC12_CCR_DUAL_B_0x5 = 5;
        /** @brief Regular simultaneous mode only */
    constexpr std::uint32_t ADC12_CCR_DUAL_B_0x6 = 6;
        /** @brief Interleaved mode only */
    constexpr std::uint32_t ADC12_CCR_DUAL_B_0x7 = 7;
        /** @brief Alternate trigger mode only */
    constexpr std::uint32_t ADC12_CCR_DUAL_B_0x9 = 9;

    /** @brief Delay between two sampling phases */
    using ADC12_CCR_DELAY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Dual ADC mode data format */
    using ADC12_CCR_DAMDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Dual ADC mode without data packing (ADCx_CDR and ADCx_CDR2 registers not used). (value: 0)
     *          - B_0x2: Data formatting mode for any data width (ADCx_CDR data register is used when the data width is less than 16 bits, otherwise ADCx_CDR2 register is used) (value: 2)
     *          - B_0x3: Data formatting mode for data width lower that 8 bits (ADCx_CDR data register is used) (value: 3)
     */
        /** @brief Dual ADC mode without data packing (ADCx_CDR and ADCx_CDR2 registers not used). */
    constexpr std::uint32_t ADC12_CCR_DAMDF_B_0x0 = 0;
        /** @brief Data formatting mode for any data width (ADCx_CDR data register is used when the data width is less than 16 bits, otherwise ADCx_CDR2 register is used) */
    constexpr std::uint32_t ADC12_CCR_DAMDF_B_0x2 = 2;
        /** @brief Data formatting mode for data width lower that 8 bits (ADCx_CDR data register is used) */
    constexpr std::uint32_t ADC12_CCR_DAMDF_B_0x3 = 3;

    /** @brief Vless thansub>REFINTless than/sub> enable */
    using ADC12_CCR_VREFEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Vless thansub>REFINTless than/sub> channel disabled (value: 0)
     *          - B_0x1: Vless thansub>REFINTless than/sub> channel enabled (value: 1)
     */
        /** @brief Vless thansub>REFINTless than/sub> channel disabled */
    constexpr std::uint32_t ADC12_CCR_VREFEN_B_0x0 = 0;
        /** @brief Vless thansub>REFINTless than/sub> channel enabled */
    constexpr std::uint32_t ADC12_CCR_VREFEN_B_0x1 = 1;

    /** @brief VBAT enable */
    using ADC12_CCR_VBATEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Vless thansub>BATless than/sub> channel disabled (value: 0)
     *          - B_0x1: Vless thansub>BATless than/sub> channel enabled (value: 1)
     */
        /** @brief Vless thansub>BATless than/sub> channel disabled */
    constexpr std::uint32_t ADC12_CCR_VBATEN_B_0x0 = 0;
        /** @brief Vless thansub>BATless than/sub> channel enabled */
    constexpr std::uint32_t ADC12_CCR_VBATEN_B_0x1 = 1;

    /** @brief ADC12 common regular data register for Dual mode */
    using ADC12_CDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular data of the master ADC. */
    using ADC12_CDR_RDATA_MST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular data of the slave ADC */
    using ADC12_CDR_RDATA_SLV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC12 common regular data register for Dual mode */
    using ADC12_CDR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x310, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular data of the master/slave alternated ADCs. */
    using ADC12_CDR2_RDATA_ALT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
