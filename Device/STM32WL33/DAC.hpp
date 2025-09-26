/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32WL33_DAC_HPP
#define EMBEDDED_PP_STM32WL33_DAC_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief DAC address block description */
namespace STM32WL33::DAC {

    /** @brief CR register */
    using CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief EN: DAC channel enable This bit is set and cleared by software to enable/disable DAC channel. 0: DAC channel disabled 1: DAC channel enabled */
    using CR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BON: DAC channel output buffer enable. This bit is set and cleared by software to enable/disable DAC channel output buffer. 0: DAC channel output buffer disabled 1: DAC channel output buffer enabled */
    using CR_BON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TEN: DAC channel trigger enable This bit is set and cleared by software to enable/disable DAC channel trigger. 0: DAC channel trigger disabled and data written into the DAC_DHR register are transferred one APB0 clock cycle later to the DAC_DOR register 1: DAC channel trigger enabled and data from the DAC_DHR register are transferred three APB0 clock cycles later to the DAC_DOR register Note: When software trigger is selected, the transfer from the DAC_DHR register to the DAC_DOR register takes only one APB0 clock cycle. */
    using CR_TEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TSEL[2:0]: DAC channel trigger selection These bits select the external event used to trigger DAC channel. 000: Timer 16 TRGO event 001: PA8 pin event from SYSCFG 010 to 011: Reserved 111: Software trigger Only used if bit TEN = 1 (DAC channel trigger enabled). */
    using CR_TSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WAVE[1:0]: DAC channel noise/triangle wave generation enable These bits are set and cleared by software. 00: wave generation disabled 01: Noise wave generation enabled 1x: Triangle wave generation enabled Note: Only used if bit TEN = 1 (DAC channel trigger enabled). */
    using CR_WAVE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MAMP[3:0]: DAC channel mask amplitude selector These bits are written by software to select mask in wave generation mode or amplitude in triangle generation mode. 0000: Unmask bit0 of LFSR triangle amplitude equal to 1 0001: Unmask bits[1:0] of LFSR triangle amplitude equal to 3 0010: Unmask bits[2:0] of LFSR triangle amplitude equal to 7 0011: Unmask bits[3:0] of LFSR triangle amplitude equal to 15 0100: Unmask bits[4:0] of LFSR triangle amplitude equal to 31 greater than or equal to 0101: Unmask bits[5:0] of LFSR triangle amplitude equal to 63 */
    using CR_MAMP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMAEN: DAC channel DMA enable This bit is set and cleared by software. 0: DAC channel DMA mode disabled 1: DAC channel DMA mode enabled */
    using CR_DMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMAUDRIE: DAC channel DMA Underrun Interrupt enable This bit is set and cleared by software. 0: DAC channel DMA Underrun Interrupt disabled 1: DAC channel DMA Underrun Interrupt enabled */
    using CR_DMAUDRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CMPEN: DAC channel output to COMP INMINUS enable. This bit is set and cleared by software. 0: DAC channel output to COMP INMINUS disabled 1: DAC channel output to COMP INMINUS enabled */
    using CR_CMPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VCMEN: DAC channel output to VCM BUFFER enable. This bit is set and cleared by software. 0: DAC channel output to VCM BUFFER disabled 1: DAC channel output to VCM BUFFER enabled */
    using CR_VCMEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief VCMON: VCMBUFF power-up. This bit is set and cleared by software. 0: VCM BUFFER OFF 1: VCM BUFFER ON */
    using CR_VCMON = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SWTRIGR register */
    using SWTRIGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SWTRIG: DAC channel software trigger This bit is set by software to enable/disable the software trigger. 0: Software trigger disabled 1: Software trigger enabled Note: This bit is cleared by hardware (one APB0 clock cycle later) once the DAC_DHR register value has been loaded into the DAC_DOR register. */
    using SWTRIGR_SWTRIG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DHR register */
    using DHR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DACDHR[5:0]: DAC channel 6-bit data These bits are written by software which specifies 6-bit data for DAC channel. */
    using DHR_DACDHR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DOR register */
    using DOR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DACDOR[5:0]: DAC channel data output These bits are read-only, they contain data output for DAC channel. */
    using DOR_DACDOR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SR register */
    using SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMAUDR: DAC channel DMA underrun flag This bit is set by hardware and cleared by software (by writing it to 1). 0: No DMA underrun error condition occurred for DAC channel 1: DMA underrun error condition occurred for DAC channel (the currently selected trigger is driving DAC channel conversion at a frequency higher than the DMA service capability rate) */
    using SR_DMAUDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
