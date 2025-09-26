/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32H523_USART3_S_HPP
#define EMBEDDED_PP_STM32H523_USART3_S_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief USART address block description */
namespace STM32H523::USART3_S {

    /** @brief USART control register 1 */
    using USART_CR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USART enable */
    using USART_CR1_UE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART prescaler and outputs disabled, low-power mode (value: 0)
     *          - B_0x1: USART enabled (value: 1)
     */
        /** @brief USART prescaler and outputs disabled, low-power mode */
    constexpr std::uint32_t USART_CR1_UE_B_0x0 = 0;
        /** @brief USART enabled */
    constexpr std::uint32_t USART_CR1_UE_B_0x1 = 1;

    /** @brief USART enable in low-power mode */
    using USART_CR1_UESM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART not able to wake up the MCU from low-power mode. (value: 0)
     *          - B_0x1: USART able to wake up the MCU from low-power mode. (value: 1)
     */
        /** @brief USART not able to wake up the MCU from low-power mode. */
    constexpr std::uint32_t USART_CR1_UESM_B_0x0 = 0;
        /** @brief USART able to wake up the MCU from low-power mode. */
    constexpr std::uint32_t USART_CR1_UESM_B_0x1 = 1;

    /** @brief Receiver enable */
    using USART_CR1_RE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Receiver is disabled (value: 0)
     *          - B_0x1: Receiver is enabled and begins searching for a start bit (value: 1)
     */
        /** @brief Receiver is disabled */
    constexpr std::uint32_t USART_CR1_RE_B_0x0 = 0;
        /** @brief Receiver is enabled and begins searching for a start bit */
    constexpr std::uint32_t USART_CR1_RE_B_0x1 = 1;

    /** @brief Transmitter enable */
    using USART_CR1_TE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Transmitter is disabled (value: 0)
     *          - B_0x1: Transmitter is enabled (value: 1)
     */
        /** @brief Transmitter is disabled */
    constexpr std::uint32_t USART_CR1_TE_B_0x0 = 0;
        /** @brief Transmitter is enabled */
    constexpr std::uint32_t USART_CR1_TE_B_0x1 = 1;

    /** @brief IDLE interrupt enable */
    using USART_CR1_IDLEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt inhibited (value: 0)
     *          - B_0x1: USART interrupt generated whenever IDLE = 1 in the USART_ISR register (value: 1)
     */
        /** @brief Interrupt inhibited */
    constexpr std::uint32_t USART_CR1_IDLEIE_B_0x0 = 0;
        /** @brief USART interrupt generated whenever IDLE = 1 in the USART_ISR register */
    constexpr std::uint32_t USART_CR1_IDLEIE_B_0x1 = 1;

    /** @brief RXFIFO not empty interrupt enable */
    using USART_CR1_RXFNEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt inhibited (value: 0)
     *          - B_0x1: USART interrupt generated whenever ORE=1 or RXFNE=1 in the USART_ISR register (value: 1)
     */
        /** @brief Interrupt inhibited */
    constexpr std::uint32_t USART_CR1_RXFNEIE_B_0x0 = 0;
        /** @brief USART interrupt generated whenever ORE=1 or RXFNE=1 in the USART_ISR register */
    constexpr std::uint32_t USART_CR1_RXFNEIE_B_0x1 = 1;

    /** @brief Transmission complete interrupt enable */
    using USART_CR1_TCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt inhibited (value: 0)
     *          - B_0x1: USART interrupt generated whenever TC=1 in the USART_ISR register (value: 1)
     */
        /** @brief Interrupt inhibited */
    constexpr std::uint32_t USART_CR1_TCIE_B_0x0 = 0;
        /** @brief USART interrupt generated whenever TC=1 in the USART_ISR register */
    constexpr std::uint32_t USART_CR1_TCIE_B_0x1 = 1;

    /** @brief TXFIFO not full interrupt enable */
    using USART_CR1_TXFNFIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt inhibited (value: 0)
     *          - B_0x1: USART interrupt generated whenever TXFNF =1 in the USART_ISR register (value: 1)
     */
        /** @brief Interrupt inhibited */
    constexpr std::uint32_t USART_CR1_TXFNFIE_B_0x0 = 0;
        /** @brief USART interrupt generated whenever TXFNF =1 in the USART_ISR register */
    constexpr std::uint32_t USART_CR1_TXFNFIE_B_0x1 = 1;

    /** @brief PE interrupt enable */
    using USART_CR1_PEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt inhibited (value: 0)
     *          - B_0x1: USART interrupt generated whenever PE=1 in the USART_ISR register (value: 1)
     */
        /** @brief Interrupt inhibited */
    constexpr std::uint32_t USART_CR1_PEIE_B_0x0 = 0;
        /** @brief USART interrupt generated whenever PE=1 in the USART_ISR register */
    constexpr std::uint32_t USART_CR1_PEIE_B_0x1 = 1;

    /** @brief Parity selection */
    using USART_CR1_PS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Even parity (value: 0)
     *          - B_0x1: Odd parity (value: 1)
     */
        /** @brief Even parity */
    constexpr std::uint32_t USART_CR1_PS_B_0x0 = 0;
        /** @brief Odd parity */
    constexpr std::uint32_t USART_CR1_PS_B_0x1 = 1;

    /** @brief Parity control enable */
    using USART_CR1_PCE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Parity control disabled (value: 0)
     *          - B_0x1: Parity control enabled (value: 1)
     */
        /** @brief Parity control disabled */
    constexpr std::uint32_t USART_CR1_PCE_B_0x0 = 0;
        /** @brief Parity control enabled */
    constexpr std::uint32_t USART_CR1_PCE_B_0x1 = 1;

    /** @brief Receiver wake-up method */
    using USART_CR1_WAKE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Idle line (value: 0)
     *          - B_0x1: Address mark (value: 1)
     */
        /** @brief Idle line */
    constexpr std::uint32_t USART_CR1_WAKE_B_0x0 = 0;
        /** @brief Address mark */
    constexpr std::uint32_t USART_CR1_WAKE_B_0x1 = 1;

    /** @brief Word length */
    using USART_CR1_M0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Mute mode enable */
    using USART_CR1_MME = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Receiver in active mode permanently (value: 0)
     *          - B_0x1: Receiver can switch between mute mode and active mode. (value: 1)
     */
        /** @brief Receiver in active mode permanently */
    constexpr std::uint32_t USART_CR1_MME_B_0x0 = 0;
        /** @brief Receiver can switch between mute mode and active mode. */
    constexpr std::uint32_t USART_CR1_MME_B_0x1 = 1;

    /** @brief Character match interrupt enable */
    using USART_CR1_CMIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt inhibited (value: 0)
     *          - B_0x1: USART interrupt generated when the CMF bit is set in the USART_ISR register. (value: 1)
     */
        /** @brief Interrupt inhibited */
    constexpr std::uint32_t USART_CR1_CMIE_B_0x0 = 0;
        /** @brief USART interrupt generated when the CMF bit is set in the USART_ISR register. */
    constexpr std::uint32_t USART_CR1_CMIE_B_0x1 = 1;

    /** @brief Oversampling mode */
    using USART_CR1_OVER8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Oversampling by 16 (value: 0)
     *          - B_0x1: Oversampling by 8 (value: 1)
     */
        /** @brief Oversampling by 16 */
    constexpr std::uint32_t USART_CR1_OVER8_B_0x0 = 0;
        /** @brief Oversampling by 8 */
    constexpr std::uint32_t USART_CR1_OVER8_B_0x1 = 1;

    /** @brief Driver Enable deassertion time */
    using USART_CR1_DEDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Driver Enable assertion time */
    using USART_CR1_DEAT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receiver timeout interrupt enable */
    using USART_CR1_RTOIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt inhibited (value: 0)
     *          - B_0x1: USART interrupt generated when the RTOF bit is set in the USART_ISR register. (value: 1)
     */
        /** @brief Interrupt inhibited */
    constexpr std::uint32_t USART_CR1_RTOIE_B_0x0 = 0;
        /** @brief USART interrupt generated when the RTOF bit is set in the USART_ISR register. */
    constexpr std::uint32_t USART_CR1_RTOIE_B_0x1 = 1;

    /** @brief End of block interrupt enable */
    using USART_CR1_EOBIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt inhibited (value: 0)
     *          - B_0x1: USART interrupt generated when the EOBF flag is set in the USART_ISR register (value: 1)
     */
        /** @brief Interrupt inhibited */
    constexpr std::uint32_t USART_CR1_EOBIE_B_0x0 = 0;
        /** @brief USART interrupt generated when the EOBF flag is set in the USART_ISR register */
    constexpr std::uint32_t USART_CR1_EOBIE_B_0x1 = 1;

    /** @brief Word length */
    using USART_CR1_M1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FIFO mode enable */
    using USART_CR1_FIFOEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FIFO mode is disabled. (value: 0)
     *          - B_0x1: FIFO mode is enabled. (value: 1)
     */
        /** @brief FIFO mode is disabled. */
    constexpr std::uint32_t USART_CR1_FIFOEN_B_0x0 = 0;
        /** @brief FIFO mode is enabled. */
    constexpr std::uint32_t USART_CR1_FIFOEN_B_0x1 = 1;

    /** @brief TXFIFO empty interrupt enable */
    using USART_CR1_TXFEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt inhibited (value: 0)
     *          - B_0x1: USART interrupt generated when TXFE=1 in the USART_ISR register (value: 1)
     */
        /** @brief Interrupt inhibited */
    constexpr std::uint32_t USART_CR1_TXFEIE_B_0x0 = 0;
        /** @brief USART interrupt generated when TXFE=1 in the USART_ISR register */
    constexpr std::uint32_t USART_CR1_TXFEIE_B_0x1 = 1;

    /** @brief RXFIFO Full interrupt enable */
    using USART_CR1_RXFFIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt inhibited (value: 0)
     *          - B_0x1: USART interrupt generated when RXFF=1 in the USART_ISR register (value: 1)
     */
        /** @brief Interrupt inhibited */
    constexpr std::uint32_t USART_CR1_RXFFIE_B_0x0 = 0;
        /** @brief USART interrupt generated when RXFF=1 in the USART_ISR register */
    constexpr std::uint32_t USART_CR1_RXFFIE_B_0x1 = 1;

    /** @brief USART control register 1 */
    using USART_CR1_ALTERNATE1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USART enable */
    using USART_CR1_ALTERNATE1_UE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART prescaler and outputs disabled, low-power mode (value: 0)
     *          - B_0x1: USART enabled (value: 1)
     */
        /** @brief USART prescaler and outputs disabled, low-power mode */
    constexpr std::uint32_t USART_CR1_ALTERNATE1_UE_B_0x0 = 0;
        /** @brief USART enabled */
    constexpr std::uint32_t USART_CR1_ALTERNATE1_UE_B_0x1 = 1;

    /** @brief USART enable in low-power mode */
    using USART_CR1_ALTERNATE1_UESM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART not able to wake up the MCU from low-power mode. (value: 0)
     *          - B_0x1: USART able to wake up the MCU from low-power mode. (value: 1)
     */
        /** @brief USART not able to wake up the MCU from low-power mode. */
    constexpr std::uint32_t USART_CR1_ALTERNATE1_UESM_B_0x0 = 0;
        /** @brief USART able to wake up the MCU from low-power mode. */
    constexpr std::uint32_t USART_CR1_ALTERNATE1_UESM_B_0x1 = 1;

    /** @brief Receiver enable */
    using USART_CR1_ALTERNATE1_RE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Receiver is disabled (value: 0)
     *          - B_0x1: Receiver is enabled and begins searching for a start bit (value: 1)
     */
        /** @brief Receiver is disabled */
    constexpr std::uint32_t USART_CR1_ALTERNATE1_RE_B_0x0 = 0;
        /** @brief Receiver is enabled and begins searching for a start bit */
    constexpr std::uint32_t USART_CR1_ALTERNATE1_RE_B_0x1 = 1;

    /** @brief Transmitter enable */
    using USART_CR1_ALTERNATE1_TE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Transmitter is disabled (value: 0)
     *          - B_0x1: Transmitter is enabled (value: 1)
     */
        /** @brief Transmitter is disabled */
    constexpr std::uint32_t USART_CR1_ALTERNATE1_TE_B_0x0 = 0;
        /** @brief Transmitter is enabled */
    constexpr std::uint32_t USART_CR1_ALTERNATE1_TE_B_0x1 = 1;

    /** @brief IDLE interrupt enable */
    using USART_CR1_ALTERNATE1_IDLEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt inhibited (value: 0)
     *          - B_0x1: USART interrupt generated whenever IDLE = 1 in the USART_ISR register (value: 1)
     */
        /** @brief Interrupt inhibited */
    constexpr std::uint32_t USART_CR1_ALTERNATE1_IDLEIE_B_0x0 = 0;
        /** @brief USART interrupt generated whenever IDLE = 1 in the USART_ISR register */
    constexpr std::uint32_t USART_CR1_ALTERNATE1_IDLEIE_B_0x1 = 1;

    /** @brief Receive data register not empty */
    using USART_CR1_ALTERNATE1_RXNEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt inhibited (value: 0)
     *          - B_0x1: USART interrupt generated whenever ORE=1 or RXNE=1 in the USART_ISR register (value: 1)
     */
        /** @brief Interrupt inhibited */
    constexpr std::uint32_t USART_CR1_ALTERNATE1_RXNEIE_B_0x0 = 0;
        /** @brief USART interrupt generated whenever ORE=1 or RXNE=1 in the USART_ISR register */
    constexpr std::uint32_t USART_CR1_ALTERNATE1_RXNEIE_B_0x1 = 1;

    /** @brief Transmission complete interrupt enable */
    using USART_CR1_ALTERNATE1_TCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt inhibited (value: 0)
     *          - B_0x1: USART interrupt generated whenever TC=1 in the USART_ISR register (value: 1)
     */
        /** @brief Interrupt inhibited */
    constexpr std::uint32_t USART_CR1_ALTERNATE1_TCIE_B_0x0 = 0;
        /** @brief USART interrupt generated whenever TC=1 in the USART_ISR register */
    constexpr std::uint32_t USART_CR1_ALTERNATE1_TCIE_B_0x1 = 1;

    /** @brief Transmit data register empty */
    using USART_CR1_ALTERNATE1_TXEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt inhibited (value: 0)
     *          - B_0x1: USART interrupt generated whenever TXE =1 in the USART_ISR register (value: 1)
     */
        /** @brief Interrupt inhibited */
    constexpr std::uint32_t USART_CR1_ALTERNATE1_TXEIE_B_0x0 = 0;
        /** @brief USART interrupt generated whenever TXE =1 in the USART_ISR register */
    constexpr std::uint32_t USART_CR1_ALTERNATE1_TXEIE_B_0x1 = 1;

    /** @brief PE interrupt enable */
    using USART_CR1_ALTERNATE1_PEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt inhibited (value: 0)
     *          - B_0x1: USART interrupt generated whenever PE=1 in the USART_ISR register (value: 1)
     */
        /** @brief Interrupt inhibited */
    constexpr std::uint32_t USART_CR1_ALTERNATE1_PEIE_B_0x0 = 0;
        /** @brief USART interrupt generated whenever PE=1 in the USART_ISR register */
    constexpr std::uint32_t USART_CR1_ALTERNATE1_PEIE_B_0x1 = 1;

    /** @brief Parity selection */
    using USART_CR1_ALTERNATE1_PS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Even parity (value: 0)
     *          - B_0x1: Odd parity (value: 1)
     */
        /** @brief Even parity */
    constexpr std::uint32_t USART_CR1_ALTERNATE1_PS_B_0x0 = 0;
        /** @brief Odd parity */
    constexpr std::uint32_t USART_CR1_ALTERNATE1_PS_B_0x1 = 1;

    /** @brief Parity control enable */
    using USART_CR1_ALTERNATE1_PCE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Parity control disabled (value: 0)
     *          - B_0x1: Parity control enabled (value: 1)
     */
        /** @brief Parity control disabled */
    constexpr std::uint32_t USART_CR1_ALTERNATE1_PCE_B_0x0 = 0;
        /** @brief Parity control enabled */
    constexpr std::uint32_t USART_CR1_ALTERNATE1_PCE_B_0x1 = 1;

    /** @brief Receiver wake-up method */
    using USART_CR1_ALTERNATE1_WAKE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Idle line (value: 0)
     *          - B_0x1: Address mark (value: 1)
     */
        /** @brief Idle line */
    constexpr std::uint32_t USART_CR1_ALTERNATE1_WAKE_B_0x0 = 0;
        /** @brief Address mark */
    constexpr std::uint32_t USART_CR1_ALTERNATE1_WAKE_B_0x1 = 1;

    /** @brief Word length */
    using USART_CR1_ALTERNATE1_M0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Mute mode enable */
    using USART_CR1_ALTERNATE1_MME = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Receiver in active mode permanently (value: 0)
     *          - B_0x1: Receiver can switch between mute mode and active mode. (value: 1)
     */
        /** @brief Receiver in active mode permanently */
    constexpr std::uint32_t USART_CR1_ALTERNATE1_MME_B_0x0 = 0;
        /** @brief Receiver can switch between mute mode and active mode. */
    constexpr std::uint32_t USART_CR1_ALTERNATE1_MME_B_0x1 = 1;

    /** @brief Character match interrupt enable */
    using USART_CR1_ALTERNATE1_CMIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt inhibited (value: 0)
     *          - B_0x1: USART interrupt generated when the CMF bit is set in the USART_ISR register. (value: 1)
     */
        /** @brief Interrupt inhibited */
    constexpr std::uint32_t USART_CR1_ALTERNATE1_CMIE_B_0x0 = 0;
        /** @brief USART interrupt generated when the CMF bit is set in the USART_ISR register. */
    constexpr std::uint32_t USART_CR1_ALTERNATE1_CMIE_B_0x1 = 1;

    /** @brief Oversampling mode */
    using USART_CR1_ALTERNATE1_OVER8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Oversampling by 16 (value: 0)
     *          - B_0x1: Oversampling by 8 (value: 1)
     */
        /** @brief Oversampling by 16 */
    constexpr std::uint32_t USART_CR1_ALTERNATE1_OVER8_B_0x0 = 0;
        /** @brief Oversampling by 8 */
    constexpr std::uint32_t USART_CR1_ALTERNATE1_OVER8_B_0x1 = 1;

    /** @brief Driver Enable deassertion time */
    using USART_CR1_ALTERNATE1_DEDT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Driver Enable assertion time */
    using USART_CR1_ALTERNATE1_DEAT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receiver timeout interrupt enable */
    using USART_CR1_ALTERNATE1_RTOIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt inhibited (value: 0)
     *          - B_0x1: USART interrupt generated when the RTOF bit is set in the USART_ISR register. (value: 1)
     */
        /** @brief Interrupt inhibited */
    constexpr std::uint32_t USART_CR1_ALTERNATE1_RTOIE_B_0x0 = 0;
        /** @brief USART interrupt generated when the RTOF bit is set in the USART_ISR register. */
    constexpr std::uint32_t USART_CR1_ALTERNATE1_RTOIE_B_0x1 = 1;

    /** @brief End of block interrupt enable */
    using USART_CR1_ALTERNATE1_EOBIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt inhibited (value: 0)
     *          - B_0x1: USART interrupt generated when the EOBF flag is set in the USART_ISR register (value: 1)
     */
        /** @brief Interrupt inhibited */
    constexpr std::uint32_t USART_CR1_ALTERNATE1_EOBIE_B_0x0 = 0;
        /** @brief USART interrupt generated when the EOBF flag is set in the USART_ISR register */
    constexpr std::uint32_t USART_CR1_ALTERNATE1_EOBIE_B_0x1 = 1;

    /** @brief Word length */
    using USART_CR1_ALTERNATE1_M1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FIFO mode enable */
    using USART_CR1_ALTERNATE1_FIFOEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FIFO mode is disabled. (value: 0)
     *          - B_0x1: FIFO mode is enabled. (value: 1)
     */
        /** @brief FIFO mode is disabled. */
    constexpr std::uint32_t USART_CR1_ALTERNATE1_FIFOEN_B_0x0 = 0;
        /** @brief FIFO mode is enabled. */
    constexpr std::uint32_t USART_CR1_ALTERNATE1_FIFOEN_B_0x1 = 1;

    /** @brief USART control register 2 */
    using USART_CR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Synchronous slave mode enable */
    using USART_CR2_SLVEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Slave mode disabled. (value: 0)
     *          - B_0x1: Slave mode enabled. (value: 1)
     */
        /** @brief Slave mode disabled. */
    constexpr std::uint32_t USART_CR2_SLVEN_B_0x0 = 0;
        /** @brief Slave mode enabled. */
    constexpr std::uint32_t USART_CR2_SLVEN_B_0x1 = 1;

    /** @brief When the DIS_NSS bit is set, the NSS pin input is ignored. */
    using USART_CR2_DIS_NSS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI slave selection depends on NSS input pin. (value: 0)
     *          - B_0x1: SPI slave is always selected and NSS input pin is ignored. (value: 1)
     */
        /** @brief SPI slave selection depends on NSS input pin. */
    constexpr std::uint32_t USART_CR2_DIS_NSS_B_0x0 = 0;
        /** @brief SPI slave is always selected and NSS input pin is ignored. */
    constexpr std::uint32_t USART_CR2_DIS_NSS_B_0x1 = 1;

    /** @brief 7-bit Address Detection/4-bit Address Detection */
    using USART_CR2_ADDM7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 4-bit address detection (value: 0)
     *          - B_0x1: 7-bit address detection (in 8-bit data mode) (value: 1)
     */
        /** @brief 4-bit address detection */
    constexpr std::uint32_t USART_CR2_ADDM7_B_0x0 = 0;
        /** @brief 7-bit address detection (in 8-bit data mode) */
    constexpr std::uint32_t USART_CR2_ADDM7_B_0x1 = 1;

    /** @brief LIN break detection length */
    using USART_CR2_LBDL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 10-bit break detection (value: 0)
     *          - B_0x1: 11-bit break detection (value: 1)
     */
        /** @brief 10-bit break detection */
    constexpr std::uint32_t USART_CR2_LBDL_B_0x0 = 0;
        /** @brief 11-bit break detection */
    constexpr std::uint32_t USART_CR2_LBDL_B_0x1 = 1;

    /** @brief LIN break detection interrupt enable */
    using USART_CR2_LBDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt is inhibited (value: 0)
     *          - B_0x1: An interrupt is generated whenever LBDF=1 in the USART_ISR register (value: 1)
     */
        /** @brief Interrupt is inhibited */
    constexpr std::uint32_t USART_CR2_LBDIE_B_0x0 = 0;
        /** @brief An interrupt is generated whenever LBDF=1 in the USART_ISR register */
    constexpr std::uint32_t USART_CR2_LBDIE_B_0x1 = 1;

    /** @brief Last bit clock pulse */
    using USART_CR2_LBCL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The clock pulse of the last data bit is not output to the CK pin (value: 0)
     *          - B_0x1: The clock pulse of the last data bit is output to the CK pin (value: 1)
     */
        /** @brief The clock pulse of the last data bit is not output to the CK pin */
    constexpr std::uint32_t USART_CR2_LBCL_B_0x0 = 0;
        /** @brief The clock pulse of the last data bit is output to the CK pin */
    constexpr std::uint32_t USART_CR2_LBCL_B_0x1 = 1;

    /** @brief Clock phase */
    using USART_CR2_CPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The first clock transition is the first data capture edge (value: 0)
     *          - B_0x1: The second clock transition is the first data capture edge (value: 1)
     */
        /** @brief The first clock transition is the first data capture edge */
    constexpr std::uint32_t USART_CR2_CPHA_B_0x0 = 0;
        /** @brief The second clock transition is the first data capture edge */
    constexpr std::uint32_t USART_CR2_CPHA_B_0x1 = 1;

    /** @brief Clock polarity */
    using USART_CR2_CPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Steady low value on CK pin outside transmission window (value: 0)
     *          - B_0x1: Steady high value on CK pin outside transmission window (value: 1)
     */
        /** @brief Steady low value on CK pin outside transmission window */
    constexpr std::uint32_t USART_CR2_CPOL_B_0x0 = 0;
        /** @brief Steady high value on CK pin outside transmission window */
    constexpr std::uint32_t USART_CR2_CPOL_B_0x1 = 1;

    /** @brief Clock enable */
    using USART_CR2_CLKEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CK pin disabled (value: 0)
     *          - B_0x1: CK pin enabled (value: 1)
     */
        /** @brief CK pin disabled */
    constexpr std::uint32_t USART_CR2_CLKEN_B_0x0 = 0;
        /** @brief CK pin enabled */
    constexpr std::uint32_t USART_CR2_CLKEN_B_0x1 = 1;

    /** @brief stop bits */
    using USART_CR2_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1 stop bit (value: 0)
     *          - B_0x1: 0. (value: 1)
     *          - B_0x2: 2 stop bits (value: 2)
     *          - B_0x3: 1. (value: 3)
     */
        /** @brief 1 stop bit */
    constexpr std::uint32_t USART_CR2_STOP_B_0x0 = 0;
        /** @brief 0. */
    constexpr std::uint32_t USART_CR2_STOP_B_0x1 = 1;
        /** @brief 2 stop bits */
    constexpr std::uint32_t USART_CR2_STOP_B_0x2 = 2;
        /** @brief 1. */
    constexpr std::uint32_t USART_CR2_STOP_B_0x3 = 3;

    /** @brief LIN mode enable */
    using USART_CR2_LINEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LIN mode disabled (value: 0)
     *          - B_0x1: LIN mode enabled (value: 1)
     */
        /** @brief LIN mode disabled */
    constexpr std::uint32_t USART_CR2_LINEN_B_0x0 = 0;
        /** @brief LIN mode enabled */
    constexpr std::uint32_t USART_CR2_LINEN_B_0x1 = 1;

    /** @brief Swap TX/RX pins */
    using USART_CR2_SWAP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TX/RX pins are used as defined in standard pinout (value: 0)
     *          - B_0x1: The TX and RX pins functions are swapped. (value: 1)
     */
        /** @brief TX/RX pins are used as defined in standard pinout */
    constexpr std::uint32_t USART_CR2_SWAP_B_0x0 = 0;
        /** @brief The TX and RX pins functions are swapped. */
    constexpr std::uint32_t USART_CR2_SWAP_B_0x1 = 1;

    /** @brief RX pin active level inversion */
    using USART_CR2_RXINV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RX pin signal works using the standard logic levels (Vless thansub>DDless than/sub> =1/idle, Gnd=0/mark) (value: 0)
     *          - B_0x1: RX pin signal values are inverted. (value: 1)
     */
        /** @brief RX pin signal works using the standard logic levels (Vless thansub>DDless than/sub> =1/idle, Gnd=0/mark) */
    constexpr std::uint32_t USART_CR2_RXINV_B_0x0 = 0;
        /** @brief RX pin signal values are inverted. */
    constexpr std::uint32_t USART_CR2_RXINV_B_0x1 = 1;

    /** @brief TX pin active level inversion */
    using USART_CR2_TXINV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TX pin signal works using the standard logic levels (Vless thansub>DDless than/sub> =1/idle, Gnd=0/mark) (value: 0)
     *          - B_0x1: TX pin signal values are inverted. (value: 1)
     */
        /** @brief TX pin signal works using the standard logic levels (Vless thansub>DDless than/sub> =1/idle, Gnd=0/mark) */
    constexpr std::uint32_t USART_CR2_TXINV_B_0x0 = 0;
        /** @brief TX pin signal values are inverted. */
    constexpr std::uint32_t USART_CR2_TXINV_B_0x1 = 1;

    /** @brief Binary data inversion */
    using USART_CR2_DATAINV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Logical data from the data register are send/received in positive/direct logic. (value: 0)
     *          - B_0x1: Logical data from the data register are send/received in negative/inverse logic. (value: 1)
     */
        /** @brief Logical data from the data register are send/received in positive/direct logic. */
    constexpr std::uint32_t USART_CR2_DATAINV_B_0x0 = 0;
        /** @brief Logical data from the data register are send/received in negative/inverse logic. */
    constexpr std::uint32_t USART_CR2_DATAINV_B_0x1 = 1;

    /** @brief Most significant bit first */
    using USART_CR2_MSBFIRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: data is transmitted/received with data bit 0 first, following the start bit. (value: 0)
     *          - B_0x1: data is transmitted/received with the MSB (bit 7/8) first, following the start bit. (value: 1)
     */
        /** @brief data is transmitted/received with data bit 0 first, following the start bit. */
    constexpr std::uint32_t USART_CR2_MSBFIRST_B_0x0 = 0;
        /** @brief data is transmitted/received with the MSB (bit 7/8) first, following the start bit. */
    constexpr std::uint32_t USART_CR2_MSBFIRST_B_0x1 = 1;

    /** @brief Auto baud rate enable */
    using USART_CR2_ABREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Auto baud rate detection is disabled. (value: 0)
     *          - B_0x1: Auto baud rate detection is enabled. (value: 1)
     */
        /** @brief Auto baud rate detection is disabled. */
    constexpr std::uint32_t USART_CR2_ABREN_B_0x0 = 0;
        /** @brief Auto baud rate detection is enabled. */
    constexpr std::uint32_t USART_CR2_ABREN_B_0x1 = 1;

    /** @brief Auto baud rate mode */
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

    /** @brief Receiver timeout enable */
    using USART_CR2_RTOEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Receiver timeout feature disabled. (value: 0)
     *          - B_0x1: Receiver timeout feature enabled. (value: 1)
     */
        /** @brief Receiver timeout feature disabled. */
    constexpr std::uint32_t USART_CR2_RTOEN_B_0x0 = 0;
        /** @brief Receiver timeout feature enabled. */
    constexpr std::uint32_t USART_CR2_RTOEN_B_0x1 = 1;

    /** @brief Address of the USART node */
    using USART_CR2_ADD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USART control register 3 */
    using USART_CR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Error interrupt enable */
    using USART_CR3_EIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt inhibited (value: 0)
     *          - B_0x1: interrupt generated when FE=1 or ORE=1 or NE=1 or UDR = 1 (in SPI slave mode) in the USART_ISR register. (value: 1)
     */
        /** @brief Interrupt inhibited */
    constexpr std::uint32_t USART_CR3_EIE_B_0x0 = 0;
        /** @brief interrupt generated when FE=1 or ORE=1 or NE=1 or UDR = 1 (in SPI slave mode) in the USART_ISR register. */
    constexpr std::uint32_t USART_CR3_EIE_B_0x1 = 1;

    /** @brief IrDA mode enable */
    using USART_CR3_IREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IrDA disabled (value: 0)
     *          - B_0x1: IrDA enabled (value: 1)
     */
        /** @brief IrDA disabled */
    constexpr std::uint32_t USART_CR3_IREN_B_0x0 = 0;
        /** @brief IrDA enabled */
    constexpr std::uint32_t USART_CR3_IREN_B_0x1 = 1;

    /** @brief IrDA low-power */
    using USART_CR3_IRLP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal mode (value: 0)
     *          - B_0x1: Low-power mode (value: 1)
     */
        /** @brief Normal mode */
    constexpr std::uint32_t USART_CR3_IRLP_B_0x0 = 0;
        /** @brief Low-power mode */
    constexpr std::uint32_t USART_CR3_IRLP_B_0x1 = 1;

    /** @brief Half-duplex selection */
    using USART_CR3_HDSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Half-duplex mode is not selected (value: 0)
     *          - B_0x1: Half-duplex mode is selected (value: 1)
     */
        /** @brief Half-duplex mode is not selected */
    constexpr std::uint32_t USART_CR3_HDSEL_B_0x0 = 0;
        /** @brief Half-duplex mode is selected */
    constexpr std::uint32_t USART_CR3_HDSEL_B_0x1 = 1;

    /** @brief Smartcard NACK enable */
    using USART_CR3_NACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: NACK transmission in case of parity error is disabled (value: 0)
     *          - B_0x1: NACK transmission during parity error is enabled (value: 1)
     */
        /** @brief NACK transmission in case of parity error is disabled */
    constexpr std::uint32_t USART_CR3_NACK_B_0x0 = 0;
        /** @brief NACK transmission during parity error is enabled */
    constexpr std::uint32_t USART_CR3_NACK_B_0x1 = 1;

    /** @brief Smartcard mode enable */
    using USART_CR3_SCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Smartcard mode disabled (value: 0)
     *          - B_0x1: Smartcard mode enabled (value: 1)
     */
        /** @brief Smartcard mode disabled */
    constexpr std::uint32_t USART_CR3_SCEN_B_0x0 = 0;
        /** @brief Smartcard mode enabled */
    constexpr std::uint32_t USART_CR3_SCEN_B_0x1 = 1;

    /** @brief DMA enable receiver */
    using USART_CR3_DMAR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: DMA mode is enabled for reception (value: 1)
     *          - B_0x0: DMA mode is disabled for reception (value: 0)
     */
        /** @brief DMA mode is enabled for reception */
    constexpr std::uint32_t USART_CR3_DMAR_B_0x1 = 1;
        /** @brief DMA mode is disabled for reception */
    constexpr std::uint32_t USART_CR3_DMAR_B_0x0 = 0;

    /** @brief DMA enable transmitter */
    using USART_CR3_DMAT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: DMA mode is enabled for transmission (value: 1)
     *          - B_0x0: DMA mode is disabled for transmission (value: 0)
     */
        /** @brief DMA mode is enabled for transmission */
    constexpr std::uint32_t USART_CR3_DMAT_B_0x1 = 1;
        /** @brief DMA mode is disabled for transmission */
    constexpr std::uint32_t USART_CR3_DMAT_B_0x0 = 0;

    /** @brief RTS enable */
    using USART_CR3_RTSE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RTS hardware flow control disabled (value: 0)
     *          - B_0x1: RTS output enabled, data is only requested when there is space in the receive buffer. (value: 1)
     */
        /** @brief RTS hardware flow control disabled */
    constexpr std::uint32_t USART_CR3_RTSE_B_0x0 = 0;
        /** @brief RTS output enabled, data is only requested when there is space in the receive buffer. */
    constexpr std::uint32_t USART_CR3_RTSE_B_0x1 = 1;

    /** @brief CTS enable */
    using USART_CR3_CTSE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CTS hardware flow control disabled (value: 0)
     *          - B_0x1: CTS mode enabled, data is only transmitted when the CTS input is deasserted (tied to 0). (value: 1)
     */
        /** @brief CTS hardware flow control disabled */
    constexpr std::uint32_t USART_CR3_CTSE_B_0x0 = 0;
        /** @brief CTS mode enabled, data is only transmitted when the CTS input is deasserted (tied to 0). */
    constexpr std::uint32_t USART_CR3_CTSE_B_0x1 = 1;

    /** @brief CTS interrupt enable */
    using USART_CR3_CTSIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt is inhibited (value: 0)
     *          - B_0x1: An interrupt is generated whenever CTSIF=1 in the USART_ISR register (value: 1)
     */
        /** @brief Interrupt is inhibited */
    constexpr std::uint32_t USART_CR3_CTSIE_B_0x0 = 0;
        /** @brief An interrupt is generated whenever CTSIF=1 in the USART_ISR register */
    constexpr std::uint32_t USART_CR3_CTSIE_B_0x1 = 1;

    /** @brief One sample bit method enable */
    using USART_CR3_ONEBIT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Three sample bit method (value: 0)
     *          - B_0x1: One sample bit method (value: 1)
     */
        /** @brief Three sample bit method */
    constexpr std::uint32_t USART_CR3_ONEBIT_B_0x0 = 0;
        /** @brief One sample bit method */
    constexpr std::uint32_t USART_CR3_ONEBIT_B_0x1 = 1;

    /** @brief Overrun Disable */
    using USART_CR3_OVRDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Overrun Error Flag, ORE, is set when received data is not read before receiving new data. (value: 0)
     *          - B_0x1: Overrun functionality is disabled. (value: 1)
     */
        /** @brief Overrun Error Flag, ORE, is set when received data is not read before receiving new data. */
    constexpr std::uint32_t USART_CR3_OVRDIS_B_0x0 = 0;
        /** @brief Overrun functionality is disabled. */
    constexpr std::uint32_t USART_CR3_OVRDIS_B_0x1 = 1;

    /** @brief DMA Disable on reception Error */
    using USART_CR3_DDRE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DMA is not disabled in case of reception error. (value: 0)
     *          - B_0x1: DMA is disabled following a reception error. (value: 1)
     */
        /** @brief DMA is not disabled in case of reception error. */
    constexpr std::uint32_t USART_CR3_DDRE_B_0x0 = 0;
        /** @brief DMA is disabled following a reception error. */
    constexpr std::uint32_t USART_CR3_DDRE_B_0x1 = 1;

    /** @brief Driver enable mode */
    using USART_CR3_DEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DE function is disabled. (value: 0)
     *          - B_0x1: DE function is enabled. (value: 1)
     */
        /** @brief DE function is disabled. */
    constexpr std::uint32_t USART_CR3_DEM_B_0x0 = 0;
        /** @brief DE function is enabled. */
    constexpr std::uint32_t USART_CR3_DEM_B_0x1 = 1;

    /** @brief Driver enable polarity selection */
    using USART_CR3_DEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DE signal is active high. (value: 0)
     *          - B_0x1: DE signal is active low. (value: 1)
     */
        /** @brief DE signal is active high. */
    constexpr std::uint32_t USART_CR3_DEP_B_0x0 = 0;
        /** @brief DE signal is active low. */
    constexpr std::uint32_t USART_CR3_DEP_B_0x1 = 1;

    /** @brief Smartcard auto-retry count */
    using USART_CR3_SCARCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: retransmission disabled - No automatic retransmission in transmission mode. (value: 0)
     */
        /** @brief retransmission disabled - No automatic retransmission in transmission mode. */
    constexpr std::uint32_t USART_CR3_SCARCNT_B_0x0 = 0;

    /** @brief Wake-up from low-power mode interrupt flag selection */
    using USART_CR3_WUS0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: WUF active on address match (as defined by ADD[7:0] and ADDM7) (value: 0)
     */
        /** @brief WUF active on address match (as defined by ADD[7:0] and ADDM7) */
    constexpr std::uint32_t USART_CR3_WUS0_B_0x0 = 0;

    /** @brief Wake-up from low-power mode interrupt flag selection */
    using USART_CR3_WUS1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: WUF active on address match (as defined by ADD[7:0] and ADDM7) (value: 0)
     */
        /** @brief WUF active on address match (as defined by ADD[7:0] and ADDM7) */
    constexpr std::uint32_t USART_CR3_WUS1_B_0x0 = 0;

    /** @brief Wake-up from low-power mode interrupt enable */
    using USART_CR3_WUFIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt inhibited (value: 0)
     *          - B_0x1: USART interrupt generated whenever WUF=1 in the USART_ISR register (value: 1)
     */
        /** @brief Interrupt inhibited */
    constexpr std::uint32_t USART_CR3_WUFIE_B_0x0 = 0;
        /** @brief USART interrupt generated whenever WUF=1 in the USART_ISR register */
    constexpr std::uint32_t USART_CR3_WUFIE_B_0x1 = 1;

    /** @brief TXFIFO threshold interrupt enable */
    using USART_CR3_TXFTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt inhibited (value: 0)
     *          - B_0x1: USART interrupt generated when TXFIFO reaches the threshold programmed in TXFTCFG. (value: 1)
     */
        /** @brief Interrupt inhibited */
    constexpr std::uint32_t USART_CR3_TXFTIE_B_0x0 = 0;
        /** @brief USART interrupt generated when TXFIFO reaches the threshold programmed in TXFTCFG. */
    constexpr std::uint32_t USART_CR3_TXFTIE_B_0x1 = 1;

    /** @brief Transmission Complete before guard time, interrupt enable */
    using USART_CR3_TCBGTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt inhibited (value: 0)
     *          - B_0x1: USART interrupt generated whenever TCBGT=1 in the USART_ISR register (value: 1)
     */
        /** @brief Interrupt inhibited */
    constexpr std::uint32_t USART_CR3_TCBGTIE_B_0x0 = 0;
        /** @brief USART interrupt generated whenever TCBGT=1 in the USART_ISR register */
    constexpr std::uint32_t USART_CR3_TCBGTIE_B_0x1 = 1;

    /** @brief Receive FIFO threshold configuration */
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

    /** @brief RXFIFO threshold interrupt enable */
    using USART_CR3_RXFTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt inhibited (value: 0)
     *          - B_0x1: USART interrupt generated when Receive FIFO reaches the threshold programmed in RXFTCFG. (value: 1)
     */
        /** @brief Interrupt inhibited */
    constexpr std::uint32_t USART_CR3_RXFTIE_B_0x0 = 0;
        /** @brief USART interrupt generated when Receive FIFO reaches the threshold programmed in RXFTCFG. */
    constexpr std::uint32_t USART_CR3_RXFTIE_B_0x1 = 1;

    /** @brief TXFIFO threshold configuration */
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

    /** @brief USART control register 3 */
    using USART_CR3_ALTERNATE1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Error interrupt enable */
    using USART_CR3_ALTERNATE1_EIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt inhibited (value: 0)
     *          - B_0x1: interrupt generated when FE=1 or ORE=1 or NE=1 or UDR = 1 (in SPI slave mode) in the USART_ISR register. (value: 1)
     */
        /** @brief Interrupt inhibited */
    constexpr std::uint32_t USART_CR3_ALTERNATE1_EIE_B_0x0 = 0;
        /** @brief interrupt generated when FE=1 or ORE=1 or NE=1 or UDR = 1 (in SPI slave mode) in the USART_ISR register. */
    constexpr std::uint32_t USART_CR3_ALTERNATE1_EIE_B_0x1 = 1;

    /** @brief IrDA mode enable */
    using USART_CR3_ALTERNATE1_IREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: IrDA disabled (value: 0)
     *          - B_0x1: IrDA enabled (value: 1)
     */
        /** @brief IrDA disabled */
    constexpr std::uint32_t USART_CR3_ALTERNATE1_IREN_B_0x0 = 0;
        /** @brief IrDA enabled */
    constexpr std::uint32_t USART_CR3_ALTERNATE1_IREN_B_0x1 = 1;

    /** @brief IrDA low-power */
    using USART_CR3_ALTERNATE1_IRLP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Normal mode (value: 0)
     *          - B_0x1: Low-power mode (value: 1)
     */
        /** @brief Normal mode */
    constexpr std::uint32_t USART_CR3_ALTERNATE1_IRLP_B_0x0 = 0;
        /** @brief Low-power mode */
    constexpr std::uint32_t USART_CR3_ALTERNATE1_IRLP_B_0x1 = 1;

    /** @brief Half-duplex selection */
    using USART_CR3_ALTERNATE1_HDSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Half-duplex mode is not selected (value: 0)
     *          - B_0x1: Half-duplex mode is selected (value: 1)
     */
        /** @brief Half-duplex mode is not selected */
    constexpr std::uint32_t USART_CR3_ALTERNATE1_HDSEL_B_0x0 = 0;
        /** @brief Half-duplex mode is selected */
    constexpr std::uint32_t USART_CR3_ALTERNATE1_HDSEL_B_0x1 = 1;

    /** @brief Smartcard NACK enable */
    using USART_CR3_ALTERNATE1_NACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: NACK transmission in case of parity error is disabled (value: 0)
     *          - B_0x1: NACK transmission during parity error is enabled (value: 1)
     */
        /** @brief NACK transmission in case of parity error is disabled */
    constexpr std::uint32_t USART_CR3_ALTERNATE1_NACK_B_0x0 = 0;
        /** @brief NACK transmission during parity error is enabled */
    constexpr std::uint32_t USART_CR3_ALTERNATE1_NACK_B_0x1 = 1;

    /** @brief Smartcard mode enable */
    using USART_CR3_ALTERNATE1_SCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Smartcard mode disabled (value: 0)
     *          - B_0x1: Smartcard mode enabled (value: 1)
     */
        /** @brief Smartcard mode disabled */
    constexpr std::uint32_t USART_CR3_ALTERNATE1_SCEN_B_0x0 = 0;
        /** @brief Smartcard mode enabled */
    constexpr std::uint32_t USART_CR3_ALTERNATE1_SCEN_B_0x1 = 1;

    /** @brief DMA enable receiver */
    using USART_CR3_ALTERNATE1_DMAR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: DMA mode is enabled for reception (value: 1)
     *          - B_0x0: DMA mode is disabled for reception (value: 0)
     */
        /** @brief DMA mode is enabled for reception */
    constexpr std::uint32_t USART_CR3_ALTERNATE1_DMAR_B_0x1 = 1;
        /** @brief DMA mode is disabled for reception */
    constexpr std::uint32_t USART_CR3_ALTERNATE1_DMAR_B_0x0 = 0;

    /** @brief DMA enable transmitter */
    using USART_CR3_ALTERNATE1_DMAT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: DMA mode is enabled for transmission (value: 1)
     *          - B_0x0: DMA mode is disabled for transmission (value: 0)
     */
        /** @brief DMA mode is enabled for transmission */
    constexpr std::uint32_t USART_CR3_ALTERNATE1_DMAT_B_0x1 = 1;
        /** @brief DMA mode is disabled for transmission */
    constexpr std::uint32_t USART_CR3_ALTERNATE1_DMAT_B_0x0 = 0;

    /** @brief RTS enable */
    using USART_CR3_ALTERNATE1_RTSE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RTS hardware flow control disabled (value: 0)
     *          - B_0x1: RTS output enabled, data is only requested when there is space in the receive buffer. (value: 1)
     */
        /** @brief RTS hardware flow control disabled */
    constexpr std::uint32_t USART_CR3_ALTERNATE1_RTSE_B_0x0 = 0;
        /** @brief RTS output enabled, data is only requested when there is space in the receive buffer. */
    constexpr std::uint32_t USART_CR3_ALTERNATE1_RTSE_B_0x1 = 1;

    /** @brief CTS enable */
    using USART_CR3_ALTERNATE1_CTSE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CTS hardware flow control disabled (value: 0)
     *          - B_0x1: CTS mode enabled, data is only transmitted when the CTS input is deasserted (tied to 0). (value: 1)
     */
        /** @brief CTS hardware flow control disabled */
    constexpr std::uint32_t USART_CR3_ALTERNATE1_CTSE_B_0x0 = 0;
        /** @brief CTS mode enabled, data is only transmitted when the CTS input is deasserted (tied to 0). */
    constexpr std::uint32_t USART_CR3_ALTERNATE1_CTSE_B_0x1 = 1;

    /** @brief CTS interrupt enable */
    using USART_CR3_ALTERNATE1_CTSIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt is inhibited (value: 0)
     *          - B_0x1: An interrupt is generated whenever CTSIF=1 in the USART_ISR register (value: 1)
     */
        /** @brief Interrupt is inhibited */
    constexpr std::uint32_t USART_CR3_ALTERNATE1_CTSIE_B_0x0 = 0;
        /** @brief An interrupt is generated whenever CTSIF=1 in the USART_ISR register */
    constexpr std::uint32_t USART_CR3_ALTERNATE1_CTSIE_B_0x1 = 1;

    /** @brief One sample bit method enable */
    using USART_CR3_ALTERNATE1_ONEBIT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Three sample bit method (value: 0)
     *          - B_0x1: One sample bit method (value: 1)
     */
        /** @brief Three sample bit method */
    constexpr std::uint32_t USART_CR3_ALTERNATE1_ONEBIT_B_0x0 = 0;
        /** @brief One sample bit method */
    constexpr std::uint32_t USART_CR3_ALTERNATE1_ONEBIT_B_0x1 = 1;

    /** @brief Overrun Disable */
    using USART_CR3_ALTERNATE1_OVRDIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Overrun Error Flag, ORE, is set when received data is not read before receiving new data. (value: 0)
     *          - B_0x1: Overrun functionality is disabled. (value: 1)
     */
        /** @brief Overrun Error Flag, ORE, is set when received data is not read before receiving new data. */
    constexpr std::uint32_t USART_CR3_ALTERNATE1_OVRDIS_B_0x0 = 0;
        /** @brief Overrun functionality is disabled. */
    constexpr std::uint32_t USART_CR3_ALTERNATE1_OVRDIS_B_0x1 = 1;

    /** @brief DMA Disable on reception Error */
    using USART_CR3_ALTERNATE1_DDRE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DMA is not disabled in case of reception error. (value: 0)
     *          - B_0x1: DMA is disabled following a reception error. (value: 1)
     */
        /** @brief DMA is not disabled in case of reception error. */
    constexpr std::uint32_t USART_CR3_ALTERNATE1_DDRE_B_0x0 = 0;
        /** @brief DMA is disabled following a reception error. */
    constexpr std::uint32_t USART_CR3_ALTERNATE1_DDRE_B_0x1 = 1;

    /** @brief Driver enable mode */
    using USART_CR3_ALTERNATE1_DEM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DE function is disabled. (value: 0)
     *          - B_0x1: DE function is enabled. (value: 1)
     */
        /** @brief DE function is disabled. */
    constexpr std::uint32_t USART_CR3_ALTERNATE1_DEM_B_0x0 = 0;
        /** @brief DE function is enabled. */
    constexpr std::uint32_t USART_CR3_ALTERNATE1_DEM_B_0x1 = 1;

    /** @brief Driver enable polarity selection */
    using USART_CR3_ALTERNATE1_DEP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DE signal is active high. (value: 0)
     *          - B_0x1: DE signal is active low. (value: 1)
     */
        /** @brief DE signal is active high. */
    constexpr std::uint32_t USART_CR3_ALTERNATE1_DEP_B_0x0 = 0;
        /** @brief DE signal is active low. */
    constexpr std::uint32_t USART_CR3_ALTERNATE1_DEP_B_0x1 = 1;

    /** @brief Smartcard auto-retry count */
    using USART_CR3_ALTERNATE1_SCARCNT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: retransmission disabled - No automatic retransmission in transmission mode. (value: 0)
     */
        /** @brief retransmission disabled - No automatic retransmission in transmission mode. */
    constexpr std::uint32_t USART_CR3_ALTERNATE1_SCARCNT_B_0x0 = 0;

    /** @brief Wake-up from low-power mode interrupt flag selection */
    using USART_CR3_ALTERNATE1_WUS0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: WUF active on address match (as defined by ADD[7:0] and ADDM7) (value: 0)
     */
        /** @brief WUF active on address match (as defined by ADD[7:0] and ADDM7) */
    constexpr std::uint32_t USART_CR3_ALTERNATE1_WUS0_B_0x0 = 0;

    /** @brief Wake-up from low-power mode interrupt flag selection */
    using USART_CR3_ALTERNATE1_WUS1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: WUF active on address match (as defined by ADD[7:0] and ADDM7) (value: 0)
     */
        /** @brief WUF active on address match (as defined by ADD[7:0] and ADDM7) */
    constexpr std::uint32_t USART_CR3_ALTERNATE1_WUS1_B_0x0 = 0;

    /** @brief Wake-up from low-power mode interrupt enable */
    using USART_CR3_ALTERNATE1_WUFIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt inhibited (value: 0)
     *          - B_0x1: USART interrupt generated whenever WUF=1 in the USART_ISR register (value: 1)
     */
        /** @brief Interrupt inhibited */
    constexpr std::uint32_t USART_CR3_ALTERNATE1_WUFIE_B_0x0 = 0;
        /** @brief USART interrupt generated whenever WUF=1 in the USART_ISR register */
    constexpr std::uint32_t USART_CR3_ALTERNATE1_WUFIE_B_0x1 = 1;

    /** @brief Transmission Complete before guard time, interrupt enable */
    using USART_CR3_ALTERNATE1_TCBGTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt inhibited (value: 0)
     *          - B_0x1: USART interrupt generated whenever TCBGT=1 in the USART_ISR register (value: 1)
     */
        /** @brief Interrupt inhibited */
    constexpr std::uint32_t USART_CR3_ALTERNATE1_TCBGTIE_B_0x0 = 0;
        /** @brief USART interrupt generated whenever TCBGT=1 in the USART_ISR register */
    constexpr std::uint32_t USART_CR3_ALTERNATE1_TCBGTIE_B_0x1 = 1;

    /** @brief USART baud rate register */
    using USART_BRR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USART baud rate */
    using USART_BRR_BRR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USART guard time and prescaler register */
    using USART_GTPR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Prescaler value */
    using USART_GTPR_PSC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1_IRDA_LOW_POWER_AND_NORMAL_IRDA_MODE: divides the source clock by 1 (value: 1)
     *          - B_0x2_IRDA_LOW_POWER_AND_NORMAL_IRDA_MODE: divides the source clock by 2 (value: 2)
     *          - B_0x3_SMARTCARD_MODE: divides the source clock by 6 (value: 3)
     */
        /** @brief divides the source clock by 1 */
    constexpr std::uint32_t USART_GTPR_PSC_B_0x1_IRDA_LOW_POWER_AND_NORMAL_IRDA_MODE = 1;
        /** @brief divides the source clock by 2 */
    constexpr std::uint32_t USART_GTPR_PSC_B_0x2_IRDA_LOW_POWER_AND_NORMAL_IRDA_MODE = 2;
        /** @brief divides the source clock by 6 */
    constexpr std::uint32_t USART_GTPR_PSC_B_0x3_SMARTCARD_MODE = 3;

    /** @brief Guard time value */
    using USART_GTPR_GT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USART receiver timeout register */
    using USART_RTOR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receiver timeout value */
    using USART_RTOR_RTO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Block Length */
    using USART_RTOR_BLEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USART request register */
    using USART_RQR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Auto baud rate request */
    using USART_RQR_ABRRQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Send break request */
    using USART_RQR_SBKRQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Mute mode request */
    using USART_RQR_MMRQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive data flush request */
    using USART_RQR_RXFRQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit data flush request */
    using USART_RQR_TXFRQ = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USART interrupt and status register */
    using USART_ISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Parity error */
    using USART_ISR_PE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No parity error (value: 0)
     *          - B_0x1: Parity error (value: 1)
     */
        /** @brief No parity error */
    constexpr std::uint32_t USART_ISR_PE_B_0x0 = 0;
        /** @brief Parity error */
    constexpr std::uint32_t USART_ISR_PE_B_0x1 = 1;

    /** @brief Framing error */
    using USART_ISR_FE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No Framing error is detected (value: 0)
     *          - B_0x1: Framing error or break character is detected (value: 1)
     */
        /** @brief No Framing error is detected */
    constexpr std::uint32_t USART_ISR_FE_B_0x0 = 0;
        /** @brief Framing error or break character is detected */
    constexpr std::uint32_t USART_ISR_FE_B_0x1 = 1;

    /** @brief Noise detection flag */
    using USART_ISR_NE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No noise is detected (value: 0)
     *          - B_0x1: Noise is detected (value: 1)
     */
        /** @brief No noise is detected */
    constexpr std::uint32_t USART_ISR_NE_B_0x0 = 0;
        /** @brief Noise is detected */
    constexpr std::uint32_t USART_ISR_NE_B_0x1 = 1;

    /** @brief Overrun error */
    using USART_ISR_ORE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No overrun error (value: 0)
     *          - B_0x1: Overrun error is detected (value: 1)
     */
        /** @brief No overrun error */
    constexpr std::uint32_t USART_ISR_ORE_B_0x0 = 0;
        /** @brief Overrun error is detected */
    constexpr std::uint32_t USART_ISR_ORE_B_0x1 = 1;

    /** @brief Idle line detected */
    using USART_ISR_IDLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No Idle line is detected (value: 0)
     *          - B_0x1: Idle line is detected (value: 1)
     */
        /** @brief No Idle line is detected */
    constexpr std::uint32_t USART_ISR_IDLE_B_0x0 = 0;
        /** @brief Idle line is detected */
    constexpr std::uint32_t USART_ISR_IDLE_B_0x1 = 1;

    /** @brief RXFIFO not empty */
    using USART_ISR_RXFNE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Data is not received (value: 0)
     *          - B_0x1: Received data is ready to be read. (value: 1)
     */
        /** @brief Data is not received */
    constexpr std::uint32_t USART_ISR_RXFNE_B_0x0 = 0;
        /** @brief Received data is ready to be read. */
    constexpr std::uint32_t USART_ISR_RXFNE_B_0x1 = 1;

    /** @brief Transmission complete */
    using USART_ISR_TC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TXFIFO not full */
    using USART_ISR_TXFNF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Transmit FIFO is full (value: 0)
     *          - B_0x1: Transmit FIFO is not full (value: 1)
     */
        /** @brief Transmit FIFO is full */
    constexpr std::uint32_t USART_ISR_TXFNF_B_0x0 = 0;
        /** @brief Transmit FIFO is not full */
    constexpr std::uint32_t USART_ISR_TXFNF_B_0x1 = 1;

    /** @brief LIN break detection flag */
    using USART_ISR_LBDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LIN Break not detected (value: 0)
     *          - B_0x1: LIN break detected (value: 1)
     */
        /** @brief LIN Break not detected */
    constexpr std::uint32_t USART_ISR_LBDF_B_0x0 = 0;
        /** @brief LIN break detected */
    constexpr std::uint32_t USART_ISR_LBDF_B_0x1 = 1;

    /** @brief CTS interrupt flag */
    using USART_ISR_CTSIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No change occurred on the CTS status line (value: 0)
     *          - B_0x1: A change occurred on the CTS status line (value: 1)
     */
        /** @brief No change occurred on the CTS status line */
    constexpr std::uint32_t USART_ISR_CTSIF_B_0x0 = 0;
        /** @brief A change occurred on the CTS status line */
    constexpr std::uint32_t USART_ISR_CTSIF_B_0x1 = 1;

    /** @brief CTS flag */
    using USART_ISR_CTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CTS line set (value: 0)
     *          - B_0x1: CTS line reset (value: 1)
     */
        /** @brief CTS line set */
    constexpr std::uint32_t USART_ISR_CTS_B_0x0 = 0;
        /** @brief CTS line reset */
    constexpr std::uint32_t USART_ISR_CTS_B_0x1 = 1;

    /** @brief Receiver timeout */
    using USART_ISR_RTOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Timeout value not reached (value: 0)
     *          - B_0x1: Timeout value reached without any data reception (value: 1)
     */
        /** @brief Timeout value not reached */
    constexpr std::uint32_t USART_ISR_RTOF_B_0x0 = 0;
        /** @brief Timeout value reached without any data reception */
    constexpr std::uint32_t USART_ISR_RTOF_B_0x1 = 1;

    /** @brief End of block flag */
    using USART_ISR_EOBF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: End of block not reached (value: 0)
     *          - B_0x1: End of block (number of characters) reached (value: 1)
     */
        /** @brief End of block not reached */
    constexpr std::uint32_t USART_ISR_EOBF_B_0x0 = 0;
        /** @brief End of block (number of characters) reached */
    constexpr std::uint32_t USART_ISR_EOBF_B_0x1 = 1;

    /** @brief SPI slave underrun error flag */
    using USART_ISR_UDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No underrun error (value: 0)
     *          - B_0x1: underrun error (value: 1)
     */
        /** @brief No underrun error */
    constexpr std::uint32_t USART_ISR_UDR_B_0x0 = 0;
        /** @brief underrun error */
    constexpr std::uint32_t USART_ISR_UDR_B_0x1 = 1;

    /** @brief Auto baud rate error */
    using USART_ISR_ABRE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Auto baud rate flag */
    using USART_ISR_ABRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Busy flag */
    using USART_ISR_BUSY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART is idle (no reception) (value: 0)
     *          - B_0x1: Reception ongoing (value: 1)
     */
        /** @brief USART is idle (no reception) */
    constexpr std::uint32_t USART_ISR_BUSY_B_0x0 = 0;
        /** @brief Reception ongoing */
    constexpr std::uint32_t USART_ISR_BUSY_B_0x1 = 1;

    /** @brief Character match flag */
    using USART_ISR_CMF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No Character match detected (value: 0)
     *          - B_0x1: Character match detected (value: 1)
     */
        /** @brief No Character match detected */
    constexpr std::uint32_t USART_ISR_CMF_B_0x0 = 0;
        /** @brief Character match detected */
    constexpr std::uint32_t USART_ISR_CMF_B_0x1 = 1;

    /** @brief Send break flag */
    using USART_ISR_SBKF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No break character transmitted (value: 0)
     *          - B_0x1: Break character transmitted (value: 1)
     */
        /** @brief No break character transmitted */
    constexpr std::uint32_t USART_ISR_SBKF_B_0x0 = 0;
        /** @brief Break character transmitted */
    constexpr std::uint32_t USART_ISR_SBKF_B_0x1 = 1;

    /** @brief Receiver wake-up from mute mode */
    using USART_ISR_RWU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Receiver in active mode (value: 0)
     *          - B_0x1: Receiver in mute mode (value: 1)
     */
        /** @brief Receiver in active mode */
    constexpr std::uint32_t USART_ISR_RWU_B_0x0 = 0;
        /** @brief Receiver in mute mode */
    constexpr std::uint32_t USART_ISR_RWU_B_0x1 = 1;

    /** @brief Wake-up from low-power mode flag */
    using USART_ISR_WUF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit enable acknowledge flag */
    using USART_ISR_TEACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive enable acknowledge flag */
    using USART_ISR_REACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TXFIFO Empty */
    using USART_ISR_TXFE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TXFIFO not empty. (value: 0)
     *          - B_0x1: TXFIFO empty. (value: 1)
     */
        /** @brief TXFIFO not empty. */
    constexpr std::uint32_t USART_ISR_TXFE_B_0x0 = 0;
        /** @brief TXFIFO empty. */
    constexpr std::uint32_t USART_ISR_TXFE_B_0x1 = 1;

    /** @brief RXFIFO Full */
    using USART_ISR_RXFF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RXFIFO not full. (value: 0)
     *          - B_0x1: RXFIFO Full. (value: 1)
     */
        /** @brief RXFIFO not full. */
    constexpr std::uint32_t USART_ISR_RXFF_B_0x0 = 0;
        /** @brief RXFIFO Full. */
    constexpr std::uint32_t USART_ISR_RXFF_B_0x1 = 1;

    /** @brief Transmission complete before guard time flag */
    using USART_ISR_TCBGT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Transmission is not complete or transmission is complete unsuccessfully (i. (value: 0)
     *          - B_0x1: Transmission is complete successfully (before Guard time completion and there is no NACK from the smart card). (value: 1)
     */
        /** @brief Transmission is not complete or transmission is complete unsuccessfully (i. */
    constexpr std::uint32_t USART_ISR_TCBGT_B_0x0 = 0;
        /** @brief Transmission is complete successfully (before Guard time completion and there is no NACK from the smart card). */
    constexpr std::uint32_t USART_ISR_TCBGT_B_0x1 = 1;

    /** @brief RXFIFO threshold flag */
    using USART_ISR_RXFT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Receive FIFO does not reach the programmed threshold. (value: 0)
     *          - B_0x1: Receive FIFO reached the programmed threshold. (value: 1)
     */
        /** @brief Receive FIFO does not reach the programmed threshold. */
    constexpr std::uint32_t USART_ISR_RXFT_B_0x0 = 0;
        /** @brief Receive FIFO reached the programmed threshold. */
    constexpr std::uint32_t USART_ISR_RXFT_B_0x1 = 1;

    /** @brief TXFIFO threshold flag */
    using USART_ISR_TXFT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TXFIFO does not reach the programmed threshold. (value: 0)
     *          - B_0x1: TXFIFO reached the programmed threshold. (value: 1)
     */
        /** @brief TXFIFO does not reach the programmed threshold. */
    constexpr std::uint32_t USART_ISR_TXFT_B_0x0 = 0;
        /** @brief TXFIFO reached the programmed threshold. */
    constexpr std::uint32_t USART_ISR_TXFT_B_0x1 = 1;

    /** @brief USART interrupt and status register */
    using USART_ISR_ALTERNATE1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Parity error */
    using USART_ISR_ALTERNATE1_PE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No parity error (value: 0)
     *          - B_0x1: Parity error (value: 1)
     */
        /** @brief No parity error */
    constexpr std::uint32_t USART_ISR_ALTERNATE1_PE_B_0x0 = 0;
        /** @brief Parity error */
    constexpr std::uint32_t USART_ISR_ALTERNATE1_PE_B_0x1 = 1;

    /** @brief Framing error */
    using USART_ISR_ALTERNATE1_FE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No Framing error is detected (value: 0)
     *          - B_0x1: Framing error or break character is detected (value: 1)
     */
        /** @brief No Framing error is detected */
    constexpr std::uint32_t USART_ISR_ALTERNATE1_FE_B_0x0 = 0;
        /** @brief Framing error or break character is detected */
    constexpr std::uint32_t USART_ISR_ALTERNATE1_FE_B_0x1 = 1;

    /** @brief Noise detection flag */
    using USART_ISR_ALTERNATE1_NE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No noise is detected (value: 0)
     *          - B_0x1: Noise is detected (value: 1)
     */
        /** @brief No noise is detected */
    constexpr std::uint32_t USART_ISR_ALTERNATE1_NE_B_0x0 = 0;
        /** @brief Noise is detected */
    constexpr std::uint32_t USART_ISR_ALTERNATE1_NE_B_0x1 = 1;

    /** @brief Overrun error */
    using USART_ISR_ALTERNATE1_ORE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: Overrun error is detected (value: 1)
     */
        /** @brief Overrun error is detected */
    constexpr std::uint32_t USART_ISR_ALTERNATE1_ORE_B_0x1 = 1;

    /** @brief Idle line detected */
    using USART_ISR_ALTERNATE1_IDLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No Idle line is detected (value: 0)
     *          - B_0x1: Idle line is detected (value: 1)
     */
        /** @brief No Idle line is detected */
    constexpr std::uint32_t USART_ISR_ALTERNATE1_IDLE_B_0x0 = 0;
        /** @brief Idle line is detected */
    constexpr std::uint32_t USART_ISR_ALTERNATE1_IDLE_B_0x1 = 1;

    /** @brief Read data register not empty */
    using USART_ISR_ALTERNATE1_RXNE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Data is not received (value: 0)
     *          - B_0x1: Received data is ready to be read. (value: 1)
     */
        /** @brief Data is not received */
    constexpr std::uint32_t USART_ISR_ALTERNATE1_RXNE_B_0x0 = 0;
        /** @brief Received data is ready to be read. */
    constexpr std::uint32_t USART_ISR_ALTERNATE1_RXNE_B_0x1 = 1;

    /** @brief Transmission complete */
    using USART_ISR_ALTERNATE1_TC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit data register empty */
    using USART_ISR_ALTERNATE1_TXE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Data register full (value: 0)
     *          - B_0x1: Data register empty (value: 1)
     */
        /** @brief Data register full */
    constexpr std::uint32_t USART_ISR_ALTERNATE1_TXE_B_0x0 = 0;
        /** @brief Data register empty */
    constexpr std::uint32_t USART_ISR_ALTERNATE1_TXE_B_0x1 = 1;

    /** @brief LIN break detection flag */
    using USART_ISR_ALTERNATE1_LBDF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: LIN Break not detected (value: 0)
     *          - B_0x1: LIN break detected (value: 1)
     */
        /** @brief LIN Break not detected */
    constexpr std::uint32_t USART_ISR_ALTERNATE1_LBDF_B_0x0 = 0;
        /** @brief LIN break detected */
    constexpr std::uint32_t USART_ISR_ALTERNATE1_LBDF_B_0x1 = 1;

    /** @brief CTS interrupt flag */
    using USART_ISR_ALTERNATE1_CTSIF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No change occurred on the CTS status line (value: 0)
     *          - B_0x1: A change occurred on the CTS status line (value: 1)
     */
        /** @brief No change occurred on the CTS status line */
    constexpr std::uint32_t USART_ISR_ALTERNATE1_CTSIF_B_0x0 = 0;
        /** @brief A change occurred on the CTS status line */
    constexpr std::uint32_t USART_ISR_ALTERNATE1_CTSIF_B_0x1 = 1;

    /** @brief CTS flag */
    using USART_ISR_ALTERNATE1_CTS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CTS line set (value: 0)
     *          - B_0x1: CTS line reset (value: 1)
     */
        /** @brief CTS line set */
    constexpr std::uint32_t USART_ISR_ALTERNATE1_CTS_B_0x0 = 0;
        /** @brief CTS line reset */
    constexpr std::uint32_t USART_ISR_ALTERNATE1_CTS_B_0x1 = 1;

    /** @brief Receiver timeout */
    using USART_ISR_ALTERNATE1_RTOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Timeout value not reached (value: 0)
     *          - B_0x1: Timeout value reached without any data reception (value: 1)
     */
        /** @brief Timeout value not reached */
    constexpr std::uint32_t USART_ISR_ALTERNATE1_RTOF_B_0x0 = 0;
        /** @brief Timeout value reached without any data reception */
    constexpr std::uint32_t USART_ISR_ALTERNATE1_RTOF_B_0x1 = 1;

    /** @brief End of block flag */
    using USART_ISR_ALTERNATE1_EOBF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: End of block not reached (value: 0)
     *          - B_0x1: End of block (number of characters) reached (value: 1)
     */
        /** @brief End of block not reached */
    constexpr std::uint32_t USART_ISR_ALTERNATE1_EOBF_B_0x0 = 0;
        /** @brief End of block (number of characters) reached */
    constexpr std::uint32_t USART_ISR_ALTERNATE1_EOBF_B_0x1 = 1;

    /** @brief SPI slave underrun error flag */
    using USART_ISR_ALTERNATE1_UDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No underrun error (value: 0)
     *          - B_0x1: underrun error (value: 1)
     */
        /** @brief No underrun error */
    constexpr std::uint32_t USART_ISR_ALTERNATE1_UDR_B_0x0 = 0;
        /** @brief underrun error */
    constexpr std::uint32_t USART_ISR_ALTERNATE1_UDR_B_0x1 = 1;

    /** @brief Auto baud rate error */
    using USART_ISR_ALTERNATE1_ABRE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Auto baud rate flag */
    using USART_ISR_ALTERNATE1_ABRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Busy flag */
    using USART_ISR_ALTERNATE1_BUSY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: USART is idle (no reception) (value: 0)
     *          - B_0x1: Reception ongoing (value: 1)
     */
        /** @brief USART is idle (no reception) */
    constexpr std::uint32_t USART_ISR_ALTERNATE1_BUSY_B_0x0 = 0;
        /** @brief Reception ongoing */
    constexpr std::uint32_t USART_ISR_ALTERNATE1_BUSY_B_0x1 = 1;

    /** @brief Character match flag */
    using USART_ISR_ALTERNATE1_CMF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No Character match detected (value: 0)
     *          - B_0x1: Character match detected (value: 1)
     */
        /** @brief No Character match detected */
    constexpr std::uint32_t USART_ISR_ALTERNATE1_CMF_B_0x0 = 0;
        /** @brief Character match detected */
    constexpr std::uint32_t USART_ISR_ALTERNATE1_CMF_B_0x1 = 1;

    /** @brief Send break flag */
    using USART_ISR_ALTERNATE1_SBKF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No break character transmitted (value: 0)
     *          - B_0x1: Break character transmitted (value: 1)
     */
        /** @brief No break character transmitted */
    constexpr std::uint32_t USART_ISR_ALTERNATE1_SBKF_B_0x0 = 0;
        /** @brief Break character transmitted */
    constexpr std::uint32_t USART_ISR_ALTERNATE1_SBKF_B_0x1 = 1;

    /** @brief Receiver wake-up from mute mode */
    using USART_ISR_ALTERNATE1_RWU = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Receiver in active mode (value: 0)
     *          - B_0x1: Receiver in mute mode (value: 1)
     */
        /** @brief Receiver in active mode */
    constexpr std::uint32_t USART_ISR_ALTERNATE1_RWU_B_0x0 = 0;
        /** @brief Receiver in mute mode */
    constexpr std::uint32_t USART_ISR_ALTERNATE1_RWU_B_0x1 = 1;

    /** @brief Wake-up from low-power mode flag */
    using USART_ISR_ALTERNATE1_WUF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit enable acknowledge flag */
    using USART_ISR_ALTERNATE1_TEACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive enable acknowledge flag */
    using USART_ISR_ALTERNATE1_REACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission complete before guard time flag */
    using USART_ISR_ALTERNATE1_TCBGT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Transmission is not complete or transmission is complete unsuccessfully (i. (value: 0)
     *          - B_0x1: Transmission is complete successfully (before Guard time completion and there is no NACK from the smart card). (value: 1)
     */
        /** @brief Transmission is not complete or transmission is complete unsuccessfully (i. */
    constexpr std::uint32_t USART_ISR_ALTERNATE1_TCBGT_B_0x0 = 0;
        /** @brief Transmission is complete successfully (before Guard time completion and there is no NACK from the smart card). */
    constexpr std::uint32_t USART_ISR_ALTERNATE1_TCBGT_B_0x1 = 1;

    /** @brief USART interrupt flag clear register */
    using USART_ICR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Parity error clear flag */
    using USART_ICR_PECF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Framing error clear flag */
    using USART_ICR_FECF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Noise detected clear flag */
    using USART_ICR_NECF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Overrun error clear flag */
    using USART_ICR_ORECF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Idle line detected clear flag */
    using USART_ICR_IDLECF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TXFIFO empty clear flag */
    using USART_ICR_TXFECF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission complete clear flag */
    using USART_ICR_TCCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmission complete before Guard time clear flag */
    using USART_ICR_TCBGTCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief LIN break detection clear flag */
    using USART_ICR_LBDCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CTS clear flag */
    using USART_ICR_CTSCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receiver timeout clear flag */
    using USART_ICR_RTOCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief End of block clear flag */
    using USART_ICR_EOBCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI slave underrun clear flag */
    using USART_ICR_UDRCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Character match clear flag */
    using USART_ICR_CMCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wake-up from low-power mode clear flag */
    using USART_ICR_WUCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USART receive data register */
    using USART_RDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive data value */
    using USART_RDR_RDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USART transmit data register */
    using USART_TDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit data value */
    using USART_TDR_TDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 9, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief USART prescaler register */
    using USART_PRESC = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x2C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clock prescaler */
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
