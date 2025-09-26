/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32WB07_SYSTEM_CTRL_HPP
#define EMBEDDED_PP_STM32WB07_SYSTEM_CTRL_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief SYSTEM_CTRL peripheral */
namespace STM32WB07::SYSTEM_CTRL {

    /** @brief DIE_ID register */
    using DIE_ID = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Cut revision (metal fix) */
    using DIE_ID_REVISION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Cut version */
    using DIE_ID_VERSION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Product version. May be used to discriminate several version of a same digital BLE LPH device embedding different analog versions */
    using DIE_ID_PRODUCT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief JTAG_ID register */
    using JTAG_ID = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Manufacturer ID */
    using JTAG_ID_MANUF_ID = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 11, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Part number */
    using JTAG_ID_PART_NUMBER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Version */
    using JTAG_ID_VERSION_NUMBER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C_FMP_CTRL register */
    using I2C_FMP_CTRL = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C1 Fast-Mode Plus driving capability for I2C1_SCL on PA0 I/O. 0: PA0 pin operated in standard mode. 1: FM+ mode is enabled on PA0 pin, and speed control is bypassed */
    using I2C_FMP_CTRL_I2C1_PA0_FMP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C1 Fast-Mode Plus driving capability for I2C1_SDA on PA1 I/O. 0: PA1 pin operated in standard mode. 1: FM+ mode is enabled on PA1 pin, and speed control is bypassed */
    using I2C_FMP_CTRL_I2C1_PA1_FMP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C1 Fast-Mode Plus driving capability for I2C1_SCL on PB6 I/O. 0: PB6 pin operated in standard mode. 1: FM+ mode is enabled on PB6 pin, and speed control is bypassed. */
    using I2C_FMP_CTRL_I2C1_PB6_FMP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C1 Fast-Mode Plus driving capability for I2C1_SDA on PB7 I/O. 0: PB7 pin operated in standard mode. 1: FM+ mode is enabled on PB7 pin, and speed control is bypassed */
    using I2C_FMP_CTRL_I2C1_PB7_FMP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IO_DTR register */
    using IO_DTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PA0_DT: Interrupt Detection Type for port A I/Os. 0: edge detection. 1: level detection. */
    using IO_DTR_PA0_DT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PA1_DT: Interrupt Detection Type for port A I/Os. 0: edge detection. 1: level detection. */
    using IO_DTR_PA1_DT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PA2_DT: Interrupt Detection Type for port A I/Os. 0: edge detection. 1: level detection. */
    using IO_DTR_PA2_DT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PA3_DT: Interrupt Detection Type for port A I/Os. 0: edge detection. 1: level detection. */
    using IO_DTR_PA3_DT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PA4_DT:Interrupt Detection Type for port A I/Os. */
    using IO_DTR_PA4_DT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PA5_DT:Interrupt Detection Type for port A I/Os. */
    using IO_DTR_PA5_DT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PA6_DT:Interrupt Detection Type for port A I/Os. */
    using IO_DTR_PA6_DT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PA7_DT:Interrupt Detection Type for port A I/Os. */
    using IO_DTR_PA7_DT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PA8_DT: Interrupt Detection Type for port A I/Os. 0: edge detection. 1: level detection. */
    using IO_DTR_PA8_DT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PA9_DT: Interrupt Detection Type for port A I/Os. 0: edge detection. 1: level detection. */
    using IO_DTR_PA9_DT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PA10_DT: Interrupt Detection Type for port A I/Os. 0: edge detection. 1: level detection. */
    using IO_DTR_PA10_DT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PA11_DT: Interrupt Detection Type for port A I/Os. 0: edge detection. 1: level detection. */
    using IO_DTR_PA11_DT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PB0_DT: Interrupt Detection Type for port B I/Os. 0: edge detection. 1: level detection. */
    using IO_DTR_PB0_DT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PB1_DT: Interrupt Detection Type for port B I/Os. 0: edge detection. 1: level detection. */
    using IO_DTR_PB1_DT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PB2_DT: Interrupt Detection Type for port B I/Os. 0: edge detection. 1: level detection. */
    using IO_DTR_PB2_DT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PB3_DT: Interrupt Detection Type for port B I/Os. 0: edge detection. 1: level detection. */
    using IO_DTR_PB3_DT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PB4_DT: Interrupt Detection Type for port B I/Os. 0: edge detection. 1: level detection. */
    using IO_DTR_PB4_DT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PB5_DT: Interrupt Detection Type for port B I/Os. 0: edge detection. 1: level detection. */
    using IO_DTR_PB5_DT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PB6_DT: Interrupt Detection Type for port B I/Os. 0: edge detection. 1: level detection. */
    using IO_DTR_PB6_DT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PB7_DT: Interrupt Detection Type for port B I/Os. 0: edge detection. 1: level detection. */
    using IO_DTR_PB7_DT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PB8_DT:Interrupt Detection Type for port B I/Os. */
    using IO_DTR_PB8_DT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PB9_DT:Interrupt Detection Type for port B I/Os. */
    using IO_DTR_PB9_DT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PB10_DT:Interrupt Detection Type for port B I/Os. */
    using IO_DTR_PB10_DT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PB11_DT:Interrupt Detection Type for port B I/Os. */
    using IO_DTR_PB11_DT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PB12_DT: Interrupt Detection Type for port B I/Os. 0: edge detection. 1: level detection. */
    using IO_DTR_PB12_DT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PB13_DT: Interrupt Detection Type for port B I/Os. 0: edge detection. 1: level detection. */
    using IO_DTR_PB13_DT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PB14_DT: Interrupt Detection Type for port B I/Os. 0: edge detection. 1: level detection. */
    using IO_DTR_PB14_DT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PB15_DT: Interrupt Detection Type for port B I/Os. 0: edge detection. 1: level detection. */
    using IO_DTR_PB15_DT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IO_IBER register */
    using IO_IBER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PA0_IBE: Interrupt edge selection for Port A I/Os. 0: single edge detection. 1: both edges detection */
    using IO_IBER_PA0_IBE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PA1_IBE: Interrupt edge selection for Port A I/Os. 0: single edge detection. 1: both edges detection */
    using IO_IBER_PA1_IBE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PA2_IBE: Interrupt edge selection for Port A I/Os. 0: single edge detection. 1: both edges detection */
    using IO_IBER_PA2_IBE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PA3_IBE: Interrupt edge selection for Port A I/Os. 0: single edge detection. 1: both edges detection */
    using IO_IBER_PA3_IBE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PA4_IBE: Interrupt edge selection for Port A I/Os. */
    using IO_IBER_PA4_IBE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PA5_IBE: Interrupt edge selection for Port A I/Os. */
    using IO_IBER_PA5_IBE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PA6_IBE: Interrupt edge selection for Port A I/Os. */
    using IO_IBER_PA6_IBE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PA7_IBE: Interrupt edge selection for Port A I/Os. */
    using IO_IBER_PA7_IBE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PA8_IBE: Interrupt edge selection for Port A I/Os. 0: single edge detection. 1: both edges detection */
    using IO_IBER_PA8_IBE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PA9_IBE: Interrupt edge selection for Port A I/Os. 0: single edge detection. 1: both edges detection */
    using IO_IBER_PA9_IBE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PA10_IBE: Interrupt edge selection for Port A I/Os. 0: single edge detection. 1: both edges detection */
    using IO_IBER_PA10_IBE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PA11_IBE: Interrupt edge selection for Port A I/Os. 0: single edge detection. 1: both edges detection */
    using IO_IBER_PA11_IBE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PA12_IBE: Interrupt edge selection for Port A I/Os. */
    using IO_IBER_PA12_IBE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PA13_IBE: Interrupt edge selection for Port A I/Os. */
    using IO_IBER_PA13_IBE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PA14_IBE: Interrupt edge selection for Port A I/Os. */
    using IO_IBER_PA14_IBE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PA15_IBE: Interrupt edge selection for Port A I/Os. */
    using IO_IBER_PA15_IBE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PB0_IBE: Interrupt edge selection for port B I/Os. */
    using IO_IBER_PB0_IBE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PB1_IBE: Interrupt edge selection for port B I/Os. */
    using IO_IBER_PB1_IBE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PB2_IBE: Interrupt edge selection for port B I/Os. */
    using IO_IBER_PB2_IBE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PB3_IBE: Interrupt edge selection for port B I/Os. */
    using IO_IBER_PB3_IBE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PB4_IBE: Interrupt edge selection for port B I/Os. */
    using IO_IBER_PB4_IBE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PB5_IBE: Interrupt edge selection for port B I/Os. */
    using IO_IBER_PB5_IBE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PB6_IBE: Interrupt edge selection for port B I/Os. */
    using IO_IBER_PB6_IBE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PB7_IBE: Interrupt edge selection for port B I/Os. */
    using IO_IBER_PB7_IBE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PB8_IBE: Interrupt edge selection for port B I/Os. */
    using IO_IBER_PB8_IBE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PB9_IBE: Interrupt edge selection for port B I/Os. */
    using IO_IBER_PB9_IBE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PB10_IBE: Interrupt edge selection for port B I/Os. */
    using IO_IBER_PB10_IBE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PB11_IBE: Interrupt edge selection for port B I/Os. */
    using IO_IBER_PB11_IBE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PB12_IBE: Interrupt edge selection for port B I/Os. 0: single edge detection. 1: both edges detection. */
    using IO_IBER_PB12_IBE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PB13_IBE: Interrupt edge selection for port B I/Os. 0: single edge detection. 1: both edges detection. */
    using IO_IBER_PB13_IBE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PB14_IBE: Interrupt edge selection for port B I/Os. 0: single edge detection. 1: both edges detection. */
    using IO_IBER_PB14_IBE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PB15_IBE: Interrupt edge selection for port B I/Os. 0: single edge detection. 1: both edges detection. */
    using IO_IBER_PB15_IBE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IO_IEVR register */
    using IO_IEVR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PA0_IEV : Interrupt polarity event for Port A I/Os. 0: falling edge / low level. 1: rising edge / high level. */
    using IO_IEVR_PA0_IEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PA1_IEV : Interrupt polarity event for Port A I/Os. 0: falling edge / low level. 1: rising edge / high level. */
    using IO_IEVR_PA1_IEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PA2_IEV : Interrupt polarity event for Port A I/Os. 0: falling edge / low level. 1: rising edge / high level. */
    using IO_IEVR_PA2_IEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PA3_IEV : Interrupt polarity event for Port A I/Os. 0: falling edge / low level. 1: rising edge / high level. */
    using IO_IEVR_PA3_IEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PA4_IEV : Interrupt polarity event for Port A I/Os. */
    using IO_IEVR_PA4_IEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PA5_IEV : Interrupt polarity event for Port A I/Os. */
    using IO_IEVR_PA5_IEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PA6_IEV : Interrupt polarity event for Port A I/Os. */
    using IO_IEVR_PA6_IEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PA7_IEV : Interrupt polarity event for Port A I/Os. */
    using IO_IEVR_PA7_IEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PA8_IEV : Interrupt polarity event for Port A I/Os. 0: falling edge / low level. 1: rising edge / high level. */
    using IO_IEVR_PA8_IEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PA9_IEV : Interrupt polarity event for Port A I/Os. 0: falling edge / low level. 1: rising edge / high level. */
    using IO_IEVR_PA9_IEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PA10_IEV : Interrupt polarity event for Port A I/Os. 0: falling edge / low level. 1: rising edge / high level. */
    using IO_IEVR_PA10_IEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PA11_IEV : Interrupt polarity event for Port A I/Os. 0: falling edge / low level. 1: rising edge / high level. */
    using IO_IEVR_PA11_IEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PA12_IEV : Interrupt polarity event for Port A I/Os. */
    using IO_IEVR_PA12_IEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PA13_IEV : Interrupt polarity event for Port A I/Os. */
    using IO_IEVR_PA13_IEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PA14_IEV : Interrupt polarity event for Port A I/Os. */
    using IO_IEVR_PA14_IEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PA15_IEV : Interrupt polarity event for Port A I/Os. */
    using IO_IEVR_PA15_IEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PB0_IEV : Interrupt polarity event for Port B I/Os. 0: falling edge / low level. 1: rising edge / high level. */
    using IO_IEVR_PB0_IEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PB1_IEV : Interrupt polarity event for Port B I/Os. 0: falling edge / low level. 1: rising edge / high level. */
    using IO_IEVR_PB1_IEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PB2_IEV : Interrupt polarity event for Port B I/Os. 0: falling edge / low level. 1: rising edge / high level. */
    using IO_IEVR_PB2_IEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PB3_IEV : Interrupt polarity event for Port B I/Os. 0: falling edge / low level. 1: rising edge / high level. */
    using IO_IEVR_PB3_IEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PB4_IEV : Interrupt polarity event for Port B I/Os. 0: falling edge / low level. 1: rising edge / high level. */
    using IO_IEVR_PB4_IEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PB5_IEV : Interrupt polarity event for Port B I/Os. 0: falling edge / low level. 1: rising edge / high level. */
    using IO_IEVR_PB5_IEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PB6_IEV : Interrupt polarity event for Port B I/Os. 0: falling edge / low level. 1: rising edge / high level. */
    using IO_IEVR_PB6_IEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PB7_IEV : Interrupt polarity event for Port B I/Os. 0: falling edge / low level. 1: rising edge / high level. */
    using IO_IEVR_PB7_IEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PB8_IEV : Interrupt polarity event for Port B I/Os. */
    using IO_IEVR_PB8_IEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PB9_IEV : Interrupt polarity event for Port B I/Os. */
    using IO_IEVR_PB9_IEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PB10_IEV : Interrupt polarity event for Port B I/Os. */
    using IO_IEVR_PB10_IEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PB11_IEV : Interrupt polarity event for Port B I/Os. */
    using IO_IEVR_PB11_IEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PB12_IEV : Interrupt polarity event for Port B I/Os. 0: falling edge / low level. 1: rising edge / high level. */
    using IO_IEVR_PB12_IEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PB13_IEV : Interrupt polarity event for Port B I/Os. 0: falling edge / low level. 1: rising edge / high level. */
    using IO_IEVR_PB13_IEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PB14_IEV : Interrupt polarity event for Port B I/Os. 0: falling edge / low level. 1: rising edge / high level. */
    using IO_IEVR_PB14_IEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PB15_IEV : Interrupt polarity event for Port B I/Os. 0: falling edge / low level. 1: rising edge / high level. */
    using IO_IEVR_PB15_IEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IO_IER register */
    using IO_IER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PA0_IE: Interrupt enable for port A I/Os. 0: interrupt is disabled. 1: interrupt is enabled. */
    using IO_IER_PA0_IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PA1_IE: Interrupt enable for port A I/Os. 0: interrupt is disabled. 1: interrupt is enabled. */
    using IO_IER_PA1_IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PA2_IE: Interrupt enable for port A I/Os. 0: interrupt is disabled. 1: interrupt is enabled. */
    using IO_IER_PA2_IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PA3_IE: Interrupt enable for port A I/Os. 0: interrupt is disabled. 1: interrupt is enabled. */
    using IO_IER_PA3_IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PA4_IE: Interrupt enable for port A I/Os. */
    using IO_IER_PA4_IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PA5_IE: Interrupt enable for port A I/Os. */
    using IO_IER_PA5_IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PA6_IE: Interrupt enable for port A I/Os. */
    using IO_IER_PA6_IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PA7_IE: Interrupt enable for port A I/Os. */
    using IO_IER_PA7_IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PA8_IE: Interrupt enable for port A I/Os. 0: interrupt is disabled. 1: interrupt is enabled. */
    using IO_IER_PA8_IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PA9_IE: Interrupt enable for port A I/Os. 0: interrupt is disabled. 1: interrupt is enabled. */
    using IO_IER_PA9_IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PA10_IE: Interrupt enable for port A I/Os. 0: interrupt is disabled. 1: interrupt is enabled. */
    using IO_IER_PA10_IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PA11_IE: Interrupt enable for port A I/Os. 0: interrupt is disabled. 1: interrupt is enabled. */
    using IO_IER_PA11_IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PA12_IE: Interrupt enable for port A I/Os. */
    using IO_IER_PA12_IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PA13_IE: Interrupt enable for port A I/Os. */
    using IO_IER_PA13_IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PA14_IE: Interrupt enable for port A I/Os. */
    using IO_IER_PA14_IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PA15_IE: Interrupt enable for port A I/Os. */
    using IO_IER_PA15_IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PB0_IE: Interrupt enable for port B I/Os. 0: interrupt is disabled. 1: interrupt is enabled. */
    using IO_IER_PB0_IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PB1_IE: Interrupt enable for port B I/Os. 0: interrupt is disabled. 1: interrupt is enabled. */
    using IO_IER_PB1_IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PB2_IE: Interrupt enable for port B I/Os. 0: interrupt is disabled. 1: interrupt is enabled. */
    using IO_IER_PB2_IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PB3_IE: Interrupt enable for port B I/Os. 0: interrupt is disabled. 1: interrupt is enabled. */
    using IO_IER_PB3_IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PB4_IE: Interrupt enable for port B I/Os. 0: interrupt is disabled. 1: interrupt is enabled. */
    using IO_IER_PB4_IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PB5_IE: Interrupt enable for port B I/Os. 0: interrupt is disabled. 1: interrupt is enabled. */
    using IO_IER_PB5_IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PB6_IE: Interrupt enable for port B I/Os. 0: interrupt is disabled. 1: interrupt is enabled. */
    using IO_IER_PB6_IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PB7_IE: Interrupt enable for port B I/Os. 0: interrupt is disabled. 1: interrupt is enabled. */
    using IO_IER_PB7_IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PB8_IE: Interrupt enable for port B I/Os. */
    using IO_IER_PB8_IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PB9_IE: Interrupt enable for port B I/Os. */
    using IO_IER_PB9_IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PB10_IE: Interrupt enable for port B I/Os. */
    using IO_IER_PB10_IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PB11_IE: Interrupt enable for port B I/Os. */
    using IO_IER_PB11_IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PB12_IE: Interrupt enable for port B I/Os. 0: interrupt is disabled. 1: interrupt is enabled. */
    using IO_IER_PB12_IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PB13_IE: Interrupt enable for port B I/Os. 0: interrupt is disabled. 1: interrupt is enabled. */
    using IO_IER_PB13_IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PB14_IE: Interrupt enable for port B I/Os. 0: interrupt is disabled. 1: interrupt is enabled. */
    using IO_IER_PB14_IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PB15_IE: Interrupt enable for port B I/Os. 0: interrupt is disabled. 1: interrupt is enabled. */
    using IO_IER_PB15_IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IO_ISCR register */
    using IO_ISCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PA0_ISC: Interrupt status (before mask) for port a I/Os. 0: no pending interrupt. 1: event occurred on corresponding I/O / interrupt occurred (if enabled). Cleared by writing 1 in the bit. */
    using IO_ISCR_PA0_ISC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PA1_ISC: Interrupt status (before mask) for port a I/Os. 0: no pending interrupt. 1: event occurred on corresponding I/O / interrupt occurred (if enabled). Cleared by writing 1 in the bit. */
    using IO_ISCR_PA1_ISC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PA2_ISC: Interrupt status (before mask) for port a I/Os. 0: no pending interrupt. 1: event occurred on corresponding I/O / interrupt occurred (if enabled). Cleared by writing 1 in the bit. */
    using IO_ISCR_PA2_ISC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PA3_ISC: Interrupt status (before mask) for port a I/Os. 0: no pending interrupt. 1: event occurred on corresponding I/O / interrupt occurred (if enabled). Cleared by writing 1 in the bit. */
    using IO_ISCR_PA3_ISC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PA4_ISC: Interrupt status (before mask) for port a I/Os.. */
    using IO_ISCR_PA4_ISC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PA5_ISC: Interrupt status (before mask) for port a I/Os.. */
    using IO_ISCR_PA5_ISC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PA6_ISC: Interrupt status (before mask) for port a I/Os.. */
    using IO_ISCR_PA6_ISC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PA7_ISC: Interrupt status (before mask) for port a I/Os.. */
    using IO_ISCR_PA7_ISC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PA8_ISC: Interrupt status (before mask) for port a I/Os. 0: no pending interrupt. 1: event occurred on corresponding I/O / interrupt occurred (if enabled). Cleared by writing 1 in the bit. */
    using IO_ISCR_PA8_ISC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PA9_ISC: Interrupt status (before mask) for port a I/Os. 0: no pending interrupt. 1: event occurred on corresponding I/O / interrupt occurred (if enabled). Cleared by writing 1 in the bit. */
    using IO_ISCR_PA9_ISC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PA10_ISC: Interrupt status (before mask) for port a I/Os. 0: no pending interrupt. 1: event occurred on corresponding I/O / interrupt occurred (if enabled). Cleared by writing 1 in the bit. */
    using IO_ISCR_PA10_ISC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PA11_ISC: Interrupt status (before mask) for port a I/Os. 0: no pending interrupt. 1: event occurred on corresponding I/O / interrupt occurred (if enabled). Cleared by writing 1 in the bit. */
    using IO_ISCR_PA11_ISC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PA12_ISC: Interrupt status (before mask) for port a I/Os. */
    using IO_ISCR_PA12_ISC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PA13_ISC: Interrupt status (before mask) for port a I/Os. */
    using IO_ISCR_PA13_ISC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PA14_ISC: Interrupt status (before mask) for port a I/Os. */
    using IO_ISCR_PA14_ISC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PA15_ISC: Interrupt status (before mask) for port a I/Os. */
    using IO_ISCR_PA15_ISC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PB0_ISC: Interrupt status (before mask) for port B I/Os. 0: no pending interrupt. 1: event occurred on corresponding I/O / interrupt occurred (if enabled). Cleared by writing 1 in the bit. */
    using IO_ISCR_PB0_ISC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PB1_ISC: Interrupt status (before mask) for port B I/Os. 0: no pending interrupt. 1: event occurred on corresponding I/O / interrupt occurred (if enabled). Cleared by writing 1 in the bit. */
    using IO_ISCR_PB1_ISC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PB2_ISC: Interrupt status (before mask) for port B I/Os. 0: no pending interrupt. 1: event occurred on corresponding I/O / interrupt occurred (if enabled). Cleared by writing 1 in the bit. */
    using IO_ISCR_PB2_ISC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PB3_ISC: Interrupt status (before mask) for port B I/Os. 0: no pending interrupt. 1: event occurred on corresponding I/O / interrupt occurred (if enabled). Cleared by writing 1 in the bit. */
    using IO_ISCR_PB3_ISC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PB4_ISC: Interrupt status (before mask) for port B I/Os. 0: no pending interrupt. 1: event occurred on corresponding I/O / interrupt occurred (if enabled). Cleared by writing 1 in the bit. */
    using IO_ISCR_PB4_ISC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PB5_ISC: Interrupt status (before mask) for port B I/Os. 0: no pending interrupt. 1: event occurred on corresponding I/O / interrupt occurred (if enabled). Cleared by writing 1 in the bit. */
    using IO_ISCR_PB5_ISC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PB6_ISC: Interrupt status (before mask) for port B I/Os. 0: no pending interrupt. 1: event occurred on corresponding I/O / interrupt occurred (if enabled). Cleared by writing 1 in the bit. */
    using IO_ISCR_PB6_ISC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PB7_ISC: Interrupt status (before mask) for port B I/Os. 0: no pending interrupt. 1: event occurred on corresponding I/O / interrupt occurred (if enabled). Cleared by writing 1 in the bit. */
    using IO_ISCR_PB7_ISC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PB8_ISC: Interrupt status (before mask) for port B I/Os.. */
    using IO_ISCR_PB8_ISC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PB9_ISC: Interrupt status (before mask) for port B I/Os.. */
    using IO_ISCR_PB9_ISC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PB10_ISC: Interrupt status (before mask) for port B I/Os.. */
    using IO_ISCR_PB10_ISC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PB11_ISC: Interrupt status (before mask) for port B I/Os.. */
    using IO_ISCR_PB11_ISC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PB12_ISC: Interrupt status (before mask) for port B I/Os. 0: no pending interrupt. 1: event occurred on corresponding I/O / interrupt occurred (if enabled). Cleared by writing 1 in the bit. */
    using IO_ISCR_PB12_ISC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PB13_ISC: Interrupt status (before mask) for port B I/Os. 0: no pending interrupt. 1: event occurred on corresponding I/O / interrupt occurred (if enabled). Cleared by writing 1 in the bit. */
    using IO_ISCR_PB13_ISC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PB14_ISC: Interrupt status (before mask) for port B I/Os. 0: no pending interrupt. 1: event occurred on corresponding I/O / interrupt occurred (if enabled). Cleared by writing 1 in the bit. */
    using IO_ISCR_PB14_ISC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PB15_ISC: Interrupt status (before mask) for port B I/Os. 0: no pending interrupt. 1: event occurred on corresponding I/O / interrupt occurred (if enabled). Cleared by writing 1 in the bit. */
    using IO_ISCR_PB15_ISC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PWRC_IER register */
    using PWRC_IER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PVD_IE: Programmable Voltage Detector interrupt enable. 0: PVD interrupt is disabled. 1: PVD interrupt is enabled. */
    using PWRC_IER_PVD_IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WKUP_IE: Power Controller Wakeup event interrupt enable. 0: Interrupt on wakeup event seen by the PWRC is disabled. 1: Interrupt on wakeup event seen by the PWRC is enabled. */
    using PWRC_IER_WKUP_IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PWRC_ISCR register */
    using PWRC_ISCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PVD_ISC: Programmable Voltage Detector status. 0: no pending interrupt. 1: voltage went under programmed threshold / interrupt occurred (if enabled). Cleared by writing 1 in the bit. */
    using PWRC_ISCR_PVD_ISC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief WKUP_ISC: Indicates the Power Controller receives a Wakeup event. 0: no pending interrupt. 1: Wakeup event on PWRC occurred / interrupt occurred (if enabled). Cleared by writing 1 in the bit. This flag will be read at 1 if a wakeup event arrives so close to the low power mode entry requests that the PWRC aborts before shutting down the system. */
    using PWRC_ISCR_WKUP_ISC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BLERXTX_DTR register */
    using BLERXTX_DTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TX_DT: detection type on TX_SEQUENCE signal: 0: detection on edge (default). 1: detection on level */
    using BLERXTX_DTR_TX_DT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RX_DT: detection type on RX_SEQUENCE signal: 0: detection on edge (default). 1: detection on level */
    using BLERXTX_DTR_RX_DT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BLERXTX_IBER register */
    using BLERXTX_IBER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TX_IBE: interrupt edge register on TX_SEQUENCE signal: 0: detection on single edge (default). 1: detection on both edges */
    using BLERXTX_IBER_TX_IBE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RX_IBE: interrupt edge register on RX_SEQUENCE signal: 0: detection on single edge (default). 1: detection on both edges */
    using BLERXTX_IBER_RX_IBE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BLERXTX_IEVR register */
    using BLERXTX_IEVR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x34, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TX_IEV: interrupt polarity event on TX_SEQUENCE signal: 0: detection on falling edge / low level (default). 1: detection on rising edge / high level */
    using BLERXTX_IEVR_TX_IEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RX_IEV: interrupt polarity event on RX_SEQUENCE signal: 0: detection on falling edge / low level (default). 1: detection on rising edge / high level */
    using BLERXTX_IEVR_RX_IEV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BLERXTX_IER register */
    using BLERXTX_IER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x38, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TX_IE: interrupt enable on TX_SEQUENCE signal: 0: TX_SEQUENCE interrupt is disabled (default). 1: TX_SEQUENCE interrupt is enabled */
    using BLERXTX_IER_TX_IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RX_IE: interrupt enable on RX_SEQUENCE signal: 0: RX_SEQUENCE interrupt is disabled (default). 1: RX_SEQUENCE interrupt is enabled */
    using BLERXTX_IER_RX_IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BLERXTX_ISCR register */
    using BLERXTX_ISCR = ::EmbeddedPP::LowLevel::Register<std::uint8_t, 0x3C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TX_ISC:interrupt status on TX_SEQUENCE signal (can be a rising or a falling edge depending on BLERXTX_IEVR and BLERXTX_IBER): 0: no activity on TX_SEQUENCE detected. 1: activity on TX_SEQUENCE occurred */
    using BLERXTX_ISCR_TX_ISC = ::EmbeddedPP::LowLevel::BitField<std::uint8_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RX_ISC: interrupt status on RX_SEQUENCE signal (can be a rising or a falling edge depending on BLERXTX_IEVR and BLERXTX_IBER): 0: no activity on RX_SEQUENCE detected. 1: activity on RX_SEQUENCE occurred */
    using BLERXTX_ISCR_RX_ISC = ::EmbeddedPP::LowLevel::BitField<std::uint8_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
