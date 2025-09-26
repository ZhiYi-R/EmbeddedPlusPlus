/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32H7S_USART1_HPP
#define EMBEDDED_PP_STM32H7S_USART1_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Universal synchronous/asynchronous receiver transmitter */
namespace STM32H7S::USART1 {

    /** @brief USART control register 1 */
    using USART_CR1_ENABLED = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USART enable When this bit is cleared, the USART prescalers and outputs are stopped immediately, and all current operations are discarded. The USART configuration is kept, but all the USART_ISR status flags are reset. This bit is set and cleared by software. Note: To enter low-power mode without generating errors on the line, the TE bit must be previously reset and the software must wait for the TC bit in the USART_ISR to be set before resetting the UE bit. Note: The DMA requests are also reset when UE = 0 so the DMA channel must be disabled before resetting the UE bit. Note: In Smartcard mode, (SCEN = 1), the CK is always available when CLKEN = 1, regardless of the UE bit value. */
    using USART_CR1_ENABLED_UE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART prescaler and outputs disabled, low-power mode (value: 0)
     *          - B_0x1: USART enabled (value: 1)
     */
        /** @brief USART prescaler and outputs disabled, low-power mode */
    constexpr std::uint32_t USART_CR1_ENABLED_UE_B_0x0 = 0;
        /** @brief USART enabled */
    constexpr std::uint32_t USART_CR1_ENABLED_UE_B_0x1 = 1;

    /** @brief USART enable in low-power mode When this bit is cleared, the USART cannot wake up the MCU from low-power mode. When this bit is set, the USART can wake up the MCU from low-power mode. This bit is set and cleared by software. Note: It is recommended to set the UESM bit just before entering low-power mode, and clear it when exiting low-power mode. */
    using USART_CR1_ENABLED_UESM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART not able to wake up the MCU from low-power mode. (value: 0)
     *          - B_0x1: USART able to wake up the MCU from low-power mode. (value: 1)
     */
        /** @brief USART not able to wake up the MCU from low-power mode. */
    constexpr std::uint32_t USART_CR1_ENABLED_UESM_B_0x0 = 0;
        /** @brief USART able to wake up the MCU from low-power mode. */
    constexpr std::uint32_t USART_CR1_ENABLED_UESM_B_0x1 = 1;

    /** @brief Receiver enable This bit enables the receiver. It is set and cleared by software. */
    using USART_CR1_ENABLED_RE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Receiver is disabled (value: 0)
     *          - B_0x1: Receiver is enabled and begins searching for a start bit (value: 1)
     */
        /** @brief Receiver is disabled */
    constexpr std::uint32_t USART_CR1_ENABLED_RE_B_0x0 = 0;
        /** @brief Receiver is enabled and begins searching for a start bit */
    constexpr std::uint32_t USART_CR1_ENABLED_RE_B_0x1 = 1;

    /** @brief Transmitter enable This bit enables the transmitter. It is set and cleared by software. Note: During transmission, a low pulse on the TE bit (0 followed by 1) sends a preamble (idle line) after the current word, except in Smartcard mode. In order to generate an idle character, the TE must not be immediately written to 1. To ensure the required duration, the software can poll the TEACK bit in the USART_ISR register. Note: In Smartcard mode, when TE is set, there is a 1 bit-time delay before the transmission starts. */
    using USART_CR1_ENABLED_TE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Transmitter is disabled (value: 0)
     *          - B_0x1: Transmitter is enabled (value: 1)
     */
        /** @brief Transmitter is disabled */
    constexpr std::uint32_t USART_CR1_ENABLED_TE_B_0x0 = 0;
        /** @brief Transmitter is enabled */
    constexpr std::uint32_t USART_CR1_ENABLED_TE_B_0x1 = 1;

    /** @brief IDLE interrupt enable This bit is set and cleared by software. */
    using USART_CR1_ENABLED_IDLEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt inhibited (value: 0)
     *          - B_0x1: USART interrupt generated whenever IDLE=1 in the USART_ISR register (value: 1)
     */
        /** @brief Interrupt inhibited */
    constexpr std::uint32_t USART_CR1_ENABLED_IDLEIE_B_0x0 = 0;
        /** @brief USART interrupt generated whenever IDLE=1 in the USART_ISR register */
    constexpr std::uint32_t USART_CR1_ENABLED_IDLEIE_B_0x1 = 1;

    /** @brief RXFIFO not empty interrupt enable This bit is set and cleared by software. */
    using USART_CR1_ENABLED_RXFNEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt inhibited (value: 0)
     *          - B_0x1: USART interrupt generated whenever ORE=1 or RXFNE=1 in the USART_ISR register (value: 1)
     */
        /** @brief Interrupt inhibited */
    constexpr std::uint32_t USART_CR1_ENABLED_RXFNEIE_B_0x0 = 0;
        /** @brief USART interrupt generated whenever ORE=1 or RXFNE=1 in the USART_ISR register */
    constexpr std::uint32_t USART_CR1_ENABLED_RXFNEIE_B_0x1 = 1;

    /** @brief Transmission complete interrupt enable This bit is set and cleared by software. */
    using USART_CR1_ENABLED_TCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt inhibited (value: 0)
     *          - B_0x1: USART interrupt generated whenever TC=1 in the USART_ISR register (value: 1)
     */
        /** @brief Interrupt inhibited */
    constexpr std::uint32_t USART_CR1_ENABLED_TCIE_B_0x0 = 0;
        /** @brief USART interrupt generated whenever TC=1 in the USART_ISR register */
    constexpr std::uint32_t USART_CR1_ENABLED_TCIE_B_0x1 = 1;

    /** @brief TXFIFO not full interrupt enable This bit is set and cleared by software. */
    using USART_CR1_ENABLED_TXFNFIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt inhibited (value: 0)
     *          - B_0x1: USART interrupt generated whenever TXFNF =1 in the USART_ISR register (value: 1)
     */
        /** @brief Interrupt inhibited */
    constexpr std::uint32_t USART_CR1_ENABLED_TXFNFIE_B_0x0 = 0;
        /** @brief USART interrupt generated whenever TXFNF =1 in the USART_ISR register */
    constexpr std::uint32_t USART_CR1_ENABLED_TXFNFIE_B_0x1 = 1;

    /** @brief PE interrupt enable This bit is set and cleared by software. */
    using USART_CR1_ENABLED_PEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt inhibited (value: 0)
     *          - B_0x1: USART interrupt generated whenever PE=1 in the USART_ISR register (value: 1)
     */
        /** @brief Interrupt inhibited */
    constexpr std::uint32_t USART_CR1_ENABLED_PEIE_B_0x0 = 0;
        /** @brief USART interrupt generated whenever PE=1 in the USART_ISR register */
    constexpr std::uint32_t USART_CR1_ENABLED_PEIE_B_0x1 = 1;

    /** @brief Parity selection This bit selects the odd or even parity when the parity generation/detection is enabled (PCE bit set). It is set and cleared by software. The parity is selected after the current byte. This bitfield can only be written when the USART is disabled (UE=0). */
    using USART_CR1_ENABLED_PS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Even parity (value: 0)
     *          - B_0x1: Odd parity (value: 1)
     */
        /** @brief Even parity */
    constexpr std::uint32_t USART_CR1_ENABLED_PS_B_0x0 = 0;
        /** @brief Odd parity */
    constexpr std::uint32_t USART_CR1_ENABLED_PS_B_0x1 = 1;

    /** @brief Parity control enable This bit selects the hardware parity control (generation and detection). When the parity control is enabled, the computed parity is inserted at the MSB position (9th bit if M=1; 8th bit if M=0) and the parity is checked on the received data. This bit is set and cleared by software. Once it is set, PCE is active after the current byte (in reception and in transmission). This bitfield can only be written when the USART is disabled (UE=0). */
    using USART_CR1_ENABLED_PCE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Parity control disabled (value: 0)
     *          - B_0x1: Parity control enabled (value: 1)
     */
        /** @brief Parity control disabled */
    constexpr std::uint32_t USART_CR1_ENABLED_PCE_B_0x0 = 0;
        /** @brief Parity control enabled */
    constexpr std::uint32_t USART_CR1_ENABLED_PCE_B_0x1 = 1;

    /** @brief Receiver wakeup method This bit determines the USART wakeup method from Mute mode. It is set or cleared by software. This bitfield can only be written when the USART is disabled (UE=0). */
    using USART_CR1_ENABLED_WAKE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Idle line (value: 0)
     *          - B_0x1: Address mark (value: 1)
     */
        /** @brief Idle line */
    constexpr std::uint32_t USART_CR1_ENABLED_WAKE_B_0x0 = 0;
        /** @brief Address mark */
    constexpr std::uint32_t USART_CR1_ENABLED_WAKE_B_0x1 = 1;

    /** @brief Word length This bit is used in conjunction with bit 28 (M1) to determine the word length. It is set or cleared by software (refer to bit 28 (M1)description). This bit can only be written when the USART is disabled (UE=0). */
    using USART_CR1_ENABLED_M0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Mute mode enable This bit enables the USART Mute mode function. When set, the USART can switch between active and Mute mode, as defined by the WAKE bit. It is set and cleared by software. */
    using USART_CR1_ENABLED_MME = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Receiver in Active mode permanently (value: 0)
     *          - B_0x1: Receiver can switch between Mute mode and Active mode. (value: 1)
     */
        /** @brief Receiver in Active mode permanently */
    constexpr std::uint32_t USART_CR1_ENABLED_MME_B_0x0 = 0;
        /** @brief Receiver can switch between Mute mode and Active mode. */
    constexpr std::uint32_t USART_CR1_ENABLED_MME_B_0x1 = 1;

    /** @brief Character match interrupt enable This bit is set and cleared by software. */
    using USART_CR1_ENABLED_CMIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt inhibited (value: 0)
     *          - B_0x1: USART interrupt generated when the CMF bit is set in the USART_ISR register. (value: 1)
     */
        /** @brief Interrupt inhibited */
    constexpr std::uint32_t USART_CR1_ENABLED_CMIE_B_0x0 = 0;
        /** @brief USART interrupt generated when the CMF bit is set in the USART_ISR register. */
    constexpr std::uint32_t USART_CR1_ENABLED_CMIE_B_0x1 = 1;

    /** @brief Oversampling mode This bit can only be written when the USART is disabled (UE=0). Note: In LIN, IrDA and Smartcard modes, this bit must be kept cleared. */
    using USART_CR1_ENABLED_OVER8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Oversampling by 16 (value: 0)
     *          - B_0x1: Oversampling by 8 (value: 1)
     */
        /** @brief Oversampling by 16 */
    constexpr std::uint32_t USART_CR1_ENABLED_OVER8_B_0x0 = 0;
        /** @brief Oversampling by 8 */
    constexpr std::uint32_t USART_CR1_ENABLED_OVER8_B_0x1 = 1;

    /** @brief Driver Enable deassertion time This 5-bit value defines the time between the end of the last stop bit, in a transmitted message, and the de-activation of the DE (Driver Enable) signal. It is expressed in sample time units (1/8 or 1/16 bit time, depending on the oversampling rate). If the USART_TDR register is written during the DEDT time, the new data is transmitted only when the DEDT and DEAT times have both elapsed. This bitfield can only be written when the USART is disabled (UE=0). Note: If the Driver Enable feature is not supported, this bit is reserved and must be kept at reset value. Refer to Section 78.4: USART implementation on page 4549. */
    using USART_CR1_ENABLED_DEDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Driver Enable assertion time This 5-bit value defines the time between the activation of the DE (Driver Enable) signal and the beginning of the start bit. It is expressed in sample time units (1/8 or 1/16 bit time, depending on the oversampling rate). This bitfield can only be written when the USART is disabled (UE=0). Note: If the Driver Enable feature is not supported, this bit is reserved and must be kept at reset value. Refer to Section 78.4: USART implementation on page 4549. */
    using USART_CR1_ENABLED_DEAT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receiver timeout interrupt enable This bit is set and cleared by software. Note: If the USART does not support the Receiver timeout feature, this bit is reserved and must be kept at reset value. Section 78.4: USART implementation on page 4549. */
    using USART_CR1_ENABLED_RTOIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt inhibited (value: 0)
     *          - B_0x1: USART interrupt generated when the RTOF bit is set in the USART_ISR register. (value: 1)
     */
        /** @brief Interrupt inhibited */
    constexpr std::uint32_t USART_CR1_ENABLED_RTOIE_B_0x0 = 0;
        /** @brief USART interrupt generated when the RTOF bit is set in the USART_ISR register. */
    constexpr std::uint32_t USART_CR1_ENABLED_RTOIE_B_0x1 = 1;

    /** @brief End of Block interrupt enable This bit is set and cleared by software. Note: If the USART does not support Smartcard mode, this bit is reserved and must be kept at reset value. Refer to Section 78.4: USART implementation on page 4549. */
    using USART_CR1_ENABLED_EOBIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt inhibited (value: 0)
     *          - B_0x1: USART interrupt generated when the EOBF flag is set in the USART_ISR register (value: 1)
     */
        /** @brief Interrupt inhibited */
    constexpr std::uint32_t USART_CR1_ENABLED_EOBIE_B_0x0 = 0;
        /** @brief USART interrupt generated when the EOBF flag is set in the USART_ISR register */
    constexpr std::uint32_t USART_CR1_ENABLED_EOBIE_B_0x1 = 1;

    /** @brief Word length This bit must be used in conjunction with bit 12 (M0) to determine the word length. It is set or cleared by software. M[1:0] = 00: 1 start bit, 8 Data bits, n Stop bit M[1:0] = 01: 1 start bit, 9 Data bits, n Stop bit M[1:0] = 10: 1 start bit, 7 Data bits, n Stop bit This bit can only be written when the USART is disabled (UE=0). Note: In 7-bits data length mode, the Smartcard mode, LIN master mode and auto baud rate (0x7F and 0x55 frames detection) are not supported. */
    using USART_CR1_ENABLED_M1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FIFO mode enable This bit is set and cleared by software. This bitfield can only be written when the USART is disabled (UE=0). Note: FIFO mode can be used on standard UART communication, in SPI Master/Slave mode and in Smartcard modes only. It must not be enabled in IrDA and LIN modes. */
    using USART_CR1_ENABLED_FIFOEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FIFO mode is disabled. (value: 0)
     *          - B_0x1: FIFO mode is enabled. (value: 1)
     */
        /** @brief FIFO mode is disabled. */
    constexpr std::uint32_t USART_CR1_ENABLED_FIFOEN_B_0x0 = 0;
        /** @brief FIFO mode is enabled. */
    constexpr std::uint32_t USART_CR1_ENABLED_FIFOEN_B_0x1 = 1;

    /** @brief TXFIFO empty interrupt enable This bit is set and cleared by software. */
    using USART_CR1_ENABLED_TXFEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt inhibited (value: 0)
     *          - B_0x1: USART interrupt generated when TXFE=1 in the USART_ISR register (value: 1)
     */
        /** @brief Interrupt inhibited */
    constexpr std::uint32_t USART_CR1_ENABLED_TXFEIE_B_0x0 = 0;
        /** @brief USART interrupt generated when TXFE=1 in the USART_ISR register */
    constexpr std::uint32_t USART_CR1_ENABLED_TXFEIE_B_0x1 = 1;

    /** @brief RXFIFO Full interrupt enable This bit is set and cleared by software. */
    using USART_CR1_ENABLED_RXFFIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt inhibited (value: 0)
     *          - B_0x1: USART interrupt generated when RXFF=1 in the USART_ISR register (value: 1)
     */
        /** @brief Interrupt inhibited */
    constexpr std::uint32_t USART_CR1_ENABLED_RXFFIE_B_0x0 = 0;
        /** @brief USART interrupt generated when RXFF=1 in the USART_ISR register */
    constexpr std::uint32_t USART_CR1_ENABLED_RXFFIE_B_0x1 = 1;

    /** @brief USART control register 1 */
    using USART_CR1_DISABLED = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USART enable When this bit is cleared, the USART prescalers and outputs are stopped immediately, and all current operations are discarded. The USART configuration is kept, but all the USART_ISR status flags are reset. This bit is set and cleared by software. Note: To enter low-power mode without generating errors on the line, the TE bit must be previously reset and the software must wait for the TC bit in the USART_ISR to be set before resetting the UE bit. Note: The DMA requests are also reset when UE = 0 so the DMA channel must be disabled before resetting the UE bit. Note: In Smartcard mode, (SCEN = 1), the CK is always available when CLKEN = 1, regardless of the UE bit value. */
    using USART_CR1_DISABLED_UE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART prescaler and outputs disabled, low-power mode (value: 0)
     *          - B_0x1: USART enabled (value: 1)
     */
        /** @brief USART prescaler and outputs disabled, low-power mode */
    constexpr std::uint32_t USART_CR1_DISABLED_UE_B_0x0 = 0;
        /** @brief USART enabled */
    constexpr std::uint32_t USART_CR1_DISABLED_UE_B_0x1 = 1;

    /** @brief USART enable in low-power mode When this bit is cleared, the USART cannot wake up the MCU from low-power mode. When this bit is set, the USART can wake up the MCU from low-power mode. This bit is set and cleared by software. Note: It is recommended to set the UESM bit just before entering low-power mode, and clear it when exiting low-power mode. */
    using USART_CR1_DISABLED_UESM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART not able to wake up the MCU from low-power mode. (value: 0)
     *          - B_0x1: USART able to wake up the MCU from low-power mode. (value: 1)
     */
        /** @brief USART not able to wake up the MCU from low-power mode. */
    constexpr std::uint32_t USART_CR1_DISABLED_UESM_B_0x0 = 0;
        /** @brief USART able to wake up the MCU from low-power mode. */
    constexpr std::uint32_t USART_CR1_DISABLED_UESM_B_0x1 = 1;

    /** @brief Receiver enable This bit enables the receiver. It is set and cleared by software. */
    using USART_CR1_DISABLED_RE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Receiver is disabled (value: 0)
     *          - B_0x1: Receiver is enabled and begins searching for a start bit (value: 1)
     */
        /** @brief Receiver is disabled */
    constexpr std::uint32_t USART_CR1_DISABLED_RE_B_0x0 = 0;
        /** @brief Receiver is enabled and begins searching for a start bit */
    constexpr std::uint32_t USART_CR1_DISABLED_RE_B_0x1 = 1;

    /** @brief Transmitter enable This bit enables the transmitter. It is set and cleared by software. Note: During transmission, a low pulse on the TE bit (0 followed by 1) sends a preamble (idle line) after the current word, except in Smartcard mode. In order to generate an idle character, the TE must not be immediately written to 1. To ensure the required duration, the software can poll the TEACK bit in the USART_ISR register. Note: In Smartcard mode, when TE is set, there is a 1 bit-time delay before the transmission starts. */
    using USART_CR1_DISABLED_TE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Transmitter is disabled (value: 0)
     *          - B_0x1: Transmitter is enabled (value: 1)
     */
        /** @brief Transmitter is disabled */
    constexpr std::uint32_t USART_CR1_DISABLED_TE_B_0x0 = 0;
        /** @brief Transmitter is enabled */
    constexpr std::uint32_t USART_CR1_DISABLED_TE_B_0x1 = 1;

    /** @brief IDLE interrupt enable This bit is set and cleared by software. */
    using USART_CR1_DISABLED_IDLEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt inhibited (value: 0)
     *          - B_0x1: USART interrupt generated whenever IDLE=1 in the USART_ISR register (value: 1)
     */
        /** @brief Interrupt inhibited */
    constexpr std::uint32_t USART_CR1_DISABLED_IDLEIE_B_0x0 = 0;
        /** @brief USART interrupt generated whenever IDLE=1 in the USART_ISR register */
    constexpr std::uint32_t USART_CR1_DISABLED_IDLEIE_B_0x1 = 1;

    /** @brief Receive data register not empty This bit is set and cleared by software. */
    using USART_CR1_DISABLED_RXNEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt inhibited (value: 0)
     *          - B_0x1: USART interrupt generated whenever ORE=1 or RXNE=1 in the USART_ISR register (value: 1)
     */
        /** @brief Interrupt inhibited */
    constexpr std::uint32_t USART_CR1_DISABLED_RXNEIE_B_0x0 = 0;
        /** @brief USART interrupt generated whenever ORE=1 or RXNE=1 in the USART_ISR register */
    constexpr std::uint32_t USART_CR1_DISABLED_RXNEIE_B_0x1 = 1;

    /** @brief Transmission complete interrupt enable This bit is set and cleared by software. */
    using USART_CR1_DISABLED_TCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt inhibited (value: 0)
     *          - B_0x1: USART interrupt generated whenever TC=1 in the USART_ISR register (value: 1)
     */
        /** @brief Interrupt inhibited */
    constexpr std::uint32_t USART_CR1_DISABLED_TCIE_B_0x0 = 0;
        /** @brief USART interrupt generated whenever TC=1 in the USART_ISR register */
    constexpr std::uint32_t USART_CR1_DISABLED_TCIE_B_0x1 = 1;

    /** @brief Transmit data register empty This bit is set and cleared by software. */
    using USART_CR1_DISABLED_TXEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt inhibited (value: 0)
     *          - B_0x1: USART interrupt generated whenever TXE =1 in the USART_ISR register (value: 1)
     */
        /** @brief Interrupt inhibited */
    constexpr std::uint32_t USART_CR1_DISABLED_TXEIE_B_0x0 = 0;
        /** @brief USART interrupt generated whenever TXE =1 in the USART_ISR register */
    constexpr std::uint32_t USART_CR1_DISABLED_TXEIE_B_0x1 = 1;

    /** @brief PE interrupt enable This bit is set and cleared by software. */
    using USART_CR1_DISABLED_PEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt inhibited (value: 0)
     *          - B_0x1: USART interrupt generated whenever PE=1 in the USART_ISR register (value: 1)
     */
        /** @brief Interrupt inhibited */
    constexpr std::uint32_t USART_CR1_DISABLED_PEIE_B_0x0 = 0;
        /** @brief USART interrupt generated whenever PE=1 in the USART_ISR register */
    constexpr std::uint32_t USART_CR1_DISABLED_PEIE_B_0x1 = 1;

    /** @brief Parity selection This bit selects the odd or even parity when the parity generation/detection is enabled (PCE bit set). It is set and cleared by software. The parity is selected after the current byte. This bitfield can only be written when the USART is disabled (UE=0). */
    using USART_CR1_DISABLED_PS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Even parity (value: 0)
     *          - B_0x1: Odd parity (value: 1)
     */
        /** @brief Even parity */
    constexpr std::uint32_t USART_CR1_DISABLED_PS_B_0x0 = 0;
        /** @brief Odd parity */
    constexpr std::uint32_t USART_CR1_DISABLED_PS_B_0x1 = 1;

    /** @brief Parity control enable This bit selects the hardware parity control (generation and detection). When the parity control is enabled, the computed parity is inserted at the MSB position (9th bit if M=1; 8th bit if M=0) and the parity is checked on the received data. This bit is set and cleared by software. Once it is set, PCE is active after the current byte (in reception and in transmission). This bitfield can only be written when the USART is disabled (UE=0). */
    using USART_CR1_DISABLED_PCE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Parity control disabled (value: 0)
     *          - B_0x1: Parity control enabled (value: 1)
     */
        /** @brief Parity control disabled */
    constexpr std::uint32_t USART_CR1_DISABLED_PCE_B_0x0 = 0;
        /** @brief Parity control enabled */
    constexpr std::uint32_t USART_CR1_DISABLED_PCE_B_0x1 = 1;

    /** @brief Receiver wakeup method This bit determines the USART wakeup method from Mute mode. It is set or cleared by software. This bitfield can only be written when the USART is disabled (UE=0). */
    using USART_CR1_DISABLED_WAKE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Idle line (value: 0)
     *          - B_0x1: Address mark (value: 1)
     */
        /** @brief Idle line */
    constexpr std::uint32_t USART_CR1_DISABLED_WAKE_B_0x0 = 0;
        /** @brief Address mark */
    constexpr std::uint32_t USART_CR1_DISABLED_WAKE_B_0x1 = 1;

    /** @brief Word length This bit is used in conjunction with bit 28 (M1) to determine the word length. It is set or cleared by software (refer to bit 28 (M1)description). This bit can only be written when the USART is disabled (UE=0). */
    using USART_CR1_DISABLED_M0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Mute mode enable This bit enables the USART Mute mode function. When set, the USART can switch between active and Mute mode, as defined by the WAKE bit. It is set and cleared by software. */
    using USART_CR1_DISABLED_MME = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Receiver in Active mode permanently (value: 0)
     *          - B_0x1: Receiver can switch between Mute mode and Active mode. (value: 1)
     */
        /** @brief Receiver in Active mode permanently */
    constexpr std::uint32_t USART_CR1_DISABLED_MME_B_0x0 = 0;
        /** @brief Receiver can switch between Mute mode and Active mode. */
    constexpr std::uint32_t USART_CR1_DISABLED_MME_B_0x1 = 1;

    /** @brief Character match interrupt enable This bit is set and cleared by software. */
    using USART_CR1_DISABLED_CMIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt inhibited (value: 0)
     *          - B_0x1: USART interrupt generated when the CMF bit is set in the USART_ISR register. (value: 1)
     */
        /** @brief Interrupt inhibited */
    constexpr std::uint32_t USART_CR1_DISABLED_CMIE_B_0x0 = 0;
        /** @brief USART interrupt generated when the CMF bit is set in the USART_ISR register. */
    constexpr std::uint32_t USART_CR1_DISABLED_CMIE_B_0x1 = 1;

    /** @brief Oversampling mode This bit can only be written when the USART is disabled (UE=0). Note: In LIN, IrDA and Smartcard modes, this bit must be kept cleared. */
    using USART_CR1_DISABLED_OVER8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Oversampling by 16 (value: 0)
     *          - B_0x1: Oversampling by 8 (value: 1)
     */
        /** @brief Oversampling by 16 */
    constexpr std::uint32_t USART_CR1_DISABLED_OVER8_B_0x0 = 0;
        /** @brief Oversampling by 8 */
    constexpr std::uint32_t USART_CR1_DISABLED_OVER8_B_0x1 = 1;

    /** @brief Driver Enable deassertion time This 5-bit value defines the time between the end of the last stop bit, in a transmitted message, and the de-activation of the DE (Driver Enable) signal. It is expressed in sample time units (1/8 or 1/16 bit time, depending on the oversampling rate). If the USART_TDR register is written during the DEDT time, the new data is transmitted only when the DEDT and DEAT times have both elapsed. This bitfield can only be written when the USART is disabled (UE=0). Note: If the Driver Enable feature is not supported, this bit is reserved and must be kept at reset value. Refer to Section 78.4: USART implementation on page 4549. */
    using USART_CR1_DISABLED_DEDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Driver Enable assertion time This 5-bit value defines the time between the activation of the DE (Driver Enable) signal and the beginning of the start bit. It is expressed in sample time units (1/8 or 1/16 bit time, depending on the oversampling rate). This bitfield can only be written when the USART is disabled (UE=0). Note: If the Driver Enable feature is not supported, this bit is reserved and must be kept at reset value. Refer to Section 78.4: USART implementation on page 4549. */
    using USART_CR1_DISABLED_DEAT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receiver timeout interrupt enable This bit is set and cleared by software. Note: If the USART does not support the Receiver timeout feature, this bit is reserved and must be kept at reset value. Section 78.4: USART implementation on page 4549. */
    using USART_CR1_DISABLED_RTOIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt inhibited (value: 0)
     *          - B_0x1: USART interrupt generated when the RTOF bit is set in the USART_ISR register. (value: 1)
     */
        /** @brief Interrupt inhibited */
    constexpr std::uint32_t USART_CR1_DISABLED_RTOIE_B_0x0 = 0;
        /** @brief USART interrupt generated when the RTOF bit is set in the USART_ISR register. */
    constexpr std::uint32_t USART_CR1_DISABLED_RTOIE_B_0x1 = 1;

    /** @brief End of Block interrupt enable This bit is set and cleared by software. Note: If the USART does not support Smartcard mode, this bit is reserved and must be kept at reset value. Refer to Section 78.4: USART implementation on page 4549. */
    using USART_CR1_DISABLED_EOBIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt inhibited (value: 0)
     *          - B_0x1: USART interrupt generated when the EOBF flag is set in the USART_ISR register (value: 1)
     */
        /** @brief Interrupt inhibited */
    constexpr std::uint32_t USART_CR1_DISABLED_EOBIE_B_0x0 = 0;
        /** @brief USART interrupt generated when the EOBF flag is set in the USART_ISR register */
    constexpr std::uint32_t USART_CR1_DISABLED_EOBIE_B_0x1 = 1;

    /** @brief Word length This bit must be used in conjunction with bit 12 (M0) to determine the word length. It is set or cleared by software. M[1:0] = 00: 1 start bit, 8 Data bits, n Stop bit M[1:0] = 01: 1 start bit, 9 Data bits, n Stop bit M[1:0] = 10: 1 start bit, 7 Data bits, n Stop bit This bit can only be written when the USART is disabled (UE=0). Note: In 7-bits data length mode, the Smartcard mode, LIN master mode and auto baud rate (0x7F and 0x55 frames detection) are not supported. */
    using USART_CR1_DISABLED_M1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FIFO mode enable This bit is set and cleared by software. This bitfield can only be written when the USART is disabled (UE=0). Note: FIFO mode can be used on standard UART communication, in SPI Master/Slave mode and in Smartcard modes only. It must not be enabled in IrDA and LIN modes. */
    using USART_CR1_DISABLED_FIFOEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FIFO mode is disabled. (value: 0)
     *          - B_0x1: FIFO mode is enabled. (value: 1)
     */
        /** @brief FIFO mode is disabled. */
    constexpr std::uint32_t USART_CR1_DISABLED_FIFOEN_B_0x0 = 0;
        /** @brief FIFO mode is enabled. */
    constexpr std::uint32_t USART_CR1_DISABLED_FIFOEN_B_0x1 = 1;

    /** @brief USART control register 2 */
    using USART_CR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronous Slave mode enable When the SLVEN bit is set, the Synchronous slave mode is enabled. Note: When SPI slave mode is not supported, this bit is reserved and must be kept at reset value. Refer to Section 78.4: USART implementation on page 4549. */
    using USART_CR2_SLVEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Slave mode disabled. (value: 0)
     *          - B_0x1: Slave mode enabled. (value: 1)
     */
        /** @brief Slave mode disabled. */
    constexpr std::uint32_t USART_CR2_SLVEN_B_0x0 = 0;
        /** @brief Slave mode enabled. */
    constexpr std::uint32_t USART_CR2_SLVEN_B_0x1 = 1;

    /** @brief When the DIS_NSS bit is set, the NSS pin input is ignored. Note: When SPI slave mode is not supported, this bit is reserved and must be kept at reset value. Refer to Section 78.4: USART implementation on page 4549. */
    using USART_CR2_DIS_NSS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI slave selection depends on NSS input pin. (value: 0)
     *          - B_0x1: SPI slave is always selected and NSS input pin is ignored. (value: 1)
     */
        /** @brief SPI slave selection depends on NSS input pin. */
    constexpr std::uint32_t USART_CR2_DIS_NSS_B_0x0 = 0;
        /** @brief SPI slave is always selected and NSS input pin is ignored. */
    constexpr std::uint32_t USART_CR2_DIS_NSS_B_0x1 = 1;

    /** @brief 7-bit Address Detection/4-bit Address Detection This bit is for selection between 4-bit address detection or 7-bit address detection. This bit can only be written when the USART is disabled (UE=0) Note: In 7-bit and 9-bit data modes, the address detection is done on 6-bit and 8-bit address (ADD[5:0] and ADD[7:0]) respectively. */
    using USART_CR2_ADDM7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 4-bit address detection (value: 0)
     *          - B_0x1: 7-bit address detection (in 8-bit data mode) (value: 1)
     */
        /** @brief 4-bit address detection */
    constexpr std::uint32_t USART_CR2_ADDM7_B_0x0 = 0;
        /** @brief 7-bit address detection (in 8-bit data mode) */
    constexpr std::uint32_t USART_CR2_ADDM7_B_0x1 = 1;

    /** @brief LIN break detection length This bit is for selection between 11 bit or 10 bit break detection. This bit can only be written when the USART is disabled (UE=0). Note: If LIN mode is not supported, this bit is reserved and must be kept at reset value. Refer to Section 78.4: USART implementation on page 4549. */
    using USART_CR2_LBDL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 10-bit break detection (value: 0)
     *          - B_0x1: 11-bit break detection (value: 1)
     */
        /** @brief 10-bit break detection */
    constexpr std::uint32_t USART_CR2_LBDL_B_0x0 = 0;
        /** @brief 11-bit break detection */
    constexpr std::uint32_t USART_CR2_LBDL_B_0x1 = 1;

    /** @brief LIN break detection interrupt enable Break interrupt mask (break detection using break delimiter). Note: If LIN mode is not supported, this bit is reserved and must be kept at reset value. Refer to Section 78.4: USART implementation on page 4549. */
    using USART_CR2_LBDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt is inhibited (value: 0)
     *          - B_0x1: An interrupt is generated whenever LBDF=1 in the USART_ISR register (value: 1)
     */
        /** @brief Interrupt is inhibited */
    constexpr std::uint32_t USART_CR2_LBDIE_B_0x0 = 0;
        /** @brief An interrupt is generated whenever LBDF=1 in the USART_ISR register */
    constexpr std::uint32_t USART_CR2_LBDIE_B_0x1 = 1;

    /** @brief Last bit clock pulse This bit is used to select whether the clock pulse associated with the last data bit transmitted (MSB) has to be output on the CK pin in Synchronous mode. The last bit is the 7th or 8th or 9th data bit transmitted depending on the 7 or 8 or 9 bit format selected by the M bit in the USART_CR1 register. This bit can only be written when the USART is disabled (UE=0). Note: If Synchronous mode is not supported, this bit is reserved and must be kept at reset value. Refer to Section 78.4: USART implementation on page 4549. */
    using USART_CR2_LBCL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The clock pulse of the last data bit is not output to the CK pin (value: 0)
     *          - B_0x1: The clock pulse of the last data bit is output to the CK pin (value: 1)
     */
        /** @brief The clock pulse of the last data bit is not output to the CK pin */
    constexpr std::uint32_t USART_CR2_LBCL_B_0x0 = 0;
        /** @brief The clock pulse of the last data bit is output to the CK pin */
    constexpr std::uint32_t USART_CR2_LBCL_B_0x1 = 1;

    /** @brief Clock phase This bit is used to select the phase of the clock output on the CK pin in Synchronous mode. It works in conjunction with the CPOL bit to produce the desired clock/data relationship (see Figure 917 and Figure 918) This bit can only be written when the USART is disabled (UE=0). Note: If Synchronous mode is not supported, this bit is reserved and must be kept at reset value. Refer to Section 78.4: USART implementation on page 4549. */
    using USART_CR2_CPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The first clock transition is the first data capture edge (value: 0)
     *          - B_0x1: The second clock transition is the first data capture edge (value: 1)
     */
        /** @brief The first clock transition is the first data capture edge */
    constexpr std::uint32_t USART_CR2_CPHA_B_0x0 = 0;
        /** @brief The second clock transition is the first data capture edge */
    constexpr std::uint32_t USART_CR2_CPHA_B_0x1 = 1;

    /** @brief Clock polarity This bit enables the user to select the polarity of the clock output on the CK pin in Synchronous mode. It works in conjunction with the CPHA bit to produce the desired clock/data relationship This bit can only be written when the USART is disabled (UE=0). Note: If Synchronous mode is not supported, this bit is reserved and must be kept at reset value. Refer to Section 78.4: USART implementation on page 4549. */
    using USART_CR2_CPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Steady low value on CK pin outside transmission window (value: 0)
     *          - B_0x1: Steady high value on CK pin outside transmission window (value: 1)
     */
        /** @brief Steady low value on CK pin outside transmission window */
    constexpr std::uint32_t USART_CR2_CPOL_B_0x0 = 0;
        /** @brief Steady high value on CK pin outside transmission window */
    constexpr std::uint32_t USART_CR2_CPOL_B_0x1 = 1;

    /** @brief Clock enable This bit enables the user to enable the CK pin. This bit can only be written when the USART is disabled (UE=0). Note: If neither Synchronous mode nor Smartcard mode is supported, this bit is reserved and must be kept at reset value. Refer to Section 78.4: USART implementation on page 4549. In Smartcard mode, in order to provide correctly the CK clock to the smartcard, the steps below must be respected: UE = 0 SCEN = 1 GTPR configuration CLKEN= 1 Note: UE = 1 */
    using USART_CR2_CLKEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CK pin disabled (value: 0)
     *          - B_0x1: CK pin enabled (value: 1)
     */
        /** @brief CK pin disabled */
    constexpr std::uint32_t USART_CR2_CLKEN_B_0x0 = 0;
        /** @brief CK pin enabled */
    constexpr std::uint32_t USART_CR2_CLKEN_B_0x1 = 1;

    /** @brief stop bits These bits are used for programming the stop bits. This bitfield can only be written when the USART is disabled (UE=0). */
    using USART_CR2_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1 stop bit (value: 0)
     *          - B_0x1: 0.5 stop bit. (value: 1)
     *          - B_0x2: 2 stop bits (value: 2)
     *          - B_0x3: 1.5 stop bits (value: 3)
     */
        /** @brief 1 stop bit */
    constexpr std::uint32_t USART_CR2_STOP_B_0x0 = 0;
        /** @brief 0.5 stop bit. */
    constexpr std::uint32_t USART_CR2_STOP_B_0x1 = 1;
        /** @brief 2 stop bits */
    constexpr std::uint32_t USART_CR2_STOP_B_0x2 = 2;
        /** @brief 1.5 stop bits */
    constexpr std::uint32_t USART_CR2_STOP_B_0x3 = 3;

    /** @brief LIN mode enable This bit is set and cleared by software. The LIN mode enables the capability to send LIN synchronous breaks (13 low bits) using the SBKRQ bit in the USART_CR1 register, and to detect LIN Sync breaks. This bitfield can only be written when the USART is disabled (UE=0). Note: If the USART does not support LIN mode, this bit is reserved and must be kept at reset value. Refer to Section 78.4: USART implementation on page 4549. */
    using USART_CR2_LINEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LIN mode disabled (value: 0)
     *          - B_0x1: LIN mode enabled (value: 1)
     */
        /** @brief LIN mode disabled */
    constexpr std::uint32_t USART_CR2_LINEN_B_0x0 = 0;
        /** @brief LIN mode enabled */
    constexpr std::uint32_t USART_CR2_LINEN_B_0x1 = 1;

    /** @brief Swap TX/RX pins This bit is set and cleared by software. This bitfield can only be written when the USART is disabled (UE=0). */
    using USART_CR2_SWAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TX/RX pins are used as defined in standard pinout (value: 0)
     *          - B_0x1: The TX and RX pins functions are swapped. This enables to work in the case of a cross-wired connection to another UART. (value: 1)
     */
        /** @brief TX/RX pins are used as defined in standard pinout */
    constexpr std::uint32_t USART_CR2_SWAP_B_0x0 = 0;
        /** @brief The TX and RX pins functions are swapped. This enables to work in the case of a cross-wired connection to another UART. */
    constexpr std::uint32_t USART_CR2_SWAP_B_0x1 = 1;

    /** @brief RX pin active level inversion This bit is set and cleared by software. This enables the use of an external inverter on the RX line. This bitfield can only be written when the USART is disabled (UE=0). */
    using USART_CR2_RXINV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RX pin signal works using the standard logic levels (V<sub>DD</sub> =1/idle, Gnd=0/mark) (value: 0)
     *          - B_0x1: RX pin signal values are inverted. ((V<sub>DD</sub> =0/mark, Gnd=1/idle). (value: 1)
     */
        /** @brief RX pin signal works using the standard logic levels (V<sub>DD</sub> =1/idle, Gnd=0/mark) */
    constexpr std::uint32_t USART_CR2_RXINV_B_0x0 = 0;
        /** @brief RX pin signal values are inverted. ((V<sub>DD</sub> =0/mark, Gnd=1/idle). */
    constexpr std::uint32_t USART_CR2_RXINV_B_0x1 = 1;

    /** @brief TX pin active level inversion This bit is set and cleared by software. This enables the use of an external inverter on the TX line. This bitfield can only be written when the USART is disabled (UE=0). */
    using USART_CR2_TXINV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TX pin signal works using the standard logic levels (V<sub>DD</sub> =1/idle, Gnd=0/mark) (value: 0)
     *          - B_0x1: TX pin signal values are inverted. ((V<sub>DD</sub> =0/mark, Gnd=1/idle). (value: 1)
     */
        /** @brief TX pin signal works using the standard logic levels (V<sub>DD</sub> =1/idle, Gnd=0/mark) */
    constexpr std::uint32_t USART_CR2_TXINV_B_0x0 = 0;
        /** @brief TX pin signal values are inverted. ((V<sub>DD</sub> =0/mark, Gnd=1/idle). */
    constexpr std::uint32_t USART_CR2_TXINV_B_0x1 = 1;

    /** @brief Binary data inversion This bit is set and cleared by software. This bitfield can only be written when the USART is disabled (UE=0). */
    using USART_CR2_DATAINV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Logical data from the data register are send/received in positive/direct logic. (1=H, 0=L) (value: 0)
     *          - B_0x1: Logical data from the data register are send/received in negative/inverse logic. (1=L, 0=H). The parity bit is also inverted. (value: 1)
     */
        /** @brief Logical data from the data register are send/received in positive/direct logic. (1=H, 0=L) */
    constexpr std::uint32_t USART_CR2_DATAINV_B_0x0 = 0;
        /** @brief Logical data from the data register are send/received in negative/inverse logic. (1=L, 0=H). The parity bit is also inverted. */
    constexpr std::uint32_t USART_CR2_DATAINV_B_0x1 = 1;

    /** @brief Most significant bit first This bit is set and cleared by software. This bitfield can only be written when the USART is disabled (UE=0). */
    using USART_CR2_MSBFIRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: data is transmitted/received with data bit 0 first, following the start bit. (value: 0)
     *          - B_0x1: data is transmitted/received with the MSB (bit 7/8) first, following the start bit. (value: 1)
     */
        /** @brief data is transmitted/received with data bit 0 first, following the start bit. */
    constexpr std::uint32_t USART_CR2_MSBFIRST_B_0x0 = 0;
        /** @brief data is transmitted/received with the MSB (bit 7/8) first, following the start bit. */
    constexpr std::uint32_t USART_CR2_MSBFIRST_B_0x1 = 1;

    /** @brief Auto baud rate enable This bit is set and cleared by software. Note: If the USART does not support the auto baud rate feature, this bit is reserved and must be kept at reset value. Refer to Section 78.4: USART implementation on page 4549. */
    using USART_CR2_ABREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Auto baud rate detection is disabled. (value: 0)
     *          - B_0x1: Auto baud rate detection is enabled. (value: 1)
     */
        /** @brief Auto baud rate detection is disabled. */
    constexpr std::uint32_t USART_CR2_ABREN_B_0x0 = 0;
        /** @brief Auto baud rate detection is enabled. */
    constexpr std::uint32_t USART_CR2_ABREN_B_0x1 = 1;

    /** @brief Auto baud rate mode These bits are set and cleared by software. This bitfield can only be written when ABREN = 0 or the USART is disabled (UE=0). Note: If DATAINV=1 and/or MSBFIRST=1 the patterns must be the same on the line, for example 0xAA for MSBFIRST) Note: If the USART does not support the auto baud rate feature, this bit is reserved and must be kept at reset value. Refer to Section 78.4: USART implementation on page 4549. */
    using USART_CR2_ABRMOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Measurement of the start bit is used to detect the baud rate. (value: 0)
     *          - B_0x1: Falling edge to falling edge measurement (the received frame must start with a single bit = 1 -> Frame = Start10xxxxxx) (value: 1)
     *          - B_0x2: 0x7F frame detection. (value: 2)
     *          - B_0x3: 0x55 frame detection (value: 3)
     */
        /** @brief Measurement of the start bit is used to detect the baud rate. */
    constexpr std::uint32_t USART_CR2_ABRMOD_B_0x0 = 0;
        /** @brief Falling edge to falling edge measurement (the received frame must start with a single bit = 1 -> Frame = Start10xxxxxx) */
    constexpr std::uint32_t USART_CR2_ABRMOD_B_0x1 = 1;
        /** @brief 0x7F frame detection. */
    constexpr std::uint32_t USART_CR2_ABRMOD_B_0x2 = 2;
        /** @brief 0x55 frame detection */
    constexpr std::uint32_t USART_CR2_ABRMOD_B_0x3 = 3;

    /** @brief Receiver timeout enable This bit is set and cleared by software. When this feature is enabled, the RTOF flag in the USART_ISR register is set if the RX line is idle (no reception) for the duration programmed in the RTOR (receiver timeout register). Note: If the USART does not support the Receiver timeout feature, this bit is reserved and must be kept at reset value. Refer to Section 78.4: USART implementation on page 4549. */
    using USART_CR2_RTOEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Receiver timeout feature disabled. (value: 0)
     *          - B_0x1: Receiver timeout feature enabled. (value: 1)
     */
        /** @brief Receiver timeout feature disabled. */
    constexpr std::uint32_t USART_CR2_RTOEN_B_0x0 = 0;
        /** @brief Receiver timeout feature enabled. */
    constexpr std::uint32_t USART_CR2_RTOEN_B_0x1 = 1;

    /** @brief Address of the USART node These bits give the address of the USART node in Mute mode or a character code to be recognized in low-power or Run mode: In Mute mode: they are used in multiprocessor communication to wakeup from Mute mode with 4-bit/7-bit address mark detection. The MSB of the character sent by the transmitter should be equal to 1. In 4-bit address mark detection, only ADD[3:0] bits are used. In low-power mode: they are used for wake up from low-power mode on character match. When WUS[1:0] is programmed to 0b00 (WUF active on address match), the wakeup from low-power mode is performed when the received character corresponds to the character programmed through ADD[6:0] or ADD[3:0] bitfield (depending on ADDM7 bit), and WUF interrupt is enabled by setting WUFIE bit. The MSB of the character sent by transmitter should be equal to 1. In Run mode with Mute mode inactive (for example, end-of-block detection in ModBus protocol): the whole received character (8 bits) is compared to ADD[7:0] value and CMF flag is set on match. An interrupt is generated if the CMIE bit is set. These bits can only be written when the reception is disabled (RE = 0) or when the USART is disabled (UE = 0). */
    using USART_CR2_ADD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USART control register 3 */
    using USART_CR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Error interrupt enable Error Interrupt Enable Bit is required to enable interrupt generation in case of a framing error, overrun error noise flag or SPI slave underrun error (FE=1 or ORE=1 or NE=1or UDR = 1 in the USART_ISR register). */
    using USART_CR3_EIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt inhibited (value: 0)
     *          - B_0x1: interrupt generated when FE=1 or ORE=1 or NE=1 or UDR = 1 (in SPI slave mode) in the USART_ISR register. (value: 1)
     */
        /** @brief Interrupt inhibited */
    constexpr std::uint32_t USART_CR3_EIE_B_0x0 = 0;
        /** @brief interrupt generated when FE=1 or ORE=1 or NE=1 or UDR = 1 (in SPI slave mode) in the USART_ISR register. */
    constexpr std::uint32_t USART_CR3_EIE_B_0x1 = 1;

    /** @brief IrDA mode enable This bit is set and cleared by software. This bit can only be written when the USART is disabled (UE=0). Note: If IrDA mode is not supported, this bit is reserved and must be kept at reset value. Refer to Section 78.4: USART implementation on page 4549. */
    using USART_CR3_IREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IrDA disabled (value: 0)
     *          - B_0x1: IrDA enabled (value: 1)
     */
        /** @brief IrDA disabled */
    constexpr std::uint32_t USART_CR3_IREN_B_0x0 = 0;
        /** @brief IrDA enabled */
    constexpr std::uint32_t USART_CR3_IREN_B_0x1 = 1;

    /** @brief IrDA low-power This bit is used for selecting between normal and low-power IrDA modes This bit can only be written when the USART is disabled (UE=0). Note: If IrDA mode is not supported, this bit is reserved and must be kept at reset value. Refer to Section 78.4: USART implementation on page 4549. */
    using USART_CR3_IRLP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal mode (value: 0)
     *          - B_0x1: Low-power mode (value: 1)
     */
        /** @brief Normal mode */
    constexpr std::uint32_t USART_CR3_IRLP_B_0x0 = 0;
        /** @brief Low-power mode */
    constexpr std::uint32_t USART_CR3_IRLP_B_0x1 = 1;

    /** @brief Half-duplex selection Selection of Single-wire Half-duplex mode This bit can only be written when the USART is disabled (UE=0). */
    using USART_CR3_HDSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Half-duplex mode is not selected (value: 0)
     *          - B_0x1: Half-duplex mode is selected (value: 1)
     */
        /** @brief Half-duplex mode is not selected */
    constexpr std::uint32_t USART_CR3_HDSEL_B_0x0 = 0;
        /** @brief Half-duplex mode is selected */
    constexpr std::uint32_t USART_CR3_HDSEL_B_0x1 = 1;

    /** @brief Smartcard NACK enable This bitfield can only be written when the USART is disabled (UE=0). Note: If the USART does not support Smartcard mode, this bit is reserved and must be kept at reset value. Refer to Section 78.4: USART implementation on page 4549. */
    using USART_CR3_NACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: NACK transmission in case of parity error is disabled (value: 0)
     *          - B_0x1: NACK transmission during parity error is enabled (value: 1)
     */
        /** @brief NACK transmission in case of parity error is disabled */
    constexpr std::uint32_t USART_CR3_NACK_B_0x0 = 0;
        /** @brief NACK transmission during parity error is enabled */
    constexpr std::uint32_t USART_CR3_NACK_B_0x1 = 1;

    /** @brief Smartcard mode enable This bit is used for enabling Smartcard mode. This bitfield can only be written when the USART is disabled (UE=0). Note: If the USART does not support Smartcard mode, this bit is reserved and must be kept at reset value. Refer to Section 78.4: USART implementation on page 4549. */
    using USART_CR3_SCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Smartcard mode disabled (value: 0)
     *          - B_0x1: Smartcard mode enabled (value: 1)
     */
        /** @brief Smartcard mode disabled */
    constexpr std::uint32_t USART_CR3_SCEN_B_0x0 = 0;
        /** @brief Smartcard mode enabled */
    constexpr std::uint32_t USART_CR3_SCEN_B_0x1 = 1;

    /** @brief DMA enable receiver This bit is set/reset by software */
    using USART_CR3_DMAR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: DMA mode is enabled for reception (value: 1)
     *          - B_0x0: DMA mode is disabled for reception (value: 0)
     */
        /** @brief DMA mode is enabled for reception */
    constexpr std::uint32_t USART_CR3_DMAR_B_0x1 = 1;
        /** @brief DMA mode is disabled for reception */
    constexpr std::uint32_t USART_CR3_DMAR_B_0x0 = 0;

    /** @brief DMA enable transmitter This bit is set/reset by software */
    using USART_CR3_DMAT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: DMA mode is enabled for transmission (value: 1)
     *          - B_0x0: DMA mode is disabled for transmission (value: 0)
     */
        /** @brief DMA mode is enabled for transmission */
    constexpr std::uint32_t USART_CR3_DMAT_B_0x1 = 1;
        /** @brief DMA mode is disabled for transmission */
    constexpr std::uint32_t USART_CR3_DMAT_B_0x0 = 0;

    /** @brief RTS enable This bit can only be written when the USART is disabled (UE=0). Note: If the hardware flow control feature is not supported, this bit is reserved and must be kept at reset value. Refer to Section 78.4: USART implementation on page 4549. */
    using USART_CR3_RTSE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RTS hardware flow control disabled (value: 0)
     *          - B_0x1: RTS output enabled, data is only requested when there is space in the receive buffer. The transmission of data is expected to cease after the current character has been transmitted. The RTS output is deasserted (pulled to 0) when data can be received. (value: 1)
     */
        /** @brief RTS hardware flow control disabled */
    constexpr std::uint32_t USART_CR3_RTSE_B_0x0 = 0;
        /** @brief RTS output enabled, data is only requested when there is space in the receive buffer. The transmission of data is expected to cease after the current character has been transmitted. The RTS output is deasserted (pulled to 0) when data can be received. */
    constexpr std::uint32_t USART_CR3_RTSE_B_0x1 = 1;

    /** @brief CTS enable This bit can only be written when the USART is disabled (UE=0) Note: If the hardware flow control feature is not supported, this bit is reserved and must be kept at reset value. Refer to Section 78.4: USART implementation on page 4549. */
    using USART_CR3_CTSE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CTS hardware flow control disabled (value: 0)
     *          - B_0x1: CTS mode enabled, data is only transmitted when the CTS input is deasserted (tied to 0). If the CTS input is asserted while data is being transmitted, then the transmission is completed before stopping.If data is written into the data register while CTS is asserted, the transmission is postponed until CTS is deasserted. (value: 1)
     */
        /** @brief CTS hardware flow control disabled */
    constexpr std::uint32_t USART_CR3_CTSE_B_0x0 = 0;
        /** @brief CTS mode enabled, data is only transmitted when the CTS input is deasserted (tied to 0). If the CTS input is asserted while data is being transmitted, then the transmission is completed before stopping.If data is written into the data register while CTS is asserted, the transmission is postponed until CTS is deasserted. */
    constexpr std::uint32_t USART_CR3_CTSE_B_0x1 = 1;

    /** @brief CTS interrupt enable Note: If the hardware flow control feature is not supported, this bit is reserved and must be kept at reset value. Refer to Section 78.4: USART implementation on page 4549. */
    using USART_CR3_CTSIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt is inhibited (value: 0)
     *          - B_0x1: An interrupt is generated whenever CTSIF=1 in the USART_ISR register (value: 1)
     */
        /** @brief Interrupt is inhibited */
    constexpr std::uint32_t USART_CR3_CTSIE_B_0x0 = 0;
        /** @brief An interrupt is generated whenever CTSIF=1 in the USART_ISR register */
    constexpr std::uint32_t USART_CR3_CTSIE_B_0x1 = 1;

    /** @brief One sample bit method enable This bit enables the user to select the sample method. When the one sample bit method is selected the noise detection flag (NE) is disabled. This bit can only be written when the USART is disabled (UE=0). */
    using USART_CR3_ONEBIT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Three sample bit method (value: 0)
     *          - B_0x1: One sample bit method (value: 1)
     */
        /** @brief Three sample bit method */
    constexpr std::uint32_t USART_CR3_ONEBIT_B_0x0 = 0;
        /** @brief One sample bit method */
    constexpr std::uint32_t USART_CR3_ONEBIT_B_0x1 = 1;

    /** @brief Overrun Disable This bit is used to disable the receive overrun detection. the ORE flag is not set and the new received data overwrites the previous content of the USART_RDR register. When FIFO mode is enabled, the RXFIFO is bypassed and data are written directly in USART_RDR register. Even when FIFO management is enabled, the RXNE flag is to be used. This bit can only be written when the USART is disabled (UE=0). Note: This control bit enables checking the communication flow w/o reading the data */
    using USART_CR3_OVRDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Overrun Error Flag, ORE, is set when received data is not read before receiving new data. (value: 0)
     *          - B_0x1: Overrun functionality is disabled. If new data is received while the RXNE flag is still set (value: 1)
     */
        /** @brief Overrun Error Flag, ORE, is set when received data is not read before receiving new data. */
    constexpr std::uint32_t USART_CR3_OVRDIS_B_0x0 = 0;
        /** @brief Overrun functionality is disabled. If new data is received while the RXNE flag is still set */
    constexpr std::uint32_t USART_CR3_OVRDIS_B_0x1 = 1;

    /** @brief DMA Disable on Reception Error This bit can only be written when the USART is disabled (UE=0). Note: The reception errors are: parity error, framing error or noise error. */
    using USART_CR3_DDRE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DMA is not disabled in case of reception error. The corresponding error flag is set but RXNE is kept 0 preventing from overrun. As a consequence, the DMA request is not asserted, so the erroneous data is not transferred (no DMA request), but next correct received data is transferred. (used for Smartcard mode) (value: 0)
     *          - B_0x1: DMA is disabled following a reception error. The corresponding error flag is set, as well as RXNE. The DMA request is masked until the error flag is cleared. This means that the software must first disable the DMA request (DMAR = 0) or clear RXNE(RXFNE is case FIFO mode is enabled) before clearing the error flag. (value: 1)
     */
        /** @brief DMA is not disabled in case of reception error. The corresponding error flag is set but RXNE is kept 0 preventing from overrun. As a consequence, the DMA request is not asserted, so the erroneous data is not transferred (no DMA request), but next correct received data is transferred. (used for Smartcard mode) */
    constexpr std::uint32_t USART_CR3_DDRE_B_0x0 = 0;
        /** @brief DMA is disabled following a reception error. The corresponding error flag is set, as well as RXNE. The DMA request is masked until the error flag is cleared. This means that the software must first disable the DMA request (DMAR = 0) or clear RXNE(RXFNE is case FIFO mode is enabled) before clearing the error flag. */
    constexpr std::uint32_t USART_CR3_DDRE_B_0x1 = 1;

    /** @brief Driver enable mode This bit enables the user to activate the external transceiver control, through the DE signal. This bit can only be written when the USART is disabled (UE=0). Note: If the Driver Enable feature is not supported, this bit is reserved and must be kept at reset value. Section 78.4: USART implementation on page 4549. */
    using USART_CR3_DEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DE function is disabled. (value: 0)
     *          - B_0x1: DE function is enabled. The DE signal is output on the RTS pin. (value: 1)
     */
        /** @brief DE function is disabled. */
    constexpr std::uint32_t USART_CR3_DEM_B_0x0 = 0;
        /** @brief DE function is enabled. The DE signal is output on the RTS pin. */
    constexpr std::uint32_t USART_CR3_DEM_B_0x1 = 1;

    /** @brief Driver enable polarity selection This bit can only be written when the USART is disabled (UE=0). Note: If the Driver Enable feature is not supported, this bit is reserved and must be kept at reset value. Refer to Section 78.4: USART implementation on page 4549. */
    using USART_CR3_DEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DE signal is active high. (value: 0)
     *          - B_0x1: DE signal is active low. (value: 1)
     */
        /** @brief DE signal is active high. */
    constexpr std::uint32_t USART_CR3_DEP_B_0x0 = 0;
        /** @brief DE signal is active low. */
    constexpr std::uint32_t USART_CR3_DEP_B_0x1 = 1;

    /** @brief Smartcard auto-retry count This bitfield specifies the number of retries for transmission and reception in Smartcard mode. In Transmission mode, it specifies the number of automatic retransmission retries, before generating a transmission error (FE bit set). In Reception mode, it specifies the number or erroneous reception trials, before generating a reception error (RXNE/RXFNE and PE bits set). This bitfield must be programmed only when the USART is disabled (UE=0). When the USART is enabled (UE=1), this bitfield may only be written to 0x0, in order to stop retransmission. 0x1 to 0x7: number of automatic retransmission attempts (before signaling error) Note: If Smartcard mode is not supported, this bit is reserved and must be kept at reset value. Refer to Section 78.4: USART implementation on page 4549. */
    using USART_CR3_SCARCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: retransmission disabled - No automatic retransmission in Transmission mode. (value: 0)
     */
        /** @brief retransmission disabled - No automatic retransmission in Transmission mode. */
    constexpr std::uint32_t USART_CR3_SCARCNT_B_0x0 = 0;

    /** @brief Wakeup from low-power mode interrupt flag selection This bitfield specifies the event which activates the WUF (Wakeup from low-power mode flag). This bitfield can only be written when the USART is disabled (UE=0). Note: If the USART does not support the wakeup from Stop feature, this bit is reserved and must be kept at reset value. Refer to Section 78.4: USART implementation on page 4549. */
    using USART_CR3_WUS0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: WUF active on address match (as defined by ADD[7:0] and ADDM7) (value: 0)
     *          - B_0x1: Reserved. (value: 1)
     */
        /** @brief WUF active on address match (as defined by ADD[7:0] and ADDM7) */
    constexpr std::uint32_t USART_CR3_WUS0_B_0x0 = 0;
        /** @brief Reserved. */
    constexpr std::uint32_t USART_CR3_WUS0_B_0x1 = 1;

    /** @brief Wakeup from low-power mode interrupt flag selection This bitfield specifies the event which activates the WUF (Wakeup from low-power mode flag). This bitfield can only be written when the USART is disabled (UE=0). Note: If the USART does not support the wakeup from Stop feature, this bit is reserved and must be kept at reset value. Refer to Section 78.4: USART implementation on page 4549. */
    using USART_CR3_WUS1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: WUF active on address match (as defined by ADD[7:0] and ADDM7) (value: 0)
     *          - B_0x1: Reserved. (value: 1)
     */
        /** @brief WUF active on address match (as defined by ADD[7:0] and ADDM7) */
    constexpr std::uint32_t USART_CR3_WUS1_B_0x0 = 0;
        /** @brief Reserved. */
    constexpr std::uint32_t USART_CR3_WUS1_B_0x1 = 1;

    /** @brief Wakeup from low-power mode interrupt enable This bit is set and cleared by software. Note: WUFIE must be set before entering in low-power mode. Note: If the USART does not support the wakeup from Stop feature, this bit is reserved and must be kept at reset value. Refer to Section 78.4: USART implementation on page 4549. */
    using USART_CR3_WUFIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt inhibited (value: 0)
     *          - B_0x1: USART interrupt generated whenever WUF=1 in the USART_ISR register (value: 1)
     */
        /** @brief Interrupt inhibited */
    constexpr std::uint32_t USART_CR3_WUFIE_B_0x0 = 0;
        /** @brief USART interrupt generated whenever WUF=1 in the USART_ISR register */
    constexpr std::uint32_t USART_CR3_WUFIE_B_0x1 = 1;

    /** @brief TXFIFO threshold interrupt enable This bit is set and cleared by software. */
    using USART_CR3_TXFTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt inhibited (value: 0)
     *          - B_0x1: USART interrupt generated when TXFIFO reaches the threshold programmed in TXFTCFG. (value: 1)
     */
        /** @brief Interrupt inhibited */
    constexpr std::uint32_t USART_CR3_TXFTIE_B_0x0 = 0;
        /** @brief USART interrupt generated when TXFIFO reaches the threshold programmed in TXFTCFG. */
    constexpr std::uint32_t USART_CR3_TXFTIE_B_0x1 = 1;

    /** @brief Transmission Complete before guard time, interrupt enable This bit is set and cleared by software. Note: If the USART does not support the Smartcard mode, this bit is reserved and must be kept at reset value. Refer to Section 78.4: USART implementation on page 4549. */
    using USART_CR3_TCBGTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt inhibited (value: 0)
     *          - B_0x1: USART interrupt generated whenever TCBGT=1 in the USART_ISR register (value: 1)
     */
        /** @brief Interrupt inhibited */
    constexpr std::uint32_t USART_CR3_TCBGTIE_B_0x0 = 0;
        /** @brief USART interrupt generated whenever TCBGT=1 in the USART_ISR register */
    constexpr std::uint32_t USART_CR3_TCBGTIE_B_0x1 = 1;

    /** @brief Receive FIFO threshold configuration Remaining combinations: Reserved */
    using USART_CR3_RXFTCFG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Receive FIFO reaches 1/8 of its depth (value: 0)
     *          - B_0x1: Receive FIFO reaches 1/4 of its depth (value: 1)
     *          - B_0x2: Receive FIFO reaches 1/2 of its depth (value: 2)
     *          - B_0x3: Receive FIFO reaches 3/4 of its depth (value: 3)
     *          - B_0x4: Receive FIFO reaches 7/8 of its depth (value: 4)
     *          - B_0x5: Receive FIFO becomes full (value: 5)
     */
        /** @brief Receive FIFO reaches 1/8 of its depth */
    constexpr std::uint32_t USART_CR3_RXFTCFG_B_0x0 = 0;
        /** @brief Receive FIFO reaches 1/4 of its depth */
    constexpr std::uint32_t USART_CR3_RXFTCFG_B_0x1 = 1;
        /** @brief Receive FIFO reaches 1/2 of its depth */
    constexpr std::uint32_t USART_CR3_RXFTCFG_B_0x2 = 2;
        /** @brief Receive FIFO reaches 3/4 of its depth */
    constexpr std::uint32_t USART_CR3_RXFTCFG_B_0x3 = 3;
        /** @brief Receive FIFO reaches 7/8 of its depth */
    constexpr std::uint32_t USART_CR3_RXFTCFG_B_0x4 = 4;
        /** @brief Receive FIFO becomes full */
    constexpr std::uint32_t USART_CR3_RXFTCFG_B_0x5 = 5;

    /** @brief RXFIFO threshold interrupt enable This bit is set and cleared by software. */
    using USART_CR3_RXFTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt inhibited (value: 0)
     *          - B_0x1: USART interrupt generated when Receive FIFO reaches the threshold programmed in RXFTCFG. (value: 1)
     */
        /** @brief Interrupt inhibited */
    constexpr std::uint32_t USART_CR3_RXFTIE_B_0x0 = 0;
        /** @brief USART interrupt generated when Receive FIFO reaches the threshold programmed in RXFTCFG. */
    constexpr std::uint32_t USART_CR3_RXFTIE_B_0x1 = 1;

    /** @brief TXFIFO threshold configuration Remaining combinations: Reserved */
    using USART_CR3_TXFTCFG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TXFIFO reaches 1/8 of its depth (value: 0)
     *          - B_0x1: TXFIFO reaches 1/4 of its depth (value: 1)
     *          - B_0x2: TXFIFO reaches 1/2 of its depth (value: 2)
     *          - B_0x3: TXFIFO reaches 3/4 of its depth (value: 3)
     *          - B_0x4: TXFIFO reaches 7/8 of its depth (value: 4)
     *          - B_0x5: TXFIFO becomes empty (value: 5)
     */
        /** @brief TXFIFO reaches 1/8 of its depth */
    constexpr std::uint32_t USART_CR3_TXFTCFG_B_0x0 = 0;
        /** @brief TXFIFO reaches 1/4 of its depth */
    constexpr std::uint32_t USART_CR3_TXFTCFG_B_0x1 = 1;
        /** @brief TXFIFO reaches 1/2 of its depth */
    constexpr std::uint32_t USART_CR3_TXFTCFG_B_0x2 = 2;
        /** @brief TXFIFO reaches 3/4 of its depth */
    constexpr std::uint32_t USART_CR3_TXFTCFG_B_0x3 = 3;
        /** @brief TXFIFO reaches 7/8 of its depth */
    constexpr std::uint32_t USART_CR3_TXFTCFG_B_0x4 = 4;
        /** @brief TXFIFO becomes empty */
    constexpr std::uint32_t USART_CR3_TXFTCFG_B_0x5 = 5;

    /** @brief USART baud rate register */
    using USART_BRR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USART baud rate BRR[15:4] BRR[15:4] correspond to USARTDIV[15:4] BRR[3:0] When OVER8 = 0, BRR[3:0] = USARTDIV[3:0]. When OVER8 = 1: BRR[2:0] = USARTDIV[3:0] shifted 1 bit to the right. BRR[3] must be kept cleared. */
    using USART_BRR_BRR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USART guard time and prescaler register */
    using USART_GTPR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Prescaler value */
    using USART_GTPR_PSC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0_IRDA_LOW_POWER_AND_NORMAL_IRDA_MODE: Reserved - do not program this value (value: 0)
     *          - B_0x1_IRDA_LOW_POWER_AND_NORMAL_IRDA_MODE: divides the source clock by 1 (value: 1)
     *          - B_0x2_IRDA_LOW_POWER_AND_NORMAL_IRDA_MODE: divides the source clock by 2 (value: 2)
     *          - B_0x3_SMARTCARD_MODE: divides the source clock by 6 (value: 3)
     */
        /** @brief Reserved - do not program this value */
    constexpr std::uint32_t USART_GTPR_PSC_B_0x0_IRDA_LOW_POWER_AND_NORMAL_IRDA_MODE = 0;
        /** @brief divides the source clock by 1 */
    constexpr std::uint32_t USART_GTPR_PSC_B_0x1_IRDA_LOW_POWER_AND_NORMAL_IRDA_MODE = 1;
        /** @brief divides the source clock by 2 */
    constexpr std::uint32_t USART_GTPR_PSC_B_0x2_IRDA_LOW_POWER_AND_NORMAL_IRDA_MODE = 2;
        /** @brief divides the source clock by 6 */
    constexpr std::uint32_t USART_GTPR_PSC_B_0x3_SMARTCARD_MODE = 3;

    /** @brief Guard time value This bitfield is used to program the Guard time value in terms of number of baud clock periods. This is used in Smartcard mode. The Transmission Complete flag is set after this guard time value. This bitfield can only be written when the USART is disabled (UE=0). Note: If Smartcard mode is not supported, this bit is reserved and must be kept at reset value. Refer to Section 78.4: USART implementation on page 4549. */
    using USART_GTPR_GT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USART receiver timeout register */
    using USART_RTOR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receiver timeout value This bitfield gives the Receiver timeout value in terms of number of bit duration. In Standard mode, the RTOF flag is set if, after the last received character, no new start bit is detected for more than the RTO value. In Smartcard mode, this value is used to implement the CWT and BWT. See Smartcard chapter for more details. In the standard, the CWT/BWT measurement is done starting from the start bit of the last received character. Note: This value must only be programmed once per received character. */
    using USART_RTOR_RTO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Block Length This bitfield gives the Block length in Smartcard T=1 Reception. Its value equals the number of information characters + the length of the Epilogue Field (1-LEC/2-CRC) - 1. Examples: BLEN = 0 -> 0 information characters + LEC BLEN = 1 -> 0 information characters + CRC BLEN = 255 -> 254 information characters + CRC (total 256 characters)) In Smartcard mode, the Block length counter is reset when TXE=0 (TXFE = 0 in case FIFO mode is enabled). This bitfield can be used also in other modes. In this case, the Block length counter is reset when RE=0 (receiver disabled) and/or when the EOBCF bit is written to 1. Note: This value can be programmed after the start of the block reception (using the data from the LEN character in the Prologue Field). It must be programmed only once per received block. */
    using USART_RTOR_BLEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USART request register */
    using USART_RQR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Auto baud rate request Writing 1 to this bit resets the ABRF and ABRE flags in the USART_ISR and requests an automatic baud rate measurement on the next received data frame. Note: If the USART does not support the auto baud rate feature, this bit is reserved and must be kept at reset value. Refer to Section 78.4: USART implementation on page 4549. */
    using USART_RQR_ABRRQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Send break request Writing 1 to this bit sets the SBKF flag and request to send a BREAK on the line, as soon as the transmit machine is available. Note: When the application needs to send the break character following all previously inserted data, including the ones not yet transmitted, the software should wait for the TXE flag assertion before setting the SBKRQ bit. */
    using USART_RQR_SBKRQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Mute mode request Writing 1 to this bit puts the USART in Mute mode and resets the RWU flag. */
    using USART_RQR_MMRQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive data flush request Writing 1 to this bit empties the entire receive FIFO i.e. clears the bit RXFNE. This enables to discard the received data without reading them, and avoid an overrun condition. */
    using USART_RQR_RXFRQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit data flush request When FIFO mode is disabled, writing 1 to this bit sets the TXE flag. This enables to discard the transmit data. This bit must be used only in Smartcard mode, when data have not been sent due to errors (NACK) and the FE flag is active in the USART_ISR register. If the USART does not support Smartcard mode, this bit is reserved and must be kept at reset value. When FIFO is enabled, TXFRQ bit is set to flush the whole FIFO. This sets the TXFE flag (Transmit FIFO empty, bit 23 in the USART_ISR register). Flushing the Transmit FIFO is supported in both UART and Smartcard modes. Note: In FIFO mode, the TXFNF flag is reset during the flush request until TxFIFO is empty in order to ensure that no data are written in the data register. */
    using USART_RQR_TXFRQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USART interrupt and status register */
    using USART_ISR_ENABLED = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Parity error This bit is set by hardware when a parity error occurs in Reception mode. It is cleared by software, writing 1 to the PECF in the USART_ICR register. An interrupt is generated if PEIE = 1 in the USART_CR1 register. Note: This error is associated with the character in the USART_RDR. */
    using USART_ISR_ENABLED_PE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No parity error (value: 0)
     *          - B_0x1: Parity error (value: 1)
     */
        /** @brief No parity error */
    constexpr std::uint32_t USART_ISR_ENABLED_PE_B_0x0 = 0;
        /** @brief Parity error */
    constexpr std::uint32_t USART_ISR_ENABLED_PE_B_0x1 = 1;

    /** @brief Framing error This bit is set by hardware when a de-synchronization, excessive noise or a break character is detected. It is cleared by software, writing 1 to the FECF bit in the USART_ICR register. When transmitting data in Smartcard mode, this bit is set when the maximum number of transmit attempts is reached without success (the card NACKs the data frame). An interrupt is generated if EIE = 1 in the USART_CR3 register. Note: This error is associated with the character in the USART_RDR. */
    using USART_ISR_ENABLED_FE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No Framing error is detected (value: 0)
     *          - B_0x1: Framing error or break character is detected (value: 1)
     */
        /** @brief No Framing error is detected */
    constexpr std::uint32_t USART_ISR_ENABLED_FE_B_0x0 = 0;
        /** @brief Framing error or break character is detected */
    constexpr std::uint32_t USART_ISR_ENABLED_FE_B_0x1 = 1;

    /** @brief Noise detection flag This bit is set by hardware when noise is detected on a received frame. It is cleared by software, writing 1 to the NFCF bit in the USART_ICR register. Note: This bit does not generate an interrupt as it appears at the same time as the RXFNE bit which itself generates an interrupt. An interrupt is generated when the NE flag is set during multi buffer communication if the EIE bit is set. Note: When the line is noise-free, the NE flag can be disabled by programming the ONEBIT bit to 1 to increase the USART tolerance to deviations (Refer to Section 78.5.9: Tolerance of the USART receiver to clock deviation on page 4568). Note: This error is associated with the character in the USART_RDR. */
    using USART_ISR_ENABLED_NE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No noise is detected (value: 0)
     *          - B_0x1: Noise is detected (value: 1)
     */
        /** @brief No noise is detected */
    constexpr std::uint32_t USART_ISR_ENABLED_NE_B_0x0 = 0;
        /** @brief Noise is detected */
    constexpr std::uint32_t USART_ISR_ENABLED_NE_B_0x1 = 1;

    /** @brief Overrun error This bit is set by hardware when the data currently being received in the shift register is ready to be transferred into the USART_RDR register while RXFF = 1. It is cleared by a software, writing 1 to the ORECF, in the USART_ICR register. An interrupt is generated if RXFNEIE=1 in the USART_CR1 register, or EIE = 1 in the USART_CR3 register. Note: When this bit is set, the USART_RDR register content is not lost but the shift register is overwritten. An interrupt is generated if the ORE flag is set during multi buffer communication if the EIE bit is set. Note: This bit is permanently forced to 0 (no overrun detection) when the bit OVRDIS is set in the USART_CR3 register. */
    using USART_ISR_ENABLED_ORE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No overrun error (value: 0)
     *          - B_0x1: Overrun error is detected (value: 1)
     */
        /** @brief No overrun error */
    constexpr std::uint32_t USART_ISR_ENABLED_ORE_B_0x0 = 0;
        /** @brief Overrun error is detected */
    constexpr std::uint32_t USART_ISR_ENABLED_ORE_B_0x1 = 1;

    /** @brief Idle line detected This bit is set by hardware when an Idle Line is detected. An interrupt is generated if IDLEIE=1 in the USART_CR1 register. It is cleared by software, writing 1 to the IDLECF in the USART_ICR register. Note: The IDLE bit is not set again until the RXFNE bit has been set (i.e. a new idle line occurs). Note: If Mute mode is enabled (MME=1), IDLE is set if the USART is not mute (RWU=0), whatever the Mute mode selected by the WAKE bit. If RWU=1, IDLE is not set. */
    using USART_ISR_ENABLED_IDLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No Idle line is detected (value: 0)
     *          - B_0x1: Idle line is detected (value: 1)
     */
        /** @brief No Idle line is detected */
    constexpr std::uint32_t USART_ISR_ENABLED_IDLE_B_0x0 = 0;
        /** @brief Idle line is detected */
    constexpr std::uint32_t USART_ISR_ENABLED_IDLE_B_0x1 = 1;

    /** @brief RXFIFO not empty RXFNE bit is set by hardware when the RXFIFO is not empty, meaning that data can be read from the USART_RDR register. Every read operation from the USART_RDR frees a location in the RXFIFO. RXFNE is cleared when the RXFIFO is empty. The RXFNE flag can also be cleared by writing 1 to the RXFRQ in the USART_RQR register. An interrupt is generated if RXFNEIE=1 in the USART_CR1 register. */
    using USART_ISR_ENABLED_RXFNE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Data is not received (value: 0)
     *          - B_0x1: Received data is ready to be read. (value: 1)
     */
        /** @brief Data is not received */
    constexpr std::uint32_t USART_ISR_ENABLED_RXFNE_B_0x0 = 0;
        /** @brief Received data is ready to be read. */
    constexpr std::uint32_t USART_ISR_ENABLED_RXFNE_B_0x1 = 1;

    /** @brief Transmission complete This bit indicates that the last data written in the USART_TDR has been transmitted out of the shift register. The TC flag behaves as follows: When TDN = 0, the TC flag is set when the transmission of a frame containing data is complete and when TXE/TXFE is set. When TDN is equal to the number of data in the TXFIFO, the TC flag is set when TXFIFO is empty and TDN is reached. When TDN is greater than the number of data in the TXFIFO, TC remains cleared until the TXFIFO is filled again to reach the programmed number of data to be transferred. When TDN is less than the number of data in the TXFIFO, TC is set when TDN is reached even if the TXFIFO is not empty. An interrupt is generated if TCIE=1 in the USART_CR1 register. TC bit is cleared by software by writing 1 to the TCCF in the USART_ICR register or by writing to the USART_TDR register. */
    using USART_ISR_ENABLED_TC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TXFIFO not full TXFNF is set by hardware when TXFIFO is not full meaning that data can be written in the USART_TDR. Every write operation to the USART_TDR places the data in the TXFIFO. This flag remains set until the TXFIFO is full. When the TXFIFO is full, this flag is cleared indicating that data can not be written into the USART_TDR. An interrupt is generated if the TXFNFIE bit =1 in the USART_CR1 register. Note: The TXFNF is kept reset during the flush request until TXFIFO is empty. After sending the flush request (by setting TXFRQ bit), the flag TXFNF should be checked prior to writing in TXFIFO (TXFNF and TXFE is set at the same time). Note: This bit is used during single buffer transmission. */
    using USART_ISR_ENABLED_TXFNF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Transmit FIFO is full (value: 0)
     *          - B_0x1: Transmit FIFO is not full (value: 1)
     */
        /** @brief Transmit FIFO is full */
    constexpr std::uint32_t USART_ISR_ENABLED_TXFNF_B_0x0 = 0;
        /** @brief Transmit FIFO is not full */
    constexpr std::uint32_t USART_ISR_ENABLED_TXFNF_B_0x1 = 1;

    /** @brief LIN break detection flag This bit is set by hardware when the LIN break is detected. It is cleared by software, by writing 1 to the LBDCF in the USART_ICR. An interrupt is generated if LBDIE = 1 in the USART_CR2 register. Note: If the USART does not support LIN mode, this bit is reserved and kept at reset value. Refer to Section 78.4: USART implementation on page 4549. */
    using USART_ISR_ENABLED_LBDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LIN Break not detected (value: 0)
     *          - B_0x1: LIN break detected (value: 1)
     */
        /** @brief LIN Break not detected */
    constexpr std::uint32_t USART_ISR_ENABLED_LBDF_B_0x0 = 0;
        /** @brief LIN break detected */
    constexpr std::uint32_t USART_ISR_ENABLED_LBDF_B_0x1 = 1;

    /** @brief CTS interrupt flag This bit is set by hardware when the CTS input toggles, if the CTSE bit is set. It is cleared by software, by writing 1 to the CTSCF bit in the USART_ICR register. An interrupt is generated if CTSIE=1 in the USART_CR3 register. Note: If the hardware flow control feature is not supported, this bit is reserved and kept at reset value. */
    using USART_ISR_ENABLED_CTSIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No change occurred on the CTS status line (value: 0)
     *          - B_0x1: A change occurred on the CTS status line (value: 1)
     */
        /** @brief No change occurred on the CTS status line */
    constexpr std::uint32_t USART_ISR_ENABLED_CTSIF_B_0x0 = 0;
        /** @brief A change occurred on the CTS status line */
    constexpr std::uint32_t USART_ISR_ENABLED_CTSIF_B_0x1 = 1;

    /** @brief CTS flag This bit is set/reset by hardware. It is an inverted copy of the status of the CTS input pin. Note: If the hardware flow control feature is not supported, this bit is reserved and kept at reset value. */
    using USART_ISR_ENABLED_CTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CTS line set (value: 0)
     *          - B_0x1: CTS line reset (value: 1)
     */
        /** @brief CTS line set */
    constexpr std::uint32_t USART_ISR_ENABLED_CTS_B_0x0 = 0;
        /** @brief CTS line reset */
    constexpr std::uint32_t USART_ISR_ENABLED_CTS_B_0x1 = 1;

    /** @brief Receiver timeout This bit is set by hardware when the timeout value, programmed in the RTOR register has lapsed, without any communication. It is cleared by software, writing 1 to the RTOCF bit in the USART_ICR register. An interrupt is generated if RTOIE=1 in the USART_CR2 register. In Smartcard mode, the timeout corresponds to the CWT or BWT timings. Note: If a time equal to the value programmed in RTOR register separates 2 characters, RTOF is not set. If this time exceeds this value + 2 sample times (2/16 or 2/8, depending on the oversampling method), RTOF flag is set. Note: The counter counts even if RE = 0 but RTOF is set only when RE = 1. If the timeout has already elapsed when RE is set, then RTOF is set. Note: If the USART does not support the Receiver timeout feature, this bit is reserved and kept at reset value. */
    using USART_ISR_ENABLED_RTOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Timeout value not reached (value: 0)
     *          - B_0x1: Timeout value reached without any data reception (value: 1)
     */
        /** @brief Timeout value not reached */
    constexpr std::uint32_t USART_ISR_ENABLED_RTOF_B_0x0 = 0;
        /** @brief Timeout value reached without any data reception */
    constexpr std::uint32_t USART_ISR_ENABLED_RTOF_B_0x1 = 1;

    /** @brief End of block flag This bit is set by hardware when a complete block has been received (for example T=1 Smartcard mode). The detection is done when the number of received bytes (from the start of the block, including the prologue) is equal or greater than BLEN + 4. An interrupt is generated if EOBIE = 1 in the USART_CR1 register. It is cleared by software, writing 1 to EOBCF in the USART_ICR register. Note: If Smartcard mode is not supported, this bit is reserved and kept at reset value. Refer to Section 78.4: USART implementation on page 4549. */
    using USART_ISR_ENABLED_EOBF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: End of Block not reached (value: 0)
     *          - B_0x1: End of Block (number of characters) reached (value: 1)
     */
        /** @brief End of Block not reached */
    constexpr std::uint32_t USART_ISR_ENABLED_EOBF_B_0x0 = 0;
        /** @brief End of Block (number of characters) reached */
    constexpr std::uint32_t USART_ISR_ENABLED_EOBF_B_0x1 = 1;

    /** @brief SPI slave underrun error flag In Slave transmission mode, this flag is set when the first clock pulse for data transmission appears while the software has not yet loaded any value into USART_TDR. This flag is reset by setting UDRCF bit in the USART_ICR register. Note: If the USART does not support the SPI slave mode, this bit is reserved and kept at reset value. Refer to Section 78.4: USART implementation on page 4549. */
    using USART_ISR_ENABLED_UDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No underrun error (value: 0)
     *          - B_0x1: underrun error (value: 1)
     */
        /** @brief No underrun error */
    constexpr std::uint32_t USART_ISR_ENABLED_UDR_B_0x0 = 0;
        /** @brief underrun error */
    constexpr std::uint32_t USART_ISR_ENABLED_UDR_B_0x1 = 1;

    /** @brief Auto baud rate error This bit is set by hardware if the baud rate measurement failed (baud rate out of range or character comparison failed) It is cleared by software, by writing 1 to the ABRRQ bit in the USART_RQR register. Note: If the USART does not support the auto baud rate feature, this bit is reserved and kept at reset value. */
    using USART_ISR_ENABLED_ABRE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Auto baud rate flag This bit is set by hardware when the automatic baud rate has been set (RXFNE is also set, generating an interrupt if RXFNEIE = 1) or when the auto baud rate operation was completed without success (ABRE=1) (ABRE, RXFNE and FE are also set in this case) It is cleared by software, in order to request a new auto baud rate detection, by writing 1 to the ABRRQ in the USART_RQR register. Note: If the USART does not support the auto baud rate feature, this bit is reserved and kept at reset value. */
    using USART_ISR_ENABLED_ABRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Busy flag This bit is set and reset by hardware. It is active when a communication is ongoing on the RX line (successful start bit detected). It is reset at the end of the reception (successful or not). */
    using USART_ISR_ENABLED_BUSY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART is idle (no reception) (value: 0)
     *          - B_0x1: Reception on going (value: 1)
     */
        /** @brief USART is idle (no reception) */
    constexpr std::uint32_t USART_ISR_ENABLED_BUSY_B_0x0 = 0;
        /** @brief Reception on going */
    constexpr std::uint32_t USART_ISR_ENABLED_BUSY_B_0x1 = 1;

    /** @brief Character match flag This bit is set by hardware, when a the character defined by ADD[7:0] is received. It is cleared by software, writing 1 to the CMCF in the USART_ICR register. An interrupt is generated if CMIE=1in the USART_CR1 register. */
    using USART_ISR_ENABLED_CMF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No Character match detected (value: 0)
     *          - B_0x1: Character match detected (value: 1)
     */
        /** @brief No Character match detected */
    constexpr std::uint32_t USART_ISR_ENABLED_CMF_B_0x0 = 0;
        /** @brief Character match detected */
    constexpr std::uint32_t USART_ISR_ENABLED_CMF_B_0x1 = 1;

    /** @brief Send break flag This bit indicates that a send break character was requested. It is set by software, by writing 1 to the SBKRQ bit in the USART_CR3 register. It is automatically reset by hardware during the stop bit of break transmission. */
    using USART_ISR_ENABLED_SBKF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No break character transmitted (value: 0)
     *          - B_0x1: Break character transmitted (value: 1)
     */
        /** @brief No break character transmitted */
    constexpr std::uint32_t USART_ISR_ENABLED_SBKF_B_0x0 = 0;
        /** @brief Break character transmitted */
    constexpr std::uint32_t USART_ISR_ENABLED_SBKF_B_0x1 = 1;

    /** @brief Receiver wakeup from Mute mode This bit indicates if the USART is in Mute mode. It is cleared/set by hardware when a wakeup/mute sequence is recognized. The Mute mode control sequence (address or IDLE) is selected by the WAKE bit in the USART_CR1 register. When wakeup on IDLE mode is selected, this bit can only be set by software, writing 1 to the MMRQ bit in the USART_RQR register. Note: If the USART does not support the wakeup from Stop feature, this bit is reserved and kept at reset value. Refer to Section 78.4: USART implementation on page 4549. */
    using USART_ISR_ENABLED_RWU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Receiver in Active mode (value: 0)
     *          - B_0x1: Receiver in Mute mode (value: 1)
     */
        /** @brief Receiver in Active mode */
    constexpr std::uint32_t USART_ISR_ENABLED_RWU_B_0x0 = 0;
        /** @brief Receiver in Mute mode */
    constexpr std::uint32_t USART_ISR_ENABLED_RWU_B_0x1 = 1;

    /** @brief Wakeup from low-power mode flag This bit is set by hardware, when a wakeup event is detected. The event is defined by the WUS bitfield. It is cleared by software, writing a 1 to the WUCF in the USART_ICR register. An interrupt is generated if WUFIE=1 in the USART_CR3 register. Note: When UESM is cleared, WUF flag is also cleared. Note: If the USART does not support the wakeup from Stop feature, this bit is reserved and kept at reset value. Refer to Section 78.4: USART implementation on page 4549. */
    using USART_ISR_ENABLED_WUF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit enable acknowledge flag This bit is set/reset by hardware, when the Transmit Enable value is taken into account by the USART. It can be used when an idle frame request is generated by writing TE=0, followed by TE=1 in the USART_CR1 register, in order to respect the TE=0 minimum period. */
    using USART_ISR_ENABLED_TEACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive enable acknowledge flag This bit is set/reset by hardware, when the Receive Enable value is taken into account by the USART. It can be used to verify that the USART is ready for reception before entering low-power mode. Note: If the USART does not support the wakeup from Stop feature, this bit is reserved and kept at reset value. Refer to Section 78.4: USART implementation on page 4549. */
    using USART_ISR_ENABLED_REACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TXFIFO Empty This bit is set by hardware when TXFIFO is Empty. When the TXFIFO contains at least one data, this flag is cleared. The TXFE flag can also be set by writing 1 to the bit TXFRQ (bit 4) in the USART_RQR register. An interrupt is generated if the TXFEIE bit =1 (bit 30) in the USART_CR1 register. */
    using USART_ISR_ENABLED_TXFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TXFIFO not empty. (value: 0)
     *          - B_0x1: TXFIFO empty. (value: 1)
     */
        /** @brief TXFIFO not empty. */
    constexpr std::uint32_t USART_ISR_ENABLED_TXFE_B_0x0 = 0;
        /** @brief TXFIFO empty. */
    constexpr std::uint32_t USART_ISR_ENABLED_TXFE_B_0x1 = 1;

    /** @brief RXFIFO Full This bit is set by hardware when the number of received data corresponds to RXFIFO size + 1 (RXFIFO full + 1 data in the USART_RDR register. An interrupt is generated if the RXFFIE bit =1 in the USART_CR1 register. */
    using USART_ISR_ENABLED_RXFF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RXFIFO not full. (value: 0)
     *          - B_0x1: RXFIFO Full. (value: 1)
     */
        /** @brief RXFIFO not full. */
    constexpr std::uint32_t USART_ISR_ENABLED_RXFF_B_0x0 = 0;
        /** @brief RXFIFO Full. */
    constexpr std::uint32_t USART_ISR_ENABLED_RXFF_B_0x1 = 1;

    /** @brief Transmission complete before guard time flag This bit is set when the last data written in the USART_TDR has been transmitted correctly out of the shift register. It is set by hardware in Smartcard mode, if the transmission of a frame containing data is complete and if the smartcard did not send back any NACK. An interrupt is generated if TCBGTIE=1 in the USART_CR3 register. This bit is cleared by software, by writing 1 to the TCBGTCF in the USART_ICR register or by a write to the USART_TDR register. Note: If the USART does not support the Smartcard mode, this bit is reserved and kept at reset value. If the USART supports the Smartcard mode and the Smartcard mode is enabled, the TCBGT reset value is 1. Refer to Section 78.4: USART implementation on page 4549. */
    using USART_ISR_ENABLED_TCBGT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Transmission is not complete or transmission is complete unsuccessfully (i.e. a NACK is received from the card) (value: 0)
     *          - B_0x1: Transmission is complete successfully (before Guard time completion and there is no NACK from the smart card). (value: 1)
     */
        /** @brief Transmission is not complete or transmission is complete unsuccessfully (i.e. a NACK is received from the card) */
    constexpr std::uint32_t USART_ISR_ENABLED_TCBGT_B_0x0 = 0;
        /** @brief Transmission is complete successfully (before Guard time completion and there is no NACK from the smart card). */
    constexpr std::uint32_t USART_ISR_ENABLED_TCBGT_B_0x1 = 1;

    /** @brief RXFIFO threshold flag This bit is set by hardware when the threshold programmed in RXFTCFG in USART_CR3 register is reached. This means that there are (RXFTCFG - 1) data in the Receive FIFO and one data in the USART_RDR register. An interrupt is generated if the RXFTIE bit =1 (bit 27) in the USART_CR3 register. Note: When the RXFTCFG threshold is configured to 101, RXFT flag is set if 16 data are available i.e. 15 data in the RXFIFO and 1 data in the USART_RDR. Consequently, the 17th received data does not cause an overrun error. The overrun error occurs after receiving the 18th data. */
    using USART_ISR_ENABLED_RXFT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Receive FIFO does not reach the programmed threshold. (value: 0)
     *          - B_0x1: Receive FIFO reached the programmed threshold. (value: 1)
     */
        /** @brief Receive FIFO does not reach the programmed threshold. */
    constexpr std::uint32_t USART_ISR_ENABLED_RXFT_B_0x0 = 0;
        /** @brief Receive FIFO reached the programmed threshold. */
    constexpr std::uint32_t USART_ISR_ENABLED_RXFT_B_0x1 = 1;

    /** @brief TXFIFO threshold flag This bit is set by hardware when the TXFIFO reaches the threshold programmed in TXFTCFG of USART_CR3 register i.e. the TXFIFO contains TXFTCFG empty locations. An interrupt is generated if the TXFTIE bit =1 (bit 31) in the USART_CR3 register. */
    using USART_ISR_ENABLED_TXFT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TXFIFO does not reach the programmed threshold. (value: 0)
     *          - B_0x1: TXFIFO reached the programmed threshold. (value: 1)
     */
        /** @brief TXFIFO does not reach the programmed threshold. */
    constexpr std::uint32_t USART_ISR_ENABLED_TXFT_B_0x0 = 0;
        /** @brief TXFIFO reached the programmed threshold. */
    constexpr std::uint32_t USART_ISR_ENABLED_TXFT_B_0x1 = 1;

    /** @brief USART interrupt and status register */
    using USART_ISR_DISABLED = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Parity error This bit is set by hardware when a parity error occurs in Reception mode. It is cleared by software, writing 1 to the PECF in the USART_ICR register. An interrupt is generated if PEIE = 1 in the USART_CR1 register. Note: This error is associated with the character in the USART_RDR. */
    using USART_ISR_DISABLED_PE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No parity error (value: 0)
     *          - B_0x1: Parity error (value: 1)
     */
        /** @brief No parity error */
    constexpr std::uint32_t USART_ISR_DISABLED_PE_B_0x0 = 0;
        /** @brief Parity error */
    constexpr std::uint32_t USART_ISR_DISABLED_PE_B_0x1 = 1;

    /** @brief Framing error This bit is set by hardware when a de-synchronization, excessive noise or a break character is detected. It is cleared by software, writing 1 to the FECF bit in the USART_ICR register. When transmitting data in Smartcard mode, this bit is set when the maximum number of transmit attempts is reached without success (the card NACKs the data frame). An interrupt is generated if EIE = 1 in the USART_CR3 register. Note: This error is associated with the character in the USART_RDR. */
    using USART_ISR_DISABLED_FE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No Framing error is detected (value: 0)
     *          - B_0x1: Framing error or break character is detected (value: 1)
     */
        /** @brief No Framing error is detected */
    constexpr std::uint32_t USART_ISR_DISABLED_FE_B_0x0 = 0;
        /** @brief Framing error or break character is detected */
    constexpr std::uint32_t USART_ISR_DISABLED_FE_B_0x1 = 1;

    /** @brief Noise detection flag This bit is set by hardware when noise is detected on a received frame. It is cleared by software, writing 1 to the NFCF bit in the USART_ICR register. Note: This bit does not generate an interrupt as it appears at the same time as the RXNE bit which itself generates an interrupt. An interrupt is generated when the NE flag is set during multi buffer communication if the EIE bit is set. Note: When the line is noise-free, the NE flag can be disabled by programming the ONEBIT bit to 1 to increase the USART tolerance to deviations (Refer to Section 78.5.9: Tolerance of the USART receiver to clock deviation on page 4568). Note: This error is associated with the character in the USART_RDR. */
    using USART_ISR_DISABLED_NE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No noise is detected (value: 0)
     *          - B_0x1: Noise is detected (value: 1)
     */
        /** @brief No noise is detected */
    constexpr std::uint32_t USART_ISR_DISABLED_NE_B_0x0 = 0;
        /** @brief Noise is detected */
    constexpr std::uint32_t USART_ISR_DISABLED_NE_B_0x1 = 1;

    /** @brief Overrun error This bit is set by hardware when the data currently being received in the shift register is ready to be transferred into the USART_RDR register while RXNE=1. It is cleared by a software, writing 1 to the ORECF, in the USART_ICR register. An interrupt is generated if RXNEIE=1 in the USART_CR1 register, or EIE = 1 in the USART_CR3 register. Note: When this bit is set, the USART_RDR register content is not lost but the shift register is overwritten. An interrupt is generated if the ORE flag is set during multi buffer communication if the EIE bit is set. Note: This bit is permanently forced to 0 (no overrun detection) when the bit OVRDIS is set in the USART_CR3 register. */
    using USART_ISR_DISABLED_ORE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Overrun error is detected (value: 1)
     */
        /** @brief Overrun error is detected */
    constexpr std::uint32_t USART_ISR_DISABLED_ORE_B_0x1 = 1;

    /** @brief Idle line detected This bit is set by hardware when an Idle Line is detected. An interrupt is generated if IDLEIE=1 in the USART_CR1 register. It is cleared by software, writing 1 to the IDLECF in the USART_ICR register. Note: The IDLE bit is not set again until the RXNE bit has been set (i.e. a new idle line occurs). Note: If Mute mode is enabled (MME=1), IDLE is set if the USART is not mute (RWU=0), whatever the Mute mode selected by the WAKE bit. If RWU=1, IDLE is not set. */
    using USART_ISR_DISABLED_IDLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No Idle line is detected (value: 0)
     *          - B_0x1: Idle line is detected (value: 1)
     */
        /** @brief No Idle line is detected */
    constexpr std::uint32_t USART_ISR_DISABLED_IDLE_B_0x0 = 0;
        /** @brief Idle line is detected */
    constexpr std::uint32_t USART_ISR_DISABLED_IDLE_B_0x1 = 1;

    /** @brief Read data register not empty RXNE bit is set by hardware when the content of the USART_RDR shift register has been transferred to the USART_RDR register. It is cleared by reading from the USART_RDR register. The RXNE flag can also be cleared by writing 1 to the RXFRQ in the USART_RQR register. An interrupt is generated if RXNEIE=1 in the USART_CR1 register. */
    using USART_ISR_DISABLED_RXNE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Data is not received (value: 0)
     *          - B_0x1: Received data is ready to be read. (value: 1)
     */
        /** @brief Data is not received */
    constexpr std::uint32_t USART_ISR_DISABLED_RXNE_B_0x0 = 0;
        /** @brief Received data is ready to be read. */
    constexpr std::uint32_t USART_ISR_DISABLED_RXNE_B_0x1 = 1;

    /** @brief Transmission complete This bit indicates that the last data written in the USART_TDR has been transmitted out of the shift register. The TC flag is set when the transmission of a frame containing data is complete and when TXE is set. An interrupt is generated if TCIE=1 in the USART_CR1 register. TC bit is cleared by software by writing 1 to the TCCF in the USART_ICR register or by writing to the USART_TDR register. */
    using USART_ISR_DISABLED_TC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit data register empty TXE is set by hardware when the content of the USART_TDR register has been transferred into the shift register. It is cleared by writing to the USART_TDR register. The TXE flag can also be set by writing 1 to the TXFRQ in the USART_RQR register, in order to discard the data (only in Smartcard T=0 mode, in case of transmission failure). An interrupt is generated if the TXEIE bit =1 in the USART_CR1 register. */
    using USART_ISR_DISABLED_TXE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Data register full (value: 0)
     *          - B_0x1: Data register full (value: 1)
     */
        /** @brief Data register full */
    constexpr std::uint32_t USART_ISR_DISABLED_TXE_B_0x0 = 0;
        /** @brief Data register full */
    constexpr std::uint32_t USART_ISR_DISABLED_TXE_B_0x1 = 1;

    /** @brief LIN break detection flag This bit is set by hardware when the LIN break is detected. It is cleared by software, by writing 1 to the LBDCF in the USART_ICR. An interrupt is generated if LBDIE = 1 in the USART_CR2 register. Note: If the USART does not support LIN mode, this bit is reserved and kept at reset value. Refer to Section 78.4: USART implementation on page 4549. */
    using USART_ISR_DISABLED_LBDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LIN Break not detected (value: 0)
     *          - B_0x1: LIN break detected (value: 1)
     */
        /** @brief LIN Break not detected */
    constexpr std::uint32_t USART_ISR_DISABLED_LBDF_B_0x0 = 0;
        /** @brief LIN break detected */
    constexpr std::uint32_t USART_ISR_DISABLED_LBDF_B_0x1 = 1;

    /** @brief CTS interrupt flag This bit is set by hardware when the CTS input toggles, if the CTSE bit is set. It is cleared by software, by writing 1 to the CTSCF bit in the USART_ICR register. An interrupt is generated if CTSIE=1 in the USART_CR3 register. Note: If the hardware flow control feature is not supported, this bit is reserved and kept at reset value. */
    using USART_ISR_DISABLED_CTSIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No change occurred on the CTS status line (value: 0)
     *          - B_0x1: A change occurred on the CTS status line (value: 1)
     */
        /** @brief No change occurred on the CTS status line */
    constexpr std::uint32_t USART_ISR_DISABLED_CTSIF_B_0x0 = 0;
        /** @brief A change occurred on the CTS status line */
    constexpr std::uint32_t USART_ISR_DISABLED_CTSIF_B_0x1 = 1;

    /** @brief CTS flag This bit is set/reset by hardware. It is an inverted copy of the status of the CTS input pin. Note: If the hardware flow control feature is not supported, this bit is reserved and kept at reset value. */
    using USART_ISR_DISABLED_CTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CTS line set (value: 0)
     *          - B_0x1: CTS line reset (value: 1)
     */
        /** @brief CTS line set */
    constexpr std::uint32_t USART_ISR_DISABLED_CTS_B_0x0 = 0;
        /** @brief CTS line reset */
    constexpr std::uint32_t USART_ISR_DISABLED_CTS_B_0x1 = 1;

    /** @brief Receiver timeout This bit is set by hardware when the timeout value, programmed in the RTOR register has lapsed, without any communication. It is cleared by software, writing 1 to the RTOCF bit in the USART_ICR register. An interrupt is generated if RTOIE=1 in the USART_CR2 register. In Smartcard mode, the timeout corresponds to the CWT or BWT timings. Note: If a time equal to the value programmed in RTOR register separates 2 characters, RTOF is not set. If this time exceeds this value + 2 sample times (2/16 or 2/8, depending on the oversampling method), RTOF flag is set. Note: The counter counts even if RE = 0 but RTOF is set only when RE = 1. If the timeout has already elapsed when RE is set, then RTOF is set. Note: If the USART does not support the Receiver timeout feature, this bit is reserved and kept at reset value. */
    using USART_ISR_DISABLED_RTOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Timeout value not reached (value: 0)
     *          - B_0x1: Timeout value reached without any data reception (value: 1)
     */
        /** @brief Timeout value not reached */
    constexpr std::uint32_t USART_ISR_DISABLED_RTOF_B_0x0 = 0;
        /** @brief Timeout value reached without any data reception */
    constexpr std::uint32_t USART_ISR_DISABLED_RTOF_B_0x1 = 1;

    /** @brief End of block flag This bit is set by hardware when a complete block has been received (for example T=1 Smartcard mode). The detection is done when the number of received bytes (from the start of the block, including the prologue) is equal or greater than BLEN + 4. An interrupt is generated if EOBIE = 1 in the USART_CR1 register. It is cleared by software, writing 1 to EOBCF in the USART_ICR register. Note: If Smartcard mode is not supported, this bit is reserved and kept at reset value. Refer to Section 78.4: USART implementation on page 4549. */
    using USART_ISR_DISABLED_EOBF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: End of Block not reached (value: 0)
     *          - B_0x1: End of Block (number of characters) reached (value: 1)
     */
        /** @brief End of Block not reached */
    constexpr std::uint32_t USART_ISR_DISABLED_EOBF_B_0x0 = 0;
        /** @brief End of Block (number of characters) reached */
    constexpr std::uint32_t USART_ISR_DISABLED_EOBF_B_0x1 = 1;

    /** @brief SPI slave underrun error flag In Slave transmission mode, this flag is set when the first clock pulse for data transmission appears while the software has not yet loaded any value into USART_TDR. This flag is reset by setting UDRCF bit in the USART_ICR register. Note: If the USART does not support the SPI slave mode, this bit is reserved and kept at reset value. Refer to Section 78.4: USART implementation on page 4549. */
    using USART_ISR_DISABLED_UDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No underrun error (value: 0)
     *          - B_0x1: underrun error (value: 1)
     */
        /** @brief No underrun error */
    constexpr std::uint32_t USART_ISR_DISABLED_UDR_B_0x0 = 0;
        /** @brief underrun error */
    constexpr std::uint32_t USART_ISR_DISABLED_UDR_B_0x1 = 1;

    /** @brief Auto baud rate error This bit is set by hardware if the baud rate measurement failed (baud rate out of range or character comparison failed) It is cleared by software, by writing 1 to the ABRRQ bit in the USART_RQR register. Note: If the USART does not support the auto baud rate feature, this bit is reserved and kept at reset value. */
    using USART_ISR_DISABLED_ABRE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Auto baud rate flag This bit is set by hardware when the automatic baud rate has been set (RXNE is also set, generating an interrupt if RXNEIE = 1) or when the auto baud rate operation was completed without success (ABRE=1) (ABRE, RXNE and FE are also set in this case) It is cleared by software, in order to request a new auto baud rate detection, by writing 1 to the ABRRQ in the USART_RQR register. Note: If the USART does not support the auto baud rate feature, this bit is reserved and kept at reset value. */
    using USART_ISR_DISABLED_ABRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Busy flag This bit is set and reset by hardware. It is active when a communication is ongoing on the RX line (successful start bit detected). It is reset at the end of the reception (successful or not). */
    using USART_ISR_DISABLED_BUSY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART is idle (no reception) (value: 0)
     *          - B_0x1: Reception on going (value: 1)
     */
        /** @brief USART is idle (no reception) */
    constexpr std::uint32_t USART_ISR_DISABLED_BUSY_B_0x0 = 0;
        /** @brief Reception on going */
    constexpr std::uint32_t USART_ISR_DISABLED_BUSY_B_0x1 = 1;

    /** @brief Character match flag This bit is set by hardware, when a the character defined by ADD[7:0] is received. It is cleared by software, writing 1 to the CMCF in the USART_ICR register. An interrupt is generated if CMIE=1in the USART_CR1 register. */
    using USART_ISR_DISABLED_CMF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No Character match detected (value: 0)
     *          - B_0x1: Character match detected (value: 1)
     */
        /** @brief No Character match detected */
    constexpr std::uint32_t USART_ISR_DISABLED_CMF_B_0x0 = 0;
        /** @brief Character match detected */
    constexpr std::uint32_t USART_ISR_DISABLED_CMF_B_0x1 = 1;

    /** @brief Send break flag This bit indicates that a send break character was requested. It is set by software, by writing 1 to the SBKRQ bit in the USART_CR3 register. It is automatically reset by hardware during the stop bit of break transmission. */
    using USART_ISR_DISABLED_SBKF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No break character transmitted (value: 0)
     *          - B_0x1: Break character transmitted (value: 1)
     */
        /** @brief No break character transmitted */
    constexpr std::uint32_t USART_ISR_DISABLED_SBKF_B_0x0 = 0;
        /** @brief Break character transmitted */
    constexpr std::uint32_t USART_ISR_DISABLED_SBKF_B_0x1 = 1;

    /** @brief Receiver wakeup from Mute mode This bit indicates if the USART is in Mute mode. It is cleared/set by hardware when a wakeup/mute sequence is recognized. The Mute mode control sequence (address or IDLE) is selected by the WAKE bit in the USART_CR1 register. When wakeup on IDLE mode is selected, this bit can only be set by software, writing 1 to the MMRQ bit in the USART_RQR register. Note: If the USART does not support the wakeup from Stop feature, this bit is reserved and kept at reset value. Refer to Section 78.4: USART implementation on page 4549. */
    using USART_ISR_DISABLED_RWU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Receiver in Active mode (value: 0)
     *          - B_0x1: Receiver in Mute mode (value: 1)
     */
        /** @brief Receiver in Active mode */
    constexpr std::uint32_t USART_ISR_DISABLED_RWU_B_0x0 = 0;
        /** @brief Receiver in Mute mode */
    constexpr std::uint32_t USART_ISR_DISABLED_RWU_B_0x1 = 1;

    /** @brief Wakeup from low-power mode flag This bit is set by hardware, when a wakeup event is detected. The event is defined by the WUS bitfield. It is cleared by software, writing a 1 to the WUCF in the USART_ICR register. An interrupt is generated if WUFIE=1 in the USART_CR3 register. Note: When UESM is cleared, WUF flag is also cleared. Note: If the USART does not support the wakeup from Stop feature, this bit is reserved and kept at reset value. Refer to Section 78.4: USART implementation on page 4549. */
    using USART_ISR_DISABLED_WUF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit enable acknowledge flag This bit is set/reset by hardware, when the Transmit Enable value is taken into account by the USART. It can be used when an idle frame request is generated by writing TE=0, followed by TE=1 in the USART_CR1 register, in order to respect the TE=0 minimum period. */
    using USART_ISR_DISABLED_TEACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive enable acknowledge flag This bit is set/reset by hardware, when the Receive Enable value is taken into account by the USART. It can be used to verify that the USART is ready for reception before entering low-power mode. Note: If the USART does not support the wakeup from Stop feature, this bit is reserved and kept at reset value. Refer to Section 78.4: USART implementation on page 4549. */
    using USART_ISR_DISABLED_REACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission complete before guard time flag This bit is set when the last data written in the USART_TDR has been transmitted correctly out of the shift register. It is set by hardware in Smartcard mode, if the transmission of a frame containing data is complete and if the smartcard did not send back any NACK. An interrupt is generated if TCBGTIE=1 in the USART_CR3 register. This bit is cleared by software, by writing 1 to the TCBGTCF in the USART_ICR register or by a write to the USART_TDR register. Note: If the USART does not support the Smartcard mode, this bit is reserved and kept at reset value. If the USART supports the Smartcard mode and the Smartcard mode is enabled, the TCBGT reset value is 1. Refer to Section 78.4: USART implementation on page 4549. */
    using USART_ISR_DISABLED_TCBGT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Transmission is not complete or transmission is complete unsuccessfully (i.e. a NACK is received from the card) (value: 0)
     *          - B_0x1: Transmission is complete successfully (before Guard time completion and there is no NACK from the smart card). (value: 1)
     */
        /** @brief Transmission is not complete or transmission is complete unsuccessfully (i.e. a NACK is received from the card) */
    constexpr std::uint32_t USART_ISR_DISABLED_TCBGT_B_0x0 = 0;
        /** @brief Transmission is complete successfully (before Guard time completion and there is no NACK from the smart card). */
    constexpr std::uint32_t USART_ISR_DISABLED_TCBGT_B_0x1 = 1;

    /** @brief USART interrupt flag clear register */
    using USART_ICR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Parity error clear flag Writing 1 to this bit clears the PE flag in the USART_ISR register. */
    using USART_ICR_PECF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Framing error clear flag Writing 1 to this bit clears the FE flag in the USART_ISR register. */
    using USART_ICR_FECF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Noise detected clear flag Writing 1 to this bit clears the NE flag in the USART_ISR register. */
    using USART_ICR_NECF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Overrun error clear flag Writing 1 to this bit clears the ORE flag in the USART_ISR register. */
    using USART_ICR_ORECF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Idle line detected clear flag Writing 1 to this bit clears the IDLE flag in the USART_ISR register. */
    using USART_ICR_IDLECF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TXFIFO empty clear flag Writing 1 to this bit clears the TXFE flag in the USART_ISR register. */
    using USART_ICR_TXFECF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission complete clear flag Writing 1 to this bit clears the TC flag in the USART_ISR register. */
    using USART_ICR_TCCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission complete before Guard time clear flag Writing 1 to this bit clears the TCBGT flag in the USART_ISR register. */
    using USART_ICR_TCBGTCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LIN break detection clear flag Writing 1 to this bit clears the LBDF flag in the USART_ISR register. Note: If LIN mode is not supported, this bit is reserved and must be kept at reset value. Refer to Section 78.4: USART implementation on page 4549. */
    using USART_ICR_LBDCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CTS clear flag Writing 1 to this bit clears the CTSIF flag in the USART_ISR register. Note: If the hardware flow control feature is not supported, this bit is reserved and must be kept at reset value. Refer to Section 78.4: USART implementation on page 4549. */
    using USART_ICR_CTSCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receiver timeout clear flag Writing 1 to this bit clears the RTOF flag in the USART_ISR register. Note: If the USART does not support the Receiver timeout feature, this bit is reserved and must be kept at reset value. Refer to Section 78.4: USART implementation on page 4549. */
    using USART_ICR_RTOCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of block clear flag Writing 1 to this bit clears the EOBF flag in the USART_ISR register. Note: If the USART does not support Smartcard mode, this bit is reserved and must be kept at reset value. Refer to Section 78.4: USART implementation on page 4549. */
    using USART_ICR_EOBCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI slave underrun clear flag Writing 1 to this bit clears the UDRF flag in the USART_ISR register. Note: If the USART does not support SPI slave mode, this bit is reserved and must be kept at reset value. Refer to Section 78.4: USART implementation on page 4549 */
    using USART_ICR_UDRCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Character match clear flag Writing 1 to this bit clears the CMF flag in the USART_ISR register. */
    using USART_ICR_CMCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wakeup from low-power mode clear flag Writing 1 to this bit clears the WUF flag in the USART_ISR register. Note: If the USART does not support the wakeup from Stop feature, this bit is reserved and must be kept at reset value. Refer to Section 78.4: USART implementation on page 4549. */
    using USART_ICR_WUCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USART receive data register */
    using USART_RDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive data value Contains the received data character. The RDR register provides the parallel interface between the input shift register and the internal bus (see Figure 911). When receiving with the parity enabled, the value read in the MSB bit is the received parity bit. */
    using USART_RDR_RDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USART transmit data register */
    using USART_TDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit data value Contains the data character to be transmitted. The USART_TDR register provides the parallel interface between the internal bus and the output shift register (see Figure 911). When transmitting with the parity enabled (PCE bit set to 1 in the USART_CR1 register), the value written in the MSB (bit 7 or bit 8 depending on the data length) has no effect because it is replaced by the parity. Note: This register must be written only when TXE/TXFNF=1. */
    using USART_TDR_TDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USART prescaler register */
    using USART_PRESC = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clock prescaler The USART input clock can be divided by a prescaler factor: Remaining combinations: Reserved Note: When PRESCALER is programmed with a value different of the allowed ones, programmed prescaler value is equal to 1011 i.e. input clock divided by 256. */
    using USART_PRESC_PRESCALER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: input clock not divided (value: 0)
     *          - B_0x1: input clock divided by 2 (value: 1)
     *          - B_0x2: input clock divided by 4 (value: 2)
     *          - B_0x3: input clock divided by 6 (value: 3)
     *          - B_0x4: input clock divided by 8 (value: 4)
     *          - B_0x5: input clock divided by 10 (value: 5)
     *          - B_0x6: input clock divided by 12 (value: 6)
     *          - B_0x7: input clock divided by 16 (value: 7)
     *          - B_0x8: input clock divided by 32 (value: 8)
     *          - B_0x9: input clock divided by 64 (value: 9)
     *          - B_0xA: input clock divided by 128 (value: 10)
     *          - B_0xB: input clock divided by 256 (value: 11)
     */
        /** @brief input clock not divided */
    constexpr std::uint32_t USART_PRESC_PRESCALER_B_0x0 = 0;
        /** @brief input clock divided by 2 */
    constexpr std::uint32_t USART_PRESC_PRESCALER_B_0x1 = 1;
        /** @brief input clock divided by 4 */
    constexpr std::uint32_t USART_PRESC_PRESCALER_B_0x2 = 2;
        /** @brief input clock divided by 6 */
    constexpr std::uint32_t USART_PRESC_PRESCALER_B_0x3 = 3;
        /** @brief input clock divided by 8 */
    constexpr std::uint32_t USART_PRESC_PRESCALER_B_0x4 = 4;
        /** @brief input clock divided by 10 */
    constexpr std::uint32_t USART_PRESC_PRESCALER_B_0x5 = 5;
        /** @brief input clock divided by 12 */
    constexpr std::uint32_t USART_PRESC_PRESCALER_B_0x6 = 6;
        /** @brief input clock divided by 16 */
    constexpr std::uint32_t USART_PRESC_PRESCALER_B_0x7 = 7;
        /** @brief input clock divided by 32 */
    constexpr std::uint32_t USART_PRESC_PRESCALER_B_0x8 = 8;
        /** @brief input clock divided by 64 */
    constexpr std::uint32_t USART_PRESC_PRESCALER_B_0x9 = 9;
        /** @brief input clock divided by 128 */
    constexpr std::uint32_t USART_PRESC_PRESCALER_B_0xA = 10;
        /** @brief input clock divided by 256 */
    constexpr std::uint32_t USART_PRESC_PRESCALER_B_0xB = 11;

}

#endif
