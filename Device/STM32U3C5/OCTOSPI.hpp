/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32U3C5_OCTOSPI_HPP
#define EMBEDDED_PP_STM32U3C5_OCTOSPI_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief OCTOSPI register block */
namespace STM32U3C5::OCTOSPI {

    /** @brief OCTOSPI control register */
    using OCTOSPI_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Enable */
    using OCTOSPI_CR_EN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: OCTOSPI disabled (value: 0)
     *          - B_0x1: OCTOSPI enabled (value: 1)
     */
        /** @brief OCTOSPI disabled */
    constexpr std::uint32_t OCTOSPI_CR_EN_B_0x0 = 0;
        /** @brief OCTOSPI enabled */
    constexpr std::uint32_t OCTOSPI_CR_EN_B_0x1 = 1;

    /** @brief Abort request */
    using OCTOSPI_CR_ABORT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No abort requested (value: 0)
     *          - B_0x1: Abort requested (value: 1)
     */
        /** @brief No abort requested */
    constexpr std::uint32_t OCTOSPI_CR_ABORT_B_0x0 = 0;
        /** @brief Abort requested */
    constexpr std::uint32_t OCTOSPI_CR_ABORT_B_0x1 = 1;

    /** @brief DMA enable */
    using OCTOSPI_CR_DMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DMA disabled for indirect mode (value: 0)
     *          - B_0x1: DMA enabled for indirect mode (value: 1)
     */
        /** @brief DMA disabled for indirect mode */
    constexpr std::uint32_t OCTOSPI_CR_DMAEN_B_0x0 = 0;
        /** @brief DMA enabled for indirect mode */
    constexpr std::uint32_t OCTOSPI_CR_DMAEN_B_0x1 = 1;

    /** @brief Timeout counter enable */
    using OCTOSPI_CR_TCEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: The timeout counter is disabled, and thus the chip-select (NCS) remains active indefinitely after an access in memory-mapped mode. (value: 0)
     *          - B_0x1: The timeout counter is enabled, and thus the chip-select is released in the memory-mapped mode after TIMEOUT[15:0] cycles of external device inactivity. (value: 1)
     */
        /** @brief The timeout counter is disabled, and thus the chip-select (NCS) remains active indefinitely after an access in memory-mapped mode. */
    constexpr std::uint32_t OCTOSPI_CR_TCEN_B_0x0 = 0;
        /** @brief The timeout counter is enabled, and thus the chip-select is released in the memory-mapped mode after TIMEOUT[15:0] cycles of external device inactivity. */
    constexpr std::uint32_t OCTOSPI_CR_TCEN_B_0x1 = 1;

    /** @brief Dual-memory configuration */
    using OCTOSPI_CR_DMM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Dual-memory configuration disabled (value: 0)
     *          - B_0x1: Dual-memory configuration enabled (value: 1)
     */
        /** @brief Dual-memory configuration disabled */
    constexpr std::uint32_t OCTOSPI_CR_DMM_B_0x0 = 0;
        /** @brief Dual-memory configuration enabled */
    constexpr std::uint32_t OCTOSPI_CR_DMM_B_0x1 = 1;

    /** @brief External memory select */
    using OCTOSPI_CR_MSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: External memory 1 selected (data exchanged over IO[3:0]) (value: 0)
     *          - B_0x1: External memory 2 selected (data exchanged over IO[7:4]) (value: 1)
     */
        /** @brief External memory 1 selected (data exchanged over IO[3:0]) */
    constexpr std::uint32_t OCTOSPI_CR_MSEL_B_0x0 = 0;
        /** @brief External memory 2 selected (data exchanged over IO[7:4]) */
    constexpr std::uint32_t OCTOSPI_CR_MSEL_B_0x1 = 1;

    /** @brief FIFO threshold level */
    using OCTOSPI_CR_FTHRES = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: FTF is set if there are one or more free bytes available to be written to in the FIFO inindirect-write mode, or if there are one or more valid bytes can be read from the FIFO inindirect-read mode. (value: 0)
     *          - B_0x1: FTF is set if there are two or more free bytes available to be written to in the FIFO inindirect-write mode, or if there are two or more valid bytes can be read from the FIFO inindirect-read mode. (value: 1)
     *          - B_0x1F: FTF is set if there are 32 free bytes available to be written to in the FIFO in indirect-write mode, or if there are 32 valid bytes can be read from the FIFO in indirect-read mode. (value: 31)
     */
        /** @brief FTF is set if there are one or more free bytes available to be written to in the FIFO inindirect-write mode, or if there are one or more valid bytes can be read from the FIFO inindirect-read mode. */
    constexpr std::uint32_t OCTOSPI_CR_FTHRES_B_0x0 = 0;
        /** @brief FTF is set if there are two or more free bytes available to be written to in the FIFO inindirect-write mode, or if there are two or more valid bytes can be read from the FIFO inindirect-read mode. */
    constexpr std::uint32_t OCTOSPI_CR_FTHRES_B_0x1 = 1;
        /** @brief FTF is set if there are 32 free bytes available to be written to in the FIFO in indirect-write mode, or if there are 32 valid bytes can be read from the FIFO in indirect-read mode. */
    constexpr std::uint32_t OCTOSPI_CR_FTHRES_B_0x1F = 31;

    /** @brief Transfer error interrupt enable */
    using OCTOSPI_CR_TEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t OCTOSPI_CR_TEIE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t OCTOSPI_CR_TEIE_B_0x1 = 1;

    /** @brief Transfer complete interrupt enable */
    using OCTOSPI_CR_TCIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 17, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t OCTOSPI_CR_TCIE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t OCTOSPI_CR_TCIE_B_0x1 = 1;

    /** @brief FIFO threshold interrupt enable */
    using OCTOSPI_CR_FTIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 18, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t OCTOSPI_CR_FTIE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t OCTOSPI_CR_FTIE_B_0x1 = 1;

    /** @brief Status-match interrupt enable */
    using OCTOSPI_CR_SMIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t OCTOSPI_CR_SMIE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t OCTOSPI_CR_SMIE_B_0x1 = 1;

    /** @brief Timeout interrupt enable */
    using OCTOSPI_CR_TOIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt disabled (value: 0)
     *          - B_0x1: Interrupt enabled (value: 1)
     */
        /** @brief Interrupt disabled */
    constexpr std::uint32_t OCTOSPI_CR_TOIE_B_0x0 = 0;
        /** @brief Interrupt enabled */
    constexpr std::uint32_t OCTOSPI_CR_TOIE_B_0x1 = 1;

    /** @brief Automatic status-polling mode stop */
    using OCTOSPI_CR_APMS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 22, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Automatic status-polling mode is stopped only by abort or by disabling the OCTOSPI. (value: 0)
     *          - B_0x1: Automatic status-polling mode stops as soon as there is a match. (value: 1)
     */
        /** @brief Automatic status-polling mode is stopped only by abort or by disabling the OCTOSPI. */
    constexpr std::uint32_t OCTOSPI_CR_APMS_B_0x0 = 0;
        /** @brief Automatic status-polling mode stops as soon as there is a match. */
    constexpr std::uint32_t OCTOSPI_CR_APMS_B_0x1 = 1;

    /** @brief Polling match mode */
    using OCTOSPI_CR_PMM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 23, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: AND-match mode, SMF is set if all the unmasked bits received from the device match the corresponding bits in the match register. (value: 0)
     *          - B_0x1: OR-match mode, SMF is set if any of the unmasked bits received from the device matches its corresponding bit in the match register. (value: 1)
     */
        /** @brief AND-match mode, SMF is set if all the unmasked bits received from the device match the corresponding bits in the match register. */
    constexpr std::uint32_t OCTOSPI_CR_PMM_B_0x0 = 0;
        /** @brief OR-match mode, SMF is set if any of the unmasked bits received from the device matches its corresponding bit in the match register. */
    constexpr std::uint32_t OCTOSPI_CR_PMM_B_0x1 = 1;

    /** @brief Functional mode */
    using OCTOSPI_CR_FMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Indirect-write mode (value: 0)
     *          - B_0x1: Indirect-read mode (value: 1)
     *          - B_0x2: Automatic status-polling mode (relevant in regular-command protocol only) (value: 2)
     *          - B_0x3: Memory-mapped mode (value: 3)
     */
        /** @brief Indirect-write mode */
    constexpr std::uint32_t OCTOSPI_CR_FMODE_B_0x0 = 0;
        /** @brief Indirect-read mode */
    constexpr std::uint32_t OCTOSPI_CR_FMODE_B_0x1 = 1;
        /** @brief Automatic status-polling mode (relevant in regular-command protocol only) */
    constexpr std::uint32_t OCTOSPI_CR_FMODE_B_0x2 = 2;
        /** @brief Memory-mapped mode */
    constexpr std::uint32_t OCTOSPI_CR_FMODE_B_0x3 = 3;

    /** @brief OCTOSPI device configuration register 1 */
    using OCTOSPI_DCR1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clock mode 0/mode 3 */
    using OCTOSPI_DCR1_CKMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CLK must stay low while NCS is high (chip-select released). (value: 0)
     *          - B_0x1: CLK must stay high while NCS is high (chip-select released). (value: 1)
     */
        /** @brief CLK must stay low while NCS is high (chip-select released). */
    constexpr std::uint32_t OCTOSPI_DCR1_CKMODE_B_0x0 = 0;
        /** @brief CLK must stay high while NCS is high (chip-select released). */
    constexpr std::uint32_t OCTOSPI_DCR1_CKMODE_B_0x1 = 1;

    /** @brief Free running clock */
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
     *          - B_0x1: The delay block is bypassed, so the internal sampling clock or the DQS data strobe external signal is not affected by the delay block. (value: 1)
     */
        /** @brief The internal sampling clock (called feedback clock) or the DQS data strobe external signal is delayed by the delay block (for more details on this block, refer to the dedicated section of the reference manual as it is not part of the OCTOSPI peripheral). */
    constexpr std::uint32_t OCTOSPI_DCR1_DLYBYP_B_0x0 = 0;
        /** @brief The delay block is bypassed, so the internal sampling clock or the DQS data strobe external signal is not affected by the delay block. */
    constexpr std::uint32_t OCTOSPI_DCR1_DLYBYP_B_0x1 = 1;

    /** @brief Chip-select high time */
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

    /** @brief Device size */
    using OCTOSPI_DCR1_DEVSIZE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Memory type */
    using OCTOSPI_DCR1_MTYP = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Micron mode, D0/D1 ordering in DTR 8-data-bit mode. (value: 0)
     *          - B_0x1: Macronix mode, D1/D0 ordering in DTR 8-data-bit mode. (value: 1)
     *          - B_0x2: Standard mode (value: 2)
     *          - B_0x3: Macronix RAM mode, D1/D0 ordering in DTR 8-data-bit mode. (value: 3)
     *          - B_0x4: HyperBus memory mode, the protocol follows the HyperBusless thansup> less than/sup>specification. (value: 4)
     *          - B_0x5: HyperBus register mode, addressing register space. (value: 5)
     */
        /** @brief Micron mode, D0/D1 ordering in DTR 8-data-bit mode. */
    constexpr std::uint32_t OCTOSPI_DCR1_MTYP_B_0x0 = 0;
        /** @brief Macronix mode, D1/D0 ordering in DTR 8-data-bit mode. */
    constexpr std::uint32_t OCTOSPI_DCR1_MTYP_B_0x1 = 1;
        /** @brief Standard mode */
    constexpr std::uint32_t OCTOSPI_DCR1_MTYP_B_0x2 = 2;
        /** @brief Macronix RAM mode, D1/D0 ordering in DTR 8-data-bit mode. */
    constexpr std::uint32_t OCTOSPI_DCR1_MTYP_B_0x3 = 3;
        /** @brief HyperBus memory mode, the protocol follows the HyperBusless thansup> less than/sup>specification. */
    constexpr std::uint32_t OCTOSPI_DCR1_MTYP_B_0x4 = 4;
        /** @brief HyperBus register mode, addressing register space. */
    constexpr std::uint32_t OCTOSPI_DCR1_MTYP_B_0x5 = 5;

    /** @brief OCTOSPI device configuration register 2 */
    using OCTOSPI_DCR2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clock prescaler */
    using OCTOSPI_DCR2_PRESCALER = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Fless thansub>CLKless than/sub> = Fless thansub>KERNELless than/sub>, kernel clock used directly as OCTOSPI CLK (prescaler bypassed). (value: 0)
     *          - B_0x1: Fless thansub>CLKless than/sub> = Fless thansub>KERNELless than/sub>/2 (value: 1)
     */
        /** @brief Fless thansub>CLKless than/sub> = Fless thansub>KERNELless than/sub>, kernel clock used directly as OCTOSPI CLK (prescaler bypassed). */
    constexpr std::uint32_t OCTOSPI_DCR2_PRESCALER_B_0x0 = 0;
        /** @brief Fless thansub>CLKless than/sub> = Fless thansub>KERNELless than/sub>/2 */
    constexpr std::uint32_t OCTOSPI_DCR2_PRESCALER_B_0x1 = 1;

    /** @brief Wrap size */
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
    /** @brief NCS boundary */
    using OCTOSPI_DCR3_CSBOUND = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: NCS boundary disabled (value: 0)
     */
        /** @brief NCS boundary disabled */
    constexpr std::uint32_t OCTOSPI_DCR3_CSBOUND_B_0x0 = 0;

    /** @brief OCTOSPI device configuration register 4 */
    using OCTOSPI_DCR4 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Refresh rate */
    using OCTOSPI_DCR4_REFRESH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Refresh disabled (value: 0)
     */
        /** @brief Refresh disabled */
    constexpr std::uint32_t OCTOSPI_DCR4_REFRESH_B_0x0 = 0;

    /** @brief OCTOSPI status register */
    using OCTOSPI_SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x20, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer error flag */
    using OCTOSPI_SR_TEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Transfer complete flag */
    using OCTOSPI_SR_TCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FIFO threshold flag */
    using OCTOSPI_SR_FTF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Status match flag */
    using OCTOSPI_SR_SMF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timeout flag */
    using OCTOSPI_SR_TOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Busy */
    using OCTOSPI_SR_BUSY = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief FIFO level */
    using OCTOSPI_SR_FLEVEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 6, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OCTOSPI flag clear register */
    using OCTOSPI_FCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear transfer error flag */
    using OCTOSPI_FCR_CTEF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear transfer complete flag */
    using OCTOSPI_FCR_CTCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear status match flag */
    using OCTOSPI_FCR_CSMF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Clear timeout flag */
    using OCTOSPI_FCR_CTOF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OCTOSPI data length register */
    using OCTOSPI_DLR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x40, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data length */
    using OCTOSPI_DLR_DL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OCTOSPI address register */
    using OCTOSPI_AR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x48, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Address */
    using OCTOSPI_AR_ADDRESS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OCTOSPI data register */
    using OCTOSPI_DR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x50, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Data */
    using OCTOSPI_DR_DATA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OCTOSPI polling status mask register */
    using OCTOSPI_PSMKR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x80, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Status mask */
    using OCTOSPI_PSMKR_MASK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Bit n of the data received in automatic status-polling mode is masked and its value is not considered in the matching logic. (value: 0)
     *          - B_0x1: Bit n of the data received in automatic status-polling mode is unmasked and its value is considered in the matching logic. (value: 1)
     */
        /** @brief Bit n of the data received in automatic status-polling mode is masked and its value is not considered in the matching logic. */
    constexpr std::uint32_t OCTOSPI_PSMKR_MASK_B_0x0 = 0;
        /** @brief Bit n of the data received in automatic status-polling mode is unmasked and its value is considered in the matching logic. */
    constexpr std::uint32_t OCTOSPI_PSMKR_MASK_B_0x1 = 1;

    /** @brief OCTOSPI polling status match register */
    using OCTOSPI_PSMAR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x88, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Status match */
    using OCTOSPI_PSMAR_MATCH = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OCTOSPI polling interval register */
    using OCTOSPI_PIR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x90, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Polling interval */
    using OCTOSPI_PIR_INTERVAL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OCTOSPI communication configuration register */
    using OCTOSPI_CCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x100, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Instruction mode */
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

    /** @brief Instruction double transfer rate */
    using OCTOSPI_CCR_IDTR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DTR mode disabled for the instruction phase (value: 0)
     *          - B_0x1: DTR mode enabled for the instruction phase (value: 1)
     */
        /** @brief DTR mode disabled for the instruction phase */
    constexpr std::uint32_t OCTOSPI_CCR_IDTR_B_0x0 = 0;
        /** @brief DTR mode enabled for the instruction phase */
    constexpr std::uint32_t OCTOSPI_CCR_IDTR_B_0x1 = 1;

    /** @brief Instruction size */
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

    /** @brief Address mode */
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

    /** @brief Address double transfer rate */
    using OCTOSPI_CCR_ADDTR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DTR mode disabled for the address phase (value: 0)
     *          - B_0x1: DTR mode enabled for the address phase (value: 1)
     */
        /** @brief DTR mode disabled for the address phase */
    constexpr std::uint32_t OCTOSPI_CCR_ADDTR_B_0x0 = 0;
        /** @brief DTR mode enabled for the address phase */
    constexpr std::uint32_t OCTOSPI_CCR_ADDTR_B_0x1 = 1;

    /** @brief Address size */
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

    /** @brief Alternate-byte mode */
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

    /** @brief Alternate- byte double transfer rate */
    using OCTOSPI_CCR_ABDTR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DTR mode disabled for the alternate-byte phase (value: 0)
     *          - B_0x1: DTR mode enabled for the alternate-byte phase (value: 1)
     */
        /** @brief DTR mode disabled for the alternate-byte phase */
    constexpr std::uint32_t OCTOSPI_CCR_ABDTR_B_0x0 = 0;
        /** @brief DTR mode enabled for the alternate-byte phase */
    constexpr std::uint32_t OCTOSPI_CCR_ABDTR_B_0x1 = 1;

    /** @brief Alternate-byte size */
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

    /** @brief Data mode */
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

    /** @brief Data double transfer rate */
    using OCTOSPI_CCR_DDTR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DTR mode disabled for data phase (value: 0)
     *          - B_0x1: DTR mode enabled for data phase (value: 1)
     */
        /** @brief DTR mode disabled for data phase */
    constexpr std::uint32_t OCTOSPI_CCR_DDTR_B_0x0 = 0;
        /** @brief DTR mode enabled for data phase */
    constexpr std::uint32_t OCTOSPI_CCR_DDTR_B_0x1 = 1;

    /** @brief DQS enable */
    using OCTOSPI_CCR_DQSE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 29, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DQS disabled (value: 0)
     *          - B_0x1: DQS enabled (value: 1)
     */
        /** @brief DQS disabled */
    constexpr std::uint32_t OCTOSPI_CCR_DQSE_B_0x0 = 0;
        /** @brief DQS enabled */
    constexpr std::uint32_t OCTOSPI_CCR_DQSE_B_0x1 = 1;

    /** @brief Send instruction only once mode */
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
    /** @brief Number of dummy cycles */
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

    /** @brief Sample shift */
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
    /** @brief Instruction */
    using OCTOSPI_IR_INSTRUCTION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OCTOSPI alternate bytes register */
    using OCTOSPI_ABR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x120, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alternate bytes */
    using OCTOSPI_ABR_ALTERNATE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OCTOSPI low-power timeout register */
    using OCTOSPI_LPTR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x130, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Timeout period */
    using OCTOSPI_LPTR_TIMEOUT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OCTOSPI wrap communication configuration register */
    using OCTOSPI_WPCCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x140, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Instruction mode */
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

    /** @brief Instruction double transfer rate */
    using OCTOSPI_WPCCR_IDTR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DTR mode disabled for the instruction phase (value: 0)
     *          - B_0x1: DTR mode enabled for the instruction phase (value: 1)
     */
        /** @brief DTR mode disabled for the instruction phase */
    constexpr std::uint32_t OCTOSPI_WPCCR_IDTR_B_0x0 = 0;
        /** @brief DTR mode enabled for the instruction phase */
    constexpr std::uint32_t OCTOSPI_WPCCR_IDTR_B_0x1 = 1;

    /** @brief Instruction size */
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

    /** @brief Address mode */
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

    /** @brief Address double transfer rate */
    using OCTOSPI_WPCCR_ADDTR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DTR mode disabled for address phase (value: 0)
     *          - B_0x1: DTR mode enabled for address phase (value: 1)
     */
        /** @brief DTR mode disabled for address phase */
    constexpr std::uint32_t OCTOSPI_WPCCR_ADDTR_B_0x0 = 0;
        /** @brief DTR mode enabled for address phase */
    constexpr std::uint32_t OCTOSPI_WPCCR_ADDTR_B_0x1 = 1;

    /** @brief Address size */
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

    /** @brief Alternate-byte mode */
    using OCTOSPI_WPCCR_ABMODE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: no alternate bytes (value: 0)
     *          - B_0x1: alternate bytes on a single line (value: 1)
     *          - B_0x2: alternate bytes on two lines (value: 2)
     *          - B_0x3: alternate bytes on four lines (value: 3)
     *          - B_0x4: alternate bytes on eight lines (value: 4)
     */
        /** @brief no alternate bytes */
    constexpr std::uint32_t OCTOSPI_WPCCR_ABMODE_B_0x0 = 0;
        /** @brief alternate bytes on a single line */
    constexpr std::uint32_t OCTOSPI_WPCCR_ABMODE_B_0x1 = 1;
        /** @brief alternate bytes on two lines */
    constexpr std::uint32_t OCTOSPI_WPCCR_ABMODE_B_0x2 = 2;
        /** @brief alternate bytes on four lines */
    constexpr std::uint32_t OCTOSPI_WPCCR_ABMODE_B_0x3 = 3;
        /** @brief alternate bytes on eight lines */
    constexpr std::uint32_t OCTOSPI_WPCCR_ABMODE_B_0x4 = 4;

    /** @brief Alternate-byte double transfer rate */
    using OCTOSPI_WPCCR_ABDTR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DTR mode disabled for the alternate-byte phase (value: 0)
     *          - B_0x1: DTR mode enabled for the alternate-byte phase (value: 1)
     */
        /** @brief DTR mode disabled for the alternate-byte phase */
    constexpr std::uint32_t OCTOSPI_WPCCR_ABDTR_B_0x0 = 0;
        /** @brief DTR mode enabled for the alternate-byte phase */
    constexpr std::uint32_t OCTOSPI_WPCCR_ABDTR_B_0x1 = 1;

    /** @brief Alternate-byte size */
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

    /** @brief Data mode */
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

    /** @brief Data double transfer rate */
    using OCTOSPI_WPCCR_DDTR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DTR mode disabled for the data phase (value: 0)
     *          - B_0x1: DTR mode enabled for the data phase (value: 1)
     */
        /** @brief DTR mode disabled for the data phase */
    constexpr std::uint32_t OCTOSPI_WPCCR_DDTR_B_0x0 = 0;
        /** @brief DTR mode enabled for the data phase */
    constexpr std::uint32_t OCTOSPI_WPCCR_DDTR_B_0x1 = 1;

    /** @brief DQS enable */
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
    /** @brief Number of dummy cycles */
    using OCTOSPI_WPTCR_DCYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Delay hold quarter cycle */
    using OCTOSPI_WPTCR_DHQC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No quarter cycle delay (value: 0)
     *          - B_0x1: 1/4 cycle delay inserted (value: 1)
     */
        /** @brief No quarter cycle delay */
    constexpr std::uint32_t OCTOSPI_WPTCR_DHQC_B_0x0 = 0;
        /** @brief 1/4 cycle delay inserted */
    constexpr std::uint32_t OCTOSPI_WPTCR_DHQC_B_0x1 = 1;

    /** @brief Sample shift */
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
    /** @brief Instruction */
    using OCTOSPI_WPIR_INSTRUCTION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OCTOSPI wrap alternate bytes register */
    using OCTOSPI_WPABR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x160, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alternate bytes */
    using OCTOSPI_WPABR_ALTERNATE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OCTOSPI write communication configuration register */
    using OCTOSPI_WCCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x180, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Instruction mode */
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

    /** @brief Instruction double transfer rate */
    using OCTOSPI_WCCR_IDTR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DTR mode disabled for instruction phase (value: 0)
     *          - B_0x1: DTR mode enabled for instruction phase (value: 1)
     */
        /** @brief DTR mode disabled for instruction phase */
    constexpr std::uint32_t OCTOSPI_WCCR_IDTR_B_0x0 = 0;
        /** @brief DTR mode enabled for instruction phase */
    constexpr std::uint32_t OCTOSPI_WCCR_IDTR_B_0x1 = 1;

    /** @brief Instruction size */
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

    /** @brief Address mode */
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

    /** @brief Address double transfer rate */
    using OCTOSPI_WCCR_ADDTR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DTR mode disabled for the address phase (value: 0)
     *          - B_0x1: DTR mode enabled for the address phase (value: 1)
     */
        /** @brief DTR mode disabled for the address phase */
    constexpr std::uint32_t OCTOSPI_WCCR_ADDTR_B_0x0 = 0;
        /** @brief DTR mode enabled for the address phase */
    constexpr std::uint32_t OCTOSPI_WCCR_ADDTR_B_0x1 = 1;

    /** @brief Address size */
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

    /** @brief Alternate-byte mode */
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

    /** @brief Alternate bytes double transfer rate */
    using OCTOSPI_WCCR_ABDTR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 19, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DTR mode disabled for alternate-bytes phase (value: 0)
     *          - B_0x1: DTR mode enabled for alternate-bytes phase (value: 1)
     */
        /** @brief DTR mode disabled for alternate-bytes phase */
    constexpr std::uint32_t OCTOSPI_WCCR_ABDTR_B_0x0 = 0;
        /** @brief DTR mode enabled for alternate-bytes phase */
    constexpr std::uint32_t OCTOSPI_WCCR_ABDTR_B_0x1 = 1;

    /** @brief Alternate-byte size */
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

    /** @brief Data mode */
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

    /** @brief data double transfer rate */
    using OCTOSPI_WCCR_DDTR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: DTR mode disabled for the data phase (value: 0)
     *          - B_0x1: DTR mode enabled for the data phase (value: 1)
     */
        /** @brief DTR mode disabled for the data phase */
    constexpr std::uint32_t OCTOSPI_WCCR_DDTR_B_0x0 = 0;
        /** @brief DTR mode enabled for the data phase */
    constexpr std::uint32_t OCTOSPI_WCCR_DDTR_B_0x1 = 1;

    /** @brief DQS enable */
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
    /** @brief Number of dummy cycles */
    using OCTOSPI_WTCR_DCYC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 5, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OCTOSPI write instruction register */
    using OCTOSPI_WIR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x190, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Instruction */
    using OCTOSPI_WIR_INSTRUCTION = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OCTOSPI write alternate bytes register */
    using OCTOSPI_WABR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x1A0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Alternate bytes */
    using OCTOSPI_WABR_ALTERNATE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 32, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief OCTOSPI HyperBus latency configuration register */
    using OCTOSPI_HLCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x200, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Latency mode */
    using OCTOSPI_HLCR_LM = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Variable initial latency (value: 0)
     *          - B_0x1: Fixed latency (value: 1)
     */
        /** @brief Variable initial latency */
    constexpr std::uint32_t OCTOSPI_HLCR_LM_B_0x0 = 0;
        /** @brief Fixed latency */
    constexpr std::uint32_t OCTOSPI_HLCR_LM_B_0x1 = 1;

    /** @brief Write zero latency */
    using OCTOSPI_HLCR_WZL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Latency on write accesses (value: 0)
     *          - B_0x1: No latency on write accesses (value: 1)
     */
        /** @brief Latency on write accesses */
    constexpr std::uint32_t OCTOSPI_HLCR_WZL_B_0x0 = 0;
        /** @brief No latency on write accesses */
    constexpr std::uint32_t OCTOSPI_HLCR_WZL_B_0x1 = 1;

    /** @brief Access time */
    using OCTOSPI_HLCR_TACC = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Read-write minimum recovery time */
    using OCTOSPI_HLCR_TRWR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
