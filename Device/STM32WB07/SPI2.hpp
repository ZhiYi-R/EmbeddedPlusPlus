/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32WB07_SPI2_HPP
#define EMBEDDED_PP_STM32WB07_SPI2_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief SPI2 peripheral */
namespace STM32WB07::SPI2 {

    /** @brief SPI2_CR1 register */
    using SPI2_CR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clock phase - 0: The first clock transition is the first data capture edge - 1: The second clock transition is the first data capture edge */
    using SPI2_CR1_CPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clock polarity - 0: CK to 0 when idle - 1: CK to 1 when idle */
    using SPI2_CR1_CPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master selection - 0: Slave configuration - 1: Master configuration */
    using SPI2_CR1_MSTR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Baud rate control - 000: fPCLK/2 - 001: fPCLK/4 - 010: fPCLK/8 - 011: fPCLK/16 - 100: fPCLK/32 - 101: fPCLK/64 - 110: fPCLK/128 - 111: fPCLK/256 */
    using SPI2_CR1_BR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI enable - 0: Peripheral disabled - 1: Peripheral enabled */
    using SPI2_CR1_SPE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame format - 0: data is transmitted / received with the MSB first - 1: data is transmitted / received with the LSB first */
    using SPI2_CR1_LSBFIRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Internal slave select This bit has an effect only when the SSM bit is set. The value of this bit is forced onto the NSS pin and the I/O value of the NSS pin is ignored. */
    using SPI2_CR1_SSI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Software slave management When the SSM bit is set, the NSS pin input is replaced with the value from the SSI bit. - 0: Software slave management disabled - 1: Software slave management enabled */
    using SPI2_CR1_SSM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive only mode enabled. This bit enables simplex communication using a single unidirectional line to receive data exclusively. Keep BIDIMODE bit clear when receive only mode is active.This bit is also useful in a multislave system in which this particular slave is not accessed, the output from the accessed slave is not corrupted. - 0: Full duplex (Transmit and receive) - 1: Output disabled (Receive-only mode) */
    using SPI2_CR1_RXONLY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRC length This bit is set and cleared by software to select the CRC length. - 0: 8-bit CRC length - 1: 16-bit CRC length */
    using SPI2_CR1_CRCL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit CRC next - 0: Next transmit value is from Tx buffer - 1: Next transmit value is from Tx CRC register */
    using SPI2_CR1_CRCNEXT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Hardware CRC calculation enable - 0: CRC calculation disabled - 1: CRC calculation Enabled */
    using SPI2_CR1_CRCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Output enable in bidirectional mode This bit combined with the BIDIMODE bit selects the direction of transfer in bidirectional mode - 0: Output disabled (receive-only mode) - 1: Output enabled (transmit-only mode) */
    using SPI2_CR1_BIDIOE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bidirectional data mode enable. This bit enables half-duplex communication using common single bidirectional data line. Keep RXONLY bit clear when bidirectional mode is active. - 0: 2-line unidirectional data mode selected - 1: 1-line bidirectional data mode selected */
    using SPI2_CR1_BIDIMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI2_CR2 register */
    using SPI2_CR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx buffer DMA enable When this bit is set, a DMA request is generated whenever the RXNE flag is set. - 0: Rx buffer DMA disabled - 1: Rx buffer DMA enabled */
    using SPI2_CR2_RXDMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx buffer DMA enable When this bit is set, a DMA request is generated whenever the TXE flag is set. - 0: Tx buffer DMA disabled - 1: Tx buffer DMA enabled */
    using SPI2_CR2_TXDMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SS output enable - 0: SS output is disabled in master mode and the SPI interface can work in multimaster configuration - 1: SS output is enabled in master mode and when the SPI interface is enabled. The SPI interface cannot work in a multimaster environment. */
    using SPI2_CR2_SSOE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NSS pulse management This bit is used in master mode only. it allow the SPI to generate an NSS pulse between two consecutive data when doing continuous transfers. In the case of a single data transfer, it forces the NSS pin high level after the transfer. It has no meaning if CPHA = 1, or FRF = 1. - 0: No NSS pulse - 1: NSS pulse generated */
    using SPI2_CR2_NSSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame format - 0: SPI Motorola mode - 1 SPI TI mode */
    using SPI2_CR2_FRF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Error interrupt enable This bit controls the generation of an interrupt when an error condition occurs (CRCERR, OVR, MODF in SPI mode, FRE at TI mode and UDR, OVR, and FRE in I2S mode). - 0: Error interrupt is masked - 1: Error interrupt is enabled */
    using SPI2_CR2_ERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RX buffer not empty interrupt enable - 0: RXNE interrupt masked - 1: RXNE interrupt not masked. Used to generate an interrupt request when the RXNE flag is set. */
    using SPI2_CR2_RXNEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx buffer empty interrupt enable - 0: TXE interrupt masked - 1: TXE interrupt not masked. Used to generate an interrupt request when the TXE flag is set. */
    using SPI2_CR2_TXEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data size These bits configure the data length for SPI transfers: - 0000: Not used - 0001: Not used - 0010: Not used - 0011: 4-bit - 0100: 5-bit - 0101: 6-bit - 0110: 7-bit - 0111: 8-bit - 1000: 9-bit - 1001: 10-bit - 1010: 11-bit - 1011: 12-bit - 1100: 13-bit - 1101: 14-bit - 1110: 15-bit - 1111: 16-bit If software attempts to write one of the Not used values, they are forced to the value 0111(8-bit). */
    using SPI2_CR2_DS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FIFO reception threshold FRXTH shall be set according the read access (16-bit or 8-bit) to the FIFO. This bit is used to set the threshold of the RXFIFO that triggers an RXNE event - 0: RXNE event is generated if the FIFO level is greater than or equal to 1/2 (16-bit) - 1: RXNE event is generated if the FIFO level is greater than or equal to 1/4 (8-bit) */
    using SPI2_CR2_FRXTH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Last DMA transfer for reception This bit is used in data packing mode, to define if the total number of data to receive by DMA is odd or even. It has significance only if the RXDMAEN bit in the SPIx_CR2 register is set and if packing mode is used (data length =< 8-bit and write access to SPIx_DR is 16-bit wide). It has to be written when the SPI is disabled (SPE = 0 in the SPIx_CR1 register). - 0: Number of data to transfer is even - 1: Number of data to transfer is odd */
    using SPI2_CR2_LDMA_RX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Last DMA transfer for transmission This bit is used in data packing mode, to define if the total number of data to transmit by DMA is odd or even. It has significance only if the TXDMAEN bit in the SPIx_CR2 register is set and if packing mode is used (data length =< 8-bit and write access to SPIx_DR is 16-bit wide). It has to be written when the SPI is disabled (SPE = 0 in the SPIx_CR1 register). - 0: Number of data to transfer is even - 1: Number of data to transfer is odd */
    using SPI2_CR2_LDMA_TX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI2_SR register */
    using SPI2_SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive buffer not empty - 0: Rx buffer empty - 1: Rx buffer not empty */
    using SPI2_SR_RXNE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit buffer empty - 0: No more empty space in Tx buffer. (software shall not write data to the Tx buffer). - 1: At least one empty space in Tx buffer. (software may write data to the Tx buffer). */
    using SPI2_SR_TXE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel side - 0: Channel Left has to be transmitted or has been received - 1: Channel Right has to be transmitted or has been received */
    using SPI2_SR_CHSIDE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Underrun flag - 0: No underrun occurred - 1: Underrun occurred */
    using SPI2_SR_UDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRC error flag - 0: CRC value received matches the SPIx_RXCRCR value - 1: CRC value received does not match the SPIx_RXCRCR value This flag is set by hardware and cleared by software writing 0. */
    using SPI2_SR_CRCERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Mode fault - 0: No mode fault occurred - 1: Mode fault occurred */
    using SPI2_SR_MODF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Overrun flag - 0: No overrun occurred - 1: Overrun occurred */
    using SPI2_SR_OVR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Busy flag - 0: SPI (or I2S) not busy - 1: SPI (or I2S) is busy in communication or Tx buffer is not empty This flag is set and cleared by hardware. */
    using SPI2_SR_BSY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Frame format error This flag is used for SPI in TI slave mode and I2S slave mode. Refer to Section 18.5.10: SPI error flags and Section 18.7.6: I2S error flags. This flag is set by hardware and reset when SPIx_SR is read by software. - 0: No frame format error - 1: A frame format error occurred */
    using SPI2_SR_FRE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FIFO reception level These bits are set and cleared by hardware. - 00: FIFO empty - 01: 1/4 FIFO - 10: 1/2 FIFO - 11: FIFO full */
    using SPI2_SR_FRLVL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FIFO Transmission Level These bits are set and cleared by hardware. - 00: FIFO empty - 01: 1/4 FIFO - 10: 1/2 FIFO - 11: FIFO full (considered as FULL when the FIFO threshold is greater than 1/2) */
    using SPI2_SR_FTLVL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI2_DR register */
    using SPI2_DR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data register Data received or to be transmitted The data register serves as an interface between the Rx and Tx FIFOs. When the data register is read, RxFIFO is accessed while the write to data register accesses TxFIFO (See Section 18.5.8: Data transmission and reception procedures). Note: Data is always right-aligned. Unused bits are ignored when writing to the register, and read as zero when the register is read. The Rx threshold setting must always correspond with the read access currently used. */
    using SPI2_DR_DR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI2_CRCPR register */
    using SPI2_CRCPR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRC polynomial register This register contains the polynomial for the CRC calculation. The CRC polynomial (0007h) is the reset value of this register. Another polynomial can be configured as required. */
    using SPI2_CRCPR_CRCPOLY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI2_RXCRCR register */
    using SPI2_RXCRCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx CRC register When CRC calculation is enabled, the RxCRC[15:0] bits contain the computed CRC value of the subsequently received bytes. This register is reset when the CRCEN bit in SPIx_CR1 register is written to 1. The CRC is calculated serially using the polynomial programmed in the SPIx_CRCPR register. Only the 8 LSB bits are considered when the data frame format is set to be 8-bit data (CRCL bit in the SPIx_CR1 is cleared). CRC calculation is done based on any CRC8 standard. The entire 16-bits of this register are considered when a 16-bit data frame format is selected (CRCL bit in the SPIx_CR1 register is set). CRC calculation is done based on any CRC16 standard. A read to this register when the BSY Flag is set could return an incorrect value. */
    using SPI2_RXCRCR_RXCRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI2_TXCRCR register */
    using SPI2_TXCRCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Tx CRC register When CRC calculation is enabled, the TxCRC[7:0] bits contain the computed CRC value of the subsequently transmitted bytes. This register is reset when the CRCEN bit of SPIx_CR1 is written to 1. The CRC is calculated serially using the polynomial programmed in the Tx CRC register When CRC calculation is enabled, the TxCRC[7:0] bits contain the computed CRC value of the subsequently transmitted bytes. This register is reset when the CRCEN bit of SPIx_CR1 is written to 1. The CRC is calculated serially using the polynomial programmed in the SPIx_CRCPR register. Only the 8 LSB bits are considered when the data frame format is set to be 8-bit data (CRCL bit in the SPIx_CR1 is cleared). CRC calculation is done based on any CRC8 standard. The entire 16-bits of this register are considered when a 16-bit data frame format is selected (CRCL bit in the SPIx_CR1 register is set). CRC calculation is done based on any CRC16 standard. Note: A read to this register when the BSY flag is set could return an incorrect value. These bits are not used in I2S mode. */
    using SPI2_TXCRCR_TXCRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI2_I2SCFGR register */
    using SPI2_I2SCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Channel length (number of bits per audio channel) - 0: 16-bit wide - 1: 32-bit wide The bit write operation has a meaning only if DATLEN = 00 otherwise the channel length is fixed to 32-bit by hardware whatever the value filled in. */
    using SPI2_I2SCFGR_CHLEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data length to be transferred - 00: 16-bit data length - 01: 24-bit data length - 10: 32-bit data length - 11: Not allowed */
    using SPI2_I2SCFGR_DATLEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Steady state clock polarity - 0: I2S clock steady state is low level - 1: I2S clock steady state is high level */
    using SPI2_I2SCFGR_CKPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2S standard selection - 00: I2S Philips standard. - 01: MSB justified standard (left justified) - 10: LSB justified standard (right justified) - 11: PCM standard */
    using SPI2_I2SCFGR_I2SSTD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PCM frame synchronization - 0: Short frame synchronization - 1: Long frame synchronization Note: This bit has a meaning only if I2SSTD = 11 (PCM standard is used). It is not used in SPI mode. */
    using SPI2_I2SCFGR_PCMSYNC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2S configuration mode - 00: Slave - transmit - 01: Slave - receive - 10: Master - transmit - 11: Master - receive */
    using SPI2_I2SCFGR_I2SCFG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2S enable - 0: I2S peripheral is disabled - 1: I2S peripheral is enabled Note: This bit is not used in SPI mode. */
    using SPI2_I2SCFGR_I2SE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2S mode selection - 0: SPI mode is selected - 1: I2S mode is selected Note: This bit should be configured when the SPI is disabled. */
    using SPI2_I2SCFGR_I2SMOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Asynchronous start enable. - 0: The Asynchronous start is disabled. When the I2S is enabled in slave mode, the I2S slave starts the transfer when the I2S clock is received and an appropriate transition (depending on the protocol selected) is detected on the WS signal. - 1: The Asynchronous start is enabled. When the I2S is enabled in slave mode, the I2S slave starts immediately the transfer when the I2S clock is received from the master without checking the expected transition of WS signal. Note: The appropriate transition is a falling edge on WS signal when I2S Philips Standard is used, or a rising edge for other standards. */
    using SPI2_I2SCFGR_ASTREN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI2_I2SPR register */
    using SPI2_I2SPR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2S linear prescaler I2SDIV [7:0] = 0 or I2SDIV [7:0] = 1 are forbidden values. */
    using SPI2_I2SPR_I2SDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Odd factor for the prescaler - 0: Real divider value is = I2SDIV *2 - 1: Real divider value is = (I2SDIV * 2)+1 */
    using SPI2_I2SPR_ODD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master clock output enable - 0: Master clock output is disabled - 1: Master clock output is enabled */
    using SPI2_I2SPR_MCKOE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
