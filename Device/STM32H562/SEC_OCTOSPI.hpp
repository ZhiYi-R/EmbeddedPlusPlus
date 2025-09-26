/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32H562_SEC_OCTOSPI_HPP
#define EMBEDDED_PP_STM32H562_SEC_OCTOSPI_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief Octo-SPI interface */
namespace STM32H562::SEC_OCTOSPI {

    /** @brief OCTOSPI control register */
    using OCTOSPI_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable This bit enables the OCTOSPI. Note: The DMA request can be aborted without having received the ACK in case this EN bit is cleared during the operation. In case this bit is set to 0 during a DMA transfer, the REQ signal to DMA returns to inactive state without waiting for the ACK signal from DMA to be active. */
    using OCTOSPI_CR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OCTOSPI disabled (value: 0)
     *          - B_0x1: OCTOSPI enabled (value: 1)
     */
        /** @brief OCTOSPI disabled */
    constexpr std::uint32_t OCTOSPI_CR_EN_B_0x0 = 0;
        /** @brief OCTOSPI enabled */
    constexpr std::uint32_t OCTOSPI_CR_EN_B_0x1 = 1;

    /** @brief Abort request This bit aborts the ongoing command sequence. It is automatically reset once the abort is completed. This bit stops the current transfer. Note: This bit is always read as 0. */
    using OCTOSPI_CR_ABORT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No abort requested (value: 0)
     *          - B_0x1: Abort requested (value: 1)
     */
        /** @brief No abort requested */
    constexpr std::uint32_t OCTOSPI_CR_ABORT_B_0x0 = 0;
        /** @brief Abort requested */
    constexpr std::uint32_t OCTOSPI_CR_ABORT_B_0x1 = 1;

    /** @brief DMA enable In Indirect mode, the DMA can be used to input or output data via OCTOSPI_DR. DMA transfers are initiated when FTF is set. Note: Resetting the DMAEN bit while a DMA transfer is ongoing, breaks the handshake with the DMA. Do not write this bit during DMA operation. */
    using OCTOSPI_CR_DMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DMA disabled for Indirect mode (value: 0)
     *          - B_0x1: DMA enabled for Indirect mode (value: 1)
     */
        /** @brief DMA disabled for Indirect mode */
    constexpr std::uint32_t OCTOSPI_CR_DMAEN_B_0x0 = 0;
        /** @brief DMA enabled for Indirect mode */
    constexpr std::uint32_t OCTOSPI_CR_DMAEN_B_0x1 = 1;

    /** @brief Timeout counter enable This bit is valid only when the Memory-mapped mode (FMODE[1:0] = 11) is selected. This bit enables the timeout counter. */
    using OCTOSPI_CR_TCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Timeout counter is disabled, and thus the chip-select (NCS) remains active indefinitely after an access in Memory-mapped mode. (value: 0)
     *          - B_0x1: Timeout counter is enabled, and thus the chip-select is released in the Memory-mapped mode after TIMEOUT[15:0] cycles of external device inactivity. (value: 1)
     */
        /** @brief Timeout counter is disabled, and thus the chip-select (NCS) remains active indefinitely after an access in Memory-mapped mode. */
    constexpr std::uint32_t OCTOSPI_CR_TCEN_B_0x0 = 0;
        /** @brief Timeout counter is enabled, and thus the chip-select is released in the Memory-mapped mode after TIMEOUT[15:0] cycles of external device inactivity. */
    constexpr std::uint32_t OCTOSPI_CR_TCEN_B_0x1 = 1;

    /** @brief Dual-memory configuration This bit activates the dual-memory configuration, where two external devices are used simultaneously to double the throughput and the capacity */
    using OCTOSPI_CR_DMM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Dual-quad configuration disabled (value: 0)
     *          - B_0x1: Dual-quad configuration enabled (value: 1)
     */
        /** @brief Dual-quad configuration disabled */
    constexpr std::uint32_t OCTOSPI_CR_DMM_B_0x0 = 0;
        /** @brief Dual-quad configuration enabled */
    constexpr std::uint32_t OCTOSPI_CR_DMM_B_0x1 = 1;

    /** @brief Flash select This bit selects the Flash memory to be addressed in Single-, Dual-, Quad-SPI mode in single-memory configuration (when DMM = 0). This bit is ignored when DMM = 1 or when Octal-SPI mode is selected. */
    using OCTOSPI_CR_FSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FLASH 1 selected (data exchanged over IO[3:0]) (value: 0)
     *          - B_0x1: FLASH 2 selected (data exchanged over IO[7:4]) (value: 1)
     */
        /** @brief FLASH 1 selected (data exchanged over IO[3:0]) */
    constexpr std::uint32_t OCTOSPI_CR_FSEL_B_0x0 = 0;
        /** @brief FLASH 2 selected (data exchanged over IO[7:4]) */
    constexpr std::uint32_t OCTOSPI_CR_FSEL_B_0x1 = 1;

    /** @brief FIFO threshold level This field defines, in Indirect mode, the threshold number of bytes in the FIFO that causes the FIFO threshold flag FTF in OCTOSPI_SR, to be set. ... Note: If DMAEN = 1, the DMA controller for the corresponding channel must be disabled before changing the FTHRES[4:0] value. */
    using OCTOSPI_CR_FTHRES = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FTF is set if there are one or more free bytes available to be written to in the FIFO in Indirect-write mode, or if there are one or more valid bytes can be read from the FIFO in Indirect-read mode. (value: 0)
     *          - B_0x1: FTF is set if there are two or more free bytes available to be written to in the FIFO in Indirect write mode, or if there are two or more valid bytes can be read from the FIFO in Indirect-read mode. (value: 1)
     *          - B_0x1F: FTF is set if there are 32 free bytes available to be written to in the FIFO in Indirect-write mode, or if there are 32 valid bytes can be read from the FIFO in Indirect-read mode. (value: 31)
     */
        /** @brief FTF is set if there are one or more free bytes available to be written to in the FIFO in Indirect-write mode, or if there are one or more valid bytes can be read from the FIFO in Indirect-read mode. */
    constexpr std::uint32_t OCTOSPI_CR_FTHRES_B_0x0 = 0;
        /** @brief FTF is set if there are two or more free bytes available to be written to in the FIFO in Indirect write mode, or if there are two or more valid bytes can be read from the FIFO in Indirect-read mode. */
    constexpr std::uint32_t OCTOSPI_CR_FTHRES_B_0x1 = 1;
        /** @brief FTF is set if there are 32 free bytes available to be written to in the FIFO in Indirect-write mode, or if there are 32 valid bytes can be read from the FIFO in Indirect-read mode. */
    constexpr std::uint32_t OCTOSPI_CR_FTHRES_B_0x1F = 31;

    /** @brief Transfer error interrupt enable This bit enables the transfer error interrupt. */
    using OCTOSPI_CR_TEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t OCTOSPI_CR_TEIE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t OCTOSPI_CR_TEIE_B_0x1 = 1;

    /** @brief Transfer complete interrupt enable This bit enables the transfer complete interrupt. */
    using OCTOSPI_CR_TCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t OCTOSPI_CR_TCIE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t OCTOSPI_CR_TCIE_B_0x1 = 1;

    /** @brief FIFO threshold interrupt enable This bit enables the FIFO threshold interrupt. */
    using OCTOSPI_CR_FTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t OCTOSPI_CR_FTIE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t OCTOSPI_CR_FTIE_B_0x1 = 1;

    /** @brief Status match interrupt enable This bit enables the status match interrupt. */
    using OCTOSPI_CR_SMIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t OCTOSPI_CR_SMIE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t OCTOSPI_CR_SMIE_B_0x1 = 1;

    /** @brief Timeout interrupt enable This bit enables the timeout interrupt. */
    using OCTOSPI_CR_TOIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t OCTOSPI_CR_TOIE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t OCTOSPI_CR_TOIE_B_0x1 = 1;

    /** @brief Automatic status-polling mode stop This bit determines if the Automatic status-polling mode is stopped after a match. */
    using OCTOSPI_CR_APMS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Automatic status-polling mode is stopped only by abort or by disabling the OCTOSPI. (value: 0)
     *          - B_0x1: Automatic status-polling mode stops as soon as there is a match. (value: 1)
     */
        /** @brief Automatic status-polling mode is stopped only by abort or by disabling the OCTOSPI. */
    constexpr std::uint32_t OCTOSPI_CR_APMS_B_0x0 = 0;
        /** @brief Automatic status-polling mode stops as soon as there is a match. */
    constexpr std::uint32_t OCTOSPI_CR_APMS_B_0x1 = 1;

    /** @brief Polling match mode This bit indicates which method must be used to determine a match during the Automatic status-polling mode. */
    using OCTOSPI_CR_PMM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AND-match mode, SMF is set if all the unmasked bits received from the device match the corresponding bits in the match register. (value: 0)
     *          - B_0x1: OR-match mode, SMF is set if any of the unmasked bits received from the device matches its corresponding bit in the match register. (value: 1)
     */
        /** @brief AND-match mode, SMF is set if all the unmasked bits received from the device match the corresponding bits in the match register. */
    constexpr std::uint32_t OCTOSPI_CR_PMM_B_0x0 = 0;
        /** @brief OR-match mode, SMF is set if any of the unmasked bits received from the device matches its corresponding bit in the match register. */
    constexpr std::uint32_t OCTOSPI_CR_PMM_B_0x1 = 1;

    /** @brief Functional mode This field defines the OCTOSPI functional mode of operation. If DMAEN = 1 already, then the DMA controller for the corresponding channel must be disabled before changing the FMODE[1:0] value. If FMODE[1:0] and FTHRES[4:0] are wrongly updated while DMAEN = 1, the DMA request signal automatically goes to inactive state. */
    using OCTOSPI_CR_FMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Indirect-write mode (value: 0)
     *          - B_0x1: Indirect-read mode (value: 1)
     *          - B_0x2: Automatic status-polling mode (value: 2)
     *          - B_0x3: Memory-mapped mode (value: 3)
     */
        /** @brief Indirect-write mode */
    constexpr std::uint32_t OCTOSPI_CR_FMODE_B_0x0 = 0;
        /** @brief Indirect-read mode */
    constexpr std::uint32_t OCTOSPI_CR_FMODE_B_0x1 = 1;
        /** @brief Automatic status-polling mode */
    constexpr std::uint32_t OCTOSPI_CR_FMODE_B_0x2 = 2;
        /** @brief Memory-mapped mode */
    constexpr std::uint32_t OCTOSPI_CR_FMODE_B_0x3 = 3;

    /** @brief OCTOSPI device configuration register 1 */
    using OCTOSPI_DCR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Mode 0/Mode 3 This bit indicates the level taken by the CLK between commands (when NCS = 1). */
    using OCTOSPI_DCR1_CKMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CLK must stay low while NCS is high (chip-select released). This is referred to as Mode 0. (value: 0)
     *          - B_0x1: CLK must stay high while NCS is high (chip-select released). This is referred to as Mode 3. (value: 1)
     */
        /** @brief CLK must stay low while NCS is high (chip-select released). This is referred to as Mode 0. */
    constexpr std::uint32_t OCTOSPI_DCR1_CKMODE_B_0x0 = 0;
        /** @brief CLK must stay high while NCS is high (chip-select released). This is referred to as Mode 3. */
    constexpr std::uint32_t OCTOSPI_DCR1_CKMODE_B_0x1 = 1;

    /** @brief Free running clock This bit configures the free running clock. */
    using OCTOSPI_DCR1_FRCK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CLK is not free running. (value: 0)
     *          - B_0x1: CLK is free running (always provided). (value: 1)
     */
        /** @brief CLK is not free running. */
    constexpr std::uint32_t OCTOSPI_DCR1_FRCK_B_0x0 = 0;
        /** @brief CLK is free running (always provided). */
    constexpr std::uint32_t OCTOSPI_DCR1_FRCK_B_0x1 = 1;

    /** @brief Delay block bypass */
    using OCTOSPI_DCR1_DLYBYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The internal sampling clock (called feedback clock) or the DQS data strobe external signal is delayed by the delay block (for more details on this block, refer to the dedicated section of the reference manual as it is not part of the OCTOSPI peripheral). (value: 0)
     *          - B_0x1: The delay block is bypassed, so the internal sampling clock or the DQS data strobe external signal is not affected by the delay block. The delay is shorter than when the delay block is not bypassed, even with the delay value set to minimum value in delay block. (value: 1)
     */
        /** @brief The internal sampling clock (called feedback clock) or the DQS data strobe external signal is delayed by the delay block (for more details on this block, refer to the dedicated section of the reference manual as it is not part of the OCTOSPI peripheral). */
    constexpr std::uint32_t OCTOSPI_DCR1_DLYBYP_B_0x0 = 0;
        /** @brief The delay block is bypassed, so the internal sampling clock or the DQS data strobe external signal is not affected by the delay block. The delay is shorter than when the delay block is not bypassed, even with the delay value set to minimum value in delay block. */
    constexpr std::uint32_t OCTOSPI_DCR1_DLYBYP_B_0x1 = 1;

    /** @brief Chip-select high time CSHT + 1 defines the minimum number of CLK cycles where the chip-select (NCS) must remain high between commands issued to the external device. ... */
    using OCTOSPI_DCR1_CSHT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: NCS stays high for at least 1 cycle between external device commands. (value: 0)
     *          - B_0x1: NCS stays high for at least 2 cycles between external device commands. (value: 1)
     *          - B_0x3F: NCS stays high for at least 64 cycles between external device commands. (value: 63)
     */
        /** @brief NCS stays high for at least 1 cycle between external device commands. */
    constexpr std::uint32_t OCTOSPI_DCR1_CSHT_B_0x0 = 0;
        /** @brief NCS stays high for at least 2 cycles between external device commands. */
    constexpr std::uint32_t OCTOSPI_DCR1_CSHT_B_0x1 = 1;
        /** @brief NCS stays high for at least 64 cycles between external device commands. */
    constexpr std::uint32_t OCTOSPI_DCR1_CSHT_B_0x3F = 63;

    /** @brief Device size This field defines the size of the external device using the following formula: Number of bytes in device = 2[DEVSIZE+1]. DEVSIZE+1 is effectively the number of address bits required to address the external device. The device capacity can be up to 4 Gbytes (addressed using 32-bits) in Indirect mode, but the addressable space in Memory-mapped mode is limited to 256 Mbytes. In Regular-command protocol, if DMM = 1, DEVSIZE[4:0] indicates the total capacity of the two devices together. */
    using OCTOSPI_DCR1_DEVSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Memory type This bit indicates the type of memory to be supported. Note: In this mode, DQS signal polarity is inverted with respect to the memory clock signal. This is the default value and care must be taken to change MTYP[2:0] for memories different from Micron. Others: Reserved */
    using OCTOSPI_DCR1_MTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Micron mode, D0/D1 ordering in DTR 8-data-bit mode. Regular-command protocol in Single-, Dual-, Quad- and Octal-SPI modes. (value: 0)
     *          - B_0x1: Macronix mode, D1/D0 ordering in DTR 8-data-bit mode. Regular-command protocol in Single-, Dual-, Quad- and Octal-SPI modes. (value: 1)
     *          - B_0x2: Standard mode (value: 2)
     *          - B_0x3: Macronix RAM mode, D1/D0 ordering in DTR 8-data-bit mode. Regular-command protocol in Single-, Dual-, Quad- and Octal-SPI modes with dedicated address mapping. (value: 3)
     *          - B_0x4: HyperBus memory mode, the protocol follows the HyperBus specification. 8-data-bit DTR mode must be selected. (value: 4)
     *          - B_0x5: HyperBus register mode, addressing register space. The memory-mapped accesses in this mode must be non-cacheable, or Indirect read/write modes must be used. (value: 5)
     */
        /** @brief Micron mode, D0/D1 ordering in DTR 8-data-bit mode. Regular-command protocol in Single-, Dual-, Quad- and Octal-SPI modes. */
    constexpr std::uint32_t OCTOSPI_DCR1_MTYP_B_0x0 = 0;
        /** @brief Macronix mode, D1/D0 ordering in DTR 8-data-bit mode. Regular-command protocol in Single-, Dual-, Quad- and Octal-SPI modes. */
    constexpr std::uint32_t OCTOSPI_DCR1_MTYP_B_0x1 = 1;
        /** @brief Standard mode */
    constexpr std::uint32_t OCTOSPI_DCR1_MTYP_B_0x2 = 2;
        /** @brief Macronix RAM mode, D1/D0 ordering in DTR 8-data-bit mode. Regular-command protocol in Single-, Dual-, Quad- and Octal-SPI modes with dedicated address mapping. */
    constexpr std::uint32_t OCTOSPI_DCR1_MTYP_B_0x3 = 3;
        /** @brief HyperBus memory mode, the protocol follows the HyperBus specification. 8-data-bit DTR mode must be selected. */
    constexpr std::uint32_t OCTOSPI_DCR1_MTYP_B_0x4 = 4;
        /** @brief HyperBus register mode, addressing register space. The memory-mapped accesses in this mode must be non-cacheable, or Indirect read/write modes must be used. */
    constexpr std::uint32_t OCTOSPI_DCR1_MTYP_B_0x5 = 5;

    /** @brief OCTOSPI device configuration register 2 */
    using OCTOSPI_DCR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clock prescaler This field defines the scaler factor for generating the CLK based on the kernel clock (value + 1). 2: FCLK = FKERNEL/3 ... 255: FCLK = FKERNEL/256 For odd clock division factors, the CLK duty cycle is not 50 %. The clock signal remains low one cycle longer than it stays high. */
    using OCTOSPI_DCR2_PRESCALER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FCLK = FKERNEL, kernel clock used directly as OCTOSPI CLK (prescaler bypassed). In this case, if the DTR mode is used, it is mandatory to provide to the OCTOSPI a kernel clock that has 50% duty-cycle. (value: 0)
     *          - B_0x1: FCLK = FKERNEL/2 (value: 1)
     */
        /** @brief FCLK = FKERNEL, kernel clock used directly as OCTOSPI CLK (prescaler bypassed). In this case, if the DTR mode is used, it is mandatory to provide to the OCTOSPI a kernel clock that has 50% duty-cycle. */
    constexpr std::uint32_t OCTOSPI_DCR2_PRESCALER_B_0x0 = 0;
        /** @brief FCLK = FKERNEL/2 */
    constexpr std::uint32_t OCTOSPI_DCR2_PRESCALER_B_0x1 = 1;

    /** @brief Wrap size This field indicates the wrap size to which the memory is configured. For memories which have a separate command for wrapped instructions, this field indicates the wrap-size associated with the command held in the OCTOSPI1_WPIR register. 110-111: Reserved */
    using OCTOSPI_DCR2_WRAPSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Wrapped reads are not supported by the memory. (value: 0)
     *          - B_0x2: External memory supports wrap size of 16 bytes. (value: 2)
     *          - B_0x3: External memory supports wrap size of 32 bytes. (value: 3)
     *          - B_0x4: External memory supports wrap size of 64 bytes. (value: 4)
     *          - B_0x5: External memory supports wrap size of 128 bytes. (value: 5)
     */
        /** @brief Wrapped reads are not supported by the memory. */
    constexpr std::uint32_t OCTOSPI_DCR2_WRAPSIZE_B_0x0 = 0;
        /** @brief External memory supports wrap size of 16 bytes. */
    constexpr std::uint32_t OCTOSPI_DCR2_WRAPSIZE_B_0x2 = 2;
        /** @brief External memory supports wrap size of 32 bytes. */
    constexpr std::uint32_t OCTOSPI_DCR2_WRAPSIZE_B_0x3 = 3;
        /** @brief External memory supports wrap size of 64 bytes. */
    constexpr std::uint32_t OCTOSPI_DCR2_WRAPSIZE_B_0x4 = 4;
        /** @brief External memory supports wrap size of 128 bytes. */
    constexpr std::uint32_t OCTOSPI_DCR2_WRAPSIZE_B_0x5 = 5;

    /** @brief OCTOSPI device configuration register 3 */
    using OCTOSPI_DCR3 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief NCS boundary This field enables the transaction boundary feature. When active, a minimum value of 3 is recommended. The NCS is released on each boundary of 2CSBOUND bytes. others: NCS boundary set to 2CSBOUND bytes */
    using OCTOSPI_DCR3_CSBOUND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: NCS boundary disabled (value: 0)
     */
        /** @brief NCS boundary disabled */
    constexpr std::uint32_t OCTOSPI_DCR3_CSBOUND_B_0x0 = 0;

    /** @brief OCTOSPI device configuration register 4 */
    using OCTOSPI_DCR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Refresh rate This field enables the refresh rate feature. The NCS is released every REFRESH + 1 clock cycles for writes, and REFRESH + 4 clock cycles for reads. Note: These two values can be extended with few clock cycles when refresh occurs during a byte transmission in Single-, Dual- or Quad-SPI mode, because the byte transmission must be completed. others: Maximum communication length is set to REFRESH + 1 clock cycles. */
    using OCTOSPI_DCR4_REFRESH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Refresh disabled (value: 0)
     */
        /** @brief Refresh disabled */
    constexpr std::uint32_t OCTOSPI_DCR4_REFRESH_B_0x0 = 0;

    /** @brief OCTOSPI status register */
    using OCTOSPI_SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer error flag This bit is set in Indirect mode when an invalid address is being accessed in Indirect mode. It is cleared by writing 1 to CTEF. */
    using OCTOSPI_SR_TEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer complete flag This bit is set in Indirect mode when the programmed number of data has been transferred or in any mode when the transfer has been aborted.It is cleared by writing 1 to CTCF. */
    using OCTOSPI_SR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FIFO threshold flag In Indirect mode, this bit is set when the FIFO threshold has been reached, or if there is any data left in the FIFO after the reads from the external device are complete. It is cleared automatically as soon as the threshold condition is no longer true. In Automatic status-polling mode, this bit is set every time the status register is read, and the bit is cleared when the data register is read. */
    using OCTOSPI_SR_FTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Status match flag This bit is set in Automatic status-polling mode when the unmasked received data matches the corresponding bits in the match register (OCTOSPI_PSMAR). It is cleared by writing 1 to CSMF. */
    using OCTOSPI_SR_SMF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timeout flag This bit is set when timeout occurs. It is cleared by writing 1 to CTOF. */
    using OCTOSPI_SR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Busy This bit is set when an operation is ongoing. It is cleared automatically when the operation with the external device is finished and the FIFO is empty. */
    using OCTOSPI_SR_BUSY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FIFO level This field gives the number of valid bytes that are being held in the FIFO. FLEVEL = 0 when the FIFO is empty, and 32 when it is full. In Automatic status-polling mode, FLEVEL is zero. */
    using OCTOSPI_SR_FLEVEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OCTOSPI flag clear register */
    using OCTOSPI_FCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear transfer error flag Writing 1 clears the TEF flag in the OCTOSPI_SR register. */
    using OCTOSPI_FCR_CTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear transfer complete flag Writing 1 clears the TCF flag in the OCTOSPI_SR register. */
    using OCTOSPI_FCR_CTCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear status match flag Writing 1 clears the SMF flag in the OCTOSPI_SR register. */
    using OCTOSPI_FCR_CSMF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear timeout flag Writing 1 clears the TOF flag in the OCTOSPI_SR register. */
    using OCTOSPI_FCR_CTOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OCTOSPI data length register */
    using OCTOSPI_DLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief [31: 0]: Data length Number of data to be retrieved (value+1) in Indirect and Automatic status-polling modes. A value not greater than three (indicating 4 bytes) must be used for Automatic status-polling mode. All 1's in Indirect mode means undefined length, where OCTOSPI continues until the end of the memory, as defined by DEVSIZE. 0x0000_0000: 1 byte is to be transferred. 0x0000_0001: 2 bytes are to be transferred. 0x0000_0002: 3 bytes are to be transferred. 0x0000_0003: 4 bytes are to be transferred. ... 0xFFFF_FFFD: 4,294,967,294 (4G-2) bytes are to be transferred. 0xFFFF_FFFE: 4,294,967,295 (4G-1) bytes are to be transferred. 0xFFFF_FFFF: undefined length; all bytes, until the end of the external device, (as defined by DEVSIZE) are to be transferred. Continue reading indefinitely if DEVSIZE = 0x1F. DL[0] is stuck at 1 in dual-memory configuration (DMM = 1) even when 0 is written to this bit, thus assuring that each access transfers an even number of bytes. This field has no effect in Memory-mapped mode. */
    using OCTOSPI_DLR_DL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OCTOSPI address register */
    using OCTOSPI_AR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Address Address to be sent to the external device. In HyperBus protocol, this field must be even as this protocol is 16-bit word oriented. In dual-memory configuration, AR[0] is forced to 1. Writes to this field are ignored when BUSY = 1 or when FMODE = 11 (Memory-mapped mode). */
    using OCTOSPI_AR_ADDRESS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OCTOSPI data register */
    using OCTOSPI_DR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief [31: 0]: Data Data to be sent/received to/from the external SPI device In Indirect-write mode, data written to this register is stored on the FIFO before it is sent to the external device during the data phase. If the FIFO is too full, a write operation is stalled until the FIFO has enough space to accept the amount of data being written. In Indirect-read mode, reading this register gives (via the FIFO) the data that was received from the external device. If the FIFO does not have as many bytes as requested by the read operation and if BUSY = 1, the read operation is stalled until enough data is present or until the transfer is complete, whichever happens first. In Automatic status-polling mode, this register contains the last data read from the external device (without masking). Word, half-word, and byte accesses to this register are supported. In Indirect-write mode, a byte write adds 1 byte to the FIFO, a half-word write 2 bytes, and a word write 4 bytes. Similarly, in Indirect-read mode, a byte read removes 1 byte from the FIFO, a halfword read 2 bytes, and a word read 4 bytes. Accesses in Indirect mode must be aligned to the bottom of this register: A byte read must read DATA[7:0] and a half-word read must read DATA[15:0]. */
    using OCTOSPI_DR_DATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OCTOSPI polling status mask register */
    using OCTOSPI_PSMKR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x80, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Status mask Mask to be applied to the status bytes received in Automatic status-polling mode For bit n: */
    using OCTOSPI_PSMKR_MASK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bit n of the data received in Automatic status-polling mode is masked and its value is not considered in the matching logic. (value: 0)
     *          - B_0x1: Bit n of the data received in Automatic status-polling mode is unmasked and its value is considered in the matching logic. (value: 1)
     */
        /** @brief Bit n of the data received in Automatic status-polling mode is masked and its value is not considered in the matching logic. */
    constexpr std::uint32_t OCTOSPI_PSMKR_MASK_B_0x0 = 0;
        /** @brief Bit n of the data received in Automatic status-polling mode is unmasked and its value is considered in the matching logic. */
    constexpr std::uint32_t OCTOSPI_PSMKR_MASK_B_0x1 = 1;

    /** @brief OCTOSPI polling status match register */
    using OCTOSPI_PSMAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x88, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief [31: 0]: Status match Value to be compared with the masked status register to get a match */
    using OCTOSPI_PSMAR_MATCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OCTOSPI polling interval register */
    using OCTOSPI_PIR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x90, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief [15: 0]: Polling interval Number of CLK cycle between a read during the Automatic status-polling phases */
    using OCTOSPI_PIR_INTERVAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OCTOSPI communication configuration register */
    using OCTOSPI_CCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x100, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Instruction mode This field defines the instruction phase mode of operation. 101-111: Reserved */
    using OCTOSPI_CCR_IMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No instruction (value: 0)
     *          - B_0x1: Instruction on a single line (value: 1)
     *          - B_0x2: Instruction on two lines (value: 2)
     *          - B_0x3: Instruction on four lines (value: 3)
     *          - B_0x4: Instruction on eight lines (value: 4)
     */
        /** @brief No instruction */
    constexpr std::uint32_t OCTOSPI_CCR_IMODE_B_0x0 = 0;
        /** @brief Instruction on a single line */
    constexpr std::uint32_t OCTOSPI_CCR_IMODE_B_0x1 = 1;
        /** @brief Instruction on two lines */
    constexpr std::uint32_t OCTOSPI_CCR_IMODE_B_0x2 = 2;
        /** @brief Instruction on four lines */
    constexpr std::uint32_t OCTOSPI_CCR_IMODE_B_0x3 = 3;
        /** @brief Instruction on eight lines */
    constexpr std::uint32_t OCTOSPI_CCR_IMODE_B_0x4 = 4;

    /** @brief Instruction double transfer rate This bit sets the DTR mode for the instruction phase. */
    using OCTOSPI_CCR_IDTR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DTR mode disabled for instruction phase (value: 0)
     *          - B_0x1: DTR mode enabled for instruction phase (value: 1)
     */
        /** @brief DTR mode disabled for instruction phase */
    constexpr std::uint32_t OCTOSPI_CCR_IDTR_B_0x0 = 0;
        /** @brief DTR mode enabled for instruction phase */
    constexpr std::uint32_t OCTOSPI_CCR_IDTR_B_0x1 = 1;

    /** @brief Instruction size This bit defines instruction size. */
    using OCTOSPI_CCR_ISIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 8-bit instruction (value: 0)
     *          - B_0x1: 16-bit instruction (value: 1)
     *          - B_0x2: 24-bit instruction (value: 2)
     *          - B_0x3: 32-bit instruction (value: 3)
     */
        /** @brief 8-bit instruction */
    constexpr std::uint32_t OCTOSPI_CCR_ISIZE_B_0x0 = 0;
        /** @brief 16-bit instruction */
    constexpr std::uint32_t OCTOSPI_CCR_ISIZE_B_0x1 = 1;
        /** @brief 24-bit instruction */
    constexpr std::uint32_t OCTOSPI_CCR_ISIZE_B_0x2 = 2;
        /** @brief 32-bit instruction */
    constexpr std::uint32_t OCTOSPI_CCR_ISIZE_B_0x3 = 3;

    /** @brief Address mode This field defines the address phase mode of operation. 101-111: Reserved */
    using OCTOSPI_CCR_ADMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No address (value: 0)
     *          - B_0x1: Address on a single line (value: 1)
     *          - B_0x2: Address on two lines (value: 2)
     *          - B_0x3: Address on four lines (value: 3)
     *          - B_0x4: Address on eight lines (value: 4)
     */
        /** @brief No address */
    constexpr std::uint32_t OCTOSPI_CCR_ADMODE_B_0x0 = 0;
        /** @brief Address on a single line */
    constexpr std::uint32_t OCTOSPI_CCR_ADMODE_B_0x1 = 1;
        /** @brief Address on two lines */
    constexpr std::uint32_t OCTOSPI_CCR_ADMODE_B_0x2 = 2;
        /** @brief Address on four lines */
    constexpr std::uint32_t OCTOSPI_CCR_ADMODE_B_0x3 = 3;
        /** @brief Address on eight lines */
    constexpr std::uint32_t OCTOSPI_CCR_ADMODE_B_0x4 = 4;

    /** @brief Address double transfer rate This bit sets the DTR mode for the address phase. */
    using OCTOSPI_CCR_ADDTR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DTR mode disabled for address phase (value: 0)
     *          - B_0x1: DTR mode enabled for address phase (value: 1)
     */
        /** @brief DTR mode disabled for address phase */
    constexpr std::uint32_t OCTOSPI_CCR_ADDTR_B_0x0 = 0;
        /** @brief DTR mode enabled for address phase */
    constexpr std::uint32_t OCTOSPI_CCR_ADDTR_B_0x1 = 1;

    /** @brief Address size This field defines address size. */
    using OCTOSPI_CCR_ADSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 8-bit address (value: 0)
     *          - B_0x1: 16-bit address (value: 1)
     *          - B_0x2: 24-bit address (value: 2)
     *          - B_0x3: 32-bit address (value: 3)
     */
        /** @brief 8-bit address */
    constexpr std::uint32_t OCTOSPI_CCR_ADSIZE_B_0x0 = 0;
        /** @brief 16-bit address */
    constexpr std::uint32_t OCTOSPI_CCR_ADSIZE_B_0x1 = 1;
        /** @brief 24-bit address */
    constexpr std::uint32_t OCTOSPI_CCR_ADSIZE_B_0x2 = 2;
        /** @brief 32-bit address */
    constexpr std::uint32_t OCTOSPI_CCR_ADSIZE_B_0x3 = 3;

    /** @brief Alternate-byte mode This field defines the alternate-byte phase mode of operation. 101-111: Reserved */
    using OCTOSPI_CCR_ABMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No alternate bytes (value: 0)
     *          - B_0x1: Alternate bytes on a single line (value: 1)
     *          - B_0x2: Alternate bytes on two lines (value: 2)
     *          - B_0x3: Alternate bytes on four lines (value: 3)
     *          - B_0x4: Alternate bytes on eight lines (value: 4)
     */
        /** @brief No alternate bytes */
    constexpr std::uint32_t OCTOSPI_CCR_ABMODE_B_0x0 = 0;
        /** @brief Alternate bytes on a single line */
    constexpr std::uint32_t OCTOSPI_CCR_ABMODE_B_0x1 = 1;
        /** @brief Alternate bytes on two lines */
    constexpr std::uint32_t OCTOSPI_CCR_ABMODE_B_0x2 = 2;
        /** @brief Alternate bytes on four lines */
    constexpr std::uint32_t OCTOSPI_CCR_ABMODE_B_0x3 = 3;
        /** @brief Alternate bytes on eight lines */
    constexpr std::uint32_t OCTOSPI_CCR_ABMODE_B_0x4 = 4;

    /** @brief Alternate bytes double transfer rate This bit sets the DTR mode for the alternate bytes phase. This field can be written only when BUSY = 0. */
    using OCTOSPI_CCR_ABDTR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DTR mode disabled for alternate bytes phase (value: 0)
     *          - B_0x1: DTR mode enabled for alternate bytes phase (value: 1)
     */
        /** @brief DTR mode disabled for alternate bytes phase */
    constexpr std::uint32_t OCTOSPI_CCR_ABDTR_B_0x0 = 0;
        /** @brief DTR mode enabled for alternate bytes phase */
    constexpr std::uint32_t OCTOSPI_CCR_ABDTR_B_0x1 = 1;

    /** @brief Alternate bytes size This bit defines alternate bytes size. */
    using OCTOSPI_CCR_ABSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 8-bit alternate bytes (value: 0)
     *          - B_0x1: 16-bit alternate bytes (value: 1)
     *          - B_0x2: 24-bit alternate bytes (value: 2)
     *          - B_0x3: 32-bit alternate bytes (value: 3)
     */
        /** @brief 8-bit alternate bytes */
    constexpr std::uint32_t OCTOSPI_CCR_ABSIZE_B_0x0 = 0;
        /** @brief 16-bit alternate bytes */
    constexpr std::uint32_t OCTOSPI_CCR_ABSIZE_B_0x1 = 1;
        /** @brief 24-bit alternate bytes */
    constexpr std::uint32_t OCTOSPI_CCR_ABSIZE_B_0x2 = 2;
        /** @brief 32-bit alternate bytes */
    constexpr std::uint32_t OCTOSPI_CCR_ABSIZE_B_0x3 = 3;

    /** @brief Data mode This field defines the data phase mode of operation. 101-111: Reserved */
    using OCTOSPI_CCR_DMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No data (value: 0)
     *          - B_0x1: Data on a single line (value: 1)
     *          - B_0x2: Data on two lines (value: 2)
     *          - B_0x3: Data on four lines (value: 3)
     *          - B_0x4: Data on eight lines (value: 4)
     */
        /** @brief No data */
    constexpr std::uint32_t OCTOSPI_CCR_DMODE_B_0x0 = 0;
        /** @brief Data on a single line */
    constexpr std::uint32_t OCTOSPI_CCR_DMODE_B_0x1 = 1;
        /** @brief Data on two lines */
    constexpr std::uint32_t OCTOSPI_CCR_DMODE_B_0x2 = 2;
        /** @brief Data on four lines */
    constexpr std::uint32_t OCTOSPI_CCR_DMODE_B_0x3 = 3;
        /** @brief Data on eight lines */
    constexpr std::uint32_t OCTOSPI_CCR_DMODE_B_0x4 = 4;

    /** @brief Data double transfer rate This bit sets the DTR mode for the data phase. */
    using OCTOSPI_CCR_DDTR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DTR mode disabled for data phase (value: 0)
     *          - B_0x1: DTR mode enabled for data phase (value: 1)
     */
        /** @brief DTR mode disabled for data phase */
    constexpr std::uint32_t OCTOSPI_CCR_DDTR_B_0x0 = 0;
        /** @brief DTR mode enabled for data phase */
    constexpr std::uint32_t OCTOSPI_CCR_DDTR_B_0x1 = 1;

    /** @brief DQS enable This bit enables the data strobe management. */
    using OCTOSPI_CCR_DQSE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DQS disabled (value: 0)
     *          - B_0x1: DQS enabled (value: 1)
     */
        /** @brief DQS disabled */
    constexpr std::uint32_t OCTOSPI_CCR_DQSE_B_0x0 = 0;
        /** @brief DQS enabled */
    constexpr std::uint32_t OCTOSPI_CCR_DQSE_B_0x1 = 1;

    /** @brief Send instruction only once mode This bit has no effect when IMODE = 00 (see ). */
    using OCTOSPI_CCR_SIOO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 31, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Send instruction on every transaction (value: 0)
     *          - B_0x1: Send instruction only for the first command (value: 1)
     */
        /** @brief Send instruction on every transaction */
    constexpr std::uint32_t OCTOSPI_CCR_SIOO_B_0x0 = 0;
        /** @brief Send instruction only for the first command */
    constexpr std::uint32_t OCTOSPI_CCR_SIOO_B_0x1 = 1;

    /** @brief OCTOSPI timing configuration register */
    using OCTOSPI_TCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x108, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of dummy cycles This field defines the duration of the dummy phase. In both SDR and DTR modes, it specifies a number of CLK cycles (0-31). It is recommended to have at least six dummy cycles when using memories with DQS activated. */
    using OCTOSPI_TCR_DCYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Delay hold quarter cycle */
    using OCTOSPI_TCR_DHQC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No delay hold (value: 0)
     *          - B_0x1: 1/4 cycle hold (value: 1)
     */
        /** @brief No delay hold */
    constexpr std::uint32_t OCTOSPI_TCR_DHQC_B_0x0 = 0;
        /** @brief 1/4 cycle hold */
    constexpr std::uint32_t OCTOSPI_TCR_DHQC_B_0x1 = 1;

    /** @brief Sample shift By default, the OCTOSPI samples data 1/2 of a CLK cycle after the data is driven by the external device. This bit allows the data to be sampled later in order to consider the external signal delays. The software must ensure that SSHIFT = 0 when the data phase is configured in DTR mode (when DDTR = 1.) */
    using OCTOSPI_TCR_SSHIFT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No shift (value: 0)
     *          - B_0x1: 1/2 cycle shift (value: 1)
     */
        /** @brief No shift */
    constexpr std::uint32_t OCTOSPI_TCR_SSHIFT_B_0x0 = 0;
        /** @brief 1/2 cycle shift */
    constexpr std::uint32_t OCTOSPI_TCR_SSHIFT_B_0x1 = 1;

    /** @brief OCTOSPI instruction register */
    using OCTOSPI_IR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x110, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Instruction Instruction to be sent to the external SPI device */
    using OCTOSPI_IR_INSTRUCTION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OCTOSPI alternate bytes register */
    using OCTOSPI_ABR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x120, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief [31: 0]: Alternate bytes Optional data to be sent to the external SPI device right after the address. */
    using OCTOSPI_ABR_ALTERNATE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OCTOSPI low-power timeout register */
    using OCTOSPI_LPTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x130, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief [15: 0]: Timeout period After each access in Memory-mapped mode, the OCTOSPI prefetches the subsequent bytes and hold them in the FIFO. This field indicates how many CLK cycles the OCTOSPI waits after the clock becomes inactive and until it raises the NCS, putting the external device in a lower-consumption state. */
    using OCTOSPI_LPTR_TIMEOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OCTOSPI wrap communication configuration register */
    using OCTOSPI_WPCCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x140, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Instruction mode This field defines the instruction phase mode of operation. 101-111: Reserved */
    using OCTOSPI_WPCCR_IMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No instruction (value: 0)
     *          - B_0x1: Instruction on a single line (value: 1)
     *          - B_0x2: Instruction on two lines (value: 2)
     *          - B_0x3: Instruction on four lines (value: 3)
     *          - B_0x4: Instruction on eight lines (value: 4)
     */
        /** @brief No instruction */
    constexpr std::uint32_t OCTOSPI_WPCCR_IMODE_B_0x0 = 0;
        /** @brief Instruction on a single line */
    constexpr std::uint32_t OCTOSPI_WPCCR_IMODE_B_0x1 = 1;
        /** @brief Instruction on two lines */
    constexpr std::uint32_t OCTOSPI_WPCCR_IMODE_B_0x2 = 2;
        /** @brief Instruction on four lines */
    constexpr std::uint32_t OCTOSPI_WPCCR_IMODE_B_0x3 = 3;
        /** @brief Instruction on eight lines */
    constexpr std::uint32_t OCTOSPI_WPCCR_IMODE_B_0x4 = 4;

    /** @brief Instruction double transfer rate This bit sets the DTR mode for the instruction phase. */
    using OCTOSPI_WPCCR_IDTR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DTR mode disabled for instruction phase (value: 0)
     *          - B_0x1: DTR mode enabled for instruction phase (value: 1)
     */
        /** @brief DTR mode disabled for instruction phase */
    constexpr std::uint32_t OCTOSPI_WPCCR_IDTR_B_0x0 = 0;
        /** @brief DTR mode enabled for instruction phase */
    constexpr std::uint32_t OCTOSPI_WPCCR_IDTR_B_0x1 = 1;

    /** @brief Instruction size This field defines instruction size. */
    using OCTOSPI_WPCCR_ISIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 8-bit instruction (value: 0)
     *          - B_0x1: 16-bit instruction (value: 1)
     *          - B_0x2: 24-bit instruction (value: 2)
     *          - B_0x3: 32-bit instruction (value: 3)
     */
        /** @brief 8-bit instruction */
    constexpr std::uint32_t OCTOSPI_WPCCR_ISIZE_B_0x0 = 0;
        /** @brief 16-bit instruction */
    constexpr std::uint32_t OCTOSPI_WPCCR_ISIZE_B_0x1 = 1;
        /** @brief 24-bit instruction */
    constexpr std::uint32_t OCTOSPI_WPCCR_ISIZE_B_0x2 = 2;
        /** @brief 32-bit instruction */
    constexpr std::uint32_t OCTOSPI_WPCCR_ISIZE_B_0x3 = 3;

    /** @brief Address mode This field defines the address phase mode of operation. 101-111: Reserved */
    using OCTOSPI_WPCCR_ADMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No address (value: 0)
     *          - B_0x1: Address on a single line (value: 1)
     *          - B_0x2: Address on two lines (value: 2)
     *          - B_0x3: Address on four lines (value: 3)
     *          - B_0x4: Address on eight lines (value: 4)
     */
        /** @brief No address */
    constexpr std::uint32_t OCTOSPI_WPCCR_ADMODE_B_0x0 = 0;
        /** @brief Address on a single line */
    constexpr std::uint32_t OCTOSPI_WPCCR_ADMODE_B_0x1 = 1;
        /** @brief Address on two lines */
    constexpr std::uint32_t OCTOSPI_WPCCR_ADMODE_B_0x2 = 2;
        /** @brief Address on four lines */
    constexpr std::uint32_t OCTOSPI_WPCCR_ADMODE_B_0x3 = 3;
        /** @brief Address on eight lines */
    constexpr std::uint32_t OCTOSPI_WPCCR_ADMODE_B_0x4 = 4;

    /** @brief Address double transfer rate This bit sets the DTR mode for the address phase. */
    using OCTOSPI_WPCCR_ADDTR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DTR mode disabled for address phase (value: 0)
     *          - B_0x1: DTR mode enabled for address phase (value: 1)
     */
        /** @brief DTR mode disabled for address phase */
    constexpr std::uint32_t OCTOSPI_WPCCR_ADDTR_B_0x0 = 0;
        /** @brief DTR mode enabled for address phase */
    constexpr std::uint32_t OCTOSPI_WPCCR_ADDTR_B_0x1 = 1;

    /** @brief Address size This field defines address size. */
    using OCTOSPI_WPCCR_ADSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 8-bit address (value: 0)
     *          - B_0x1: 16-bit address (value: 1)
     *          - B_0x2: 24-bit address (value: 2)
     *          - B_0x3: 32-bit address (value: 3)
     */
        /** @brief 8-bit address */
    constexpr std::uint32_t OCTOSPI_WPCCR_ADSIZE_B_0x0 = 0;
        /** @brief 16-bit address */
    constexpr std::uint32_t OCTOSPI_WPCCR_ADSIZE_B_0x1 = 1;
        /** @brief 24-bit address */
    constexpr std::uint32_t OCTOSPI_WPCCR_ADSIZE_B_0x2 = 2;
        /** @brief 32-bit address */
    constexpr std::uint32_t OCTOSPI_WPCCR_ADSIZE_B_0x3 = 3;

    /** @brief Alternate-byte mode This field defines the alternate byte phase mode of operation. 101-111: Reserved */
    using OCTOSPI_WPCCR_ABMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No alternate bytes (value: 0)
     *          - B_0x1: Alternate bytes on a single line (value: 1)
     *          - B_0x2: Alternate bytes on two lines (value: 2)
     *          - B_0x3: Alternate bytes on four lines (value: 3)
     *          - B_0x4: Alternate bytes on eight lines (value: 4)
     */
        /** @brief No alternate bytes */
    constexpr std::uint32_t OCTOSPI_WPCCR_ABMODE_B_0x0 = 0;
        /** @brief Alternate bytes on a single line */
    constexpr std::uint32_t OCTOSPI_WPCCR_ABMODE_B_0x1 = 1;
        /** @brief Alternate bytes on two lines */
    constexpr std::uint32_t OCTOSPI_WPCCR_ABMODE_B_0x2 = 2;
        /** @brief Alternate bytes on four lines */
    constexpr std::uint32_t OCTOSPI_WPCCR_ABMODE_B_0x3 = 3;
        /** @brief Alternate bytes on eight lines */
    constexpr std::uint32_t OCTOSPI_WPCCR_ABMODE_B_0x4 = 4;

    /** @brief Alternate bytes double transfer rate This bit sets the DTR mode for the alternate bytes phase. */
    using OCTOSPI_WPCCR_ABDTR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DTR mode disabled for alternate bytes phase (value: 0)
     *          - B_0x1: DTR mode enabled for alternate bytes phase (value: 1)
     */
        /** @brief DTR mode disabled for alternate bytes phase */
    constexpr std::uint32_t OCTOSPI_WPCCR_ABDTR_B_0x0 = 0;
        /** @brief DTR mode enabled for alternate bytes phase */
    constexpr std::uint32_t OCTOSPI_WPCCR_ABDTR_B_0x1 = 1;

    /** @brief Alternate bytes size This bit defines alternate bytes size. */
    using OCTOSPI_WPCCR_ABSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 8-bit alternate bytes (value: 0)
     *          - B_0x1: 16-bit alternate bytes (value: 1)
     *          - B_0x2: 24-bit alternate bytes (value: 2)
     *          - B_0x3: 32-bit alternate bytes (value: 3)
     */
        /** @brief 8-bit alternate bytes */
    constexpr std::uint32_t OCTOSPI_WPCCR_ABSIZE_B_0x0 = 0;
        /** @brief 16-bit alternate bytes */
    constexpr std::uint32_t OCTOSPI_WPCCR_ABSIZE_B_0x1 = 1;
        /** @brief 24-bit alternate bytes */
    constexpr std::uint32_t OCTOSPI_WPCCR_ABSIZE_B_0x2 = 2;
        /** @brief 32-bit alternate bytes */
    constexpr std::uint32_t OCTOSPI_WPCCR_ABSIZE_B_0x3 = 3;

    /** @brief Data mode This field defines the data phase mode of operation. 101-111: Reserved */
    using OCTOSPI_WPCCR_DMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No data (value: 0)
     *          - B_0x1: Data on a single line (value: 1)
     *          - B_0x2: Data on two lines (value: 2)
     *          - B_0x3: Data on four lines (value: 3)
     *          - B_0x4: Data on eight lines (value: 4)
     */
        /** @brief No data */
    constexpr std::uint32_t OCTOSPI_WPCCR_DMODE_B_0x0 = 0;
        /** @brief Data on a single line */
    constexpr std::uint32_t OCTOSPI_WPCCR_DMODE_B_0x1 = 1;
        /** @brief Data on two lines */
    constexpr std::uint32_t OCTOSPI_WPCCR_DMODE_B_0x2 = 2;
        /** @brief Data on four lines */
    constexpr std::uint32_t OCTOSPI_WPCCR_DMODE_B_0x3 = 3;
        /** @brief Data on eight lines */
    constexpr std::uint32_t OCTOSPI_WPCCR_DMODE_B_0x4 = 4;

    /** @brief Data double transfer rate This bit sets the DTR mode for the data phase. */
    using OCTOSPI_WPCCR_DDTR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DTR mode disabled for data phase (value: 0)
     *          - B_0x1: DTR mode enabled for data phase (value: 1)
     */
        /** @brief DTR mode disabled for data phase */
    constexpr std::uint32_t OCTOSPI_WPCCR_DDTR_B_0x0 = 0;
        /** @brief DTR mode enabled for data phase */
    constexpr std::uint32_t OCTOSPI_WPCCR_DDTR_B_0x1 = 1;

    /** @brief DQS enable This bit enables the data strobe management. */
    using OCTOSPI_WPCCR_DQSE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DQS disabled (value: 0)
     *          - B_0x1: DQS enabled (value: 1)
     */
        /** @brief DQS disabled */
    constexpr std::uint32_t OCTOSPI_WPCCR_DQSE_B_0x0 = 0;
        /** @brief DQS enabled */
    constexpr std::uint32_t OCTOSPI_WPCCR_DQSE_B_0x1 = 1;

    /** @brief OCTOSPI wrap timing configuration register */
    using OCTOSPI_WPTCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x148, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of dummy cycles This field defines the duration of the dummy phase. In both SDR and DTR modes, it specifies a number of CLK cycles (0-31). It is recommended to have at least 5 dummy cycles when using memories with DQS activated. */
    using OCTOSPI_WPTCR_DCYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Delay hold quarter cycle Add a quarter cycle delay on the outputs in DTR communication to match hold requirement. */
    using OCTOSPI_WPTCR_DHQC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No quarter cycle delay (value: 0)
     *          - B_0x1: Quarter cycle delay inserted (value: 1)
     */
        /** @brief No quarter cycle delay */
    constexpr std::uint32_t OCTOSPI_WPTCR_DHQC_B_0x0 = 0;
        /** @brief Quarter cycle delay inserted */
    constexpr std::uint32_t OCTOSPI_WPTCR_DHQC_B_0x1 = 1;

    /** @brief Sample shift By default, the OCTOSPI samples data 1/2 of a CLK cycle after the data is driven by the external device. This bit allows the data to be sampled later in order to consider the external signal delays. The firmware must assure that SSHIFT=0 when the data phase is configured in DTR mode (when DDTR = 1). */
    using OCTOSPI_WPTCR_SSHIFT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 30, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No shift (value: 0)
     *          - B_0x1: 1/2 cycle shift (value: 1)
     */
        /** @brief No shift */
    constexpr std::uint32_t OCTOSPI_WPTCR_SSHIFT_B_0x0 = 0;
        /** @brief 1/2 cycle shift */
    constexpr std::uint32_t OCTOSPI_WPTCR_SSHIFT_B_0x1 = 1;

    /** @brief OCTOSPI wrap instruction register */
    using OCTOSPI_WPIR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x150, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief [31: 0]: Instruction Instruction to be sent to the external SPI device */
    using OCTOSPI_WPIR_INSTRUCTION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OCTOSPI wrap alternate bytes register */
    using OCTOSPI_WPABR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x160, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief [31: 0]: Alternate bytes Optional data to be sent to the external SPI device right after the address */
    using OCTOSPI_WPABR_ALTERNATE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OCTOSPI write communication configuration register */
    using OCTOSPI_WCCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x180, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Instruction mode This field defines the instruction phase mode of operation. 101-111: Reserved */
    using OCTOSPI_WCCR_IMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No instruction (value: 0)
     *          - B_0x1: Instruction on a single line (value: 1)
     *          - B_0x2: Instruction on two lines (value: 2)
     *          - B_0x3: Instruction on four lines (value: 3)
     *          - B_0x4: Instruction on eight lines (value: 4)
     */
        /** @brief No instruction */
    constexpr std::uint32_t OCTOSPI_WCCR_IMODE_B_0x0 = 0;
        /** @brief Instruction on a single line */
    constexpr std::uint32_t OCTOSPI_WCCR_IMODE_B_0x1 = 1;
        /** @brief Instruction on two lines */
    constexpr std::uint32_t OCTOSPI_WCCR_IMODE_B_0x2 = 2;
        /** @brief Instruction on four lines */
    constexpr std::uint32_t OCTOSPI_WCCR_IMODE_B_0x3 = 3;
        /** @brief Instruction on eight lines */
    constexpr std::uint32_t OCTOSPI_WCCR_IMODE_B_0x4 = 4;

    /** @brief Instruction double transfer rate This bit sets the DTR mode for the instruction phase. */
    using OCTOSPI_WCCR_IDTR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DTR mode disabled for instruction phase (value: 0)
     *          - B_0x1: DTR mode enabled for instruction phase (value: 1)
     */
        /** @brief DTR mode disabled for instruction phase */
    constexpr std::uint32_t OCTOSPI_WCCR_IDTR_B_0x0 = 0;
        /** @brief DTR mode enabled for instruction phase */
    constexpr std::uint32_t OCTOSPI_WCCR_IDTR_B_0x1 = 1;

    /** @brief Instruction size This bit defines instruction size: */
    using OCTOSPI_WCCR_ISIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 8-bit instruction (value: 0)
     *          - B_0x1: 16-bit instruction (value: 1)
     *          - B_0x2: 24-bit instruction (value: 2)
     *          - B_0x3: 32-bit instruction (value: 3)
     */
        /** @brief 8-bit instruction */
    constexpr std::uint32_t OCTOSPI_WCCR_ISIZE_B_0x0 = 0;
        /** @brief 16-bit instruction */
    constexpr std::uint32_t OCTOSPI_WCCR_ISIZE_B_0x1 = 1;
        /** @brief 24-bit instruction */
    constexpr std::uint32_t OCTOSPI_WCCR_ISIZE_B_0x2 = 2;
        /** @brief 32-bit instruction */
    constexpr std::uint32_t OCTOSPI_WCCR_ISIZE_B_0x3 = 3;

    /** @brief Address mode This field defines the address phase mode of operation. 101-111: Reserved */
    using OCTOSPI_WCCR_ADMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No address (value: 0)
     *          - B_0x1: Address on a single line (value: 1)
     *          - B_0x2: Address on two lines (value: 2)
     *          - B_0x3: Address on four lines (value: 3)
     *          - B_0x4: Address on eight lines (value: 4)
     */
        /** @brief No address */
    constexpr std::uint32_t OCTOSPI_WCCR_ADMODE_B_0x0 = 0;
        /** @brief Address on a single line */
    constexpr std::uint32_t OCTOSPI_WCCR_ADMODE_B_0x1 = 1;
        /** @brief Address on two lines */
    constexpr std::uint32_t OCTOSPI_WCCR_ADMODE_B_0x2 = 2;
        /** @brief Address on four lines */
    constexpr std::uint32_t OCTOSPI_WCCR_ADMODE_B_0x3 = 3;
        /** @brief Address on eight lines */
    constexpr std::uint32_t OCTOSPI_WCCR_ADMODE_B_0x4 = 4;

    /** @brief Address double transfer rate This bit sets the DTR mode for the address phase. */
    using OCTOSPI_WCCR_ADDTR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DTR mode disabled for address phase (value: 0)
     *          - B_0x1: DTR mode enabled for address phase (value: 1)
     */
        /** @brief DTR mode disabled for address phase */
    constexpr std::uint32_t OCTOSPI_WCCR_ADDTR_B_0x0 = 0;
        /** @brief DTR mode enabled for address phase */
    constexpr std::uint32_t OCTOSPI_WCCR_ADDTR_B_0x1 = 1;

    /** @brief Address size This field defines address size. */
    using OCTOSPI_WCCR_ADSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 8-bit address (value: 0)
     *          - B_0x1: 16-bit address (value: 1)
     *          - B_0x2: 24-bit address (value: 2)
     *          - B_0x3: 32-bit address (value: 3)
     */
        /** @brief 8-bit address */
    constexpr std::uint32_t OCTOSPI_WCCR_ADSIZE_B_0x0 = 0;
        /** @brief 16-bit address */
    constexpr std::uint32_t OCTOSPI_WCCR_ADSIZE_B_0x1 = 1;
        /** @brief 24-bit address */
    constexpr std::uint32_t OCTOSPI_WCCR_ADSIZE_B_0x2 = 2;
        /** @brief 32-bit address */
    constexpr std::uint32_t OCTOSPI_WCCR_ADSIZE_B_0x3 = 3;

    /** @brief Alternate-byte mode This field defines the alternate-byte phase mode of operation. 101-111: Reserved */
    using OCTOSPI_WCCR_ABMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No alternate bytes (value: 0)
     *          - B_0x1: Alternate bytes on a single line (value: 1)
     *          - B_0x2: Alternate bytes on two lines (value: 2)
     *          - B_0x3: Alternate bytes on four lines (value: 3)
     *          - B_0x4: Alternate bytes on eight lines (value: 4)
     */
        /** @brief No alternate bytes */
    constexpr std::uint32_t OCTOSPI_WCCR_ABMODE_B_0x0 = 0;
        /** @brief Alternate bytes on a single line */
    constexpr std::uint32_t OCTOSPI_WCCR_ABMODE_B_0x1 = 1;
        /** @brief Alternate bytes on two lines */
    constexpr std::uint32_t OCTOSPI_WCCR_ABMODE_B_0x2 = 2;
        /** @brief Alternate bytes on four lines */
    constexpr std::uint32_t OCTOSPI_WCCR_ABMODE_B_0x3 = 3;
        /** @brief Alternate bytes on eight lines */
    constexpr std::uint32_t OCTOSPI_WCCR_ABMODE_B_0x4 = 4;

    /** @brief Alternate bytes double transfer rate This bit sets the DTR mode for the alternate-bytes phase. */
    using OCTOSPI_WCCR_ABDTR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DTR mode disabled for alternate-bytes phase (value: 0)
     *          - B_0x1: DTR mode enabled for alternate-bytes phase (value: 1)
     */
        /** @brief DTR mode disabled for alternate-bytes phase */
    constexpr std::uint32_t OCTOSPI_WCCR_ABDTR_B_0x0 = 0;
        /** @brief DTR mode enabled for alternate-bytes phase */
    constexpr std::uint32_t OCTOSPI_WCCR_ABDTR_B_0x1 = 1;

    /** @brief Alternate bytes size This field defines alternate bytes size: */
    using OCTOSPI_WCCR_ABSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: 8-bit alternate bytes (value: 0)
     *          - B_0x1: 16-bit alternate bytes (value: 1)
     *          - B_0x2: 24-bit alternate bytes (value: 2)
     *          - B_0x3: 32-bit alternate bytes (value: 3)
     */
        /** @brief 8-bit alternate bytes */
    constexpr std::uint32_t OCTOSPI_WCCR_ABSIZE_B_0x0 = 0;
        /** @brief 16-bit alternate bytes */
    constexpr std::uint32_t OCTOSPI_WCCR_ABSIZE_B_0x1 = 1;
        /** @brief 24-bit alternate bytes */
    constexpr std::uint32_t OCTOSPI_WCCR_ABSIZE_B_0x2 = 2;
        /** @brief 32-bit alternate bytes */
    constexpr std::uint32_t OCTOSPI_WCCR_ABSIZE_B_0x3 = 3;

    /** @brief Data mode This field defines the data phase mode of operation. 101-111: Reserved */
    using OCTOSPI_WCCR_DMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No data (value: 0)
     *          - B_0x1: Data on a single line (value: 1)
     *          - B_0x2: Data on two lines (value: 2)
     *          - B_0x3: Data on four lines (value: 3)
     *          - B_0x4: Data on eight lines (value: 4)
     */
        /** @brief No data */
    constexpr std::uint32_t OCTOSPI_WCCR_DMODE_B_0x0 = 0;
        /** @brief Data on a single line */
    constexpr std::uint32_t OCTOSPI_WCCR_DMODE_B_0x1 = 1;
        /** @brief Data on two lines */
    constexpr std::uint32_t OCTOSPI_WCCR_DMODE_B_0x2 = 2;
        /** @brief Data on four lines */
    constexpr std::uint32_t OCTOSPI_WCCR_DMODE_B_0x3 = 3;
        /** @brief Data on eight lines */
    constexpr std::uint32_t OCTOSPI_WCCR_DMODE_B_0x4 = 4;

    /** @brief data double transfer rate This bit sets the DTR mode for the data phase. */
    using OCTOSPI_WCCR_DDTR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DTR mode disabled for data phase (value: 0)
     *          - B_0x1: DTR mode enabled for data phase (value: 1)
     */
        /** @brief DTR mode disabled for data phase */
    constexpr std::uint32_t OCTOSPI_WCCR_DDTR_B_0x0 = 0;
        /** @brief DTR mode enabled for data phase */
    constexpr std::uint32_t OCTOSPI_WCCR_DDTR_B_0x1 = 1;

    /** @brief DQS enable This bit enables the data strobe management. */
    using OCTOSPI_WCCR_DQSE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DQS disabled (value: 0)
     *          - B_0x1: DQS enabled (value: 1)
     */
        /** @brief DQS disabled */
    constexpr std::uint32_t OCTOSPI_WCCR_DQSE_B_0x0 = 0;
        /** @brief DQS enabled */
    constexpr std::uint32_t OCTOSPI_WCCR_DQSE_B_0x1 = 1;

    /** @brief OCTOSPI write timing configuration register */
    using OCTOSPI_WTCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x188, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Number of dummy cycles This field defines the duration of the dummy phase. In both SDR and DTR modes, it specifies a number of CLK cycles (0-31). It is recommended to have at least 5 dummy cycles when using memories with DQS activated. */
    using OCTOSPI_WTCR_DCYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OCTOSPI write instruction register */
    using OCTOSPI_WIR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x190, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Instruction Instruction to be sent to the external SPI device */
    using OCTOSPI_WIR_INSTRUCTION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OCTOSPI write alternate bytes register */
    using OCTOSPI_WABR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief [31: 0]: Alternate bytes Optional data to be sent to the external SPI device right after the address */
    using OCTOSPI_WABR_ALTERNATE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OCTOSPI HyperBus latency configuration register */
    using OCTOSPI_HLCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x200, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Latency mode This bit selects the Latency mode. */
    using OCTOSPI_HLCR_LM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Variable initial latency (value: 0)
     *          - B_0x1: Fixed latency (value: 1)
     */
        /** @brief Variable initial latency */
    constexpr std::uint32_t OCTOSPI_HLCR_LM_B_0x0 = 0;
        /** @brief Fixed latency */
    constexpr std::uint32_t OCTOSPI_HLCR_LM_B_0x1 = 1;

    /** @brief Write zero latency This bit enables zero latency on write operations. */
    using OCTOSPI_HLCR_WZL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Latency on write accesses (value: 0)
     *          - B_0x1: No latency on write accesses (value: 1)
     */
        /** @brief Latency on write accesses */
    constexpr std::uint32_t OCTOSPI_HLCR_WZL_B_0x0 = 0;
        /** @brief No latency on write accesses */
    constexpr std::uint32_t OCTOSPI_HLCR_WZL_B_0x1 = 1;

    /** @brief [7: 0]: Access time Device access time expressed in number of communication clock cycles */
    using OCTOSPI_HLCR_TACC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Read write recovery time Device read write recovery time expressed in number of communication clock cycles */
    using OCTOSPI_HLCR_TRWR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
