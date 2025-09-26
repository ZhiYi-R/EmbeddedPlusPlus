/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32H735_FMAC_HPP
#define EMBEDDED_PP_STM32H735_FMAC_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief FMAC register block */
namespace STM32H735::FMAC {

    /** @brief FMAC X1 buffer configuration register */
    using FMAC_X1BUFCFG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Base address of X1 buffer */
    using FMAC_X1BUFCFG_X1_BASE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Allocated size of X1 buffer in 16-bit words The minimum buffer size is the number of feed-forward taps in the filter (+ the watermark threshold - 1). */
    using FMAC_X1BUFCFG_X1_BUF_SIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Watermark for buffer full flag Defines the threshold for setting the X1 buffer full flag when operating in circular mode. The flag is set if the number of free spaces in the buffer is less than 2FULL_WM. 2: Threshold = 4 3: Threshold = 8 Setting a threshold greater than 1 allows several data to be transferred into the buffer under one interrupt. Threshold should be set to 1 if DMA write requests are enabled (DMAWEN = 1 in FMAC_CR register). */
    using FMAC_X1BUFCFG_FULL_WM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Threshold = 1 (value: 0)
     *          - B_0x1: Threshold = 2 (value: 1)
     */
        /** @brief Threshold = 1 */
    constexpr std::uint32_t FMAC_X1BUFCFG_FULL_WM_B_0x0 = 0;
        /** @brief Threshold = 2 */
    constexpr std::uint32_t FMAC_X1BUFCFG_FULL_WM_B_0x1 = 1;

    /** @brief FMAC X2 buffer configuration register */
    using FMAC_X2BUFCFG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Base address of X2 buffer The X2 buffer base address can be modified while START=1, for example to change coefficient values. The filter should be stalled when doing this, since changing the coefficients while a calculation is ongoing affects the result. */
    using FMAC_X2BUFCFG_X2_BASE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Size of X2 buffer in 16-bit words This bitfield can not be modified when a function is ongoing (START = 1). */
    using FMAC_X2BUFCFG_X2_BUF_SIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FMAC Y buffer configuration register */
    using FMAC_YBUFCFG = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Base address of Y buffer */
    using FMAC_YBUFCFG_Y_BASE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Size of Y buffer in 16-bit words For FIR filters, the minimum buffer size is 1 (+ the watermark threshold). For IIR filters the minimum buffer size is the number of feedback taps (+ the watermark threshold). */
    using FMAC_YBUFCFG_Y_BUF_SIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Watermark for buffer empty flag Defines the threshold for setting the Y buffer empty flag when operating in circular mode. The flag is set if the number of unread values in the buffer is less than 2EMPTY_WM. 2: Threshold = 4 3: Threshold = 8 Setting a threshold greater than 1 allows several data to be transferred from the buffer under one interrupt. Threshold should be set to 1 if DMA read requests are enabled (DMAREN = 1 in FMAC_CR register). */
    using FMAC_YBUFCFG_EMPTY_WM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Threshold = 1 (value: 0)
     *          - B_0x1: Threshold = 2 (value: 1)
     */
        /** @brief Threshold = 1 */
    constexpr std::uint32_t FMAC_YBUFCFG_EMPTY_WM_B_0x0 = 0;
        /** @brief Threshold = 2 */
    constexpr std::uint32_t FMAC_YBUFCFG_EMPTY_WM_B_0x1 = 1;

    /** @brief FMAC parameter register */
    using FMAC_PARAM = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input parameter P. The value of this parameter is dependent on the function This bitfield can not be modified when a function is ongoing (START = 1) */
    using FMAC_PARAM_P = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input parameter Q. The value of this parameter is dependent on the function. This bitfield can not be modified when a function is ongoing (START = 1) */
    using FMAC_PARAM_Q = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Input parameter R. The value of this parameter is dependent on the function. This bitfield can not be modified when a function is ongoing (START = 1) */
    using FMAC_PARAM_R = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Function 2: Load X2 buffer 3: Load Y buffer 4 to 7: Reserved 8: Convolution (FIR filter) 9: IIR filter (direct form 1) This bitfield can not be modified when a function is ongoing (START = 1) */
    using FMAC_PARAM_FUNC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Load X1 buffer (value: 1)
     */
        /** @brief Load X1 buffer */
    constexpr std::uint32_t FMAC_PARAM_FUNC_B_0x1 = 1;

    /** @brief Enable execution Setting this bit triggers the execution of the function selected in the FUNC bitfield. Resetting it by software stops any ongoing function. For initialization functions, this bit is reset by hardware. */
    using FMAC_PARAM_START = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Stop execution (value: 0)
     *          - B_0x1: Start execution (value: 1)
     */
        /** @brief Stop execution */
    constexpr std::uint32_t FMAC_PARAM_START_B_0x0 = 0;
        /** @brief Start execution */
    constexpr std::uint32_t FMAC_PARAM_START_B_0x1 = 1;

    /** @brief FMAC control register */
    using FMAC_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable read interrupt This bit is set and cleared by software. A read returns the current state of the bit. */
    using FMAC_CR_RIEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disabled. No read interrupt requests are generated. (value: 0)
     *          - B_0x1: Enabled. An interrupt request is generated while the Y buffer EMPTY flag is not set. (value: 1)
     */
        /** @brief Disabled. No read interrupt requests are generated. */
    constexpr std::uint32_t FMAC_CR_RIEN_B_0x0 = 0;
        /** @brief Enabled. An interrupt request is generated while the Y buffer EMPTY flag is not set. */
    constexpr std::uint32_t FMAC_CR_RIEN_B_0x1 = 1;

    /** @brief Enable write interrupt This bit is set and cleared by software. A read returns the current state of the bit. */
    using FMAC_CR_WIEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disabled. No write interrupt requests are generated. (value: 0)
     *          - B_0x1: Enabled. An interrupt request is generated while the X1 buffer FULL flag is not set. (value: 1)
     */
        /** @brief Disabled. No write interrupt requests are generated. */
    constexpr std::uint32_t FMAC_CR_WIEN_B_0x0 = 0;
        /** @brief Enabled. An interrupt request is generated while the X1 buffer FULL flag is not set. */
    constexpr std::uint32_t FMAC_CR_WIEN_B_0x1 = 1;

    /** @brief Enable overflow error interrupts This bit is set and cleared by software. A read returns the current state of the bit. */
    using FMAC_CR_OVFLIEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disabled. No interrupts are generated upon overflow detection. (value: 0)
     *          - B_0x1: Enabled. An interrupt request is generated if the OVFL flag is set (value: 1)
     */
        /** @brief Disabled. No interrupts are generated upon overflow detection. */
    constexpr std::uint32_t FMAC_CR_OVFLIEN_B_0x0 = 0;
        /** @brief Enabled. An interrupt request is generated if the OVFL flag is set */
    constexpr std::uint32_t FMAC_CR_OVFLIEN_B_0x1 = 1;

    /** @brief Enable underflow error interrupts This bit is set and cleared by software. A read returns the current state of the bit. */
    using FMAC_CR_UNFLIEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disabled. No interrupts are generated upon underflow detection. (value: 0)
     *          - B_0x1: Enabled. An interrupt request is generated if the UNFL flag is set (value: 1)
     */
        /** @brief Disabled. No interrupts are generated upon underflow detection. */
    constexpr std::uint32_t FMAC_CR_UNFLIEN_B_0x0 = 0;
        /** @brief Enabled. An interrupt request is generated if the UNFL flag is set */
    constexpr std::uint32_t FMAC_CR_UNFLIEN_B_0x1 = 1;

    /** @brief Enable saturation error interrupts This bit is set and cleared by software. A read returns the current state of the bit. */
    using FMAC_CR_SATIEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disabled. No interrupts are generated upon saturation detection. (value: 0)
     *          - B_0x1: Enabled. An interrupt request is generated if the SAT flag is set (value: 1)
     */
        /** @brief Disabled. No interrupts are generated upon saturation detection. */
    constexpr std::uint32_t FMAC_CR_SATIEN_B_0x0 = 0;
        /** @brief Enabled. An interrupt request is generated if the SAT flag is set */
    constexpr std::uint32_t FMAC_CR_SATIEN_B_0x1 = 1;

    /** @brief Enable DMA read channel requests This bit can only be modified when START= 0 in the FMAC_PARAM register. A read returns the current state of the bit. */
    using FMAC_CR_DMAREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable. No DMA requests are generated (value: 0)
     *          - B_0x1: Enable. DMA requests are generated while the Y buffer is not empty. (value: 1)
     */
        /** @brief Disable. No DMA requests are generated */
    constexpr std::uint32_t FMAC_CR_DMAREN_B_0x0 = 0;
        /** @brief Enable. DMA requests are generated while the Y buffer is not empty. */
    constexpr std::uint32_t FMAC_CR_DMAREN_B_0x1 = 1;

    /** @brief Enable DMA write channel requests This bit can only be modified when START= 0 in the FMAC_PARAM register. A read returns the current state of the bit. */
    using FMAC_CR_DMAWEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable. No DMA requests are generated (value: 0)
     *          - B_0x1: Enable. DMA requests are generated while the X1 buffer is not full. (value: 1)
     */
        /** @brief Disable. No DMA requests are generated */
    constexpr std::uint32_t FMAC_CR_DMAWEN_B_0x0 = 0;
        /** @brief Enable. DMA requests are generated while the X1 buffer is not full. */
    constexpr std::uint32_t FMAC_CR_DMAWEN_B_0x1 = 1;

    /** @brief Enable clipping */
    using FMAC_CR_CLIPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Clipping disabled. Values at the output of the accumulator which exceed the q1.15 range, wrap. (value: 0)
     *          - B_0x1: Clipping enabled. Values at the output of the accumulator which exceed the q1.15 range are saturated to the maximum positive or negative value (+1 or -1) according to the sign. (value: 1)
     */
        /** @brief Clipping disabled. Values at the output of the accumulator which exceed the q1.15 range, wrap. */
    constexpr std::uint32_t FMAC_CR_CLIPEN_B_0x0 = 0;
        /** @brief Clipping enabled. Values at the output of the accumulator which exceed the q1.15 range are saturated to the maximum positive or negative value (+1 or -1) according to the sign. */
    constexpr std::uint32_t FMAC_CR_CLIPEN_B_0x1 = 1;

    /** @brief Reset FMAC unit This resets the write and read pointers, the internal control logic, the FMAC_SR register and the FMAC_PARAM register, including the START bit if active. Other register settings are not affected. This bit is reset by hardware. */
    using FMAC_CR_RESET = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Reset inactive (value: 0)
     *          - B_0x1: Reset active (value: 1)
     */
        /** @brief Reset inactive */
    constexpr std::uint32_t FMAC_CR_RESET_B_0x0 = 0;
        /** @brief Reset active */
    constexpr std::uint32_t FMAC_CR_RESET_B_0x1 = 1;

    /** @brief FMAC status register */
    using FMAC_SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Y buffer empty flag The buffer is flagged as empty if the number of unread data is less than the EMPTY_WM threshold. The number of unread data is the difference between the read pointer and the current output destination address. This flag is set and cleared by hardware, or by a reset. Note: after the last sample is read from the Y buffer there is a delay of 3 clock cycles before the YEMPTY flag goes high. To avoid any risk of underflow it is recommended to insert a software delay after reading from the Y buffer before reading the FMAC_SR. Alternatively, an EMPTY_WM threshold of 2 can be used. */
    using FMAC_SR_YEMPTY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Y buffer not empty. If the RIEN bit is set, the interrupt request is asserted until the flag is set. If DMAREN is set, DMA read channel requests are generated until the flag is set. (value: 0)
     *          - B_0x1: Y buffer empty. (value: 1)
     */
        /** @brief Y buffer not empty. If the RIEN bit is set, the interrupt request is asserted until the flag is set. If DMAREN is set, DMA read channel requests are generated until the flag is set. */
    constexpr std::uint32_t FMAC_SR_YEMPTY_B_0x0 = 0;
        /** @brief Y buffer empty. */
    constexpr std::uint32_t FMAC_SR_YEMPTY_B_0x1 = 1;

    /** @brief X1 buffer full flag The buffer is flagged as full if the number of available spaces is less than the FULL_WM threshold. The number of available spaces is the difference between the write pointer and the least recent sample currently in use. This flag is set and cleared by hardware, or by a reset. Note: after the last available space in the X1 buffer is filled there is a delay of 3 clock cycles before the X1FULL flag goes high. To avoid any risk of overflow it is recommended to insert a software delay after writing to the X1 buffer before reading the FMAC_SR. Alternatively, a FULL_WM threshold of 2 can be used. */
    using FMAC_SR_X1FULL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: X1 buffer not full. If the WIEN bit is set, the interrupt request is asserted until the flag is set. If DMAWEN is set, DMA write channel requests are generated until the flag is set. (value: 0)
     *          - B_0x1: X1 buffer full. (value: 1)
     */
        /** @brief X1 buffer not full. If the WIEN bit is set, the interrupt request is asserted until the flag is set. If DMAWEN is set, DMA write channel requests are generated until the flag is set. */
    constexpr std::uint32_t FMAC_SR_X1FULL_B_0x0 = 0;
        /** @brief X1 buffer full. */
    constexpr std::uint32_t FMAC_SR_X1FULL_B_0x1 = 1;

    /** @brief Overflow error flag An overflow occurs when a write is made to FMAC_WDATA when no free space is available in the X1 buffer. This flag is cleared by a reset of the unit. */
    using FMAC_SR_OVFL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No overflow detected (value: 0)
     *          - B_0x1: Overflow detected. If the OVFLIEN bit is set, an interrupt is generated. (value: 1)
     */
        /** @brief No overflow detected */
    constexpr std::uint32_t FMAC_SR_OVFL_B_0x0 = 0;
        /** @brief Overflow detected. If the OVFLIEN bit is set, an interrupt is generated. */
    constexpr std::uint32_t FMAC_SR_OVFL_B_0x1 = 1;

    /** @brief Underflow error flag An underflow occurs when a read is made from FMAC_RDATA when no valid data is available in the Y buffer. This flag is cleared by a reset of the unit. */
    using FMAC_SR_UNFL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No underflow detected (value: 0)
     *          - B_0x1: Underflow detected. If the UNFLIEN bit is set, an interrupt is generated. (value: 1)
     */
        /** @brief No underflow detected */
    constexpr std::uint32_t FMAC_SR_UNFL_B_0x0 = 0;
        /** @brief Underflow detected. If the UNFLIEN bit is set, an interrupt is generated. */
    constexpr std::uint32_t FMAC_SR_UNFL_B_0x1 = 1;

    /** @brief Saturation error flag Saturation occurs when the result of an accumulation exceeds the numeric range of the accumulator. This flag is cleared by a reset of the unit. */
    using FMAC_SR_SAT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No saturation detected (value: 0)
     *          - B_0x1: Saturation detected. If the SATIEN bit is set, an interrupt is generated. (value: 1)
     */
        /** @brief No saturation detected */
    constexpr std::uint32_t FMAC_SR_SAT_B_0x0 = 0;
        /** @brief Saturation detected. If the SATIEN bit is set, an interrupt is generated. */
    constexpr std::uint32_t FMAC_SR_SAT_B_0x1 = 1;

    /** @brief FMAC write data register */
    using FMAC_WDATA = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Write data When a write access to this register occurs, the write data are transferred to the address offset indicated by the write pointer. The pointer address is automatically incremented after each write access. */
    using FMAC_WDATA_WDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FMAC read data register */
    using FMAC_RDATA = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Read data When a read access to this register occurs, the read data are the contents of the Y output buffer at the address offset indicated by the READ pointer. The pointer address is automatically incremented after each read access. */
    using FMAC_RDATA_RDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
