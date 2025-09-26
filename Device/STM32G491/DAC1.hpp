/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32G491_DAC1_HPP
#define EMBEDDED_PP_STM32G491_DAC1_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Digital-to-analog converter */
namespace STM32G491::DAC1 {

    /** @brief DAC control register */
    using DAC_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel1 enable This bit is set and cleared by software to enable/disable DAC channel1. */
    using DAC_CR_EN1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel1 trigger enable */
    using DAC_CR_TEN1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel1 trigger selection These bits select the external event used to trigger DAC channel1. Note: Only used if bit TEN1 = 1 (DAC channel1 trigger enabled). */
    using DAC_CR_TSEL1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel1 noise/triangle wave generation enable These bits are set and cleared by software. Note: Only used if bit TEN1 = 1 (DAC channel1 trigger enabled). */
    using DAC_CR_WAVE1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel1 mask/amplitude selector These bits are written by software to select mask in wave generation mode or amplitude in triangle generation mode. = 1011: Unmask bits[11:0] of LFSR/ triangle amplitude equal to 4095 */
    using DAC_CR_MAMP1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel1 DMA enable This bit is set and cleared by software. */
    using DAC_CR_DMAEN1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel1 DMA Underrun Interrupt enable This bit is set and cleared by software. */
    using DAC_CR_DMAUDRIE1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC Channel 1 calibration enable This bit is set and cleared by software to enable/disable DAC channel 1 calibration, it can be written only if bit EN1=0 into DAC_CR (the calibration mode can be entered/exit only when the DAC channel is disabled) Otherwise, the write operation is ignored. */
    using DAC_CR_CEN1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel2 enable This bit is set and cleared by software to enable/disable DAC channel2. */
    using DAC_CR_EN2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel2 trigger enable */
    using DAC_CR_TEN2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel2 trigger selection These bits select the external event used to trigger DAC channel2 Note: Only used if bit TEN2 = 1 (DAC channel2 trigger enabled). */
    using DAC_CR_TSEL2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel2 noise/triangle wave generation enable These bits are set/reset by software. 1x: Triangle wave generation enabled Note: Only used if bit TEN2 = 1 (DAC channel2 trigger enabled) */
    using DAC_CR_WAVE2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel2 mask/amplitude selector These bits are written by software to select mask in wave generation mode or amplitude in triangle generation mode. = 1011: Unmask bits[11:0] of LFSR/ triangle amplitude equal to 4095 */
    using DAC_CR_MAMP2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel2 DMA enable This bit is set and cleared by software. */
    using DAC_CR_DMAEN2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel2 DMA underrun interrupt enable This bit is set and cleared by software. */
    using DAC_CR_DMAUDRIE2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC Channel 2 calibration enable This bit is set and cleared by software to enable/disable DAC channel 2 calibration, it can be written only if bit EN2=0 into DAC_CR (the calibration mode can be entered/exit only when the DAC channel is disabled) Otherwise, the write operation is ignored. */
    using DAC_CR_CEN2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC software trigger register */
    using DAC_SWTRGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel1 software trigger This bit is set by software to trigger the DAC in software trigger mode. Note: This bit is cleared by hardware (one APB1 clock cycle later) once the DAC_DHR1 register value has been loaded into the DAC_DOR1 register. */
    using DAC_SWTRGR_SWTRIG1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel2 software trigger This bit is set by software to trigger the DAC in software trigger mode. Note: This bit is cleared by hardware (one APB1 clock cycle later) once the DAC_DHR2 register value has been loaded into the DAC_DOR2 register. */
    using DAC_SWTRGR_SWTRIG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel1 software trigger B */
    using DAC_SWTRGR_SWTRIGB1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel2 software trigger B */
    using DAC_SWTRGR_SWTRIGB2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel1 12-bit right-aligned data holding register */
    using DAC_DHR12R1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel1 12-bit right-aligned data These bits are written by software which specifies 12-bit data for DAC channel1. */
    using DAC_DHR12R1_DACC1DHR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel1 12-bit right-aligned data B */
    using DAC_DHR12R1_DACC1DHRB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel1 12-bit left aligned data holding register */
    using DAC_DHR12L1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel1 12-bit left-aligned data These bits are written by software which specifies 12-bit data for DAC channel1. */
    using DAC_DHR12L1_DACC1DHR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel1 12-bit left-aligned data B */
    using DAC_DHR12L1_DACC1DHRB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel1 8-bit right aligned data holding register */
    using DAC_DHR8R1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel1 8-bit right-aligned data These bits are written by software which specifies 8-bit data for DAC channel1. */
    using DAC_DHR8R1_DACC1DHR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel1 8-bit right-aligned data */
    using DAC_DHR8R1_DACC1DHRB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel2 12-bit right aligned data holding register */
    using DAC_DHR12R2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel2 12-bit right-aligned data These bits are written by software which specifies 12-bit data for DAC channel2. */
    using DAC_DHR12R2_DACC2DHR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel2 12-bit right-aligned data */
    using DAC_DHR12R2_DACC2DHRB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel2 12-bit left aligned data holding register */
    using DAC_DHR12L2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel2 12-bit left-aligned data These bits are written by software which specify 12-bit data for DAC channel2. */
    using DAC_DHR12L2_DACC2DHR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel2 12-bit left-aligned data B */
    using DAC_DHR12L2_DACC2DHRB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel2 8-bit right-aligned data holding register */
    using DAC_DHR8R2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel2 8-bit right-aligned data These bits are written by software which specifies 8-bit data for DAC channel2. */
    using DAC_DHR8R2_DACC2DHR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel2 8-bit right-aligned data */
    using DAC_DHR8R2_DACC2DHRB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Dual DAC 12-bit right-aligned data holding register */
    using DAC_DHR12RD = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel1 12-bit right-aligned data These bits are written by software which specifies 12-bit data for DAC channel1. */
    using DAC_DHR12RD_DACC1DHR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel2 12-bit right-aligned data These bits are written by software which specifies 12-bit data for DAC channel2. */
    using DAC_DHR12RD_DACC2DHR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DUAL DAC 12-bit left aligned data holding register */
    using DAC_DHR12LD = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel1 12-bit left-aligned data These bits are written by software which specifies 12-bit data for DAC channel1. */
    using DAC_DHR12LD_DACC1DHR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel2 12-bit left-aligned data These bits are written by software which specifies 12-bit data for DAC channel2. */
    using DAC_DHR12LD_DACC2DHR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DUAL DAC 8-bit right aligned data holding register */
    using DAC_DHR8RD = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel1 8-bit right-aligned data These bits are written by software which specifies 8-bit data for DAC channel1. */
    using DAC_DHR8RD_DACC1DHR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel2 8-bit right-aligned data These bits are written by software which specifies 8-bit data for DAC channel2. */
    using DAC_DHR8RD_DACC2DHR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel1 data output register */
    using DAC_DOR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel1 data output These bits are read-only, they contain data output for DAC channel1. */
    using DAC_DOR1_DACC1DOR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel1 data output */
    using DAC_DOR1_DACC1DORB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel2 data output register */
    using DAC_DOR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel2 data output These bits are read-only, they contain data output for DAC channel2. */
    using DAC_DOR2_DACC2DOR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel2 data output */
    using DAC_DOR2_DACC2DORB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC status register */
    using DAC_SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel1 ready status bit */
    using DAC_SR_DAC1RDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel1 output register status bit */
    using DAC_SR_DORSTAT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel1 DMA underrun flag This bit is set by hardware and cleared by software (by writing it to 1). */
    using DAC_SR_DMAUDR1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC Channel 1 calibration offset status This bit is set and cleared by hardware */
    using DAC_SR_CAL_FLAG1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC Channel 1 busy writing sample time flag This bit is systematically set just after Sample & Hold mode enable and is set each time the software writes the register DAC_SHSR1, It is cleared by hardware when the write operation of DAC_SHSR1 is complete. (It takes about 3LSI periods of synchronization). */
    using DAC_SR_BWST1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel 2 ready status bit */
    using DAC_SR_DAC2RDY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel 2 output register status bit */
    using DAC_SR_DORSTAT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC channel2 DMA underrun flag This bit is set by hardware and cleared by software (by writing it to 1). */
    using DAC_SR_DMAUDR2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC Channel 2 calibration offset status This bit is set and cleared by hardware */
    using DAC_SR_CAL_FLAG2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC Channel 2 busy writing sample time flag This bit is systematically set just after Sample & Hold mode enable and is set each time the software writes the register DAC_SHSR2, It is cleared by hardware when the write operation of DAC_SHSR2 is complete. (It takes about 3 LSI periods of synchronization). */
    using DAC_SR_BWST2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC calibration control register */
    using DAC_CCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC Channel 1 offset trimming value */
    using DAC_CCR_OTRIM1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC Channel 2 offset trimming value */
    using DAC_CCR_OTRIM2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC mode control register */
    using DAC_MCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC Channel 1 mode These bits can be written only when the DAC is disabled and not in the calibration mode (when bit EN1=0 and bit CEN1 =0 in the DAC_CR register). If EN1=1 or CEN1 =1 the write operation is ignored. They can be set and cleared by software to select the DAC Channel 1 mode: DAC Channel 1 in normal Mode DAC Channel 1 in sample &amp; hold mode */
    using DAC_MCR_MODE1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC Channel1 DMA double data mode */
    using DAC_MCR_DMADOUBLE1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable signed format for DAC channel1 */
    using DAC_MCR_SINFORMAT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief High frequency interface mode selection */
    using DAC_MCR_HFSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC Channel 2 mode These bits can be written only when the DAC is disabled and not in the calibration mode (when bit EN2=0 and bit CEN2 =0 in the DAC_CR register). If EN2=1 or CEN2 =1 the write operation is ignored. They can be set and cleared by software to select the DAC Channel 2 mode: DAC Channel 2 in normal Mode DAC Channel 2 in sample &amp; hold mode */
    using DAC_MCR_MODE2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC Channel2 DMA double data mode */
    using DAC_MCR_DMADOUBLE2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable signed format for DAC channel2 */
    using DAC_MCR_SINFORMAT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC Sample and Hold sample time register 1 */
    using DAC_SHSR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC Channel 1 sample Time (only valid in sample &amp; hold mode) These bits can be written when the DAC channel1 is disabled or also during normal operation. in the latter case, the write can be done only when BWSTx of DAC_SR register is low, If BWSTx=1, the write operation is ignored. */
    using DAC_SHSR1_TSAMPLE1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC Sample and Hold sample time register 2 */
    using DAC_SHSR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC Channel 2 sample Time (only valid in sample &amp; hold mode) These bits can be written when the DAC channel2 is disabled or also during normal operation. in the latter case, the write can be done only when BWSTx of DAC_SR register is low, if BWSTx=1, the write operation is ignored. */
    using DAC_SHSR2_TSAMPLE2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC Sample and Hold hold time register */
    using DAC_SHHR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC Channel 1 hold Time (only valid in sample &amp; hold mode) Hold time= (THOLD[9:0]) x T LSI */
    using DAC_SHHR_THOLD1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC Channel 2 hold time (only valid in sample &amp; hold mode). Hold time= (THOLD[9:0]) x T LSI */
    using DAC_SHHR_THOLD2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC Sample and Hold refresh time register */
    using DAC_SHRR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC Channel 1 refresh Time (only valid in sample &amp; hold mode) Refresh time= (TREFRESH[7:0]) x T LSI */
    using DAC_SHRR_TREFRESH1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC Channel 2 refresh Time (only valid in sample &amp; hold mode) Refresh time= (TREFRESH[7:0]) x T LSI */
    using DAC_SHRR_TREFRESH2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sawtooth register */
    using DAC_STR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x58, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC Channel 1 Sawtooth reset value */
    using DAC_STR1_STRSTDATA1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC Channel1 Sawtooth direction setting */
    using DAC_STR1_STDIR1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC CH1 Sawtooth increment value (12.4 bit format) */
    using DAC_STR1_STINCDATA1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sawtooth register */
    using DAC_STR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x5C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC Channel 2 Sawtooth reset value */
    using DAC_STR2_STRSTDATA2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC Channel2 Sawtooth direction setting */
    using DAC_STR2_STDIR2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC CH2 Sawtooth increment value (12.4 bit format) */
    using DAC_STR2_STINCDATA2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Sawtooth Mode register */
    using DAC_STMODR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x60, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC Channel 1 Sawtooth Reset trigger selection */
    using DAC_STMODR_STRSTTRIGSEL1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC Channel 1 Sawtooth Increment trigger selection */
    using DAC_STMODR_STINCTRIGSEL1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC Channel 1 Sawtooth Reset trigger selection */
    using DAC_STMODR_STRSTTRIGSEL2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DAC Channel 2 Sawtooth Increment trigger selection */
    using DAC_STMODR_STINCTRIGSEL2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
