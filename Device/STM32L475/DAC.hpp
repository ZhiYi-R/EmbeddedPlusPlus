/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32L475_DAC_HPP
#define EMBEDDED_PP_STM32L475_DAC_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Digital-to-analog converter */
namespace STM32L475::DAC {

    /** @brief control register */
    using CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel1 enable */
    using CR_EN1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel1 trigger enable */
    using CR_TEN1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel1 trigger selection */
    using CR_TSEL1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel1 noise/triangle wave generation enable */
    using CR_WAVE1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel1 mask/amplitude selector */
    using CR_MAMP1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel1 DMA enable */
    using CR_DMAEN1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel1 DMA Underrun Interrupt enable */
    using CR_DMAUDRIE1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC Channel 1 calibration enable */
    using CR_CEN1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel2 enable */
    using CR_EN2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel2 trigger enable */
    using CR_TEN2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel2 trigger selection */
    using CR_TSEL2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel2 noise/triangle wave generation enable */
    using CR_WAVE2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel2 mask/amplitude selector */
    using CR_MAMP2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel2 DMA enable */
    using CR_DMAEN2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel2 DMA underrun interrupt enable */
    using CR_DMAUDRIE2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC Channel 2 calibration enable */
    using CR_CEN2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief software trigger register */
    using SWTRIGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel1 software trigger */
    using SWTRIGR_SWTRIG1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel2 software trigger */
    using SWTRIGR_SWTRIG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief channel1 12-bit right-aligned data holding register */
    using DHR12R1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel1 12-bit right-aligned data */
    using DHR12R1_DACC1DHR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief channel1 12-bit left-aligned data holding register */
    using DHR12L1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel1 12-bit left-aligned data */
    using DHR12L1_DACC1DHR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief channel1 8-bit right-aligned data holding register */
    using DHR8R1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel1 8-bit right-aligned data */
    using DHR8R1_DACC1DHR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief channel2 12-bit right aligned data holding register */
    using DHR12R2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel2 12-bit right-aligned data */
    using DHR12R2_DACC2DHR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief channel2 12-bit left aligned data holding register */
    using DHR12L2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel2 12-bit left-aligned data */
    using DHR12L2_DACC2DHR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief channel2 8-bit right-aligned data holding register */
    using DHR8R2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel2 8-bit right-aligned data */
    using DHR8R2_DACC2DHR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Dual DAC 12-bit right-aligned data holding register */
    using DHR12RD = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel1 12-bit right-aligned data */
    using DHR12RD_DACC1DHR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel2 12-bit right-aligned data */
    using DHR12RD_DACC2DHR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DUAL DAC 12-bit left aligned data holding register */
    using DHR12LD = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel1 12-bit left-aligned data */
    using DHR12LD_DACC1DHR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel2 12-bit left-aligned data */
    using DHR12LD_DACC2DHR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DUAL DAC 8-bit right aligned data holding register */
    using DHR8RD = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel1 8-bit right-aligned data */
    using DHR8RD_DACC1DHR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel2 8-bit right-aligned data */
    using DHR8RD_DACC2DHR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief channel1 data output register */
    using DOR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel1 data output */
    using DOR1_DACC1DOR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief channel2 data output register */
    using DOR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel2 data output */
    using DOR2_DACC2DOR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief status register */
    using SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel1 DMA underrun flag */
    using SR_DMAUDR1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC Channel 1 calibration offset status */
    using SR_CAL_FLAG1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC Channel 1 busy writing sample time flag */
    using SR_BWST1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel2 DMA underrun flag */
    using SR_DMAUDR2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC Channel 2 calibration offset status */
    using SR_CAL_FLAG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC Channel 2 busy writing sample time flag */
    using SR_BWST2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief calibration control register */
    using CCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC Channel 1 offset trimming value */
    using CCR_OTRIM1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC Channel 2 offset trimming value */
    using CCR_OTRIM2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief mode control register */
    using MCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC Channel 1 mode */
    using MCR_MODE1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC Channel 2 mode */
    using MCR_MODE2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sample and Hold sample time register 1 */
    using SHSR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC Channel 1 sample Time */
    using SHSR1_TSAMPLE1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sample and Hold sample time register 2 */
    using SHSR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC Channel 2 sample Time */
    using SHSR2_TSAMPLE2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sample and Hold hold time register */
    using SHHR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC Channel 1 hold Time */
    using SHHR_THOLD1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC Channel 2 hold time */
    using SHHR_THOLD2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sample and Hold refresh time register */
    using SHRR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC Channel 1 refresh Time */
    using SHRR_TREFRESH1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC Channel 2 refresh Time */
    using SHRR_TREFRESH2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
