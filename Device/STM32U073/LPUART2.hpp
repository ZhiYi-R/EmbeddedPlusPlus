/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32U073_LPUART2_HPP
#define EMBEDDED_PP_STM32U073_LPUART2_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief LPUART address block description */
namespace STM32U073::LPUART2 {

    /** @brief LPUART control register 1 */
    using LPUART_CR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPUART enable When this bit is cleared, the LPUART prescalers and outputs are stopped immediately, and current operations are discarded. The configuration of the LPUART is kept, but all the status flags, in the LPUART_ISR are reset. This bit is set and cleared by software. Note: To enter low-power mode without generating errors on the line, the TE bit must be reset before and the software must wait for the TC bit in the LPUART_ISR to be set before resetting the UE bit. Note: The DMA requests are also reset when UE = 0 so the DMA channel must be disabled before resetting the UE bit. */
    using LPUART_CR1_UE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPUART prescaler and outputs disabled, low-power mode (value: 0)
     *          - B_0x1: LPUART enabled (value: 1)
     */
        /** @brief LPUART prescaler and outputs disabled, low-power mode */
    constexpr std::uint32_t LPUART_CR1_UE_B_0x0 = 0;
        /** @brief LPUART enabled */
    constexpr std::uint32_t LPUART_CR1_UE_B_0x1 = 1;

    /** @brief LPUART enable in low-power mode When this bit is cleared, the LPUART cannot wake up the MCU from low-power mode. When this bit is set, the LPUART can wake up the MCU from low-power mode. This bit is set and cleared by software. Note: It is recommended to set the UESM bit just before entering low-power mode, and clear it when exiting low-power mode. */
    using LPUART_CR1_UESM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART not able to wake up the MCU from low-power mode. (value: 0)
     *          - B_0x1: USART able to wake up the MCU from low-power mode. (value: 1)
     */
        /** @brief USART not able to wake up the MCU from low-power mode. */
    constexpr std::uint32_t LPUART_CR1_UESM_B_0x0 = 0;
        /** @brief USART able to wake up the MCU from low-power mode. */
    constexpr std::uint32_t LPUART_CR1_UESM_B_0x1 = 1;

    /** @brief Receiver enable This bit enables the receiver. It is set and cleared by software. */
    using LPUART_CR1_RE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Receiver is disabled (value: 0)
     *          - B_0x1: Receiver is enabled and begins searching for a start bit (value: 1)
     */
        /** @brief Receiver is disabled */
    constexpr std::uint32_t LPUART_CR1_RE_B_0x0 = 0;
        /** @brief Receiver is enabled and begins searching for a start bit */
    constexpr std::uint32_t LPUART_CR1_RE_B_0x1 = 1;

    /** @brief Transmitter enable This bit enables the transmitter. It is set and cleared by software. Note: During transmission, a low pulse on the TE bit (0 followed by 1) sends a preamble (idle line) after the current word, except in Smartcard mode. In order to generate an idle character, the TE must not be immediately written to 1. To ensure the required duration, the software can poll the TEACK bit in the LPUART_ISR register. Note: In Smartcard mode, when TE is set, there is a 1 bit-time delay before the transmission starts. */
    using LPUART_CR1_TE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Transmitter is disabled (value: 0)
     *          - B_0x1: Transmitter is enabled (value: 1)
     */
        /** @brief Transmitter is disabled */
    constexpr std::uint32_t LPUART_CR1_TE_B_0x0 = 0;
        /** @brief Transmitter is enabled */
    constexpr std::uint32_t LPUART_CR1_TE_B_0x1 = 1;

    /** @brief IDLE interrupt enable This bit is set and cleared by software. */
    using LPUART_CR1_IDLEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt is inhibited (value: 0)
     *          - B_0x1: An LPUART interrupt is generated whenever IDLE=1 in the LPUART_ISR register (value: 1)
     */
        /** @brief Interrupt is inhibited */
    constexpr std::uint32_t LPUART_CR1_IDLEIE_B_0x0 = 0;
        /** @brief An LPUART interrupt is generated whenever IDLE=1 in the LPUART_ISR register */
    constexpr std::uint32_t LPUART_CR1_IDLEIE_B_0x1 = 1;

    /** @brief RXFIFO not empty interrupt enable This bit is set and cleared by software. */
    using LPUART_CR1_RXFNEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt is inhibited (value: 0)
     *          - B_0x1: A LPUART interrupt is generated whenever ORE=1 or RXFNE=1 in the LPUART_ISR register (value: 1)
     */
        /** @brief Interrupt is inhibited */
    constexpr std::uint32_t LPUART_CR1_RXFNEIE_B_0x0 = 0;
        /** @brief A LPUART interrupt is generated whenever ORE=1 or RXFNE=1 in the LPUART_ISR register */
    constexpr std::uint32_t LPUART_CR1_RXFNEIE_B_0x1 = 1;

    /** @brief Transmission complete interrupt enable This bit is set and cleared by software. */
    using LPUART_CR1_TCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt is inhibited (value: 0)
     *          - B_0x1: An LPUART interrupt is generated whenever TC=1 in the LPUART_ISR register (value: 1)
     */
        /** @brief Interrupt is inhibited */
    constexpr std::uint32_t LPUART_CR1_TCIE_B_0x0 = 0;
        /** @brief An LPUART interrupt is generated whenever TC=1 in the LPUART_ISR register */
    constexpr std::uint32_t LPUART_CR1_TCIE_B_0x1 = 1;

    /** @brief TXFIFO not full interrupt enable This bit is set and cleared by software. */
    using LPUART_CR1_TXFNFIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt is inhibited (value: 0)
     *          - B_0x1: A LPUART interrupt is generated whenever TXFNF =1 in the LPUART_ISR register (value: 1)
     */
        /** @brief Interrupt is inhibited */
    constexpr std::uint32_t LPUART_CR1_TXFNFIE_B_0x0 = 0;
        /** @brief A LPUART interrupt is generated whenever TXFNF =1 in the LPUART_ISR register */
    constexpr std::uint32_t LPUART_CR1_TXFNFIE_B_0x1 = 1;

    /** @brief PE interrupt enable This bit is set and cleared by software. */
    using LPUART_CR1_PEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt is inhibited (value: 0)
     *          - B_0x1: An LPUART interrupt is generated whenever PE=1 in the LPUART_ISR register (value: 1)
     */
        /** @brief Interrupt is inhibited */
    constexpr std::uint32_t LPUART_CR1_PEIE_B_0x0 = 0;
        /** @brief An LPUART interrupt is generated whenever PE=1 in the LPUART_ISR register */
    constexpr std::uint32_t LPUART_CR1_PEIE_B_0x1 = 1;

    /** @brief Parity selection This bit selects the odd or even parity when the parity generation/detection is enabled (PCE bit set). It is set and cleared by software. The parity is selected after the current byte. This bitfield can only be written when the LPUART is disabled (UE=0). */
    using LPUART_CR1_PS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Even parity (value: 0)
     *          - B_0x1: Odd parity (value: 1)
     */
        /** @brief Even parity */
    constexpr std::uint32_t LPUART_CR1_PS_B_0x0 = 0;
        /** @brief Odd parity */
    constexpr std::uint32_t LPUART_CR1_PS_B_0x1 = 1;

    /** @brief Parity control enable This bit selects the hardware parity control (generation and detection). When the parity control is enabled, the computed parity is inserted at the MSB position (9th bit if M=1; 8th bit if M=0) and parity is checked on the received data. This bit is set and cleared by software. Once it is set, PCE is active after the current byte (in reception and in transmission). This bitfield can only be written when the LPUART is disabled (UE=0). */
    using LPUART_CR1_PCE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Parity control disabled (value: 0)
     *          - B_0x1: Parity control enabled (value: 1)
     */
        /** @brief Parity control disabled */
    constexpr std::uint32_t LPUART_CR1_PCE_B_0x0 = 0;
        /** @brief Parity control enabled */
    constexpr std::uint32_t LPUART_CR1_PCE_B_0x1 = 1;

    /** @brief Receiver wake-up method This bit determines the LPUART wake-up method from Mute mode. It is set or cleared by software.	 This bitfield can only be written when the LPUART is disabled (UE=0). */
    using LPUART_CR1_WAKE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Idle line (value: 0)
     *          - B_0x1: Address mark (value: 1)
     */
        /** @brief Idle line */
    constexpr std::uint32_t LPUART_CR1_WAKE_B_0x0 = 0;
        /** @brief Address mark */
    constexpr std::uint32_t LPUART_CR1_WAKE_B_0x1 = 1;

    /** @brief Word length This bit is used in conjunction with bit 28 (M1) to determine the word length. It is set or cleared by software (refer to bit 28 (M1) description). This bit can only be written when the LPUART is disabled (UE=0). */
    using LPUART_CR1_M0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Mute mode enable This bit activates the Mute mode function of the LPUART. When set, the LPUART can switch between the active and Mute modes, as defined by the WAKE bit. It is set and cleared by software. */
    using LPUART_CR1_MME = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Receiver in Active mode permanently (value: 0)
     *          - B_0x1: Receiver can switch between Mute mode and Active mode. (value: 1)
     */
        /** @brief Receiver in Active mode permanently */
    constexpr std::uint32_t LPUART_CR1_MME_B_0x0 = 0;
        /** @brief Receiver can switch between Mute mode and Active mode. */
    constexpr std::uint32_t LPUART_CR1_MME_B_0x1 = 1;

    /** @brief Character match interrupt enable This bit is set and cleared by software. */
    using LPUART_CR1_CMIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt is inhibited (value: 0)
     *          - B_0x1: A LPUART interrupt is generated when the CMF bit is set in the LPUART_ISR register. (value: 1)
     */
        /** @brief Interrupt is inhibited */
    constexpr std::uint32_t LPUART_CR1_CMIE_B_0x0 = 0;
        /** @brief A LPUART interrupt is generated when the CMF bit is set in the LPUART_ISR register. */
    constexpr std::uint32_t LPUART_CR1_CMIE_B_0x1 = 1;

    /** @brief Driver Enable deassertion time This 5-bit value defines the time between the end of the last stop bit, in a transmitted message, and the de-activation of the DE (Driver Enable) signal.It is expressed in lpuart_ker_ck clock cycles. For more details, refer Section132.4.14: RS232 Hardware flow control and RS485 Driver Enable. If the LPUART_TDR register is written during the DEDT time, the new data is transmitted only when the DEDT and DEAT times have both elapsed. This bitfield can only be written when the LPUART is disabled (UE=0). */
    using LPUART_CR1_DEDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Driver Enable assertion time This 5-bit value defines the time between the activation of the DE (Driver Enable) signal and the beginning of the start bit. It is expressed in lpuart_ker_ck clock cycles. For more details, refer Section131.5.21: RS232 Hardware flow control and RS485 Driver Enable. This bitfield can only be written when the LPUART is disabled (UE=0). */
    using LPUART_CR1_DEAT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Word length This bit must be used in conjunction with bit 12 (M0) to determine the word length. It is set or cleared by software. M[1:0] = 00: 1 Start bit, 8 Data bits, n Stop bit M[1:0] = 01: 1 Start bit, 9 Data bits, n Stop bit M[1:0] = 10: 1 Start bit, 7 Data bits, n Stop bit This bit can only be written when the LPUART is disabled (UE=0). Note: In 7-bit data length mode, the Smartcard mode, LIN master mode and auto baud rate (0x7F and 0x55 frames detection) are not supported. */
    using LPUART_CR1_M1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FIFO mode enable This bit is set and cleared by software. */
    using LPUART_CR1_FIFOEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FIFO mode is disabled. (value: 0)
     *          - B_0x1: FIFO mode is enabled. (value: 1)
     */
        /** @brief FIFO mode is disabled. */
    constexpr std::uint32_t LPUART_CR1_FIFOEN_B_0x0 = 0;
        /** @brief FIFO mode is enabled. */
    constexpr std::uint32_t LPUART_CR1_FIFOEN_B_0x1 = 1;

    /** @brief TXFIFO empty interrupt enable This bit is set and cleared by software. */
    using LPUART_CR1_TXFEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt is inhibited (value: 0)
     *          - B_0x1: An LPUART interrupt is generated when TXFE=1 in the LPUART_ISR register (value: 1)
     */
        /** @brief Interrupt is inhibited */
    constexpr std::uint32_t LPUART_CR1_TXFEIE_B_0x0 = 0;
        /** @brief An LPUART interrupt is generated when TXFE=1 in the LPUART_ISR register */
    constexpr std::uint32_t LPUART_CR1_TXFEIE_B_0x1 = 1;

    /** @brief RXFIFO Full interrupt enable This bit is set and cleared by software. */
    using LPUART_CR1_RXFFIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt is inhibited (value: 0)
     *          - B_0x1: An LPUART interrupt is generated when RXFF=1 in the LPUART_ISR register (value: 1)
     */
        /** @brief Interrupt is inhibited */
    constexpr std::uint32_t LPUART_CR1_RXFFIE_B_0x0 = 0;
        /** @brief An LPUART interrupt is generated when RXFF=1 in the LPUART_ISR register */
    constexpr std::uint32_t LPUART_CR1_RXFFIE_B_0x1 = 1;

    /** @brief LPUART control register 1 */
    using LPUART_CR1_ALTERNATE = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPUART enable When this bit is cleared, the LPUART prescalers and outputs are stopped immediately, and current operations are discarded. The configuration of the LPUART is kept, but all the status flags, in the LPUART_ISR are reset. This bit is set and cleared by software. Note: To enter low-power mode without generating errors on the line, the TE bit must be reset before and the software must wait for the TC bit in the LPUART_ISR to be set before resetting the UE bit. Note: The DMA requests are also reset when UE = 0 so the DMA channel must be disabled before resetting the UE bit. */
    using LPUART_CR1_ALTERNATE_UE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPUART prescaler and outputs disabled, low-power mode (value: 0)
     *          - B_0x1: LPUART enabled (value: 1)
     */
        /** @brief LPUART prescaler and outputs disabled, low-power mode */
    constexpr std::uint32_t LPUART_CR1_ALTERNATE_UE_B_0x0 = 0;
        /** @brief LPUART enabled */
    constexpr std::uint32_t LPUART_CR1_ALTERNATE_UE_B_0x1 = 1;

    /** @brief LPUART enable in low-power mode When this bit is cleared, the LPUART cannot wake up the MCU from low-power mode. When this bit is set, the LPUART can wake up the MCU from low-power mode. This bit is set and cleared by software. Note: It is recommended to set the UESM bit just before entering low-power mode, and clear it when exiting low-power mode. */
    using LPUART_CR1_ALTERNATE_UESM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART not able to wake up the MCU from low-power mode. (value: 0)
     *          - B_0x1: USART able to wake up the MCU from low-power mode. (value: 1)
     */
        /** @brief USART not able to wake up the MCU from low-power mode. */
    constexpr std::uint32_t LPUART_CR1_ALTERNATE_UESM_B_0x0 = 0;
        /** @brief USART able to wake up the MCU from low-power mode. */
    constexpr std::uint32_t LPUART_CR1_ALTERNATE_UESM_B_0x1 = 1;

    /** @brief Receiver enable This bit enables the receiver. It is set and cleared by software. */
    using LPUART_CR1_ALTERNATE_RE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Receiver is disabled (value: 0)
     *          - B_0x1: Receiver is enabled and begins searching for a start bit (value: 1)
     */
        /** @brief Receiver is disabled */
    constexpr std::uint32_t LPUART_CR1_ALTERNATE_RE_B_0x0 = 0;
        /** @brief Receiver is enabled and begins searching for a start bit */
    constexpr std::uint32_t LPUART_CR1_ALTERNATE_RE_B_0x1 = 1;

    /** @brief Transmitter enable This bit enables the transmitter. It is set and cleared by software. Note: During transmission, a low pulse on the TE bit (0 followed by 1) sends a preamble (idle line) after the current word, except in Smartcard mode. In order to generate an idle character, the TE must not be immediately written to 1. To ensure the required duration, the software can poll the TEACK bit in the LPUART_ISR register. Note: In Smartcard mode, when TE is set, there is a 1 bit-time delay before the transmission starts. */
    using LPUART_CR1_ALTERNATE_TE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Transmitter is disabled (value: 0)
     *          - B_0x1: Transmitter is enabled (value: 1)
     */
        /** @brief Transmitter is disabled */
    constexpr std::uint32_t LPUART_CR1_ALTERNATE_TE_B_0x0 = 0;
        /** @brief Transmitter is enabled */
    constexpr std::uint32_t LPUART_CR1_ALTERNATE_TE_B_0x1 = 1;

    /** @brief IDLE interrupt enable This bit is set and cleared by software. */
    using LPUART_CR1_ALTERNATE_IDLEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt is inhibited (value: 0)
     *          - B_0x1: An LPUART interrupt is generated whenever IDLE=1 in the LPUART_ISR register (value: 1)
     */
        /** @brief Interrupt is inhibited */
    constexpr std::uint32_t LPUART_CR1_ALTERNATE_IDLEIE_B_0x0 = 0;
        /** @brief An LPUART interrupt is generated whenever IDLE=1 in the LPUART_ISR register */
    constexpr std::uint32_t LPUART_CR1_ALTERNATE_IDLEIE_B_0x1 = 1;

    /** @brief Receive data register not empty This bit is set and cleared by software. */
    using LPUART_CR1_ALTERNATE_RXNEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt is inhibited (value: 0)
     *          - B_0x1: A LPUART interrupt is generated whenever ORE=1 or RXNE=1 in the LPUART_ISR register (value: 1)
     */
        /** @brief Interrupt is inhibited */
    constexpr std::uint32_t LPUART_CR1_ALTERNATE_RXNEIE_B_0x0 = 0;
        /** @brief A LPUART interrupt is generated whenever ORE=1 or RXNE=1 in the LPUART_ISR register */
    constexpr std::uint32_t LPUART_CR1_ALTERNATE_RXNEIE_B_0x1 = 1;

    /** @brief Transmission complete interrupt enable This bit is set and cleared by software. */
    using LPUART_CR1_ALTERNATE_TCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt is inhibited (value: 0)
     *          - B_0x1: An LPUART interrupt is generated whenever TC=1 in the LPUART_ISR register (value: 1)
     */
        /** @brief Interrupt is inhibited */
    constexpr std::uint32_t LPUART_CR1_ALTERNATE_TCIE_B_0x0 = 0;
        /** @brief An LPUART interrupt is generated whenever TC=1 in the LPUART_ISR register */
    constexpr std::uint32_t LPUART_CR1_ALTERNATE_TCIE_B_0x1 = 1;

    /** @brief Transmit data register empty This bit is set and cleared by software. */
    using LPUART_CR1_ALTERNATE_TXEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt is inhibited (value: 0)
     *          - B_0x1: A LPUART interrupt is generated whenever TXE =1 in the LPUART_ISR register (value: 1)
     */
        /** @brief Interrupt is inhibited */
    constexpr std::uint32_t LPUART_CR1_ALTERNATE_TXEIE_B_0x0 = 0;
        /** @brief A LPUART interrupt is generated whenever TXE =1 in the LPUART_ISR register */
    constexpr std::uint32_t LPUART_CR1_ALTERNATE_TXEIE_B_0x1 = 1;

    /** @brief PE interrupt enable This bit is set and cleared by software. */
    using LPUART_CR1_ALTERNATE_PEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt is inhibited (value: 0)
     *          - B_0x1: An LPUART interrupt is generated whenever PE=1 in the LPUART_ISR register (value: 1)
     */
        /** @brief Interrupt is inhibited */
    constexpr std::uint32_t LPUART_CR1_ALTERNATE_PEIE_B_0x0 = 0;
        /** @brief An LPUART interrupt is generated whenever PE=1 in the LPUART_ISR register */
    constexpr std::uint32_t LPUART_CR1_ALTERNATE_PEIE_B_0x1 = 1;

    /** @brief Parity selection This bit selects the odd or even parity when the parity generation/detection is enabled (PCE bit set). It is set and cleared by software. The parity is selected after the current byte. This bitfield can only be written when the LPUART is disabled (UE=0). */
    using LPUART_CR1_ALTERNATE_PS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Even parity (value: 0)
     *          - B_0x1: Odd parity (value: 1)
     */
        /** @brief Even parity */
    constexpr std::uint32_t LPUART_CR1_ALTERNATE_PS_B_0x0 = 0;
        /** @brief Odd parity */
    constexpr std::uint32_t LPUART_CR1_ALTERNATE_PS_B_0x1 = 1;

    /** @brief Parity control enable This bit selects the hardware parity control (generation and detection). When the parity control is enabled, the computed parity is inserted at the MSB position (9th bit if M=1; 8th bit if M=0) and parity is checked on the received data. This bit is set and cleared by software. Once it is set, PCE is active after the current byte (in reception and in transmission). This bitfield can only be written when the LPUART is disabled (UE=0). */
    using LPUART_CR1_ALTERNATE_PCE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Parity control disabled (value: 0)
     *          - B_0x1: Parity control enabled (value: 1)
     */
        /** @brief Parity control disabled */
    constexpr std::uint32_t LPUART_CR1_ALTERNATE_PCE_B_0x0 = 0;
        /** @brief Parity control enabled */
    constexpr std::uint32_t LPUART_CR1_ALTERNATE_PCE_B_0x1 = 1;

    /** @brief Receiver wake-up method This bit determines the LPUART wake-up method from Mute mode. It is set or cleared by software.	 This bitfield can only be written when the LPUART is disabled (UE=0). */
    using LPUART_CR1_ALTERNATE_WAKE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Idle line (value: 0)
     *          - B_0x1: Address mark (value: 1)
     */
        /** @brief Idle line */
    constexpr std::uint32_t LPUART_CR1_ALTERNATE_WAKE_B_0x0 = 0;
        /** @brief Address mark */
    constexpr std::uint32_t LPUART_CR1_ALTERNATE_WAKE_B_0x1 = 1;

    /** @brief Word length This bit is used in conjunction with bit 28 (M1) to determine the word length. It is set or cleared by software (refer to bit 28 (M1) description). This bit can only be written when the LPUART is disabled (UE=0). */
    using LPUART_CR1_ALTERNATE_M0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Mute mode enable This bit activates the Mute mode function of the LPUART. When set, the LPUART can switch between the active and Mute modes, as defined by the WAKE bit. It is set and cleared by software. */
    using LPUART_CR1_ALTERNATE_MME = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Receiver in Active mode permanently (value: 0)
     *          - B_0x1: Receiver can switch between Mute mode and Active mode. (value: 1)
     */
        /** @brief Receiver in Active mode permanently */
    constexpr std::uint32_t LPUART_CR1_ALTERNATE_MME_B_0x0 = 0;
        /** @brief Receiver can switch between Mute mode and Active mode. */
    constexpr std::uint32_t LPUART_CR1_ALTERNATE_MME_B_0x1 = 1;

    /** @brief Character match interrupt enable This bit is set and cleared by software. */
    using LPUART_CR1_ALTERNATE_CMIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt is inhibited (value: 0)
     *          - B_0x1: A LPUART interrupt is generated when the CMF bit is set in the LPUART_ISR register. (value: 1)
     */
        /** @brief Interrupt is inhibited */
    constexpr std::uint32_t LPUART_CR1_ALTERNATE_CMIE_B_0x0 = 0;
        /** @brief A LPUART interrupt is generated when the CMF bit is set in the LPUART_ISR register. */
    constexpr std::uint32_t LPUART_CR1_ALTERNATE_CMIE_B_0x1 = 1;

    /** @brief Driver Enable deassertion time This 5-bit value defines the time between the end of the last stop bit, in a transmitted message, and the de-activation of the DE (Driver Enable) signal.It is expressed in lpuart_ker_ck clock cycles. For more details, refer Section132.4.14: RS232 Hardware flow control and RS485 Driver Enable. If the LPUART_TDR register is written during the DEDT time, the new data is transmitted only when the DEDT and DEAT times have both elapsed. This bitfield can only be written when the LPUART is disabled (UE=0). */
    using LPUART_CR1_ALTERNATE_DEDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Driver Enable assertion time This 5-bit value defines the time between the activation of the DE (Driver Enable) signal and the beginning of the start bit. It is expressed in lpuart_ker_ck clock cycles. For more details, refer Section131.5.21: RS232 Hardware flow control and RS485 Driver Enable. This bitfield can only be written when the LPUART is disabled (UE=0). */
    using LPUART_CR1_ALTERNATE_DEAT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Word length This bit must be used in conjunction with bit 12 (M0) to determine the word length. It is set or cleared by software. M[1:0] = 00: 1 Start bit, 8 Data bits, n Stop bit M[1:0] = 01: 1 Start bit, 9 Data bits, n Stop bit M[1:0] = 10: 1 Start bit, 7 Data bits, n Stop bit This bit can only be written when the LPUART is disabled (UE=0). Note: In 7-bit data length mode, the Smartcard mode, LIN master mode and auto baud rate (0x7F and 0x55 frames detection) are not supported. */
    using LPUART_CR1_ALTERNATE_M1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FIFO mode enable This bit is set and cleared by software. */
    using LPUART_CR1_ALTERNATE_FIFOEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FIFO mode is disabled. (value: 0)
     *          - B_0x1: FIFO mode is enabled. (value: 1)
     */
        /** @brief FIFO mode is disabled. */
    constexpr std::uint32_t LPUART_CR1_ALTERNATE_FIFOEN_B_0x0 = 0;
        /** @brief FIFO mode is enabled. */
    constexpr std::uint32_t LPUART_CR1_ALTERNATE_FIFOEN_B_0x1 = 1;

    /** @brief LPUART control register 2 */
    using LPUART_CR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 7-bit Address Detection/4-bit Address Detection This bit is for selection between 4-bit address detection or 7-bit address detection. This bit can only be written when the LPUART is disabled (UE=0) Note: In 7-bit and 9-bit data modes, the address detection is done on 6-bit and 8-bit address (ADD[5:0] and ADD[7:0]) respectively. */
    using LPUART_CR2_ADDM7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 4-bit address detection (value: 0)
     *          - B_0x1: 7-bit address detection (in 8-bit data mode) (value: 1)
     */
        /** @brief 4-bit address detection */
    constexpr std::uint32_t LPUART_CR2_ADDM7_B_0x0 = 0;
        /** @brief 7-bit address detection (in 8-bit data mode) */
    constexpr std::uint32_t LPUART_CR2_ADDM7_B_0x1 = 1;

    /** @brief STOP bits These bits are used for programming the stop bits. This bitfield can only be written when the LPUART is disabled (UE=0). */
    using LPUART_CR2_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1 stop bit (value: 0)
     *          - B_0x1: Reserved. (value: 1)
     *          - B_0x2: 2 stop bits (value: 2)
     */
        /** @brief 1 stop bit */
    constexpr std::uint32_t LPUART_CR2_STOP_B_0x0 = 0;
        /** @brief Reserved. */
    constexpr std::uint32_t LPUART_CR2_STOP_B_0x1 = 1;
        /** @brief 2 stop bits */
    constexpr std::uint32_t LPUART_CR2_STOP_B_0x2 = 2;

    /** @brief Swap TX/RX pins This bit is set and cleared by software. This bitfield can only be written when the LPUART is disabled (UE=0). */
    using LPUART_CR2_SWAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TX/RX pins are used as defined in standard pinout (value: 0)
     *          - B_0x1: The TX and RX pins functions are swapped. This enables to work in the case of a cross-wired connection to another UART. (value: 1)
     */
        /** @brief TX/RX pins are used as defined in standard pinout */
    constexpr std::uint32_t LPUART_CR2_SWAP_B_0x0 = 0;
        /** @brief The TX and RX pins functions are swapped. This enables to work in the case of a cross-wired connection to another UART. */
    constexpr std::uint32_t LPUART_CR2_SWAP_B_0x1 = 1;

    /** @brief RX pin active level inversion This bit is set and cleared by software. This enables the use of an external inverter on the RX line. This bitfield can only be written when the LPUART is disabled (UE=0). */
    using LPUART_CR2_RXINV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RX pin signal works using the standard logic levels (V<sub>DD</sub> =1/idle, Gnd=0/mark) (value: 0)
     *          - B_0x1: RX pin signal values are inverted. ((V<sub>DD</sub> =0/mark, Gnd=1/idle). (value: 1)
     */
        /** @brief RX pin signal works using the standard logic levels (V<sub>DD</sub> =1/idle, Gnd=0/mark) */
    constexpr std::uint32_t LPUART_CR2_RXINV_B_0x0 = 0;
        /** @brief RX pin signal values are inverted. ((V<sub>DD</sub> =0/mark, Gnd=1/idle). */
    constexpr std::uint32_t LPUART_CR2_RXINV_B_0x1 = 1;

    /** @brief TX pin active level inversion This bit is set and cleared by software. This enables the use of an external inverter on the TX line. This bitfield can only be written when the LPUART is disabled (UE=0). */
    using LPUART_CR2_TXINV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TX pin signal works using the standard logic levels (V<sub>DD</sub> =1/idle, Gnd=0/mark) (value: 0)
     *          - B_0x1: TX pin signal values are inverted. ((V<sub>DD</sub> =0/mark, Gnd=1/idle). (value: 1)
     */
        /** @brief TX pin signal works using the standard logic levels (V<sub>DD</sub> =1/idle, Gnd=0/mark) */
    constexpr std::uint32_t LPUART_CR2_TXINV_B_0x0 = 0;
        /** @brief TX pin signal values are inverted. ((V<sub>DD</sub> =0/mark, Gnd=1/idle). */
    constexpr std::uint32_t LPUART_CR2_TXINV_B_0x1 = 1;

    /** @brief Binary data inversion This bit is set and cleared by software. This bitfield can only be written when the LPUART is disabled (UE=0). */
    using LPUART_CR2_DATAINV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Logical data from the data register are send/received in positive/direct logic. (1=H, 0=L) (value: 0)
     *          - B_0x1: Logical data from the data register are send/received in negative/inverse logic. (1=L, 0=H). The parity bit is also inverted. (value: 1)
     */
        /** @brief Logical data from the data register are send/received in positive/direct logic. (1=H, 0=L) */
    constexpr std::uint32_t LPUART_CR2_DATAINV_B_0x0 = 0;
        /** @brief Logical data from the data register are send/received in negative/inverse logic. (1=L, 0=H). The parity bit is also inverted. */
    constexpr std::uint32_t LPUART_CR2_DATAINV_B_0x1 = 1;

    /** @brief Most significant bit first This bit is set and cleared by software. This bitfield can only be written when the LPUART is disabled (UE=0). */
    using LPUART_CR2_MSBFIRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: data is transmitted/received with data bit 0 first, following the start bit. (value: 0)
     *          - B_0x1: data is transmitted/received with the MSB (bit 7/8) first, following the start bit. (value: 1)
     */
        /** @brief data is transmitted/received with data bit 0 first, following the start bit. */
    constexpr std::uint32_t LPUART_CR2_MSBFIRST_B_0x0 = 0;
        /** @brief data is transmitted/received with the MSB (bit 7/8) first, following the start bit. */
    constexpr std::uint32_t LPUART_CR2_MSBFIRST_B_0x1 = 1;

    /** @brief Address of the LPUART node These bits give the address of the LPUART node in Mute mode or a character code to be recognized in low-power or Run mode: In Mute mode: they are used in multiprocessor communication to wake up from Mute mode with 4-bit/7-bit address mark detection. The MSB of the character sent by the transmitter should be equal to 1. In 4-bit address mark detection, only ADD[3:0] bits are used. In low-power mode: they are used for wake up from low-power mode on character match. When WUS[1:0] is programmed to 0b00 (WUF active on address match), the wake-up from low-power mode is performed when the received character corresponds to the character programmed through ADD[6:0] or ADD[3:0] bitfield (depending on ADDM7 bit), and WUF interrupt is enabled by setting WUFIE bit. The MSB of the character sent by transmitter should be equal to 1. In Run mode with Mute mode inactive (for example, end-of-block detection in ModBus protocol): the whole received character (8 bits) is compared to ADD[7:0] value and CMF flag is set on match. An interrupt is generated if the CMIE bit is set. These bits can only be written when the reception is disabled (RE1=10) or when the USART is disabled (UE1=10). */
    using LPUART_CR2_ADD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPUART control register 3 */
    using LPUART_CR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Error interrupt enable Error Interrupt Enable Bit is required to enable interrupt generation in case of a framing error, overrun error or noise flag (FE=1 or ORE=1 or NE=1 in the LPUART_ISR register). */
    using LPUART_CR3_EIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt is inhibited (value: 0)
     *          - B_0x1: An interrupt is generated when FE=1 or ORE=1 or NE=1 in the LPUART_ISR register. (value: 1)
     */
        /** @brief Interrupt is inhibited */
    constexpr std::uint32_t LPUART_CR3_EIE_B_0x0 = 0;
        /** @brief An interrupt is generated when FE=1 or ORE=1 or NE=1 in the LPUART_ISR register. */
    constexpr std::uint32_t LPUART_CR3_EIE_B_0x1 = 1;

    /** @brief Half-duplex selection Selection of Single-wire Half-duplex mode This bit can only be written when the LPUART is disabled (UE=0). */
    using LPUART_CR3_HDSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Half-duplex mode is not selected (value: 0)
     *          - B_0x1: Half-duplex mode is selected (value: 1)
     */
        /** @brief Half-duplex mode is not selected */
    constexpr std::uint32_t LPUART_CR3_HDSEL_B_0x0 = 0;
        /** @brief Half-duplex mode is selected */
    constexpr std::uint32_t LPUART_CR3_HDSEL_B_0x1 = 1;

    /** @brief DMA enable receiver This bit is set/reset by software */
    using LPUART_CR3_DMAR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: DMA mode is enabled for reception (value: 1)
     *          - B_0x0: DMA mode is disabled for reception (value: 0)
     */
        /** @brief DMA mode is enabled for reception */
    constexpr std::uint32_t LPUART_CR3_DMAR_B_0x1 = 1;
        /** @brief DMA mode is disabled for reception */
    constexpr std::uint32_t LPUART_CR3_DMAR_B_0x0 = 0;

    /** @brief DMA enable transmitter This bit is set/reset by software */
    using LPUART_CR3_DMAT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: DMA mode is enabled for transmission (value: 1)
     *          - B_0x0: DMA mode is disabled for transmission (value: 0)
     */
        /** @brief DMA mode is enabled for transmission */
    constexpr std::uint32_t LPUART_CR3_DMAT_B_0x1 = 1;
        /** @brief DMA mode is disabled for transmission */
    constexpr std::uint32_t LPUART_CR3_DMAT_B_0x0 = 0;

    /** @brief RTS enable This bit can only be written when the LPUART is disabled (UE=0). */
    using LPUART_CR3_RTSE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RTS hardware flow control disabled (value: 0)
     *          - B_0x1: RTS output enabled, data is only requested when there is space in the receive buffer. The transmission of data is expected to cease after the current character has been transmitted. The RTS output is deasserted (pulled to 0) when data can be received. (value: 1)
     */
        /** @brief RTS hardware flow control disabled */
    constexpr std::uint32_t LPUART_CR3_RTSE_B_0x0 = 0;
        /** @brief RTS output enabled, data is only requested when there is space in the receive buffer. The transmission of data is expected to cease after the current character has been transmitted. The RTS output is deasserted (pulled to 0) when data can be received. */
    constexpr std::uint32_t LPUART_CR3_RTSE_B_0x1 = 1;

    /** @brief CTS enable This bit can only be written when the LPUART is disabled (UE=0) */
    using LPUART_CR3_CTSE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CTS hardware flow control disabled (value: 0)
     *          - B_0x1: CTS mode enabled, data is only transmitted when the CTS input is deasserted (tied to 0). If the CTS input is asserted while data is being transmitted, then the transmission is completed before stopping. If data is written into the data register while CTS is asserted, the transmission is postponed until CTS is deasserted. (value: 1)
     */
        /** @brief CTS hardware flow control disabled */
    constexpr std::uint32_t LPUART_CR3_CTSE_B_0x0 = 0;
        /** @brief CTS mode enabled, data is only transmitted when the CTS input is deasserted (tied to 0). If the CTS input is asserted while data is being transmitted, then the transmission is completed before stopping. If data is written into the data register while CTS is asserted, the transmission is postponed until CTS is deasserted. */
    constexpr std::uint32_t LPUART_CR3_CTSE_B_0x1 = 1;

    /** @brief CTS interrupt enable */
    using LPUART_CR3_CTSIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt is inhibited (value: 0)
     *          - B_0x1: An interrupt is generated whenever CTSIF=1 in the LPUART_ISR register (value: 1)
     */
        /** @brief Interrupt is inhibited */
    constexpr std::uint32_t LPUART_CR3_CTSIE_B_0x0 = 0;
        /** @brief An interrupt is generated whenever CTSIF=1 in the LPUART_ISR register */
    constexpr std::uint32_t LPUART_CR3_CTSIE_B_0x1 = 1;

    /** @brief Overrun Disable This bit is used to disable the receive overrun detection. the ORE flag is not set and the new received data overwrites the previous content of the LPUART_RDR register. This bit can only be written when the LPUART is disabled (UE=0). Note: This control bit enables checking the communication flow w/o reading the data. */
    using LPUART_CR3_OVRDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Overrun Error Flag, ORE is set when received data is not read before receiving new data. (value: 0)
     *          - B_0x1: Overrun functionality is disabled. If new data is received while the RXNE flag is still set (value: 1)
     */
        /** @brief Overrun Error Flag, ORE is set when received data is not read before receiving new data. */
    constexpr std::uint32_t LPUART_CR3_OVRDIS_B_0x0 = 0;
        /** @brief Overrun functionality is disabled. If new data is received while the RXNE flag is still set */
    constexpr std::uint32_t LPUART_CR3_OVRDIS_B_0x1 = 1;

    /** @brief DMA Disable on Reception Error This bit can only be written when the LPUART is disabled (UE=0). Note: The reception errors are: parity error, framing error or noise error. */
    using LPUART_CR3_DDRE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DMA is not disabled in case of reception error. The corresponding error flag is set but RXNE is kept 0 preventing from overrun. As a consequence, the DMA request is not asserted, so the erroneous data is not transferred (no DMA request), but next correct received data is transferred. (value: 0)
     *          - B_0x1: DMA is disabled following a reception error. The corresponding error flag is set, as well as RXNE. The DMA request is masked until the error flag is cleared. This means that the software must first disable the DMA request (DMAR = 0) or clear RXNE before clearing the error flag. (value: 1)
     */
        /** @brief DMA is not disabled in case of reception error. The corresponding error flag is set but RXNE is kept 0 preventing from overrun. As a consequence, the DMA request is not asserted, so the erroneous data is not transferred (no DMA request), but next correct received data is transferred. */
    constexpr std::uint32_t LPUART_CR3_DDRE_B_0x0 = 0;
        /** @brief DMA is disabled following a reception error. The corresponding error flag is set, as well as RXNE. The DMA request is masked until the error flag is cleared. This means that the software must first disable the DMA request (DMAR = 0) or clear RXNE before clearing the error flag. */
    constexpr std::uint32_t LPUART_CR3_DDRE_B_0x1 = 1;

    /** @brief Driver enable mode This bit enables the user to activate the external transceiver control, through the DE signal. This bit can only be written when the LPUART is disabled (UE=0). */
    using LPUART_CR3_DEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DE function is disabled. (value: 0)
     *          - B_0x1: DE function is enabled. The DE signal is output on the RTS pin. (value: 1)
     */
        /** @brief DE function is disabled. */
    constexpr std::uint32_t LPUART_CR3_DEM_B_0x0 = 0;
        /** @brief DE function is enabled. The DE signal is output on the RTS pin. */
    constexpr std::uint32_t LPUART_CR3_DEM_B_0x1 = 1;

    /** @brief Driver enable polarity selection This bit can only be written when the LPUART is disabled (UE=0). */
    using LPUART_CR3_DEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DE signal is active high. (value: 0)
     *          - B_0x1: DE signal is active low. (value: 1)
     */
        /** @brief DE signal is active high. */
    constexpr std::uint32_t LPUART_CR3_DEP_B_0x0 = 0;
        /** @brief DE signal is active low. */
    constexpr std::uint32_t LPUART_CR3_DEP_B_0x1 = 1;

    /** @brief Wake-up from low-power mode interrupt flag selection This bitfield specifies the event which activates the WUF (Wake-up from low-power mode flag). This bitfield can only be written when the LPUART is disabled (UE=0). Note: If the USART does not support the wake-up from Stop feature, this bit is reserved and must be kept at reset value. Refer to Section132.3: LPUART implementation on page1914. */
    using LPUART_CR3_WUS0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: WUF active on address match (as defined by ADD[7:0] and ADDM7) (value: 0)
     *          - B_0x1: Reserved. (value: 1)
     */
        /** @brief WUF active on address match (as defined by ADD[7:0] and ADDM7) */
    constexpr std::uint32_t LPUART_CR3_WUS0_B_0x0 = 0;
        /** @brief Reserved. */
    constexpr std::uint32_t LPUART_CR3_WUS0_B_0x1 = 1;

    /** @brief Wake-up from low-power mode interrupt flag selection This bitfield specifies the event which activates the WUF (Wake-up from low-power mode flag). This bitfield can only be written when the LPUART is disabled (UE=0). Note: If the USART does not support the wake-up from Stop feature, this bit is reserved and must be kept at reset value. Refer to Section132.3: LPUART implementation on page1914. */
    using LPUART_CR3_WUS1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: WUF active on address match (as defined by ADD[7:0] and ADDM7) (value: 0)
     *          - B_0x1: Reserved. (value: 1)
     */
        /** @brief WUF active on address match (as defined by ADD[7:0] and ADDM7) */
    constexpr std::uint32_t LPUART_CR3_WUS1_B_0x0 = 0;
        /** @brief Reserved. */
    constexpr std::uint32_t LPUART_CR3_WUS1_B_0x1 = 1;

    /** @brief Wake-up from low-power mode interrupt enable This bit is set and cleared by software. Note: WUFIE must be set before entering in low-power mode. Note: If the USART does not support the wake-up from Stop feature, this bit is reserved and must be kept at reset value. Refer to Section132.3: LPUART implementation on page1914. */
    using LPUART_CR3_WUFIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt inhibited (value: 0)
     *          - B_0x1: USART interrupt generated whenever WUF=1 in the LPUART_ISR register (value: 1)
     */
        /** @brief Interrupt inhibited */
    constexpr std::uint32_t LPUART_CR3_WUFIE_B_0x0 = 0;
        /** @brief USART interrupt generated whenever WUF=1 in the LPUART_ISR register */
    constexpr std::uint32_t LPUART_CR3_WUFIE_B_0x1 = 1;

    /** @brief TXFIFO threshold interrupt enable This bit is set and cleared by software. */
    using LPUART_CR3_TXFTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt is inhibited (value: 0)
     *          - B_0x1: A LPUART interrupt is generated when TXFIFO reaches the threshold programmed in TXFTCFG. (value: 1)
     */
        /** @brief Interrupt is inhibited */
    constexpr std::uint32_t LPUART_CR3_TXFTIE_B_0x0 = 0;
        /** @brief A LPUART interrupt is generated when TXFIFO reaches the threshold programmed in TXFTCFG. */
    constexpr std::uint32_t LPUART_CR3_TXFTIE_B_0x1 = 1;

    /** @brief Receive FIFO threshold configuration Remaining combinations: Reserved. */
    using LPUART_CR3_RXFTCFG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Receive FIFO reaches 1/8 of its depth. (value: 0)
     *          - B_0x1: Receive FIFO reaches 1/4 of its depth. (value: 1)
     *          - B_0x6: Receive FIFO reaches 1/2 of its depth. (value: 6)
     *          - B_0x3: Receive FIFO reaches 3/4 of its depth. (value: 3)
     *          - B_0x4: Receive FIFO reaches 7/8 of its depth. (value: 4)
     *          - B_0x5: Receive FIFO becomes full. (value: 5)
     */
        /** @brief Receive FIFO reaches 1/8 of its depth. */
    constexpr std::uint32_t LPUART_CR3_RXFTCFG_B_0x0 = 0;
        /** @brief Receive FIFO reaches 1/4 of its depth. */
    constexpr std::uint32_t LPUART_CR3_RXFTCFG_B_0x1 = 1;
        /** @brief Receive FIFO reaches 1/2 of its depth. */
    constexpr std::uint32_t LPUART_CR3_RXFTCFG_B_0x6 = 6;
        /** @brief Receive FIFO reaches 3/4 of its depth. */
    constexpr std::uint32_t LPUART_CR3_RXFTCFG_B_0x3 = 3;
        /** @brief Receive FIFO reaches 7/8 of its depth. */
    constexpr std::uint32_t LPUART_CR3_RXFTCFG_B_0x4 = 4;
        /** @brief Receive FIFO becomes full. */
    constexpr std::uint32_t LPUART_CR3_RXFTCFG_B_0x5 = 5;

    /** @brief RXFIFO threshold interrupt enable This bit is set and cleared by software. */
    using LPUART_CR3_RXFTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt is inhibited (value: 0)
     *          - B_0x1: An LPUART interrupt is generated when Receive FIFO reaches the threshold programmed in RXFTCFG. (value: 1)
     */
        /** @brief Interrupt is inhibited */
    constexpr std::uint32_t LPUART_CR3_RXFTIE_B_0x0 = 0;
        /** @brief An LPUART interrupt is generated when Receive FIFO reaches the threshold programmed in RXFTCFG. */
    constexpr std::uint32_t LPUART_CR3_RXFTIE_B_0x1 = 1;

    /** @brief TXFIFO threshold configuration Remaining combinations: Reserved. */
    using LPUART_CR3_TXFTCFG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TXFIFO reaches 1/8 of its depth. (value: 0)
     *          - B_0x1: TXFIFO reaches 1/4 of its depth. (value: 1)
     *          - B_0x6: TXFIFO reaches 1/2 of its depth. (value: 6)
     *          - B_0x3: TXFIFO reaches 3/4 of its depth. (value: 3)
     *          - B_0x4: TXFIFO reaches 7/8 of its depth. (value: 4)
     *          - B_0x5: TXFIFO becomes empty. (value: 5)
     */
        /** @brief TXFIFO reaches 1/8 of its depth. */
    constexpr std::uint32_t LPUART_CR3_TXFTCFG_B_0x0 = 0;
        /** @brief TXFIFO reaches 1/4 of its depth. */
    constexpr std::uint32_t LPUART_CR3_TXFTCFG_B_0x1 = 1;
        /** @brief TXFIFO reaches 1/2 of its depth. */
    constexpr std::uint32_t LPUART_CR3_TXFTCFG_B_0x6 = 6;
        /** @brief TXFIFO reaches 3/4 of its depth. */
    constexpr std::uint32_t LPUART_CR3_TXFTCFG_B_0x3 = 3;
        /** @brief TXFIFO reaches 7/8 of its depth. */
    constexpr std::uint32_t LPUART_CR3_TXFTCFG_B_0x4 = 4;
        /** @brief TXFIFO becomes empty. */
    constexpr std::uint32_t LPUART_CR3_TXFTCFG_B_0x5 = 5;

    /** @brief LPUART baud rate register */
    using LPUART_BRR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPUART baud rate division (LPUARTDIV) */
    using LPUART_BRR_BRR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPUART request register */
    using LPUART_RQR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Send break request Writing 1 to this bit sets the SBKF flag and request to send a BREAK on the line, as soon as the transmit machine is available. Note: If the application needs to send the break character following all previously inserted data, including the ones not yet transmitted, the software must wait for the TXE flag assertion before setting the SBKRQ bit. */
    using LPUART_RQR_SBKRQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Mute mode request Writing 1 to this bit puts the LPUART in Mute mode and resets the RWU flag. */
    using LPUART_RQR_MMRQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive data flush request Writing 1 to this bit clears the RXNE flag. This enables discarding the received data without reading it, and avoid an overrun condition. */
    using LPUART_RQR_RXFRQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit data flush request This bit is used when FIFO mode is enabled. TXFRQ bit is set to flush the whole FIFO. This sets the flag TXFE (TXFIFO empty, bit 23 in the LPUART_ISR register). Note: In FIFO mode, the TXFNF flag is reset during the flush request until TxFIFO is empty in order to ensure that no data are written in the data register. */
    using LPUART_RQR_TXFRQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPUART interrupt and status register */
    using LPUART_ISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Parity error This bit is set by hardware when a parity error occurs in Reception mode. It is cleared by software, writing 1 to the PECF in the LPUART_ICR register. An interrupt is generated if PEIE = 1 in the LPUART_CR1 register. Note: This error is associated with the character in the LPUART_RDR. */
    using LPUART_ISR_PE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No parity error (value: 0)
     *          - B_0x1: Parity error (value: 1)
     */
        /** @brief No parity error */
    constexpr std::uint32_t LPUART_ISR_PE_B_0x0 = 0;
        /** @brief Parity error */
    constexpr std::uint32_t LPUART_ISR_PE_B_0x1 = 1;

    /** @brief Framing error This bit is set by hardware when a de-synchronization, excessive noise or a break character is detected. It is cleared by software, writing 1 to the FECF bit in the LPUART_ICR register. When transmitting data in Smartcard mode, this bit is set when the maximum number of transmit attempts is reached without success (the card NACKs the data frame). An interrupt is generated if EIE1=11 in the LPUART_CR3 register. Note: This error is associated with the character in the LPUART_RDR. */
    using LPUART_ISR_FE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No Framing error is detected (value: 0)
     *          - B_0x1: Framing error or break character is detected (value: 1)
     */
        /** @brief No Framing error is detected */
    constexpr std::uint32_t LPUART_ISR_FE_B_0x0 = 0;
        /** @brief Framing error or break character is detected */
    constexpr std::uint32_t LPUART_ISR_FE_B_0x1 = 1;

    /** @brief Start bit noise detection flag This bit is set by hardware when noise is detected on the start bit of a received frame. It is cleared by software, writing 1 to the NFCF bit in the LPUART_ICR register. Note: This bit does not generate an interrupt as it appears at the same time as the RXFNE bit which itself generates an interrupt. An interrupt is generated when the NE flag is set during multi buffer communication if the EIE bit is set. Note: This error is associated with the character in the LPUART_RDR. */
    using LPUART_ISR_NE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No noise is detected (value: 0)
     *          - B_0x1: Noise is detected (value: 1)
     */
        /** @brief No noise is detected */
    constexpr std::uint32_t LPUART_ISR_NE_B_0x0 = 0;
        /** @brief Noise is detected */
    constexpr std::uint32_t LPUART_ISR_NE_B_0x1 = 1;

    /** @brief Overrun error This bit is set by hardware when the data currently being received in the shift register is ready to be transferred into the LPUART_RDR register while RXFF = 1. It is cleared by a software, writing 1 to the ORECF, in the LPUART_ICR register. An interrupt is generated if RXFNEIE=1 in the LPUART_CR1 register, or EIE = 1 in the LPUART_CR3 register. Note: When this bit is set, the LPUART_RDR register content is not lost but the shift register is overwritten. An interrupt is generated if the ORE flag is set during multi buffer communication if the EIE bit is set. Note: This bit is permanently forced to 0 (no overrun detection) when the bit OVRDIS is set in the LPUART_CR3 register. */
    using LPUART_ISR_ORE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Overrun error is detected (value: 1)
     */
        /** @brief Overrun error is detected */
    constexpr std::uint32_t LPUART_ISR_ORE_B_0x1 = 1;

    /** @brief Idle line detected This bit is set by hardware when an Idle line is detected. An interrupt is generated if IDLEIE=1 in the LPUART_CR1 register. It is cleared by software, writing 1 to the IDLECF in the LPUART_ICR register. Note: The IDLE bit is not set again until the RXFNE bit has been set (i.e. a new idle line occurs). Note: If Mute mode is enabled (MME=1), IDLE is set if the LPUART is not mute (RWU=0), whatever the Mute mode selected by the WAKE bit. If RWU=1, IDLE is not set. */
    using LPUART_ISR_IDLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No Idle line is detected (value: 0)
     *          - B_0x1: Idle line is detected (value: 1)
     */
        /** @brief No Idle line is detected */
    constexpr std::uint32_t LPUART_ISR_IDLE_B_0x0 = 0;
        /** @brief Idle line is detected */
    constexpr std::uint32_t LPUART_ISR_IDLE_B_0x1 = 1;

    /** @brief RXFIFO not empty RXFNE bit is set by hardware when the RXFIFO is not empty, and so data can be read from the LPUART_RDR register. Every read of the LPUART_RDR frees a location in the RXFIFO. It is cleared when the RXFIFO is empty. The RXFNE flag can also be cleared by writing 1 to the RXFRQ in the LPUART_RQR register. An interrupt is generated if RXFNEIE=1 in the LPUART_CR1 register. */
    using LPUART_ISR_RXFNE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Data is not received (value: 0)
     *          - B_0x1: Received data is ready to be read. (value: 1)
     */
        /** @brief Data is not received */
    constexpr std::uint32_t LPUART_ISR_RXFNE_B_0x0 = 0;
        /** @brief Received data is ready to be read. */
    constexpr std::uint32_t LPUART_ISR_RXFNE_B_0x1 = 1;

    /** @brief Transmission complete This bit indicates that the last data written in the LPUART_TDR has been transmitted out of the shift register. The TC flag behaves as follows: When TDN = 0, the TC flag is set when the transmission of a frame containing data is complete and when TXFE is set. When TDN is equal to the number of data in the TXFIFO, the TC flag is set when TXFIFO is empty and TDN is reached. When TDN is greater than the number of data in the TXFIFO, TC remains cleared until the TXFIFO is filled again to reach the programmed number of data to be transferred. When TDN is less than the number of data in the TXFIFO, TC is set when TDN is reached even if the TXFIFO is not empty. An interrupt is generated if TCIE=1 in the LPUART_CR1 register. TC bit is cleared by software by writing 1 to the TCCF in the LPUART_ICR register or by writing to the LPUART_TDR register. */
    using LPUART_ISR_TC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TXFIFO not full TXFNF is set by hardware when TXFIFO is not full, and so data can be written in the LPUART_TDR. Every write in the LPUART_TDR places the data in the TXFIFO. This flag remains set until the TXFIFO is full. When the TXFIFO is full, this flag is cleared indicating that data can not be written into the LPUART_TDR. The TXFNF is kept reset during the flush request until TXFIFO is empty. After sending the flush request (by setting TXFRQ bit), the flag TXFNF must be checked prior to writing in TXFIFO (TXFNF and TXFE are set at the same time). An interrupt is generated if the TXFNFIE bit =1 in the LPUART_CR1 register. Note: This bit is used during single buffer transmission. */
    using LPUART_ISR_TXFNF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Data register is full/Transmit FIFO is full. (value: 0)
     *          - B_0x1: Data register/Transmit FIFO is not full. (value: 1)
     */
        /** @brief Data register is full/Transmit FIFO is full. */
    constexpr std::uint32_t LPUART_ISR_TXFNF_B_0x0 = 0;
        /** @brief Data register/Transmit FIFO is not full. */
    constexpr std::uint32_t LPUART_ISR_TXFNF_B_0x1 = 1;

    /** @brief CTS interrupt flag This bit is set by hardware when the CTS input toggles, if the CTSE bit is set. It is cleared by software, by writing 1 to the CTSCF bit in the LPUART_ICR register. An interrupt is generated if CTSIE=1 in the LPUART_CR3 register. Note: If the hardware flow control feature is not supported, this bit is reserved and kept at reset value. */
    using LPUART_ISR_CTSIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No change occurred on the CTS status line (value: 0)
     *          - B_0x1: A change occurred on the CTS status line (value: 1)
     */
        /** @brief No change occurred on the CTS status line */
    constexpr std::uint32_t LPUART_ISR_CTSIF_B_0x0 = 0;
        /** @brief A change occurred on the CTS status line */
    constexpr std::uint32_t LPUART_ISR_CTSIF_B_0x1 = 1;

    /** @brief CTS flag This bit is set/reset by hardware. It is an inverted copy of the status of the CTS input pin. Note: If the hardware flow control feature is not supported, this bit is reserved and kept at reset value. */
    using LPUART_ISR_CTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CTS line set (value: 0)
     *          - B_0x1: CTS line reset (value: 1)
     */
        /** @brief CTS line set */
    constexpr std::uint32_t LPUART_ISR_CTS_B_0x0 = 0;
        /** @brief CTS line reset */
    constexpr std::uint32_t LPUART_ISR_CTS_B_0x1 = 1;

    /** @brief Busy flag This bit is set and reset by hardware. It is active when a communication is ongoing on the RX line (successful start bit detected). It is reset at the end of the reception (successful or not). */
    using LPUART_ISR_BUSY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPUART is idle (no reception) (value: 0)
     *          - B_0x1: Reception on going (value: 1)
     */
        /** @brief LPUART is idle (no reception) */
    constexpr std::uint32_t LPUART_ISR_BUSY_B_0x0 = 0;
        /** @brief Reception on going */
    constexpr std::uint32_t LPUART_ISR_BUSY_B_0x1 = 1;

    /** @brief Character match flag This bit is set by hardware, when a the character defined by ADD[7:0] is received. It is cleared by software, writing 1 to the CMCF in the LPUART_ICR register. An interrupt is generated if CMIE=1in the LPUART_CR1 register. */
    using LPUART_ISR_CMF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No Character match detected (value: 0)
     *          - B_0x1: Character match detected (value: 1)
     */
        /** @brief No Character match detected */
    constexpr std::uint32_t LPUART_ISR_CMF_B_0x0 = 0;
        /** @brief Character match detected */
    constexpr std::uint32_t LPUART_ISR_CMF_B_0x1 = 1;

    /** @brief Send break flag This bit indicates that a send break character was requested. It is set by software, by writing 1 to the SBKRQ bit in the LPUART_CR3 register. It is automatically reset by hardware during the stop bit of break transmission. */
    using LPUART_ISR_SBKF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No break character transmitted (value: 0)
     *          - B_0x1: Break character transmitted (value: 1)
     */
        /** @brief No break character transmitted */
    constexpr std::uint32_t LPUART_ISR_SBKF_B_0x0 = 0;
        /** @brief Break character transmitted */
    constexpr std::uint32_t LPUART_ISR_SBKF_B_0x1 = 1;

    /** @brief Receiver wake-up from Mute mode This bit indicates if the LPUART is in Mute mode. It is cleared/set by hardware when a wake-up/mute sequence is recognized. The Mute mode control sequence (address or IDLE) is selected by the WAKE bit in the LPUART_CR1 register. When wake-up on IDLE mode is selected, this bit can only be set by software, writing 1 to the MMRQ bit in the LPUART_RQR register. Note: If the LPUART does not support the wake-up from Stop feature, this bit is reserved and kept at reset value. */
    using LPUART_ISR_RWU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Receiver in Active mode (value: 0)
     *          - B_0x1: Receiver in Mute mode (value: 1)
     */
        /** @brief Receiver in Active mode */
    constexpr std::uint32_t LPUART_ISR_RWU_B_0x0 = 0;
        /** @brief Receiver in Mute mode */
    constexpr std::uint32_t LPUART_ISR_RWU_B_0x1 = 1;

    /** @brief Wake-up from low-power mode flag This bit is set by hardware, when a wake-up event is detected. The event is defined by the WUS bitfield. It is cleared by software, writing a 1 to the WUCF in the LPUART_ICR register. An interrupt is generated if WUFIE=1 in the LPUART_CR3 register. Note: When UESM is cleared, WUF flag is also cleared. Note: If the USART does not support the wake-up from Stop feature, this bit is reserved and kept at reset value. Refer to Section132.3: LPUART implementation on page1914. */
    using LPUART_ISR_WUF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit enable acknowledge flag This bit is set/reset by hardware, when the Transmit Enable value is taken into account by the LPUART. It can be used when an idle frame request is generated by writing TE=0, followed by TE=1 in the LPUART_CR1 register, in order to respect the TE=0 minimum period. */
    using LPUART_ISR_TEACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive enable acknowledge flag This bit is set/reset by hardware, when the Receive Enable value is taken into account by the LPUART. It can be used to verify that the LPUART is ready for reception before entering low-power mode. Note: If the LPUART does not support the wake-up from Stop feature, this bit is reserved and kept at reset value. */
    using LPUART_ISR_REACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TXFIFO Empty This bit is set by hardware when TXFIFO is Empty. When the TXFIFO contains at least one data, this flag is cleared. The TXFE flag can also be set by writing 1 to the bit TXFRQ (bit 4) in the LPUART_RQR register. An interrupt is generated if the TXFEIE bit =1 (bit 30) in the LPUART_CR1 register. */
    using LPUART_ISR_TXFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TXFIFO is not empty. (value: 0)
     *          - B_0x1: TXFIFO is empty. (value: 1)
     */
        /** @brief TXFIFO is not empty. */
    constexpr std::uint32_t LPUART_ISR_TXFE_B_0x0 = 0;
        /** @brief TXFIFO is empty. */
    constexpr std::uint32_t LPUART_ISR_TXFE_B_0x1 = 1;

    /** @brief RXFIFO Full This bit is set by hardware when the number of received data corresponds to RXFIFO1size1+11 (RXFIFO full + 1 data in the LPUART_RDR register. An interrupt is generated if the RXFFIE bit =1 in the LPUART_CR1 register. */
    using LPUART_ISR_RXFF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RXFIFO is not Full. (value: 0)
     *          - B_0x1: RXFIFO is Full. (value: 1)
     */
        /** @brief RXFIFO is not Full. */
    constexpr std::uint32_t LPUART_ISR_RXFF_B_0x0 = 0;
        /** @brief RXFIFO is Full. */
    constexpr std::uint32_t LPUART_ISR_RXFF_B_0x1 = 1;

    /** @brief RXFIFO threshold flag This bit is set by hardware when the RXFIFO reaches the threshold programmed in RXFTCFG in LPUART_CR3 register i.e. the Receive FIFO contains RXFTCFG data. An interrupt is generated if the RXFTIE bit =1 (bit 27) in the LPUART_CR3 register. */
    using LPUART_ISR_RXFT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Receive FIFO does not reach the programmed threshold. (value: 0)
     *          - B_0x1: Receive FIFO reached the programmed threshold. (value: 1)
     */
        /** @brief Receive FIFO does not reach the programmed threshold. */
    constexpr std::uint32_t LPUART_ISR_RXFT_B_0x0 = 0;
        /** @brief Receive FIFO reached the programmed threshold. */
    constexpr std::uint32_t LPUART_ISR_RXFT_B_0x1 = 1;

    /** @brief TXFIFO threshold flag This bit is set by hardware when the TXFIFO reaches the threshold programmed in TXFTCFG in LPUART_CR3 register i.e. the TXFIFO contains TXFTCFG empty locations. An interrupt is generated if the TXFTIE bit =1 (bit 31) in the LPUART_CR3 register. */
    using LPUART_ISR_TXFT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TXFIFO does not reach the programmed threshold. (value: 0)
     *          - B_0x1: TXFIFO reached the programmed threshold. (value: 1)
     */
        /** @brief TXFIFO does not reach the programmed threshold. */
    constexpr std::uint32_t LPUART_ISR_TXFT_B_0x0 = 0;
        /** @brief TXFIFO reached the programmed threshold. */
    constexpr std::uint32_t LPUART_ISR_TXFT_B_0x1 = 1;

    /** @brief LPUART interrupt and status register */
    using LPUART_ISR_ALTERNATE = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Parity error This bit is set by hardware when a parity error occurs in Reception mode. It is cleared by software, writing 1 to the PECF in the LPUART_ICR register. An interrupt is generated if PEIE = 1 in the LPUART_CR1 register. Note: In FIFO mode, this error is associated with the character in the LPUART_RDR. */
    using LPUART_ISR_ALTERNATE_PE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No parity error (value: 0)
     *          - B_0x1: Parity error (value: 1)
     */
        /** @brief No parity error */
    constexpr std::uint32_t LPUART_ISR_ALTERNATE_PE_B_0x0 = 0;
        /** @brief Parity error */
    constexpr std::uint32_t LPUART_ISR_ALTERNATE_PE_B_0x1 = 1;

    /** @brief Framing error This bit is set by hardware when a de-synchronization, excessive noise or a break character is detected. It is cleared by software, writing 1 to the FECF bit in the LPUART_ICR register. When transmitting data in Smartcard mode, this bit is set when the maximum number of transmit attempts is reached without success (the card NACKs the data frame). An interrupt is generated if EIE1=11 in the LPUART_CR3 register. Note: In FIFO mode, this error is associated with the character in the LPUART_RDR. */
    using LPUART_ISR_ALTERNATE_FE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No Framing error is detected (value: 0)
     *          - B_0x1: Framing error or break character is detected (value: 1)
     */
        /** @brief No Framing error is detected */
    constexpr std::uint32_t LPUART_ISR_ALTERNATE_FE_B_0x0 = 0;
        /** @brief Framing error or break character is detected */
    constexpr std::uint32_t LPUART_ISR_ALTERNATE_FE_B_0x1 = 1;

    /** @brief Start bit noise detection flag This bit is set by hardware when noise is detected on the start bit of a received frame. It is cleared by software, writing 1 to the NFCF bit in the LPUART_ICR register. Note: This bit does not generate an interrupt as it appears at the same time as the RXNE/RXFNE bit which itself generates an interrupt. An interrupt is generated when the NE flag is set during multi buffer communication if the EIE bit is set. Note: In FIFO mode, this error is associated with the character in the LPUART_RDR. */
    using LPUART_ISR_ALTERNATE_NE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No noise is detected (value: 0)
     *          - B_0x1: Noise is detected (value: 1)
     */
        /** @brief No noise is detected */
    constexpr std::uint32_t LPUART_ISR_ALTERNATE_NE_B_0x0 = 0;
        /** @brief Noise is detected */
    constexpr std::uint32_t LPUART_ISR_ALTERNATE_NE_B_0x1 = 1;

    /** @brief Overrun error This bit is set by hardware when the data currently being received in the shift register is ready to be transferred into the LPUART_RDR register while RXNE=1 (RXFF = 1 in case FIFO mode is enabled). It is cleared by a software, writing 1 to the ORECF, in the LPUART_ICR register. An interrupt is generated if RXNEIE=1 in the LPUART_CR1 register, or EIE = 1 in the LPUART_CR3 register. Note: When this bit is set, the LPUART_RDR register content is not lost but the shift register is overwritten. An interrupt is generated if the ORE flag is set during multi buffer communication if the EIE bit is set. Note: This bit is permanently forced to 0 (no overrun detection) when the bit OVRDIS is set in the LPUART_CR3 register. */
    using LPUART_ISR_ALTERNATE_ORE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Overrun error is detected (value: 1)
     */
        /** @brief Overrun error is detected */
    constexpr std::uint32_t LPUART_ISR_ALTERNATE_ORE_B_0x1 = 1;

    /** @brief Idle line detected This bit is set by hardware when an Idle Line is detected. An interrupt is generated if IDLEIE=1 in the LPUART_CR1 register. It is cleared by software, writing 1 to the IDLECF in the LPUART_ICR register. Note: The IDLE bit is not set again until the RXNE bit has been set (i.e. a new idle line occurs). Note: If Mute mode is enabled (MME=1), IDLE is set if the LPUART is not mute (RWU=0), whatever the Mute mode selected by the WAKE bit. If RWU=1, IDLE is not set. */
    using LPUART_ISR_ALTERNATE_IDLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No Idle line is detected (value: 0)
     *          - B_0x1: Idle line is detected (value: 1)
     */
        /** @brief No Idle line is detected */
    constexpr std::uint32_t LPUART_ISR_ALTERNATE_IDLE_B_0x0 = 0;
        /** @brief Idle line is detected */
    constexpr std::uint32_t LPUART_ISR_ALTERNATE_IDLE_B_0x1 = 1;

    /** @brief Read data register not empty RXNE bit is set by hardware when the content of the LPUART_RDR shift register has been transferred to the LPUART_RDR register. It is cleared by a read to the LPUART_RDR register. The RXNE flag can also be cleared by writing 1 to the RXFRQ in the LPUART_RQR register. The RXFNE flag can also be cleared by writing 1 to the RXFRQ in the LPUART_RQR register. An interrupt is generated if RXNEIE=1 in the LPUART_CR1 register. */
    using LPUART_ISR_ALTERNATE_RXNE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Data is not received (value: 0)
     *          - B_0x1: Received data is ready to be read. (value: 1)
     */
        /** @brief Data is not received */
    constexpr std::uint32_t LPUART_ISR_ALTERNATE_RXNE_B_0x0 = 0;
        /** @brief Received data is ready to be read. */
    constexpr std::uint32_t LPUART_ISR_ALTERNATE_RXNE_B_0x1 = 1;

    /** @brief Transmission complete This bit indicates that the last data written in the USART_TDR has been transmitted out of the shift register. The TC flag is set when the transmission of a frame containing data is complete and when TXE is set. An interrupt is generated if TCIE=1 in the LPUART_CR1 register. TC bit is cleared by software by writing 1 to the TCCF in the USART_ICR register or by writing to the USART_TDR register. */
    using LPUART_ISR_ALTERNATE_TC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit data register empty TXE is set by hardware when the content of the LPUART_TDR register has been transferred into the shift register. It is cleared by a write to the LPUART_TDR register. An interrupt is generated if the TXEIE bit =1 in the LPUART_CR1 register. Note: This bit is used during single buffer transmission. */
    using LPUART_ISR_ALTERNATE_TXE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Data register is full/Transmit FIFO is full. (value: 0)
     *          - B_0x1: Data register/Transmit FIFO is not full. (value: 1)
     */
        /** @brief Data register is full/Transmit FIFO is full. */
    constexpr std::uint32_t LPUART_ISR_ALTERNATE_TXE_B_0x0 = 0;
        /** @brief Data register/Transmit FIFO is not full. */
    constexpr std::uint32_t LPUART_ISR_ALTERNATE_TXE_B_0x1 = 1;

    /** @brief CTS interrupt flag This bit is set by hardware when the CTS input toggles, if the CTSE bit is set. It is cleared by software, by writing 1 to the CTSCF bit in the LPUART_ICR register. An interrupt is generated if CTSIE=1 in the LPUART_CR3 register. Note: If the hardware flow control feature is not supported, this bit is reserved and kept at reset value. */
    using LPUART_ISR_ALTERNATE_CTSIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No change occurred on the CTS status line (value: 0)
     *          - B_0x1: A change occurred on the CTS status line (value: 1)
     */
        /** @brief No change occurred on the CTS status line */
    constexpr std::uint32_t LPUART_ISR_ALTERNATE_CTSIF_B_0x0 = 0;
        /** @brief A change occurred on the CTS status line */
    constexpr std::uint32_t LPUART_ISR_ALTERNATE_CTSIF_B_0x1 = 1;

    /** @brief CTS flag This bit is set/reset by hardware. It is an inverted copy of the status of the CTS input pin. Note: If the hardware flow control feature is not supported, this bit is reserved and kept at reset value. */
    using LPUART_ISR_ALTERNATE_CTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CTS line set (value: 0)
     *          - B_0x1: CTS line reset (value: 1)
     */
        /** @brief CTS line set */
    constexpr std::uint32_t LPUART_ISR_ALTERNATE_CTS_B_0x0 = 0;
        /** @brief CTS line reset */
    constexpr std::uint32_t LPUART_ISR_ALTERNATE_CTS_B_0x1 = 1;

    /** @brief Busy flag This bit is set and reset by hardware. It is active when a communication is ongoing on the RX line (successful start bit detected). It is reset at the end of the reception (successful or not). */
    using LPUART_ISR_ALTERNATE_BUSY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LPUART is idle (no reception) (value: 0)
     *          - B_0x1: Reception on going (value: 1)
     */
        /** @brief LPUART is idle (no reception) */
    constexpr std::uint32_t LPUART_ISR_ALTERNATE_BUSY_B_0x0 = 0;
        /** @brief Reception on going */
    constexpr std::uint32_t LPUART_ISR_ALTERNATE_BUSY_B_0x1 = 1;

    /** @brief Character match flag This bit is set by hardware, when a the character defined by ADD[7:0] is received. It is cleared by software, writing 1 to the CMCF in the LPUART_ICR register. An interrupt is generated if CMIE=1in the LPUART_CR1 register. */
    using LPUART_ISR_ALTERNATE_CMF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No Character match detected (value: 0)
     *          - B_0x1: Character match detected (value: 1)
     */
        /** @brief No Character match detected */
    constexpr std::uint32_t LPUART_ISR_ALTERNATE_CMF_B_0x0 = 0;
        /** @brief Character match detected */
    constexpr std::uint32_t LPUART_ISR_ALTERNATE_CMF_B_0x1 = 1;

    /** @brief Send break flag This bit indicates that a send break character was requested. It is set by software, by writing 1 to the SBKRQ bit in the LPUART_CR3 register. It is automatically reset by hardware during the stop bit of break transmission. */
    using LPUART_ISR_ALTERNATE_SBKF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No break character transmitted (value: 0)
     *          - B_0x1: Break character transmitted (value: 1)
     */
        /** @brief No break character transmitted */
    constexpr std::uint32_t LPUART_ISR_ALTERNATE_SBKF_B_0x0 = 0;
        /** @brief Break character transmitted */
    constexpr std::uint32_t LPUART_ISR_ALTERNATE_SBKF_B_0x1 = 1;

    /** @brief Receiver wake-up from Mute mode This bit indicates if the LPUART is in Mute mode. It is cleared/set by hardware when a wake-up/mute sequence is recognized. The Mute mode control sequence (address or IDLE) is selected by the WAKE bit in the LPUART_CR1 register. When wake-up on IDLE mode is selected, this bit can only be set by software, writing 1 to the MMRQ bit in the LPUART_RQR register. Note: If the LPUART does not support the wake-up from Stop feature, this bit is reserved and kept at reset value. */
    using LPUART_ISR_ALTERNATE_RWU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Receiver in Active mode (value: 0)
     *          - B_0x1: Receiver in Mute mode (value: 1)
     */
        /** @brief Receiver in Active mode */
    constexpr std::uint32_t LPUART_ISR_ALTERNATE_RWU_B_0x0 = 0;
        /** @brief Receiver in Mute mode */
    constexpr std::uint32_t LPUART_ISR_ALTERNATE_RWU_B_0x1 = 1;

    /** @brief Wake-up from low-power mode flag This bit is set by hardware, when a wake-up event is detected. The event is defined by the WUS bitfield. It is cleared by software, writing a 1 to the WUCF in the LPUART_ICR register. An interrupt is generated if WUFIE=1 in the LPUART_CR3 register. Note: When UESM is cleared, WUF flag is also cleared. Note: If the USART does not support the wake-up from Stop feature, this bit is reserved and kept at reset value. Refer to Section132.3: LPUART implementation on page1914. */
    using LPUART_ISR_ALTERNATE_WUF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit enable acknowledge flag This bit is set/reset by hardware, when the Transmit Enable value is taken into account by the LPUART. It can be used when an idle frame request is generated by writing TE=0, followed by TE=1 in the LPUART_CR1 register, in order to respect the TE=0 minimum period. */
    using LPUART_ISR_ALTERNATE_TEACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive enable acknowledge flag This bit is set/reset by hardware, when the Receive Enable value is taken into account by the LPUART. It can be used to verify that the LPUART is ready for reception before entering low-power mode. Note: If the LPUART does not support the wake-up from Stop feature, this bit is reserved and kept at reset value. */
    using LPUART_ISR_ALTERNATE_REACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPUART interrupt flag clear register */
    using LPUART_ICR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Parity error clear flag Writing 1 to this bit clears the PE flag in the LPUART_ISR register. */
    using LPUART_ICR_PECF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Framing error clear flag Writing 1 to this bit clears the FE flag in the LPUART_ISR register. */
    using LPUART_ICR_FECF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Noise detected clear flag Writing 1 to this bit clears the NE flag in the LPUART_ISR register. */
    using LPUART_ICR_NECF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Overrun error clear flag Writing 1 to this bit clears the ORE flag in the LPUART_ISR register. */
    using LPUART_ICR_ORECF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Idle line detected clear flag Writing 1 to this bit clears the IDLE flag in the LPUART_ISR register. */
    using LPUART_ICR_IDLECF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission complete clear flag Writing 1 to this bit clears the TC flag in the LPUART_ISR register. */
    using LPUART_ICR_TCCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CTS clear flag Writing 1 to this bit clears the CTSIF flag in the LPUART_ISR register. */
    using LPUART_ICR_CTSCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Character match clear flag Writing 1 to this bit clears the CMF flag in the LPUART_ISR register. */
    using LPUART_ICR_CMCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up from low-power mode clear flag Writing 1 to this bit clears the WUF flag in the USART_ISR register. Note: If the USART does not support the wake-up from Stop feature, this bit is reserved and must be kept at reset value. Refer to Section132.3: LPUART implementation on page1914. */
    using LPUART_ICR_WUCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPUART receive data register */
    using LPUART_RDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive data value Contains the received data character. The RDR register provides the parallel interface between the input shift register and the internal bus (see Figure1254). When receiving with the parity enabled, the value read in the MSB bit is the received parity bit. */
    using LPUART_RDR_RDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPUART transmit data register */
    using LPUART_TDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit data value Contains the data character to be transmitted. The TDR register provides the parallel interface between the internal bus and the output shift register (see Figure1254). When transmitting with the parity enabled (PCE bit set to 1 in the LPUART_CR1 register), the value written in the MSB (bit 7 or bit 8 depending on the data length) has no effect because it is replaced by the parity. Note: This register must be written only when TXE/TXFNF=1. */
    using LPUART_TDR_TDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LPUART prescaler register */
    using LPUART_PRESC = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clock prescaler The LPUART input clock can be divided by a prescaler: Remaining combinations: Reserved. Note: When PRESCALER is programmed with a value different of the allowed ones, programmed prescaler value is equal to 1011 i.e. input clock divided by 256. */
    using LPUART_PRESC_PRESCALER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
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
    constexpr std::uint32_t LPUART_PRESC_PRESCALER_B_0x0 = 0;
        /** @brief input clock divided by 2 */
    constexpr std::uint32_t LPUART_PRESC_PRESCALER_B_0x1 = 1;
        /** @brief input clock divided by 4 */
    constexpr std::uint32_t LPUART_PRESC_PRESCALER_B_0x2 = 2;
        /** @brief input clock divided by 6 */
    constexpr std::uint32_t LPUART_PRESC_PRESCALER_B_0x3 = 3;
        /** @brief input clock divided by 8 */
    constexpr std::uint32_t LPUART_PRESC_PRESCALER_B_0x4 = 4;
        /** @brief input clock divided by 10 */
    constexpr std::uint32_t LPUART_PRESC_PRESCALER_B_0x5 = 5;
        /** @brief input clock divided by 12 */
    constexpr std::uint32_t LPUART_PRESC_PRESCALER_B_0x6 = 6;
        /** @brief input clock divided by 16 */
    constexpr std::uint32_t LPUART_PRESC_PRESCALER_B_0x7 = 7;
        /** @brief input clock divided by 32 */
    constexpr std::uint32_t LPUART_PRESC_PRESCALER_B_0x8 = 8;
        /** @brief input clock divided by 64 */
    constexpr std::uint32_t LPUART_PRESC_PRESCALER_B_0x9 = 9;
        /** @brief input clock divided by 128 */
    constexpr std::uint32_t LPUART_PRESC_PRESCALER_B_0xA = 10;
        /** @brief input clock divided by 256 */
    constexpr std::uint32_t LPUART_PRESC_PRESCALER_B_0xB = 11;

}

#endif
