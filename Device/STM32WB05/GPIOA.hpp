/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32WB05_GPIOA_HPP
#define EMBEDDED_PP_STM32WB05_GPIOA_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief GPIOA peripheral */
namespace STM32WB05::GPIOA {

    /** @brief MODER register */
    using MODER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MODE0[1:0]Port A configuration bits. These bits are written by software to configure the I/O mode. -00: Input mode -01: output mode -10: Alternate function mode -11: Analog mode */
    using MODER_MODE0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MODE1[1:0]Port A configuration bits. These bits are written by software to configure the I/O mode. -00: Input mode -01: output mode -10: Alternate function mode -11: Analog mode */
    using MODER_MODE1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MODE2[1:0]Port A configuration bits. These bits are written by software to configure the I/O mode. -00: Input mode -01: output mode -10: Alternate function mode -11: Analog mode */
    using MODER_MODE2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MODE3[1:0]Port A configuration bits. These bits are written by software to configure the I/O mode. -00: Input mode -01: output mode -10: Alternate function mode -11: Analog mode */
    using MODER_MODE3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MODE8[1:0]Port A configuration bits. These bits are written by software to configure the I/O mode. -00: Input mode -01: output mode -10: Alternate function mode -11: Analog mode */
    using MODER_MODE8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MODE9[1:0]Port A configuration bits. These bits are written by software to configure the I/O mode. -00: Input mode -01: output mode -10: Alternate function mode -11: Analog mode */
    using MODER_MODE9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MODE10[1:0]Port A configuration bits. These bits are written by software to configure the I/O mode. -00: Input mode -01: output mode -10: Alternate function mode -11: Analog mode */
    using MODER_MODE10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MODE11[1:0]Port A configuration bits. These bits are written by software to configure the I/O mode. -00: Input mode -01: output mode -10: Alternate function mode -11: Analog mode */
    using MODER_MODE11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTYPER register */
    using OTYPER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OT0: Port A configuration bits These bits are written by software to configure the I/O output type. -0: Output push-pull (reset state) -1: Output open-drain */
    using OTYPER_OT0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OT1: Port A configuration bits These bits are written by software to configure the I/O output type. -0: Output push-pull (reset state) -1: Output open-drain */
    using OTYPER_OT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OT2: Port A configuration bits These bits are written by software to configure the I/O output type. -0: Output push-pull (reset state) -1: Output open-drain */
    using OTYPER_OT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OT3: Port A configuration bits These bits are written by software to configure the I/O output type. -0: Output push-pull (reset state) -1: Output open-drain */
    using OTYPER_OT3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OT8: Port A configuration bits These bits are written by software to configure the I/O output type. -0: Output push-pull (reset state) -1: Output open-drain */
    using OTYPER_OT8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OT9: Port A configuration bits These bits are written by software to configure the I/O output type. -0: Output push-pull (reset state) -1: Output open-drain */
    using OTYPER_OT9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OT10: Port A configuration bits These bits are written by software to configure the I/O output type. -0: Output push-pull (reset state) -1: Output open-drain */
    using OTYPER_OT10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OT11: Port A configuration bits These bits are written by software to configure the I/O output type. -0: Output push-pull (reset state) -1: Output open-drain */
    using OTYPER_OT11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OSPEEDR register */
    using OSPEEDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OSPEED0[1:0]: Port A configuration bits These bits are written by software to configure the I/O output speed. */
    using OSPEEDR_OSPEED0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OSPEED1[1:0]: Port A configuration bits These bits are written by software to configure the I/O output speed. */
    using OSPEEDR_OSPEED1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OSPEED2[1:0]: Port A configuration bits These bits are written by software to configure the I/O output speed. */
    using OSPEEDR_OSPEED2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OSPEED3[1:0]: Port A configuration bits These bits are written by software to configure the I/O output speed. */
    using OSPEEDR_OSPEED3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OSPEED8[1:0]: Port A configuration bits These bits are written by software to configure the I/O output speed. */
    using OSPEEDR_OSPEED8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OSPEED9[1:0]: Port A configuration bits These bits are written by software to configure the I/O output speed. */
    using OSPEEDR_OSPEED9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OSPEED10[1:0]: Port A configuration bits These bits are written by software to configure the I/O output speed. */
    using OSPEEDR_OSPEED10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OSPEED11[1:0]: Port A configuration bits These bits are written by software to configure the I/O output speed. */
    using OSPEEDR_OSPEED11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PUPDR register */
    using PUPDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PUPD0: Port A configuration bits These bits are written by software to configure the I/O pull-up or pull-down -00: No pull-up, pull-down -01: Pull-up -10: Pull-down -11: Reserved */
    using PUPDR_PUPD0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PUPD1: Port A configuration bits These bits are written by software to configure the I/O pull-up or pull-down -00: No pull-up, pull-down -01: Pull-up -10: Pull-down -11: Reserved */
    using PUPDR_PUPD1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PUPD2: Port A configuration bits These bits are written by software to configure the I/O pull-up or pull-down -00: No pull-up, pull-down -01: Pull-up -10: Pull-down -11: Reserved */
    using PUPDR_PUPD2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PUPD3: Port A configuration bits These bits are written by software to configure the I/O pull-up or pull-down -00: No pull-up, pull-down -01: Pull-up -10: Pull-down -11: Reserved */
    using PUPDR_PUPD3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PUPD8: Port A configuration bits These bits are written by software to configure the I/O pull-up or pull-down -00: No pull-up, pull-down -01: Pull-up -10: Pull-down -11: Reserved */
    using PUPDR_PUPD8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PUPD9: Port A configuration bits These bits are written by software to configure the I/O pull-up or pull-down -00: No pull-up, pull-down -01: Pull-up -10: Pull-down -11: Reserved */
    using PUPDR_PUPD9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PUPD10: Port A configuration bits These bits are written by software to configure the I/O pull-up or pull-down -00: No pull-up, pull-down -01: Pull-up -10: Pull-down -11: Reserved */
    using PUPDR_PUPD10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PUPD11: Port A configuration bits These bits are written by software to configure the I/O pull-up or pull-down -00: No pull-up, pull-down -01: Pull-up -10: Pull-down -11: Reserved */
    using PUPDR_PUPD11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IDR register */
    using IDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ID0: Port A input data bit.These bits are read-only. They contain the input value of the corresponding I/O port */
    using IDR_ID0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ID1: Port A input data bit.These bits are read-only. They contain the input value of the corresponding I/O port */
    using IDR_ID1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ID2: Port A input data bit.These bits are read-only. They contain the input value of the corresponding I/O port */
    using IDR_ID2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ID3: Port A input data bit.These bits are read-only. They contain the input value of the corresponding I/O port */
    using IDR_ID3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ID8: Port A input data bit.These bits are read-only. They contain the input value of the corresponding I/O port */
    using IDR_ID8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ID9: Port A input data bit.These bits are read-only. They contain the input value of the corresponding I/O port */
    using IDR_ID9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ID10: Port A input data bit.These bits are read-only. They contain the input value of the corresponding I/O port */
    using IDR_ID10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ID11: Port A input data bit.These bits are read-only. They contain the input value of the corresponding I/O port */
    using IDR_ID11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ODR register */
    using ODR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OD0: Port A output data bit These bits can be read and written by software */
    using ODR_OD0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OD1: Port A output data bit These bits can be read and written by software */
    using ODR_OD1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OD2: Port A output data bit These bits can be read and written by software */
    using ODR_OD2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OD3: Port A output data bit These bits can be read and written by software */
    using ODR_OD3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OD8: Port A output data bit These bits can be read and written by software */
    using ODR_OD8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OD9: Port A output data bit These bits can be read and written by software */
    using ODR_OD9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OD10: Port A output data bit These bits can be read and written by software */
    using ODR_OD10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OD11: Port A output data bit These bits can be read and written by software */
    using ODR_OD11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BSRR register */
    using BSRR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BS0: Port A set bit y These bits are write-only. A read to these bits returns the value 0x0000. -0: No action on the corresponding ODx bit -1: Sets the corresponding ODx bit */
    using BSRR_BS0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BS1: Port A set bit y These bits are write-only. A read to these bits returns the value 0x0000. -0: No action on the corresponding ODx bit -1: Sets the corresponding ODx bit */
    using BSRR_BS1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BS2: Port A set bit y These bits are write-only. A read to these bits returns the value 0x0000. -0: No action on the corresponding ODx bit -1: Sets the corresponding ODx bit */
    using BSRR_BS2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BS3: Port A set bit y These bits are write-only. A read to these bits returns the value 0x0000. -0: No action on the corresponding ODx bit -1: Sets the corresponding ODx bit */
    using BSRR_BS3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BS8: Port A set bit y These bits are write-only. A read to these bits returns the value 0x0000. -0: No action on the corresponding ODx bit -1: Sets the corresponding ODx bit */
    using BSRR_BS8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BS9: Port A set bit y These bits are write-only. A read to these bits returns the value 0x0000. -0: No action on the corresponding ODx bit -1: Sets the corresponding ODx bit */
    using BSRR_BS9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BS10: Port A set bit y These bits are write-only. A read to these bits returns the value 0x0000. -0: No action on the corresponding ODx bit -1: Sets the corresponding ODx bit */
    using BSRR_BS10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BS11: Port A set bit y These bits are write-only. A read to these bits returns the value 0x0000. -0: No action on the corresponding ODx bit -1: Sets the corresponding ODx bit */
    using BSRR_BS11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BR0: Port A reset bit y These bits are write-only. A read to these bits returns the value 0x0000. -0: No action on the corresponding ODx bit -1: Resets the corresponding ODx bit Note: If both BSx and BRx are set, BSx has priority. */
    using BSRR_BR0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BR1: Port A reset bit y These bits are write-only. A read to these bits returns the value 0x0000. -0: No action on the corresponding ODx bit -1: Resets the corresponding ODx bit Note: If both BSx and BRx are set, BSx has priority. */
    using BSRR_BR1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BR2: Port A reset bit y These bits are write-only. A read to these bits returns the value 0x0000. -0: No action on the corresponding ODx bit -1: Resets the corresponding ODx bit Note: If both BSx and BRx are set, BSx has priority. */
    using BSRR_BR2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BR3: Port A reset bit y These bits are write-only. A read to these bits returns the value 0x0000. -0: No action on the corresponding ODx bit -1: Resets the corresponding ODx bit Note: If both BSx and BRx are set, BSx has priority. */
    using BSRR_BR3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BR8: Port A reset bit y These bits are write-only. A read to these bits returns the value 0x0000. -0: No action on the corresponding ODx bit -1: Resets the corresponding ODx bit Note: If both BSx and BRx are set, BSx has priority. */
    using BSRR_BR8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BR9: Port A reset bit y These bits are write-only. A read to these bits returns the value 0x0000. -0: No action on the corresponding ODx bit -1: Resets the corresponding ODx bit Note: If both BSx and BRx are set, BSx has priority. */
    using BSRR_BR9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BR10: Port A reset bit y These bits are write-only. A read to these bits returns the value 0x0000. -0: No action on the corresponding ODx bit -1: Resets the corresponding ODx bit Note: If both BSx and BRx are set, BSx has priority. */
    using BSRR_BR10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BR11: Port A reset bit y These bits are write-only. A read to these bits returns the value 0x0000. -0: No action on the corresponding ODx bit -1: Resets the corresponding ODx bit Note: If both BSx and BRx are set, BSx has priority. */
    using BSRR_BR11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LCKR register */
    using LCKR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LCK0: Port A lock bit 0 These bits are read/write but can only be written when the LCKK bit is 0, using the specific sequence described in LCKK bit description. -0: Port configuration not locked -1: Port configuration locked */
    using LCKR_LCK0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LCK1: Port A lock bit 1 These bits are read/write but can only be written when the LCKK bit is 0, using the specific sequence described in LCKK bit description. -0: Port configuration not locked -1: Port configuration locked */
    using LCKR_LCK1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LCK2: Port A lock bit 2 These bits are read/write but can only be written when the LCKK bit is 0, using the specific sequence described in LCKK bit description. -0: Port configuration not locked -1: Port configuration locked */
    using LCKR_LCK2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LCK3: Port A lock bit 3 These bits are read/write but can only be written when the LCKK bit is 0, using the specific sequence described in LCKK bit description. -0: Port configuration not locked -1: Port configuration locked */
    using LCKR_LCK3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LCK8: Port A lock bit 8 These bits are read/write but can only be written when the LCKK bit is 0, using the specific sequence described in LCKK bit description. -0: Port configuration not locked -1: Port configuration locked */
    using LCKR_LCK8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LCK9: Port A lock bit 9 These bits are read/write but can only be written when the LCKK bit is 0, using the specific sequence described in LCKK bit description. -0: Port configuration not locked -1: Port configuration locked */
    using LCKR_LCK9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LCK10: Port A lock bit 10 These bits are read/write but can only be written when the LCKK bit is 0, using the specific sequence described in LCKK bit description. -0: Port configuration not locked -1: Port configuration locked */
    using LCKR_LCK10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LCK11: Port A lock bit 11 These bits are read/write but can only be written when the LCKK bit is 0, using the specific sequence described in LCKK bit description. -0: Port configuration not locked -1: Port configuration locked */
    using LCKR_LCK11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LCKK: Lock key This bit can be read any time. It can only be modified using the lock key write sequence. -0: Port configuration lock key not active -1: Port configuration lock key active. The GPIOx_LCKR register is locked until the next MCU reset or peripheral reset. LOCK key write sequence: WR LCKR[16] = 1' + LCKR[15:0] WR LCKR[16] = 0' + LCKR[15:0] WR LCKR[16] = 1' + LCKR[15:0] RD LCKR RD LCKR[16] = 1' (this read operation is optional but it confirms that the lock is active) Note: During the LOCK key write sequence, the value of LCK[15:0] must not change. Any error in the lock sequence aborts the lock. After the first lock sequence on any bit of the port, any read access on the LCKK bit will return 1' until the next MCU reset or peripheral reset */
    using LCKR_LCKK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AFRL register */
    using AFRL = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief y[3:0]: Alternate function selection for port A pin y (y = 0..7) These bits are written by software to configure alternate function I/Os AFSELy selection: -0000: AF0 -0001: AF1 -0010: AF2 -0011: AF3 -0100: AF4 -0101: AF5 -0110: AF6 -0111: AF7 1xxx: Reserved */
    using AFRL_AFSEL0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief y[3:0]: Alternate function selection for port A pin y (y = 0..7) These bits are written by software to configure alternate function I/Os AFSELy selection: -0000: AF0 -0001: AF1 -0010: AF2 -0011: AF3 -0100: AF4 -0101: AF5 -0110: AF6 -0111: AF7 1xxx: Reserved */
    using AFRL_AFSEL1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief y[3:0]: Alternate function selection for port A pin y (y = 0..7) These bits are written by software to configure alternate function I/Os AFSELy selection: -0000: AF0 -0001: AF1 -0010: AF2 -0011: AF3 -0100: AF4 -0101: AF5 -0110: AF6 -0111: AF7 1xxx: Reserved */
    using AFRL_AFSEL2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief y[3:0]: Alternate function selection for port A pin y (y = 0..7) These bits are written by software to configure alternate function I/Os AFSELy selection: -0000: AF0 -0001: AF1 -0010: AF2 -0011: AF3 -0100: AF4 -0101: AF5 -0110: AF6 -0111: AF7 1xxx: Reserved */
    using AFRL_AFSEL3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AFRH register */
    using AFRH = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief y[3:0]: Alternate function selection for port A pin y (y = 8..15) These bits are written by software to configure alternate function I/Os AFSELy selection: -0000: AF0 -0001: AF1 -0010: AF2 -0011: AF3 -0100: AF4 -0101: AF5 -0110: AF6 -0111: AF7 1xxx: Reserved */
    using AFRH_AFSEL8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief y[3:0]: Alternate function selection for port A pin y (y = 8..15) These bits are written by software to configure alternate function I/Os AFSELy selection: -0000: AF0 -0001: AF1 -0010: AF2 -0011: AF3 -0100: AF4 -0101: AF5 -0110: AF6 -0111: AF7 1xxx: Reserved */
    using AFRH_AFSEL9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief y[3:0]: Alternate function selection for port A pin y (y = 8..15) These bits are written by software to configure alternate function I/Os AFSELy selection: -0000: AF0 -0001: AF1 -0010: AF2 -0011: AF3 -0100: AF4 -0101: AF5 -0110: AF6 -0111: AF7 1xxx: Reserved */
    using AFRH_AFSEL10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief y[3:0]: Alternate function selection for port A pin y (y = 8..15) These bits are written by software to configure alternate function I/Os AFSELy selection: -0000: AF0 -0001: AF1 -0010: AF2 -0011: AF3 -0100: AF4 -0101: AF5 -0110: AF6 -0111: AF7 1xxx: Reserved */
    using AFRH_AFSEL11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BRR register */
    using BRR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BR0: Port A reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. -0: No action on the corresponding ODx bit -1: Resets the corresponding ODx bit */
    using BRR_BR0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BR1: Port A reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. -0: No action on the corresponding ODx bit -1: Resets the corresponding ODx bit */
    using BRR_BR1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BR2: Port A reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. -0: No action on the corresponding ODx bit -1: Resets the corresponding ODx bit */
    using BRR_BR2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BR3: Port A reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. -0: No action on the corresponding ODx bit -1: Resets the corresponding ODx bit */
    using BRR_BR3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BR8: Port A reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. -0: No action on the corresponding ODx bit -1: Resets the corresponding ODx bit */
    using BRR_BR8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BR9: Port A reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. -0: No action on the corresponding ODx bit -1: Resets the corresponding ODx bit */
    using BRR_BR9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BR10: Port A reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. -0: No action on the corresponding ODx bit -1: Resets the corresponding ODx bit */
    using BRR_BR10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BR11: Port A reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. -0: No action on the corresponding ODx bit -1: Resets the corresponding ODx bit */
    using BRR_BR11 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
