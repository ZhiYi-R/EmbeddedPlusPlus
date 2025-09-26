/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32H7S_XSPI2_HPP
#define EMBEDDED_PP_STM32H7S_XSPI2_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief XSPI register block */
namespace STM32H7S::XSPI2 {

    /** @brief XSPI control register */
    using XSPI_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable This bit enables the XSPI. The DMA request can be aborted without having received the ACK in case this EN bit is cleared during the operation. Note: In case this bit is set to 0 during a DMA transfer, the REQ signal to DMA returns to inactive state without waiting for the ACK signal from DMA to be active. */
    using XSPI_CR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: XSPI disabled (value: 0)
     *          - B_0x1: XSPI enabled (value: 1)
     */
        /** @brief XSPI disabled */
    constexpr std::uint32_t XSPI_CR_EN_B_0x0 = 0;
        /** @brief XSPI enabled */
    constexpr std::uint32_t XSPI_CR_EN_B_0x1 = 1;

    /** @brief Abort request This bit aborts the on-going command sequence. It is automatically reset once the abort is completed. This bit stops the current transfer. Note: This bit is always read as 0. */
    using XSPI_CR_ABORT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no abort requested (value: 0)
     *          - B_0x1: abort requested (value: 1)
     */
        /** @brief no abort requested */
    constexpr std::uint32_t XSPI_CR_ABORT_B_0x0 = 0;
        /** @brief abort requested */
    constexpr std::uint32_t XSPI_CR_ABORT_B_0x1 = 1;

    /** @brief DMA enable In indirect mode, the DMA can be used to input or output data via XSPI_DR. DMA transfers are initiated when FTF is set. Note: Resetting the DMAEN bit while a DMA transfer is ongoing, breaks the handshake with the DMA. Do not write this bit during DMA operation. */
    using XSPI_CR_DMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DMA disabled for indirect mode (value: 0)
     *          - B_0x1: DMA enabled for indirect mode (value: 1)
     */
        /** @brief DMA disabled for indirect mode */
    constexpr std::uint32_t XSPI_CR_DMAEN_B_0x0 = 0;
        /** @brief DMA enabled for indirect mode */
    constexpr std::uint32_t XSPI_CR_DMAEN_B_0x1 = 1;

    /** @brief Timeout counter enable This bit is valid only when the memory-mapped mode (FMODE[1:0] = 11) is selected. This bit enables the timeout counter. Note: This bit can be modified only when BUSY = 0. */
    using XSPI_CR_TCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: timeout counter is disabled, and thus the chip-select (NCS) remains active indefinitely after an access in memory-mapped mode. (value: 0)
     *          - B_0x1: timeout counter is enabled, and thus the chip-select is released in the memory-mapped mode after TIMEOUT[15:0] cycles of external device inactivity. (value: 1)
     */
        /** @brief timeout counter is disabled, and thus the chip-select (NCS) remains active indefinitely after an access in memory-mapped mode. */
    constexpr std::uint32_t XSPI_CR_TCEN_B_0x0 = 0;
        /** @brief timeout counter is enabled, and thus the chip-select is released in the memory-mapped mode after TIMEOUT[15:0] cycles of external device inactivity. */
    constexpr std::uint32_t XSPI_CR_TCEN_B_0x1 = 1;

    /** @brief Dual-memory configuration This bit activates the dual-memory configuration, where two external devices are used simultaneously to double the throughput and the capacity Note: This bit can be modified only when BUSY = 0. */
    using XSPI_CR_DMM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: dual-memory configuration disabled (value: 0)
     *          - B_0x1: dual-memory configuration enabled (value: 1)
     */
        /** @brief dual-memory configuration disabled */
    constexpr std::uint32_t XSPI_CR_DMM_B_0x0 = 0;
        /** @brief dual-memory configuration enabled */
    constexpr std::uint32_t XSPI_CR_DMM_B_0x1 = 1;

    /** @brief FIFO threshold level This field defines, in indirect mode, the threshold number of bytes in the FIFO that causes the FIFO threshold flag FTF in XSPI_SR, to be set. ... Note: If DMAEN = 1, the DMA controller for the corresponding channel must be disabled before changing the FTHRES[5:0] value. */
    using XSPI_CR_FTHRES = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FTF is set if there are one or more free bytes available to be written to in the FIFO (value: 0)
     *          - B_0x1: FTF is set if there are two or more free bytes available to be written to in the FIFO (value: 1)
     *          - B_0x3F: FTF is set if there are 64 free bytes available to be written to in the FIFO (value: 63)
     */
        /** @brief FTF is set if there are one or more free bytes available to be written to in the FIFO */
    constexpr std::uint32_t XSPI_CR_FTHRES_B_0x0 = 0;
        /** @brief FTF is set if there are two or more free bytes available to be written to in the FIFO */
    constexpr std::uint32_t XSPI_CR_FTHRES_B_0x1 = 1;
        /** @brief FTF is set if there are 64 free bytes available to be written to in the FIFO */
    constexpr std::uint32_t XSPI_CR_FTHRES_B_0x3F = 63;

    /** @brief Transfer error interrupt enable This bit enables the transfer error interrupt. */
    using XSPI_CR_TEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t XSPI_CR_TEIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t XSPI_CR_TEIE_B_0x1 = 1;

    /** @brief Transfer complete interrupt enable This bit enables the transfer complete interrupt. */
    using XSPI_CR_TCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t XSPI_CR_TCIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t XSPI_CR_TCIE_B_0x1 = 1;

    /** @brief FIFO threshold interrupt enable This bit enables the FIFO threshold interrupt. */
    using XSPI_CR_FTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t XSPI_CR_FTIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t XSPI_CR_FTIE_B_0x1 = 1;

    /** @brief Status match interrupt enable This bit enables the status match interrupt. */
    using XSPI_CR_SMIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t XSPI_CR_SMIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t XSPI_CR_SMIE_B_0x1 = 1;

    /** @brief Timeout interrupt enable This bit enables the timeout interrupt. */
    using XSPI_CR_TOIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: interrupt disabled (value: 0)
     *          - B_0x1: interrupt enabled (value: 1)
     */
        /** @brief interrupt disabled */
    constexpr std::uint32_t XSPI_CR_TOIE_B_0x0 = 0;
        /** @brief interrupt enabled */
    constexpr std::uint32_t XSPI_CR_TOIE_B_0x1 = 1;

    /** @brief Automatic status-polling mode stop This bit determines if the automatic status-polling is stopped after a match. Note: This bit can be modified only when BUSY = 0. */
    using XSPI_CR_APMS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Automatic status-polling mode is stopped only by abort or by disabling the XSPI. (value: 0)
     *          - B_0x1: Automatic status-polling mode stops as soon as there is a match. (value: 1)
     */
        /** @brief Automatic status-polling mode is stopped only by abort or by disabling the XSPI. */
    constexpr std::uint32_t XSPI_CR_APMS_B_0x0 = 0;
        /** @brief Automatic status-polling mode stops as soon as there is a match. */
    constexpr std::uint32_t XSPI_CR_APMS_B_0x1 = 1;

    /** @brief Polling match mode This bit indicates which method must be used to determine a match during the automatic status-polling mode. Note: This bit can be modified only when BUSY = 0. */
    using XSPI_CR_PMM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AND-match mode, SMF is set if all the unmasked bits received from the device match the corresponding bits in the match register. (value: 0)
     *          - B_0x1: OR-match mode, SMF is set if any of the unmasked bits received from the device matches its corresponding bit in the match register. (value: 1)
     */
        /** @brief AND-match mode, SMF is set if all the unmasked bits received from the device match the corresponding bits in the match register. */
    constexpr std::uint32_t XSPI_CR_PMM_B_0x0 = 0;
        /** @brief OR-match mode, SMF is set if any of the unmasked bits received from the device matches its corresponding bit in the match register. */
    constexpr std::uint32_t XSPI_CR_PMM_B_0x1 = 1;

    /** @brief chip select selection This bit indicates if the XSPI must activate NCS1 or NCS2. Note: This bit can be modified only when BUSY = 0. */
    using XSPI_CR_CSSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: NCS1 active (value: 0)
     *          - B_0x1: NCS2 active (value: 1)
     */
        /** @brief NCS1 active */
    constexpr std::uint32_t XSPI_CR_CSSEL_B_0x0 = 0;
        /** @brief NCS2 active */
    constexpr std::uint32_t XSPI_CR_CSSEL_B_0x1 = 1;

    /** @brief Functional mode This field defines the XSPI functional mode of operation. If DMAEN = 1 already, then the DMA controller for the corresponding channel must be disabled before changing the FMODE[1:0] value. If FMODE[1:0] and FTHRES[4:0] are wrongly updated while DMAEN = 1, the DMA request signal automatically goes to inactive state. Note: This bitfield can be modified only when BUSY = 0. */
    using XSPI_CR_FMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: indirect-write mode (value: 0)
     *          - B_0x1: indirect-read mode (value: 1)
     *          - B_0x2: automatic status-polling mode (value: 2)
     *          - B_0x3: memory-mapped mode (value: 3)
     */
        /** @brief indirect-write mode */
    constexpr std::uint32_t XSPI_CR_FMODE_B_0x0 = 0;
        /** @brief indirect-read mode */
    constexpr std::uint32_t XSPI_CR_FMODE_B_0x1 = 1;
        /** @brief automatic status-polling mode */
    constexpr std::uint32_t XSPI_CR_FMODE_B_0x2 = 2;
        /** @brief memory-mapped mode */
    constexpr std::uint32_t XSPI_CR_FMODE_B_0x3 = 3;

    /** @brief Flash select */
    using XSPI_CR_MSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: data exchanged over IO[3:0] (value: 0)
     *          - B_0x1: data exchanged over IO[7:4] (value: 1)
     *          - B_0x2: data exchanged over IO[11:8] (value: 2)
     *          - B_0x3: data exchanged over IO[15:12] (value: 3)
     */
        /** @brief data exchanged over IO[3:0] */
    constexpr std::uint32_t XSPI_CR_MSEL_B_0x0 = 0;
        /** @brief data exchanged over IO[7:4] */
    constexpr std::uint32_t XSPI_CR_MSEL_B_0x1 = 1;
        /** @brief data exchanged over IO[11:8] */
    constexpr std::uint32_t XSPI_CR_MSEL_B_0x2 = 2;
        /** @brief data exchanged over IO[15:12] */
    constexpr std::uint32_t XSPI_CR_MSEL_B_0x3 = 3;

    /** @brief XSPI device configuration register 1 */
    using XSPI_DCR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief clock mode 0/mode 3 This bit indicates the level taken by the CLK between commands (when NCS = 1). */
    using XSPI_DCR1_CKMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CLK must stay low while NCS is high (chip-select released), referred to as clock mode 0. (value: 0)
     *          - B_0x1: CLK must stay high while NCS is high (chip-select released), referred to as clock mode 3. (value: 1)
     */
        /** @brief CLK must stay low while NCS is high (chip-select released), referred to as clock mode 0. */
    constexpr std::uint32_t XSPI_DCR1_CKMODE_B_0x0 = 0;
        /** @brief CLK must stay high while NCS is high (chip-select released), referred to as clock mode 3. */
    constexpr std::uint32_t XSPI_DCR1_CKMODE_B_0x1 = 1;

    /** @brief Free running clock This bit configures the free running clock. */
    using XSPI_DCR1_FRCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CLK is not free running. (value: 0)
     *          - B_0x1: CLK is free running (always provided). (value: 1)
     */
        /** @brief CLK is not free running. */
    constexpr std::uint32_t XSPI_DCR1_FRCK_B_0x0 = 0;
        /** @brief CLK is free running (always provided). */
    constexpr std::uint32_t XSPI_DCR1_FRCK_B_0x1 = 1;

    /** @brief Chip-select high time CSHT + 1 defines the minimum number of CLK cycles where the chip-select (NCS) must remain high between commands issued to the external device. ... */
    using XSPI_DCR1_CSHT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: NCS stays high for at least 1 cycle between external device commands. (value: 0)
     *          - B_0x1: NCS stays high for at least 2 cycles between external device commands. (value: 1)
     *          - B_0x3F: NCS stays high for at least 64 cycles between external device commands. (value: 63)
     */
        /** @brief NCS stays high for at least 1 cycle between external device commands. */
    constexpr std::uint32_t XSPI_DCR1_CSHT_B_0x0 = 0;
        /** @brief NCS stays high for at least 2 cycles between external device commands. */
    constexpr std::uint32_t XSPI_DCR1_CSHT_B_0x1 = 1;
        /** @brief NCS stays high for at least 64 cycles between external device commands. */
    constexpr std::uint32_t XSPI_DCR1_CSHT_B_0x3F = 63;

    /** @brief Device size This field defines the size of the external device using the following formula: Number of bytes in device = 2<sup>[DEVSIZE+1]</sup>. DEVSIZE+1 is effectively the number of address bits required to address the external device. The device capacity can be up to 4 Gbytes (addressed using 32-bits) in indirect mode, but the addressable space in memory-mapped mode is limited to 256 Mbytes. In regular-command protocol, if DMM = 1, DEVSIZE[4:0] indicates the total capacity of the two devices together. */
    using XSPI_DCR1_DEVSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Memory type This bit indicates the type of memory to be supported. Note: In this mode, DQS signal polarity is inverted with respect to the memory clock signal. This is the default value and care must be taken to change MTYP[2:0] for memories different from Micron. Others: Reserved */
    using XSPI_DCR1_MTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Micron mode, D0/D1 ordering in DTR 8-data-bit mode. Regular-command protocol in single-, dual-, quad-, and octal-SPI modes. (value: 0)
     *          - B_0x1: Macronix mode, D1/D0 ordering in DTR 8-data-bit mode. Regular-command protocol in single-, dual-, quad-, and octal-SPI modes. (value: 1)
     *          - B_0x2: Standard mode (value: 2)
     *          - B_0x3: Macronix RAM mode, D1/D0 ordering in DTR 8-data-bit mode. Regular-command protocol in single-, dual-, quad-, and octal-SPI modes with dedicated address mapping. (value: 3)
     *          - B_0x4: HyperBus memory mode, the protocol follows the HyperBus<sup> </sup>specification. 8-data-bit DTR mode must be selected. (value: 4)
     *          - B_0x5: HyperBus register mode, addressing register space. The memory-mapped accesses in this mode must be non-cacheable, or indirect read/write modes must be used. (value: 5)
     */
        /** @brief Micron mode, D0/D1 ordering in DTR 8-data-bit mode. Regular-command protocol in single-, dual-, quad-, and octal-SPI modes. */
    constexpr std::uint32_t XSPI_DCR1_MTYP_B_0x0 = 0;
        /** @brief Macronix mode, D1/D0 ordering in DTR 8-data-bit mode. Regular-command protocol in single-, dual-, quad-, and octal-SPI modes. */
    constexpr std::uint32_t XSPI_DCR1_MTYP_B_0x1 = 1;
        /** @brief Standard mode */
    constexpr std::uint32_t XSPI_DCR1_MTYP_B_0x2 = 2;
        /** @brief Macronix RAM mode, D1/D0 ordering in DTR 8-data-bit mode. Regular-command protocol in single-, dual-, quad-, and octal-SPI modes with dedicated address mapping. */
    constexpr std::uint32_t XSPI_DCR1_MTYP_B_0x3 = 3;
        /** @brief HyperBus memory mode, the protocol follows the HyperBus<sup> </sup>specification. 8-data-bit DTR mode must be selected. */
    constexpr std::uint32_t XSPI_DCR1_MTYP_B_0x4 = 4;
        /** @brief HyperBus register mode, addressing register space. The memory-mapped accesses in this mode must be non-cacheable, or indirect read/write modes must be used. */
    constexpr std::uint32_t XSPI_DCR1_MTYP_B_0x5 = 5;

    /** @brief XSPI device configuration register 2 */
    using XSPI_DCR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clock prescaler This field defines the scaler factor for generating the CLK based on the kernel clock (value + 1). ... For odd clock division factors, the CLK duty cycle is not 50 %. The clock signal remains low one cycle longer than it stays high. Writing this field automatically starts a new calibration of high-speed interface DLL at the start of next transfer, except in case XSPI_CALOSR or XSPI_CALISR have been written in the meantime. BUSY stays high during the whole calibration execution. */
    using XSPI_DCR2_PRESCALER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: F<sub>CLK</sub> = F<sub>KERNEL</sub>, kernel clock used directly as XSPI CLK (prescaler bypassed). In this case, if the DTR mode is used, it is mandatory to provide to the XSPI a kernel clock that has 50% duty-cycle. (value: 0)
     *          - B_0x1: F<sub>CLK</sub> = F<sub>KERNEL</sub>/2 (value: 1)
     */
        /** @brief F<sub>CLK</sub> = F<sub>KERNEL</sub>, kernel clock used directly as XSPI CLK (prescaler bypassed). In this case, if the DTR mode is used, it is mandatory to provide to the XSPI a kernel clock that has 50% duty-cycle. */
    constexpr std::uint32_t XSPI_DCR2_PRESCALER_B_0x0 = 0;
        /** @brief F<sub>CLK</sub> = F<sub>KERNEL</sub>/2 */
    constexpr std::uint32_t XSPI_DCR2_PRESCALER_B_0x1 = 1;

    /** @brief Wrap size This field indicates the wrap size to which the memory is configured. For memories which have a separate command for wrapped instructions, this field indicates the wrap-size associated with the command held in XSPI_WPIR. Others: reserved */
    using XSPI_DCR2_WRAPSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: wrapped reads are not supported by the memory. (value: 0)
     *          - B_0x2: external memory supports wrap size of 16 bytes. (value: 2)
     *          - B_0x3: external memory supports wrap size of 32 bytes. (value: 3)
     *          - B_0x4: external memory supports wrap size of 64 bytes. (value: 4)
     *          - B_0x5: external memory supports wrap size of 128 bytes. (value: 5)
     */
        /** @brief wrapped reads are not supported by the memory. */
    constexpr std::uint32_t XSPI_DCR2_WRAPSIZE_B_0x0 = 0;
        /** @brief external memory supports wrap size of 16 bytes. */
    constexpr std::uint32_t XSPI_DCR2_WRAPSIZE_B_0x2 = 2;
        /** @brief external memory supports wrap size of 32 bytes. */
    constexpr std::uint32_t XSPI_DCR2_WRAPSIZE_B_0x3 = 3;
        /** @brief external memory supports wrap size of 64 bytes. */
    constexpr std::uint32_t XSPI_DCR2_WRAPSIZE_B_0x4 = 4;
        /** @brief external memory supports wrap size of 128 bytes. */
    constexpr std::uint32_t XSPI_DCR2_WRAPSIZE_B_0x5 = 5;

    /** @brief XSPI device configuration register 3 */
    using XSPI_DCR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Maximum transfer This field enables the communication regulation feature. The NCS is released every MAXTRAN+1 clock cycles when the other XSPI request the access to the bus. Others: maximum communication is set to MAXTRAN + 1 bytes. */
    using XSPI_DCR3_MAXTRAN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: maximum communication disabled (value: 0)
     */
        /** @brief maximum communication disabled */
    constexpr std::uint32_t XSPI_DCR3_MAXTRAN_B_0x0 = 0;

    /** @brief NCS boundary This field enables the transaction boundary feature. When active, a minimum value of 3 is recommended. The NCS is released on each boundary of 2<sup>CSBOUND</sup> bytes. Others: NCS boundary set to 2<sup>CSBOUND</sup> bytes */
    using XSPI_DCR3_CSBOUND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: NCS boundary disabled (value: 0)
     */
        /** @brief NCS boundary disabled */
    constexpr std::uint32_t XSPI_DCR3_CSBOUND_B_0x0 = 0;

    /** @brief XSPI device configuration register 4 */
    using XSPI_DCR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Refresh rate This field enables the refresh rate feature. The NCS is released every REFRESH + 1 clock cycles for writes, and REFRESH + 4 clock cycles for reads. Note: These two values can be extended with few clock cycles when refresh occurs during a byte transmission in single-, dual- or quad-SPI mode, because the byte transmission must be completed. Others: maximum communication length is set to REFRESH + 1 clock cycles. */
    using XSPI_DCR4_REFRESH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: refresh disabled (value: 0)
     */
        /** @brief refresh disabled */
    constexpr std::uint32_t XSPI_DCR4_REFRESH_B_0x0 = 0;

    /** @brief XSPI status register */
    using XSPI_SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer error flag This bit is set in indirect mode when an invalid address is being accessed in indirect mode. It is cleared by writing 1 to CTEF. */
    using XSPI_SR_TEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer complete flag This bit is set in indirect mode when the programmed number of data has been transferred or in any mode when the transfer has been aborted.It is cleared by writing 1 to CTCF. */
    using XSPI_SR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FIFO threshold flag In indirect mode, this bit is set when the FIFO threshold has been reached, or if there is any data left in the FIFO after the reads from the external device are complete. It is cleared automatically as soon as the threshold condition is no longer true. In automatic status-polling mode this bit is set every time the status register is read, and the bit is cleared when the data register is read. */
    using XSPI_SR_FTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Status match flag This bit is set in automatic status-polling mode when the unmasked received data matches the corresponding bits in the match register (XSPI_PSMAR). It is cleared by writing 1 to CSMF. */
    using XSPI_SR_SMF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timeout flag This bit is set when timeout occurs. It is cleared by writing 1 to CTOF. */
    using XSPI_SR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Busy This bit is set when an operation is ongoing. It is cleared automatically when the operation with the external device is finished and the FIFO is empty. */
    using XSPI_SR_BUSY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FIFO level This field gives the number of valid bytes that are being held in the FIFO. FLEVEL = 0 when the FIFO is empty, and 64 when it is full. In automatic-status polling mode, FLEVEL is zero. */
    using XSPI_SR_FLEVEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XSPI flag clear register */
    using XSPI_FCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear transfer error flag Writing 1 clears the TEF flag in the XSPI_SR register. */
    using XSPI_FCR_CTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear transfer complete flag Writing 1 clears the TCF flag in the XSPI_SR register. */
    using XSPI_FCR_CTCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear status match flag Writing 1 clears the SMF flag in the XSPI_SR register. */
    using XSPI_FCR_CSMF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear timeout flag Writing 1 clears the TOF flag in the XSPI_SR register. */
    using XSPI_FCR_CTOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XSPI data length register */
    using XSPI_DLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data length */
    using XSPI_DLR_DL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XSPIaddress register */
    using XSPI_AR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Address Address to be sent to the external device. In HyperBus protocol, this field must be even as this protocol is 16-bit word oriented. In dual-memory configuration, AR[0] is forced to 0. Writes to this field are ignored when BUSY = 1 or when FMODE = 11 (memory-mapped mode). Some memory specifications consider that each address corresponds to a 16-bit value. XSPI considers that each address corresponds to an 8-bit value. So the software needs to multiple the address by two when accessing the memory registers. */
    using XSPI_AR_ADDRESS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XSPI data register */
    using XSPI_DR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data Data to be sent/received to/from the external SPI device In indirect-write mode, data written to this register is stored on the FIFO before it is sent to the external device during the data phase. If the FIFO is too full, a write operation is stalled until the FIFO has enough space to accept the amount of data being written. In indirect-read mode, reading this register gives (via the FIFO) the data that was received from the external device. If the FIFO does not have as many bytes as requested by the read operation and if BUSY = 1, the read operation is stalled until enough data is present or until the transfer is complete, whichever happens first. In automatic status-polling mode, this register contains the last data read from the external device (without masking). Word, half-word, and byte accesses to this register are supported. In indirect-write mode, a byte write adds 1 byte to the FIFO, a half-word write 2 bytes, and a word write 4 bytes. Similarly, in indirect-read mode, a byte read removes 1 byte from the FIFO, a halfword read 2 bytes, and a word read 4 bytes. Accesses in indirect mode must be aligned to the bottom of this register: A byte read must read DATA[7:0] and a half-word read must read DATA[15:0]. */
    using XSPI_DR_DATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XSPI polling status mask register */
    using XSPI_PSMKR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x80, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Status mask Mask to be applied to the status bytes received in automatic status-polling mode For bit n: */
    using XSPI_PSMKR_MASK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: bit n of the data received in automatic status-polling mode is masked and its value is not considered in the matching logic. (value: 0)
     *          - B_0x1: bit n of the data received in automatic status-polling mode is unmasked and its value is considered in the matching logic. (value: 1)
     */
        /** @brief bit n of the data received in automatic status-polling mode is masked and its value is not considered in the matching logic. */
    constexpr std::uint32_t XSPI_PSMKR_MASK_B_0x0 = 0;
        /** @brief bit n of the data received in automatic status-polling mode is unmasked and its value is considered in the matching logic. */
    constexpr std::uint32_t XSPI_PSMKR_MASK_B_0x1 = 1;

    /** @brief XSPI polling status match register */
    using XSPI_PSMAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x88, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Status match Value to be compared with the masked status register to get a match */
    using XSPI_PSMAR_MATCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XSPI polling interval register */
    using XSPI_PIR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x90, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Polling interval Number of CLK cycle between a read during the automatic status-polling phases */
    using XSPI_PIR_INTERVAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XSPI communication configuration register */
    using XSPI_CCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x100, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Instruction mode This field defines the instruction phase mode of operation. Others: reserved */
    using XSPI_CCR_IMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no instruction (value: 0)
     *          - B_0x1: instruction on a single line (value: 1)
     *          - B_0x2: instruction on two lines (value: 2)
     *          - B_0x3: instruction on four lines (value: 3)
     *          - B_0x4: instruction on eight lines (value: 4)
     */
        /** @brief no instruction */
    constexpr std::uint32_t XSPI_CCR_IMODE_B_0x0 = 0;
        /** @brief instruction on a single line */
    constexpr std::uint32_t XSPI_CCR_IMODE_B_0x1 = 1;
        /** @brief instruction on two lines */
    constexpr std::uint32_t XSPI_CCR_IMODE_B_0x2 = 2;
        /** @brief instruction on four lines */
    constexpr std::uint32_t XSPI_CCR_IMODE_B_0x3 = 3;
        /** @brief instruction on eight lines */
    constexpr std::uint32_t XSPI_CCR_IMODE_B_0x4 = 4;

    /** @brief Instruction double transfer rate This bit sets the DTR mode for the instruction phase. */
    using XSPI_CCR_IDTR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DTR mode disabled for instruction phase (value: 0)
     *          - B_0x1: DTR mode enabled for instruction phase (value: 1)
     */
        /** @brief DTR mode disabled for instruction phase */
    constexpr std::uint32_t XSPI_CCR_IDTR_B_0x0 = 0;
        /** @brief DTR mode enabled for instruction phase */
    constexpr std::uint32_t XSPI_CCR_IDTR_B_0x1 = 1;

    /** @brief Instruction size This bit defines instruction size. */
    using XSPI_CCR_ISIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 8-bit instruction (value: 0)
     *          - B_0x1: 16-bit instruction (value: 1)
     *          - B_0x2: 24-bit instruction (value: 2)
     *          - B_0x3: 32-bit instruction (value: 3)
     */
        /** @brief 8-bit instruction */
    constexpr std::uint32_t XSPI_CCR_ISIZE_B_0x0 = 0;
        /** @brief 16-bit instruction */
    constexpr std::uint32_t XSPI_CCR_ISIZE_B_0x1 = 1;
        /** @brief 24-bit instruction */
    constexpr std::uint32_t XSPI_CCR_ISIZE_B_0x2 = 2;
        /** @brief 32-bit instruction */
    constexpr std::uint32_t XSPI_CCR_ISIZE_B_0x3 = 3;

    /** @brief Address mode This field defines the address phase mode of operation. Others: reserved */
    using XSPI_CCR_ADMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no address (value: 0)
     *          - B_0x1: address on a single line (value: 1)
     *          - B_0x2: address on two lines (value: 2)
     *          - B_0x3: address on four lines (value: 3)
     *          - B_0x4: address on eight lines (value: 4)
     */
        /** @brief no address */
    constexpr std::uint32_t XSPI_CCR_ADMODE_B_0x0 = 0;
        /** @brief address on a single line */
    constexpr std::uint32_t XSPI_CCR_ADMODE_B_0x1 = 1;
        /** @brief address on two lines */
    constexpr std::uint32_t XSPI_CCR_ADMODE_B_0x2 = 2;
        /** @brief address on four lines */
    constexpr std::uint32_t XSPI_CCR_ADMODE_B_0x3 = 3;
        /** @brief address on eight lines */
    constexpr std::uint32_t XSPI_CCR_ADMODE_B_0x4 = 4;

    /** @brief Address double transfer rate This bit sets the DTR mode for the address phase. */
    using XSPI_CCR_ADDTR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DTR mode disabled for address phase (value: 0)
     *          - B_0x1: DTR mode enabled for address phase (value: 1)
     */
        /** @brief DTR mode disabled for address phase */
    constexpr std::uint32_t XSPI_CCR_ADDTR_B_0x0 = 0;
        /** @brief DTR mode enabled for address phase */
    constexpr std::uint32_t XSPI_CCR_ADDTR_B_0x1 = 1;

    /** @brief Address size This field defines address size. */
    using XSPI_CCR_ADSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 8-bit address (value: 0)
     *          - B_0x1: 16-bit address (value: 1)
     *          - B_0x2: 24-bit address (value: 2)
     *          - B_0x3: 32-bit address (value: 3)
     */
        /** @brief 8-bit address */
    constexpr std::uint32_t XSPI_CCR_ADSIZE_B_0x0 = 0;
        /** @brief 16-bit address */
    constexpr std::uint32_t XSPI_CCR_ADSIZE_B_0x1 = 1;
        /** @brief 24-bit address */
    constexpr std::uint32_t XSPI_CCR_ADSIZE_B_0x2 = 2;
        /** @brief 32-bit address */
    constexpr std::uint32_t XSPI_CCR_ADSIZE_B_0x3 = 3;

    /** @brief Alternate-byte mode This field defines the alternate byte phase mode of operation. Others: reserved */
    using XSPI_CCR_ABMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no alternate bytes (value: 0)
     *          - B_0x1: alternate bytes on a single line (value: 1)
     *          - B_0x2: alternate bytes on two lines (value: 2)
     *          - B_0x3: alternate bytes on four lines (value: 3)
     */
        /** @brief no alternate bytes */
    constexpr std::uint32_t XSPI_CCR_ABMODE_B_0x0 = 0;
        /** @brief alternate bytes on a single line */
    constexpr std::uint32_t XSPI_CCR_ABMODE_B_0x1 = 1;
        /** @brief alternate bytes on two lines */
    constexpr std::uint32_t XSPI_CCR_ABMODE_B_0x2 = 2;
        /** @brief alternate bytes on four lines */
    constexpr std::uint32_t XSPI_CCR_ABMODE_B_0x3 = 3;

    /** @brief Alternate bytes double transfer rate This bit sets the DTR mode for the alternate bytes phase. Note: This field can be written only when BUSY = 0. */
    using XSPI_CCR_ABDTR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DTR mode disabled for alternate bytes phase (value: 0)
     *          - B_0x1: DTR mode enabled for alternate bytes phase (value: 1)
     */
        /** @brief DTR mode disabled for alternate bytes phase */
    constexpr std::uint32_t XSPI_CCR_ABDTR_B_0x0 = 0;
        /** @brief DTR mode enabled for alternate bytes phase */
    constexpr std::uint32_t XSPI_CCR_ABDTR_B_0x1 = 1;

    /** @brief Alternate bytes size This bit defines alternate bytes size. */
    using XSPI_CCR_ABSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 8-bit alternate bytes (value: 0)
     *          - B_0x1: 16-bit alternate bytes (value: 1)
     *          - B_0x2: 24-bit alternate bytes (value: 2)
     *          - B_0x3: 32-bit alternate bytes (value: 3)
     */
        /** @brief 8-bit alternate bytes */
    constexpr std::uint32_t XSPI_CCR_ABSIZE_B_0x0 = 0;
        /** @brief 16-bit alternate bytes */
    constexpr std::uint32_t XSPI_CCR_ABSIZE_B_0x1 = 1;
        /** @brief 24-bit alternate bytes */
    constexpr std::uint32_t XSPI_CCR_ABSIZE_B_0x2 = 2;
        /** @brief 32-bit alternate bytes */
    constexpr std::uint32_t XSPI_CCR_ABSIZE_B_0x3 = 3;

    /** @brief Data mode This field defines the data phase mode of operation. Others: reserved */
    using XSPI_CCR_DMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no data (value: 0)
     *          - B_0x1: data on a single line (value: 1)
     *          - B_0x2: data on two lines (value: 2)
     *          - B_0x3: data on four lines (value: 3)
     *          - B_0x4: data on eight lines (value: 4)
     *          - B_0x5: data on 16 lines (value: 5)
     */
        /** @brief no data */
    constexpr std::uint32_t XSPI_CCR_DMODE_B_0x0 = 0;
        /** @brief data on a single line */
    constexpr std::uint32_t XSPI_CCR_DMODE_B_0x1 = 1;
        /** @brief data on two lines */
    constexpr std::uint32_t XSPI_CCR_DMODE_B_0x2 = 2;
        /** @brief data on four lines */
    constexpr std::uint32_t XSPI_CCR_DMODE_B_0x3 = 3;
        /** @brief data on eight lines */
    constexpr std::uint32_t XSPI_CCR_DMODE_B_0x4 = 4;
        /** @brief data on 16 lines */
    constexpr std::uint32_t XSPI_CCR_DMODE_B_0x5 = 5;

    /** @brief Data double transfer rate This bit sets the DTR mode for the data phase. */
    using XSPI_CCR_DDTR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DTR mode disabled for data phase (value: 0)
     *          - B_0x1: DTR mode enabled for data phase (value: 1)
     */
        /** @brief DTR mode disabled for data phase */
    constexpr std::uint32_t XSPI_CCR_DDTR_B_0x0 = 0;
        /** @brief DTR mode enabled for data phase */
    constexpr std::uint32_t XSPI_CCR_DDTR_B_0x1 = 1;

    /** @brief DQS enable This bit enables the data strobe management. */
    using XSPI_CCR_DQSE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DQS disabled (value: 0)
     *          - B_0x1: DQS enabled (value: 1)
     */
        /** @brief DQS disabled */
    constexpr std::uint32_t XSPI_CCR_DQSE_B_0x0 = 0;
        /** @brief DQS enabled */
    constexpr std::uint32_t XSPI_CCR_DQSE_B_0x1 = 1;

    /** @brief XSPI timing configuration register */
    using XSPI_TCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x108, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of dummy cycles This field defines the duration of the dummy phase. In both SDR and DTR modes, it specifies a number of CLK cycles (0-31). */
    using XSPI_TCR_DCYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Delay hold quarter cycle */
    using XSPI_TCR_DHQC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no delay hold (value: 0)
     *          - B_0x1: 1/4 cycle hold (value: 1)
     */
        /** @brief no delay hold */
    constexpr std::uint32_t XSPI_TCR_DHQC_B_0x0 = 0;
        /** @brief 1/4 cycle hold */
    constexpr std::uint32_t XSPI_TCR_DHQC_B_0x1 = 1;

    /** @brief Sample shift By default, the XSPI samples data 1/2 of a CLK cycle after the data is driven by the external device. This bit allows the data to be sampled later in order to consider the external signal delays. The software must ensure that SSHIFT = 0 when the data phase is configured in DTR mode (when DDTR = 1.) */
    using XSPI_TCR_SSHIFT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no shift (value: 0)
     *          - B_0x1: 1/2 cycle shift (value: 1)
     */
        /** @brief no shift */
    constexpr std::uint32_t XSPI_TCR_SSHIFT_B_0x0 = 0;
        /** @brief 1/2 cycle shift */
    constexpr std::uint32_t XSPI_TCR_SSHIFT_B_0x1 = 1;

    /** @brief XSPI instruction register */
    using XSPI_IR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x110, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Instruction Instruction to be sent to the external SPI device */
    using XSPI_IR_INSTRUCTION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XSPI alternate bytes register */
    using XSPI_ABR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x120, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alternate bytes Optional data to be sent to the external SPI device right after the address. */
    using XSPI_ABR_ALTERNATE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XSPI low-power timeout register */
    using XSPI_LPTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x130, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timeout period After each access in memory-mapped mode, the XSPI prefetches the subsequent bytes and hold them in the FIFO. This field indicates how many CLK cycles the XSPI waits after the clock becomes inactive and until it raises the NCS, putting the external device in a lower-consumption state. */
    using XSPI_LPTR_TIMEOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XSPI wrap communication configuration register */
    using XSPI_WPCCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x140, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Instruction mode This field defines the instruction phase mode of operation. Others: reserved */
    using XSPI_WPCCR_IMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no instruction (value: 0)
     *          - B_0x1: instruction on a single line (value: 1)
     *          - B_0x2: instruction on two lines (value: 2)
     *          - B_0x3: instruction on four lines (value: 3)
     *          - B_0x4: instruction on eight lines (value: 4)
     */
        /** @brief no instruction */
    constexpr std::uint32_t XSPI_WPCCR_IMODE_B_0x0 = 0;
        /** @brief instruction on a single line */
    constexpr std::uint32_t XSPI_WPCCR_IMODE_B_0x1 = 1;
        /** @brief instruction on two lines */
    constexpr std::uint32_t XSPI_WPCCR_IMODE_B_0x2 = 2;
        /** @brief instruction on four lines */
    constexpr std::uint32_t XSPI_WPCCR_IMODE_B_0x3 = 3;
        /** @brief instruction on eight lines */
    constexpr std::uint32_t XSPI_WPCCR_IMODE_B_0x4 = 4;

    /** @brief Instruction double transfer rate This bit sets the DTR mode for the instruction phase. */
    using XSPI_WPCCR_IDTR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DTR mode disabled for instruction phase (value: 0)
     *          - B_0x1: DTR mode enabled for instruction phase (value: 1)
     */
        /** @brief DTR mode disabled for instruction phase */
    constexpr std::uint32_t XSPI_WPCCR_IDTR_B_0x0 = 0;
        /** @brief DTR mode enabled for instruction phase */
    constexpr std::uint32_t XSPI_WPCCR_IDTR_B_0x1 = 1;

    /** @brief Instruction size This field defines instruction size. */
    using XSPI_WPCCR_ISIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 8-bit instruction (value: 0)
     *          - B_0x1: 16-bit instruction (value: 1)
     *          - B_0x2: 24-bit instruction (value: 2)
     *          - B_0x3: 32-bit instruction (value: 3)
     */
        /** @brief 8-bit instruction */
    constexpr std::uint32_t XSPI_WPCCR_ISIZE_B_0x0 = 0;
        /** @brief 16-bit instruction */
    constexpr std::uint32_t XSPI_WPCCR_ISIZE_B_0x1 = 1;
        /** @brief 24-bit instruction */
    constexpr std::uint32_t XSPI_WPCCR_ISIZE_B_0x2 = 2;
        /** @brief 32-bit instruction */
    constexpr std::uint32_t XSPI_WPCCR_ISIZE_B_0x3 = 3;

    /** @brief Address mode This field defines the address phase mode of operation. Others: reserved */
    using XSPI_WPCCR_ADMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no address (value: 0)
     *          - B_0x1: address on a single line (value: 1)
     *          - B_0x2: address on two lines (value: 2)
     *          - B_0x3: address on four lines (value: 3)
     *          - B_0x4: address on eight lines (value: 4)
     */
        /** @brief no address */
    constexpr std::uint32_t XSPI_WPCCR_ADMODE_B_0x0 = 0;
        /** @brief address on a single line */
    constexpr std::uint32_t XSPI_WPCCR_ADMODE_B_0x1 = 1;
        /** @brief address on two lines */
    constexpr std::uint32_t XSPI_WPCCR_ADMODE_B_0x2 = 2;
        /** @brief address on four lines */
    constexpr std::uint32_t XSPI_WPCCR_ADMODE_B_0x3 = 3;
        /** @brief address on eight lines */
    constexpr std::uint32_t XSPI_WPCCR_ADMODE_B_0x4 = 4;

    /** @brief Address double transfer rate This bit sets the DTR mode for the address phase. */
    using XSPI_WPCCR_ADDTR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DTR mode disabled for address phase (value: 0)
     *          - B_0x1: DTR mode enabled for address phase (value: 1)
     */
        /** @brief DTR mode disabled for address phase */
    constexpr std::uint32_t XSPI_WPCCR_ADDTR_B_0x0 = 0;
        /** @brief DTR mode enabled for address phase */
    constexpr std::uint32_t XSPI_WPCCR_ADDTR_B_0x1 = 1;

    /** @brief Address size This field defines address size. */
    using XSPI_WPCCR_ADSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 8-bit address (value: 0)
     *          - B_0x1: 16-bit address (value: 1)
     *          - B_0x2: 24-bit address (value: 2)
     *          - B_0x3: 32-bit address (value: 3)
     */
        /** @brief 8-bit address */
    constexpr std::uint32_t XSPI_WPCCR_ADSIZE_B_0x0 = 0;
        /** @brief 16-bit address */
    constexpr std::uint32_t XSPI_WPCCR_ADSIZE_B_0x1 = 1;
        /** @brief 24-bit address */
    constexpr std::uint32_t XSPI_WPCCR_ADSIZE_B_0x2 = 2;
        /** @brief 32-bit address */
    constexpr std::uint32_t XSPI_WPCCR_ADSIZE_B_0x3 = 3;

    /** @brief Alternate-byte mode This field defines the alternate byte phase mode of operation. */
    using XSPI_WPCCR_ABMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no alternate bytes (value: 0)
     *          - B_0x1: alternate bytes on a single line (value: 1)
     *          - B_0x2: alternate bytes on two lines (value: 2)
     *          - B_0x3: alternate bytes on four lines (value: 3)
     *          - B_0x4: alternate bytes on eight lines (value: 4)
     *          - B_0x5: alternate bytes on 16 lines (value: 5)
     *          - B_0x7: DATA reserved (value: 7)
     */
        /** @brief no alternate bytes */
    constexpr std::uint32_t XSPI_WPCCR_ABMODE_B_0x0 = 0;
        /** @brief alternate bytes on a single line */
    constexpr std::uint32_t XSPI_WPCCR_ABMODE_B_0x1 = 1;
        /** @brief alternate bytes on two lines */
    constexpr std::uint32_t XSPI_WPCCR_ABMODE_B_0x2 = 2;
        /** @brief alternate bytes on four lines */
    constexpr std::uint32_t XSPI_WPCCR_ABMODE_B_0x3 = 3;
        /** @brief alternate bytes on eight lines */
    constexpr std::uint32_t XSPI_WPCCR_ABMODE_B_0x4 = 4;
        /** @brief alternate bytes on 16 lines */
    constexpr std::uint32_t XSPI_WPCCR_ABMODE_B_0x5 = 5;
        /** @brief DATA reserved */
    constexpr std::uint32_t XSPI_WPCCR_ABMODE_B_0x7 = 7;

    /** @brief Alternate bytes double transfer rate This bit sets the DTR mode for the alternate bytes phase. */
    using XSPI_WPCCR_ABDTR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DTR mode disabled for alternate bytes phase (value: 0)
     *          - B_0x1: DTR mode enabled for alternate bytes phase (value: 1)
     */
        /** @brief DTR mode disabled for alternate bytes phase */
    constexpr std::uint32_t XSPI_WPCCR_ABDTR_B_0x0 = 0;
        /** @brief DTR mode enabled for alternate bytes phase */
    constexpr std::uint32_t XSPI_WPCCR_ABDTR_B_0x1 = 1;

    /** @brief Alternate bytes size This bit defines alternate bytes size. */
    using XSPI_WPCCR_ABSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 8-bit alternate bytes (value: 0)
     *          - B_0x1: 16-bit alternate bytes (value: 1)
     *          - B_0x2: 24-bit alternate bytes (value: 2)
     *          - B_0x3: 32-bit alternate bytes (value: 3)
     */
        /** @brief 8-bit alternate bytes */
    constexpr std::uint32_t XSPI_WPCCR_ABSIZE_B_0x0 = 0;
        /** @brief 16-bit alternate bytes */
    constexpr std::uint32_t XSPI_WPCCR_ABSIZE_B_0x1 = 1;
        /** @brief 24-bit alternate bytes */
    constexpr std::uint32_t XSPI_WPCCR_ABSIZE_B_0x2 = 2;
        /** @brief 32-bit alternate bytes */
    constexpr std::uint32_t XSPI_WPCCR_ABSIZE_B_0x3 = 3;

    /** @brief Data mode This field defines the data phase mode of operation. 101; data on 16 lines Others: reserved */
    using XSPI_WPCCR_DMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no data (value: 0)
     *          - B_0x1: data on a single line (value: 1)
     *          - B_0x2: data on two lines (value: 2)
     *          - B_0x3: data on four lines (value: 3)
     *          - B_0x4: data on eight lines (value: 4)
     */
        /** @brief no data */
    constexpr std::uint32_t XSPI_WPCCR_DMODE_B_0x0 = 0;
        /** @brief data on a single line */
    constexpr std::uint32_t XSPI_WPCCR_DMODE_B_0x1 = 1;
        /** @brief data on two lines */
    constexpr std::uint32_t XSPI_WPCCR_DMODE_B_0x2 = 2;
        /** @brief data on four lines */
    constexpr std::uint32_t XSPI_WPCCR_DMODE_B_0x3 = 3;
        /** @brief data on eight lines */
    constexpr std::uint32_t XSPI_WPCCR_DMODE_B_0x4 = 4;

    /** @brief Data double transfer rate This bit sets the DTR mode for the data phase. */
    using XSPI_WPCCR_DDTR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DTR mode disabled for data phase (value: 0)
     *          - B_0x1: DTR mode enabled for data phase (value: 1)
     */
        /** @brief DTR mode disabled for data phase */
    constexpr std::uint32_t XSPI_WPCCR_DDTR_B_0x0 = 0;
        /** @brief DTR mode enabled for data phase */
    constexpr std::uint32_t XSPI_WPCCR_DDTR_B_0x1 = 1;

    /** @brief DQS enable This bit enables the data strobe management. */
    using XSPI_WPCCR_DQSE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DQS disabled (value: 0)
     *          - B_0x1: DQS enabled (value: 1)
     */
        /** @brief DQS disabled */
    constexpr std::uint32_t XSPI_WPCCR_DQSE_B_0x0 = 0;
        /** @brief DQS enabled */
    constexpr std::uint32_t XSPI_WPCCR_DQSE_B_0x1 = 1;

    /** @brief XSPI wrap timing configuration register */
    using XSPI_WPTCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x148, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of dummy cycles This field defines the duration of the dummy phase. In both SDR and DTR modes, it specifies a number of CLK cycles (0-31). */
    using XSPI_WPTCR_DCYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Delay hold quarter cycle Add a quarter cycle delay on the outputs in DTR communication to match hold requirement. */
    using XSPI_WPTCR_DHQC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no quarter cycle delay (value: 0)
     *          - B_0x1: quarter cycle delay inserted (value: 1)
     */
        /** @brief no quarter cycle delay */
    constexpr std::uint32_t XSPI_WPTCR_DHQC_B_0x0 = 0;
        /** @brief quarter cycle delay inserted */
    constexpr std::uint32_t XSPI_WPTCR_DHQC_B_0x1 = 1;

    /** @brief Sample shift By default, the XSPI samples data 1/2 of a CLK cycle after the data is driven by the external device. This bit allows the data to be sampled later in order to consider the external signal delays. The firmware must assure that SSHIFT=0 when the data phase is configured in DTR mode (when DDTR = 1). */
    using XSPI_WPTCR_SSHIFT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no shift (value: 0)
     *          - B_0x1: 1/2 cycle shift (value: 1)
     */
        /** @brief no shift */
    constexpr std::uint32_t XSPI_WPTCR_SSHIFT_B_0x0 = 0;
        /** @brief 1/2 cycle shift */
    constexpr std::uint32_t XSPI_WPTCR_SSHIFT_B_0x1 = 1;

    /** @brief XSPI wrap instruction register */
    using XSPI_WPIR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x150, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Instruction Instruction to be sent to the external SPI device */
    using XSPI_WPIR_INSTRUCTION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XSPI wrap alternate byte register */
    using XSPI_WPABR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x160, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alternate bytes Optional data to be sent to the external SPI device right after the address */
    using XSPI_WPABR_ALTERNATE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XSPI write communication configuration register */
    using XSPI_WCCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x180, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Instruction mode This field defines the instruction phase mode of operation. Others: reserved */
    using XSPI_WCCR_IMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no instruction (value: 0)
     *          - B_0x1: instruction on a single line (value: 1)
     *          - B_0x2: instruction on two lines (value: 2)
     *          - B_0x3: instruction on four lines (value: 3)
     *          - B_0x4: instruction on eight lines (value: 4)
     */
        /** @brief no instruction */
    constexpr std::uint32_t XSPI_WCCR_IMODE_B_0x0 = 0;
        /** @brief instruction on a single line */
    constexpr std::uint32_t XSPI_WCCR_IMODE_B_0x1 = 1;
        /** @brief instruction on two lines */
    constexpr std::uint32_t XSPI_WCCR_IMODE_B_0x2 = 2;
        /** @brief instruction on four lines */
    constexpr std::uint32_t XSPI_WCCR_IMODE_B_0x3 = 3;
        /** @brief instruction on eight lines */
    constexpr std::uint32_t XSPI_WCCR_IMODE_B_0x4 = 4;

    /** @brief Instruction double transfer rate This bit sets the DTR mode for the instruction phase. */
    using XSPI_WCCR_IDTR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DTR mode disabled for instruction phase (value: 0)
     *          - B_0x1: DTR mode enabled for instruction phase (value: 1)
     */
        /** @brief DTR mode disabled for instruction phase */
    constexpr std::uint32_t XSPI_WCCR_IDTR_B_0x0 = 0;
        /** @brief DTR mode enabled for instruction phase */
    constexpr std::uint32_t XSPI_WCCR_IDTR_B_0x1 = 1;

    /** @brief Instruction size This bit defines instruction size: */
    using XSPI_WCCR_ISIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 8-bit instruction (value: 0)
     *          - B_0x1: 16-bit instruction (value: 1)
     *          - B_0x2: 24-bit instruction (value: 2)
     *          - B_0x3: 32-bit instruction (value: 3)
     */
        /** @brief 8-bit instruction */
    constexpr std::uint32_t XSPI_WCCR_ISIZE_B_0x0 = 0;
        /** @brief 16-bit instruction */
    constexpr std::uint32_t XSPI_WCCR_ISIZE_B_0x1 = 1;
        /** @brief 24-bit instruction */
    constexpr std::uint32_t XSPI_WCCR_ISIZE_B_0x2 = 2;
        /** @brief 32-bit instruction */
    constexpr std::uint32_t XSPI_WCCR_ISIZE_B_0x3 = 3;

    /** @brief Address mode This field defines the address phase mode of operation. Others: reserved */
    using XSPI_WCCR_ADMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no address (value: 0)
     *          - B_0x1: address on a single line (value: 1)
     *          - B_0x2: address on two lines (value: 2)
     *          - B_0x3: address on four lines (value: 3)
     *          - B_0x4: address on eight lines (value: 4)
     */
        /** @brief no address */
    constexpr std::uint32_t XSPI_WCCR_ADMODE_B_0x0 = 0;
        /** @brief address on a single line */
    constexpr std::uint32_t XSPI_WCCR_ADMODE_B_0x1 = 1;
        /** @brief address on two lines */
    constexpr std::uint32_t XSPI_WCCR_ADMODE_B_0x2 = 2;
        /** @brief address on four lines */
    constexpr std::uint32_t XSPI_WCCR_ADMODE_B_0x3 = 3;
        /** @brief address on eight lines */
    constexpr std::uint32_t XSPI_WCCR_ADMODE_B_0x4 = 4;

    /** @brief Address double transfer rate This bit sets the DTR mode for the address phase. */
    using XSPI_WCCR_ADDTR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DTR mode disabled for address phase (value: 0)
     *          - B_0x1: DTR mode enabled for address phase (value: 1)
     */
        /** @brief DTR mode disabled for address phase */
    constexpr std::uint32_t XSPI_WCCR_ADDTR_B_0x0 = 0;
        /** @brief DTR mode enabled for address phase */
    constexpr std::uint32_t XSPI_WCCR_ADDTR_B_0x1 = 1;

    /** @brief Address size This field defines address size. */
    using XSPI_WCCR_ADSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 8-bit address (value: 0)
     *          - B_0x1: 16-bit address (value: 1)
     *          - B_0x2: 24-bit address (value: 2)
     *          - B_0x3: 32-bit address (value: 3)
     */
        /** @brief 8-bit address */
    constexpr std::uint32_t XSPI_WCCR_ADSIZE_B_0x0 = 0;
        /** @brief 16-bit address */
    constexpr std::uint32_t XSPI_WCCR_ADSIZE_B_0x1 = 1;
        /** @brief 24-bit address */
    constexpr std::uint32_t XSPI_WCCR_ADSIZE_B_0x2 = 2;
        /** @brief 32-bit address */
    constexpr std::uint32_t XSPI_WCCR_ADSIZE_B_0x3 = 3;

    /** @brief Alternate-byte mode This field defines the alternate-byte phase mode of operation. Others: reserved */
    using XSPI_WCCR_ABMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no alternate bytes (value: 0)
     *          - B_0x1: alternate bytes on a single line (value: 1)
     *          - B_0x2: alternate bytes on two lines (value: 2)
     *          - B_0x3: alternate bytes on four lines (value: 3)
     *          - B_0x4: alternate bytes on eight lines (value: 4)
     */
        /** @brief no alternate bytes */
    constexpr std::uint32_t XSPI_WCCR_ABMODE_B_0x0 = 0;
        /** @brief alternate bytes on a single line */
    constexpr std::uint32_t XSPI_WCCR_ABMODE_B_0x1 = 1;
        /** @brief alternate bytes on two lines */
    constexpr std::uint32_t XSPI_WCCR_ABMODE_B_0x2 = 2;
        /** @brief alternate bytes on four lines */
    constexpr std::uint32_t XSPI_WCCR_ABMODE_B_0x3 = 3;
        /** @brief alternate bytes on eight lines */
    constexpr std::uint32_t XSPI_WCCR_ABMODE_B_0x4 = 4;

    /** @brief Alternate bytes double-transfer rate This bit sets the DTR mode for the alternate-bytes phase. */
    using XSPI_WCCR_ABDTR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DTR mode disabled for alternate-bytes phase (value: 0)
     *          - B_0x1: DTR mode enabled for alternate-bytes phase (value: 1)
     */
        /** @brief DTR mode disabled for alternate-bytes phase */
    constexpr std::uint32_t XSPI_WCCR_ABDTR_B_0x0 = 0;
        /** @brief DTR mode enabled for alternate-bytes phase */
    constexpr std::uint32_t XSPI_WCCR_ABDTR_B_0x1 = 1;

    /** @brief Alternate bytes size This field defines alternate bytes size: */
    using XSPI_WCCR_ABSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 8-bit alternate bytes (value: 0)
     *          - B_0x1: 16-bit alternate bytes (value: 1)
     *          - B_0x2: 24-bit alternate bytes (value: 2)
     *          - B_0x3: 32-bit alternate bytes (value: 3)
     */
        /** @brief 8-bit alternate bytes */
    constexpr std::uint32_t XSPI_WCCR_ABSIZE_B_0x0 = 0;
        /** @brief 16-bit alternate bytes */
    constexpr std::uint32_t XSPI_WCCR_ABSIZE_B_0x1 = 1;
        /** @brief 24-bit alternate bytes */
    constexpr std::uint32_t XSPI_WCCR_ABSIZE_B_0x2 = 2;
        /** @brief 32-bit alternate bytes */
    constexpr std::uint32_t XSPI_WCCR_ABSIZE_B_0x3 = 3;

    /** @brief Data mode This field defines the data phase mode of operation. */
    using XSPI_WCCR_DMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no data (value: 0)
     *          - B_0x1: data on a single line (value: 1)
     *          - B_0x2: data on two lines (value: 2)
     *          - B_0x3: data on four lines (value: 3)
     *          - B_0x4: data on eight lines (value: 4)
     *          - B_0x5: Data on 16 lines (value: 5)
     *          - B_0x7: DATA reserved (value: 7)
     */
        /** @brief no data */
    constexpr std::uint32_t XSPI_WCCR_DMODE_B_0x0 = 0;
        /** @brief data on a single line */
    constexpr std::uint32_t XSPI_WCCR_DMODE_B_0x1 = 1;
        /** @brief data on two lines */
    constexpr std::uint32_t XSPI_WCCR_DMODE_B_0x2 = 2;
        /** @brief data on four lines */
    constexpr std::uint32_t XSPI_WCCR_DMODE_B_0x3 = 3;
        /** @brief data on eight lines */
    constexpr std::uint32_t XSPI_WCCR_DMODE_B_0x4 = 4;
        /** @brief Data on 16 lines */
    constexpr std::uint32_t XSPI_WCCR_DMODE_B_0x5 = 5;
        /** @brief DATA reserved */
    constexpr std::uint32_t XSPI_WCCR_DMODE_B_0x7 = 7;

    /** @brief data double transfer rate This bit sets the DTR mode for the data phase. */
    using XSPI_WCCR_DDTR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DTR mode disabled for data phase (value: 0)
     *          - B_0x1: DTR mode enabled for data phase (value: 1)
     */
        /** @brief DTR mode disabled for data phase */
    constexpr std::uint32_t XSPI_WCCR_DDTR_B_0x0 = 0;
        /** @brief DTR mode enabled for data phase */
    constexpr std::uint32_t XSPI_WCCR_DDTR_B_0x1 = 1;

    /** @brief DQS enable This bit enables the data strobe management. */
    using XSPI_WCCR_DQSE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DQS disabled (value: 0)
     *          - B_0x1: DQS enabled (value: 1)
     */
        /** @brief DQS disabled */
    constexpr std::uint32_t XSPI_WCCR_DQSE_B_0x0 = 0;
        /** @brief DQS enabled */
    constexpr std::uint32_t XSPI_WCCR_DQSE_B_0x1 = 1;

    /** @brief XSPI write timing configuration register */
    using XSPI_WTCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x188, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of dummy cycles This field defines the duration of the dummy phase. In both SDR and DTR modes, it specifies a number of CLK cycles (0-31). It is recommended to have at least 5 dummy cycles when using memories with DQS activated. */
    using XSPI_WTCR_DCYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XSPI write instruction register */
    using XSPI_WIR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x190, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Instruction Instruction to be sent to the external SPI device */
    using XSPI_WIR_INSTRUCTION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XSPI write alternate byte register */
    using XSPI_WABR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alternate bytes Optional data to be sent to the external SPI device right after the address */
    using XSPI_WABR_ALTERNATE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XSPI HyperBus latency configuration register */
    using XSPI_HLCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x200, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Latency mode This bit selects the Latency mode. Note: This bit must be set when using the dual-octal HyperBus configuration. */
    using XSPI_HLCR_LM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Variable initial latency (value: 0)
     *          - B_0x1: Fixed latency (value: 1)
     */
        /** @brief Variable initial latency */
    constexpr std::uint32_t XSPI_HLCR_LM_B_0x0 = 0;
        /** @brief Fixed latency */
    constexpr std::uint32_t XSPI_HLCR_LM_B_0x1 = 1;

    /** @brief Write zero latency This bit enables zero latency on write operations. */
    using XSPI_HLCR_WZL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: latency on write accesses (value: 0)
     *          - B_0x1: no latency on write accesses (value: 1)
     */
        /** @brief latency on write accesses */
    constexpr std::uint32_t XSPI_HLCR_WZL_B_0x0 = 0;
        /** @brief no latency on write accesses */
    constexpr std::uint32_t XSPI_HLCR_WZL_B_0x1 = 1;

    /** @brief Access time Device access time expressed in number of communication clock cycles */
    using XSPI_HLCR_TACC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Read write recovery time Device read write recovery time expressed in number of communication clock cycles */
    using XSPI_HLCR_TRWR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XSPI full-cycle calibration configuration */
    using XSPI_CALFCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x210, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fine calibration The unitary value of delay for this field depends on product technology (refer to the product datasheet). */
    using XSPI_CALFCR_FINE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Coarse calibration The unitary value of delay for this field depends on product technology (refer to the product datasheet). */
    using XSPI_CALFCR_COARSE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Max value This bit gets set when the memory-clock period is outside the range of DLL master, in which case XSPI_CALFCR and XSPI_CALSR are updated with the values for the maximum delay. */
    using XSPI_CALFCR_CALMAX = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XSPI DLL master calibration configuration */
    using XSPI_CALMR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x218, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fine calibration The unitary value of delay for this field depends on product technology (refer to the product datasheet). */
    using XSPI_CALMR_FINE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Coarse calibration The unitary value of delay for this field depends on product technology (refer to the product datasheet). */
    using XSPI_CALMR_COARSE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XSPI DLL slave output calibration configuration */
    using XSPI_CALSOR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x220, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fine calibration The unitary value of delay for this field depends on product technology (refer to the product datasheet). */
    using XSPI_CALSOR_FINE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Coarse calibration The unitary value of delay for this field depends on product technology (refer to the product datasheet). */
    using XSPI_CALSOR_COARSE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief XSPI DLL slave input calibration configuration */
    using XSPI_CALSIR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x228, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Fine calibration The unitary value of delay for this field depends on product technology (refer to the product datasheet). */
    using XSPI_CALSIR_FINE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 7, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Coarse calibration The unitary value of delay for this field depends on product technology (refer to the product datasheet). */
    using XSPI_CALSIR_COARSE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
