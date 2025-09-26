/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32N645_PSSI_HPP
#define EMBEDDED_PP_STM32N645_PSSI_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Parallel synchronous slave interface */
namespace STM32N645::PSSI {

    /** @brief PSSI control register */
    using PSSI_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Parallel data clock polarity */
    using PSSI_CR_CKPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Falling edge active for inputs or rising edge active for outputs (value: 0)
     *          - B_0x1: Rising edge active for inputs or falling edge active for outputs. (value: 1)
     */
        /** @brief Falling edge active for inputs or rising edge active for outputs */
    constexpr std::uint32_t PSSI_CR_CKPOL_B_0x0 = 0;
        /** @brief Rising edge active for inputs or falling edge active for outputs. */
    constexpr std::uint32_t PSSI_CR_CKPOL_B_0x1 = 1;

    /** @brief Data enable (PSSI_DE) polarity */
    using PSSI_CR_DEPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PSSI_DE active low (0 indicates that data is valid) (value: 0)
     *          - B_0x1: PSSI_DE active high (1 indicates that data is valid) (value: 1)
     */
        /** @brief PSSI_DE active low (0 indicates that data is valid) */
    constexpr std::uint32_t PSSI_CR_DEPOL_B_0x0 = 0;
        /** @brief PSSI_DE active high (1 indicates that data is valid) */
    constexpr std::uint32_t PSSI_CR_DEPOL_B_0x1 = 1;

    /** @brief Ready (PSSI_RDY) polarity */
    using PSSI_CR_RDYPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PSSI_RDY active low (0 indicates that the receiver is ready to receive) (value: 0)
     *          - B_0x1: PSSI_RDY active high (1 indicates that the receiver is ready to receive) (value: 1)
     */
        /** @brief PSSI_RDY active low (0 indicates that the receiver is ready to receive) */
    constexpr std::uint32_t PSSI_CR_RDYPOL_B_0x0 = 0;
        /** @brief PSSI_RDY active high (1 indicates that the receiver is ready to receive) */
    constexpr std::uint32_t PSSI_CR_RDYPOL_B_0x1 = 1;

    /** @brief Extended data mode */
    using PSSI_CR_EDM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interface captures 8-bit data on every parallel data clock (value: 0)
     *          - B_0x3: The interface captures 16-bit data on every parallel data clock (value: 3)
     */
        /** @brief Interface captures 8-bit data on every parallel data clock */
    constexpr std::uint32_t PSSI_CR_EDM_B_0x0 = 0;
        /** @brief The interface captures 16-bit data on every parallel data clock */
    constexpr std::uint32_t PSSI_CR_EDM_B_0x3 = 3;

    /** @brief PSSI enable */
    using PSSI_CR_ENABLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PSSI disabled (value: 0)
     *          - B_0x1: PSSI enabled (value: 1)
     */
        /** @brief PSSI disabled */
    constexpr std::uint32_t PSSI_CR_ENABLE_B_0x0 = 0;
        /** @brief PSSI enabled */
    constexpr std::uint32_t PSSI_CR_ENABLE_B_0x1 = 1;

    /** @brief Data enable and ready configuration */
    using PSSI_CR_DERDYCFG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PSSI_DE and PSSI_RDY both disabled (value: 0)
     *          - B_0x1: Only PSSI_RDY enabled (value: 1)
     *          - B_0x2: Only PSSI_DE enabled (value: 2)
     *          - B_0x3: Both PSSI_RDY and PSSI_DE alternate functions enabled (value: 3)
     *          - B_0x4: Both PSSI_RDY and PSSI_DE features enabled - bidirectional on PSSI_RDY pin (see Bidirectional PSSI_DE/PSSI_RDY signal on page 2004) (value: 4)
     *          - B_0x5: Only PSSI_RDY function enabled, but mapped to PSSI_DE pin (value: 5)
     *          - B_0x6: Only PSSI_DE function enabled, but mapped to PSSI_RDY pin (value: 6)
     *          - B_0x7: Both PSSI_RDY and PSSI_DE features enabled - bidirectional on PSSI_DE pin (see Bidirectional PSSI_DE/PSSI_RDY signal on page 2004) (value: 7)
     */
        /** @brief PSSI_DE and PSSI_RDY both disabled */
    constexpr std::uint32_t PSSI_CR_DERDYCFG_B_0x0 = 0;
        /** @brief Only PSSI_RDY enabled */
    constexpr std::uint32_t PSSI_CR_DERDYCFG_B_0x1 = 1;
        /** @brief Only PSSI_DE enabled */
    constexpr std::uint32_t PSSI_CR_DERDYCFG_B_0x2 = 2;
        /** @brief Both PSSI_RDY and PSSI_DE alternate functions enabled */
    constexpr std::uint32_t PSSI_CR_DERDYCFG_B_0x3 = 3;
        /** @brief Both PSSI_RDY and PSSI_DE features enabled - bidirectional on PSSI_RDY pin (see Bidirectional PSSI_DE/PSSI_RDY signal on page 2004) */
    constexpr std::uint32_t PSSI_CR_DERDYCFG_B_0x4 = 4;
        /** @brief Only PSSI_RDY function enabled, but mapped to PSSI_DE pin */
    constexpr std::uint32_t PSSI_CR_DERDYCFG_B_0x5 = 5;
        /** @brief Only PSSI_DE function enabled, but mapped to PSSI_RDY pin */
    constexpr std::uint32_t PSSI_CR_DERDYCFG_B_0x6 = 6;
        /** @brief Both PSSI_RDY and PSSI_DE features enabled - bidirectional on PSSI_DE pin (see Bidirectional PSSI_DE/PSSI_RDY signal on page 2004) */
    constexpr std::uint32_t PSSI_CR_DERDYCFG_B_0x7 = 7;

    /** @brief Clock source */
    using PSSI_CR_CKSRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: External clock (PSSI_PDCK in input) (value: 0)
     *          - B_0x1: Internal clock (PSSI_PDCK in output) (value: 1)
     */
        /** @brief External clock (PSSI_PDCK in input) */
    constexpr std::uint32_t PSSI_CR_CKSRC_B_0x0 = 0;
        /** @brief Internal clock (PSSI_PDCK in output) */
    constexpr std::uint32_t PSSI_CR_CKSRC_B_0x1 = 1;

    /** @brief DMA enable bit */
    using PSSI_CR_DMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DMA transfers are disabled. The user application can directly access the PSSI_DR register when DMA transfers are disabled. (value: 0)
     *          - B_0x1: DMA transfers are enabled (default configuration). A DMA channel in the general-purpose DMA controller must be configured to perform transfers from/to PSSI_DR. (value: 1)
     */
        /** @brief DMA transfers are disabled. The user application can directly access the PSSI_DR register when DMA transfers are disabled. */
    constexpr std::uint32_t PSSI_CR_DMAEN_B_0x0 = 0;
        /** @brief DMA transfers are enabled (default configuration). A DMA channel in the general-purpose DMA controller must be configured to perform transfers from/to PSSI_DR. */
    constexpr std::uint32_t PSSI_CR_DMAEN_B_0x1 = 1;

    /** @brief Data direction selection bit */
    using PSSI_CR_OUTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Receive mode: data is input synchronously with PSSI_PDCK (value: 0)
     *          - B_0x1: Transmit mode: data is output synchronously with PSSI_PDCK (value: 1)
     */
        /** @brief Receive mode: data is input synchronously with PSSI_PDCK */
    constexpr std::uint32_t PSSI_CR_OUTEN_B_0x0 = 0;
        /** @brief Transmit mode: data is output synchronously with PSSI_PDCK */
    constexpr std::uint32_t PSSI_CR_OUTEN_B_0x1 = 1;

    /** @brief PSSI status register */
    using PSSI_SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FIFO is ready to transfer four bytes */
    using PSSI_SR_RTT4B = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: FIFO is ready for a four-byte (32-bit) transfer. In receive mode, this means that at least four valid data bytes are in the FIFO. In transmit mode, this means that there are at least four bytes free in the FIFO. (value: 1)
     *          - B_0x0: FIFO is not ready for a four-byte transfer (value: 0)
     */
        /** @brief FIFO is ready for a four-byte (32-bit) transfer. In receive mode, this means that at least four valid data bytes are in the FIFO. In transmit mode, this means that there are at least four bytes free in the FIFO. */
    constexpr std::uint32_t PSSI_SR_RTT4B_B_0x1 = 1;
        /** @brief FIFO is not ready for a four-byte transfer */
    constexpr std::uint32_t PSSI_SR_RTT4B_B_0x0 = 0;

    /** @brief FIFO is ready to transfer one byte */
    using PSSI_SR_RTT1B = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: FIFO is ready for a one byte (32-bit) transfer. In receive mode, this means that at least one valid data byte is in the FIFO. In transmit mode, this means that there is at least one byte free in the FIFO. (value: 1)
     *          - B_0x0: FIFO is not ready for a 1-byte transfer (value: 0)
     */
        /** @brief FIFO is ready for a one byte (32-bit) transfer. In receive mode, this means that at least one valid data byte is in the FIFO. In transmit mode, this means that there is at least one byte free in the FIFO. */
    constexpr std::uint32_t PSSI_SR_RTT1B_B_0x1 = 1;
        /** @brief FIFO is not ready for a 1-byte transfer */
    constexpr std::uint32_t PSSI_SR_RTT1B_B_0x0 = 0;

    /** @brief PSSI raw interrupt status register */
    using PSSI_RIS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data buffer overrun/underrun raw interrupt status */
    using PSSI_RIS_OVR_RIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No overrun/underrun occurred (value: 0)
     *          - B_0x1: An overrun/underrun occurred: overrun in receive mode, underrun in transmit mode. (value: 1)
     */
        /** @brief No overrun/underrun occurred */
    constexpr std::uint32_t PSSI_RIS_OVR_RIS_B_0x0 = 0;
        /** @brief An overrun/underrun occurred: overrun in receive mode, underrun in transmit mode. */
    constexpr std::uint32_t PSSI_RIS_OVR_RIS_B_0x1 = 1;

    /** @brief PSSI interrupt enable register */
    using PSSI_IER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data buffer overrun/underrun interrupt enable */
    using PSSI_IER_OVR_IE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No interrupt generation (value: 0)
     *          - B_0x1: An interrupt is generated if either an overrun or an underrun error occurred. (value: 1)
     */
        /** @brief No interrupt generation */
    constexpr std::uint32_t PSSI_IER_OVR_IE_B_0x0 = 0;
        /** @brief An interrupt is generated if either an overrun or an underrun error occurred. */
    constexpr std::uint32_t PSSI_IER_OVR_IE_B_0x1 = 1;

    /** @brief PSSI masked interrupt status register */
    using PSSI_MIS = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data buffer overrun/underrun masked interrupt status */
    using PSSI_MIS_OVR_MIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No interrupt is generated when an overrun/underrun error occurs (value: 0)
     *          - B_0x1: An interrupt is generated if there is either an overrun or an underrun error and the OVR_IE bit is set in PSSI_IER. (value: 1)
     */
        /** @brief No interrupt is generated when an overrun/underrun error occurs */
    constexpr std::uint32_t PSSI_MIS_OVR_MIS_B_0x0 = 0;
        /** @brief An interrupt is generated if there is either an overrun or an underrun error and the OVR_IE bit is set in PSSI_IER. */
    constexpr std::uint32_t PSSI_MIS_OVR_MIS_B_0x1 = 1;

    /** @brief PSSI interrupt clear register */
    using PSSI_ICR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data buffer overrun/underrun interrupt status clear */
    using PSSI_ICR_OVR_ISC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PSSI data register */
    using PSSI_DR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data byte 0 */
    using PSSI_DR_BYTE0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data byte 1 */
    using PSSI_DR_BYTE1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data byte 2 */
    using PSSI_DR_BYTE2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data byte 3 */
    using PSSI_DR_BYTE3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
