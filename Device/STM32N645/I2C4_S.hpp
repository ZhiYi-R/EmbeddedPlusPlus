/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32N645_I2C4_S_HPP
#define EMBEDDED_PP_STM32N645_I2C4_S_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Inter-integrated circuit */
namespace STM32N645::I2C4_S {

    /** @brief I2C control register 1 */
    using I2C_CR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Peripheral enable */
    using I2C_CR1_PE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Peripheral disable (value: 0)
     *          - B_0x1: Peripheral enable (value: 1)
     */
        /** @brief Peripheral disable */
    constexpr std::uint32_t I2C_CR1_PE_B_0x0 = 0;
        /** @brief Peripheral enable */
    constexpr std::uint32_t I2C_CR1_PE_B_0x1 = 1;

    /** @brief TX Interrupt enable */
    using I2C_CR1_TXIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Transmit (TXIS) interrupt disabled (value: 0)
     *          - B_0x1: Transmit (TXIS) interrupt enabled (value: 1)
     */
        /** @brief Transmit (TXIS) interrupt disabled */
    constexpr std::uint32_t I2C_CR1_TXIE_B_0x0 = 0;
        /** @brief Transmit (TXIS) interrupt enabled */
    constexpr std::uint32_t I2C_CR1_TXIE_B_0x1 = 1;

    /** @brief RX Interrupt enable */
    using I2C_CR1_RXIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Receive (RXNE) interrupt disabled (value: 0)
     *          - B_0x1: Receive (RXNE) interrupt enabled (value: 1)
     */
        /** @brief Receive (RXNE) interrupt disabled */
    constexpr std::uint32_t I2C_CR1_RXIE_B_0x0 = 0;
        /** @brief Receive (RXNE) interrupt enabled */
    constexpr std::uint32_t I2C_CR1_RXIE_B_0x1 = 1;

    /** @brief Address match Interrupt enable (slave only) */
    using I2C_CR1_ADDRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Address match (ADDR) interrupts disabled (value: 0)
     *          - B_0x1: Address match (ADDR) interrupts enabled (value: 1)
     */
        /** @brief Address match (ADDR) interrupts disabled */
    constexpr std::uint32_t I2C_CR1_ADDRIE_B_0x0 = 0;
        /** @brief Address match (ADDR) interrupts enabled */
    constexpr std::uint32_t I2C_CR1_ADDRIE_B_0x1 = 1;

    /** @brief Not acknowledge received Interrupt enable */
    using I2C_CR1_NACKIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Not acknowledge (NACKF) received interrupts disabled (value: 0)
     *          - B_0x1: Not acknowledge (NACKF) received interrupts enabled (value: 1)
     */
        /** @brief Not acknowledge (NACKF) received interrupts disabled */
    constexpr std::uint32_t I2C_CR1_NACKIE_B_0x0 = 0;
        /** @brief Not acknowledge (NACKF) received interrupts enabled */
    constexpr std::uint32_t I2C_CR1_NACKIE_B_0x1 = 1;

    /** @brief Stop detection Interrupt enable */
    using I2C_CR1_STOPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Stop detection (STOPF) interrupt disabled (value: 0)
     *          - B_0x1: Stop detection (STOPF) interrupt enabled (value: 1)
     */
        /** @brief Stop detection (STOPF) interrupt disabled */
    constexpr std::uint32_t I2C_CR1_STOPIE_B_0x0 = 0;
        /** @brief Stop detection (STOPF) interrupt enabled */
    constexpr std::uint32_t I2C_CR1_STOPIE_B_0x1 = 1;

    /** @brief Transfer Complete interrupt enable */
    using I2C_CR1_TCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Transfer Complete interrupt disabled (value: 0)
     *          - B_0x1: Transfer Complete interrupt enabled (value: 1)
     */
        /** @brief Transfer Complete interrupt disabled */
    constexpr std::uint32_t I2C_CR1_TCIE_B_0x0 = 0;
        /** @brief Transfer Complete interrupt enabled */
    constexpr std::uint32_t I2C_CR1_TCIE_B_0x1 = 1;

    /** @brief Error interrupts enable */
    using I2C_CR1_ERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Error detection interrupts disabled (value: 0)
     *          - B_0x1: Error detection interrupts enabled (value: 1)
     */
        /** @brief Error detection interrupts disabled */
    constexpr std::uint32_t I2C_CR1_ERRIE_B_0x0 = 0;
        /** @brief Error detection interrupts enabled */
    constexpr std::uint32_t I2C_CR1_ERRIE_B_0x1 = 1;

    /** @brief Digital noise filter */
    using I2C_CR1_DNF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Digital filter disabled (value: 0)
     *          - B_0x1: Digital filter enabled and filtering capability up to 1 t less than sub>I2CCLK less than /sub> (value: 1)
     *          - B_0xF: digital filter enabled and filtering capability up to15 t less than sub>I2CCLK less than /sub> (value: 15)
     */
        /** @brief Digital filter disabled */
    constexpr std::uint32_t I2C_CR1_DNF_B_0x0 = 0;
        /** @brief Digital filter enabled and filtering capability up to 1 t less than sub>I2CCLK less than /sub> */
    constexpr std::uint32_t I2C_CR1_DNF_B_0x1 = 1;
        /** @brief digital filter enabled and filtering capability up to15 t less than sub>I2CCLK less than /sub> */
    constexpr std::uint32_t I2C_CR1_DNF_B_0xF = 15;

    /** @brief Analog noise filter OFF */
    using I2C_CR1_ANFOFF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Analog noise filter enabled (value: 0)
     *          - B_0x1: Analog noise filter disabled (value: 1)
     */
        /** @brief Analog noise filter enabled */
    constexpr std::uint32_t I2C_CR1_ANFOFF_B_0x0 = 0;
        /** @brief Analog noise filter disabled */
    constexpr std::uint32_t I2C_CR1_ANFOFF_B_0x1 = 1;

    /** @brief DMA transmission requests enable */
    using I2C_CR1_TXDMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DMA mode disabled for transmission (value: 0)
     *          - B_0x1: DMA mode enabled for transmission (value: 1)
     */
        /** @brief DMA mode disabled for transmission */
    constexpr std::uint32_t I2C_CR1_TXDMAEN_B_0x0 = 0;
        /** @brief DMA mode enabled for transmission */
    constexpr std::uint32_t I2C_CR1_TXDMAEN_B_0x1 = 1;

    /** @brief DMA reception requests enable */
    using I2C_CR1_RXDMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DMA mode disabled for reception (value: 0)
     *          - B_0x1: DMA mode enabled for reception (value: 1)
     */
        /** @brief DMA mode disabled for reception */
    constexpr std::uint32_t I2C_CR1_RXDMAEN_B_0x0 = 0;
        /** @brief DMA mode enabled for reception */
    constexpr std::uint32_t I2C_CR1_RXDMAEN_B_0x1 = 1;

    /** @brief Slave byte control */
    using I2C_CR1_SBC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Slave byte control disabled (value: 0)
     *          - B_0x1: Slave byte control enabled (value: 1)
     */
        /** @brief Slave byte control disabled */
    constexpr std::uint32_t I2C_CR1_SBC_B_0x0 = 0;
        /** @brief Slave byte control enabled */
    constexpr std::uint32_t I2C_CR1_SBC_B_0x1 = 1;

    /** @brief Clock stretching disable */
    using I2C_CR1_NOSTRETCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Clock stretching enabled (value: 0)
     *          - B_0x1: Clock stretching disabled (value: 1)
     */
        /** @brief Clock stretching enabled */
    constexpr std::uint32_t I2C_CR1_NOSTRETCH_B_0x0 = 0;
        /** @brief Clock stretching disabled */
    constexpr std::uint32_t I2C_CR1_NOSTRETCH_B_0x1 = 1;

    /** @brief Wakeup from Stop mode enable */
    using I2C_CR1_WUPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wakeup from Stop mode disable. (value: 0)
     *          - B_0x1: Wakeup from Stop mode enable. (value: 1)
     */
        /** @brief Wakeup from Stop mode disable. */
    constexpr std::uint32_t I2C_CR1_WUPEN_B_0x0 = 0;
        /** @brief Wakeup from Stop mode enable. */
    constexpr std::uint32_t I2C_CR1_WUPEN_B_0x1 = 1;

    /** @brief General call enable */
    using I2C_CR1_GCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: General call disabled. Address 0b00000000 is NACKed. (value: 0)
     *          - B_0x1: General call enabled. Address 0b00000000 is ACKed. (value: 1)
     */
        /** @brief General call disabled. Address 0b00000000 is NACKed. */
    constexpr std::uint32_t I2C_CR1_GCEN_B_0x0 = 0;
        /** @brief General call enabled. Address 0b00000000 is ACKed. */
    constexpr std::uint32_t I2C_CR1_GCEN_B_0x1 = 1;

    /** @brief SMBus host address enable */
    using I2C_CR1_SMBHEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Host address disabled. Address 0b0001000x is NACKed. (value: 0)
     *          - B_0x1: Host address enabled. Address 0b0001000x is ACKed. (value: 1)
     */
        /** @brief Host address disabled. Address 0b0001000x is NACKed. */
    constexpr std::uint32_t I2C_CR1_SMBHEN_B_0x0 = 0;
        /** @brief Host address enabled. Address 0b0001000x is ACKed. */
    constexpr std::uint32_t I2C_CR1_SMBHEN_B_0x1 = 1;

    /** @brief SMBus device default address enable */
    using I2C_CR1_SMBDEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Device default address disabled. Address 0b1100001x is NACKed. (value: 0)
     *          - B_0x1: Device default address enabled. Address 0b1100001x is ACKed. (value: 1)
     */
        /** @brief Device default address disabled. Address 0b1100001x is NACKed. */
    constexpr std::uint32_t I2C_CR1_SMBDEN_B_0x0 = 0;
        /** @brief Device default address enabled. Address 0b1100001x is ACKed. */
    constexpr std::uint32_t I2C_CR1_SMBDEN_B_0x1 = 1;

    /** @brief SMBus alert enable */
    using I2C_CR1_ALERTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The SMBus alert pin (SMBA) is not supported in host mode (SMBHEN=1). In device mode (SMBHEN=0), the SMBA pin is released and the Alert Response Address header is disabled (0001100x followed by NACK). (value: 0)
     *          - B_0x1: The SMBus alert pin is supported in host mode (SMBHEN=1). In device mode (SMBHEN=0), the SMBA pin is driven low and the Alert Response Address header is enabled (0001100x followed by ACK). (value: 1)
     */
        /** @brief The SMBus alert pin (SMBA) is not supported in host mode (SMBHEN=1). In device mode (SMBHEN=0), the SMBA pin is released and the Alert Response Address header is disabled (0001100x followed by NACK). */
    constexpr std::uint32_t I2C_CR1_ALERTEN_B_0x0 = 0;
        /** @brief The SMBus alert pin is supported in host mode (SMBHEN=1). In device mode (SMBHEN=0), the SMBA pin is driven low and the Alert Response Address header is enabled (0001100x followed by ACK). */
    constexpr std::uint32_t I2C_CR1_ALERTEN_B_0x1 = 1;

    /** @brief PEC enable */
    using I2C_CR1_PECEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: PEC calculation disabled (value: 0)
     *          - B_0x1: PEC calculation enabled (value: 1)
     */
        /** @brief PEC calculation disabled */
    constexpr std::uint32_t I2C_CR1_PECEN_B_0x0 = 0;
        /** @brief PEC calculation enabled */
    constexpr std::uint32_t I2C_CR1_PECEN_B_0x1 = 1;

    /** @brief Fast-mode Plus 20 mA drive enable */
    using I2C_CR1_FMP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 20 mA I/O drive disabled (value: 0)
     *          - B_0x1: 20 mA I/O drive enabled (value: 1)
     */
        /** @brief 20 mA I/O drive disabled */
    constexpr std::uint32_t I2C_CR1_FMP_B_0x0 = 0;
        /** @brief 20 mA I/O drive enabled */
    constexpr std::uint32_t I2C_CR1_FMP_B_0x1 = 1;

    /** @brief Address match flag (ADDR) automatic clear */
    using I2C_CR1_ADDRACLR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: ADDR flag is set by hardware and cleared by software by setting ADDRCF bit. (value: 0)
     *          - B_0x1: ADDR flag remains cleared by hardware. This mode can be used in slave mode, to avoid the ADDR clock stretching if the I2C enables only one slave address. This allows a slave data management by DMA only, without any interrupt from peripheral. (value: 1)
     */
        /** @brief ADDR flag is set by hardware and cleared by software by setting ADDRCF bit. */
    constexpr std::uint32_t I2C_CR1_ADDRACLR_B_0x0 = 0;
        /** @brief ADDR flag remains cleared by hardware. This mode can be used in slave mode, to avoid the ADDR clock stretching if the I2C enables only one slave address. This allows a slave data management by DMA only, without any interrupt from peripheral. */
    constexpr std::uint32_t I2C_CR1_ADDRACLR_B_0x1 = 1;

    /** @brief STOP detection flag (STOPF) automatic clear */
    using I2C_CR1_STOPFACLR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: STOPF flag is set by hardware and cleared by software by setting STOPCF bit. (value: 0)
     *          - B_0x1: STOPF flag remains cleared by hardware. This mode can be used in NOSTRETCH slave mode, to avoid the overrun error if the STOPF flag is not cleared before next data transmission. This allows a slave data management by DMA only, without any interrupt from peripheral. (value: 1)
     */
        /** @brief STOPF flag is set by hardware and cleared by software by setting STOPCF bit. */
    constexpr std::uint32_t I2C_CR1_STOPFACLR_B_0x0 = 0;
        /** @brief STOPF flag remains cleared by hardware. This mode can be used in NOSTRETCH slave mode, to avoid the overrun error if the STOPF flag is not cleared before next data transmission. This allows a slave data management by DMA only, without any interrupt from peripheral. */
    constexpr std::uint32_t I2C_CR1_STOPFACLR_B_0x1 = 1;

    /** @brief I2C control register 2 */
    using I2C_CR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Slave address (master mode) */
    using I2C_CR2_SADD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer direction (master mode) */
    using I2C_CR2_RD_WRN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Master requests a write transfer. (value: 0)
     *          - B_0x1: Master requests a read transfer. (value: 1)
     */
        /** @brief Master requests a write transfer. */
    constexpr std::uint32_t I2C_CR2_RD_WRN_B_0x0 = 0;
        /** @brief Master requests a read transfer. */
    constexpr std::uint32_t I2C_CR2_RD_WRN_B_0x1 = 1;

    /** @brief 10-bit addressing mode (master mode) */
    using I2C_CR2_ADD10 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The master operates in 7-bit addressing mode, (value: 0)
     *          - B_0x1: The master operates in 10-bit addressing mode (value: 1)
     */
        /** @brief The master operates in 7-bit addressing mode, */
    constexpr std::uint32_t I2C_CR2_ADD10_B_0x0 = 0;
        /** @brief The master operates in 10-bit addressing mode */
    constexpr std::uint32_t I2C_CR2_ADD10_B_0x1 = 1;

    /** @brief 10-bit address header only read direction (master receiver mode) */
    using I2C_CR2_HEAD10R = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The master sends the complete 10 bit slave address read sequence: Start + 2 bytes 10bit address in write direction + Restart + 1st 7 bits of the 10 bit address in read direction. (value: 0)
     *          - B_0x1: The master only sends the 1st 7 bits of the 10 bit address, followed by Read direction. (value: 1)
     */
        /** @brief The master sends the complete 10 bit slave address read sequence: Start + 2 bytes 10bit address in write direction + Restart + 1st 7 bits of the 10 bit address in read direction. */
    constexpr std::uint32_t I2C_CR2_HEAD10R_B_0x0 = 0;
        /** @brief The master only sends the 1st 7 bits of the 10 bit address, followed by Read direction. */
    constexpr std::uint32_t I2C_CR2_HEAD10R_B_0x1 = 1;

    /** @brief Start generation */
    using I2C_CR2_START = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No Start generation. (value: 0)
     *          - B_0x1: Restart/Start generation: (value: 1)
     */
        /** @brief No Start generation. */
    constexpr std::uint32_t I2C_CR2_START_B_0x0 = 0;
        /** @brief Restart/Start generation: */
    constexpr std::uint32_t I2C_CR2_START_B_0x1 = 1;

    /** @brief Stop generation (master mode) */
    using I2C_CR2_STOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No Stop generation. (value: 0)
     *          - B_0x1: Stop generation after current byte transfer. (value: 1)
     */
        /** @brief No Stop generation. */
    constexpr std::uint32_t I2C_CR2_STOP_B_0x0 = 0;
        /** @brief Stop generation after current byte transfer. */
    constexpr std::uint32_t I2C_CR2_STOP_B_0x1 = 1;

    /** @brief NACK generation (slave mode) */
    using I2C_CR2_NACK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: an ACK is sent after current received byte. (value: 0)
     *          - B_0x1: a NACK is sent after current received byte. (value: 1)
     */
        /** @brief an ACK is sent after current received byte. */
    constexpr std::uint32_t I2C_CR2_NACK_B_0x0 = 0;
        /** @brief a NACK is sent after current received byte. */
    constexpr std::uint32_t I2C_CR2_NACK_B_0x1 = 1;

    /** @brief Number of bytes */
    using I2C_CR2_NBYTES = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NBYTES reload mode */
    using I2C_CR2_RELOAD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The transfer is completed after the NBYTES data transfer (STOP or RESTART follows). (value: 0)
     *          - B_0x1: The transfer is not completed after the NBYTES data transfer (NBYTES is reloaded). TCR flag is set when NBYTES data are transferred, stretching SCL low. (value: 1)
     */
        /** @brief The transfer is completed after the NBYTES data transfer (STOP or RESTART follows). */
    constexpr std::uint32_t I2C_CR2_RELOAD_B_0x0 = 0;
        /** @brief The transfer is not completed after the NBYTES data transfer (NBYTES is reloaded). TCR flag is set when NBYTES data are transferred, stretching SCL low. */
    constexpr std::uint32_t I2C_CR2_RELOAD_B_0x1 = 1;

    /** @brief Automatic end mode (master mode) */
    using I2C_CR2_AUTOEND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: software end mode: TC flag is set when NBYTES data are transferred, stretching SCL low. (value: 0)
     *          - B_0x1: Automatic end mode: a STOP condition is automatically sent when NBYTES data are transferred. (value: 1)
     */
        /** @brief software end mode: TC flag is set when NBYTES data are transferred, stretching SCL low. */
    constexpr std::uint32_t I2C_CR2_AUTOEND_B_0x0 = 0;
        /** @brief Automatic end mode: a STOP condition is automatically sent when NBYTES data are transferred. */
    constexpr std::uint32_t I2C_CR2_AUTOEND_B_0x1 = 1;

    /** @brief Packet error checking byte */
    using I2C_CR2_PECBYTE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No PEC transfer. (value: 0)
     *          - B_0x1: PEC transmission/reception is requested (value: 1)
     */
        /** @brief No PEC transfer. */
    constexpr std::uint32_t I2C_CR2_PECBYTE_B_0x0 = 0;
        /** @brief PEC transmission/reception is requested */
    constexpr std::uint32_t I2C_CR2_PECBYTE_B_0x1 = 1;

    /** @brief I2C own address 1 register */
    using I2C_OAR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interface own slave address */
    using I2C_OAR1_OA1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Own address 1 10-bit mode */
    using I2C_OAR1_OA1MODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Own address 1 is a 7-bit address. (value: 0)
     *          - B_0x1: Own address 1 is a 10-bit address. (value: 1)
     */
        /** @brief Own address 1 is a 7-bit address. */
    constexpr std::uint32_t I2C_OAR1_OA1MODE_B_0x0 = 0;
        /** @brief Own address 1 is a 10-bit address. */
    constexpr std::uint32_t I2C_OAR1_OA1MODE_B_0x1 = 1;

    /** @brief Own address 1 enable */
    using I2C_OAR1_OA1EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Own address 1 disabled. The received slave address OA1 is NACKed. (value: 0)
     *          - B_0x1: Own address 1 enabled. The received slave address OA1 is ACKed. (value: 1)
     */
        /** @brief Own address 1 disabled. The received slave address OA1 is NACKed. */
    constexpr std::uint32_t I2C_OAR1_OA1EN_B_0x0 = 0;
        /** @brief Own address 1 enabled. The received slave address OA1 is ACKed. */
    constexpr std::uint32_t I2C_OAR1_OA1EN_B_0x1 = 1;

    /** @brief I2C own address 2 register */
    using I2C_OAR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Interface address */
    using I2C_OAR2_OA2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Own address 2 masks */
    using I2C_OAR2_OA2MSK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No mask (value: 0)
     *          - B_0x1: OA2[1] is masked and don't care. Only OA2[7:2] are compared. (value: 1)
     *          - B_0x2: OA2[2:1] are masked and don't care. Only OA2[7:3] are compared. (value: 2)
     *          - B_0x3: OA2[3:1] are masked and don't care. Only OA2[7:4] are compared. (value: 3)
     *          - B_0x4: OA2[4:1] are masked and don't care. Only OA2[7:5] are compared. (value: 4)
     *          - B_0x5: OA2[5:1] are masked and don't care. Only OA2[7:6] are compared. (value: 5)
     *          - B_0x6: OA2[6:1] are masked and don't care. Only OA2[7] is compared. (value: 6)
     *          - B_0x7: OA2[7:1] are masked and don't care. No comparison is done, and all (except reserved) 7-bit received addresses are acknowledged. (value: 7)
     */
        /** @brief No mask */
    constexpr std::uint32_t I2C_OAR2_OA2MSK_B_0x0 = 0;
        /** @brief OA2[1] is masked and don't care. Only OA2[7:2] are compared. */
    constexpr std::uint32_t I2C_OAR2_OA2MSK_B_0x1 = 1;
        /** @brief OA2[2:1] are masked and don't care. Only OA2[7:3] are compared. */
    constexpr std::uint32_t I2C_OAR2_OA2MSK_B_0x2 = 2;
        /** @brief OA2[3:1] are masked and don't care. Only OA2[7:4] are compared. */
    constexpr std::uint32_t I2C_OAR2_OA2MSK_B_0x3 = 3;
        /** @brief OA2[4:1] are masked and don't care. Only OA2[7:5] are compared. */
    constexpr std::uint32_t I2C_OAR2_OA2MSK_B_0x4 = 4;
        /** @brief OA2[5:1] are masked and don't care. Only OA2[7:6] are compared. */
    constexpr std::uint32_t I2C_OAR2_OA2MSK_B_0x5 = 5;
        /** @brief OA2[6:1] are masked and don't care. Only OA2[7] is compared. */
    constexpr std::uint32_t I2C_OAR2_OA2MSK_B_0x6 = 6;
        /** @brief OA2[7:1] are masked and don't care. No comparison is done, and all (except reserved) 7-bit received addresses are acknowledged. */
    constexpr std::uint32_t I2C_OAR2_OA2MSK_B_0x7 = 7;

    /** @brief Own address 2 enable */
    using I2C_OAR2_OA2EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Own address 2 disabled. The received slave address OA2 is NACKed. (value: 0)
     *          - B_0x1: Own address 2 enabled. The received slave address OA2 is ACKed. (value: 1)
     */
        /** @brief Own address 2 disabled. The received slave address OA2 is NACKed. */
    constexpr std::uint32_t I2C_OAR2_OA2EN_B_0x0 = 0;
        /** @brief Own address 2 enabled. The received slave address OA2 is ACKed. */
    constexpr std::uint32_t I2C_OAR2_OA2EN_B_0x1 = 1;

    /** @brief I2C timing register */
    using I2C_TIMINGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SCL low period (master mode) */
    using I2C_TIMINGR_SCLL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SCL high period (master mode) */
    using I2C_TIMINGR_SCLH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data hold time */
    using I2C_TIMINGR_SDADEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data setup time */
    using I2C_TIMINGR_SCLDEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timing prescaler */
    using I2C_TIMINGR_PRESC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C timeout register */
    using I2C_TIMEOUTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bus Timeout A */
    using I2C_TIMEOUTR_TIMEOUTA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Idle clock timeout detection */
    using I2C_TIMEOUTR_TIDLE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIMEOUTA is used to detect SCL low timeout (value: 0)
     *          - B_0x1: TIMEOUTA is used to detect both SCL and SDA high timeout (bus idle condition) (value: 1)
     */
        /** @brief TIMEOUTA is used to detect SCL low timeout */
    constexpr std::uint32_t I2C_TIMEOUTR_TIDLE_B_0x0 = 0;
        /** @brief TIMEOUTA is used to detect both SCL and SDA high timeout (bus idle condition) */
    constexpr std::uint32_t I2C_TIMEOUTR_TIDLE_B_0x1 = 1;

    /** @brief Clock timeout enable */
    using I2C_TIMEOUTR_TIMOUTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SCL timeout detection is disabled (value: 0)
     *          - B_0x1: SCL timeout detection is enabled: when SCL is low for more than t less than sub>TIMEOUT less than /sub> (TIDLE=0) or high for more than t less than sub>IDLE less than /sub>(TIDLE=1), a timeout error is detected (TIMEOUT=1). (value: 1)
     */
        /** @brief SCL timeout detection is disabled */
    constexpr std::uint32_t I2C_TIMEOUTR_TIMOUTEN_B_0x0 = 0;
        /** @brief SCL timeout detection is enabled: when SCL is low for more than t less than sub>TIMEOUT less than /sub> (TIDLE=0) or high for more than t less than sub>IDLE less than /sub>(TIDLE=1), a timeout error is detected (TIMEOUT=1). */
    constexpr std::uint32_t I2C_TIMEOUTR_TIMOUTEN_B_0x1 = 1;

    /** @brief Bus timeout B */
    using I2C_TIMEOUTR_TIMEOUTB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 12, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Extended clock timeout enable */
    using I2C_TIMEOUTR_TEXTEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Extended clock timeout detection is disabled (value: 0)
     *          - B_0x1: Extended clock timeout detection is enabled. When a cumulative SCL stretch for more than t less than sub>LOW:EXT less than /sub>is done by the I2C interface, a timeout error is detected (TIMEOUT=1). (value: 1)
     */
        /** @brief Extended clock timeout detection is disabled */
    constexpr std::uint32_t I2C_TIMEOUTR_TEXTEN_B_0x0 = 0;
        /** @brief Extended clock timeout detection is enabled. When a cumulative SCL stretch for more than t less than sub>LOW:EXT less than /sub>is done by the I2C interface, a timeout error is detected (TIMEOUT=1). */
    constexpr std::uint32_t I2C_TIMEOUTR_TEXTEN_B_0x1 = 1;

    /** @brief I2C interrupt and status register */
    using I2C_ISR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit data register empty (transmitters) */
    using I2C_ISR_TXE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transmit interrupt status (transmitters) */
    using I2C_ISR_TXIS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Receive data register not empty (receivers) */
    using I2C_ISR_RXNE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Address matched (slave mode) */
    using I2C_ISR_ADDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Not Acknowledge received flag */
    using I2C_ISR_NACKF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Stop detection flag */
    using I2C_ISR_STOPF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer Complete (master mode) */
    using I2C_ISR_TC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer Complete Reload */
    using I2C_ISR_TCR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bus error */
    using I2C_ISR_BERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Arbitration lost */
    using I2C_ISR_ARLO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Overrun/Underrun (slave mode) */
    using I2C_ISR_OVR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PEC Error in reception */
    using I2C_ISR_PECERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timeout or t less than sub>LOW less than /sub> detection flag */
    using I2C_ISR_TIMEOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SMBus alert */
    using I2C_ISR_ALERT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bus busy */
    using I2C_ISR_BUSY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer direction (Slave mode) */
    using I2C_ISR_DIR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Write transfer, slave enters receiver mode. (value: 0)
     *          - B_0x1: Read transfer, slave enters transmitter mode. (value: 1)
     */
        /** @brief Write transfer, slave enters receiver mode. */
    constexpr std::uint32_t I2C_ISR_DIR_B_0x0 = 0;
        /** @brief Read transfer, slave enters transmitter mode. */
    constexpr std::uint32_t I2C_ISR_DIR_B_0x1 = 1;

    /** @brief Address match code (Slave mode) */
    using I2C_ISR_ADDCODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C interrupt clear register */
    using I2C_ICR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Address matched flag clear */
    using I2C_ICR_ADDRCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Not Acknowledge flag clear */
    using I2C_ICR_NACKCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief STOP detection flag clear */
    using I2C_ICR_STOPCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Bus error flag clear */
    using I2C_ICR_BERRCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Arbitration lost flag clear */
    using I2C_ICR_ARLOCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Overrun/Underrun flag clear */
    using I2C_ICR_OVRCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief PEC Error flag clear */
    using I2C_ICR_PECCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timeout detection flag clear */
    using I2C_ICR_TIMOUTCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alert flag clear */
    using I2C_ICR_ALERTCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C PEC register */
    using I2C_PECR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Packet error checking register */
    using I2C_PECR_PEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C receive data register */
    using I2C_RXDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 8-bit receive data */
    using I2C_RXDR_RXDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2C transmit data register */
    using I2C_TXDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x28, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 8-bit transmit data */
    using I2C_TXDR_TXDATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
