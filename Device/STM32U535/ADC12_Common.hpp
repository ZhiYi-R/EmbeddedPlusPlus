/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32U535_ADC12_COMMON_HPP
#define EMBEDDED_PP_STM32U535_ADC12_COMMON_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Analog-to-Digital Converter */
namespace STM32U535::ADC12_Common {

    /** @brief ADC common status register */
    using ADC12_CSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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
    /** @brief ADC voltage regulator ready flag of the master ADC */
    using ADC12_CSR_LDORDY_MST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Slave ADC ready */
    using ADC12_CSR_ADRDY_SLV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of Sampling phase flag of the slave ADC */
    using ADC12_CSR_EOSMP_SLV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of regular conversion of the slave ADC */
    using ADC12_CSR_EOC_SLV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of regular sequence flag of the slave ADC */
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
    /** @brief ADC voltage regulator ready flag of the slave ADC */
    using ADC12_CSR_LDORDY_SLV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC_CCR system control register */
    using ADC12_CCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Dual ADC mode selection */
    using ADC12_CCR_DUAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Independent mode (value: 0)
     *          - B_0x1: Combined regular simultaneous + injected simultaneous mode (value: 1)
     *          - B_0x2: Combined regular simultaneous + alternate trigger mode (value: 2)
     *          - B_0x3: Combined Interleaved mode + injected simultaneous mode (value: 3)
     *          - B_0x5: Injected simultaneous mode only (value: 5)
     *          - B_0x6: Regular simultaneous mode only (value: 6)
     *          - B_0x7: Interleaved mode only (value: 7)
     *          - B_0x9: Alternate trigger mode only (value: 9)
     */
        /** @brief Independent mode */
    constexpr std::uint32_t ADC12_CCR_DUAL_B_0x0 = 0;
        /** @brief Combined regular simultaneous + injected simultaneous mode */
    constexpr std::uint32_t ADC12_CCR_DUAL_B_0x1 = 1;
        /** @brief Combined regular simultaneous + alternate trigger mode */
    constexpr std::uint32_t ADC12_CCR_DUAL_B_0x2 = 2;
        /** @brief Combined Interleaved mode + injected simultaneous mode */
    constexpr std::uint32_t ADC12_CCR_DUAL_B_0x3 = 3;
        /** @brief Injected simultaneous mode only */
    constexpr std::uint32_t ADC12_CCR_DUAL_B_0x5 = 5;
        /** @brief Regular simultaneous mode only */
    constexpr std::uint32_t ADC12_CCR_DUAL_B_0x6 = 6;
        /** @brief Interleaved mode only */
    constexpr std::uint32_t ADC12_CCR_DUAL_B_0x7 = 7;
        /** @brief Alternate trigger mode only */
    constexpr std::uint32_t ADC12_CCR_DUAL_B_0x9 = 9;

    /** @brief Delay between the end of the master ADC sampling phase and the beginning of */
    using ADC12_CCR_DELAY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Dual ADC Mode Data Format */
    using ADC12_CCR_DAMDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Dual ADC mode without data packing (ADC12_CDR and ADC12_CDR2 registers not used). (value: 0)
     *          - B_0x2: Data formatting mode for 32 down to 10-bit resolution (value: 2)
     *          - B_0x3: Data formatting mode for 8-bit resolution (value: 3)
     */
        /** @brief Dual ADC mode without data packing (ADC12_CDR and ADC12_CDR2 registers not used). */
    constexpr std::uint32_t ADC12_CCR_DAMDF_B_0x0 = 0;
        /** @brief Data formatting mode for 32 down to 10-bit resolution */
    constexpr std::uint32_t ADC12_CCR_DAMDF_B_0x2 = 2;
        /** @brief Data formatting mode for 8-bit resolution */
    constexpr std::uint32_t ADC12_CCR_DAMDF_B_0x3 = 3;

    /** @brief ADC prescaler */
    using ADC12_CCR_PRESC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: input ADC clock not divided (value: 0)
     *          - B_0x1: input ADC clock divided by 2 (value: 1)
     *          - B_0x2: input ADC clock divided by 4 (value: 2)
     *          - B_0x3: input ADC clock divided by 6 (value: 3)
     *          - B_0x4: input ADC clock divided by 8 (value: 4)
     *          - B_0x5: input ADC clock divided by 10 (value: 5)
     *          - B_0x6: input ADC clock divided by 12 (value: 6)
     *          - B_0x7: input ADC clock divided by 16 (value: 7)
     *          - B_0x8: input ADC clock divided by 32 (value: 8)
     *          - B_0x9: input ADC clock divided by 64 (value: 9)
     *          - B_0xA: input ADC clock divided by 128 (value: 10)
     *          - B_0xB: input ADC clock divided by 256 (value: 11)
     */
        /** @brief input ADC clock not divided */
    constexpr std::uint32_t ADC12_CCR_PRESC_B_0x0 = 0;
        /** @brief input ADC clock divided by 2 */
    constexpr std::uint32_t ADC12_CCR_PRESC_B_0x1 = 1;
        /** @brief input ADC clock divided by 4 */
    constexpr std::uint32_t ADC12_CCR_PRESC_B_0x2 = 2;
        /** @brief input ADC clock divided by 6 */
    constexpr std::uint32_t ADC12_CCR_PRESC_B_0x3 = 3;
        /** @brief input ADC clock divided by 8 */
    constexpr std::uint32_t ADC12_CCR_PRESC_B_0x4 = 4;
        /** @brief input ADC clock divided by 10 */
    constexpr std::uint32_t ADC12_CCR_PRESC_B_0x5 = 5;
        /** @brief input ADC clock divided by 12 */
    constexpr std::uint32_t ADC12_CCR_PRESC_B_0x6 = 6;
        /** @brief input ADC clock divided by 16 */
    constexpr std::uint32_t ADC12_CCR_PRESC_B_0x7 = 7;
        /** @brief input ADC clock divided by 32 */
    constexpr std::uint32_t ADC12_CCR_PRESC_B_0x8 = 8;
        /** @brief input ADC clock divided by 64 */
    constexpr std::uint32_t ADC12_CCR_PRESC_B_0x9 = 9;
        /** @brief input ADC clock divided by 128 */
    constexpr std::uint32_t ADC12_CCR_PRESC_B_0xA = 10;
        /** @brief input ADC clock divided by 256 */
    constexpr std::uint32_t ADC12_CCR_PRESC_B_0xB = 11;

    /** @brief VREFINT enable */
    using ADC12_CCR_VREFEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VREFINT channel disabled (value: 0)
     *          - B_0x1: VREFINT channel enabled (value: 1)
     */
        /** @brief VREFINT channel disabled */
    constexpr std::uint32_t ADC12_CCR_VREFEN_B_0x0 = 0;
        /** @brief VREFINT channel enabled */
    constexpr std::uint32_t ADC12_CCR_VREFEN_B_0x1 = 1;

    /** @brief Temperature sensor voltage selection */
    using ADC12_CCR_VSENSESEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Temperature sensor channel disabled (value: 0)
     *          - B_0x1: Temperature sensor channel enabled (value: 1)
     */
        /** @brief Temperature sensor channel disabled */
    constexpr std::uint32_t ADC12_CCR_VSENSESEL_B_0x0 = 0;
        /** @brief Temperature sensor channel enabled */
    constexpr std::uint32_t ADC12_CCR_VSENSESEL_B_0x1 = 1;

    /** @brief VBAT enable */
    using ADC12_CCR_VBATEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: VBAT channel disabled (value: 0)
     *          - B_0x1: VBAT channel enabled (value: 1)
     */
        /** @brief VBAT channel disabled */
    constexpr std::uint32_t ADC12_CCR_VBATEN_B_0x0 = 0;
        /** @brief VBAT channel enabled */
    constexpr std::uint32_t ADC12_CCR_VBATEN_B_0x1 = 1;

    /** @brief ADC common regular data register for dual mode */
    using ADC12_CDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular data of the master ADC. */
    using ADC12_CDR_RDATA_MST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular data of the slave ADC */
    using ADC12_CDR_RDATA_SLV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ADC common regular data register for 32-bit dual mode */
    using ADC12_CDR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Regular data of the master/slave alternated ADCs */
    using ADC12_CDR2_RDATA_ALT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
