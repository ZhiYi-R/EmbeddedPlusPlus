/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32WB05_GPIOB_HPP
#define EMBEDDED_PP_STM32WB05_GPIOB_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief GPIOB peripheral */
namespace STM32WB05::GPIOB {

    /** @brief MODER register */
    using MODER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MODE0[1:0]Port B configuration bits. These bits are written by software to configure the I/O mode. -00: Input mode -01: output mode -10: Alternate function mode -11: Analog mode */
    using MODER_MODE0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MODE1[1:0]Port B configuration bits. These bits are written by software to configure the I/O mode. -00: Input mode -01: output mode -10: Alternate function mode -11: Analog mode */
    using MODER_MODE1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MODE2[1:0]Port B configuration bits. These bits are written by software to configure the I/O mode. -00: Input mode -01: output mode -10: Alternate function mode -11: Analog mode */
    using MODER_MODE2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MODE3[1:0]Port B configuration bits. These bits are written by software to configure the I/O mode. -00: Input mode -01: output mode -10: Alternate function mode -11: Analog mode */
    using MODER_MODE3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MODE4[1:0]Port B configuration bits. These bits are written by software to configure the I/O mode. -00: Input mode -01: output mode -10: Alternate function mode -11: Analog mode */
    using MODER_MODE4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MODE5[1:0]Port B configuration bits. These bits are written by software to configure the I/O mode. -00: Input mode -01: output mode -10: Alternate function mode -11: Analog mode */
    using MODER_MODE5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MODE6[1:0]Port B configuration bits. These bits are written by software to configure the I/O mode. -00: Input mode -01: output mode -10: Alternate function mode -11: Analog mode */
    using MODER_MODE6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MODE7[1:0]Port B configuration bits. These bits are written by software to configure the I/O mode. -00: Input mode -01: output mode -10: Alternate function mode -11: Analog mode */
    using MODER_MODE7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MODE12[1:0]Port B configuration bits. These bits are written by software to configure the I/O mode. -00: Input mode -01: output mode -10: Alternate function mode -11: Analog mode */
    using MODER_MODE12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MODE13[1:0]Port B configuration bits. These bits are written by software to configure the I/O mode. -00: Input mode -01: output mode -10: Alternate function mode -11: Analog mode */
    using MODER_MODE13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MODE14[1:0]Port B configuration bits. These bits are written by software to configure the I/O mode. -00: Input mode -01: output mode -10: Alternate function mode -11: Analog mode */
    using MODER_MODE14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief MODE15[1:0]Port B configuration bits. These bits are written by software to configure the I/O mode. -00: Input mode -01: output mode -10: Alternate function mode -11: Analog mode */
    using MODER_MODE15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OTYPER register */
    using OTYPER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OT0: Port B configuration bits These bits are written by software to configure the I/O output type. -0: Output push-pull (reset state) -1: Output open-drain */
    using OTYPER_OT0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OT1: Port B configuration bits These bits are written by software to configure the I/O output type. -0: Output push-pull (reset state) -1: Output open-drain */
    using OTYPER_OT1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OT2: Port B configuration bits These bits are written by software to configure the I/O output type. -0: Output push-pull (reset state) -1: Output open-drain */
    using OTYPER_OT2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OT3: Port B configuration bits These bits are written by software to configure the I/O output type. -0: Output push-pull (reset state) -1: Output open-drain */
    using OTYPER_OT3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OT4: Port B configuration bits These bits are written by software to configure the I/O output type. -0: Output push-pull (reset state) -1: Output open-drain */
    using OTYPER_OT4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OT5: Port B configuration bits These bits are written by software to configure the I/O output type. -0: Output push-pull (reset state) -1: Output open-drain */
    using OTYPER_OT5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OT6: Port B configuration bits These bits are written by software to configure the I/O output type. -0: Output push-pull (reset state) -1: Output open-drain */
    using OTYPER_OT6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OT7: Port B configuration bits These bits are written by software to configure the I/O output type. -0: Output push-pull (reset state) -1: Output open-drain */
    using OTYPER_OT7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OT12: Port B configuration bits These bits are written by software to configure the I/O output type. -0: Output push-pull (reset state) -1: Output open-drain */
    using OTYPER_OT12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OT13: Port B configuration bits These bits are written by software to configure the I/O output type. -0: Output push-pull (reset state) -1: Output open-drain */
    using OTYPER_OT13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OT14: Port B configuration bits These bits are written by software to configure the I/O output type. -0: Output push-pull (reset state) -1: Output open-drain */
    using OTYPER_OT14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OT15: Port B configuration bits These bits are written by software to configure the I/O output type. -0: Output push-pull (reset state) -1: Output open-drain */
    using OTYPER_OT15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OSPEEDR register */
    using OSPEEDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OSPEED0[1:0]: Port B configuration bits These bits are written by software to configure the I/O output speed. */
    using OSPEEDR_OSPEED0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OSPEED1[1:0]: Port B configuration bits These bits are written by software to configure the I/O output speed. */
    using OSPEEDR_OSPEED1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OSPEED2[1:0]: Port B configuration bits These bits are written by software to configure the I/O output speed. */
    using OSPEEDR_OSPEED2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OSPEED3[1:0]: Port B configuration bits These bits are written by software to configure the I/O output speed. */
    using OSPEEDR_OSPEED3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OSPEED4[1:0]: Port B configuration bits These bits are written by software to configure the I/O output speed. */
    using OSPEEDR_OSPEED4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OSPEED5[1:0]: Port B configuration bits These bits are written by software to configure the I/O output speed. */
    using OSPEEDR_OSPEED5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OSPEED6[1:0]: Port B configuration bits These bits are written by software to configure the I/O output speed. */
    using OSPEEDR_OSPEED6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OSPEED7[1:0]: Port B configuration bits These bits are written by software to configure the I/O output speed. */
    using OSPEEDR_OSPEED7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OSPEED12[1:0]: Port B configuration bits These bits are written by software to configure the I/O output speed. */
    using OSPEEDR_OSPEED12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OSPEED13[1:0]: Port B configuration bits These bits are written by software to configure the I/O output speed. */
    using OSPEEDR_OSPEED13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OSPEED14[1:0]: Port B configuration bits These bits are written by software to configure the I/O output speed. */
    using OSPEEDR_OSPEED14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OSPEED15[1:0]: Port B configuration bits These bits are written by software to configure the I/O output speed. */
    using OSPEEDR_OSPEED15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PUPDR register */
    using PUPDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PUPD0: Port B configuration bits These bits are written by software to configure the I/O pull-up or pull-down -00: No pull-up, pull-down -01: Pull-up -10: Pull-down -11: Reserved */
    using PUPDR_PUPD0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PUPD1: Port B configuration bits These bits are written by software to configure the I/O pull-up or pull-down -00: No pull-up, pull-down -01: Pull-up -10: Pull-down -11: Reserved */
    using PUPDR_PUPD1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PUPD2: Port B configuration bits These bits are written by software to configure the I/O pull-up or pull-down -00: No pull-up, pull-down -01: Pull-up -10: Pull-down -11: Reserved */
    using PUPDR_PUPD2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PUPD3: Port B configuration bits These bits are written by software to configure the I/O pull-up or pull-down -00: No pull-up, pull-down -01: Pull-up -10: Pull-down -11: Reserved */
    using PUPDR_PUPD3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PUPD4: Port B configuration bits These bits are written by software to configure the I/O pull-up or pull-down -00: No pull-up, pull-down -01: Pull-up -10: Pull-down -11: Reserved */
    using PUPDR_PUPD4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PUPD5: Port B configuration bits These bits are written by software to configure the I/O pull-up or pull-down -00: No pull-up, pull-down -01: Pull-up -10: Pull-down -11: Reserved */
    using PUPDR_PUPD5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PUPD6: Port B configuration bits These bits are written by software to configure the I/O pull-up or pull-down -00: No pull-up, pull-down -01: Pull-up -10: Pull-down -11: Reserved */
    using PUPDR_PUPD6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PUPD7: Port B configuration bits These bits are written by software to configure the I/O pull-up or pull-down -00: No pull-up, pull-down -01: Pull-up -10: Pull-down -11: Reserved */
    using PUPDR_PUPD7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PUPD12: Port B configuration bits These bits are written by software to configure the I/O pull-up or pull-down -00: No pull-up, pull-down -01: Pull-up -10: Pull-down -11: Reserved */
    using PUPDR_PUPD12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PUPD13: Port B configuration bits These bits are written by software to configure the I/O pull-up or pull-down -00: No pull-up, pull-down -01: Pull-up -10: Pull-down -11: Reserved */
    using PUPDR_PUPD13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PUPD14: Port B configuration bits These bits are written by software to configure the I/O pull-up or pull-down -00: No pull-up, pull-down -01: Pull-up -10: Pull-down -11: Reserved */
    using PUPDR_PUPD14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PUPD15: Port B configuration bits These bits are written by software to configure the I/O pull-up or pull-down -00: No pull-up, pull-down -01: Pull-up -10: Pull-down -11: Reserved */
    using PUPDR_PUPD15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief IDR register */
    using IDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ID0: Port B input data bit.These bits are read-only. They contain the input value of the corresponding I/O port */
    using IDR_ID0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ID1: Port B input data bit.These bits are read-only. They contain the input value of the corresponding I/O port */
    using IDR_ID1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ID2: Port B input data bit.These bits are read-only. They contain the input value of the corresponding I/O port */
    using IDR_ID2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ID3: Port B input data bit.These bits are read-only. They contain the input value of the corresponding I/O port */
    using IDR_ID3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ID4: Port B input data bit.These bits are read-only. They contain the input value of the corresponding I/O port */
    using IDR_ID4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ID5: Port B input data bit.These bits are read-only. They contain the input value of the corresponding I/O port */
    using IDR_ID5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ID6: Port B input data bit.These bits are read-only. They contain the input value of the corresponding I/O port */
    using IDR_ID6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ID7: Port B input data bit.These bits are read-only. They contain the input value of the corresponding I/O port */
    using IDR_ID7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ID12: Port B input data bit.These bits are read-only. They contain the input value of the corresponding I/O port */
    using IDR_ID12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ID13: Port B input data bit.These bits are read-only. They contain the input value of the corresponding I/O port */
    using IDR_ID13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ID14: Port B input data bit.These bits are read-only. They contain the input value of the corresponding I/O port */
    using IDR_ID14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ID15: Port B input data bit.These bits are read-only. They contain the input value of the corresponding I/O port */
    using IDR_ID15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief ODR register */
    using ODR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OD0: Port B output data bit These bits can be read and written by software */
    using ODR_OD0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OD1: Port B output data bit These bits can be read and written by software */
    using ODR_OD1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OD2: Port B output data bit These bits can be read and written by software */
    using ODR_OD2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OD3: Port B output data bit These bits can be read and written by software */
    using ODR_OD3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OD4: Port B output data bit These bits can be read and written by software */
    using ODR_OD4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OD5: Port B output data bit These bits can be read and written by software */
    using ODR_OD5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OD6: Port B output data bit These bits can be read and written by software */
    using ODR_OD6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OD7: Port B output data bit These bits can be read and written by software */
    using ODR_OD7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OD12: Port B output data bit These bits can be read and written by software */
    using ODR_OD12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OD13: Port B output data bit These bits can be read and written by software */
    using ODR_OD13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OD14: Port B output data bit These bits can be read and written by software */
    using ODR_OD14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OD15: Port B output data bit These bits can be read and written by software */
    using ODR_OD15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BSRR register */
    using BSRR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BS0: Port B set bit 0 These bits are write-only. A read to these bits returns the value 0x0000. -0: No action on the corresponding ODx bit -1: Sets the corresponding ODx bit */
    using BSRR_BS0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BS1: Port B set bit 1 These bits are write-only. A read to these bits returns the value 0x0000. -0: No action on the corresponding ODx bit -1: Sets the corresponding ODx bit */
    using BSRR_BS1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BS2: Port B set bit 2 These bits are write-only. A read to these bits returns the value 0x0000. -0: No action on the corresponding ODx bit -1: Sets the corresponding ODx bit */
    using BSRR_BS2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BS3: Port B set bit 3 These bits are write-only. A read to these bits returns the value 0x0000. -0: No action on the corresponding ODx bit -1: Sets the corresponding ODx bit */
    using BSRR_BS3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BS4: Port B set bit 4 These bits are write-only. A read to these bits returns the value 0x0000. -0: No action on the corresponding ODx bit -1: Sets the corresponding ODx bit */
    using BSRR_BS4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BS5: Port B set bit 5 These bits are write-only. A read to these bits returns the value 0x0000. -0: No action on the corresponding ODx bit -1: Sets the corresponding ODx bit */
    using BSRR_BS5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BS6: Port B set bit 6 These bits are write-only. A read to these bits returns the value 0x0000. -0: No action on the corresponding ODx bit -1: Sets the corresponding ODx bit */
    using BSRR_BS6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BS7: Port B set bit 7 These bits are write-only. A read to these bits returns the value 0x0000. -0: No action on the corresponding ODx bit -1: Sets the corresponding ODx bit */
    using BSRR_BS7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BS12: Port B set bit 12 These bits are write-only. A read to these bits returns the value 0x0000. -0: No action on the corresponding ODx bit -1: Sets the corresponding ODx bit */
    using BSRR_BS12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BS13: Port B set bit 13 These bits are write-only. A read to these bits returns the value 0x0000. -0: No action on the corresponding ODx bit -1: Sets the corresponding ODx bit */
    using BSRR_BS13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BS14: Port B set bit 14 These bits are write-only. A read to these bits returns the value 0x0000. -0: No action on the corresponding ODx bit -1: Sets the corresponding ODx bit */
    using BSRR_BS14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BS15: Port B set bit 15 These bits are write-only. A read to these bits returns the value 0x0000. -0: No action on the corresponding ODx bit -1: Sets the corresponding ODx bit */
    using BSRR_BS15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BR0: Port B reset bit 0 These bits are write-only. A read to these bits returns the value 0x0000. -0: No action on the corresponding ODx bit -1: Resets the corresponding ODx bit Note: If both BSx and BRx are set, BSx has priority */
    using BSRR_BR0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BR1: Port B reset bit 1 These bits are write-only. A read to these bits returns the value 0x0000. -0: No action on the corresponding ODx bit -1: Resets the corresponding ODx bit Note: If both BSx and BRx are set, BSx has priority */
    using BSRR_BR1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BR2: Port B reset bit 2 These bits are write-only. A read to these bits returns the value 0x0000. -0: No action on the corresponding ODx bit -1: Resets the corresponding ODx bit Note: If both BSx and BRx are set, BSx has priority */
    using BSRR_BR2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BR3: Port B reset bit 3 These bits are write-only. A read to these bits returns the value 0x0000. -0: No action on the corresponding ODx bit -1: Resets the corresponding ODx bit Note: If both BSx and BRx are set, BSx has priority */
    using BSRR_BR3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BR4: Port B reset bit 4 These bits are write-only. A read to these bits returns the value 0x0000. -0: No action on the corresponding ODx bit -1: Resets the corresponding ODx bit Note: If both BSx and BRx are set, BSx has priority */
    using BSRR_BR4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BR5: Port B reset bit 5 These bits are write-only. A read to these bits returns the value 0x0000. -0: No action on the corresponding ODx bit -1: Resets the corresponding ODx bit Note: If both BSx and BRx are set, BSx has priority */
    using BSRR_BR5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BR6: Port B reset bit 6 These bits are write-only. A read to these bits returns the value 0x0000. -0: No action on the corresponding ODx bit -1: Resets the corresponding ODx bit Note: If both BSx and BRx are set, BSx has priority */
    using BSRR_BR6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BR7: Port B reset bit 7 These bits are write-only. A read to these bits returns the value 0x0000. -0: No action on the corresponding ODx bit -1: Resets the corresponding ODx bit Note: If both BSx and BRx are set, BSx has priority */
    using BSRR_BR7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BR12: Port B reset bit 12 These bits are write-only. A read to these bits returns the value 0x0000. -0: No action on the corresponding ODx bit -1: Resets the corresponding ODx bit Note: If both BSx and BRx are set, BSx has priority */
    using BSRR_BR12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BR13: Port B reset bit 13 These bits are write-only. A read to these bits returns the value 0x0000. -0: No action on the corresponding ODx bit -1: Resets the corresponding ODx bit Note: If both BSx and BRx are set, BSx has priority */
    using BSRR_BR13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BR14: Port B reset bit 14 These bits are write-only. A read to these bits returns the value 0x0000. -0: No action on the corresponding ODx bit -1: Resets the corresponding ODx bit Note: If both BSx and BRx are set, BSx has priority */
    using BSRR_BR14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BR15: Port B reset bit 15 These bits are write-only. A read to these bits returns the value 0x0000. -0: No action on the corresponding ODx bit -1: Resets the corresponding ODx bit Note: If both BSx and BRx are set, BSx has priority */
    using BSRR_BR15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LCKR register */
    using LCKR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LCK0: Port B lock bit 0 These bits are read/write but can only be written when the LCKK bit is 0, using the specific sequence described in LCKK bit description. -0: Port configuration not locked -1: Port configuration locked */
    using LCKR_LCK0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LCK1: Port B lock bit 1 These bits are read/write but can only be written when the LCKK bit is 0, using the specific sequence described in LCKK bit description. -0: Port configuration not locked -1: Port configuration locked */
    using LCKR_LCK1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LCK2: Port B lock bit 2 These bits are read/write but can only be written when the LCKK bit is 0, using the specific sequence described in LCKK bit description. -0: Port configuration not locked -1: Port configuration locked */
    using LCKR_LCK2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LCK3: Port B lock bit 3 These bits are read/write but can only be written when the LCKK bit is 0, using the specific sequence described in LCKK bit description. -0: Port configuration not locked -1: Port configuration locked */
    using LCKR_LCK3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LCK4: Port B lock bit 4 These bits are read/write but can only be written when the LCKK bit is 0, using the specific sequence described in LCKK bit description. -0: Port configuration not locked -1: Port configuration locked */
    using LCKR_LCK4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LCK5: Port B lock bit 5 These bits are read/write but can only be written when the LCKK bit is 0, using the specific sequence described in LCKK bit description. -0: Port configuration not locked -1: Port configuration locked */
    using LCKR_LCK5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LCK6: Port B lock bit 6 These bits are read/write but can only be written when the LCKK bit is 0, using the specific sequence described in LCKK bit description. -0: Port configuration not locked -1: Port configuration locked */
    using LCKR_LCK6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LCK7: Port B lock bit 7 These bits are read/write but can only be written when the LCKK bit is 0, using the specific sequence described in LCKK bit description. -0: Port configuration not locked -1: Port configuration locked */
    using LCKR_LCK7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LCK12: Port B lock bit 12 These bits are read/write but can only be written when the LCKK bit is 0, using the specific sequence described in LCKK bit description. -0: Port configuration not locked -1: Port configuration locked */
    using LCKR_LCK12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LCK13: Port B lock bit 13 These bits are read/write but can only be written when the LCKK bit is 0, using the specific sequence described in LCKK bit description. -0: Port configuration not locked -1: Port configuration locked */
    using LCKR_LCK13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LCK14: Port B lock bit 14 These bits are read/write but can only be written when the LCKK bit is 0, using the specific sequence described in LCKK bit description. -0: Port configuration not locked -1: Port configuration locked */
    using LCKR_LCK14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LCK15: Port B lock bit 15 These bits are read/write but can only be written when the LCKK bit is 0, using the specific sequence described in LCKK bit description. -0: Port configuration not locked -1: Port configuration locked */
    using LCKR_LCK15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LCKK: Lock key This bit can be read any time. It can only be modified using the lock key write sequence. -0: Port configuration lock key not active -1: Port configuration lock key active. The GPIOx_LCKR register is locked until the next MCU reset or peripheral reset. LOCK key write sequence: WR LCKR[16] = 1' + LCKR[15:0] WR LCKR[16] = 0' + LCKR[15:0] WR LCKR[16] = 1' + LCKR[15:0] RD LCKR RD LCKR[16] = 1' (this read operation is optional but it confirms that the lock is active) Note: During the LOCK key write sequence, the value of LCK[15:0] must not change. Any error in the lock sequence aborts the lock. After the first lock sequence on any bit of the port, any read access on the LCKK bit will return 1' until the next MCU reset or peripheral reset. */
    using LCKR_LCKK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AFRL register */
    using AFRL = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief y[3:0]: Alternate function selection for port B pin y (y = 0..7) These bits are written by software to configure alternate function I/Os AFSELy selection: -0000: AF0 -0001: AF1 -0010: AF2 -0011: AF3 -0100: AF4 -0101: AF5 -0110: AF6 -0111: AF7 1xxx: Reserved */
    using AFRL_AFSEL0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief y[3:0]: Alternate function selection for port B pin y (y = 0..7) These bits are written by software to configure alternate function I/Os AFSELy selection: -0000: AF0 -0001: AF1 -0010: AF2 -0011: AF3 -0100: AF4 -0101: AF5 -0110: AF6 -0111: AF7 1xxx: Reserved */
    using AFRL_AFSEL1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief y[3:0]: Alternate function selection for port B pin y (y = 0..7) These bits are written by software to configure alternate function I/Os AFSELy selection: -0000: AF0 -0001: AF1 -0010: AF2 -0011: AF3 -0100: AF4 -0101: AF5 -0110: AF6 -0111: AF7 1xxx: Reserved */
    using AFRL_AFSEL2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief y[3:0]: Alternate function selection for port B pin y (y = 0..7) These bits are written by software to configure alternate function I/Os AFSELy selection: -0000: AF0 -0001: AF1 -0010: AF2 -0011: AF3 -0100: AF4 -0101: AF5 -0110: AF6 -0111: AF7 1xxx: Reserved */
    using AFRL_AFSEL3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief y[3:0]: Alternate function selection for port B pin y (y = 0..7) These bits are written by software to configure alternate function I/Os AFSELy selection: -0000: AF0 -0001: AF1 -0010: AF2 -0011: AF3 -0100: AF4 -0101: AF5 -0110: AF6 -0111: AF7 1xxx: Reserved */
    using AFRL_AFSEL4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief y[3:0]: Alternate function selection for port B pin y (y = 0..7) These bits are written by software to configure alternate function I/Os AFSELy selection: -0000: AF0 -0001: AF1 -0010: AF2 -0011: AF3 -0100: AF4 -0101: AF5 -0110: AF6 -0111: AF7 1xxx: Reserved */
    using AFRL_AFSEL5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief y[3:0]: Alternate function selection for port B pin y (y = 0..7) These bits are written by software to configure alternate function I/Os AFSELy selection: -0000: AF0 -0001: AF1 -0010: AF2 -0011: AF3 -0100: AF4 -0101: AF5 -0110: AF6 -0111: AF7 1xxx: Reserved */
    using AFRL_AFSEL6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief y[3:0]: Alternate function selection for port B pin y (y = 0..7) These bits are written by software to configure alternate function I/Os AFSELy selection: -0000: AF0 -0001: AF1 -0010: AF2 -0011: AF3 -0100: AF4 -0101: AF5 -0110: AF6 -0111: AF7 1xxx: Reserved */
    using AFRL_AFSEL7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief AFRH register */
    using AFRH = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief y[3:0]: Alternate function selection for port B pin y (y = 8..15) These bits are written by software to configure alternate function I/Os AFSELy selection: -0000: AF0 -0001: AF1 -0010: AF2 -0011: AF3 -0100: AF4 -0101: AF5 -0110: AF6 -0111: AF7 1xxx: Reserved */
    using AFRH_AFSEL12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief y[3:0]: Alternate function selection for port B pin y (y = 8..15) These bits are written by software to configure alternate function I/Os AFSELy selection: -0000: AF0 -0001: AF1 -0010: AF2 -0011: AF3 -0100: AF4 -0101: AF5 -0110: AF6 -0111: AF7 1xxx: Reserved */
    using AFRH_AFSEL13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief y[3:0]: Alternate function selection for port B pin y (y = 8..15) These bits are written by software to configure alternate function I/Os AFSELy selection: -0000: AF0 -0001: AF1 -0010: AF2 -0011: AF3 -0100: AF4 -0101: AF5 -0110: AF6 -0111: AF7 1xxx: Reserved */
    using AFRH_AFSEL14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief y[3:0]: Alternate function selection for port B pin y (y = 8..15) These bits are written by software to configure alternate function I/Os AFSELy selection: -0000: AF0 -0001: AF1 -0010: AF2 -0011: AF3 -0100: AF4 -0101: AF5 -0110: AF6 -0111: AF7 1xxx: Reserved */
    using AFRH_AFSEL15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BRR register */
    using BRR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BR0: Port B reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. -0: No action on the corresponding ODx bit -1: Resets the corresponding ODx bit */
    using BRR_BR0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BR1: Port B reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. -0: No action on the corresponding ODx bit -1: Resets the corresponding ODx bit */
    using BRR_BR1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BR2: Port B reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. -0: No action on the corresponding ODx bit -1: Resets the corresponding ODx bit */
    using BRR_BR2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BR3: Port B reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. -0: No action on the corresponding ODx bit -1: Resets the corresponding ODx bit */
    using BRR_BR3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BR4: Port B reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. -0: No action on the corresponding ODx bit -1: Resets the corresponding ODx bit */
    using BRR_BR4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BR5: Port B reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. -0: No action on the corresponding ODx bit -1: Resets the corresponding ODx bit */
    using BRR_BR5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BR6: Port B reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. -0: No action on the corresponding ODx bit -1: Resets the corresponding ODx bit */
    using BRR_BR6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BR7: Port B reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. -0: No action on the corresponding ODx bit -1: Resets the corresponding ODx bit */
    using BRR_BR7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BR12 Port B reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. -0: No action on the corresponding ODx bit -1: Resets the corresponding ODx bit */
    using BRR_BR12 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BR13: Port B reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. -0: No action on the corresponding ODx bit -1: Resets the corresponding ODx bit */
    using BRR_BR13 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BR14: Port B reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. -0: No action on the corresponding ODx bit -1: Resets the corresponding ODx bit */
    using BRR_BR14 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief BR15: Port B reset bit y (y = 0..15) These bits are write-only. A read to these bits returns the value 0x0000. -0: No action on the corresponding ODx bit -1: Resets the corresponding ODx bit */
    using BRR_BR15 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
