/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32WB07_I2C2_HPP
#define EMBEDDED_PP_STM32WB07_I2C2_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief I2C2 peripheral */
namespace STM32WB07::I2C2 {

    /** @brief I2C2_CR1 register */
    using I2C2_CR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Peripheral enable - 0: Peripheral disable - 1: Peripheral enable */
    using I2C2_CR1_PE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TX Interrupt enable - 0: Transmit (TXIS) interrupt disabled - 1: Transmit (TXIS) interrupt enabled */
    using I2C2_CR1_TXIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RX Interrupt enable - 0: Receive (RXNE) interrupt disabled - 1: Receive (RXNE) interrupt enabled */
    using I2C2_CR1_RXIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Address match Interrupt enable (slave only) - 0: Address match (ADDR) interrupts disabled - 1: Address match (ADDR) interrupts enabled */
    using I2C2_CR1_ADDRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Not acknowledge received Interrupt enable - 0: Not acknowledge (NACKF) received interrupts disabled - 1: Not acknowledge (NACKF) received interrupts enabled */
    using I2C2_CR1_NACKIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STOP detection Interrupt enable - 0: Stop detection (STOPF) interrupt disabled - 1: Stop detection (STOPF) interrupt enabled */
    using I2C2_CR1_STOPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer Complete interrupt enable - 0: Transfer Complete interrupt disabled - 1: Transfer Complete interrupt enabled */
    using I2C2_CR1_TCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Error interrupts enable - 0: Error detection interrupts disabled - 1: Error detection interrupts enabled Note: Any of these errors generate an interrupt: Arbitration Loss (ARLO) Bus Error detection (BERR) Overrun/Underrun (OVR) Timeout detection (TIMEOUT) PEC error detection (PECERR) Alert pin event detection (ALERT) */
    using I2C2_CR1_ERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Digital noise filter These bits are used to configure the digital noise filter on SDA and SCL input. The digital filter will filter spikes with a length of up to DNF[3:0] * tI2CCLK - 0000: Digital filter disabled - 0001: Digital filter enabled and filtering capability up to 1 tI2CCLK - 1111: digital filter enabled and filtering capability up to15 tI2CCLK */
    using I2C2_CR1_DNF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog noise filter OFF - 0: Analog noise filter enabled - 1: Analog noise filter disabled */
    using I2C2_CR1_ANFOFF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA transmission requests enable - 0: DMA mode disabled for transmission - 1: DMA mode enabled for transmission */
    using I2C2_CR1_TXDMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA reception requests enable - 0: DMA mode disabled for reception - 1: DMA mode enabled for reception */
    using I2C2_CR1_RXDMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Slave byte control This bit is used to enable hardware byte control in slave mode. - 0: Slave byte control disabled - 1: Slave byte control enabled */
    using I2C2_CR1_SBC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clock stretching disable This bit is used to disable clock stretching in slave mode. It must be kept cleared in master mode. - 0: Clock stretching enabled - 1: Clock stretching disabled Note: This bit can only be programmed when the I2C is disabled (PE = 0). */
    using I2C2_CR1_NOSTRETCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief General call enable - 0: General call disabled. Address 0b00000000 is NACKed. - 1: General call enabled. Address 0b00000000 is ACKed. */
    using I2C2_CR1_GCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SMBus Host address enable - 0: Host address disabled. Address 0b0001000x is NACKed. - 1: Host address enabled. Address 0b0001000x is ACKed. */
    using I2C2_CR1_SMBHEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SMBus Device Default address enable - 0: Device default address disabled. Address 0b1100001x is NACKed. - 1: Device default address enabled. Address 0b1100001x is ACKed. */
    using I2C2_CR1_SMBDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SMBus alert enable Device mode (SMBHEN=0): - 0: Releases SMBA pin high and Alert Response Address Header disabled: 0001100x followed by NACK. - 1: Drives SMBA pin low and Alert Response Address Header enables: 0001100x followed by ACK. Host mode (SMBHEN=1): - 0: SMBus Alert pin (SMBA) not supported. - 1: SMBus Alert pin (SMBA) supported. */
    using I2C2_CR1_ALERTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PEC enable - 0: PEC calculation disabled - 1: PEC calculation enabled */
    using I2C2_CR1_PECEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C2_CR2 register */
    using I2C2_CR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Slave address */
    using I2C2_CR2_SADD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer direction (master mode) - 0: Master requests a write transfer. - 1: Master requests a read transfer. */
    using I2C2_CR2_RD_WRN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Ten-bit addressing mode (master mode) - 0: The master operates in 7-bit addressing mode, - 1: The master operates in 10-bit addressing mode */
    using I2C2_CR2_ADD10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Ten bit (10-bit) address header only read direction (master receiver mode) - 0: The master sends the complete 10 bit slave address read sequence: Start + 2 bytes 10bit address in write direction + Restart + 1st 7 bits of the 10 bit address in read direction. - 1: The master only sends the 1st 7 bits of the 10 bit address, followed by Read direction. */
    using I2C2_CR2_HEAD10R = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Start generation This bit is set by software, and cleared by hardware after the Start followed by the address sequence is sent, by an arbitration loss, by a timeout error detection, or when PE = 0. It can also be cleared by software by writing 1 to the ADDRCF bit in the I2C_ICR register. - 0: No Start generation. - 1: Restart/Start generation: If the I2C is already in master mode with AUTOEND = 0, setting this bit generates a Repeated Start condition when RELOAD=0, after the end of the NBYTES transfer. Otherwise setting this bit will generate a START condition once the bus is free. */
    using I2C2_CR2_START = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Stop generation (master mode) The bit is set by software, cleared by hardware when a Stop condition is detected, or when PE = 0. In Master Mode: - 0: No Stop generation. - 1: Stop generation after current byte transfer. */
    using I2C2_CR2_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NACK generation (slave mode) The bit is set by software, cleared by hardware when the NACK is sent, or when a STOP condition or an Address matched is received, or when PE=0. - 0: an ACK is sent after current received byte. - 1: a NACK is sent after current received byte. */
    using I2C2_CR2_NACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of bytes The number of bytes to be transmitted/received is programmed there. This field is dont care in slave mode with SBC=0. */
    using I2C2_CR2_NBYTES = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NBYTES reload mode This bit is set and cleared by software. - 0: The transfer is completed after the NBYTES data transfer (STOP or RESTART will follow). - 1: The transfer is not completed after the NBYTES data transfer (NBYTES will be reloaded). TCR flag is set when NBYTES data are transferred, stretching SCL low. */
    using I2C2_CR2_RELOAD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Automatic end mode (master mode) This bit is set and cleared by software. - 0: software end mode: TC flag is set when NBYTES data are transferred, stretching SCL low. - 1: Automatic end mode: a STOP condition is automatically sent when NBYTES data are transferred. */
    using I2C2_CR2_AUTOEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet error checking byte This bit is set by software, and cleared by hardware when the PEC is transferred, or when a STOP condition or an Address matched is received, also when PE=0. - 0: No PEC transfer. - 1: PEC transmission/reception is requested */
    using I2C2_CR2_PECBYTE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C2_OAR1 register */
    using I2C2_OAR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interface address */
    using I2C2_OAR1_OA1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Own Address 1 10-bit mode - 0: Own address 1 is a 7-bit address. - 1: Own address 1 is a 10-bit address. */
    using I2C2_OAR1_OA1MODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Own Address 1 enable - 0: Own address 1 disabled. The received slave address OA1 is NACKed. - 1: Own address 1 enabled. The received slave address OA1 is ACKed. */
    using I2C2_OAR1_OA1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C2_OAR2 register */
    using I2C2_OAR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interface address bits 7:1 of address Note: These bits can be written only when OA2EN=0. */
    using I2C2_OAR2_OA2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Own Address 2 masks - 000: No mask - 001: OA2[1] is masked and dont care. Only OA2[7:2] are compared. - 010: OA2[2:1] are masked and dont care. Only OA2[7:3] are compared. - 011: OA2[3:1] are masked and dont care. Only OA2[7:4] are compared. - 100: OA2[4:1] are masked and dont care. Only OA2[7:5] are compared. - 101: OA2[5:1] are masked and dont care. Only OA2[7:6] are compared. - 110: OA2[6:1] are masked and dont care. Only OA2[7] is compared. - 111: OA2[7:1] are masked and dont care. No comparison is done, and all (except reserved) 7-bit received addresses are acknowledged. */
    using I2C2_OAR2_OA2MSK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Own Address 2 enable - 0: Own address 2 disabled. The received slave address OA2 is NACKed. - 1: Own address 2 enabled. The received slave address OA2 is ACKed. */
    using I2C2_OAR2_OA2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C2_TIMING register */
    using I2C2_TIMING = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SCL low period (master mode) This field is used to generate the SCL low period in master mode. tSCLL = (SCLL+1) x tPRESC Note: SCLL is also used to generate tBUF and tSU:STA timings. */
    using I2C2_TIMING_SCLL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SCL high period (master mode) This field is used to generate the SCL high period in master mode. tSCLH = (SCLH+1) x tPRESC Note: SCLH is also used to generate tSU:STO and tHD:STA timing. */
    using I2C2_TIMING_SCLH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data hold time This field is used to generate the delay tSDADEL between SCL falling edge SDA edge in transmission mode. tSDADEL= SDADEL x tPRESC Note: SDADEL is used to generate tHD:DAT timing. */
    using I2C2_TIMING_SDADEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data setup time This field is used to generate a delay tSCLDEL between SDA edge and SCL rising edge in transmission mode. tSCLDEL = (SCLDEL+1) x tPRESC Note: tSCLDEL is used to generate tSU:DAT timing. */
    using I2C2_TIMING_SCLDEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timing prescaler This field is used to prescale I2CCLK in order to generate the clock period tPRESC used for data setup and hold counters and for SCL high and low level counters tPRESC = (PRESC+1) x tI2CCLK */
    using I2C2_TIMING_PRESC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C2_TIMEOUT register */
    using I2C2_TIMEOUT = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bus Timeout A This field is used to configure: The SCL low timeout condition tTIMEOUT when TIDLE=0 tTIMEOUT= (TIMEOUTA+1) x 2048 x tI2CCLK The bus idle condition (both SCL and SDA high) when TIDLE=1 tIDLE= (TIMEOUTA+1) x 4 x tI2CCLK Note: These bits can be written only when TIMOUTEN=0. */
    using I2C2_TIMEOUT_TIMEOUTA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Idle clock timeout detection - 0: TIMEOUTA is used to detect SCL low timeout - 1: TIMEOUTA is used to detect both SCL and SDA high timeout (bus idle condition) Note: This bit can be written only when TIMOUTEN=0. */
    using I2C2_TIMEOUT_TIDLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clock timeout enable - 0: SCL timeout detection is disabled - 1: SCL timeout detection is enabled: when SCL is low for more than tTIMEOUT (TIDLE=0) or high for more than tIDLE (TIDLE=1), a timeout error is detected (TIMEOUT=1). */
    using I2C2_TIMEOUT_TIMEOUTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bus timeout B This field is used to configure the cumulative clock extension timeout: In master mode, the master cumulative clock low extend time (tLOW:MEXT) is detected In slave mode, the slave cumulative clock low extend time (tLOW:SEXT) is detected tLOW:EXT= (TIMEOUTB+1) x 2048 x tI2CCLK Note: These bits can be written only when TEXTEN=0. */
    using I2C2_TIMEOUT_TIMEOUTB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extended clock timeout enable - 0: Extended clock timeout detection is disabled - 1: Extended clock timeout detection is enabled. When a cumulative SCL stretch for more than tLOW:EXT is done by the I2C interface, a timeout error is detected (TIMEOUT=1). */
    using I2C2_TIMEOUT_TEXTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C2_ISR register */
    using I2C2_ISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit data register empty (transmitters) This bit is set by hardware when the I2C_TXDR register is empty. It is cleared when the next data to be sent is written in the I2C_TXDR register. This bit can be written to 1 by software in order to flush the transmit data register I2C_TXDR. Note: This bit is set by hardware when PE=0. */
    using I2C2_ISR_TXE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit interrupt status (transmitters) This bit is set by hardware when the I2C_TXDR register is empty and the data to be transmitted must be written in the I2C_TXDR register. It is cleared when the next data to be sent is written in the I2C_TXDR register. This bit can be written to 1 by software when NOSTRETCH=1 only, in order to generate a TXIS event (interrupt if TXIE=1 or DMA request if TXDMAEN=1). Note: This bit is cleared by hardware when PE=0. */
    using I2C2_ISR_TXIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive data register not empty (receivers) This bit is set by hardware when the received data is copied into the I2C_RXDR register, and is ready to be read. It is cleared when I2C_RXDR is read. Note: This bit is cleared by hardware when PE=0. */
    using I2C2_ISR_RXNE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Address matched (slave mode) This bit is set by hardware as soon as the received slave address matched with one of the enabled slave addresses. It is cleared by software by setting ADDRCF bit. Note: This bit is cleared by hardware when PE=0. */
    using I2C2_ISR_ADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Not Acknowledge received flag This flag is set by hardware when a NACK is received after a byte transmission. It is cleared by software by setting the NACKCF bit. Note: This bit is cleared by hardware when PE=0. */
    using I2C2_ISR_NACKF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Stop detection flag This flag is set by hardware when a Stop condition is detected on the bus and the peripheral is involved in this transfer: either as a master, provided that the STOP condition is generated by the peripheral. or as a slave, provided that the peripheral has been addressed previously during this transfer. It is cleared by software by setting the STOPCF bit. Note: This bit is cleared by hardware when PE=0. */
    using I2C2_ISR_STOPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer Complete (master mode) This flag is set by hardware when RELOAD=0, AUTOEND=0 and NBYTES data have been transferred. It is cleared by software when START bit or STOP bit is set. Note: This bit is cleared by hardware when PE=0. */
    using I2C2_ISR_TC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer Complete Reload This flag is set by hardware when RELOAD=1 and NBYTES data have been transferred. It is cleared by software when NBYTES is written to a non-zero value. Note: This bit is cleared by hardware when PE=0. This flag is only for master mode, or for slave mode when the SBC bit is set. */
    using I2C2_ISR_TCR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bus error This flag is set by hardware when a misplaced Start or Stop condition is detected whereas the peripheral is involved in the transfer. The flag is not set during the address phase in slave mode. It is cleared by software by setting BERRCF bit. Note: This bit is cleared by hardware when PE=0. */
    using I2C2_ISR_BERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Arbitration lost This flag is set by hardware in case of arbitration loss. It is cleared by software by setting the ARLOCF bit. Note: This bit is cleared by hardware when PE=0. */
    using I2C2_ISR_ARLO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Overrun/Underrun (slave mode) This flag is set by hardware in slave mode with NOSTRETCH=1, when an overrun/underrun error occurs. It is cleared by software by setting the OVRCF bit. Note: This bit is cleared by hardware when PE=0. */
    using I2C2_ISR_OVR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PEC Error in reception This flag is set by hardware when the received PEC does not match with the PEC register content. A NACK is automatically sent after the wrong PEC reception. It is cleared by software by setting the PECCF bit. Note: This bit is cleared by hardware when PE=0. If the SMBus feature is not supported, this bit is reserved and forced by hardware to 0. Please refer to Section 22.3: I2C implementation. */
    using I2C2_ISR_PECERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timeout or tLOW detection flag This flag is set by hardware when a timeout or extended clock timeout occurred. It is cleared by software by setting the TIMEOUTCF bit. Note: This bit is cleared by hardware when PE=0. If the SMBus feature is not supported, this bit is reserved and forced by hardware to 0. Please refer to Section 22.3: I2C implementation. */
    using I2C2_ISR_TIMEOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SMBus alert This flag is set by hardware when SMBHEN=1 (SMBus host configuration), ALERTEN=1 and a SMBALERT event (falling edge) is detected on SMBA pin. It is cleared by software by setting the ALERTCF bit. Note: This bit is cleared by hardware when PE=0. If the SMBus feature is not supported, this bit is reserved and forced by hardware to 0. Please refer to Section 22.3: I2C implementation. */
    using I2C2_ISR_ALERT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bus busy This flag indicates that a communication is in progress on the bus. It is set by hardware when a START condition is detected. It is cleared by hardware when a Stop condition is detected, or when PE=0. */
    using I2C2_ISR_BUSY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer direction (Slave mode) This flag is updated when an address match event occurs (ADDR=1). - 0: Write transfer, slave enters receiver mode. - 1: Read transfer, slave enters transmitter mode. */
    using I2C2_ISR_DIR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Address match code (Slave mode) These bits are updated with the received address when an address match event occurs (ADDR = 1). In the case of a 10-bit address, ADDCODE provides the 10-bit header followed by the 2 MSBs of the address. */
    using I2C2_ISR_ADDCODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C2_ICR register */
    using I2C2_ICR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Address matched flag clear Writing 1 to this bit clears the ADDR flag in the I2C_ISR register. Writing 1 to this bit also clears the START bit in the I2C_CR2 register. */
    using I2C2_ICR_ADDRCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Not Acknowledge flag clear Writing 1 to this bit clears the ACKF flag in I2C_ISR register. */
    using I2C2_ICR_NACKCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Stop detection flag clear Writing 1 to this bit clears the STOPF flag in the I2C_ISR register. */
    using I2C2_ICR_STOPCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bus error flag clear Writing 1 to this bit clears the BERRF flag in the I2C_ISR register. */
    using I2C2_ICR_BERRCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Arbitration Lost flag clear Writing 1 to this bit clears the ARLO flag in the I2C_ISR register. */
    using I2C2_ICR_ARLOCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Overrun/Underrun flag clear Writing 1 to this bit clears the OVR flag in the I2C_ISR register. */
    using I2C2_ICR_OVRCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PEC Error flag clear Writing 1 to this bit clears the PECERR flag in the I2C_ISR register. Note: If the SMBus feature is not supported, this bit is reserved and forced by hardware to 0. Please refer to Section 22.3: I2C implementation. */
    using I2C2_ICR_PECCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timeout detection flag clear Writing 1 to this bit clears the TIMEOUT flag in the I2C_ISR register. Note: If the SMBus feature is not supported, this bit is reserved and forced by hardware to 0. Please refer to Section 22.3: I2C implementation. */
    using I2C2_ICR_TIMOUTCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alert flag clear Writing 1 to this bit clears the ALERT flag in the I2C_ISR register. Note: If the SMBus feature is not supported, this bit is reserved and forced by hardware to 0. Please refer to Section 22.3: I2C implementation. */
    using I2C2_ICR_ALERTCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C2_PECR register */
    using I2C2_PECR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet error checking register This field contains the internal PEC when PECEN=1. The PEC is cleared by hardware when PE=0. */
    using I2C2_PECR_PEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C2_RXDR register */
    using I2C2_RXDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Eight bit (8-bit) receive data Data byte received from the I2C bus. */
    using I2C2_RXDR_RXDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C2_TXDR register */
    using I2C2_TXDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Eight bits (8-bit) transmit data Data byte to be transmitted to the I2C bus. Note: These bits can be written only when TXE=1. */
    using I2C2_TXDR_TXDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
