/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32H573_SEC_SPI4_HPP
#define EMBEDDED_PP_STM32H573_SEC_SPI4_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Serial peripheral interface */
namespace STM32H573::SEC_SPI4 {

    /** @brief SPI/I2S control register 1 */
    using SPI_CR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief serial peripheral enable This bit is set by and cleared by software. When SPE=1, SPI data transfer is enabled, SPI_CFG1 and SPI_CFG2 configuration registers, CRCPOLY, UDRDR, IOLOCK bit in the SPI_CR1 register are write protected. They can be changed only when SPE=0. When SPE=0 any SPI operation is stopped and disabled, all the pending requests of the events with enabled interrupt are blocked except the MODF interrupt request (but their pending still propagates the request of the spi_plck clock), the SS output is deactivated at master, the RDY signal keeps not ready status at slave, the internal state machine is reseted, all the FIFOs content is flushed, CRC calculation initialized, receive data register is read zero. SPE is cleared and cannot be set when MODF error flag is active. */
    using SPI_CR1_SPE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Serial peripheral disabled. (value: 0)
     *          - B_0x1: Serial peripheral enabled (value: 1)
     */
        /** @brief Serial peripheral disabled. */
    constexpr std::uint32_t SPI_CR1_SPE_B_0x0 = 0;
        /** @brief Serial peripheral enabled */
    constexpr std::uint32_t SPI_CR1_SPE_B_0x1 = 1;

    /** @brief master automatic suspension in Receive mode This bit is set and cleared by software to control continuous SPI transfer in master receiver mode and automatic management in order to avoid overrun condition. When SPI communication is suspended by hardware automatically, it could happen that few bits of next frame are already clocked out due to internal synchronization delay. This is why, the automatic suspension is not quite reliable when size of data drops below 8 bits. In this case, a safe suspension can be achieved by combination with delay inserted between data frames applied when MIDI parameter keeps a non zero value; sum of data size and the interleaved SPI cycles should always produce interval at length of 8 SPI clock periods at minimum. After software clearing of the SUSP bit, the communication resumes and continues by subsequent bits transaction without any next constraint. Prior the SUSP bit is cleared, the user must release the RxFIFO space as much as possible by reading out all the data packets available at RxFIFO based on the RXP flag indication to prevent any subsequent suspension. */
    using SPI_CR1_MASRX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI flow/clock generation is continuous, regardless of overrun condition. (data are lost) (value: 0)
     *          - B_0x1: SPI flow is suspended temporary on RxFIFO full condition, before reaching overrun condition. The SUSP flag is set when the SPI communication is suspended. (value: 1)
     */
        /** @brief SPI flow/clock generation is continuous, regardless of overrun condition. (data are lost) */
    constexpr std::uint32_t SPI_CR1_MASRX_B_0x0 = 0;
        /** @brief SPI flow is suspended temporary on RxFIFO full condition, before reaching overrun condition. The SUSP flag is set when the SPI communication is suspended. */
    constexpr std::uint32_t SPI_CR1_MASRX_B_0x1 = 1;

    /** @brief master transfer start This bit can be set by software if SPI is enabled only to start an SPI or I2S/PCM communication. In SPI mode, it is cleared by hardware when end of transfer (EOT) flag is set or when a transaction suspend request is accepted. In I2S/PCM mode, it is also cleared by hardware as described in the . In SPI mode, the bit is taken into account at master mode only. If transmission is enabled, communication starts or continues only if any data is available in the transmission FIFO. */
    using SPI_CR1_CSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: master transfer is at idle (value: 0)
     *          - B_0x1: master transfer is on-going or temporary suspended by automatic suspend (value: 1)
     */
        /** @brief master transfer is at idle */
    constexpr std::uint32_t SPI_CR1_CSTART_B_0x0 = 0;
        /** @brief master transfer is on-going or temporary suspended by automatic suspend */
    constexpr std::uint32_t SPI_CR1_CSTART_B_0x1 = 1;

    /** @brief master SUSPend request This bit reads as zero. In Master mode, when this bit is set by software, the CSTART bit is reset at the end of the current frame and communication is suspended. The user has to check SUSP flag to check end of the frame transaction. The Master mode communication must be suspended (using this bit or keeping TXDR empty) before going to Low-power mode. Can be used in SPI or I2S mode. After software suspension, SUSP flag has to be cleared and SPI disabled and re-enabled before the next transaction starts. */
    using SPI_CR1_CSUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx/Tx direction at Half-duplex mode In Half-Duplex configuration the HDDIR bit establishes the Rx/Tx direction of the data transfer. This bit is ignored in Full-Duplex or any Simplex configuration. */
    using SPI_CR1_HDDIR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI is Receiver (value: 0)
     *          - B_0x1: SPI is transmitter (value: 1)
     */
        /** @brief SPI is Receiver */
    constexpr std::uint32_t SPI_CR1_HDDIR_B_0x0 = 0;
        /** @brief SPI is transmitter */
    constexpr std::uint32_t SPI_CR1_HDDIR_B_0x1 = 1;

    /** @brief internal SS signal input level This bit has an effect only when the SSM bit is set. The value of this bit is forced onto the peripheral SS input internally and the I/O value of the SS pin is ignored. */
    using SPI_CR1_SSI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief 32-bit CRC polynomial configuration */
    using SPI_CR1_CRC33_17 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Full size (33-bit or 17-bit) CRC polynomial is not used (value: 0)
     *          - B_0x1: Full size (33-bit or 17-bit) CRC polynomial is used (value: 1)
     */
        /** @brief Full size (33-bit or 17-bit) CRC polynomial is not used */
    constexpr std::uint32_t SPI_CR1_CRC33_17_B_0x0 = 0;
        /** @brief Full size (33-bit or 17-bit) CRC polynomial is used */
    constexpr std::uint32_t SPI_CR1_CRC33_17_B_0x1 = 1;

    /** @brief CRC calculation initialization pattern control for receiver */
    using SPI_CR1_RCRCINI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: All zero pattern is applied (value: 0)
     *          - B_0x1: All ones pattern is applied (value: 1)
     */
        /** @brief All zero pattern is applied */
    constexpr std::uint32_t SPI_CR1_RCRCINI_B_0x0 = 0;
        /** @brief All ones pattern is applied */
    constexpr std::uint32_t SPI_CR1_RCRCINI_B_0x1 = 1;

    /** @brief CRC calculation initialization pattern control for transmitter */
    using SPI_CR1_TCRCINI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: all zero pattern is applied (value: 0)
     *          - B_0x1: all ones pattern is applied (value: 1)
     */
        /** @brief all zero pattern is applied */
    constexpr std::uint32_t SPI_CR1_TCRCINI_B_0x0 = 0;
        /** @brief all ones pattern is applied */
    constexpr std::uint32_t SPI_CR1_TCRCINI_B_0x1 = 1;

    /** @brief locking the AF configuration of associated IOs This bit is set by software and cleared by hardware whenever the SPE bit is changed from 1 to 0. When this bit is set, SPI_CFG2 register content cannot be modified. This bit can be set when SPI is disabled only else it is write protected. It is cleared and cannot be set when MODF bit is set. */
    using SPI_CR1_IOLOCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AF configuration is not locked (value: 0)
     *          - B_0x1: AF configuration is locked (value: 1)
     */
        /** @brief AF configuration is not locked */
    constexpr std::uint32_t SPI_CR1_IOLOCK_B_0x0 = 0;
        /** @brief AF configuration is locked */
    constexpr std::uint32_t SPI_CR1_IOLOCK_B_0x1 = 1;

    /** @brief SPI/I2S control register 2 */
    using SPI_CR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief number of data at current transfer When these bits are changed by software, the SPI has to be disabled. Endless transaction is initialized when CSTART is set while zero value is stored at TSIZE. TSIZE cannot be set to 0xFFFF respective 0x3FFF value when CRC is enabled. Note: TSIZE[15:10] bits are reserved at limited feature set instances and must be kept at reset value. */
    using SPI_CR2_TSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI/I2S configuration register 1 */
    using SPI_CFG1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief number of bits in at single SPI data frame ..... Note: Maximum data size can be limited up to 16-bits at some instances. At instances with limited set of features, DSIZE2:0] bits are reserved and must be kept at reset state. DSIZE[4:3] bits then control next settings of data size: 00xxx: 8-bits 01xxx: 16-bits 10xxx: 24-bits 11xxx: 32-bits. */
    using SPI_CFG1_DSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: not used (value: 0)
     *          - B_0x1: not used (value: 1)
     *          - B_0x2: not used (value: 2)
     *          - B_0x3: 4-bits (value: 3)
     *          - B_0x4: 5-bits (value: 4)
     *          - B_0x5: 6-bits (value: 5)
     *          - B_0x6: 7-bits (value: 6)
     *          - B_0x7: 8-bits (value: 7)
     *          - B_0x1D: 30-bits (value: 29)
     *          - B_0x1E: 31-bits (value: 30)
     *          - B_0x1F: 32-bits (value: 31)
     */
        /** @brief not used */
    constexpr std::uint32_t SPI_CFG1_DSIZE_B_0x0 = 0;
        /** @brief not used */
    constexpr std::uint32_t SPI_CFG1_DSIZE_B_0x1 = 1;
        /** @brief not used */
    constexpr std::uint32_t SPI_CFG1_DSIZE_B_0x2 = 2;
        /** @brief 4-bits */
    constexpr std::uint32_t SPI_CFG1_DSIZE_B_0x3 = 3;
        /** @brief 5-bits */
    constexpr std::uint32_t SPI_CFG1_DSIZE_B_0x4 = 4;
        /** @brief 6-bits */
    constexpr std::uint32_t SPI_CFG1_DSIZE_B_0x5 = 5;
        /** @brief 7-bits */
    constexpr std::uint32_t SPI_CFG1_DSIZE_B_0x6 = 6;
        /** @brief 8-bits */
    constexpr std::uint32_t SPI_CFG1_DSIZE_B_0x7 = 7;
        /** @brief 30-bits */
    constexpr std::uint32_t SPI_CFG1_DSIZE_B_0x1D = 29;
        /** @brief 31-bits */
    constexpr std::uint32_t SPI_CFG1_DSIZE_B_0x1E = 30;
        /** @brief 32-bits */
    constexpr std::uint32_t SPI_CFG1_DSIZE_B_0x1F = 31;

    /** @brief FIFO threshold level Defines number of data frames at single data packet. Size of the packet should not exceed 1/2 of FIFO space. SPI interface is more efficient if configured packet sizes are aligned with data register access parallelism: If SPI data register is accessed as a 16-bit register and DSIZE less than or equal 8 bit, better to select FTHLV = 2, 4, 6. If SPI data register is accessed as a 32-bit register and DSIZE 8 bit, better to select FTHLV = 2, 4, 6, while if DSIZE less than or equal 8bit, better to select FTHLV = 4, 8, 12. Note: FTHLV[3:2] bits are reserved at instances with limited set of features */
    using SPI_CFG1_FTHLV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 1-data (value: 0)
     *          - B_0x1: 2-data (value: 1)
     *          - B_0x2: 3-data (value: 2)
     *          - B_0x3: 4-data (value: 3)
     *          - B_0x4: 5-data (value: 4)
     *          - B_0x5: 6-data (value: 5)
     *          - B_0x6: 7-data (value: 6)
     *          - B_0x7: 8-data (value: 7)
     *          - B_0x8: 9-data (value: 8)
     *          - B_0x9: 10-data (value: 9)
     *          - B_0xA: 11-data (value: 10)
     *          - B_0xB: 12-data (value: 11)
     *          - B_0xC: 13-data (value: 12)
     *          - B_0xD: 14-data (value: 13)
     *          - B_0xE: 15-data (value: 14)
     *          - B_0xF: 16-data (value: 15)
     */
        /** @brief 1-data */
    constexpr std::uint32_t SPI_CFG1_FTHLV_B_0x0 = 0;
        /** @brief 2-data */
    constexpr std::uint32_t SPI_CFG1_FTHLV_B_0x1 = 1;
        /** @brief 3-data */
    constexpr std::uint32_t SPI_CFG1_FTHLV_B_0x2 = 2;
        /** @brief 4-data */
    constexpr std::uint32_t SPI_CFG1_FTHLV_B_0x3 = 3;
        /** @brief 5-data */
    constexpr std::uint32_t SPI_CFG1_FTHLV_B_0x4 = 4;
        /** @brief 6-data */
    constexpr std::uint32_t SPI_CFG1_FTHLV_B_0x5 = 5;
        /** @brief 7-data */
    constexpr std::uint32_t SPI_CFG1_FTHLV_B_0x6 = 6;
        /** @brief 8-data */
    constexpr std::uint32_t SPI_CFG1_FTHLV_B_0x7 = 7;
        /** @brief 9-data */
    constexpr std::uint32_t SPI_CFG1_FTHLV_B_0x8 = 8;
        /** @brief 10-data */
    constexpr std::uint32_t SPI_CFG1_FTHLV_B_0x9 = 9;
        /** @brief 11-data */
    constexpr std::uint32_t SPI_CFG1_FTHLV_B_0xA = 10;
        /** @brief 12-data */
    constexpr std::uint32_t SPI_CFG1_FTHLV_B_0xB = 11;
        /** @brief 13-data */
    constexpr std::uint32_t SPI_CFG1_FTHLV_B_0xC = 12;
        /** @brief 14-data */
    constexpr std::uint32_t SPI_CFG1_FTHLV_B_0xD = 13;
        /** @brief 15-data */
    constexpr std::uint32_t SPI_CFG1_FTHLV_B_0xE = 14;
        /** @brief 16-data */
    constexpr std::uint32_t SPI_CFG1_FTHLV_B_0xF = 15;

    /** @brief behavior of slave transmitter at underrun condition For more details see underrun condition. */
    using SPI_CFG1_UDRCFG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: slave sends a constant pattern defined by the user at the SPI_UDRDR register (value: 0)
     *          - B_0x1: Slave repeats lastly received data from master. When slave is configured at transmit only mode (COMM[1:0]=01), all zeros pattern is repeated. (value: 1)
     */
        /** @brief slave sends a constant pattern defined by the user at the SPI_UDRDR register */
    constexpr std::uint32_t SPI_CFG1_UDRCFG_B_0x0 = 0;
        /** @brief Slave repeats lastly received data from master. When slave is configured at transmit only mode (COMM[1:0]=01), all zeros pattern is repeated. */
    constexpr std::uint32_t SPI_CFG1_UDRCFG_B_0x1 = 1;

    /** @brief Rx DMA stream enable */
    using SPI_CFG1_RXDMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Rx-DMA disabled (value: 0)
     *          - B_0x1: Rx-DMA enabled (value: 1)
     */
        /** @brief Rx-DMA disabled */
    constexpr std::uint32_t SPI_CFG1_RXDMAEN_B_0x0 = 0;
        /** @brief Rx-DMA enabled */
    constexpr std::uint32_t SPI_CFG1_RXDMAEN_B_0x1 = 1;

    /** @brief Tx DMA stream enable */
    using SPI_CFG1_TXDMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Tx DMA disabled (value: 0)
     *          - B_0x1: Tx DMA enabled (value: 1)
     */
        /** @brief Tx DMA disabled */
    constexpr std::uint32_t SPI_CFG1_TXDMAEN_B_0x0 = 0;
        /** @brief Tx DMA enabled */
    constexpr std::uint32_t SPI_CFG1_TXDMAEN_B_0x1 = 1;

    /** @brief length of CRC frame to be transacted and compared Most significant bits are taken into account from polynomial calculation when CRC result is transacted or compared. The length of the polynomial is not affected by this setting. ..... The value must be set equal or multiply of data size (DSIZE[4:0]). Its maximum size corresponds to DSIZE maximum at the instance. Note: The most significant bit at CRCSIZE bit field is reserved at the peripheral instances where data size is limited to 16-bit. */
    using SPI_CFG1_CRCSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x3: 4-bits (value: 3)
     *          - B_0x4: 5-bits (value: 4)
     *          - B_0x5: 6-bits (value: 5)
     *          - B_0x6: 7-bits (value: 6)
     *          - B_0x7: 8-bits (value: 7)
     *          - B_0x1D: 30-bits (value: 29)
     *          - B_0x1E: 31-bits (value: 30)
     *          - B_0x1F: 32-bits (value: 31)
     */
        /** @brief 4-bits */
    constexpr std::uint32_t SPI_CFG1_CRCSIZE_B_0x3 = 3;
        /** @brief 5-bits */
    constexpr std::uint32_t SPI_CFG1_CRCSIZE_B_0x4 = 4;
        /** @brief 6-bits */
    constexpr std::uint32_t SPI_CFG1_CRCSIZE_B_0x5 = 5;
        /** @brief 7-bits */
    constexpr std::uint32_t SPI_CFG1_CRCSIZE_B_0x6 = 6;
        /** @brief 8-bits */
    constexpr std::uint32_t SPI_CFG1_CRCSIZE_B_0x7 = 7;
        /** @brief 30-bits */
    constexpr std::uint32_t SPI_CFG1_CRCSIZE_B_0x1D = 29;
        /** @brief 31-bits */
    constexpr std::uint32_t SPI_CFG1_CRCSIZE_B_0x1E = 30;
        /** @brief 32-bits */
    constexpr std::uint32_t SPI_CFG1_CRCSIZE_B_0x1F = 31;

    /** @brief hardware CRC computation enable */
    using SPI_CFG1_CRCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CRC calculation disabled (value: 0)
     *          - B_0x1: CRC calculation enabled (value: 1)
     */
        /** @brief CRC calculation disabled */
    constexpr std::uint32_t SPI_CFG1_CRCEN_B_0x0 = 0;
        /** @brief CRC calculation enabled */
    constexpr std::uint32_t SPI_CFG1_CRCEN_B_0x1 = 1;

    /** @brief master baud rate prescaler setting Note: MBR setting is considered at slave working at TI mode, too (see mode). */
    using SPI_CFG1_MBR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI master clock/2 (value: 0)
     *          - B_0x1: SPI master clock/4 (value: 1)
     *          - B_0x2: SPI master clock/8 (value: 2)
     *          - B_0x3: SPI master clock/16 (value: 3)
     *          - B_0x4: SPI master clock/32 (value: 4)
     *          - B_0x5: SPI master clock/64 (value: 5)
     *          - B_0x6: SPI master clock/128 (value: 6)
     *          - B_0x7: SPI master clock/256 (value: 7)
     */
        /** @brief SPI master clock/2 */
    constexpr std::uint32_t SPI_CFG1_MBR_B_0x0 = 0;
        /** @brief SPI master clock/4 */
    constexpr std::uint32_t SPI_CFG1_MBR_B_0x1 = 1;
        /** @brief SPI master clock/8 */
    constexpr std::uint32_t SPI_CFG1_MBR_B_0x2 = 2;
        /** @brief SPI master clock/16 */
    constexpr std::uint32_t SPI_CFG1_MBR_B_0x3 = 3;
        /** @brief SPI master clock/32 */
    constexpr std::uint32_t SPI_CFG1_MBR_B_0x4 = 4;
        /** @brief SPI master clock/64 */
    constexpr std::uint32_t SPI_CFG1_MBR_B_0x5 = 5;
        /** @brief SPI master clock/128 */
    constexpr std::uint32_t SPI_CFG1_MBR_B_0x6 = 6;
        /** @brief SPI master clock/256 */
    constexpr std::uint32_t SPI_CFG1_MBR_B_0x7 = 7;

    /** @brief bypass of the prescaler at master baud rate clock generator */
    using SPI_CFG1_BPASS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: bypass is disabled (value: 0)
     *          - B_0x1: bypass is enabled (value: 1)
     */
        /** @brief bypass is disabled */
    constexpr std::uint32_t SPI_CFG1_BPASS_B_0x0 = 0;
        /** @brief bypass is enabled */
    constexpr std::uint32_t SPI_CFG1_BPASS_B_0x1 = 1;

    /** @brief SPI/I2S configuration register 2 */
    using SPI_CFG2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Master SS Idleness Specifies an extra delay, expressed in number of SPI clock cycle periods, inserted additionally between active edge of SS opening a session and the beginning of the first data frame of the session in Master mode when SSOE is enabled. ... Note: This feature is not supported in TI mode. To include the delay, the SPI must be disabled and re-enabled between sessions. */
    using SPI_CFG2_MSSI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no extra delay (value: 0)
     *          - B_0x1: 1 clock cycle period delay added (value: 1)
     *          - B_0xF: 15 clock cycle periods delay added (value: 15)
     */
        /** @brief no extra delay */
    constexpr std::uint32_t SPI_CFG2_MSSI_B_0x0 = 0;
        /** @brief 1 clock cycle period delay added */
    constexpr std::uint32_t SPI_CFG2_MSSI_B_0x1 = 1;
        /** @brief 15 clock cycle periods delay added */
    constexpr std::uint32_t SPI_CFG2_MSSI_B_0xF = 15;

    /** @brief master Inter-Data Idleness Specifies minimum time delay (expressed in SPI clock cycles periods) inserted between two consecutive data frames in Master mode. ... Note: This feature is not supported in TI mode. */
    using SPI_CFG2_MIDI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no delay (value: 0)
     *          - B_0x1: 1 clock cycle period delay (value: 1)
     *          - B_0xF: 15 clock cycle periods delay (value: 15)
     */
        /** @brief no delay */
    constexpr std::uint32_t SPI_CFG2_MIDI_B_0x0 = 0;
        /** @brief 1 clock cycle period delay */
    constexpr std::uint32_t SPI_CFG2_MIDI_B_0x1 = 1;
        /** @brief 15 clock cycle periods delay */
    constexpr std::uint32_t SPI_CFG2_MIDI_B_0xF = 15;

    /** @brief RDY signal input/output management Note: When DSIZE at the SPI_CFG1 register is configured shorter than 8-bit, the RDIOM bit has to be kept at zero. */
    using SPI_CFG2_RDIOM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RDY signal is defined internally fixed as permanently active (RDIOP setting has no effect) (value: 0)
     *          - B_0x1: RDY signal is overtaken from alternate function input (at master case) or output (at slave case) of the dedicated pin (RDIOP setting takes effect) (value: 1)
     */
        /** @brief RDY signal is defined internally fixed as permanently active (RDIOP setting has no effect) */
    constexpr std::uint32_t SPI_CFG2_RDIOM_B_0x0 = 0;
        /** @brief RDY signal is overtaken from alternate function input (at master case) or output (at slave case) of the dedicated pin (RDIOP setting takes effect) */
    constexpr std::uint32_t SPI_CFG2_RDIOM_B_0x1 = 1;

    /** @brief RDY signal input/output polarity */
    using SPI_CFG2_RDIOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: high level of the signal means the slave is ready for communication (value: 0)
     *          - B_0x1: low level of the signal means the slave is ready for communication (value: 1)
     */
        /** @brief high level of the signal means the slave is ready for communication */
    constexpr std::uint32_t SPI_CFG2_RDIOP_B_0x0 = 0;
        /** @brief low level of the signal means the slave is ready for communication */
    constexpr std::uint32_t SPI_CFG2_RDIOP_B_0x1 = 1;

    /** @brief swap functionality of MISO and MOSI pins When this bit is set, the function of MISO and MOSI pins alternate functions are inverted. Original MISO pin becomes MOSI and original MOSI pin becomes MISO. Note: This bit can be also used in PCM and I2S modes to swap SDO and SDI pins. */
    using SPI_CFG2_IOSWP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no swap (value: 0)
     *          - B_0x1: MOSI and MISO are swapped (value: 1)
     */
        /** @brief no swap */
    constexpr std::uint32_t SPI_CFG2_IOSWP_B_0x0 = 0;
        /** @brief MOSI and MISO are swapped */
    constexpr std::uint32_t SPI_CFG2_IOSWP_B_0x1 = 1;

    /** @brief SPI Communication Mode */
    using SPI_CFG2_COMM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: full-duplex (value: 0)
     *          - B_0x1: simplex transmitter (value: 1)
     *          - B_0x2: simplex receiver (value: 2)
     *          - B_0x3: half-duplex (value: 3)
     */
        /** @brief full-duplex */
    constexpr std::uint32_t SPI_CFG2_COMM_B_0x0 = 0;
        /** @brief simplex transmitter */
    constexpr std::uint32_t SPI_CFG2_COMM_B_0x1 = 1;
        /** @brief simplex receiver */
    constexpr std::uint32_t SPI_CFG2_COMM_B_0x2 = 2;
        /** @brief half-duplex */
    constexpr std::uint32_t SPI_CFG2_COMM_B_0x3 = 3;

    /** @brief serial protocol others: reserved, must not be used */
    using SPI_CFG2_SP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI Motorola (value: 0)
     *          - B_0x1: SPI TI (value: 1)
     */
        /** @brief SPI Motorola */
    constexpr std::uint32_t SPI_CFG2_SP_B_0x0 = 0;
        /** @brief SPI TI */
    constexpr std::uint32_t SPI_CFG2_SP_B_0x1 = 1;

    /** @brief SPI Master */
    using SPI_CFG2_MASTER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI Slave (value: 0)
     *          - B_0x1: SPI Master (value: 1)
     */
        /** @brief SPI Slave */
    constexpr std::uint32_t SPI_CFG2_MASTER_B_0x0 = 0;
        /** @brief SPI Master */
    constexpr std::uint32_t SPI_CFG2_MASTER_B_0x1 = 1;

    /** @brief data frame format Note: This bit can be also used in PCM and I2S modes. */
    using SPI_CFG2_LSBFRST = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MSB transmitted first (value: 0)
     *          - B_0x1: LSB transmitted first (value: 1)
     */
        /** @brief MSB transmitted first */
    constexpr std::uint32_t SPI_CFG2_LSBFRST_B_0x0 = 0;
        /** @brief LSB transmitted first */
    constexpr std::uint32_t SPI_CFG2_LSBFRST_B_0x1 = 1;

    /** @brief clock phase */
    using SPI_CFG2_CPHA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: the first clock transition is the first data capture edge (value: 0)
     *          - B_0x1: the second clock transition is the first data capture edge (value: 1)
     */
        /** @brief the first clock transition is the first data capture edge */
    constexpr std::uint32_t SPI_CFG2_CPHA_B_0x0 = 0;
        /** @brief the second clock transition is the first data capture edge */
    constexpr std::uint32_t SPI_CFG2_CPHA_B_0x1 = 1;

    /** @brief clock polarity */
    using SPI_CFG2_CPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SCK signal is at 0 when idle (value: 0)
     *          - B_0x1: SCK signal is at 1 when idle (value: 1)
     */
        /** @brief SCK signal is at 0 when idle */
    constexpr std::uint32_t SPI_CFG2_CPOL_B_0x0 = 0;
        /** @brief SCK signal is at 1 when idle */
    constexpr std::uint32_t SPI_CFG2_CPOL_B_0x1 = 1;

    /** @brief software management of SS signal input When master uses hardware SS output (SSM=0 and SSOE=1) the SS signal input is forced to not active state internally to prevent master mode fault error. */
    using SPI_CFG2_SSM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SS input value is determined by the SS PAD (value: 0)
     *          - B_0x1: SS input value is determined by the SSI bit (value: 1)
     */
        /** @brief SS input value is determined by the SS PAD */
    constexpr std::uint32_t SPI_CFG2_SSM_B_0x0 = 0;
        /** @brief SS input value is determined by the SSI bit */
    constexpr std::uint32_t SPI_CFG2_SSM_B_0x1 = 1;

    /** @brief SS input/output polarity */
    using SPI_CFG2_SSIOP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: low level is active for SS signal (value: 0)
     *          - B_0x1: high level is active for SS signal (value: 1)
     */
        /** @brief low level is active for SS signal */
    constexpr std::uint32_t SPI_CFG2_SSIOP_B_0x0 = 0;
        /** @brief high level is active for SS signal */
    constexpr std::uint32_t SPI_CFG2_SSIOP_B_0x1 = 1;

    /** @brief SS output enable This bit is taken into account in Master mode only */
    using SPI_CFG2_SSOE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SS output is disabled and the SPI can work in multi-master configuration (value: 0)
     *          - B_0x1: SS output is enabled. The SPI cannot work in a multi-master environment. It forces the SS pin at inactive level after the transfer is completed or SPI is disabled with respect to SSOM, MIDI, MSSI, SSIOP bits setting (value: 1)
     */
        /** @brief SS output is disabled and the SPI can work in multi-master configuration */
    constexpr std::uint32_t SPI_CFG2_SSOE_B_0x0 = 0;
        /** @brief SS output is enabled. The SPI cannot work in a multi-master environment. It forces the SS pin at inactive level after the transfer is completed or SPI is disabled with respect to SSOM, MIDI, MSSI, SSIOP bits setting */
    constexpr std::uint32_t SPI_CFG2_SSOE_B_0x1 = 1;

    /** @brief SS output management in Master mode This bit is taken into account in Master mode when SSOE is enabled. It allows the SS output to be configured between two consecutive data transfers. */
    using SPI_CFG2_SSOM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SS is kept at active level till data transfer is completed, it becomes inactive with EOT flag (value: 0)
     *          - B_0x1: SPI data frames are interleaved with SS non active pulses when MIDI[3:0] 1 (value: 1)
     */
        /** @brief SS is kept at active level till data transfer is completed, it becomes inactive with EOT flag */
    constexpr std::uint32_t SPI_CFG2_SSOM_B_0x0 = 0;
        /** @brief SPI data frames are interleaved with SS non active pulses when MIDI[3:0] 1 */
    constexpr std::uint32_t SPI_CFG2_SSOM_B_0x1 = 1;

    /** @brief alternate function GPIOs control This bit is taken into account when SPE=0 only When SPI has to be disabled temporary for a specific configuration reason (e.g. CRC reset, CPHA or HDDIR change) setting this bit prevents any glitches on the associated outputs configured at alternate function mode by keeping them forced at state corresponding the current SPI configuration. Note: This bit can be also used in PCM and I2S modes. Note: The bit AFCNTR must not be set to 1, when the block is in slave mode. */
    using SPI_CFG2_AFCNTR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The peripheral takes no control of GPIOs while it is disabled (value: 0)
     *          - B_0x1: The peripheral keeps always control of all associated GPIOs (value: 1)
     */
        /** @brief The peripheral takes no control of GPIOs while it is disabled */
    constexpr std::uint32_t SPI_CFG2_AFCNTR_B_0x0 = 0;
        /** @brief The peripheral keeps always control of all associated GPIOs */
    constexpr std::uint32_t SPI_CFG2_AFCNTR_B_0x1 = 1;

    /** @brief SPI/I2S interrupt enable register */
    using SPI_IER = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RXP interrupt enable */
    using SPI_IER_RXPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RXP interrupt disabled (value: 0)
     *          - B_0x1: RXP interrupt enabled (value: 1)
     */
        /** @brief RXP interrupt disabled */
    constexpr std::uint32_t SPI_IER_RXPIE_B_0x0 = 0;
        /** @brief RXP interrupt enabled */
    constexpr std::uint32_t SPI_IER_RXPIE_B_0x1 = 1;

    /** @brief TXP interrupt enable TXPIE is set by software and cleared by TXTF flag set event. */
    using SPI_IER_TXPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TXP interrupt disabled (value: 0)
     *          - B_0x1: TXP interrupt enabled (value: 1)
     */
        /** @brief TXP interrupt disabled */
    constexpr std::uint32_t SPI_IER_TXPIE_B_0x0 = 0;
        /** @brief TXP interrupt enabled */
    constexpr std::uint32_t SPI_IER_TXPIE_B_0x1 = 1;

    /** @brief DXP interrupt enabled DXPIE is set by software and cleared by TXTF flag set event. */
    using SPI_IER_DXPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DXP interrupt disabled (value: 0)
     *          - B_0x1: DXP interrupt enabled (value: 1)
     */
        /** @brief DXP interrupt disabled */
    constexpr std::uint32_t SPI_IER_DXPIE_B_0x0 = 0;
        /** @brief DXP interrupt enabled */
    constexpr std::uint32_t SPI_IER_DXPIE_B_0x1 = 1;

    /** @brief EOT, SUSP and TXC interrupt enable */
    using SPI_IER_EOTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: EOT/SUSP/TXC interrupt disabled (value: 0)
     *          - B_0x1: EOT/SUSP/TXC interrupt enabled (value: 1)
     */
        /** @brief EOT/SUSP/TXC interrupt disabled */
    constexpr std::uint32_t SPI_IER_EOTIE_B_0x0 = 0;
        /** @brief EOT/SUSP/TXC interrupt enabled */
    constexpr std::uint32_t SPI_IER_EOTIE_B_0x1 = 1;

    /** @brief TXTFIE interrupt enable */
    using SPI_IER_TXTFIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TXTF interrupt disabled (value: 0)
     *          - B_0x1: TXTF interrupt enabled (value: 1)
     */
        /** @brief TXTF interrupt disabled */
    constexpr std::uint32_t SPI_IER_TXTFIE_B_0x0 = 0;
        /** @brief TXTF interrupt enabled */
    constexpr std::uint32_t SPI_IER_TXTFIE_B_0x1 = 1;

    /** @brief UDR interrupt enable */
    using SPI_IER_UDRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: UDR interrupt disabled (value: 0)
     *          - B_0x1: UDR interrupt enabled (value: 1)
     */
        /** @brief UDR interrupt disabled */
    constexpr std::uint32_t SPI_IER_UDRIE_B_0x0 = 0;
        /** @brief UDR interrupt enabled */
    constexpr std::uint32_t SPI_IER_UDRIE_B_0x1 = 1;

    /** @brief OVR interrupt enable */
    using SPI_IER_OVRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OVR interrupt disabled (value: 0)
     *          - B_0x1: OVR interrupt enabled (value: 1)
     */
        /** @brief OVR interrupt disabled */
    constexpr std::uint32_t SPI_IER_OVRIE_B_0x0 = 0;
        /** @brief OVR interrupt enabled */
    constexpr std::uint32_t SPI_IER_OVRIE_B_0x1 = 1;

    /** @brief CRC error interrupt enable */
    using SPI_IER_CRCEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CRC interrupt disabled (value: 0)
     *          - B_0x1: CRC interrupt enabled (value: 1)
     */
        /** @brief CRC interrupt disabled */
    constexpr std::uint32_t SPI_IER_CRCEIE_B_0x0 = 0;
        /** @brief CRC interrupt enabled */
    constexpr std::uint32_t SPI_IER_CRCEIE_B_0x1 = 1;

    /** @brief TIFRE interrupt enable */
    using SPI_IER_TIFREIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TIFRE interrupt disabled (value: 0)
     *          - B_0x1: TIFRE interrupt enabled (value: 1)
     */
        /** @brief TIFRE interrupt disabled */
    constexpr std::uint32_t SPI_IER_TIFREIE_B_0x0 = 0;
        /** @brief TIFRE interrupt enabled */
    constexpr std::uint32_t SPI_IER_TIFREIE_B_0x1 = 1;

    /** @brief mode Fault interrupt enable */
    using SPI_IER_MODFIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: MODF interrupt disabled (value: 0)
     *          - B_0x1: MODF interrupt enabled (value: 1)
     */
        /** @brief MODF interrupt disabled */
    constexpr std::uint32_t SPI_IER_MODFIE_B_0x0 = 0;
        /** @brief MODF interrupt enabled */
    constexpr std::uint32_t SPI_IER_MODFIE_B_0x1 = 1;

    /** @brief SPI/I2S status register */
    using SPI_SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx-Packet available In I2S mode, it must be interpreted as follow: RxFIFO level is lower than FTHLV In I2S mode, it must be interpreted as follow: RxFIFO level is higher or equal to FTHLV RXP flag is changed by hardware. It monitors number of overall data currently available at RxFIFO if SPI is enabled. It has to be checked once a data packet is completely read out from RxFIFO. */
    using SPI_SR_RXP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: In SPI mode, it must be interpreted as follow: RxFIFO is empty or a not complete data packet is received (value: 0)
     *          - B_0x1: In SPI mode, it must be interpreted as follow: RxFIFO contains at least 1 data packet (value: 1)
     */
        /** @brief In SPI mode, it must be interpreted as follow: RxFIFO is empty or a not complete data packet is received */
    constexpr std::uint32_t SPI_SR_RXP_B_0x0 = 0;
        /** @brief In SPI mode, it must be interpreted as follow: RxFIFO contains at least 1 data packet */
    constexpr std::uint32_t SPI_SR_RXP_B_0x1 = 1;

    /** @brief Tx-Packet space available In I2S mode, it must be interpreted as follow: there is less than FTHLV free locations in the TxFIFO In I2S mode, it must be interpreted as follow: there is FTHLV or more than FTHLV free locations in the TxFIFO TXP flag is changed by hardware. It monitors overall space currently available at TxFIFO no matter if SPI is enabled or not. It has to be checked once a complete data packet is stored at TxFIFO. */
    using SPI_SR_TXP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: In SPI mode, it must be interpreted as follow: there is not enough space to locate next data packet at TxFIFO (value: 0)
     *          - B_0x1: In SPI mode, it must be interpreted as follow: TxFIFO has enough free location to host 1 data packet (value: 1)
     */
        /** @brief In SPI mode, it must be interpreted as follow: there is not enough space to locate next data packet at TxFIFO */
    constexpr std::uint32_t SPI_SR_TXP_B_0x0 = 0;
        /** @brief In SPI mode, it must be interpreted as follow: TxFIFO has enough free location to host 1 data packet */
    constexpr std::uint32_t SPI_SR_TXP_B_0x1 = 1;

    /** @brief duplex packet DXP flag is set whenever both TXP and RXP flags are set regardless SPI mode. */
    using SPI_SR_DXP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TxFIFO is Full and/or RxFIFO is Empty (value: 0)
     *          - B_0x1: both TxFIFO has space for write and RxFIFO contains for read a single packet at least (value: 1)
     */
        /** @brief TxFIFO is Full and/or RxFIFO is Empty */
    constexpr std::uint32_t SPI_SR_DXP_B_0x0 = 0;
        /** @brief both TxFIFO has space for write and RxFIFO contains for read a single packet at least */
    constexpr std::uint32_t SPI_SR_DXP_B_0x1 = 1;

    /** @brief end of transfer EOT is set by hardware as soon as a full transfer is complete, that is when SPI is re-enabled or when TSIZE number of data have been transmitted and/or received on the SPI. EOT is cleared when SPI is re-enabled or by writing 1 to EOTC bit of SPI_IFCR optionally. EOT flag triggers an interrupt if EOTIE bit is set. If DXP flag is used until TXTF flag is set and DXPIE is cleared, EOT can be used to download the last packets contained into RxFIFO in one-shot. In master, EOT event terminates the data transaction and handles SS output optionally. When CRC is applied, the EOT event is extended over the CRC frame transaction. To restart the internal state machine properly, SPI is strongly suggested to be disabled and re-enabled before next transaction starts despite its setting is not changed. */
    using SPI_SR_EOT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: transfer is on-going or not started (value: 0)
     *          - B_0x1: transfer complete (value: 1)
     */
        /** @brief transfer is on-going or not started */
    constexpr std::uint32_t SPI_SR_EOT_B_0x0 = 0;
        /** @brief transfer complete */
    constexpr std::uint32_t SPI_SR_EOT_B_0x1 = 1;

    /** @brief transmission transfer filled TXTF is set by hardware as soon as all of the data packets in a transfer have been submitted for transmission by application software or DMA, that is when TSIZE number of data have been pushed into the TxFIFO. This bit is cleared by software write 1 to TXTFC bit of SPI_IFCR exclusively. TXTF flag triggers an interrupt if TXTFIE bit is set. TXTF setting clears the TXPIE and DXPIE masks so to off-load application software from calculating when to disable TXP and DXP interrupts. */
    using SPI_SR_TXTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: upload of TxFIFO is on-going or not started (value: 0)
     *          - B_0x1: TxFIFO upload is finished (value: 1)
     */
        /** @brief upload of TxFIFO is on-going or not started */
    constexpr std::uint32_t SPI_SR_TXTF_B_0x0 = 0;
        /** @brief TxFIFO upload is finished */
    constexpr std::uint32_t SPI_SR_TXTF_B_0x1 = 1;

    /** @brief underrun This bit is cleared when SPI is re-enabled or by writing 1 to UDRC bit of SPI_IFCR optionally. Note: In SPI mode, the UDR flag applies to Slave mode only. In I2S/PCM mode, (when available) this flag applies to Master and Slave mode */
    using SPI_SR_UDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no underrun (value: 0)
     *          - B_0x1: underrun detected (value: 1)
     */
        /** @brief no underrun */
    constexpr std::uint32_t SPI_SR_UDR_B_0x0 = 0;
        /** @brief underrun detected */
    constexpr std::uint32_t SPI_SR_UDR_B_0x1 = 1;

    /** @brief overrun This bit is cleared when SPI is re-enabled or by writing 1 to OVRC bit of SPI_IFCR optionally. */
    using SPI_SR_OVR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no overrun (value: 0)
     *          - B_0x1: overrun detected (value: 1)
     */
        /** @brief no overrun */
    constexpr std::uint32_t SPI_SR_OVR_B_0x0 = 0;
        /** @brief overrun detected */
    constexpr std::uint32_t SPI_SR_OVR_B_0x1 = 1;

    /** @brief CRC error This bit is cleared when SPI is re-enabled or by writing 1 to CRCEC bit of SPI_IFCR optionally. */
    using SPI_SR_CRCE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no CRC error (value: 0)
     *          - B_0x1: CRC error detected (value: 1)
     */
        /** @brief no CRC error */
    constexpr std::uint32_t SPI_SR_CRCE_B_0x0 = 0;
        /** @brief CRC error detected */
    constexpr std::uint32_t SPI_SR_CRCE_B_0x1 = 1;

    /** @brief TI frame format error This bit is cleared by writing 1 to TIFREC bit of SPI_IFCR exclusively. */
    using SPI_SR_TIFRE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no TI Frame Error (value: 0)
     *          - B_0x1: TI frame error detected (value: 1)
     */
        /** @brief no TI Frame Error */
    constexpr std::uint32_t SPI_SR_TIFRE_B_0x0 = 0;
        /** @brief TI frame error detected */
    constexpr std::uint32_t SPI_SR_TIFRE_B_0x1 = 1;

    /** @brief mode fault This bit is cleared by writing 1 to MODFC bit of SPI_IFCR exclusively. */
    using SPI_SR_MODF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no mode fault (value: 0)
     *          - B_0x1: mode fault detected. When MODF is set, SPE and IOLOCK bits of SPI_CR1 register are reset and their setting is blocked. (value: 1)
     */
        /** @brief no mode fault */
    constexpr std::uint32_t SPI_SR_MODF_B_0x0 = 0;
        /** @brief mode fault detected. When MODF is set, SPE and IOLOCK bits of SPI_CR1 register are reset and their setting is blocked. */
    constexpr std::uint32_t SPI_SR_MODF_B_0x1 = 1;

    /** @brief suspension status In Master mode, SUSP is set by hardware either as soon as the current frame is completed after CSUSP request is done or at master automatic suspend receive mode (MASRX bit is set at SPI_CR1 register) on RxFIFO full condition. SUSP generates an interrupt when EOTIE is set. This bit has to be cleared prior SPI is disabled and this is done by writing 1 to SUSPC bit of SPI_IFCR exclusively. */
    using SPI_SR_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI not suspended (Master mode active or other mode). (value: 0)
     *          - B_0x1: Master mode is suspended (current frame completed). (value: 1)
     */
        /** @brief SPI not suspended (Master mode active or other mode). */
    constexpr std::uint32_t SPI_SR_SUSP_B_0x0 = 0;
        /** @brief Master mode is suspended (current frame completed). */
    constexpr std::uint32_t SPI_SR_SUSP_B_0x1 = 1;

    /** @brief TxFIFO transmission complete The flag behavior depends on TSIZE setting. When TSIZE=0 the TXC is changed by hardware exclusively and it raises each time the TxFIFO becomes empty and there is no activity on the bus. If TSIZE 0 there is no specific reason to monitor TXC as it just copies the EOT flag value including its software clearing. The TXC generates an interrupt when EOTIE is set. */
    using SPI_SR_TXC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: current data transaction is still ongoing, data is available in TxFIFO or last frame transmission is on going. (value: 0)
     *          - B_0x1: last TxFIFO frame transmission complete (value: 1)
     */
        /** @brief current data transaction is still ongoing, data is available in TxFIFO or last frame transmission is on going. */
    constexpr std::uint32_t SPI_SR_TXC_B_0x0 = 0;
        /** @brief last TxFIFO frame transmission complete */
    constexpr std::uint32_t SPI_SR_TXC_B_0x1 = 1;

    /** @brief RxFIFO packing level When RXWNE=0 and data size is set up to 16-bit, the value gives number of remaining data frames persisting at RxFIFO. Note: (*): Optional value when data size is set up to 8-bit only. When data size is greater than 16-bit, these bits are always read as 00. In that consequence, the single data frame received at the FIFO cannot be detected neither by RWNE nor by RXPLVL bits if data size is set from 17 to 24 bits. The user then must apply other methods like TSIZE 0 or FTHLV=0. */
    using SPI_SR_RXPLVL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no next frame is available at RxFIFO (value: 0)
     *          - B_0x1: 1 frame is available (value: 1)
     *          - B_0x2: 2 frames are available* (value: 2)
     *          - B_0x3: 3 frames are available* (value: 3)
     */
        /** @brief no next frame is available at RxFIFO */
    constexpr std::uint32_t SPI_SR_RXPLVL_B_0x0 = 0;
        /** @brief 1 frame is available */
    constexpr std::uint32_t SPI_SR_RXPLVL_B_0x1 = 1;
        /** @brief 2 frames are available* */
    constexpr std::uint32_t SPI_SR_RXPLVL_B_0x2 = 2;
        /** @brief 3 frames are available* */
    constexpr std::uint32_t SPI_SR_RXPLVL_B_0x3 = 3;

    /** @brief RxFIFO word not empty Note: This bit value does not depend on DSIZE setting and keeps together with RXPLVL[1:0] information about RxFIFO occupancy by residual data. */
    using SPI_SR_RXWNE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: less than four bytes of RxFIFO space is occupied by data (value: 0)
     *          - B_0x1: at least four bytes of RxFIFO space is occupied by data (value: 1)
     */
        /** @brief less than four bytes of RxFIFO space is occupied by data */
    constexpr std::uint32_t SPI_SR_RXWNE_B_0x0 = 0;
        /** @brief at least four bytes of RxFIFO space is occupied by data */
    constexpr std::uint32_t SPI_SR_RXWNE_B_0x1 = 1;

    /** @brief number of data frames remaining in current TSIZE session The value is not quite reliable when traffic is ongoing on bus or during autonomous operation in low-power mode. Note: CTSIZE[15:0] bits are not available in instances with limited set of features. */
    using SPI_SR_CTSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI/I2S interrupt/status flags clear register */
    using SPI_IFCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief end of transfer flag clear Writing a 1 into this bit clears EOT flag in the SPI_SR register */
    using SPI_IFCR_EOTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transmission transfer filled flag clear Writing a 1 into this bit clears TXTF flag in the SPI_SR register */
    using SPI_IFCR_TXTFC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief underrun flag clear Writing a 1 into this bit clears UDR flag in the SPI_SR register */
    using SPI_IFCR_UDRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief overrun flag clear Writing a 1 into this bit clears OVR flag in the SPI_SR register */
    using SPI_IFCR_OVRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRC error flag clear Writing a 1 into this bit clears CRCE flag in the SPI_SR register */
    using SPI_IFCR_CRCEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TI frame format error flag clear Writing a 1 into this bit clears TIFRE flag in the SPI_SR register */
    using SPI_IFCR_TIFREC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief mode fault flag clear Writing a 1 into this bit clears MODF flag in the SPI_SR register */
    using SPI_IFCR_MODFC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SUSPend flag clear Writing a 1 into this bit clears SUSP flag in the SPI_SR register */
    using SPI_IFCR_SUSPC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI/I2S transmit data register */
    using SPI_TXDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transmit data register The register serves as an interface with TxFIFO. A write to it accesses TxFIFO. Note: In SPI mode, data is always right-aligned. Alignment of data at I2S mode depends on DATLEN and DATFMT setting. Unused bits are ignored when writing to the register, and read as zero when the register is read. Note: DR can be accessed byte-wise (8-bit access): in this case only one data-byte is written by single access. halfword-wise (16 bit access) in this case 2 data-bytes or 1 halfword-data can be written by single access. word-wise (32 bit access). In this case 4 data-bytes or 2 halfword-data or word-data can be written by single access. Write access of this register less than the configured data size is forbidden. */
    using SPI_TXDR_TXDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI/I2S receive data register */
    using SPI_RXDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief receive data register The register serves as an interface with RxFIFO. When it is read, RxFIFO is accessed. Note: In SPI mode, data is always right-aligned. Alignment of data at I2S mode depends on DATLEN and DATFMT setting. Unused bits are read as zero when the register is read. Writing to the register is ignored. Note: DR can be accessed byte-wise (8-bit access): in this case only one data-byte is read by single access halfword-wise (16 bit access) in this case 2 data-bytes or 1 halfword-data can be read by single access word-wise (32 bit access). In this case 4 data-bytes or 2 halfword-data or word-data can be read by single access. Read access of this register less than the configured data size is forbidden. */
    using SPI_RXDR_RXDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI/I2S polynomial register */
    using SPI_CRCPOLY = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRC polynomial register This register contains the polynomial for the CRC calculation. The default 9-bit polynomial setting 0x107 corresponds to default 8-bit setting of DSIZE. It is compatible with setting 0x07 used at some other ST products with fixed length of the polynomial string where the most significant bit of the string is always kept hidden. Length of the polynomial is given by the most significant bit of the value stored at this register. It has to be set greater than DSIZE. CRC33_17 bit has to be set additionally with CRCPOLY register when DSIZE is configured to maximum 32-bit or 16-bit size and CRC is enabled (to keep polynomial length grater than data size). Note: CRCPOLY[31:16] bits are reserved at instances with data size limited to 16-bit. There is no constrain when 32-bit access is applied at these addresses. Reserved bits 31-16 are always read zero while any write to them is ignored. */
    using SPI_CRCPOLY_CRCPOLY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI/I2S transmitter CRC register */
    using SPI_TXCRC = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRC register for transmitter When CRC calculation is enabled, the TXCRC[31:0] bits contain the computed CRC value of the subsequently transmitted bytes. CRC calculation is initialized when the CRCEN bit of SPI_CR1 is written to 1 or when a data block is transacted completely. The CRC is calculated serially using the polynomial programmed in the SPI_CRCPOLY register. The number of bits considered at calculation depends on SPI_CRCPOLY register and CRCSIZE bits settings at SPI_CFG1 register. Note: a read to this register when the communication is ongoing could return an incorrect value. Note: not used for the I2S mode. Note: TXCRC[31-16] bits are reserved at instances with data size limited to 16-bit. There is no constrain when 32-bit access is applied at these addresses. Reserved bits 31-16 are always read zero while any write to them is ignored. Note: The configuration of CRCSIZE bit field is not taken into account when the content of this register is read by software. No masking is applied for unused bits at this case. */
    using SPI_TXCRC_TXCRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI/I2S receiver CRC register */
    using SPI_RXCRC = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRC register for receiver When CRC calculation is enabled, the RXCRC[31:0] bits contain the computed CRC value of the subsequently received bytes. CRC calculation is initialized when the CRCEN bit of SPI_CR1 is written to 1 or when a data block is transacted completely. The CRC is calculated serially using the polynomial programmed in the SPI_CRCPOLY register. The number of bits considered at calculation depends on SPI_CRCPOLY register and CRCSIZE bits settings at SPI_CFG1 register. Note: a read to this register when the communication is ongoing could return an incorrect value. Not used for the I2S mode. RXCRC[31-16] bits are reserved at the peripheral instances with data size limited to 16-bit. There is no constrain when 32-bit access is applied at these addresses. Reserved bits 31-16 are always read zero while any write to them is ignored. Note: The configuration of CRCSIZE bit field is not taken into account when the content of this register is read by software. No masking is applied for unused bits at this case. */
    using SPI_RXCRC_RXCRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI/I2S underrun data register */
    using SPI_UDRDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief data at slave underrun condition The register is taken into account in Slave mode and at underrun condition only. The number of bits considered depends on DSIZE bit settings of the SPI_CFG1 register. Underrun condition handling depends on setting UDRCFG bit at SPI_CFG1 register. Note: UDRDR[31-16] bits are reserved at the peripheral instances with data size limited to 16-bit. There is no constraint when 32-bit access is applied at these addresses. Reserved bits 31-16 are always read zero while any write to them is ignored. */
    using SPI_UDRDR_UDRDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI/I2S configuration register */
    using SPI_I2SCFGR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief I2S mode selection */
    using SPI_I2SCFGR_I2SMOD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI mode is selected (value: 0)
     *          - B_0x1: I2S/PCM mode is selected (value: 1)
     */
        /** @brief SPI mode is selected */
    constexpr std::uint32_t SPI_I2SCFGR_I2SMOD_B_0x0 = 0;
        /** @brief I2S/PCM mode is selected */
    constexpr std::uint32_t SPI_I2SCFGR_I2SMOD_B_0x1 = 1;

    /** @brief I2S configuration mode others, not used */
    using SPI_I2SCFGR_I2SCFG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: slave transmit (value: 0)
     *          - B_0x1: slave receive (value: 1)
     *          - B_0x2: master transmit (value: 2)
     *          - B_0x3: master receive (value: 3)
     *          - B_0x4: slave Full Duplex (value: 4)
     *          - B_0x5: master Full Duplex (value: 5)
     */
        /** @brief slave transmit */
    constexpr std::uint32_t SPI_I2SCFGR_I2SCFG_B_0x0 = 0;
        /** @brief slave receive */
    constexpr std::uint32_t SPI_I2SCFGR_I2SCFG_B_0x1 = 1;
        /** @brief master transmit */
    constexpr std::uint32_t SPI_I2SCFGR_I2SCFG_B_0x2 = 2;
        /** @brief master receive */
    constexpr std::uint32_t SPI_I2SCFGR_I2SCFG_B_0x3 = 3;
        /** @brief slave Full Duplex */
    constexpr std::uint32_t SPI_I2SCFGR_I2SCFG_B_0x4 = 4;
        /** @brief master Full Duplex */
    constexpr std::uint32_t SPI_I2SCFGR_I2SCFG_B_0x5 = 5;

    /** @brief I2S standard selection For more details on I2S standards, refer to */
    using SPI_I2SCFGR_I2SSTD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I2S Philips standard. (value: 0)
     *          - B_0x1: MSB justified standard (left justified) (value: 1)
     *          - B_0x2: LSB justified standard (right justified) (value: 2)
     *          - B_0x3: PCM standard (value: 3)
     */
        /** @brief I2S Philips standard. */
    constexpr std::uint32_t SPI_I2SCFGR_I2SSTD_B_0x0 = 0;
        /** @brief MSB justified standard (left justified) */
    constexpr std::uint32_t SPI_I2SCFGR_I2SSTD_B_0x1 = 1;
        /** @brief LSB justified standard (right justified) */
    constexpr std::uint32_t SPI_I2SCFGR_I2SSTD_B_0x2 = 2;
        /** @brief PCM standard */
    constexpr std::uint32_t SPI_I2SCFGR_I2SSTD_B_0x3 = 3;

    /** @brief PCM frame synchronization */
    using SPI_I2SCFGR_PCMSYNC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: short frame synchronization (value: 0)
     *          - B_0x1: long frame synchronization (value: 1)
     */
        /** @brief short frame synchronization */
    constexpr std::uint32_t SPI_I2SCFGR_PCMSYNC_B_0x0 = 0;
        /** @brief long frame synchronization */
    constexpr std::uint32_t SPI_I2SCFGR_PCMSYNC_B_0x1 = 1;

    /** @brief data length to be transferred */
    using SPI_I2SCFGR_DATLEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 16-bit data length (value: 0)
     *          - B_0x1: 24-bit data length (value: 1)
     *          - B_0x2: 32-bit data length (value: 2)
     *          - B_0x3: Not allowed (value: 3)
     */
        /** @brief 16-bit data length */
    constexpr std::uint32_t SPI_I2SCFGR_DATLEN_B_0x0 = 0;
        /** @brief 24-bit data length */
    constexpr std::uint32_t SPI_I2SCFGR_DATLEN_B_0x1 = 1;
        /** @brief 32-bit data length */
    constexpr std::uint32_t SPI_I2SCFGR_DATLEN_B_0x2 = 2;
        /** @brief Not allowed */
    constexpr std::uint32_t SPI_I2SCFGR_DATLEN_B_0x3 = 3;

    /** @brief channel length (number of bits per audio channel) */
    using SPI_I2SCFGR_CHLEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 16-bit wide (value: 0)
     *          - B_0x1: 32-bit wide (value: 1)
     */
        /** @brief 16-bit wide */
    constexpr std::uint32_t SPI_I2SCFGR_CHLEN_B_0x0 = 0;
        /** @brief 32-bit wide */
    constexpr std::uint32_t SPI_I2SCFGR_CHLEN_B_0x1 = 1;

    /** @brief serial audio clock polarity */
    using SPI_I2SCFGR_CKPOL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: the signals generated by the SPI/I2S (i.e. SDO and WS) are changed on the falling edge of CK and the signals received by the SPI/I2S (i.e. SDI and WS) are read of the rising edge of CK. (value: 0)
     *          - B_0x1: the signals generated by the SPI/I2S (i.e. SDO and WS) are changed on the rising edge of CK and the signals received by the SPI/I2S (i.e. SDI and WS) are read of the falling edge of CK. (value: 1)
     */
        /** @brief the signals generated by the SPI/I2S (i.e. SDO and WS) are changed on the falling edge of CK and the signals received by the SPI/I2S (i.e. SDI and WS) are read of the rising edge of CK. */
    constexpr std::uint32_t SPI_I2SCFGR_CKPOL_B_0x0 = 0;
        /** @brief the signals generated by the SPI/I2S (i.e. SDO and WS) are changed on the rising edge of CK and the signals received by the SPI/I2S (i.e. SDI and WS) are read of the falling edge of CK. */
    constexpr std::uint32_t SPI_I2SCFGR_CKPOL_B_0x1 = 1;

    /** @brief fixed channel length in slave */
    using SPI_I2SCFGR_FIXCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: the channel length in Slave mode is different from 16 or 32 bits (CHLEN not taken into account) (value: 0)
     *          - B_0x1: the channel length in Slave mode is supposed to be 16 or 32 bits (according to CHLEN) (value: 1)
     */
        /** @brief the channel length in Slave mode is different from 16 or 32 bits (CHLEN not taken into account) */
    constexpr std::uint32_t SPI_I2SCFGR_FIXCH_B_0x0 = 0;
        /** @brief the channel length in Slave mode is supposed to be 16 or 32 bits (according to CHLEN) */
    constexpr std::uint32_t SPI_I2SCFGR_FIXCH_B_0x1 = 1;

    /** @brief word select inversion This bit is used to invert the default polarity of WS signal. WS is LOW. In PCM mode the start of frame is indicated by a rising edge. WS is HIGH. In PCM mode the start of frame is indicated by a falling edge. */
    using SPI_I2SCFGR_WSINV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: in I2S Philips standard, Left channel is transfered when WS is LOW, and right channel when WS is HIGH. In MSB or LSB justified mode, Left channel is transfered when WS is HIGH, and right channel when (value: 0)
     *          - B_0x1: in I2S Philips standard, Left channel is transfered when WS is HIGH, and right channel when WS is LOW.In MSB or LSB justified mode, Left channel is transfered when WS is LOW, and right channel when (value: 1)
     */
        /** @brief in I2S Philips standard, Left channel is transfered when WS is LOW, and right channel when WS is HIGH. In MSB or LSB justified mode, Left channel is transfered when WS is HIGH, and right channel when */
    constexpr std::uint32_t SPI_I2SCFGR_WSINV_B_0x0 = 0;
        /** @brief in I2S Philips standard, Left channel is transfered when WS is HIGH, and right channel when WS is LOW.In MSB or LSB justified mode, Left channel is transfered when WS is LOW, and right channel when */
    constexpr std::uint32_t SPI_I2SCFGR_WSINV_B_0x1 = 1;

    /** @brief data format */
    using SPI_I2SCFGR_DATFMT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The data inside the SPI_RXDR or SPI_TXDR are right aligned (value: 0)
     *          - B_0x1: The data inside the SPI_RXDR or SPI_TXDR are left aligned. (value: 1)
     */
        /** @brief The data inside the SPI_RXDR or SPI_TXDR are right aligned */
    constexpr std::uint32_t SPI_I2SCFGR_DATFMT_B_0x0 = 0;
        /** @brief The data inside the SPI_RXDR or SPI_TXDR are left aligned. */
    constexpr std::uint32_t SPI_I2SCFGR_DATFMT_B_0x1 = 1;

    /** @brief I2S linear prescaler I2SDIV can take any values except the value 1, when ODD is also equal to 1. Refer to for details */
    using SPI_I2SCFGR_I2SDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief odd factor for the prescaler Refer to for details */
    using SPI_I2SCFGR_ODD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Real divider value is = I2SDIV *2 (value: 0)
     *          - B_0x1: Real divider value is = (I2SDIV * 2) + 1 (value: 1)
     */
        /** @brief Real divider value is = I2SDIV *2 */
    constexpr std::uint32_t SPI_I2SCFGR_ODD_B_0x0 = 0;
        /** @brief Real divider value is = (I2SDIV * 2) + 1 */
    constexpr std::uint32_t SPI_I2SCFGR_ODD_B_0x1 = 1;

    /** @brief master clock output enable */
    using SPI_I2SCFGR_MCKOE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Master clock output is disabled (value: 0)
     *          - B_0x1: Master clock output is enabled (value: 1)
     */
        /** @brief Master clock output is disabled */
    constexpr std::uint32_t SPI_I2SCFGR_MCKOE_B_0x0 = 0;
        /** @brief Master clock output is enabled */
    constexpr std::uint32_t SPI_I2SCFGR_MCKOE_B_0x1 = 1;

}

#endif
