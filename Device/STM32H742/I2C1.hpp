/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32H742_I2C1_HPP
#define EMBEDDED_PP_STM32H742_I2C1_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief I2C */
namespace STM32H742::I2C1 {

    /** @brief Access: No wait states, except if a write access occurs while a write access to this register is ongoing. In this case, wait states are inserted in the second write access until the previous one is completed. The latency of the second write access can be up to 2 x PCLK1 + 6 x I2CCLK. */
    using CR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Peripheral enable Note: When PE=0, the I2C SCL and SDA lines are released. Internal state machines and status bits are put back to their reset value. When cleared, PE must be kept low for at least 3 APB clock cycles. */
    using CR1_PE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TX Interrupt enable */
    using CR1_TXIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RX Interrupt enable */
    using CR1_RXIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Address match Interrupt enable (slave only) */
    using CR1_ADDRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Not acknowledge received Interrupt enable */
    using CR1_NACKIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STOP detection Interrupt enable */
    using CR1_STOPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer Complete interrupt enable Note: Any of these events will generate an interrupt: Transfer Complete (TC) Transfer Complete Reload (TCR) */
    using CR1_TCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Error interrupts enable Note: Any of these errors generate an interrupt: Arbitration Loss (ARLO) Bus Error detection (BERR) Overrun/Underrun (OVR) Timeout detection (TIMEOUT) PEC error detection (PECERR) Alert pin event detection (ALERT) */
    using CR1_ERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Digital noise filter These bits are used to configure the digital noise filter on SDA and SCL input. The digital filter will filter spikes with a length of up to DNF[3:0] * tI2CCLK ... Note: If the analog filter is also enabled, the digital filter is added to the analog filter. This filter can only be programmed when the I2C is disabled (PE = 0). */
    using CR1_DNF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Analog noise filter OFF Note: This bit can only be programmed when the I2C is disabled (PE = 0). */
    using CR1_ANFOFF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA transmission requests enable */
    using CR1_TXDMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief DMA reception requests enable */
    using CR1_RXDMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Slave byte control This bit is used to enable hardware byte control in slave mode. */
    using CR1_SBC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clock stretching disable This bit is used to disable clock stretching in slave mode. It must be kept cleared in master mode. Note: This bit can only be programmed when the I2C is disabled (PE = 0). */
    using CR1_NOSTRETCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Wakeup from Stop mode enable Note: If the Wakeup from Stop mode feature is not supported, this bit is reserved and forced by hardware to 0. Please refer to Section25.3: I2C implementation. Note: WUPEN can be set only when DNF = 0000 */
    using CR1_WUPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief General call enable */
    using CR1_GCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SMBus Host address enable Note: If the SMBus feature is not supported, this bit is reserved and forced by hardware to 0. Please refer to Section25.3: I2C implementation. */
    using CR1_SMBHEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SMBus Device Default address enable Note: If the SMBus feature is not supported, this bit is reserved and forced by hardware to 0. Please refer to Section25.3: I2C implementation. */
    using CR1_SMBDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SMBus alert enable Device mode (SMBHEN=0): Host mode (SMBHEN=1): Note: When ALERTEN=0, the SMBA pin can be used as a standard GPIO. If the SMBus feature is not supported, this bit is reserved and forced by hardware to 0. Please refer to Section25.3: I2C implementation. */
    using CR1_ALERTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PEC enable Note: If the SMBus feature is not supported, this bit is reserved and forced by hardware to 0. Please refer to Section25.3: I2C implementation. */
    using CR1_PECEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Access: No wait states, except if a write access occurs while a write access to this register is ongoing. In this case, wait states are inserted in the second write access until the previous one is completed. The latency of the second write access can be up to 2 x PCLK1 + 6 x I2CCLK. */
    using CR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Slave address bit 0 (master mode) In 7-bit addressing mode (ADD10 = 0): This bit is dont care In 10-bit addressing mode (ADD10 = 1): This bit should be written with bit 0 of the slave address to be sent Note: Changing these bits when the START bit is set is not allowed. */
    using CR2_SADD0 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Slave address bit 7:1 (master mode) In 7-bit addressing mode (ADD10 = 0): These bits should be written with the 7-bit slave address to be sent In 10-bit addressing mode (ADD10 = 1): These bits should be written with bits 7:1 of the slave address to be sent. Note: Changing these bits when the START bit is set is not allowed. */
    using CR2_SADD1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Slave address bit 7:1 (master mode) In 7-bit addressing mode (ADD10 = 0): These bits should be written with the 7-bit slave address to be sent In 10-bit addressing mode (ADD10 = 1): These bits should be written with bits 7:1 of the slave address to be sent. Note: Changing these bits when the START bit is set is not allowed. */
    using CR2_SADD2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Slave address bit 7:1 (master mode) In 7-bit addressing mode (ADD10 = 0): These bits should be written with the 7-bit slave address to be sent In 10-bit addressing mode (ADD10 = 1): These bits should be written with bits 7:1 of the slave address to be sent. Note: Changing these bits when the START bit is set is not allowed. */
    using CR2_SADD3 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Slave address bit 7:1 (master mode) In 7-bit addressing mode (ADD10 = 0): These bits should be written with the 7-bit slave address to be sent In 10-bit addressing mode (ADD10 = 1): These bits should be written with bits 7:1 of the slave address to be sent. Note: Changing these bits when the START bit is set is not allowed. */
    using CR2_SADD4 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Slave address bit 7:1 (master mode) In 7-bit addressing mode (ADD10 = 0): These bits should be written with the 7-bit slave address to be sent In 10-bit addressing mode (ADD10 = 1): These bits should be written with bits 7:1 of the slave address to be sent. Note: Changing these bits when the START bit is set is not allowed. */
    using CR2_SADD5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Slave address bit 7:1 (master mode) In 7-bit addressing mode (ADD10 = 0): These bits should be written with the 7-bit slave address to be sent In 10-bit addressing mode (ADD10 = 1): These bits should be written with bits 7:1 of the slave address to be sent. Note: Changing these bits when the START bit is set is not allowed. */
    using CR2_SADD6 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Slave address bit 7:1 (master mode) In 7-bit addressing mode (ADD10 = 0): These bits should be written with the 7-bit slave address to be sent In 10-bit addressing mode (ADD10 = 1): These bits should be written with bits 7:1 of the slave address to be sent. Note: Changing these bits when the START bit is set is not allowed. */
    using CR2_SADD7 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Slave address bit 9:8 (master mode) In 7-bit addressing mode (ADD10 = 0): These bits are dont care In 10-bit addressing mode (ADD10 = 1): These bits should be written with bits 9:8 of the slave address to be sent Note: Changing these bits when the START bit is set is not allowed. */
    using CR2_SADD8 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Slave address bit 9:8 (master mode) In 7-bit addressing mode (ADD10 = 0): These bits are dont care In 10-bit addressing mode (ADD10 = 1): These bits should be written with bits 9:8 of the slave address to be sent Note: Changing these bits when the START bit is set is not allowed. */
    using CR2_SADD9 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer direction (master mode) Note: Changing this bit when the START bit is set is not allowed. */
    using CR2_RD_WRN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 10-bit addressing mode (master mode) Note: Changing this bit when the START bit is set is not allowed. */
    using CR2_ADD10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 10-bit address header only read direction (master receiver mode) Note: Changing this bit when the START bit is set is not allowed. */
    using CR2_HEAD10R = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Start generation This bit is set by software, and cleared by hardware after the Start followed by the address sequence is sent, by an arbitration loss, by a timeout error detection, or when PE = 0. It can also be cleared by software by writing 1 to the ADDRCF bit in the I2C_ICR register. If the I2C is already in master mode with AUTOEND = 0, setting this bit generates a Repeated Start condition when RELOAD=0, after the end of the NBYTES transfer. Otherwise setting this bit will generate a START condition once the bus is free. Note: Writing 0 to this bit has no effect. The START bit can be set even if the bus is BUSY or I2C is in slave mode. This bit has no effect when RELOAD is set. */
    using CR2_START = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Stop generation (master mode) The bit is set by software, cleared by hardware when a Stop condition is detected, or when PE = 0. In Master Mode: Note: Writing 0 to this bit has no effect. */
    using CR2_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NACK generation (slave mode) The bit is set by software, cleared by hardware when the NACK is sent, or when a STOP condition or an Address matched is received, or when PE=0. Note: Writing 0 to this bit has no effect. This bit is used in slave mode only: in master receiver mode, NACK is automatically generated after last byte preceding STOP or RESTART condition, whatever the NACK bit value. When an overrun occurs in slave receiver NOSTRETCH mode, a NACK is automatically generated whatever the NACK bit value. When hardware PEC checking is enabled (PECBYTE=1), the PEC acknowledge value does not depend on the NACK value. */
    using CR2_NACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of bytes The number of bytes to be transmitted/received is programmed there. This field is dont care in slave mode with SBC=0. Note: Changing these bits when the START bit is set is not allowed. */
    using CR2_NBYTES = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NBYTES reload mode This bit is set and cleared by software. */
    using CR2_RELOAD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Automatic end mode (master mode) This bit is set and cleared by software. Note: This bit has no effect in slave mode or when the RELOAD bit is set. */
    using CR2_AUTOEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet error checking byte This bit is set by software, and cleared by hardware when the PEC is transferred, or when a STOP condition or an Address matched is received, also when PE=0. Note: Writing 0 to this bit has no effect. This bit has no effect when RELOAD is set. This bit has no effect is slave mode when SBC=0. If the SMBus feature is not supported, this bit is reserved and forced by hardware to 0. Please refer to Section25.3: I2C implementation. */
    using CR2_PECBYTE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Access: No wait states, except if a write access occurs while a write access to this register is ongoing. In this case, wait states are inserted in the second write access until the previous one is completed. The latency of the second write access can be up to 2 x PCLK1 + 6 x I2CCLK. */
    using OAR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interface address 7-bit addressing mode: dont care 10-bit addressing mode: bits 9:8 of address Note: These bits can be written only when OA1EN=0. OA1[7:1]: Interface address Bits 7:1 of address Note: These bits can be written only when OA1EN=0. OA1[0]: Interface address 7-bit addressing mode: dont care 10-bit addressing mode: bit 0 of address Note: This bit can be written only when OA1EN=0. */
    using OAR1_OA1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Own Address 1 10-bit mode Note: This bit can be written only when OA1EN=0. */
    using OAR1_OA1MODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Own Address 1 enable */
    using OAR1_OA1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Access: No wait states, except if a write access occurs while a write access to this register is ongoing. In this case, wait states are inserted in the second write access until the previous one is completed. The latency of the second write access can be up to 2 x PCLK1 + 6 x I2CCLK. */
    using OAR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interface address bits 7:1 of address Note: These bits can be written only when OA2EN=0. */
    using OAR2_OA2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Own Address 2 masks Note: These bits can be written only when OA2EN=0. As soon as OA2MSK is not equal to 0, the reserved I2C addresses (0b0000xxx and 0b1111xxx) are not acknowledged even if the comparison matches. */
    using OAR2_OA2MSK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Own Address 2 enable */
    using OAR2_OA2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Access: No wait states */
    using TIMINGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SCL low period (master mode) This field is used to generate the SCL low period in master mode. tSCLL = (SCLL+1) x tPRESC Note: SCLL is also used to generate tBUF and tSU:STA timings. */
    using TIMINGR_SCLL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SCL high period (master mode) This field is used to generate the SCL high period in master mode. tSCLH = (SCLH+1) x tPRESC Note: SCLH is also used to generate tSU:STO and tHD:STA timing. */
    using TIMINGR_SCLH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data hold time This field is used to generate the delay tSDADEL between SCL falling edge and SDA edge. In master mode and in slave mode with NOSTRETCH = 0, the SCL line is stretched low during tSDADEL. tSDADEL= SDADEL x tPRESC Note: SDADEL is used to generate tHD:DAT timing. */
    using TIMINGR_SDADEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data setup time This field is used to generate a delay tSCLDEL between SDA edge and SCL rising edge. In master mode and in slave mode with NOSTRETCH = 0, the SCL line is stretched low during tSCLDEL. tSCLDEL = (SCLDEL+1) x tPRESC Note: tSCLDEL is used to generate tSU:DAT timing. */
    using TIMINGR_SCLDEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timing prescaler This field is used to prescale I2CCLK in order to generate the clock period tPRESC used for data setup and hold counters (refer to I2C timings on page9) and for SCL high and low level counters (refer to I2C master initialization on page24). tPRESC = (PRESC+1) x tI2CCLK */
    using TIMINGR_PRESC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Access: No wait states, except if a write access occurs while a write access to this register is ongoing. In this case, wait states are inserted in the second write access until the previous one is completed. The latency of the second write access can be up to 2 x PCLK1 + 6 x I2CCLK. */
    using TIMEOUTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bus Timeout A This field is used to configure: The SCL low timeout condition tTIMEOUT when TIDLE=0 tTIMEOUT= (TIMEOUTA+1) x 2048 x tI2CCLK The bus idle condition (both SCL and SDA high) when TIDLE=1 tIDLE= (TIMEOUTA+1) x 4 x tI2CCLK Note: These bits can be written only when TIMOUTEN=0. */
    using TIMEOUTR_TIMEOUTA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Idle clock timeout detection Note: This bit can be written only when TIMOUTEN=0. */
    using TIMEOUTR_TIDLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clock timeout enable */
    using TIMEOUTR_TIMOUTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bus timeout B This field is used to configure the cumulative clock extension timeout: In master mode, the master cumulative clock low extend time (tLOW:MEXT) is detected In slave mode, the slave cumulative clock low extend time (tLOW:SEXT) is detected tLOW:EXT= (TIMEOUTB+1) x 2048 x tI2CCLK Note: These bits can be written only when TEXTEN=0. */
    using TIMEOUTR_TIMEOUTB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extended clock timeout enable */
    using TIMEOUTR_TEXTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Access: No wait states */
    using ISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit data register empty (transmitters) This bit is set by hardware when the I2C_TXDR register is empty. It is cleared when the next data to be sent is written in the I2C_TXDR register. This bit can be written to 1 by software in order to flush the transmit data register I2C_TXDR. Note: This bit is set by hardware when PE=0. */
    using ISR_TXE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit interrupt status (transmitters) This bit is set by hardware when the I2C_TXDR register is empty and the data to be transmitted must be written in the I2C_TXDR register. It is cleared when the next data to be sent is written in the I2C_TXDR register. This bit can be written to 1 by software when NOSTRETCH=1 only, in order to generate a TXIS event (interrupt if TXIE=1 or DMA request if TXDMAEN=1). Note: This bit is cleared by hardware when PE=0. */
    using ISR_TXIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive data register not empty (receivers) This bit is set by hardware when the received data is copied into the I2C_RXDR register, and is ready to be read. It is cleared when I2C_RXDR is read. Note: This bit is cleared by hardware when PE=0. */
    using ISR_RXNE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Address matched (slave mode) This bit is set by hardware as soon as the received slave address matched with one of the enabled slave addresses. It is cleared by software by setting ADDRCF bit. Note: This bit is cleared by hardware when PE=0. */
    using ISR_ADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Not Acknowledge received flag This flag is set by hardware when a NACK is received after a byte transmission. It is cleared by software by setting the NACKCF bit. Note: This bit is cleared by hardware when PE=0. */
    using ISR_NACKF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Stop detection flag This flag is set by hardware when a Stop condition is detected on the bus and the peripheral is involved in this transfer: either as a master, provided that the STOP condition is generated by the peripheral. or as a slave, provided that the peripheral has been addressed previously during this transfer. It is cleared by software by setting the STOPCF bit. Note: This bit is cleared by hardware when PE=0. */
    using ISR_STOPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer Complete (master mode) This flag is set by hardware when RELOAD=0, AUTOEND=0 and NBYTES data have been transferred. It is cleared by software when START bit or STOP bit is set. Note: This bit is cleared by hardware when PE=0. */
    using ISR_TC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer Complete Reload This flag is set by hardware when RELOAD=1 and NBYTES data have been transferred. It is cleared by software when NBYTES is written to a non-zero value. Note: This bit is cleared by hardware when PE=0. This flag is only for master mode, or for slave mode when the SBC bit is set. */
    using ISR_TCR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bus error This flag is set by hardware when a misplaced Start or Stop condition is detected whereas the peripheral is involved in the transfer. The flag is not set during the address phase in slave mode. It is cleared by software by setting BERRCF bit. Note: This bit is cleared by hardware when PE=0. */
    using ISR_BERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Arbitration lost This flag is set by hardware in case of arbitration loss. It is cleared by software by setting the ARLOCF bit. Note: This bit is cleared by hardware when PE=0. */
    using ISR_ARLO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Overrun/Underrun (slave mode) This flag is set by hardware in slave mode with NOSTRETCH=1, when an overrun/underrun error occurs. It is cleared by software by setting the OVRCF bit. Note: This bit is cleared by hardware when PE=0. */
    using ISR_OVR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PEC Error in reception This flag is set by hardware when the received PEC does not match with the PEC register content. A NACK is automatically sent after the wrong PEC reception. It is cleared by software by setting the PECCF bit. Note: This bit is cleared by hardware when PE=0. If the SMBus feature is not supported, this bit is reserved and forced by hardware to 0. Please refer to Section25.3: I2C implementation. */
    using ISR_PECERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timeout or tLOW detection flag This flag is set by hardware when a timeout or extended clock timeout occurred. It is cleared by software by setting the TIMEOUTCF bit. Note: This bit is cleared by hardware when PE=0. If the SMBus feature is not supported, this bit is reserved and forced by hardware to 0. Please refer to Section25.3: I2C implementation. */
    using ISR_TIMEOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SMBus alert This flag is set by hardware when SMBHEN=1 (SMBus host configuration), ALERTEN=1 and a SMBALERT event (falling edge) is detected on SMBA pin. It is cleared by software by setting the ALERTCF bit. Note: This bit is cleared by hardware when PE=0. If the SMBus feature is not supported, this bit is reserved and forced by hardware to 0. Please refer to Section25.3: I2C implementation. */
    using ISR_ALERT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bus busy This flag indicates that a communication is in progress on the bus. It is set by hardware when a START condition is detected. It is cleared by hardware when a Stop condition is detected, or when PE=0. */
    using ISR_BUSY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer direction (Slave mode) This flag is updated when an address match event occurs (ADDR=1). */
    using ISR_DIR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Address match code (Slave mode) These bits are updated with the received address when an address match event occurs (ADDR = 1). In the case of a 10-bit address, ADDCODE provides the 10-bit header followed by the 2 MSBs of the address. */
    using ISR_ADDCODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Access: No wait states */
    using ICR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Address matched flag clear Writing 1 to this bit clears the ADDR flag in the I2C_ISR register. Writing 1 to this bit also clears the START bit in the I2C_CR2 register. */
    using ICR_ADDRCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Not Acknowledge flag clear Writing 1 to this bit clears the ACKF flag in I2C_ISR register. */
    using ICR_NACKCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Stop detection flag clear Writing 1 to this bit clears the STOPF flag in the I2C_ISR register. */
    using ICR_STOPCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bus error flag clear Writing 1 to this bit clears the BERRF flag in the I2C_ISR register. */
    using ICR_BERRCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Arbitration Lost flag clear Writing 1 to this bit clears the ARLO flag in the I2C_ISR register. */
    using ICR_ARLOCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Overrun/Underrun flag clear Writing 1 to this bit clears the OVR flag in the I2C_ISR register. */
    using ICR_OVRCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PEC Error flag clear Writing 1 to this bit clears the PECERR flag in the I2C_ISR register. Note: If the SMBus feature is not supported, this bit is reserved and forced by hardware to 0. Please refer to Section25.3: I2C implementation. */
    using ICR_PECCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timeout detection flag clear Writing 1 to this bit clears the TIMEOUT flag in the I2C_ISR register. Note: If the SMBus feature is not supported, this bit is reserved and forced by hardware to 0. Please refer to Section25.3: I2C implementation. */
    using ICR_TIMOUTCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alert flag clear Writing 1 to this bit clears the ALERT flag in the I2C_ISR register. Note: If the SMBus feature is not supported, this bit is reserved and forced by hardware to 0. Please refer to Section25.3: I2C implementation. */
    using ICR_ALERTCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Access: No wait states */
    using PECR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet error checking register This field contains the internal PEC when PECEN=1. The PEC is cleared by hardware when PE=0. */
    using PECR_PEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Access: No wait states */
    using RXDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 8-bit receive data Data byte received from the I2C bus. */
    using RXDR_RXDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Access: No wait states */
    using TXDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 8-bit transmit data Data byte to be transmitted to the I2C bus. Note: These bits can be written only when TXE=1. */
    using TXDR_TXDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
