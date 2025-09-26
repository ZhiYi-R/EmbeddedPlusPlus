/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32U585_SEC_ADC12_HPP
#define EMBEDDED_PP_STM32U585_SEC_ADC12_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief ADC common registers */
namespace STM32U585::SEC_ADC12 {

    /** @brief ADC_CCR system control register */
    using ADC12_CCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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

}

#endif
