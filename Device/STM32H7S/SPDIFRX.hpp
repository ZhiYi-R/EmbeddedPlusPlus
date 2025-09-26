/* Auto-generated file. Do not edit manually. */

#ifndef EMBEDDED_PP_STM32H7S_SPDIFRX_HPP
#define EMBEDDED_PP_STM32H7S_SPDIFRX_HPP

#include <cstdint>
#include "Core/Common.hpp"
#include "Core/BitField.hpp"
#include "Core/Register.hpp"

/** @brief SPDIF receiver interface */
namespace STM32H7S::SPDIFRX {

    /** @brief SPDIFRX control register */
    using SPDIFRX_CR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x0, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief Peripheral block enable<sup>(1)</sup> This field is modified by software. It must be used to change the peripheral phase among the three possible states: STATE_IDLE, STATE_SYNC and STATE_RCV. It is not possible to transition from STATE_RCV to STATE_SYNC, the user must first go the STATE_IDLE. Note: it is possible to transition from STATE_IDLE to STATE_RCV: in that case the peripheral transitions from STATE_IDLE to STATE_SYNC and as soon as the synchronization is performed goes to STATE_RCV. */
    using SPDIFRX_CR_SPDIFRXEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Disable SPDIFRX (STATE_IDLE). (value: 0)
     *          - B_0x1: Enable SPDIFRX synchronization only. (value: 1)
     *          - B_0x2: FIELD Reserved (value: 2)
     *          - B_0x3: Enable SPDIF receiver. (value: 3)
     */
        /** @brief Disable SPDIFRX (STATE_IDLE). */
    constexpr std::uint32_t SPDIFRX_CR_SPDIFRXEN_B_0x0 = 0;
        /** @brief Enable SPDIFRX synchronization only. */
    constexpr std::uint32_t SPDIFRX_CR_SPDIFRXEN_B_0x1 = 1;
        /** @brief FIELD Reserved */
    constexpr std::uint32_t SPDIFRX_CR_SPDIFRXEN_B_0x2 = 2;
        /** @brief Enable SPDIF receiver. */
    constexpr std::uint32_t SPDIFRX_CR_SPDIFRXEN_B_0x3 = 3;

    /** @brief Receiver DMA enable for data flow<sup>(1)</sup> This bit is set/reset by software. Note: When this bit is set, the DMA request is made whenever the RXNE flag is set. */
    using SPDIFRX_CR_RXDMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: DMA mode is enabled for reception. (value: 1)
     *          - B_0x0: DMA mode is disabled for reception. (value: 0)
     */
        /** @brief DMA mode is enabled for reception. */
    constexpr std::uint32_t SPDIFRX_CR_RXDMAEN_B_0x1 = 1;
        /** @brief DMA mode is disabled for reception. */
    constexpr std::uint32_t SPDIFRX_CR_RXDMAEN_B_0x0 = 0;

    /** @brief Stereo mode<sup>(1)</sup> This bit is set/reset by software. Note: This bit is used in case of overrun situation in order to handle misalignment. */
    using SPDIFRX_CR_RXSTEO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: The peripheral is in stereo mode. (value: 1)
     *          - B_0x0: The peripheral is in mono mode. (value: 0)
     */
        /** @brief The peripheral is in stereo mode. */
    constexpr std::uint32_t SPDIFRX_CR_RXSTEO_B_0x1 = 1;
        /** @brief The peripheral is in mono mode. */
    constexpr std::uint32_t SPDIFRX_CR_RXSTEO_B_0x0 = 0;

    /** @brief RX data format<sup>(1)</sup> This bit is set/reset by software. */
    using SPDIFRX_CR_DRFMT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x3: FIELD Reserved (value: 3)
     *          - B_0x2: Data sample are packed by setting two 16-bit sample into a 32-bit word. (value: 2)
     *          - B_0x1: Data samples are aligned in the left (MSB) (value: 1)
     *          - B_0x0: Data samples are aligned in the right (LSB). (value: 0)
     */
        /** @brief FIELD Reserved */
    constexpr std::uint32_t SPDIFRX_CR_DRFMT_B_0x3 = 3;
        /** @brief Data sample are packed by setting two 16-bit sample into a 32-bit word. */
    constexpr std::uint32_t SPDIFRX_CR_DRFMT_B_0x2 = 2;
        /** @brief Data samples are aligned in the left (MSB) */
    constexpr std::uint32_t SPDIFRX_CR_DRFMT_B_0x1 = 1;
        /** @brief Data samples are aligned in the right (LSB). */
    constexpr std::uint32_t SPDIFRX_CR_DRFMT_B_0x0 = 0;

    /** @brief Mask parity error bit<sup>(1)</sup> This bit is set/reset by software. */
    using SPDIFRX_CR_PMSK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: The parity error bit is not copied into the SPDIFRX_FMTx_DR, a zero is written instead. (value: 1)
     *          - B_0x0: The parity error bit is copied into the SPDIFRX_FMTx_DR. (value: 0)
     */
        /** @brief The parity error bit is not copied into the SPDIFRX_FMTx_DR, a zero is written instead. */
    constexpr std::uint32_t SPDIFRX_CR_PMSK_B_0x1 = 1;
        /** @brief The parity error bit is copied into the SPDIFRX_FMTx_DR. */
    constexpr std::uint32_t SPDIFRX_CR_PMSK_B_0x0 = 0;

    /** @brief Mask of validity bit<sup>(1)</sup> This bit is set/reset by software. */
    using SPDIFRX_CR_VMSK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: The validity bit is not copied into the SPDIFRX_FMTx_DR, a zero is written instead. (value: 1)
     *          - B_0x0: The validity bit is copied into the SPDIFRX_FMTx_DR. (value: 0)
     */
        /** @brief The validity bit is not copied into the SPDIFRX_FMTx_DR, a zero is written instead. */
    constexpr std::uint32_t SPDIFRX_CR_VMSK_B_0x1 = 1;
        /** @brief The validity bit is copied into the SPDIFRX_FMTx_DR. */
    constexpr std::uint32_t SPDIFRX_CR_VMSK_B_0x0 = 0;

    /** @brief Mask of channel status and user bits<sup>(1)</sup> This bit is set/reset by software. */
    using SPDIFRX_CR_CUMSK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: The channel status and user bits are not copied into the SPDIFRX_FMTx_DR, zeros are written instead. (value: 1)
     *          - B_0x0: The channel status and user bits are copied into the SPDIFRX_FMTx_DR. (value: 0)
     */
        /** @brief The channel status and user bits are not copied into the SPDIFRX_FMTx_DR, zeros are written instead. */
    constexpr std::uint32_t SPDIFRX_CR_CUMSK_B_0x1 = 1;
        /** @brief The channel status and user bits are copied into the SPDIFRX_FMTx_DR. */
    constexpr std::uint32_t SPDIFRX_CR_CUMSK_B_0x0 = 0;

    /** @brief Mask of preamble type bits<sup>(1)</sup> This bit is set/reset by software. */
    using SPDIFRX_CR_PTMSK = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 9, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: The preamble type bits are not copied into the SPDIFRX_FMTx_DR, zeros are written instead. (value: 1)
     *          - B_0x0: The preamble type bits are copied into the SPDIFRX_FMTx_DR. (value: 0)
     */
        /** @brief The preamble type bits are not copied into the SPDIFRX_FMTx_DR, zeros are written instead. */
    constexpr std::uint32_t SPDIFRX_CR_PTMSK_B_0x1 = 1;
        /** @brief The preamble type bits are copied into the SPDIFRX_FMTx_DR. */
    constexpr std::uint32_t SPDIFRX_CR_PTMSK_B_0x0 = 0;

    /** @brief Control buffer DMA enable for control flow<sup>(1)</sup> This bit is set/reset by software. Note: When this bit is set, the DMA request is made whenever the CSRNE flag is set. */
    using SPDIFRX_CR_CBDMAEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 10, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: DMA mode is enabled for reception of channel status and used data information. (value: 1)
     *          - B_0x0: DMA mode is disabled for reception of channel status and used data information. (value: 0)
     */
        /** @brief DMA mode is enabled for reception of channel status and used data information. */
    constexpr std::uint32_t SPDIFRX_CR_CBDMAEN_B_0x1 = 1;
        /** @brief DMA mode is disabled for reception of channel status and used data information. */
    constexpr std::uint32_t SPDIFRX_CR_CBDMAEN_B_0x0 = 0;

    /** @brief Channel selection<sup>(1)</sup> This bit is set/reset by software. */
    using SPDIFRX_CR_CHSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 11, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: The control flow takes the channel status from channel B. (value: 1)
     *          - B_0x0: The control flow takes the channel status from channel A. (value: 0)
     */
        /** @brief The control flow takes the channel status from channel B. */
    constexpr std::uint32_t SPDIFRX_CR_CHSEL_B_0x1 = 1;
        /** @brief The control flow takes the channel status from channel A. */
    constexpr std::uint32_t SPDIFRX_CR_CHSEL_B_0x0 = 0;

    /** @brief Maximum allowed re-tries during synchronization phase<sup>(1)</sup> */
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

    /** @brief Wait for activity<sup>(1)</sup> This bit is set/reset by software. */
    using SPDIFRX_CR_WFA = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 14, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: The SPDIFRX waits for activity on SPDIFRX_IN line (4 transitions) before performing the synchronization. (value: 1)
     *          - B_0x0: The SPDIFRX does not wait for activity on SPDIFRX_IN line before performing the synchronization. (value: 0)
     */
        /** @brief The SPDIFRX waits for activity on SPDIFRX_IN line (4 transitions) before performing the synchronization. */
    constexpr std::uint32_t SPDIFRX_CR_WFA_B_0x1 = 1;
        /** @brief The SPDIFRX does not wait for activity on SPDIFRX_IN line before performing the synchronization. */
    constexpr std::uint32_t SPDIFRX_CR_WFA_B_0x0 = 0;

    /** @brief SPDIFRX input selection other: reserved */
    using SPDIFRX_CR_INSEL = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 3, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: SPDIFRX_IN1 selected (value: 0)
     *          - B_0x1: SPDIFRX_IN2 selected (value: 1)
     *          - B_0x2: SPDIFRX_IN3 selected (value: 2)
     *          - B_0x3: SPDIFRX_IN4 selected (value: 3)
     */
        /** @brief SPDIFRX_IN1 selected */
    constexpr std::uint32_t SPDIFRX_CR_INSEL_B_0x0 = 0;
        /** @brief SPDIFRX_IN2 selected */
    constexpr std::uint32_t SPDIFRX_CR_INSEL_B_0x1 = 1;
        /** @brief SPDIFRX_IN3 selected */
    constexpr std::uint32_t SPDIFRX_CR_INSEL_B_0x2 = 2;
        /** @brief SPDIFRX_IN4 selected */
    constexpr std::uint32_t SPDIFRX_CR_INSEL_B_0x3 = 3;

    /** @brief Symbol clock enable This bit is set/reset by software. */
    using SPDIFRX_CR_CKSEN = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 20, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x1: The SPDIFRX generates a symbol clock. (value: 1)
     *          - B_0x0: The SPDIFRX does not generate a symbol clock. (value: 0)
     */
        /** @brief The SPDIFRX generates a symbol clock. */
    constexpr std::uint32_t SPDIFRX_CR_CKSEN_B_0x1 = 1;
        /** @brief The SPDIFRX does not generate a symbol clock. */
    constexpr std::uint32_t SPDIFRX_CR_CKSEN_B_0x0 = 0;

    /** @brief Backup symbol clock enable This bit is set/reset by software. */
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
    /** @brief RXNE interrupt enable This bit is set and cleared by software. */
    using SPDIFRX_IMR_RXNEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt is inhibited. (value: 0)
     *          - B_0x1: A SPDIFRX interface interrupt is generated whenever RXNE=1 in the SPDIFRX_SR register. (value: 1)
     */
        /** @brief Interrupt is inhibited. */
    constexpr std::uint32_t SPDIFRX_IMR_RXNEIE_B_0x0 = 0;
        /** @brief A SPDIFRX interface interrupt is generated whenever RXNE=1 in the SPDIFRX_SR register. */
    constexpr std::uint32_t SPDIFRX_IMR_RXNEIE_B_0x1 = 1;

    /** @brief Control buffer ready interrupt enable This bit is set and cleared by software. */
    using SPDIFRX_IMR_CSRNEIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt is inhibited. (value: 0)
     *          - B_0x1: A SPDIFRX interface interrupt is generated whenever CSRNE = 1 in the SPDIFRX_SR register. (value: 1)
     */
        /** @brief Interrupt is inhibited. */
    constexpr std::uint32_t SPDIFRX_IMR_CSRNEIE_B_0x0 = 0;
        /** @brief A SPDIFRX interface interrupt is generated whenever CSRNE = 1 in the SPDIFRX_SR register. */
    constexpr std::uint32_t SPDIFRX_IMR_CSRNEIE_B_0x1 = 1;

    /** @brief Parity error interrupt enable This bit is set and cleared by software. */
    using SPDIFRX_IMR_PERRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt is inhibited. (value: 0)
     *          - B_0x1: A SPDIFRX interface interrupt is generated whenever PERR=1 in the SPDIFRX_SR register. (value: 1)
     */
        /** @brief Interrupt is inhibited. */
    constexpr std::uint32_t SPDIFRX_IMR_PERRIE_B_0x0 = 0;
        /** @brief A SPDIFRX interface interrupt is generated whenever PERR=1 in the SPDIFRX_SR register. */
    constexpr std::uint32_t SPDIFRX_IMR_PERRIE_B_0x1 = 1;

    /** @brief Overrun error interrupt enable This bit is set and cleared by software. */
    using SPDIFRX_IMR_OVRIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt is inhibited. (value: 0)
     *          - B_0x1: A SPDIFRX interface interrupt is generated whenever OVR=1 in the SPDIFRX_SR register. (value: 1)
     */
        /** @brief Interrupt is inhibited. */
    constexpr std::uint32_t SPDIFRX_IMR_OVRIE_B_0x0 = 0;
        /** @brief A SPDIFRX interface interrupt is generated whenever OVR=1 in the SPDIFRX_SR register. */
    constexpr std::uint32_t SPDIFRX_IMR_OVRIE_B_0x1 = 1;

    /** @brief Synchronization block detected interrupt enable This bit is set and cleared by software. */
    using SPDIFRX_IMR_SBLKIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt is inhibited. (value: 0)
     *          - B_0x1: A SPDIFRX interface interrupt is generated whenever SBD = 1 in the SPDIFRX_SR register. (value: 1)
     */
        /** @brief Interrupt is inhibited. */
    constexpr std::uint32_t SPDIFRX_IMR_SBLKIE_B_0x0 = 0;
        /** @brief A SPDIFRX interface interrupt is generated whenever SBD = 1 in the SPDIFRX_SR register. */
    constexpr std::uint32_t SPDIFRX_IMR_SBLKIE_B_0x1 = 1;

    /** @brief Synchronization done This bit is set and cleared by software. */
    using SPDIFRX_IMR_SYNCDIE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Interrupt is inhibited. (value: 0)
     *          - B_0x1: A SPDIFRX interface interrupt is generated whenever SYNCD = 1 in the SPDIFRX_SR register. (value: 1)
     */
        /** @brief Interrupt is inhibited. */
    constexpr std::uint32_t SPDIFRX_IMR_SYNCDIE_B_0x0 = 0;
        /** @brief A SPDIFRX interface interrupt is generated whenever SYNCD = 1 in the SPDIFRX_SR register. */
    constexpr std::uint32_t SPDIFRX_IMR_SYNCDIE_B_0x1 = 1;

    /** @brief Serial interface error interrupt enable This bit is set and cleared by software. */
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
    /** @brief Read data register not empty This bit is set by hardware when a valid data is available into SPDIFRX_FMTx_DR register. This flag is cleared by reading the SPDIFRX_FMTx_DR register. An interrupt is generated if RXNEIE=1 in the SPDIFRX_IMR register. */
    using SPDIFRX_SR_RXNE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Data is not received. (value: 0)
     *          - B_0x1: Received data is ready to be read. (value: 1)
     */
        /** @brief Data is not received. */
    constexpr std::uint32_t SPDIFRX_SR_RXNE_B_0x0 = 0;
        /** @brief Received data is ready to be read. */
    constexpr std::uint32_t SPDIFRX_SR_RXNE_B_0x1 = 1;

    /** @brief Control buffer register not empty This bit is set by hardware when a valid control information is ready. This flag is cleared when reading SPDIFRX_CSR register. An interrupt is generated if CBRDYIE = 1 in the SPDIFRX_IMR register. */
    using SPDIFRX_SR_CSRNE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No control word available on SPDIFRX_CSR register (value: 0)
     *          - B_0x1: A control word is available on SPDIFRX_CSR register. (value: 1)
     */
        /** @brief No control word available on SPDIFRX_CSR register */
    constexpr std::uint32_t SPDIFRX_SR_CSRNE_B_0x0 = 0;
        /** @brief A control word is available on SPDIFRX_CSR register. */
    constexpr std::uint32_t SPDIFRX_SR_CSRNE_B_0x1 = 1;

    /** @brief Parity error This bit is set by hardware when the data and status bits of the sub-frame received contain an odd number of 0 and 1. This flag is cleared by writing a 1 to its corresponding bit on SPDIFRX_IFCR register. An interrupt is generated if PIE = 1 in the SPDIFRX_IMR register. */
    using SPDIFRX_SR_PERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No parity error (value: 0)
     *          - B_0x1: Parity error (value: 1)
     */
        /** @brief No parity error */
    constexpr std::uint32_t SPDIFRX_SR_PERR_B_0x0 = 0;
        /** @brief Parity error */
    constexpr std::uint32_t SPDIFRX_SR_PERR_B_0x1 = 1;

    /** @brief Overrun error This bit is set by hardware when a received data is ready to be transferred in the SPDIFRX_FMTx_DR register while RXNE = 1 and both SPDIFRX_FMTx_DR and RX_BUF are full. This flag is cleared by writing a 1 to its corresponding bit on SPDIFRX_IFCR register. An interrupt is generated if OVRIE=1 in the SPDIFRX_IMR register. Note: When this bit is set, the SPDIFRX_FMTx_DR register content is not lost but the last data received are. */
    using SPDIFRX_SR_OVR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No overrun error (value: 0)
     *          - B_0x1: Overrun error is detected. (value: 1)
     */
        /** @brief No overrun error */
    constexpr std::uint32_t SPDIFRX_SR_OVR_B_0x0 = 0;
        /** @brief Overrun error is detected. */
    constexpr std::uint32_t SPDIFRX_SR_OVR_B_0x1 = 1;

    /** @brief Synchronization block detected This bit is set by hardware when a B preamble is detected. This flag is cleared by writing a 1 to its corresponding bit on SPDIFRX_IFCR register. An interrupt is generated if SBLKIE = 1 in the SPDIFRX_IMR register. */
    using SPDIFRX_SR_SBD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No B preamble is detected. (value: 0)
     *          - B_0x1: B preamble is detected. (value: 1)
     */
        /** @brief No B preamble is detected. */
    constexpr std::uint32_t SPDIFRX_SR_SBD_B_0x0 = 0;
        /** @brief B preamble is detected. */
    constexpr std::uint32_t SPDIFRX_SR_SBD_B_0x1 = 1;

    /** @brief Synchronization done This bit is set by hardware when the initial synchronization phase is properly completed. This flag is cleared by writing a 1 to its corresponding bit on SPDIFRX_IFCR register. An interrupt is generated if SYNCDIE = 1 in the SPDIFRX_IMR register. */
    using SPDIFRX_SR_SYNCD = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: Synchronization is pending. (value: 0)
     *          - B_0x1: Synchronization is completed. (value: 1)
     */
        /** @brief Synchronization is pending. */
    constexpr std::uint32_t SPDIFRX_SR_SYNCD_B_0x0 = 0;
        /** @brief Synchronization is completed. */
    constexpr std::uint32_t SPDIFRX_SR_SYNCD_B_0x1 = 1;

    /** @brief Framing error This bit is set by hardware when an error occurs during data reception: such as preamble not at the expected place, short transition not grouped by pairs. This is set by the hardware only if the synchronization is completed (SYNCD = 1). This flag is cleared by writing SPDIFRXEN to 0. An interrupt is generated if IFEIE=1 in the SPDIFRX_IMR register. */
    using SPDIFRX_SR_FERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 6, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No Manchester violation detected (value: 0)
     *          - B_0x1: Manchester violation detected (value: 1)
     */
        /** @brief No Manchester violation detected */
    constexpr std::uint32_t SPDIFRX_SR_FERR_B_0x0 = 0;
        /** @brief Manchester violation detected */
    constexpr std::uint32_t SPDIFRX_SR_FERR_B_0x1 = 1;

    /** @brief Synchronization error This bit is set by hardware when the synchronization fails due to amount of re-tries for NBTR. This flag is cleared by writing SPDIFRXEN to 0. An interrupt is generated if IFEIE = 1 in the SPDIFRX_IMR register. */
    using SPDIFRX_SR_SERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 7, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No synchronization error is detected. (value: 0)
     *          - B_0x1: Synchronization error is detected. (value: 1)
     */
        /** @brief No synchronization error is detected. */
    constexpr std::uint32_t SPDIFRX_SR_SERR_B_0x0 = 0;
        /** @brief Synchronization error is detected. */
    constexpr std::uint32_t SPDIFRX_SR_SERR_B_0x1 = 1;

    /** @brief Time-out error This bit is set by hardware when the counter TRCNT reaches its max value. It indicates that the time interval between two transitions is too long. It generally indicates that there is no valid signal on SPDIFRX_IN input. This flag is cleared by writing SPDIFRXEN to 0. An interrupt is generated if IFEIE=1 in the SPDIFRX_IMR register. */
    using SPDIFRX_SR_TERR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: No sequence error is detected. (value: 0)
     *          - B_0x1: Sequence error is detected. (value: 1)
     */
        /** @brief No sequence error is detected. */
    constexpr std::uint32_t SPDIFRX_SR_TERR_B_0x0 = 0;
        /** @brief Sequence error is detected. */
    constexpr std::uint32_t SPDIFRX_SR_TERR_B_0x1 = 1;

    /** @brief duration of 5 symbols counted with spdifrx_ker_ck This value represents the amount of spdifrx_ker_ck clock periods contained on a length of 5 consecutive symbols. This value can be used to estimate the S/PDIF symbol rate. Its accuracy is limited by the frequency of spdifrx_ker_ck. For example if the spdifrx_ker_ck is fixed to 84 MHz, and WIDTH5 = 147d. The estimated sampling rate of the S/PDIF stream is: Fs = 5 x F<sub>spdifrx_ker_ck</sub> / (WIDTH5 x 64) ~ 44.6 kHz, so the closest standard sampling rate is 44.1 kHz. Note that WIDTH5 is updated by the hardware when SYNCD goes high, and then every frame. */
    using SPDIFRX_SR_WIDTH5 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 15, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPDIFRX interrupt flag clear register */
    using SPDIFRX_IFCR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0xC, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief clears the parity error flag Writing 1 in this bit clears the flag PERR in the SPDIFRX_SR register. Reading this bit always returns the value 0. */
    using SPDIFRX_IFCR_PERRCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief clears the overrun error flag Writing 1 in this bit clears the flag OVR in the SPDIFRX_SR register. Reading this bit always returns the value 0. */
    using SPDIFRX_IFCR_OVRCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief clears the synchronization block detected flag Writing 1 in this bit clears the flag SBD in the SPDIFRX_SR register. Reading this bit always returns the value 0. */
    using SPDIFRX_IFCR_SBDCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief clears the synchronization done flag Writing 1 in this bit clears the flag SYNCD in the SPDIFRX_SR register. Reading this bit always returns the value 0. */
    using SPDIFRX_IFCR_SYNCDCF = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 5, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPDIFRX data input register */
    using SPDIFRX_FMT0_DR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief data value Contains the 24 received data bits, aligned on D[23] */
    using SPDIFRX_FMT0_DR_DR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief parity error bit Contains a copy of PERR bit if PMSK = 0, otherwise it is forced to 0 */
    using SPDIFRX_FMT0_DR_PE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 24, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief validity bit Contains the received validity bit if VMSK = 0, otherwise it is forced to 0 */
    using SPDIFRX_FMT0_DR_V = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 25, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief user bit Contains the received user bit, if CUMSK = 0, otherwise it is forced to 0 */
    using SPDIFRX_FMT0_DR_U = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 26, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief channel status bit Contains the received channel status bit, if CUMSK = 0, otherwise it is forced to 0 */
    using SPDIFRX_FMT0_DR_C = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 27, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief preamble type These bits indicate the preamble received. Note that if PTMSK = 1, this field is forced to zero */
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
    using SPDIFRX_FMT0_DR_alternate1 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief parity error bit Contains a copy of PERR bit if PMSK = 0, otherwise it is forced to 0 */
    using SPDIFRX_FMT0_DR_alternate1_PE = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief validity bit Contains the received validity bit if VMSK = 0, otherwise it is forced to 0 */
    using SPDIFRX_FMT0_DR_alternate1_V = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 1, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief user bit Contains the received user bit, if CUMSK = 0, otherwise it is forced to 0 */
    using SPDIFRX_FMT0_DR_alternate1_U = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 2, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief channel Status bit Contains the received channel status bit, if CUMSK = 0, otherwise it is forced to 0 */
    using SPDIFRX_FMT0_DR_alternate1_C = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 3, 1, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief preamble type These bits indicate the preamble received. Note that if PTMSK = 1, this field is forced to zero */
    using SPDIFRX_FMT0_DR_alternate1_PT = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 4, 2, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @details Possible values:
     *          - B_0x0: not used (value: 0)
     *          - B_0x1: preamble B received (value: 1)
     *          - B_0x2: preamble M received (value: 2)
     *          - B_0x3: preamble W received (value: 3)
     */
        /** @brief not used */
    constexpr std::uint32_t SPDIFRX_FMT0_DR_alternate1_PT_B_0x0 = 0;
        /** @brief preamble B received */
    constexpr std::uint32_t SPDIFRX_FMT0_DR_alternate1_PT_B_0x1 = 1;
        /** @brief preamble M received */
    constexpr std::uint32_t SPDIFRX_FMT0_DR_alternate1_PT_B_0x2 = 2;
        /** @brief preamble W received */
    constexpr std::uint32_t SPDIFRX_FMT0_DR_alternate1_PT_B_0x3 = 3;

    /** @brief data value Contains the 24 received data bits, aligned on D[23] */
    using SPDIFRX_FMT0_DR_alternate1_DR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 8, 24, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPDIFRX data input register */
    using SPDIFRX_FMT0_DR_alternate2 = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x10, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief data value This field contains the channel B */
    using SPDIFRX_FMT0_DR_alternate2_DRNL1 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief data value This field contains the channel A */
    using SPDIFRX_FMT0_DR_alternate2_DRNL2 = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief SPDIFRX channel status register */
    using SPDIFRX_CSR = ::EmbeddedPP::LowLevel::Register<std::uint32_t, 0x14, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief user data information Bit USR[0] is the oldest value, and comes from channel A, USR[1] comes channel B. So USR[n] bits come from channel A is n is even, otherwise they come from channel B. */
    using SPDIFRX_CSR_USR = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 16, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief channel A status information Bit CS[0] is the oldest value */
    using SPDIFRX_CSR_CS = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 8, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief start of block This bit indicates if the bit CS[0] corresponds to the first bit of a new block */
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
    /** @brief threshold HIGH (THI = 2.5 x UI / T<sub>spdifrx_ker_ck</sub>) This field contains the current threshold HIGH estimation. This value can be used to estimate the sampling rate of the received stream. The accuracy of THI is limited to a period of the spdifrx_ker_ck. The sampling rate can be estimated as follow: Sampling Rate = [2 x THI x T<sub>spdifrx_ker_ck </sub>+/- T<sub>spdifrx_ker_ck</sub>] x 2/5 Note that THI is updated by the hardware when SYNCD goes high, and then every frame. */
    using SPDIFRX_DIR_THI = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 0, 13, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
    /** @brief threshold LOW (TLO = 1.5 x UI / T<sub>spdifrx_ker_ck</sub>) This field contains the current threshold LOW estimation. This value can be used to estimate the sampling rate of the received stream. The accuracy of TLO is limited to a period of the spdifrx_ker_ck. The sampling rate can be estimated as follow: Sampling Rate = [2 x TLO x T<sub>spdifrx_ker_ck </sub>+/- T<sub>spdifrx_ker_ck</sub>] x 2/3 Note that TLO is updated by the hardware when SYNCD goes high, and then every frame. */
    using SPDIFRX_DIR_TLO = ::EmbeddedPP::LowLevel::BitField<std::uint32_t, 16, 13, ::EmbeddedPP::LowLevel::Accessibility::ReadWrite>;
}

#endif
