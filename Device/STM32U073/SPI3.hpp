/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32U073_SPI3_HPP
#define EMBEDDED_PP_STM32U073_SPI3_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief SPI address block description */
namespace STM32U073::SPI3 {

    /** @brief SPI control register 1 */
    using SPI_CR1 = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clock phase Note: This bit should not be changed when communication is ongoing. Note: This bit is not used in SPI TI mode except the case when CRC is applied at TI mode. */
    using SPI_CR1_CPHA = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The first clock transition is the first data capture edge (value: 0)
     *          - B_0x1: The second clock transition is the first data capture edge (value: 1)
     */
        /** @brief The first clock transition is the first data capture edge */
    constexpr std::uint16_t SPI_CR1_CPHA_B_0x0 = 0;
        /** @brief The second clock transition is the first data capture edge */
    constexpr std::uint16_t SPI_CR1_CPHA_B_0x1 = 1;

    /** @brief Clock polarity Note: This bit should not be changed when communication is ongoing. Note: This bit is not used in SPI TI mode except the case when CRC is applied at TI mode. */
    using SPI_CR1_CPOL = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CK to 0 when idle (value: 0)
     *          - B_0x1: CK to 1 when idle (value: 1)
     */
        /** @brief CK to 0 when idle */
    constexpr std::uint16_t SPI_CR1_CPOL_B_0x0 = 0;
        /** @brief CK to 1 when idle */
    constexpr std::uint16_t SPI_CR1_CPOL_B_0x1 = 1;

    /** @brief Master selection Note: This bit should not be changed when communication is ongoing. */
    using SPI_CR1_MSTR = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Slave configuration (value: 0)
     *          - B_0x1: Master configuration (value: 1)
     */
        /** @brief Slave configuration */
    constexpr std::uint16_t SPI_CR1_MSTR_B_0x0 = 0;
        /** @brief Master configuration */
    constexpr std::uint16_t SPI_CR1_MSTR_B_0x1 = 1;

    /** @brief Baud rate control Note: These bits should not be changed when communication is ongoing. */
    using SPI_CR1_BR = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 3, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: f<sub>PCLK</sub>/2 (value: 0)
     *          - B_0x1: f<sub>PCLK</sub>/4 (value: 1)
     *          - B_0x2: f<sub>PCLK</sub>/8 (value: 2)
     *          - B_0x3: f<sub>PCLK</sub>/16 (value: 3)
     *          - B_0x4: f<sub>PCLK</sub>/32 (value: 4)
     *          - B_0x5: f<sub>PCLK</sub>/64 (value: 5)
     *          - B_0x6: f<sub>PCLK</sub>/128 (value: 6)
     *          - B_0x7: f<sub>PCLK</sub>/256 (value: 7)
     */
        /** @brief f<sub>PCLK</sub>/2 */
    constexpr std::uint16_t SPI_CR1_BR_B_0x0 = 0;
        /** @brief f<sub>PCLK</sub>/4 */
    constexpr std::uint16_t SPI_CR1_BR_B_0x1 = 1;
        /** @brief f<sub>PCLK</sub>/8 */
    constexpr std::uint16_t SPI_CR1_BR_B_0x2 = 2;
        /** @brief f<sub>PCLK</sub>/16 */
    constexpr std::uint16_t SPI_CR1_BR_B_0x3 = 3;
        /** @brief f<sub>PCLK</sub>/32 */
    constexpr std::uint16_t SPI_CR1_BR_B_0x4 = 4;
        /** @brief f<sub>PCLK</sub>/64 */
    constexpr std::uint16_t SPI_CR1_BR_B_0x5 = 5;
        /** @brief f<sub>PCLK</sub>/128 */
    constexpr std::uint16_t SPI_CR1_BR_B_0x6 = 6;
        /** @brief f<sub>PCLK</sub>/256 */
    constexpr std::uint16_t SPI_CR1_BR_B_0x7 = 7;

    /** @brief SPI enable Note: When disabling the SPI, follow the procedure described in Procedure for disabling the SPI on page1954. */
    using SPI_CR1_SPE = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Peripheral disabled (value: 0)
     *          - B_0x1: Peripheral enabled (value: 1)
     */
        /** @brief Peripheral disabled */
    constexpr std::uint16_t SPI_CR1_SPE_B_0x0 = 0;
        /** @brief Peripheral enabled */
    constexpr std::uint16_t SPI_CR1_SPE_B_0x1 = 1;

    /** @brief Frame format Note: 1. This bit should not be changed when communication is ongoing. Note: 2. This bit is not used in SPI TI mode. */
    using SPI_CR1_LSBFIRST = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: data is transmitted / received with the MSB first (value: 0)
     *          - B_0x1: data is transmitted / received with the LSB first (value: 1)
     */
        /** @brief data is transmitted / received with the MSB first */
    constexpr std::uint16_t SPI_CR1_LSBFIRST_B_0x0 = 0;
        /** @brief data is transmitted / received with the LSB first */
    constexpr std::uint16_t SPI_CR1_LSBFIRST_B_0x1 = 1;

    /** @brief Internal slave select This bit has an effect only when the SSM bit is set. The value of this bit is forced onto the NSS pin and the I/O value of the NSS pin is ignored. Note: This bit is not used in SPI TI mode. */
    using SPI_CR1_SSI = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software slave management When the SSM bit is set, the NSS pin input is replaced with the value from the SSI bit. Note: This bit is not used in SPI TI mode. */
    using SPI_CR1_SSM = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Software slave management disabled (value: 0)
     *          - B_0x1: Software slave management enabled (value: 1)
     */
        /** @brief Software slave management disabled */
    constexpr std::uint16_t SPI_CR1_SSM_B_0x0 = 0;
        /** @brief Software slave management enabled */
    constexpr std::uint16_t SPI_CR1_SSM_B_0x1 = 1;

    /** @brief Receive only mode enabled. This bit enables simplex communication using a single unidirectional line to receive data exclusively. Keep BIDIMODE bit clear when receive only mode is active.This bit is also useful in a multislave system in which this particular slave is not accessed, the output from the accessed slave is not corrupted. */
    using SPI_CR1_RXONLY = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Full-duplex (Transmit and receive) (value: 0)
     *          - B_0x1: Output disabled (Receive-only mode) (value: 1)
     */
        /** @brief Full-duplex (Transmit and receive) */
    constexpr std::uint16_t SPI_CR1_RXONLY_B_0x0 = 0;
        /** @brief Output disabled (Receive-only mode) */
    constexpr std::uint16_t SPI_CR1_RXONLY_B_0x1 = 1;

    /** @brief CRC length This bit is set and cleared by software to select the CRC length. Note: This bit should be written only when SPI is disabled (SPE = 0) for correct operation. */
    using SPI_CR1_CRCL = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 8-bit CRC length (value: 0)
     *          - B_0x1: 16-bit CRC length (value: 1)
     */
        /** @brief 8-bit CRC length */
    constexpr std::uint16_t SPI_CR1_CRCL_B_0x0 = 0;
        /** @brief 16-bit CRC length */
    constexpr std::uint16_t SPI_CR1_CRCL_B_0x1 = 1;

    /** @brief Transmit CRC next Note: This bit has to be written as soon as the last data is written in the SPI_DR register. */
    using SPI_CR1_CRCNEXT = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Next transmit value is from Tx buffer. (value: 0)
     *          - B_0x1: Next transmit value is from Tx CRC register. (value: 1)
     */
        /** @brief Next transmit value is from Tx buffer. */
    constexpr std::uint16_t SPI_CR1_CRCNEXT_B_0x0 = 0;
        /** @brief Next transmit value is from Tx CRC register. */
    constexpr std::uint16_t SPI_CR1_CRCNEXT_B_0x1 = 1;

    /** @brief Hardware CRC calculation enable Note: This bit should be written only when SPI is disabled (SPE = 0) for correct operation. */
    using SPI_CR1_CRCEN = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CRC calculation disabled (value: 0)
     *          - B_0x1: CRC calculation enabled (value: 1)
     */
        /** @brief CRC calculation disabled */
    constexpr std::uint16_t SPI_CR1_CRCEN_B_0x0 = 0;
        /** @brief CRC calculation enabled */
    constexpr std::uint16_t SPI_CR1_CRCEN_B_0x1 = 1;

    /** @brief Output enable in bidirectional mode This bit combined with the BIDIMODE bit selects the direction of transfer in bidirectional mode. Note: In master mode, the MOSI pin is used and in slave mode, the MISO pin is used. */
    using SPI_CR1_BIDIOE = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Output disabled (receive-only mode) (value: 0)
     *          - B_0x1: Output enabled (transmit-only mode) (value: 1)
     */
        /** @brief Output disabled (receive-only mode) */
    constexpr std::uint16_t SPI_CR1_BIDIOE_B_0x0 = 0;
        /** @brief Output enabled (transmit-only mode) */
    constexpr std::uint16_t SPI_CR1_BIDIOE_B_0x1 = 1;

    /** @brief Bidirectional data mode enable. This bit enables half-duplex communication using common single bidirectional data line. Keep RXONLY bit clear when bidirectional mode is active. */
    using SPI_CR1_BIDIMODE = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 2-line unidirectional data mode selected (value: 0)
     *          - B_0x1: 1-line bidirectional data mode selected (value: 1)
     */
        /** @brief 2-line unidirectional data mode selected */
    constexpr std::uint16_t SPI_CR1_BIDIMODE_B_0x0 = 0;
        /** @brief 1-line bidirectional data mode selected */
    constexpr std::uint16_t SPI_CR1_BIDIMODE_B_0x1 = 1;

    /** @brief SPI control register 2 */
    using SPI_CR2 = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx buffer DMA enable When this bit is set, a DMA request is generated whenever the RXNE flag is set. */
    using SPI_CR2_RXDMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rx buffer DMA disabled (value: 0)
     *          - B_0x1: Rx buffer DMA enabled (value: 1)
     */
        /** @brief Rx buffer DMA disabled */
    constexpr std::uint16_t SPI_CR2_RXDMAEN_B_0x0 = 0;
        /** @brief Rx buffer DMA enabled */
    constexpr std::uint16_t SPI_CR2_RXDMAEN_B_0x1 = 1;

    /** @brief Tx buffer DMA enable When this bit is set, a DMA request is generated whenever the TXE flag is set. */
    using SPI_CR2_TXDMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tx buffer DMA disabled (value: 0)
     *          - B_0x1: Tx buffer DMA enabled (value: 1)
     */
        /** @brief Tx buffer DMA disabled */
    constexpr std::uint16_t SPI_CR2_TXDMAEN_B_0x0 = 0;
        /** @brief Tx buffer DMA enabled */
    constexpr std::uint16_t SPI_CR2_TXDMAEN_B_0x1 = 1;

    /** @brief SS output enable Note: This bit is not used in SPI TI mode. */
    using SPI_CR2_SSOE = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SS output is disabled in master mode and the SPI interface can work in multimaster configuration (value: 0)
     *          - B_0x1: SS output is enabled in master mode and when the SPI interface is enabled. The SPI interface cannot work in a multimaster environment. (value: 1)
     */
        /** @brief SS output is disabled in master mode and the SPI interface can work in multimaster configuration */
    constexpr std::uint16_t SPI_CR2_SSOE_B_0x0 = 0;
        /** @brief SS output is enabled in master mode and when the SPI interface is enabled. The SPI interface cannot work in a multimaster environment. */
    constexpr std::uint16_t SPI_CR2_SSOE_B_0x1 = 1;

    /** @brief NSS pulse management This bit is used in master mode only. it allows the SPI to generate an NSS pulse between two consecutive data when doing continuous transfers. In the case of a single data transfer, it forces the NSS pin high level after the transfer. It has no meaning if CPHA = 1, or FRF = 1. Note: 1. This bit must be written only when the SPI is disabled (SPE=0). Note: 2. This bit is not used in SPI TI mode. */
    using SPI_CR2_NSSP = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No NSS pulse (value: 0)
     *          - B_0x1: NSS pulse generated (value: 1)
     */
        /** @brief No NSS pulse */
    constexpr std::uint16_t SPI_CR2_NSSP_B_0x0 = 0;
        /** @brief NSS pulse generated */
    constexpr std::uint16_t SPI_CR2_NSSP_B_0x1 = 1;

    /** @brief Frame format 1 SPI TI mode Note: This bit must be written only when the SPI is disabled (SPE=0). */
    using SPI_CR2_FRF = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI Motorola mode (value: 0)
     */
        /** @brief SPI Motorola mode */
    constexpr std::uint16_t SPI_CR2_FRF_B_0x0 = 0;

    /** @brief Error interrupt enable This bit controls the generation of an interrupt when an error condition occurs (CRCERR, OVR, MODF in SPI mode, FRE at TI mode). */
    using SPI_CR2_ERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Error interrupt is masked (value: 0)
     *          - B_0x1: Error interrupt is enabled (value: 1)
     */
        /** @brief Error interrupt is masked */
    constexpr std::uint16_t SPI_CR2_ERRIE_B_0x0 = 0;
        /** @brief Error interrupt is enabled */
    constexpr std::uint16_t SPI_CR2_ERRIE_B_0x1 = 1;

    /** @brief RX buffer not empty interrupt enable */
    using SPI_CR2_RXNEIE = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RXNE interrupt masked (value: 0)
     *          - B_0x1: RXNE interrupt not masked. Used to generate an interrupt request when the RXNE flag is set. (value: 1)
     */
        /** @brief RXNE interrupt masked */
    constexpr std::uint16_t SPI_CR2_RXNEIE_B_0x0 = 0;
        /** @brief RXNE interrupt not masked. Used to generate an interrupt request when the RXNE flag is set. */
    constexpr std::uint16_t SPI_CR2_RXNEIE_B_0x1 = 1;

    /** @brief Tx buffer empty interrupt enable */
    using SPI_CR2_TXEIE = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TXE interrupt masked (value: 0)
     *          - B_0x1: TXE interrupt not masked. Used to generate an interrupt request when the TXE flag is set. (value: 1)
     */
        /** @brief TXE interrupt masked */
    constexpr std::uint16_t SPI_CR2_TXEIE_B_0x0 = 0;
        /** @brief TXE interrupt not masked. Used to generate an interrupt request when the TXE flag is set. */
    constexpr std::uint16_t SPI_CR2_TXEIE_B_0x1 = 1;

    /** @brief Data size These bits configure the data length for SPI transfers. If software attempts to write one of the Not used values, they are forced to the value 0111 (8-bit) */
    using SPI_CR2_DS = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Not used (value: 0)
     *          - B_0x1: Not used (value: 1)
     *          - B_0x2: Not used (value: 2)
     *          - B_0x3: 4-bit (value: 3)
     *          - B_0x4: 5-bit (value: 4)
     *          - B_0x5: 6-bit (value: 5)
     *          - B_0x6: 7-bit (value: 6)
     *          - B_0x7: 8-bit (value: 7)
     *          - B_0x8: 9-bit (value: 8)
     *          - B_0x9: 10-bit (value: 9)
     *          - B_0xA: 11-bit (value: 10)
     *          - B_0xB: 12-bit (value: 11)
     *          - B_0xC: 13-bit (value: 12)
     *          - B_0xD: 14-bit (value: 13)
     *          - B_0xE: 15-bit (value: 14)
     *          - B_0xF: 16-bit (value: 15)
     */
        /** @brief Not used */
    constexpr std::uint16_t SPI_CR2_DS_B_0x0 = 0;
        /** @brief Not used */
    constexpr std::uint16_t SPI_CR2_DS_B_0x1 = 1;
        /** @brief Not used */
    constexpr std::uint16_t SPI_CR2_DS_B_0x2 = 2;
        /** @brief 4-bit */
    constexpr std::uint16_t SPI_CR2_DS_B_0x3 = 3;
        /** @brief 5-bit */
    constexpr std::uint16_t SPI_CR2_DS_B_0x4 = 4;
        /** @brief 6-bit */
    constexpr std::uint16_t SPI_CR2_DS_B_0x5 = 5;
        /** @brief 7-bit */
    constexpr std::uint16_t SPI_CR2_DS_B_0x6 = 6;
        /** @brief 8-bit */
    constexpr std::uint16_t SPI_CR2_DS_B_0x7 = 7;
        /** @brief 9-bit */
    constexpr std::uint16_t SPI_CR2_DS_B_0x8 = 8;
        /** @brief 10-bit */
    constexpr std::uint16_t SPI_CR2_DS_B_0x9 = 9;
        /** @brief 11-bit */
    constexpr std::uint16_t SPI_CR2_DS_B_0xA = 10;
        /** @brief 12-bit */
    constexpr std::uint16_t SPI_CR2_DS_B_0xB = 11;
        /** @brief 13-bit */
    constexpr std::uint16_t SPI_CR2_DS_B_0xC = 12;
        /** @brief 14-bit */
    constexpr std::uint16_t SPI_CR2_DS_B_0xD = 13;
        /** @brief 15-bit */
    constexpr std::uint16_t SPI_CR2_DS_B_0xE = 14;
        /** @brief 16-bit */
    constexpr std::uint16_t SPI_CR2_DS_B_0xF = 15;

    /** @brief FIFO reception threshold This bit is used to set the threshold of the RXFIFO that triggers an RXNE event */
    using SPI_CR2_FRXTH = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RXNE event is generated if the FIFO level is greater than or equal to 1/2 (16-bit) (value: 0)
     *          - B_0x1: RXNE event is generated if the FIFO level is greater than or equal to 1/4 (8-bit) (value: 1)
     */
        /** @brief RXNE event is generated if the FIFO level is greater than or equal to 1/2 (16-bit) */
    constexpr std::uint16_t SPI_CR2_FRXTH_B_0x0 = 0;
        /** @brief RXNE event is generated if the FIFO level is greater than or equal to 1/4 (8-bit) */
    constexpr std::uint16_t SPI_CR2_FRXTH_B_0x1 = 1;

    /** @brief Last DMA transfer for reception This bit is used in data packing mode, to define if the total number of data to receive by DMA is odd or even. It has significance only if the RXDMAEN bit in the SPI_CR2 register is set and if packing mode is used (data length =< 8-bit and write access to SPI_DR is 16-bit wide). It has to be written when the SPI is disabled (SPE = 0 in the SPI_CR1 register). Note: Refer to Procedure for disabling the SPI on page1954 if the CRCEN bit is set. */
    using SPI_CR2_LDMA_RX = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Number of data to transfer is even (value: 0)
     *          - B_0x1: Number of data to transfer is odd (value: 1)
     */
        /** @brief Number of data to transfer is even */
    constexpr std::uint16_t SPI_CR2_LDMA_RX_B_0x0 = 0;
        /** @brief Number of data to transfer is odd */
    constexpr std::uint16_t SPI_CR2_LDMA_RX_B_0x1 = 1;

    /** @brief Last DMA transfer for transmission This bit is used in data packing mode, to define if the total number of data to transmit by DMA is odd or even. It has significance only if the TXDMAEN bit in the SPI_CR2 register is set and if packing mode is used (data length =< 8-bit and write access to SPI_DR is 16-bit wide). It has to be written when the SPI is disabled (SPE = 0 in the SPI_CR1 register). Note: Refer to Procedure for disabling the SPI on page1954 if the CRCEN bit is set. */
    using SPI_CR2_LDMA_TX = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Number of data to transfer is even (value: 0)
     *          - B_0x1: Number of data to transfer is odd (value: 1)
     */
        /** @brief Number of data to transfer is even */
    constexpr std::uint16_t SPI_CR2_LDMA_TX_B_0x0 = 0;
        /** @brief Number of data to transfer is odd */
    constexpr std::uint16_t SPI_CR2_LDMA_TX_B_0x1 = 1;

    /** @brief SPI status register */
    using SPI_SR = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive buffer not empty */
    using SPI_SR_RXNE = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rx buffer empty (value: 0)
     *          - B_0x1: Rx buffer not empty (value: 1)
     */
        /** @brief Rx buffer empty */
    constexpr std::uint16_t SPI_SR_RXNE_B_0x0 = 0;
        /** @brief Rx buffer not empty */
    constexpr std::uint16_t SPI_SR_RXNE_B_0x1 = 1;

    /** @brief Transmit buffer empty */
    using SPI_SR_TXE = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tx buffer not empty (value: 0)
     *          - B_0x1: Tx buffer empty (value: 1)
     */
        /** @brief Tx buffer not empty */
    constexpr std::uint16_t SPI_SR_TXE_B_0x0 = 0;
        /** @brief Tx buffer empty */
    constexpr std::uint16_t SPI_SR_TXE_B_0x1 = 1;

    /** @brief CRC error flag Note: This flag is set by hardware and cleared by software writing 0. */
    using SPI_SR_CRCERR = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CRC value received matches the SPI_RXCRCR value (value: 0)
     *          - B_0x1: CRC value received does not match the SPI_RXCRCR value (value: 1)
     */
        /** @brief CRC value received matches the SPI_RXCRCR value */
    constexpr std::uint16_t SPI_SR_CRCERR_B_0x0 = 0;
        /** @brief CRC value received does not match the SPI_RXCRCR value */
    constexpr std::uint16_t SPI_SR_CRCERR_B_0x1 = 1;

    /** @brief Mode fault This flag is set by hardware and reset by a software sequence. Refer to Section1: Mode fault (MODF) on page1964 for the software sequence. */
    using SPI_SR_MODF = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No mode fault occurred (value: 0)
     *          - B_0x1: Mode fault occurred (value: 1)
     */
        /** @brief No mode fault occurred */
    constexpr std::uint16_t SPI_SR_MODF_B_0x0 = 0;
        /** @brief Mode fault occurred */
    constexpr std::uint16_t SPI_SR_MODF_B_0x1 = 1;

    /** @brief Overrun flag This flag is set by hardware and reset by a software sequence. */
    using SPI_SR_OVR = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No overrun occurred (value: 0)
     *          - B_0x1: Overrun occurred (value: 1)
     */
        /** @brief No overrun occurred */
    constexpr std::uint16_t SPI_SR_OVR_B_0x0 = 0;
        /** @brief Overrun occurred */
    constexpr std::uint16_t SPI_SR_OVR_B_0x1 = 1;

    /** @brief Busy flag This flag is set and cleared by hardware. Note: The BSY flag must be used with caution: refer to Section133.4.10: SPI status flags and Procedure for disabling the SPI on page1954. */
    using SPI_SR_BSY = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI not busy (value: 0)
     *          - B_0x1: SPI is busy in communication or Tx buffer is not empty (value: 1)
     */
        /** @brief SPI not busy */
    constexpr std::uint16_t SPI_SR_BSY_B_0x0 = 0;
        /** @brief SPI is busy in communication or Tx buffer is not empty */
    constexpr std::uint16_t SPI_SR_BSY_B_0x1 = 1;

    /** @brief Frame format error This flag is used for SPI in TI slave mode. Refer to Section133.4.11: SPI error flags. This flag is set by hardware and reset when SPI_SR is read by software. */
    using SPI_SR_FRE = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No frame format error (value: 0)
     *          - B_0x1: A frame format error occurred (value: 1)
     */
        /** @brief No frame format error */
    constexpr std::uint16_t SPI_SR_FRE_B_0x0 = 0;
        /** @brief A frame format error occurred */
    constexpr std::uint16_t SPI_SR_FRE_B_0x1 = 1;

    /** @brief FIFO reception level These bits are set and cleared by hardware. Note: These bits are not used in SPI receive-only mode while CRC calculation is enabled. */
    using SPI_SR_FRLVL = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 9, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FIFO empty (value: 0)
     *          - B_0x1: 1/4 FIFO (value: 1)
     *          - B_0x2: 1/2 FIFO (value: 2)
     *          - B_0x3: FIFO full (value: 3)
     */
        /** @brief FIFO empty */
    constexpr std::uint16_t SPI_SR_FRLVL_B_0x0 = 0;
        /** @brief 1/4 FIFO */
    constexpr std::uint16_t SPI_SR_FRLVL_B_0x1 = 1;
        /** @brief 1/2 FIFO */
    constexpr std::uint16_t SPI_SR_FRLVL_B_0x2 = 2;
        /** @brief FIFO full */
    constexpr std::uint16_t SPI_SR_FRLVL_B_0x3 = 3;

    /** @brief FIFO transmission level These bits are set and cleared by hardware. */
    using SPI_SR_FTLVL = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 11, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FIFO empty (value: 0)
     *          - B_0x1: 1/4 FIFO (value: 1)
     *          - B_0x2: 1/2 FIFO (value: 2)
     *          - B_0x3: FIFO full (considered as FULL when the FIFO threshold is greater than 1/2) (value: 3)
     */
        /** @brief FIFO empty */
    constexpr std::uint16_t SPI_SR_FTLVL_B_0x0 = 0;
        /** @brief 1/4 FIFO */
    constexpr std::uint16_t SPI_SR_FTLVL_B_0x1 = 1;
        /** @brief 1/2 FIFO */
    constexpr std::uint16_t SPI_SR_FTLVL_B_0x2 = 2;
        /** @brief FIFO full (considered as FULL when the FIFO threshold is greater than 1/2) */
    constexpr std::uint16_t SPI_SR_FTLVL_B_0x3 = 3;

    /** @brief SPI data register */
    using SPI_DR = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data register Data received or to be transmitted The data register serves as an interface between the Rx and Tx FIFOs. When the data register is read, RxFIFO is accessed while the write to data register accesses TxFIFO (See Section133.4.9: Data transmission and reception procedures). Note: Data is always right-aligned. Unused bits are ignored when writing to the register, and read as zero when the register is read. The Rx threshold setting must always correspond with the read access currently used. */
    using SPI_DR_DR = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI CRC polynomial register */
    using SPI_CRCPR = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRC polynomial register This register contains the polynomial for the CRC calculation. The CRC polynomial (0x0007) is the reset value of this register. Another polynomial can be configured as required. */
    using SPI_CRCPR_CRCPOLY = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI Rx CRC register */
    using SPI_RXCRCR = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx CRC register When CRC calculation is enabled, the RXCRC[15:0] bits contain the computed CRC value of the subsequently received bytes. This register is reset when the CRCEN bit in SPI_CR1 register is written to 1. The CRC is calculated serially using the polynomial programmed in the SPI_CRCPR register. Only the 8 LSB bits are considered when the CRC frame format is set to be 8-bit length (CRCL bit in the SPI_CR1 is cleared). CRC calculation is done based on any CRC8 standard. The entire 16-bits of this register are considered when a 16-bit CRC frame format is selected (CRCL bit in the SPI_CR1 register is set). CRC calculation is done based on any CRC16 standard. Note: A read to this register when the BSY Flag is set could return an incorrect value. */
    using SPI_RXCRCR_RXCRC = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI Tx CRC register */
    using SPI_TXCRCR = ::EmbeddedPP::LowLevel::Register<std::uint16_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx CRC register When CRC calculation is enabled, the TXCRC[7:0] bits contain the computed CRC value of the subsequently transmitted bytes. This register is reset when the CRCEN bit of SPI_CR1 is written to 1. The CRC is calculated serially using the polynomial programmed in the SPI_CRCPR register. Only the 8 LSB bits are considered when the CRC frame format is set to be 8-bit length (CRCL bit in the SPI_CR1 is cleared). CRC calculation is done based on any CRC8 standard. The entire 16-bits of this register are considered when a 16-bit CRC frame format is selected (CRCL bit in the SPI_CR1 register is set). CRC calculation is done based on any CRC16 standard. Note: A read to this register when the BSY flag is set could return an incorrect value. */
    using SPI_TXCRCR_TXCRC = ::EmbeddedPP::LowLevel::BitField<std::uint16_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
