/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32N645_SPI5_HPP
#define EMBEDDED_PP_STM32N645_SPI5_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Serial peripheral interface */
namespace STM32N645::SPI5 {

    /** @brief SPI/I2S control register 1 */
    using SPI_CR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief serial peripheral enable */
    using SPI_CR1_SPE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Serial peripheral disabled. (value: 0)
     *          - B_0x1: Serial peripheral enabled (value: 1)
     */
        /** @brief Serial peripheral disabled. */
    constexpr std::uint32_t SPI_CR1_SPE_B_0x0 = 0;
        /** @brief Serial peripheral enabled */
    constexpr std::uint32_t SPI_CR1_SPE_B_0x1 = 1;

    /** @brief master automatic suspension in Receive mode */
    using SPI_CR1_MASRX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI flow/clock generation is continuous, regardless of overrun condition. (data are lost) (value: 0)
     *          - B_0x1: SPI flow is suspended temporary on RxFIFO full condition, before reaching overrun condition. The SUSP flag is set when the SPI communication is suspended. (value: 1)
     */
        /** @brief SPI flow/clock generation is continuous, regardless of overrun condition. (data are lost) */
    constexpr std::uint32_t SPI_CR1_MASRX_B_0x0 = 0;
        /** @brief SPI flow is suspended temporary on RxFIFO full condition, before reaching overrun condition. The SUSP flag is set when the SPI communication is suspended. */
    constexpr std::uint32_t SPI_CR1_MASRX_B_0x1 = 1;

    /** @brief master transfer start */
    using SPI_CR1_CSTART = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: master transfer is at idle (value: 0)
     *          - B_0x1: master transfer is ongoing or temporary suspended by automatic suspend (value: 1)
     */
        /** @brief master transfer is at idle */
    constexpr std::uint32_t SPI_CR1_CSTART_B_0x0 = 0;
        /** @brief master transfer is ongoing or temporary suspended by automatic suspend */
    constexpr std::uint32_t SPI_CR1_CSTART_B_0x1 = 1;

    /** @brief master suspend request */
    using SPI_CR1_CSUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Rx/Tx direction at Half-duplex mode */
    using SPI_CR1_HDDIR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI is receiver (value: 0)
     *          - B_0x1: SPI is transmitter (value: 1)
     */
        /** @brief SPI is receiver */
    constexpr std::uint32_t SPI_CR1_HDDIR_B_0x0 = 0;
        /** @brief SPI is transmitter */
    constexpr std::uint32_t SPI_CR1_HDDIR_B_0x1 = 1;

    /** @brief internal SS signal input level */
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

    /** @brief locking the AF configuration of associated I/Os */
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
    /** @brief number of data at current transfer */
    using SPI_CR2_TSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI/I2S configuration register 1 */
    using SPI_CFG1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief number of bits in at single SPI data frame */
    using SPI_CFG1_DSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: not used (value: 0)
     *          - B_0x1: not used (value: 1)
     *          - B_0x2: not used (value: 2)
     *          - B_0x3: 4 bits (value: 3)
     *          - B_0x4: 5 bits (value: 4)
     *          - B_0x5: 6 bits (value: 5)
     *          - B_0x6: 7 bits (value: 6)
     *          - B_0x7: 8 bits (value: 7)
     *          - B_0x1D: 30 bits (value: 29)
     *          - B_0x1E: 31 bits (value: 30)
     *          - B_0x1F: 32 bits (value: 31)
     */
        /** @brief not used */
    constexpr std::uint32_t SPI_CFG1_DSIZE_B_0x0 = 0;
        /** @brief not used */
    constexpr std::uint32_t SPI_CFG1_DSIZE_B_0x1 = 1;
        /** @brief not used */
    constexpr std::uint32_t SPI_CFG1_DSIZE_B_0x2 = 2;
        /** @brief 4 bits */
    constexpr std::uint32_t SPI_CFG1_DSIZE_B_0x3 = 3;
        /** @brief 5 bits */
    constexpr std::uint32_t SPI_CFG1_DSIZE_B_0x4 = 4;
        /** @brief 6 bits */
    constexpr std::uint32_t SPI_CFG1_DSIZE_B_0x5 = 5;
        /** @brief 7 bits */
    constexpr std::uint32_t SPI_CFG1_DSIZE_B_0x6 = 6;
        /** @brief 8 bits */
    constexpr std::uint32_t SPI_CFG1_DSIZE_B_0x7 = 7;
        /** @brief 30 bits */
    constexpr std::uint32_t SPI_CFG1_DSIZE_B_0x1D = 29;
        /** @brief 31 bits */
    constexpr std::uint32_t SPI_CFG1_DSIZE_B_0x1E = 30;
        /** @brief 32 bits */
    constexpr std::uint32_t SPI_CFG1_DSIZE_B_0x1F = 31;

    /** @brief FIFO threshold level */
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

    /** @brief behavior of slave transmitter at underrun condition */
    using SPI_CFG1_UDRCFG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: slave sends a constant pattern defined by the user at the SPI_UDRDR register (value: 0)
     *          - B_0x1: Slave repeats lastly received data from master. When slave is configured at transmit only mode (COMM[1:0] = 01), all zeros pattern is repeated. (value: 1)
     */
        /** @brief slave sends a constant pattern defined by the user at the SPI_UDRDR register */
    constexpr std::uint32_t SPI_CFG1_UDRCFG_B_0x0 = 0;
        /** @brief Slave repeats lastly received data from master. When slave is configured at transmit only mode (COMM[1:0] = 01), all zeros pattern is repeated. */
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

    /** @brief length of CRC frame to be transacted and compared */
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

    /** @brief master baud rate prescaler setting */
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
    /** @brief Master SS Idleness */
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

    /** @brief master Inter-Data Idleness */
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

    /** @brief RDY signal input/output management */
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

    /** @brief swap functionality of MISO and MOSI pins */
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

    /** @brief serial protocol */
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

    /** @brief data frame format */
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

    /** @brief software management of SS signal input */
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

    /** @brief SS output enable */
    using SPI_CFG2_SSOE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SS output is disabled and the SPI can work in multi-master configuration (value: 0)
     *          - B_0x1: SS output is enabled. The SPI cannot work in a multi-master environment. It forces the SS pin at inactive level after the transfer is completed or SPI is disabled with respect to SSOM, MIDI, MSSI, SSIOP bits setting (value: 1)
     */
        /** @brief SS output is disabled and the SPI can work in multi-master configuration */
    constexpr std::uint32_t SPI_CFG2_SSOE_B_0x0 = 0;
        /** @brief SS output is enabled. The SPI cannot work in a multi-master environment. It forces the SS pin at inactive level after the transfer is completed or SPI is disabled with respect to SSOM, MIDI, MSSI, SSIOP bits setting */
    constexpr std::uint32_t SPI_CFG2_SSOE_B_0x1 = 1;

    /** @brief SS output management in Master mode */
    using SPI_CFG2_SSOM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SS is kept at active level till data transfer is completed, it becomes inactive with EOT flag (value: 0)
     *          - B_0x1: SPI data frames are interleaved with SS non active pulses when MIDI[3:0]>1 (value: 1)
     */
        /** @brief SS is kept at active level till data transfer is completed, it becomes inactive with EOT flag */
    constexpr std::uint32_t SPI_CFG2_SSOM_B_0x0 = 0;
        /** @brief SPI data frames are interleaved with SS non active pulses when MIDI[3:0]>1 */
    constexpr std::uint32_t SPI_CFG2_SSOM_B_0x1 = 1;

    /** @brief alternate function GPIOs control */
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

    /** @brief TXP interrupt enable */
    using SPI_IER_TXPIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TXP interrupt disabled (value: 0)
     *          - B_0x1: TXP interrupt enabled (value: 1)
     */
        /** @brief TXP interrupt disabled */
    constexpr std::uint32_t SPI_IER_TXPIE_B_0x0 = 0;
        /** @brief TXP interrupt enabled */
    constexpr std::uint32_t SPI_IER_TXPIE_B_0x1 = 1;

    /** @brief DXP interrupt enabled */
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
    /** @brief Rx-packet available */
    using SPI_SR_RXP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: RxFIFO is empty or an incomplete data packet is received (value: 0)
     *          - B_0x1: RxFIFO contains at least one data packet (value: 1)
     */
        /** @brief RxFIFO is empty or an incomplete data packet is received */
    constexpr std::uint32_t SPI_SR_RXP_B_0x0 = 0;
        /** @brief RxFIFO contains at least one data packet */
    constexpr std::uint32_t SPI_SR_RXP_B_0x1 = 1;

    /** @brief Tx-packet space available */
    using SPI_SR_TXP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: not enough free space at TxFIFO to host next data packet (value: 0)
     *          - B_0x1: enough free space at TxFIFO to host at least one data packet (value: 1)
     */
        /** @brief not enough free space at TxFIFO to host next data packet */
    constexpr std::uint32_t SPI_SR_TXP_B_0x0 = 0;
        /** @brief enough free space at TxFIFO to host at least one data packet */
    constexpr std::uint32_t SPI_SR_TXP_B_0x1 = 1;

    /** @brief duplex packet */
    using SPI_SR_DXP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: TxFIFO is Full and/or RxFIFO is Empty (value: 0)
     *          - B_0x1: both TxFIFO has space for write and RxFIFO contains for read a single packet at least (value: 1)
     */
        /** @brief TxFIFO is Full and/or RxFIFO is Empty */
    constexpr std::uint32_t SPI_SR_DXP_B_0x0 = 0;
        /** @brief both TxFIFO has space for write and RxFIFO contains for read a single packet at least */
    constexpr std::uint32_t SPI_SR_DXP_B_0x1 = 1;

    /** @brief end of transfer */
    using SPI_SR_EOT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: transfer is ongoing or not started (value: 0)
     *          - B_0x1: transfer complete (value: 1)
     */
        /** @brief transfer is ongoing or not started */
    constexpr std::uint32_t SPI_SR_EOT_B_0x0 = 0;
        /** @brief transfer complete */
    constexpr std::uint32_t SPI_SR_EOT_B_0x1 = 1;

    /** @brief transmission transfer filled */
    using SPI_SR_TXTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: upload of TxFIFO is ongoing or not started (value: 0)
     *          - B_0x1: TxFIFO upload is finished (value: 1)
     */
        /** @brief upload of TxFIFO is ongoing or not started */
    constexpr std::uint32_t SPI_SR_TXTF_B_0x0 = 0;
        /** @brief TxFIFO upload is finished */
    constexpr std::uint32_t SPI_SR_TXTF_B_0x1 = 1;

    /** @brief underrun */
    using SPI_SR_UDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no underrun (value: 0)
     *          - B_0x1: underrun detected (value: 1)
     */
        /** @brief no underrun */
    constexpr std::uint32_t SPI_SR_UDR_B_0x0 = 0;
        /** @brief underrun detected */
    constexpr std::uint32_t SPI_SR_UDR_B_0x1 = 1;

    /** @brief overrun */
    using SPI_SR_OVR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no overrun (value: 0)
     *          - B_0x1: overrun detected (value: 1)
     */
        /** @brief no overrun */
    constexpr std::uint32_t SPI_SR_OVR_B_0x0 = 0;
        /** @brief overrun detected */
    constexpr std::uint32_t SPI_SR_OVR_B_0x1 = 1;

    /** @brief CRC error */
    using SPI_SR_CRCE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no CRC error (value: 0)
     *          - B_0x1: CRC error detected (value: 1)
     */
        /** @brief no CRC error */
    constexpr std::uint32_t SPI_SR_CRCE_B_0x0 = 0;
        /** @brief CRC error detected */
    constexpr std::uint32_t SPI_SR_CRCE_B_0x1 = 1;

    /** @brief TI frame format error */
    using SPI_SR_TIFRE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no TI Frame Error (value: 0)
     *          - B_0x1: TI frame error detected (value: 1)
     */
        /** @brief no TI Frame Error */
    constexpr std::uint32_t SPI_SR_TIFRE_B_0x0 = 0;
        /** @brief TI frame error detected */
    constexpr std::uint32_t SPI_SR_TIFRE_B_0x1 = 1;

    /** @brief mode fault */
    using SPI_SR_MODF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no mode fault (value: 0)
     *          - B_0x1: mode fault detected. (value: 1)
     */
        /** @brief no mode fault */
    constexpr std::uint32_t SPI_SR_MODF_B_0x0 = 0;
        /** @brief mode fault detected. */
    constexpr std::uint32_t SPI_SR_MODF_B_0x1 = 1;

    /** @brief suspension status */
    using SPI_SR_SUSP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPI not suspended (Master mode active or other mode). (value: 0)
     *          - B_0x1: Master mode is suspended (current frame completed). (value: 1)
     */
        /** @brief SPI not suspended (Master mode active or other mode). */
    constexpr std::uint32_t SPI_SR_SUSP_B_0x0 = 0;
        /** @brief Master mode is suspended (current frame completed). */
    constexpr std::uint32_t SPI_SR_SUSP_B_0x1 = 1;

    /** @brief TxFIFO transmission complete */
    using SPI_SR_TXC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: current data transaction is still ongoing, data is available in TxFIFO or last frame transmission is on going. (value: 0)
     *          - B_0x1: last TxFIFO frame transmission complete (value: 1)
     */
        /** @brief current data transaction is still ongoing, data is available in TxFIFO or last frame transmission is on going. */
    constexpr std::uint32_t SPI_SR_TXC_B_0x0 = 0;
        /** @brief last TxFIFO frame transmission complete */
    constexpr std::uint32_t SPI_SR_TXC_B_0x1 = 1;

    /** @brief RxFIFO packing level */
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

    /** @brief RxFIFO word not empty */
    using SPI_SR_RXWNE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 15, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: less than four bytes of RxFIFO space is occupied by data (value: 0)
     *          - B_0x1: at least four bytes of RxFIFO space is occupied by data (value: 1)
     */
        /** @brief less than four bytes of RxFIFO space is occupied by data */
    constexpr std::uint32_t SPI_SR_RXWNE_B_0x0 = 0;
        /** @brief at least four bytes of RxFIFO space is occupied by data */
    constexpr std::uint32_t SPI_SR_RXWNE_B_0x1 = 1;

    /** @brief number of data frames remaining in current TSIZE session */
    using SPI_SR_CTSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI/I2S interrupt/status flags clear register */
    using SPI_IFCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief end of transfer flag clear */
    using SPI_IFCR_EOTC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transmission transfer filled flag clear */
    using SPI_IFCR_TXTFC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief underrun flag clear */
    using SPI_IFCR_UDRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief overrun flag clear */
    using SPI_IFCR_OVRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRC error flag clear */
    using SPI_IFCR_CRCEC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief TI frame format error flag clear */
    using SPI_IFCR_TIFREC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief mode fault flag clear */
    using SPI_IFCR_MODFC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Suspend flag clear */
    using SPI_IFCR_SUSPC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI/I2S transmit data register */
    using SPI_TXDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief transmit data register */
    using SPI_TXDR_TXDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI/I2S receive data register */
    using SPI_RXDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x30, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief receive data register */
    using SPI_RXDR_RXDR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI/I2S polynomial register */
    using SPI_CRCPOLY = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRC polynomial register */
    using SPI_CRCPOLY_CRCPOLY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI/I2S transmitter CRC register */
    using SPI_TXCRC = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x44, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRC register for transmitter */
    using SPI_TXCRC_TXCRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI/I2S receiver CRC register */
    using SPI_RXCRC = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief CRC register for receiver */
    using SPI_RXCRC_RXCRC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPI/I2S underrun data register */
    using SPI_UDRDR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4C, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief data at slave underrun condition */
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

    /** @brief I2S configuration mode */
    using SPI_I2SCFGR_I2SCFG = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: slave - transmit (value: 0)
     *          - B_0x1: slave - receive (value: 1)
     *          - B_0x2: master - transmit (value: 2)
     *          - B_0x3: master - receive (value: 3)
     *          - B_0x4: slave - Full Duplex (value: 4)
     *          - B_0x5: master - Full Duplex (value: 5)
     */
        /** @brief slave - transmit */
    constexpr std::uint32_t SPI_I2SCFGR_I2SCFG_B_0x0 = 0;
        /** @brief slave - receive */
    constexpr std::uint32_t SPI_I2SCFGR_I2SCFG_B_0x1 = 1;
        /** @brief master - transmit */
    constexpr std::uint32_t SPI_I2SCFGR_I2SCFG_B_0x2 = 2;
        /** @brief master - receive */
    constexpr std::uint32_t SPI_I2SCFGR_I2SCFG_B_0x3 = 3;
        /** @brief slave - Full Duplex */
    constexpr std::uint32_t SPI_I2SCFGR_I2SCFG_B_0x4 = 4;
        /** @brief master - Full Duplex */
    constexpr std::uint32_t SPI_I2SCFGR_I2SCFG_B_0x5 = 5;

    /** @brief I less than sup>2 less than /sup>S standard selection */
    using SPI_I2SCFGR_I2SSTD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: I less than sup>2 less than /sup>S Philips standard. (value: 0)
     *          - B_0x1: MSB justified standard (left justified) (value: 1)
     *          - B_0x2: LSB justified standard (right justified) (value: 2)
     *          - B_0x3: PCM standard (value: 3)
     */
        /** @brief I less than sup>2 less than /sup>S Philips standard. */
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

    /** @brief data length to be transferred. Data width of 24 and 32 bits are not always supported, (DATLEN = 01 or 10), refer to Section 58.3: SPI implementation to check the supported data size. */
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
     *          - B_0x0: the channel length in Slave mode is different from 16 or 32 bits (CHLEN must be set) (value: 0)
     *          - B_0x1: the channel length in Slave mode is supposed to be 16 or 32 bits (according to CHLEN) (value: 1)
     */
        /** @brief the channel length in Slave mode is different from 16 or 32 bits (CHLEN must be set) */
    constexpr std::uint32_t SPI_I2SCFGR_FIXCH_B_0x0 = 0;
        /** @brief the channel length in Slave mode is supposed to be 16 or 32 bits (according to CHLEN) */
    constexpr std::uint32_t SPI_I2SCFGR_FIXCH_B_0x1 = 1;

    /** @brief word select inversion */
    using SPI_I2SCFGR_WSINV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 13, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: In I2S Philips standard, the left channel transfer starts one CK cycle after the WS falling edge, and the right channel one CK cycle after the WS rising edge. (value: 0)
     *          - B_0x1: In I2S Philips standard, the left channel transfer starts one CK cycle after the WS rising edge, and the right channel one CK cycle after the WS falling edge. (value: 1)
     */
        /** @brief In I2S Philips standard, the left channel transfer starts one CK cycle after the WS falling edge, and the right channel one CK cycle after the WS rising edge. */
    constexpr std::uint32_t SPI_I2SCFGR_WSINV_B_0x0 = 0;
        /** @brief In I2S Philips standard, the left channel transfer starts one CK cycle after the WS rising edge, and the right channel one CK cycle after the WS falling edge. */
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

    /** @brief I less than sup>2 less than /sup>S linear prescaler */
    using SPI_I2SCFGR_I2SDIV = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief odd factor for the prescaler */
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
