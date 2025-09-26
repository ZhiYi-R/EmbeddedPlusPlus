/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32N647_SPDIFRX_HPP
#define EMBEDDED_PP_STM32N647_SPDIFRX_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief SPDIF receiver interface */
namespace STM32N647::SPDIFRX {

    /** @brief SPDIFRX control register */
    using SPDIFRX_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Peripheral block enableless thansup>(1)less than/sup> */
    using SPDIFRX_CR_SPDIFRXEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable SPDIFRX (STATE_IDLE). (value: 0)
     *          - B_0x1: Enable SPDIFRX synchronization only. (value: 1)
     *          - B_0x3: Enable SPDIF receiver. (value: 3)
     */
        /** @brief Disable SPDIFRX (STATE_IDLE). */
    constexpr std::uint32_t SPDIFRX_CR_SPDIFRXEN_B_0x0 = 0;
        /** @brief Enable SPDIFRX synchronization only. */
    constexpr std::uint32_t SPDIFRX_CR_SPDIFRXEN_B_0x1 = 1;
        /** @brief Enable SPDIF receiver. */
    constexpr std::uint32_t SPDIFRX_CR_SPDIFRXEN_B_0x3 = 3;

    /** @brief Receiver DMA enable for data flowless thansup>(1)less than/sup> */
    using SPDIFRX_CR_RXDMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: DMA mode is enabled for reception. (value: 1)
     *          - B_0x0: DMA mode is disabled for reception. (value: 0)
     */
        /** @brief DMA mode is enabled for reception. */
    constexpr std::uint32_t SPDIFRX_CR_RXDMAEN_B_0x1 = 1;
        /** @brief DMA mode is disabled for reception. */
    constexpr std::uint32_t SPDIFRX_CR_RXDMAEN_B_0x0 = 0;

    /** @brief Stereo modeless thansup>(1)less than/sup> */
    using SPDIFRX_CR_RXSTEO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: The peripheral is in stereo mode. (value: 1)
     *          - B_0x0: The peripheral is in mono mode. (value: 0)
     */
        /** @brief The peripheral is in stereo mode. */
    constexpr std::uint32_t SPDIFRX_CR_RXSTEO_B_0x1 = 1;
        /** @brief The peripheral is in mono mode. */
    constexpr std::uint32_t SPDIFRX_CR_RXSTEO_B_0x0 = 0;

    /** @brief RX data formatless thansup>(1)less than/sup> */
    using SPDIFRX_CR_DRFMT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x2: Data sample are packed by setting two 16-bit sample into a 32-bit word. (value: 2)
     *          - B_0x1: Data samples are aligned in the left (MSB) (value: 1)
     *          - B_0x0: Data samples are aligned in the right (LSB). (value: 0)
     */
        /** @brief Data sample are packed by setting two 16-bit sample into a 32-bit word. */
    constexpr std::uint32_t SPDIFRX_CR_DRFMT_B_0x2 = 2;
        /** @brief Data samples are aligned in the left (MSB) */
    constexpr std::uint32_t SPDIFRX_CR_DRFMT_B_0x1 = 1;
        /** @brief Data samples are aligned in the right (LSB). */
    constexpr std::uint32_t SPDIFRX_CR_DRFMT_B_0x0 = 0;

    /** @brief Mask parity error bitless thansup>(1)less than/sup> */
    using SPDIFRX_CR_PMSK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: The parity error bit is not copied into the SPDIFRX_FMTx_DR, a zero is written instead. (value: 1)
     *          - B_0x0: The parity error bit is copied into the SPDIFRX_FMTx_DR. (value: 0)
     */
        /** @brief The parity error bit is not copied into the SPDIFRX_FMTx_DR, a zero is written instead. */
    constexpr std::uint32_t SPDIFRX_CR_PMSK_B_0x1 = 1;
        /** @brief The parity error bit is copied into the SPDIFRX_FMTx_DR. */
    constexpr std::uint32_t SPDIFRX_CR_PMSK_B_0x0 = 0;

    /** @brief Mask of validity bitless thansup>(1)less than/sup> */
    using SPDIFRX_CR_VMSK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: The validity bit is not copied into the SPDIFRX_FMTx_DR, a zero is written instead. (value: 1)
     *          - B_0x0: The validity bit is copied into the SPDIFRX_FMTx_DR. (value: 0)
     */
        /** @brief The validity bit is not copied into the SPDIFRX_FMTx_DR, a zero is written instead. */
    constexpr std::uint32_t SPDIFRX_CR_VMSK_B_0x1 = 1;
        /** @brief The validity bit is copied into the SPDIFRX_FMTx_DR. */
    constexpr std::uint32_t SPDIFRX_CR_VMSK_B_0x0 = 0;

    /** @brief Mask of channel status and user bitsless thansup>(1)less than/sup> */
    using SPDIFRX_CR_CUMSK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: The channel status and user bits are not copied into the SPDIFRX_FMTx_DR, zeros are written instead. (value: 1)
     *          - B_0x0: The channel status and user bits are copied into the SPDIFRX_FMTx_DR. (value: 0)
     */
        /** @brief The channel status and user bits are not copied into the SPDIFRX_FMTx_DR, zeros are written instead. */
    constexpr std::uint32_t SPDIFRX_CR_CUMSK_B_0x1 = 1;
        /** @brief The channel status and user bits are copied into the SPDIFRX_FMTx_DR. */
    constexpr std::uint32_t SPDIFRX_CR_CUMSK_B_0x0 = 0;

    /** @brief Mask of preamble type bitsless thansup>(1)less than/sup> */
    using SPDIFRX_CR_PTMSK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: The preamble type bits are not copied into the SPDIFRX_FMTx_DR, zeros are written instead. (value: 1)
     *          - B_0x0: The preamble type bits are copied into the SPDIFRX_FMTx_DR. (value: 0)
     */
        /** @brief The preamble type bits are not copied into the SPDIFRX_FMTx_DR, zeros are written instead. */
    constexpr std::uint32_t SPDIFRX_CR_PTMSK_B_0x1 = 1;
        /** @brief The preamble type bits are copied into the SPDIFRX_FMTx_DR. */
    constexpr std::uint32_t SPDIFRX_CR_PTMSK_B_0x0 = 0;

    /** @brief Control buffer DMA enable for control flowless thansup>(1)less than/sup> */
    using SPDIFRX_CR_CBDMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: DMA mode is enabled for reception of channel status and used data information. (value: 1)
     *          - B_0x0: DMA mode is disabled for reception of channel status and used data information. (value: 0)
     */
        /** @brief DMA mode is enabled for reception of channel status and used data information. */
    constexpr std::uint32_t SPDIFRX_CR_CBDMAEN_B_0x1 = 1;
        /** @brief DMA mode is disabled for reception of channel status and used data information. */
    constexpr std::uint32_t SPDIFRX_CR_CBDMAEN_B_0x0 = 0;

    /** @brief Channel selectionless thansup>(1)less than/sup> */
    using SPDIFRX_CR_CHSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: The control flow takes the channel status from channel B. (value: 1)
     *          - B_0x0: The control flow takes the channel status from channel A. (value: 0)
     */
        /** @brief The control flow takes the channel status from channel B. */
    constexpr std::uint32_t SPDIFRX_CR_CHSEL_B_0x1 = 1;
        /** @brief The control flow takes the channel status from channel A. */
    constexpr std::uint32_t SPDIFRX_CR_CHSEL_B_0x0 = 0;

    /** @brief Maximum allowed re-tries during synchronization phaseless thansup>(1)less than/sup> */
    using SPDIFRX_CR_NBTR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 12, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No re-try is allowed (only one attempt) (value: 0)
     *          - B_0x1: 3 re-tries allowed (value: 1)
     *          - B_0x2: 15 re-tries allowed (value: 2)
     *          - B_0x3: 63 re-tries allowed (value: 3)
     */
        /** @brief No re-try is allowed (only one attempt) */
    constexpr std::uint32_t SPDIFRX_CR_NBTR_B_0x0 = 0;
        /** @brief 3 re-tries allowed */
    constexpr std::uint32_t SPDIFRX_CR_NBTR_B_0x1 = 1;
        /** @brief 15 re-tries allowed */
    constexpr std::uint32_t SPDIFRX_CR_NBTR_B_0x2 = 2;
        /** @brief 63 re-tries allowed */
    constexpr std::uint32_t SPDIFRX_CR_NBTR_B_0x3 = 3;

    /** @brief Wait for activityless thansup>(1)less than/sup> */
    using SPDIFRX_CR_WFA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: The SPDIFRX waits for activity on SPDIFRX_IN line (4 transitions) before performing the synchronization. (value: 1)
     *          - B_0x0: The SPDIFRX does not wait for activity on SPDIFRX_IN line before performing the synchronization. (value: 0)
     */
        /** @brief The SPDIFRX waits for activity on SPDIFRX_IN line (4 transitions) before performing the synchronization. */
    constexpr std::uint32_t SPDIFRX_CR_WFA_B_0x1 = 1;
        /** @brief The SPDIFRX does not wait for activity on SPDIFRX_IN line before performing the synchronization. */
    constexpr std::uint32_t SPDIFRX_CR_WFA_B_0x0 = 0;

    /** @brief SPDIFRX input selection */
    using SPDIFRX_CR_INSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPDIFRX_IN0 selected (value: 0)
     *          - B_0x1: SPDIFRX_IN1 selected (value: 1)
     *          - B_0x2: SPDIFRX_IN2 selected (value: 2)
     *          - B_0x3: SPDIFRX_IN3 selected (value: 3)
     */
        /** @brief SPDIFRX_IN0 selected */
    constexpr std::uint32_t SPDIFRX_CR_INSEL_B_0x0 = 0;
        /** @brief SPDIFRX_IN1 selected */
    constexpr std::uint32_t SPDIFRX_CR_INSEL_B_0x1 = 1;
        /** @brief SPDIFRX_IN2 selected */
    constexpr std::uint32_t SPDIFRX_CR_INSEL_B_0x2 = 2;
        /** @brief SPDIFRX_IN3 selected */
    constexpr std::uint32_t SPDIFRX_CR_INSEL_B_0x3 = 3;

    /** @brief Symbol clock enable */
    using SPDIFRX_CR_CKSEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: The SPDIFRX generates a symbol clock. (value: 1)
     *          - B_0x0: The SPDIFRX does not generate a symbol clock. (value: 0)
     */
        /** @brief The SPDIFRX generates a symbol clock. */
    constexpr std::uint32_t SPDIFRX_CR_CKSEN_B_0x1 = 1;
        /** @brief The SPDIFRX does not generate a symbol clock. */
    constexpr std::uint32_t SPDIFRX_CR_CKSEN_B_0x0 = 0;

    /** @brief Backup symbol clock enable */
    using SPDIFRX_CR_CKSBKPEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 21, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: The SPDIFRX generates a backup symbol clock if CKSEN = 1. (value: 1)
     *          - B_0x0: The SPDIFRX does not generate a backup symbol clock. (value: 0)
     */
        /** @brief The SPDIFRX generates a backup symbol clock if CKSEN = 1. */
    constexpr std::uint32_t SPDIFRX_CR_CKSBKPEN_B_0x1 = 1;
        /** @brief The SPDIFRX does not generate a backup symbol clock. */
    constexpr std::uint32_t SPDIFRX_CR_CKSBKPEN_B_0x0 = 0;

    /** @brief SPDIFRX interrupt mask register */
    using SPDIFRX_IMR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x4, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief RXNE interrupt enable */
    using SPDIFRX_IMR_RXNEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt is inhibited. (value: 0)
     *          - B_0x1: A SPDIFRX interface interrupt is generated whenever RXNE=1 in the SPDIFRX_SR register. (value: 1)
     */
        /** @brief Interrupt is inhibited. */
    constexpr std::uint32_t SPDIFRX_IMR_RXNEIE_B_0x0 = 0;
        /** @brief A SPDIFRX interface interrupt is generated whenever RXNE=1 in the SPDIFRX_SR register. */
    constexpr std::uint32_t SPDIFRX_IMR_RXNEIE_B_0x1 = 1;

    /** @brief Control buffer ready interrupt enable */
    using SPDIFRX_IMR_CSRNEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt is inhibited. (value: 0)
     *          - B_0x1: A SPDIFRX interface interrupt is generated whenever CSRNE = 1 in the SPDIFRX_SR register. (value: 1)
     */
        /** @brief Interrupt is inhibited. */
    constexpr std::uint32_t SPDIFRX_IMR_CSRNEIE_B_0x0 = 0;
        /** @brief A SPDIFRX interface interrupt is generated whenever CSRNE = 1 in the SPDIFRX_SR register. */
    constexpr std::uint32_t SPDIFRX_IMR_CSRNEIE_B_0x1 = 1;

    /** @brief Parity error interrupt enable */
    using SPDIFRX_IMR_PERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt is inhibited. (value: 0)
     *          - B_0x1: A SPDIFRX interface interrupt is generated whenever PERR=1 in the SPDIFRX_SR register. (value: 1)
     */
        /** @brief Interrupt is inhibited. */
    constexpr std::uint32_t SPDIFRX_IMR_PERRIE_B_0x0 = 0;
        /** @brief A SPDIFRX interface interrupt is generated whenever PERR=1 in the SPDIFRX_SR register. */
    constexpr std::uint32_t SPDIFRX_IMR_PERRIE_B_0x1 = 1;

    /** @brief Overrun error interrupt enable */
    using SPDIFRX_IMR_OVRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt is inhibited. (value: 0)
     *          - B_0x1: A SPDIFRX interface interrupt is generated whenever OVR=1 in the SPDIFRX_SR register. (value: 1)
     */
        /** @brief Interrupt is inhibited. */
    constexpr std::uint32_t SPDIFRX_IMR_OVRIE_B_0x0 = 0;
        /** @brief A SPDIFRX interface interrupt is generated whenever OVR=1 in the SPDIFRX_SR register. */
    constexpr std::uint32_t SPDIFRX_IMR_OVRIE_B_0x1 = 1;

    /** @brief Synchronization block detected interrupt enable */
    using SPDIFRX_IMR_SBLKIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt is inhibited. (value: 0)
     *          - B_0x1: A SPDIFRX interface interrupt is generated whenever SBD = 1 in the SPDIFRX_SR register. (value: 1)
     */
        /** @brief Interrupt is inhibited. */
    constexpr std::uint32_t SPDIFRX_IMR_SBLKIE_B_0x0 = 0;
        /** @brief A SPDIFRX interface interrupt is generated whenever SBD = 1 in the SPDIFRX_SR register. */
    constexpr std::uint32_t SPDIFRX_IMR_SBLKIE_B_0x1 = 1;

    /** @brief Synchronization done */
    using SPDIFRX_IMR_SYNCDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt is inhibited. (value: 0)
     *          - B_0x1: A SPDIFRX interface interrupt is generated whenever SYNCD = 1 in the SPDIFRX_SR register. (value: 1)
     */
        /** @brief Interrupt is inhibited. */
    constexpr std::uint32_t SPDIFRX_IMR_SYNCDIE_B_0x0 = 0;
        /** @brief A SPDIFRX interface interrupt is generated whenever SYNCD = 1 in the SPDIFRX_SR register. */
    constexpr std::uint32_t SPDIFRX_IMR_SYNCDIE_B_0x1 = 1;

    /** @brief Serial interface error interrupt enable */
    using SPDIFRX_IMR_IFEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt is inhibited. (value: 0)
     *          - B_0x1: A SPDIFRX interface interrupt is generated whenever SERR = 1, TERR = 1, or FERR = 1 in the SPDIFRX_SR register. (value: 1)
     */
        /** @brief Interrupt is inhibited. */
    constexpr std::uint32_t SPDIFRX_IMR_IFEIE_B_0x0 = 0;
        /** @brief A SPDIFRX interface interrupt is generated whenever SERR = 1, TERR = 1, or FERR = 1 in the SPDIFRX_SR register. */
    constexpr std::uint32_t SPDIFRX_IMR_IFEIE_B_0x1 = 1;

    /** @brief SPDIFRX status register */
    using SPDIFRX_SR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Read data register not empty */
    using SPDIFRX_SR_RXNE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Data is not received. (value: 0)
     *          - B_0x1: Received data is ready to be read. (value: 1)
     */
        /** @brief Data is not received. */
    constexpr std::uint32_t SPDIFRX_SR_RXNE_B_0x0 = 0;
        /** @brief Received data is ready to be read. */
    constexpr std::uint32_t SPDIFRX_SR_RXNE_B_0x1 = 1;

    /** @brief Control buffer register not empty */
    using SPDIFRX_SR_CSRNE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No control word available on SPDIFRX_CSR register (value: 0)
     *          - B_0x1: A control word is available on SPDIFRX_CSR register. (value: 1)
     */
        /** @brief No control word available on SPDIFRX_CSR register */
    constexpr std::uint32_t SPDIFRX_SR_CSRNE_B_0x0 = 0;
        /** @brief A control word is available on SPDIFRX_CSR register. */
    constexpr std::uint32_t SPDIFRX_SR_CSRNE_B_0x1 = 1;

    /** @brief Parity error */
    using SPDIFRX_SR_PERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No parity error (value: 0)
     *          - B_0x1: Parity error (value: 1)
     */
        /** @brief No parity error */
    constexpr std::uint32_t SPDIFRX_SR_PERR_B_0x0 = 0;
        /** @brief Parity error */
    constexpr std::uint32_t SPDIFRX_SR_PERR_B_0x1 = 1;

    /** @brief Overrun error */
    using SPDIFRX_SR_OVR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No overrun error (value: 0)
     *          - B_0x1: Overrun error is detected. (value: 1)
     */
        /** @brief No overrun error */
    constexpr std::uint32_t SPDIFRX_SR_OVR_B_0x0 = 0;
        /** @brief Overrun error is detected. */
    constexpr std::uint32_t SPDIFRX_SR_OVR_B_0x1 = 1;

    /** @brief Synchronization block detected */
    using SPDIFRX_SR_SBD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No B preamble is detected. (value: 0)
     *          - B_0x1: B preamble is detected. (value: 1)
     */
        /** @brief No B preamble is detected. */
    constexpr std::uint32_t SPDIFRX_SR_SBD_B_0x0 = 0;
        /** @brief B preamble is detected. */
    constexpr std::uint32_t SPDIFRX_SR_SBD_B_0x1 = 1;

    /** @brief Synchronization done */
    using SPDIFRX_SR_SYNCD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Synchronization is pending. (value: 0)
     *          - B_0x1: Synchronization is completed. (value: 1)
     */
        /** @brief Synchronization is pending. */
    constexpr std::uint32_t SPDIFRX_SR_SYNCD_B_0x0 = 0;
        /** @brief Synchronization is completed. */
    constexpr std::uint32_t SPDIFRX_SR_SYNCD_B_0x1 = 1;

    /** @brief Framing error */
    using SPDIFRX_SR_FERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No Manchester violation detected (value: 0)
     *          - B_0x1: Manchester violation detected (value: 1)
     */
        /** @brief No Manchester violation detected */
    constexpr std::uint32_t SPDIFRX_SR_FERR_B_0x0 = 0;
        /** @brief Manchester violation detected */
    constexpr std::uint32_t SPDIFRX_SR_FERR_B_0x1 = 1;

    /** @brief Synchronization error */
    using SPDIFRX_SR_SERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No synchronization error is detected. (value: 0)
     *          - B_0x1: Synchronization error is detected. (value: 1)
     */
        /** @brief No synchronization error is detected. */
    constexpr std::uint32_t SPDIFRX_SR_SERR_B_0x0 = 0;
        /** @brief Synchronization error is detected. */
    constexpr std::uint32_t SPDIFRX_SR_SERR_B_0x1 = 1;

    /** @brief Time-out error */
    using SPDIFRX_SR_TERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No sequence error is detected. (value: 0)
     *          - B_0x1: Sequence error is detected. (value: 1)
     */
        /** @brief No sequence error is detected. */
    constexpr std::uint32_t SPDIFRX_SR_TERR_B_0x0 = 0;
        /** @brief Sequence error is detected. */
    constexpr std::uint32_t SPDIFRX_SR_TERR_B_0x1 = 1;

    /** @brief duration of 5 symbols counted with spdifrx_ker_ck */
    using SPDIFRX_SR_WIDTH5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 15, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPDIFRX interrupt flag clear register */
    using SPDIFRX_IFCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief clears the parity error flag */
    using SPDIFRX_IFCR_PERRCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief clears the overrun error flag */
    using SPDIFRX_IFCR_OVRCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief clears the synchronization block detected flag */
    using SPDIFRX_IFCR_SBDCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief clears the synchronization done flag */
    using SPDIFRX_IFCR_SYNCDCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPDIFRX data input register */
    using SPDIFRX_FMT0_DR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief data value */
    using SPDIFRX_FMT0_DR_DR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief parity error bit */
    using SPDIFRX_FMT0_DR_PE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief validity bit */
    using SPDIFRX_FMT0_DR_V = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief user bit */
    using SPDIFRX_FMT0_DR_U = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief channel status bit */
    using SPDIFRX_FMT0_DR_C = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief preamble type */
    using SPDIFRX_FMT0_DR_PT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 28, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: not used (value: 0)
     *          - B_0x1: Preamble B received (value: 1)
     *          - B_0x2: Preamble M received (value: 2)
     *          - B_0x3: Preamble W received (value: 3)
     */
        /** @brief not used */
    constexpr std::uint32_t SPDIFRX_FMT0_DR_PT_B_0x0 = 0;
        /** @brief Preamble B received */
    constexpr std::uint32_t SPDIFRX_FMT0_DR_PT_B_0x1 = 1;
        /** @brief Preamble M received */
    constexpr std::uint32_t SPDIFRX_FMT0_DR_PT_B_0x2 = 2;
        /** @brief Preamble W received */
    constexpr std::uint32_t SPDIFRX_FMT0_DR_PT_B_0x3 = 3;

    /** @brief SPDIFRX data input register */
    using SPDIFRX_FMT1_DR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief parity error bit */
    using SPDIFRX_FMT1_DR_PE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief validity bit */
    using SPDIFRX_FMT1_DR_V = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief user bit */
    using SPDIFRX_FMT1_DR_U = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief channel Status bit */
    using SPDIFRX_FMT1_DR_C = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief preamble type */
    using SPDIFRX_FMT1_DR_PT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: not used (value: 0)
     *          - B_0x1: preamble B received (value: 1)
     *          - B_0x2: preamble M received (value: 2)
     *          - B_0x3: preamble W received (value: 3)
     */
        /** @brief not used */
    constexpr std::uint32_t SPDIFRX_FMT1_DR_PT_B_0x0 = 0;
        /** @brief preamble B received */
    constexpr std::uint32_t SPDIFRX_FMT1_DR_PT_B_0x1 = 1;
        /** @brief preamble M received */
    constexpr std::uint32_t SPDIFRX_FMT1_DR_PT_B_0x2 = 2;
        /** @brief preamble W received */
    constexpr std::uint32_t SPDIFRX_FMT1_DR_PT_B_0x3 = 3;

    /** @brief data value */
    using SPDIFRX_FMT1_DR_DR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPDIFRX data input register */
    using SPDIFRX_FMT2_DR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief data value */
    using SPDIFRX_FMT2_DR_DRNL1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief data value */
    using SPDIFRX_FMT2_DR_DRNL2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPDIFRX channel status register */
    using SPDIFRX_CSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief user data information */
    using SPDIFRX_CSR_USR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief channel A status information */
    using SPDIFRX_CSR_CS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief start of block */
    using SPDIFRX_CSR_SOB = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: CS[0] is not the first bit of a new block (value: 0)
     *          - B_0x1: CS[0] is the first bit of a new block (value: 1)
     */
        /** @brief CS[0] is not the first bit of a new block */
    constexpr std::uint32_t SPDIFRX_CSR_SOB_B_0x0 = 0;
        /** @brief CS[0] is the first bit of a new block */
    constexpr std::uint32_t SPDIFRX_CSR_SOB_B_0x1 = 1;

    /** @brief SPDIFRX debug information register */
    using SPDIFRX_DIR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x18, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief threshold HIGH (THI = 2.5 x UI / Tless thansub>spdifrx_ker_ckless than/sub>) */
    using SPDIFRX_DIR_THI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 13, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief threshold LOW (TLO = 1.5 x UI / Tless thansub>spdifrx_ker_ckless than/sub>) */
    using SPDIFRX_DIR_TLO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 13, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
